/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098bd510; end: 1098bd6f7;  */

undefined1 *
FUN_1098bd510(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar2 = (long)*(char *)((long)param_2 + 0x17);
  puVar1 = param_2;
  if (lVar2 < 0) {
    puVar1 = (undefined8 *)*param_2;
    lVar2 = param_2[1];
  }
  func_0x000109d18d1c(param_1 + 0x98,puVar1,lVar2,param_3);
  *(undefined8 *)(param_1 + 0x150) = param_4;
  *(undefined8 *)(param_1 + 0x158) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FUN_1098bc940(param_1 + 0x1e0,param_5);
  *(undefined8 *)(param_1 + 0x220) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 **)(param_1 + 0x268) = param_1 + 0x260;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined ***)(param_1 + 0x260) = &PTR_DAT_110b3f378;
  func_0x000109d1f14c(param_1 + 0x278,0x400);
  param_1[0x4f7] = 9;
  *(undefined2 *)(param_1 + 0x4e8) = 0x65;
  *(undefined8 *)(param_1 + 0x4e0) = 0x72756769666e6f63;
  *(undefined8 *)(param_1 + 0x4f8) = *param_6;
  (**(code **)(param_6[1] + 0x10))(param_1 + 0x500,param_6 + 1);
  return param_1;
}



/* Entry: 1098bd6f8; end: 1098bd78f;  */

long FUN_1098bd6f8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  FUN_1098ba990(&lStack_28);
  FUN_1098b3a34(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1098bd790; end: 1098bd8e7;  */

ulong FUN_1098bd790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x1e0;
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_1098b3b90(lVar3,&uStack_50);
  if (param_1 + 0x1e8 == lVar3) {
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    lVar3 = *(long *)(param_1 + 0x150) + 0x30;
    FUN_1098bbfb0(lVar3,&uStack_40);
    uVar2 = uStack_48;
    uVar1 = uStack_50;
    if ((lVar3 == 0) || (plVar4 = *(long **)(lVar3 + 0x20), plVar4 == (long *)0x0)) {
      uVar5 = 0xffffffff;
    }
    else {
      if (((char)plVar4[2] == '\x01') && (plVar4[1] == *(long *)(*(long *)(param_1 + 0x210) + 0x58))
         ) {
        (**(code **)(*plVar4 + 0x10))(&plStack_58);
        uVar5 = param_1 + 0x1e0;
        FUN_1098bce84(uVar5,uVar1,uVar2,&plStack_58);
        plVar4 = plStack_58;
        plStack_58 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar4 + 0x10))(&plStack_60);
        uVar5 = param_1 + 0x1e0;
        FUN_1098bcdbc(uVar5,uVar1,uVar2,&plStack_60);
        plVar4 = plStack_60;
        plStack_60 = (long *)0x0;
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else {
    uVar5 = (ulong)*(uint *)(lVar3 + 0x30);
  }
  return uVar5;
}



/* Entry: 1098bd8e8; end: 1098bda23;  */

undefined1  [16]
FUN_1098bd8e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  long lStack_50;
  undefined4 uStack_48;
  
  lVar3 = param_1;
  FUN_1098bd790();
  iVar2 = (int)lVar3;
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x138);
      if (-1 < *(char *)(param_1 + 0x14f)) {
        lVar1 = param_1 + 0x138;
      }
      func_0x00010ae06f08(1,4,&UNK_10f586735,&UNK_10f5867d0,0x43,&UNK_10f586839,param_7,param_8,
                          &UNK_10f5869ff,lVar1,param_2);
    }
    lStack_50 = *(long *)(*(long *)(param_1 + 0x1f8) + (long)iVar2 * 8);
    if ((*(byte *)(lStack_50 + 0x88) & 1) == 0) {
      *(undefined1 *)(lStack_50 + 0x88) = 1;
      FUN_1098beca4(param_1 + 0x260,&lStack_50);
      lStack_50 = *(long *)(*(long *)(param_1 + 0x1f8) + (long)iVar2 * 8);
    }
    plVar5 = *(long **)(lStack_50 + 0x68);
    *(undefined1 *)(plVar5 + 1) = 1;
    lStack_50 = param_5;
    uStack_48 = param_6;
    (**(code **)(*plVar5 + 8))(plVar5,param_4);
    FUN_1098afcbc(plVar5 + 2,&lStack_50);
    uVar4 = (ulong)((int)((ulong)(plVar5[3] - plVar5[2]) >> 2) * -0x55555555 - 1);
  }
  auVar6._0_8_ = lVar3 << 0x20 | 0x40000000;
  auVar6._8_8_ = uVar4;
  return auVar6;
}



/* Entry: 1098bda24; end: 1098bdbd7;  */

void FUN_1098bda24(long param_1,long param_2)

{
  int iVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  iVar1 = *(int *)(param_2 + 4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x1f8) + (long)iVar1 * 8);
  lVar2 = lVar3;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x138);
    if (-1 < *(char *)(param_1 + 0x14f)) {
      lVar2 = param_1 + 0x138;
    }
    func_0x00010ae06f08(1,4,&UNK_10f586735,&UNK_10f58685b,0x4d,&UNK_10f5868b1,in_x6,in_x7,
                        &UNK_10f5869ff,lVar2,*(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x20));
    lVar2 = *(long *)(*(long *)(param_1 + 0x1f8) + (long)iVar1 * 8);
  }
  if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x88) = 1;
    lStack_38 = lVar2;
    FUN_1098beca4(param_1 + 0x260,&lStack_38);
  }
  func_0x0001098afdb4(*(undefined8 *)(lVar3 + 0x68),*(undefined4 *)(param_2 + 8),param_1 + 0x1e0);
  return;
}



/* Entry: 1098bdbd8; end: 1098be34f;  */

void FUN_1098bdbd8(long param_1,int param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long **pplVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long **pplVar19;
  long *plVar20;
  long **pplVar21;
  ulong uVar22;
  long lVar23;
  long **pplVar24;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_90;
  long lStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long **pplStack_70;
  
  bVar4 = false;
  lVar11 = param_1 + 0x138;
  do {
    func_0x000109d1a6fc(&pplStack_80);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    *(long ***)(param_1 + 0x10) = pplStack_80;
    pplStack_80 = (long **)0x0;
    lVar10 = param_1 + 0x260;
    func_0x000109d202f4();
    if (lVar10 != 0) {
      if ((!bVar4) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
        lVar23 = *(long *)(param_1 + 0x138);
        if (-1 < *(char *)(param_1 + 0x14f)) {
          lVar23 = lVar11;
        }
        func_0x00010ae06f08(1,4,&UNK_10f586735,&UNK_10f586945,0x88,&UNK_10f58698e,in_x6,in_x7,
                            &UNK_10f5869ff,lVar23);
      }
      uVar13 = *(ulong *)(param_1 + 0x140);
      lVar23 = *(long *)(param_1 + 0x138);
      if (-1 < (char)*(byte *)(param_1 + 0x14f)) {
        uVar13 = (ulong)*(byte *)(param_1 + 0x14f);
        lVar23 = lVar11;
      }
      FUN_1098b5278(&plStack_b0,param_1 + 0x1e0,lVar23,uVar13);
      plVar20 = plStack_a8;
      for (plVar6 = plStack_b0; plVar6 != plVar20; plVar6 = (long *)((long)plVar6 + 4)) {
        lVar23 = *(long *)(*(long *)(param_1 + 0x1f8) + (long)(int)*plVar6 * 8);
        if ((*(long *)(lVar23 + 0x60) != 0) &&
           (*(long *)(lVar23 + 0x60) != *(long *)(lVar23 + 0x58))) {
          if ((*(byte *)(lVar23 + 0x88) & 1) == 0) {
            *(undefined1 *)(lVar23 + 0x88) = 1;
            lStack_90 = lVar23;
            FUN_1098beca4(param_1 + 0x260,&lStack_90);
          }
          *(undefined1 *)(lVar23 + 0x8a) = 1;
          func_0x000109d1b124(&lStack_90);
          plVar7 = *(long **)(lVar23 + 0x50);
          if (plVar7 != (long *)0x0) {
            puVar1 = (ulong *)(plVar7 + 1);
            do {
              uVar13 = *puVar1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
          }
          *(long *)(lVar23 + 0x50) = lStack_90;
        }
      }
      if (plStack_b0 != (long *)0x0) {
        plStack_a8 = plStack_b0;
        __ZdlPv(plStack_b0);
      }
      bVar4 = true;
    }
    func_0x000109d1a768(&pplStack_78);
    if (pplStack_78 != (long **)0x0) {
      FUN_1092b4274(&pplStack_78);
    }
    if (pplStack_80 != (long **)0x0) {
      pplVar9 = pplStack_80 + 1;
      do {
        plVar6 = *pplVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
        if (bVar3) {
          *pplVar9 = (long *)((long)plVar6 - 4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)plVar6 & 0x1fffffffc) == 4) {
        do {
          plVar6 = *pplVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
          if (bVar3) {
            *pplVar9 = (long *)((long)plVar6 - 1U);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((long *)((long)plVar6 - 1U) == (long *)0x0) {
          (*(code *)(*pplStack_80)[1])();
        }
      }
    }
  } while (lVar10 != 0);
  if (bVar4) {
    FUN_1098b7068(&plStack_b0,param_1 + 0x1e0);
    if (plStack_b0 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_b0 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plStack_b0 + 8))();
        }
      }
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x138);
        if (-1 < *(char *)(param_1 + 0x14f)) {
          lVar10 = lVar11;
        }
        func_0x00010ae06f08(1,4,&UNK_10f586735,&UNK_10f586945,0xa6,&UNK_10f5869b3,in_x6,in_x7,
                            &UNK_10f5869ff,lVar10);
      }
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x138);
      if (-1 < *(char *)(param_1 + 0x14f)) {
        lVar10 = lVar11;
      }
      func_0x00010ae06f08(1,4,&UNK_10f586735,&UNK_10f586945,0xa7,&UNK_10f5869d9,in_x6,in_x7,
                          &UNK_10f5869ff,lVar10);
    }
  }
  else if (param_2 == 0) {
    return;
  }
  uVar13 = *(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8);
  if (2 < (int)(uVar13 >> 3)) {
    uVar22 = 2;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x1f8) + uVar22 * 8);
      FUN_1098afe6c(*(undefined8 *)(lVar10 + 0x68),param_1 + 0x1e0,*(undefined8 *)(lVar10 + 0x70));
      uVar22 = uVar22 + 1;
    } while ((uVar13 >> 3 & 0x7fffffff) != uVar22);
  }
  uVar13 = *(ulong *)(param_1 + 0x140);
  lVar10 = *(long *)(param_1 + 0x138);
  if (-1 < (char)*(byte *)(param_1 + 0x14f)) {
    uVar13 = (ulong)*(byte *)(param_1 + 0x14f);
    lVar10 = lVar11;
  }
  FUN_1098c0db4(&plStack_b0,param_1 + 0x1e0,lVar10,uVar13);
  uVar13 = *(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8);
  if (2 < (int)(uVar13 >> 3)) {
    uVar22 = 2;
    do {
      if (*(int *)((long)plStack_b0 + uVar22 * 4) == -1) {
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x1f8) + uVar22 * 8) + 0x48);
        pplStack_78 = *(long ***)(lVar11 + 0x28);
        pplStack_80 = *(long ***)(lVar11 + 0x20);
        lStack_90 = 0;
        lStack_88 = 0;
        __ZNSt3__15mutex4lockEv(param_1 + 0x158);
        plVar6 = (long *)(param_1 + 0x198);
        FUN_1098bee44(plVar6,&pplStack_80);
        if (plVar6 == (long *)0x0) {
          __ZNSt3__15mutex6unlockEv(param_1 + 0x158);
        }
        else {
          lStack_88 = plVar6[5];
          lStack_90 = plVar6[4];
          plVar20 = (long *)plVar6[5];
          plVar6[5] = 0;
          plVar6[4] = 0;
          uVar14 = *(ulong *)(param_1 + 0x1a0);
          uVar12 = plVar6[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar12 = uVar15 & uVar12;
          }
          else if (uVar14 <= uVar12) {
            uVar17 = 0;
            if (uVar14 != 0) {
              uVar17 = uVar12 / uVar14;
            }
            uVar12 = uVar12 - uVar17 * uVar14;
          }
          lVar11 = *plVar6;
          plVar7 = *(long **)(*(long *)(param_1 + 0x198) + uVar12 * 8);
          do {
            plVar16 = plVar7;
            plVar7 = (long *)*plVar16;
          } while ((long *)*plVar16 != plVar6);
          if (plVar16 == (long *)(param_1 + 0x1a8)) {
LAB_1098be164:
            if (lVar11 == 0) {
LAB_1098be198:
              *(undefined8 *)(*(long *)(param_1 + 0x198) + uVar12 * 8) = 0;
              lVar11 = *plVar6;
              goto LAB_1098be1a0;
            }
            uVar17 = *(ulong *)(lVar11 + 8);
            if ((uVar14 & uVar15) == 0) {
              uVar18 = uVar17 & uVar15;
            }
            else {
              uVar18 = uVar17;
              if (uVar14 <= uVar17) {
                uVar18 = 0;
                if (uVar14 != 0) {
                  uVar18 = uVar17 / uVar14;
                }
                uVar18 = uVar17 - uVar18 * uVar14;
              }
            }
            if (uVar18 != uVar12) goto LAB_1098be198;
LAB_1098be1a8:
            if ((uVar14 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar14 <= uVar17) {
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar17 / uVar14;
              }
              uVar17 = uVar17 - uVar15 * uVar14;
            }
            if (uVar17 != uVar12) {
              *(long **)(*(long *)(param_1 + 0x198) + uVar17 * 8) = plVar16;
              lVar11 = *plVar6;
            }
          }
          else {
            uVar17 = plVar16[1];
            if ((uVar14 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar14 <= uVar17) {
              uVar18 = 0;
              if (uVar14 != 0) {
                uVar18 = uVar17 / uVar14;
              }
              uVar17 = uVar17 - uVar18 * uVar14;
            }
            if (uVar17 != uVar12) goto LAB_1098be164;
LAB_1098be1a0:
            if (lVar11 != 0) {
              uVar17 = *(ulong *)(lVar11 + 8);
              goto LAB_1098be1a8;
            }
          }
          *plVar16 = lVar11;
          *plVar6 = 0;
          *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + -1;
          func_0x0001098baa80();
          __ZdlPv(plVar6);
          __ZNSt3__15mutex6unlockEv(param_1 + 0x158);
          if (plVar20 != (long *)0x0) {
            plVar6 = plVar20 + 1;
            do {
              lVar11 = *plVar6;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != (uVar13 >> 3 & 0x7fffffff));
  }
  pplVar9 = &plStack_b0;
  FUN_1098bcefc(param_1 + 0x1e0);
  lVar11 = *(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8);
  if (lVar11 == 0) {
    pplVar21 = (long **)0x0;
    pplVar8 = (long **)0x0;
    pplVar24 = (long **)0x0;
  }
  else {
    pplVar8 = (long **)(lVar11 >> 3);
    if ((ulong)pplVar8 >> 0x3d != 0) {
      FUN_1098bef40();
LAB_1098be2b4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1098be2b8);
      (*pcVar5)();
    }
    FUN_1098bef54();
    pplVar24 = pplVar8 + (long)pplVar9;
    plVar20 = *(long **)(param_1 + 0x200);
    pplVar21 = pplVar8;
    for (plVar6 = *(long **)(param_1 + 0x1f8); plVar6 != plVar20; plVar6 = plVar6 + 1) {
      lVar11 = *plVar6;
      if (pplVar8 < pplVar24) {
        *pplVar8 = (long *)(lVar11 + 0x18);
        pplVar19 = pplVar21;
      }
      else {
        lVar10 = (long)pplVar8 - (long)pplVar21;
        uVar13 = (lVar10 >> 3) + 1;
        if (uVar13 >> 0x3d != 0) {
          FUN_1098bef40();
          goto LAB_1098be2b4;
        }
        uVar22 = (long)pplVar24 - (long)pplVar21 >> 2;
        if (uVar22 <= uVar13) {
          uVar22 = uVar13;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pplVar24 - (long)pplVar21)) {
          uVar22 = 0x1fffffffffffffff;
        }
        FUN_1098bef54();
        pplVar8 = (long **)(uVar22 + lVar10);
        pplVar24 = (long **)(uVar22 + (long)pplVar9 * 8);
        pplVar19 = pplVar8 + -(lVar10 >> 3);
        *pplVar8 = (long *)(lVar11 + 0x18);
        pplVar9 = pplVar21;
        _memcpy(pplVar19,pplVar21,lVar10);
        if (pplVar21 != (long **)0x0) {
          __ZdlPv(pplVar21);
        }
      }
      pplVar8 = pplVar8 + 1;
      pplVar21 = pplVar19;
    }
  }
  pplStack_80 = pplVar21;
  pplStack_78 = pplVar8;
  pplStack_70 = pplVar24;
  (**(code **)(param_1 + 0x4f8))(&pplStack_80,param_1 + 0x4f8);
  if (pplStack_80 != (long **)0x0) {
    pplStack_78 = pplStack_80;
    __ZdlPv();
  }
  if (plStack_b0 != (long *)0x0) {
    plStack_a8 = plStack_b0;
    __ZdlPv();
  }
  return;
}



/* Entry: 1098be350; end: 1098be62f;  */

/* WARNING: Removing unreachable block (ram,0x0001098be438) */

void FUN_1098be350(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_1098c019c;
  puVar5[1] = FUN_1098c03e8;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[0xb] = *param_3;
  puVar5[9] = param_2;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 9;
  FUN_1092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1098be630(puVar5 + 0xc,puVar5[0xb]);
    puVar5[9] = puVar5[0xc];
    plVar7 = (long *)(puVar5[0xc] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[9];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[9];
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0xc];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar5 + 2);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098be554);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098be630; end: 1098beca3;  */

void FUN_1098be630(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lStack_70;
  long *plStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  
  puVar8 = (undefined8 *)0x80;
  __Znwm();
  *puVar8 = FUN_1098bfbb8;
  puVar8[1] = FUN_1098c00c0;
  puVar8[0xe] = param_2;
  FUN_1092ba17c(puVar8 + 2);
  plVar1 = puVar8 + 9;
  lVar11 = puVar8[7];
  if (lVar11 != 0) {
    plVar16 = (long *)(lVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar11;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  *plVar1 = 0;
  func_0x000109d1918c(&plStack_68,param_2 + 0x98);
  puVar3 = (undefined8 *)puVar8[10];
  if (puVar3 < (undefined8 *)puVar8[0xb]) {
    *puVar3 = plStack_68;
    puVar8[10] = puVar3 + 1;
  }
  else {
    plVar16 = plVar1;
    FUN_1098b74c4(plVar1,&plStack_68);
    puVar8[10] = plVar16;
    if (plStack_68 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_68 + 1);
      do {
        uVar9 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar9 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar9 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plStack_68 + 8))();
        }
      }
    }
  }
  uVar9 = param_2 + 0x20;
  puVar8[0xd] = uVar9;
  func_0x000109d197a4();
  if ((uVar9 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0xf) = 0;
    uVar9 = puVar8[0xd];
    lStack_58 = puVar8[3];
    plStack_68 = (long *)0x0;
    puStack_60 = puVar8;
    func_0x000109d197e8(uVar9,&plStack_68);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  lVar11 = puVar8[0xe];
  puVar8[0xc] = puVar8[0xd];
  *(undefined4 *)(lVar11 + 0x18) = 3;
  iVar10 = (int)((ulong)(*(long *)(lVar11 + 0x200) - *(long *)(lVar11 + 0x1f8)) >> 3);
  iVar6 = iVar10 + -1;
  if (iVar10 < 3) {
    iVar6 = 1;
  }
  FUN_1098ba1fc(plVar1,iVar6);
  uVar9 = *(long *)(lVar11 + 0x200) - *(long *)(lVar11 + 0x1f8);
  if (2 < (int)(uVar9 >> 3)) {
    uVar17 = 2;
    do {
      lVar18 = *(long *)(*(long *)(lVar11 + 0x1f8) + uVar17 * 8);
      *(undefined1 *)(lVar18 + 0x8a) = 0;
      lVar12 = *(long *)(lVar18 + 0x90);
      if (lVar12 != 0) {
        plVar16 = (long *)(lVar12 + 0x10);
        do {
          lVar15 = *plVar16;
          if (lVar15 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              func_0x000109d1b4dc(lVar12 + 0x18);
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar15 >> 1 & 1) == 0);
      }
      plStack_68 = *(long **)(lVar18 + 0x50);
      if (plStack_68 != (long *)0x0) {
        plVar16 = plStack_68 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = *plVar16 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar3 = (undefined8 *)puVar8[10];
      if (puVar3 < (undefined8 *)puVar8[0xb]) {
        *puVar3 = plStack_68;
        puVar8[10] = puVar3 + 1;
      }
      else {
        plVar16 = plVar1;
        FUN_1098b74c4(plVar1,&plStack_68);
        puVar8[10] = plVar16;
        if (plStack_68 != (long *)0x0) {
          puVar2 = (ulong *)(plStack_68 + 1);
          do {
            uVar13 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar13 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar13 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plStack_68 + 8))();
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != (uVar9 >> 3 & 0x7fffffff));
  }
  func_0x000109d202f4(puVar8[0xe] + 0x260);
  *(undefined4 *)(lVar11 + 0x18) = 0;
  func_0x000109d19904(puVar8 + 0xc);
  lVar11 = puVar8[9];
  lVar12 = puVar8[10];
  if (lVar11 == lVar12) {
    func_0x000109d1b124(puVar8 + 0xd);
  }
  else {
    lStack_70 = lVar12 - lVar11 >> 3;
    FUN_1098b7954(&plStack_68,&lStack_70);
    plVar16 = (long *)(lStack_58 + 8);
    if (*plVar16 != 0) {
      FUN_1092b4274(plVar16);
    }
    *plVar16 = (long)puStack_60;
    puStack_60 = (undefined8 *)0x0;
    lVar18 = 0;
    do {
      FUN_1098b799c(lStack_58,lVar18,lVar11);
      lVar11 = lVar11 + 8;
      lVar18 = lVar18 + 1;
    } while (lVar11 != lVar12);
    puVar8[0xd] = plStack_68;
    plStack_68 = (long *)0x0;
    if ((puStack_60 != (undefined8 *)0x0) && (FUN_1092b4274(&puStack_60), plStack_68 != (long *)0x0)
       ) {
      puVar2 = (ulong *)(plStack_68 + 1);
      do {
        uVar9 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar9 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar9 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plStack_68 + 8))();
        }
      }
    }
  }
  puVar8[0xc] = puVar8[0xd];
  plVar16 = (long *)(puVar8[0xd] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = *plVar16 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar8[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0xf) = 1;
    lVar11 = puVar8[0xc];
    plVar16 = (long *)(lVar11 + 0x10);
    uVar14 = puVar8[3];
    do {
      lVar12 = *plVar16;
      if (lVar12 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          plStack_68 = (long *)0x0;
          puStack_60 = puVar8;
          lStack_58 = uVar14;
          func_0x000109d1b588(lVar11 + 0x18,&plStack_68);
          *(undefined8 *)(lVar11 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  plVar16 = (long *)puVar8[0xc];
  if (((uint)*(undefined8 *)(puVar8[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar16 != (long *)0x0) {
      puVar2 = (ulong *)(plVar16 + 1);
      do {
        uVar9 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar9 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar9 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar16 + 8))();
        }
      }
    }
    plVar16 = (long *)puVar8[0xd];
    if (plVar16 != (long *)0x0) {
      puVar2 = (ulong *)(plVar16 + 1);
      do {
        uVar9 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar9 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar9 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar16 + 8))();
        }
      }
    }
    plStack_68 = plVar1;
    func_0x0001098b784c(&plStack_68);
    FUN_1092ba100(puVar8 + 2);
    func_0x000109d1a1d0(puVar8 + 2);
    __ZdlPv(puVar8);
    return;
  }
  FUN_1092af97c(plVar16 + 0x12);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1098beb14);
  (*pcVar7)();
}



/* Entry: 1098beca4; end: 1098bedbb;  */

void FUN_1098beca4(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lStack_50;
  code *pcStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  plVar3 = (long *)param_1[2];
  puStack_38 = param_1;
  if (plVar3 == (long *)0x0) {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    *puVar2 = *param_2;
    puVar2[2] = 0x1098bee38;
    pcStack_48 = FUN_1098bedec;
    puStack_40 = puVar2;
    (**(code **)*param_1)(param_1,&pcStack_48);
  }
  else {
    lStack_50 = 0;
    (**(code **)(*plVar3 + 0x28))(plVar3,0,&lStack_50);
    if (lStack_50 != 0) {
      FUN_1092af97c(&lStack_50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1098beda4);
      (*pcVar1)();
    }
    puVar2 = (undefined8 *)0x20;
    __Znwm();
    *puVar2 = *param_2;
    puVar2[2] = FUN_1098bee2c;
    puVar2[3] = plVar3;
    pcStack_48 = FUN_1098bedbc;
    puStack_40 = puVar2;
    (**(code **)*param_1)(param_1,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&lStack_50);
  }
  lStack_50 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_50);
  return;
}



/* Entry: 1098bedbc; end: 1098bedeb;  */

void FUN_1098bedbc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_1098bedec();
                    /* WARNING: Could not recover jumptable at 0x0001098bede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 1098bedec; end: 1098bee2b;  */

void FUN_1098bedec(undefined8 *param_1)

{
  func_0x0001098ac504(*param_1);
  (*(code *)param_1[2])(param_1);
  return;
}



/* Entry: 1098bee2c; end: 1098bee43;  */

void FUN_1098bee2c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1098bee44; end: 1098bef3f;  */

long * FUN_1098bee44(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  func_0x000107c2ac8c(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar7 == plVar4) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1098bef40; end: 1098bef53;  */

/* WARNING: Removing unreachable block (ram,0x0001098bf074) */

void FUN_1098bef40(undefined8 param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *extraout_x8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar5 >> 0x3d == 0) {
    __Znwm((long)puVar5 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar6 = (undefined8 *)0x80;
  __Znwm();
  *puVar6 = FUN_1098c0aa4;
  puVar6[1] = FUN_1098c0cf0;
  FUN_1092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8 = lVar9;
  uVar12 = *param_2;
  puVar6[10] = param_2[1];
  puVar6[9] = uVar12;
  puVar6[0xb] = param_2[2];
  puVar6[0xc] = puVar5;
  *(undefined1 *)(puVar6 + 0xd) = 0;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar7 = puVar6 + 0xc;
  FUN_1092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_1098bf26c(puVar6 + 0xe,puVar6 + 9);
    puVar6[0xc] = puVar6[0xe];
    plVar8 = (long *)(puVar6[0xe] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0xf) = 1;
      lVar9 = puVar6[0xc];
      plVar8 = (long *)(lVar9 + 0x10);
      uStack_68 = puVar6[3];
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_78 = 0;
            puStack_70 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_78);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0xc];
    if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0xe];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar6 + 2);
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    FUN_1092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098bf190);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098bef54; end: 1098bef87;  */

/* WARNING: Removing unreachable block (ram,0x0001098bf074) */

void FUN_1098bef54(ulong param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *extraout_x8;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_1098c0aa4;
  puVar5[1] = FUN_1098c0cf0;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8 = lVar8;
  uVar11 = *param_2;
  puVar5[10] = param_2[1];
  puVar5[9] = uVar11;
  puVar5[0xb] = param_2[2];
  puVar5[0xc] = param_1;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  puVar6 = puVar5 + 0xc;
  FUN_1092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1098bf26c(puVar5 + 0xe,puVar5 + 9);
    puVar5[0xc] = puVar5[0xe];
    plVar7 = (long *)(puVar5[0xe] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xf) = 1;
      lVar8 = puVar5[0xc];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_58 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_68 = 0;
            puStack_60 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_68);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xc];
    if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0xe];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar5 + 2);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098bf190);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098bef88; end: 1098bf26b;  */

/* WARNING: Removing unreachable block (ram,0x0001098bf074) */

void FUN_1098bef88(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_1098c0aa4;
  puVar5[1] = FUN_1098c0cf0;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  uVar11 = *param_3;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar11;
  puVar5[0xb] = param_3[2];
  puVar5[0xc] = param_2;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  puVar6 = puVar5 + 0xc;
  FUN_1092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1098bf26c(puVar5 + 0xe,puVar5 + 9);
    puVar5[0xc] = puVar5[0xe];
    plVar7 = (long *)(puVar5[0xe] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xf) = 1;
      lVar8 = puVar5[0xc];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xc];
    if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0xe];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar5 + 2);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098bf190);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098bf26c; end: 1098bf833;  */

void FUN_1098bf26c(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *param_2;
  plVar6 = (long *)0x78;
  __Znwm();
  *plVar6 = (long)FUN_1098c04ac;
  plVar6[1] = (long)FUN_1098c09d8;
  plVar6[0xc] = (long)param_2;
  plVar6[0xd] = lVar11;
  FUN_1092ba17c(plVar6 + 2);
  lVar9 = plVar6[7];
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar9;
  uVar10 = lVar11 + 0x20;
  plVar6[10] = uVar10;
  func_0x000109d197a4();
  if ((uVar10 & 1) == 0) {
    *(undefined1 *)(plVar6 + 0xe) = 0;
    plVar7 = (long *)plVar6[10];
    puStack_70 = (undefined8 *)plVar6[3];
    puStack_80 = (undefined8 *)0x0;
    plStack_78 = plVar6;
    func_0x000109d197e8(plVar7,&puStack_80);
    if (((ulong)plVar7 & 1) == 0) goto LAB_1098bf31c;
LAB_1098bf6cc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_1098bf31c:
    lVar9 = plVar6[0xc];
    lVar11 = plVar6[0xd];
    plVar6[9] = plVar6[10];
    plVar7 = *(long **)(lVar11 + 0xa8);
    plStack_78 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
    if (plVar7 == (long *)0x0) {
      pcStack_60 = *(code **)(lVar9 + 8);
      puStack_58 = (undefined8 *)CONCAT71(puStack_58._1_7_,*(undefined1 *)(lVar9 + 0x10));
      puVar8 = (undefined8 *)0xc8;
      __Znwm();
      puVar8[2] = 0;
      puVar8[1] = 0x200000006;
      *(undefined2 *)(puVar8 + 3) = 4;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = puVar8 + 3;
      puVar8[0x12] = 0;
      *(undefined2 *)(puVar8 + 0x13) = 0;
      *puVar8 = &PTR_DAT_110b180c0;
      puStack_80 = puVar8 + 0x14;
      puVar8[0x16] = puStack_50;
      puVar8[0x15] = puStack_58;
      puVar8[0x14] = pcStack_60;
      *(undefined1 *)(puVar8 + 0x17) = 1;
      puVar8[0x18] = 0;
      pcStack_68 = FUN_1098bf864;
      plStack_78 = puVar8;
      puStack_70 = puVar8;
    }
    else {
      lStack_88 = 0;
      (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_88);
      if (lStack_88 != 0) {
        FUN_1092af97c(&lStack_88);
        goto LAB_1098bf714;
      }
      pcStack_60 = *(code **)(lVar9 + 8);
      puStack_58 = (undefined8 *)CONCAT71(puStack_58._1_7_,*(undefined1 *)(lVar9 + 0x10));
      puVar8 = (undefined8 *)0xd0;
      __Znwm();
      puVar8[2] = 0;
      puVar8[1] = 0x200000006;
      *(undefined2 *)(puVar8 + 3) = 4;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = puVar8 + 3;
      puVar8[0x12] = 0;
      *(undefined2 *)(puVar8 + 0x13) = 0;
      *puVar8 = &PTR_FUN_110b18088;
      puVar8[0x16] = puStack_50;
      puVar8[0x15] = puStack_58;
      puVar8[0x14] = pcStack_60;
      *(undefined1 *)(puVar8 + 0x17) = 1;
      puVar8[0x18] = 0;
      puVar8[0x19] = plVar7;
      if (plStack_78 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_78 + 1);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_78 + 8))();
          }
        }
      }
      plStack_78 = puVar8;
      if (puStack_70 != (undefined8 *)0x0) {
        FUN_1092b4274(&puStack_70);
      }
      pcStack_68 = FUN_1098bf834;
      puStack_80 = puVar8 + 0x14;
      puStack_70 = puVar8;
      __ZNSt13exception_ptrD1Ev(&lStack_88);
    }
    puVar4 = puStack_80;
    puVar8 = (undefined8 *)(lVar11 + 0x98);
    if (puStack_80[4] != 0) {
      FUN_1092b4274();
    }
    puVar4[4] = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    pcStack_60 = pcStack_68;
    puStack_58 = puStack_80;
    puStack_50 = puVar8;
    (**(code **)*puVar8)(puVar8,&pcStack_60);
    plVar7 = plStack_78;
    plVar6[0xb] = (long)plStack_78;
    plStack_78 = (long *)0x0;
    if ((puStack_70 != (undefined8 *)0x0) && (FUN_1092b4274(&puStack_70), plStack_78 != (long *)0x0)
       ) {
      puVar1 = (ulong *)(plStack_78 + 1);
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plStack_78 + 8))();
        }
      }
    }
    plVar6[10] = (long)plVar7;
    plVar7 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(plVar6[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar6 + 0xe) = 1;
      lVar9 = plVar6[10];
      plVar7 = (long *)(lVar9 + 0x10);
      puVar8 = (undefined8 *)plVar6[3];
      do {
        lVar11 = *plVar7;
        if (lVar11 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puStack_80 = (undefined8 *)0x0;
            plVar7 = (long *)(lVar9 + 0x18);
            plStack_78 = plVar6;
            puStack_70 = puVar8;
            func_0x000109d1b588(plVar7,&puStack_80);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            goto LAB_1098bf6cc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    plVar7 = (long *)plVar6[10];
    if (((uint)*(undefined8 *)(plVar6[10] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)plVar6[0xb];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(plVar6 + 2);
      func_0x000109d19904(plVar6 + 9);
      func_0x000109d1a1d0(plVar6 + 2);
      __ZdlPv(plVar6);
      plVar7 = plVar6;
      goto LAB_1098bf6cc;
    }
  }
  FUN_1092af97c(plVar7 + 0x12);
LAB_1098bf714:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1098bf718);
  (*pcVar5)();
}



/* Entry: 1098bf834; end: 1098bf863;  */

void FUN_1098bf834(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_1098bf864();
                    /* WARNING: Could not recover jumptable at 0x0001098bf860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 1098bf864; end: 1098bfa6f;  */

void FUN_1098bf864(long *param_1)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = param_1[4];
  param_1[4] = 0;
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 0x18) = 4;
  lStack_60 = lVar7;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    lVar1 = *(long *)(lVar8 + 0x138);
    if (-1 < *(char *)(lVar8 + 0x14f)) {
      lVar1 = lVar8 + 0x138;
    }
    pcVar2 = " with reset";
    if ((char)param_1[1] == '\0') {
      pcVar2 = "";
    }
    func_0x00010ae06f08(1,4,&UNK_10f586735,&UNK_10f586a08,0x6e,&UNK_10f586a71,in_x6,in_x7,
                        &UNK_10f5869ff,lVar1,pcVar2);
  }
  uVar5 = *(long *)(lVar8 + 0x200) - *(long *)(lVar8 + 0x1f8);
  if (2 < (int)(uVar5 >> 3)) {
    uVar10 = 2;
    do {
      plVar9 = *(long **)(*(long *)(lVar8 + 0x1f8) + uVar10 * 8);
      plVar6 = plVar9;
      if ((char)param_1[1] == '\x01') {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        plVar6 = *(long **)(*(long *)(lVar8 + 0x1f8) + uVar10 * 8);
      }
      *(undefined1 *)((long)plVar9 + 0x8a) = 1;
      if ((*(byte *)(plVar6 + 0x11) & 1) == 0) {
        *(undefined1 *)(plVar6 + 0x11) = 1;
        plStack_58 = plVar6;
        FUN_1098beca4(lVar8 + 0x260,&plStack_58);
      }
      uVar10 = uVar10 + 1;
    } while ((uVar5 >> 3 & 0x7fffffff) != uVar10);
  }
  FUN_1098bdbd8(lVar8,0);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  plVar6 = (long *)(lVar7 + 0x10);
  do {
    lVar8 = *plVar6;
    if (lVar8 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        func_0x000109d1b4dc(lVar7 + 0x18);
        goto LAB_1098bf9e4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_1098bf9e4:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_60 = 0;
      if ((lVar7 != 0) && (FUN_1092b4274(&lStack_60,lVar7), lStack_60 != 0)) {
        FUN_1092b4274(&lStack_60);
      }
      return;
    }
  } while( true );
}



/* Entry: 1098bfa70; end: 1098bfbb7;  */

undefined8 * FUN_1098bfa70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b18088;
  if (param_1[0x18] != 0) {
    FUN_1092b4274();
  }
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1098bfbb8; end: 1098c00bf;  */

void FUN_1098bfbb8(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar1 = (long *)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    lVar12 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    *(undefined4 *)(lVar12 + 0x18) = 3;
    iVar7 = (int)((ulong)(*(long *)(lVar12 + 0x200) - *(long *)(lVar12 + 0x1f8)) >> 3);
    iVar5 = iVar7 + -1;
    if (iVar7 < 3) {
      iVar5 = 1;
    }
    FUN_1098ba1fc(plVar1,iVar5);
    uVar8 = *(long *)(lVar12 + 0x200) - *(long *)(lVar12 + 0x1f8);
    if (2 < (int)(uVar8 >> 3)) {
      uVar14 = 2;
      do {
        lVar15 = *(long *)(*(long *)(lVar12 + 0x1f8) + uVar14 * 8);
        *(undefined1 *)(lVar15 + 0x8a) = 0;
        lVar9 = *(long *)(lVar15 + 0x90);
        if (lVar9 != 0) {
          plVar13 = (long *)(lVar9 + 0x10);
          do {
            lVar11 = *plVar13;
            if (lVar11 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = 2;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                func_0x000109d1b4dc(lVar9 + 0x18);
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar11 >> 1 & 1) == 0);
        }
        plStack_68 = *(long **)(lVar15 + 0x50);
        if (plStack_68 != (long *)0x0) {
          plVar13 = plStack_68 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar13 = *(long **)(param_1 + 0x50);
        if (plVar13 < *(long **)(param_1 + 0x58)) {
          *plVar13 = (long)plStack_68;
          *(long **)(param_1 + 0x50) = plVar13 + 1;
        }
        else {
          plVar13 = plVar1;
          FUN_1098b74c4(plVar1,&plStack_68);
          *(long **)(param_1 + 0x50) = plVar13;
          if (plStack_68 != (long *)0x0) {
            puVar2 = (ulong *)(plStack_68 + 1);
            do {
              uVar10 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar10 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                  *puVar2 = uVar10 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar10 - 1 == 0) {
                (**(code **)(*plStack_68 + 8))();
              }
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != (uVar8 >> 3 & 0x7fffffff));
    }
    func_0x000109d202f4(*(long *)(param_1 + 0x70) + 0x260);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    func_0x000109d19904(param_1 + 0x60);
    lVar12 = *(long *)(param_1 + 0x48);
    lVar9 = *(long *)(param_1 + 0x50);
    if (lVar12 == lVar9) {
      func_0x000109d1b124(param_1 + 0x68);
    }
    else {
      lStack_70 = lVar9 - lVar12 >> 3;
      FUN_1098b7954(&plStack_68,&lStack_70);
      plVar13 = (long *)(lStack_58 + 8);
      if (*plVar13 != 0) {
        FUN_1092b4274(plVar13);
      }
      *plVar13 = lStack_60;
      lStack_60 = 0;
      lVar15 = 0;
      do {
        FUN_1098b799c(lStack_58,lVar15,lVar12);
        lVar12 = lVar12 + 8;
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar9);
      *(long **)(param_1 + 0x68) = plStack_68;
      plStack_68 = (long *)0x0;
      if ((lStack_60 != 0) && (FUN_1092b4274(&lStack_60), plStack_68 != (long *)0x0)) {
        puVar2 = (ulong *)(plStack_68 + 1);
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_68 + 8))();
          }
        }
      }
    }
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x68);
    plVar13 = (long *)(*(long *)(param_1 + 0x68) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar12 = *(long *)(param_1 + 0x60);
      plVar13 = (long *)(lVar12 + 0x10);
      lStack_58 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar9 = *plVar13;
        if (lVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plStack_68 = (long *)0x0;
            lStack_60 = param_1;
            func_0x000109d1b588(lVar12 + 0x18,&plStack_68);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  plVar13 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if (plVar13 != (long *)0x0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
    }
    plVar13 = *(long **)(param_1 + 0x68);
    if (plVar13 != (long *)0x0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
    }
    plStack_68 = plVar1;
    func_0x0001098b784c(&plStack_68);
    FUN_1092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
    __ZdlPv(param_1);
    return;
  }
  FUN_1092af97c(plVar13 + 0x12);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098bff98);
  (*pcVar6)();
}



/* Entry: 1098c00c0; end: 1098c019b;  */

void FUN_1098c00c0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  lStack_28 = param_1 + 0x48;
  func_0x0001098b784c(&lStack_28);
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1098c019c; end: 1098c03e7;  */

void FUN_1098c019c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_1098be630(param_1 + 0x60,*(undefined8 *)(param_1 + 0x58));
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098c032c);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_1092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c03e8; end: 1098c04ab;  */

void FUN_1098c03e8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c04ac; end: 1098c09d7;  */

void FUN_1098c04ac(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  long lStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    lVar9 = param_1[0xc];
    lVar8 = param_1[0xd];
    param_1[9] = param_1[10];
    plVar10 = *(long **)(lVar8 + 0xa8);
    plStack_80 = (long *)0x0;
    puStack_78 = (undefined8 *)0x0;
    if (plVar10 == (long *)0x0) {
      pcStack_60 = *(code **)(lVar9 + 8);
      puStack_58 = (undefined8 *)CONCAT71(puStack_58._1_7_,*(undefined1 *)(lVar9 + 0x10));
      puVar6 = (undefined8 *)0xc8;
      __Znwm();
      puVar6[2] = 0;
      puVar6[1] = 0x200000006;
      *(undefined2 *)(puVar6 + 3) = 4;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = puVar6 + 3;
      puVar6[0x12] = 0;
      *(undefined2 *)(puVar6 + 0x13) = 0;
      *puVar6 = &PTR_DAT_110b180c0;
      puStack_88 = puVar6 + 0x14;
      puVar6[0x16] = puStack_50;
      puVar6[0x15] = puStack_58;
      puVar6[0x14] = pcStack_60;
      *(undefined1 *)(puVar6 + 0x17) = 1;
      puVar6[0x18] = 0;
      pcStack_70 = FUN_1098bf864;
      plStack_80 = puVar6;
      puStack_78 = puVar6;
    }
    else {
      lStack_68 = 0;
      (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_68);
      if (lStack_68 != 0) {
        FUN_1092af97c(&lStack_68);
        goto LAB_1098c08d8;
      }
      pcStack_60 = *(code **)(lVar9 + 8);
      puStack_58 = (undefined8 *)CONCAT71(puStack_58._1_7_,*(undefined1 *)(lVar9 + 0x10));
      puVar6 = (undefined8 *)0xd0;
      __Znwm();
      puVar6[2] = 0;
      puVar6[1] = 0x200000006;
      *(undefined2 *)(puVar6 + 3) = 4;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = puVar6 + 3;
      puVar6[0x12] = 0;
      *(undefined2 *)(puVar6 + 0x13) = 0;
      *puVar6 = &PTR_FUN_110b18088;
      puVar6[0x16] = puStack_50;
      puVar6[0x15] = puStack_58;
      puVar6[0x14] = pcStack_60;
      *(undefined1 *)(puVar6 + 0x17) = 1;
      puVar6[0x18] = 0;
      puVar6[0x19] = plVar10;
      if (plStack_80 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_80 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_80 + 8))();
          }
        }
      }
      plStack_80 = puVar6;
      if (puStack_78 != (undefined8 *)0x0) {
        FUN_1092b4274(&puStack_78);
      }
      pcStack_70 = FUN_1098bf834;
      puStack_88 = puVar6 + 0x14;
      puStack_78 = puVar6;
      __ZNSt13exception_ptrD1Ev(&lStack_68);
    }
    puVar4 = puStack_88;
    puVar6 = (undefined8 *)(lVar8 + 0x98);
    if (puStack_88[4] != 0) {
      FUN_1092b4274();
    }
    puVar4[4] = puStack_78;
    puStack_78 = (undefined8 *)0x0;
    pcStack_60 = pcStack_70;
    puStack_58 = puStack_88;
    puStack_50 = puVar6;
    (**(code **)*puVar6)(puVar6,&pcStack_60);
    plVar10 = plStack_80;
    param_1[0xb] = (long)plStack_80;
    plStack_80 = (long *)0x0;
    if ((puStack_78 != (undefined8 *)0x0) && (FUN_1092b4274(&puStack_78), plStack_80 != (long *)0x0)
       ) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
    param_1[10] = (long)plVar10;
    plVar10 = plVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(param_1[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      lVar9 = param_1[10];
      plVar10 = (long *)(lVar9 + 0x10);
      puVar6 = (undefined8 *)param_1[3];
      do {
        lVar8 = *plVar10;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puStack_88 = (undefined8 *)0x0;
            plVar10 = (long *)(lVar9 + 0x18);
            plStack_80 = param_1;
            puStack_78 = puVar6;
            func_0x000109d1b588(plVar10,&puStack_88);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            goto LAB_1098c0870;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar10 = (long *)param_1[10];
  if (((uint)*(undefined8 *)(param_1[10] + 0x10) >> 5 & 1) == 0) {
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)param_1[0xb];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    FUN_1092ba100(param_1 + 2);
    func_0x000109d19904(param_1 + 9);
    func_0x000109d1a1d0(param_1 + 2);
    __ZdlPv(param_1);
    plVar10 = param_1;
LAB_1098c0870:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_1092af97c(plVar10 + 0x12);
LAB_1098c08d8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1098c08dc);
  (*pcVar5)();
}



/* Entry: 1098c09d8; end: 1098c0aa3;  */

void FUN_1098c09d8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    func_0x000109d19904(param_1 + 0x48);
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c0aa4; end: 1098c0cef;  */

void FUN_1098c0aa4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_1098bf26c(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar5 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar8 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098c0c34);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_1092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c0cf0; end: 1098c0db3;  */

void FUN_1098c0cf0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x70);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c0db4; end: 1098c0eb7;  */

void FUN_1098c0db4(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long alStack_38 [3];
  
  FUN_1098b552c(alStack_38);
  uVar8 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18);
  FUN_1092cd11c(param_1,(long)uVar8 >> 3,&UNK_10e009f04);
  iVar4 = 0;
  uVar8 = uVar8 >> 3;
  *(int *)(param_1 + 3) = (int)uVar8;
  lVar2 = *param_1;
  do {
    iVar3 = (int)uVar8;
    uVar6 = uVar8;
    if (iVar4 != iVar3) {
      uVar5 = (ulong)iVar4;
      lVar7 = *param_1;
      do {
        uVar6 = uVar5;
        if ((*(ulong *)(alStack_38[0] + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0) break;
        *(int *)(lVar7 + uVar5 * 4) = (int)uVar5;
        uVar5 = uVar5 + 1;
        uVar6 = uVar8;
      } while (iVar3 != (int)uVar5);
    }
    uVar5 = (ulong)iVar3;
    iVar4 = (int)uVar6;
    do {
      uVar5 = uVar5 - 1;
      if (uVar5 - (long)iVar4 == -1) {
        *(int *)((long)param_1 + 0x1c) = iVar4;
        if (alStack_38[0] != 0) {
          __ZdlPv();
        }
        return;
      }
      uVar1 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar1;
    } while ((*(ulong *)(alStack_38[0] + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0);
    *(uint *)(param_1 + 3) = uVar1;
    *(int *)(lVar2 + (long)(int)uVar1 * 4) = iVar4;
    iVar4 = iVar4 + 1;
  } while( true );
}



/* Entry: 1098c0eb8; end: 1098c11d3;  */

undefined8 *
FUN_1098c0eb8(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **appuStack_100 [2];
  char cStack_e9;
  undefined1 uStack_e1;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x12);
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  func_0x000104c4f768(appuStack_100,uVar1 + 5,&uStack_e1);
  pppuVar2 = (undefined8 ***)appuStack_100[0];
  if (-1 < cStack_e9) {
    pppuVar2 = appuStack_100;
  }
  if (uVar1 != 0) {
    plVar5 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar5 = param_2;
    }
    _memmove(pppuVar2,plVar5,uVar1);
  }
  *(undefined4 *)((long)pppuVar2 + uVar1) = 0x6e6f7a20;
  *(undefined2 *)((undefined4 *)((long)pppuVar2 + uVar1) + 1) = 0x65;
  plVar5 = param_3 + 0xb;
  uStack_a0 = param_3[9];
  uStack_98 = param_3[10];
  appuStack_90[0] = &PTR_FUN_110ae9180;
  (**(code **)(*plVar5 + 0x10))(appuStack_90,plVar5);
  param_3[10] = &UNK_1053a6a3c;
  (**(code **)*plVar5)(plVar5);
  *plVar5 = (long)&PTR_FUN_110ae9180;
  pcStack_e0 = FUN_1098c1d4c;
  ppuStack_d8 = &PTR_DAT_110b18138;
  puStack_d0 = param_1;
  FUN_1098bd510(param_1 + 2,appuStack_100,&uStack_a0,param_4,param_1,&pcStack_e0);
  (*(code *)*ppuStack_d8)(&ppuStack_d8);
  FUN_1092ba41c(&uStack_a0);
  if (cStack_e9 < '\0') {
    __ZdlPv(appuStack_100[0]);
  }
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xab] = 0x32aaaba7;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xca] = 0;
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  puVar4[2] = &PTR_FUN_110ae9180;
  uVar3 = param_3[1];
  *puVar4 = *param_3;
  puVar4[1] = uVar3;
  plVar7 = param_3 + 2;
  (**(code **)(*plVar7 + 0x10))(puVar4 + 2,plVar7);
  param_3[1] = &UNK_1053a6a3c;
  plVar5 = plVar7;
  (**(code **)*plVar7)();
  *plVar7 = (long)&PTR_FUN_110ae9180;
  param_1[0xcb] = puVar4;
  param_1[0xcc] = 0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    puVar4 = (undefined8 *)param_1[0x29];
    if (-1 < *(char *)((long)param_1 + 0x15f)) {
      puVar4 = param_1 + 0x29;
    }
    plVar5 = (long *)0x1;
    func_0x00010ae06f08(1,4,&UNK_10f586aa6,&UNK_10f586b2a,0x21,&UNK_10f586b7b,param_7,param_8,
                        &UNK_10f586144,puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = (undefined8 *)0x0;
  FUN_1098ba788(param_1 + 0xcb);
  FUN_1098ba7b0(param_1 + 0xb6);
  FUN_1098b9008(param_1 + 0xb4);
  __ZNSt3__15mutexD1Ev(param_1 + 0xab);
  FUN_1098b8074(param_1 + 0xa9);
  func_0x0001098ba888(param_1 + 2);
  __Unwind_Resume();
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  puVar4[2] = &PTR_FUN_110ae9180;
  uVar3 = puVar6[1];
  *puVar4 = *puVar6;
  puVar4[1] = uVar3;
  plVar7 = puVar6 + 2;
  (**(code **)(*plVar7 + 0x10))(puVar4 + 2,plVar7);
  puVar6[1] = &UNK_1053a6a3c;
  (**(code **)*plVar7)(plVar7);
  *plVar7 = (long)&PTR_FUN_110ae9180;
  puVar6 = (undefined8 *)plVar5[0xcb];
  plVar5[0xcb] = (long)puVar4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1092ba41c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return puVar6;
  }
  return (undefined8 *)0x0;
}



/* Entry: 1098c11d4; end: 1098c125f;  */

void FUN_1098c11d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar3 = (undefined8 *)0x48;
  __Znwm();
  puVar3[2] = &PTR_FUN_110ae9180;
  uVar1 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar1;
  plVar4 = param_2 + 2;
  (**(code **)(*plVar4 + 0x10))(puVar3 + 2,plVar4);
  param_2[1] = &UNK_1053a6a3c;
  (**(code **)*plVar4)(plVar4);
  *plVar4 = (long)&PTR_FUN_110ae9180;
  lVar2 = *(long *)(param_1 + 0x658);
  *(long *)(param_1 + 0x658) = (long)puVar3;
  if (lVar2 != 0) {
    FUN_1092ba41c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1098c1260; end: 1098c12ff;  */

void FUN_1098c1260(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = **(undefined8 **)(param_1 + 0x658);
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lStack_38 = param_1;
  FUN_1098c1300(uVar5,&lStack_38);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 1098c1300; end: 1098c1627;  */

/* WARNING: Removing unreachable block (ram,0x0001098c13f0) */

void FUN_1098c1300(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0x80;
  __Znwm();
  *puVar6 = FUN_1098c2268;
  puVar6[1] = FUN_1098c24f4;
  FUN_1092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  uVar10 = *param_3;
  puVar6[10] = param_3[1];
  puVar6[9] = uVar10;
  uVar10 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  puVar6[0xb] = uVar10;
  puVar6[0xc] = param_2;
  *(undefined1 *)(puVar6 + 0xd) = 0;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar7 = puVar6 + 0xc;
  FUN_1092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_1098c1628(puVar6 + 0xe,puVar6 + 9);
    puVar6[0xc] = puVar6[0xe];
    plVar8 = (long *)(puVar6[0xe] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0xf) = 1;
      lVar9 = puVar6[0xc];
      plVar8 = (long *)(lVar9 + 0x10);
      uStack_38 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0xc];
    if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0xe];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar6 + 2);
      plVar8 = (long *)puVar6[0xb];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    FUN_1092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1098c1544);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1098c1628; end: 1098c1c93;  */

void FUN_1098c1628(long *param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar16 = *param_2;
  puVar6 = (undefined8 *)0x88;
  __Znwm();
  *puVar6 = FUN_1098c1fd8;
  puVar6[1] = FUN_1098c21a8;
  puVar6[0xe] = param_2;
  puVar6[0xf] = lVar16;
  FUN_1092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  puVar21 = puVar6 + 10;
  *puVar21 = 0;
  puVar6[0xb] = 0;
  plVar7 = (long *)param_2[1];
  puVar6[9] = puVar21;
  plVar13 = *(long **)(lVar16 + 0x1f0);
  if (plVar13 != (long *)(lVar16 + 0x1f8)) {
    do {
      lVar9 = plVar13[6];
      lVar19 = *(long *)(*(long *)(lVar16 + 0x208) + (long)(int)lVar9 * 8);
      uVar23 = *(ulong *)(lVar19 + 0x60);
      if ((uVar23 != 0) && (uVar23 != *(ulong *)(lVar19 + 0x58))) {
        lVar11 = plVar13[4];
        lVar15 = plVar13[5];
        puVar10 = (undefined8 *)*puVar21;
        puVar8 = puVar21;
        if (puVar10 == (undefined8 *)0x0) {
LAB_1098c1738:
          __ZNSt3__15mutex4lockEv(uVar23 + 0x558);
          plVar14 = *(long **)(uVar23 + 0x548);
          plVar17 = *(long **)(uVar23 + 0x550);
          if (plVar17 != (long *)0x0) {
            plVar1 = plVar17 + 1;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plStack_a8 = plVar14;
          plStack_a0 = plVar17;
          __ZNSt3__15mutex6unlockEv(uVar23 + 0x558);
          puVar10 = (undefined8 *)*puVar21;
          puVar8 = puVar21;
          while (puVar22 = puVar8, puVar10 != (undefined8 *)0x0) {
            while (puVar8 = puVar10, (ulong)puVar8[4] <= uVar23) {
              if (uVar23 <= (ulong)puVar8[4]) goto LAB_1098c1810;
              puVar10 = (undefined8 *)puVar8[1];
              if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
                puVar22 = puVar8 + 1;
                goto LAB_1098c17ac;
              }
            }
            puVar10 = (undefined8 *)*puVar8;
          }
LAB_1098c17ac:
          puVar10 = (undefined8 *)0x38;
          __Znwm();
          puVar10[4] = uVar23;
          puVar10[5] = plVar14;
          puVar10[6] = plVar17;
          plStack_a8 = (long *)0x0;
          plStack_a0 = (long *)0x0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = puVar8;
          *puVar22 = puVar10;
          puVar8 = puVar10;
          if (*(long *)puVar6[9] != 0) {
            puVar6[9] = *(long *)puVar6[9];
            puVar8 = (undefined8 *)*puVar22;
          }
          func_0x000107c27d40(puVar6[10],puVar8);
          puVar6[0xb] = puVar6[0xb] + 1;
          puVar8 = puVar10;
          plVar17 = plStack_a0;
LAB_1098c1810:
          if (plVar17 != (long *)0x0) {
            plVar14 = plVar17 + 1;
            do {
              lVar12 = *plVar14;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *plVar14 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        else {
          do {
            lVar12 = 8;
            if (uVar23 <= (ulong)puVar10[4]) {
              lVar12 = 0;
              puVar8 = puVar10;
            }
            puVar10 = *(undefined8 **)((long)puVar10 + lVar12);
          } while (puVar10 != (undefined8 *)0x0);
          if ((puVar8 == puVar21) || (uVar23 < (ulong)puVar8[4])) goto LAB_1098c1738;
        }
        if ((undefined8 *)puVar8[5] != (undefined8 *)0x0) {
          FUN_1098b3480(&lStack_88,*(undefined8 *)puVar8[5],lVar11,lVar15,
                        *(undefined8 *)(lVar19 + 0x70),1);
          lVar19 = lStack_88;
          if (lStack_88 != lStack_80) {
            lVar18 = plVar7[3];
            lVar20 = *(long *)(*plVar7 + 0x40);
            lVar12 = *(long *)(puVar8[5] + 0x18);
            lVar15 = lStack_80 - lStack_88 >> 3;
            FUN_1098af46c(&plStack_a8,lVar15);
            lVar11 = 0;
            lStack_68 = lVar20 + (long)(int)lVar9 * 0x38;
            cStack_90 = '\x01';
            do {
              lVar20 = *(long *)(lVar19 + lVar11 * 8);
              lVar9 = 0;
              if (-1 < lVar20) {
                lVar9 = lVar12 + lVar20;
              }
              plStack_a8[lVar11] = lVar9;
              lVar11 = lVar11 + 1;
            } while (lVar15 != lVar11);
            lStack_70 = lVar18;
            FUN_1098af634(&lStack_70,0);
            func_0x0001098af560();
            if ((cStack_90 == '\x01') && (plStack_a8 != (long *)0x0)) {
              plStack_a0 = plStack_a8;
              __ZdlPv();
            }
          }
          if (lStack_88 != 0) {
            lStack_80 = lStack_88;
            __ZdlPv(lStack_88);
          }
        }
      }
      plVar17 = (long *)plVar13[1];
      plVar14 = plVar13;
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar14[2];
          bVar5 = (long *)*plVar13 != plVar14;
          plVar14 = plVar13;
        } while (bVar5);
      }
      else {
        do {
          plVar13 = plVar17;
          plVar17 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
    } while (plVar13 != (long *)(lVar16 + 0x1f8));
    plVar7 = (long *)param_2[1];
  }
  uVar23 = *(ulong *)(lVar16 + 0x150);
  lVar9 = *(long *)(lVar16 + 0x148);
  if (-1 < (char)*(byte *)(lVar16 + 0x15f)) {
    uVar23 = (ulong)*(byte *)(lVar16 + 0x15f);
    lVar9 = lVar16 + 0x148;
  }
  FUN_1098b417c(puVar6 + 0xd,plVar7,lVar9,uVar23,lVar16 + 0x5b0,lVar16 + 0x1f0);
  puVar6[0xc] = puVar6[0xd];
  plVar7 = (long *)(puVar6[0xd] + 8);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x10) = 0;
    lVar9 = puVar6[0xc];
    plVar7 = (long *)(lVar9 + 0x10);
    uStack_98 = puVar6[3];
    do {
      lVar16 = *plVar7;
      if (lVar16 == 0) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plStack_a8 = (long *)0x0;
          plStack_a0 = puVar6;
          func_0x000109d1b588(lVar9 + 0x18,&plStack_a8);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar16 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar6[0xc];
  if (((uint)*(undefined8 *)(puVar6[0xc] + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098c1b44);
    (*pcVar4)();
  }
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar23 = *puVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar23 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar23 & 0x1fffffffc) == 4) {
      do {
        uVar23 = *puVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar23 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar23 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plVar7 = (long *)puVar6[0xd];
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar23 = *puVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar23 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar23 & 0x1fffffffc) == 4) {
      do {
        uVar23 = *puVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar23 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar23 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  lVar9 = *(long *)(puVar6[0xf] + 0x640);
  FUN_1098b4ee4(*(undefined8 *)(puVar6[0xe] + 8),lVar9,*(long *)(puVar6[0xf] + 0x648) - lVar9 >> 2);
  FUN_1098c1c94(puVar6[0xf],puVar6[0xe] + 8);
  FUN_1098c1f98(*puVar21);
  FUN_1092ba100(puVar6 + 2);
  func_0x000109d1a1d0(puVar6 + 2);
  __ZdlPv(puVar6);
  return;
}



/* Entry: 1098c1c94; end: 1098c1d4b;  */

void FUN_1098c1c94(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x558);
  plVar7 = *(long **)(param_1 + 0x550);
  *(undefined8 *)(param_1 + 0x548) = uVar2;
  *(undefined8 *)(param_1 + 0x550) = uVar3;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x558);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 1098c1d4c; end: 1098c1ebf;  */

void FUN_1098c1d4c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  lStack_88 = param_1[1];
  lStack_90 = *param_1;
  lStack_80 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar8 = *(long *)(param_2 + 0x10);
  puVar4 = (undefined8 *)0xd8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_FUN_110b180f8;
  FUN_1098b3540(puVar5,&lStack_90,lVar8 + 0x1f0);
  *(undefined8 **)(lVar8 + 0x5a0) = puVar5;
  plVar7 = *(long **)(lVar8 + 0x5a8);
  *(undefined8 **)(lVar8 + 0x5a8) = puVar4;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lStack_48 = lStack_88;
  lStack_50 = lStack_90;
  lStack_40 = lStack_80;
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_90 = 0;
  FUN_1098b3c44(lVar8 + 0x5b0,&lStack_50);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  FUN_1098b4c9c(&uStack_70,*(undefined8 *)(lVar8 + 0x5a0),lVar8 + 0x1f0);
  if (*(long *)(lVar8 + 0x640) != 0) {
    *(long *)(lVar8 + 0x648) = *(long *)(lVar8 + 0x640);
    __ZdlPv();
    *(undefined8 *)(lVar8 + 0x640) = 0;
    *(undefined8 *)(lVar8 + 0x648) = 0;
    *(undefined8 *)(lVar8 + 0x650) = 0;
  }
  *(undefined8 *)(lVar8 + 0x648) = uStack_68;
  *(undefined8 *)(lVar8 + 0x640) = uStack_70;
  *(undefined8 *)(lVar8 + 0x650) = uStack_60;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  return;
}



/* Entry: 1098c1ec0; end: 1098c1ecf;  */

void FUN_1098c1ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b180f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1098c1ed0; end: 1098c1eef;  */

void FUN_1098c1ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b180f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c1ef0; end: 1098c1f77;  */

void FUN_1098c1ef0(long param_1)

{
  long lStack_28;
  
  func_0x0001098b288c(param_1 + 200);
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  FUN_1098b3a34(param_1 + 0x70,*(undefined8 *)(param_1 + 0x78));
  lStack_28 = param_1 + 0x58;
  FUN_1098b337c(&lStack_28);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  return;
}



/* Entry: 1098c1f78; end: 1098c1f97;  */

void FUN_1098c1f78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098c1f98; end: 1098c1fd7;  */

void FUN_1098c1f98(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1098c1f98(*param_1);
    FUN_1098c1f98(param_1[1]);
    FUN_1098b8074(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1098c1fd8; end: 1098c21a7;  */

void FUN_1098c1fd8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x640);
    FUN_1098b4ee4(*(undefined8 *)(*(long *)(param_1 + 0x70) + 8),lVar6,
                  *(long *)(*(long *)(param_1 + 0x78) + 0x648) - lVar6 >> 2);
    FUN_1098c1c94(*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 0x70) + 8);
    FUN_1098c1f98(*(undefined8 *)(param_1 + 0x50));
    FUN_1092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098c20e4);
  (*pcVar4)();
}



/* Entry: 1098c21a8; end: 1098c2267;  */

void FUN_1098c21a8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  FUN_1098c1f98(*(undefined8 *)(param_1 + 0x50));
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c2268; end: 1098c24f3;  */

void FUN_1098c2268(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_1098c1628(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar6 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar9 = *(long *)(param_1 + 0x60);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1098c2430);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  FUN_1092ba100(param_1 + 0x10);
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c24f4; end: 1098c25ef;  */

void FUN_1098c24f4(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098c25f0; end: 1098c25fb;  */

/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445928) */
/* WARNING: Removing unreachable block (ram,0x000109445930) */
/* WARNING: Removing unreachable block (ram,0x0001094459b0) */
/* WARNING: Removing unreachable block (ram,0x0001094459bc) */
/* WARNING: Removing unreachable block (ram,0x0001094459dc) */
/* WARNING: Removing unreachable block (ram,0x000109445950) */
/* WARNING: Removing unreachable block (ram,0x000109445958) */
/* WARNING: Removing unreachable block (ram,0x000109445ad8) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

uint * FUN_1098c25f0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_7b;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  __ZSt9terminatev();
  puVar5 = &uStack_80;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_80 = 0x8000;
  uStack_7c = 0x20;
  uStack_7b = 0;
  uStack_77 = 0xffffffff000000;
  FUN_1098c26ac();
  lVar3 = *param_2;
  *param_2 = (long)puVar5;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar5);
  FUN_1098c26d8(&uStack_80,param_1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar5 = (uint *)*param_1;
  if ((param_1[1] == 0) || ((byte)*puVar5 == 0x7d)) {
    return puVar5;
  }
  puVar2 = (uint *)((long)puVar5 + param_1[1]);
  if ((long)puVar2 - (long)puVar5 < 2) {
    if (puVar5 == puVar2) {
LAB_109445bc8:
      return puVar5;
    }
  }
  else {
    uVar10 = *(byte *)((long)puVar5 + 1) - 0x3c;
    if (uVar10 < 0x23 && (1L << ((ulong)uVar10 & 0x3f) & 0x400000005U) != 0) {
      bVar9 = 0;
      goto LAB_109445820;
    }
  }
  bVar9 = (byte)*puVar5;
LAB_109445820:
  uVar10 = 0;
  puVar6 = puVar2;
  puVar7 = puVar8;
  do {
    switch(bVar9) {
    case 0x20:
    case 0x2b:
      uVar10 = 0xc00;
      if (bVar9 != 0x20) {
        uVar10 = 0x800;
      }
      *puVar8 = *puVar8 & 0xfffff3ff | uVar10;
      goto code_r0x000109445908;
    default:
      bVar9 = (byte)*puVar5;
      if (bVar9 == 0x7d) {
        return puVar5;
      }
      puVar7 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar9 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar5 + (long)puVar7);
      if ((long)puVar2 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar9 == 0x7b) goto LAB_109445c10;
      bVar9 = *pbVar1;
      if (bVar9 == 0x3c) {
        uVar11 = 8;
      }
      else if (bVar9 == 0x5e) {
        uVar11 = 0x18;
      }
      else {
        if (bVar9 != 0x3e) goto LAB_109445bf8;
        uVar11 = 0x10;
      }
      if (uVar10 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar8);
      *puVar8 = *puVar8 & 0xffffffc7 | uVar11;
      uVar10 = 1;
      puVar6 = puVar5;
      puVar5 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      goto LAB_109445bf8;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      if (5 < uVar10) goto LAB_109445bf8;
      puVar6 = puVar2;
      puVar7 = puVar8;
      FUN_109445c1c();
      uVar10 = 6;
      break;
    case 0x30:
      if (3 < uVar10) goto LAB_109445bf8;
      goto code_r0x000109445c04;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar10) goto LAB_109445bf8;
      puVar7 = puVar8 + 2;
      puVar6 = puVar2;
      FUN_109445cb8();
      *puVar8 = *puVar8 & 0xffffff3f | (int)puVar6 << 6;
      uVar10 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar10 != 0) goto LAB_109445bf8;
      uVar10 = 0;
      if (bVar9 == 0x3e) {
        uVar10 = 0x10;
      }
      uVar11 = 0x18;
      if (bVar9 != 0x5e) {
        uVar11 = uVar10;
      }
      uVar10 = 8;
      if (bVar9 != 0x3c) {
        uVar10 = uVar11;
      }
      *puVar8 = *puVar8 & 0xffffffc7 | uVar10;
      puVar5 = (uint *)((long)puVar5 + 1);
      uVar10 = 1;
      break;
    case 0x3f:
      uVar10 = *puVar8 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x41:
      *puVar8 = *puVar8 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar8 = *puVar8 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *puVar8 = *puVar8 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar8 = *puVar8 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar8 = *puVar8 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      goto LAB_109445bf8;
    case 0x58:
      *puVar8 = *puVar8 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      uVar10 = *puVar8 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x73:
      uVar10 = *puVar8 & 0xfffffff8 | 2;
code_r0x000109445bc0:
      *puVar8 = uVar10;
      return (uint *)((long)puVar5 + 1);
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar5 == puVar2) {
      return puVar5;
    }
    bVar9 = (byte)*puVar5;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar4 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar5 = (uint *)(puVar4 + 1);
  if (puVar5 != puVar6) {
    FUN_109445cb8();
    *puVar7 = *puVar7 & 0xfffffcff | (int)puVar6 << 8;
    return puVar5;
  }
  puVar5 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar5 = *puVar5 & 0xfffc7fff | (int)puVar7 << 0xf;
  if (puVar7 != (uint *)0x0) {
    if (puVar7 == (uint *)0x1) {
      *(byte *)(puVar5 + 1) = (byte)*puVar6;
      *(undefined2 *)((long)puVar5 + 5) = 0;
      return puVar5;
    }
    puVar8 = (uint *)0x0;
    do {
      *(byte *)((long)puVar5 + ((ulong)puVar8 & 3) + 4) = *(byte *)((long)puVar6 + (long)puVar8);
      puVar8 = (uint *)((long)puVar8 + 1);
    } while (puVar7 != puVar8);
  }
  return puVar5;
}



/* Entry: 1098c25fc; end: 1098c26ab;  */

/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445928) */
/* WARNING: Removing unreachable block (ram,0x000109445930) */
/* WARNING: Removing unreachable block (ram,0x0001094459b0) */
/* WARNING: Removing unreachable block (ram,0x0001094459bc) */
/* WARNING: Removing unreachable block (ram,0x0001094459dc) */
/* WARNING: Removing unreachable block (ram,0x000109445950) */
/* WARNING: Removing unreachable block (ram,0x000109445958) */
/* WARNING: Removing unreachable block (ram,0x000109445ad8) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

uint * FUN_1098c25fc(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_6b;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = &uStack_70;
  puVar8 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_70 = 0x8000;
  uStack_6c = 0x20;
  uStack_6b = 0;
  uStack_67 = 0xffffffff000000;
  FUN_1098c26ac();
  lVar3 = *param_2;
  *param_2 = (long)puVar5;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar5);
  FUN_1098c26d8(&uStack_70,param_1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar5 = (uint *)*param_1;
  if ((param_1[1] == 0) || ((byte)*puVar5 == 0x7d)) {
    return puVar5;
  }
  puVar2 = (uint *)((long)puVar5 + param_1[1]);
  if ((long)puVar2 - (long)puVar5 < 2) {
    if (puVar5 == puVar2) {
LAB_109445bc8:
      return puVar5;
    }
  }
  else {
    uVar10 = *(byte *)((long)puVar5 + 1) - 0x3c;
    if (uVar10 < 0x23 && (1L << ((ulong)uVar10 & 0x3f) & 0x400000005U) != 0) {
      bVar9 = 0;
      goto LAB_109445820;
    }
  }
  bVar9 = (byte)*puVar5;
LAB_109445820:
  uVar10 = 0;
  puVar6 = puVar2;
  puVar7 = puVar8;
  do {
    switch(bVar9) {
    case 0x20:
    case 0x2b:
      uVar10 = 0xc00;
      if (bVar9 != 0x20) {
        uVar10 = 0x800;
      }
      *puVar8 = *puVar8 & 0xfffff3ff | uVar10;
      goto code_r0x000109445908;
    default:
      bVar9 = (byte)*puVar5;
      if (bVar9 == 0x7d) {
        return puVar5;
      }
      puVar7 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar9 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar5 + (long)puVar7);
      if ((long)puVar2 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar9 == 0x7b) goto LAB_109445c10;
      bVar9 = *pbVar1;
      if (bVar9 == 0x3c) {
        uVar11 = 8;
      }
      else if (bVar9 == 0x5e) {
        uVar11 = 0x18;
      }
      else {
        if (bVar9 != 0x3e) goto LAB_109445bf8;
        uVar11 = 0x10;
      }
      if (uVar10 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar8);
      *puVar8 = *puVar8 & 0xffffffc7 | uVar11;
      uVar10 = 1;
      puVar6 = puVar5;
      puVar5 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      goto LAB_109445bf8;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      if (5 < uVar10) goto LAB_109445bf8;
      puVar6 = puVar2;
      puVar7 = puVar8;
      FUN_109445c1c();
      uVar10 = 6;
      break;
    case 0x30:
      if (3 < uVar10) goto LAB_109445bf8;
      goto code_r0x000109445c04;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar10) goto LAB_109445bf8;
      puVar7 = puVar8 + 2;
      puVar6 = puVar2;
      FUN_109445cb8();
      *puVar8 = *puVar8 & 0xffffff3f | (int)puVar6 << 6;
      uVar10 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar10 != 0) goto LAB_109445bf8;
      uVar10 = 0;
      if (bVar9 == 0x3e) {
        uVar10 = 0x10;
      }
      uVar11 = 0x18;
      if (bVar9 != 0x5e) {
        uVar11 = uVar10;
      }
      uVar10 = 8;
      if (bVar9 != 0x3c) {
        uVar10 = uVar11;
      }
      *puVar8 = *puVar8 & 0xffffffc7 | uVar10;
      puVar5 = (uint *)((long)puVar5 + 1);
      uVar10 = 1;
      break;
    case 0x3f:
      uVar10 = *puVar8 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x41:
      *puVar8 = *puVar8 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar8 = *puVar8 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *puVar8 = *puVar8 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar8 = *puVar8 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar8 = *puVar8 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      goto LAB_109445bf8;
    case 0x58:
      *puVar8 = *puVar8 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      uVar10 = *puVar8 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x73:
      uVar10 = *puVar8 & 0xfffffff8 | 2;
code_r0x000109445bc0:
      *puVar8 = uVar10;
      return (uint *)((long)puVar5 + 1);
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar5 == puVar2) {
      return puVar5;
    }
    bVar9 = (byte)*puVar5;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar4 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar5 = (uint *)(puVar4 + 1);
  if (puVar5 != puVar6) {
    FUN_109445cb8();
    *puVar7 = *puVar7 & 0xfffffcff | (int)puVar6 << 8;
    return puVar5;
  }
  puVar5 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar5 = *puVar5 & 0xfffc7fff | (int)puVar7 << 0xf;
  if (puVar7 != (uint *)0x0) {
    if (puVar7 == (uint *)0x1) {
      *(byte *)(puVar5 + 1) = (byte)*puVar6;
      *(undefined2 *)((long)puVar5 + 5) = 0;
      return puVar5;
    }
    puVar8 = (uint *)0x0;
    do {
      *(byte *)((long)puVar5 + ((ulong)puVar8 & 3) + 4) = *(byte *)((long)puVar6 + (long)puVar8);
      puVar8 = (uint *)((long)puVar8 + 1);
    } while (puVar7 != puVar8);
  }
  return puVar5;
}



/* Entry: 1098c26ac; end: 1098c26d7;  */

/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445928) */
/* WARNING: Removing unreachable block (ram,0x000109445930) */
/* WARNING: Removing unreachable block (ram,0x0001094459b0) */
/* WARNING: Removing unreachable block (ram,0x0001094459bc) */
/* WARNING: Removing unreachable block (ram,0x0001094459dc) */
/* WARNING: Removing unreachable block (ram,0x000109445950) */
/* WARNING: Removing unreachable block (ram,0x000109445958) */
/* WARNING: Removing unreachable block (ram,0x000109445ad8) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

uint * FUN_1098c26ac(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (uint *)*param_2;
  if ((param_2[1] == 0) || ((byte)*puVar2 == 0x7d)) {
    return puVar2;
  }
  puVar6 = (uint *)((long)puVar2 + param_2[1]);
  if ((long)puVar6 - (long)puVar2 < 2) {
    if (puVar2 == puVar6) {
LAB_109445bc8:
      return puVar2;
    }
  }
  else {
    uVar8 = *(byte *)((long)puVar2 + 1) - 0x3c;
    if (uVar8 < 0x23 && (1L << ((ulong)uVar8 & 0x3f) & 0x400000005U) != 0) {
      bVar7 = 0;
      goto LAB_109445820;
    }
  }
  bVar7 = (byte)*puVar2;
LAB_109445820:
  uVar8 = 0;
  puVar4 = puVar6;
  puVar5 = param_1;
  do {
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      uVar8 = 0xc00;
      if (bVar7 != 0x20) {
        uVar8 = 0x800;
      }
      *param_1 = *param_1 & 0xfffff3ff | uVar8;
      goto code_r0x000109445908;
    default:
      bVar7 = (byte)*puVar2;
      if (bVar7 == 0x7d) {
        return puVar2;
      }
      puVar5 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar7 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar2 + (long)puVar5);
      if ((long)puVar6 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar7 == 0x7b) goto LAB_109445c10;
      bVar7 = *pbVar1;
      if (bVar7 == 0x3c) {
        uVar9 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar9 = 0x18;
      }
      else {
        if (bVar7 != 0x3e) goto LAB_109445bf8;
        uVar9 = 0x10;
      }
      if (uVar8 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_1);
      *param_1 = *param_1 & 0xffffffc7 | uVar9;
      uVar8 = 1;
      puVar4 = puVar2;
      puVar2 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      goto LAB_109445bf8;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      if (5 < uVar8) goto LAB_109445bf8;
      puVar4 = puVar6;
      puVar5 = param_1;
      FUN_109445c1c();
      uVar8 = 6;
      break;
    case 0x30:
      if (3 < uVar8) goto LAB_109445bf8;
      goto code_r0x000109445c04;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar8) goto LAB_109445bf8;
      puVar5 = param_1 + 2;
      puVar4 = puVar6;
      FUN_109445cb8();
      *param_1 = *param_1 & 0xffffff3f | (int)puVar4 << 6;
      uVar8 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar8 != 0) goto LAB_109445bf8;
      uVar8 = 0;
      if (bVar7 == 0x3e) {
        uVar8 = 0x10;
      }
      uVar9 = 0x18;
      if (bVar7 != 0x5e) {
        uVar9 = uVar8;
      }
      uVar8 = 8;
      if (bVar7 != 0x3c) {
        uVar8 = uVar9;
      }
      *param_1 = *param_1 & 0xffffffc7 | uVar8;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 1;
      break;
    case 0x3f:
      uVar8 = *param_1 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x41:
      *param_1 = *param_1 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *param_1 = *param_1 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *param_1 = *param_1 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *param_1 = *param_1 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *param_1 = *param_1 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      goto LAB_109445bf8;
    case 0x58:
      *param_1 = *param_1 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      uVar8 = *param_1 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x73:
      uVar8 = *param_1 & 0xfffffff8 | 2;
code_r0x000109445bc0:
      *param_1 = uVar8;
      return (uint *)((long)puVar2 + 1);
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar2 == puVar6) {
      return puVar2;
    }
    bVar7 = (byte)*puVar2;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
code_r0x000109445c04:
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar3 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar2 = (uint *)(puVar3 + 1);
  if (puVar2 != puVar4) {
    FUN_109445cb8();
    *puVar5 = *puVar5 & 0xfffffcff | (int)puVar4 << 8;
    return puVar2;
  }
  puVar2 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar2 = *puVar2 & 0xfffc7fff | (int)puVar5 << 0xf;
  if (puVar5 != (uint *)0x0) {
    if (puVar5 == (uint *)0x1) {
      *(byte *)(puVar2 + 1) = (byte)*puVar4;
      *(undefined2 *)((long)puVar2 + 5) = 0;
      return puVar2;
    }
    puVar6 = (uint *)0x0;
    do {
      *(byte *)((long)puVar2 + ((ulong)puVar6 & 3) + 4) = *(byte *)((long)puVar4 + (long)puVar6);
      puVar6 = (uint *)((long)puVar6 + 1);
    } while (puVar5 != puVar6);
  }
  return puVar2;
}



/* Entry: 1098c26d8; end: 1098c29df;  */

/* WARNING: Possible PIC construction at 0x0001098c2750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098c2754) */

ulong * FUN_1098c26d8(ulong *param_1,ulong *param_2,undefined8 *param_3,undefined8 param_4,
                     ulong *param_5)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 *unaff_x19;
  ulong *puVar19;
  ulong *unaff_x20;
  undefined8 uVar20;
  ulong *unaff_x21;
  long lVar21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar22;
  undefined1 auStack_1c0 [384];
  ulong uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  puVar11 = &stack0xfffffffffffffff0;
  if ((*param_1 & 0x3c0) == 0) {
    puVar8 = (ulong *)*param_3;
    uVar9 = *param_2;
    uVar13 = param_3[3];
    puVar12 = param_1;
  }
  else {
    uStack_40 = *param_1;
    uStack_38 = param_1[1];
    uVar13 = uStack_40;
    uVar2 = (uint)uStack_40;
    unaff_x22 = uStack_40 & 0xffffffff;
    uVar6 = (uint)uStack_40 >> 6 & 3;
    uStack_40 = uVar13;
    if (uVar6 != 0) {
      FUN_1094472f0(uVar6,param_1 + 2,param_3);
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar6);
    }
    uVar6 = uVar2 >> 8 & 3;
    if (uVar6 != 0) {
      FUN_1094472f0(uVar6,param_1 + 4,param_3);
      uStack_38 = CONCAT44(uVar6,(undefined4)uStack_38);
    }
    puVar8 = (ulong *)*param_3;
    uVar9 = *param_2;
    uVar13 = param_3[3];
    unaff_x30 = 0x1098c2754;
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    puVar12 = puVar3;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    unaff_x29 = puVar11;
  }
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x10);
  puVar7 = puVar12;
  if ((*puVar12 & 7) == 3) {
    puVar11 = *(undefined1 **)((long)register0x00000008 + -0x10);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
    puVar4 = (undefined1 *)register0x00000008;
    puVar19 = puVar8;
    puVar12 = *(ulong **)((long)register0x00000008 + -0x18);
    puVar8 = *(ulong **)((long)register0x00000008 + -0x28);
  }
  else {
    if (uVar9 != 0) {
      uVar14 = uVar9;
      _strlen();
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
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
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar6 = *(uint *)((long)puVar12 + 0xc);
      uVar13 = uVar14;
      if ((-1 < (int)uVar6) && (uVar6 < uVar14)) {
        *(ulong *)((long)register0x00000008 + -400) = uVar14;
        *(ulong *)((long)register0x00000008 + -0x188) = (ulong)uVar6;
        *(ulong *)((long)register0x00000008 + -0x180) = uVar9;
        *(undefined1 **)((long)register0x00000008 + -0x178) =
             (undefined1 *)((long)register0x00000008 + -0x188);
        *(undefined1 **)((long)register0x00000008 + -0x170) =
             (undefined1 *)((long)register0x00000008 + -400);
        FUN_109446370(uVar9,uVar14,(undefined1 *)((long)register0x00000008 + -0x180));
        uVar13 = *(ulong *)((long)register0x00000008 + -400);
      }
      uVar6 = (uint)*puVar12 & 7;
      if (uVar6 == 1) {
        *(undefined1 **)((long)register0x00000008 + -0x180) =
             (undefined1 *)((long)register0x00000008 + -0x160);
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0x100;
        *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
        *(code **)((long)register0x00000008 + -0x168) = FUN_10944665c;
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
        FUN_109446194((undefined1 *)((long)register0x00000008 + -0x180),uVar9,uVar14);
        uVar13 = *(long *)((long)register0x00000008 + -0x178) +
                 *(long *)((long)register0x00000008 + -0x60);
      }
      else if ((uint)puVar12[1] != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
        FUN_109446e58(uVar9,uVar13,(undefined1 *)((long)register0x00000008 + -0x180));
      }
      *(bool *)((long)register0x00000008 + -0x180) = uVar6 == 1;
      *(ulong *)((long)register0x00000008 + -0x178) = uVar9;
      *(ulong *)((long)register0x00000008 + -0x170) = uVar14;
      *(ulong *)((long)register0x00000008 + -0x168) = uVar9;
      *(ulong *)((long)register0x00000008 + -0x160) = uVar13;
      puVar7 = puVar8;
      puVar19 = puVar12;
      FUN_109446280();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        return puVar7;
      }
      ___stack_chk_fail();
      *(ulong *)((long)register0x00000008 + -0x1c0) = uVar9;
      *(ulong *)((long)register0x00000008 + -0x1b8) = uVar14;
      *(ulong **)((long)register0x00000008 + -0x1b0) = puVar8;
      *(ulong **)((long)register0x00000008 + -0x1a8) = puVar12;
      *(undefined1 **)((long)register0x00000008 + -0x1a0) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x198) = FUN_109446194;
      uVar14 = puVar7[1];
      uVar9 = uVar14 + 1;
      if (puVar7[2] < uVar9) {
        (*(code *)puVar7[3])(puVar7);
        uVar14 = puVar7[1];
        uVar9 = uVar14 + 1;
      }
      puVar7[1] = uVar9;
      *(undefined1 *)(*puVar7 + uVar14) = 0x22;
      puVar12 = (ulong *)((long)puVar19 + uVar13);
      do {
        *(ulong **)((long)register0x00000008 + -0x1d8) = puVar12;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x1c8) = 0;
        func_0x000109446880(puVar19,(long)puVar12 - (long)puVar19,
                            (undefined1 *)((long)register0x00000008 + -0x1d8));
        FUN_109446adc(puVar7,puVar19,*(undefined8 *)((long)register0x00000008 + -0x1d8));
        puVar19 = *(ulong **)((long)register0x00000008 + -0x1d0);
        if (puVar19 == (ulong *)0x0) break;
        func_0x00010944667c(puVar7,(undefined1 *)((long)register0x00000008 + -0x1d8));
      } while (puVar19 != puVar12);
      uVar9 = puVar7[1];
      uVar13 = uVar9 + 1;
      if (puVar7[2] < uVar13) {
        (*(code *)puVar7[3])(puVar7);
        uVar9 = puVar7[1];
        uVar13 = uVar9 + 1;
      }
      puVar7[1] = uVar13;
      *(undefined1 *)(*puVar7 + uVar9) = 0x22;
      return puVar7;
    }
    puVar19 = (ulong *)&UNK_10f586b91;
    uVar22 = 0x1098c280c;
    FUN_1099a5aa4();
    uVar20 = 0;
  }
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong **)(puVar4 + -0x28) = puVar8;
  *(undefined8 *)(puVar4 + -0x20) = uVar20;
  *(ulong **)(puVar4 + -0x18) = puVar12;
  *(undefined1 **)(puVar4 + -0x10) = puVar11;
  *(undefined8 *)(puVar4 + -8) = uVar22;
  *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = uVar9;
  lVar1 = 0;
  do {
    lVar21 = lVar1;
    lVar1 = lVar21 + 1;
    bVar5 = 0xf < uVar14;
    uVar14 = uVar14 >> 4;
  } while (bVar5);
  *(ulong *)(puVar4 + -0x88) = uVar9;
  *(int *)(puVar4 + -0x80) = (int)lVar1;
  if (puVar7 == (ulong *)0x0) {
    uVar14 = puVar19[1];
    uVar15 = puVar19[2];
    puVar8 = puVar19;
    puVar12 = puVar7;
    if (uVar15 < uVar14 + lVar1 + 2) {
      (*(code *)puVar19[3])();
      uVar14 = puVar19[1];
      uVar15 = puVar19[2];
      puVar12 = puVar7;
    }
    uVar10 = uVar14 + 1;
    if (uVar15 < uVar10) {
      puVar8 = puVar19;
      (*(code *)puVar19[3])();
      uVar14 = puVar19[1];
      uVar10 = uVar14 + 1;
    }
    puVar19[1] = uVar10;
    *(undefined1 *)(*puVar19 + uVar14) = 0x30;
    uVar15 = puVar19[1];
    uVar14 = uVar15 + 1;
    if (puVar19[2] < uVar14) {
      puVar8 = puVar19;
      (*(code *)puVar19[3])();
      uVar15 = puVar19[1];
      uVar14 = uVar15 + 1;
    }
    puVar19[1] = uVar14;
    *(undefined1 *)(*puVar19 + uVar15) = 0x78;
    uVar14 = puVar19[1];
    puVar17 = (ulong *)puVar19[2];
    puVar7 = (ulong *)(uVar14 + lVar1);
    if (puVar17 < puVar7) {
      puVar8 = puVar19;
      (*(code *)puVar19[3])();
      uVar14 = puVar19[1];
      puVar17 = (ulong *)puVar19[2];
      puVar7 = (ulong *)(uVar14 + lVar1);
    }
    lVar18 = lVar21;
    uVar15 = uVar9;
    if (puVar7 <= puVar17) {
      puVar19[1] = (ulong)puVar7;
      if (*puVar19 != 0) {
        puVar11 = (undefined1 *)(*puVar19 + uVar14 + lVar1);
        do {
          puVar11 = puVar11 + -1;
          *puVar11 = (&UNK_10f416238)[uVar9 & 0xf];
          bVar5 = 0xf < uVar9;
          uVar9 = uVar9 >> 4;
        } while (bVar5);
        goto LAB_1098c29ac;
      }
    }
    do {
      puVar4[lVar18 + -0x78] = (&UNK_10f416238)[uVar15 & 0xf];
      uVar9 = uVar15 >> 4;
      bVar5 = 0xf < uVar15;
      lVar18 = lVar18 + -1;
      uVar15 = uVar9;
    } while (bVar5);
    puVar8 = (ulong *)(puVar4 + -0x78);
    puVar7 = (ulong *)(puVar4 + lVar21 + -0x77);
    FUN_1098c2be4();
    puVar12 = puVar19;
    puVar19 = puVar8;
  }
  else {
    puVar12 = (ulong *)(lVar21 + 3);
    uVar13 = lVar21 + 3;
    param_5 = (ulong *)(puVar4 + -0x88);
    FUN_1098c29e0();
    puVar8 = puVar19;
  }
LAB_1098c29ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x38)) {
    return puVar19;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar4 + -0xd0) = unaff_x24;
  *(undefined8 *)(puVar4 + -200) = unaff_x23;
  *(ulong *)(puVar4 + -0xc0) = unaff_x22;
  *(long *)(puVar4 + -0xb8) = lVar1;
  *(ulong *)(puVar4 + -0xb0) = uVar9;
  *(ulong **)(puVar4 + -0xa8) = puVar19;
  *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x98) = FUN_1098c29e0;
  *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  if (uVar13 <= (uint)puVar7[1]) {
    uVar9 = (uint)puVar7[1] - uVar13;
  }
  uVar13 = uVar9 >> ((long)(char)(&UNK_10e009f5d)[(ulong)((uint)*puVar7 >> 3) & 7] & 0x3fU);
  puVar19 = puVar8;
  if ((undefined *)puVar8[2] <
      (undefined *)((long)puVar12 + uVar9 * ((ulong)((uint)*puVar7 >> 0xf) & 7) + puVar8[1])) {
    (*(code *)puVar8[3])(puVar8);
  }
  if (uVar13 != 0) {
    puVar12 = puVar7;
    FUN_1094471fc(puVar8,uVar13,puVar7);
    puVar19 = puVar8;
  }
  uVar15 = puVar8[1];
  uVar14 = uVar15 + 1;
  if (puVar8[2] < uVar14) {
    puVar19 = puVar8;
    (*(code *)puVar8[3])(puVar8);
    uVar15 = puVar8[1];
    uVar14 = uVar15 + 1;
  }
  puVar8[1] = uVar14;
  *(undefined1 *)(*puVar8 + uVar15) = 0x30;
  uVar15 = puVar8[1];
  uVar14 = uVar15 + 1;
  if (puVar8[2] < uVar14) {
    puVar19 = puVar8;
    (*(code *)puVar8[3])(puVar8);
    uVar15 = puVar8[1];
    uVar14 = uVar15 + 1;
  }
  puVar8[1] = uVar14;
  *(undefined1 *)(*puVar8 + uVar15) = 0x78;
  uVar15 = *param_5;
  uVar6 = (uint)param_5[1];
  uVar14 = puVar8[1];
  puVar16 = (undefined1 *)puVar8[2];
  puVar11 = (undefined1 *)(uVar14 + uVar6);
  if (puVar16 < puVar11) {
    puVar19 = puVar8;
    (*(code *)puVar8[3])(puVar8);
    uVar14 = puVar8[1];
    puVar16 = (undefined1 *)puVar8[2];
    puVar11 = (undefined1 *)(uVar14 + uVar6);
  }
  if (puVar11 <= puVar16) {
    puVar8[1] = (ulong)puVar11;
    if (*puVar8 != 0) {
      puVar16 = (undefined1 *)(uVar14 + (long)(int)uVar6 + *puVar8);
      do {
        puVar16 = puVar16 + -1;
        *puVar16 = (&UNK_10f416238)[uVar15 & 0xf];
        bVar5 = 0xf < uVar15;
        uVar15 = uVar15 >> 4;
      } while (bVar5);
      goto LAB_1098c2b90;
    }
  }
  puVar11 = puVar4 + (long)(int)uVar6 + -0x118;
  lVar1 = (long)(int)uVar6;
  do {
    puVar4[lVar1 + -0x119] = (&UNK_10f416238)[uVar15 & 0xf];
    bVar5 = 0xf < uVar15;
    uVar15 = uVar15 >> 4;
    lVar1 = lVar1 + -1;
  } while (bVar5);
  puVar19 = (ulong *)(puVar4 + -0x118);
  FUN_1098c2be4(puVar19,puVar11,puVar8);
  puVar12 = puVar8;
  puVar8 = puVar19;
LAB_1098c2b90:
  if (uVar9 != uVar13) {
    puVar11 = (undefined1 *)(uVar9 - uVar13);
    puVar12 = puVar7;
    FUN_1094471fc(puVar8,puVar11,puVar7);
    puVar19 = puVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0xd8)) {
    return puVar8;
  }
  ___stack_chk_fail();
  *(ulong **)(puVar4 + -0x140) = puVar7;
  *(ulong **)(puVar4 + -0x138) = puVar8;
  *(undefined1 **)(puVar4 + -0x130) = puVar4 + -0xa0;
  *(code **)(puVar4 + -0x128) = FUN_1098c2be4;
  FUN_109446adc(puVar12,puVar19,puVar11);
  return puVar12;
}



/* Entry: 1098c29e0; end: 1098c2be3;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_1098c29e0(uint *param_1,uint *param_2,uint *param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_89 [65];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  if (param_4 <= param_2[2]) {
    uVar1 = param_2[2] - param_4;
  }
  uVar9 = uVar1 >> ((long)(char)(&UNK_10e009f5d)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  puVar4 = param_1;
  if (*(ulong *)(param_1 + 4) <
      (long)param_3 + uVar1 * ((ulong)(*param_2 >> 0xf) & 7) + *(long *)(param_1 + 2)) {
    (**(code **)(param_1 + 6))(param_1);
  }
  if (uVar9 != 0) {
    param_3 = param_2;
    FUN_1094471fc(param_1,uVar9,param_2);
    puVar4 = param_1;
  }
  lVar6 = *(long *)(param_1 + 2);
  uVar5 = lVar6 + 1;
  if (*(ulong *)(param_1 + 4) < uVar5) {
    puVar4 = param_1;
    (**(code **)(param_1 + 6))(param_1);
    lVar6 = *(long *)(param_1 + 2);
    uVar5 = lVar6 + 1;
  }
  *(ulong *)(param_1 + 2) = uVar5;
  *(undefined1 *)(*(long *)param_1 + lVar6) = 0x30;
  lVar6 = *(long *)(param_1 + 2);
  uVar5 = lVar6 + 1;
  if (*(ulong *)(param_1 + 4) < uVar5) {
    puVar4 = param_1;
    (**(code **)(param_1 + 6))(param_1);
    lVar6 = *(long *)(param_1 + 2);
    uVar5 = lVar6 + 1;
  }
  *(ulong *)(param_1 + 2) = uVar5;
  *(undefined1 *)(*(long *)param_1 + lVar6) = 0x78;
  uVar10 = *param_5;
  uVar2 = (uint)param_5[1];
  lVar6 = *(long *)(param_1 + 2);
  uVar8 = *(ulong *)(param_1 + 4);
  uVar5 = lVar6 + (ulong)uVar2;
  if (uVar8 < uVar5) {
    puVar4 = param_1;
    (**(code **)(param_1 + 6))(param_1);
    lVar6 = *(long *)(param_1 + 2);
    uVar8 = *(ulong *)(param_1 + 4);
    uVar5 = lVar6 + (ulong)uVar2;
  }
  if (uVar5 <= uVar8) {
    *(ulong *)(param_1 + 2) = uVar5;
    if (*(long *)param_1 != 0) {
      puVar7 = (undefined1 *)(lVar6 + (int)uVar2 + *(long *)param_1);
      do {
        puVar7 = puVar7 + -1;
        *puVar7 = (&UNK_10f416238)[uVar10 & 0xf];
        bVar3 = 0xf < uVar10;
        uVar10 = uVar10 >> 4;
      } while (bVar3);
      goto LAB_1098c2b90;
    }
  }
  uVar5 = (long)auStack_89 + (long)(int)uVar2 + 1U;
  lVar6 = (long)(int)uVar2;
  do {
    auStack_89[lVar6] = (&UNK_10f416238)[uVar10 & 0xf];
    bVar3 = 0xf < uVar10;
    uVar10 = uVar10 >> 4;
    lVar6 = lVar6 + -1;
  } while (bVar3);
  puVar4 = (uint *)((long)auStack_89 + 1);
  FUN_1098c2be4(puVar4,uVar5,param_1);
  param_3 = param_1;
  param_1 = puVar4;
LAB_1098c2b90:
  if (uVar1 != uVar9) {
    uVar5 = uVar1 - uVar9;
    FUN_1094471fc(param_1,uVar5,param_2);
    puVar4 = param_1;
    param_3 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109446adc(param_3,puVar4,uVar5);
    return param_3;
  }
  return param_1;
}



/* Entry: 1098c2be4; end: 1098c2c9b;  */

undefined8 FUN_1098c2be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_109446adc(param_3,param_1,param_2);
  return param_3;
}



/* Entry: 1098c2c9c; end: 1098c2d67;  */

void FUN_1098c2c9c(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uStack_38 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = *(undefined8 *)(param_2 + 0x20);
  puStack_48 = (undefined8 *)0x0;
  puVar1 = &uStack_38;
  FUN_1098c6ba4(puVar1,&uStack_40);
  puStack_48 = puVar1;
  FUN_10945a80c(param_1,&UNK_10f586bb3);
  *param_1 = 2;
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puStack_48;
  puStack_48 = puVar1;
  FUN_109380ffc(&puStack_48);
  return;
}



/* Entry: 1098c2d68; end: 1098c2f5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098c2d68(long *param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  char **ppcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  char **ppcVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  long **pplVar18;
  ulong *puVar19;
  char *pcVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  char *pcVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_158 [8];
  char *pcStack_150;
  undefined1 uStack_148;
  char **ppcStack_140;
  undefined1 uStack_138;
  ulong *puStack_130;
  undefined1 auStack_128 [8];
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  undefined1 auStack_108 [8];
  long *plStack_100;
  char *pcStack_f8;
  long *plStack_f0;
  char *pcStack_e8;
  long *plStack_e0;
  ulong *puStack_d8;
  long **pplStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  char *pcStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 uStack_70;
  ulong uStack_68;
  
  cVar4 = *(char *)((long)param_2 + 0x1e);
  if (cVar4 == '\x14') {
    return;
  }
  plVar16 = param_1 + 9;
  plVar21 = (long *)*plVar16;
  if (plVar21 == (long *)0x0) {
LAB_1098c2df4:
    FUN_1098c2f5c(param_1,param_2);
    FUN_1098c6d18(param_1 + 8,param_2 + 3,param_2 + 3);
    cVar4 = *(char *)((long)param_2 + 0x1e);
  }
  else {
    plVar13 = plVar16;
    do {
      lVar26 = 8;
      if (*(uint *)(param_2 + 3) <= *(uint *)((long)plVar21 + 0x1c)) {
        lVar26 = 0;
        plVar13 = plVar21;
      }
      plVar21 = *(long **)((long)plVar21 + lVar26);
    } while (plVar21 != (long *)0x0);
    if ((plVar13 == plVar16) || (*(uint *)(param_2 + 3) < *(uint *)((long)plVar13 + 0x1c)))
    goto LAB_1098c2df4;
  }
  param_1[1] = param_2[2];
  switch(cVar4) {
  case '\x03':
  case '\x04':
  case '\x05':
  case '\r':
    goto FUN_1098c33b0;
  case '\x06':
  case '\a':
  case '\b':
  case '\x0e':
    plVar16 = param_1 + 0xe;
    plVar21 = (long *)*plVar16;
    if (plVar21 == (long *)0x0) {
      return;
    }
    plVar13 = plVar16;
    do {
      lVar26 = 8;
      if (*(uint *)(param_2 + 3) <= *(uint *)(plVar21 + 4)) {
        lVar26 = 0;
        plVar13 = plVar21;
      }
      plVar21 = *(long **)((long)plVar21 + lVar26);
    } while (plVar21 != (long *)0x0);
    if (plVar13 == plVar16) {
      return;
    }
    if (*(uint *)(param_2 + 3) < *(uint *)(plVar13 + 4)) {
      return;
    }
    lVar26 = plVar13[6];
    if (plVar13[5] == lVar26) {
      return;
    }
    pcVar17 = *(char **)(lVar26 + -0x60);
    puVar10 = *(undefined8 **)(lVar26 + -0x58);
    uVar15 = *(ulong *)(lVar26 + -0x50);
    cVar4 = *(char *)(lVar26 + -0x42);
    plStack_78 = *(long **)(lVar26 + -0x38);
    uStack_80 = *(undefined8 *)(lVar26 + -0x40);
    *(undefined8 *)(lVar26 + -0x40) = 0;
    *(undefined8 *)(lVar26 + -0x38) = 0;
    lVar26 = plVar13[6];
    plStack_88 = *(long **)(lVar26 + -0x28);
    lStack_90 = *(long *)(lVar26 + -0x30);
    *(undefined8 *)(lVar26 + -0x30) = 0;
    *(undefined8 *)(lVar26 + -0x28) = 0;
    lVar26 = plVar13[6];
    puVar25 = *(undefined8 **)(lVar26 + -0x20);
    plVar21 = *(long **)(lVar26 + -0x18);
    *(undefined8 *)(lVar26 + -0x20) = 0;
    *(undefined8 *)(lVar26 + -0x18) = 0;
    puStack_a0 = puVar25;
    plStack_98 = plVar21;
    FUN_1098c6a28(plVar13 + 5,plVar13[6] + -0x60);
    uVar27 = param_2[2];
    pcStack_b0 = (char *)((ulong)pcStack_b0 & 0xffffffffffffff00);
    plStack_a8 = (long *)0x0;
    pcStack_c0._0_1_ = 5;
    plStack_b8 = (long *)0x1;
    ppcVar14 = &pcStack_b0;
    FUN_10945a80c(ppcVar14,&DAT_10f2f98f2);
    uVar5 = *(undefined1 *)ppcVar14;
    *(undefined1 *)ppcVar14 = pcStack_c0._0_1_;
    pcStack_c0 = (char *)CONCAT71(pcStack_c0._1_7_,uVar5);
    plVar16 = (long *)ppcVar14[1];
    ppcVar14[1] = (char *)plStack_b8;
    plStack_b8 = plVar16;
    FUN_109380ffc(&plStack_b8);
    pcStack_c8 = (char *)(ulong)*(uint *)(param_2 + 3);
    pplStack_d0._0_1_ = 6;
    ppcVar14 = &pcStack_b0;
    FUN_10945a80c(ppcVar14,&DAT_10f586bcf);
    uVar5 = *(undefined1 *)ppcVar14;
    *(undefined1 *)ppcVar14 = pplStack_d0._0_1_;
    pplStack_d0 = (long **)CONCAT71(pplStack_d0._1_7_,uVar5);
    pcVar24 = ppcVar14[1];
    ppcVar14[1] = pcStack_c8;
    pcStack_c8 = pcVar24;
    FUN_109380ffc(&pcStack_c8);
    __ZNSt3__19to_stringEi(&pcStack_f8,*(undefined2 *)((long)param_2 + 0x1c));
    puStack_d8 = (ulong *)0x0;
    plStack_e0._0_1_ = 3;
    puVar19 = (ulong *)0x18;
    __Znwm();
    puVar19[1] = (ulong)plStack_f0;
    *puVar19 = (ulong)pcStack_f8;
    puVar19[2] = (ulong)pcStack_e8;
    plStack_f0 = (long *)0x0;
    pcStack_e8 = (char *)0x0;
    pcStack_f8 = (char *)0x0;
    ppcVar14 = &pcStack_b0;
    puStack_d8 = puVar19;
    FUN_10945a80c(ppcVar14,&DAT_10f5139bb);
    uVar15 = uVar15 >> 3;
    uVar5 = *(undefined1 *)ppcVar14;
    *(undefined1 *)ppcVar14 = plStack_e0._0_1_;
    plStack_e0 = (long *)CONCAT71(plStack_e0._1_7_,uVar5);
    puVar19 = (ulong *)ppcVar14[1];
    ppcVar14[1] = (char *)puStack_d8;
    puStack_d8 = puVar19;
    FUN_109380ffc(&puStack_d8);
    if ((long)pcStack_e8 < 0) {
      __ZdlPv(pcStack_f8);
    }
    plStack_100 = (long *)(uVar15 / 0x7d - *param_1);
    auStack_108[0] = 6;
    ppcVar14 = &pcStack_b0;
    FUN_10945a80c(ppcVar14,&DAT_10f2f98f9);
    uVar5 = *(undefined1 *)ppcVar14;
    *(undefined1 *)ppcVar14 = auStack_108[0];
    plVar16 = (long *)ppcVar14[1];
    auStack_108[0] = uVar5;
    ppcVar14[1] = (char *)plStack_100;
    plStack_100 = plVar16;
    FUN_109380ffc(&plStack_100);
    pcStack_118._0_1_ = 5;
    ppcVar14 = &pcStack_b0;
    pcStack_110 = (char *)(uVar27 / 1000 - uVar15 / 0x7d);
    FUN_10945a80c(ppcVar14,&UNK_10f586bda);
    uVar5 = *(undefined1 *)ppcVar14;
    *(undefined1 *)ppcVar14 = pcStack_118._0_1_;
    pcVar24 = ppcVar14[1];
    pcStack_118._0_1_ = uVar5;
    ppcVar14[1] = pcStack_110;
    pcStack_110 = pcVar24;
    FUN_109380ffc(&pcStack_110);
    pcStack_120 = (char *)0x0;
    auStack_128[0] = 3;
    pcVar24 = "X";
    FUN_1098c70e0();
    ppcVar14 = &pcStack_b0;
    pcStack_120 = pcVar24;
    FUN_10945a80c(ppcVar14,&DAT_10f586bcc);
    uVar5 = *(undefined1 *)ppcVar14;
    *(undefined1 *)ppcVar14 = auStack_128[0];
    pcVar24 = ppcVar14[1];
    auStack_128[0] = uVar5;
    ppcVar14[1] = pcStack_120;
    pcStack_120 = pcVar24;
    FUN_109380ffc(&pcStack_120);
    if ((cVar4 == '\x10') && (puVar25 != (undefined8 *)0x0)) {
      lVar26 = (long)*(char *)((long)puVar25 + 0x17);
      puVar10 = puVar25;
      if (lVar26 < 0) {
        lVar26 = puVar25[1];
        puVar10 = (undefined8 *)*puVar25;
      }
      func_0x000104c54c8c(&pcStack_f8,puVar10,lVar26);
      puStack_130 = (ulong *)0x0;
      uStack_138 = 3;
      puVar19 = (ulong *)0x18;
      __Znwm();
      puVar19[1] = (ulong)plStack_f0;
      *puVar19 = (ulong)pcStack_f8;
      puVar19[2] = (ulong)pcStack_e8;
      plStack_f0 = (long *)0x0;
      pcStack_e8 = (char *)0x0;
      pcStack_f8 = (char *)0x0;
      ppcVar14 = &pcStack_b0;
      puStack_130 = puVar19;
      FUN_10945a80c(ppcVar14,&DAT_10f68f148);
      uVar5 = *(undefined1 *)ppcVar14;
      *(undefined1 *)ppcVar14 = uStack_138;
      puVar19 = (ulong *)ppcVar14[1];
      uStack_138 = uVar5;
      ppcVar14[1] = (char *)puStack_130;
      puStack_130 = puVar19;
      FUN_109380ffc(&puStack_130);
      if ((long)pcStack_e8 < 0) {
        __ZdlPv(pcStack_f8);
      }
      pcStack_f8 = (char *)((ulong)pcStack_f8 & 0xffffffffffffff00);
      plStack_f0 = (long *)0x0;
      FUN_1098c60b8(&pcStack_f8,puVar25 + 0xd);
      if (puVar25[0x12] != 0) {
        func_0x0001098c613c(param_1[0x12],&pcStack_f8);
      }
      puVar2 = (undefined8 *)puVar25[0x14];
      for (puVar10 = (undefined8 *)puVar25[0x13]; puVar10 != puVar2; puVar10 = puVar10 + 1) {
        func_0x0001098c613c(param_1[0x12],&pcStack_f8,*puVar10);
      }
LAB_1098c3e60:
      bVar12 = true;
    }
    else {
      pcStack_f8 = "unknown";
      if (pcVar17 != (char *)0x0) {
        pcStack_f8 = pcVar17;
      }
      ppcStack_140 = (char **)0x0;
      uStack_148 = 3;
      ppcVar14 = &pcStack_f8;
      FUN_1098c7050();
      ppcVar8 = &pcStack_b0;
      ppcStack_140 = ppcVar14;
      FUN_10945a80c(ppcVar8,&DAT_10f68f148);
      uVar5 = *(undefined1 *)ppcVar8;
      *(undefined1 *)ppcVar8 = uStack_148;
      ppcVar14 = (char **)ppcVar8[1];
      uStack_148 = uVar5;
      ppcVar8[1] = (char *)ppcStack_140;
      ppcStack_140 = ppcVar14;
      FUN_109380ffc(&ppcStack_140);
      pcStack_f8 = (char *)((ulong)pcStack_f8 & 0xffffffffffffff00);
      plStack_f0 = (long *)0x0;
      if (cVar4 == '\r') {
        if (puVar10 != (undefined8 *)0x0) {
          puVar25 = (undefined8 *)puVar10[1];
          for (puVar10 = (undefined8 *)*puVar10; puVar10 != puVar25; puVar10 = puVar10 + 1) {
            func_0x0001098c613c(param_1[0x12],&pcStack_f8,*puVar10);
          }
        }
        goto LAB_1098c3e60;
      }
      if (cVar4 == '\x05') {
        func_0x0001098c613c(param_1[0x12],&pcStack_f8,puVar10);
        goto LAB_1098c3e60;
      }
      if (cVar4 == '\x04') {
        FUN_1098c60b8(&pcStack_f8,puVar10);
        goto LAB_1098c3e60;
      }
      bVar12 = false;
    }
    cVar4 = *(char *)((long)param_2 + 0x1e);
    if (cVar4 == '\x0e') {
      puVar10 = (undefined8 *)param_2[1];
      if (puVar10 != (undefined8 *)0x0) {
        puVar25 = (undefined8 *)puVar10[1];
        for (puVar10 = (undefined8 *)*puVar10; puVar10 != puVar25; puVar10 = puVar10 + 1) {
          func_0x0001098c613c(param_1[0x12],&pcStack_f8,*puVar10);
        }
      }
    }
    else if (cVar4 == '\b') {
      func_0x0001098c613c(param_1[0x12],&pcStack_f8,param_2[1]);
    }
    else if (cVar4 == '\a') {
      FUN_1098c60b8(&pcStack_f8,param_2[1]);
    }
    else if (!bVar12) goto LAB_1098c3f18;
    FUN_109381b20(auStack_158,&pcStack_f8);
    ppcVar14 = &pcStack_b0;
    FUN_10945a80c(ppcVar14,&UNK_10f42a4d5);
    uVar5 = *(undefined1 *)ppcVar14;
    *(undefined1 *)ppcVar14 = auStack_158[0];
    pcVar17 = ppcVar14[1];
    auStack_158[0] = uVar5;
    ppcVar14[1] = pcStack_150;
    pcStack_150 = pcVar17;
    FUN_109380ffc(&pcStack_150);
LAB_1098c3f18:
    FUN_1098c6200(param_1 + 3,&pcStack_b0);
    FUN_109380ffc(&plStack_f0,(ulong)pcStack_f8 & 0xff);
    FUN_109380ffc(&plStack_a8,(ulong)pcStack_b0 & 0xff);
    if (plVar21 != (long *)0x0) {
      plVar16 = plVar21 + 1;
      do {
        lVar26 = *plVar16;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar16 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar21 = plStack_88 + 1;
      do {
        lVar26 = *plVar21;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar21 = plStack_78 + 1;
      do {
        lVar26 = *plVar21;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return;
  case '\t':
    uVar27 = param_2[2];
    lVar26 = *param_1;
    uStack_70 = 5;
    uStack_68 = 1;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f2f98f2);
    uVar5 = *puVar7;
    *puVar7 = uStack_70;
    uVar15 = *(ulong *)(puVar7 + 8);
    uStack_70 = uVar5;
    *(ulong *)(puVar7 + 8) = uStack_68;
    uStack_68 = uVar15;
    FUN_109380ffc(&uStack_68);
    plStack_78 = (long *)(ulong)*(uint *)(param_2 + 3);
    uStack_80._0_1_ = 6;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f586bcf);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)uStack_80;
    uStack_80 = CONCAT71(uStack_80._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_78;
    plStack_78 = plVar16;
    FUN_109380ffc(&plStack_78);
    __ZNSt3__19to_stringEi(&plStack_a8,*(undefined2 *)((long)param_2 + 0x1c));
    plStack_88 = (long *)0x0;
    lStack_90._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_88 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f5139bb);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)lStack_90;
    lStack_90 = CONCAT71(lStack_90._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_88;
    plStack_88 = plVar16;
    FUN_109380ffc(&plStack_88);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    plStack_b8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_b0 = (char *)(uVar27 / 1000 - lVar26);
    FUN_10945a80c(puVar7,&DAT_10f2f98f9);
    uVar5 = *puVar7;
    *puVar7 = 5;
    plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_b0;
    pcStack_b0 = pcVar17;
    FUN_109380ffc(&pcStack_b0);
    pcStack_c0 = (char *)0x0;
    pcStack_c8._0_1_ = 3;
    pcVar17 = "C";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_c0 = pcVar17;
    FUN_10945a80c(puVar7,&DAT_10f586bcc);
    uVar5 = *puVar7;
    *puVar7 = 3;
    pcStack_c8 = (char *)CONCAT71(pcStack_c8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_c0;
    pcStack_c0 = pcVar17;
    FUN_109380ffc(&pcStack_c0);
    plStack_a8 = (long *)&DAT_10f2e4588;
    if ((long *)*param_2 != (long *)0x0) {
      plStack_a8 = (long *)*param_2;
    }
    pplStack_d0 = (long **)0x0;
    puStack_d8._0_1_ = 3;
    pplVar18 = &plStack_a8;
    FUN_1098c7050();
    puVar7 = &stack0xffffffffffffffa0;
    pplStack_d0 = pplVar18;
    FUN_10945a80c(puVar7,&DAT_10f68f148);
    uVar5 = *puVar7;
    *puVar7 = 3;
    puStack_d8 = (ulong *)CONCAT71(puStack_d8._1_7_,uVar5);
    pplVar18 = *(long ***)(puVar7 + 8);
    *(long ***)(puVar7 + 8) = pplStack_d0;
    pplStack_d0 = pplVar18;
    FUN_109380ffc(&pplStack_d0);
    plStack_a8 = (long *)((ulong)plStack_a8 & 0xffffffffffffff00);
    puStack_a0 = (undefined8 *)0x0;
    cVar4 = *(char *)((long)param_2 + 0x1f);
    if (cVar4 == '\x02') {
      ppcVar14 = &pcStack_e8;
      pcStack_e8._0_1_ = 5;
      plStack_e0 = (long *)param_2[1];
      pcVar17 = "value";
      if ((char *)*param_2 != (char *)0x0) {
        pcVar17 = (char *)*param_2;
      }
      pplVar18 = &plStack_a8;
      FUN_10945a80c(pplVar18,pcVar17);
      uVar5 = *(undefined1 *)pplVar18;
      *(undefined1 *)pplVar18 = 5;
      pcStack_e8 = (char *)CONCAT71(pcStack_e8._1_7_,uVar5);
      plVar16 = pplVar18[1];
      pplVar18[1] = plStack_e0;
      plStack_e0 = plVar16;
    }
    else if (cVar4 == '\x03') {
      ppcVar14 = &pcStack_f8;
      pcStack_f8._0_1_ = 6;
      plStack_f0 = (long *)param_2[1];
      pcVar17 = "value";
      if ((char *)*param_2 != (char *)0x0) {
        pcVar17 = (char *)*param_2;
      }
      pplVar18 = &plStack_a8;
      FUN_10945a80c(pplVar18,pcVar17);
      uVar5 = *(undefined1 *)pplVar18;
      *(undefined1 *)pplVar18 = 6;
      pcStack_f8 = (char *)CONCAT71(pcStack_f8._1_7_,uVar5);
      plVar16 = pplVar18[1];
      pplVar18[1] = plStack_f0;
      plStack_f0 = plVar16;
    }
    else {
      if (cVar4 != '\x04') goto LAB_1098c449c;
      plStack_100 = (long *)param_2[1];
      ppcVar14 = (char **)auStack_108;
      auStack_108[0] = 7;
      pcVar17 = "value";
      if ((char *)*param_2 != (char *)0x0) {
        pcVar17 = (char *)*param_2;
      }
      pplVar18 = &plStack_a8;
      FUN_10945a80c(pplVar18,pcVar17);
      auStack_108[0] = *(undefined1 *)pplVar18;
      *(undefined1 *)pplVar18 = 7;
      plVar16 = pplVar18[1];
      pplVar18[1] = plStack_100;
      plStack_100 = plVar16;
    }
    FUN_109380ffc(ppcVar14 + 1);
LAB_1098c449c:
    FUN_109381b20(&pcStack_118,&plStack_a8);
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&UNK_10f42a4d5);
    uVar5 = *puVar7;
    *puVar7 = pcStack_118._0_1_;
    pcVar17 = *(char **)(puVar7 + 8);
    pcStack_118._0_1_ = uVar5;
    *(char **)(puVar7 + 8) = pcStack_110;
    pcStack_110 = pcVar17;
    FUN_109380ffc(&pcStack_110);
    FUN_1098c6200(param_1 + 3,&stack0xffffffffffffffa0);
    FUN_109380ffc(&puStack_a0,(ulong)plStack_a8 & 0xff);
    FUN_109380ffc(&stack0xffffffffffffffa8,0);
    return;
  case '\n':
  case '\v':
  case '\f':
  case '\x0f':
    uVar27 = param_2[2];
    lVar26 = *param_1;
    puVar7 = &stack0xffffffffffffffb0;
    FUN_10945a80c(puVar7,&DAT_10f2f98f2);
    *puVar7 = 5;
    *(undefined8 *)(puVar7 + 8) = 1;
    FUN_109380ffc(&stack0xffffffffffffffa8);
    uStack_68 = (ulong)*(uint *)(param_2 + 3);
    uStack_70 = 6;
    puVar7 = &stack0xffffffffffffffb0;
    FUN_10945a80c(puVar7,&DAT_10f586bcf);
    uVar5 = *puVar7;
    *puVar7 = uStack_70;
    uVar15 = *(ulong *)(puVar7 + 8);
    uStack_70 = uVar5;
    *(ulong *)(puVar7 + 8) = uStack_68;
    uStack_68 = uVar15;
    FUN_109380ffc(&uStack_68);
    __ZNSt3__19to_stringEi(&plStack_98,*(undefined2 *)((long)param_2 + 0x1c));
    plStack_78 = (long *)0x0;
    uStack_80._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = lStack_90;
    *plVar16 = (long)plStack_98;
    plVar16[2] = (long)plStack_88;
    lStack_90 = 0;
    plStack_88 = (long *)0x0;
    plStack_98 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffb0;
    plStack_78 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f5139bb);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)uStack_80;
    uStack_80 = CONCAT71(uStack_80._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_78;
    plStack_78 = plVar16;
    FUN_109380ffc(&plStack_78);
    if ((long)plStack_88 < 0) {
      __ZdlPv(plStack_98);
    }
    plStack_a8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffb0;
    puStack_a0 = (undefined8 *)(uVar27 / 1000 - lVar26);
    FUN_10945a80c(puVar7,&DAT_10f2f98f9);
    uVar5 = *puVar7;
    *puVar7 = plStack_a8._0_1_;
    plStack_a8 = (long *)CONCAT71(plStack_a8._1_7_,uVar5);
    puVar10 = *(undefined8 **)(puVar7 + 8);
    *(undefined8 **)(puVar7 + 8) = puStack_a0;
    puStack_a0 = puVar10;
    FUN_109380ffc(&puStack_a0);
    pcStack_b0 = (char *)0x0;
    plStack_b8._0_1_ = 3;
    pcVar17 = "i";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffb0;
    pcStack_b0 = pcVar17;
    FUN_10945a80c(puVar7,&DAT_10f586bcc);
    uVar5 = *puVar7;
    *puVar7 = 3;
    plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_b0;
    pcStack_b0 = pcVar17;
    FUN_109380ffc(&pcStack_b0);
    pcStack_c0 = (char *)0x0;
    pcStack_c8._0_1_ = 3;
    pcVar17 = "t";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffb0;
    pcStack_c0 = pcVar17;
    FUN_10945a80c(puVar7,"s");
    uVar5 = *puVar7;
    *puVar7 = 3;
    pcStack_c8 = (char *)CONCAT71(pcStack_c8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_c0;
    pcStack_c0 = pcVar17;
    FUN_109380ffc(&pcStack_c0);
    plStack_98 = (long *)&DAT_10f44a188;
    if ((long *)*param_2 != (long *)0x0) {
      plStack_98 = (long *)*param_2;
    }
    pplStack_d0 = (long **)0x0;
    puStack_d8._0_1_ = 3;
    pplVar18 = &plStack_98;
    FUN_1098c7050();
    puVar7 = &stack0xffffffffffffffb0;
    pplStack_d0 = pplVar18;
    FUN_10945a80c(puVar7,&DAT_10f68f148);
    uVar5 = *puVar7;
    *puVar7 = 3;
    puStack_d8 = (ulong *)CONCAT71(puStack_d8._1_7_,uVar5);
    pplVar18 = *(long ***)(puVar7 + 8);
    *(long ***)(puVar7 + 8) = pplStack_d0;
    pplStack_d0 = pplVar18;
    FUN_109380ffc(&pplStack_d0);
    plStack_98 = (long *)((ulong)plStack_98 & 0xffffffffffffff00);
    lStack_90 = 0;
    cVar4 = *(char *)((long)param_2 + 0x1e);
    if (cVar4 == '\x0f') {
      puVar10 = (undefined8 *)param_2[1];
      if (puVar10 != (undefined8 *)0x0) {
        puVar25 = (undefined8 *)puVar10[1];
        for (puVar10 = (undefined8 *)*puVar10; puVar10 != puVar25; puVar10 = puVar10 + 1) {
          func_0x0001098c613c(param_1[0x12],&plStack_98,*puVar10);
        }
      }
    }
    else if (cVar4 == '\f') {
      func_0x0001098c613c(param_1[0x12],&plStack_98,param_2[1]);
    }
    else {
      if (cVar4 != '\v') goto LAB_1098c4994;
      FUN_1098c60b8(&plStack_98,param_2[1]);
    }
    FUN_109381b20(&pcStack_e8,&plStack_98);
    puVar7 = &stack0xffffffffffffffb0;
    FUN_10945a80c(puVar7,&UNK_10f42a4d5);
    uVar5 = *puVar7;
    *puVar7 = pcStack_e8._0_1_;
    pcStack_e8 = (char *)CONCAT71(pcStack_e8._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_e0;
    plStack_e0 = plVar16;
    FUN_109380ffc(&plStack_e0);
LAB_1098c4994:
    FUN_1098c6200(param_1 + 3,&stack0xffffffffffffffb0);
    FUN_109380ffc(&lStack_90,(ulong)plStack_98 & 0xff);
    FUN_109380ffc(&stack0xffffffffffffffb8,0);
    return;
  case '\x10':
    break;
  case '\x11':
    uVar27 = param_2[2];
    lVar26 = *param_1;
    uStack_70 = 5;
    uStack_68 = 1;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f2f98f2);
    uVar5 = *puVar7;
    *puVar7 = uStack_70;
    uVar15 = *(ulong *)(puVar7 + 8);
    uStack_70 = uVar5;
    *(ulong *)(puVar7 + 8) = uStack_68;
    uStack_68 = uVar15;
    FUN_109380ffc(&uStack_68);
    plStack_78 = (long *)(ulong)*(uint *)(param_2 + 3);
    uStack_80._0_1_ = 6;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f586bcf);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)uStack_80;
    uStack_80 = CONCAT71(uStack_80._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_78;
    plStack_78 = plVar16;
    FUN_109380ffc(&plStack_78);
    __ZNSt3__19to_stringEi(&plStack_a8,*(undefined2 *)((long)param_2 + 0x1c));
    plStack_88 = (long *)0x0;
    lStack_90._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_88 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f5139bb);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)lStack_90;
    lStack_90 = CONCAT71(lStack_90._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_88;
    plStack_88 = plVar16;
    FUN_109380ffc(&plStack_88);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    plStack_b8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_b0 = (char *)(uVar27 / 1000 - lVar26);
    FUN_10945a80c(puVar7,&DAT_10f2f98f9);
    uVar5 = *puVar7;
    *puVar7 = 5;
    plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_b0;
    pcStack_b0 = pcVar17;
    FUN_109380ffc(&pcStack_b0);
    pcStack_c0 = (char *)0x0;
    pcStack_c8._0_1_ = 3;
    pcVar17 = "e";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_c0 = pcVar17;
    FUN_10945a80c(puVar7,&DAT_10f586bcc);
    uVar5 = *puVar7;
    *puVar7 = 3;
    pcStack_c8 = (char *)CONCAT71(pcStack_c8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_c0;
    pcStack_c0 = pcVar17;
    FUN_109380ffc(&pcStack_c0);
    pplStack_d0 = (long **)0x0;
    if (*param_5 != 0) {
      pplStack_d0 = *(long ***)(*param_5 + 0x58);
    }
    puStack_d8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,"id");
    uVar5 = *puVar7;
    *puVar7 = 5;
    puStack_d8 = (ulong *)CONCAT71(puStack_d8._1_7_,uVar5);
    pplVar18 = *(long ***)(puVar7 + 8);
    *(long ***)(puVar7 + 8) = pplStack_d0;
    pplStack_d0 = pplVar18;
    FUN_109380ffc(&pplStack_d0);
    lVar26 = *param_5;
    if (lVar26 == 0) {
      func_0x000107c31940(&plStack_a8,&DAT_10f586bde);
    }
    else {
      lVar11 = (long)*(char *)(lVar26 + 0x47);
      if (lVar11 < 0) {
        lVar9 = *(long *)(lVar26 + 0x30);
        lVar11 = *(long *)(lVar26 + 0x38);
      }
      else {
        lVar9 = lVar26 + 0x30;
      }
      func_0x000104c54c8c(&plStack_a8,lVar9,lVar11);
    }
    plStack_e0 = (long *)0x0;
    pcStack_e8._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_e0 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f68f148);
    uVar5 = *puVar7;
    *puVar7 = 3;
    pcStack_e8 = (char *)CONCAT71(pcStack_e8._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_e0;
    plStack_e0 = plVar16;
    FUN_109380ffc(&plStack_e0);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    FUN_1098c6200(param_1 + 3,&stack0xffffffffffffffa0);
    FUN_109380ffc(&stack0xffffffffffffffa8,0);
    return;
  case '\x12':
    uVar27 = param_2[2];
    lVar26 = *param_1;
    uStack_70 = 5;
    uStack_68 = 1;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f2f98f2);
    uVar5 = *puVar7;
    *puVar7 = uStack_70;
    uVar15 = *(ulong *)(puVar7 + 8);
    uStack_70 = uVar5;
    *(ulong *)(puVar7 + 8) = uStack_68;
    uStack_68 = uVar15;
    FUN_109380ffc(&uStack_68);
    plStack_78 = (long *)(ulong)*(uint *)(param_2 + 3);
    uStack_80._0_1_ = 6;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f586bcf);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)uStack_80;
    uStack_80 = CONCAT71(uStack_80._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_78;
    plStack_78 = plVar16;
    FUN_109380ffc(&plStack_78);
    __ZNSt3__19to_stringEi(&plStack_a8,*(undefined2 *)((long)param_2 + 0x1c));
    plStack_88 = (long *)0x0;
    lStack_90._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_88 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f5139bb);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)lStack_90;
    lStack_90 = CONCAT71(lStack_90._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_88;
    plStack_88 = plVar16;
    FUN_109380ffc(&plStack_88);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    plStack_b8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_b0 = (char *)(uVar27 / 1000 - lVar26);
    FUN_10945a80c(puVar7,&DAT_10f2f98f9);
    uVar5 = *puVar7;
    *puVar7 = plStack_b8._0_1_;
    plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_b0;
    pcStack_b0 = pcVar17;
    FUN_109380ffc(&pcStack_b0);
    pcStack_c0 = (char *)0x0;
    pcStack_c8._0_1_ = 3;
    pcVar17 = "i";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_c0 = pcVar17;
    FUN_10945a80c(puVar7,&DAT_10f586bcc);
    uVar5 = *puVar7;
    *puVar7 = pcStack_c8._0_1_;
    pcStack_c8 = (char *)CONCAT71(pcStack_c8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_c0;
    pcStack_c0 = pcVar17;
    FUN_109380ffc(&pcStack_c0);
    pplStack_d0 = (long **)0x0;
    puStack_d8._0_1_ = 3;
    pcVar17 = "t";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffa0;
    pplStack_d0 = (long **)pcVar17;
    FUN_10945a80c(puVar7,"s");
    uVar5 = *puVar7;
    *puVar7 = puStack_d8._0_1_;
    puStack_d8 = (ulong *)CONCAT71(puStack_d8._1_7_,uVar5);
    pplVar18 = *(long ***)(puVar7 + 8);
    *(long ***)(puVar7 + 8) = pplStack_d0;
    pplStack_d0 = pplVar18;
    FUN_109380ffc(&pplStack_d0);
    puVar10 = (undefined8 *)*param_5;
    if (puVar10 == (undefined8 *)0x0) {
      func_0x000107c31940(&plStack_a8,&DAT_10f44a188);
    }
    else {
      lVar26 = (long)*(char *)((long)puVar10 + 0x17);
      puVar25 = puVar10;
      if (lVar26 < 0) {
        puVar25 = (undefined8 *)*puVar10;
        lVar26 = puVar10[1];
      }
      func_0x000104c54c8c(&plStack_a8,puVar25,lVar26);
    }
    plStack_e0 = (long *)0x0;
    pcStack_e8._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_e0 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f68f148);
    uVar5 = *puVar7;
    *puVar7 = 3;
    pcStack_e8 = (char *)CONCAT71(pcStack_e8._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_e0;
    plStack_e0 = plVar16;
    FUN_109380ffc(&plStack_e0);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    lVar26 = *param_5;
    if (lVar26 == 0) goto LAB_1098c57fc;
    plStack_a8 = (long *)((ulong)plStack_a8 & 0xffffffffffffff00);
    puStack_a0 = (undefined8 *)0x0;
    lVar11 = *(long *)(lVar26 + 0x68);
    lVar9 = *(long *)(lVar26 + 0x70);
    if (lVar11 != lVar9) {
      FUN_1098c60b8(&plStack_a8);
      lVar26 = *param_5;
    }
    if (*(long *)(lVar26 + 0x90) == 0) {
      puVar10 = *(undefined8 **)(lVar26 + 0x98);
      puVar25 = *(undefined8 **)(lVar26 + 0xa0);
      if (puVar10 != puVar25) goto LAB_1098c5790;
      if (lVar11 != lVar9) goto LAB_1098c57a8;
    }
    else {
      func_0x0001098c613c(param_1[0x12],&plStack_a8);
      puVar25 = *(undefined8 **)(*param_5 + 0xa0);
      for (puVar10 = *(undefined8 **)(*param_5 + 0x98); puVar10 != puVar25; puVar10 = puVar10 + 1) {
LAB_1098c5790:
        func_0x0001098c613c(param_1[0x12],&plStack_a8,*puVar10);
      }
LAB_1098c57a8:
      FUN_109381b20(&pcStack_f8,&plStack_a8);
      puVar7 = &stack0xffffffffffffffa0;
      FUN_10945a80c(puVar7,&UNK_10f42a4d5);
      uVar5 = *puVar7;
      *puVar7 = pcStack_f8._0_1_;
      pcStack_f8 = (char *)CONCAT71(pcStack_f8._1_7_,uVar5);
      plVar16 = *(long **)(puVar7 + 8);
      *(long **)(puVar7 + 8) = plStack_f0;
      plStack_f0 = plVar16;
      FUN_109380ffc(&plStack_f0);
    }
    FUN_109380ffc(&puStack_a0,(ulong)plStack_a8 & 0xff);
LAB_1098c57fc:
    FUN_1098c6200(param_1 + 3,&stack0xffffffffffffffa0);
    FUN_109380ffc(&stack0xffffffffffffffa8,0);
    return;
  case '\x13':
    uVar27 = param_2[2];
    lVar26 = *param_1;
    uStack_70 = 5;
    uStack_68 = 1;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f2f98f2);
    uVar5 = *puVar7;
    *puVar7 = uStack_70;
    uVar15 = *(ulong *)(puVar7 + 8);
    uStack_70 = uVar5;
    *(ulong *)(puVar7 + 8) = uStack_68;
    uStack_68 = uVar15;
    FUN_109380ffc(&uStack_68);
    plStack_78 = (long *)(ulong)*(uint *)(param_2 + 3);
    uStack_80._0_1_ = 6;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f586bcf);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)uStack_80;
    uStack_80 = CONCAT71(uStack_80._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_78;
    plStack_78 = plVar16;
    FUN_109380ffc(&plStack_78);
    __ZNSt3__19to_stringEi(&plStack_a8,*(undefined2 *)((long)param_2 + 0x1c));
    plStack_88 = (long *)0x0;
    lStack_90._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_88 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f5139bb);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)lStack_90;
    lStack_90 = CONCAT71(lStack_90._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_88;
    plStack_88 = plVar16;
    FUN_109380ffc(&plStack_88);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    plStack_b8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_b0 = (char *)(uVar27 / 1000 - lVar26);
    FUN_10945a80c(puVar7,&DAT_10f2f98f9);
    uVar5 = *puVar7;
    *puVar7 = plStack_b8._0_1_;
    plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_b0;
    pcStack_b0 = pcVar17;
    FUN_109380ffc(&pcStack_b0);
    pcStack_c0 = (char *)0x0;
    pcStack_c8._0_1_ = 3;
    pcVar17 = "C";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_c0 = pcVar17;
    FUN_10945a80c(puVar7,&DAT_10f586bcc);
    uVar5 = *puVar7;
    *puVar7 = pcStack_c8._0_1_;
    pcStack_c8 = (char *)CONCAT71(pcStack_c8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_c0;
    pcStack_c0 = pcVar17;
    FUN_109380ffc(&pcStack_c0);
    puVar10 = (undefined8 *)*param_5;
    if (puVar10 == (undefined8 *)0x0) {
      func_0x000107c31940(&plStack_a8,&DAT_10f2e4588);
    }
    else {
      lVar26 = (long)*(char *)((long)puVar10 + 0x17);
      puVar25 = puVar10;
      if (lVar26 < 0) {
        puVar25 = (undefined8 *)*puVar10;
        lVar26 = puVar10[1];
      }
      func_0x000104c54c8c(&plStack_a8,puVar25,lVar26);
    }
    pplStack_d0 = (long **)0x0;
    puStack_d8._0_1_ = 3;
    pplVar18 = &plStack_a8;
    FUN_10938229c();
    puVar7 = &stack0xffffffffffffffa0;
    pplStack_d0 = pplVar18;
    FUN_10945a80c(puVar7,&DAT_10f68f148);
    uVar5 = *puVar7;
    *puVar7 = 3;
    puStack_d8 = (ulong *)CONCAT71(puStack_d8._1_7_,uVar5);
    pplVar18 = *(long ***)(puVar7 + 8);
    *(long ***)(puVar7 + 8) = pplStack_d0;
    pplStack_d0 = pplVar18;
    FUN_109380ffc(&pplStack_d0);
    pcStack_e8 = (char *)((ulong)pcStack_e8 & 0xffffffffffffff00);
    plStack_e0 = (long *)0x0;
    lVar26 = *param_5;
    if (lVar26 != 0) {
      cVar4 = *(char *)((long)param_2 + 0x1f);
      if (cVar4 == '\x02') {
        ppcVar14 = &pcStack_f8;
        plStack_f0 = *(long **)(lVar26 + 0xc0);
        pcStack_f8._0_1_ = 5;
        ppcVar8 = &pcStack_e8;
        FUN_1095b7584(ppcVar8,&plStack_a8);
        uVar5 = *(undefined1 *)ppcVar8;
        *(undefined1 *)ppcVar8 = 5;
        pcStack_f8 = (char *)CONCAT71(pcStack_f8._1_7_,uVar5);
        plVar16 = (long *)ppcVar8[1];
        ppcVar8[1] = (char *)plStack_f0;
        plStack_f0 = plVar16;
      }
      else if (cVar4 == '\x03') {
        ppcVar14 = (char **)auStack_108;
        plStack_100 = *(long **)(lVar26 + 0xc0);
        auStack_108[0] = 6;
        ppcVar8 = &pcStack_e8;
        FUN_1095b7584(ppcVar8,&plStack_a8);
        auStack_108[0] = *(undefined1 *)ppcVar8;
        *(undefined1 *)ppcVar8 = 6;
        plVar16 = (long *)ppcVar8[1];
        ppcVar8[1] = (char *)plStack_100;
        plStack_100 = plVar16;
      }
      else {
        if (cVar4 != '\x04') goto LAB_1098c5c08;
        ppcVar14 = &pcStack_118;
        pcStack_110 = *(char **)(lVar26 + 0xc0);
        pcStack_118._0_1_ = 7;
        ppcVar8 = &pcStack_e8;
        FUN_1095b7584(ppcVar8,&plStack_a8);
        pcStack_118._0_1_ = *(undefined1 *)ppcVar8;
        *(undefined1 *)ppcVar8 = 7;
        pcVar17 = ppcVar8[1];
        ppcVar8[1] = pcStack_110;
        pcStack_110 = pcVar17;
      }
      FUN_109380ffc(ppcVar14 + 1);
    }
LAB_1098c5c08:
    FUN_109381b20(auStack_128,&pcStack_e8);
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&UNK_10f42a4d5);
    uVar5 = *puVar7;
    *puVar7 = auStack_128[0];
    pcVar17 = *(char **)(puVar7 + 8);
    auStack_128[0] = uVar5;
    *(char **)(puVar7 + 8) = pcStack_120;
    pcStack_120 = pcVar17;
    FUN_109380ffc(&pcStack_120);
    FUN_1098c6200(param_1 + 3,&stack0xffffffffffffffa0);
    FUN_109380ffc(&plStack_e0,(ulong)pcStack_e8 & 0xff);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    FUN_109380ffc(&stack0xffffffffffffffa8,0);
    return;
  default:
    return;
  }
  if (*param_5 == 0) {
    if (*(int *)(param_2 + 3) == 0) goto FUN_1098c4a8c;
  }
  else if ((*(byte *)(*param_5 + 0x28) & 1) != 0) {
FUN_1098c4a8c:
    uVar27 = param_2[2];
    lVar26 = *param_1;
    uStack_70 = 5;
    uStack_68 = 1;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f2f98f2);
    uVar5 = *puVar7;
    *puVar7 = uStack_70;
    uVar15 = *(ulong *)(puVar7 + 8);
    uStack_70 = uVar5;
    *(ulong *)(puVar7 + 8) = uStack_68;
    uStack_68 = uVar15;
    FUN_109380ffc(&uStack_68);
    plStack_78 = (long *)(ulong)*(uint *)(param_2 + 3);
    uStack_80._0_1_ = 6;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,&DAT_10f586bcf);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)uStack_80;
    uStack_80 = CONCAT71(uStack_80._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_78;
    plStack_78 = plVar16;
    FUN_109380ffc(&plStack_78);
    __ZNSt3__19to_stringEi(&plStack_a8,*(undefined2 *)((long)param_2 + 0x1c));
    plStack_88 = (long *)0x0;
    lStack_90._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_88 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f5139bb);
    uVar5 = *puVar7;
    *puVar7 = (undefined1)lStack_90;
    lStack_90 = CONCAT71(lStack_90._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_88;
    plStack_88 = plVar16;
    FUN_109380ffc(&plStack_88);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    plStack_b8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_b0 = (char *)(uVar27 / 1000 - lVar26);
    FUN_10945a80c(puVar7,&DAT_10f2f98f9);
    uVar5 = *puVar7;
    *puVar7 = plStack_b8._0_1_;
    plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_b0;
    pcStack_b0 = pcVar17;
    FUN_109380ffc(&pcStack_b0);
    pcStack_c0 = (char *)0x0;
    pcStack_c8._0_1_ = 3;
    pcVar17 = "b";
    FUN_1098c70e0();
    puVar7 = &stack0xffffffffffffffa0;
    pcStack_c0 = pcVar17;
    FUN_10945a80c(puVar7,&DAT_10f586bcc);
    uVar5 = *puVar7;
    *puVar7 = pcStack_c8._0_1_;
    pcStack_c8 = (char *)CONCAT71(pcStack_c8._1_7_,uVar5);
    pcVar17 = *(char **)(puVar7 + 8);
    *(char **)(puVar7 + 8) = pcStack_c0;
    pcStack_c0 = pcVar17;
    FUN_109380ffc(&pcStack_c0);
    pplStack_d0 = (long **)0x0;
    if (*param_5 != 0) {
      pplStack_d0 = *(long ***)(*param_5 + 0x58);
    }
    puStack_d8._0_1_ = 5;
    puVar7 = &stack0xffffffffffffffa0;
    FUN_10945a80c(puVar7,"id");
    uVar5 = *puVar7;
    *puVar7 = puStack_d8._0_1_;
    puStack_d8 = (ulong *)CONCAT71(puStack_d8._1_7_,uVar5);
    pplVar18 = *(long ***)(puVar7 + 8);
    *(long ***)(puVar7 + 8) = pplStack_d0;
    pplStack_d0 = pplVar18;
    FUN_109380ffc(&pplStack_d0);
    lVar26 = *param_5;
    if (lVar26 == 0) {
      func_0x000107c31940(&plStack_a8,&DAT_10f586bde);
    }
    else {
      lVar11 = (long)*(char *)(lVar26 + 0x47);
      if (lVar11 < 0) {
        lVar9 = *(long *)(lVar26 + 0x30);
        lVar11 = *(long *)(lVar26 + 0x38);
      }
      else {
        lVar9 = lVar26 + 0x30;
      }
      func_0x000104c54c8c(&plStack_a8,lVar9,lVar11);
    }
    plStack_e0 = (long *)0x0;
    pcStack_e8._0_1_ = 3;
    plVar16 = (long *)0x18;
    __Znwm();
    plVar16[1] = (long)puStack_a0;
    *plVar16 = (long)plStack_a8;
    plVar16[2] = (long)plStack_98;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    puVar7 = &stack0xffffffffffffffa0;
    plStack_e0 = plVar16;
    FUN_10945a80c(puVar7,&DAT_10f68f148);
    uVar5 = *puVar7;
    *puVar7 = 3;
    pcStack_e8 = (char *)CONCAT71(pcStack_e8._1_7_,uVar5);
    plVar16 = *(long **)(puVar7 + 8);
    *(long **)(puVar7 + 8) = plStack_e0;
    plStack_e0 = plVar16;
    FUN_109380ffc(&plStack_e0);
    if ((long)plStack_98 < 0) {
      __ZdlPv(plStack_a8);
    }
    lVar26 = *param_5;
    if (lVar26 == 0) goto LAB_1098c4f10;
    plStack_a8 = (long *)((ulong)plStack_a8 & 0xffffffffffffff00);
    puStack_a0 = (undefined8 *)0x0;
    lVar11 = *(long *)(lVar26 + 0x68);
    lVar9 = *(long *)(lVar26 + 0x70);
    if (lVar11 != lVar9) {
      FUN_1098c60b8(&plStack_a8);
      lVar26 = *param_5;
    }
    if (*(long *)(lVar26 + 0x90) == 0) {
      puVar10 = *(undefined8 **)(lVar26 + 0x98);
      puVar25 = *(undefined8 **)(lVar26 + 0xa0);
      if (puVar10 != puVar25) goto LAB_1098c4ea4;
      if (lVar11 != lVar9) goto LAB_1098c4ebc;
    }
    else {
      func_0x0001098c613c(param_1[0x12],&plStack_a8);
      puVar25 = *(undefined8 **)(*param_5 + 0xa0);
      for (puVar10 = *(undefined8 **)(*param_5 + 0x98); puVar10 != puVar25; puVar10 = puVar10 + 1) {
LAB_1098c4ea4:
        func_0x0001098c613c(param_1[0x12],&plStack_a8,*puVar10);
      }
LAB_1098c4ebc:
      FUN_109381b20(&pcStack_f8,&plStack_a8);
      puVar7 = &stack0xffffffffffffffa0;
      FUN_10945a80c(puVar7,&UNK_10f42a4d5);
      uVar5 = *puVar7;
      *puVar7 = pcStack_f8._0_1_;
      pcStack_f8 = (char *)CONCAT71(pcStack_f8._1_7_,uVar5);
      plVar16 = *(long **)(puVar7 + 8);
      *(long **)(puVar7 + 8) = plStack_f0;
      plStack_f0 = plVar16;
      FUN_109380ffc(&plStack_f0);
    }
    FUN_109380ffc(&puStack_a0,(ulong)plStack_a8 & 0xff);
LAB_1098c4f10:
    FUN_1098c6200(param_1 + 3,&stack0xffffffffffffffa0);
    FUN_109380ffc(&stack0xffffffffffffffa8,0);
    return;
  }
FUN_1098c33b0:
  uStack_68 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = param_1 + 0xe;
  plVar16 = (long *)*plVar21;
  if (plVar16 == (long *)0x0) {
    pcStack_c0 = (char *)param_1[2];
    plVar13 = plVar21;
    plVar22 = plVar21;
LAB_1098c34a8:
    pcVar17 = pcStack_c0;
    pplStack_d0 = (long **)0x0;
    puStack_d8 = (ulong *)0x0;
    plStack_e0 = (long *)0x0;
    plVar16 = param_1 + 0xf;
    FUN_1098c717c();
    *(undefined4 *)(plVar16 + 4) = *(undefined4 *)(param_2 + 3);
    plVar16[9] = (long)pcVar17;
    plVar16[6] = 0;
    plVar16[7] = 0;
    plVar16[5] = 0;
    puStack_d8 = (ulong *)0x0;
    pplStack_d0 = (long **)0x0;
    plStack_e0 = (long *)0x0;
    FUN_1098c7128(param_1 + 0xd,plVar13,plVar22,plVar16);
LAB_1098c34e0:
    FUN_1098c69d4(&plStack_e0);
  }
  else {
    uVar3 = *(uint *)(param_2 + 3);
    plVar13 = plVar21;
    plVar22 = plVar16;
    do {
      lVar26 = 8;
      if (uVar3 <= *(uint *)(plVar22 + 4)) {
        lVar26 = 0;
        plVar13 = plVar22;
      }
      plVar22 = *(long **)((long)plVar22 + lVar26);
    } while (plVar22 != (long *)0x0);
    if ((plVar13 == plVar21) || (uVar3 < *(uint *)(plVar13 + 4))) {
      pcStack_c0 = (char *)param_1[2];
      plStack_e0 = (long *)0x0;
      puStack_d8 = (ulong *)0x0;
      pplStack_d0 = (long **)0x0;
      do {
        while (plVar13 = plVar16, *(uint *)(plVar13 + 4) <= uVar3) {
          if (uVar3 <= *(uint *)(plVar13 + 4)) goto LAB_1098c34e0;
          plVar16 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            plVar22 = plVar13 + 1;
            goto LAB_1098c34a8;
          }
        }
        plVar16 = (long *)*plVar13;
        plVar22 = plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
      goto LAB_1098c34a8;
    }
  }
  puStack_d8 = (ulong *)param_2[1];
  plStack_e0 = (long *)*param_2;
  pcStack_c8 = (char *)param_2[3];
  pplStack_d0 = (long **)param_2[2];
  plStack_b8 = (long *)0x0;
  pcStack_c0 = (char *)0x0;
  plStack_a8 = (long *)0x0;
  pcStack_b0 = (char *)0x0;
  plStack_98 = (long *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  cVar4 = *(char *)((long)param_2 + 0x1e);
  if (cVar4 == '\x10') {
    if (*param_5 != 0) {
      func_0x0001098c64a4(&puStack_a0,param_5);
    }
  }
  else if (cVar4 == '\r') {
    pcVar17 = (char *)*param_4;
    if (pcVar17 != (char *)0x0) {
      plStack_a8 = (long *)param_4[1];
      *param_4 = 0;
      param_4[1] = 0;
      pcStack_b0 = pcVar17;
    }
  }
  else if ((cVar4 == '\x04') && (*param_3 != 0)) {
    FUN_1098c6440(&pcStack_c0,param_3);
  }
  plVar16 = plVar21;
  if ((long *)*plVar21 != (long *)0x0) {
    plVar13 = (long *)*plVar21;
    do {
      while (plVar22 = plVar13, plVar21 = plVar22, *(uint *)(plVar22 + 4) <= *(uint *)(param_2 + 3))
      {
        if (*(uint *)(param_2 + 3) <= *(uint *)(plVar22 + 4)) goto LAB_1098c35dc;
        plVar13 = (long *)plVar22[1];
        if ((long *)plVar22[1] == (long *)0x0) {
          plVar16 = plVar22 + 1;
          goto LAB_1098c35a4;
        }
      }
      plVar13 = (long *)*plVar22;
      plVar16 = plVar22;
    } while ((long *)*plVar22 != (long *)0x0);
  }
LAB_1098c35a4:
  plVar22 = param_1 + 0xf;
  FUN_1098c717c();
  *(undefined4 *)(plVar22 + 4) = *(undefined4 *)(param_2 + 3);
  plVar22[9] = 0;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[5] = 0;
  FUN_1098c7128(param_1 + 0xd,plVar21,plVar16,plVar22);
LAB_1098c35dc:
  puVar10 = (undefined8 *)plVar22[6];
  if (puVar10 < (undefined8 *)plVar22[7]) {
    puVar10[1] = puStack_d8;
    *puVar10 = plStack_e0;
    puVar10[3] = pcStack_c8;
    puVar10[2] = pplStack_d0;
    puVar10[5] = plStack_b8;
    puVar10[4] = pcStack_c0;
    pcStack_c0 = (char *)0x0;
    plStack_b8 = (long *)0x0;
    puVar10[7] = plStack_a8;
    puVar10[6] = pcStack_b0;
    pcStack_b0 = (char *)0x0;
    plStack_a8 = (long *)0x0;
    puVar10[9] = plStack_98;
    puVar10[8] = puStack_a0;
    puStack_a0 = (undefined8 *)0x0;
    plStack_98 = (long *)0x0;
    pcVar20 = (char *)(puVar10 + 0xc);
LAB_1098c3804:
    plVar16 = plStack_98;
    plVar22[6] = (long)pcVar20;
    if (plStack_98 != (long *)0x0) {
      plVar21 = plStack_98 + 1;
      do {
        lVar26 = *plVar21;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar21 = plStack_a8 + 1;
      do {
        lVar26 = *plVar21;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar21 = plStack_b8 + 1;
      do {
        lVar26 = *plVar21;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar26 = (long)puVar10 - plVar22[5];
    uVar15 = (lVar26 >> 5) * -0x5555555555555555 + 1;
    if (uVar15 < 0x2aaaaaaaaaaaaab) {
      lVar11 = plVar22[7] - plVar22[5] >> 5;
      uVar27 = lVar11 * 0x5555555555555556;
      if (uVar27 < uVar15 || uVar27 - uVar15 == 0) {
        uVar27 = uVar15;
      }
      if (0x155555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
        uVar27 = 0x2aaaaaaaaaaaaaa;
      }
      puVar19 = (ulong *)plVar22[9];
      pcVar24 = (char *)(uVar27 * 0x60);
      pcVar17 = (char *)(puVar19[1] + uVar27 * 0x60);
      if (pcVar17 <= (char *)*puVar19) {
        puVar1 = puVar19 + 1;
        uVar15 = puVar19[1];
        do {
          uVar23 = *puVar1;
          if (uVar23 == uVar15) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *puVar1 = (ulong)pcVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_1098c36c0;
            if (uVar27 < 0x2aaaaaaaaaaaaab) {
              __ZnwmSt11align_val_t(pcVar24,0x20);
              plVar16 = plStack_b8;
              pcVar20 = pcStack_c0;
              pcVar17 = pcVar24 + lVar26;
              *(ulong **)(pcVar17 + 8) = puStack_d8;
              *(long **)pcVar17 = plStack_e0;
              *(char **)(pcVar17 + 0x18) = pcStack_c8;
              *(long ***)(pcVar17 + 0x10) = pplStack_d0;
              pcStack_c0 = (char *)0x0;
              plStack_b8 = (long *)0x0;
              *(long **)(pcVar17 + 0x28) = plVar16;
              *(char **)(pcVar17 + 0x20) = pcVar20;
              *(long **)(pcVar17 + 0x38) = plStack_a8;
              *(char **)(pcVar17 + 0x30) = pcStack_b0;
              pcStack_b0 = (char *)0x0;
              plStack_a8 = (long *)0x0;
              *(long **)(pcVar17 + 0x48) = plStack_98;
              *(undefined8 **)(pcVar17 + 0x40) = puStack_a0;
              puStack_a0 = (undefined8 *)0x0;
              plStack_98 = (long *)0x0;
              puVar25 = (undefined8 *)plVar22[5];
              puVar2 = (undefined8 *)plVar22[6];
              lVar26 = (long)puVar25 - (long)puVar2;
              puVar10 = puVar25;
              pcVar20 = pcVar17 + lVar26;
              if (lVar26 != 0) {
                do {
                  uVar28 = *puVar10;
                  uVar30 = puVar10[3];
                  uVar29 = puVar10[2];
                  *(undefined8 *)(pcVar20 + 8) = puVar10[1];
                  *(undefined8 *)pcVar20 = uVar28;
                  *(undefined8 *)(pcVar20 + 0x18) = uVar30;
                  *(undefined8 *)(pcVar20 + 0x10) = uVar29;
                  uVar28 = puVar10[4];
                  *(undefined8 *)(pcVar20 + 0x28) = puVar10[5];
                  *(undefined8 *)(pcVar20 + 0x20) = uVar28;
                  puVar10[4] = 0;
                  puVar10[5] = 0;
                  uVar28 = puVar10[6];
                  *(undefined8 *)(pcVar20 + 0x38) = puVar10[7];
                  *(undefined8 *)(pcVar20 + 0x30) = uVar28;
                  puVar10[6] = 0;
                  puVar10[7] = 0;
                  uVar28 = puVar10[8];
                  *(undefined8 *)(pcVar20 + 0x48) = puVar10[9];
                  *(undefined8 *)(pcVar20 + 0x40) = uVar28;
                  puVar10[8] = 0;
                  puVar10[9] = 0;
                  puVar10 = puVar10 + 0xc;
                  pcVar20 = pcVar20 + 0x60;
                } while (puVar10 != puVar2);
                do {
                  func_0x0001098c6b4c(puVar25 + 8);
                  func_0x0001098c6af4(puVar25 + 6);
                  func_0x0001098c6a9c(puVar25 + 4);
                  puVar25 = puVar25 + 0xc;
                } while (puVar25 != puVar2);
                puVar25 = (undefined8 *)plVar22[5];
              }
              pcVar20 = pcVar17 + 0x60;
              plVar22[5] = (long)(pcVar17 + lVar26);
              plVar22[6] = (long)pcVar20;
              lVar26 = plVar22[7];
              plVar22[7] = (long)(pcVar24 + uVar27 * 0x60);
              if (puVar25 != (undefined8 *)0x0) {
                plVar16 = (long *)(plVar22[9] + 8);
                do {
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar12) {
                    *plVar16 = *plVar16 - (lVar26 - (long)puVar25);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPvSt11align_val_t(puVar25,0x20);
              }
              goto LAB_1098c3804;
            }
            func_0x000104c4f740();
            goto LAB_1098c3944;
          }
          ClearExclusiveLocal();
LAB_1098c36c0:
          pcVar17 = pcVar24 + uVar23;
          uVar15 = uVar23;
        } while (pcVar17 <= (char *)*puVar19);
      }
      pcStack_e8 = pcVar24;
      FUN_1098c692c(&pcStack_e8);
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098c3944;
    }
  }
  FUN_1098c6a88();
LAB_1098c3944:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098c3948);
  (*pcVar6)();
}



/* Entry: 1098c2f5c; end: 1098c33af;  */

void FUN_1098c2f5c(long param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  code *pcVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long lStack_188;
  byte abStack_110 [8];
  undefined8 uStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined1 uStack_e8;
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  byte bStack_b8;
  ulong uStack_b0;
  byte bStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined *puStack_90;
  byte bStack_88;
  undefined *puStack_80;
  byte abStack_78 [8];
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  abStack_78[0] = 0;
  uStack_70 = 0;
  puStack_80 = (undefined *)0x0;
  bStack_88 = 3;
  puVar12 = &UNK_10f586bc0;
  FUN_1098c7098();
  pbVar8 = abStack_78;
  puStack_80 = puVar12;
  FUN_10945a80c(pbVar8,&DAT_10f68f148);
  bVar3 = *pbVar8;
  *pbVar8 = bStack_88;
  puVar12 = *(undefined **)(pbVar8 + 8);
  bStack_88 = bVar3;
  *(undefined **)(pbVar8 + 8) = puStack_80;
  puStack_80 = puVar12;
  FUN_109380ffc(&puStack_80);
  puStack_90 = (undefined *)0x0;
  bStack_98 = 3;
  puVar12 = &DAT_10f31a209;
  FUN_1098c70e0();
  pbVar8 = abStack_78;
  puStack_90 = puVar12;
  FUN_10945a80c(pbVar8,&DAT_10f586bcc);
  bVar3 = *pbVar8;
  *pbVar8 = bStack_98;
  puVar12 = *(undefined **)(pbVar8 + 8);
  bStack_98 = bVar3;
  *(undefined **)(pbVar8 + 8) = puStack_90;
  puStack_90 = puVar12;
  FUN_109380ffc(&puStack_90);
  bStack_a8 = 5;
  uStack_a0 = 1;
  pbVar8 = abStack_78;
  FUN_10945a80c(pbVar8,&DAT_10f2f98f2);
  bVar3 = *pbVar8;
  *pbVar8 = bStack_a8;
  uVar13 = *(undefined8 *)(pbVar8 + 8);
  bStack_a8 = bVar3;
  *(undefined8 *)(pbVar8 + 8) = uStack_a0;
  uStack_a0 = uVar13;
  FUN_109380ffc(&uStack_a0);
  uStack_b0 = (ulong)*(uint *)(param_2 + 0x18);
  bStack_b8 = 6;
  pbVar8 = abStack_78;
  FUN_10945a80c(pbVar8,&DAT_10f586bcf);
  bVar3 = *pbVar8;
  *pbVar8 = bStack_b8;
  uVar14 = *(ulong *)(pbVar8 + 8);
  bStack_b8 = bVar3;
  *(ulong *)(pbVar8 + 8) = uStack_b0;
  uStack_b0 = uVar14;
  FUN_109380ffc(&uStack_b0);
  auStack_c8[0] = 0;
  uStack_c0 = 0;
  plVar16 = (long *)(param_1 + 0xa0);
  plVar21 = (long *)*plVar16;
  plVar15 = plVar16;
  if (plVar21 == (long *)0x0) {
LAB_1098c3134:
    __ZNSt3__19to_stringEj(auStack_100);
    param_3 = (long *)&UNK_10f586bd3;
    puVar9 = auStack_100;
    param_4 = (long *)0x6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(puVar9,0);
    puVar28 = (undefined1 *)*puVar9;
    uStack_68 = (undefined7)puVar9[1];
    uStack_61 = (undefined1)*(undefined8 *)((long)puVar9 + 0xf);
    uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)puVar9 + 0xf) >> 8);
    uVar5 = *(undefined1 *)((long)puVar9 + 0x17);
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    puStack_e0 = (undefined8 *)0x0;
    uStack_e8 = 3;
    puVar9 = (undefined8 *)0x18;
    __Znwm();
    *puVar9 = puVar28;
    puVar9[1] = CONCAT17(uStack_61,uStack_68);
    *(ulong *)((long)puVar9 + 0xf) = CONCAT71(uStack_60,uStack_61);
    *(undefined1 *)((long)puVar9 + 0x17) = uVar5;
    puVar10 = auStack_c8;
    puStack_e0 = puVar9;
    FUN_10945a80c(puVar10,&DAT_10f68f148);
    uStack_e8 = *puVar10;
    *puVar10 = 3;
    puVar9 = *(undefined8 **)(puVar10 + 8);
    *(undefined8 **)(puVar10 + 8) = puStack_e0;
    puStack_e0 = puVar9;
    FUN_109380ffc(&puStack_e0);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  else {
    do {
      lVar20 = 8;
      if (*(uint *)(param_2 + 0x18) <= *(uint *)(plVar21 + 4)) {
        lVar20 = 0;
        plVar15 = plVar21;
      }
      plVar21 = *(long **)((long)plVar21 + lVar20);
    } while (plVar21 != (long *)0x0);
    if ((plVar15 == plVar16) || (*(uint *)(param_2 + 0x18) < *(uint *)(plVar15 + 4)))
    goto LAB_1098c3134;
    plStack_d0 = (long *)0x0;
    auStack_d8[0] = 3;
    plVar15 = plVar15 + 5;
    FUN_10938229c();
    puVar28 = auStack_d8;
    puVar10 = auStack_c8;
    plStack_d0 = plVar15;
    FUN_10945a80c(puVar10,&DAT_10f68f148);
    uVar5 = *puVar10;
    *puVar10 = auStack_d8[0];
    plVar15 = *(long **)(puVar10 + 8);
    auStack_d8[0] = uVar5;
    *(long **)(puVar10 + 8) = plStack_d0;
    plStack_d0 = plVar15;
    FUN_109380ffc(&plStack_d0);
  }
  FUN_109381b20(abStack_110,auStack_c8);
  pbVar8 = abStack_78;
  FUN_10945a80c(pbVar8,&UNK_10f42a4d5);
  bVar3 = *pbVar8;
  *pbVar8 = abStack_110[0];
  uVar13 = *(undefined8 *)(pbVar8 + 8);
  abStack_110[0] = bVar3;
  *(undefined8 *)(pbVar8 + 8) = uStack_108;
  uStack_108 = uVar13;
  FUN_109380ffc(&uStack_108);
  FUN_1098c6200(param_1 + 0x18,abStack_78);
  FUN_109380ffc(&uStack_c0,auStack_c8[0]);
  puVar9 = &uStack_70;
  FUN_109380ffc(puVar9,abStack_78[0]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_109380ffc(puVar28 + 8,auStack_d8[0]);
  FUN_109380ffc(&uStack_c0,auStack_c8[0]);
  puVar11 = (undefined8 *)(ulong)abStack_78[0];
  FUN_109380ffc(&uStack_70);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar29 = puVar9 + 0xe;
  puVar17 = (undefined8 *)*puVar29;
  if (puVar17 == (undefined8 *)0x0) {
    uStack_1e0 = puVar9[2];
    puVar22 = puVar29;
    puVar25 = puVar29;
LAB_1098c34a8:
    uVar13 = uStack_1e0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puVar17 = puVar9 + 0xf;
    FUN_1098c717c();
    *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar11 + 3);
    puVar17[9] = uVar13;
    puVar17[6] = 0;
    puVar17[7] = 0;
    puVar17[5] = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_200 = 0;
    FUN_1098c7128(puVar9 + 0xd,puVar22,puVar25,puVar17);
LAB_1098c34e0:
    FUN_1098c69d4(&uStack_200);
  }
  else {
    uVar2 = *(uint *)(puVar11 + 3);
    puVar22 = puVar29;
    puVar25 = puVar17;
    do {
      lVar20 = 8;
      if (uVar2 <= *(uint *)(puVar25 + 4)) {
        lVar20 = 0;
        puVar22 = puVar25;
      }
      puVar25 = *(undefined8 **)((long)puVar25 + lVar20);
    } while (puVar25 != (undefined8 *)0x0);
    if ((puVar22 == puVar29) || (uVar2 < *(uint *)(puVar22 + 4))) {
      uStack_1e0 = puVar9[2];
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      do {
        while (puVar22 = puVar17, uVar2 < *(uint *)(puVar22 + 4)) {
          puVar17 = (undefined8 *)*puVar22;
          puVar25 = puVar22;
          if ((undefined8 *)*puVar22 == (undefined8 *)0x0) goto LAB_1098c34a8;
        }
        if (uVar2 <= *(uint *)(puVar22 + 4)) goto LAB_1098c34e0;
        puVar17 = (undefined8 *)puVar22[1];
      } while ((undefined8 *)puVar22[1] != (undefined8 *)0x0);
      puVar25 = puVar22 + 1;
      goto LAB_1098c34a8;
    }
  }
  uStack_1f8 = puVar11[1];
  uStack_200 = *puVar11;
  uStack_1e8 = puVar11[3];
  uStack_1f0 = puVar11[2];
  plStack_1d8 = (long *)0x0;
  uStack_1e0 = 0;
  plStack_1c8 = (long *)0x0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  cVar4 = *(char *)((long)puVar11 + 0x1e);
  if (cVar4 == '\x10') {
    if (*param_5 != 0) {
      func_0x0001098c64a4(&uStack_1c0,param_5);
    }
  }
  else if (cVar4 == '\r') {
    lVar20 = *param_4;
    if (lVar20 != 0) {
      plStack_1c8 = (long *)param_4[1];
      *param_4 = 0;
      param_4[1] = 0;
      lStack_1d0 = lVar20;
    }
  }
  else if ((cVar4 == '\x04') && (*param_3 != 0)) {
    FUN_1098c6440(&uStack_1e0,param_3);
  }
  puVar17 = puVar29;
  if ((undefined8 *)*puVar29 != (undefined8 *)0x0) {
    puVar22 = (undefined8 *)*puVar29;
    do {
      while (puVar25 = puVar22, puVar29 = puVar25, *(uint *)(puVar11 + 3) < *(uint *)(puVar25 + 4))
      {
        puVar22 = (undefined8 *)*puVar25;
        puVar17 = puVar25;
        if ((undefined8 *)*puVar25 == (undefined8 *)0x0) goto LAB_1098c35a4;
      }
      if (*(uint *)(puVar11 + 3) <= *(uint *)(puVar25 + 4)) goto LAB_1098c35dc;
      puVar22 = (undefined8 *)puVar25[1];
    } while ((undefined8 *)puVar25[1] != (undefined8 *)0x0);
    puVar17 = puVar25 + 1;
  }
LAB_1098c35a4:
  puVar25 = puVar9 + 0xf;
  FUN_1098c717c();
  *(undefined4 *)(puVar25 + 4) = *(undefined4 *)(puVar11 + 3);
  puVar25[9] = 0;
  puVar25[6] = 0;
  puVar25[7] = 0;
  puVar25[5] = 0;
  FUN_1098c7128(puVar9 + 0xd,puVar29,puVar17,puVar25);
LAB_1098c35dc:
  puVar9 = (undefined8 *)puVar25[6];
  if (puVar9 < (undefined8 *)puVar25[7]) {
    puVar9[1] = uStack_1f8;
    *puVar9 = uStack_200;
    puVar9[3] = uStack_1e8;
    puVar9[2] = uStack_1f0;
    puVar9[5] = plStack_1d8;
    puVar9[4] = uStack_1e0;
    uStack_1e0 = 0;
    plStack_1d8 = (long *)0x0;
    puVar9[7] = plStack_1c8;
    puVar9[6] = lStack_1d0;
    lStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    puVar9[9] = plStack_1b8;
    puVar9[8] = uStack_1c0;
    uStack_1c0 = 0;
    plStack_1b8 = (long *)0x0;
    puVar9 = puVar9 + 0xc;
LAB_1098c3804:
    plVar15 = plStack_1b8;
    puVar25[6] = puVar9;
    if (plStack_1b8 != (long *)0x0) {
      plVar16 = plStack_1b8 + 1;
      do {
        lVar20 = *plVar16;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar15 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      plVar16 = plStack_1c8 + 1;
      do {
        lVar20 = *plVar16;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    plVar15 = plStack_1d8;
    if (plStack_1d8 != (long *)0x0) {
      plVar16 = plStack_1d8 + 1;
      do {
        lVar20 = *plVar16;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar20 = (long)puVar9 - puVar25[5];
    uVar14 = (lVar20 >> 5) * -0x5555555555555555 + 1;
    if (uVar14 < 0x2aaaaaaaaaaaaab) {
      lVar23 = (long)puVar25[7] - puVar25[5] >> 5;
      uVar24 = lVar23 * 0x5555555555555556;
      if (uVar24 < uVar14 || uVar24 - uVar14 == 0) {
        uVar24 = uVar14;
      }
      if (0x155555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
        uVar24 = 0x2aaaaaaaaaaaaaa;
      }
      puVar18 = (ulong *)puVar25[9];
      lVar23 = uVar24 * 0x60;
      uVar14 = puVar18[1] + uVar24 * 0x60;
      if (uVar14 <= *puVar18) {
        puVar1 = puVar18 + 1;
        uVar27 = puVar18[1];
        do {
          uVar26 = *puVar1;
          if (uVar26 == uVar27) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar14;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_1098c36c0;
            if (uVar24 < 0x2aaaaaaaaaaaaab) {
              __ZnwmSt11align_val_t(lVar23,0x20);
              plVar15 = plStack_1d8;
              uVar13 = uStack_1e0;
              puVar9 = (undefined8 *)(lVar23 + lVar20);
              puVar9[1] = uStack_1f8;
              *puVar9 = uStack_200;
              puVar9[3] = uStack_1e8;
              puVar9[2] = uStack_1f0;
              uStack_1e0 = 0;
              plStack_1d8 = (long *)0x0;
              puVar9[5] = plVar15;
              puVar9[4] = uVar13;
              puVar9[7] = plStack_1c8;
              puVar9[6] = lStack_1d0;
              lStack_1d0 = 0;
              plStack_1c8 = (long *)0x0;
              puVar9[9] = plStack_1b8;
              puVar9[8] = uStack_1c0;
              uStack_1c0 = 0;
              plStack_1b8 = (long *)0x0;
              puVar29 = (undefined8 *)puVar25[5];
              puVar22 = (undefined8 *)puVar25[6];
              puVar11 = (undefined8 *)((long)puVar9 + ((long)puVar29 - (long)puVar22));
              puVar17 = puVar29;
              puVar19 = puVar11;
              if ((long)puVar29 - (long)puVar22 != 0) {
                do {
                  uVar13 = *puVar17;
                  uVar31 = puVar17[3];
                  uVar30 = puVar17[2];
                  puVar19[1] = puVar17[1];
                  *puVar19 = uVar13;
                  puVar19[3] = uVar31;
                  puVar19[2] = uVar30;
                  uVar13 = puVar17[4];
                  puVar19[5] = puVar17[5];
                  puVar19[4] = uVar13;
                  puVar17[4] = 0;
                  puVar17[5] = 0;
                  uVar13 = puVar17[6];
                  puVar19[7] = puVar17[7];
                  puVar19[6] = uVar13;
                  puVar17[6] = 0;
                  puVar17[7] = 0;
                  uVar13 = puVar17[8];
                  puVar19[9] = puVar17[9];
                  puVar19[8] = uVar13;
                  puVar17[8] = 0;
                  puVar17[9] = 0;
                  puVar17 = puVar17 + 0xc;
                  puVar19 = puVar19 + 0xc;
                } while (puVar17 != puVar22);
                do {
                  func_0x0001098c6b4c(puVar29 + 8);
                  func_0x0001098c6af4(puVar29 + 6);
                  func_0x0001098c6a9c(puVar29 + 4);
                  puVar29 = puVar29 + 0xc;
                } while (puVar29 != puVar22);
                puVar29 = (undefined8 *)puVar25[5];
              }
              puVar9 = puVar9 + 0xc;
              puVar25[5] = puVar11;
              puVar25[6] = puVar9;
              lVar20 = puVar25[7];
              puVar25[7] = lVar23 + uVar24 * 0x60;
              if (puVar29 != (undefined8 *)0x0) {
                plVar15 = (long *)(puVar25[9] + 8);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar6) {
                    *plVar15 = *plVar15 - (lVar20 - (long)puVar29);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPvSt11align_val_t(puVar29,0x20);
              }
              goto LAB_1098c3804;
            }
            func_0x000104c4f740();
            goto LAB_1098c3944;
          }
          ClearExclusiveLocal();
LAB_1098c36c0:
          uVar14 = uVar26 + lVar23;
          uVar27 = uVar26;
        } while (uVar14 <= *puVar18);
      }
      lStack_208 = lVar23;
      FUN_1098c692c(&lStack_208);
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098c3944;
    }
  }
  FUN_1098c6a88();
LAB_1098c3944:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1098c3948);
  (*pcVar7)();
}



/* Entry: 1098c33b0; end: 1098c3977;  */

void FUN_1098c33b0(long param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = (long *)(param_1 + 0x70);
  plVar9 = (long *)*plVar21;
  if (plVar9 == (long *)0x0) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x10);
    plVar14 = plVar21;
    plVar17 = plVar21;
LAB_1098c34a8:
    uVar23 = uStack_c0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar13 = param_1 + 0x78;
    FUN_1098c717c();
    *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)(lVar13 + 0x48) = uVar23;
    *(undefined8 *)(lVar13 + 0x30) = 0;
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined8 *)(lVar13 + 0x28) = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    FUN_1098c7128(param_1 + 0x68,plVar14,plVar17,lVar13);
LAB_1098c34e0:
    FUN_1098c69d4(&uStack_e0);
  }
  else {
    uVar4 = *(uint *)(param_2 + 3);
    plVar14 = plVar21;
    plVar17 = plVar9;
    do {
      lVar13 = 8;
      if (uVar4 <= *(uint *)(plVar17 + 4)) {
        lVar13 = 0;
        plVar14 = plVar17;
      }
      plVar17 = *(long **)((long)plVar17 + lVar13);
    } while (plVar17 != (long *)0x0);
    if ((plVar14 == plVar21) || (uVar4 < *(uint *)(plVar14 + 4))) {
      uStack_c0 = *(undefined8 *)(param_1 + 0x10);
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      do {
        while (plVar14 = plVar9, uVar4 < *(uint *)(plVar14 + 4)) {
          plVar9 = (long *)*plVar14;
          plVar17 = plVar14;
          if ((long *)*plVar14 == (long *)0x0) goto LAB_1098c34a8;
        }
        if (uVar4 <= *(uint *)(plVar14 + 4)) goto LAB_1098c34e0;
        plVar9 = (long *)plVar14[1];
      } while ((long *)plVar14[1] != (long *)0x0);
      plVar17 = plVar14 + 1;
      goto LAB_1098c34a8;
    }
  }
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  plStack_a8 = (long *)0x0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  cVar5 = *(char *)((long)param_2 + 0x1e);
  if (cVar5 == '\x10') {
    if (*param_5 != 0) {
      func_0x0001098c64a4(&uStack_a0,param_5);
    }
  }
  else if (cVar5 == '\r') {
    lVar13 = *param_4;
    if (lVar13 != 0) {
      plStack_a8 = (long *)param_4[1];
      *param_4 = 0;
      param_4[1] = 0;
      lStack_b0 = lVar13;
    }
  }
  else if ((cVar5 == '\x04') && (*param_3 != 0)) {
    FUN_1098c6440(&uStack_c0,param_3);
  }
  plVar9 = plVar21;
  if ((long *)*plVar21 != (long *)0x0) {
    plVar14 = (long *)*plVar21;
    do {
      while (plVar17 = plVar14, plVar21 = plVar17, *(uint *)(param_2 + 3) < *(uint *)(plVar17 + 4))
      {
        plVar14 = (long *)*plVar17;
        plVar9 = plVar17;
        if ((long *)*plVar17 == (long *)0x0) goto LAB_1098c35a4;
      }
      if (*(uint *)(param_2 + 3) <= *(uint *)(plVar17 + 4)) goto LAB_1098c35dc;
      plVar14 = (long *)plVar17[1];
    } while ((long *)plVar17[1] != (long *)0x0);
    plVar9 = plVar17 + 1;
  }
LAB_1098c35a4:
  plVar17 = (long *)(param_1 + 0x78);
  FUN_1098c717c();
  *(undefined4 *)(plVar17 + 4) = *(undefined4 *)(param_2 + 3);
  plVar17[9] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[5] = 0;
  FUN_1098c7128(param_1 + 0x68,plVar21,plVar9,plVar17);
LAB_1098c35dc:
  puVar22 = (undefined8 *)plVar17[6];
  if (puVar22 < (undefined8 *)plVar17[7]) {
    puVar22[1] = uStack_d8;
    *puVar22 = uStack_e0;
    puVar22[3] = uStack_c8;
    puVar22[2] = uStack_d0;
    puVar22[5] = plStack_b8;
    puVar22[4] = uStack_c0;
    uStack_c0 = 0;
    plStack_b8 = (long *)0x0;
    puVar22[7] = plStack_a8;
    puVar22[6] = lStack_b0;
    lStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    puVar22[9] = plStack_98;
    puVar22[8] = uStack_a0;
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    puVar22 = puVar22 + 0xc;
LAB_1098c3804:
    plVar9 = plStack_98;
    plVar17[6] = (long)puVar22;
    if (plStack_98 != (long *)0x0) {
      plVar21 = plStack_98 + 1;
      do {
        lVar13 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar21 = plStack_a8 + 1;
      do {
        lVar13 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar21 = plStack_b8 + 1;
      do {
        lVar13 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar13 = (long)puVar22 - plVar17[5];
    uVar10 = (lVar13 >> 5) * -0x5555555555555555 + 1;
    if (uVar10 < 0x2aaaaaaaaaaaaab) {
      lVar15 = plVar17[7] - plVar17[5] >> 5;
      uVar16 = lVar15 * 0x5555555555555556;
      if (uVar16 < uVar10 || uVar16 - uVar10 == 0) {
        uVar16 = uVar10;
      }
      if (0x155555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
        uVar16 = 0x2aaaaaaaaaaaaaa;
      }
      puVar11 = (ulong *)plVar17[9];
      lVar15 = uVar16 * 0x60;
      uVar10 = puVar11[1] + uVar16 * 0x60;
      if (uVar10 <= *puVar11) {
        puVar1 = puVar11 + 1;
        uVar19 = puVar11[1];
        do {
          uVar18 = *puVar1;
          if (uVar18 == uVar19) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_1098c36c0;
            if (uVar16 < 0x2aaaaaaaaaaaaab) {
              __ZnwmSt11align_val_t(lVar15,0x20);
              plVar9 = plStack_b8;
              uVar23 = uStack_c0;
              puVar22 = (undefined8 *)(lVar15 + lVar13);
              puVar22[1] = uStack_d8;
              *puVar22 = uStack_e0;
              puVar22[3] = uStack_c8;
              puVar22[2] = uStack_d0;
              uStack_c0 = 0;
              plStack_b8 = (long *)0x0;
              puVar22[5] = plVar9;
              puVar22[4] = uVar23;
              puVar22[7] = plStack_a8;
              puVar22[6] = lStack_b0;
              lStack_b0 = 0;
              plStack_a8 = (long *)0x0;
              puVar22[9] = plStack_98;
              puVar22[8] = uStack_a0;
              uStack_a0 = 0;
              plStack_98 = (long *)0x0;
              puVar20 = (undefined8 *)plVar17[5];
              puVar3 = (undefined8 *)plVar17[6];
              puVar2 = (undefined8 *)((long)puVar22 + ((long)puVar20 - (long)puVar3));
              puVar8 = puVar20;
              puVar12 = puVar2;
              if ((long)puVar20 - (long)puVar3 != 0) {
                do {
                  uVar23 = *puVar8;
                  uVar25 = puVar8[3];
                  uVar24 = puVar8[2];
                  puVar12[1] = puVar8[1];
                  *puVar12 = uVar23;
                  puVar12[3] = uVar25;
                  puVar12[2] = uVar24;
                  uVar23 = puVar8[4];
                  puVar12[5] = puVar8[5];
                  puVar12[4] = uVar23;
                  puVar8[4] = 0;
                  puVar8[5] = 0;
                  uVar23 = puVar8[6];
                  puVar12[7] = puVar8[7];
                  puVar12[6] = uVar23;
                  puVar8[6] = 0;
                  puVar8[7] = 0;
                  uVar23 = puVar8[8];
                  puVar12[9] = puVar8[9];
                  puVar12[8] = uVar23;
                  puVar8[8] = 0;
                  puVar8[9] = 0;
                  puVar8 = puVar8 + 0xc;
                  puVar12 = puVar12 + 0xc;
                } while (puVar8 != puVar3);
                do {
                  func_0x0001098c6b4c(puVar20 + 8);
                  func_0x0001098c6af4(puVar20 + 6);
                  func_0x0001098c6a9c(puVar20 + 4);
                  puVar20 = puVar20 + 0xc;
                } while (puVar20 != puVar3);
                puVar20 = (undefined8 *)plVar17[5];
              }
              puVar22 = puVar22 + 0xc;
              plVar17[5] = (long)puVar2;
              plVar17[6] = (long)puVar22;
              lVar13 = plVar17[7];
              plVar17[7] = lVar15 + uVar16 * 0x60;
              if (puVar20 != (undefined8 *)0x0) {
                plVar9 = (long *)(plVar17[9] + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar6) {
                    *plVar9 = *plVar9 - (lVar13 - (long)puVar20);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                __ZdlPvSt11align_val_t(puVar20,0x20);
              }
              goto LAB_1098c3804;
            }
            func_0x000104c4f740();
            goto LAB_1098c3944;
          }
          ClearExclusiveLocal();
LAB_1098c36c0:
          uVar10 = uVar18 + lVar15;
          uVar19 = uVar18;
        } while (uVar10 <= *puVar11);
      }
      lStack_e8 = lVar15;
      FUN_1098c692c(&lStack_e8);
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098c3944;
    }
  }
  FUN_1098c6a88();
LAB_1098c3944:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1098c3948);
  (*pcVar7)();
}



/* Entry: 1098c3978; end: 1098c410f;  */

void FUN_1098c3978(long *param_1,long param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  char **ppcVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 uStack_148;
  char **ppcStack_140;
  undefined1 uStack_138;
  ulong *puStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined1 uStack_118;
  long lStack_110;
  undefined1 uStack_108;
  long lStack_100;
  char *pcStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  ulong *puStack_d8;
  undefined1 uStack_d0;
  ulong uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  plVar15 = param_1 + 0xe;
  plVar16 = (long *)*plVar15;
  if (plVar16 == (long *)0x0) {
    return;
  }
  plVar8 = plVar15;
  do {
    lVar14 = 8;
    if (*(uint *)(param_2 + 0x18) <= *(uint *)(plVar16 + 4)) {
      lVar14 = 0;
      plVar8 = plVar16;
    }
    plVar16 = *(long **)((long)plVar16 + lVar14);
  } while (plVar16 != (long *)0x0);
  if (plVar8 == plVar15) {
    return;
  }
  if (*(uint *)(param_2 + 0x18) < *(uint *)(plVar8 + 4)) {
    return;
  }
  lVar14 = plVar8[6];
  if (plVar8[5] == lVar14) {
    return;
  }
  pcVar1 = *(char **)(lVar14 + -0x60);
  puVar13 = *(undefined8 **)(lVar14 + -0x58);
  uVar19 = *(ulong *)(lVar14 + -0x50);
  cVar4 = *(char *)(lVar14 + -0x42);
  plStack_78 = *(long **)(lVar14 + -0x38);
  uStack_80 = *(undefined8 *)(lVar14 + -0x40);
  *(undefined8 *)(lVar14 + -0x40) = 0;
  *(undefined8 *)(lVar14 + -0x38) = 0;
  lVar14 = plVar8[6];
  plStack_88 = *(long **)(lVar14 + -0x28);
  uStack_90 = *(undefined8 *)(lVar14 + -0x30);
  *(undefined8 *)(lVar14 + -0x30) = 0;
  *(undefined8 *)(lVar14 + -0x28) = 0;
  lVar14 = plVar8[6];
  puVar17 = *(undefined8 **)(lVar14 + -0x20);
  plVar15 = *(long **)(lVar14 + -0x18);
  *(undefined8 *)(lVar14 + -0x20) = 0;
  *(undefined8 *)(lVar14 + -0x18) = 0;
  puStack_a0 = puVar17;
  plStack_98 = plVar15;
  FUN_1098c6a28(plVar8 + 5,plVar8[6] + -0x60);
  uVar18 = *(ulong *)(param_2 + 0x10);
  auStack_b0[0] = 0;
  uStack_a8 = 0;
  uStack_c0 = 5;
  uStack_b8 = 1;
  puVar5 = auStack_b0;
  FUN_10945a80c(puVar5,&DAT_10f2f98f2);
  uVar3 = *puVar5;
  *puVar5 = uStack_c0;
  uVar9 = *(undefined8 *)(puVar5 + 8);
  uStack_c0 = uVar3;
  *(undefined8 *)(puVar5 + 8) = uStack_b8;
  uStack_b8 = uVar9;
  FUN_109380ffc(&uStack_b8);
  uStack_c8 = (ulong)*(uint *)(param_2 + 0x18);
  uStack_d0 = 6;
  puVar5 = auStack_b0;
  FUN_10945a80c(puVar5,&DAT_10f586bcf);
  uVar3 = *puVar5;
  *puVar5 = uStack_d0;
  uVar10 = *(ulong *)(puVar5 + 8);
  uStack_d0 = uVar3;
  *(ulong *)(puVar5 + 8) = uStack_c8;
  uStack_c8 = uVar10;
  FUN_109380ffc(&uStack_c8);
  __ZNSt3__19to_stringEi(&pcStack_f8,*(undefined2 *)(param_2 + 0x1c));
  puStack_d8 = (ulong *)0x0;
  uStack_e0 = 3;
  puVar6 = (ulong *)0x18;
  __Znwm();
  puVar6[1] = uStack_f0;
  *puVar6 = (ulong)pcStack_f8;
  puVar6[2] = uStack_e8;
  uStack_f0 = 0;
  uStack_e8 = 0;
  pcStack_f8 = (char *)0x0;
  puVar5 = auStack_b0;
  puStack_d8 = puVar6;
  FUN_10945a80c(puVar5,&DAT_10f5139bb);
  uVar19 = uVar19 >> 3;
  uVar3 = *puVar5;
  *puVar5 = uStack_e0;
  puVar6 = *(ulong **)(puVar5 + 8);
  uStack_e0 = uVar3;
  *(ulong **)(puVar5 + 8) = puStack_d8;
  puStack_d8 = puVar6;
  FUN_109380ffc(&puStack_d8);
  if ((long)uStack_e8 < 0) {
    __ZdlPv(pcStack_f8);
  }
  lStack_100 = uVar19 / 0x7d - *param_1;
  uStack_108 = 6;
  puVar5 = auStack_b0;
  FUN_10945a80c(puVar5,&DAT_10f2f98f9);
  uVar3 = *puVar5;
  *puVar5 = uStack_108;
  lVar14 = *(long *)(puVar5 + 8);
  uStack_108 = uVar3;
  *(long *)(puVar5 + 8) = lStack_100;
  lStack_100 = lVar14;
  FUN_109380ffc(&lStack_100);
  uStack_118 = 5;
  puVar5 = auStack_b0;
  lStack_110 = uVar18 / 1000 - uVar19 / 0x7d;
  FUN_10945a80c(puVar5,&UNK_10f586bda);
  uVar3 = *puVar5;
  *puVar5 = uStack_118;
  lVar14 = *(long *)(puVar5 + 8);
  uStack_118 = uVar3;
  *(long *)(puVar5 + 8) = lStack_110;
  lStack_110 = lVar14;
  FUN_109380ffc(&lStack_110);
  puStack_120 = (undefined *)0x0;
  uStack_128 = 3;
  puVar11 = &DAT_10f31a21b;
  FUN_1098c70e0();
  puVar5 = auStack_b0;
  puStack_120 = puVar11;
  FUN_10945a80c(puVar5,&DAT_10f586bcc);
  uVar3 = *puVar5;
  *puVar5 = uStack_128;
  puVar11 = *(undefined **)(puVar5 + 8);
  uStack_128 = uVar3;
  *(undefined **)(puVar5 + 8) = puStack_120;
  puStack_120 = puVar11;
  FUN_109380ffc(&puStack_120);
  if ((cVar4 == '\x10') && (puVar17 != (undefined8 *)0x0)) {
    lVar14 = (long)*(char *)((long)puVar17 + 0x17);
    puVar13 = puVar17;
    if (lVar14 < 0) {
      lVar14 = puVar17[1];
      puVar13 = (undefined8 *)*puVar17;
    }
    func_0x000104c54c8c(&pcStack_f8,puVar13,lVar14);
    puStack_130 = (ulong *)0x0;
    uStack_138 = 3;
    puVar6 = (ulong *)0x18;
    __Znwm();
    puVar6[1] = uStack_f0;
    *puVar6 = (ulong)pcStack_f8;
    puVar6[2] = uStack_e8;
    uStack_f0 = 0;
    uStack_e8 = 0;
    pcStack_f8 = (char *)0x0;
    puVar5 = auStack_b0;
    puStack_130 = puVar6;
    FUN_10945a80c(puVar5,&DAT_10f68f148);
    uVar3 = *puVar5;
    *puVar5 = uStack_138;
    puVar6 = *(ulong **)(puVar5 + 8);
    uStack_138 = uVar3;
    *(ulong **)(puVar5 + 8) = puStack_130;
    puStack_130 = puVar6;
    FUN_109380ffc(&puStack_130);
    if ((long)uStack_e8 < 0) {
      __ZdlPv(pcStack_f8);
    }
    pcStack_f8 = (char *)((ulong)pcStack_f8 & 0xffffffffffffff00);
    uStack_f0 = 0;
    FUN_1098c60b8(&pcStack_f8,puVar17 + 0xd);
    if (puVar17[0x12] != 0) {
      func_0x0001098c613c(param_1[0x12],&pcStack_f8);
    }
    puVar2 = (undefined8 *)puVar17[0x14];
    for (puVar13 = (undefined8 *)puVar17[0x13]; puVar13 != puVar2; puVar13 = puVar13 + 1) {
      func_0x0001098c613c(param_1[0x12],&pcStack_f8,*puVar13);
    }
LAB_1098c3e60:
    bVar7 = true;
  }
  else {
    pcStack_f8 = "unknown";
    if (pcVar1 != (char *)0x0) {
      pcStack_f8 = pcVar1;
    }
    ppcStack_140 = (char **)0x0;
    uStack_148 = 3;
    ppcVar12 = &pcStack_f8;
    FUN_1098c7050();
    puVar5 = auStack_b0;
    ppcStack_140 = ppcVar12;
    FUN_10945a80c(puVar5,&DAT_10f68f148);
    uVar3 = *puVar5;
    *puVar5 = uStack_148;
    ppcVar12 = *(char ***)(puVar5 + 8);
    uStack_148 = uVar3;
    *(char ***)(puVar5 + 8) = ppcStack_140;
    ppcStack_140 = ppcVar12;
    FUN_109380ffc(&ppcStack_140);
    pcStack_f8 = (char *)((ulong)pcStack_f8 & 0xffffffffffffff00);
    uStack_f0 = 0;
    if (cVar4 == '\r') {
      if (puVar13 != (undefined8 *)0x0) {
        puVar17 = (undefined8 *)puVar13[1];
        for (puVar13 = (undefined8 *)*puVar13; puVar13 != puVar17; puVar13 = puVar13 + 1) {
          func_0x0001098c613c(param_1[0x12],&pcStack_f8,*puVar13);
        }
      }
      goto LAB_1098c3e60;
    }
    if (cVar4 == '\x05') {
      func_0x0001098c613c(param_1[0x12],&pcStack_f8,puVar13);
      goto LAB_1098c3e60;
    }
    if (cVar4 == '\x04') {
      FUN_1098c60b8(&pcStack_f8,puVar13);
      goto LAB_1098c3e60;
    }
    bVar7 = false;
  }
  cVar4 = *(char *)(param_2 + 0x1e);
  if (cVar4 == '\x0e') {
    puVar13 = *(undefined8 **)(param_2 + 8);
    if (puVar13 != (undefined8 *)0x0) {
      puVar17 = (undefined8 *)puVar13[1];
      for (puVar13 = (undefined8 *)*puVar13; puVar13 != puVar17; puVar13 = puVar13 + 1) {
        func_0x0001098c613c(param_1[0x12],&pcStack_f8,*puVar13);
      }
    }
  }
  else if (cVar4 == '\b') {
    func_0x0001098c613c(param_1[0x12],&pcStack_f8,*(undefined8 *)(param_2 + 8));
  }
  else if (cVar4 == '\a') {
    FUN_1098c60b8(&pcStack_f8,*(undefined8 *)(param_2 + 8));
  }
  else if (!bVar7) goto LAB_1098c3f18;
  FUN_109381b20(auStack_158,&pcStack_f8);
  puVar5 = auStack_b0;
  FUN_10945a80c(puVar5,&UNK_10f42a4d5);
  uVar3 = *puVar5;
  *puVar5 = auStack_158[0];
  uVar9 = *(undefined8 *)(puVar5 + 8);
  auStack_158[0] = uVar3;
  *(undefined8 *)(puVar5 + 8) = uStack_150;
  uStack_150 = uVar9;
  FUN_109380ffc(&uStack_150);
LAB_1098c3f18:
  FUN_1098c6200(param_1 + 3,auStack_b0);
  FUN_109380ffc(&uStack_f0,(ulong)pcStack_f8 & 0xff);
  FUN_109380ffc(&uStack_a8,auStack_b0[0]);
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 1;
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar16 = plStack_88 + 1;
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar16 = plStack_78 + 1;
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  return;
}



/* Entry: 1098c4110; end: 1098c460b;  */

void FUN_1098c4110(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  ulong uStack_100;
  undefined1 auStack_f8 [8];
  ulong uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong *puStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  ulong *puStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  auStack_60[0] = 0;
  uStack_58 = 0;
  uVar11 = param_2[2];
  lVar10 = *param_1;
  uStack_70 = 5;
  uStack_68 = 1;
  puVar4 = auStack_60;
  FUN_10945a80c(puVar4,&DAT_10f2f98f2);
  uVar2 = *puVar4;
  *puVar4 = uStack_70;
  uVar7 = *(undefined8 *)(puVar4 + 8);
  uStack_70 = uVar2;
  *(undefined8 *)(puVar4 + 8) = uStack_68;
  uStack_68 = uVar7;
  FUN_109380ffc(&uStack_68);
  uStack_78 = (ulong)*(uint *)(param_2 + 3);
  uStack_80 = 6;
  puVar4 = auStack_60;
  FUN_10945a80c(puVar4,&DAT_10f586bcf);
  uVar2 = *puVar4;
  *puVar4 = uStack_80;
  uVar8 = *(ulong *)(puVar4 + 8);
  uStack_80 = uVar2;
  *(ulong *)(puVar4 + 8) = uStack_78;
  uStack_78 = uVar8;
  FUN_109380ffc(&uStack_78);
  __ZNSt3__19to_stringEi(&puStack_a8,*(undefined2 *)((long)param_2 + 0x1c));
  puStack_88 = (ulong *)0x0;
  uStack_90 = 3;
  puVar5 = (ulong *)0x18;
  __Znwm();
  puVar5[1] = uStack_a0;
  *puVar5 = (ulong)puStack_a8;
  puVar5[2] = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = (undefined *)0x0;
  puVar4 = auStack_60;
  puStack_88 = puVar5;
  FUN_10945a80c(puVar4,&DAT_10f5139bb);
  uVar2 = *puVar4;
  *puVar4 = uStack_90;
  puVar5 = *(ulong **)(puVar4 + 8);
  uStack_90 = uVar2;
  *(ulong **)(puVar4 + 8) = puStack_88;
  puStack_88 = puVar5;
  FUN_109380ffc(&puStack_88);
  if ((long)uStack_98 < 0) {
    __ZdlPv(puStack_a8);
  }
  uStack_b8 = 5;
  puVar4 = auStack_60;
  lStack_b0 = uVar11 / 1000 - lVar10;
  FUN_10945a80c(puVar4,&DAT_10f2f98f9);
  uStack_b8 = *puVar4;
  *puVar4 = 5;
  lVar10 = *(long *)(puVar4 + 8);
  *(long *)(puVar4 + 8) = lStack_b0;
  lStack_b0 = lVar10;
  FUN_109380ffc(&lStack_b0);
  puStack_c0 = (undefined *)0x0;
  uStack_c8 = 3;
  puVar9 = &DAT_10f31a1fb;
  FUN_1098c70e0();
  puVar4 = auStack_60;
  puStack_c0 = puVar9;
  FUN_10945a80c(puVar4,&DAT_10f586bcc);
  uStack_c8 = *puVar4;
  *puVar4 = 3;
  puVar9 = *(undefined **)(puVar4 + 8);
  *(undefined **)(puVar4 + 8) = puStack_c0;
  puStack_c0 = puVar9;
  FUN_109380ffc(&puStack_c0);
  puStack_a8 = &DAT_10f2e4588;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puStack_a8 = (undefined *)*param_2;
  }
  puStack_d0 = (ulong *)0x0;
  uStack_d8 = 3;
  ppuVar6 = &puStack_a8;
  FUN_1098c7050();
  puVar4 = auStack_60;
  puStack_d0 = (ulong *)ppuVar6;
  FUN_10945a80c(puVar4,&DAT_10f68f148);
  uStack_d8 = *puVar4;
  *puVar4 = 3;
  puVar5 = *(ulong **)(puVar4 + 8);
  *(ulong **)(puVar4 + 8) = puStack_d0;
  puStack_d0 = puVar5;
  FUN_109380ffc(&puStack_d0);
  puStack_a8 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff00);
  uStack_a0 = 0;
  cVar3 = *(char *)((long)param_2 + 0x1f);
  if (cVar3 == '\x02') {
    puVar4 = auStack_e8;
    auStack_e8[0] = 5;
    uStack_e0 = param_2[1];
    pcVar1 = "value";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar1 = (char *)*param_2;
    }
    ppuVar6 = &puStack_a8;
    FUN_10945a80c(ppuVar6,pcVar1);
    auStack_e8[0] = *(undefined1 *)ppuVar6;
    *(undefined1 *)ppuVar6 = 5;
    puVar9 = ppuVar6[1];
    ppuVar6[1] = (undefined *)uStack_e0;
    uStack_e0 = (ulong)puVar9;
  }
  else if (cVar3 == '\x03') {
    puVar4 = auStack_f8;
    auStack_f8[0] = 6;
    uStack_f0 = param_2[1];
    pcVar1 = "value";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar1 = (char *)*param_2;
    }
    ppuVar6 = &puStack_a8;
    FUN_10945a80c(ppuVar6,pcVar1);
    auStack_f8[0] = *(undefined1 *)ppuVar6;
    *(undefined1 *)ppuVar6 = 6;
    puVar9 = ppuVar6[1];
    ppuVar6[1] = (undefined *)uStack_f0;
    uStack_f0 = (ulong)puVar9;
  }
  else {
    if (cVar3 != '\x04') goto LAB_1098c449c;
    uStack_100 = param_2[1];
    puVar4 = auStack_108;
    auStack_108[0] = 7;
    pcVar1 = "value";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar1 = (char *)*param_2;
    }
    ppuVar6 = &puStack_a8;
    FUN_10945a80c(ppuVar6,pcVar1);
    auStack_108[0] = *(undefined1 *)ppuVar6;
    *(undefined1 *)ppuVar6 = 7;
    puVar9 = ppuVar6[1];
    ppuVar6[1] = (undefined *)uStack_100;
    uStack_100 = (ulong)puVar9;
  }
  FUN_109380ffc(puVar4 + 8);
LAB_1098c449c:
  FUN_109381b20(auStack_118,&puStack_a8);
  puVar4 = auStack_60;
  FUN_10945a80c(puVar4,&UNK_10f42a4d5);
  uVar2 = *puVar4;
  *puVar4 = auStack_118[0];
  uVar7 = *(undefined8 *)(puVar4 + 8);
  auStack_118[0] = uVar2;
  *(undefined8 *)(puVar4 + 8) = uStack_110;
  uStack_110 = uVar7;
  FUN_109380ffc(&uStack_110);
  FUN_1098c6200(param_1 + 3,auStack_60);
  FUN_109380ffc(&uStack_a0,(ulong)puStack_a8 & 0xff);
  FUN_109380ffc(&uStack_58,auStack_60[0]);
  return;
}



/* Entry: 1098c460c; end: 1098c4a8b;  */

void FUN_1098c460c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  ulong *puStack_d0;
  undefined1 uStack_c8;
  char *pcStack_c0;
  undefined1 uStack_b8;
  char *pcStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  ulong *puStack_78;
  undefined1 uStack_70;
  ulong uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  auStack_50[0] = 0;
  uStack_48 = 0;
  uVar12 = param_2[2];
  lVar11 = *param_1;
  uStack_60 = 5;
  uStack_58 = 1;
  puVar4 = auStack_50;
  FUN_10945a80c(puVar4,&DAT_10f2f98f2);
  uVar2 = *puVar4;
  *puVar4 = uStack_60;
  uVar7 = *(undefined8 *)(puVar4 + 8);
  uStack_60 = uVar2;
  *(undefined8 *)(puVar4 + 8) = uStack_58;
  uStack_58 = uVar7;
  FUN_109380ffc(&uStack_58);
  uStack_68 = (ulong)*(uint *)(param_2 + 3);
  uStack_70 = 6;
  puVar4 = auStack_50;
  FUN_10945a80c(puVar4,&DAT_10f586bcf);
  uVar2 = *puVar4;
  *puVar4 = uStack_70;
  uVar8 = *(ulong *)(puVar4 + 8);
  uStack_70 = uVar2;
  *(ulong *)(puVar4 + 8) = uStack_68;
  uStack_68 = uVar8;
  FUN_109380ffc(&uStack_68);
  __ZNSt3__19to_stringEi(&puStack_98,*(undefined2 *)((long)param_2 + 0x1c));
  puStack_78 = (ulong *)0x0;
  uStack_80 = 3;
  puVar5 = (ulong *)0x18;
  __Znwm();
  puVar5[1] = uStack_90;
  *puVar5 = (ulong)puStack_98;
  puVar5[2] = uStack_88;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = (undefined *)0x0;
  puVar4 = auStack_50;
  puStack_78 = puVar5;
  FUN_10945a80c(puVar4,&DAT_10f5139bb);
  uVar2 = *puVar4;
  *puVar4 = uStack_80;
  puVar5 = *(ulong **)(puVar4 + 8);
  uStack_80 = uVar2;
  *(ulong **)(puVar4 + 8) = puStack_78;
  puStack_78 = puVar5;
  FUN_109380ffc(&puStack_78);
  if ((long)uStack_88 < 0) {
    __ZdlPv(puStack_98);
  }
  uStack_a8 = 5;
  puVar4 = auStack_50;
  lStack_a0 = uVar12 / 1000 - lVar11;
  FUN_10945a80c(puVar4,&DAT_10f2f98f9);
  uVar2 = *puVar4;
  *puVar4 = uStack_a8;
  lVar11 = *(long *)(puVar4 + 8);
  uStack_a8 = uVar2;
  *(long *)(puVar4 + 8) = lStack_a0;
  lStack_a0 = lVar11;
  FUN_109380ffc(&lStack_a0);
  pcStack_b0 = (char *)0x0;
  uStack_b8 = 3;
  pcVar9 = "i";
  FUN_1098c70e0();
  puVar4 = auStack_50;
  pcStack_b0 = pcVar9;
  FUN_10945a80c(puVar4,&DAT_10f586bcc);
  uStack_b8 = *puVar4;
  *puVar4 = 3;
  pcVar9 = *(char **)(puVar4 + 8);
  *(char **)(puVar4 + 8) = pcStack_b0;
  pcStack_b0 = pcVar9;
  FUN_109380ffc(&pcStack_b0);
  pcStack_c0 = (char *)0x0;
  uStack_c8 = 3;
  pcVar9 = "t";
  FUN_1098c70e0();
  puVar4 = auStack_50;
  pcStack_c0 = pcVar9;
  FUN_10945a80c(puVar4,"s");
  uStack_c8 = *puVar4;
  *puVar4 = 3;
  pcVar9 = *(char **)(puVar4 + 8);
  *(char **)(puVar4 + 8) = pcStack_c0;
  pcStack_c0 = pcVar9;
  FUN_109380ffc(&pcStack_c0);
  puStack_98 = &DAT_10f44a188;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puStack_98 = (undefined *)*param_2;
  }
  puStack_d0 = (ulong *)0x0;
  uStack_d8 = 3;
  ppuVar6 = &puStack_98;
  FUN_1098c7050();
  puVar4 = auStack_50;
  puStack_d0 = (ulong *)ppuVar6;
  FUN_10945a80c(puVar4,&DAT_10f68f148);
  uStack_d8 = *puVar4;
  *puVar4 = 3;
  puVar5 = *(ulong **)(puVar4 + 8);
  *(ulong **)(puVar4 + 8) = puStack_d0;
  puStack_d0 = puVar5;
  FUN_109380ffc(&puStack_d0);
  puStack_98 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff00);
  uStack_90 = 0;
  cVar3 = *(char *)((long)param_2 + 0x1e);
  if (cVar3 == '\x0f') {
    puVar10 = (undefined8 *)param_2[1];
    if (puVar10 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)puVar10[1];
      for (puVar10 = (undefined8 *)*puVar10; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        func_0x0001098c613c(param_1[0x12],&puStack_98,*puVar10);
      }
    }
  }
  else if (cVar3 == '\f') {
    func_0x0001098c613c(param_1[0x12],&puStack_98,param_2[1]);
  }
  else {
    if (cVar3 != '\v') goto LAB_1098c4994;
    FUN_1098c60b8(&puStack_98,param_2[1]);
  }
  FUN_109381b20(auStack_e8,&puStack_98);
  puVar4 = auStack_50;
  FUN_10945a80c(puVar4,&UNK_10f42a4d5);
  uVar2 = *puVar4;
  *puVar4 = auStack_e8[0];
  uVar7 = *(undefined8 *)(puVar4 + 8);
  auStack_e8[0] = uVar2;
  *(undefined8 *)(puVar4 + 8) = uStack_e0;
  uStack_e0 = uVar7;
  FUN_109380ffc(&uStack_e0);
LAB_1098c4994:
  FUN_1098c6200(param_1 + 3,auStack_50);
  FUN_109380ffc(&uStack_90,(ulong)puStack_98 & 0xff);
  FUN_109380ffc(&uStack_48,auStack_50[0]);
  return;
}



/* Entry: 1098c4a8c; end: 1098c4f87;  */

void FUN_1098c4a8c(long *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  ulong *puStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  char *pcStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  ulong *puStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  auStack_60[0] = 0;
  uStack_58 = 0;
  uVar12 = *(ulong *)(param_2 + 0x10);
  lVar10 = *param_1;
  uStack_70 = 5;
  uStack_68 = 1;
  puVar2 = auStack_60;
  FUN_10945a80c(puVar2,&DAT_10f2f98f2);
  uVar1 = *puVar2;
  *puVar2 = uStack_70;
  uVar6 = *(undefined8 *)(puVar2 + 8);
  uStack_70 = uVar1;
  *(undefined8 *)(puVar2 + 8) = uStack_68;
  uStack_68 = uVar6;
  FUN_109380ffc(&uStack_68);
  uStack_78 = (ulong)*(uint *)(param_2 + 0x18);
  uStack_80 = 6;
  puVar2 = auStack_60;
  FUN_10945a80c(puVar2,&DAT_10f586bcf);
  uVar1 = *puVar2;
  *puVar2 = uStack_80;
  uVar7 = *(ulong *)(puVar2 + 8);
  uStack_80 = uVar1;
  *(ulong *)(puVar2 + 8) = uStack_78;
  uStack_78 = uVar7;
  FUN_109380ffc(&uStack_78);
  __ZNSt3__19to_stringEi(&uStack_a8,*(undefined2 *)(param_2 + 0x1c));
  puStack_88 = (ulong *)0x0;
  uStack_90 = 3;
  puVar3 = (ulong *)0x18;
  __Znwm();
  puVar3[1] = uStack_a0;
  *puVar3 = uStack_a8;
  puVar3[2] = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puVar2 = auStack_60;
  puStack_88 = puVar3;
  FUN_10945a80c(puVar2,&DAT_10f5139bb);
  uVar1 = *puVar2;
  *puVar2 = uStack_90;
  puVar3 = *(ulong **)(puVar2 + 8);
  uStack_90 = uVar1;
  *(ulong **)(puVar2 + 8) = puStack_88;
  puStack_88 = puVar3;
  FUN_109380ffc(&puStack_88);
  if ((long)uStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  uStack_b8 = 5;
  puVar2 = auStack_60;
  lStack_b0 = uVar12 / 1000 - lVar10;
  FUN_10945a80c(puVar2,&DAT_10f2f98f9);
  uVar1 = *puVar2;
  *puVar2 = uStack_b8;
  lVar10 = *(long *)(puVar2 + 8);
  uStack_b8 = uVar1;
  *(long *)(puVar2 + 8) = lStack_b0;
  lStack_b0 = lVar10;
  FUN_109380ffc(&lStack_b0);
  pcStack_c0 = (char *)0x0;
  uStack_c8 = 3;
  pcVar8 = "b";
  FUN_1098c70e0();
  puVar2 = auStack_60;
  pcStack_c0 = pcVar8;
  FUN_10945a80c(puVar2,&DAT_10f586bcc);
  uVar1 = *puVar2;
  *puVar2 = uStack_c8;
  pcVar8 = *(char **)(puVar2 + 8);
  uStack_c8 = uVar1;
  *(char **)(puVar2 + 8) = pcStack_c0;
  pcStack_c0 = pcVar8;
  FUN_109380ffc(&pcStack_c0);
  uStack_d0 = 0;
  if (*param_3 != 0) {
    uStack_d0 = *(undefined8 *)(*param_3 + 0x58);
  }
  uStack_d8 = 5;
  puVar2 = auStack_60;
  FUN_10945a80c(puVar2,"id");
  uVar1 = *puVar2;
  *puVar2 = uStack_d8;
  uVar6 = *(undefined8 *)(puVar2 + 8);
  uStack_d8 = uVar1;
  *(undefined8 *)(puVar2 + 8) = uStack_d0;
  uStack_d0 = uVar6;
  FUN_109380ffc(&uStack_d0);
  lVar10 = *param_3;
  if (lVar10 == 0) {
    func_0x000107c31940(&uStack_a8,&DAT_10f586bde);
  }
  else {
    lVar5 = (long)*(char *)(lVar10 + 0x47);
    if (lVar5 < 0) {
      lVar4 = *(long *)(lVar10 + 0x30);
      lVar5 = *(long *)(lVar10 + 0x38);
    }
    else {
      lVar4 = lVar10 + 0x30;
    }
    func_0x000104c54c8c(&uStack_a8,lVar4,lVar5);
  }
  puStack_e0 = (ulong *)0x0;
  uStack_e8 = 3;
  puVar3 = (ulong *)0x18;
  __Znwm();
  puVar3[1] = uStack_a0;
  *puVar3 = uStack_a8;
  puVar3[2] = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puVar2 = auStack_60;
  puStack_e0 = puVar3;
  FUN_10945a80c(puVar2,&DAT_10f68f148);
  uStack_e8 = *puVar2;
  *puVar2 = 3;
  puVar3 = *(ulong **)(puVar2 + 8);
  *(ulong **)(puVar2 + 8) = puStack_e0;
  puStack_e0 = puVar3;
  FUN_109380ffc(&puStack_e0);
  if ((long)uStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  lVar10 = *param_3;
  if (lVar10 == 0) goto LAB_1098c4f10;
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  uStack_a0 = 0;
  lVar5 = *(long *)(lVar10 + 0x68);
  lVar4 = *(long *)(lVar10 + 0x70);
  if (lVar5 != lVar4) {
    FUN_1098c60b8(&uStack_a8);
    lVar10 = *param_3;
  }
  if (*(long *)(lVar10 + 0x90) == 0) {
    puVar9 = *(undefined8 **)(lVar10 + 0x98);
    puVar11 = *(undefined8 **)(lVar10 + 0xa0);
    if (puVar9 != puVar11) goto LAB_1098c4ea4;
    if (lVar5 != lVar4) goto LAB_1098c4ebc;
  }
  else {
    func_0x0001098c613c(param_1[0x12],&uStack_a8);
    puVar11 = *(undefined8 **)(*param_3 + 0xa0);
    for (puVar9 = *(undefined8 **)(*param_3 + 0x98); puVar9 != puVar11; puVar9 = puVar9 + 1) {
LAB_1098c4ea4:
      func_0x0001098c613c(param_1[0x12],&uStack_a8,*puVar9);
    }
LAB_1098c4ebc:
    FUN_109381b20(auStack_f8,&uStack_a8);
    puVar2 = auStack_60;
    FUN_10945a80c(puVar2,&UNK_10f42a4d5);
    uVar1 = *puVar2;
    *puVar2 = auStack_f8[0];
    uVar6 = *(undefined8 *)(puVar2 + 8);
    auStack_f8[0] = uVar1;
    *(undefined8 *)(puVar2 + 8) = uStack_f0;
    uStack_f0 = uVar6;
    FUN_109380ffc(&uStack_f0);
  }
  FUN_109380ffc(&uStack_a0,uStack_a8 & 0xff);
LAB_1098c4f10:
  FUN_1098c6200(param_1 + 3,auStack_60);
  FUN_109380ffc(&uStack_58,auStack_60[0]);
  return;
}



/* Entry: 1098c4f88; end: 1098c537b;  */

void FUN_1098c4f88(long *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined8 *puStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  auStack_60[0] = 0;
  uStack_58 = 0;
  uVar10 = *(ulong *)(param_2 + 0x10);
  lVar9 = *param_1;
  uStack_70 = 5;
  uStack_68 = 1;
  puVar2 = auStack_60;
  FUN_10945a80c(puVar2,&DAT_10f2f98f2);
  uVar1 = *puVar2;
  *puVar2 = uStack_70;
  uVar6 = *(undefined8 *)(puVar2 + 8);
  uStack_70 = uVar1;
  *(undefined8 *)(puVar2 + 8) = uStack_68;
  uStack_68 = uVar6;
  FUN_109380ffc(&uStack_68);
  uStack_78 = (ulong)*(uint *)(param_2 + 0x18);
  uStack_80 = 6;
  puVar2 = auStack_60;
  FUN_10945a80c(puVar2,&DAT_10f586bcf);
  uVar1 = *puVar2;
  *puVar2 = uStack_80;
  uVar7 = *(ulong *)(puVar2 + 8);
  uStack_80 = uVar1;
  *(ulong *)(puVar2 + 8) = uStack_78;
  uStack_78 = uVar7;
  FUN_109380ffc(&uStack_78);
  __ZNSt3__19to_stringEi(&uStack_a8,*(undefined2 *)(param_2 + 0x1c));
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 3;
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  puVar3[1] = uStack_a0;
  *puVar3 = uStack_a8;
  puVar3[2] = lStack_98;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  puVar2 = auStack_60;
  puStack_88 = puVar3;
  FUN_10945a80c(puVar2,&DAT_10f5139bb);
  uVar1 = *puVar2;
  *puVar2 = uStack_90;
  puVar3 = *(undefined8 **)(puVar2 + 8);
  uStack_90 = uVar1;
  *(undefined8 **)(puVar2 + 8) = puStack_88;
  puStack_88 = puVar3;
  FUN_109380ffc(&puStack_88);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  uStack_b8 = 5;
  puVar2 = auStack_60;
  lStack_b0 = uVar10 / 1000 - lVar9;
  FUN_10945a80c(puVar2,&DAT_10f2f98f9);
  uStack_b8 = *puVar2;
  *puVar2 = 5;
  lVar9 = *(long *)(puVar2 + 8);
  *(long *)(puVar2 + 8) = lStack_b0;
  lStack_b0 = lVar9;
  FUN_109380ffc(&lStack_b0);
  puStack_c0 = (undefined *)0x0;
  uStack_c8 = 3;
  puVar8 = &DAT_10f3dc182;
  FUN_1098c70e0();
  puVar2 = auStack_60;
  puStack_c0 = puVar8;
  FUN_10945a80c(puVar2,&DAT_10f586bcc);
  uStack_c8 = *puVar2;
  *puVar2 = 3;
  puVar8 = *(undefined **)(puVar2 + 8);
  *(undefined **)(puVar2 + 8) = puStack_c0;
  puStack_c0 = puVar8;
  FUN_109380ffc(&puStack_c0);
  uStack_d0 = 0;
  if (*param_3 != 0) {
    uStack_d0 = *(undefined8 *)(*param_3 + 0x58);
  }
  uStack_d8 = 5;
  puVar2 = auStack_60;
  FUN_10945a80c(puVar2,"id");
  uStack_d8 = *puVar2;
  *puVar2 = 5;
  uVar6 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = uStack_d0;
  uStack_d0 = uVar6;
  FUN_109380ffc(&uStack_d0);
  lVar9 = *param_3;
  if (lVar9 == 0) {
    func_0x000107c31940(&uStack_a8,&DAT_10f586bde);
  }
  else {
    lVar5 = (long)*(char *)(lVar9 + 0x47);
    if (lVar5 < 0) {
      lVar4 = *(long *)(lVar9 + 0x30);
      lVar5 = *(long *)(lVar9 + 0x38);
    }
    else {
      lVar4 = lVar9 + 0x30;
    }
    func_0x000104c54c8c(&uStack_a8,lVar4,lVar5);
  }
  puStack_e0 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  puVar3[1] = uStack_a0;
  *puVar3 = uStack_a8;
  puVar3[2] = lStack_98;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  puVar2 = auStack_60;
  puStack_e0 = puVar3;
  FUN_10945a80c(puVar2,&DAT_10f68f148);
  *puVar2 = 3;
  puVar3 = *(undefined8 **)(puVar2 + 8);
  *(undefined8 **)(puVar2 + 8) = puStack_e0;
  puStack_e0 = puVar3;
  FUN_109380ffc(&puStack_e0);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  FUN_1098c6200(param_1 + 3,auStack_60);
  FUN_109380ffc(&uStack_58,auStack_60[0]);
  return;
}



/* Entry: 1098c537c; end: 1098c5873;  */

void FUN_1098c537c(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  ulong *puStack_e0;
  undefined1 uStack_d8;
  char *pcStack_d0;
  undefined1 uStack_c8;
  char *pcStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  ulong *puStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  auStack_60[0] = 0;
  uStack_58 = 0;
  uVar12 = *(ulong *)(param_2 + 0x10);
  lVar11 = *param_1;
  uStack_70 = 5;
  uStack_68 = 1;
  puVar4 = auStack_60;
  FUN_10945a80c(puVar4,&DAT_10f2f98f2);
  uVar3 = *puVar4;
  *puVar4 = uStack_70;
  uVar8 = *(undefined8 *)(puVar4 + 8);
  uStack_70 = uVar3;
  *(undefined8 *)(puVar4 + 8) = uStack_68;
  uStack_68 = uVar8;
  FUN_109380ffc(&uStack_68);
  uStack_78 = (ulong)*(uint *)(param_2 + 0x18);
  uStack_80 = 6;
  puVar4 = auStack_60;
  FUN_10945a80c(puVar4,&DAT_10f586bcf);
  uVar3 = *puVar4;
  *puVar4 = uStack_80;
  uVar9 = *(ulong *)(puVar4 + 8);
  uStack_80 = uVar3;
  *(ulong *)(puVar4 + 8) = uStack_78;
  uStack_78 = uVar9;
  FUN_109380ffc(&uStack_78);
  __ZNSt3__19to_stringEi(&uStack_a8,*(undefined2 *)(param_2 + 0x1c));
  puStack_88 = (ulong *)0x0;
  uStack_90 = 3;
  puVar5 = (ulong *)0x18;
  __Znwm();
  puVar5[1] = uStack_a0;
  *puVar5 = uStack_a8;
  puVar5[2] = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puVar4 = auStack_60;
  puStack_88 = puVar5;
  FUN_10945a80c(puVar4,&DAT_10f5139bb);
  uVar3 = *puVar4;
  *puVar4 = uStack_90;
  puVar5 = *(ulong **)(puVar4 + 8);
  uStack_90 = uVar3;
  *(ulong **)(puVar4 + 8) = puStack_88;
  puStack_88 = puVar5;
  FUN_109380ffc(&puStack_88);
  if ((long)uStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  uStack_b8 = 5;
  puVar4 = auStack_60;
  lStack_b0 = uVar12 / 1000 - lVar11;
  FUN_10945a80c(puVar4,&DAT_10f2f98f9);
  uVar3 = *puVar4;
  *puVar4 = uStack_b8;
  lVar11 = *(long *)(puVar4 + 8);
  uStack_b8 = uVar3;
  *(long *)(puVar4 + 8) = lStack_b0;
  lStack_b0 = lVar11;
  FUN_109380ffc(&lStack_b0);
  pcStack_c0 = (char *)0x0;
  uStack_c8 = 3;
  pcVar10 = "i";
  FUN_1098c70e0();
  puVar4 = auStack_60;
  pcStack_c0 = pcVar10;
  FUN_10945a80c(puVar4,&DAT_10f586bcc);
  uVar3 = *puVar4;
  *puVar4 = uStack_c8;
  pcVar10 = *(char **)(puVar4 + 8);
  uStack_c8 = uVar3;
  *(char **)(puVar4 + 8) = pcStack_c0;
  pcStack_c0 = pcVar10;
  FUN_109380ffc(&pcStack_c0);
  pcStack_d0 = (char *)0x0;
  uStack_d8 = 3;
  pcVar10 = "t";
  FUN_1098c70e0();
  puVar4 = auStack_60;
  pcStack_d0 = pcVar10;
  FUN_10945a80c(puVar4,"s");
  uVar3 = *puVar4;
  *puVar4 = uStack_d8;
  pcVar10 = *(char **)(puVar4 + 8);
  uStack_d8 = uVar3;
  *(char **)(puVar4 + 8) = pcStack_d0;
  pcStack_d0 = pcVar10;
  FUN_109380ffc(&pcStack_d0);
  puVar6 = (undefined8 *)*param_3;
  if (puVar6 == (undefined8 *)0x0) {
    func_0x000107c31940(&uStack_a8,&DAT_10f44a188);
  }
  else {
    lVar11 = (long)*(char *)((long)puVar6 + 0x17);
    puVar7 = puVar6;
    if (lVar11 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      lVar11 = puVar6[1];
    }
    func_0x000104c54c8c(&uStack_a8,puVar7,lVar11);
  }
  puStack_e0 = (ulong *)0x0;
  uStack_e8 = 3;
  puVar5 = (ulong *)0x18;
  __Znwm();
  puVar5[1] = uStack_a0;
  *puVar5 = uStack_a8;
  puVar5[2] = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puVar4 = auStack_60;
  puStack_e0 = puVar5;
  FUN_10945a80c(puVar4,&DAT_10f68f148);
  uStack_e8 = *puVar4;
  *puVar4 = 3;
  puVar5 = *(ulong **)(puVar4 + 8);
  *(ulong **)(puVar4 + 8) = puStack_e0;
  puStack_e0 = puVar5;
  FUN_109380ffc(&puStack_e0);
  if ((long)uStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  lVar11 = *param_3;
  if (lVar11 == 0) goto LAB_1098c57fc;
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  uStack_a0 = 0;
  lVar1 = *(long *)(lVar11 + 0x68);
  lVar2 = *(long *)(lVar11 + 0x70);
  if (lVar1 != lVar2) {
    FUN_1098c60b8(&uStack_a8);
    lVar11 = *param_3;
  }
  if (*(long *)(lVar11 + 0x90) == 0) {
    puVar6 = *(undefined8 **)(lVar11 + 0x98);
    puVar7 = *(undefined8 **)(lVar11 + 0xa0);
    if (puVar6 != puVar7) goto LAB_1098c5790;
    if (lVar1 != lVar2) goto LAB_1098c57a8;
  }
  else {
    func_0x0001098c613c(param_1[0x12],&uStack_a8);
    puVar7 = *(undefined8 **)(*param_3 + 0xa0);
    for (puVar6 = *(undefined8 **)(*param_3 + 0x98); puVar6 != puVar7; puVar6 = puVar6 + 1) {
LAB_1098c5790:
      func_0x0001098c613c(param_1[0x12],&uStack_a8,*puVar6);
    }
LAB_1098c57a8:
    FUN_109381b20(auStack_f8,&uStack_a8);
    puVar4 = auStack_60;
    FUN_10945a80c(puVar4,&UNK_10f42a4d5);
    uVar3 = *puVar4;
    *puVar4 = auStack_f8[0];
    uVar8 = *(undefined8 *)(puVar4 + 8);
    auStack_f8[0] = uVar3;
    *(undefined8 *)(puVar4 + 8) = uStack_f0;
    uStack_f0 = uVar8;
    FUN_109380ffc(&uStack_f0);
  }
  FUN_109380ffc(&uStack_a0,uStack_a8 & 0xff);
LAB_1098c57fc:
  FUN_1098c6200(param_1 + 3,auStack_60);
  FUN_109380ffc(&uStack_58,auStack_60[0]);
  return;
}



/* Entry: 1098c5874; end: 1098c5d93;  */

void FUN_1098c5874(long *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined8 *puStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  auStack_60[0] = 0;
  uStack_58 = 0;
  uVar11 = *(ulong *)(param_2 + 0x10);
  lVar10 = *param_1;
  uStack_70 = 5;
  uStack_68 = 1;
  puVar3 = auStack_60;
  FUN_10945a80c(puVar3,&DAT_10f2f98f2);
  uVar1 = *puVar3;
  *puVar3 = uStack_70;
  uVar7 = *(undefined8 *)(puVar3 + 8);
  uStack_70 = uVar1;
  *(undefined8 *)(puVar3 + 8) = uStack_68;
  uStack_68 = uVar7;
  FUN_109380ffc(&uStack_68);
  uStack_78 = (ulong)*(uint *)(param_2 + 0x18);
  uStack_80 = 6;
  puVar3 = auStack_60;
  FUN_10945a80c(puVar3,&DAT_10f586bcf);
  uVar1 = *puVar3;
  *puVar3 = uStack_80;
  uVar8 = *(ulong *)(puVar3 + 8);
  uStack_80 = uVar1;
  *(ulong *)(puVar3 + 8) = uStack_78;
  uStack_78 = uVar8;
  FUN_109380ffc(&uStack_78);
  __ZNSt3__19to_stringEi(&uStack_a8,*(undefined2 *)(param_2 + 0x1c));
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 3;
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  puVar4[1] = uStack_a0;
  *puVar4 = uStack_a8;
  puVar4[2] = lStack_98;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  puVar3 = auStack_60;
  puStack_88 = puVar4;
  FUN_10945a80c(puVar3,&DAT_10f5139bb);
  uVar1 = *puVar3;
  *puVar3 = uStack_90;
  puVar4 = *(undefined8 **)(puVar3 + 8);
  uStack_90 = uVar1;
  *(undefined8 **)(puVar3 + 8) = puStack_88;
  puStack_88 = puVar4;
  FUN_109380ffc(&puStack_88);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  uStack_b8 = 5;
  puVar3 = auStack_60;
  lStack_b0 = uVar11 / 1000 - lVar10;
  FUN_10945a80c(puVar3,&DAT_10f2f98f9);
  uVar1 = *puVar3;
  *puVar3 = uStack_b8;
  lVar10 = *(long *)(puVar3 + 8);
  uStack_b8 = uVar1;
  *(long *)(puVar3 + 8) = lStack_b0;
  lStack_b0 = lVar10;
  FUN_109380ffc(&lStack_b0);
  puStack_c0 = (undefined *)0x0;
  uStack_c8 = 3;
  puVar9 = &DAT_10f31a1fb;
  FUN_1098c70e0();
  puVar3 = auStack_60;
  puStack_c0 = puVar9;
  FUN_10945a80c(puVar3,&DAT_10f586bcc);
  uVar1 = *puVar3;
  *puVar3 = uStack_c8;
  puVar9 = *(undefined **)(puVar3 + 8);
  uStack_c8 = uVar1;
  *(undefined **)(puVar3 + 8) = puStack_c0;
  puStack_c0 = puVar9;
  FUN_109380ffc(&puStack_c0);
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 == (undefined8 *)0x0) {
    func_0x000107c31940(&uStack_a8,&DAT_10f2e4588);
  }
  else {
    lVar10 = (long)*(char *)((long)puVar4 + 0x17);
    puVar6 = puVar4;
    if (lVar10 < 0) {
      puVar6 = (undefined8 *)*puVar4;
      lVar10 = puVar4[1];
    }
    func_0x000104c54c8c(&uStack_a8,puVar6,lVar10);
  }
  puStack_d0 = (undefined8 *)0x0;
  uStack_d8 = 3;
  puVar4 = &uStack_a8;
  FUN_10938229c();
  puVar3 = auStack_60;
  puStack_d0 = puVar4;
  FUN_10945a80c(puVar3,&DAT_10f68f148);
  uStack_d8 = *puVar3;
  *puVar3 = 3;
  puVar4 = *(undefined8 **)(puVar3 + 8);
  *(undefined8 **)(puVar3 + 8) = puStack_d0;
  puStack_d0 = puVar4;
  FUN_109380ffc(&puStack_d0);
  auStack_e8[0] = 0;
  uStack_e0 = 0;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    cVar2 = *(char *)(param_2 + 0x1f);
    if (cVar2 == '\x02') {
      puVar3 = auStack_f8;
      uStack_f0 = *(undefined8 *)(lVar10 + 0xc0);
      auStack_f8[0] = 5;
      puVar5 = auStack_e8;
      FUN_1095b7584(puVar5,&uStack_a8);
      auStack_f8[0] = *puVar5;
      *puVar5 = 5;
      uVar7 = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(puVar5 + 8) = uStack_f0;
      uStack_f0 = uVar7;
    }
    else if (cVar2 == '\x03') {
      puVar3 = auStack_108;
      uStack_100 = *(undefined8 *)(lVar10 + 0xc0);
      auStack_108[0] = 6;
      puVar5 = auStack_e8;
      FUN_1095b7584(puVar5,&uStack_a8);
      auStack_108[0] = *puVar5;
      *puVar5 = 6;
      uVar7 = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(puVar5 + 8) = uStack_100;
      uStack_100 = uVar7;
    }
    else {
      if (cVar2 != '\x04') goto LAB_1098c5c08;
      puVar3 = auStack_118;
      uStack_110 = *(undefined8 *)(lVar10 + 0xc0);
      auStack_118[0] = 7;
      puVar5 = auStack_e8;
      FUN_1095b7584(puVar5,&uStack_a8);
      auStack_118[0] = *puVar5;
      *puVar5 = 7;
      uVar7 = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(puVar5 + 8) = uStack_110;
      uStack_110 = uVar7;
    }
    FUN_109380ffc(puVar3 + 8);
  }
LAB_1098c5c08:
  FUN_109381b20(auStack_128,auStack_e8);
  puVar3 = auStack_60;
  FUN_10945a80c(puVar3,&UNK_10f42a4d5);
  uVar1 = *puVar3;
  *puVar3 = auStack_128[0];
  uVar7 = *(undefined8 *)(puVar3 + 8);
  auStack_128[0] = uVar1;
  *(undefined8 *)(puVar3 + 8) = uStack_120;
  uStack_120 = uVar7;
  FUN_109380ffc(&uStack_120);
  FUN_1098c6200(param_1 + 3,auStack_60);
  FUN_109380ffc(&uStack_e0,auStack_e8[0]);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  FUN_109380ffc(&uStack_58,auStack_60[0]);
  return;
}



/* Entry: 1098c5d94; end: 1098c5ef3;  */

void FUN_1098c5d94(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0xb0) != param_2) {
    *(long *)(param_1 + 0xb0) = param_2;
    uStack_28 = 0x90b18151;
    uStack_24 = 0x3090000;
    uStack_30 = *(undefined8 *)(param_1 + 8);
    puStack_40 = &DAT_10f586be4;
    lStack_38 = param_2;
    FUN_1098c5ef4(param_1,0x90b18151);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_1098c2d68(param_1,&puStack_40,&uStack_50,&uStack_60,&uStack_70);
    plVar4 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 1098c5ef4; end: 1098c5f57;  */

void FUN_1098c5ef4(long param_1,undefined4 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined4 uStack_30;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)&uStack_30;
  param_1 = param_1 + 0x98;
  uStack_30 = param_2;
  FUN_1098c6f38(param_1,&uStack_30,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  puVar1 = &UNK_10f586bbf;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  func_0x000107c2c4dc(param_1 + 0x28,puVar1);
  return;
}



/* Entry: 1098c5f58; end: 1098c60b7;  */

void FUN_1098c5f58(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0xb8) != param_2) {
    *(long *)(param_1 + 0xb8) = param_2;
    uStack_28 = 0x90b18161;
    uStack_24 = 0x3090000;
    uStack_30 = *(undefined8 *)(param_1 + 8);
    puStack_40 = &DAT_10f586bf2;
    lStack_38 = param_2;
    FUN_1098c5ef4(param_1,0x90b18161);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_1098c2d68(param_1,&puStack_40,&uStack_50,&uStack_60,&uStack_70);
    plVar4 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 1098c60b8; end: 1098c61ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098c60b8(undefined8 *******param_1,undefined8 *****param_2,undefined8 ******param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ******ppppppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  ulong uVar15;
  undefined8 ******ppppppuVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 ****ppppuVar21;
  long lVar22;
  long lVar23;
  long lStack_108;
  undefined8 *****pppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 *******pppppppuStack_58;
  undefined8 ****ppppuStack_50;
  undefined8 *******pppppppuStack_48;
  
  if (param_2 != (undefined8 *****)0x0) {
    ppppuVar21 = *param_2;
    ppppuVar3 = param_2[1];
    if (ppppuVar21 != ppppuVar3) {
      pppppppuVar8 = param_1;
      while (pppppppuStack_58 = param_1, ppppuStack_50 = ppppuVar21,
            *(uint *)(ppppuVar21 + 10) != 0xffffffff) {
        pppppppuVar8 = &pppppppuStack_48;
        param_2 = (undefined8 *****)(ppppuVar21 + 5);
        pppppppuStack_48 = &pppppppuStack_58;
        (*(code *)(&PTR_FUN_110b18170)[*(uint *)(ppppuVar21 + 10)])();
        ppppuVar21 = ppppuVar21 + 0xb;
        if (ppppuVar21 == ppppuVar3) {
          return;
        }
      }
      FUN_1092612e0();
      pppppppuVar8 = pppppppuVar8 + 1;
      pppppppuVar14 = (undefined8 *******)*pppppppuVar8;
      pppppppuVar11 = pppppppuVar8;
      if (pppppppuVar14 == (undefined8 *******)0x0) {
        return;
      }
      do {
        lVar23 = 8;
        if (param_3 <= pppppppuVar14[4]) {
          lVar23 = 0;
          pppppppuVar11 = pppppppuVar14;
        }
        pppppppuVar14 = *(undefined8 ********)((long)pppppppuVar14 + lVar23);
      } while (pppppppuVar14 != (undefined8 *******)0x0);
      if (((pppppppuVar11 != pppppppuVar8) && (pppppppuVar11[4] <= param_3)) &&
         (ppppppuVar12 = pppppppuVar11[5], ppppppuVar12 != (undefined8 ******)0x0)) {
        pppppuVar18 = *ppppppuVar12;
        pppppuVar20 = ppppppuVar12[1];
        if (pppppuVar18 != pppppuVar20) {
          pppppuVar10 = param_2;
          do {
            pppppuStack_b8 = param_2;
            pppppuStack_b0 = pppppuVar18;
            if (*(uint *)(pppppuVar18 + 10) == 0xffffffff) {
              FUN_1092612e0();
              ppppppuVar12 = pppppppuVar8[1];
              if (ppppppuVar12 < pppppppuVar8[2]) {
                *(undefined1 *)ppppppuVar12 = *(undefined1 *)pppppuVar10;
                ppppppuVar12[1] = (undefined8 *****)pppppuVar10[1];
                *(undefined1 *)pppppuVar10 = 0;
                pppppuVar10[1] = (undefined8 ****)0x0;
                ppppppuVar12 = ppppppuVar12 + 2;
                goto LAB_1098c63d4;
              }
              lVar23 = (long)ppppppuVar12 - (long)*pppppppuVar8;
              uVar1 = (lVar23 >> 4) + 1;
              if (uVar1 >> 0x3c != 0) {
                FUN_1098c6918();
                goto LAB_1098c63f4;
              }
              uVar15 = (long)pppppppuVar8[2] - (long)*pppppppuVar8;
              uVar17 = (long)uVar15 >> 3;
              if (uVar17 <= uVar1) {
                uVar17 = uVar1;
              }
              if (0x7fffffffffffffef < uVar15) {
                uVar17 = 0xfffffffffffffff;
              }
              ppppppuVar12 = pppppppuVar8[4];
              lVar22 = uVar17 * 0x10;
              pppppuVar18 = ppppppuVar12[1] + uVar17 * 2;
              if (*ppppppuVar12 < pppppuVar18) goto LAB_1098c62e4;
              ppppppuVar13 = ppppppuVar12 + 1;
              pppppuVar20 = ppppppuVar12[1];
              goto LAB_1098c62a4;
            }
            pppppppuVar8 = &ppppppuStack_a8;
            pppppuVar10 = pppppuVar18 + 5;
            ppppppuStack_a8 = &pppppuStack_b8;
            (*(code *)(&PTR_FUN_110b18188)[*(uint *)(pppppuVar18 + 10)])();
            pppppuVar18 = pppppuVar18 + 0xb;
          } while (pppppuVar18 != pppppuVar20);
        }
      }
      return;
    }
  }
  return;
LAB_1098c62a4:
  do {
    pppppuVar19 = *ppppppuVar13;
    if (pppppuVar19 == pppppuVar20) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
      if (bVar6) {
        *ppppppuVar13 = pppppuVar18;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_1098c6310;
    }
    else {
      ClearExclusiveLocal();
    }
    pppppuVar18 = pppppuVar19 + uVar17 * 2;
    pppppuVar20 = pppppuVar19;
  } while (pppppuVar18 <= *ppppppuVar12);
LAB_1098c62e4:
  lStack_108 = lVar22;
  FUN_1098c692c(&lStack_108);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1098c6310:
  if (uVar17 >> 0x3c == 0) {
    __Znwm();
    puVar2 = (undefined1 *)(lVar22 + lVar23);
    *puVar2 = *(undefined1 *)pppppuVar10;
    *(undefined8 *****)(puVar2 + 8) = pppppuVar10[1];
    *(undefined1 *)pppppuVar10 = 0;
    pppppuVar10[1] = (undefined8 ****)0x0;
    ppppppuVar12 = (undefined8 ******)(puVar2 + 0x10);
    ppppppuVar9 = *pppppppuVar8;
    ppppppuVar4 = pppppppuVar8[1];
    lVar23 = (long)ppppppuVar9 - (long)ppppppuVar4;
    ppppppuVar13 = ppppppuVar9;
    ppppppuVar16 = (undefined8 ******)(puVar2 + lVar23);
    if (lVar23 != 0) {
      do {
        *(undefined1 *)ppppppuVar16 = *(undefined1 *)ppppppuVar13;
        ppppppuVar16[1] = ppppppuVar13[1];
        *(undefined1 *)ppppppuVar13 = 0;
        ppppppuVar13[1] = (undefined8 *****)0x0;
        ppppppuVar13 = ppppppuVar13 + 2;
        ppppppuVar16 = ppppppuVar16 + 2;
      } while (ppppppuVar13 != ppppppuVar4);
      do {
        ppppppuVar13 = ppppppuVar9 + 2;
        FUN_109380ffc(ppppppuVar9 + 1,*(undefined1 *)ppppppuVar9);
        ppppppuVar9 = ppppppuVar13;
      } while (ppppppuVar13 != ppppppuVar4);
      ppppppuVar9 = *pppppppuVar8;
    }
    *pppppppuVar8 = (undefined8 ******)(puVar2 + lVar23);
    pppppppuVar8[1] = ppppppuVar12;
    ppppppuVar13 = pppppppuVar8[2];
    pppppppuVar8[2] = (undefined8 ******)(lVar22 + uVar17 * 0x10);
    if (ppppppuVar9 != (undefined8 ******)0x0) {
      ppppppuVar4 = pppppppuVar8[4] + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar4,0x10);
        if (bVar6) {
          *ppppppuVar4 = (undefined8 *****)
                         ((long)*ppppppuVar4 - ((long)ppppppuVar13 - (long)ppppppuVar9));
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      __ZdlPv();
    }
LAB_1098c63d4:
    pppppppuVar8[1] = ppppppuVar12;
    return;
  }
LAB_1098c63f4:
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1098c642c);
  (*pcVar7)();
}



/* Entry: 1098c6200; end: 1098c643f;  */

void FUN_1098c6200(long *param_1,undefined1 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long lStack_48;
  
  puVar15 = (undefined1 *)param_1[1];
  if (puVar15 < (undefined1 *)param_1[2]) {
    *puVar15 = *param_2;
    *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puVar15 = puVar15 + 0x10;
LAB_1098c63d4:
    param_1[1] = (long)puVar15;
    return;
  }
  lVar17 = (long)puVar15 - *param_1;
  uVar13 = (lVar17 >> 4) + 1;
  if (uVar13 >> 0x3c == 0) {
    uVar10 = param_1[2] - *param_1;
    uVar12 = (long)uVar10 >> 3;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar12 = 0xfffffffffffffff;
    }
    puVar9 = (ulong *)param_1[4];
    lVar16 = uVar12 * 0x10;
    uVar13 = puVar9[1] + uVar12 * 0x10;
    if (uVar13 <= *puVar9) {
      puVar1 = puVar9 + 1;
      uVar10 = puVar9[1];
      do {
        uVar14 = *puVar1;
        if (uVar14 == uVar10) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_1098c6310;
        }
        else {
          ClearExclusiveLocal();
        }
        uVar13 = uVar14 + lVar16;
        uVar10 = uVar14;
      } while (uVar13 <= *puVar9);
    }
    lStack_48 = lVar16;
    FUN_1098c692c(&lStack_48);
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_1098c6310:
    if (uVar12 >> 0x3c == 0) {
      __Znwm();
      puVar3 = (undefined1 *)(lVar16 + lVar17);
      *puVar3 = *param_2;
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_2 + 8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      puVar15 = puVar3 + 0x10;
      puVar8 = (undefined1 *)*param_1;
      puVar4 = (undefined1 *)param_1[1];
      lVar17 = (long)puVar8 - (long)puVar4;
      puVar18 = puVar8;
      puVar11 = puVar3 + lVar17;
      if (lVar17 != 0) {
        do {
          *puVar11 = *puVar18;
          *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar18 + 8);
          *puVar18 = 0;
          *(undefined8 *)(puVar18 + 8) = 0;
          puVar18 = puVar18 + 0x10;
          puVar11 = puVar11 + 0x10;
        } while (puVar18 != puVar4);
        do {
          puVar18 = puVar8 + 0x10;
          FUN_109380ffc(puVar8 + 8,*puVar8);
          puVar8 = puVar18;
        } while (puVar18 != puVar4);
        puVar8 = (undefined1 *)*param_1;
      }
      *param_1 = (long)(puVar3 + lVar17);
      param_1[1] = (long)puVar15;
      lVar17 = param_1[2];
      param_1[2] = lVar16 + uVar12 * 0x10;
      if (puVar8 != (undefined1 *)0x0) {
        plVar2 = (long *)(param_1[4] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 - (lVar17 - (long)puVar8);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        __ZdlPv();
      }
      goto LAB_1098c63d4;
    }
  }
  else {
    FUN_1098c6918();
  }
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1098c642c);
  (*pcVar7)();
}



/* Entry: 1098c6440; end: 1098c653f;  */

undefined8 * FUN_1098c6440(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1098c6540; end: 1098c65cf;  */

void FUN_1098c6540(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  puVar1 = *(undefined1 **)*param_1;
  plVar2 = (long *)((undefined8 *)*param_1)[1];
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10945a80c(puVar1,plVar2);
  *puVar1 = 5;
  uVar3 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uStack_28;
  uStack_28 = uVar3;
  FUN_109380ffc(&uStack_28);
  return;
}



/* Entry: 1098c65d0; end: 1098c665f;  */

void FUN_1098c65d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  puVar1 = *(undefined1 **)*param_1;
  plVar2 = (long *)((undefined8 *)*param_1)[1];
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10945a80c(puVar1,plVar2);
  *puVar1 = 7;
  uVar3 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uStack_28;
  uStack_28 = uVar3;
  FUN_109380ffc(&uStack_28);
  return;
}



/* Entry: 1098c6660; end: 1098c6707;  */

void FUN_1098c6660(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lStack_38;
  undefined1 uStack_30;
  long *plStack_28;
  
  param_1 = (undefined8 *)*param_1;
  lStack_38 = *param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lStack_38 = (long)param_2;
  }
  uStack_30 = 3;
  plVar3 = &lStack_38;
  FUN_1098c7050();
  puVar1 = (undefined1 *)*param_1;
  plVar2 = (long *)param_1[1];
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  plStack_28 = plVar3;
  FUN_10945a80c(puVar1,plVar2);
  uStack_30 = *puVar1;
  *puVar1 = 3;
  plVar3 = *(long **)(puVar1 + 8);
  *(long **)(puVar1 + 8) = plStack_28;
  plStack_28 = plVar3;
  FUN_109380ffc(&plStack_28);
  return;
}



/* Entry: 1098c6708; end: 1098c6797;  */

void FUN_1098c6708(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  puVar1 = *(undefined1 **)*param_1;
  plVar2 = (long *)((undefined8 *)*param_1)[1];
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10945a80c(puVar1,plVar2);
  *puVar1 = 5;
  uVar3 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uStack_28;
  uStack_28 = uVar3;
  FUN_109380ffc(&uStack_28);
  return;
}



/* Entry: 1098c6798; end: 1098c6827;  */

void FUN_1098c6798(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  puVar1 = *(undefined1 **)*param_1;
  plVar2 = (long *)((undefined8 *)*param_1)[1];
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10945a80c(puVar1,plVar2);
  *puVar1 = 7;
  uVar3 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uStack_28;
  uStack_28 = uVar3;
  FUN_109380ffc(&uStack_28);
  return;
}



/* Entry: 1098c6828; end: 1098c6917;  */

void FUN_1098c6828(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 uStack_30;
  undefined8 *puStack_28;
  
  param_1 = (undefined8 *)*param_1;
  plVar3 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar3 = param_2;
  }
  func_0x000107c31940(&uStack_48,plVar3);
  puStack_28 = (undefined8 *)0x0;
  uStack_30 = 3;
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[2] = lStack_38;
  puVar1[1] = uStack_40;
  *puVar1 = uStack_48;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  puVar2 = (undefined1 *)*param_1;
  plVar3 = (long *)param_1[1];
  if (*(char *)((long)plVar3 + 0x17) < '\0') {
    plVar3 = (long *)*plVar3;
  }
  puStack_28 = puVar1;
  FUN_10945a80c(puVar2,plVar3);
  uStack_30 = *puVar2;
  *puVar2 = 3;
  puVar1 = *(undefined8 **)(puVar2 + 8);
  *(undefined8 **)(puVar2 + 8) = puStack_28;
  puStack_28 = puVar1;
  FUN_109380ffc(&puStack_28);
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 1098c6918; end: 1098c692b;  */

undefined * FUN_1098c6918(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_928;
  undefined8 uStack_920;
  undefined1 uStack_918;
  undefined *puStack_910;
  undefined8 uStack_908;
  undefined1 uStack_900;
  undefined **ppuStack_8f8;
  undefined *puStack_8f0;
  undefined *puStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  undefined4 uStack_8c8;
  undefined **ppuStack_8c0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_8a8;
  undefined *puStack_8a0;
  undefined8 uStack_898;
  undefined1 uStack_890;
  int iStack_888;
  undefined1 auStack_880 [1024];
  undefined1 auStack_480 [1024];
  long lStack_80;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  func_0x00010ae02f94(0,*puVar1);
  ppuVar7 = &PTR_PTR_1132e0548;
  ppuVar6 = ppuVar7;
  func_0x00010ae079a0();
  func_0x00010ae02fa4();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010ae03188(&puStack_8b8,auStack_480,0x400,auStack_880,0x400,ppuVar6[0x13],ppuVar6[0xf],
                        ppuVar6 + 0x14,0x400);
    puStack_928 = puStack_8a0;
    uStack_920 = uStack_898;
    puStack_910 = puStack_8b8;
    uStack_908 = uStack_8b0;
    uStack_918 = uStack_890;
    if (iStack_888 != 0) {
      puStack_928 = &UNK_10f6c352e;
      uStack_920 = 0x10;
      puStack_910 = &UNK_10f6c352e;
      uStack_908 = 0x10;
      uStack_918 = 0;
      uStack_8a8 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8f8 = ppuVar6 + 1;
    uStack_8c8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8d0 = uVar3 & 0xffffffff;
    ppuStack_8c0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8f8;
    uStack_900 = uStack_8a8;
    puStack_8f0 = puVar8;
    puStack_8e8 = puVar9;
    uStack_8e0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8d8 = uVar2;
    func_0x00010ae0784c(puVar4,ppuVar7,&puStack_910,&puStack_928);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    func_0x00010ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1098c692c; end: 1098c69d3;  */

undefined * FUN_1098c692c(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  func_0x00010ae02f94(0,*param_1);
  ppuVar6 = &PTR_PTR_1132e0548;
  ppuVar5 = ppuVar6;
  func_0x00010ae079a0();
  func_0x00010ae02fa4();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    func_0x00010ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                        ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    func_0x00010ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    func_0x00010ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 1098c69d4; end: 1098c6a27;  */

void FUN_1098c69d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 != 0) {
    FUN_1098c6a28();
    lVar4 = *param_1;
    lVar5 = param_1[2];
    plVar1 = (long *)(param_1[4] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - (lVar5 - lVar4);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar4,0x20);
    return;
  }
  return;
}



/* Entry: 1098c6a28; end: 1098c6a87;  */

void FUN_1098c6a28(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x60) {
    func_0x0001098c6b4c(lVar1 + -0x20);
    func_0x0001098c6af4(lVar1 + -0x30);
    func_0x0001098c6a9c(lVar1 + -0x40);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1098c6a88; end: 1098c6a9b;  */

undefined * FUN_1098c6a88(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 1098c6a9c; end: 1098c6ba3;  */

long FUN_1098c6a9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1098c6ba4; end: 1098c6c0b;  */

undefined8 * FUN_1098c6ba4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_1098c6c0c();
  return puVar1;
}



/* Entry: 1098c6c0c; end: 1098c6c8f;  */

void FUN_1098c6c0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1093821dc(param_1,param_4);
    lVar1 = param_1;
    FUN_1098c6c90(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1098c6c90; end: 1098c6d17;  */

long FUN_1098c6c90(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_109381b20(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 1098c6d18; end: 1098c6dd7;  */

undefined1  [16] FUN_1098c6d18(long param_1,uint *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, *(uint *)((long)plVar2 + 0x1c) <= *param_2) {
        if (*param_2 <= *(uint *)((long)plVar2 + 0x1c)) {
          uVar4 = 0;
          goto LAB_1098c6dbc;
        }
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar3 = plVar2 + 1;
          goto LAB_1098c6d80;
        }
      }
      plVar1 = (long *)*plVar2;
      plVar3 = plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_1098c6d80:
  uVar4 = 1;
  plVar1 = (long *)(param_1 + 0x10);
  FUN_1098c6e2c(plVar1,1);
  *(undefined4 *)((long)plVar1 + 0x1c) = *param_3;
  FUN_1098c6dd8(param_1,plVar2,plVar3,plVar1);
  plVar2 = plVar1;
LAB_1098c6dbc:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = plVar2;
  return auVar5;
}



/* Entry: 1098c6dd8; end: 1098c6e2b;  */

void FUN_1098c6dd8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[4] = param_1[4] + 1;
  return;
}



/* Entry: 1098c6e2c; end: 1098c6f37;  */

void FUN_1098c6e2c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 0x20;
  uVar6 = puVar5[1] + (long)param_2 * 0x20;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_1098c6ecc;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  FUN_1098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_1098c6ecc:
  if ((ulong)param_2 >> 0x3b == 0) {
    __Znwm(lVar9);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098c6f24);
  (*pcVar4)();
}



/* Entry: 1098c6f38; end: 1098c6ffb;  */

undefined1  [16] FUN_1098c6f38(long param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, *(uint *)(plVar3 + 4) <= *param_2) {
        if (*param_2 <= *(uint *)(plVar3 + 4)) {
          uVar2 = 0;
          goto LAB_1098c6fe4;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_1098c6fa0;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_1098c6fa0:
  plVar1 = (long *)0x40;
  __Znwm();
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)*param_4;
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[5] = 0;
  FUN_1098c6ffc(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1098c6fe4:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 1098c6ffc; end: 1098c704f;  */

void FUN_1098c6ffc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1098c7050; end: 1098c7097;  */

undefined8 FUN_1098c7050(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 1098c7098; end: 1098c70df;  */

undefined8 FUN_1098c7098(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 1098c70e0; end: 1098c7127;  */

undefined8 FUN_1098c70e0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 1098c7128; end: 1098c717b;  */

void FUN_1098c7128(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[4] = param_1[4] + 1;
  return;
}



/* Entry: 1098c717c; end: 1098c727b;  */

void FUN_1098c717c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_28;
  
  puVar4 = *(ulong **)(param_1 + 8);
  uVar5 = puVar4[1] + 0x50;
  if (uVar5 <= *puVar4) {
    puVar1 = puVar4 + 1;
    uVar7 = puVar4[1];
    do {
      uVar6 = *puVar1;
      if (uVar6 == uVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_1098c721c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar5 = uVar6 + 0x50;
      uVar7 = uVar6;
    } while (uVar5 <= *puVar4);
  }
  uStack_28 = 0x50;
  FUN_1098c692c(&uStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1098c721c:
  __Znwm(0x50);
  return;
}



/* Entry: 1098c727c; end: 1098c7f3b;  */

void FUN_1098c727c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,ulong param_10,
                  long param_11,ulong param_12)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_168;
  undefined4 uStack_160;
  undefined4 uStack_144;
  undefined4 uStack_12c;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  long *plStack_78;
  
  if (param_2 != 0) {
    uVar24 = 0;
    plVar1 = (long *)(param_7 + 8);
    do {
      plStack_78 = (long *)0x0;
      plStack_80 = (long *)0x0;
      uStack_90 = 0;
      plStack_a8 = (long *)0x0;
      puStack_b0 = (undefined8 *)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      puVar2 = (ulong *)(param_1 + uVar24 * 0x20);
      cVar4 = *(char *)((long)puVar2 + 0x1e);
      switch(cVar4) {
      case '\x01':
        uVar22 = *puVar2;
        plVar12 = (long *)*plVar1;
        plVar13 = plVar1;
        if (plVar12 != (long *)0x0) {
          do {
            lVar21 = 8;
            if (uVar22 <= (ulong)plVar12[4]) {
              lVar21 = 0;
              plVar13 = plVar12;
            }
            plVar12 = *(long **)((long)plVar12 + lVar21);
          } while (plVar12 != (long *)0x0);
          if (((plVar13 != plVar1) && ((ulong)plVar13[4] <= uVar22)) && (plVar13[5] != 0)) {
            FUN_1098c7f3c(&plStack_80,plVar13[5],plVar13[6]);
          }
        }
        puStack_d0 = (undefined8 *)0x0;
        puStack_168 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_180 = 0;
        lStack_c8 = 0;
        puVar23 = (undefined8 *)0x0;
        puVar19 = (undefined8 *)0x0;
        uVar14 = 0;
        uVar15 = 0;
        bVar8 = false;
        uVar20 = 1;
        break;
      case '\x02':
        uStack_178 = 0;
        uStack_180 = 0;
        puStack_168 = (undefined8 *)0x0;
        lStack_c8 = 0;
        puStack_d0 = (undefined8 *)0x0;
        puVar23 = (undefined8 *)0x0;
        puVar19 = (undefined8 *)0x0;
        uVar14 = 0;
        uVar15 = 0;
        bVar8 = false;
        uVar22 = *puVar2;
        uVar20 = 2;
        break;
      case '\x03':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        goto code_r0x0001098c7630;
      case '\x04':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        if (uVar24 < param_10) {
          plVar13 = (long *)(param_9 + uVar24 * 0x10);
          lVar21 = *plVar13;
          if (lVar21 != 0) {
            FUN_1098c7f3c(&plStack_80,lVar21,plVar13[1]);
          }
        }
code_r0x0001098c7630:
        uVar22 = 0;
code_r0x0001098c7980:
        puStack_d0 = (undefined8 *)0x0;
        puStack_168 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_180 = 0;
        uVar15 = 0;
        uVar14 = 0;
        lStack_c8 = 0;
        bVar8 = false;
        uVar20 = 3;
        break;
      case '\x05':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        uVar22 = puVar2[1];
        plVar12 = (long *)*plVar1;
        plVar13 = plVar1;
        if (plVar12 != (long *)0x0) {
          do {
            lVar21 = 8;
            if (uVar22 <= (ulong)plVar12[4]) {
              lVar21 = 0;
              plVar13 = plVar12;
            }
            plVar12 = *(long **)((long)plVar12 + lVar21);
          } while (plVar12 != (long *)0x0);
          if (((plVar13 != plVar1) && ((ulong)plVar13[4] <= uVar22)) && (plVar13[5] != 0)) {
            FUN_1098c7f3c(&plStack_80,plVar13[5],plVar13[6]);
          }
        }
        goto code_r0x0001098c7980;
      case '\x06':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        goto code_r0x0001098c781c;
      case '\a':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        if (uVar24 < param_10) {
          plVar13 = (long *)(param_9 + uVar24 * 0x10);
          lVar21 = *plVar13;
          if (lVar21 != 0) {
            FUN_1098c7f3c(&plStack_80,lVar21,plVar13[1]);
          }
        }
code_r0x0001098c781c:
        uVar22 = 0;
code_r0x0001098c799c:
        puStack_d0 = (undefined8 *)0x0;
        puStack_168 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_180 = 0;
        uVar15 = 0;
        uVar14 = 0;
        lStack_c8 = 0;
        bVar8 = false;
        uVar20 = 4;
        break;
      case '\b':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        uVar22 = puVar2[1];
        plVar12 = (long *)*plVar1;
        plVar13 = plVar1;
        if (plVar12 != (long *)0x0) {
          do {
            lVar21 = 8;
            if (uVar22 <= (ulong)plVar12[4]) {
              lVar21 = 0;
              plVar13 = plVar12;
            }
            plVar12 = *(long **)((long)plVar12 + lVar21);
          } while (plVar12 != (long *)0x0);
          if (((plVar13 != plVar1) && ((ulong)plVar13[4] <= uVar22)) && (plVar13[5] != 0)) {
            FUN_1098c7f3c(&plStack_80,plVar13[5],plVar13[6]);
          }
        }
        goto code_r0x0001098c799c;
      case '\t':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        cVar4 = *(char *)((long)puVar2 + 0x1f);
        if (cVar4 == '\x04') {
          puStack_168 = (undefined8 *)0x0;
          uVar14 = puVar2[1];
code_r0x0001098c7c78:
          uStack_178 = 0;
          uStack_180 = 0;
          bVar8 = false;
          uVar22 = 0;
          puStack_d0 = (undefined8 *)0x0;
          lStack_c8 = 0;
          uVar20 = 5;
          uVar15 = 2;
        }
        else {
          if (cVar4 != '\x03') {
            if (cVar4 != '\x02') {
              puStack_168 = (undefined8 *)0x0;
              goto code_r0x0001098c7bfc;
            }
            puStack_168 = (undefined8 *)0x0;
            uVar14 = puVar2[1];
            goto code_r0x0001098c7c0c;
          }
          puStack_168 = (undefined8 *)0x0;
          uVar14 = puVar2[1];
code_r0x0001098c7c54:
          uStack_178 = 0;
          uStack_180 = 0;
          bVar8 = false;
          uVar22 = 0;
          puStack_d0 = (undefined8 *)0x0;
          lStack_c8 = 0;
          uVar20 = 5;
          uVar15 = 1;
        }
        break;
      case '\n':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        goto code_r0x0001098c7874;
      case '\v':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        if (uVar24 < param_10) {
          plVar13 = (long *)(param_9 + uVar24 * 0x10);
          lVar21 = *plVar13;
          if (lVar21 != 0) {
            FUN_1098c7f3c(&plStack_80,lVar21,plVar13[1]);
          }
        }
code_r0x0001098c7874:
        uVar22 = 0;
code_r0x0001098c7964:
        puStack_d0 = (undefined8 *)0x0;
        puStack_168 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_180 = 0;
        uVar15 = 0;
        uVar14 = 0;
        lStack_c8 = 0;
        bVar8 = false;
        uVar20 = 6;
        break;
      case '\f':
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        uVar22 = puVar2[1];
        plVar12 = (long *)*plVar1;
        plVar13 = plVar1;
        if (plVar12 != (long *)0x0) {
          do {
            lVar21 = 8;
            if (uVar22 <= (ulong)plVar12[4]) {
              lVar21 = 0;
              plVar13 = plVar12;
            }
            plVar12 = *(long **)((long)plVar12 + lVar21);
          } while (plVar12 != (long *)0x0);
          if (((plVar13 != plVar1) && ((ulong)plVar13[4] <= uVar22)) && (plVar13[5] != 0)) {
            FUN_1098c7f3c(&plStack_80,plVar13[5],plVar13[6]);
          }
        }
        goto code_r0x0001098c7964;
      case '\r':
      case '\x0e':
      case '\x0f':
        uStack_178 = 0;
        uStack_180 = 0;
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        uVar10 = 4;
        if (cVar4 != '\x0e') {
          uVar10 = 6;
        }
        uVar20 = 3;
        if (cVar4 != '\r') {
          uVar20 = uVar10;
        }
        plVar13 = (long *)puVar2[1];
        if (plVar13 != (long *)0x0) {
          FUN_1098c7fb0(&uStack_a0,plVar13[1] - *plVar13 >> 3);
          puVar3 = (ulong *)plVar13[1];
          for (puVar18 = (ulong *)*plVar13; puVar18 != puVar3; puVar18 = puVar18 + 1) {
            plVar13 = (long *)*plVar1;
            if (plVar13 != (long *)0x0) {
              plVar12 = plVar1;
              do {
                lVar21 = 8;
                if (*puVar18 <= (ulong)plVar13[4]) {
                  lVar21 = 0;
                  plVar12 = plVar13;
                }
                plVar13 = *(long **)((long)plVar13 + lVar21);
              } while (plVar13 != (long *)0x0);
              if (((plVar12 != plVar1) && ((ulong)plVar12[4] <= *puVar18)) && (plVar12[5] != 0)) {
                func_0x0001098c804c(&uStack_a0);
              }
            }
          }
        }
        uVar22 = 0;
        puStack_168 = (undefined8 *)0x0;
        uVar15 = 0;
        uVar14 = 0;
        puStack_d0 = (undefined8 *)0x0;
        lStack_c8 = 0;
        bVar8 = false;
        break;
      case '\x10':
      case '\x12':
        uStack_178 = 0;
        uStack_180 = 0;
        uVar20 = 3;
        if (cVar4 != '\x10') {
          uVar20 = 6;
        }
        bVar8 = (int)puVar2[3] == 0;
        if (uVar24 < param_12) {
          plVar13 = (long *)(param_11 + uVar24 * 0x10);
          lVar21 = *plVar13;
          if (lVar21 != 0) {
            FUN_1098c8160(&puStack_b0,lVar21,plVar13[1]);
            puVar7 = puStack_b0;
            puStack_168 = puStack_b0;
            puVar23 = (undefined8 *)(long)*(char *)((long)puStack_b0 + 0x17);
            puVar19 = puStack_b0;
            if ((long)puVar23 < 0) {
              puVar23 = (undefined8 *)puStack_b0[1];
              puVar19 = (undefined8 *)*puStack_b0;
            }
            if (puStack_b0[0xd] != puStack_b0[0xe]) {
              if (plStack_a8 != (long *)0x0) {
                plVar13 = plStack_a8 + 1;
                do {
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar8) {
                    *plVar13 = *plVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              plStack_78 = plStack_a8;
              plStack_80 = puStack_b0 + 0xd;
            }
            uVar22 = puStack_b0[0x12];
            plVar12 = (long *)*plVar1;
            plVar13 = plVar1;
            if (uVar22 != 0 && plVar12 != (long *)0x0) {
              do {
                lVar21 = 8;
                if (uVar22 <= (ulong)plVar12[4]) {
                  lVar21 = 0;
                  plVar13 = plVar12;
                }
                plVar12 = *(long **)((long)plVar12 + lVar21);
              } while (plVar12 != (long *)0x0);
              if (((plVar13 != plVar1) && ((ulong)plVar13[4] <= uVar22)) && (plVar13[5] != 0)) {
                FUN_1098c7f3c(&plStack_80,plVar13[5],plVar13[6]);
              }
            }
            if (puVar7[0x13] != puVar7[0x14]) {
              FUN_1098c7fb0(&uStack_a0,(long)(puVar7[0x14] - puVar7[0x13]) >> 3);
              puVar3 = (ulong *)puVar7[0x14];
              for (puVar18 = (ulong *)puVar7[0x13]; puVar18 != puVar3; puVar18 = puVar18 + 1) {
                plVar13 = (long *)*plVar1;
                if (plVar13 != (long *)0x0) {
                  plVar12 = plVar1;
                  do {
                    lVar21 = 8;
                    if (*puVar18 <= (ulong)plVar13[4]) {
                      lVar21 = 0;
                      plVar12 = plVar13;
                    }
                    plVar13 = *(long **)((long)plVar13 + lVar21);
                  } while (plVar13 != (long *)0x0);
                  if (((plVar12 != plVar1) && ((ulong)plVar12[4] <= *puVar18)) && (plVar12[5] != 0))
                  {
                    func_0x0001098c804c(&uStack_a0);
                  }
                }
              }
            }
            if (*(char *)(puVar7 + 5) == '\x01') {
              lStack_c8 = (long)*(char *)((long)puVar7 + 0x47);
              if (lStack_c8 < 0) {
                puStack_d0 = (undefined8 *)puVar7[6];
                lStack_c8 = puVar7[7];
              }
              else {
                puStack_d0 = puVar7 + 6;
              }
              uStack_178 = puVar7[0xc];
              uStack_180 = puVar7[0xb];
              bVar8 = true;
            }
            else {
              lStack_c8 = 0;
              puStack_d0 = (undefined8 *)0x0;
              bVar8 = false;
            }
            uVar15 = 0;
            uVar14 = 0;
            break;
          }
        }
        puStack_168 = (undefined8 *)0x0;
        lStack_c8 = 0;
        puStack_d0 = (undefined8 *)0x0;
        puVar23 = (undefined8 *)0x0;
        puVar19 = (undefined8 *)0x0;
        uVar14 = 0;
        uVar15 = 0;
        uVar22 = 0;
        break;
      case '\x11':
        uStack_178 = 0;
        uStack_180 = 0;
        if (uVar24 < param_12) {
          plVar13 = (long *)(param_11 + uVar24 * 0x10);
          lVar21 = *plVar13;
          if (lVar21 == 0) goto code_r0x0001098c7918;
          FUN_1098c8160(&puStack_b0,lVar21,plVar13[1]);
          lStack_c8 = (long)*(char *)((long)puStack_b0 + 0x47);
          if (lStack_c8 < 0) {
            puStack_d0 = (undefined8 *)puStack_b0[6];
            lStack_c8 = puStack_b0[7];
          }
          else {
            puStack_d0 = puStack_b0 + 6;
          }
          uStack_178 = puStack_b0[0xc];
          uStack_180 = puStack_b0[0xb];
        }
        else {
code_r0x0001098c7918:
          lStack_c8 = 0;
          puStack_d0 = (undefined8 *)0x0;
        }
        puVar23 = (undefined8 *)0x0;
        uVar22 = 0;
        puVar19 = (undefined8 *)0x0;
        uVar15 = 0;
        uVar14 = 0;
        uVar20 = 4;
        bVar8 = true;
        puStack_168 = puStack_b0;
        break;
      case '\x13':
        if (uVar24 < param_12) {
          plVar13 = (long *)(param_11 + uVar24 * 0x10);
          lVar21 = *plVar13;
          if (lVar21 != 0) {
            FUN_1098c8160(&puStack_b0,lVar21,plVar13[1]);
            puStack_168 = puStack_b0;
            puVar23 = (undefined8 *)(long)*(char *)((long)puStack_b0 + 0x17);
            puVar19 = puStack_b0;
            if ((long)puVar23 < 0) {
              puVar23 = (undefined8 *)puStack_b0[1];
              puVar19 = (undefined8 *)*puStack_b0;
            }
            cVar4 = *(char *)((long)puVar2 + 0x1f);
            if (cVar4 != '\x04') {
              if (cVar4 != '\x03') {
                if (cVar4 != '\x02') goto code_r0x0001098c7bfc;
                uVar14 = puStack_b0[0x18];
                goto code_r0x0001098c7c0c;
              }
              uVar14 = puStack_b0[0x18];
              goto code_r0x0001098c7c54;
            }
            uVar14 = puStack_b0[0x18];
            goto code_r0x0001098c7c78;
          }
        }
        puStack_168 = (undefined8 *)0x0;
        puVar23 = (undefined8 *)0x0;
        puVar19 = (undefined8 *)0x0;
code_r0x0001098c7bfc:
        uVar14 = 0;
code_r0x0001098c7c0c:
        uStack_178 = 0;
        uStack_180 = 0;
        bVar8 = false;
        uVar22 = 0;
        uVar15 = 0;
        puStack_d0 = (undefined8 *)0x0;
        lStack_c8 = 0;
        uVar20 = 5;
        break;
      case '\x14':
        uStack_178 = 0;
        uStack_180 = 0;
        puVar19 = (undefined8 *)*puVar2;
        puVar23 = puVar19;
        _strlen();
        puStack_168 = (undefined8 *)0x0;
        lStack_c8 = 0;
        puStack_d0 = (undefined8 *)0x0;
        uVar14 = 0;
        uVar15 = 0;
        uVar22 = 0;
        bVar8 = false;
        uVar20 = 7;
        break;
      default:
        uStack_178 = 0;
        uStack_180 = 0;
        puStack_168 = (undefined8 *)0x0;
        lStack_c8 = 0;
        puStack_d0 = (undefined8 *)0x0;
        puVar23 = (undefined8 *)0x0;
        puVar19 = (undefined8 *)0x0;
        uVar14 = 0;
        uVar15 = 0;
        uVar22 = 0;
        bVar8 = false;
        uVar20 = 0;
      }
      uStack_f0 = uStack_90;
      uStack_160 = CONCAT31(uStack_160._1_3_,uVar20);
      uStack_160 = CONCAT22(*(undefined2 *)((long)puVar2 + 0x1c),(undefined2)uStack_160);
      uVar6 = puVar2[3];
      uVar16 = puVar2[2];
      plStack_108 = plStack_78;
      plStack_110 = plStack_80;
      if (plStack_78 != (long *)0x0) {
        plVar13 = plStack_78 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_f8 = uStack_98;
      uStack_100 = uStack_a0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      puStack_e8 = puStack_168;
      plStack_e0 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar13 = plStack_a8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_b8 = uStack_178;
      uStack_c0 = uStack_180;
      puVar17 = (undefined4 *)(param_5 + uVar24 * 0xb0);
      *puVar17 = uStack_160;
      *(undefined8 **)(puVar17 + 4) = puVar23;
      *(undefined8 **)(puVar17 + 2) = puVar19;
      *(ulong *)(puVar17 + 0x12) = uVar22;
      *(undefined8 *)(puVar17 + 0x10) = param_4;
      *(undefined8 *)(puVar17 + 0xe) = param_3;
      *(ulong *)(puVar17 + 0xc) = CONCAT44(uStack_12c,uVar15);
      *(ulong *)(puVar17 + 10) = uVar14;
      *(ulong *)(puVar17 + 8) = uVar16;
      *(ulong *)(puVar17 + 6) = CONCAT44(uStack_144,(int)uVar6);
      uStack_d8 = bVar8;
      FUN_1098c6440(puVar17 + 0x14,&plStack_110);
      plVar13 = (long *)(puVar17 + 0x18);
      lVar21 = *plVar13;
      if (lVar21 != 0) {
        lVar9 = *(long *)(puVar17 + 0x1a);
        lVar11 = lVar21;
        if (lVar9 != lVar21) {
          do {
            lVar9 = lVar9 + -0x10;
            FUN_1098c6a9c();
          } while (lVar9 != lVar21);
          lVar11 = *plVar13;
        }
        *(long *)(puVar17 + 0x1a) = lVar21;
        __ZdlPv(lVar11);
        *plVar13 = 0;
        *(undefined8 *)(puVar17 + 0x1a) = 0;
        *(undefined8 *)(puVar17 + 0x1c) = 0;
      }
      *(undefined8 *)(puVar17 + 0x1a) = uStack_f8;
      *(undefined8 *)(puVar17 + 0x18) = uStack_100;
      *(undefined8 *)(puVar17 + 0x1c) = uStack_f0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x0001098c64a4(puVar17 + 0x1e,&puStack_e8);
      plVar13 = plStack_e0;
      *(undefined1 *)(puVar17 + 0x22) = uStack_d8;
      *(long *)(puVar17 + 0x26) = lStack_c8;
      *(undefined8 **)(puVar17 + 0x24) = puStack_d0;
      *(undefined8 *)(puVar17 + 0x2a) = uStack_b8;
      *(undefined8 *)(puVar17 + 0x28) = uStack_c0;
      if (plStack_e0 != (long *)0x0) {
        plVar12 = plStack_e0 + 1;
        do {
          lVar21 = *plVar12;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      func_0x0001098c8268(&uStack_100);
      plVar13 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar12 = plStack_108 + 1;
        do {
          lVar21 = *plVar12;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar12 = plStack_a8 + 1;
        do {
          lVar21 = *plVar12;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      func_0x0001098c8268(&uStack_a0);
      plVar13 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar12 = plStack_78 + 1;
        do {
          lVar21 = *plVar12;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != param_2);
  }
  return;
}



/* Entry: 1098c7f3c; end: 1098c7faf;  */

undefined8 * FUN_1098c7f3c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1098c7fb0; end: 1098c815f;  */

ulong * FUN_1098c7fb0(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  uVar8 = *param_1;
  if ((undefined8 *)((long)(param_1[2] - uVar8) >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_1098c81d4();
      puVar6 = (undefined8 *)param_1[1];
      if (puVar6 < (undefined8 *)param_1[2]) {
        lVar10 = param_2[1];
        uVar13 = *param_2;
        puVar6[1] = param_2[1];
        *puVar6 = uVar13;
        if (lVar10 != 0) {
          plVar12 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar6 = puVar6 + 2;
        puVar5 = param_1;
      }
      else {
        lVar10 = (long)puVar6 - *param_1;
        uVar8 = (lVar10 >> 4) + 1;
        if (uVar8 >> 0x3c != 0) {
          FUN_1098c81d4();
          if (param_3 != 0) {
            plVar12 = (long *)(param_3 + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar12 = (long *)param_1[1];
          *param_1 = (ulong)param_2;
          param_1[1] = param_3;
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              lVar10 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          return param_1;
        }
        uVar11 = (long)param_1[2] - *param_1;
        uVar9 = (long)uVar11 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < uVar11) {
          uVar9 = 0xfffffffffffffff;
        }
        puVar7 = param_2;
        puStack_98 = param_1;
        FUN_1098c81e8();
        puVar2 = (undefined8 *)(uVar9 + lVar10);
        lVar10 = param_2[1];
        uVar13 = *param_2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar13;
        if (lVar10 != 0) {
          plVar12 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar6 = puVar2 + 2;
        uVar8 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(uVar8);
        uStack_b8 = *param_1;
        *param_1 = uVar8;
        param_1[1] = (ulong)puVar6;
        uStack_a0 = param_1[2];
        param_1[2] = uVar9 + (long)puVar7 * 0x10;
        puVar5 = &uStack_b8;
        uStack_b0 = uStack_b8;
        uStack_a8 = uStack_b8;
        func_0x0001098c821c(puVar5);
      }
      param_1[1] = (ulong)puVar6;
      return puVar5;
    }
    uVar9 = param_1[1];
    puVar6 = param_2;
    puStack_38 = param_1;
    FUN_1098c81e8();
    uVar8 = (long)param_2 + (uVar9 - uVar8);
    uVar9 = uVar8 - (param_1[1] - *param_1);
    _memcpy(uVar9);
    uStack_58 = *param_1;
    *param_1 = uVar9;
    param_1[1] = uVar8;
    uStack_40 = param_1[2];
    param_1[2] = (ulong)(param_2 + (long)puVar6 * 2);
    param_1 = &uStack_58;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x0001098c821c(param_1);
  }
  return param_1;
}



/* Entry: 1098c8160; end: 1098c81d3;  */

undefined8 * FUN_1098c8160(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1098c81d4; end: 1098c81e7;  */

undefined1  [16] FUN_1098c81d4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_1098c6a9c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 1098c81e8; end: 1098c82c3;  */

undefined1  [16] FUN_1098c81e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_1098c6a9c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1098c82c4; end: 1098c82ff;  */

long FUN_1098c82c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}


