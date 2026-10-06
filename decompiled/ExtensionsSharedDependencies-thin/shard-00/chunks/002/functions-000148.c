/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003a4dd8; end: 003a4e63;  */

void FUN_003a4dd8(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009df390)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009df440)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 003a4e64; end: 003a4e9b;  */

void FUN_003a4e64(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return;
}



/* Entry: 003a4e9c; end: 003a4ecf;  */

void FUN_003a4e9c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  (**(code **)param_3[1])();
  uVar2 = param_3[1];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}



/* Entry: 003a4ed0; end: 003a53ff;  */

/* WARNING: Removing unreachable block (ram,0x003a5158) */
/* WARNING: Removing unreachable block (ram,0x003a500c) */

void FUN_003a4ed0(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_1a0 [32];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *param_2;
  if (lVar13 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar4 = *param_3;
  uVar5 = param_3[1];
  puVar1 = (undefined8 *)(lVar13 + 0x10);
  bVar6 = *(byte *)(lVar13 + 0x27);
  uVar14 = (ulong)bVar6;
  puVar10 = puVar1;
  uVar15 = uVar14;
  if ((char)bVar6 < '\0') {
    puVar10 = *(undefined8 **)(lVar13 + 0x10);
    uVar15 = *(ulong *)(lVar13 + 0x18);
  }
  uVar3 = uVar15;
  if (uVar5 <= uVar15) {
    uVar3 = uVar5;
  }
  uVar9 = uVar4;
  _memcmp(uVar4,puVar10,uVar3);
  if ((int)uVar9 == 0) {
    if (uVar5 < uVar15) goto LAB_003a4f48;
  }
  else if ((int)uVar9 < 0) {
LAB_003a4f48:
    if ((char)bVar6 < '\0') {
      FUN_002971d4(&uStack_80,*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18));
      lVar13 = *param_2;
    }
    else {
      uStack_78 = *(undefined8 *)(lVar13 + 0x18);
      uStack_80 = *puVar1;
      uStack_70 = *(undefined8 *)(lVar13 + 0x20);
    }
    FUN_003a4d94(auStack_a0,lVar13 + 0x28);
    FUN_003a4ed0(&lStack_b0,*param_2 + 0x48,param_3);
    FUN_003a3ebc(param_1,&uStack_80,auStack_a0,&lStack_b0,*param_2 + 0x58);
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
      do {
        lVar13 = *plVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
      }
    }
    FUN_00382478(auStack_a0);
    return;
  }
  puVar10 = puVar1;
  if ((char)bVar6 < '\0') {
    uVar14 = *(ulong *)(lVar13 + 0x18);
    puVar10 = *(undefined8 **)(lVar13 + 0x10);
  }
  uVar15 = uVar5;
  if (uVar14 <= uVar5) {
    uVar15 = uVar14;
  }
  _memcmp(puVar10,uVar4,uVar15);
  if ((int)puVar10 == 0) {
    if (uVar5 <= uVar14) goto LAB_003a5050;
  }
  else if (-1 < (int)puVar10) {
LAB_003a5050:
    lVar11 = *(long *)(lVar13 + 0x48);
    lVar12 = *(long *)(lVar13 + 0x58);
    if (lVar11 == 0) {
      *param_1 = lVar12;
      lVar13 = *(long *)(lVar13 + 0x60);
      param_1[1] = lVar13;
      if (lVar13 == 0) {
        return;
      }
      plVar2 = (long *)(lVar13 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = *plVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      return;
    }
    if (lVar12 != 0) {
      if (*(long *)(lVar11 + 0x68) < *(long *)(lVar12 + 0x68)) {
        lStack_f8 = *(long *)(lVar13 + 0x60);
        if (lStack_f8 != 0) {
          plVar2 = (long *)(lStack_f8 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lStack_100 = lVar12;
        FUN_003a5400(&lStack_b0,&lStack_100);
        FUN_0033d180(&lStack_100);
        if (*(char *)(lStack_b0 + 0x27) < '\0') {
          FUN_002971d4(&uStack_120,*(undefined8 *)(lStack_b0 + 0x10),
                       *(undefined8 *)(lStack_b0 + 0x18));
        }
        else {
          uStack_118 = *(undefined8 *)(lStack_b0 + 0x18);
          uStack_120 = *(undefined8 *)(lStack_b0 + 0x10);
          lStack_110 = *(long *)(lStack_b0 + 0x20);
        }
        FUN_003a4d94(auStack_140,lStack_b0 + 0x28);
        lVar13 = *param_2;
        FUN_003a544c(auStack_150,lVar13 + 0x58,lStack_b0 + 0x10);
        FUN_003a3ebc(param_1,&uStack_120,auStack_140,lVar13 + 0x48,auStack_150);
        FUN_0033d180(auStack_150);
        FUN_00382478(auStack_140);
        uVar4 = uStack_120;
        lVar13 = lStack_110;
      }
      else {
        lStack_158 = *(long *)(lVar13 + 0x50);
        if (lStack_158 != 0) {
          plVar2 = (long *)(lStack_158 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lStack_160 = lVar11;
        FUN_003a59c4(&lStack_b0,&lStack_160);
        FUN_0033d180(&lStack_160);
        if (*(char *)(lStack_b0 + 0x27) < '\0') {
          FUN_002971d4(&uStack_180,*(undefined8 *)(lStack_b0 + 0x10),
                       *(undefined8 *)(lStack_b0 + 0x18));
        }
        else {
          uStack_178 = *(undefined8 *)(lStack_b0 + 0x18);
          uStack_180 = *(undefined8 *)(lStack_b0 + 0x10);
          lStack_170 = *(long *)(lStack_b0 + 0x20);
        }
        FUN_003a4d94(auStack_1a0,lStack_b0 + 0x28);
        FUN_003a544c(auStack_150,*param_2 + 0x48,lStack_b0 + 0x10);
        FUN_003a3ebc(param_1,&uStack_180,auStack_1a0,auStack_150,*param_2 + 0x58);
        FUN_0033d180(auStack_150);
        FUN_00382478(auStack_1a0);
        uVar4 = uStack_180;
        lVar13 = lStack_170;
      }
      if (lVar13 < 0) {
        __ZdlPv(uVar4);
      }
      FUN_0033d180(&lStack_b0);
      return;
    }
    *param_1 = lVar11;
    lVar13 = *(long *)(lVar13 + 0x50);
    param_1[1] = lVar13;
    if (lVar13 == 0) {
      return;
    }
    plVar2 = (long *)(lVar13 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    return;
  }
  if ((char)bVar6 < '\0') {
    FUN_002971d4(&uStack_d0,*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18));
    lVar13 = *param_2;
  }
  else {
    uStack_c8 = *(undefined8 *)(lVar13 + 0x18);
    uStack_d0 = *puVar1;
    uStack_c0 = *(undefined8 *)(lVar13 + 0x20);
  }
  FUN_003a4d94(auStack_f0,lVar13 + 0x28);
  lVar13 = *param_2;
  FUN_003a4ed0(&lStack_b0,lVar13 + 0x58,param_3);
  FUN_003a3ebc(param_1,&uStack_d0,auStack_f0,lVar13 + 0x48,&lStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar13 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  FUN_00382478(auStack_f0);
  return;
}



/* Entry: 003a5400; end: 003a544b;  */

void FUN_003a5400(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  while (*(long *)(lVar1 + 0x48) != 0) {
    func_0x003a5a10(param_2);
    lVar1 = *param_2;
  }
  lVar2 = param_2[1];
  *param_1 = lVar1;
  param_1[1] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 003a544c; end: 003a59c3;  */

/* WARNING: Removing unreachable block (ram,0x003a5670) */
/* WARNING: Removing unreachable block (ram,0x003a5710) */
/* WARNING: Removing unreachable block (ram,0x003a5714) */

void FUN_003a544c(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auStack_1a0 [32];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar16 = *param_2;
  if (lVar16 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar17 = (undefined8 *)(lVar16 + 0x10);
    puVar14 = (undefined8 *)*puVar17;
    bVar4 = *(byte *)(lVar16 + 0x27);
    uVar15 = *(ulong *)(lVar16 + 0x18);
    puVar2 = (undefined8 *)*param_3;
    uVar7 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar2 = param_3;
      uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    puVar11 = puVar14;
    uVar8 = uVar15;
    if (-1 < (char)bVar4) {
      puVar11 = puVar17;
      uVar8 = (ulong)bVar4;
    }
    uVar3 = uVar8;
    if (uVar7 <= uVar8) {
      uVar3 = uVar7;
    }
    puVar10 = puVar2;
    _memcmp(puVar2,puVar11,uVar3);
    bVar6 = uVar7 < uVar8;
    if ((int)puVar10 != 0) {
      bVar6 = (int)puVar10 < 0;
    }
    if (bVar6) {
      if ((char)bVar4 < '\0') {
        FUN_002971d4(&uStack_80,puVar14,uVar15);
        lVar16 = *param_2;
      }
      else {
        uStack_78 = *(undefined8 *)(lVar16 + 0x18);
        uStack_80 = *puVar17;
        uStack_70 = *(undefined8 *)(lVar16 + 0x20);
      }
      FUN_003a4d94(auStack_a0,lVar16 + 0x28);
      FUN_003a544c(&lStack_b0,*param_2 + 0x48,param_3);
      FUN_003a3ebc(param_1,&uStack_80,auStack_a0,&lStack_b0,*param_2 + 0x58);
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
        }
      }
      FUN_00382478(auStack_a0);
    }
    else {
      _memcmp(puVar11,puVar2,uVar3);
      bVar6 = uVar8 < uVar7;
      if ((int)puVar11 != 0) {
        bVar6 = (int)puVar11 < 0;
      }
      if (bVar6) {
        if ((char)bVar4 < '\0') {
          FUN_002971d4(&uStack_d0,puVar14,uVar15);
          lVar16 = *param_2;
        }
        else {
          uStack_c8 = *(undefined8 *)(lVar16 + 0x18);
          uStack_d0 = *puVar17;
          uStack_c0 = *(undefined8 *)(lVar16 + 0x20);
        }
        FUN_003a4d94(auStack_f0,lVar16 + 0x28);
        lVar16 = *param_2;
        FUN_003a544c(&lStack_b0,lVar16 + 0x58,param_3);
        FUN_003a3ebc(param_1,&uStack_d0,auStack_f0,lVar16 + 0x48,&lStack_b0);
        if (plStack_a8 != (long *)0x0) {
          plVar1 = plStack_a8 + 1;
          do {
            lVar16 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
          }
        }
        FUN_00382478(auStack_f0);
      }
      else {
        lVar12 = *(long *)(lVar16 + 0x48);
        lVar13 = *(long *)(lVar16 + 0x58);
        if (lVar12 == 0) {
          *param_1 = lVar13;
          lVar16 = *(long *)(lVar16 + 0x60);
          param_1[1] = lVar16;
          if (lVar16 != 0) {
            plVar1 = (long *)(lVar16 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else if (lVar13 == 0) {
          *param_1 = lVar12;
          lVar16 = *(long *)(lVar16 + 0x50);
          param_1[1] = lVar16;
          if (lVar16 != 0) {
            plVar1 = (long *)(lVar16 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
          if (*(long *)(lVar12 + 0x68) < *(long *)(lVar13 + 0x68)) {
            lStack_f8 = *(long *)(lVar16 + 0x60);
            if (lStack_f8 != 0) {
              plVar1 = (long *)(lStack_f8 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lStack_100 = lVar13;
            FUN_003a5400(&lStack_b0,&lStack_100);
            FUN_0033d180(&lStack_100);
            if (*(char *)(lStack_b0 + 0x27) < '\0') {
              FUN_002971d4(&uStack_120,*(undefined8 *)(lStack_b0 + 0x10),
                           *(undefined8 *)(lStack_b0 + 0x18));
            }
            else {
              uStack_118 = *(undefined8 *)(lStack_b0 + 0x18);
              uStack_120 = *(undefined8 *)(lStack_b0 + 0x10);
              lStack_110 = *(long *)(lStack_b0 + 0x20);
            }
            FUN_003a4d94(auStack_140,lStack_b0 + 0x28);
            lVar16 = *param_2;
            FUN_003a544c(auStack_150,lVar16 + 0x58,lStack_b0 + 0x10);
            FUN_003a3ebc(param_1,&uStack_120,auStack_140,lVar16 + 0x48,auStack_150);
            FUN_0033d180(auStack_150);
            FUN_00382478(auStack_140);
            uVar9 = uStack_120;
            lVar16 = lStack_110;
          }
          else {
            lStack_158 = *(long *)(lVar16 + 0x50);
            if (lStack_158 != 0) {
              plVar1 = (long *)(lStack_158 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lStack_160 = lVar12;
            FUN_003a59c4(&lStack_b0,&lStack_160);
            FUN_0033d180(&lStack_160);
            if (*(char *)(lStack_b0 + 0x27) < '\0') {
              FUN_002971d4(&uStack_180,*(undefined8 *)(lStack_b0 + 0x10),
                           *(undefined8 *)(lStack_b0 + 0x18));
            }
            else {
              uStack_178 = *(undefined8 *)(lStack_b0 + 0x18);
              uStack_180 = *(undefined8 *)(lStack_b0 + 0x10);
              lStack_170 = *(long *)(lStack_b0 + 0x20);
            }
            FUN_003a4d94(auStack_1a0,lStack_b0 + 0x28);
            FUN_003a544c(auStack_150,*param_2 + 0x48,lStack_b0 + 0x10);
            FUN_003a3ebc(param_1,&uStack_180,auStack_1a0,auStack_150,*param_2 + 0x58);
            FUN_0033d180(auStack_150);
            FUN_00382478(auStack_1a0);
            uVar9 = uStack_180;
            lVar16 = lStack_170;
          }
          if (lVar16 < 0) {
            __ZdlPv(uVar9);
          }
          FUN_0033d180(&lStack_b0);
        }
      }
    }
  }
  return;
}



/* Entry: 003a59c4; end: 003a5a87;  */

void FUN_003a59c4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  while (*(long *)(lVar1 + 0x58) != 0) {
    func_0x003a5a10(param_2);
    lVar1 = *param_2;
  }
  lVar2 = param_2[1];
  *param_1 = lVar1;
  param_1[1] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 003a5a88; end: 003a5d63;  */

void FUN_003a5a88(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x21;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 **ppuStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1 != 0) {
    FUN_003a5a88(*(undefined8 *)(param_1 + 0x48));
    ppuStack_120 = (undefined8 ***)0x0;
    uStack_118 = 0;
    uStack_110 = 0;
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 2) {
      pcStack_a8 = *(char **)(param_1 + 0x28);
      uStack_a0 = 0x5604e0;
      FUN_0056189c(&ppuStack_78,"%p",2,&pcStack_a8,1);
LAB_003a5b30:
      if ((long)uStack_110 < 0) {
        __ZdlPv(ppuStack_120);
      }
      uStack_118 = uStack_70;
      ppuStack_120 = ppuStack_78;
      uStack_110 = uStack_68;
    }
    else if (iVar2 == 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppuStack_120);
    }
    else if (iVar2 == 0) {
      __ZNSt3__19to_stringEi(&ppuStack_78,*(undefined4 *)(param_1 + 0x28));
      goto LAB_003a5b30;
    }
    unaff_x21 = (long *)*param_2;
    uStack_70 = *(ulong *)(param_1 + 0x18);
    ppuStack_78 = *(undefined8 ****)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x27)) {
      uStack_70 = (ulong)*(byte *)(param_1 + 0x27);
      ppuStack_78 = (undefined8 ***)(param_1 + 0x10);
    }
    pcStack_a8 = "=";
    uStack_a0 = 1;
    uStack_d0 = uStack_118;
    ppuStack_d8 = ppuStack_120;
    if (-1 < (long)uStack_110) {
      uStack_d0 = uStack_110 >> 0x38;
      ppuStack_d8 = &ppuStack_120;
    }
    FUN_00575ddc(&uStack_138,&ppuStack_78,&pcStack_a8,&ppuStack_d8);
    puVar4 = (ulong *)(unaff_x21 + 2);
    puVar6 = (ulong *)unaff_x21[1];
    if (puVar6 < (ulong *)*puVar4) {
      puVar6[2] = uStack_128;
      puVar6[1] = uStack_130;
      *puVar6 = uStack_138;
      unaff_x21[1] = (long)(puVar6 + 3);
    }
    else {
      lVar7 = (long)puVar6 - *unaff_x21 >> 3;
      uVar1 = lVar7 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_003a5d00;
      lVar5 = (long)*puVar4 - *unaff_x21 >> 3;
      uVar8 = lVar5 * 0x5555555555555556;
      if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
        uVar8 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      puStack_e0 = puVar4;
      if (uVar8 == 0) {
        puStack_100 = (ulong *)0x0;
      }
      else {
        FUN_0037b57c();
        puStack_100 = puVar4;
      }
      puStack_f8 = puStack_100 + lVar7;
      puStack_e8 = puStack_100 + uVar8 * 3;
      puStack_f8[2] = uStack_128;
      puStack_f8[1] = uStack_130;
      *puStack_f8 = uStack_138;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_138 = 0;
      puStack_f0 = puStack_f8 + 3;
      FUN_0045a5fc(unaff_x21,&puStack_100);
      lVar7 = unaff_x21[1];
      func_0x00427834(&puStack_100);
      unaff_x21[1] = lVar7;
      if ((long)uStack_128 < 0) {
        __ZdlPv(uStack_138);
      }
    }
    if ((long)uStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    FUN_003a5a88(*(undefined8 *)(param_1 + 0x58),param_2);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_003a5d00:
  FUN_0037b568(unaff_x21);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x3a5d0c);
  (*pcVar3)();
}



/* Entry: 003a5d64; end: 003a5db3;  */

void FUN_003a5d64(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_003a5d64(param_1,*param_2);
    FUN_003a5d64(param_1,param_2[1]);
    if (param_2[6] != 0) {
      param_2[7] = param_2[6];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003a5db4; end: 003a5e3f;  */

undefined1  [16] FUN_003a5db4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_003a5e40(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x48;
    __Znwm();
    uVar4 = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar3 + 0x28) = ((undefined8 *)*param_4)[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    FUN_003a5edc(param_1,uStack_38,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 003a5e40; end: 003a5edb;  */

long * FUN_003a5e40(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        func_0x0034082c(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_003a5ec0;
      }
      lVar2 = param_1;
      func_0x0034082c(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_003a5ec0:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 003a5edc; end: 003a5f2f;  */

void FUN_003a5edc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003a5f30; end: 003a5f33;  */

long * FUN_003a5f30(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long *extraout_x8;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar1 = (ulong *)(param_1 + 2);
  uVar5 = param_1[1];
  if (uVar5 < *puVar1) {
    FUN_003a6198(uVar5,param_2);
    lVar6 = uVar5 + 0x20;
    param_1[1] = lVar6;
  }
  else {
    lVar6 = (long)(uVar5 - *param_1) >> 5;
    uVar5 = lVar6 + 1;
    if (uVar5 >> 0x3b != 0) {
      FUN_003a6270();
      func_0x003a63f0(&puStack_58);
      __Unwind_Resume();
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      plVar2 = extraout_x8;
      FUN_003a648c(extraout_x8);
      lVar6 = *param_1;
      extraout_x8[1] = param_1[1];
      *extraout_x8 = lVar6;
      extraout_x8[2] = param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      return plVar2;
    }
    uVar3 = *puVar1 - *param_1;
    uVar4 = (long)uVar3 >> 4;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (0x7fffffffffffffdf < uVar3) {
      uVar4 = 0x7ffffffffffffff;
    }
    puStack_38 = puVar1;
    if (uVar4 == 0) {
      puStack_58 = (ulong *)0x0;
    }
    else {
      FUN_003a6284();
      puStack_58 = puVar1;
    }
    puVar1 = puStack_58 + lVar6 * 4;
    puStack_40 = puStack_58 + uVar4 * 4;
    puStack_50 = puVar1;
    FUN_003a6198(puVar1,param_2);
    puStack_48 = puVar1 + 4;
    FUN_003a61fc(param_1,&puStack_58);
    lVar6 = param_1[1];
    func_0x003a63f0(&puStack_58);
  }
  param_1[1] = lVar6;
  return (long *)(lVar6 + -0x20);
}



/* Entry: 003a5f34; end: 003a6037;  */

long * FUN_003a5f34(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long *extraout_x8;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar1 = (ulong *)(param_1 + 2);
  uVar5 = param_1[1];
  if (uVar5 < *puVar1) {
    FUN_003a6198(uVar5,param_2);
    lVar6 = uVar5 + 0x20;
    param_1[1] = lVar6;
  }
  else {
    lVar6 = (long)(uVar5 - *param_1) >> 5;
    uVar5 = lVar6 + 1;
    if (uVar5 >> 0x3b != 0) {
      FUN_003a6270();
      func_0x003a63f0(&puStack_58);
      __Unwind_Resume();
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      plVar2 = extraout_x8;
      FUN_003a648c(extraout_x8);
      lVar6 = *param_1;
      extraout_x8[1] = param_1[1];
      *extraout_x8 = lVar6;
      extraout_x8[2] = param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      return plVar2;
    }
    uVar3 = *puVar1 - *param_1;
    uVar4 = (long)uVar3 >> 4;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (0x7fffffffffffffdf < uVar3) {
      uVar4 = 0x7ffffffffffffff;
    }
    puStack_38 = puVar1;
    if (uVar4 == 0) {
      puStack_58 = (ulong *)0x0;
    }
    else {
      FUN_003a6284();
      puStack_58 = puVar1;
    }
    puVar1 = puStack_58 + lVar6 * 4;
    puStack_40 = puStack_58 + uVar4 * 4;
    puStack_50 = puVar1;
    FUN_003a6198(puVar1,param_2);
    puStack_48 = puVar1 + 4;
    FUN_003a61fc(param_1,&puStack_58);
    lVar6 = param_1[1];
    func_0x003a63f0(&puStack_58);
  }
  param_1[1] = lVar6;
  return (long *)(lVar6 + -0x20);
}



/* Entry: 003a6038; end: 003a607f;  */

void FUN_003a6038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_003a648c(param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 003a6080; end: 003a6197;  */

void FUN_003a6080(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_003a2f7c(param_3);
  lVar8 = *param_2;
  lVar2 = param_2[1];
  while( true ) {
    if (lVar8 == lVar2) {
      return;
    }
    plStack_48 = (long *)param_1[1];
    uStack_50 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar6 = *(long **)(lVar8 + 0x18);
    if (plVar6 == (long *)0x0) break;
    (**(code **)(*plVar6 + 0x30))(auStack_40,plVar6,&uStack_50);
    FUN_003a347c(param_1,auStack_40);
    plVar6 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    lVar8 = lVar8 + 0x20;
  }
  FUN_0033e390();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3a6178);
  (*pcVar5)();
}



/* Entry: 003a6198; end: 003a61fb;  */

long FUN_003a6198(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 003a61fc; end: 003a626f;  */

void FUN_003a61fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_003a62b8(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003a6270; end: 003a6283;  */

undefined1  [16]
FUN_003a6270(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  char *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3b == 0) {
    lVar2 = param_2 << 5;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  FUN_00349558();
  puStack_98 = &uStack_80;
  puStack_90 = &uStack_70;
  uStack_88 = 0;
  pcStack_a0 = pcVar1;
  uStack_80 = param_6;
  lStack_78 = param_7;
  while (uStack_70 = param_6, lStack_68 = param_7, param_3 != param_5) {
    param_3 = param_3 + -0x20;
    FUN_003a6198(param_7 + -0x20,param_3);
    param_7 = lStack_68 + -0x20;
    param_6 = uStack_70;
  }
  uStack_88 = 1;
  FUN_003a635c(&pcStack_a0);
  auVar4._8_8_ = param_7;
  auVar4._0_8_ = param_6;
  return auVar4;
}



/* Entry: 003a6284; end: 003a62b7;  */

undefined1  [16]
FUN_003a6284(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_00349558();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  uStack_78 = 0;
  uStack_90 = param_1;
  uStack_70 = param_6;
  lStack_68 = param_7;
  while (uStack_60 = param_6, lStack_58 = param_7, param_3 != param_5) {
    param_3 = param_3 + -0x20;
    FUN_003a6198(param_7 + -0x20,param_3);
    param_7 = lStack_58 + -0x20;
    param_6 = uStack_60;
  }
  uStack_78 = 1;
  FUN_003a635c(&uStack_90);
  auVar3._8_8_ = param_7;
  auVar3._0_8_ = param_6;
  return auVar3;
}



/* Entry: 003a62b8; end: 003a635b;  */

undefined1  [16]
FUN_003a62b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    param_3 = param_3 + -0x20;
    FUN_003a6198(param_7 + -0x20,param_3);
    param_7 = lStack_38 + -0x20;
    param_6 = uStack_40;
  }
  uStack_58 = 1;
  FUN_003a635c(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 003a635c; end: 003a638f;  */

long FUN_003a635c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_003a6390(param_1);
  }
  return param_1;
}



/* Entry: 003a6390; end: 003a648b;  */

void FUN_003a6390(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 8);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar1 = (long *)plVar3[3];
    if (plVar3 == plVar1) {
      lVar2 = 4;
      plVar1 = plVar3;
LAB_003a63d0:
      (**(code **)(*plVar1 + lVar2 * 8))();
    }
    else if (plVar1 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_003a63d0;
    }
    plVar3 = plVar3 + 4;
  } while( true );
}



/* Entry: 003a648c; end: 003a6517;  */

void FUN_003a648c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4;
    plVar2 = (long *)param_1[1];
    if ((long *)param_1[1] != plVar4) {
      do {
        plVar5 = plVar2 + -4;
        plVar1 = (long *)plVar2[-1];
        if (plVar5 == plVar1) {
          lVar3 = 4;
          plVar1 = plVar5;
LAB_003a64dc:
          (**(code **)(*plVar1 + lVar3 * 8))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_003a64dc;
        }
        plVar2 = plVar5;
      } while (plVar5 != plVar4);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar4;
    __ZdlPv(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 003a6518; end: 003a6573;  */

long FUN_003a6518(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (ulong)(uint)((int)param_2 << 4) + 0x60;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = ((ulong)(*(int *)(*param_1 + 0x38) + 0xf) & 0xfffffff0) + lVar1;
    param_1 = param_1 + 1;
  }
  return lVar1;
}



/* Entry: 003a6574; end: 003a6783;  */

void FUN_003a6574(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  uint uStack_64;
  
  *(undefined8 *)(param_9 + 0x40) = &PTR_DAT_009df478;
  *(undefined8 **)(param_9 + 0x58) = (undefined8 *)(param_9 + 0x40);
  lVar12 = ((ulong)((int)param_6 * 0x18 + 0xf) & 0xfffffff0) + 0x30;
  *(long *)(param_9 + 0x30) = param_6;
  FUN_00400698(param_9,param_2,param_3,param_4);
  uVar10 = (ulong)(uint)((int)param_6 << 4);
  uVar13 = param_9 + 0x60 + uVar10;
  *param_1 = 0;
  if (param_6 == 0) {
    lVar14 = uVar13 - param_9;
    if (uVar13 < param_9 || lVar14 == 0) goto LAB_003a6728;
    lVar8 = 0x60;
    lVar12 = 0x30;
  }
  else {
    uVar11 = 0;
    lVar14 = 0;
    do {
      uStack_68 = (uint)(lVar14 == 0);
      uStack_64 = (uint)(lVar14 == param_6 + -1);
      lVar8 = param_5[lVar14];
      plVar1 = (long *)(param_9 + 0x60 + lVar14 * 0x10);
      *plVar1 = lVar8;
      plVar1[1] = uVar13;
      uStack_78 = param_9;
      uStack_70 = param_7;
      (**(code **)(lVar8 + 0x40))(&uStack_80,plVar1,&uStack_78);
      if ((uStack_80 != 0) && (uVar11 == 0)) {
        if ((uStack_80 & 1) != 0) {
          piVar9 = (int *)(uStack_80 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar5) {
              *piVar9 = *piVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *param_1 = uStack_80;
        uVar11 = uStack_80;
      }
      iVar2 = *(int *)(param_5[lVar14] + 0x38);
      iVar3 = *(int *)(param_5[lVar14] + 0x18);
      if ((uStack_80 & 1) != 0) {
        FUN_0055293c();
      }
      uVar13 = uVar13 + ((ulong)(iVar2 + 0xf) & 0xfffffff0);
      lVar12 = ((ulong)(iVar3 + 0xf) & 0xfffffff0) + lVar12;
      lVar14 = lVar14 + 1;
    } while (lVar14 != param_6);
    lVar14 = uVar13 - param_9;
    if (uVar13 < param_9 || lVar14 == 0) {
LAB_003a6728:
      uVar7 = 0x9e;
      goto LAB_003a6744;
    }
    lVar8 = uVar10 + 0x60;
    do {
      lVar8 = ((ulong)(*(int *)(*param_5 + 0x38) + 0xf) & 0xfffffff0) + lVar8;
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
    } while (param_6 != 0);
  }
  if (lVar14 == lVar8) {
    *(long *)(param_9 + 0x38) = lVar12;
    return;
  }
  uVar7 = 0xa0;
LAB_003a6744:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_stack.cc"
               ,uVar7,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3a6768);
  (*pcVar6)();
}



/* Entry: 003a6784; end: 003a6823;  */

void FUN_003a6784(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *in_x4;
  ulong *extraout_x8;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_88;
  
  lVar9 = *(long *)(param_1 + 0x30);
  if (lVar9 != 0) {
    plVar4 = (long *)(param_1 + 0x60);
    do {
      (**(code **)(*plVar4 + 0x50))(plVar4);
      lVar9 = lVar9 + -1;
      plVar4 = plVar4 + 2;
    } while (lVar9 != 0);
  }
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x40);
    (**(code **)(*plVar4 + 0x30))();
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == plVar5) {
      lVar9 = 4;
    }
    else {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar9 = 5;
      plVar5 = plVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x003a680c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + lVar9 * 8))();
    return;
  }
  FUN_0033e390();
  lVar10 = plVar4[6];
  *(long *)(*in_x4 + 0x28) = lVar10;
  FUN_00400698();
  lVar9 = *in_x4;
  *extraout_x8 = 0;
  if (lVar10 != 0) {
    lVar6 = 0;
    lVar1 = lVar9 + 0x30;
    lVar8 = lVar1 + ((ulong)((int)lVar10 * 0x18 + 0xf) & 0xfffffff0);
    plVar5 = (long *)(lVar9 + 0x40);
    do {
      lVar9 = plVar4[lVar6 * 2 + 0xc];
      plVar5[-1] = (plVar4 + lVar6 * 2 + 0xc)[1];
      plVar5[-2] = lVar9;
      *plVar5 = lVar8;
      lVar8 = lVar8 + ((ulong)(*(int *)(lVar9 + 0x18) + 0xf) & 0xfffffff0);
      lVar6 = lVar6 + 1;
      plVar5 = plVar5 + 3;
    } while (lVar10 != lVar6);
    uVar11 = 0;
    lVar9 = 0;
    do {
      plVar4 = (long *)(lVar1 + lVar9 * 0x18);
      (**(code **)(*plVar4 + 0x20))(&uStack_88,plVar4,in_x4);
      if (uStack_88 != 0 && uVar11 == 0) {
        if ((uStack_88 & 1) != 0) {
          piVar7 = (int *)(uStack_88 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *extraout_x8 = uStack_88;
        uVar11 = uStack_88;
      }
      if ((uStack_88 & 1) != 0) {
        FUN_0055293c();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar10);
  }
  return;
}



/* Entry: 003a6824; end: 003a6957;  */

void FUN_003a6824(ulong *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *in_x4;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_58;
  
  lVar10 = *(long *)(param_2 + 0x30);
  *(long *)(*in_x4 + 0x28) = lVar10;
  FUN_00400698();
  lVar9 = *in_x4;
  *param_1 = 0;
  if (lVar10 != 0) {
    lVar6 = 0;
    lVar1 = lVar9 + 0x30;
    lVar8 = lVar1 + ((ulong)((int)lVar10 * 0x18 + 0xf) & 0xfffffff0);
    plVar5 = (long *)(lVar9 + 0x40);
    do {
      plVar4 = (long *)(param_2 + 0x60 + lVar6 * 0x10);
      lVar9 = *plVar4;
      plVar5[-1] = plVar4[1];
      plVar5[-2] = lVar9;
      *plVar5 = lVar8;
      lVar8 = lVar8 + ((ulong)(*(int *)(lVar9 + 0x18) + 0xf) & 0xfffffff0);
      lVar6 = lVar6 + 1;
      plVar5 = plVar5 + 3;
    } while (lVar10 != lVar6);
    uVar11 = 0;
    lVar9 = 0;
    do {
      plVar5 = (long *)(lVar1 + lVar9 * 0x18);
      (**(code **)(*plVar5 + 0x20))(&uStack_58,plVar5,in_x4);
      if (uStack_58 != 0 && uVar11 == 0) {
        if ((uStack_58 & 1) != 0) {
          piVar7 = (int *)(uStack_58 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *param_1 = uStack_58;
        uVar11 = uStack_58;
      }
      if ((uStack_58 & 1) != 0) {
        FUN_0055293c();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar10);
  }
  return;
}



/* Entry: 003a6958; end: 003a69a7;  */

void FUN_003a6958(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x30);
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 003a69a8; end: 003a69ab;  */

void FUN_003a69a8(void)

{
  return;
}



/* Entry: 003a69ac; end: 003a6a03;  */

void FUN_003a69ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    plVar3 = (long *)(param_1 + 0x30);
    do {
      lVar2 = lVar2 + -1;
      uVar1 = param_3;
      if (lVar2 != 0) {
        uVar1 = 0;
      }
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,uVar1);
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 003a6a04; end: 003a6a3b;  */

void FUN_003a6a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003a6a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 003a6a3c; end: 003a6a5f;  */

void FUN_003a6a3c(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009df478;
  return;
}



/* Entry: 003a6a60; end: 003a6a7b;  */

void FUN_003a6a60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_009df478;
  return;
}



/* Entry: 003a6a7c; end: 003a6ab7;  */

long FUN_003a6a7c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009df4d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003a6ab8; end: 003a6ac3;  */

undefined ** FUN_003a6ab8(void)

{
  return &PTR_DAT_009df4d8;
}



/* Entry: 003a6ac4; end: 003a6bab;  */

undefined8 * FUN_003a6ac4(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_009dde28;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  FUN_0033d180(param_1 + 7);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 003a6bac; end: 003a6bd3;  */

void FUN_003a6bac(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_003a6bd4((undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),&uStack_18);
  return;
}



/* Entry: 003a6bd4; end: 003a6e13;  */

ulong * FUN_003a6bd4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  puVar3 = (ulong *)param_1[1];
  puVar1 = param_1 + 2;
  if (puVar3 < (ulong *)*puVar1) {
    if (param_2 == puVar3) {
      *param_2 = *param_3;
      param_1[1] = (ulong)(param_2 + 1);
      param_1 = param_2;
    }
    else {
      puVar1 = puVar3;
      for (puVar2 = puVar3 + -1; puVar2 < puVar3; puVar2 = puVar2 + 1) {
        *puVar1 = *puVar2;
        puVar1 = puVar1 + 1;
      }
      param_1[1] = (ulong)puVar1;
      if (puVar3 != param_2 + 1) {
        _memmove(puVar3 + -((long)puVar3 - (long)(param_2 + 1) >> 3),param_2);
      }
      if (param_2 <= param_3) {
        param_3 = param_3 + (param_3 < (ulong *)param_1[1]);
      }
      *param_2 = *param_3;
      param_1 = param_2;
    }
  }
  else {
    uVar11 = *param_1;
    uVar4 = ((long)((long)puVar3 - uVar11) >> 3) + 1;
    if (uVar4 >> 0x3d != 0) {
      FUN_00356474();
      if (puStack_78 != puStack_80) {
        puStack_78 = (ulong *)((long)puStack_78 +
                              (((long)puStack_80 - (long)puStack_78) + 7U & 0xfffffffffffffff8));
      }
      if (puStack_88 != (ulong *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar1 = param_1 + 0xb;
      puVar3 = (ulong *)param_1[10];
      if (puVar3 < (ulong *)*puVar1) {
        puVar9 = puVar3 + 1;
        *puVar3 = (ulong)param_2;
      }
      else {
        puVar2 = param_1 + 9;
        lVar13 = (long)((long)puVar3 - *puVar2) >> 3;
        uVar4 = lVar13 + 1;
        if (uVar4 >> 0x3d != 0) {
          FUN_00356474();
          puVar8 = (ulong *)param_2[1];
          puVar6 = (ulong *)*puVar2;
          puVar1 = puVar8;
          puVar3 = param_3;
          while (puVar6 != puVar3) {
            puVar3 = puVar3 + -1;
            puVar1 = puVar1 + -1;
            *puVar1 = *puVar3;
          }
          param_2[1] = (ulong)puVar1;
          lVar10 = param_2[2];
          lVar13 = puVar2[1] - (long)param_3;
          if (lVar13 != 0) {
            _memmove(lVar10,param_3,lVar13);
            puVar1 = (ulong *)param_2[1];
          }
          param_2[2] = lVar10 + lVar13;
          uVar4 = *puVar2;
          *puVar2 = (ulong)puVar1;
          param_2[1] = uVar4;
          uVar4 = puVar2[1];
          puVar2[1] = param_2[2];
          param_2[2] = uVar4;
          uVar4 = puVar2[2];
          puVar2[2] = param_2[3];
          param_2[3] = uVar4;
          *param_2 = param_2[1];
          return puVar8;
        }
        uVar7 = (long)*puVar1 - *puVar2;
        uVar11 = (long)uVar7 >> 2;
        if (uVar11 <= uVar4) {
          uVar11 = uVar4;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          puVar1 = (ulong *)0x0;
        }
        else {
          FUN_00356488();
        }
        puVar3 = puVar1 + lVar13;
        puVar6 = puVar1 + uVar11;
        puVar9 = puVar3 + 1;
        *puVar3 = (ulong)param_2;
        puVar8 = (ulong *)param_1[9];
        puVar1 = (ulong *)param_1[10];
        if (puVar1 != puVar8) {
          do {
            puVar1 = puVar1 + -1;
            puVar3 = puVar3 + -1;
            *puVar3 = *puVar1;
          } while (puVar1 != puVar8);
          puVar1 = (ulong *)*puVar2;
        }
        param_1[9] = (ulong)puVar3;
        param_1[10] = (ulong)puVar9;
        param_1[0xb] = (ulong)puVar6;
        if (puVar1 != (ulong *)0x0) {
          __ZdlPv();
        }
      }
      param_1[10] = (ulong)puVar9;
      return puVar1;
    }
    lVar13 = (long)param_2 - uVar11;
    uVar12 = lVar13 >> 3;
    uVar5 = (long)*puVar1 - uVar11;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    puStack_68 = puVar1;
    if (uVar7 == 0) {
      puVar3 = (ulong *)0x0;
    }
    else {
      puVar3 = puVar1;
      FUN_00356488();
    }
    puVar2 = puVar3 + uVar12;
    puStack_70 = puVar3 + uVar7;
    puStack_88 = puVar3;
    puStack_80 = puVar2;
    if (uVar12 == uVar7) {
      if (lVar13 < 1) {
        uVar4 = lVar13 >> 2;
        if ((ulong *)uVar11 == param_2) {
          uVar4 = 1;
        }
        uVar11 = uVar4;
        puStack_78 = puVar2;
        FUN_00356488();
        puVar2 = puVar1 + (uVar4 >> 2);
        puStack_70 = puVar1 + uVar11;
        puStack_88 = puVar1;
        puStack_80 = puVar2;
        if (puVar3 != (ulong *)0x0) {
          __ZdlPv(puVar3);
        }
      }
      else {
        uVar4 = uVar12 + 2;
        if (-2 < (long)uVar12) {
          uVar4 = uVar12 + 1;
        }
        puVar2 = puVar2 + -(uVar4 >> 1);
        puStack_80 = puVar2;
      }
    }
    puStack_78 = puVar2 + 1;
    *puVar2 = *param_3;
    FUN_003a6eec(param_1,&puStack_88,param_2);
    if (puStack_78 != puStack_80) {
      puStack_78 = (ulong *)((long)puStack_78 +
                            ((long)puStack_80 + (7 - (long)puStack_78) & 0xfffffffffffffff8U));
    }
    if (puStack_88 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 003a6e14; end: 003a6eeb;  */

long * FUN_003a6e14(long param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  plVar2 = (long *)(param_1 + 0x58);
  plVar8 = *(long **)(param_1 + 0x50);
  if (plVar8 < (long *)*plVar2) {
    plVar10 = plVar8 + 1;
    *plVar8 = (long)param_2;
  }
  else {
    plVar6 = (long *)(param_1 + 0x48);
    lVar9 = (long)plVar8 - *plVar6 >> 3;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00356474();
      plVar7 = (long *)param_2[1];
      plVar5 = (long *)*plVar6;
      plVar2 = plVar7;
      plVar8 = param_3;
      while (plVar5 != plVar8) {
        plVar8 = plVar8 + -1;
        plVar2 = plVar2 + -1;
        *plVar2 = *plVar8;
      }
      param_2[1] = plVar2;
      lVar11 = param_2[2];
      lVar9 = plVar6[1] - (long)param_3;
      if (lVar9 != 0) {
        _memmove(lVar11,param_3,lVar9);
        plVar2 = (long *)param_2[1];
      }
      param_2[2] = lVar11 + lVar9;
      lVar9 = *plVar6;
      *plVar6 = (long)plVar2;
      param_2[1] = lVar9;
      lVar9 = plVar6[1];
      plVar6[1] = param_2[2];
      param_2[2] = lVar9;
      lVar9 = plVar6[2];
      plVar6[2] = param_2[3];
      param_2[3] = lVar9;
      *param_2 = param_2[1];
      return plVar7;
    }
    uVar3 = *plVar2 - *plVar6;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      FUN_00356488();
    }
    plVar8 = plVar2 + lVar9;
    plVar5 = plVar2 + uVar4;
    plVar10 = plVar8 + 1;
    *plVar8 = (long)param_2;
    plVar7 = *(long **)(param_1 + 0x48);
    plVar2 = *(long **)(param_1 + 0x50);
    if (plVar2 != plVar7) {
      do {
        plVar2 = plVar2 + -1;
        plVar8 = plVar8 + -1;
        *plVar8 = *plVar2;
      } while (plVar2 != plVar7);
      plVar2 = (long *)*plVar6;
    }
    *(long **)(param_1 + 0x48) = plVar8;
    *(long **)(param_1 + 0x50) = plVar10;
    *(long **)(param_1 + 0x58) = plVar5;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
  }
  *(long **)(param_1 + 0x50) = plVar10;
  return plVar2;
}



/* Entry: 003a6eec; end: 003a6faf;  */

undefined8 * FUN_003a6eec(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = (undefined8 *)param_2[1];
  puVar2 = (undefined8 *)*param_1;
  puVar1 = puVar5;
  puVar4 = param_3;
  while (puVar2 != puVar4) {
    puVar4 = puVar4 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar4;
  }
  param_2[1] = puVar1;
  lVar6 = param_2[2];
  lVar3 = param_1[1] - (long)param_3;
  if (lVar3 != 0) {
    _memmove(lVar6,param_3,lVar3);
    puVar1 = (undefined8 *)param_2[1];
  }
  param_2[2] = lVar6 + lVar3;
  lVar3 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return puVar5;
}



/* Entry: 003a6fb0; end: 003a7283;  */

void FUN_003a6fb0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  undefined4 uStack_58;
  ulong uStack_50;
  long *plStack_48;
  ulong uStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(param_2 + 0x48);
  FUN_003a6518(plVar4,*(long *)(param_2 + 0x50) - (long)plVar4 >> 3);
  func_0x00338c94();
  uStack_40 = *(ulong *)(param_2 + 0x38);
  plStack_38 = *(long **)(param_2 + 0x40);
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    ppuStack_68 = &PTR_FUN_009df4e8;
    uStack_58 = 2;
    lStack_70 = *(long *)(param_2 + 0x30);
    FUN_003a1bc4(&uStack_50,&uStack_40,"grpc.internal.transport",0x17,&lStack_70);
    plVar6 = plStack_38;
    plStack_38 = plStack_48;
    uStack_40 = uStack_50;
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    FUN_00382478(&lStack_70);
  }
  puVar5 = &uStack_40;
  FUN_003a1e3c(puVar5);
  FUN_003a6574(&uStack_50,1,FUN_003a72a0,plVar4,*(long *)(param_2 + 0x48),
               *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3,puVar5,
               *(undefined8 *)(param_2 + 8),plVar4);
  FUN_003a2a64(puVar5);
  if (uStack_50 == 0) {
    if (*(long *)(param_2 + 0x50) != *(long *)(param_2 + 0x48)) {
      uVar9 = 0;
      do {
        plVar6 = plVar4;
        func_0x003a6548(plVar4,uVar9);
        (**(code **)(*plVar6 + 0x48))(plVar4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3));
    }
    uStack_78 = 0;
    *param_1 = 0;
    param_1[1] = plVar4;
    FUN_0033d4a8(&uStack_78);
  }
  else {
    FUN_003a6784(plVar4);
    FUN_00338cb8(plVar4);
    uStack_80 = uStack_50;
    if ((uStack_50 & 1) != 0) {
      piVar7 = (int *)(uStack_50 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003fbde8(&uStack_78,&uStack_80);
    if ((uStack_80 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003a72c4(param_1,&uStack_78);
    if ((uStack_78 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 003a7284; end: 003a729f;  */

void FUN_003a7284(void)

{
  return;
}



/* Entry: 003a72a0; end: 003a72c3;  */

void FUN_003a72a0(undefined8 param_1)

{
  FUN_003a6784();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003a72c4; end: 003a731b;  */

long * FUN_003a72c4(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003a731c; end: 003a73e7;  */

undefined8 * FUN_003a731c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  *(undefined4 *)param_1 = param_2;
  uVar7 = param_3[1];
  uVar5 = *param_3;
  uVar9 = param_3[2];
  param_1[4] = param_3[3];
  param_1[3] = uVar9;
  param_1[2] = uVar7;
  param_1[1] = uVar5;
  puVar4 = param_1;
  func_0x003c1f6c();
  uVar5 = *puVar4;
  FUN_003c1e28();
  puVar4 = &uStack_58;
  uVar7 = 1;
  uStack_58 = uVar5;
  FUN_003b8d70();
  param_1[5] = puVar4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar7;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  puVar4 = &uStack_50;
  FUN_003ec120();
  param_1[9] = puVar4 + 10;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_1[8] != 0) {
    func_0x007734bc();
  }
  __Unwind_Resume();
  plVar6 = (long *)puVar4[1];
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plVar6[1])();
    }
  }
  plVar6 = (long *)puVar4[8];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return puVar4;
}



/* Entry: 003a73e8; end: 003a7463;  */

long FUN_003a73e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plVar4[1])();
    }
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 003a7464; end: 003a74c3;  */

undefined8 * FUN_003a7464(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_2;
  if (param_2 != 0) {
    puVar1 = param_1;
    FUN_00339d50();
    func_0x003c1f6c();
    uVar2 = *puVar1;
    FUN_003c1e28();
    puVar1 = &uStack_28;
    uVar3 = 1;
    uStack_28 = uVar2;
    FUN_003b8d70();
    param_1[0xd] = puVar1;
    param_1[0xe] = uVar3;
  }
  return param_1;
}



/* Entry: 003a74c4; end: 003a74c7;  */

undefined8 * FUN_003a74c4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_2;
  if (param_2 != 0) {
    puVar1 = param_1;
    FUN_00339d50();
    func_0x003c1f6c();
    uVar2 = *puVar1;
    FUN_003c1e28();
    puVar1 = &uStack_28;
    uVar3 = 1;
    uStack_28 = uVar2;
    FUN_003b8d70();
    param_1[0xd] = puVar1;
    param_1[0xe] = uVar3;
  }
  return param_1;
}



/* Entry: 003a74c8; end: 003a7517;  */

long FUN_003a74c8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      FUN_003a73e8();
      __ZdlPv();
    }
    func_0x00339d70(param_1);
  }
  return param_1;
}



/* Entry: 003a7518; end: 003a751b;  */

long FUN_003a7518(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      FUN_003a73e8();
      __ZdlPv();
    }
    func_0x00339d70(param_1);
  }
  return param_1;
}



/* Entry: 003a751c; end: 003a75b3;  */

void FUN_003a751c(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  plVar3 = (long *)(param_1 + 0x60);
  if (*plVar2 != 0) {
    plVar2 = plVar3;
    plVar3 = (long *)(*plVar3 + 0x38);
  }
  *plVar3 = param_2;
  *plVar2 = param_2;
  uVar1 = *(long *)(param_1 + 0x48) + *(long *)(param_2 + 0x48);
  *(ulong *)(param_1 + 0x48) = uVar1;
  if (*(ulong *)(param_1 + 0x50) < uVar1) {
    do {
      *(ulong *)(param_1 + 0x48) = uVar1 - *(long *)(*(long *)(param_1 + 0x58) + 0x48);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38);
      FUN_003a73e8();
      __ZdlPv();
      uVar1 = *(ulong *)(param_1 + 0x48);
    } while (*(ulong *)(param_1 + 0x50) < uVar1);
  }
  return;
}



/* Entry: 003a75b4; end: 003a765f;  */

void FUN_003a75b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = 0x50;
    __Znwm();
    FUN_003a731c();
    plVar6 = (long *)(param_1 + 0x58);
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    plVar4 = (long *)(param_1 + 0x60);
    if (*plVar6 != 0) {
      plVar6 = plVar4;
      plVar4 = (long *)(*plVar4 + 0x38);
    }
    *plVar4 = lVar3;
    *plVar6 = lVar3;
    uVar5 = *(long *)(param_1 + 0x48) + *(long *)(lVar3 + 0x48);
    *(ulong *)(param_1 + 0x48) = uVar5;
    if (*(ulong *)(param_1 + 0x50) < uVar5) {
      do {
        *(ulong *)(param_1 + 0x48) = uVar5 - *(long *)(*(long *)(param_1 + 0x58) + 0x48);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38);
        FUN_003a73e8();
        __ZdlPv();
        uVar5 = *(ulong *)(param_1 + 0x48);
      } while (*(ulong *)(param_1 + 0x50) < uVar5);
    }
    return;
  }
  plVar4 = (long *)*param_3;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003a7638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar4[1])();
      return;
    }
  }
  return;
}



/* Entry: 003a7660; end: 003a7aeb;  */

/* WARNING: Removing unreachable block (ram,0x003a7798) */
/* WARNING: Removing unreachable block (ram,0x003a77a8) */

long ** FUN_003a7660(undefined4 *param_1,int *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined1 uStack_2e9;
  undefined8 **ppuStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined7 uStack_2d0;
  char cStack_2c9;
  undefined4 uStack_2c8;
  char cStack_2c1;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *apuStack_228 [2];
  char cStack_211;
  undefined1 uStack_209;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 **ppuStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long alStack_1d0 [2];
  undefined8 *puStack_1c0;
  undefined1 uStack_1b1;
  undefined8 **ppuStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined4 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [104];
  undefined1 auStack_d8 [24];
  undefined4 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_68 = *(undefined8 *)(param_2 + 4);
  uStack_70 = *(undefined8 *)(param_2 + 2);
  uStack_58 = *(undefined8 *)(param_2 + 8);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  puVar3 = &uStack_70;
  FUN_003ebfac();
  puStack_1c0 = puVar3;
  FUN_003a7f00(auStack_1a8,"description",&puStack_1c0);
  if (2 < *param_2 - 1U) {
    func_0x00338df0("return \"CT_UNKNOWN\"",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_trace.cc"
                    ,0x88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x3a79fc);
    (*pcVar2)();
  }
  apuStack_228[0] = (undefined8 *)(&PTR_s_CT_INFO_009df530)[(int)(*param_2 - 1U)];
  FUN_003a8014(auStack_140,"severity",apuStack_228);
  FUN_003394e4(&ppuStack_1f0,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc));
  FUN_00353254(auStack_d8,"timestamp");
  uStack_a8 = plStack_1e0;
  uStack_c0 = 4;
  puStack_b0 = plStack_1e8;
  plStack_b8 = (long *)ppuStack_1f0;
  ppuStack_1f0 = (long **)0x0;
  plStack_1e8 = (long *)0x0;
  plStack_1e0 = (long *)0x0;
  puStack_a0 = &uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  puVar3 = (undefined8 *)((long)&MACH_HEADER.magic + 3);
  FUN_003490ec(&plStack_1d8,auStack_1a8,3,&lStack_208);
  lVar8 = 0x138;
  do {
    lStack_208 = (long)&puStack_1c0 + lVar8;
    FUN_0034a050(&lStack_208);
    func_0x003499b4((long)&plStack_1d8 + lVar8,*(undefined8 *)((long)alStack_1d0 + lVar8));
    lVar8 = lVar8 + -0x68;
  } while (lVar8 != 0);
  if ((long)plStack_1e0 < 0) {
    __ZdlPv(ppuStack_1f0);
  }
  FUN_00338cb8(puStack_1c0);
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 != 0) {
    if ((*(int *)(lVar8 + 0x10) == 0) || (*(int *)(lVar8 + 0x10) == 1)) {
      pcVar9 = "channelId";
      pcVar7 = "channelRef";
    }
    else {
      pcVar9 = "subchannelId";
      pcVar7 = "subchannelRef";
    }
    __ZNSt3__19to_stringEl(&lStack_208,*(undefined8 *)(lVar8 + 0x18));
    FUN_00353254(auStack_1a8,pcVar9);
    lStack_178 = lStack_1f8;
    uStack_190 = 4;
    uStack_180 = uStack_200;
    lStack_188 = lStack_208;
    lStack_208 = 0;
    uStack_200 = 0;
    lStack_1f8 = 0;
    puStack_170 = &uStack_168;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_158 = 0;
    FUN_003490ec(&ppuStack_1f0,auStack_1a8,1,&uStack_209);
    FUN_00353254(apuStack_228,pcVar7);
    puVar3 = (undefined8 *)&UNK_008000a0;
    pplVar4 = &plStack_1d8;
    ppuStack_1b0 = apuStack_228;
    FUN_003583d4(pplVar4,apuStack_228,&UNK_008000a0,&ppuStack_1b0,&uStack_1b1);
    pplVar5 = pplVar4 + 0xc;
    *(undefined4 *)(pplVar4 + 7) = 5;
    func_0x003499b4(pplVar4 + 0xb,*pplVar5);
    plVar6 = plStack_1e8;
    pplVar4[0xb] = (long *)ppuStack_1f0;
    pplVar4[0xc] = plVar6;
    plVar1 = plStack_1e0;
    pplVar4[0xd] = plStack_1e0;
    if (plVar1 == (long *)0x0) {
      pplVar4[0xb] = (long *)pplVar5;
    }
    else {
      plVar6[2] = (long)pplVar5;
      ppuStack_1f0 = &plStack_1e8;
      plStack_1e8 = (long *)0x0;
      plStack_1e0 = (long *)0x0;
      plVar6 = (long *)0x0;
    }
    if (cStack_211 < '\0') {
      __ZdlPv(apuStack_228[0],plVar6);
      plVar6 = plStack_1e8;
    }
    func_0x003499b4(&ppuStack_1f0,plVar6);
    apuStack_228[0] = &uStack_158;
    FUN_0034a050(apuStack_228);
    func_0x003499b4(&puStack_170,uStack_168);
    if (lStack_178 < 0) {
      __ZdlPv(lStack_188);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    if (lStack_1f8 < 0) {
      __ZdlPv(lStack_208);
    }
  }
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_1d8;
  plVar6 = (long *)(param_1 + 10);
  *plVar6 = alStack_1d0[0];
  *(long *)(param_1 + 0xc) = alStack_1d0[1];
  if (alStack_1d0[1] == 0) {
    *(long **)(param_1 + 8) = plVar6;
  }
  else {
    *(long **)(alStack_1d0[0] + 0x10) = plVar6;
    plStack_1d8 = alStack_1d0;
    alStack_1d0[0] = 0;
    alStack_1d0[1] = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  pplVar4 = &plStack_1d8;
  func_0x003499b4(pplVar4,alStack_1d0[0]);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if (cStack_211 < '\0') {
      __ZdlPv(apuStack_228[0]);
    }
    func_0x003499b4(&ppuStack_1f0,plStack_1e8);
    func_0x00349014(auStack_1a8);
    if (lStack_1f8 < 0) {
      __ZdlPv(lStack_208);
    }
    func_0x003499b4(&plStack_1d8,alStack_1d0[0]);
    __Unwind_Resume();
    lStack_278 = *(long *)PTR____stack_chk_guard_00999f88;
    if (pplVar4[10] == (long *)0x0) {
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[6] = 0;
      extraout_x8[7] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[4] = extraout_x8 + 5;
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
    }
    else {
      FUN_003394e4(&plStack_320,pplVar4[0xd],pplVar4[0xe]);
      FUN_00353254(&plStack_2e0,"creationTimestamp");
      lStack_2b0 = (long)plStack_310;
      uStack_2c8 = 4;
      uStack_2b8 = plStack_318;
      puStack_2c0 = plStack_320;
      plStack_320 = (long *)0x0;
      plStack_318 = (long *)0x0;
      plStack_310 = (long *)0x0;
      puStack_2a8 = &uStack_2a0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      puStack_290 = (long *)0x0;
      puVar3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      FUN_003490ec(&plStack_308,&plStack_2e0,1,&ppuStack_2e8);
      ppuStack_2e8 = &puStack_290;
      FUN_0034a050(&ppuStack_2e8);
      func_0x003499b4(&puStack_2a8,uStack_2a0);
      if (lStack_2b0 < 0) {
        __ZdlPv(puStack_2c0);
      }
      if (cStack_2c9 < '\0') {
        __ZdlPv(plStack_2e0);
      }
      if ((long)plStack_310 < 0) {
        __ZdlPv(plStack_320);
      }
      if (pplVar4[8] != (long *)0x0) {
        __ZNSt3__19to_stringEy(&plStack_2e0);
        FUN_00353254(&plStack_320,"numEventsLogged");
        puVar3 = (undefined8 *)&UNK_008000a0;
        pplVar5 = &plStack_308;
        ppuStack_2e8 = &plStack_320;
        FUN_003583d4(pplVar5,&plStack_320,&UNK_008000a0,&ppuStack_2e8,&uStack_2e9);
        *(undefined4 *)(pplVar5 + 7) = 4;
        if (*(char *)((long)pplVar5 + 0x57) < '\0') {
          __ZdlPv(pplVar5[8]);
        }
        plVar6 = plStack_2e0;
        pplVar5[9] = plStack_2d8;
        pplVar5[8] = plVar6;
        pplVar5[10] = (long *)CONCAT17(cStack_2c9,uStack_2d0);
        cStack_2c9 = '\0';
        plStack_2e0 = (long *)((ulong)plStack_2e0 & 0xffffffffffffff00);
        if (((long)plStack_310 < 0) && (__ZdlPv(plStack_320), cStack_2c9 < '\0')) {
          __ZdlPv(plStack_2e0);
        }
      }
      plVar6 = pplVar4[0xb];
      if (plVar6 != (long *)0x0) {
        plStack_320 = (long *)0x0;
        plStack_318 = (long *)0x0;
        plStack_310 = (long *)0x0;
        do {
          FUN_003a7660(&plStack_2e0,plVar6);
          plVar1 = plStack_318;
          if (plStack_318 < plStack_310) {
            *(undefined4 *)plStack_318 = 0;
            plVar1[1] = 0;
            plVar1[2] = 0;
            plVar1[6] = 0;
            plVar1[7] = 0;
            plVar1[5] = 0;
            plVar1[3] = 0;
            plVar1[4] = (long)(plVar1 + 5);
            plVar1[8] = 0;
            plVar1[9] = 0;
            FUN_00358178(plVar1,&plStack_2e0);
            pplVar4 = (long **)(plVar1 + 10);
          }
          else {
            pplVar4 = &plStack_320;
            FUN_003a8068(&plStack_320,&plStack_2e0);
          }
          plStack_318 = (long *)pplVar4;
          ppuStack_2e8 = &puStack_2a8;
          FUN_0034a050(&ppuStack_2e8);
          func_0x003499b4(&puStack_2c0,uStack_2b8);
          if (cStack_2c1 < '\0') {
            __ZdlPv(plStack_2d8);
          }
          plVar6 = (long *)plVar6[7];
        } while (plVar6 != (long *)0x0);
        FUN_00353254(&plStack_2e0,"events");
        puVar3 = (undefined8 *)&UNK_008000a0;
        pplVar4 = &plStack_308;
        ppuStack_2e8 = &plStack_2e0;
        FUN_003583d4(pplVar4,&plStack_2e0,&UNK_008000a0,&ppuStack_2e8,&uStack_2e9);
        *(undefined4 *)(pplVar4 + 7) = 6;
        FUN_00349c88(pplVar4 + 0xe);
        pplVar4[0xf] = plStack_318;
        pplVar4[0xe] = plStack_320;
        pplVar4[0x10] = plStack_310;
        plStack_318 = (long *)0x0;
        plStack_310 = (long *)0x0;
        plStack_320 = (long *)0x0;
        if (cStack_2c9 < '\0') {
          __ZdlPv(plStack_2e0);
        }
        plStack_2e0 = (long *)&plStack_320;
        FUN_0034a050(&plStack_2e0);
      }
      *(undefined4 *)extraout_x8 = 5;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      extraout_x8[4] = plStack_308;
      plVar6 = extraout_x8 + 5;
      *plVar6 = lStack_300;
      extraout_x8[6] = lStack_2f8;
      if (lStack_2f8 == 0) {
        extraout_x8[4] = plVar6;
      }
      else {
        *(long **)(lStack_300 + 0x10) = plVar6;
        plStack_308 = &lStack_300;
        lStack_300 = 0;
        lStack_2f8 = 0;
      }
      extraout_x8[7] = 0;
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
      pplVar4 = &plStack_308;
      func_0x003499b4(pplVar4,lStack_300);
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_278) {
      ___stack_chk_fail();
      if (cStack_2c9 < '\0') {
        __ZdlPv(plStack_2e0);
      }
      plStack_2e0 = (long *)&plStack_320;
      FUN_0034a050(&plStack_2e0);
      func_0x003499b4(&plStack_308,lStack_300);
      __Unwind_Resume(pplVar4);
      pplVar5 = pplVar4;
      FUN_00353254();
      FUN_003a7f54(pplVar5 + 3,*puVar3,0);
      return pplVar4;
    }
    return pplVar4;
  }
  return pplVar4;
}



/* Entry: 003a7aec; end: 003a7eff;  */

long ** FUN_003a7aec(undefined8 *param_1,long **param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 uStack_b9;
  undefined8 **ppuStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  undefined4 uStack_98;
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_2[10] == (long *)0x0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = param_1 + 5;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    FUN_003394e4(&plStack_f0,param_2[0xd],param_2[0xe]);
    FUN_00353254(&plStack_b0,"creationTimestamp");
    lStack_80 = (long)plStack_e0;
    uStack_98 = 4;
    uStack_88 = plStack_e8;
    puStack_90 = plStack_f0;
    plStack_f0 = (long *)0x0;
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puStack_60 = (long *)0x0;
    param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    FUN_003490ec(&plStack_d8,&plStack_b0,1,&ppuStack_b8);
    ppuStack_b8 = &puStack_60;
    FUN_0034a050(&ppuStack_b8);
    func_0x003499b4(&puStack_78,uStack_70);
    if (lStack_80 < 0) {
      __ZdlPv(puStack_90);
    }
    if (cStack_99 < '\0') {
      __ZdlPv(plStack_b0);
    }
    if ((long)plStack_e0 < 0) {
      __ZdlPv(plStack_f0);
    }
    if (param_2[8] != (long *)0x0) {
      __ZNSt3__19to_stringEy(&plStack_b0);
      FUN_00353254(&plStack_f0,"numEventsLogged");
      param_4 = (undefined8 *)&UNK_008000a0;
      pplVar2 = &plStack_d8;
      ppuStack_b8 = &plStack_f0;
      FUN_003583d4(pplVar2,&plStack_f0,&UNK_008000a0,&ppuStack_b8,&uStack_b9);
      *(undefined4 *)(pplVar2 + 7) = 4;
      if (*(char *)((long)pplVar2 + 0x57) < '\0') {
        __ZdlPv(pplVar2[8]);
      }
      plVar3 = plStack_b0;
      pplVar2[9] = plStack_a8;
      pplVar2[8] = plVar3;
      pplVar2[10] = (long *)CONCAT17(cStack_99,uStack_a0);
      cStack_99 = '\0';
      plStack_b0 = (long *)((ulong)plStack_b0 & 0xffffffffffffff00);
      if ((long)plStack_e0 < 0) {
        __ZdlPv(plStack_f0);
        if (cStack_99 < '\0') {
          __ZdlPv(plStack_b0);
        }
      }
    }
    plVar3 = param_2[0xb];
    if (plVar3 != (long *)0x0) {
      plStack_f0 = (long *)0x0;
      plStack_e8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      do {
        FUN_003a7660(&plStack_b0,plVar3);
        plVar1 = plStack_e8;
        if (plStack_e8 < plStack_e0) {
          *(undefined4 *)plStack_e8 = 0;
          plVar1[1] = 0;
          plVar1[2] = 0;
          plVar1[6] = 0;
          plVar1[7] = 0;
          plVar1[5] = 0;
          plVar1[3] = 0;
          plVar1[4] = (long)(plVar1 + 5);
          plVar1[8] = 0;
          plVar1[9] = 0;
          FUN_00358178(plVar1,&plStack_b0);
          pplVar2 = (long **)(plVar1 + 10);
        }
        else {
          pplVar2 = &plStack_f0;
          FUN_003a8068(&plStack_f0,&plStack_b0);
        }
        plStack_e8 = (long *)pplVar2;
        ppuStack_b8 = &puStack_78;
        FUN_0034a050(&ppuStack_b8);
        func_0x003499b4(&puStack_90,uStack_88);
        if (cStack_91 < '\0') {
          __ZdlPv(plStack_a8);
        }
        plVar3 = (long *)plVar3[7];
      } while (plVar3 != (long *)0x0);
      FUN_00353254(&plStack_b0,"events");
      param_4 = (undefined8 *)&UNK_008000a0;
      pplVar2 = &plStack_d8;
      ppuStack_b8 = &plStack_b0;
      FUN_003583d4(pplVar2,&plStack_b0,&UNK_008000a0,&ppuStack_b8,&uStack_b9);
      *(undefined4 *)(pplVar2 + 7) = 6;
      FUN_00349c88(pplVar2 + 0xe);
      pplVar2[0xf] = plStack_e8;
      pplVar2[0xe] = plStack_f0;
      pplVar2[0x10] = plStack_e0;
      plStack_e8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      plStack_f0 = (long *)0x0;
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      plStack_b0 = (long *)&plStack_f0;
      FUN_0034a050(&plStack_b0);
    }
    *(undefined4 *)param_1 = 5;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = plStack_d8;
    plVar3 = param_1 + 5;
    *plVar3 = lStack_d0;
    param_1[6] = lStack_c8;
    if (lStack_c8 == 0) {
      param_1[4] = plVar3;
    }
    else {
      *(long **)(lStack_d0 + 0x10) = plVar3;
      plStack_d8 = &lStack_d0;
      lStack_d0 = 0;
      lStack_c8 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_2 = &plStack_d8;
    func_0x003499b4(param_2,lStack_d0);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_2;
  }
  ___stack_chk_fail();
  if (cStack_99 < '\0') {
    __ZdlPv(plStack_b0);
  }
  plStack_b0 = (long *)&plStack_f0;
  FUN_0034a050(&plStack_b0);
  func_0x003499b4(&plStack_d8,lStack_d0);
  __Unwind_Resume(param_2);
  pplVar2 = param_2;
  FUN_00353254();
  FUN_003a7f54(pplVar2 + 3,*param_4,0);
  return param_2;
}



/* Entry: 003a7f00; end: 003a7f53;  */

long FUN_003a7f00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_003a7f54(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 003a7f54; end: 003a8013;  */

undefined4 * FUN_003a7f54(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  char cStack_21;
  
  FUN_00353254(&uStack_38);
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  if (cStack_21 < '\0') {
    FUN_002971d4(param_1 + 2,uStack_38,uStack_30);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_30;
    *(undefined8 *)(param_1 + 2) = uStack_38;
    *(undefined8 *)(param_1 + 10) = 0;
    *(ulong *)(param_1 + 6) = CONCAT17(cStack_21,uStack_28);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  return param_1;
}



/* Entry: 003a8014; end: 003a8067;  */

long FUN_003a8014(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_00357f88(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 003a8068; end: 003a8183;  */

long * FUN_003a8068(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    plVar5 = param_1 + 2;
    lVar2 = *plVar5 - *param_1 >> 4;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x333333333333333;
    }
    plStack_38 = plVar5;
    if (uVar4 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_00349f28();
      plStack_58 = plVar5;
    }
    plVar5 = plStack_58 + lVar3 * 2;
    plStack_40 = plStack_58 + uVar4 * 10;
    *(undefined4 *)plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[5] = 0;
    plVar5[3] = 0;
    plVar5[4] = (long)(plVar5 + 5);
    plVar5[8] = 0;
    plVar5[9] = 0;
    plStack_50 = plVar5;
    FUN_00358178(plVar5,param_2);
    plStack_48 = plVar5 + 10;
    FUN_003a8184(param_1,&plStack_58);
    plVar5 = (long *)param_1[1];
    FUN_003a833c(&plStack_58);
    return plVar5;
  }
  FUN_00349f14();
  FUN_003a833c(&plStack_58);
  __Unwind_Resume();
  plVar5 = param_1 + 2;
  lVar3 = param_1[1];
  FUN_003a81f8(plVar5,lVar3,lVar3,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  *param_1 = lVar3;
  param_2[1] = lVar2;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar5;
}



/* Entry: 003a8184; end: 003a81f7;  */

void FUN_003a8184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_003a81f8(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003a81f8; end: 003a82b7;  */

undefined1  [16]
FUN_003a81f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    *(undefined4 *)(param_7 + -0x50) = 0;
    param_3 = param_3 + -0x50;
    *(undefined8 *)(param_7 + -0x48) = 0;
    *(undefined8 *)(param_7 + -0x40) = 0;
    *(undefined8 *)(param_7 + -0x20) = 0;
    *(undefined8 *)(param_7 + -0x18) = 0;
    *(undefined8 *)(param_7 + -0x28) = 0;
    *(undefined8 *)(param_7 + -0x38) = 0;
    *(undefined8 **)(param_7 + -0x30) = (undefined8 *)(param_7 + -0x28);
    *(undefined8 *)(param_7 + -0x10) = 0;
    *(undefined8 *)(param_7 + -8) = 0;
    FUN_00358178((undefined4 *)(param_7 + -0x50),param_3);
    param_7 = lStack_38 + -0x50;
    param_6 = uStack_40;
  }
  uStack_58 = 1;
  FUN_003a82b8(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 003a82b8; end: 003a82eb;  */

long FUN_003a82b8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_003a82ec(param_1);
  }
  return param_1;
}



/* Entry: 003a82ec; end: 003a833b;  */

void FUN_003a82ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      FUN_00349e68(uVar2,lVar1);
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 003a833c; end: 003a83af;  */

long * FUN_003a833c(long *param_1)

{
  func_0x003a836c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 003a83b0; end: 003a83bb;  */

void FUN_003a83b0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003a83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 003a83bc; end: 003a8443;  */

undefined8 * FUN_003a83bc(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_009df558;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[3] = 0xffffffffffffffff;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[6] = param_3[2];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_003abd20();
  FUN_003abdcc();
  return param_1;
}



/* Entry: 003a8444; end: 003a8493;  */

undefined8 * FUN_003a8444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009df558;
  FUN_003abd20();
  FUN_003abe50();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 003a8494; end: 003a849b;  */

void FUN_003a8494(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3a8498);
  (*pcVar1)();
}



/* Entry: 003a849c; end: 003a8547;  */

undefined8 * FUN_003a849c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar2 = param_1;
  FUN_00338d88();
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  param_1[3] = (ulong)uVar1;
  FUN_003a8548(param_1);
  if (param_1[3] != 0) {
    uVar4 = 0;
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar3 = puVar2 + 8;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
      }
      else {
        puVar3 = param_1;
        FUN_003ab78c();
      }
      param_1[1] = puVar3;
      uVar4 = uVar4 + 1;
      puVar2 = puVar3;
    } while (uVar4 < (ulong)param_1[3]);
  }
  return param_1;
}



/* Entry: 003a8548; end: 003a861f;  */

long * FUN_003a8548(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar2 = param_1 + 2;
  lVar4 = *param_1;
  if ((ulong)(*plVar2 - lVar4 >> 6) < param_2) {
    if (param_2 >> 0x3a != 0) {
      FUN_003ab6c8();
      if (lStack_38 != lStack_40) {
        lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 0x3fU & 0xffffffffffffffc0);
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      plVar2 = param_1;
      FUN_00338d88();
      uVar1 = (uint)plVar2;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      param_1[3] = (ulong)uVar1;
      FUN_003a8548(param_1);
      if (param_1[3] != 0) {
        uVar6 = 0;
        plVar2 = (long *)param_1[1];
        do {
          if (plVar2 < (long *)param_1[2]) {
            plVar2[5] = 0;
            plVar2[4] = 0;
            plVar2[7] = 0;
            plVar2[6] = 0;
            plVar3 = plVar2 + 8;
            plVar2[1] = 0;
            *plVar2 = 0;
            plVar2[3] = 0;
            plVar2[2] = 0;
          }
          else {
            plVar3 = param_1;
            FUN_003ab78c();
          }
          param_1[1] = (long)plVar3;
          uVar6 = uVar6 + 1;
          plVar2 = plVar3;
        } while (uVar6 < (ulong)param_1[3]);
      }
      return param_1;
    }
    lVar5 = param_1[1];
    plStack_28 = plVar2;
    FUN_003ab758();
    lStack_40 = (long)plVar2 + (lVar5 - lVar4);
    plStack_30 = plVar2 + param_2 * 8;
    plStack_48 = plVar2;
    lStack_38 = lStack_40;
    FUN_003ab6dc(param_1,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 0x3fU & 0xffffffffffffffc0);
    }
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
      plVar2 = plStack_48;
    }
  }
  return plVar2;
}



/* Entry: 003a8620; end: 003a8623;  */

undefined8 * FUN_003a8620(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar2 = param_1;
  FUN_00338d88();
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  param_1[3] = (ulong)uVar1;
  FUN_003a8548(param_1);
  if (param_1[3] != 0) {
    uVar4 = 0;
    puVar2 = (undefined8 *)param_1[1];
    do {
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar3 = puVar2 + 8;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
      }
      else {
        puVar3 = param_1;
        FUN_003ab78c();
      }
      param_1[1] = puVar3;
      uVar4 = uVar4 + 1;
      puVar2 = puVar3;
    } while (uVar4 < (ulong)param_1[3]);
  }
  return param_1;
}



/* Entry: 003a8624; end: 003a8733;  */

void FUN_003a8624(undefined8 param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar4 = param_2;
  func_0x003c1f6c();
  lVar6 = *plVar4;
  uVar1 = *(uint *)(lVar6 + 0x30);
  uVar5 = (ulong)uVar1;
  if (uVar1 == 0xffffffff) {
    FUN_00338dc8();
    *(int *)(lVar6 + 0x30) = (int)uVar5;
  }
  lVar6 = *param_2;
  plVar4 = (long *)(lVar6 + (uVar5 & 0xffffffff) * 0x40);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0033a6ec();
  *(undefined8 *)(lVar6 + (uVar5 & 0xffffffff) * 0x40 + 0x18) = param_1;
  return;
}



/* Entry: 003a8734; end: 003a879b;  */

void FUN_003a8734(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    dVar7 = (double)param_2[3];
    plVar5 = (long *)(*param_1 + 0x10);
    do {
      lVar2 = lVar2 + plVar5[-2];
      *param_2 = lVar2;
      lVar3 = lVar3 + plVar5[-1];
      param_2[1] = lVar3;
      lVar4 = lVar4 + *plVar5;
      param_2[2] = lVar4;
      dVar6 = (double)plVar5[1];
      if (dVar7 < dVar6) {
        param_2[3] = (long)dVar6;
        dVar7 = dVar6;
      }
      plVar5 = plVar5 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 003a879c; end: 003a8a83;  */

void FUN_003a879c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined7 uStack_58;
  char cStack_51;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  FUN_003a8734(param_1,&lStack_50);
  if (lStack_50 != 0) {
    __ZNSt3__19to_stringEx(&uStack_68);
    FUN_00353254(auStack_80,"callsStarted");
    lVar1 = param_2;
    puStack_28 = (undefined1 *)auStack_80;
    FUN_003583d4(param_2,auStack_80,&UNK_008000a0,&puStack_28,&uStack_29);
    *(undefined4 *)(lVar1 + 0x38) = 4;
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x48) = uStack_60;
    *(undefined8 *)(lVar1 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(lVar1 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
    FUN_0033a704(uStack_38);
    FUN_0033a30c();
    FUN_003394e4(&uStack_68);
    FUN_00353254(auStack_80,"lastCallStartedTimestamp");
    lVar1 = param_2;
    puStack_28 = (undefined1 *)auStack_80;
    FUN_003583d4(param_2,auStack_80,&UNK_008000a0,&puStack_28,&uStack_29);
    *(undefined4 *)(lVar1 + 0x38) = 4;
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x48) = uStack_60;
    *(undefined8 *)(lVar1 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(lVar1 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
  }
  if (lStack_48 != 0) {
    __ZNSt3__19to_stringEx(&uStack_68);
    FUN_00353254(auStack_80,"callsSucceeded");
    lVar1 = param_2;
    puStack_28 = (undefined1 *)auStack_80;
    FUN_003583d4(param_2,auStack_80,&UNK_008000a0,&puStack_28,&uStack_29);
    *(undefined4 *)(lVar1 + 0x38) = 4;
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x48) = uStack_60;
    *(undefined8 *)(lVar1 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(lVar1 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
  }
  if (lStack_40 != 0) {
    __ZNSt3__19to_stringEx(&uStack_68);
    FUN_00353254(auStack_80,"callsFailed");
    puStack_28 = (undefined1 *)auStack_80;
    FUN_003583d4(param_2,auStack_80,&UNK_008000a0,&puStack_28,&uStack_29);
    *(undefined4 *)(param_2 + 0x38) = 4;
    if (*(char *)(param_2 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x40));
    }
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    *(undefined8 *)(param_2 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(param_2 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
  }
  return;
}



/* Entry: 003a8a84; end: 003a8bcf;  */

undefined8 *
FUN_003a8a84(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_003a83bc(param_1,param_4,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *param_1 = &PTR_FUN_009df580;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[9] = param_2[2];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a849c(param_1 + 10);
  FUN_003a74c4(param_1 + 0xe,param_3);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_00339d50(param_1 + 0x1e);
  param_1[0x26] = param_1 + 0x27;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_1 + 0x2a;
  return param_1;
}



/* Entry: 003a8bd0; end: 003a8bd3;  */

undefined8 *
FUN_003a8bd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_003a83bc(param_1,param_4,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *param_1 = &PTR_FUN_009df580;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[9] = param_2[2];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a849c(param_1 + 10);
  FUN_003a74c4(param_1 + 0xe,param_3);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_00339d50(param_1 + 0x1e);
  param_1[0x26] = param_1 + 0x27;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_1 + 0x2a;
  return param_1;
}



/* Entry: 003a8bd4; end: 003a8c0f;  */

undefined * FUN_003a8bd4(uint param_1)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 **ppuVar9;
  undefined4 *extraout_x8;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 **ppuStack_388;
  undefined8 *puStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_350;
  undefined8 *apuStack_348 [2];
  char cStack_331;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined1 uStack_269;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined1 ***pppuStack_238;
  undefined1 **ppuStack_230;
  long lStack_228;
  undefined1 **ppuStack_220;
  undefined8 uStack_218;
  char cStack_209;
  char cStack_201;
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [8];
  long lStack_1c8;
  undefined8 *puStack_1b8;
  undefined1 **ppuStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *apuStack_148 [2];
  char cStack_131;
  undefined8 uStack_128;
  char cStack_111;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 *apuStack_f8 [3];
  undefined8 auStack_e0 [2];
  char acStack_c9 [9];
  undefined8 auStack_c0 [2];
  char acStack_a9 [9];
  long alStack_a0 [6];
  
  if (param_1 < 5) {
    return (&PTR_s_Channel_state_change_to_IDLE_009df638)[(int)param_1];
  }
  pcVar2 = "return \"UNKNOWN\"";
  func_0x00338df0("return \"UNKNOWN\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz.cc"
                  ,0xa5);
  alStack_a0[5] = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_00358124(apuStack_148,"target",pcVar2 + 0x38);
  FUN_003490ec(auStack_1d0,apuStack_148,1,&ppuStack_1b0);
  ppuStack_1b0 = apuStack_f8;
  FUN_0034a050(&ppuStack_1b0);
  func_0x003499b4(auStack_110,uStack_108);
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  if (cStack_131 < '\0') {
    __ZdlPv(apuStack_148[0]);
  }
  if ((*(uint *)(pcVar2 + 0xe8) & 1) != 0) {
    uVar3 = (ulong)(uint)((int)*(uint *)(pcVar2 + 0xe8) >> 1);
    FUN_003fae60();
    uStack_250 = uVar3;
    FUN_00357f34(apuStack_148,"state",&uStack_250);
    FUN_003490ec(&ppuStack_1b0,apuStack_148,1,&puStack_1b8);
    FUN_00353254(&ppuStack_220,"state");
    puVar4 = auStack_1d0;
    pppuStack_238 = &ppuStack_220;
    FUN_003583d4(puVar4,&ppuStack_220,&UNK_008000a0,&pppuStack_238,&uStack_268);
    puVar11 = (undefined8 *)(puVar4 + 0x60);
    *(undefined4 *)(puVar4 + 0x38) = 5;
    func_0x003499b4(puVar4 + 0x58,*puVar11);
    puVar8 = puStack_1a8;
    *(undefined1 ***)(puVar4 + 0x58) = ppuStack_1b0;
    *(undefined1 **)(puVar4 + 0x60) = puVar8;
    lVar12 = lStack_1a0;
    *(long *)(puVar4 + 0x68) = lStack_1a0;
    if (lVar12 == 0) {
      *(undefined8 **)(puVar4 + 0x58) = puVar11;
    }
    else {
      *(undefined8 **)(puVar8 + 0x10) = puVar11;
      ppuStack_1b0 = &puStack_1a8;
      puStack_1a8 = (undefined1 *)0x0;
      lStack_1a0 = 0;
      puVar8 = (undefined1 *)0x0;
    }
    if (cStack_209 < '\0') {
      __ZdlPv(ppuStack_220,puVar8);
      puVar8 = puStack_1a8;
    }
    func_0x003499b4(&ppuStack_1b0,puVar8);
    ppuStack_220 = apuStack_f8;
    FUN_0034a050(&ppuStack_220);
    func_0x003499b4(auStack_110,uStack_108);
    if (cStack_111 < '\0') {
      __ZdlPv(uStack_128);
    }
    if (cStack_131 < '\0') {
      __ZdlPv(apuStack_148[0]);
    }
  }
  FUN_003a7aec(&ppuStack_220,pcVar2 + 0x70);
  if ((int)ppuStack_220 != 0) {
    FUN_00353254(apuStack_148,"trace");
    puVar4 = auStack_1d0;
    ppuStack_1b0 = apuStack_148;
    FUN_003583d4(puVar4,apuStack_148,&UNK_008000a0,&ppuStack_1b0,&pppuStack_238);
    FUN_00358178(puVar4 + 0x38,&ppuStack_220);
    if (cStack_131 < '\0') {
      __ZdlPv(apuStack_148[0]);
    }
  }
  FUN_003a879c(pcVar2 + 0x50,auStack_1d0);
  __ZNSt3__19to_stringEl(&uStack_268,*(undefined8 *)(pcVar2 + 0x18));
  FUN_00353254(&ppuStack_1b0,"channelId");
  lStack_180 = lStack_258;
  uStack_198 = 4;
  uStack_188 = uStack_260;
  uStack_190 = uStack_268;
  uStack_268 = 0;
  uStack_260 = 0;
  lStack_258 = 0;
  puStack_178 = &uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  FUN_003490ec(&uStack_250,&ppuStack_1b0,1,&uStack_269);
  FUN_003582a0(apuStack_148,"ref",&uStack_250);
  func_0x00358310(auStack_e0,"data",auStack_1d0);
  FUN_003490ec(&pppuStack_238,apuStack_148,2,&puStack_1b8);
  lVar12 = 0;
  do {
    puStack_1b8 = (undefined8 *)((long)alStack_a0 + lVar12 + 0x10);
    FUN_0034a050(&puStack_1b8);
    func_0x003499b4(acStack_a9 + lVar12 + 1,*(undefined8 *)((long)alStack_a0 + lVar12));
    if (acStack_a9[lVar12] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar12));
    }
    if (acStack_c9[lVar12] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
    }
    lVar12 = lVar12 + -0x68;
  } while (lVar12 != -0xd0);
  func_0x003499b4(&uStack_250,uStack_248);
  puStack_1b8 = &uStack_160;
  FUN_0034a050(&puStack_1b8);
  func_0x003499b4(&puStack_178,uStack_170);
  if (lStack_180 < 0) {
    __ZdlPv(uStack_190);
  }
  if (lStack_1a0 < 0) {
    __ZdlPv(ppuStack_1b0);
  }
  if (lStack_258 < 0) {
    __ZdlPv(uStack_268);
  }
  FUN_003a91c4(pcVar2,&pppuStack_238);
  *extraout_x8 = 5;
  *(undefined8 *)(extraout_x8 + 2) = 0;
  *(undefined8 *)(extraout_x8 + 4) = 0;
  *(undefined8 *)(extraout_x8 + 6) = 0;
  *(undefined1 ****)(extraout_x8 + 8) = pppuStack_238;
  plVar10 = (long *)(extraout_x8 + 10);
  *plVar10 = (long)ppuStack_230;
  *(long *)(extraout_x8 + 0xc) = lStack_228;
  if (lStack_228 == 0) {
    *(long **)(extraout_x8 + 8) = plVar10;
  }
  else {
    pppuStack_238 = &ppuStack_230;
    ppuStack_230[2] = (undefined1 *)plVar10;
    ppuStack_230 = (undefined1 **)0x0;
    lStack_228 = 0;
  }
  *(undefined8 *)(extraout_x8 + 0xe) = 0;
  *(undefined8 *)(extraout_x8 + 0x10) = 0;
  *(undefined8 *)(extraout_x8 + 0x12) = 0;
  func_0x003499b4(&pppuStack_238,ppuStack_230);
  apuStack_148[0] = auStack_1e8;
  FUN_0034a050(apuStack_148);
  func_0x003499b4(auStack_200,uStack_1f8);
  if (cStack_201 < '\0') {
    __ZdlPv(uStack_218);
  }
  puVar4 = auStack_1d0;
  func_0x003499b4(puVar4,lStack_1c8);
  if (*(long *)PTR____stack_chk_guard_00999f88 != alStack_a0[5]) {
    ___stack_chk_fail();
    if (cStack_209 < '\0') {
      __ZdlPv(ppuStack_220);
    }
    func_0x003499b4(&ppuStack_1b0,puStack_1a8);
    func_0x00349014(apuStack_148);
    func_0x003499b4(auStack_1d0);
    lVar12 = lStack_1c8;
    __Unwind_Resume();
    lStack_2e0 = *(long *)PTR____stack_chk_guard_00999f88;
    lVar6 = lVar12;
    func_0x00339d8c();
    iVar7 = (int)lVar6;
    if (*(long *)(puVar4 + 0x158) != 0) {
      uStack_370 = 0;
      puStack_368 = (undefined8 *)0x0;
      puStack_360 = (undefined8 *)0x0;
      puVar11 = *(undefined8 **)(puVar4 + 0x148);
      if (puVar11 != (undefined8 *)(puVar4 + 0x150)) {
        do {
          __ZNSt3__19to_stringEl(&uStack_3a0,puVar11[4]);
          FUN_00353254(apuStack_348,"subchannelId");
          uStack_330 = 4;
          uStack_320 = uStack_398;
          uStack_328 = uStack_3a0;
          lStack_318 = lStack_390;
          uStack_3a0 = 0;
          uStack_398 = 0;
          lStack_390 = 0;
          uStack_308 = 0;
          uStack_300 = 0;
          uStack_2f0 = 0;
          uStack_2e8 = 0;
          uStack_2f8 = 0;
          puStack_310 = &uStack_308;
          FUN_003490ec(&ppuStack_388,apuStack_348,1,&puStack_350);
          if (puStack_368 < puStack_360) {
            *(undefined4 *)puStack_368 = 5;
            puStack_368[2] = 0;
            puStack_368[3] = 0;
            puStack_368[1] = 0;
            plVar10 = puStack_368 + 5;
            *plVar10 = (long)puStack_380;
            puStack_368[4] = ppuStack_388;
            puStack_368[6] = lStack_378;
            if (lStack_378 == 0) {
              puStack_368[4] = plVar10;
            }
            else {
              puStack_380[2] = plVar10;
              puStack_380 = (undefined8 *)0x0;
              lStack_378 = 0;
              ppuStack_388 = &puStack_380;
            }
            puStack_368[7] = 0;
            puStack_368[8] = 0;
            puVar5 = puStack_368 + 10;
            puStack_368[9] = 0;
          }
          else {
            puVar5 = &uStack_370;
            FUN_003ab8a8(puVar5,&ppuStack_388);
          }
          puStack_368 = puVar5;
          func_0x003499b4(&ppuStack_388,puStack_380);
          puStack_350 = &uStack_2f8;
          FUN_0034a050(&puStack_350);
          func_0x003499b4(&puStack_310,uStack_308);
          if (lStack_318 < 0) {
            __ZdlPv(uStack_328);
          }
          if (cStack_331 < '\0') {
            __ZdlPv(apuStack_348[0]);
          }
          if (lStack_390 < 0) {
            __ZdlPv(uStack_3a0);
          }
          puVar5 = (undefined8 *)puVar11[1];
          puVar13 = puVar11;
          if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
            do {
              puVar11 = (undefined8 *)puVar13[2];
              bVar1 = (undefined8 *)*puVar11 != puVar13;
              puVar13 = puVar11;
            } while (bVar1);
          }
          else {
            do {
              puVar11 = puVar5;
              puVar5 = (undefined8 *)*puVar11;
            } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
          }
        } while (puVar11 != (undefined8 *)(puVar4 + 0x150));
      }
      FUN_00353254(apuStack_348,"subchannelRef");
      ppuVar9 = apuStack_348;
      lVar6 = lVar12;
      ppuStack_388 = apuStack_348;
      FUN_003583d4(lVar12,ppuVar9,&UNK_008000a0,&ppuStack_388,&uStack_3a0);
      iVar7 = (int)ppuVar9;
      *(undefined4 *)(lVar6 + 0x38) = 6;
      FUN_00349c88(lVar6 + 0x70);
      *(undefined8 **)(lVar6 + 0x78) = puStack_368;
      *(undefined8 *)(lVar6 + 0x70) = uStack_370;
      *(undefined8 **)(lVar6 + 0x80) = puStack_360;
      puStack_368 = (undefined8 *)0x0;
      puStack_360 = (undefined8 *)0x0;
      uStack_370 = 0;
      if (cStack_331 < '\0') {
        __ZdlPv(apuStack_348[0]);
      }
      apuStack_348[0] = &uStack_370;
      FUN_0034a050(apuStack_348);
    }
    if (*(long *)(puVar4 + 0x140) != 0) {
      uStack_370 = 0;
      puStack_368 = (undefined8 *)0x0;
      puStack_360 = (undefined8 *)0x0;
      puVar11 = *(undefined8 **)(puVar4 + 0x130);
      if (puVar11 != (undefined8 *)(puVar4 + 0x138)) {
        do {
          __ZNSt3__19to_stringEl(&uStack_3a0,puVar11[4]);
          FUN_00353254(apuStack_348,"channelId");
          uStack_330 = 4;
          uStack_320 = uStack_398;
          uStack_328 = uStack_3a0;
          lStack_318 = lStack_390;
          uStack_3a0 = 0;
          uStack_398 = 0;
          lStack_390 = 0;
          uStack_308 = 0;
          uStack_300 = 0;
          uStack_2f0 = 0;
          uStack_2e8 = 0;
          uStack_2f8 = 0;
          puStack_310 = &uStack_308;
          FUN_003490ec(&ppuStack_388,apuStack_348,1,&puStack_350);
          if (puStack_368 < puStack_360) {
            *(undefined4 *)puStack_368 = 5;
            puStack_368[2] = 0;
            puStack_368[3] = 0;
            puStack_368[1] = 0;
            plVar10 = puStack_368 + 5;
            *plVar10 = (long)puStack_380;
            puStack_368[4] = ppuStack_388;
            puStack_368[6] = lStack_378;
            if (lStack_378 == 0) {
              puStack_368[4] = plVar10;
            }
            else {
              puStack_380[2] = plVar10;
              puStack_380 = (undefined8 *)0x0;
              lStack_378 = 0;
              ppuStack_388 = &puStack_380;
            }
            puStack_368[7] = 0;
            puStack_368[8] = 0;
            puVar5 = puStack_368 + 10;
            puStack_368[9] = 0;
          }
          else {
            puVar5 = &uStack_370;
            FUN_003ab8a8(puVar5,&ppuStack_388);
          }
          puStack_368 = puVar5;
          func_0x003499b4(&ppuStack_388,puStack_380);
          puStack_350 = &uStack_2f8;
          FUN_0034a050(&puStack_350);
          func_0x003499b4(&puStack_310,uStack_308);
          if (lStack_318 < 0) {
            __ZdlPv(uStack_328);
          }
          if (cStack_331 < '\0') {
            __ZdlPv(apuStack_348[0]);
          }
          if (lStack_390 < 0) {
            __ZdlPv(uStack_3a0);
          }
          puVar5 = (undefined8 *)puVar11[1];
          puVar13 = puVar11;
          if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
            do {
              puVar11 = (undefined8 *)puVar13[2];
              bVar1 = (undefined8 *)*puVar11 != puVar13;
              puVar13 = puVar11;
            } while (bVar1);
          }
          else {
            do {
              puVar11 = puVar5;
              puVar5 = (undefined8 *)*puVar11;
            } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
          }
        } while (puVar11 != (undefined8 *)(puVar4 + 0x138));
      }
      FUN_00353254(apuStack_348,"channelRef");
      ppuVar9 = apuStack_348;
      ppuStack_388 = apuStack_348;
      FUN_003583d4(lVar12,ppuVar9,&UNK_008000a0,&ppuStack_388,&uStack_3a0);
      iVar7 = (int)ppuVar9;
      *(undefined4 *)(lVar12 + 0x38) = 6;
      FUN_00349c88(lVar12 + 0x70);
      *(undefined8 **)(lVar12 + 0x78) = puStack_368;
      *(undefined8 *)(lVar12 + 0x70) = uStack_370;
      *(undefined8 **)(lVar12 + 0x80) = puStack_360;
      puStack_368 = (undefined8 *)0x0;
      puStack_360 = (undefined8 *)0x0;
      uStack_370 = 0;
      if (cStack_331 < '\0') {
        __ZdlPv(apuStack_348[0]);
      }
      apuStack_348[0] = &uStack_370;
      FUN_0034a050(apuStack_348);
    }
    puVar8 = puVar4 + 0xf0;
    func_0x00339da8();
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_2e0) {
      ___stack_chk_fail();
      if (cStack_331 < '\0') {
        __ZdlPv(apuStack_348[0]);
      }
      apuStack_348[0] = &uStack_370;
      FUN_0034a050(apuStack_348);
      func_0x00339da8(puVar4 + 0xf0);
      __Unwind_Resume(puVar8);
      func_0x0040cf10();
      *(uint *)(puVar8 + 0xe8) = iVar7 << 1 | 1;
      return puVar8;
    }
    return puVar8;
  }
  return puVar4;
}



/* Entry: 003a8c10; end: 003a91c3;  */

void FUN_003a8c10(undefined4 *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 **ppuStack_378;
  undefined8 *puStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_340;
  undefined8 *apuStack_338 [2];
  char cStack_321;
  undefined4 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined1 uStack_259;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined1 ***pppuStack_228;
  undefined1 **ppuStack_220;
  long lStack_218;
  undefined1 **ppuStack_210;
  undefined8 uStack_208;
  char cStack_1f9;
  char cStack_1f1;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  undefined8 *puStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined1 *puStack_198;
  long lStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *apuStack_138 [2];
  char cStack_121;
  undefined8 uStack_118;
  char cStack_101;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 *apuStack_e8 [3];
  undefined8 auStack_d0 [2];
  char acStack_b9 [9];
  undefined8 auStack_b0 [2];
  char acStack_99 [9];
  long alStack_90 [6];
  
  alStack_90[5] = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_00358124(apuStack_138,"target",param_2 + 0x38);
  FUN_003490ec(auStack_1c0,apuStack_138,1,&ppuStack_1a0);
  ppuStack_1a0 = apuStack_e8;
  FUN_0034a050(&ppuStack_1a0);
  func_0x003499b4(auStack_100,uStack_f8);
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  if (cStack_121 < '\0') {
    __ZdlPv(apuStack_138[0]);
  }
  if ((*(uint *)(param_2 + 0xe8) & 1) != 0) {
    uVar2 = (ulong)(uint)((int)*(uint *)(param_2 + 0xe8) >> 1);
    FUN_003fae60();
    uStack_240 = uVar2;
    FUN_00357f34(apuStack_138,"state",&uStack_240);
    FUN_003490ec(&ppuStack_1a0,apuStack_138,1,&puStack_1a8);
    FUN_00353254(&ppuStack_210,"state");
    puVar3 = auStack_1c0;
    pppuStack_228 = &ppuStack_210;
    FUN_003583d4(puVar3,&ppuStack_210,&UNK_008000a0,&pppuStack_228,&uStack_258);
    puVar10 = (undefined8 *)(puVar3 + 0x60);
    *(undefined4 *)(puVar3 + 0x38) = 5;
    func_0x003499b4(puVar3 + 0x58,*puVar10);
    puVar7 = puStack_198;
    *(undefined1 ***)(puVar3 + 0x58) = ppuStack_1a0;
    *(undefined1 **)(puVar3 + 0x60) = puVar7;
    lVar11 = lStack_190;
    *(long *)(puVar3 + 0x68) = lStack_190;
    if (lVar11 == 0) {
      *(undefined8 **)(puVar3 + 0x58) = puVar10;
    }
    else {
      *(undefined8 **)(puVar7 + 0x10) = puVar10;
      ppuStack_1a0 = &puStack_198;
      puStack_198 = (undefined1 *)0x0;
      lStack_190 = 0;
      puVar7 = (undefined1 *)0x0;
    }
    if (cStack_1f9 < '\0') {
      __ZdlPv(ppuStack_210,puVar7);
      puVar7 = puStack_198;
    }
    func_0x003499b4(&ppuStack_1a0,puVar7);
    ppuStack_210 = apuStack_e8;
    FUN_0034a050(&ppuStack_210);
    func_0x003499b4(auStack_100,uStack_f8);
    if (cStack_101 < '\0') {
      __ZdlPv(uStack_118);
    }
    if (cStack_121 < '\0') {
      __ZdlPv(apuStack_138[0]);
    }
  }
  FUN_003a7aec(&ppuStack_210,param_2 + 0x70);
  if ((int)ppuStack_210 != 0) {
    FUN_00353254(apuStack_138,"trace");
    puVar3 = auStack_1c0;
    ppuStack_1a0 = apuStack_138;
    FUN_003583d4(puVar3,apuStack_138,&UNK_008000a0,&ppuStack_1a0,&pppuStack_228);
    FUN_00358178(puVar3 + 0x38,&ppuStack_210);
    if (cStack_121 < '\0') {
      __ZdlPv(apuStack_138[0]);
    }
  }
  FUN_003a879c(param_2 + 0x50,auStack_1c0);
  __ZNSt3__19to_stringEl(&uStack_258,*(undefined8 *)(param_2 + 0x18));
  FUN_00353254(&ppuStack_1a0,"channelId");
  lStack_170 = lStack_248;
  uStack_188 = 4;
  uStack_178 = uStack_250;
  uStack_180 = uStack_258;
  uStack_258 = 0;
  uStack_250 = 0;
  lStack_248 = 0;
  puStack_168 = &uStack_160;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  FUN_003490ec(&uStack_240,&ppuStack_1a0,1,&uStack_259);
  FUN_003582a0(apuStack_138,"ref",&uStack_240);
  func_0x00358310(auStack_d0,"data",auStack_1c0);
  FUN_003490ec(&pppuStack_228,apuStack_138,2,&puStack_1a8);
  lVar11 = 0;
  do {
    puStack_1a8 = (undefined8 *)((long)alStack_90 + lVar11 + 0x10);
    FUN_0034a050(&puStack_1a8);
    func_0x003499b4(acStack_99 + lVar11 + 1,*(undefined8 *)((long)alStack_90 + lVar11));
    if (acStack_99[lVar11] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar11));
    }
    if (acStack_b9[lVar11] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar11));
    }
    lVar11 = lVar11 + -0x68;
  } while (lVar11 != -0xd0);
  func_0x003499b4(&uStack_240,uStack_238);
  puStack_1a8 = &uStack_150;
  FUN_0034a050(&puStack_1a8);
  func_0x003499b4(&puStack_168,uStack_160);
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_190 < 0) {
    __ZdlPv(ppuStack_1a0);
  }
  if (lStack_248 < 0) {
    __ZdlPv(uStack_258);
  }
  FUN_003a91c4(param_2,&pppuStack_228);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 ****)(param_1 + 8) = pppuStack_228;
  plVar9 = (long *)(param_1 + 10);
  *plVar9 = (long)ppuStack_220;
  *(long *)(param_1 + 0xc) = lStack_218;
  if (lStack_218 == 0) {
    *(long **)(param_1 + 8) = plVar9;
  }
  else {
    pppuStack_228 = &ppuStack_220;
    ppuStack_220[2] = (undefined1 *)plVar9;
    ppuStack_220 = (undefined1 **)0x0;
    lStack_218 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x003499b4(&pppuStack_228,ppuStack_220);
  apuStack_138[0] = auStack_1d8;
  FUN_0034a050(apuStack_138);
  func_0x003499b4(auStack_1f0,uStack_1e8);
  if (cStack_1f1 < '\0') {
    __ZdlPv(uStack_208);
  }
  puVar3 = auStack_1c0;
  func_0x003499b4(puVar3,lStack_1b8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == alStack_90[5]) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_1f9 < '\0') {
    __ZdlPv(ppuStack_210);
  }
  func_0x003499b4(&ppuStack_1a0,puStack_198);
  func_0x00349014(apuStack_138);
  func_0x003499b4(auStack_1c0);
  lVar11 = lStack_1b8;
  __Unwind_Resume();
  lStack_2d0 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar5 = lVar11;
  func_0x00339d8c();
  iVar6 = (int)lVar5;
  if (*(long *)(puVar3 + 0x158) != 0) {
    uStack_360 = 0;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    puVar10 = *(undefined8 **)(puVar3 + 0x148);
    if (puVar10 != (undefined8 *)(puVar3 + 0x150)) {
      do {
        __ZNSt3__19to_stringEl(&uStack_390,puVar10[4]);
        FUN_00353254(apuStack_338,"subchannelId");
        uStack_320 = 4;
        uStack_310 = uStack_388;
        uStack_318 = uStack_390;
        lStack_308 = lStack_380;
        uStack_390 = 0;
        uStack_388 = 0;
        lStack_380 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2e8 = 0;
        puStack_300 = &uStack_2f8;
        FUN_003490ec(&ppuStack_378,apuStack_338,1,&puStack_340);
        if (puStack_358 < puStack_350) {
          *(undefined4 *)puStack_358 = 5;
          puStack_358[2] = 0;
          puStack_358[3] = 0;
          puStack_358[1] = 0;
          plVar9 = puStack_358 + 5;
          *plVar9 = (long)puStack_370;
          puStack_358[4] = ppuStack_378;
          puStack_358[6] = lStack_368;
          if (lStack_368 == 0) {
            puStack_358[4] = plVar9;
          }
          else {
            puStack_370[2] = plVar9;
            puStack_370 = (undefined8 *)0x0;
            lStack_368 = 0;
            ppuStack_378 = &puStack_370;
          }
          puStack_358[7] = 0;
          puStack_358[8] = 0;
          puVar4 = puStack_358 + 10;
          puStack_358[9] = 0;
        }
        else {
          puVar4 = &uStack_360;
          FUN_003ab8a8(puVar4,&ppuStack_378);
        }
        puStack_358 = puVar4;
        func_0x003499b4(&ppuStack_378,puStack_370);
        puStack_340 = &uStack_2e8;
        FUN_0034a050(&puStack_340);
        func_0x003499b4(&puStack_300,uStack_2f8);
        if (lStack_308 < 0) {
          __ZdlPv(uStack_318);
        }
        if (cStack_321 < '\0') {
          __ZdlPv(apuStack_338[0]);
        }
        if (lStack_380 < 0) {
          __ZdlPv(uStack_390);
        }
        puVar4 = (undefined8 *)puVar10[1];
        puVar12 = puVar10;
        if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
          do {
            puVar10 = (undefined8 *)puVar12[2];
            bVar1 = (undefined8 *)*puVar10 != puVar12;
            puVar12 = puVar10;
          } while (bVar1);
        }
        else {
          do {
            puVar10 = puVar4;
            puVar4 = (undefined8 *)*puVar10;
          } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
        }
      } while (puVar10 != (undefined8 *)(puVar3 + 0x150));
    }
    FUN_00353254(apuStack_338,"subchannelRef");
    ppuVar8 = apuStack_338;
    lVar5 = lVar11;
    ppuStack_378 = apuStack_338;
    FUN_003583d4(lVar11,ppuVar8,&UNK_008000a0,&ppuStack_378,&uStack_390);
    iVar6 = (int)ppuVar8;
    *(undefined4 *)(lVar5 + 0x38) = 6;
    FUN_00349c88(lVar5 + 0x70);
    *(undefined8 **)(lVar5 + 0x78) = puStack_358;
    *(undefined8 *)(lVar5 + 0x70) = uStack_360;
    *(undefined8 **)(lVar5 + 0x80) = puStack_350;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    uStack_360 = 0;
    if (cStack_321 < '\0') {
      __ZdlPv(apuStack_338[0]);
    }
    apuStack_338[0] = &uStack_360;
    FUN_0034a050(apuStack_338);
  }
  if (*(long *)(puVar3 + 0x140) != 0) {
    uStack_360 = 0;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    puVar10 = *(undefined8 **)(puVar3 + 0x130);
    if (puVar10 != (undefined8 *)(puVar3 + 0x138)) {
      do {
        __ZNSt3__19to_stringEl(&uStack_390,puVar10[4]);
        FUN_00353254(apuStack_338,"channelId");
        uStack_320 = 4;
        uStack_310 = uStack_388;
        uStack_318 = uStack_390;
        lStack_308 = lStack_380;
        uStack_390 = 0;
        uStack_388 = 0;
        lStack_380 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2e8 = 0;
        puStack_300 = &uStack_2f8;
        FUN_003490ec(&ppuStack_378,apuStack_338,1,&puStack_340);
        if (puStack_358 < puStack_350) {
          *(undefined4 *)puStack_358 = 5;
          puStack_358[2] = 0;
          puStack_358[3] = 0;
          puStack_358[1] = 0;
          plVar9 = puStack_358 + 5;
          *plVar9 = (long)puStack_370;
          puStack_358[4] = ppuStack_378;
          puStack_358[6] = lStack_368;
          if (lStack_368 == 0) {
            puStack_358[4] = plVar9;
          }
          else {
            puStack_370[2] = plVar9;
            puStack_370 = (undefined8 *)0x0;
            lStack_368 = 0;
            ppuStack_378 = &puStack_370;
          }
          puStack_358[7] = 0;
          puStack_358[8] = 0;
          puVar4 = puStack_358 + 10;
          puStack_358[9] = 0;
        }
        else {
          puVar4 = &uStack_360;
          FUN_003ab8a8(puVar4,&ppuStack_378);
        }
        puStack_358 = puVar4;
        func_0x003499b4(&ppuStack_378,puStack_370);
        puStack_340 = &uStack_2e8;
        FUN_0034a050(&puStack_340);
        func_0x003499b4(&puStack_300,uStack_2f8);
        if (lStack_308 < 0) {
          __ZdlPv(uStack_318);
        }
        if (cStack_321 < '\0') {
          __ZdlPv(apuStack_338[0]);
        }
        if (lStack_380 < 0) {
          __ZdlPv(uStack_390);
        }
        puVar4 = (undefined8 *)puVar10[1];
        puVar12 = puVar10;
        if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
          do {
            puVar10 = (undefined8 *)puVar12[2];
            bVar1 = (undefined8 *)*puVar10 != puVar12;
            puVar12 = puVar10;
          } while (bVar1);
        }
        else {
          do {
            puVar10 = puVar4;
            puVar4 = (undefined8 *)*puVar10;
          } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
        }
      } while (puVar10 != (undefined8 *)(puVar3 + 0x138));
    }
    FUN_00353254(apuStack_338,"channelRef");
    ppuVar8 = apuStack_338;
    ppuStack_378 = apuStack_338;
    FUN_003583d4(lVar11,ppuVar8,&UNK_008000a0,&ppuStack_378,&uStack_390);
    iVar6 = (int)ppuVar8;
    *(undefined4 *)(lVar11 + 0x38) = 6;
    FUN_00349c88(lVar11 + 0x70);
    *(undefined8 **)(lVar11 + 0x78) = puStack_358;
    *(undefined8 *)(lVar11 + 0x70) = uStack_360;
    *(undefined8 **)(lVar11 + 0x80) = puStack_350;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)0x0;
    uStack_360 = 0;
    if (cStack_321 < '\0') {
      __ZdlPv(apuStack_338[0]);
    }
    apuStack_338[0] = &uStack_360;
    FUN_0034a050(apuStack_338);
  }
  puVar7 = puVar3 + 0xf0;
  func_0x00339da8();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_2d0) {
    ___stack_chk_fail();
    if (cStack_321 < '\0') {
      __ZdlPv(apuStack_338[0]);
    }
    apuStack_338[0] = &uStack_360;
    FUN_0034a050(apuStack_338);
    func_0x00339da8(puVar3 + 0xf0);
    __Unwind_Resume(puVar7);
    func_0x0040cf10();
    *(uint *)(puVar7 + 0xe8) = iVar6 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 003a91c4; end: 003a972b;  */

void FUN_003a91c4(long param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 **ppuStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e0;
  undefined8 *apuStack_d8 [2];
  char cStack_c1;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar3 = param_2;
  func_0x00339d8c();
  iVar4 = (int)lVar3;
  if (*(long *)(param_1 + 0x158) != 0) {
    uStack_100 = 0;
    puStack_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    plVar8 = *(long **)(param_1 + 0x148);
    if (plVar8 != (long *)(param_1 + 0x150)) {
      do {
        __ZNSt3__19to_stringEl(&uStack_130,plVar8[4]);
        FUN_00353254(apuStack_d8,"subchannelId");
        uStack_c0 = 4;
        uStack_b0 = uStack_128;
        uStack_b8 = uStack_130;
        lStack_a8 = lStack_120;
        uStack_130 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        puStack_a0 = &uStack_98;
        FUN_003490ec(&ppuStack_118,apuStack_d8,1,&puStack_e0);
        if (puStack_f8 < puStack_f0) {
          *(undefined4 *)puStack_f8 = 5;
          puStack_f8[2] = 0;
          puStack_f8[3] = 0;
          puStack_f8[1] = 0;
          plVar6 = puStack_f8 + 5;
          *plVar6 = (long)puStack_110;
          puStack_f8[4] = ppuStack_118;
          puStack_f8[6] = lStack_108;
          if (lStack_108 == 0) {
            puStack_f8[4] = plVar6;
          }
          else {
            puStack_110[2] = plVar6;
            puStack_110 = (undefined8 *)0x0;
            lStack_108 = 0;
            ppuStack_118 = &puStack_110;
          }
          puStack_f8[7] = 0;
          puStack_f8[8] = 0;
          puVar2 = puStack_f8 + 10;
          puStack_f8[9] = 0;
        }
        else {
          puVar2 = &uStack_100;
          FUN_003ab8a8(puVar2,&ppuStack_118);
        }
        puStack_f8 = puVar2;
        func_0x003499b4(&ppuStack_118,puStack_110);
        puStack_e0 = &uStack_88;
        FUN_0034a050(&puStack_e0);
        func_0x003499b4(&puStack_a0,uStack_98);
        if (lStack_a8 < 0) {
          __ZdlPv(uStack_b8);
        }
        if (cStack_c1 < '\0') {
          __ZdlPv(apuStack_d8[0]);
        }
        if (lStack_120 < 0) {
          __ZdlPv(uStack_130);
        }
        plVar6 = (long *)plVar8[1];
        plVar7 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar7[2];
            bVar1 = (long *)*plVar8 != plVar7;
            plVar7 = plVar8;
          } while (bVar1);
        }
        else {
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      } while (plVar8 != (long *)(param_1 + 0x150));
    }
    FUN_00353254(apuStack_d8,"subchannelRef");
    ppuVar5 = apuStack_d8;
    lVar3 = param_2;
    ppuStack_118 = apuStack_d8;
    FUN_003583d4(param_2,ppuVar5,&UNK_008000a0,&ppuStack_118,&uStack_130);
    iVar4 = (int)ppuVar5;
    *(undefined4 *)(lVar3 + 0x38) = 6;
    FUN_00349c88(lVar3 + 0x70);
    *(undefined8 **)(lVar3 + 0x78) = puStack_f8;
    *(undefined8 *)(lVar3 + 0x70) = uStack_100;
    *(undefined8 **)(lVar3 + 0x80) = puStack_f0;
    puStack_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    uStack_100 = 0;
    if (cStack_c1 < '\0') {
      __ZdlPv(apuStack_d8[0]);
    }
    apuStack_d8[0] = &uStack_100;
    FUN_0034a050(apuStack_d8);
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    uStack_100 = 0;
    puStack_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    plVar8 = *(long **)(param_1 + 0x130);
    if (plVar8 != (long *)(param_1 + 0x138)) {
      do {
        __ZNSt3__19to_stringEl(&uStack_130,plVar8[4]);
        FUN_00353254(apuStack_d8,"channelId");
        uStack_c0 = 4;
        uStack_b0 = uStack_128;
        uStack_b8 = uStack_130;
        lStack_a8 = lStack_120;
        uStack_130 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        puStack_a0 = &uStack_98;
        FUN_003490ec(&ppuStack_118,apuStack_d8,1,&puStack_e0);
        if (puStack_f8 < puStack_f0) {
          *(undefined4 *)puStack_f8 = 5;
          puStack_f8[2] = 0;
          puStack_f8[3] = 0;
          puStack_f8[1] = 0;
          plVar6 = puStack_f8 + 5;
          *plVar6 = (long)puStack_110;
          puStack_f8[4] = ppuStack_118;
          puStack_f8[6] = lStack_108;
          if (lStack_108 == 0) {
            puStack_f8[4] = plVar6;
          }
          else {
            puStack_110[2] = plVar6;
            puStack_110 = (undefined8 *)0x0;
            lStack_108 = 0;
            ppuStack_118 = &puStack_110;
          }
          puStack_f8[7] = 0;
          puStack_f8[8] = 0;
          puVar2 = puStack_f8 + 10;
          puStack_f8[9] = 0;
        }
        else {
          puVar2 = &uStack_100;
          FUN_003ab8a8(puVar2,&ppuStack_118);
        }
        puStack_f8 = puVar2;
        func_0x003499b4(&ppuStack_118,puStack_110);
        puStack_e0 = &uStack_88;
        FUN_0034a050(&puStack_e0);
        func_0x003499b4(&puStack_a0,uStack_98);
        if (lStack_a8 < 0) {
          __ZdlPv(uStack_b8);
        }
        if (cStack_c1 < '\0') {
          __ZdlPv(apuStack_d8[0]);
        }
        if (lStack_120 < 0) {
          __ZdlPv(uStack_130);
        }
        plVar6 = (long *)plVar8[1];
        plVar7 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar7[2];
            bVar1 = (long *)*plVar8 != plVar7;
            plVar7 = plVar8;
          } while (bVar1);
        }
        else {
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      } while (plVar8 != (long *)(param_1 + 0x138));
    }
    FUN_00353254(apuStack_d8,"channelRef");
    ppuVar5 = apuStack_d8;
    ppuStack_118 = apuStack_d8;
    FUN_003583d4(param_2,ppuVar5,&UNK_008000a0,&ppuStack_118,&uStack_130);
    iVar4 = (int)ppuVar5;
    *(undefined4 *)(param_2 + 0x38) = 6;
    FUN_00349c88(param_2 + 0x70);
    *(undefined8 **)(param_2 + 0x78) = puStack_f8;
    *(undefined8 *)(param_2 + 0x70) = uStack_100;
    *(undefined8 **)(param_2 + 0x80) = puStack_f0;
    puStack_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    uStack_100 = 0;
    if (cStack_c1 < '\0') {
      __ZdlPv(apuStack_d8[0]);
    }
    apuStack_d8[0] = &uStack_100;
    FUN_0034a050(apuStack_d8);
  }
  lVar3 = param_1 + 0xf0;
  func_0x00339da8();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    if (cStack_c1 < '\0') {
      __ZdlPv(apuStack_d8[0]);
    }
    apuStack_d8[0] = &uStack_100;
    FUN_0034a050(apuStack_d8);
    func_0x00339da8(param_1 + 0xf0);
    __Unwind_Resume(lVar3);
    func_0x0040cf10();
    *(uint *)(lVar3 + 0xe8) = iVar4 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 003a972c; end: 003a973b;  */

void FUN_003a972c(long param_1,int param_2)

{
  *(uint *)(param_1 + 0xe8) = param_2 << 1 | 1;
  return;
}



/* Entry: 003a973c; end: 003a97a3;  */

void FUN_003a973c(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x00339d8c(param_1 + 0xf0);
  FUN_003ab9f8(param_1 + 0x148,&uStack_28,&uStack_28);
  func_0x00339da8(param_1 + 0xf0);
  return;
}



/* Entry: 003a97a4; end: 003a9807;  */

void FUN_003a97a4(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x00339d8c(param_1 + 0xf0);
  func_0x003abb04(param_1 + 0x148,&uStack_28);
  func_0x00339da8(param_1 + 0xf0);
  return;
}



/* Entry: 003a9808; end: 003a986b;  */

void FUN_003a9808(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x00339d8c(param_1 + 0xd0);
  FUN_003abbec(param_1 + 0x110,&uStack_28);
  func_0x00339da8(param_1 + 0xd0);
  return;
}



/* Entry: 003a986c; end: 003a9b7f;  */

void FUN_003a986c(undefined4 *param_1,int *param_2)

{
  long **pplVar1;
  long *plVar2;
  undefined1 *apuStack_88 [2];
  char cStack_71;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 *puStack_68;
  undefined7 uStack_60;
  char cStack_59;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_39;
  undefined1 **ppuStack_38;
  
  lStack_50 = 0;
  lStack_48 = 0;
  plStack_58 = &lStack_50;
  if (*param_2 == 2) {
    FUN_00353254(&uStack_70,"other_name");
    pplVar1 = &plStack_58;
    apuStack_88[0] = &uStack_70;
    FUN_003583d4(pplVar1,&uStack_70,&UNK_008000a0,apuStack_88,&ppuStack_38);
    *(undefined4 *)(pplVar1 + 7) = 4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pplVar1 + 8,param_2 + 2);
LAB_003a9940:
    if (cStack_59 < '\0') {
      __ZdlPv(CONCAT71(uStack_6f,uStack_70));
    }
  }
  else if (*param_2 == 1) {
    FUN_00353254(&uStack_70,"standard_name");
    pplVar1 = &plStack_58;
    apuStack_88[0] = &uStack_70;
    FUN_003583d4(pplVar1,&uStack_70,&UNK_008000a0,apuStack_88,&ppuStack_38);
    *(undefined4 *)(pplVar1 + 7) = 4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pplVar1 + 8,param_2 + 2);
    goto LAB_003a9940;
  }
  plVar2 = (long *)(param_2 + 8);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    if (*(long *)(param_2 + 10) != 0) {
      plVar2 = (long *)*plVar2;
      goto LAB_003a9974;
    }
  }
  else if (*(char *)((long)param_2 + 0x37) != '\0') {
LAB_003a9974:
    FUN_00572fb8(&uStack_70,plVar2);
    FUN_00353254(apuStack_88,"local_certificate");
    pplVar1 = &plStack_58;
    ppuStack_38 = apuStack_88;
    FUN_003583d4(pplVar1,apuStack_88,&UNK_008000a0,&ppuStack_38,&uStack_39);
    *(undefined4 *)(pplVar1 + 7) = 4;
    if (*(char *)((long)pplVar1 + 0x57) < '\0') {
      __ZdlPv(pplVar1[8]);
    }
    plVar2 = (long *)CONCAT71(uStack_6f,uStack_70);
    pplVar1[9] = puStack_68;
    pplVar1[8] = plVar2;
    pplVar1[10] = (long *)CONCAT17(cStack_59,uStack_60);
    cStack_59 = '\0';
    uStack_70 = 0;
    if ((cStack_71 < '\0') && (__ZdlPv(apuStack_88[0]), cStack_59 < '\0')) {
      __ZdlPv(CONCAT71(uStack_6f,uStack_70));
    }
  }
  plVar2 = (long *)(param_2 + 0xe);
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_003a9ab8;
    plVar2 = (long *)*plVar2;
  }
  else if (*(char *)((long)param_2 + 0x4f) == '\0') goto LAB_003a9ab8;
  FUN_00572fb8(&uStack_70,plVar2);
  FUN_00353254(apuStack_88,"remote_certificate");
  pplVar1 = &plStack_58;
  ppuStack_38 = apuStack_88;
  FUN_003583d4(pplVar1,apuStack_88,&UNK_008000a0,&ppuStack_38,&uStack_39);
  *(undefined4 *)(pplVar1 + 7) = 4;
  if (*(char *)((long)pplVar1 + 0x57) < '\0') {
    __ZdlPv(pplVar1[8]);
  }
  plVar2 = (long *)CONCAT71(uStack_6f,uStack_70);
  pplVar1[9] = puStack_68;
  pplVar1[8] = plVar2;
  pplVar1[10] = (long *)CONCAT17(cStack_59,uStack_60);
  cStack_59 = '\0';
  uStack_70 = 0;
  if ((cStack_71 < '\0') && (__ZdlPv(apuStack_88[0]), cStack_59 < '\0')) {
    __ZdlPv(CONCAT71(uStack_6f,uStack_70));
  }
LAB_003a9ab8:
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_58;
  plVar2 = (long *)(param_1 + 10);
  *plVar2 = lStack_50;
  *(long *)(param_1 + 0xc) = lStack_48;
  if (lStack_48 == 0) {
    *(long **)(param_1 + 8) = plVar2;
  }
  else {
    *(long **)(lStack_50 + 0x10) = plVar2;
    lStack_50 = 0;
    lStack_48 = 0;
    plStack_58 = &lStack_50;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x003499b4(&plStack_58,lStack_50);
  return;
}



/* Entry: 003a9b80; end: 003a9d6b;  */

void FUN_003a9b80(undefined4 *param_1,long param_2)

{
  long **pplVar1;
  long *plVar2;
  undefined8 *apuStack_c0 [2];
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_91;
  char cStack_89;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 auStack_70 [3];
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  lStack_50 = 0;
  lStack_48 = 0;
  plStack_58 = &lStack_50;
  if (*(int *)(param_2 + 0x10) == 2) {
    if (*(char *)(param_2 + 0xc0) == '\0') goto LAB_003a9cac;
    FUN_00353254(&uStack_a8,"other");
    pplVar1 = &plStack_58;
    apuStack_c0[0] = &uStack_a8;
    FUN_003583d4(pplVar1,&uStack_a8,&UNK_008000a0,apuStack_c0,&puStack_38);
    FUN_00349690(pplVar1 + 7,param_2 + 0x70);
  }
  else {
    if ((*(int *)(param_2 + 0x10) != 1) || (*(char *)(param_2 + 0x68) == '\0')) goto LAB_003a9cac;
    FUN_003a986c(&uStack_a8,param_2 + 0x18);
    FUN_00353254(apuStack_c0,"tls");
    pplVar1 = &plStack_58;
    puStack_38 = (undefined1 *)apuStack_c0;
    FUN_003583d4(pplVar1,apuStack_c0,&UNK_008000a0,&puStack_38,&uStack_39);
    FUN_00358178(pplVar1 + 7,&uStack_a8);
    if (cStack_a9 < '\0') {
      __ZdlPv(apuStack_c0[0]);
    }
    apuStack_c0[0] = auStack_70;
    FUN_0034a050(apuStack_c0);
    func_0x003499b4(auStack_88,uStack_80);
    uStack_a8 = uStack_a0;
    cStack_91 = cStack_89;
  }
  if (cStack_91 < '\0') {
    __ZdlPv(uStack_a8);
  }
LAB_003a9cac:
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_58;
  plVar2 = (long *)(param_1 + 10);
  *plVar2 = lStack_50;
  *(long *)(param_1 + 0xc) = lStack_48;
  if (lStack_48 == 0) {
    *(long **)(param_1 + 8) = plVar2;
  }
  else {
    *(long **)(lStack_50 + 0x10) = plVar2;
    lStack_50 = 0;
    lStack_48 = 0;
    plStack_58 = &lStack_50;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x003499b4(&plStack_58,lStack_50);
  return;
}



/* Entry: 003a9d6c; end: 003a9d83;  */

void FUN_003a9d6c(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(char **)(param_1 + 2) = "grpc.internal.channelz_security";
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_009df598;
  return;
}



/* Entry: 003a9d84; end: 003a9de3;  */

void FUN_003a9d84(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_003a28d0(param_2,"grpc.internal.channelz_security");
  if ((param_2 == (int *)0x0) || (*param_2 != 2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 003a9de4; end: 003a9ed3;  */

undefined8 *
FUN_003a9de4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  lStack_40 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_003a83bc(param_1,4,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *param_1 = &PTR_FUN_009df5c0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[0x16] = param_3[2];
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[0x17] = 0;
  param_1[0x17] = *param_5;
  *param_5 = 0;
  return param_1;
}



/* Entry: 003a9ed4; end: 003a9ed7;  */

undefined8 *
FUN_003a9ed4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  lStack_40 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_003a83bc(param_1,4,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *param_1 = &PTR_FUN_009df5c0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[0x16] = param_3[2];
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[0x17] = 0;
  param_1[0x17] = *param_5;
  *param_5 = 0;
  return param_1;
}



/* Entry: 003a9ed8; end: 003a9fbb;  */

void FUN_003a9ed8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_2 + 0x38);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0033a6ec();
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 003a9fbc; end: 003aab03;  */

undefined8 **** FUN_003a9fbc(undefined4 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ******ppppppuVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  long **pplVar7;
  code *pcVar8;
  undefined8 ****ppppuVar9;
  undefined1 ***pppuVar10;
  char *pcVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 *****pppppuVar14;
  long *plVar15;
  undefined8 ******ppppppuVar16;
  long *plVar17;
  int *piVar18;
  int iVar19;
  undefined8 **ppuVar20;
  long lVar21;
  undefined8 ****ppppuVar22;
  int *piVar23;
  undefined1 *apuStack_590 [2];
  char cStack_579;
  undefined1 uStack_571;
  undefined8 *****pppppuStack_570;
  undefined8 ****ppppuStack_568;
  long **pplStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 *****pppppuStack_540;
  ulong uStack_538;
  byte bStack_529;
  ulong uStack_528;
  undefined4 uStack_51c;
  undefined8 *****pppppuStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 *****pppppuStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  long lStack_4d8;
  char cStack_4c9;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  byte bStack_499;
  undefined8 ***pppuStack_450;
  long **pplStack_448;
  long **pplStack_440;
  long lStack_438;
  undefined1 uStack_429;
  undefined1 **ppuStack_428;
  undefined8 *****apppppuStack_420 [2];
  char cStack_409;
  undefined8 uStack_400;
  char cStack_3e9;
  undefined1 auStack_3e8 [8];
  undefined8 uStack_3e0;
  undefined8 ****appppuStack_3d0 [3];
  undefined8 auStack_3b8 [2];
  char acStack_3a1 [9];
  undefined8 auStack_398 [2];
  char acStack_381 [9];
  undefined8 auStack_378 [2];
  undefined1 auStack_368 [24];
  undefined8 *****pppppuStack_350;
  undefined8 ****ppppuStack_348;
  long **pplStack_340;
  long lStack_2c8;
  undefined1 uStack_261;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined1 **ppuStack_248;
  undefined8 uStack_240;
  undefined1 **ppuStack_230;
  undefined1 *puStack_228;
  long lStack_220;
  undefined8 ***pppuStack_218;
  long **pplStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  undefined1 *apuStack_1f8 [2];
  char cStack_1e1;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [2];
  char acStack_179 [9];
  undefined8 auStack_170 [2];
  char acStack_159 [9];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [24];
  undefined1 uStack_128;
  undefined7 uStack_127;
  long **pplStack_120;
  undefined7 uStack_118;
  char cStack_111;
  char cStack_109;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f0 [48];
  undefined8 auStack_c0 [2];
  char acStack_a9 [9];
  undefined8 auStack_a0 [2];
  char acStack_89 [9];
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuStack_218 = &pplStack_210;
  pplStack_210 = (long **)0x0;
  uStack_208 = 0;
  if (*(long *)(param_2 + 0x38) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    FUN_00353254(apuStack_1f8,"streamsStarted");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
    if (*(double *)(param_2 + 0x68) != 0.0) {
      FUN_0033a704();
      FUN_0033a30c();
      FUN_003394e4(&uStack_128);
      FUN_00353254(apuStack_1f8,"lastLocalStreamCreatedTimestamp");
      ppppuVar9 = &pppuStack_218;
      ppuStack_230 = apuStack_1f8;
      FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
      *(undefined4 *)(ppppuVar9 + 7) = 4;
      if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
        __ZdlPv(ppppuVar9[8]);
      }
      pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
      ppppuVar9[9] = (undefined8 ***)pplStack_120;
      ppppuVar9[8] = pppuVar13;
      ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
      cStack_111 = '\0';
      uStack_128 = 0;
      if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
        __ZdlPv(CONCAT71(uStack_127,uStack_128));
      }
    }
    if (*(double *)(param_2 + 0x70) != 0.0) {
      FUN_0033a704();
      FUN_0033a30c();
      FUN_003394e4(&uStack_128);
      FUN_00353254(apuStack_1f8,"lastRemoteStreamCreatedTimestamp");
      ppppuVar9 = &pppuStack_218;
      ppuStack_230 = apuStack_1f8;
      FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
      *(undefined4 *)(ppppuVar9 + 7) = 4;
      if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
        __ZdlPv(ppppuVar9[8]);
      }
      pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
      ppppuVar9[9] = (undefined8 ***)pplStack_120;
      ppppuVar9[8] = pppuVar13;
      ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
      cStack_111 = '\0';
      uStack_128 = 0;
      if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
        __ZdlPv(CONCAT71(uStack_127,uStack_128));
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    FUN_00353254(apuStack_1f8,"streamsSucceeded");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    FUN_00353254(apuStack_1f8,"streamsFailed");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    FUN_00353254(apuStack_1f8,"messagesSent");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
    FUN_0033a704(*(undefined8 *)(param_2 + 0x78));
    FUN_0033a30c();
    FUN_003394e4(&uStack_128);
    FUN_00353254(apuStack_1f8,"lastMessageSentTimestamp");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    FUN_00353254(apuStack_1f8,"messagesReceived");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
    FUN_0033a704(*(undefined8 *)(param_2 + 0x80));
    FUN_0033a30c();
    FUN_003394e4(&uStack_128);
    FUN_00353254(apuStack_1f8,"lastMessageReceivedTimestamp");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    FUN_00353254(apuStack_1f8,"keepAlivesSent");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_003583d4(ppppuVar9,apuStack_1f8,&UNK_008000a0,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  __ZNSt3__19to_stringEl(&uStack_260,*(undefined8 *)(param_2 + 0x18));
  FUN_00353254(apuStack_1f8,"socketId");
  uStack_1c8 = lStack_250;
  uStack_1e0 = 4;
  uStack_1d0 = uStack_258;
  uStack_1d8 = uStack_260;
  uStack_260 = 0;
  uStack_258 = 0;
  lStack_250 = 0;
  puStack_1c0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1a8 = 0;
  FUN_00358380(auStack_190,"name",param_2 + 0x20);
  FUN_003490ec(&ppuStack_248,apuStack_1f8,2,&uStack_261);
  FUN_003582a0(&uStack_128,"ref",&ppuStack_248);
  func_0x00358310(auStack_c0,"data",&pppuStack_218);
  FUN_003490ec(&ppuStack_230,&uStack_128,2,&puStack_200);
  lVar21 = 0;
  do {
    puStack_200 = auStack_70 + lVar21;
    FUN_0034a050(&puStack_200);
    func_0x003499b4(acStack_89 + lVar21 + 1,*(undefined8 *)((long)auStack_80 + lVar21));
    if (acStack_89[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar21));
    }
    if (acStack_a9[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar21));
    }
    lVar21 = lVar21 + -0x68;
  } while (lVar21 != -0xd0);
  func_0x003499b4(&ppuStack_248,uStack_240);
  lVar21 = 0;
  do {
    puStack_200 = auStack_140 + lVar21;
    FUN_0034a050(&puStack_200);
    func_0x003499b4(acStack_159 + lVar21 + 1,*(undefined8 *)((long)auStack_150 + lVar21));
    if (acStack_159[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar21));
    }
    if (acStack_179[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar21));
    }
    lVar21 = lVar21 + -0x68;
  } while (lVar21 != -0xd0);
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if ((*(long *)(param_2 + 0xb8) != 0) && (*(int *)(*(long *)(param_2 + 0xb8) + 0x10) != 0)) {
    FUN_003a9b80(&uStack_128);
    FUN_00353254(apuStack_1f8,"security");
    pppuVar10 = &ppuStack_230;
    ppuStack_248 = apuStack_1f8;
    FUN_003583d4(pppuVar10,apuStack_1f8,&UNK_008000a0,&ppuStack_248,&uStack_260);
    FUN_00358178(pppuVar10 + 7,&uStack_128);
    if (cStack_1e1 < '\0') {
      __ZdlPv(apuStack_1f8[0]);
    }
    apuStack_1f8[0] = auStack_f0;
    FUN_0034a050(apuStack_1f8);
    func_0x003499b4(auStack_108,uStack_100);
    if (cStack_109 < '\0') {
      __ZdlPv(pplStack_120);
    }
  }
  plVar15 = (long *)(param_2 + 0xa0);
  if (*(char *)(param_2 + 0xb7) < '\0') {
    plVar15 = (long *)*plVar15;
  }
  FUN_003aab04(&ppuStack_230,"remote",plVar15);
  plVar15 = (long *)(param_2 + 0x88);
  if (*(char *)(param_2 + 0x9f) < '\0') {
    plVar15 = (long *)*plVar15;
  }
  FUN_003aab04(&ppuStack_230,"local");
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 ***)(param_1 + 8) = ppuStack_230;
  plVar17 = (long *)(param_1 + 10);
  *plVar17 = (long)puStack_228;
  *(long *)(param_1 + 0xc) = lStack_220;
  if (lStack_220 == 0) {
    *(long **)(param_1 + 8) = plVar17;
  }
  else {
    ppuStack_230 = &puStack_228;
    *(long **)(puStack_228 + 0x10) = plVar17;
    puStack_228 = (undefined1 *)0x0;
    lStack_220 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x003499b4(&ppuStack_230,puStack_228);
  ppppuVar9 = &pppuStack_218;
  func_0x003499b4(ppppuVar9,pplStack_210);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return ppppuVar9;
  }
  ___stack_chk_fail();
  if (cStack_1e1 < '\0') {
    __ZdlPv(apuStack_1f8[0]);
  }
  FUN_00348fc0(&uStack_128);
  func_0x003499b4(&ppuStack_230,puStack_228);
  pppuVar13 = (undefined8 ***)pplStack_210;
  func_0x003499b4(&pppuStack_218);
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_438 = (long)plVar15;
  if (plVar15 == (long *)0x0) goto LAB_003aad44;
  pplStack_448 = (long **)0x0;
  pplStack_440 = (long **)0x0;
  lVar21 = (long)plVar15;
  pppuStack_450 = &pplStack_448;
  _strlen(plVar15);
  FUN_004011d4(&lStack_4e8,plVar15,lVar21);
  if (lStack_4e8 == 0) {
    piVar23 = &iStack_4e0;
    if (cStack_4c9 < '\0') {
      if (lStack_4d8 == 4) {
        piVar18 = (int *)CONCAT44(uStack_4dc,iStack_4e0);
        iVar19 = *(int *)CONCAT44(uStack_4dc,iStack_4e0);
        goto LAB_003aad94;
      }
LAB_003aaeb0:
      if (cStack_4c9 < '\0') {
        if (lStack_4d8 != 4) goto LAB_003aab74;
        piVar23 = (int *)CONCAT44(uStack_4dc,iStack_4e0);
      }
      else {
LAB_003aaebc:
        if (cStack_4c9 != '\x04') goto LAB_003aab74;
      }
      if (*piVar23 != 0x78696e75) goto LAB_003aab74;
      FUN_003ab564(apppppuStack_420,"filename",&uStack_4b0);
      FUN_003490ec(&pppppuStack_350,apppppuStack_420,1,auStack_558);
      FUN_00353254(&pppppuStack_500,"uds_address");
      ppppuVar12 = &pppuStack_450;
      pppppuStack_518 = &pppppuStack_500;
      FUN_003583d4(ppppuVar12,&pppppuStack_500,&UNK_008000a0,&pppppuStack_518,&pppppuStack_540);
      goto LAB_003aabd0;
    }
    piVar18 = piVar23;
    iVar19 = iStack_4e0;
    if (cStack_4c9 != '\x04') goto LAB_003aaebc;
LAB_003aad94:
    if ((iVar19 != 0x34767069) && (*piVar18 != 0x36767069)) goto LAB_003aaeb0;
    pppppuStack_500 = (undefined8 ******)0x0;
    uStack_4f8 = 0;
    lStack_4f0 = 0;
    pppppuStack_518 = (undefined8 ******)0x0;
    lStack_510 = 0;
    uStack_508 = 0;
    pcVar11 = uStack_4b0;
    if (-1 < (char)bStack_499) {
      uStack_4a8 = (ulong)bStack_499;
      pcVar11 = (char *)&uStack_4b0;
    }
    if (uStack_4a8 == 0) {
      uStack_4a8 = 0;
    }
    else {
      pcVar3 = (char *)((long)&uStack_4b0 + 1);
      if ((char)bStack_499 < '\0') {
        pcVar3 = uStack_4b0 + 1;
      }
      if (*pcVar11 == '/') {
        pcVar11 = pcVar3;
        uStack_4a8 = uStack_4a8 - 1;
      }
    }
    func_0x0033b110(pcVar11,uStack_4a8,&pppppuStack_500,&pppppuStack_518);
    if (((ulong)pcVar11 & 1) == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz.cc"
                   ,0x1b1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x3ab1b4);
      (*pcVar8)();
    }
    uStack_51c = 0xffffffff;
    if (uStack_508 < 0) {
      ppppppuVar16 = (undefined8 ******)pppppuStack_518;
      if (lStack_510 != 0) goto LAB_003aae44;
LAB_003aae54:
      ppppppuVar16 = (undefined8 ******)0xffffffff;
    }
    else {
      if (uStack_508._7_1_ == '\0') goto LAB_003aae54;
      ppppppuVar16 = &pppppuStack_518;
LAB_003aae44:
      _atoi();
      uStack_51c = SUB84(ppppppuVar16,0);
    }
    ppppppuVar2 = (undefined8 ******)pppppuStack_500;
    if (-1 < lStack_4f0) {
      ppppppuVar2 = &pppppuStack_500;
    }
    FUN_003a04bc(&uStack_528,&pppppuStack_350,ppppppuVar2,ppppppuVar16);
    if (uStack_528 != 0) {
      if ((uStack_528 & 1) != 0) {
        FUN_0055293c();
      }
      if (uStack_508 < 0) {
        __ZdlPv(pppppuStack_518);
      }
      if (lStack_4f0 < 0) {
        __ZdlPv(pppppuStack_500);
      }
      if (lStack_4e8 != 0) goto LAB_003aab74;
      goto LAB_003aaeb0;
    }
    FUN_003a1434(&pppppuStack_540,&pppppuStack_350);
    ppppppuVar16 = (undefined8 ******)pppppuStack_540;
    if (-1 < (char)bStack_529) {
      uStack_538 = (ulong)bStack_529;
      ppppppuVar16 = &pppppuStack_540;
    }
    FUN_00572fb8(auStack_558,ppppppuVar16,uStack_538);
    FUN_003ab4a4(apppppuStack_420,"port",&uStack_51c);
    FUN_003ab510(auStack_3b8,"ip_address",auStack_558);
    FUN_003490ec(&pppppuStack_570,apppppuStack_420,2,&uStack_571);
    FUN_00353254(apuStack_590,"tcpip_address");
    ppppuVar12 = &pppuStack_450;
    ppuStack_428 = apuStack_590;
    FUN_003583d4(ppppuVar12,apuStack_590,&UNK_008000a0,&ppuStack_428,&uStack_429);
    ppppuVar22 = ppppuVar12 + 0xc;
    *(undefined4 *)(ppppuVar12 + 7) = 5;
    func_0x003499b4(ppppuVar12 + 0xb,*ppppuVar22);
    pppppuVar14 = (undefined8 *****)ppppuStack_568;
    ppppuVar12[0xb] = pppppuStack_570;
    ppppuVar12[0xc] = pppppuVar14;
    pplVar6 = pplStack_560;
    ppppuVar12[0xd] = (undefined8 ***)pplStack_560;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar12[0xb] = ppppuVar22;
    }
    else {
      pppppuVar14[2] = ppppuVar22;
      pppppuStack_570 = &ppppuStack_568;
      ppppuStack_568 = (undefined8 *****)0x0;
      pplStack_560 = (long **)0x0;
      pppppuVar14 = (undefined8 *****)0x0;
    }
    if (cStack_579 < '\0') {
      __ZdlPv(apuStack_590[0],pppppuVar14);
      pppppuVar14 = (undefined8 *****)ppppuStack_568;
    }
    func_0x003499b4(&pppppuStack_570,pppppuVar14);
    lVar21 = 0;
    do {
      apuStack_590[0] = auStack_368 + lVar21;
      FUN_0034a050(apuStack_590);
      func_0x003499b4(acStack_381 + lVar21 + 1,*(undefined8 *)((long)auStack_378 + lVar21));
      if (acStack_381[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_398 + lVar21));
      }
      if (acStack_3a1[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b8 + lVar21));
      }
      lVar21 = lVar21 + -0x68;
    } while (lVar21 != -0xd0);
    FUN_00353254(apppppuStack_420,pppuVar13);
    pppppuStack_570 = apppppuStack_420;
    FUN_003583d4(ppppuVar9,apppppuStack_420,&UNK_008000a0,&pppppuStack_570,apuStack_590);
    ppppuVar12 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x003499b4(ppppuVar9 + 0xb,*ppppuVar12);
    pplVar6 = pplStack_448;
    ppppuVar9[0xb] = pppuStack_450;
    ppppuVar9[0xc] = (undefined8 ***)pplVar6;
    pplVar7 = pplStack_440;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_440;
    if ((undefined8 ***)pplVar7 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar12;
    }
    else {
      pplVar6[2] = (long *)ppppuVar12;
      pplStack_448 = (long **)0x0;
      pplStack_440 = (long **)0x0;
      pppuStack_450 = &pplStack_448;
    }
    if (cStack_409 < '\0') {
      __ZdlPv(apppppuStack_420[0]);
    }
    if (cStack_541 < '\0') {
      __ZdlPv(auStack_558[0]);
    }
    if ((char)bStack_529 < '\0') {
      __ZdlPv(pppppuStack_540);
    }
    if ((uStack_528 & 1) != 0) {
      FUN_0055293c();
    }
    if (uStack_508 < 0) {
      __ZdlPv(pppppuStack_518);
    }
    ppppppuVar16 = (undefined8 ******)pppppuStack_500;
    if (lStack_4f0 < 0) goto LAB_003aad2c;
  }
  else {
LAB_003aab74:
    FUN_003ab5b8(apppppuStack_420,"name",&lStack_438);
    FUN_003490ec(&pppppuStack_350,apppppuStack_420,1,auStack_558);
    FUN_00353254(&pppppuStack_500,"other_address");
    ppppuVar12 = &pppuStack_450;
    pppppuStack_518 = &pppppuStack_500;
    FUN_003583d4(ppppuVar12,&pppppuStack_500,&UNK_008000a0,&pppppuStack_518,&pppppuStack_540);
LAB_003aabd0:
    ppppuVar22 = ppppuVar12 + 0xc;
    *(undefined4 *)(ppppuVar12 + 7) = 5;
    func_0x003499b4(ppppuVar12 + 0xb,*ppppuVar22);
    pppppuVar14 = (undefined8 *****)ppppuStack_348;
    ppppuVar12[0xb] = pppppuStack_350;
    ppppuVar12[0xc] = pppppuVar14;
    pplVar6 = pplStack_340;
    ppppuVar12[0xd] = (undefined8 ***)pplStack_340;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar12[0xb] = ppppuVar22;
    }
    else {
      pppppuVar14[2] = ppppuVar22;
      pppppuStack_350 = &ppppuStack_348;
      ppppuStack_348 = (undefined8 *****)0x0;
      pplStack_340 = (long **)0x0;
      pppppuVar14 = (undefined8 *****)0x0;
    }
    if (lStack_4f0 < 0) {
      __ZdlPv(pppppuStack_500,pppppuVar14);
      pppppuVar14 = (undefined8 *****)ppppuStack_348;
    }
    func_0x003499b4(&pppppuStack_350,pppppuVar14);
    pppppuStack_500 = appppuStack_3d0;
    FUN_0034a050(&pppppuStack_500);
    func_0x003499b4(auStack_3e8,uStack_3e0);
    if (cStack_3e9 < '\0') {
      __ZdlPv(uStack_400);
    }
    if (cStack_409 < '\0') {
      __ZdlPv(apppppuStack_420[0]);
    }
    FUN_00353254(apppppuStack_420,pppuVar13);
    pppppuStack_350 = apppppuStack_420;
    FUN_003583d4(ppppuVar9,apppppuStack_420,&UNK_008000a0,&pppppuStack_350,&pppppuStack_500);
    ppppuVar12 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x003499b4(ppppuVar9 + 0xb,*ppppuVar12);
    pplVar6 = pplStack_448;
    ppppuVar9[0xb] = pppuStack_450;
    ppppuVar9[0xc] = (undefined8 ***)pplVar6;
    pplVar7 = pplStack_440;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_440;
    if ((undefined8 ***)pplVar7 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar12;
    }
    else {
      pplVar6[2] = (long *)ppppuVar12;
      pplStack_448 = (long **)0x0;
      pplStack_440 = (long **)0x0;
      pppuStack_450 = &pplStack_448;
    }
    ppppppuVar16 = (undefined8 ******)apppppuStack_420[0];
    if (cStack_409 < '\0') {
LAB_003aad2c:
      __ZdlPv(ppppppuVar16);
    }
  }
  FUN_0035afe0(&lStack_4e8);
  ppppuVar9 = &pppuStack_450;
  pppuVar13 = (undefined8 ***)pplStack_448;
  func_0x003499b4();
LAB_003aad44:
  iVar19 = (int)pppuVar13;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_2c8) {
    ___stack_chk_fail();
    if (iVar19 != 0) {
      func_0x0040cf10();
      if (cStack_409 < '\0') {
        __ZdlPv(apppppuStack_420[0]);
      }
      if (cStack_541 < '\0') {
        __ZdlPv(auStack_558[0]);
      }
      if ((char)bStack_529 < '\0') {
        __ZdlPv(pppppuStack_540);
      }
      FUN_0033c494(&uStack_528);
      if (uStack_508 < 0) {
        __ZdlPv(pppppuStack_518);
      }
      if (lStack_4f0 < 0) {
        __ZdlPv(pppppuStack_500);
      }
      FUN_0035afe0(&lStack_4e8);
      func_0x003499b4(&pppuStack_450,pplStack_448);
    }
    __Unwind_Resume();
    *ppppuVar9 = (undefined8 ***)&PTR_FUN_009df5c0;
    pppuVar13 = ppppuVar9[0x17];
    if (pppuVar13 != (undefined8 ***)0x0) {
      pppuVar1 = pppuVar13 + 1;
      do {
        ppuVar20 = *pppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar5) {
          *pppuVar1 = (undefined8 **)((long)ppuVar20 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((undefined8 **)((long)ppuVar20 + -1) == (undefined8 **)0x0) {
        (*(code *)(*pppuVar13)[1])();
      }
    }
    if (*(char *)((long)ppppuVar9 + 0xb7) < '\0') {
      __ZdlPv(ppppuVar9[0x14]);
    }
    if (*(char *)((long)ppppuVar9 + 0x9f) < '\0') {
      __ZdlPv(ppppuVar9[0x11]);
    }
    *ppppuVar9 = (undefined8 ***)&PTR_FUN_009df558;
    FUN_003abd20();
    FUN_003abe50();
    if (*(char *)((long)ppppuVar9 + 0x37) < '\0') {
      __ZdlPv(ppppuVar9[4]);
    }
    return ppppuVar9;
  }
  return ppppuVar9;
}



/* Entry: 003aab04; end: 003ab33f;  */

undefined8 **** FUN_003aab04(undefined8 ****param_1,undefined8 ***param_2,long param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ******ppppppuVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  int *piVar13;
  int iVar14;
  undefined8 **ppuVar15;
  undefined8 ****ppppuVar16;
  int *piVar17;
  long lVar18;
  undefined1 *apuStack_320 [2];
  char cStack_309;
  undefined1 uStack_301;
  undefined8 *****pppppuStack_300;
  undefined8 ****ppppuStack_2f8;
  long **pplStack_2f0;
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined8 *****pppppuStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  ulong uStack_2b8;
  undefined4 uStack_2ac;
  undefined8 *****pppppuStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  int iStack_270;
  undefined4 uStack_26c;
  long lStack_268;
  char cStack_259;
  undefined8 uStack_240;
  ulong uStack_238;
  byte bStack_229;
  undefined8 ***pppuStack_1e0;
  long **pplStack_1d8;
  long **pplStack_1d0;
  long lStack_1c8;
  undefined1 uStack_1b9;
  undefined1 **ppuStack_1b8;
  undefined8 *****apppppuStack_1b0 [2];
  char cStack_199;
  undefined8 uStack_190;
  char cStack_179;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 ****appppuStack_160 [3];
  undefined8 auStack_148 [2];
  char acStack_131 [9];
  undefined8 auStack_128 [2];
  char acStack_111 [9];
  undefined8 auStack_108 [2];
  undefined1 auStack_f8 [24];
  undefined8 *****pppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  long **pplStack_d0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_1c8 = param_3;
  if (param_3 == 0) goto LAB_003aad44;
  pplStack_1d8 = (long **)0x0;
  pplStack_1d0 = (long **)0x0;
  lVar18 = param_3;
  pppuStack_1e0 = &pplStack_1d8;
  _strlen(param_3);
  FUN_004011d4(&lStack_278,param_3,lVar18);
  if (lStack_278 == 0) {
    piVar17 = &iStack_270;
    if (cStack_259 < '\0') {
      if (lStack_268 == 4) {
        piVar13 = (int *)CONCAT44(uStack_26c,iStack_270);
        iVar14 = *(int *)CONCAT44(uStack_26c,iStack_270);
        goto LAB_003aad94;
      }
LAB_003aaeb0:
      if (cStack_259 < '\0') {
        if (lStack_268 != 4) goto LAB_003aab74;
        piVar17 = (int *)CONCAT44(uStack_26c,iStack_270);
      }
      else {
LAB_003aaebc:
        if (cStack_259 != '\x04') goto LAB_003aab74;
      }
      if (*piVar17 != 0x78696e75) goto LAB_003aab74;
      FUN_003ab564(apppppuStack_1b0,"filename",&uStack_240);
      FUN_003490ec(&pppppuStack_e0,apppppuStack_1b0,1,auStack_2e8);
      FUN_00353254(&pppppuStack_290,"uds_address");
      ppppuVar9 = &pppuStack_1e0;
      pppppuStack_2a8 = &pppppuStack_290;
      FUN_003583d4(ppppuVar9,&pppppuStack_290,&UNK_008000a0,&pppppuStack_2a8,&pppppuStack_2d0);
      goto LAB_003aabd0;
    }
    piVar13 = piVar17;
    iVar14 = iStack_270;
    if (cStack_259 != '\x04') goto LAB_003aaebc;
LAB_003aad94:
    if ((iVar14 != 0x34767069) && (*piVar13 != 0x36767069)) goto LAB_003aaeb0;
    pppppuStack_290 = (undefined8 ******)0x0;
    uStack_288 = 0;
    lStack_280 = 0;
    pppppuStack_2a8 = (undefined8 ******)0x0;
    lStack_2a0 = 0;
    uStack_298 = 0;
    pcVar8 = uStack_240;
    if (-1 < (char)bStack_229) {
      uStack_238 = (ulong)bStack_229;
      pcVar8 = (char *)&uStack_240;
    }
    if (uStack_238 == 0) {
      uStack_238 = 0;
    }
    else {
      pcVar3 = (char *)((long)&uStack_240 + 1);
      if ((char)bStack_229 < '\0') {
        pcVar3 = uStack_240 + 1;
      }
      if (*pcVar8 == '/') {
        pcVar8 = pcVar3;
        uStack_238 = uStack_238 - 1;
      }
    }
    func_0x0033b110(pcVar8,uStack_238,&pppppuStack_290,&pppppuStack_2a8);
    if (((ulong)pcVar8 & 1) == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz.cc"
                   ,0x1b1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x3ab1b4);
      (*pcVar7)();
    }
    uStack_2ac = 0xffffffff;
    if (uStack_298 < 0) {
      ppppppuVar12 = (undefined8 ******)pppppuStack_2a8;
      if (lStack_2a0 == 0) goto LAB_003aae54;
LAB_003aae44:
      _atoi();
      uStack_2ac = SUB84(ppppppuVar12,0);
    }
    else {
      if (uStack_298._7_1_ != '\0') {
        ppppppuVar12 = &pppppuStack_2a8;
        goto LAB_003aae44;
      }
LAB_003aae54:
      ppppppuVar12 = (undefined8 ******)0xffffffff;
    }
    ppppppuVar2 = (undefined8 ******)pppppuStack_290;
    if (-1 < lStack_280) {
      ppppppuVar2 = &pppppuStack_290;
    }
    FUN_003a04bc(&uStack_2b8,&pppppuStack_e0,ppppppuVar2,ppppppuVar12);
    if (uStack_2b8 != 0) {
      if ((uStack_2b8 & 1) != 0) {
        FUN_0055293c();
      }
      if (uStack_298 < 0) {
        __ZdlPv(pppppuStack_2a8);
      }
      if (lStack_280 < 0) {
        __ZdlPv(pppppuStack_290);
      }
      if (lStack_278 != 0) goto LAB_003aab74;
      goto LAB_003aaeb0;
    }
    FUN_003a1434(&pppppuStack_2d0,&pppppuStack_e0);
    ppppppuVar12 = (undefined8 ******)pppppuStack_2d0;
    if (-1 < (char)bStack_2b9) {
      uStack_2c8 = (ulong)bStack_2b9;
      ppppppuVar12 = &pppppuStack_2d0;
    }
    FUN_00572fb8(auStack_2e8,ppppppuVar12,uStack_2c8);
    FUN_003ab4a4(apppppuStack_1b0,"port",&uStack_2ac);
    FUN_003ab510(auStack_148,"ip_address",auStack_2e8);
    FUN_003490ec(&pppppuStack_300,apppppuStack_1b0,2,&uStack_301);
    FUN_00353254(apuStack_320,"tcpip_address");
    ppppuVar9 = &pppuStack_1e0;
    ppuStack_1b8 = apuStack_320;
    FUN_003583d4(ppppuVar9,apuStack_320,&UNK_008000a0,&ppuStack_1b8,&uStack_1b9);
    ppppuVar16 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x003499b4(ppppuVar9 + 0xb,*ppppuVar16);
    pppppuVar11 = (undefined8 *****)ppppuStack_2f8;
    ppppuVar9[0xb] = pppppuStack_300;
    ppppuVar9[0xc] = pppppuVar11;
    pplVar6 = pplStack_2f0;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_2f0;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar16;
    }
    else {
      pppppuVar11[2] = ppppuVar16;
      pppppuStack_300 = &ppppuStack_2f8;
      ppppuStack_2f8 = (undefined8 *****)0x0;
      pplStack_2f0 = (long **)0x0;
      pppppuVar11 = (undefined8 *****)0x0;
    }
    if (cStack_309 < '\0') {
      __ZdlPv(apuStack_320[0],pppppuVar11);
      pppppuVar11 = (undefined8 *****)ppppuStack_2f8;
    }
    func_0x003499b4(&pppppuStack_300,pppppuVar11);
    lVar18 = 0;
    do {
      apuStack_320[0] = auStack_f8 + lVar18;
      FUN_0034a050(apuStack_320);
      func_0x003499b4(acStack_111 + lVar18 + 1,*(undefined8 *)((long)auStack_108 + lVar18));
      if (acStack_111[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_128 + lVar18));
      }
      if (acStack_131[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_148 + lVar18));
      }
      lVar18 = lVar18 + -0x68;
    } while (lVar18 != -0xd0);
    FUN_00353254(apppppuStack_1b0,param_2);
    pppppuStack_300 = apppppuStack_1b0;
    FUN_003583d4(param_1,apppppuStack_1b0,&UNK_008000a0,&pppppuStack_300,apuStack_320);
    ppppuVar9 = param_1 + 0xc;
    *(undefined4 *)(param_1 + 7) = 5;
    func_0x003499b4(param_1 + 0xb,*ppppuVar9);
    param_1[0xb] = pppuStack_1e0;
    param_1[0xc] = (undefined8 ***)pplStack_1d8;
    param_1[0xd] = (undefined8 ***)pplStack_1d0;
    if ((undefined8 ***)pplStack_1d0 == (undefined8 ***)0x0) {
      param_1[0xb] = ppppuVar9;
    }
    else {
      pplStack_1d8[2] = (long *)ppppuVar9;
      pplStack_1d8 = (long **)0x0;
      pplStack_1d0 = (long **)0x0;
      pppuStack_1e0 = &pplStack_1d8;
    }
    if (cStack_199 < '\0') {
      __ZdlPv(apppppuStack_1b0[0]);
    }
    if (cStack_2d1 < '\0') {
      __ZdlPv(auStack_2e8[0]);
    }
    if ((char)bStack_2b9 < '\0') {
      __ZdlPv(pppppuStack_2d0);
    }
    if ((uStack_2b8 & 1) != 0) {
      FUN_0055293c();
    }
    if (uStack_298 < 0) {
      __ZdlPv(pppppuStack_2a8);
    }
    ppppppuVar12 = (undefined8 ******)pppppuStack_290;
    if (lStack_280 < 0) goto LAB_003aad2c;
  }
  else {
LAB_003aab74:
    FUN_003ab5b8(apppppuStack_1b0,"name",&lStack_1c8);
    FUN_003490ec(&pppppuStack_e0,apppppuStack_1b0,1,auStack_2e8);
    FUN_00353254(&pppppuStack_290,"other_address");
    ppppuVar9 = &pppuStack_1e0;
    pppppuStack_2a8 = &pppppuStack_290;
    FUN_003583d4(ppppuVar9,&pppppuStack_290,&UNK_008000a0,&pppppuStack_2a8,&pppppuStack_2d0);
LAB_003aabd0:
    ppppuVar16 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x003499b4(ppppuVar9 + 0xb,*ppppuVar16);
    pppppuVar11 = (undefined8 *****)ppppuStack_d8;
    ppppuVar9[0xb] = pppppuStack_e0;
    ppppuVar9[0xc] = pppppuVar11;
    pplVar6 = pplStack_d0;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_d0;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar16;
    }
    else {
      pppppuVar11[2] = ppppuVar16;
      pppppuStack_e0 = &ppppuStack_d8;
      ppppuStack_d8 = (undefined8 *****)0x0;
      pplStack_d0 = (long **)0x0;
      pppppuVar11 = (undefined8 *****)0x0;
    }
    if (lStack_280 < 0) {
      __ZdlPv(pppppuStack_290,pppppuVar11);
      pppppuVar11 = (undefined8 *****)ppppuStack_d8;
    }
    func_0x003499b4(&pppppuStack_e0,pppppuVar11);
    pppppuStack_290 = appppuStack_160;
    FUN_0034a050(&pppppuStack_290);
    func_0x003499b4(auStack_178,uStack_170);
    if (cStack_179 < '\0') {
      __ZdlPv(uStack_190);
    }
    if (cStack_199 < '\0') {
      __ZdlPv(apppppuStack_1b0[0]);
    }
    FUN_00353254(apppppuStack_1b0,param_2);
    pppppuStack_e0 = apppppuStack_1b0;
    FUN_003583d4(param_1,apppppuStack_1b0,&UNK_008000a0,&pppppuStack_e0,&pppppuStack_290);
    ppppuVar9 = param_1 + 0xc;
    *(undefined4 *)(param_1 + 7) = 5;
    func_0x003499b4(param_1 + 0xb,*ppppuVar9);
    param_1[0xb] = pppuStack_1e0;
    param_1[0xc] = (undefined8 ***)pplStack_1d8;
    param_1[0xd] = (undefined8 ***)pplStack_1d0;
    if ((undefined8 ***)pplStack_1d0 == (undefined8 ***)0x0) {
      param_1[0xb] = ppppuVar9;
    }
    else {
      pplStack_1d8[2] = (long *)ppppuVar9;
      pplStack_1d8 = (long **)0x0;
      pplStack_1d0 = (long **)0x0;
      pppuStack_1e0 = &pplStack_1d8;
    }
    ppppppuVar12 = (undefined8 ******)apppppuStack_1b0[0];
    if (cStack_199 < '\0') {
LAB_003aad2c:
      __ZdlPv(ppppppuVar12);
    }
  }
  FUN_0035afe0(&lStack_278);
  param_1 = &pppuStack_1e0;
  param_2 = (undefined8 ***)pplStack_1d8;
  func_0x003499b4();
LAB_003aad44:
  iVar14 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar14 != 0) {
    func_0x0040cf10();
    if (cStack_199 < '\0') {
      __ZdlPv(apppppuStack_1b0[0]);
    }
    if (cStack_2d1 < '\0') {
      __ZdlPv(auStack_2e8[0]);
    }
    if ((char)bStack_2b9 < '\0') {
      __ZdlPv(pppppuStack_2d0);
    }
    FUN_0033c494(&uStack_2b8);
    if (uStack_298 < 0) {
      __ZdlPv(pppppuStack_2a8);
    }
    if (lStack_280 < 0) {
      __ZdlPv(pppppuStack_290);
    }
    FUN_0035afe0(&lStack_278);
    func_0x003499b4(&pppuStack_1e0,pplStack_1d8);
  }
  __Unwind_Resume();
  *param_1 = (undefined8 ***)&PTR_FUN_009df5c0;
  pppuVar10 = param_1[0x17];
  if (pppuVar10 != (undefined8 ***)0x0) {
    pppuVar1 = pppuVar10 + 1;
    do {
      ppuVar15 = *pppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined8 **)((long)ppuVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((undefined8 **)((long)ppuVar15 + -1) == (undefined8 **)0x0) {
      (*(code *)(*pppuVar10)[1])();
    }
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  *param_1 = (undefined8 ***)&PTR_FUN_009df558;
  FUN_003abd20();
  FUN_003abe50();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 003ab340; end: 003ab343;  */

undefined8 * FUN_003ab340(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009df5c0;
  plVar4 = (long *)param_1[0x17];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  *param_1 = &PTR_FUN_009df558;
  FUN_003abd20();
  FUN_003abe50();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 003ab344; end: 003ab357;  */

void FUN_003ab344(void)

{
  FUN_003ab60c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003ab358; end: 003ab3cf;  */

undefined8 * FUN_003ab358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009df580;
  func_0x003ab688(param_1 + 0x29,param_1[0x2a]);
  func_0x003ab688(param_1 + 0x26,param_1[0x27]);
  func_0x00339d70(param_1 + 0x1e);
  FUN_003a7518(param_1 + 0xe);
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  *param_1 = &PTR_FUN_009df558;
  FUN_003abd20();
  FUN_003abe50();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 003ab3d0; end: 003ab44b;  */

void FUN_003ab3d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009df580;
  func_0x003ab688(param_1 + 0x29,param_1[0x2a]);
  func_0x003ab688(param_1 + 0x26,param_1[0x27]);
  func_0x00339d70(param_1 + 0x1e);
  FUN_003a7518(param_1 + 0xe);
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  FUN_003a8444(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003ab44c; end: 003ab4a3;  */

void FUN_003ab44c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 003ab4a4; end: 003ab50f;  */

long FUN_003ab4a4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  FUN_00353254();
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x18) = 3;
  __ZNSt3__19to_stringEi(param_1 + 0x20,uVar1);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



/* Entry: 003ab510; end: 003ab563;  */

long FUN_003ab510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_00358048(lVar1 + 0x18,param_3,0);
  return param_1;
}



/* Entry: 003ab564; end: 003ab5b7;  */

long FUN_003ab564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_00358048(lVar1 + 0x18,param_3,0);
  return param_1;
}


