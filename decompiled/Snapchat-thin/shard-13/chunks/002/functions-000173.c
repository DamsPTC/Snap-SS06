/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2da5cc; end: 10a2da6e3;  */

void FUN_10a2da5cc(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 < (long *)param_1[2]) {
    lVar11 = param_2[1];
    lVar13 = *param_2;
    plVar8[1] = param_2[1];
    *plVar8 = lVar13;
    if (lVar11 != 0) {
      plVar1 = (long *)(lVar11 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar8 = plVar8 + 2;
  }
  else {
    lVar11 = (long)plVar8 - *param_1;
    uVar2 = (lVar11 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      FUN_10a2e3050();
      plVar8 = (long *)param_2[1];
      if ((plVar8 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
        lVar11 = *param_2;
        plVar1 = plVar8 + 1;
        do {
          lVar13 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
        if (lVar11 != 0) {
          for (plVar8 = (long *)param_1[0x46]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            plVar5 = (long *)plVar8[6];
            plVar1 = (long *)plVar8[5];
            plVar9 = plVar1;
            for (; plVar1 != plVar5; plVar1 = plVar1 + 2) {
              plVar9 = (long *)plVar1[1];
              if ((plVar9 != (long *)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
                lVar13 = *plVar1;
                plVar3 = plVar9 + 1;
                do {
                  lVar14 = *plVar3;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar7) {
                    *plVar3 = lVar14 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar14 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                }
                if (lVar11 == lVar13) {
                  plVar9 = plVar1;
                  if (plVar1 != plVar5) goto joined_r0x00010a2da7dc;
                  break;
                }
              }
              plVar9 = plVar5;
            }
LAB_10a2da868:
            FUN_10a2e2f84(plVar8 + 5,plVar9,plVar8[6]);
          }
        }
      }
      return;
    }
    uVar12 = param_1[2] - *param_1;
    uVar15 = (long)uVar12 >> 3;
    if (uVar15 <= uVar2) {
      uVar15 = uVar2;
    }
    if (0x7fffffffffffffef < uVar12) {
      uVar15 = 0xfffffffffffffff;
    }
    plVar9 = param_1;
    plStack_38 = param_1;
    FUN_10a2e3064();
    plVar1 = (long *)((long)plVar9 + lVar11);
    lVar11 = param_2[1];
    lVar13 = *param_2;
    plVar1[1] = param_2[1];
    *plVar1 = lVar13;
    if (lVar11 != 0) {
      plVar8 = (long *)(lVar11 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = *plVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar8 = plVar1 + 2;
    lVar11 = (long)plVar1 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lStack_58 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)plVar8;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar9 + uVar15 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a2e3098(&lStack_58);
  }
  param_1[1] = (long)plVar8;
  return;
joined_r0x00010a2da7dc:
  plVar3 = plVar1 + 2;
  if (plVar3 != plVar5) {
    plVar10 = (long *)plVar1[3];
    plVar1 = plVar3;
    if ((plVar10 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 != (long *)0x0))
    goto code_r0x00010a2da7f8;
    goto LAB_10a2da838;
  }
  goto LAB_10a2da868;
code_r0x00010a2da7f8:
  lVar13 = *plVar3;
  plVar4 = plVar10 + 1;
  do {
    lVar14 = *plVar4;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  if (lVar11 != lVar13) {
LAB_10a2da838:
    lVar16 = plVar3[1];
    lVar14 = *plVar3;
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar13 = plVar9[1];
    plVar9[1] = lVar16;
    *plVar9 = lVar14;
    if (lVar13 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar9 = plVar9 + 2;
  }
  goto joined_r0x00010a2da7dc;
}



/* Entry: 10a2da6e4; end: 10a2da897;  */

void FUN_10a2da6e4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  plVar7 = (long *)param_2[1];
  if ((plVar7 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0))
  {
    lVar12 = *param_2;
    plVar3 = plVar7 + 1;
    do {
      lVar10 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    if (lVar12 != 0) {
      for (plVar7 = *(long **)(param_1 + 0x230); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar4 = (long *)plVar7[6];
        plVar3 = (long *)plVar7[5];
        plVar8 = plVar3;
        for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
          plVar8 = (long *)plVar3[1];
          if ((plVar8 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
            lVar10 = *plVar3;
            plVar1 = plVar8 + 1;
            do {
              lVar11 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
            if (lVar12 == lVar10) {
              plVar8 = plVar3;
              if (plVar3 != plVar4) goto joined_r0x00010a2da7dc;
              break;
            }
          }
          plVar8 = plVar4;
        }
LAB_10a2da868:
        FUN_10a2e2f84(plVar7 + 5,plVar8,plVar7[6]);
      }
    }
  }
  return;
joined_r0x00010a2da7dc:
  plVar1 = plVar3 + 2;
  if (plVar1 != plVar4) {
    plVar9 = (long *)plVar3[3];
    plVar3 = plVar1;
    if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)
       ) goto code_r0x00010a2da7f8;
    goto LAB_10a2da838;
  }
  goto LAB_10a2da868;
code_r0x00010a2da7f8:
  lVar10 = *plVar1;
  plVar2 = plVar9 + 1;
  do {
    lVar11 = *plVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
  if (lVar12 != lVar10) {
LAB_10a2da838:
    lVar13 = plVar1[1];
    lVar11 = *plVar1;
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar10 = plVar8[1];
    plVar8[1] = lVar13;
    *plVar8 = lVar11;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar8 = plVar8 + 2;
  }
  goto joined_r0x00010a2da7dc;
}



/* Entry: 10a2da898; end: 10a2da913;  */

void FUN_10a2da898(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a2da914; end: 10a2da923;  */

void FUN_10a2da914(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a2da924; end: 10a2da9c7;  */

void FUN_10a2da924(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*(long **)(param_2 + 0x270) == (long *)0x0) {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x270) + 0x40))(&lStack_30);
    if (lStack_30 != 0) {
      FUN_10acb1e84(param_1);
      goto LAB_10a2da96c;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10a2da96c:
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a2da9c8; end: 10a2daaa3;  */

undefined1  [16] FUN_10a2da9c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f64c8c8;
  return auVar1;
}



/* Entry: 10a2daaa4; end: 10a2daf17;  */

void FUN_10a2daaa4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c8c8,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc1a10;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc1a10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd9df0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2daef8;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10a2fdb58,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2daef8;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10a2fdc90,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2daef8;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10a2fdd50,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2daef8;
    FUN_10a054dac(param_1,&UNK_10f64c2aa,FUN_10a2fde0c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2daef8;
    FUN_10a054dac(param_1,&UNK_10f64c2b7,FUN_10a2fdec4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c2c6,FUN_10a2fdf7c,FUN_10a2fe034);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c2d5,FUN_10a2fe15c,FUN_10a2fe214);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"local",FUN_10a2fe2d4,FUN_10a2fe38c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c2e1,FUN_10a2fe4c0,FUN_10a2fe5dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c2f0,FUN_10a2feb40,FUN_10a2fec24);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c8c8,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2daef8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2daefc);
  (*pcVar6)();
}



/* Entry: 10a2daf18; end: 10a2db06b;  */

undefined8 * FUN_10a2daf18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0xab] = &PTR_FUN_110c383b8;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  *(undefined2 *)(param_1 + 0xae) = 0x100;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110bbec88,param_2,param_3,0x10);
  *puVar1 = &PTR_FUN_110bbe898;
  puVar1[2] = &PTR_DAT_110bbead0;
  puVar1[7] = &PTR_DAT_110bbeb28;
  puVar1[0xd] = &PTR_DAT_110bbeb48;
  puVar1[0xab] = &PTR_DAT_110bbec48;
  puVar1[0x16] = &PTR_DAT_110bbebb8;
  puVar1[0x17] = &PTR_DAT_110bbebe8;
  *(undefined4 *)(puVar1 + 0x9e) = 0;
  *(undefined2 *)((long)puVar1 + 0x4f4) = 7;
  puVar1[0xa0] = 0;
  puVar1[0x9f] = 0;
  puVar1[0xa2] = 0;
  puVar1[0xa1] = 0;
  puVar1[0xa4] = 0;
  puVar1[0xa3] = 0;
  puVar1[0xa6] = 0;
  puVar1[0xa5] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xa7] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0xa9] = puVar1 + 3;
  param_1[0xaa] = puVar1;
  FUN_10a5cf1fc(param_1 + 0xa9);
  *(undefined1 *)(param_1 + 0x9e) = 1;
  return param_1;
}



/* Entry: 10a2db06c; end: 10a2db3d7;  */

void FUN_10a2db06c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  char cStack_49;
  long lStack_40;
  long *plStack_38;
  
  if ((*(long *)(param_1 + 0x4f8) != 0) && ((*(byte *)(param_1 + 0x4f5) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x4f5) = 1;
    pplVar5 = &plStack_60;
    FUN_10a0d0194(&lStack_40,pplVar5);
    FUN_10ab6e728();
    FUN_10ab6f958(lStack_40 + 0xf8,pplVar5);
    lVar8 = lStack_40 + 0xf0;
    FUN_10ab6f86c(lVar8);
    FUN_10ab6ed98();
    FUN_10ab6f958(lStack_40 + 0xf8,lVar8);
    FUN_10ab6f86c(lStack_40 + 0xf0);
    func_0x000107c2b07c(&plStack_60,&UNK_10f64c2fc);
    FUN_10ab6f7f8(lStack_40 + 0xf0,&plStack_60,5,2,0);
    if (cStack_49 < '\0') {
      __ZdlPv(plStack_60);
    }
    *(undefined4 *)(lStack_40 + 0xec) = 0;
    uVar7 = (ulong)*(uint *)(lStack_40 + 0xf0);
    lVar8 = *(long *)(lStack_40 + 0x10);
    plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
    uVar9 = *(long *)(lStack_40 + 0x18) - lVar8;
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *(ulong *)(lStack_40 + 0x18) = lVar8 + uVar7;
      }
    }
    else {
      func_0x000105343774((long *)(lStack_40 + 0x10),uVar7 - uVar9,&plStack_60);
    }
    *(undefined4 *)(lStack_40 + 0xe8) = 1;
    lVar8 = *(long *)(lStack_40 + 0x28);
    plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
    uVar7 = *(long *)(lStack_40 + 0x30) - lVar8;
    if (uVar7 < 6) {
      func_0x000105343774((long *)(lStack_40 + 0x28),6 - uVar7,&plStack_60);
    }
    else if (uVar7 != 6) {
      *(long *)(lStack_40 + 0x30) = lVar8 + 6;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x170);
    plVar6 = (long *)0x120;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110bab2f0;
    plVar1 = plVar6 + 3;
    FUN_10ac6ea60(plVar1,uVar10,0,&lStack_40);
    plStack_60 = plVar1;
    plStack_58 = plVar6;
    FUN_10a192354(&plStack_60,plVar6 + 0xb,plVar1);
    plVar1 = (long *)(param_1 + 0x508);
    func_0x00010a19a938(plVar1,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = (long *)*plVar1;
    if (*(char *)((long)plVar6 + 0xb9) != '\x01') {
      *(undefined1 *)((long)plVar6 + 0xb9) = 1;
      (**(code **)(*plVar6 + 0xa0))();
      plVar6 = (long *)*plVar1;
    }
    if (*(char *)((long)plVar6 + 0xba) != '\x01') {
      *(undefined1 *)((long)plVar6 + 0xba) = 1;
      (**(code **)(*plVar6 + 0xa0))();
    }
    uStack_68 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a2db3d8(&plStack_60,&uStack_68,plVar1);
    plStack_78 = plStack_58;
    plStack_80 = plStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a426824(param_1,&plStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a2db3d8; end: 10a2db46b;  */

void FUN_10a2db3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a2fed78(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a0cf858(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a2db46c; end: 10a2db477;  */

void FUN_10a2db46c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  char cStack_49;
  long lStack_40;
  long *plStack_38;
  
  if ((*(long *)(param_1 + 0x4f8) != 0) && ((*(byte *)(param_1 + 0x4f5) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x4f5) = 1;
    pplVar5 = &plStack_60;
    FUN_10a0d0194(&lStack_40,pplVar5);
    FUN_10ab6e728();
    FUN_10ab6f958(lStack_40 + 0xf8,pplVar5);
    lVar8 = lStack_40 + 0xf0;
    FUN_10ab6f86c(lVar8);
    FUN_10ab6ed98();
    FUN_10ab6f958(lStack_40 + 0xf8,lVar8);
    FUN_10ab6f86c(lStack_40 + 0xf0);
    func_0x000107c2b07c(&plStack_60,&UNK_10f64c2fc);
    FUN_10ab6f7f8(lStack_40 + 0xf0,&plStack_60,5,2,0);
    if (cStack_49 < '\0') {
      __ZdlPv(plStack_60);
    }
    *(undefined4 *)(lStack_40 + 0xec) = 0;
    uVar7 = (ulong)*(uint *)(lStack_40 + 0xf0);
    lVar8 = *(long *)(lStack_40 + 0x10);
    plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
    uVar9 = *(long *)(lStack_40 + 0x18) - lVar8;
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *(ulong *)(lStack_40 + 0x18) = lVar8 + uVar7;
      }
    }
    else {
      func_0x000105343774((long *)(lStack_40 + 0x10),uVar7 - uVar9,&plStack_60);
    }
    *(undefined4 *)(lStack_40 + 0xe8) = 1;
    lVar8 = *(long *)(lStack_40 + 0x28);
    plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
    uVar7 = *(long *)(lStack_40 + 0x30) - lVar8;
    if (uVar7 < 6) {
      func_0x000105343774((long *)(lStack_40 + 0x28),6 - uVar7,&plStack_60);
    }
    else if (uVar7 != 6) {
      *(long *)(lStack_40 + 0x30) = lVar8 + 6;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x170);
    plVar6 = (long *)0x120;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110bab2f0;
    plVar1 = plVar6 + 3;
    FUN_10ac6ea60(plVar1,uVar10,0,&lStack_40);
    plStack_60 = plVar1;
    plStack_58 = plVar6;
    FUN_10a192354(&plStack_60,plVar6 + 0xb,plVar1);
    plVar1 = (long *)(param_1 + 0x508);
    func_0x00010a19a938(plVar1,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = (long *)*plVar1;
    if (*(char *)((long)plVar6 + 0xb9) != '\x01') {
      *(undefined1 *)((long)plVar6 + 0xb9) = 1;
      (**(code **)(*plVar6 + 0xa0))();
      plVar6 = (long *)*plVar1;
    }
    if (*(char *)((long)plVar6 + 0xba) != '\x01') {
      *(undefined1 *)((long)plVar6 + 0xba) = 1;
      (**(code **)(*plVar6 + 0xa0))();
    }
    uStack_68 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a2db3d8(&plStack_60,&uStack_68,plVar1);
    plStack_78 = plStack_58;
    plStack_80 = plStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a426824(param_1,&plStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a2db478; end: 10a2db4cf;  */

void FUN_10a2db478(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10a421994();
  lVar4 = *(long *)(param_1 + 0x548);
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110bc1a10,param_1);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a2db4d0; end: 10a2db517;  */

void FUN_10a2db4d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (((0xb0 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) &&
      (*(char *)((long)param_1 + 0x20c) == '\x01')) &&
     (lVar2 = *(long *)(param_1[0x2d] + 0x188), lVar2 != 0)) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0xbd1555114443a935);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x128))();
          (**(code **)(*param_1 + 0x130))(param_1,plVar1);
          break;
        }
      }
    }
  }
  if ((*(ushort *)(param_1 + 0x30) & 0x17) != 0) {
    return;
  }
  if ((param_1[0x2d] != 0) && ((*(ushort *)(param_1[0x2d] + 0x118) >> 9 & 1) != 0)) {
    if (((*(uint *)(param_1 + 0x3d) ^ 0xffffffff) & 2) != 0 ||
        (*(uint *)((long)param_1 + 0x1ec) & 2) != 2) {
      *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 2;
      *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x2e] + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a2db518; end: 10a2db5bb;  */

void FUN_10a2db518(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbe898;
  param_1[2] = &PTR_DAT_110bbead0;
  param_1[7] = &PTR_DAT_110bbeb28;
  param_1[0xd] = &PTR_DAT_110bbeb48;
  param_1[0xab] = &PTR_DAT_110bbec48;
  param_1[0x16] = &PTR_DAT_110bbebb8;
  param_1[0x17] = &PTR_DAT_110bbebe8;
  func_0x00010a004e5c(param_1 + 0xa9);
  puStack_28 = param_1 + 0xa6;
  FUN_10a044868(&puStack_28);
  if (*(char *)((long)param_1 + 0x52f) < '\0') {
    __ZdlPv(param_1[0xa3]);
  }
  func_0x00010a1943a0(param_1 + 0xa1);
  FUN_10a2fed20(param_1 + 0x9f);
  FUN_10a420f70(param_1,&PTR_PTR_110bbec88);
  return;
}



/* Entry: 10a2db5bc; end: 10a2db5f7;  */

void FUN_10a2db5bc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbe898;
  param_1[2] = &PTR_DAT_110bbead0;
  param_1[7] = &PTR_DAT_110bbeb28;
  param_1[0xd] = &PTR_DAT_110bbeb48;
  param_1[0xab] = &PTR_DAT_110bbec48;
  param_1[0x16] = &PTR_DAT_110bbebb8;
  param_1[0x17] = &PTR_DAT_110bbebe8;
  func_0x00010a004e5c(param_1 + 0xa9);
  puStack_28 = param_1 + 0xa6;
  FUN_10a044868(&puStack_28);
  if (*(char *)((long)param_1 + 0x52f) < '\0') {
    __ZdlPv(param_1[0xa3]);
  }
  func_0x00010a1943a0(param_1 + 0xa1);
  FUN_10a2fed20(param_1 + 0x9f);
  FUN_10a420f70(param_1,&PTR_PTR_110bbec88);
  return;
}



/* Entry: 10a2db5f8; end: 10a2db683;  */

void FUN_10a2db5f8(void)

{
  FUN_10a2db518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2db684; end: 10a2db6b3;  */

void FUN_10a2db684(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a2db518((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2db6b4; end: 10a2db9e3;  */

void FUN_10a2db6b4(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  long lStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code **ppcStack_180;
  code **ppcStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_148 [2];
  char cStack_131;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a42241c();
  pcStack_130 = FUN_10a2ff11c;
  ppuStack_128 = &PTR_FUN_110bc3178;
  pcStack_f0 = FUN_10a2ff11c;
  ppuStack_e8 = &PTR_FUN_110bc3178;
  uStack_a0 = CONCAT17(9,(undefined7)uStack_a0);
  uStack_b0 = 0x656c636974726170;
  uStack_a8 = CONCAT62(uStack_a8._2_6_,0x73);
  pcStack_98 = FUN_10a2feedc;
  ppuStack_90 = &PTR_FUN_110bc3160;
  puVar5 = (undefined8 *)0x58;
  lStack_120 = param_1;
  lStack_e0 = param_1;
  __Znwm();
  *puVar5 = FUN_10a2ff11c;
  puVar5[1] = &PTR_FUN_110bc3178;
  puVar5[2] = param_1;
  puVar5[9] = uStack_a8;
  puVar5[8] = uStack_b0;
  puVar5[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar5;
  func_0x000107c2b054(auStack_148,&UNK_10f64b3ce);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bbecc0,&pcStack_98,0,auStack_148);
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  (**(code **)(*param_2 + 0xa0))(&pcStack_f0,param_2,&PTR_DAT_110bbece0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x518,&pcStack_f0);
  if (lStack_e0 < 0) {
    __ZdlPv(pcStack_f0);
  }
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc2800,0);
  *(char *)(param_1 + 0x4f3) = (char)plVar6;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bbed00,1);
  *(char *)(param_1 + 0x4f0) = (char)plVar6;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_local_110bc2820,0);
  *(char *)(param_1 + 0x4f2) = (char)plVar6;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bbed20,0);
  *(char *)(param_1 + 0x4f1) = (char)plVar6;
  bVar2 = *(byte *)(param_1 + 0x4f4);
  pcStack_f0 = (code *)CONCAT44(pcStack_f0._4_4_,
                                ((uint)bVar2 << 0x15 | (uint)bVar2 << 0xe) & 0x1010101 |
                                (bVar2 & 2) << 7 | bVar2 & 1);
  ppuVar8 = &PTR_DAT_110bbed40;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x180))(param_2,&PTR_DAT_110bbed40,&pcStack_f0);
  *(byte *)(param_1 + 0x4f4) =
       (byte)((ulong)plVar6 >> 7) & 0xfe | (byte)plVar6 |
       (byte)((uint)plVar6 >> 0xe) & 0xfc | (byte)((ulong)plVar6 >> 0x15) & 0xf8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_e0 < 0) {
    __ZdlPv(pcStack_f0);
  }
  plVar7 = plVar6;
  __Unwind_Resume();
  pcStack_158 = FUN_10a2db9e4;
  ppcStack_180 = &pcStack_f0;
  ppcStack_178 = &pcStack_130;
  plStack_170 = param_2;
  plStack_168 = plVar6;
  puStack_160 = &stack0xfffffffffffffff0;
  FUN_10a422a34();
  lStack_1a0 = plVar7[0x9f];
  plStack_198 = (long *)plVar7[0xa0];
  puStack_190 = &UNK_10f64c8f4;
  uStack_188 = 0x14;
  if (plStack_198 != (long *)0x0) {
    plVar6 = plStack_198 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*ppuVar8 + 0x108))(ppuVar8,&PTR_DAT_110bbecc0,&lStack_1a0,&puStack_190);
  plVar6 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar1 = plStack_198 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a00d760(ppuVar8,&PTR_DAT_110bbece0,plVar7 + 0xa3);
  (**(code **)(*ppuVar8 + 0x40))(ppuVar8,&PTR_DAT_110bc2800,*(undefined1 *)((long)plVar7 + 0x4f3));
  (**(code **)(*ppuVar8 + 0x70))(ppuVar8,&PTR_DAT_110bbed00,(char)plVar7[0x9e]);
  (**(code **)(*ppuVar8 + 0x70))
            (ppuVar8,&PTR_s_local_110bc2820,*(undefined1 *)((long)plVar7 + 0x4f2));
  (**(code **)(*ppuVar8 + 0x70))(ppuVar8,&PTR_DAT_110bbed20,*(undefined1 *)((long)plVar7 + 0x4f1));
  bVar2 = *(byte *)((long)plVar7 + 0x4f4);
  puStack_190 = (undefined *)
                CONCAT44(puStack_190._4_4_,
                         ((uint)bVar2 << 0x15 | (uint)bVar2 << 0xe) & 0x1010101 |
                         (bVar2 & 2) << 7 | bVar2 & 1);
  (**(code **)(*ppuVar8 + 200))(ppuVar8,&PTR_DAT_110bbed40,&puStack_190);
  return;
}



/* Entry: 10a2db9e4; end: 10a2dbb7f;  */

void FUN_10a2db9e4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a422a34();
  uStack_50 = *(undefined8 *)(param_1 + 0x4f8);
  plStack_48 = *(long **)(param_1 + 0x500);
  puStack_40 = &UNK_10f64c8f4;
  uStack_38 = 0x14;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bbecc0,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10a00d760(param_2,&PTR_DAT_110bbece0,param_1 + 0x518);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc2800,*(undefined1 *)(param_1 + 0x4f3));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbed00,*(undefined1 *)(param_1 + 0x4f0));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_local_110bc2820,*(undefined1 *)(param_1 + 0x4f2));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbed20,*(undefined1 *)(param_1 + 0x4f1));
  bVar3 = *(byte *)(param_1 + 0x4f4);
  puStack_40 = (undefined *)
               CONCAT44(puStack_40._4_4_,
                        ((uint)bVar3 << 0x15 | (uint)bVar3 << 0xe) & 0x1010101 |
                        (bVar3 & 2) << 7 | bVar3 & 1);
  (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110bbed40,&puStack_40);
  return;
}



/* Entry: 10a2dbb80; end: 10a2dbbeb;  */

void FUN_10a2dbb80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (0xe1 < *(int *)(param_1 + 0x18))) {
    uVar1 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a2e1840();
    uVar2 = uVar1;
    ___cxa_throw(uVar1,&PTR_DAT_110b99e48,FUN_10a002a90);
    ___cxa_free_exception(uVar1);
    __Unwind_Resume(uVar2);
    return;
  }
  return;
}



/* Entry: 10a2dbbec; end: 10a2dbbf3;  */

void FUN_10a2dbbec(void)

{
  return;
}



/* Entry: 10a2dbbf4; end: 10a2dc0ef;  */

undefined1  [16] FUN_10a2dbbf4(undefined8 *param_1,long ****param_2,undefined8 param_3,long param_4)

{
  long ****pppplVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined ***pppuVar8;
  long *****ppppplVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long ****pppplStack_f0;
  long ***ppplStack_e8;
  long ****pppplStack_e0;
  undefined **ppuStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_a0;
  long ***ppplStack_98;
  long ****pppplStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    pppplVar13 = param_2;
    uVar12 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppplStack_98 = param_2[9];
    pppplStack_a0 = (long ****)param_2[8];
    lVar7 = param_4 + 0x88;
    func_0x00010a35bf90(lVar7,&pppplStack_a0);
    puVar4 = (undefined8 *)((ulong)&pppplStack_a0 | 8);
    ppppplVar15 = &pppplStack_a0;
    if (lVar7 != 0) {
      puVar4 = (undefined8 *)(lVar7 + 0x28);
      ppppplVar15 = (long *****)(lVar7 + 0x20);
    }
    uVar12 = *puVar4;
    pppplVar13 = *ppppplVar15;
  }
  ppppplVar15 = (long *****)param_2[0x2e];
  FUN_10a3dd220(ppppplVar15);
  FUN_10a2ff1d8(ppppplVar15,pppplVar13,uVar12);
  pppplVar13 = (long ****)0x28;
  pppplStack_f0 = (long ****)ppppplVar15;
  __Znwm();
  pppplVar14 = pppplVar13 + 1;
  *pppplVar14 = (long ***)0x0;
  *pppplVar13 = (long ***)&PTR_FUN_110bc31a0;
  pppplVar13[2] = (long ***)0x0;
  pppplVar13[3] = (long ***)ppppplVar15;
  pppplVar13[4] = (long ***)FUN_10a3df8cc;
  ppplStack_e8 = (long ***)pppplVar13;
  if (ppppplVar15 != (long *****)0x0) {
    if (ppppplVar15[6] == (long ****)0x0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
        if (bVar6) {
          *pppplVar14 = (long ***)((long)*pppplVar14 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pppplVar1 = pppplVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
        if (bVar6) {
          *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppppplVar15[5] = (long ****)ppppplVar15;
      ppppplVar15[6] = pppplVar13;
    }
    else {
      if (ppppplVar15[6][1] != (long ***)0xffffffffffffffff) goto LAB_10a2dbd70;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
        if (bVar6) {
          *pppplVar14 = (long ***)((long)*pppplVar14 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pppplVar1 = pppplVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
        if (bVar6) {
          *pppplVar1 = (long ***)((long)*pppplVar1 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppppplVar15[5] = (long ****)ppppplVar15;
      ppppplVar15[6] = pppplVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      ppplVar10 = *pppplVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
      if (bVar6) {
        *pppplVar14 = (long ***)((long)ppplVar10 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppplVar10 == (long ***)0x0) {
      (*(code *)(*pppplVar13)[2])(pppplVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar13);
    }
  }
LAB_10a2dbd70:
  pppplVar13 = pppplStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pppplStack_f0 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(pppplVar13 + 0x30) & 0xfffc;
  *(ushort *)(pppplVar13 + 0x30) = uVar3 | *(ushort *)(pppplVar13 + 0x30) & 1 | uVar2;
  *(ushort *)(pppplVar13 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  pppplStack_a0 = pppplVar13;
  ppplStack_98 = ppplStack_e8;
  if ((long ****)ppplStack_e8 != (long ****)0x0) {
    pppplVar13 = (long ****)(ppplStack_e8 + 1);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
      if (bVar6) {
        *pppplVar13 = (long ***)((long)*pppplVar13 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&pppplStack_a0);
  ppplVar10 = ppplStack_98;
  if ((long ****)ppplStack_98 != (long ****)0x0) {
    pppplVar13 = (long ****)(ppplStack_98 + 1);
    do {
      ppplVar11 = *pppplVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
      if (bVar6) {
        *pppplVar13 = (long ***)((long)ppplVar11 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppplVar11 == (long ***)0x0) {
      (*(code *)(*ppplStack_98)[2])(ppplStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar10);
    }
  }
  pppplVar13 = pppplStack_f0;
  pppplVar14 = param_2;
  (*(code *)(*param_2)[0x25])(param_2);
  (*(code *)(*pppplVar13)[0x26])(pppplVar13,pppplVar14);
  FUN_10a422d34(param_2,pppplVar13,param_4);
  *(undefined1 *)((long)pppplVar13 + 0x4f3) = *(undefined1 *)((long)param_2 + 0x4f3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pppplVar13 + 0xa3,param_2 + 0xa3);
  *(undefined2 *)(pppplVar13 + 0x9e) = *(undefined2 *)(param_2 + 0x9e);
  *(undefined1 *)((long)pppplVar13 + 0x4f2) = *(undefined1 *)((long)param_2 + 0x4f2);
  ppplVar10 = param_2[0x9f];
  pppplStack_d0 = pppplVar13 + 0x9f;
  pppplStack_e0 = (long ****)0x10a2ff41c;
  ppuStack_d8 = &PTR_FUN_110bc31e0;
  if (ppplVar10 == (long ***)0x0) {
    pppplStack_a0 = (long ****)0x0;
    ppppplVar15 = &pppplStack_a0;
    FUN_10a2e9e64(&pppplStack_e0,ppppplVar15);
    goto LAB_10a2dbfe4;
  }
  if (param_4 == 0) {
    FUN_10a2ff388(&pppplStack_a0,ppplVar10);
    ppppplVar15 = &pppplStack_a0;
    FUN_10a2ff2fc(&pppplStack_e0,ppppplVar15);
    if ((long ****)ppplStack_98 == (long ****)0x0) goto LAB_10a2dbfe4;
    pppplVar13 = (long ****)(ppplStack_98 + 1);
    do {
      ppplVar10 = *pppplVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
      if (bVar6) {
        *pppplVar13 = (long ***)((long)ppplVar10 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10a2dbf84:
    ppplVar11 = ppplStack_98;
    if (ppplVar10 == (long ***)0x0) {
      (*(code *)(*ppplStack_98)[2])(ppplStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar11);
    }
  }
  else {
    ppppplVar9 = (long *****)ppplVar10[8];
    pppplVar13 = (long ****)ppplVar10[9];
    if (*(char *)(param_4 + 0xb8) == '\x01') {
      pppplStack_a0 = (long ****)0x10a2ff41c;
      ppplStack_98 = (long ***)&PTR_FUN_110bc31e0;
      pppplStack_90 = pppplStack_d0;
      FUN_10a069d9c(param_4,ppppplVar9,pppplVar13,&pppplStack_a0);
      ppppplVar15 = ppppplVar9;
    }
    else {
      lVar7 = param_4 + 0x88;
      pppplStack_a0 = (long ****)ppppplVar9;
      ppplStack_98 = (long ***)pppplVar13;
      func_0x00010a35bf90(lVar7,&pppplStack_a0);
      pppplVar14 = &ppplStack_98;
      ppppplVar15 = &pppplStack_a0;
      if (lVar7 != 0) {
        pppplVar14 = (long ****)(lVar7 + 0x28);
        ppppplVar15 = (long *****)(lVar7 + 0x20);
      }
      pppplVar14 = (long ****)*pppplVar14;
      ppppplVar15 = (long *****)*ppppplVar15;
      if ((ppppplVar9 == ppppplVar15) && (pppplVar13 == pppplVar14)) {
        FUN_10a2ff388(&pppplStack_a0,ppplVar10);
        ppppplVar15 = &pppplStack_a0;
        FUN_10a2ff2fc(&pppplStack_e0,ppppplVar15);
        if ((long ****)ppplStack_98 == (long ****)0x0) goto LAB_10a2dbfe4;
        pppplVar13 = (long ****)(ppplStack_98 + 1);
        do {
          ppplVar10 = *pppplVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
          if (bVar6) {
            *pppplVar13 = (long ***)((long)ppplVar10 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a2dbf84;
      }
      pppplStack_a0 = pppplStack_e0;
      (*(code *)ppuStack_d8[3])(&ppplStack_98,&ppuStack_d8);
      FUN_10a069d9c(param_4,ppppplVar15,pppplVar14,&pppplStack_a0);
    }
    (*(code *)*ppplStack_98)(&ppplStack_98);
  }
LAB_10a2dbfe4:
  pppuVar8 = &ppuStack_d8;
  (*(code *)*ppuStack_d8)(pppuVar8);
  param_1[1] = ppplStack_e8;
  *param_1 = pppplStack_f0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar16._8_8_ = ppppplVar15;
    auVar16._0_8_ = pppuVar8;
    return auVar16;
  }
  ___stack_chk_fail();
  FUN_10a2fed20(&pppplStack_a0);
  (*(code *)*ppuStack_d8)(&ppuStack_d8);
  FUN_10a2ff2a4(&pppplStack_f0);
  __Unwind_Resume(pppuVar8);
  auVar17._8_8_ = 0x1c;
  auVar17._0_8_ = &UNK_10f64c956;
  return auVar17;
}



/* Entry: 10a2dc0f0; end: 10a2dc1cb;  */

undefined1  [16] FUN_10a2dc0f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f64c956;
  return auVar1;
}



/* Entry: 10a2dc1cc; end: 10a2dc5d7;  */

void FUN_10a2dc1cc(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c956,0x1c);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc1ba8;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc1ba8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c314,FUN_10a2ff500,FUN_10a2ff5cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c31a,FUN_10a2ff768,FUN_10a2ff824);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f33770a,FUN_10a2ff8f8,FUN_10a2ff9b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c330,FUN_10a2ffa98,FUN_10a2ffb50);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c34c,FUN_10a2ffc10,FUN_10a2ffce8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b98f,FUN_10a2ffdb8,FUN_10a2ffe8c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f638ab2,FUN_10a2fff58,FUN_10a3000c0);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f64c35b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f64b3ce;
  uStack_40 = 0;
  func_0x00010a300338(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f64c36d;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  puStack_78 = &UNK_10f64c37e;
  uStack_70 = 0x45;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f64b3ce;
  uStack_40 = 0;
  func_0x00010a300338();
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c956,0x1c);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2dc5bc);
  (*pcVar6)();
}



/* Entry: 10a2dc5d8; end: 10a2dc7df;  */

void FUN_10a2dc5d8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f39486e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c3c4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2dc73c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c3d1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2dc73c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c3e6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2dc73c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a2dc7e0; end: 10a2dc897;  */

void FUN_10a2dc7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x4b] = &PTR_FUN_110c383b8;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0x100;
  FUN_10a3c575c(param_1,&PTR_PTR_110bbf040,param_2,param_3);
  param_1[0x3f] = 0xffffffff;
  *param_1 = &PTR_FUN_110bbed78;
  param_1[2] = &PTR_FUN_110bbee88;
  param_1[7] = &PTR_DAT_110bbeee0;
  param_1[0xd] = &PTR_DAT_110bbef00;
  param_1[0x4b] = &PTR_DAT_110bbf000;
  param_1[0x16] = &PTR_DAT_110bbef70;
  param_1[0x17] = &PTR_DAT_110bbefa0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  param_1[0x46] = 0xffffffffffffffff;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  return;
}



/* Entry: 10a2dc898; end: 10a2dca8f;  */

undefined **
FUN_10a2dc898(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
             undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 uStack_180;
  undefined8 *apuStack_178 [7];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  long lStack_e8;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  (**(code **)(*param_5 + 0xd8))(param_5,&PTR_DAT_110bc2840);
  *(undefined4 *)(param_4 + 0x1f0) = param_1;
  *(undefined4 *)(param_4 + 500) = param_2;
  ppuVar1 = param_5;
  (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110bbf058,0);
  *(int *)(param_4 + 0x1fc) = (int)ppuVar1;
  ppuVar1 = param_5;
  (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110bbf078,1);
  *(char *)(param_4 + 0x200) = (char)ppuVar1;
  uStack_78 = 0x10a3007d0;
  ppuStack_70 = &PTR_DAT_110bc3200;
  uVar5 = 0;
  lStack_68 = param_4;
  FUN_10a2dca90(param_5,&PTR_DAT_110bbf098,&uStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uStack_88 = 0;
  uStack_80 = 0;
  (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110bbf0b8,&uStack_88);
  *(undefined4 *)(param_4 + 0x204) = param_1;
  *(undefined4 *)(param_4 + 0x208) = param_2;
  *(undefined4 *)(param_4 + 0x20c) = param_3;
  uStack_88 = 0;
  uStack_80 = 0;
  (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110bbf0d8,&uStack_88);
  *(undefined4 *)(param_4 + 0x210) = param_1;
  *(undefined4 *)(param_4 + 0x214) = param_2;
  *(undefined4 *)(param_4 + 0x218) = param_3;
  ppuVar2 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110bbf0f8);
  ppuVar1 = &PTR_DAT_110bbf0f8;
  if ((int)ppuVar2 == 0) {
    ppuVar1 = &PTR_DAT_110bbf118;
  }
  ppuVar2 = param_5;
  (**(code **)(*param_5 + 0x38))(param_5,ppuVar1,0xffffffff);
  *(int *)(param_4 + 0x230) = (int)ppuVar2;
  *(undefined4 *)(param_4 + 0x234) = 0xffffffff;
  ppuVar1 = &PTR_DAT_110bbf138;
  puVar4 = (undefined8 *)0xffffffff;
  (**(code **)(*param_5 + 0xd0))();
  *(int *)(param_4 + 0x1f8) = (int)param_5;
  *(undefined4 *)(param_4 + 0x238) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(0x100000007);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = *puVar4;
  (**(code **)(puVar4[1] + 0x10))(apuStack_178,puVar4 + 1);
  FUN_109ffe064(&uStack_140,*ppuVar1,ppuVar1[1]);
  pcStack_128 = FUN_10a300514;
  ppuStack_120 = &PTR_FUN_110bc33d0;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_180;
  (*(code *)apuStack_178[0][2])(puVar4 + 1,apuStack_178);
  puVar4[9] = uStack_138;
  puVar4[8] = uStack_140;
  puVar4[10] = lStack_130;
  uStack_138 = 0;
  lStack_130 = 0;
  uStack_140 = 0;
  puStack_118 = puVar4;
  func_0x000107c2b054(auStack_198,&UNK_10f64b3ce);
  (**(code **)(*param_5 + 0x250))(param_5,ppuVar1,&pcStack_128,uVar5,auStack_198);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  (*(code *)*ppuStack_120)(&ppuStack_120);
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  ppuVar3 = apuStack_178;
  (*(code *)*apuStack_178[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return param_5;
  }
  ___stack_chk_fail();
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  (*(code *)*ppuStack_120)(&ppuStack_120);
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  (*(code *)*apuStack_178[0])(apuStack_178);
  __Unwind_Resume();
  func_0x00010a3c7928();
  (**(code **)(*ppuVar1 + 0x78))(ppuVar1,&PTR_DAT_110bc2840,ppuVar3 + 0x3e);
  (**(code **)(*ppuVar1 + 0x40))(ppuVar1,&PTR_DAT_110bbf058,*(undefined4 *)((long)ppuVar3 + 0x1fc));
  (**(code **)(*ppuVar1 + 0x70))(ppuVar1,&PTR_DAT_110bbf078,*(undefined1 *)(ppuVar3 + 0x40));
  FUN_10a2dcd60(ppuVar1,&PTR_DAT_110bbf098,ppuVar3 + 0x44,&UNK_10f64c9c0,0x18);
  (**(code **)(*ppuVar1 + 0x80))(ppuVar1,&PTR_DAT_110bbf0b8,(long)ppuVar3 + 0x204);
  (**(code **)(*ppuVar1 + 0x80))(ppuVar1,&PTR_DAT_110bbf0d8,ppuVar3 + 0x42);
  (**(code **)(*ppuVar1 + 0x40))(ppuVar1,&PTR_DAT_110bbf0f8,*(undefined4 *)(ppuVar3 + 0x46));
                    /* WARNING: Could not recover jumptable at 0x00010a2dcd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar1 + 0x50))(ppuVar1,&PTR_DAT_110bbf138,*(undefined4 *)(ppuVar3 + 0x3f));
  return ppuVar1;
}



/* Entry: 10a2dca90; end: 10a2dcc5b;  */

long * FUN_10a2dca90(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a300514;
  ppuStack_90 = &PTR_FUN_110bc33d0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *puVar1 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar1 + 1,apuStack_e8);
  puVar1[9] = uStack_a8;
  puVar1[8] = uStack_b0;
  puVar1[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar1;
  func_0x000107c2b054(auStack_108,&UNK_10f64b3ce);
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar2 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  __Unwind_Resume();
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bc2840,ppuVar2 + 0x3e);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbf058,*(undefined4 *)((long)ppuVar2 + 0x1fc));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbf078,*(undefined1 *)(ppuVar2 + 0x40));
  FUN_10a2dcd60(param_2,&PTR_DAT_110bbf098,ppuVar2 + 0x44,&UNK_10f64c9c0,0x18);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bbf0b8,(long)ppuVar2 + 0x204);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bbf0d8,ppuVar2 + 0x42);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbf0f8,*(undefined4 *)(ppuVar2 + 0x46));
                    /* WARNING: Could not recover jumptable at 0x00010a2dcd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bbf138,*(undefined4 *)(ppuVar2 + 0x3f));
  return param_2;
}



/* Entry: 10a2dcc5c; end: 10a2dcd5f;  */

void FUN_10a2dcc5c(long param_1,long *param_2)

{
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bc2840,param_1 + 0x1f0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbf058,*(undefined4 *)(param_1 + 0x1fc));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbf078,*(undefined1 *)(param_1 + 0x200));
  FUN_10a2dcd60(param_2,&PTR_DAT_110bbf098,param_1 + 0x220,&UNK_10f64c9c0,0x18);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bbf0b8,param_1 + 0x204);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bbf0d8,param_1 + 0x210);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbf0f8,*(undefined4 *)(param_1 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x00010a2dcd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bbf138,*(undefined4 *)(param_1 + 0x1f8));
  return;
}



/* Entry: 10a2dcd60; end: 10a2dce7f;  */

void FUN_10a2dcd60(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  uStack_40 = param_4;
  uStack_38 = param_5;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    uStack_60 = *param_3;
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_58 = plVar4;
      uStack_50 = uStack_60;
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_60,&uStack_40);
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
  return;
}



/* Entry: 10a2dce80; end: 10a2dd15b;  */

void FUN_10a2dce80(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a300824(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110bc3228;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a2dcfe4;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a2dcfe4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  *(undefined8 *)(lVar10 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined4 *)(lVar10 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined1 *)(lVar10 + 0x200) = *(undefined1 *)(param_2 + 0x200);
  uVar12 = *(undefined8 *)(param_2 + 0x228);
  uVar8 = *(undefined8 *)(param_2 + 0x220);
  if (*(long *)(param_2 + 0x228) != 0) {
    plVar11 = (long *)(*(long *)(param_2 + 0x228) + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar9 = *(long *)(lVar10 + 0x228);
  *(undefined8 *)(lVar10 + 0x228) = uVar12;
  *(undefined8 *)(lVar10 + 0x220) = uVar8;
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  uVar8 = *(undefined8 *)(param_2 + 0x204);
  *(undefined4 *)(lVar10 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined8 *)(lVar10 + 0x204) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x210);
  *(undefined4 *)(lVar10 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined8 *)(lVar10 + 0x210) = uVar8;
  *(undefined4 *)(lVar10 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a2dd15c; end: 10a2dd39b;  */

void FUN_10a2dd15c(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lStack_70;
  long lStack_68;
  byte *pbStack_60;
  byte bStack_51;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar6 = *(long **)(param_1 + 0x228);
  if (plVar6 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar6 == (long *)0x0) {
    return;
  }
  lStack_40 = *(long *)(param_1 + 0x220);
  plStack_38 = plVar6;
  if ((lStack_40 == 0) || (lVar9 = *(long *)(lStack_40 + 0x260), lVar9 == 0)) goto LAB_10a2dd320;
  lVar7 = *(long *)(lVar9 + 0xe0);
  plStack_48 = *(long **)(lVar9 + 0xe8);
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_50 = lVar7;
  if (lVar7 != 0) {
    if (((*(int *)(param_1 + 0x234) != -1) &&
        (plVar6 = *(long **)(param_1 + 0x250), plVar6 != (long *)0x0)) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
      lVar9 = *(long *)(param_1 + 0x248);
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (lVar7 == lVar9) goto LAB_10a2dd2e0;
    }
    lVar9 = lStack_40;
    FUN_10a00ff8c();
    if (lVar9 != 0) {
      if (plStack_48 != (long *)0x0) {
        plVar6 = plStack_48 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = *(long *)(param_1 + 0x250);
      *(long **)(param_1 + 0x250) = plStack_48;
      *(long *)(param_1 + 0x248) = lStack_50;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(undefined4 *)(param_1 + 0x234) = 0xffffffff;
      bStack_51 = 0;
      pbStack_60 = &bStack_51;
      lStack_70 = param_1;
      lStack_68 = lVar9;
      if (*(int *)(param_1 + 0x1f8) == -1) {
        uVar2 = *(uint *)(param_1 + 0x238);
        iVar11 = 4;
        do {
          if (3 < uVar2) goto LAB_10a2dd370;
          uVar8 = 0;
          FUN_10a2dd39c(&lStack_70,*(undefined4 *)(&UNK_10df0ec20 + (ulong)uVar2 * 4));
          if ((uVar8 & 1) != 0) break;
          uVar2 = *(int *)(param_1 + 0x238) + 1U & 3;
          *(uint *)(param_1 + 0x238) = uVar2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else {
        FUN_10a2dd39c(&lStack_70,*(int *)(param_1 + 0x1f8) + 4);
      }
      if ((bStack_51 & 1) == 0) {
        FUN_10a00946c(&UNK_10f64c3f1);
LAB_10a2dd370:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2dd374);
        (*pcVar5)();
      }
    }
  }
LAB_10a2dd2e0:
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plStack_38 == (long *)0x0) {
    return;
  }
LAB_10a2dd320:
  plVar1 = plStack_38;
  plVar6 = plStack_38 + 1;
  do {
    lVar9 = *plVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  return;
}



/* Entry: 10a2dd39c; end: 10a2dd7fb;  */

long * FUN_10a2dd39c(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,long *param_5
                    )

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined8 unaff_x22;
  ulong uVar18;
  undefined4 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long *plStack_1b0;
  long lStack_1a8;
  byte *pbStack_1a0;
  byte bStack_191;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined4 *puStack_140;
  undefined1 auStack_138 [24];
  uint *puStack_120;
  char cStack_118;
  int iStack_114;
  int iStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [16];
  ulong uStack_e8;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_4;
  plVar8 = (long *)(param_4[1] + 0xf0);
  FUN_10ab6f6c8();
  if (plVar8 == (long *)0x0) goto LAB_10a2dd714;
  lVar13 = param_4[1];
  uVar1 = *(uint *)(lVar13 + 0x110);
  if (uVar1 == 0xffffffff) {
    lVar16 = 0;
LAB_10a2dd430:
    plVar8 = (long *)(lVar13 + 0xf0);
    FUN_10ab6f6c8(plVar8,param_5);
    if (plVar8 == (long *)0x0) {
LAB_10a2dd714:
      param_5 = (long *)0x0;
    }
    else {
      iVar15 = *(int *)((long)plVar8 + 0x24);
      if (3 < iVar15 - 1U) {
        if (iVar15 != 0 && iVar15 != 8) goto LAB_10a2dd470;
        goto LAB_10a2dd714;
      }
      if (*(char *)((long)plVar8 + 0x2c) != '\x01') goto LAB_10a2dd714;
LAB_10a2dd470:
      if ((int)plVar8[5] != 2 || lVar16 == 0) goto LAB_10a2dd714;
      iVar15 = *(int *)(lVar16 + 0x24);
      if (iVar15 - 1U < 4) {
        if (*(char *)(lVar16 + 0x2c) == '\x01') goto LAB_10a2dd4b0;
        goto LAB_10a2dd714;
      }
      param_5 = (long *)0x0;
      if ((iVar15 != 0) && (iVar15 != 8)) {
LAB_10a2dd4b0:
        if (*(int *)(lVar16 + 0x28) != 3) goto LAB_10a2dd714;
        *(undefined1 *)param_4[2] = 1;
        func_0x00010ab4d4d0(&plStack_d0,param_4[1]);
        func_0x00010ab4d7d8(&plStack_d8,param_4[1],lVar16);
        FUN_10ab4ccac(auStack_f8,param_4[1]);
        plVar17 = plStack_d0;
        plVar8 = plStack_d8;
        uStack_108 = 0;
        uStack_100 = 0;
        fStack_90 = 0.0;
        uVar14 = 0;
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        fStack_98 = 0.0;
        fStack_94 = 0.0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uVar1 = *(uint *)(lVar12 + 0x230);
        if (uStack_e8 <= uVar1 || 0x7fffffff < uVar1) {
          uVar1 = 0;
        }
        if (uStack_e8 != 0) {
          uVar18 = 0;
          puStack_140 = (undefined4 *)((ulong)&fStack_b0 | 8);
          do {
            lVar13 = 0;
            uVar11 = (int)uVar18 + uVar1;
            uVar4 = 0;
            uVar9 = (uint)uStack_e8;
            if (uVar9 != 0) {
              uVar4 = uVar11 / uVar9;
            }
            iVar15 = uVar11 - uVar4 * uVar9;
            puVar19 = (undefined4 *)((ulong)&uStack_c8 | 4);
            do {
              FUN_10ab4e710(auStack_138,auStack_f8,iVar15);
              FUN_10ab4e794(&puStack_120,auStack_138,lVar13);
              iVar10 = iStack_114;
              if (puStack_120 != (uint *)0x0) {
                if (cStack_118 == '\x02') {
                  uVar11 = (uint)(ushort)*puStack_120;
                }
                else {
                  if (cStack_118 != '\x04') {
                    iVar10 = 0;
                    goto LAB_10a2dd5c8;
                  }
                  uVar11 = *puStack_120;
                }
                iVar10 = iStack_110 + uVar11;
              }
LAB_10a2dd5c8:
              (**(code **)(*plVar17 + 0x10))(plVar17,iVar10);
              puVar19[-1] = (int)uVar14;
              *puVar19 = (int)param_2;
              lVar13 = lVar13 + 1;
              puVar19 = puVar19 + 2;
            } while (lVar13 != 3);
            lVar13 = lVar12 + 0x1f0;
            FUN_10ab50650(lVar13,&uStack_c8,&uStack_108);
            if ((int)lVar13 != 0) {
              lVar13 = 0;
              puVar19 = puStack_140;
              do {
                FUN_10ab4e710(auStack_138,auStack_f8,iVar15);
                FUN_10ab4e794(&puStack_120,auStack_138,lVar13);
                iVar10 = iStack_114;
                if (puStack_120 != (uint *)0x0) {
                  if (cStack_118 == '\x02') {
                    uVar11 = (uint)(ushort)*puStack_120;
                  }
                  else {
                    if (cStack_118 != '\x04') {
                      iVar10 = 0;
                      goto LAB_10a2dd66c;
                    }
                    uVar11 = *puStack_120;
                  }
                  iVar10 = iStack_110 + uVar11;
                }
LAB_10a2dd66c:
                (**(code **)(*plVar8 + 0x10))(plVar8,iVar10);
                puVar19[-2] = (int)uVar14;
                puVar19[-1] = (int)param_2;
                *puVar19 = (int)param_3;
                lVar13 = lVar13 + 1;
                puVar19 = puVar19 + 3;
              } while (lVar13 != 3);
              fVar22 = -(fStack_90 - fStack_a8) * (fStack_a4 - fStack_b0) +
                       (fStack_98 - fStack_b0) * (fStack_9c - fStack_a8);
              fVar20 = (fStack_a0 - fStack_ac) * -(fStack_98 - fStack_b0) +
                       (fStack_94 - fStack_ac) * (fStack_a4 - fStack_b0);
              fVar21 = (fStack_9c - fStack_a8) * -(fStack_94 - fStack_ac) +
                       (fStack_90 - fStack_a8) * (fStack_a0 - fStack_ac);
              fVar20 = fVar20 * fVar20;
              fVar21 = fVar21 * fVar21;
              param_2 = CONCAT44(fVar21,fVar20);
              param_3 = (ulong)(uint)fVar21;
              fVar20 = ABS(fVar20 + fVar21 + fVar22 * fVar22);
              uVar14 = (ulong)(uint)fVar20;
              unaff_x22 = 3;
              if (1e-06 < fVar20) {
                *(int *)(lVar12 + 0x234) = iVar15;
                *(undefined4 *)(lVar12 + 0x244) = uStack_100;
                *(undefined8 *)(lVar12 + 0x23c) = uStack_108;
                plVar17 = (long *)0x1;
                goto LAB_10a2dd774;
              }
            }
            unaff_x22 = 3;
            uVar18 = (ulong)((int)uVar18 + 1);
          } while (uVar18 < uStack_e8);
        }
        plVar17 = (long *)0x0;
        param_5 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
LAB_10a2dd774:
          (**(code **)(*plVar8 + 8))(plVar8);
          param_5 = plVar17;
        }
        plVar8 = plStack_d0;
        if (plStack_d0 != (long *)0x0) {
          (**(code **)(*plStack_d0 + 8))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return param_5;
    }
    ___stack_chk_fail();
  }
  else {
    uVar14 = (*(long *)(lVar13 + 0x100) - *(long *)(lVar13 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar1 <= uVar14 && uVar14 - uVar1 != 0) {
      lVar16 = *(long *)(lVar13 + 0xf8) + (ulong)uVar1 * 0x38;
      goto LAB_10a2dd430;
    }
  }
  FUN_10ab725fc();
  if (plStack_d8 != (long *)0x0) {
    (**(code **)(*plStack_d8 + 8))(plStack_d8);
  }
  if (plStack_d0 != (long *)0x0) {
    (**(code **)(*plStack_d0 + 8))();
  }
  plVar17 = plVar8;
  __Unwind_Resume();
  pplVar7 = &plStack_1b0;
  plStack_158 = plStack_d8;
  pcStack_148 = FUN_10a2dd7fc;
  plVar6 = (long *)plVar17[0x45];
  if (plVar6 == (long *)0x0) {
    return (long *)0x0;
  }
  uStack_170 = unaff_x22;
  plStack_168 = param_5;
  plStack_160 = plVar8;
  puStack_150 = &stack0xfffffffffffffff0;
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar6 == (long *)0x0) {
    return (long *)0x0;
  }
  lStack_180 = plVar17[0x44];
  plStack_178 = plVar6;
  if ((lStack_180 == 0) || (lVar12 = *(long *)(lStack_180 + 0x260), lVar12 == 0))
  goto LAB_10a2dd320;
  lVar13 = *(long *)(lVar12 + 0xe0);
  plStack_188 = *(long **)(lVar12 + 0xe8);
  if (plStack_188 != (long *)0x0) {
    plVar8 = plStack_188 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_190 = lVar13;
  if (lVar13 != 0) {
    if (((*(int *)((long)plVar17 + 0x234) != -1) &&
        (plVar6 = (long *)plVar17[0x4a], plVar6 != (long *)0x0)) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
      lVar12 = plVar17[0x49];
      plVar8 = plVar6 + 1;
      do {
        lVar16 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (lVar13 == lVar12) goto LAB_10a2dd2e0;
    }
    lVar12 = lStack_180;
    FUN_10a00ff8c();
    plVar6 = (long *)0x0;
    if (lVar12 != 0) {
      if (plStack_188 != (long *)0x0) {
        plVar8 = plStack_188 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar13 = plVar17[0x4a];
      plVar17[0x4a] = (long)plStack_188;
      plVar17[0x49] = lStack_190;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(undefined4 *)((long)plVar17 + 0x234) = 0xffffffff;
      bStack_191 = 0;
      pbStack_1a0 = &bStack_191;
      plStack_1b0 = plVar17;
      lStack_1a8 = lVar12;
      if ((int)plVar17[0x3f] == -1) {
        uVar1 = *(uint *)(plVar17 + 0x47);
        iVar15 = 4;
        do {
          if (3 < uVar1) goto LAB_10a2dd370;
          pplVar7 = &plStack_1b0;
          FUN_10a2dd39c(&plStack_1b0,*(undefined4 *)(&UNK_10df0ec20 + (ulong)uVar1 * 4));
          if (((ulong)pplVar7 & 1) != 0) break;
          uVar1 = (int)plVar17[0x47] + 1U & 3;
          *(uint *)(plVar17 + 0x47) = uVar1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      else {
        FUN_10a2dd39c(&plStack_1b0,(int)plVar17[0x3f] + 4);
      }
      plVar6 = (long *)pplVar7;
      if ((bStack_191 & 1) == 0) {
        FUN_10a00946c(&UNK_10f64c3f1);
LAB_10a2dd370:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2dd374);
        (*pcVar5)();
      }
    }
  }
LAB_10a2dd2e0:
  plVar8 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plVar17 = plStack_188 + 1;
    do {
      lVar12 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      plVar6 = plVar8;
    }
  }
  if (plStack_178 == (long *)0x0) {
    return plVar6;
  }
LAB_10a2dd320:
  plVar17 = plStack_178;
  plVar8 = plStack_178 + 1;
  do {
    lVar12 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plStack_178 + 0x10))(plStack_178);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    plVar6 = plVar17;
  }
  return plVar6;
}



/* Entry: 10a2dd7fc; end: 10a2dd807;  */

void FUN_10a2dd7fc(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lStack_70;
  long lStack_68;
  byte *pbStack_60;
  byte bStack_51;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar6 = *(long **)(param_1 + 0x228);
  if (plVar6 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar6 == (long *)0x0) {
    return;
  }
  lStack_40 = *(long *)(param_1 + 0x220);
  plStack_38 = plVar6;
  if ((lStack_40 == 0) || (lVar9 = *(long *)(lStack_40 + 0x260), lVar9 == 0)) goto LAB_10a2dd320;
  lVar7 = *(long *)(lVar9 + 0xe0);
  plStack_48 = *(long **)(lVar9 + 0xe8);
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_50 = lVar7;
  if (lVar7 != 0) {
    if (((*(int *)(param_1 + 0x234) != -1) &&
        (plVar6 = *(long **)(param_1 + 0x250), plVar6 != (long *)0x0)) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
      lVar9 = *(long *)(param_1 + 0x248);
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (lVar7 == lVar9) goto LAB_10a2dd2e0;
    }
    lVar9 = lStack_40;
    FUN_10a00ff8c();
    if (lVar9 != 0) {
      if (plStack_48 != (long *)0x0) {
        plVar6 = plStack_48 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = *(long *)(param_1 + 0x250);
      *(long **)(param_1 + 0x250) = plStack_48;
      *(long *)(param_1 + 0x248) = lStack_50;
      if (lVar7 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(undefined4 *)(param_1 + 0x234) = 0xffffffff;
      bStack_51 = 0;
      pbStack_60 = &bStack_51;
      lStack_70 = param_1;
      lStack_68 = lVar9;
      if (*(int *)(param_1 + 0x1f8) == -1) {
        uVar2 = *(uint *)(param_1 + 0x238);
        iVar11 = 4;
        do {
          if (3 < uVar2) goto LAB_10a2dd370;
          uVar8 = 0;
          FUN_10a2dd39c(&lStack_70,*(undefined4 *)(&UNK_10df0ec20 + (ulong)uVar2 * 4));
          if ((uVar8 & 1) != 0) break;
          uVar2 = *(int *)(param_1 + 0x238) + 1U & 3;
          *(uint *)(param_1 + 0x238) = uVar2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else {
        FUN_10a2dd39c(&lStack_70,*(int *)(param_1 + 0x1f8) + 4);
      }
      if ((bStack_51 & 1) == 0) {
        FUN_10a00946c(&UNK_10f64c3f1);
LAB_10a2dd370:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2dd374);
        (*pcVar5)();
      }
    }
  }
LAB_10a2dd2e0:
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plStack_38 == (long *)0x0) {
    return;
  }
LAB_10a2dd320:
  plVar1 = plStack_38;
  plVar6 = plStack_38 + 1;
  do {
    lVar9 = *plVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  return;
}



/* Entry: 10a2dd808; end: 10a2de073;  */

void FUN_10a2dd808(long param_1)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined8 uStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 uStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  long lStack_80;
  long *plStack_78;
  
  FUN_10a2dd15c();
  if ((*(int *)(param_1 + 0x234) != -1) &&
     (plVar7 = *(long **)(param_1 + 0x228), plVar7 != (long *)0x0)) {
    lVar8 = *(long *)(param_1 + 0x168);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      lStack_80 = *(long *)(param_1 + 0x220);
      plStack_78 = plVar7;
      if (lStack_80 != 0) {
        FUN_10a42490c(&fStack_f0,lStack_80,*(undefined4 *)(param_1 + 0x234));
        fVar9 = *(float *)(param_1 + 0x23c);
        fVar12 = *(float *)(param_1 + 0x240);
        fVar15 = *(float *)(param_1 + 0x244);
        fStack_f8 = fVar9 * fStack_e8 + fVar12 * fStack_c4 + fVar15 * fStack_a0 +
                    *(float *)(param_1 + 0x20c);
        uStack_100 = CONCAT44(fStack_ec * fVar9 + fStack_c8 * fVar12 + fStack_a4 * fVar15 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x204) >> 0x20),
                              fStack_f0 * fVar9 + fStack_cc * fVar12 + fStack_a8 * fVar15 +
                              (float)*(undefined8 *)(param_1 + 0x204));
        FUN_10a3e8ad4(*(undefined8 *)(lVar8 + 0x140),&uStack_100);
        if (*(int *)(param_1 + 0x1fc) != 0) {
          fVar9 = (float)uStack_e4;
          fVar12 = (float)((ulong)uStack_e4 >> 0x20);
          if (*(char *)(param_1 + 0x200) == '\x01') {
            fVar10 = *(float *)(param_1 + 0x23c);
            fVar13 = *(float *)(param_1 + 0x240);
            fVar16 = *(float *)(param_1 + 0x244);
            fVar15 = fVar9 * fVar10 + (float)uStack_c0 * fVar13 + (float)uStack_9c * fVar16;
            fVar14 = fVar12 * fVar10 + (float)((ulong)uStack_c0 >> 0x20) * fVar13 +
                     (float)((ulong)uStack_9c >> 0x20) * fVar16;
            fVar10 = fVar10 * fStack_dc + fVar13 * fStack_b8 + fVar16 * fStack_94;
            fVar19 = fVar9 * fVar9 + fVar12 * fVar12 + fStack_dc * fStack_dc;
            fVar16 = 0.0;
            fVar11 = 1.0;
            fVar13 = 0.0;
            if ((1e-06 < fVar19) && (fVar19 = 1.0 / SQRT(fVar19), 0.0 < fVar19)) {
              fVar16 = fVar9 * fVar19;
              fVar11 = fVar12 * fVar19;
              fVar13 = fStack_dc * fVar19;
            }
            fVar9 = fVar15 * fVar15 + fVar14 * fVar14 + fVar10 * fVar10;
          }
          else {
            fVar15 = (fStack_c4 - fStack_e8) * -(fStack_a4 - fStack_ec) +
                     (fStack_a0 - fStack_e8) * (fStack_c8 - fStack_ec);
            fVar14 = (fStack_cc - fStack_f0) * -(fStack_a0 - fStack_e8) +
                     (fStack_a8 - fStack_f0) * (fStack_c4 - fStack_e8);
            fVar10 = -(fStack_a8 - fStack_f0) * (fStack_c8 - fStack_ec) +
                     (fStack_a4 - fStack_ec) * (fStack_cc - fStack_f0);
            fVar19 = fVar9 * fVar9 + fVar12 * fVar12 + fStack_dc * fStack_dc;
            fVar16 = 0.0;
            fVar11 = 1.0;
            fVar13 = 0.0;
            if ((1e-06 < fVar19) && (fVar19 = 1.0 / SQRT(fVar19), 0.0 < fVar19)) {
              fVar16 = fVar9 * fVar19;
              fVar11 = fVar12 * fVar19;
              fVar13 = fStack_dc * fVar19;
            }
            fVar9 = fVar10 * fVar10 + fVar15 * fVar15 + fVar14 * fVar14;
          }
          if ((1e-06 < fVar9) && (fVar9 = 1.0 / SQRT(fVar9), 0.0 < fVar9)) {
            fVar16 = fVar15 * fVar9;
            fVar11 = fVar14 * fVar9;
            fVar13 = fVar10 * fVar9;
          }
          fStack_b4 = fStack_b4 - fStack_d8;
          fStack_b0 = fStack_b0 - fStack_d4;
          fStack_90 = fStack_90 - fStack_d8;
          fStack_8c = fStack_8c - fStack_d4;
          fVar15 = -(fStack_b0 * fStack_90) + fStack_8c * fStack_b4;
          fVar9 = 1.0;
          fVar12 = 0.0;
          if (1.1920929e-07 <= ABS(fVar15)) {
            fVar15 = 1.0 / fVar15;
            fVar22 = ((fStack_cc - fStack_f0) * fStack_8c - (fStack_a8 - fStack_f0) * fStack_b0) *
                     fVar15;
            fVar23 = ((fStack_c8 - fStack_ec) * fStack_8c - (fStack_a4 - fStack_ec) * fStack_b0) *
                     fVar15;
            fVar24 = ((fStack_c8 - fStack_ec) * fStack_8c - (fStack_a4 - fStack_ec) * fStack_b0) *
                     fVar15;
            fVar25 = ((fStack_c4 - fStack_e8) * fStack_8c - (fStack_a0 - fStack_e8) * fStack_b0) *
                     fVar15;
            fVar19 = ((fStack_a8 - fStack_f0) * fStack_b4 - (fStack_cc - fStack_f0) * fStack_90) *
                     fVar15;
            uVar18 = NEON_ext(CONCAT44(fVar25,fVar24),CONCAT44(fVar23,fVar22),4,1);
            fVar14 = (float)((ulong)uVar18 >> 0x20);
            fVar20 = ((fStack_a4 - fStack_ec) * fStack_b4 - (fStack_c8 - fStack_ec) * fStack_90) *
                     fVar15;
            fVar21 = ((fStack_a0 - fStack_e8) * fStack_b4 - (fStack_c4 - fStack_e8) * fStack_90) *
                     fVar15;
            fVar26 = (float)uVar18 * (float)uVar18 + fVar14 * fVar14 + fVar23 * fVar23;
            uVar18 = 0x3f80000000000000;
            fVar14 = 0.0;
            fVar10 = 0.0;
            if (fVar26 <= 1e-06) {
              uVar17 = 0;
            }
            else {
              fVar26 = 1.0 / SQRT(fVar26);
              uVar17 = 0;
              if (0.0 < fVar26) {
                uVar17 = CONCAT44(fVar23 * fVar26,fVar22 * fVar26);
                uVar18 = CONCAT44(fVar25 * fVar26,fVar24 * fVar26);
              }
            }
            fVar22 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
            if ((1e-06 < fVar22) && (fVar22 = 1.0 / SQRT(fVar22), 0.0 < fVar22)) {
              fVar9 = fVar19 * fVar22;
              fVar12 = ((fStack_a4 - fStack_ec) * fStack_b4 - (fStack_c8 - fStack_ec) * fStack_90) *
                       fVar15 * fVar22;
              fVar14 = fVar20 * fVar22;
              fVar10 = fVar21 * fVar22;
            }
          }
          else {
            uVar18 = 0x3f80000000000000;
            uVar17 = 0;
            fVar14 = 0.0;
            fVar10 = 0.0;
          }
          if (*(int *)(param_1 + 0x1fc) != 1) {
            FUN_10a00946c(&UNK_10f64c415);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2de04c);
            (*pcVar5)();
          }
          fVar20 = (float)((ulong)uVar18 >> 0x20);
          fVar15 = (float)uVar17;
          fVar19 = (float)((ulong)uVar17 >> 0x20);
          bVar6 = 0.0 <= fVar13 * ((float)uVar18 * -fVar9 + fVar14 * fVar15) +
                         fVar16 * (fVar20 * -fVar12 + fVar10 * fVar19) +
                         (-fVar10 * fVar15 + fVar9 * fVar20) * fVar11;
          fVar9 = -fVar20;
          if (bVar6) {
            fVar9 = fVar20;
          }
          fVar12 = -fVar19;
          if (bVar6) {
            fVar12 = fVar19;
          }
          fVar14 = -fVar15;
          if (bVar6) {
            fVar14 = fVar15;
          }
          fVar29 = 1.0 / SQRT(fVar16 * fVar16 + fVar11 * fVar11 + fVar13 * fVar13);
          fVar16 = fVar29 * fVar16;
          fVar26 = fVar29 * fVar11;
          fVar15 = fVar13 * fVar29;
          fVar22 = -(fVar12 * fVar15) + fVar9 * fVar26;
          fVar31 = -(fVar9 * fVar16) + fVar14 * fVar15;
          fVar9 = -(fVar14 * fVar26) + fVar12 * fVar16;
          fVar35 = 1.0 / SQRT(fVar9 * fVar9 + fVar22 * fVar22 + fVar31 * fVar31);
          fVar22 = fVar22 * fVar35;
          fVar27 = fVar31 * fVar35;
          fVar9 = fVar9 * fVar35;
          fVar28 = -(fVar26 * fVar9) + fVar15 * fVar27;
          fVar30 = -(fVar15 * fVar22) + fVar16 * fVar9;
          fVar32 = -(fVar16 * fVar27) + fVar26 * fVar22;
          fVar19 = fVar26 * fVar32 - fVar15 * fVar30;
          fVar36 = fVar16 * fVar32 - fVar15 * fVar28;
          fVar34 = fVar16 * fVar30 - fVar26 * fVar28;
          fVar21 = -(fVar27 * fVar36) + fVar19 * fVar22 + fVar34 * fVar9;
          fVar12 = 0.0;
          fVar25 = 1.0;
          fVar23 = 0.0;
          fVar15 = 0.0;
          fVar33 = 1.0;
          fVar24 = 0.0;
          fVar14 = 0.0;
          fVar10 = 0.0;
          fVar20 = 1.0;
          if (1e-06 < ABS(fVar21)) {
            fVar21 = 1.0 / fVar21;
            fVar25 = fVar19 * fVar21;
            fVar15 = -((fVar26 * fVar9 + -(fVar13 * fVar29) * fVar27) * fVar21);
            fVar14 = (-(fVar9 * fVar30) + fVar32 * fVar27) * fVar21;
            fVar12 = -(fVar36 * fVar21);
            fVar33 = (fVar16 * fVar9 + -(fVar13 * fVar29) * fVar22) * fVar21;
            fVar10 = -((-(fVar9 * fVar28) + fVar32 * fVar22) * fVar21);
            fVar23 = fVar34 * fVar21;
            fVar24 = -((fVar16 * fVar27 + -(fVar11 * fVar29) * fVar22) * fVar21);
            fVar20 = (fVar28 * -(fVar31 * fVar35) + fVar30 * fVar22) * fVar21;
          }
          fVar11 = (fVar25 - fVar33) - fVar20;
          fVar13 = (fVar33 - fVar25) - fVar20;
          fVar16 = (fVar20 - fVar25) - fVar33;
          fVar20 = fVar25 + fVar33 + fVar20;
          fVar9 = fVar11;
          if (fVar11 <= fVar20) {
            fVar9 = fVar20;
          }
          bVar3 = 2;
          if (fVar13 <= fVar9) {
            fVar13 = fVar9;
            bVar3 = fVar20 < fVar11;
          }
          bVar4 = 3;
          if (fVar16 <= fVar13) {
            fVar16 = fVar13;
            bVar4 = bVar3;
          }
          fVar19 = SQRT(fVar16 + 1.0) * 0.5;
          fVar11 = 0.25 / fVar19;
          fVar16 = (fVar14 - fVar23) * fVar11;
          fVar21 = (fVar12 + fVar15) * fVar11;
          fVar22 = (fVar24 + fVar10) * fVar11;
          fVar13 = (fVar12 - fVar15) * fVar11;
          fVar20 = (fVar23 + fVar14) * fVar11;
          fVar9 = fVar16;
          fVar12 = fVar22;
          fVar15 = fVar19;
          fVar14 = fVar21;
          if (bVar4 != 2) {
            fVar9 = fVar13;
            fVar12 = fVar19;
            fVar15 = fVar22;
            fVar14 = fVar20;
          }
          fVar11 = (fVar24 - fVar10) * fVar11;
          fVar10 = fVar19;
          if (bVar4 != 0) {
            fVar10 = fVar11;
            fVar13 = fVar20;
            fVar16 = fVar21;
            fVar11 = fVar19;
          }
          if (bVar4 < 2) {
            fVar9 = fVar10;
            fVar12 = fVar13;
            fVar15 = fVar16;
            fVar14 = fVar11;
          }
          fStack_f4 = fVar14 * 0.49999997 + fVar9 * 0.49999997 + fVar15 * 0.49999997 +
                      fVar12 * -0.49999997;
          fVar10 = fVar14 * 0.49999997 + fVar9 * -0.49999997 + fVar15 * 0.49999997 +
                   fVar12 * 0.49999997;
          fVar13 = fVar15 * 0.49999997 + fVar9 * -0.49999997 + fVar12 * -0.49999997 +
                   fVar14 * -0.49999997;
          fStack_f8 = fVar12 * 0.49999997 + fVar9 * 0.49999997 + fVar14 * -0.49999997 +
                      fVar15 * 0.49999997;
          fVar9 = fStack_f4 * fStack_f4 + fVar10 * fVar10 + fVar13 * fVar13 + fStack_f8 * fStack_f8;
          if (fVar9 == 0.0) {
            fStack_f4 = 1.0;
            fVar10 = 0.0;
            fVar13 = 0.0;
            fStack_f8 = 0.0;
          }
          else {
            fVar9 = 1.0 / SQRT(fVar9);
            fStack_f4 = fStack_f4 * fVar9;
            fVar10 = fVar10 * fVar9;
            fVar13 = fVar13 * fVar9;
            fStack_f8 = fStack_f8 * fVar9;
          }
          uStack_100 = CONCAT44(fVar13,fVar10);
          FUN_10a3e8838(*(undefined8 *)(lVar8 + 0x140),&uStack_100);
          lVar8 = *(long *)(lVar8 + 0x140);
          func_0x00010a0d8ae0(lVar8);
          fVar21 = *(float *)(lVar8 + 0x54);
          fVar22 = *(float *)(lVar8 + 0x58);
          fVar23 = *(float *)(lVar8 + 0x5c);
          fVar20 = *(float *)(lVar8 + 0x60);
          fVar14 = *(float *)(param_1 + 0x210) * 0.017453292 * 0.5;
          fVar10 = *(float *)(param_1 + 0x214) * 0.017453292 * 0.5;
          fVar13 = *(float *)(param_1 + 0x218) * 0.017453292 * 0.5;
          fVar9 = fVar13;
          ___sincosf_stret();
          fVar12 = fVar9;
          ___sincosf_stret();
          fVar15 = fVar12;
          ___sincosf_stret();
          fVar16 = fVar14 * fVar10 * fVar13 + fVar15 * fVar9 * fVar12;
          fVar19 = -(fVar9 * fVar10 * fVar13) + fVar15 * fVar14 * fVar12;
          fVar11 = fVar14 * fVar12 * fVar13 + fVar15 * fVar9 * fVar10;
          fVar9 = -(fVar14 * fVar10 * fVar15) + fVar13 * fVar9 * fVar12;
          fStack_104 = ((-(fVar21 * fVar19) + fVar16 * fVar20) - fVar11 * fVar22) - fVar9 * fVar23;
          fStack_110 = (fVar21 * fVar16 + fVar19 * fVar20 + fVar9 * fVar22) - fVar11 * fVar23;
          fStack_10c = (fVar22 * fVar16 + fVar11 * fVar20 + fVar19 * fVar23) - fVar9 * fVar21;
          fStack_108 = (fVar23 * fVar16 + fVar9 * fVar20 + fVar11 * fVar21) - fVar19 * fVar22;
          FUN_10a3e82bc(lVar8,&fStack_110);
        }
      }
      plVar1 = plVar7 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return;
}



/* Entry: 10a2de074; end: 10a2de157;  */

void FUN_10a2de074(long param_1)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined8 uStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 uStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  long lStack_80;
  long *plStack_78;
  
  FUN_10a2dd15c();
  if ((*(int *)(param_1 + 0x1cc) != -1) &&
     (plVar7 = *(long **)(param_1 + 0x1c0), plVar7 != (long *)0x0)) {
    lVar8 = *(long *)(param_1 + 0x100);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      lStack_80 = *(long *)(param_1 + 0x1b8);
      plStack_78 = plVar7;
      if (lStack_80 != 0) {
        FUN_10a42490c(&fStack_f0,lStack_80,*(undefined4 *)(param_1 + 0x1cc));
        fVar9 = *(float *)(param_1 + 0x1d4);
        fVar12 = *(float *)(param_1 + 0x1d8);
        fVar15 = *(float *)(param_1 + 0x1dc);
        fStack_f8 = fVar9 * fStack_e8 + fVar12 * fStack_c4 + fVar15 * fStack_a0 +
                    *(float *)(param_1 + 0x1a4);
        uStack_100 = CONCAT44(fStack_ec * fVar9 + fStack_c8 * fVar12 + fStack_a4 * fVar15 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x19c) >> 0x20),
                              fStack_f0 * fVar9 + fStack_cc * fVar12 + fStack_a8 * fVar15 +
                              (float)*(undefined8 *)(param_1 + 0x19c));
        FUN_10a3e8ad4(*(undefined8 *)(lVar8 + 0x140),&uStack_100);
        if (*(int *)(param_1 + 0x194) != 0) {
          fVar9 = (float)uStack_e4;
          fVar12 = (float)((ulong)uStack_e4 >> 0x20);
          if (*(char *)(param_1 + 0x198) == '\x01') {
            fVar10 = *(float *)(param_1 + 0x1d4);
            fVar13 = *(float *)(param_1 + 0x1d8);
            fVar16 = *(float *)(param_1 + 0x1dc);
            fVar15 = fVar9 * fVar10 + (float)uStack_c0 * fVar13 + (float)uStack_9c * fVar16;
            fVar14 = fVar12 * fVar10 + (float)((ulong)uStack_c0 >> 0x20) * fVar13 +
                     (float)((ulong)uStack_9c >> 0x20) * fVar16;
            fVar10 = fVar10 * fStack_dc + fVar13 * fStack_b8 + fVar16 * fStack_94;
            fVar19 = fVar9 * fVar9 + fVar12 * fVar12 + fStack_dc * fStack_dc;
            fVar16 = 0.0;
            fVar11 = 1.0;
            fVar13 = 0.0;
            if ((1e-06 < fVar19) && (fVar19 = 1.0 / SQRT(fVar19), 0.0 < fVar19)) {
              fVar16 = fVar9 * fVar19;
              fVar11 = fVar12 * fVar19;
              fVar13 = fStack_dc * fVar19;
            }
            fVar9 = fVar15 * fVar15 + fVar14 * fVar14 + fVar10 * fVar10;
          }
          else {
            fVar15 = (fStack_c4 - fStack_e8) * -(fStack_a4 - fStack_ec) +
                     (fStack_a0 - fStack_e8) * (fStack_c8 - fStack_ec);
            fVar14 = (fStack_cc - fStack_f0) * -(fStack_a0 - fStack_e8) +
                     (fStack_a8 - fStack_f0) * (fStack_c4 - fStack_e8);
            fVar10 = -(fStack_a8 - fStack_f0) * (fStack_c8 - fStack_ec) +
                     (fStack_a4 - fStack_ec) * (fStack_cc - fStack_f0);
            fVar19 = fVar9 * fVar9 + fVar12 * fVar12 + fStack_dc * fStack_dc;
            fVar16 = 0.0;
            fVar11 = 1.0;
            fVar13 = 0.0;
            if ((1e-06 < fVar19) && (fVar19 = 1.0 / SQRT(fVar19), 0.0 < fVar19)) {
              fVar16 = fVar9 * fVar19;
              fVar11 = fVar12 * fVar19;
              fVar13 = fStack_dc * fVar19;
            }
            fVar9 = fVar10 * fVar10 + fVar15 * fVar15 + fVar14 * fVar14;
          }
          if ((1e-06 < fVar9) && (fVar9 = 1.0 / SQRT(fVar9), 0.0 < fVar9)) {
            fVar16 = fVar15 * fVar9;
            fVar11 = fVar14 * fVar9;
            fVar13 = fVar10 * fVar9;
          }
          fStack_b4 = fStack_b4 - fStack_d8;
          fStack_b0 = fStack_b0 - fStack_d4;
          fStack_90 = fStack_90 - fStack_d8;
          fStack_8c = fStack_8c - fStack_d4;
          fVar15 = -(fStack_b0 * fStack_90) + fStack_8c * fStack_b4;
          fVar9 = 1.0;
          fVar12 = 0.0;
          if (1.1920929e-07 <= ABS(fVar15)) {
            fVar15 = 1.0 / fVar15;
            fVar22 = ((fStack_cc - fStack_f0) * fStack_8c - (fStack_a8 - fStack_f0) * fStack_b0) *
                     fVar15;
            fVar23 = ((fStack_c8 - fStack_ec) * fStack_8c - (fStack_a4 - fStack_ec) * fStack_b0) *
                     fVar15;
            fVar24 = ((fStack_c8 - fStack_ec) * fStack_8c - (fStack_a4 - fStack_ec) * fStack_b0) *
                     fVar15;
            fVar25 = ((fStack_c4 - fStack_e8) * fStack_8c - (fStack_a0 - fStack_e8) * fStack_b0) *
                     fVar15;
            fVar19 = ((fStack_a8 - fStack_f0) * fStack_b4 - (fStack_cc - fStack_f0) * fStack_90) *
                     fVar15;
            uVar18 = NEON_ext(CONCAT44(fVar25,fVar24),CONCAT44(fVar23,fVar22),4,1);
            fVar14 = (float)((ulong)uVar18 >> 0x20);
            fVar20 = ((fStack_a4 - fStack_ec) * fStack_b4 - (fStack_c8 - fStack_ec) * fStack_90) *
                     fVar15;
            fVar21 = ((fStack_a0 - fStack_e8) * fStack_b4 - (fStack_c4 - fStack_e8) * fStack_90) *
                     fVar15;
            fVar26 = (float)uVar18 * (float)uVar18 + fVar14 * fVar14 + fVar23 * fVar23;
            uVar18 = 0x3f80000000000000;
            fVar14 = 0.0;
            fVar10 = 0.0;
            if (fVar26 <= 1e-06) {
              uVar17 = 0;
            }
            else {
              fVar26 = 1.0 / SQRT(fVar26);
              uVar17 = 0;
              if (0.0 < fVar26) {
                uVar17 = CONCAT44(fVar23 * fVar26,fVar22 * fVar26);
                uVar18 = CONCAT44(fVar25 * fVar26,fVar24 * fVar26);
              }
            }
            fVar22 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
            if ((1e-06 < fVar22) && (fVar22 = 1.0 / SQRT(fVar22), 0.0 < fVar22)) {
              fVar9 = fVar19 * fVar22;
              fVar12 = ((fStack_a4 - fStack_ec) * fStack_b4 - (fStack_c8 - fStack_ec) * fStack_90) *
                       fVar15 * fVar22;
              fVar14 = fVar20 * fVar22;
              fVar10 = fVar21 * fVar22;
            }
          }
          else {
            uVar18 = 0x3f80000000000000;
            uVar17 = 0;
            fVar14 = 0.0;
            fVar10 = 0.0;
          }
          if (*(int *)(param_1 + 0x194) != 1) {
            FUN_10a00946c(&UNK_10f64c415);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2de04c);
            (*pcVar5)();
          }
          fVar20 = (float)((ulong)uVar18 >> 0x20);
          fVar15 = (float)uVar17;
          fVar19 = (float)((ulong)uVar17 >> 0x20);
          bVar6 = 0.0 <= fVar13 * ((float)uVar18 * -fVar9 + fVar14 * fVar15) +
                         fVar16 * (fVar20 * -fVar12 + fVar10 * fVar19) +
                         (-fVar10 * fVar15 + fVar9 * fVar20) * fVar11;
          fVar9 = -fVar20;
          if (bVar6) {
            fVar9 = fVar20;
          }
          fVar12 = -fVar19;
          if (bVar6) {
            fVar12 = fVar19;
          }
          fVar14 = -fVar15;
          if (bVar6) {
            fVar14 = fVar15;
          }
          fVar29 = 1.0 / SQRT(fVar16 * fVar16 + fVar11 * fVar11 + fVar13 * fVar13);
          fVar16 = fVar29 * fVar16;
          fVar26 = fVar29 * fVar11;
          fVar15 = fVar13 * fVar29;
          fVar22 = -(fVar12 * fVar15) + fVar9 * fVar26;
          fVar31 = -(fVar9 * fVar16) + fVar14 * fVar15;
          fVar9 = -(fVar14 * fVar26) + fVar12 * fVar16;
          fVar35 = 1.0 / SQRT(fVar9 * fVar9 + fVar22 * fVar22 + fVar31 * fVar31);
          fVar22 = fVar22 * fVar35;
          fVar27 = fVar31 * fVar35;
          fVar9 = fVar9 * fVar35;
          fVar28 = -(fVar26 * fVar9) + fVar15 * fVar27;
          fVar30 = -(fVar15 * fVar22) + fVar16 * fVar9;
          fVar32 = -(fVar16 * fVar27) + fVar26 * fVar22;
          fVar19 = fVar26 * fVar32 - fVar15 * fVar30;
          fVar36 = fVar16 * fVar32 - fVar15 * fVar28;
          fVar34 = fVar16 * fVar30 - fVar26 * fVar28;
          fVar21 = -(fVar27 * fVar36) + fVar19 * fVar22 + fVar34 * fVar9;
          fVar12 = 0.0;
          fVar25 = 1.0;
          fVar23 = 0.0;
          fVar15 = 0.0;
          fVar33 = 1.0;
          fVar24 = 0.0;
          fVar14 = 0.0;
          fVar10 = 0.0;
          fVar20 = 1.0;
          if (1e-06 < ABS(fVar21)) {
            fVar21 = 1.0 / fVar21;
            fVar25 = fVar19 * fVar21;
            fVar15 = -((fVar26 * fVar9 + -(fVar13 * fVar29) * fVar27) * fVar21);
            fVar14 = (-(fVar9 * fVar30) + fVar32 * fVar27) * fVar21;
            fVar12 = -(fVar36 * fVar21);
            fVar33 = (fVar16 * fVar9 + -(fVar13 * fVar29) * fVar22) * fVar21;
            fVar10 = -((-(fVar9 * fVar28) + fVar32 * fVar22) * fVar21);
            fVar23 = fVar34 * fVar21;
            fVar24 = -((fVar16 * fVar27 + -(fVar11 * fVar29) * fVar22) * fVar21);
            fVar20 = (fVar28 * -(fVar31 * fVar35) + fVar30 * fVar22) * fVar21;
          }
          fVar11 = (fVar25 - fVar33) - fVar20;
          fVar13 = (fVar33 - fVar25) - fVar20;
          fVar16 = (fVar20 - fVar25) - fVar33;
          fVar20 = fVar25 + fVar33 + fVar20;
          fVar9 = fVar11;
          if (fVar11 <= fVar20) {
            fVar9 = fVar20;
          }
          bVar3 = 2;
          if (fVar13 <= fVar9) {
            fVar13 = fVar9;
            bVar3 = fVar20 < fVar11;
          }
          bVar4 = 3;
          if (fVar16 <= fVar13) {
            fVar16 = fVar13;
            bVar4 = bVar3;
          }
          fVar19 = SQRT(fVar16 + 1.0) * 0.5;
          fVar11 = 0.25 / fVar19;
          fVar16 = (fVar14 - fVar23) * fVar11;
          fVar21 = (fVar12 + fVar15) * fVar11;
          fVar22 = (fVar24 + fVar10) * fVar11;
          fVar13 = (fVar12 - fVar15) * fVar11;
          fVar20 = (fVar23 + fVar14) * fVar11;
          fVar9 = fVar16;
          fVar12 = fVar22;
          fVar15 = fVar19;
          fVar14 = fVar21;
          if (bVar4 != 2) {
            fVar9 = fVar13;
            fVar12 = fVar19;
            fVar15 = fVar22;
            fVar14 = fVar20;
          }
          fVar11 = (fVar24 - fVar10) * fVar11;
          fVar10 = fVar19;
          if (bVar4 != 0) {
            fVar10 = fVar11;
            fVar13 = fVar20;
            fVar16 = fVar21;
            fVar11 = fVar19;
          }
          if (bVar4 < 2) {
            fVar9 = fVar10;
            fVar12 = fVar13;
            fVar15 = fVar16;
            fVar14 = fVar11;
          }
          fStack_f4 = fVar14 * 0.49999997 + fVar9 * 0.49999997 + fVar15 * 0.49999997 +
                      fVar12 * -0.49999997;
          fVar10 = fVar14 * 0.49999997 + fVar9 * -0.49999997 + fVar15 * 0.49999997 +
                   fVar12 * 0.49999997;
          fVar13 = fVar15 * 0.49999997 + fVar9 * -0.49999997 + fVar12 * -0.49999997 +
                   fVar14 * -0.49999997;
          fStack_f8 = fVar12 * 0.49999997 + fVar9 * 0.49999997 + fVar14 * -0.49999997 +
                      fVar15 * 0.49999997;
          fVar9 = fStack_f4 * fStack_f4 + fVar10 * fVar10 + fVar13 * fVar13 + fStack_f8 * fStack_f8;
          if (fVar9 == 0.0) {
            fStack_f4 = 1.0;
            fVar10 = 0.0;
            fVar13 = 0.0;
            fStack_f8 = 0.0;
          }
          else {
            fVar9 = 1.0 / SQRT(fVar9);
            fStack_f4 = fStack_f4 * fVar9;
            fVar10 = fVar10 * fVar9;
            fVar13 = fVar13 * fVar9;
            fStack_f8 = fStack_f8 * fVar9;
          }
          uStack_100 = CONCAT44(fVar13,fVar10);
          FUN_10a3e8838(*(undefined8 *)(lVar8 + 0x140),&uStack_100);
          lVar8 = *(long *)(lVar8 + 0x140);
          func_0x00010a0d8ae0(lVar8);
          fVar21 = *(float *)(lVar8 + 0x54);
          fVar22 = *(float *)(lVar8 + 0x58);
          fVar23 = *(float *)(lVar8 + 0x5c);
          fVar20 = *(float *)(lVar8 + 0x60);
          fVar14 = *(float *)(param_1 + 0x1a8) * 0.017453292 * 0.5;
          fVar10 = *(float *)(param_1 + 0x1ac) * 0.017453292 * 0.5;
          fVar13 = *(float *)(param_1 + 0x1b0) * 0.017453292 * 0.5;
          fVar9 = fVar13;
          ___sincosf_stret();
          fVar12 = fVar9;
          ___sincosf_stret();
          fVar15 = fVar12;
          ___sincosf_stret();
          fVar16 = fVar14 * fVar10 * fVar13 + fVar15 * fVar9 * fVar12;
          fVar19 = -(fVar9 * fVar10 * fVar13) + fVar15 * fVar14 * fVar12;
          fVar11 = fVar14 * fVar12 * fVar13 + fVar15 * fVar9 * fVar10;
          fVar9 = -(fVar14 * fVar10 * fVar15) + fVar13 * fVar9 * fVar12;
          fStack_104 = ((-(fVar21 * fVar19) + fVar16 * fVar20) - fVar11 * fVar22) - fVar9 * fVar23;
          fStack_110 = (fVar21 * fVar16 + fVar19 * fVar20 + fVar9 * fVar22) - fVar11 * fVar23;
          fStack_10c = (fVar22 * fVar16 + fVar11 * fVar20 + fVar19 * fVar23) - fVar9 * fVar21;
          fStack_108 = (fVar23 * fVar16 + fVar9 * fVar20 + fVar11 * fVar21) - fVar19 * fVar22;
          FUN_10a3e82bc(lVar8,&fStack_110);
        }
      }
      plVar1 = plVar7 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return;
}



/* Entry: 10a2de158; end: 10a2de1ab;  */

void FUN_10a2de158(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64b3ce;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f64b3ce;
  uStack_18 = 0xffffffff;
  FUN_10a2de1ac(param_1,&uStack_58);
  FUN_10a300a44();
  return;
}



/* Entry: 10a2de1ac; end: 10a2de283;  */

/* WARNING: Removing unreachable block (ram,0x00010a2de244) */

undefined1  [16] FUN_10a2de1ac(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f64c9d9,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a300948(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a2de284; end: 10a2de37b;  */

void FUN_10a2de284(long *param_1,long *param_2)

{
  long lVar1;
  
  FUN_10a4213cc(param_1,param_2 + 2);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110bbddd0;
  param_1[7] = (long)&PTR_FUN_110bbde28;
  param_1[0xd] = (long)&PTR_FUN_110bbde48;
  param_1[0x16] = (long)&PTR_FUN_110bbdeb8;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[0x17] = (long)&PTR_DAT_110bbdee8;
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110bbf3a0;
  param_1[7] = (long)&PTR_FUN_110bbf3f8;
  param_1[0xd] = (long)&PTR_FUN_110bbf418;
  param_1[0x16] = (long)&PTR_FUN_110bbf488;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[9];
  param_1[0x17] = (long)&PTR_FUN_110bbf4b8;
  return;
}



/* Entry: 10a2de37c; end: 10a2de627;  */

void FUN_10a2de37c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    lVar9 = param_4 + 0x88;
    func_0x00010a35bf90(lVar9,&plStack_60);
    puVar4 = (undefined8 *)((ulong)&plStack_60 | 8);
    pplVar7 = &plStack_60;
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)(lVar9 + 0x28);
      pplVar7 = (long **)(lVar9 + 0x20);
    }
    uVar10 = *puVar4;
    plVar11 = *pplVar7;
  }
  plVar12 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar12);
  FUN_10a300b00(plVar12,plVar11,uVar10);
  plVar11 = (long *)0x28;
  __Znwm();
  plVar8 = plVar11 + 1;
  *plVar8 = 0;
  *plVar11 = (long)&PTR_FUN_110bc3278;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar12;
  plVar11[4] = (long)FUN_10a3df8cc;
  if (plVar12 != (long *)0x0) {
    if (plVar12[6] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
    }
    else {
      if (*(long *)(plVar12[6] + 8) != -1) goto LAB_10a2de4e8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a2de4e8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar12 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar12 + 0x30) & 0xfffc;
  *(ushort *)(plVar12 + 0x30) = uVar3 | *(ushort *)(plVar12 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar12 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_60 = plVar12;
  plStack_58 = plVar11;
  FUN_10a3c7ce8(param_3,&plStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(*plVar12 + 0x130))(plVar12,plVar8);
  FUN_10a2d597c(param_2,plVar12,param_4);
  *param_1 = (long)plVar12;
  param_1[1] = (long)plVar11;
  return;
}



/* Entry: 10a2de628; end: 10a2de62f;  */

void FUN_10a2de628(long param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a42241c();
  ppuVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bbdf80);
  if ((int)ppuVar4 != 0) {
    pcStack_78 = FUN_10a2f6524;
    ppuStack_70 = &PTR_FUN_110bc2f68;
    ppuVar4 = param_2;
    lStack_68 = param_1;
    FUN_10a02daf4(param_2,&PTR_DAT_110bbdf80,&pcStack_78,0);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (((ulong)ppuVar4 & 1) == 0) {
      uStack_88 = 0;
      plStack_80 = (long *)0x0;
      FUN_10a2d54dc(param_1,&uStack_88);
      plVar7 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
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
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
  }
  ppuVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bbdfa0);
  if ((int)ppuVar4 != 0) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x84) {
      FUN_10a2d5700(param_1,param_2);
    }
    else {
      FUN_10a2d5568(param_1,param_2);
    }
  }
  ppuVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bbdfc0);
  if ((int)ppuVar4 == 0) {
    ppuVar4 = (undefined **)(param_1 + 0x390);
    FUN_10a030d44();
  }
  else {
    ppuVar5 = &PTR_DAT_110bbdfc0;
    (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110bbdfc0,param_1 + 0x390);
    ppuVar4 = param_2;
    param_2 = ppuVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0617bc(&uStack_88);
  __Unwind_Resume(ppuVar4);
  plVar7 = (long *)param_2[1];
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  FUN_10a42646c();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a2de630; end: 10a2de81b;  */

void FUN_10a2de630(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 in_d3;
  undefined1 *apuStack_a0 [2];
  char cStack_89;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  ppuVar5 = apuStack_a0;
  uStack_48 = 9;
  puStack_50 = &DAT_10f64c439;
  uStack_40 = 0x149d0686d81bd7c4;
  func_0x000107c2b074(&ppuStack_70,&puStack_50);
  lVar4 = param_2;
  FUN_10a424258(param_2,&ppuStack_70);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  FUN_10a3c829c(&ppuStack_70,param_2);
  if (lVar4 == 0) {
    func_0x000107c2b054(&ppuStack_88,&UNK_10f64c443);
  }
  else {
    FUN_10a0dad84(lVar4);
    __ZNSt3__19to_stringEf(&ppuStack_88,in_d3);
  }
  uVar1 = uStack_68;
  if (-1 < (char)bStack_59) {
    uVar1 = (ulong)bStack_59;
  }
  FUN_10a003c90(apuStack_a0,uVar1 + 9,&uStack_31);
  ppuVar2 = (undefined1 **)apuStack_a0[0];
  if (-1 < cStack_89) {
    ppuVar2 = apuStack_a0;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_70;
    if (-1 < (char)bStack_59) {
      pppuVar3 = &ppuStack_70;
    }
    _memmove(ppuVar2,pppuVar3,uVar1);
  }
  *(undefined8 *)((long)ppuVar2 + uVar1) = 0x3a6168706c61202c;
  *(undefined2 *)((undefined8 *)((long)ppuVar2 + uVar1) + 1) = 0x20;
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (apuStack_a0,pppuVar3,uStack_80);
  uVar6 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = uVar6;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined1 *)0x0;
  ppuVar5[2] = (undefined1 *)0x0;
  *ppuVar5 = (undefined1 *)0x0;
  if (cStack_89 < '\0') {
    __ZdlPv(apuStack_a0[0]);
  }
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  return;
}



/* Entry: 10a2de81c; end: 10a2de823;  */

void FUN_10a2de81c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 in_d3;
  undefined1 *apuStack_a0 [2];
  char cStack_89;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  param_2 = param_2 + -0x10;
  ppuVar5 = apuStack_a0;
  uStack_48 = 9;
  puStack_50 = &DAT_10f64c439;
  uStack_40 = 0x149d0686d81bd7c4;
  func_0x000107c2b074(&ppuStack_70,&puStack_50);
  lVar4 = param_2;
  FUN_10a424258(param_2,&ppuStack_70);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  FUN_10a3c829c(&ppuStack_70,param_2);
  if (lVar4 == 0) {
    func_0x000107c2b054(&ppuStack_88,&UNK_10f64c443);
  }
  else {
    FUN_10a0dad84(lVar4);
    __ZNSt3__19to_stringEf(&ppuStack_88,in_d3);
  }
  uVar1 = uStack_68;
  if (-1 < (char)bStack_59) {
    uVar1 = (ulong)bStack_59;
  }
  FUN_10a003c90(apuStack_a0,uVar1 + 9,&uStack_31);
  ppuVar2 = (undefined1 **)apuStack_a0[0];
  if (-1 < cStack_89) {
    ppuVar2 = apuStack_a0;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_70;
    if (-1 < (char)bStack_59) {
      pppuVar3 = &ppuStack_70;
    }
    _memmove(ppuVar2,pppuVar3,uVar1);
  }
  *(undefined8 *)((long)ppuVar2 + uVar1) = 0x3a6168706c61202c;
  *(undefined2 *)((undefined8 *)((long)ppuVar2 + uVar1) + 1) = 0x20;
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (apuStack_a0,pppuVar3,uStack_80);
  uVar6 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = uVar6;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined1 *)0x0;
  ppuVar5[2] = (undefined1 *)0x0;
  *ppuVar5 = (undefined1 *)0x0;
  if (cStack_89 < '\0') {
    __ZdlPv(apuStack_a0[0]);
  }
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  return;
}



/* Entry: 10a2de824; end: 10a2de9e7;  */

void FUN_10a2de824(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c462;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f64c46f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2de9e8(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c473;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2de9e8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f42ad2b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2de9e8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c477;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2de9e8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64c47c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2de9e8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a2de9e8; end: 10a2dea8f;  */

undefined8 * FUN_10a2de9e8(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2dea90);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a2dea90; end: 10a2df00b;  */

undefined8 * FUN_10a2dea90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar21;
  uVar21 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar21;
  uVar21 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar21;
  lVar8 = param_2[7];
  uVar21 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar21;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar9 = (undefined8 *)param_2[9];
    puVar13 = (undefined8 *)param_1[9];
    *puVar13 = *puVar9;
    puVar13[1] = puVar9[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,param_2);
  }
  uVar22 = param_3[1];
  uVar21 = *param_3;
  uVar25 = param_3[3];
  uVar24 = param_3[2];
  plVar17 = param_1 + 0x1a;
  param_1[0x1b] = 0;
  *plVar17 = 0;
  param_1[0xd] = uVar22;
  param_1[0xc] = uVar21;
  param_1[0xf] = uVar25;
  param_1[0xe] = uVar24;
  plVar16 = param_1 + 0x14;
  param_1[0x15] = 0;
  *plVar16 = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  fVar26 = 1.0 / (float)*(int *)((long)param_2 + 0xc);
  *(float *)(param_1 + 0x10) = fVar26;
  fVar27 = 1.0 / (float)*(int *)(param_2 + 1);
  *(float *)((long)param_1 + 0x84) = fVar27;
  FUN_10a0507f0(param_1 + 0x11,4);
  fVar23 = fVar27 * -0.5 + 1.0;
  fVar19 = fVar26 * -0.5 + 1.0;
  pfVar10 = (float *)param_1[0x12];
  *pfVar10 = fVar26 * 0.5;
  pfVar10[1] = fVar27 * 0.5;
  pfVar10[2] = fVar19;
  pfVar10[3] = fVar27 * 0.5;
  pfVar10[4] = fVar19;
  pfVar10[5] = fVar23;
  pfVar10[6] = fVar26 * 0.5;
  pfVar10[7] = fVar23;
  param_1[0x12] = pfVar10 + 8;
  uStack_88 = 1;
  uStack_90 = (undefined8 *)0x3;
  uStack_80 = 0;
  FUN_10a2e3158(plVar16,&uStack_90,&lStack_78);
  uStack_88 = 3;
  uStack_90 = (undefined8 *)0x1;
  uStack_80 = 2;
  FUN_10a2e3158(param_1 + 0x17,&uStack_90,&lStack_78);
  puVar9 = (undefined8 *)0x28;
  __Znwm();
  puVar9[4] = 0;
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  uStack_90 = puVar9;
  FUN_10a2e32b4(param_1 + 0x20,&uStack_90);
  if (uStack_90 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  if (param_1[0x20] != param_1[0x21]) {
    param_1[0x23] = *(undefined8 *)(param_1[0x21] + -8);
    puVar9 = (undefined8 *)0x28;
    __Znwm();
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    uStack_90 = puVar9;
    FUN_10a2e32b4(param_1 + 0x20,&uStack_90);
    if (uStack_90 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    if (param_1[0x20] != param_1[0x21]) {
      lVar8 = *(long *)(param_1[0x21] + -8);
      param_1[0x24] = lVar8;
      lVar12 = param_1[0x23];
      *(long *)(lVar12 + 0x20) = lVar8;
      *(long *)(lVar8 + 0x20) = lVar12;
      uVar4 = ~(-1 << (ulong)(*(uint *)((long)param_1 + 0x74) & 0x1f));
      func_0x00010742a308(plVar17,uVar4);
      func_0x00010742a308(param_1 + 0x1d,uVar4);
      puVar2 = (undefined4 *)param_1[0x11];
      lVar8 = param_1[0x12] - (long)puVar2;
      if (lVar8 != 0) {
        uVar18 = lVar8 >> 3;
        uVar20 = *puVar2;
        FUN_10a2df00c(uVar20,puVar2[1],param_1);
        uStack_90 = (undefined8 *)CONCAT44(uStack_90._4_4_,uVar20);
        if (1 < uVar18) {
          uVar20 = puVar2[2];
          FUN_10a2df00c(uVar20,puVar2[3],param_1);
          uStack_90 = (undefined8 *)CONCAT44(uVar20,(undefined4)uStack_90);
          if (lVar8 != 0x10) {
            uVar20 = puVar2[4];
            FUN_10a2df00c(uVar20,puVar2[5],param_1);
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar20);
            if (3 < uVar18) {
              uVar20 = puVar2[6];
              FUN_10a2df00c(uVar20,puVar2[7],param_1);
              uStack_88 = CONCAT44(uVar20,(undefined4)uStack_88);
              puVar3 = (ulong *)param_1[0x14];
              uVar15 = (long)param_1[0x15] - (long)puVar3;
              if ((((((ulong *)param_1[0x15] != puVar3) && (uVar11 = *puVar3, uVar11 < uVar18)) &&
                   (8 < uVar15)) && ((uVar14 = puVar3[1], uVar14 < uVar18 && (uVar15 != 0x10)))) &&
                 (puVar3[2] < uVar18)) {
                FUN_10a2df0fc(*(undefined4 *)((long)&uStack_90 + uVar11 * 4),
                              *(undefined4 *)((long)&uStack_90 + uVar14 * 4),param_1,plVar17,0,
                              puVar2 + uVar11 * 2,puVar2 + uVar14 * 2,puVar2 + puVar3[2] * 2);
                puVar3 = (ulong *)param_1[0x17];
                uVar18 = (long)param_1[0x18] - (long)puVar3;
                if ((ulong *)param_1[0x18] != puVar3) {
                  lVar8 = param_1[0x11];
                  uVar15 = param_1[0x12] - lVar8 >> 3;
                  if (((*puVar3 < uVar15) && (8 < uVar18)) &&
                     ((puVar3[1] < uVar15 && ((uVar18 != 0x10 && (puVar3[2] < uVar15)))))) {
                    FUN_10a2df0fc(param_1,param_1 + 0x1d,0,lVar8 + *puVar3 * 8,lVar8 + puVar3[1] * 8
                                  ,lVar8 + puVar3[2] * 8);
                    puVar3 = (ulong *)param_1[0x14];
                    uVar18 = (long)param_1[0x15] - (long)puVar3;
                    if ((ulong *)param_1[0x15] != puVar3) {
                      lVar8 = param_1[0x11];
                      uVar15 = param_1[0x12] - lVar8 >> 3;
                      if ((((*puVar3 < uVar15) && (8 < uVar18)) && (puVar3[1] < uVar15)) &&
                         ((uVar18 != 0x10 && (puVar3[2] < uVar15)))) {
                        FUN_10a2df25c(param_1,param_1[0x23],plVar17,0,lVar8 + *puVar3 * 8,
                                      lVar8 + puVar3[1] * 8,lVar8 + puVar3[2] * 8);
                        puVar3 = (ulong *)param_1[0x17];
                        uVar18 = (long)param_1[0x18] - (long)puVar3;
                        if ((ulong *)param_1[0x18] != puVar3) {
                          lVar8 = param_1[0x11];
                          uVar15 = param_1[0x12] - lVar8 >> 3;
                          if (((*puVar3 < uVar15) && (8 < uVar18)) &&
                             ((puVar3[1] < uVar15 && ((uVar18 != 0x10 && (puVar3[2] < uVar15)))))) {
                            puVar9 = param_1;
                            FUN_10a2df25c(param_1,param_1[0x24],param_1 + 0x1d,0,lVar8 + *puVar3 * 8
                                          ,lVar8 + puVar3[1] * 8,lVar8 + puVar3[2] * 8);
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                              return param_1;
                            }
                            ___stack_chk_fail();
                            if (uStack_90 != (undefined8 *)0x0) {
                              __ZdlPv();
                            }
                            FUN_10a2e33ac(param_1 + 0x20);
                            if (param_1[0x1d] != 0) {
                              param_1[0x1e] = param_1[0x1d];
                              __ZdlPv();
                            }
                            if (*plVar17 != 0) {
                              param_1[0x1b] = *plVar17;
                              __ZdlPv();
                            }
                            lVar8 = param_1[0x17];
                            if (lVar8 != 0) {
                              param_1[0x18] = lVar8;
                              __ZdlPv();
                            }
                            if (*plVar16 != 0) {
                              param_1[0x15] = *plVar16;
                              __ZdlPv();
                            }
                            lVar8 = param_1[0x11];
                            if (lVar8 != 0) {
                              param_1[0x12] = lVar8;
                              __ZdlPv();
                            }
                            func_0x00010938f90c(param_1);
                            __Unwind_Resume();
                            if (*(char *)(puVar9 + 0xf) == '\x01') {
                              return puVar9;
                            }
                            return puVar9;
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
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a2def78);
  (*pcVar7)();
}



/* Entry: 10a2df00c; end: 10a2df0fb;  */

float FUN_10a2df00c(float param_1,float param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = (float)*(int *)(param_3 + 0xc) * param_1 + -0.5;
  fVar9 = (float)*(int *)(param_3 + 8) * param_2 + -0.5;
  if (*(char *)(param_3 + 0x78) == '\x01') {
    uVar5 = (uint)fVar8;
    uVar6 = (uint)fVar9;
    uVar1 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    iVar2 = *(int *)(param_3 + 0xc) + -1;
    if ((int)(uVar5 + 1) <= iVar2) {
      iVar2 = uVar5 + 1;
    }
    iVar3 = *(int *)(param_3 + 8) + -1;
    if ((int)(uVar6 + 1) <= iVar3) {
      iVar3 = uVar6 + 1;
    }
    fVar8 = fVar8 - (float)(int)(float)(int)fVar8;
    fVar9 = fVar9 - (float)(int)(float)(int)fVar9;
    lVar7 = *(long *)(param_3 + 0x10) +
            **(long **)(param_3 + 0x48) * (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
    lVar4 = *(long *)(param_3 + 0x10) + **(long **)(param_3 + 0x48) * (long)iVar3;
    return (1.0 - fVar9) * fVar8 * *(float *)(lVar7 + (long)iVar2 * 4) +
           (1.0 - fVar9) * (1.0 - fVar8) * *(float *)(lVar7 + (ulong)uVar1 * 4) +
           fVar9 * (1.0 - fVar8) * *(float *)(lVar4 + (ulong)uVar1 * 4) +
           fVar9 * fVar8 * *(float *)(lVar4 + (long)iVar2 * 4);
  }
  return *(float *)(*(long *)(param_3 + 0x10) + **(long **)(param_3 + 0x48) * (long)(int)fVar9 +
                   (long)(int)fVar8 * 4);
}



/* Entry: 10a2df0fc; end: 10a2df25b;  */

float FUN_10a2df0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   long *param_5,ulong param_6,float *param_7,float *param_8,undefined8 param_9)

{
  code *pcVar1;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fStack_88;
  float fStack_84;
  
  fVar2 = 0.0;
  if (param_6 < (ulong)(param_5[1] - *param_5 >> 2)) {
    if ((*(float *)(param_4 + 0x80) <= ABS(*param_7 - *param_8)) ||
       (*(float *)(param_4 + 0x84) <= ABS(param_7[1] - param_8[1]))) {
      fStack_88 = (*param_7 + *param_8) * 0.5;
      uVar3 = (ulong)(uint)fStack_88;
      fStack_84 = (param_7[1] + param_8[1]) * 0.5;
      FUN_10a2df00c(param_4);
      uVar4 = param_3;
      FUN_10a2df0fc(param_3,param_1,uVar3,param_4,param_5,param_6 << 1 | 1,param_9,param_7,
                    &fStack_88);
      uVar5 = param_2;
      FUN_10a2df0fc(param_2,param_3,uVar3,param_4,param_5,param_6 * 2 + 2,param_8,param_9,&fStack_88
                   );
      if ((ulong)(param_5[1] - *param_5 >> 2) <= param_6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2df25c);
        (*pcVar1)();
      }
      fVar2 = (float)uVar5 +
              (float)uVar4 + ABS((float)uVar3 + ((float)param_1 + (float)param_2) * -0.5);
      *(float *)(*param_5 + param_6 * 4) = fVar2;
    }
  }
  return fVar2;
}



/* Entry: 10a2df25c; end: 10a2df343;  */

void FUN_10a2df25c(long param_1,long *param_2,long *param_3,ulong param_4,undefined8 *param_5,
                  undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uStack_58;
  
  if ((param_4 < (ulong)(param_3[1] - *param_3 >> 2)) &&
     (*(float *)(param_1 + 0x70) <= *(float *)(*param_3 + param_4 * 4))) {
    uStack_58 = CONCAT44(((float)((ulong)*param_5 >> 0x20) + (float)((ulong)*param_6 >> 0x20)) * 0.5
                         ,((float)*param_5 + (float)*param_6) * 0.5);
    lVar1 = *param_2;
    if (lVar1 == 0) {
      FUN_10a2df344(param_1,param_2);
      lVar1 = *param_2;
    }
    FUN_10a2df25c(param_1,lVar1,param_3,param_4 << 1 | 1,param_7,param_5,&uStack_58);
    FUN_10a2df25c(param_1,param_2[1],param_3,param_4 * 2 + 2,param_6,param_7,&uStack_58);
  }
  return;
}



/* Entry: 10a2df344; end: 10a2df607;  */

void FUN_10a2df344(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_38;
  
  plVar8 = (long *)param_2[4];
  if ((plVar8 != (long *)0x0) && ((long *)plVar8[4] != param_2)) {
    FUN_10a2df344(param_1,plVar8);
    plVar8 = (long *)param_2[4];
  }
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puStack_38 = puVar2;
  FUN_10a2e32b4(param_1 + 0x100,&puStack_38);
  if (puStack_38 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
    *param_2 = *(long *)(*(long *)(param_1 + 0x108) + -8);
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0;
    puStack_38 = puVar2;
    FUN_10a2e32b4(param_1 + 0x100,&puStack_38);
    if (puStack_38 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x108) + -8);
      param_2[1] = lVar3;
      lVar4 = *param_2;
      *(long *)(lVar4 + 0x10) = lVar3;
      lVar5 = param_2[2];
      *(long *)(lVar4 + 0x20) = lVar5;
      if ((lVar5 != 0) &&
         (((plVar6 = (long *)(lVar5 + 0x20), (long *)*plVar6 == param_2 ||
           (plVar6 = (long *)(lVar5 + 0x10), (long *)*plVar6 == param_2)) ||
          (plVar6 = (long *)(lVar5 + 0x18), (long *)*plVar6 == param_2)))) {
        *plVar6 = lVar4;
        lVar4 = *param_2;
        lVar3 = param_2[1];
      }
      *(long *)(lVar3 + 0x18) = lVar4;
      lVar4 = param_2[3];
      *(long *)(lVar3 + 0x20) = lVar4;
      if ((lVar4 != 0) &&
         (((plVar6 = (long *)(lVar4 + 0x20), (long *)*plVar6 == param_2 ||
           (plVar6 = (long *)(lVar4 + 0x10), (long *)*plVar6 == param_2)) ||
          (plVar6 = (long *)(lVar4 + 0x18), (long *)*plVar6 == param_2)))) {
        *plVar6 = lVar3;
      }
      if (plVar8 == (long *)0x0) {
        return;
      }
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puStack_38 = puVar2;
      FUN_10a2e32b4(param_1 + 0x100,&puStack_38);
      if (puStack_38 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
        *plVar8 = *(long *)(*(long *)(param_1 + 0x108) + -8);
        puVar2 = (undefined8 *)0x28;
        __Znwm();
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puStack_38 = puVar2;
        FUN_10a2e32b4(param_1 + 0x100,&puStack_38);
        if (puStack_38 != (undefined8 *)0x0) {
          __ZdlPv();
        }
        if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x108) + -8);
          plVar8[1] = lVar3;
          lVar5 = *param_2;
          *(long *)(lVar5 + 0x18) = lVar3;
          lVar4 = *plVar8;
          lVar7 = param_2[1];
          *(long *)(lVar7 + 0x10) = lVar4;
          *(long *)(lVar4 + 0x10) = lVar3;
          *(long *)(lVar4 + 0x18) = lVar7;
          lVar7 = plVar8[2];
          *(long *)(lVar4 + 0x20) = lVar7;
          if ((lVar7 != 0) &&
             (((plVar6 = (long *)(lVar7 + 0x20), (long *)*plVar6 == plVar8 ||
               (plVar6 = (long *)(lVar7 + 0x10), (long *)*plVar6 == plVar8)) ||
              (plVar6 = (long *)(lVar7 + 0x18), (long *)*plVar6 == plVar8)))) {
            *plVar6 = lVar4;
            lVar5 = *param_2;
            lVar4 = *plVar8;
            lVar3 = plVar8[1];
          }
          *(long *)(lVar3 + 0x10) = lVar5;
          *(long *)(lVar3 + 0x18) = lVar4;
          lVar4 = plVar8[3];
          *(long *)(lVar3 + 0x20) = lVar4;
          if (lVar4 == 0) {
            return;
          }
          plVar6 = (long *)(lVar4 + 0x20);
          if ((((long *)*plVar6 != plVar8) &&
              (plVar6 = (long *)(lVar4 + 0x10), (long *)*plVar6 != plVar8)) &&
             (plVar6 = (long *)(lVar4 + 0x18), (long *)*plVar6 != plVar8)) {
            return;
          }
          *plVar6 = lVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2df5e4);
  (*pcVar1)();
}



/* Entry: 10a2df608; end: 10a2df717;  */

void FUN_10a2df608(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  float *pfVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  float afStack_98 [2];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [4];
  long lStack_68;
  
  puVar2 = *(ulong **)(param_1 + 0xa0);
  uVar3 = (long)*(ulong **)(param_1 + 0xa8) - (long)puVar2;
  if (*(ulong **)(param_1 + 0xa8) != puVar2) {
    lVar7 = *(long *)(param_1 + 0x88);
    uVar12 = *(long *)(param_1 + 0x90) - lVar7 >> 3;
    if ((((*puVar2 < uVar12) && (8 < uVar3)) && (puVar2[1] < uVar12)) &&
       ((uVar3 != 0x10 && (puVar2[2] < uVar12)))) {
      FUN_10a2df718(param_1,*(undefined8 *)(param_1 + 0x118),lVar7 + *puVar2 * 8,
                    lVar7 + puVar2[1] * 8,lVar7 + puVar2[2] * 8,param_2,param_3,param_4);
      puVar2 = *(ulong **)(param_1 + 0xb8);
      uVar3 = (long)*(ulong **)(param_1 + 0xc0) - (long)puVar2;
      if (*(ulong **)(param_1 + 0xc0) != puVar2) {
        lVar7 = *(long *)(param_1 + 0x88);
        uVar12 = *(long *)(param_1 + 0x90) - lVar7 >> 3;
        if (((*puVar2 < uVar12) && (8 < uVar3)) &&
           ((puVar2[1] < uVar12 && ((uVar3 != 0x10 && (puVar2[2] < uVar12)))))) {
          plVar6 = *(long **)(param_1 + 0x120);
          pfVar10 = (float *)(lVar7 + puVar2[1] * 8);
          puVar1 = (undefined8 *)(lVar7 + *puVar2 * 8);
          pfVar11 = (float *)(lVar7 + puVar2[2] * 8);
          pfVar9 = (float *)&uStack_c0;
          lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar7 = *plVar6;
          if (lVar7 == 0) {
            FUN_10a2df994(*(undefined4 *)puVar1,*(undefined4 *)((long)puVar1 + 4),param_1,&fStack_b4
                          ,&fStack_90,auStack_a8);
            FUN_10a2df994(*pfVar10,pfVar10[1],param_1,&fStack_b0,afStack_84,auStack_a0);
            fVar13 = *pfVar11;
            pfVar4 = pfVar11 + 1;
            pfVar8 = &fStack_ac;
            pfVar10 = afStack_78;
            pfVar11 = afStack_98;
            lVar7 = param_1;
            FUN_10a2df994(fVar13,*pfVar4);
            fVar13 = *(float *)(param_1 + 0x7c);
            if (fVar13 < 3.4028235e+38) {
              fVar15 = ABS(fStack_b0 - fStack_ac);
              if (ABS(fStack_b0 - fStack_ac) <= ABS(fStack_b4 - fStack_b0)) {
                fVar15 = ABS(fStack_b4 - fStack_b0);
              }
              fVar16 = ABS(fStack_ac - fStack_b4);
              if (ABS(fStack_ac - fStack_b4) <= fVar15) {
                fVar16 = fVar15;
              }
              if (fVar13 <= fVar16) goto LAB_10a2df958;
            }
            FUN_10a0efe48(param_2,&fStack_90);
            FUN_10a0efe48(param_2,afStack_84);
            FUN_10a0efe48(param_2,afStack_78);
            FUN_10a1f2004(param_4,auStack_a8);
            FUN_10a1f2004(param_4,auStack_a0);
            FUN_10a1f2004(param_4,afStack_98);
            fVar16 = (float)afStack_78._4_8_ - fStack_8c;
            fVar13 = (float)afStack_84._4_8_ - fStack_8c;
            fVar15 = (SUB84(afStack_78._4_8_,4) - fStack_88) * -fVar13 +
                     (SUB84(afStack_84._4_8_,4) - fStack_88) * fVar16;
            fVar14 = (afStack_78[0] - fStack_90) * -(SUB84(afStack_84._4_8_,4) - fStack_88) +
                     (afStack_84[0] - fStack_90) * (SUB84(afStack_78._4_8_,4) - fStack_88);
            fStack_b8 = -(afStack_84[0] - fStack_90) * fVar16 + fVar13 * (afStack_78[0] - fStack_90)
            ;
            fVar16 = 1.0 / SQRT(fStack_b8 * fStack_b8 + fVar15 * fVar15 + fVar14 * fVar14);
            fStack_b8 = fStack_b8 * fVar16;
            uStack_c0 = CONCAT44(fVar14 * fVar16,fVar15 * fVar16);
            fVar13 = fStack_b8;
            FUN_10a0efe48(param_3,&uStack_c0);
            FUN_10a0efe48(param_3,&uStack_c0);
            FUN_10a0efe48();
            lVar7 = param_3;
            pfVar8 = pfVar9;
          }
          else {
            fVar16 = 0.5;
            fStack_90 = ((float)*puVar1 + (float)*(undefined8 *)pfVar10) * 0.5;
            fStack_8c = ((float)((ulong)*puVar1 >> 0x20) +
                        (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)) * 0.5;
            fVar13 = fStack_90;
            FUN_10a2df718(param_1,lVar7,pfVar11,puVar1,&fStack_90,param_2,param_3,param_4);
            pfVar8 = (float *)plVar6[1];
            FUN_10a2df718();
            lVar7 = param_1;
          }
LAB_10a2df958:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return;
          }
          ___stack_chk_fail();
          fVar15 = fVar13;
          FUN_10a2df00c();
          fVar14 = *(float *)(lVar7 + 0x6c);
          fVar14 = (fVar14 * *(float *)(lVar7 + 0x68)) /
                   (fVar14 - (fVar14 - *(float *)(lVar7 + 0x68)) * fVar15);
          *pfVar8 = fVar15;
          *(ulong *)pfVar10 =
               CONCAT44((-(fVar16 + -0.5) / (float)((ulong)*(undefined8 *)(lVar7 + 0x60) >> 0x20)) *
                        fVar14,((fVar13 + -0.5) / (float)*(undefined8 *)(lVar7 + 0x60)) * fVar14);
          pfVar10[2] = -fVar14;
          *pfVar11 = fVar13;
          pfVar11[1] = 1.0 - fVar16;
          return;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2df718);
  (*pcVar5)();
}



/* Entry: 10a2df718; end: 10a2df993;  */

void FUN_10a2df718(long param_1,long *param_2,undefined8 *param_3,float *param_4,float *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  float afStack_98 [2];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [4];
  long lStack_68;
  
  pfVar4 = (float *)&uStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    FUN_10a2df994(*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4),param_1,&fStack_b4,
                  &fStack_90,auStack_a8);
    FUN_10a2df994(*param_4,param_4[1],param_1,&fStack_b0,afStack_84,auStack_a0);
    fVar5 = *param_5;
    pfVar1 = param_5 + 1;
    pfVar3 = &fStack_ac;
    param_4 = afStack_78;
    param_5 = afStack_98;
    lVar2 = param_1;
    FUN_10a2df994(fVar5,*pfVar1);
    fVar5 = *(float *)(param_1 + 0x7c);
    if (fVar5 < 3.4028235e+38) {
      fVar7 = ABS(fStack_b0 - fStack_ac);
      if (ABS(fStack_b0 - fStack_ac) <= ABS(fStack_b4 - fStack_b0)) {
        fVar7 = ABS(fStack_b4 - fStack_b0);
      }
      fVar8 = ABS(fStack_ac - fStack_b4);
      if (ABS(fStack_ac - fStack_b4) <= fVar7) {
        fVar8 = fVar7;
      }
      if (fVar5 <= fVar8) goto LAB_10a2df958;
    }
    FUN_10a0efe48(param_6,&fStack_90);
    FUN_10a0efe48(param_6,afStack_84);
    FUN_10a0efe48(param_6,afStack_78);
    FUN_10a1f2004(param_8,auStack_a8);
    FUN_10a1f2004(param_8,auStack_a0);
    FUN_10a1f2004(param_8,afStack_98);
    fVar8 = (float)afStack_78._4_8_ - fStack_8c;
    fVar5 = (float)afStack_84._4_8_ - fStack_8c;
    fVar7 = (SUB84(afStack_78._4_8_,4) - fStack_88) * -fVar5 +
            (SUB84(afStack_84._4_8_,4) - fStack_88) * fVar8;
    fVar6 = (afStack_78[0] - fStack_90) * -(SUB84(afStack_84._4_8_,4) - fStack_88) +
            (afStack_84[0] - fStack_90) * (SUB84(afStack_78._4_8_,4) - fStack_88);
    fStack_b8 = -(afStack_84[0] - fStack_90) * fVar8 + fVar5 * (afStack_78[0] - fStack_90);
    fVar8 = 1.0 / SQRT(fStack_b8 * fStack_b8 + fVar7 * fVar7 + fVar6 * fVar6);
    fStack_b8 = fStack_b8 * fVar8;
    uStack_c0 = CONCAT44(fVar6 * fVar8,fVar7 * fVar8);
    fVar5 = fStack_b8;
    FUN_10a0efe48(param_7,&uStack_c0);
    FUN_10a0efe48(param_7,&uStack_c0);
    FUN_10a0efe48();
    lVar2 = param_7;
    pfVar3 = pfVar4;
  }
  else {
    fVar8 = 0.5;
    fStack_90 = ((float)*param_3 + (float)*(undefined8 *)param_4) * 0.5;
    fStack_8c = ((float)((ulong)*param_3 >> 0x20) + (float)((ulong)*(undefined8 *)param_4 >> 0x20))
                * 0.5;
    fVar5 = fStack_90;
    FUN_10a2df718(param_1,*param_2,param_5,param_3,&fStack_90,param_6,param_7,param_8);
    pfVar3 = (float *)param_2[1];
    FUN_10a2df718();
    lVar2 = param_1;
  }
LAB_10a2df958:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  fVar7 = fVar5;
  FUN_10a2df00c();
  fVar6 = *(float *)(lVar2 + 0x6c);
  fVar6 = (fVar6 * *(float *)(lVar2 + 0x68)) / (fVar6 - (fVar6 - *(float *)(lVar2 + 0x68)) * fVar7);
  *pfVar3 = fVar7;
  *(ulong *)param_4 =
       CONCAT44((-(fVar8 + -0.5) / (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20)) * fVar6,
                ((fVar5 + -0.5) / (float)*(undefined8 *)(lVar2 + 0x60)) * fVar6);
  param_4[2] = -fVar6;
  *param_5 = fVar5;
  param_5[1] = 1.0 - fVar8;
  return;
}



/* Entry: 10a2df994; end: 10a2dfa27;  */

void FUN_10a2df994(float param_1,float param_2,long param_3,float *param_4,undefined8 *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1;
  FUN_10a2df00c();
  fVar2 = *(float *)(param_3 + 0x6c);
  fVar2 = (fVar2 * *(float *)(param_3 + 0x68)) /
          (fVar2 - (fVar2 - *(float *)(param_3 + 0x68)) * fVar1);
  *param_4 = fVar1;
  *param_5 = CONCAT44((-(param_2 + -0.5) / (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20))
                      * fVar2,((param_1 + -0.5) / (float)*(undefined8 *)(param_3 + 0x60)) * fVar2);
  *(float *)(param_5 + 1) = -fVar2;
  *param_6 = param_1;
  param_6[1] = 1.0 - param_2;
  return;
}



/* Entry: 10a2dfa28; end: 10a2dfb23;  */

long FUN_10a2dfa28(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a2dfb24(param_1 + 0x100);
  FUN_10a2e33ac(param_1 + 0x100);
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a2dfb24; end: 10a2dfb6b;  */

void FUN_10a2dfb24(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    *plVar3 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = plVar1;
  return;
}



/* Entry: 10a2dfb6c; end: 10a2dfbcb;  */

undefined8 * FUN_10a2dfb6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a2dfbcc; end: 10a2dfbdf;  */

long FUN_10a2dfbcc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
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
  return param_1 + -0x10;
}



/* Entry: 10a2dfbe0; end: 10a2dfc13;  */

void FUN_10a2dfbe0(long param_1)

{
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10a2dfc14; end: 10a2dfc33;  */

long FUN_10a2dfc14(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2dfc34; end: 10a2dfc83;  */

long * FUN_10a2dfc34(long *param_1)

{
  long *plVar1;
  
  if ((*(ushort *)(param_1 + 0x30) >> 4 & 1) == 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x60))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)(ulong)((*(ushort *)(param_1[0x2d] + 0x118) & 0x12) == 0);
    }
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 10a2dfc84; end: 10a2dfcef;  */

void FUN_10a2dfc84(void)

{
  return;
}



/* Entry: 10a2dfcf0; end: 10a2dfd4b;  */

void FUN_10a2dfcf0(long *param_1)

{
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x40));
  if ((*(ushort *)(param_1 + 0x30) >> 4 & 1) == 0) {
    (**(code **)(*param_1 + 0x60))();
  }
  return;
}



/* Entry: 10a2dfd4c; end: 10a2dfd4f;  */

void FUN_10a2dfd4c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x70);
  FUN_10a2e894c(param_1 + 0x6d);
  if (param_1[0x6c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a271cc8(param_1 + 0x69);
  func_0x00010a216360(param_1 + 0x67);
  plVar1 = (long *)param_1[0x65];
  param_1[0x65] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a0536d4(param_1 + 0x5e);
  FUN_10a2e88b4(param_1 + 0x5c);
  func_0x00010a05248c(param_1 + 0x5a);
  func_0x00010a05248c(param_1 + 0x58);
  func_0x00010a05248c(param_1 + 0x56);
  func_0x00010a05248c(param_1 + 0x54);
  func_0x00010a05248c(param_1 + 0x52);
  if (param_1[0x4d] != 0) {
    param_1[0x4e] = param_1[0x4d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110bbf5b8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x72] = &PTR_DAT_110bbf6e8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a2dfd50; end: 10a2dfd63;  */

void FUN_10a2dfd50(void)

{
  func_0x00010a2e345c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dfd64; end: 10a2dfda3;  */

long FUN_10a2dfd64(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2dfda4; end: 10a2dfdbb;  */

void FUN_10a2dfda4(long param_1)

{
  func_0x00010a2e345c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dfdbc; end: 10a2dfdc3;  */

void FUN_10a2dfdbc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x69);
  FUN_10a2e894c(param_1 + 0x66);
  if (param_1[0x65] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a271cc8(param_1 + 0x62);
  func_0x00010a216360(param_1 + 0x60);
  plVar1 = (long *)param_1[0x5e];
  param_1[0x5e] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a0536d4(param_1 + 0x57);
  FUN_10a2e88b4(param_1 + 0x55);
  func_0x00010a05248c(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  func_0x00010a05248c(param_1 + 0x4f);
  func_0x00010a05248c(param_1 + 0x4d);
  func_0x00010a05248c(param_1 + 0x4b);
  if (param_1[0x46] != 0) {
    param_1[0x47] = param_1[0x46];
    __ZdlPv();
  }
  param_1[-7] = &PTR_FUN_110bbf5b8;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x6b] = &PTR_DAT_110bbf6e8;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xe];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xc];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[10];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[8];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a2dfdc4; end: 10a2dfddb;  */

void FUN_10a2dfdc4(long param_1)

{
  func_0x00010a2e345c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dfddc; end: 10a2dfde3;  */

void FUN_10a2dfddc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 99);
  FUN_10a2e894c(param_1 + 0x60);
  if (param_1[0x5f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a271cc8(param_1 + 0x5c);
  func_0x00010a216360(param_1 + 0x5a);
  plVar1 = (long *)param_1[0x58];
  param_1[0x58] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a0536d4(param_1 + 0x51);
  FUN_10a2e88b4(param_1 + 0x4f);
  func_0x00010a05248c(param_1 + 0x4d);
  func_0x00010a05248c(param_1 + 0x4b);
  func_0x00010a05248c(param_1 + 0x49);
  func_0x00010a05248c(param_1 + 0x47);
  func_0x00010a05248c(param_1 + 0x45);
  if (param_1[0x40] != 0) {
    param_1[0x41] = param_1[0x40];
    __ZdlPv();
  }
  param_1[-0xd] = &PTR_FUN_110bbf5b8;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x65] = &PTR_DAT_110bbf6e8;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[8];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[6];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[4];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[2];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a2dfde4; end: 10a2dfdfb;  */

void FUN_10a2dfde4(long param_1)

{
  func_0x00010a2e345c(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dfdfc; end: 10a2dfe17;  */

void FUN_10a2dfdfc(void)

{
  return;
}



/* Entry: 10a2dfe18; end: 10a2dfe2f;  */

void FUN_10a2dfe18(long param_1)

{
  func_0x00010a2e345c(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dfe30; end: 10a2dfe6b;  */

undefined8 FUN_10a2dfe30(void)

{
  return 0x14404b27a032c91e;
}



/* Entry: 10a2dfe6c; end: 10a2dfe83;  */

void FUN_10a2dfe6c(long param_1)

{
  func_0x00010a2e345c(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dfe84; end: 10a2dfe93;  */

void FUN_10a2dfe84(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  func_0x00010a004e5c(puVar1 + 0x70);
  FUN_10a2e894c(puVar1 + 0x6d);
  if (puVar1[0x6c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a271cc8(puVar1 + 0x69);
  func_0x00010a216360(puVar1 + 0x67);
  plVar2 = (long *)puVar1[0x65];
  puVar1[0x65] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0536d4(puVar1 + 0x5e);
  FUN_10a2e88b4(puVar1 + 0x5c);
  func_0x00010a05248c(puVar1 + 0x5a);
  func_0x00010a05248c(puVar1 + 0x58);
  func_0x00010a05248c(puVar1 + 0x56);
  func_0x00010a05248c(puVar1 + 0x54);
  func_0x00010a05248c(puVar1 + 0x52);
  if (puVar1[0x4d] != 0) {
    puVar1[0x4e] = puVar1[0x4d];
    __ZdlPv();
  }
  *puVar1 = &PTR_FUN_110bbf5b8;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x72] = &PTR_DAT_110bbf6e8;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar3 = puVar1[0x14];
  if (lVar3 != 0) {
    plVar2 = (long *)puVar1[0x15];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar3 = puVar1[0x12];
  if (lVar3 != 0) {
    plVar2 = (long *)puVar1[0x13];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar3 = puVar1[0x10];
  if (lVar3 != 0) {
    plVar2 = (long *)puVar1[0x11];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar3 = puVar1[0xe];
  if (lVar3 != 0) {
    plVar2 = (long *)puVar1[0xf];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a2dfe94; end: 10a2dfec3;  */

void FUN_10a2dfe94(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a2e345c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2dfec4; end: 10a2dff87;  */

long FUN_10a2dfec4(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2dff88; end: 10a2dffa3;  */

void FUN_10a2dff88(undefined8 param_1)

{
  FUN_10a420f70(param_1,&PTR_PTR_110bbca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dffa4; end: 10a2dffc3;  */

long FUN_10a2dffa4(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2dffc4; end: 10a2dffe3;  */

void FUN_10a2dffc4(long param_1)

{
  FUN_10a420f70(param_1 + -0x10,&PTR_PTR_110bbca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2dffe4; end: 10a2dfff3;  */

void FUN_10a2dffe4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bbf738;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0x98] = &PTR_DAT_110bbf998;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110bbca90);
  return;
}



/* Entry: 10a2dfff4; end: 10a2e0013;  */

void FUN_10a2dfff4(long param_1)

{
  FUN_10a420f70(param_1 + -0x38,&PTR_PTR_110bbca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0014; end: 10a2e0023;  */

void FUN_10a2e0014(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bbf738;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0x92] = &PTR_DAT_110bbf998;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110bbca90);
  return;
}



/* Entry: 10a2e0024; end: 10a2e0043;  */

void FUN_10a2e0024(long param_1)

{
  FUN_10a420f70(param_1 + -0x68,&PTR_PTR_110bbca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0044; end: 10a2e0053;  */

void FUN_10a2e0044(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bbf738;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0x89] = &PTR_DAT_110bbf998;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110bbca90);
  return;
}



/* Entry: 10a2e0054; end: 10a2e0073;  */

void FUN_10a2e0054(long param_1)

{
  FUN_10a420f70(param_1 + -0xb0,&PTR_PTR_110bbca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0074; end: 10a2e00b7;  */

undefined8 FUN_10a2e0074(void)

{
  return 0xbd1555114443a935;
}



/* Entry: 10a2e00b8; end: 10a2e00d7;  */

void FUN_10a2e00b8(long param_1)

{
  FUN_10a420f70(param_1 + -0xb8,&PTR_PTR_110bbca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e00d8; end: 10a2e00ef;  */

void FUN_10a2e00d8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bbf738;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0x9f] = &PTR_DAT_110bbf998;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110bbca90);
  return;
}



/* Entry: 10a2e00f0; end: 10a2e0203;  */

void FUN_10a2e00f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a420f70((long)param_1 + lVar1,&PTR_PTR_110bbca88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2e0204; end: 10a2e020b;  */

long FUN_10a2e0204(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2e020c; end: 10a2e049f;  */

void FUN_10a2e020c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbcc30;
  param_1[5] = &PTR_DAT_110bbcc88;
  param_1[0xb] = &PTR_DAT_110bbcca8;
  param_1[0x44] = &PTR_DAT_110bbcda8;
  param_1[0x14] = &PTR_FUN_110bbcd18;
  param_1[0x15] = &PTR_FUN_110bbcd48;
  puVar3 = param_1 + -2;
  *puVar3 = &PTR_DAT_110bbcb18;
  if (param_1[0x3f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar3 = &PTR_FUN_110bbfd60;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x44] = &PTR_DAT_110bbfe90;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a2e04a0; end: 10a2e04ab;  */

void FUN_10a2e04a0(void)

{
  return;
}



/* Entry: 10a2e04ac; end: 10a2e0587;  */

void FUN_10a2e04ac(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  param_1[-0x14] = &PTR_FUN_110bbcc30;
  param_1[-0xf] = &PTR_DAT_110bbcc88;
  param_1[-9] = &PTR_DAT_110bbcca8;
  param_1[0x30] = &PTR_DAT_110bbcda8;
  *param_1 = &PTR_FUN_110bbcd18;
  param_1[1] = &PTR_FUN_110bbcd48;
  puVar3 = param_1 + -0x16;
  *puVar3 = &PTR_DAT_110bbcb18;
  if (param_1[0x2b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar3 = &PTR_FUN_110bbfd60;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x30] = &PTR_DAT_110bbfe90;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar1 = param_1[-2];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar1 = param_1[-4];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar1 = param_1[-6];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar1 = param_1[-8];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a2e0588; end: 10a2e0597;  */

undefined8 FUN_10a2e0588(void)

{
  return 0;
}



/* Entry: 10a2e0598; end: 10a2e0803;  */

void FUN_10a2e0598(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  param_1[-0x15] = &PTR_FUN_110bbcc30;
  param_1[-0x10] = &PTR_DAT_110bbcc88;
  param_1[-10] = &PTR_DAT_110bbcca8;
  param_1[0x2f] = &PTR_DAT_110bbcda8;
  param_1[-1] = &PTR_FUN_110bbcd18;
  *param_1 = &PTR_FUN_110bbcd48;
  puVar3 = param_1 + -0x17;
  *puVar3 = &PTR_DAT_110bbcb18;
  if (param_1[0x2a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar3 = &PTR_FUN_110bbfd60;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x2f] = &PTR_DAT_110bbfe90;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a2e0804; end: 10a2e083b;  */

long FUN_10a2e0804(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2e083c; end: 10a2e0aeb;  */

void FUN_10a2e083c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a2ef9f4(param_1 + 0xa8,0);
  if (param_1[0xa7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a2ef690(param_1 + 0x43);
  func_0x00010a2ef32c(param_1 + 0x41);
  param_1[-2] = &PTR_FUN_110bbfef8;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0xa9] = &PTR_DAT_110bc0028;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a2e0aec; end: 10a2e0b1f;  */

undefined8 FUN_10a2e0aec(void)

{
  return 0xc257b61e5dea40f8;
}



/* Entry: 10a2e0b20; end: 10a2e0c7f;  */

void FUN_10a2e0b20(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a2ef9f4(param_1 + 0x93,0);
  if (param_1[0x92] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a2ef690(param_1 + 0x2e);
  func_0x00010a2ef32c(param_1 + 0x2c);
  param_1[-0x17] = &PTR_FUN_110bbfef8;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x94] = &PTR_DAT_110bc0028;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}


