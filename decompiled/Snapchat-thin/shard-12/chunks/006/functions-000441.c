/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094caa68; end: 1094cabb3;  */

void FUN_1094caa68(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_1094b12ec(&uStack_40,&uStack_30,param_1 + 0xb0);
  plStack_28 = *(long **)(param_1 + 0xa8);
  uStack_30 = *(undefined8 *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xa8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1094c6180(uStack_40,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_1094b15e4(param_1,&uStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 1094cabb4; end: 1094cac2b;  */

undefined8 FUN_1094cabb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar2 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar1,uVar2);
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar3 = *(code **)(*(long *)(param_1[3] + ((long)param_1[2] >> 1)) +
                       ((ulong)pcVar3 & 0xffffffff));
  }
  (*pcVar3)();
  FUN_1094cac2c(&puStack_28);
  return 0;
}



/* Entry: 1094cac2c; end: 1094cad03;  */

long * FUN_1094cac2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1094a35b0(lVar1,0);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1094cad04; end: 1094cae9b;  */

void FUN_1094cad04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined1 *apuStack_60 [2];
  char cStack_49;
  undefined1 uStack_41;
  
  ppuVar3 = apuStack_60;
  ppuVar4 = apuStack_60;
  puVar2 = param_2;
  func_0x000107c2abd4();
  if (((uint)puVar2 >> 7 & 1) == 0) {
    uVar1 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    func_0x000104c4f768(apuStack_60,uVar1 + 1,&uStack_41);
    ppuVar4 = (undefined1 **)apuStack_60[0];
    if (-1 < cStack_49) {
      ppuVar4 = apuStack_60;
    }
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        puVar2 = param_3;
      }
      _memmove(ppuVar4,puVar2,uVar1);
    }
    *(undefined2 *)((long)ppuVar4 + uVar1) = 0x5f;
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (apuStack_60,puVar2,uVar1);
    ppuVar4 = ppuVar3;
  }
  else {
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    func_0x000104c4f768(apuStack_60,uVar1 + 1,&uStack_41);
    ppuVar3 = (undefined1 **)apuStack_60[0];
    if (-1 < cStack_49) {
      ppuVar3 = apuStack_60;
    }
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        puVar2 = param_2;
      }
      _memmove(ppuVar3,puVar2,uVar1);
    }
    *(undefined2 *)((long)ppuVar3 + uVar1) = 0x5f;
    uVar1 = param_3[1];
    puVar2 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar2 = param_3;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (apuStack_60,puVar2,uVar1);
  }
  uVar5 = *ppuVar4;
  param_1[1] = ppuVar4[1];
  *param_1 = uVar5;
  param_1[2] = ppuVar4[2];
  ppuVar4[1] = (undefined1 *)0x0;
  ppuVar4[2] = (undefined1 *)0x0;
  *ppuVar4 = (undefined1 *)0x0;
  if (cStack_49 < '\0') {
    __ZdlPv(apuStack_60[0]);
  }
  return;
}



/* Entry: 1094cae9c; end: 1094caf23;  */

ulong FUN_1094cae9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_1094cad04(auStack_38,param_2,param_3);
  FUN_1094cb180(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)*(uint *)(param_1 + 0x28) | 0x100000000;
  }
  return uVar1;
}



/* Entry: 1094caf24; end: 1094caff3;  */

void FUN_1094caf24(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1094caf6c:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
          if (*(char *)(param_2 + 0x27) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x10));
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1094caf6c;
  }
  return;
}



/* Entry: 1094caff4; end: 1094cb17f;  */

void FUN_1094caff4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
        if (*(char *)(param_2 + 0x27) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x10));
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1094cb180; end: 1094cb263;  */

long FUN_1094cb180(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1094cb264; end: 1094cb2bb;  */

undefined8 * FUN_1094cb264(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm();
  FUN_1094cd4e8();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 1094cb2bc; end: 1094cb41b;  */

undefined8 * FUN_1094cb2bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 auStack_40 [16];
  
  *param_1 = &PTR_DAT_110af7648;
  *(undefined2 *)(param_1 + 1) = 0;
  func_0x000107c31940(auStack_58,&UNK_10f56f289);
  FUN_1094a68cc(auStack_40,param_2,auStack_58);
  FUN_1094cb264(param_1 + 2,auStack_40);
  FUN_109380f8c(auStack_40);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  func_0x000107c31940(auStack_58,&UNK_10f56f2a3);
  FUN_1094b4850(param_2,auStack_58,param_1 + 1);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  func_0x000107c31940(auStack_58,&UNK_10f56f2b2);
  FUN_1094b4850(param_2,auStack_58,(long)param_1 + 9);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 1094cb41c; end: 1094cc86f;  */

void FUN_1094cb41c(long *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  int *piVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long lVar30;
  ulong uVar31;
  float fVar32;
  float extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 *puStack_240;
  float fStack_238;
  float fStack_234;
  undefined8 *puStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float *pfStack_170;
  float *pfStack_168;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  int *piStack_130;
  int *piStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
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
  long lStack_b8;
  undefined8 uStack_b0;
  
  if ((*(char *)(param_2 + 9) == '\x01') && (*(char *)(param_3 + 0x214) == '\x01')) {
    if ((*(byte *)(param_3 + 500) & 1) == 0) {
      if (*(char *)(param_3 + 0x1fc) == '\x01') {
        lVar11 = 0xc;
        goto LAB_1094cb494;
      }
      bVar7 = false;
    }
    else {
      lVar11 = 4;
LAB_1094cb494:
      bVar7 = 0.5 < *(float *)(param_3 + 0x1ec + lVar11);
    }
    bVar7 = (bool)*(char *)(param_2 + 8) != bVar7;
  }
  else {
    bVar7 = false;
  }
  plVar23 = *(long **)(param_2 + 0x10);
  FUN_1094cca1c(&pfStack_170,(plVar23[1] - *plVar23 >> 3) * -0x79435e50d79435e5);
  for (plVar15 = *(long **)(param_3 + 0xa0); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
    plVar9 = plVar23 + 0xd;
    FUN_1094ccb54(plVar9,plVar15 + 2);
    if (plVar9 != (long *)0x0) {
      fVar25 = *(float *)(plVar15 + 6);
      lVar11 = plVar9[5];
      *(long *)(pfStack_170 + (long)(int)lVar11 * 3) = plVar15[5];
      (pfStack_170 + (long)(int)lVar11 * 3)[2] = fVar25;
    }
  }
  lVar11 = *plVar23;
  lVar24 = plVar23[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar12 = lVar24 - lVar11 >> 3;
  uVar19 = lVar12 * -0x79435e50d79435e5;
  if (lVar24 - lVar11 != 0) {
    FUN_1094ccc38(param_1,uVar19);
    puVar13 = (undefined8 *)param_1[1];
    puVar14 = (undefined8 *)((long)puVar13 + lVar12 * 0x286bca1af286bca4);
    auVar33 = NEON_fmov(0x3f800000,4);
    do {
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      *(undefined8 *)((long)puVar13 + 0x24) = 0;
      *(undefined8 *)((long)puVar13 + 0x1c) = 0;
      *(long *)((long)puVar13 + 0x14) = auVar33._8_8_;
      *(long *)((long)puVar13 + 0xc) = auVar33._0_8_;
      puVar13 = (undefined8 *)((long)puVar13 + 0x2c);
    } while (puVar13 != puVar14);
    param_1[1] = (long)puVar14;
  }
  param_1[4] = 0x3f80000000000000;
  param_1[3] = 0;
  param_1[6] = 0x3f80000000000000;
  param_1[5] = 0;
  lVar30 = NEON_fmov(0x3f800000,4);
  param_1[7] = lVar30;
  if (lVar24 == lVar11) {
    puStack_240 = (undefined8 *)0x0;
  }
  else {
    if (0x4ec4ec4ec4ec4ec < uVar19) {
      FUN_1094ccce0();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1094cc7ac);
      (*pcVar6)();
    }
    puStack_240 = (undefined8 *)(lVar12 * 0x5e50d79435e50d7c);
    __Znwm();
    puVar13 = puStack_240;
    do {
      puVar13[1] = 0;
      *puVar13 = 0x3f800000;
      puVar13[3] = 0;
      puVar13[2] = 0x3f800000;
      puVar13[5] = 0;
      puVar13[4] = 0x3f800000;
      *(undefined4 *)(puVar13 + 6) = 0x3f800000;
      puVar13 = (undefined8 *)((long)puVar13 + 0x34);
    } while (puVar13 != (undefined8 *)((long)puStack_240 + lVar12 * 0x5e50d79435e50d7c));
  }
  pfVar21 = pfStack_170;
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lVar12 = *(long *)(*plVar23 + 0x28);
  lVar30 = *(long *)(*plVar23 + 0x30);
  FUN_109285684(&uStack_c0,lVar12,lVar30,lVar30 - lVar12 >> 2);
  if (lStack_b8 == uStack_c0) {
    fVar42 = 0.0;
    fVar45 = 0.0;
    fVar25 = 0.0;
    fVar51 = 0.0;
    fVar53 = 0.0;
    fVar49 = 0.0;
  }
  else {
    uVar22 = 0;
    fVar49 = 0.0;
    fVar53 = 0.0;
    fVar51 = 0.0;
    fVar25 = 0.0;
    fVar45 = 0.0;
    fVar42 = 0.0;
    do {
      puVar13 = (undefined8 *)(*plVar23 + (long)*(int *)(uStack_c0 + uVar22 * 4) * 0x98);
      uStack_158 = *puVar13;
      fStack_150 = (float)CONCAT31(fStack_150._1_3_,*(undefined1 *)(puVar13 + 1));
      if (*(char *)((long)puVar13 + 0x27) < '\0') {
        func_0x000107c3192c(&uStack_148,puVar13[2],puVar13[3]);
      }
      else {
        uStack_140 = puVar13[3];
        uStack_148 = puVar13[2];
        lStack_138 = puVar13[4];
      }
      piStack_130 = (int *)0x0;
      piStack_128 = (int *)0x0;
      uStack_120 = 0;
      FUN_109285684(&piStack_130,puVar13[5],puVar13[6],(long)(puVar13[6] - puVar13[5]) >> 2);
      lStack_118 = 0;
      lStack_110 = 0;
      uStack_108 = 0;
      FUN_109285684(&lStack_118,puVar13[8],puVar13[9],(long)(puVar13[9] - puVar13[8]) >> 2);
      uStack_f8 = puVar13[0xc];
      uStack_100 = puVar13[0xb];
      uStack_f0 = puVar13[0xd];
      uStack_e8 = puVar13[0xe];
      uStack_d8 = puVar13[0x10];
      uStack_e0 = puVar13[0xf];
      uStack_c8 = puVar13[0x12];
      uStack_d0 = puVar13[0x11];
      if (fStack_150._0_1_ == '\x01') {
        puVar13 = (undefined8 *)(*plVar23 + (long)*piStack_130 * 0x98);
        uStack_158 = *puVar13;
        fStack_150 = (float)CONCAT31(fStack_150._1_3_,*(undefined1 *)(puVar13 + 1));
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_148,puVar13 + 2);
        if (&uStack_158 != puVar13) {
          FUN_10928555c(&piStack_130,puVar13[5],puVar13[6],(long)(puVar13[6] - puVar13[5]) >> 2);
          FUN_10928555c(&lStack_118,puVar13[8],puVar13[9],(long)(puVar13[9] - puVar13[8]) >> 2);
        }
        uStack_f8 = puVar13[0xc];
        uStack_100 = puVar13[0xb];
        uStack_f0 = puVar13[0xd];
        uStack_e8 = puVar13[0xe];
        uStack_d8 = puVar13[0x10];
        uStack_e0 = puVar13[0xf];
        uStack_c8 = puVar13[0x12];
        uStack_d0 = puVar13[0x11];
      }
      pfVar17 = pfStack_170 + (long)(int)(float)uStack_158 * 3;
      fVar47 = *pfVar17;
      fVar41 = pfVar17[1];
      fVar55 = *pfVar21;
      fVar48 = pfVar21[1];
      fVar50 = pfVar17[2];
      fVar44 = pfVar21[2];
      fVar52 = *(float *)(plVar23[6] + uVar22 * 4);
      fVar43 = *(float *)(plVar23[9] + uVar22 * 4);
      if (lStack_118 != 0) {
        lStack_110 = lStack_118;
        __ZdlPv();
      }
      if (piStack_130 != (int *)0x0) {
        piStack_128 = piStack_130;
        __ZdlPv();
      }
      if (lStack_138 < 0) {
        __ZdlPv(uStack_148);
      }
      fVar51 = fVar51 + (fVar47 - fVar55) * fVar52;
      fVar53 = fVar53 + (fVar41 - fVar48) * fVar52;
      fVar49 = fVar49 + (fVar50 - fVar44) * fVar52;
      fVar42 = fVar42 + (fVar47 - fVar55) * fVar43;
      fVar45 = fVar45 + (fVar41 - fVar48) * fVar43;
      fVar25 = fVar25 + (fVar50 - fVar44) * fVar43;
      uVar22 = uVar22 + 1;
    } while (uVar22 < (ulong)(lStack_b8 - uStack_c0 >> 2));
  }
  fVar55 = 1.0 / SQRT(fVar42 * fVar42 + fVar45 * fVar45 + fVar25 * fVar25);
  fVar48 = fVar42 * fVar55;
  fVar44 = fVar45 * fVar55;
  fVar25 = fVar25 * fVar55;
  fVar46 = -(fVar44 * fVar49) + fVar25 * fVar53;
  fVar52 = -(fVar25 * fVar51) + fVar48 * fVar49;
  fVar49 = -(fVar48 * fVar53) + fVar44 * fVar51;
  fVar56 = 1.0 / SQRT(fVar49 * fVar49 + fVar46 * fVar46 + fVar52 * fVar52);
  fVar41 = fVar46 * fVar56;
  fVar43 = fVar52 * fVar56;
  fVar49 = fVar49 * fVar56;
  fVar50 = -(fVar43 * fVar25) + fVar49 * fVar44;
  fVar51 = -(fVar49 * fVar48) + fVar41 * fVar25;
  fVar47 = -(fVar41 * fVar44) + fVar43 * fVar48;
  fVar53 = 1.0 / SQRT(fVar47 * fVar47 + fVar50 * fVar50 + fVar51 * fVar51);
  fVar54 = fVar50 * fVar53;
  fVar51 = fVar51 * fVar53;
  fVar53 = fVar47 * fVar53;
  if (uStack_c0 != 0) {
    lStack_b8 = uStack_c0;
    __ZdlPv();
  }
  pfVar21 = pfStack_170;
  fVar26 = -(fVar42 * fVar55);
  fVar27 = -(fVar46 * fVar56);
  fVar28 = (fVar54 - fVar44) - fVar49;
  fVar46 = (fVar44 - fVar54) - fVar49;
  fVar34 = (fVar49 - fVar54) - fVar44;
  fVar36 = fVar49 + fVar44 + fVar54;
  fVar42 = fVar28;
  if (fVar28 <= fVar36) {
    fVar42 = fVar36;
  }
  bVar4 = 2;
  if (fVar46 <= fVar42) {
    fVar46 = fVar42;
    bVar4 = fVar36 < fVar28;
  }
  bVar5 = 3;
  if (fVar34 <= fVar46) {
    fVar34 = fVar46;
    bVar5 = bVar4;
  }
  fVar29 = SQRT(fVar34 + 1.0) * 0.5;
  fVar32 = 0.25 / fVar29;
  fVar35 = (fVar41 - fVar53) * fVar32;
  fVar37 = (fVar48 + fVar51) * fVar32;
  fVar38 = (fVar25 + fVar43) * fVar32;
  fVar36 = (fVar51 - fVar48) * fVar32;
  fVar40 = (fVar41 + fVar53) * fVar32;
  fVar42 = fVar35;
  fVar46 = fVar38;
  fVar34 = fVar29;
  fVar28 = fVar37;
  if (bVar5 != 2) {
    fVar42 = fVar36;
    fVar46 = fVar29;
    fVar34 = fVar38;
    fVar28 = fVar40;
  }
  fVar32 = (fVar25 - fVar43) * fVar32;
  fVar38 = fVar29;
  if (bVar5 != 0) {
    fVar38 = fVar32;
    fVar36 = fVar40;
    fVar35 = fVar37;
    fVar32 = fVar29;
  }
  if (bVar5 < 2) {
    fVar42 = fVar38;
    fVar46 = fVar36;
    fVar34 = fVar35;
    fVar28 = fVar32;
  }
  *(float *)(param_1 + 3) = fVar28;
  *(float *)((long)param_1 + 0x1c) = fVar34;
  *(float *)(param_1 + 4) = fVar46;
  *(float *)((long)param_1 + 0x24) = fVar42;
  lVar12 = *plVar23;
  FUN_1094dc330(lVar12 + 0x58);
  fVar36 = -(extraout_s1 * fVar46) + fVar35 * fVar34;
  fVar29 = -(fVar35 * fVar28) + fVar38 * fVar46;
  fVar40 = -(fVar38 * fVar34) + extraout_s1 * fVar28;
  fVar32 = fVar42 * fVar36 + -(fVar29 * fVar46) + fVar40 * fVar34;
  fVar37 = fVar42 * fVar29 + -(fVar40 * fVar28) + fVar36 * fVar46;
  fVar28 = fVar42 * fVar40 + -(fVar36 * fVar34) + fVar29 * fVar28;
  fVar34 = pfVar21[1];
  fVar46 = pfVar21[2];
  *(float *)(param_1 + 5) = *pfVar21 - (fVar38 + fVar32 + fVar32);
  *(float *)((long)param_1 + 0x2c) = fVar34 - (extraout_s1 + fVar37 + fVar37);
  *(float *)(param_1 + 6) = fVar46 - (fVar35 + fVar28 + fVar28);
  fVar36 = 1.0;
  FUN_1094cccf4(0x3f800000,0,0x7f7fffff,plVar23,&pfStack_170,0,*(undefined1 *)(plVar23[3] + 2),0,0);
  func_0x0001094dc33c(&uStack_158,lVar12 + 0x58);
  fVar32 = ((float)uStack_158 - (float)uStack_148) - (float)lStack_138;
  fVar34 = ((float)uStack_148 - (float)uStack_158) - (float)lStack_138;
  fVar28 = ((float)lStack_138 - (float)uStack_158) - (float)uStack_148;
  fVar35 = (float)uStack_158 + (float)uStack_148 + (float)lStack_138;
  fVar46 = fVar32;
  if (fVar32 <= fVar35) {
    fVar46 = fVar35;
  }
  bVar4 = 2;
  if (fVar34 <= fVar46) {
    fVar34 = fVar46;
    bVar4 = fVar35 < fVar32;
  }
  bVar5 = 3;
  if (fVar28 <= fVar34) {
    fVar28 = fVar34;
    bVar5 = bVar4;
  }
  fVar46 = SQRT(fVar28 + 1.0) * 0.5;
  fVar34 = 0.25 / fVar46;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      fVar35 = fVar34 * (uStack_148._4_4_ - uStack_140._4_4_);
      fVar28 = fVar46;
      fVar32 = fVar34 * ((float)uStack_140 - fStack_150);
      fVar46 = fVar34 * (uStack_158._4_4_ - fStack_14c);
      goto LAB_1094cbcc0;
    }
    fVar28 = uStack_148._4_4_ - uStack_140._4_4_;
    fVar29 = (float)uStack_140 + fStack_150;
    fVar35 = fVar46;
    fVar46 = fVar34 * (uStack_158._4_4_ + fStack_14c);
  }
  else {
    if (bVar5 != 2) {
      fVar28 = fVar34 * (uStack_158._4_4_ - fStack_14c);
      fVar35 = fVar34 * ((float)uStack_140 + fStack_150);
      fVar32 = fVar34 * (uStack_148._4_4_ + uStack_140._4_4_);
      goto LAB_1094cbcc0;
    }
    fVar28 = (float)uStack_140 - fStack_150;
    fVar35 = fVar34 * (uStack_158._4_4_ + fStack_14c);
    fVar29 = uStack_148._4_4_ + uStack_140._4_4_;
  }
  fVar28 = fVar34 * fVar28;
  fVar32 = fVar46;
  fVar46 = fVar34 * fVar29;
LAB_1094cbcc0:
  fVar34 = fVar32 * fVar32 + fVar46 * fVar46 + fVar35 * fVar35 + fVar28 * fVar28;
  puVar13 = (undefined8 *)*param_1;
  puVar13[1] = CONCAT44(fVar28 / fVar34,-fVar46 / fVar34);
  *puVar13 = CONCAT44(-fVar32 / fVar34,-fVar35 / fVar34);
  *(float *)(puVar13 + 2) = fVar36;
  *(float *)((long)puVar13 + 0x14) = fVar36;
  *(float *)(puVar13 + 3) = fVar36;
  *(undefined1 *)((long)puVar13 + 0x1c) = 0;
  *(undefined1 *)(puVar13 + 5) = 0;
  fVar52 = fVar53 * -(fVar52 * fVar56) + fVar49 * fVar51;
  fStack_19c = fVar53 * -(fVar45 * fVar55) + fVar25 * fVar51;
  fStack_184 = 1.0 / (fVar52 * fVar26 + fVar50 * fVar54 + fStack_19c * fVar41);
  fStack_1a4 = fVar50 * fStack_184;
  fStack_198 = -((fVar25 * fVar27 + fVar49 * fVar48) * fStack_184);
  fStack_18c = fVar47 * fStack_184;
  fStack_1a0 = -(fVar52 * fStack_184);
  fStack_194 = (fVar53 * fVar27 + fVar49 * fVar54) * fStack_184;
  fStack_188 = -((fVar51 * fVar27 + fVar43 * fVar54) * fStack_184);
  fStack_19c = fStack_19c * fStack_184;
  uVar22 = (ulong)(uint)fStack_19c;
  fStack_190 = -((fVar53 * fVar26 + fVar25 * fVar54) * fStack_184);
  fStack_184 = (fVar51 * fVar26 + fVar44 * fVar54) * fStack_184;
  fStack_174 = 1.0 / fVar36;
  fVar25 = *pfVar21;
  fVar45 = pfVar21[1];
  fVar49 = pfVar21[2];
  fStack_180 = -(fStack_174 * (fStack_198 * fVar45 + fVar25 * fStack_1a4 + fVar49 * fStack_18c));
  fStack_17c = -(fStack_174 * (fStack_194 * fVar45 + fVar25 * fStack_1a0 + fVar49 * fStack_188));
  fStack_178 = -(fStack_174 * (fStack_190 * fVar45 + fVar25 * fStack_19c + fVar49 * fStack_184));
  fVar25 = fStack_178;
  if (bVar7 != false) {
    fVar25 = -*(float *)((long)param_1 + 0x3c);
    *(float *)((long)param_1 + 0x3c) = fVar25;
  }
  uVar31 = (ulong)(uint)fVar25;
  if (lVar24 != lVar11) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)((long)pfStack_170 + lVar11);
      FUN_1094cc98c(puVar1,&fStack_1a4,bVar7);
      *puVar1 = (int)uVar31;
      puVar1[1] = extraout_s1_00;
      puVar1[2] = (int)uVar22;
      lVar11 = lVar11 + 0xc;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  lVar11 = *plVar23;
  lVar24 = plVar23[1];
  if (1 < (ulong)((lVar24 - lVar11 >> 3) * -0x79435e50d79435e5)) {
    lVar20 = 0;
    pfVar21 = (float *)((long)puStack_240 + 100);
    uVar19 = 1;
    lVar12 = 0x2c;
    lVar30 = 0xf0;
    puStack_1c8 = puStack_240;
    fStack_1c0 = (float)uVar31;
    fStack_1bc = (float)(uVar31 >> 0x20);
    do {
      pfVar17 = pfStack_170;
      fVar25 = (float)uVar31;
      fVar45 = (float)uVar22;
      lVar2 = lVar11 + lVar30;
      piVar16 = *(int **)(lVar2 + -0x30);
      if (piVar16 == *(int **)(lVar2 + -0x28)) {
        if ((char)plVar23[0xc] == '\x01') {
          func_0x0001094dc33c(&uStack_158,lVar11 + lVar30);
          fVar44 = -(uStack_140._4_4_ * uStack_148._4_4_) + (float)lStack_138 * (float)uStack_148;
          fVar25 = -(uStack_140._4_4_ * fStack_150) + (float)lStack_138 * uStack_158._4_4_;
          fVar43 = -((float)uStack_148 * fStack_150) + uStack_148._4_4_ * uStack_158._4_4_;
          fVar51 = 1.0 / (-(fStack_14c * fVar25) + fVar44 * (float)uStack_158 +
                         fVar43 * (float)uStack_140);
          fVar44 = fVar44 * fVar51;
          fVar50 = -((-((float)uStack_140 * uStack_148._4_4_) + (float)lStack_138 * fStack_14c) *
                    fVar51);
          fVar52 = (-((float)uStack_140 * (float)uStack_148) + uStack_140._4_4_ * fStack_14c) *
                   fVar51;
          fVar48 = -(fVar25 * fVar51);
          fVar25 = (-((float)uStack_140 * fStack_150) + (float)lStack_138 * (float)uStack_158) *
                   fVar51;
          fVar41 = -((-((float)uStack_140 * uStack_158._4_4_) + uStack_140._4_4_ * (float)uStack_158
                     ) * fVar51);
          fVar43 = fVar43 * fVar51;
          fVar53 = -((-(fStack_14c * fStack_150) + uStack_148._4_4_ * (float)uStack_158) * fVar51);
          fVar51 = (-(fStack_14c * uStack_158._4_4_) + (float)uStack_148 * (float)uStack_158) *
                   fVar51;
          fVar47 = (fVar44 - fVar25) - fVar51;
          fVar45 = (fVar25 - fVar44) - fVar51;
          fVar49 = (fVar51 - fVar44) - fVar25;
          fVar51 = fVar51 + fVar44 + fVar25;
          fVar25 = fVar47;
          if (fVar47 <= fVar51) {
            fVar25 = fVar51;
          }
          bVar4 = 2;
          if (fVar45 <= fVar25) {
            fVar45 = fVar25;
            bVar4 = fVar51 < fVar47;
          }
          bVar5 = 3;
          if (fVar49 <= fVar45) {
            fVar49 = fVar45;
            bVar5 = bVar4;
          }
          fVar46 = SQRT(fVar49 + 1.0) * 0.5;
          fVar55 = 0.25 / fVar46;
          fVar47 = (fVar52 - fVar43) * fVar55;
          fVar54 = (fVar48 + fVar50) * fVar55;
          fVar56 = (fVar53 + fVar41) * fVar55;
          fVar44 = (fVar48 - fVar50) * fVar55;
          fVar43 = (fVar52 + fVar43) * fVar55;
          fVar45 = fVar47;
          fVar49 = fVar56;
          fVar25 = fVar46;
          fVar51 = fVar54;
          if (bVar5 != 2) {
            fVar45 = fVar44;
            fVar49 = fVar46;
            fVar25 = fVar56;
            fVar51 = fVar43;
          }
          fVar55 = (fVar53 - fVar41) * fVar55;
          fVar53 = fVar46;
          if (bVar5 != 0) {
            fVar53 = fVar55;
            fVar44 = fVar43;
            fVar47 = fVar54;
            fVar55 = fVar46;
          }
          if (bVar5 < 2) {
            fVar25 = fVar47;
            fVar51 = fVar55;
          }
          uVar22 = (ulong)(uint)fVar25;
          if (bVar5 < 2) {
            fVar49 = fVar44;
          }
          pfVar17 = (float *)(*param_1 + lVar12);
          *pfVar17 = fVar51;
          pfVar17[1] = fVar25;
          if (bVar5 < 2) {
            fVar45 = fVar53;
          }
          uVar31 = (ulong)(uint)fVar45;
          pfVar17[2] = fVar49;
          pfVar17[3] = fVar45;
        }
      }
      else {
        if (*(char *)(lVar2 + -0x50) == '\x01') {
          iVar10 = *(int *)(lVar11 + lVar30 + -0x54);
          pfVar18 = pfStack_170 + (long)iVar10 * 3;
        }
        else {
          pfVar18 = (float *)((long)pfStack_170 + lVar20 + 0xc);
          iVar10 = *(int *)(lVar11 + lVar30 + -0x54);
        }
        lVar24 = plVar23[3];
        uStack_c0 = *(long *)pfVar18;
        lStack_b8 = CONCAT44(lStack_b8._4_4_,pfVar18[2]);
        pfVar18 = (float *)((long)puStack_240 + (long)iVar10 * 0x34);
        bVar7 = *(char *)(lVar24 + lVar20 + 0xc) != '\x01';
        if (bVar7) {
          fVar42 = (float)((uint)fVar42 & 0xffffff00);
          FUN_1094dc330(lVar11 + lVar30);
          fVar25 = fVar25 - pfVar18[9];
          fVar41 = extraout_s1_02 - pfVar18[10];
          fVar49 = pfVar18[0xc];
          fVar45 = fVar45 - pfVar18[0xb];
          uVar39 = *(undefined8 *)pfVar18;
          fVar44 = pfVar18[2];
          uVar57 = *(undefined8 *)(pfVar18 + 6);
          fVar48 = pfVar18[8];
          fVar53 = (float)((ulong)*(undefined8 *)(pfVar18 + 3) >> 0x20);
          fVar43 = -(float)((ulong)uVar57 >> 0x20);
          fVar55 = fVar44 * fVar43 + fVar48 * pfVar18[1];
          fVar51 = (float)*(undefined8 *)(pfVar18 + 3);
          fVar46 = -(float)uVar57;
          fVar54 = -fVar51;
          fVar47 = (float)((ulong)*(undefined8 *)(pfVar18 + 4) >> 0x20);
          fVar34 = (float)((ulong)uVar39 >> 0x20);
          fVar50 = fVar47 * fVar43 + fVar48 * (float)*(undefined8 *)(pfVar18 + 4);
          fVar52 = fVar44 * -fVar53 + fVar34 * fVar47;
          fVar43 = (float)uVar39;
          fVar56 = 1.0 / (fVar55 * fVar54 + fVar50 * fVar43 + (float)uVar57 * fVar52);
          uVar39 = NEON_ext(uVar57,uVar39,4,1);
          fStack_1c0 = (-(fVar47 * fVar46 + fVar48 * fVar51) * fVar56 * fVar41 +
                        fVar50 * fVar56 * fVar25 +
                       (fVar53 * fVar46 + (float)uVar39 * fVar51) * fVar56 * fVar45) / fVar49;
          fStack_1bc = (-(fVar44 * fVar54 + fVar47 * fVar43) * fVar56 * fVar41 +
                        fVar52 * fVar56 * fVar25 +
                       (fVar34 * fVar54 + (float)((ulong)uVar39 >> 0x20) * fVar53) * fVar56 * fVar45
                       ) / fVar49;
          puStack_1c8 = (undefined8 *)
                        (ulong)(uint)((fVar41 * (fVar44 * fVar46 + fVar48 * fVar43) * fVar56 +
                                       fVar25 * -(fVar55 * fVar56) +
                                      fVar45 * -((pfVar18[1] * fVar46 + pfVar18[7] * fVar43) *
                                                fVar56)) / fVar49);
        }
        else {
          fVar42 = fStack_1c0;
          FUN_1094cc98c(&uStack_c0,pfVar18,0);
          fVar49 = pfVar18[0xc];
          fStack_238 = fVar45;
          fStack_234 = extraout_s1_01;
          fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
        }
        lVar3 = lVar24 + lVar20;
        if (*(char *)(lVar3 + 0xd) == '\x01') {
          FUN_1094cccf4(fVar49,fVar49 * *(float *)(lVar3 + 0x10),fVar49 * *(float *)(lVar3 + 0x14),
                        plVar23,&pfStack_170,(long)*(int *)(lVar2 + -0x58),
                        *(undefined1 *)(lVar24 + (long)*(int *)(lVar2 + -0x58) * 0xc + 2),
                        (ulong)(uint)fStack_1c0 | (long)puStack_1c8 << 0x20,
                        (ulong)CONCAT14(bVar7,fStack_1bc));
          piVar16 = *(int **)(lVar2 + -0x30);
          pfVar17 = pfStack_170;
        }
        else {
          fVar49 = 1.0;
        }
        iVar10 = *piVar16;
        func_0x0001094dc33c(&uStack_158,lVar11 + lVar30);
        pfVar17 = pfVar17 + (long)iVar10 * 3;
        fVar51 = *pfVar17 - (float)uStack_c0;
        fVar53 = pfVar17[1] - uStack_c0._4_4_;
        fVar41 = pfVar17[2] - (float)lStack_b8;
        fVar44 = pfVar18[2];
        fVar25 = pfVar18[3];
        fVar29 = *pfVar18;
        fVar38 = pfVar18[1];
        fVar34 = pfVar18[6];
        fVar35 = pfVar18[7];
        fVar59 = fVar53 * fVar25 + fVar51 * fVar29 + fVar41 * fVar34;
        fVar37 = pfVar18[4];
        fVar45 = pfVar18[5];
        fVar63 = fVar53 * fVar37 + fVar51 * fVar38 + fVar41 * fVar35;
        fVar56 = pfVar18[8];
        fVar32 = fVar53 * fVar45 + fVar51 * fVar44 + fVar41 * fVar56;
        fVar51 = 1.0 / SQRT(fVar59 * fVar59 + fVar63 * fVar63 + fVar32 * fVar32);
        fVar59 = fVar59 * fVar51;
        fVar63 = fVar63 * fVar51;
        fVar32 = fVar32 * fVar51;
        fVar40 = fVar63 * -0.0 + fVar32 * 0.0;
        fVar58 = fVar59 * 0.0 - fVar32;
        fVar60 = fVar63 + fVar59 * -0.0;
        fVar51 = 1.0 / SQRT(fVar60 * fVar60 + fVar58 * fVar58 + fVar40 * fVar40);
        fVar40 = fVar40 * fVar51;
        fVar58 = fVar58 * fVar51;
        fVar60 = fVar60 * fVar51;
        fVar53 = -(fVar58 * fVar32) + fVar60 * fVar63;
        fVar27 = -(fVar60 * fVar59) + fVar40 * fVar32;
        fVar52 = -(fVar40 * fVar63) + fVar58 * fVar59;
        fVar50 = -(uStack_140._4_4_ * uStack_148._4_4_) + (float)lStack_138 * (float)uStack_148;
        fVar43 = -(uStack_140._4_4_ * fStack_150) + (float)lStack_138 * uStack_158._4_4_;
        fVar46 = -((float)uStack_148 * fStack_150) + uStack_148._4_4_ * uStack_158._4_4_;
        fVar51 = 1.0 / (-(fStack_14c * fVar43) + fVar50 * (float)uStack_158 +
                       fVar46 * (float)uStack_140);
        fVar50 = fVar50 * fVar51;
        fVar41 = -((-((float)uStack_140 * uStack_148._4_4_) + (float)lStack_138 * fStack_14c) *
                  fVar51);
        fVar54 = (-((float)uStack_140 * (float)uStack_148) + uStack_140._4_4_ * fStack_14c) * fVar51
        ;
        fVar55 = -(fVar43 * fVar51);
        fVar43 = (-((float)uStack_140 * fStack_150) + (float)lStack_138 * (float)uStack_158) *
                 fVar51;
        fVar47 = -((-((float)uStack_140 * uStack_158._4_4_) + uStack_140._4_4_ * (float)uStack_158)
                  * fVar51);
        fVar46 = fVar46 * fVar51;
        fVar48 = -((-(fStack_14c * fStack_150) + uStack_148._4_4_ * (float)uStack_158) * fVar51);
        fVar51 = (-(fStack_14c * uStack_158._4_4_) + (float)uStack_148 * (float)uStack_158) * fVar51
        ;
        fVar26 = 1.0 / SQRT(fVar52 * fVar52 + fVar53 * fVar53 + fVar27 * fVar27);
        fVar27 = fVar27 * fVar26;
        fVar61 = fVar53 * fVar26;
        fVar26 = fVar52 * fVar26;
        fVar28 = fVar41 * fVar27 + fVar61 * fVar50 + fVar26 * fVar54;
        fVar64 = fVar63 * fVar41 + fVar59 * fVar50 + fVar32 * fVar54;
        fVar54 = fVar41 * fVar58 + fVar40 * fVar50 + fVar60 * fVar54;
        fVar66 = fVar43 * fVar27 + fVar61 * fVar55 + fVar26 * fVar47;
        fVar36 = fVar63 * fVar43 + fVar59 * fVar55 + fVar32 * fVar47;
        fVar65 = fVar43 * fVar58 + fVar40 * fVar55 + fVar60 * fVar47;
        fVar55 = fVar48 * fVar58 + fVar40 * fVar46 + fVar60 * fVar51;
        fVar50 = fVar48 * fVar27 + fVar61 * fVar46 + fVar26 * fVar51;
        fVar67 = fVar63 * fVar48 + fVar59 * fVar46 + fVar32 * fVar51;
        fVar51 = -(fVar63 * fVar26) + fVar32 * fVar27;
        fVar46 = 1.0 / (-(fVar59 * (-(fVar58 * fVar26) + fVar60 * fVar27)) + fVar53 * fVar61 +
                       fVar51 * fVar40);
        fVar51 = fVar51 * fVar46;
        fVar62 = -((-(fVar59 * fVar26) + fVar32 * fVar61) * fVar46);
        fVar53 = fVar53 * fVar46;
        fVar43 = (-(fVar27 * fVar60) - -(fVar58 * fVar26)) * fVar46;
        fVar47 = (-(fVar59 * fVar60) - -(fVar40 * fVar32)) * fVar46;
        fVar48 = (-(fVar40 * fVar26) + fVar60 * fVar61) * fVar46;
        fVar41 = (-(fVar59 * fVar27) + fVar63 * fVar61) * fVar46;
        fVar26 = fVar38 * fVar62 + fVar29 * fVar51 + fVar44 * fVar41;
        fVar32 = fVar37 * fVar62 + fVar25 * fVar51 + fVar45 * fVar41;
        fVar51 = fVar35 * fVar62 + fVar34 * fVar51 + fVar56 * fVar41;
        fVar52 = fVar52 * fVar46;
        fVar46 = (-(fVar61 * fVar58) - -(fVar40 * fVar27)) * fVar46;
        fVar41 = fVar47 * fVar38 + fVar53 * fVar29 + fVar52 * fVar44;
        fVar44 = fVar48 * fVar38 + fVar43 * fVar29 + fVar46 * fVar44;
        fVar38 = pfVar18[0xc] / fVar49;
        fVar27 = fVar47 * fVar37 + fVar53 * fVar25 + fVar52 * fVar45;
        fVar29 = fVar48 * fVar37 + fVar43 * fVar25 + fVar46 * fVar45;
        fVar37 = -fVar38;
        fVar45 = fVar47 * fVar35 + fVar53 * fVar34 + fVar52 * fVar56;
        fVar53 = fVar48 * fVar35 + fVar43 * fVar34 + fVar46 * fVar56;
        fVar25 = SUB84(puStack_1c8,0);
        if (!bVar7) {
          fVar25 = uStack_c0._4_4_;
        }
        fVar43 = fStack_1c0;
        if (!bVar7) {
          fVar43 = (float)uStack_c0;
        }
        fVar47 = fStack_1bc;
        if (!bVar7) {
          fVar47 = (float)lStack_b8;
        }
        pfVar21[-10] = fVar26;
        pfVar21[-7] = fVar32;
        pfVar21[-4] = fVar51;
        *(ulong *)(pfVar21 + -0xc) = CONCAT44(fVar44,fVar41);
        *(ulong *)(pfVar21 + -9) = CONCAT44(fVar29,fVar27);
        *(ulong *)(pfVar21 + -6) = CONCAT44(fVar53,fVar45);
        *(ulong *)(pfVar21 + -3) =
             CONCAT44(fVar29 * fVar37 * fVar25 + fVar44 * fVar37 * fVar43 + fVar53 * fVar37 * fVar47
                      ,fVar27 * fVar37 * fVar25 + fVar41 * fVar37 * fVar43 +
                       fVar45 * fVar37 * fVar47);
        pfVar21[-1] = fVar25 * -(fVar38 * fVar32) + fVar43 * -(fVar38 * fVar26) +
                      fVar47 * -(fVar38 * fVar51);
        *pfVar21 = fVar38;
        fVar51 = (fVar55 - fVar28) - fVar36;
        fVar53 = (fVar28 - fVar36) - fVar55;
        fVar45 = (fVar36 - fVar28) - fVar55;
        fVar55 = fVar55 + fVar36 + fVar28;
        fVar25 = fVar53;
        if (fVar53 <= fVar55) {
          fVar25 = fVar55;
        }
        bVar4 = 2;
        if (fVar45 <= fVar25) {
          fVar45 = fVar25;
          bVar4 = fVar55 < fVar53;
        }
        bVar5 = 3;
        if (fVar51 <= fVar45) {
          fVar51 = fVar45;
          bVar5 = bVar4;
        }
        fVar41 = SQRT(fVar51 + 1.0) * 0.5;
        fVar25 = 0.25 / fVar41;
        bVar8 = bVar5 != 2;
        fVar51 = (fVar54 - fVar50) * fVar25;
        fVar44 = (fVar64 + fVar66) * fVar25;
        fVar47 = (fVar67 + fVar65) * fVar25;
        fVar45 = (fVar66 - fVar64) * fVar25;
        fVar43 = (fVar54 + fVar50) * fVar25;
        fVar53 = fVar44;
        if (bVar8) {
          fVar53 = fVar43;
        }
        fVar50 = fVar47;
        fVar48 = fVar41;
        if (bVar8) {
          fVar50 = fVar41;
          fVar48 = fVar47;
        }
        fVar25 = (fVar67 - fVar65) * fVar25;
        fVar47 = fVar51;
        if (bVar8) {
          fVar47 = fVar45;
        }
        fVar52 = fVar41;
        if (bVar5 != 0) {
          fVar52 = fVar25;
          fVar25 = fVar41;
          fVar45 = fVar43;
          fVar51 = fVar44;
        }
        if (bVar5 < 2) {
          fVar48 = fVar51;
          fVar53 = fVar25;
        }
        uVar22 = (ulong)(uint)fVar48;
        if (bVar5 < 2) {
          fVar50 = fVar45;
        }
        pfVar17 = (float *)(*param_1 + lVar12);
        *pfVar17 = fVar53;
        pfVar17[1] = fVar48;
        if (bVar5 < 2) {
          fVar47 = fVar52;
        }
        pfVar17[2] = fVar50;
        pfVar17[3] = fVar47;
        pfVar17[4] = fVar49;
        pfVar17[5] = fVar49;
        pfVar17[6] = fVar49;
        pfVar17[7] = fVar42;
        uVar31 = (ulong)(uint)fStack_238;
        pfVar17[8] = fStack_234;
        pfVar17[9] = fStack_238;
        *(bool *)(pfVar17 + 10) = !bVar7;
        lVar24 = plVar23[1];
      }
      uVar19 = uVar19 + 1;
      lVar11 = *plVar23;
      lVar12 = lVar12 + 0x2c;
      lVar30 = lVar30 + 0x98;
      pfVar21 = pfVar21 + 0xd;
      lVar20 = lVar20 + 0xc;
    } while (uVar19 < (ulong)((lVar24 - lVar11 >> 3) * -0x79435e50d79435e5));
  }
  if (puStack_240 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  if (pfStack_170 != (float *)0x0) {
    pfStack_168 = pfStack_170;
    __ZdlPv();
  }
  return;
}



/* Entry: 1094cc870; end: 1094cc913;  */

void FUN_1094cc870(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  lVar4 = (lVar2 - lVar1 >> 3) * -0x79435e50d79435e5;
  if (lVar4 != 0) {
    FUN_1094cd204(param_1,lVar4);
    puVar3 = param_1;
    FUN_1094cd2ac(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 1094cc914; end: 1094cc98b;  */

undefined8 * FUN_1094cc914(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110af7648;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_1094cf2b0();
  }
  return param_1;
}



/* Entry: 1094cc98c; end: 1094cca1b;  */

float FUN_1094cc98c(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[0xc];
  return param_2[9] +
         fVar1 * param_2[3] * param_1[1] + *param_1 * fVar1 * *param_2 +
         param_1[2] * fVar1 * param_2[6];
}



/* Entry: 1094cca1c; end: 1094ccab3;  */

undefined8 * FUN_1094cca1c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1094ccab4(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0xc - 0xcU) / 0xc) * 0xc + 0xc;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 1094ccab4; end: 1094ccafb;  */

undefined1  [16] FUN_1094ccab4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_2 < 0x1555555555555556) {
    plVar2 = param_1;
    FUN_1094ccb10();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 0xc;
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = plVar2;
    return auVar11;
  }
  FUN_1094ccafc();
  plVar2 = (long *)&UNK_10f56f2c4;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    lVar3 = param_2 * 0xc;
    __Znwm(lVar3);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar3;
    return auVar12;
  }
  func_0x000104c4f740();
  plVar4 = plVar2;
  uVar5 = param_2;
  func_0x000107c31944();
  plVar8 = (long *)plVar2[1];
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)puVar9) == 0) {
      plVar10 = (long *)((ulong)puVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar1 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*plVar2 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar7 = (long *)plVar6[1];
        if (plVar4 == plVar7) {
          uVar5 = (ulong)(plVar6 + 2);
          plVar7 = plVar2;
          func_0x000104c4fbc4(plVar2,uVar5,param_2);
          if (((ulong)plVar7 & 1) != 0) break;
        }
        else {
          if (((ulong)plVar8 & (ulong)puVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & (ulong)puVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar8);
          }
          if (plVar7 != plVar10) goto LAB_1094ccc18;
        }
      }
      goto LAB_1094ccc1c;
    }
  }
LAB_1094ccc18:
  plVar6 = (long *)0x0;
LAB_1094ccc1c:
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = plVar6;
  return auVar13;
}



/* Entry: 1094ccafc; end: 1094ccb0f;  */

undefined1  [16] FUN_1094ccafc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  plVar2 = (long *)&UNK_10f56f2c4;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    lVar3 = param_2 * 0xc;
    __Znwm(lVar3);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  func_0x000104c4f740();
  plVar4 = plVar2;
  uVar5 = param_2;
  func_0x000107c31944();
  plVar8 = (long *)plVar2[1];
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)puVar9) == 0) {
      plVar10 = (long *)((ulong)puVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar1 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*plVar2 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar7 = (long *)plVar6[1];
        if (plVar4 == plVar7) {
          uVar5 = (ulong)(plVar6 + 2);
          plVar7 = plVar2;
          func_0x000104c4fbc4(plVar2,uVar5,param_2);
          if (((ulong)plVar7 & 1) != 0) break;
        }
        else {
          if (((ulong)plVar8 & (ulong)puVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & (ulong)puVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar8);
          }
          if (plVar7 != plVar10) goto LAB_1094ccc18;
        }
      }
      goto LAB_1094ccc1c;
    }
  }
LAB_1094ccc18:
  plVar6 = (long *)0x0;
LAB_1094ccc1c:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = plVar6;
  return auVar12;
}



/* Entry: 1094ccb10; end: 1094ccb53;  */

undefined1  [16] FUN_1094ccb10(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < 0x1555555555555556) {
    lVar2 = param_2 * 0xc;
    __Znwm(lVar2);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar2;
    return auVar10;
  }
  func_0x000104c4f740();
  plVar3 = param_1;
  uVar4 = param_2;
  func_0x000107c31944();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      plVar9 = (long *)(uVar8 & (ulong)plVar3);
    }
    else {
      plVar9 = plVar3;
      if (plVar7 <= plVar3) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar7;
        }
        plVar9 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar9 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar3 == plVar6) {
          uVar4 = (ulong)(plVar5 + 2);
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,uVar4,param_2);
          if (((ulong)plVar6 & 1) != 0) break;
        }
        else {
          if (((ulong)plVar7 & uVar8) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar8);
          }
          else if (plVar7 <= plVar6) {
            uVar1 = 0;
            if (plVar7 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar7;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
          }
          if (plVar6 != plVar9) goto LAB_1094ccc18;
        }
      }
      goto LAB_1094ccc1c;
    }
  }
LAB_1094ccc18:
  plVar5 = (long *)0x0;
LAB_1094ccc1c:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar5;
  return auVar11;
}



/* Entry: 1094ccb54; end: 1094ccc37;  */

long FUN_1094ccb54(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1094ccc38; end: 1094ccc83;  */

ulong FUN_1094ccc38(ulong param_1,float param_2,float param_3,long *param_4,long *param_5,
                   int param_6,ulong param_7,undefined8 param_8,ulong param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_1b8;
  char cStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int *piStack_120;
  int *piStack_118;
  undefined8 uStack_110;
  
  if (param_5 < (long *)0x5d1745d1745d175) {
    plVar4 = param_4;
    FUN_1094ccc98();
    *param_4 = (long)plVar4;
    param_4[1] = (long)plVar4;
    param_4[2] = (long)plVar4 + (long)param_5 * 0x2c;
    return param_1;
  }
  FUN_1094ccc84();
  func_0x000104c4f6cc(&UNK_10f56f2c4);
  if ((long *)0x5d1745d1745d174 < param_5) {
    func_0x000104c4f740();
    fVar9 = (float)param_1;
    plVar4 = (long *)&UNK_10f56f2c4;
    func_0x000104c4f6cc();
    lVar2 = 0x40;
    if ((int)param_7 == 0) {
      lVar2 = 0x28;
    }
    plVar1 = (long *)(*plVar4 + (long)param_6 * 0x98 + lVar2);
    piStack_120 = (int *)0x0;
    piStack_118 = (int *)0x0;
    uStack_110 = 0;
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    FUN_109285684(&piStack_120,lVar2,lVar3,lVar3 - lVar2 >> 2);
    if (piStack_120 == piStack_118) {
      fVar11 = 0.0;
      fVar16 = 0.0;
    }
    else {
      uVar7 = 0;
      fVar11 = 0.0;
      do {
        piStack_118 = piStack_118 + -1;
        piVar8 = (int *)(*plVar4 + (long)*piStack_118 * 0x98);
        if ((char)piVar8[2] == '\x01') {
          if ((param_7 & 1) == 0) {
            FUN_109241290(&piStack_120);
          }
        }
        else {
          puVar6 = (undefined8 *)(*plVar4 + (long)piVar8[1] * 0x98);
          uStack_1b8 = *puVar6;
          cStack_1b0 = *(char *)(puVar6 + 1);
          if (*(char *)((long)puVar6 + 0x27) < '\0') {
            func_0x000107c3192c(&uStack_1a8,puVar6[2],puVar6[3]);
          }
          else {
            uStack_1a0 = puVar6[3];
            uStack_1a8 = puVar6[2];
            lStack_198 = puVar6[4];
          }
          lStack_190 = 0;
          lStack_188 = 0;
          uStack_180 = 0;
          FUN_109285684(&lStack_190,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
          lStack_178 = 0;
          lStack_170 = 0;
          uStack_168 = 0;
          FUN_109285684(&lStack_178,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
          uStack_158 = puVar6[0xc];
          uStack_160 = puVar6[0xb];
          uStack_148 = puVar6[0xe];
          uStack_150 = puVar6[0xd];
          uStack_138 = puVar6[0x10];
          uStack_140 = puVar6[0xf];
          uStack_128 = puVar6[0x12];
          uStack_130 = puVar6[0x11];
          if (cStack_1b0 == '\x01') {
            puVar6 = (undefined8 *)(*plVar4 + (long)uStack_1b8._4_4_ * 0x98);
            cStack_1b0 = *(char *)(puVar6 + 1);
            uStack_1b8 = *puVar6;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_1a8,puVar6 + 2);
            if (&uStack_1b8 != puVar6) {
              FUN_10928555c(&lStack_190,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
              FUN_10928555c(&lStack_178,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
            }
            uStack_158 = puVar6[0xc];
            uStack_160 = puVar6[0xb];
            uStack_148 = puVar6[0xe];
            uStack_150 = puVar6[0xd];
            uStack_138 = puVar6[0x10];
            uStack_140 = puVar6[0xf];
            uStack_128 = puVar6[0x12];
            uStack_130 = puVar6[0x11];
          }
          fVar14 = (float)uStack_140;
          fVar13 = (float)uStack_150;
          fVar16 = (float)uStack_160;
          pfVar5 = (float *)(*param_5 + (long)(int)uStack_1b8 * 0xc);
          fVar18 = *pfVar5;
          fVar20 = pfVar5[1];
          fVar17 = pfVar5[2];
          pfVar5 = (float *)(*param_5 + (long)*piVar8 * 0xc);
          fVar12 = *pfVar5;
          if (((int)uStack_1b8 == param_6) && ((param_9 & 0x100000000) != 0)) {
            fVar13 = fVar12 - fVar18;
            fVar19 = pfVar5[1];
            fVar15 = pfVar5[2];
            fVar14 = fVar19 - fVar20;
            fVar16 = fVar15 - fVar17;
            fVar10 = (((float)param_8 - fVar18) * fVar13 +
                      ((float)((ulong)param_8 >> 0x20) - fVar20) * fVar14 +
                     ((float)param_9 - fVar17) * fVar16) /
                     (fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16);
            fVar13 = fVar13 * fVar10;
            fVar14 = fVar14 * fVar10;
            fVar16 = fVar16 * fVar10;
            fVar18 = fVar18 + fVar13;
            fVar20 = fVar20 + fVar14;
            fVar17 = fVar17 + fVar16;
          }
          else {
            fVar19 = pfVar5[1];
            fVar15 = pfVar5[2];
          }
          FUN_1094dc330(piVar8 + 0x16);
          if (lStack_178 != 0) {
            lStack_170 = lStack_178;
            __ZdlPv();
          }
          if (lStack_190 != 0) {
            lStack_188 = lStack_190;
            __ZdlPv();
          }
          if (lStack_198 < 0) {
            __ZdlPv(uStack_1a8);
          }
          fVar12 = fVar12 - fVar18;
          fVar11 = fVar11 + SQRT(fVar12 * fVar12 + (fVar19 - fVar20) * (fVar19 - fVar20) +
                                 (fVar15 - fVar17) * (fVar15 - fVar17)) /
                            SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar13 * fVar13);
          uVar7 = uVar7 + 1;
        }
      } while (piStack_120 != piStack_118);
      fVar16 = (float)uVar7;
    }
    if (piStack_120 != (int *)0x0) {
      piStack_118 = piStack_120;
      __ZdlPv();
    }
    fVar11 = fVar11 * (fVar9 / fVar16);
    if (fVar11 <= param_2) {
      fVar11 = param_2;
    }
    if (param_3 <= fVar11) {
      fVar11 = param_3;
    }
    return (ulong)(uint)fVar11;
  }
  __Znwm((long)param_5 * 0x2c);
  return param_1;
}



/* Entry: 1094ccc84; end: 1094ccc97;  */

ulong FUN_1094ccc84(ulong param_1,float param_2,float param_3,undefined8 param_4,long *param_5,
                   int param_6,ulong param_7,undefined8 param_8,ulong param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_198;
  char cStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int *piStack_100;
  int *piStack_f8;
  undefined8 uStack_f0;
  
  func_0x000104c4f6cc(&UNK_10f56f2c4);
  if ((long *)0x5d1745d1745d174 < param_5) {
    func_0x000104c4f740();
    fVar9 = (float)param_1;
    plVar4 = (long *)&UNK_10f56f2c4;
    func_0x000104c4f6cc();
    lVar2 = 0x40;
    if ((int)param_7 == 0) {
      lVar2 = 0x28;
    }
    plVar1 = (long *)(*plVar4 + (long)param_6 * 0x98 + lVar2);
    piStack_100 = (int *)0x0;
    piStack_f8 = (int *)0x0;
    uStack_f0 = 0;
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    FUN_109285684(&piStack_100,lVar2,lVar3,lVar3 - lVar2 >> 2);
    if (piStack_100 == piStack_f8) {
      fVar11 = 0.0;
      fVar16 = 0.0;
    }
    else {
      uVar7 = 0;
      fVar11 = 0.0;
      do {
        piStack_f8 = piStack_f8 + -1;
        piVar8 = (int *)(*plVar4 + (long)*piStack_f8 * 0x98);
        if ((char)piVar8[2] == '\x01') {
          if ((param_7 & 1) == 0) {
            FUN_109241290(&piStack_100);
          }
        }
        else {
          puVar6 = (undefined8 *)(*plVar4 + (long)piVar8[1] * 0x98);
          uStack_198 = *puVar6;
          cStack_190 = *(char *)(puVar6 + 1);
          if (*(char *)((long)puVar6 + 0x27) < '\0') {
            func_0x000107c3192c(&uStack_188,puVar6[2],puVar6[3]);
          }
          else {
            uStack_180 = puVar6[3];
            uStack_188 = puVar6[2];
            lStack_178 = puVar6[4];
          }
          lStack_170 = 0;
          lStack_168 = 0;
          uStack_160 = 0;
          FUN_109285684(&lStack_170,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
          lStack_158 = 0;
          lStack_150 = 0;
          uStack_148 = 0;
          FUN_109285684(&lStack_158,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
          uStack_138 = puVar6[0xc];
          uStack_140 = puVar6[0xb];
          uStack_128 = puVar6[0xe];
          uStack_130 = puVar6[0xd];
          uStack_118 = puVar6[0x10];
          uStack_120 = puVar6[0xf];
          uStack_108 = puVar6[0x12];
          uStack_110 = puVar6[0x11];
          if (cStack_190 == '\x01') {
            puVar6 = (undefined8 *)(*plVar4 + (long)uStack_198._4_4_ * 0x98);
            cStack_190 = *(char *)(puVar6 + 1);
            uStack_198 = *puVar6;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_188,puVar6 + 2);
            if (&uStack_198 != puVar6) {
              FUN_10928555c(&lStack_170,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
              FUN_10928555c(&lStack_158,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
            }
            uStack_138 = puVar6[0xc];
            uStack_140 = puVar6[0xb];
            uStack_128 = puVar6[0xe];
            uStack_130 = puVar6[0xd];
            uStack_118 = puVar6[0x10];
            uStack_120 = puVar6[0xf];
            uStack_108 = puVar6[0x12];
            uStack_110 = puVar6[0x11];
          }
          fVar14 = (float)uStack_120;
          fVar13 = (float)uStack_130;
          fVar16 = (float)uStack_140;
          pfVar5 = (float *)(*param_5 + (long)(int)uStack_198 * 0xc);
          fVar18 = *pfVar5;
          fVar20 = pfVar5[1];
          fVar17 = pfVar5[2];
          pfVar5 = (float *)(*param_5 + (long)*piVar8 * 0xc);
          fVar12 = *pfVar5;
          if (((int)uStack_198 == param_6) && ((param_9 & 0x100000000) != 0)) {
            fVar13 = fVar12 - fVar18;
            fVar19 = pfVar5[1];
            fVar15 = pfVar5[2];
            fVar14 = fVar19 - fVar20;
            fVar16 = fVar15 - fVar17;
            fVar10 = (((float)param_8 - fVar18) * fVar13 +
                      ((float)((ulong)param_8 >> 0x20) - fVar20) * fVar14 +
                     ((float)param_9 - fVar17) * fVar16) /
                     (fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16);
            fVar13 = fVar13 * fVar10;
            fVar14 = fVar14 * fVar10;
            fVar16 = fVar16 * fVar10;
            fVar18 = fVar18 + fVar13;
            fVar20 = fVar20 + fVar14;
            fVar17 = fVar17 + fVar16;
          }
          else {
            fVar19 = pfVar5[1];
            fVar15 = pfVar5[2];
          }
          FUN_1094dc330(piVar8 + 0x16);
          if (lStack_158 != 0) {
            lStack_150 = lStack_158;
            __ZdlPv();
          }
          if (lStack_170 != 0) {
            lStack_168 = lStack_170;
            __ZdlPv();
          }
          if (lStack_178 < 0) {
            __ZdlPv(uStack_188);
          }
          fVar12 = fVar12 - fVar18;
          fVar11 = fVar11 + SQRT(fVar12 * fVar12 + (fVar19 - fVar20) * (fVar19 - fVar20) +
                                 (fVar15 - fVar17) * (fVar15 - fVar17)) /
                            SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar13 * fVar13);
          uVar7 = uVar7 + 1;
        }
      } while (piStack_100 != piStack_f8);
      fVar16 = (float)uVar7;
    }
    if (piStack_100 != (int *)0x0) {
      piStack_f8 = piStack_100;
      __ZdlPv();
    }
    fVar11 = fVar11 * (fVar9 / fVar16);
    if (fVar11 <= param_2) {
      fVar11 = param_2;
    }
    if (param_3 <= fVar11) {
      fVar11 = param_3;
    }
    return (ulong)(uint)fVar11;
  }
  __Znwm((long)param_5 * 0x2c);
  return param_1;
}



/* Entry: 1094ccc98; end: 1094cccdf;  */

ulong FUN_1094ccc98(ulong param_1,float param_2,float param_3,undefined8 param_4,long *param_5,
                   int param_6,ulong param_7,undefined8 param_8,ulong param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_188;
  char cStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int *piStack_f0;
  int *piStack_e8;
  undefined8 uStack_e0;
  
  if ((long *)0x5d1745d1745d174 < param_5) {
    func_0x000104c4f740();
    fVar9 = (float)param_1;
    plVar4 = (long *)&UNK_10f56f2c4;
    func_0x000104c4f6cc();
    lVar2 = 0x40;
    if ((int)param_7 == 0) {
      lVar2 = 0x28;
    }
    plVar1 = (long *)(*plVar4 + (long)param_6 * 0x98 + lVar2);
    piStack_f0 = (int *)0x0;
    piStack_e8 = (int *)0x0;
    uStack_e0 = 0;
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    FUN_109285684(&piStack_f0,lVar2,lVar3,lVar3 - lVar2 >> 2);
    if (piStack_f0 == piStack_e8) {
      fVar11 = 0.0;
      fVar16 = 0.0;
    }
    else {
      uVar7 = 0;
      fVar11 = 0.0;
      do {
        piStack_e8 = piStack_e8 + -1;
        piVar8 = (int *)(*plVar4 + (long)*piStack_e8 * 0x98);
        if ((char)piVar8[2] == '\x01') {
          if ((param_7 & 1) == 0) {
            FUN_109241290(&piStack_f0);
          }
        }
        else {
          puVar6 = (undefined8 *)(*plVar4 + (long)piVar8[1] * 0x98);
          uStack_188 = *puVar6;
          cStack_180 = *(char *)(puVar6 + 1);
          if (*(char *)((long)puVar6 + 0x27) < '\0') {
            func_0x000107c3192c(&uStack_178,puVar6[2],puVar6[3]);
          }
          else {
            uStack_170 = puVar6[3];
            uStack_178 = puVar6[2];
            lStack_168 = puVar6[4];
          }
          lStack_160 = 0;
          lStack_158 = 0;
          uStack_150 = 0;
          FUN_109285684(&lStack_160,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
          lStack_148 = 0;
          lStack_140 = 0;
          uStack_138 = 0;
          FUN_109285684(&lStack_148,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
          uStack_128 = puVar6[0xc];
          uStack_130 = puVar6[0xb];
          uStack_118 = puVar6[0xe];
          uStack_120 = puVar6[0xd];
          uStack_108 = puVar6[0x10];
          uStack_110 = puVar6[0xf];
          uStack_f8 = puVar6[0x12];
          uStack_100 = puVar6[0x11];
          if (cStack_180 == '\x01') {
            puVar6 = (undefined8 *)(*plVar4 + (long)uStack_188._4_4_ * 0x98);
            cStack_180 = *(char *)(puVar6 + 1);
            uStack_188 = *puVar6;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_178,puVar6 + 2);
            if (&uStack_188 != puVar6) {
              FUN_10928555c(&lStack_160,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
              FUN_10928555c(&lStack_148,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
            }
            uStack_128 = puVar6[0xc];
            uStack_130 = puVar6[0xb];
            uStack_118 = puVar6[0xe];
            uStack_120 = puVar6[0xd];
            uStack_108 = puVar6[0x10];
            uStack_110 = puVar6[0xf];
            uStack_f8 = puVar6[0x12];
            uStack_100 = puVar6[0x11];
          }
          fVar14 = (float)uStack_110;
          fVar13 = (float)uStack_120;
          fVar16 = (float)uStack_130;
          pfVar5 = (float *)(*param_5 + (long)(int)uStack_188 * 0xc);
          fVar18 = *pfVar5;
          fVar20 = pfVar5[1];
          fVar17 = pfVar5[2];
          pfVar5 = (float *)(*param_5 + (long)*piVar8 * 0xc);
          fVar12 = *pfVar5;
          if (((int)uStack_188 == param_6) && ((param_9 & 0x100000000) != 0)) {
            fVar13 = fVar12 - fVar18;
            fVar19 = pfVar5[1];
            fVar15 = pfVar5[2];
            fVar14 = fVar19 - fVar20;
            fVar16 = fVar15 - fVar17;
            fVar10 = (((float)param_8 - fVar18) * fVar13 +
                      ((float)((ulong)param_8 >> 0x20) - fVar20) * fVar14 +
                     ((float)param_9 - fVar17) * fVar16) /
                     (fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16);
            fVar13 = fVar13 * fVar10;
            fVar14 = fVar14 * fVar10;
            fVar16 = fVar16 * fVar10;
            fVar18 = fVar18 + fVar13;
            fVar20 = fVar20 + fVar14;
            fVar17 = fVar17 + fVar16;
          }
          else {
            fVar19 = pfVar5[1];
            fVar15 = pfVar5[2];
          }
          FUN_1094dc330(piVar8 + 0x16);
          if (lStack_148 != 0) {
            lStack_140 = lStack_148;
            __ZdlPv();
          }
          if (lStack_160 != 0) {
            lStack_158 = lStack_160;
            __ZdlPv();
          }
          if (lStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          fVar12 = fVar12 - fVar18;
          fVar11 = fVar11 + SQRT(fVar12 * fVar12 + (fVar19 - fVar20) * (fVar19 - fVar20) +
                                 (fVar15 - fVar17) * (fVar15 - fVar17)) /
                            SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar13 * fVar13);
          uVar7 = uVar7 + 1;
        }
      } while (piStack_f0 != piStack_e8);
      fVar16 = (float)uVar7;
    }
    if (piStack_f0 != (int *)0x0) {
      piStack_e8 = piStack_f0;
      __ZdlPv();
    }
    fVar11 = fVar11 * (fVar9 / fVar16);
    if (fVar11 <= param_2) {
      fVar11 = param_2;
    }
    if (param_3 <= fVar11) {
      fVar11 = param_3;
    }
    return (ulong)(uint)fVar11;
  }
  __Znwm((long)param_5 * 0x2c);
  return param_1;
}



/* Entry: 1094ccce0; end: 1094cccf3;  */

float FUN_1094ccce0(float param_1,float param_2,float param_3,undefined8 param_4,long *param_5,
                   int param_6,ulong param_7,undefined8 param_8,ulong param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_168;
  char cStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  undefined8 uStack_c0;
  
  plVar4 = (long *)&UNK_10f56f2c4;
  func_0x000104c4f6cc();
  lVar2 = 0x40;
  if ((int)param_7 == 0) {
    lVar2 = 0x28;
  }
  plVar1 = (long *)(*plVar4 + (long)param_6 * 0x98 + lVar2);
  piStack_d0 = (int *)0x0;
  piStack_c8 = (int *)0x0;
  uStack_c0 = 0;
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  FUN_109285684(&piStack_d0,lVar2,lVar3,lVar3 - lVar2 >> 2);
  if (piStack_d0 == piStack_c8) {
    fVar10 = 0.0;
    fVar15 = 0.0;
  }
  else {
    uVar7 = 0;
    fVar10 = 0.0;
    do {
      piStack_c8 = piStack_c8 + -1;
      piVar8 = (int *)(*plVar4 + (long)*piStack_c8 * 0x98);
      if ((char)piVar8[2] == '\x01') {
        if ((param_7 & 1) == 0) {
          FUN_109241290(&piStack_d0);
        }
      }
      else {
        puVar6 = (undefined8 *)(*plVar4 + (long)piVar8[1] * 0x98);
        uStack_168 = *puVar6;
        cStack_160 = *(char *)(puVar6 + 1);
        if (*(char *)((long)puVar6 + 0x27) < '\0') {
          func_0x000107c3192c(&uStack_158,puVar6[2],puVar6[3]);
        }
        else {
          uStack_150 = puVar6[3];
          uStack_158 = puVar6[2];
          lStack_148 = puVar6[4];
        }
        lStack_140 = 0;
        lStack_138 = 0;
        uStack_130 = 0;
        FUN_109285684(&lStack_140,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
        lStack_128 = 0;
        lStack_120 = 0;
        uStack_118 = 0;
        FUN_109285684(&lStack_128,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
        uStack_108 = puVar6[0xc];
        uStack_110 = puVar6[0xb];
        uStack_f8 = puVar6[0xe];
        uStack_100 = puVar6[0xd];
        uStack_e8 = puVar6[0x10];
        uStack_f0 = puVar6[0xf];
        uStack_d8 = puVar6[0x12];
        uStack_e0 = puVar6[0x11];
        if (cStack_160 == '\x01') {
          puVar6 = (undefined8 *)(*plVar4 + (long)uStack_168._4_4_ * 0x98);
          cStack_160 = *(char *)(puVar6 + 1);
          uStack_168 = *puVar6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_158,puVar6 + 2);
          if (&uStack_168 != puVar6) {
            FUN_10928555c(&lStack_140,puVar6[5],puVar6[6],(long)(puVar6[6] - puVar6[5]) >> 2);
            FUN_10928555c(&lStack_128,puVar6[8],puVar6[9],(long)(puVar6[9] - puVar6[8]) >> 2);
          }
          uStack_108 = puVar6[0xc];
          uStack_110 = puVar6[0xb];
          uStack_f8 = puVar6[0xe];
          uStack_100 = puVar6[0xd];
          uStack_e8 = puVar6[0x10];
          uStack_f0 = puVar6[0xf];
          uStack_d8 = puVar6[0x12];
          uStack_e0 = puVar6[0x11];
        }
        fVar13 = (float)uStack_f0;
        fVar12 = (float)uStack_100;
        fVar15 = (float)uStack_110;
        pfVar5 = (float *)(*param_5 + (long)(int)uStack_168 * 0xc);
        fVar17 = *pfVar5;
        fVar19 = pfVar5[1];
        fVar16 = pfVar5[2];
        pfVar5 = (float *)(*param_5 + (long)*piVar8 * 0xc);
        fVar11 = *pfVar5;
        if (((int)uStack_168 == param_6) && ((param_9 & 0x100000000) != 0)) {
          fVar12 = fVar11 - fVar17;
          fVar18 = pfVar5[1];
          fVar14 = pfVar5[2];
          fVar13 = fVar18 - fVar19;
          fVar15 = fVar14 - fVar16;
          fVar9 = (((float)param_8 - fVar17) * fVar12 +
                   ((float)((ulong)param_8 >> 0x20) - fVar19) * fVar13 +
                  ((float)param_9 - fVar16) * fVar15) /
                  (fVar12 * fVar12 + fVar13 * fVar13 + fVar15 * fVar15);
          fVar12 = fVar12 * fVar9;
          fVar13 = fVar13 * fVar9;
          fVar15 = fVar15 * fVar9;
          fVar17 = fVar17 + fVar12;
          fVar19 = fVar19 + fVar13;
          fVar16 = fVar16 + fVar15;
        }
        else {
          fVar18 = pfVar5[1];
          fVar14 = pfVar5[2];
        }
        FUN_1094dc330(piVar8 + 0x16);
        if (lStack_128 != 0) {
          lStack_120 = lStack_128;
          __ZdlPv();
        }
        if (lStack_140 != 0) {
          lStack_138 = lStack_140;
          __ZdlPv();
        }
        if (lStack_148 < 0) {
          __ZdlPv(uStack_158);
        }
        fVar11 = fVar11 - fVar17;
        fVar10 = fVar10 + SQRT(fVar11 * fVar11 + (fVar18 - fVar19) * (fVar18 - fVar19) +
                               (fVar14 - fVar16) * (fVar14 - fVar16)) /
                          SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar12 * fVar12);
        uVar7 = uVar7 + 1;
      }
    } while (piStack_d0 != piStack_c8);
    fVar15 = (float)uVar7;
  }
  if (piStack_d0 != (int *)0x0) {
    piStack_c8 = piStack_d0;
    __ZdlPv();
  }
  fVar10 = fVar10 * (param_1 / fVar15);
  if (fVar10 <= param_2) {
    fVar10 = param_2;
  }
  if (param_3 <= fVar10) {
    fVar10 = param_3;
  }
  return fVar10;
}



/* Entry: 1094cccf4; end: 1094cd12f;  */

float FUN_1094cccf4(float param_1,float param_2,float param_3,long *param_4,long *param_5,
                   int param_6,uint param_7,undefined8 param_8,ulong param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_158;
  char cStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int *piStack_c0;
  int *piStack_b8;
  undefined8 uStack_b0;
  
  lVar2 = 0x40;
  if (param_7 == 0) {
    lVar2 = 0x28;
  }
  plVar1 = (long *)(*param_4 + (long)param_6 * 0x98 + lVar2);
  piStack_c0 = (int *)0x0;
  piStack_b8 = (int *)0x0;
  uStack_b0 = 0;
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  FUN_109285684(&piStack_c0,lVar2,lVar3,lVar3 - lVar2 >> 2);
  if (piStack_c0 == piStack_b8) {
    fVar9 = 0.0;
    fVar14 = 0.0;
  }
  else {
    uVar6 = 0;
    fVar9 = 0.0;
    do {
      piStack_b8 = piStack_b8 + -1;
      piVar7 = (int *)(*param_4 + (long)*piStack_b8 * 0x98);
      if ((char)piVar7[2] == '\x01') {
        if ((param_7 & 1) == 0) {
          FUN_109241290(&piStack_c0);
        }
      }
      else {
        puVar5 = (undefined8 *)(*param_4 + (long)piVar7[1] * 0x98);
        uStack_158 = *puVar5;
        cStack_150 = *(char *)(puVar5 + 1);
        if (*(char *)((long)puVar5 + 0x27) < '\0') {
          func_0x000107c3192c(&uStack_148,puVar5[2],puVar5[3]);
        }
        else {
          uStack_140 = puVar5[3];
          uStack_148 = puVar5[2];
          lStack_138 = puVar5[4];
        }
        lStack_130 = 0;
        lStack_128 = 0;
        uStack_120 = 0;
        FUN_109285684(&lStack_130,puVar5[5],puVar5[6],(long)(puVar5[6] - puVar5[5]) >> 2);
        lStack_118 = 0;
        lStack_110 = 0;
        uStack_108 = 0;
        FUN_109285684(&lStack_118,puVar5[8],puVar5[9],(long)(puVar5[9] - puVar5[8]) >> 2);
        uStack_f8 = puVar5[0xc];
        uStack_100 = puVar5[0xb];
        uStack_e8 = puVar5[0xe];
        uStack_f0 = puVar5[0xd];
        uStack_d8 = puVar5[0x10];
        uStack_e0 = puVar5[0xf];
        uStack_c8 = puVar5[0x12];
        uStack_d0 = puVar5[0x11];
        if (cStack_150 == '\x01') {
          puVar5 = (undefined8 *)(*param_4 + (long)uStack_158._4_4_ * 0x98);
          cStack_150 = *(char *)(puVar5 + 1);
          uStack_158 = *puVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_148,puVar5 + 2);
          if (&uStack_158 != puVar5) {
            FUN_10928555c(&lStack_130,puVar5[5],puVar5[6],(long)(puVar5[6] - puVar5[5]) >> 2);
            FUN_10928555c(&lStack_118,puVar5[8],puVar5[9],(long)(puVar5[9] - puVar5[8]) >> 2);
          }
          uStack_f8 = puVar5[0xc];
          uStack_100 = puVar5[0xb];
          uStack_e8 = puVar5[0xe];
          uStack_f0 = puVar5[0xd];
          uStack_d8 = puVar5[0x10];
          uStack_e0 = puVar5[0xf];
          uStack_c8 = puVar5[0x12];
          uStack_d0 = puVar5[0x11];
        }
        fVar12 = (float)uStack_e0;
        fVar11 = (float)uStack_f0;
        fVar14 = (float)uStack_100;
        pfVar4 = (float *)(*param_5 + (long)(int)uStack_158 * 0xc);
        fVar16 = *pfVar4;
        fVar18 = pfVar4[1];
        fVar15 = pfVar4[2];
        pfVar4 = (float *)(*param_5 + (long)*piVar7 * 0xc);
        fVar10 = *pfVar4;
        if (((int)uStack_158 == param_6) && ((param_9 & 0x100000000) != 0)) {
          fVar11 = fVar10 - fVar16;
          fVar17 = pfVar4[1];
          fVar13 = pfVar4[2];
          fVar12 = fVar17 - fVar18;
          fVar14 = fVar13 - fVar15;
          fVar8 = (((float)param_8 - fVar16) * fVar11 +
                   ((float)((ulong)param_8 >> 0x20) - fVar18) * fVar12 +
                  ((float)param_9 - fVar15) * fVar14) /
                  (fVar11 * fVar11 + fVar12 * fVar12 + fVar14 * fVar14);
          fVar11 = fVar11 * fVar8;
          fVar12 = fVar12 * fVar8;
          fVar14 = fVar14 * fVar8;
          fVar16 = fVar16 + fVar11;
          fVar18 = fVar18 + fVar12;
          fVar15 = fVar15 + fVar14;
        }
        else {
          fVar17 = pfVar4[1];
          fVar13 = pfVar4[2];
        }
        FUN_1094dc330(piVar7 + 0x16);
        if (lStack_118 != 0) {
          lStack_110 = lStack_118;
          __ZdlPv();
        }
        if (lStack_130 != 0) {
          lStack_128 = lStack_130;
          __ZdlPv();
        }
        if (lStack_138 < 0) {
          __ZdlPv(uStack_148);
        }
        fVar10 = fVar10 - fVar16;
        fVar9 = fVar9 + SQRT(fVar10 * fVar10 + (fVar17 - fVar18) * (fVar17 - fVar18) +
                             (fVar13 - fVar15) * (fVar13 - fVar15)) /
                        SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar11 * fVar11);
        uVar6 = uVar6 + 1;
      }
    } while (piStack_c0 != piStack_b8);
    fVar14 = (float)uVar6;
  }
  if (piStack_c0 != (int *)0x0) {
    piStack_b8 = piStack_c0;
    __ZdlPv();
  }
  fVar9 = fVar9 * (param_1 / fVar14);
  if (fVar9 <= param_2) {
    fVar9 = param_2;
  }
  if (param_3 <= fVar9) {
    fVar9 = param_3;
  }
  return fVar9;
}



/* Entry: 1094cd130; end: 1094cd17f;  */

long FUN_1094cd130(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 1094cd180; end: 1094cd203;  */

void FUN_1094cd180(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1094cd204(param_1,param_4);
    lVar1 = param_1;
    FUN_1094cd2ac(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1094cd204; end: 1094cd24f;  */

undefined1  [16] FUN_1094cd204(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x1af286bca1af287) {
    plVar1 = param_1;
    FUN_1094cd264();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x13);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_1094cd250();
  func_0x000104c4f6cc(&UNK_10f56f2c4);
  if (param_2 < 0x1af286bca1af287) {
    lVar2 = param_2 * 0x98;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar3 = param_2;
    FUN_1094cd330(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 1094cd250; end: 1094cd263;  */

undefined1  [16] FUN_1094cd250(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000104c4f6cc(&UNK_10f56f2c4);
  if (param_2 < 0x1af286bca1af287) {
    lVar1 = param_2 * 0x98;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar2 = param_2;
    FUN_1094cd330(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 1094cd264; end: 1094cd2ab;  */

undefined1  [16] FUN_1094cd264(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x1af286bca1af287) {
    lVar1 = param_2 * 0x98;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    uVar2 = param_2;
    FUN_1094cd330(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 1094cd2ac; end: 1094cd32f;  */

long FUN_1094cd2ac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_1094cd330(param_4,param_2);
    param_4 = param_4 + 0x98;
  }
  return param_4;
}



/* Entry: 1094cd330; end: 1094cd423;  */

undefined8 * FUN_1094cd330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_109285684(param_1 + 5,param_2[5],param_2[6],(long)(param_2[6] - param_2[5]) >> 2);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_109285684();
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xb];
  uVar4 = param_2[0xe];
  uVar3 = param_2[0xd];
  uVar6 = param_2[0x10];
  uVar5 = param_2[0xf];
  uVar7 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 1094cd424; end: 1094cd477;  */

void FUN_1094cd424(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1094cd478; end: 1094cd4e7;  */

void FUN_1094cd478(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x98;
        FUN_1094cd424(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094cd4e8; end: 1094ce6d3;  */

/* WARNING: Removing unreachable block (ram,0x0001094cddb8) */
/* WARNING: Removing unreachable block (ram,0x0001094cd718) */
/* WARNING: Removing unreachable block (ram,0x0001094cd64c) */
/* WARNING: Removing unreachable block (ram,0x0001094cd618) */
/* WARNING: Removing unreachable block (ram,0x0001094cd680) */
/* WARNING: Removing unreachable block (ram,0x0001094cdcbc) */
/* WARNING: Removing unreachable block (ram,0x0001094cdccc) */
/* WARNING: Removing unreachable block (ram,0x0001094cddf0) */
/* WARNING: Removing unreachable block (ram,0x0001094cdcfc) */
/* WARNING: Removing unreachable block (ram,0x0001094cdd48) */
/* WARNING: Removing unreachable block (ram,0x0001094cdf1c) */
/* WARNING: Removing unreachable block (ram,0x0001094ce004) */

long * FUN_1094cd4e8(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                    undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
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
  float fStack_230;
  int iStack_1f4;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte bStack_e1;
  undefined1 auStack_e0 [16];
  undefined8 *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  
  plVar6 = param_4 + 6;
  param_4[7] = 0;
  *plVar6 = 0;
  plVar8 = param_4 + 0xd;
  param_4[0xe] = 0;
  *plVar8 = 0;
  param_4[0x10] = 0;
  param_4[0xf] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[0xb] = 0;
  param_4[10] = 0;
  *(undefined1 *)(param_4 + 0xc) = 0;
  *(undefined4 *)(param_4 + 0x11) = 0x3f800000;
  if ((bRam0000000113732ea8 & 1) == 0) {
    iVar2 = 0x13732ea8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31940(0x113732eb8,&UNK_10f56f2cb);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x113732eb8,0x100000000);
      ___cxa_guard_release(0x113732ea8);
    }
  }
  func_0x000107c31940(&uStack_1f0,&UNK_10f415456);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  FUN_1094ce6d4(&lStack_140,param_5,&uStack_1f0,&uStack_158);
  puStack_d0 = &uStack_158;
  FUN_109381838(&puStack_d0);
  if ((long)puStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  lVar10 = lStack_138 - lStack_140;
  if (lVar10 == 0) {
    FUN_1094ce860(&uStack_1f0,0x113732eb8,&UNK_10f56f2eb);
    func_0x000105687ee0(&uStack_1f0);
    goto LAB_1094ce3ec;
  }
  func_0x000107c31940(&uStack_f8,&UNK_10f56f31d);
  FUN_1094a68cc(&uStack_110,param_5,&uStack_f8);
  uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
  lStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  puStack_1e8 = (undefined8 *)0x0;
  uStack_1f0 = (long *)0x0;
  func_0x000107c31940(&puStack_d0,&UNK_10f56f3d3);
  func_0x0001094a6ea4(&uStack_110,&puStack_d0,&uStack_1f0);
  func_0x000107c31940(&puStack_d0,&UNK_10f56f3eb);
  func_0x0001094a6ea4(&uStack_110,&puStack_d0,&lStack_1d8);
  func_0x000107c31940(&puStack_d0,&UNK_10f56f3fa);
  FUN_1094b4850(&uStack_110,&puStack_d0,&uStack_1c0);
  if (*plVar6 != 0) {
    param_4[7] = *plVar6;
    __ZdlPv();
    *plVar6 = 0;
    param_4[7] = 0;
    param_4[8] = 0;
  }
  lVar3 = param_4[9];
  param_4[7] = (long)puStack_1e8;
  param_4[6] = (long)uStack_1f0;
  param_4[8] = (long)puStack_1e0;
  puStack_1e8 = (undefined8 *)0x0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1f0 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    param_4[10] = lVar3;
    __ZdlPv();
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
  }
  param_4[10] = uStack_1d0;
  param_4[9] = lStack_1d8;
  param_4[0xb] = uStack_1c8;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_1d8 = 0;
  *(undefined1 *)(param_4 + 0xc) = (undefined1)uStack_1c0;
  if (uStack_1f0 != (undefined8 *)0x0) {
    puStack_1e8 = uStack_1f0;
    __ZdlPv();
  }
  uVar16 = lVar10 >> 4;
  FUN_109380f8c(&uStack_110);
  uStack_1f0 = (undefined8 *)0xffffffff00000000;
  puStack_1e8 = (undefined8 *)((ulong)puStack_1e8 & 0xffffffffffffff00);
  lStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  lStack_1a0 = 0;
  uStack_190 = 0;
  uStack_198 = 0x3f800000;
  uStack_180 = 0;
  uStack_188 = 0x3f80000000000000;
  fStack_230 = 0.0;
  uStack_170 = 0x3f800000;
  uStack_178 = 0;
  uStack_160 = 0x3f80000000000000;
  uStack_168 = 0;
  lVar10 = *param_4;
  if ((ulong)((param_4[2] - lVar10 >> 3) * -0x79435e50d79435e5) < uVar16) {
    func_0x0001094ced14(param_4);
    if (0x1af286bca1af286 < uVar16) {
      FUN_1094cd250();
      goto LAB_1094ce3ec;
    }
    lVar10 = param_4[2] - *param_4 >> 3;
    uVar11 = lVar10 * 0xd79435e50d79436;
    if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
      uVar11 = uVar16;
    }
    if (0xd79435e50d7942 < (ulong)(lVar10 * -0x79435e50d79435e5)) {
      uVar11 = 0x1af286bca1af286;
    }
    FUN_1094cd204(param_4,uVar11);
    lVar3 = param_4[1];
    lVar17 = uVar16 * 0x98;
    lVar10 = lVar3 + lVar17;
    do {
      FUN_1094ced78(lVar3,&uStack_1f0);
      lVar3 = lVar3 + 0x98;
      lVar17 = lVar17 + -0x98;
    } while (lVar17 != 0);
LAB_1094cd8f8:
    param_4[1] = lVar10;
  }
  else {
    lVar3 = param_4[1] - lVar10 >> 3;
    uVar11 = lVar3 * -0x79435e50d79435e5;
    if (param_4[1] - lVar10 != 0) {
      uVar13 = uVar11;
      if (uVar16 <= uVar11) {
        uVar13 = uVar16;
      }
      lVar10 = lVar10 + 0x40;
      do {
        *(undefined1 *)(lVar10 + -0x38) = puStack_1e8._0_1_;
        *(long **)(lVar10 + -0x40) = uStack_1f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar10 + -0x30,&puStack_1e0);
        if ((undefined8 *)(lVar10 + -0x40) != &uStack_1f0) {
          FUN_10928555c(lVar10 + -0x18,uStack_1c8,uStack_1c0,(long)(uStack_1c0 - uStack_1c8) >> 2);
          FUN_10928555c(lVar10,lStack_1b0,lStack_1a8,lStack_1a8 - lStack_1b0 >> 2);
        }
        *(long *)(lVar10 + 0x50) = uStack_160;
        *(long *)(lVar10 + 0x48) = uStack_168;
        *(ulong *)(lVar10 + 0x40) = uStack_170;
        *(long *)(lVar10 + 0x38) = uStack_178;
        *(ulong *)(lVar10 + 0x30) = uStack_180;
        *(long *)(lVar10 + 0x28) = uStack_188;
        *(ulong *)(lVar10 + 0x20) = uStack_190;
        *(long *)(lVar10 + 0x18) = uStack_198;
        lVar10 = lVar10 + 0x98;
        uVar13 = uVar13 - 1;
        param_3 = uStack_178;
      } while (uVar13 != 0);
    }
    lVar10 = uVar16 + lVar3 * 0x79435e50d79435e5;
    if (uVar11 <= uVar16 && lVar10 != 0) {
      lVar17 = param_4[1];
      lVar10 = lVar17 + lVar10 * 0x98;
      lVar3 = uVar16 * 0x98 + lVar3 * -8;
      do {
        FUN_1094ced78(lVar17,&uStack_1f0);
        lVar17 = lVar17 + 0x98;
        lVar3 = lVar3 + -0x98;
      } while (lVar3 != 0);
      goto LAB_1094cd8f8;
    }
    lVar10 = param_4[1];
    lVar3 = *param_4 + uVar16 * 0x98;
    while (lVar10 != lVar3) {
      lVar10 = lVar10 + -0x98;
      FUN_1094cd424(lVar10);
    }
    param_4[1] = lVar3;
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  if (uStack_1c8 != 0) {
    uStack_1c0 = uStack_1c8;
    __ZdlPv();
  }
  if ((long)uStack_1d0 < 0) {
    __ZdlPv(puStack_1e0);
  }
  lVar10 = param_4[5];
  puVar4 = (undefined2 *)param_4[3];
  if ((ulong)((lVar10 - (long)puVar4 >> 2) * -0x5555555555555555) < uVar16) {
    if (puVar4 != (undefined2 *)0x0) {
      param_4[4] = (long)puVar4;
      __ZdlPv();
      lVar10 = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
    }
    if (uVar16 < 0x1555555555555556) {
      uVar11 = (lVar10 >> 2) * 0x5555555555555556;
      if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
        uVar11 = uVar16;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar10 >> 2) * -0x5555555555555555)) {
        uVar11 = 0x1555555555555555;
      }
      if (uVar11 < 0x1555555555555556) {
        puVar5 = (undefined2 *)(uVar11 * 0xc);
        __Znwm();
        param_4[3] = (long)puVar5;
        param_4[4] = (long)puVar5;
        param_4[5] = (long)(puVar5 + uVar11 * 6);
        puVar4 = puVar5 + uVar16 * 6;
        do {
          *puVar5 = 0x100;
          *(undefined1 *)(puVar5 + 1) = 1;
          *(undefined8 *)(puVar5 + 2) = 0x3f8666663f733333;
          puVar5 = puVar5 + 6;
        } while (puVar5 != puVar4);
        goto LAB_1094cdab0;
      }
    }
    FUN_1094cee6c();
  }
  else {
    puVar5 = (undefined2 *)param_4[4];
    lVar10 = (long)puVar5 - (long)puVar4 >> 2;
    uVar11 = lVar10 * -0x5555555555555555;
    if ((long)puVar5 - (long)puVar4 != 0) {
      uVar13 = uVar11;
      puVar15 = puVar4;
      if (uVar16 <= uVar11) {
        uVar13 = uVar16;
      }
      do {
        *puVar15 = 0x100;
        *(undefined1 *)(puVar15 + 1) = 1;
        *(undefined8 *)(puVar15 + 2) = 0x3f8666663f733333;
        uVar13 = uVar13 - 1;
        puVar15 = puVar15 + 6;
      } while (uVar13 != 0);
    }
    lVar10 = uVar16 + lVar10 * 0x5555555555555555;
    if (uVar16 < uVar11 || lVar10 == 0) {
      puVar4 = puVar4 + uVar16 * 6;
LAB_1094cdab0:
      param_4[4] = (long)puVar4;
    }
    else {
      puVar4 = puVar5 + lVar10 * 6;
      do {
        *puVar5 = 0x100;
        *(undefined1 *)(puVar5 + 1) = 1;
        *(undefined8 *)(puVar5 + 2) = 0x3f8666663f733333;
        puVar5 = puVar5 + 6;
      } while (puVar5 != puVar4);
      param_4[4] = (long)puVar4;
    }
    iStack_1f4 = 0;
    if (lStack_140 != lStack_138) {
      lVar10 = lStack_140;
      do {
        fVar25 = (float)param_3;
        uStack_f8 = 0x100;
        uStack_f6 = 1;
        uStack_f4 = 0x3f733333;
        uStack_f0 = 0x3f866666;
        FUN_109380c8c(&puStack_d0,lVar10);
        func_0x000107c31940(&uStack_1f0,&UNK_10f56f427);
        FUN_1094b4850(&puStack_d0,&uStack_1f0,&uStack_f8);
        if ((long)puStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        func_0x000107c31940(&uStack_1f0,&UNK_10f56f437);
        FUN_1094b4850(&puStack_d0,&uStack_1f0,(ulong)&uStack_f8 | 1);
        if ((long)puStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        func_0x000107c31940(&uStack_1f0,&UNK_10f56f446);
        func_0x0001094a6db0(&puStack_d0,&uStack_1f0,(ulong)&uStack_f8 | 4);
        if ((long)puStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        func_0x000107c31940(&uStack_1f0,&UNK_10f56f466);
        func_0x0001094a6db0(&puStack_d0,&uStack_1f0,&uStack_f0);
        if ((long)puStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        func_0x000107c31940(&uStack_1f0,&UNK_10f56f486);
        FUN_1094b4850(&puStack_d0,&uStack_1f0,(ulong)&uStack_f8 | 2);
        if ((long)puStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        FUN_109380f8c(&puStack_d0);
        puVar14 = (undefined8 *)(param_4[3] + (long)iStack_1f4 * 0xc);
        *puVar14 = CONCAT44(uStack_f4,CONCAT13(uStack_f5,CONCAT12(uStack_f6,uStack_f8)));
        *(undefined4 *)(puVar14 + 1) = uStack_f0;
        puStack_1e8 = (undefined8 *)((ulong)puStack_1e8 & 0xffffffffffffff00);
        lStack_1d8 = 0;
        puStack_1e0 = (undefined8 *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        lStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1a8 = 0;
        lStack_1b0 = 0;
        lStack_1a0 = 0;
        uStack_190 = 0;
        uStack_198 = 0x3f800000;
        uStack_180 = 0;
        uStack_188 = 0x3f80000000000000;
        uStack_170 = 0x3f800000;
        uStack_178 = 0;
        uStack_160 = 0x3f80000000000000;
        uStack_168 = 0;
        uStack_1f0 = (long *)CONCAT44(0xffffffff,iStack_1f4);
        fVar23 = fStack_230;
        FUN_109380c8c(auStack_e0,lVar10);
        func_0x000107c31940(&uStack_f8,&DAT_10f68f148);
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        FUN_1094a6b30(&puStack_d0,auStack_e0,&uStack_f8,&uStack_110);
        if ((long)uStack_1d0 < 0) {
          __ZdlPv(puStack_1e0);
        }
        puVar14 = puStack_d0;
        lStack_1d8 = lStack_c8;
        puStack_1e0 = puStack_d0;
        uStack_1d0 = uStack_c0;
        uStack_c0 = uStack_c0 & 0xffffffffffffff;
        puStack_d0 = (undefined8 *)((ulong)puStack_d0 & 0xffffffffffffff00);
        fVar19 = SUB84(puVar14,0);
        func_0x000107c31940(&puStack_d0,&UNK_10f56f4b1);
        FUN_1094b4850(auStack_e0,&puStack_d0,&puStack_1e8);
        func_0x000107c31940(&puStack_d0,&UNK_10f56f4c1);
        uStack_128 = 0;
        uStack_120 = 0;
        lStack_118 = 0;
        FUN_1094a6b30(&uStack_f8,auStack_e0,&puStack_d0,&uStack_128);
        if (lStack_118 < 0) {
          __ZdlPv(uStack_128);
        }
        uVar16 = CONCAT44(uStack_ec,uStack_f0);
        if (-1 < (char)bStack_e1) {
          uVar16 = (ulong)bStack_e1;
        }
        if (uVar16 == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          plVar6 = plVar8;
          FUN_1094ccb54(plVar8,&uStack_f8);
          if (plVar6 == (long *)0x0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&puStack_d0,&UNK_10f56f4ce,&uStack_f8);
            func_0x000105687ee0(&puStack_d0);
            goto LAB_1094ce3ec;
          }
          uVar9 = (undefined4)plVar6[5];
        }
        uStack_1f0 = (long *)CONCAT44(uVar9,(undefined4)uStack_1f0);
        func_0x000107c31940(&puStack_d0,&DAT_10f368f21);
        FUN_1094cee80(auStack_e0,&puStack_d0);
        fVar21 = fVar19;
        fVar24 = fVar23;
        fVar22 = fVar25;
        func_0x000107c31940(&puStack_d0,&DAT_10f2c46ae);
        FUN_1094cee80(auStack_e0,&puStack_d0);
        fVar24 = fVar24 * 0.017453292;
        fVar20 = fVar21 * 0.017453292 * 0.5;
        fVar29 = fVar24 * 0.5;
        fVar30 = fVar22 * 0.017453292 * 0.5;
        ___sincosf_stret();
        fVar22 = fVar24;
        ___sincosf_stret();
        fVar21 = fVar22;
        ___sincosf_stret();
        fVar26 = fVar30 * fVar20 * fVar29 + fVar21 * fVar24 * fVar22;
        fVar28 = -(fVar24 * fVar29 * fVar30) + fVar21 * fVar20 * fVar22;
        fVar27 = fVar30 * fVar20 * fVar22 + fVar21 * fVar24 * fVar29;
        fVar21 = -(fVar20 * fVar29 * fVar21) + fVar30 * fVar24 * fVar22;
        fVar30 = fVar28 * fVar27 + fVar21 * fVar26;
        fVar31 = fVar28 * fVar21 - fVar27 * fVar26;
        fVar22 = fVar28 * fVar27 - fVar21 * fVar26;
        fVar29 = fVar27 * fVar21 + fVar28 * fVar26;
        fVar24 = fVar28 * fVar21 + fVar27 * fVar26;
        fVar20 = fVar27 * fVar21 - fVar28 * fVar26;
        uStack_198 = CONCAT44(fVar30 + fVar30,(fVar27 * fVar27 + fVar21 * fVar21) * -2.0 + 1.0);
        uStack_190 = (ulong)(uint)(fVar31 + fVar31);
        uStack_188 = CONCAT44((fVar28 * fVar28 + fVar21 * fVar21) * -2.0 + 1.0,fVar22 + fVar22);
        uStack_180 = (ulong)(uint)(fVar29 + fVar29);
        uStack_178 = CONCAT44(fVar20 + fVar20,fVar24 + fVar24);
        uStack_170 = (ulong)(uint)((fVar28 * fVar28 + fVar27 * fVar27) * -2.0 + 1.0);
        uStack_168 = CONCAT44(fVar23,fVar19);
        uStack_160 = CONCAT44(0x3f800000,fVar25);
        FUN_109380f8c(auStack_e0);
        plVar18 = (long *)(*param_4 + (long)iStack_1f4 * 0x98);
        *plVar18 = (long)uStack_1f0;
        *(undefined1 *)(plVar18 + 1) = puStack_1e8._0_1_;
        plVar6 = plVar18 + 2;
        if (*(char *)((long)plVar18 + 0x27) < '\0') {
          __ZdlPv(*plVar6);
        }
        plVar18[4] = uStack_1d0;
        plVar18[3] = lStack_1d8;
        *plVar6 = (long)puStack_1e0;
        uStack_1d0 = uStack_1d0 & 0xffffffffffffff;
        puStack_1e0 = (undefined8 *)((ulong)puStack_1e0 & 0xffffffffffffff00);
        lVar3 = plVar18[5];
        if (lVar3 != 0) {
          plVar18[6] = lVar3;
          __ZdlPv();
          plVar18[5] = 0;
          plVar18[6] = 0;
          plVar18[7] = 0;
        }
        plVar18[6] = uStack_1c0;
        plVar18[5] = uStack_1c8;
        plVar18[7] = lStack_1b8;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        lStack_1b8 = 0;
        lVar3 = plVar18[8];
        if (lVar3 != 0) {
          plVar18[9] = lVar3;
          __ZdlPv();
          plVar18[8] = 0;
          plVar18[9] = 0;
          plVar18[10] = 0;
        }
        plVar18[9] = lStack_1a8;
        plVar18[8] = lStack_1b0;
        plVar18[10] = lStack_1a0;
        plVar18[0x12] = uStack_160;
        plVar18[0x11] = uStack_168;
        plVar18[0x10] = uStack_170;
        plVar18[0xf] = uStack_178;
        plVar18[0xe] = uStack_180;
        plVar18[0xd] = uStack_188;
        plVar18[0xc] = uStack_190;
        plVar18[0xb] = uStack_198;
        lStack_1a0 = 0;
        lStack_1a8 = 0;
        lStack_1b0 = 0;
        param_3 = uStack_178;
        if (uStack_1c8 != 0) {
          uStack_1c0 = uStack_1c8;
          __ZdlPv();
        }
        if ((long)uStack_1d0 < 0) {
          __ZdlPv(puStack_1e0);
        }
        uVar12 = *(uint *)((long)plVar18 + 4);
        if (iStack_1f4 == 0) {
          if (uVar12 != 0xffffffff) {
            FUN_1094ce860(&uStack_1f0,0x113732eb8,&UNK_10f56f33f);
            func_0x000105687ee0(&uStack_1f0);
            goto LAB_1094ce3ec;
          }
        }
        else {
          if (((int)uVar12 < 0) || (iStack_1f4 <= (int)uVar12)) {
            FUN_1094ce860(&puStack_d0,0x113732eb8,&UNK_10f56f36f);
            uVar16 = plVar18[3];
            plVar8 = (long *)plVar18[2];
            if (-1 < (char)*(byte *)((long)plVar18 + 0x27)) {
              uVar16 = (ulong)*(byte *)((long)plVar18 + 0x27);
              plVar8 = plVar6;
            }
            ppuVar7 = &puStack_d0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppuVar7,plVar8,uVar16);
            puStack_1e8 = ppuVar7[1];
            uStack_1f0 = *ppuVar7;
            puStack_1e0 = ppuVar7[2];
            ppuVar7[1] = (undefined8 *)0x0;
            ppuVar7[2] = (undefined8 *)0x0;
            *ppuVar7 = (undefined8 *)0x0;
            func_0x000105687ee0(&uStack_1f0);
            goto LAB_1094ce3ec;
          }
          lVar3 = *param_4 + (ulong)uVar12 * 0x98;
          FUN_10923b3a0(lVar3 + 0x28,&iStack_1f4);
          if (((char)plVar18[1] == '\x01') && (*(char *)(lVar3 + 8) == '\x01')) {
            FUN_1094ce860(&uStack_1f0,0x113732eb8,&UNK_10f56f39e);
            func_0x000105687ee0(&uStack_1f0);
            goto LAB_1094ce3ec;
          }
        }
        iVar2 = iStack_1f4;
        plVar18 = plVar8;
        uStack_1f0 = plVar6;
        FUN_1092afa68(plVar8,plVar6,&UNK_10dd5b8f9,&uStack_1f0,&puStack_d0);
        *(int *)(plVar18 + 5) = iVar2;
        iStack_1f4 = iStack_1f4 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lStack_138);
    }
    if ((bRam0000000113732eb0 & 1) == 0) {
      iVar2 = 0x13732eb0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107c31940(0x113732ed0,&UNK_10f56f532);
        ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                      ,0x113732ed0,0x100000000);
        ___cxa_guard_release(0x113732eb0);
      }
    }
    lVar10 = *param_4;
    lVar3 = (param_4[1] - lVar10 >> 3) * -0x79435e50d79435e5;
    uVar12 = (int)lVar3 - 1;
    uStack_110 = CONCAT44(uStack_110._4_4_,uVar12);
    if (1 < (int)lVar3) {
      do {
        lVar10 = *param_4 + (ulong)uVar12 * 0x98;
        if ((*(char *)(lVar10 + 8) == '\x01') &&
           (*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) != 4)) {
          FUN_1094ce860(&uStack_f8,0x113732ed0,&UNK_10f56f55d);
          uVar16 = *(ulong *)(lVar10 + 0x18);
          puVar14 = *(undefined8 **)(lVar10 + 0x10);
          if (-1 < (char)*(byte *)(lVar10 + 0x27)) {
            uVar16 = (ulong)*(byte *)(lVar10 + 0x27);
            puVar14 = (undefined8 *)(lVar10 + 0x10);
          }
          plVar8 = (long *)&uStack_f8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar8,puVar14,uVar16);
          lStack_c8 = plVar8[1];
          puStack_d0 = (undefined8 *)*plVar8;
          uStack_c0 = plVar8[2];
          plVar8[1] = 0;
          plVar8[2] = 0;
          *plVar8 = 0;
          FUN_109259240(&uStack_1f0,&puStack_d0,&UNK_10f56f571);
          func_0x000105687ee0(&uStack_1f0);
          goto LAB_1094ce3ec;
        }
        lVar3 = *param_4 + (long)*(int *)(lVar10 + 4) * 0x98;
        FUN_10923b3a0(lVar3 + 0x40,&uStack_110);
        FUN_109241290(lVar3 + 0x40,*(undefined8 *)(lVar3 + 0x48),*(long *)(lVar10 + 0x40),
                      *(long *)(lVar10 + 0x48),
                      *(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 2);
        iVar2 = (int)uStack_110;
        uVar12 = (int)uStack_110 - 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar12);
      } while (uVar12 != 0 && 0 < iVar2);
      lVar10 = *param_4;
      lVar3 = (param_4[1] - lVar10 >> 3) * -0x79435e50d79435e5;
    }
    if (lVar3 + -1 == *(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 2) {
      uStack_1f0 = &lStack_140;
      FUN_109381838(&uStack_1f0);
      return param_4;
    }
    FUN_1094ce860(&uStack_1f0,0x113732ed0,&UNK_10f56f593);
    func_0x000105687ee0(&uStack_1f0);
  }
LAB_1094ce3ec:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094ce3f0);
  (*pcVar1)();
}



/* Entry: 1094ce6d4; end: 1094ce85f;  */

void FUN_1094ce6d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,char ****param_4)

{
  char cVar1;
  char ***pppcVar2;
  char ****ppppcVar3;
  char ****ppppcStack_90;
  char ***pppcStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  char ***pppcStack_70;
  char ***pppcStack_68;
  char *pcStack_60;
  char ***pppcStack_58;
  char **ppcStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  ppppcStack_90 = (char ****)*param_2;
  ppcStack_50 = (char **)0x0;
  pcStack_48 = (char *)0x0;
  uStack_40 = 0x8000000000000000;
  cVar1 = *(char *)ppppcStack_90;
  pppcStack_58 = (char ***)ppppcStack_90;
  if (cVar1 == '\x01') {
    pppcVar2 = ppppcStack_90[1];
    FUN_1093793a4();
    ppppcStack_90 = (char ****)*param_2;
    cVar1 = *(char *)ppppcStack_90;
    ppcStack_50 = (char **)pppcVar2;
LAB_1094ce75c:
    pppcStack_88 = (char ***)0x0;
    pcStack_80 = (char *)0x0;
    uStack_78 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      pppcStack_88 = ppppcStack_90[1] + 1;
      goto LAB_1094ce7a8;
    }
    if (cVar1 != '\x02') {
      uStack_78 = 1;
      goto LAB_1094ce7a8;
    }
    pcStack_80 = (char *)ppppcStack_90[1][1];
  }
  else {
    if (cVar1 != '\x02') {
      uStack_40 = 1;
      goto LAB_1094ce75c;
    }
    pcStack_80 = (char *)ppppcStack_90[1][1];
    pcStack_48 = pcStack_80;
  }
  uStack_78 = 0x8000000000000000;
  pppcStack_88 = (char ***)0x0;
LAB_1094ce7a8:
  pcStack_60 = (char *)0x0;
  pppcStack_68 = (char ***)0x0;
  pppcStack_70 = (char ***)0x0;
  ppppcVar3 = &pppcStack_58;
  FUN_109379420(ppppcVar3,&ppppcStack_90);
  if ((int)ppppcVar3 == 0) {
    FUN_10937b950(&pppcStack_58);
    FUN_1094ce958(&ppppcStack_90);
    param_4 = &pppcStack_70;
    FUN_1094cec14(&pppcStack_70);
    pppcStack_68 = pppcStack_88;
    pppcStack_70 = (char ***)ppppcStack_90;
    pcStack_60 = pcStack_80;
    pppcStack_88 = (char ***)0x0;
    pcStack_80 = (char *)0x0;
    ppppcStack_90 = (char ****)0x0;
    puStack_38 = (undefined1 *)&ppppcStack_90;
    FUN_109381838(&puStack_38);
    ppppcVar3 = (char ****)pppcStack_70;
    pppcVar2 = pppcStack_68;
  }
  else {
    ppppcVar3 = (char ****)*param_4;
    pppcVar2 = param_4[1];
  }
  param_1[1] = pppcVar2;
  *param_1 = ppppcVar3;
  param_1[2] = param_4[2];
  *param_4 = (char ***)0x0;
  param_4[1] = (char ***)0x0;
  param_4[2] = (char ***)0x0;
  ppppcStack_90 = &pppcStack_70;
  FUN_109381838(&ppppcStack_90);
  return;
}



/* Entry: 1094ce860; end: 1094ce917;  */

void FUN_1094ce860(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_41;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  lVar4 = param_3;
  _strlen();
  func_0x000104c4f768(param_1,uVar1 + lVar4,&uStack_41);
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  if (uVar1 != 0) {
    plVar3 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar3 = param_2;
    }
    _memmove(plVar2,plVar3,uVar1);
  }
  if (lVar4 != 0) {
    _memmove((long)plVar2 + uVar1,param_3,lVar4);
  }
  *(undefined1 *)((long)plVar2 + uVar1 + lVar4) = 0;
  return;
}



/* Entry: 1094ce918; end: 1094ce957;  */

long * FUN_1094ce918(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094ce958; end: 1094ce9a3;  */

void FUN_1094ce958(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1094ce9a4(param_2,param_1);
  return;
}



/* Entry: 1094ce9a4; end: 1094ceacf;  */

void FUN_1094ce9a4(char *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [6];
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (*param_1 != '\x02') {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_1);
    func_0x000107c31940(&puStack_60,param_1);
    FUN_10928a5e0(auStack_48,&UNK_10f56748c,&puStack_60);
    FUN_10937bbbc(uVar3,0x12e,auStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1094cea78);
    (*pcVar2)();
  }
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != param_2) {
    puVar9 = (undefined1 *)*plVar6;
    lVar1 = plVar6[1];
    uVar5 = lVar1 - (long)puVar9 >> 4;
    plVar6 = param_2;
    if ((ulong)(param_2[2] - *param_2 >> 4) < uVar5) {
      plVar4 = param_2;
      FUN_1094cec14();
      if (uVar5 >> 0x3c != 0) {
        FUN_109381528();
        param_2[1] = uVar5;
        __Unwind_Resume();
        pcStack_58 = FUN_1094cec14;
        puVar9 = (undefined1 *)*plVar4;
        if (puVar9 != (undefined1 *)0x0) {
          puVar8 = puVar9;
          puStack_60 = &stack0xfffffffffffffff0;
          if ((undefined1 *)plVar4[1] != puVar9) {
            puVar8 = (undefined1 *)plVar4[1] + -8;
            do {
              puVar10 = puVar8 + -8;
              FUN_109380ffc(puVar8,*puVar10);
              puVar8 = puVar8 + -0x10;
            } while (puVar10 != puVar9);
            puVar8 = (undefined1 *)*plVar4;
          }
          plVar4[1] = (long)puVar9;
          __ZdlPv(puVar8);
          *plVar4 = 0;
          plVar4[1] = 0;
          plVar4[2] = 0;
        }
        return;
      }
      uVar7 = param_2[2] - *param_2 >> 3;
      if (uVar7 <= uVar5) {
        uVar7 = uVar5;
      }
      if (0x7fffffffffffffef < (ulong)(param_2[2] - *param_2)) {
        uVar7 = 0xfffffffffffffff;
      }
      FUN_1093821dc(param_2,uVar7);
      FUN_109382214(param_2,puVar9,lVar1,param_2[1]);
    }
    else {
      lVar11 = param_2[1] - *param_2;
      if (uVar5 <= (ulong)(lVar11 >> 4)) {
        func_0x0001094cec84(&uStack_41,puVar9,lVar1);
        if ((undefined1 *)param_2[1] != puVar9) {
          puVar8 = (undefined1 *)param_2[1] + -8;
          do {
            puVar10 = puVar8 + -8;
            FUN_109380ffc(puVar8,*puVar10);
            puVar8 = puVar8 + -0x10;
          } while (puVar10 != puVar9);
        }
        param_2[1] = (long)puVar9;
        return;
      }
      func_0x0001094cec84(&uStack_42,puVar9,puVar9 + lVar11);
      FUN_109382214(param_2,puVar9 + lVar11,lVar1,param_2[1]);
    }
    param_2[1] = (long)plVar6;
    return;
  }
  return;
}



/* Entry: 1094cead0; end: 1094cec13;  */

void FUN_1094cead0(long *param_1,undefined1 *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_4) {
    plVar1 = param_1;
    FUN_1094cec14();
    if (param_4 >> 0x3c != 0) {
      FUN_109381528();
      param_1[1] = param_4;
      __Unwind_Resume();
      puVar5 = (undefined1 *)*plVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar4 = puVar5;
        if ((undefined1 *)plVar1[1] != puVar5) {
          puVar4 = (undefined1 *)plVar1[1] + -8;
          do {
            puVar6 = puVar4 + -8;
            FUN_109380ffc(puVar4,*puVar6);
            puVar4 = puVar4 + -0x10;
          } while (puVar6 != puVar5);
          puVar4 = (undefined1 *)*plVar1;
        }
        plVar1[1] = (long)puVar5;
        __ZdlPv(puVar4);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    uVar3 = param_1[2] - *param_1 >> 3;
    if (uVar3 <= param_4) {
      uVar3 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar3 = 0xfffffffffffffff;
    }
    FUN_1093821dc(param_1,uVar3);
    FUN_109382214(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar7 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar7 >> 4)) {
      func_0x0001094cec84(&uStack_41,param_2,param_3);
      if ((undefined1 *)param_1[1] != param_2) {
        puVar5 = (undefined1 *)param_1[1] + -8;
        do {
          puVar4 = puVar5 + -8;
          FUN_109380ffc(puVar5,*puVar4);
          puVar5 = puVar5 + -0x10;
        } while (puVar4 != param_2);
      }
      param_1[1] = (long)param_2;
      return;
    }
    func_0x0001094cec84(&uStack_42,param_2,param_2 + lVar7);
    FUN_109382214(param_1,param_2 + lVar7,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 1094cec14; end: 1094ced77;  */

void FUN_1094cec14(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
    if ((undefined1 *)param_1[1] != puVar2) {
      puVar1 = (undefined1 *)param_1[1] + -8;
      do {
        puVar3 = puVar1 + -8;
        FUN_109380ffc(puVar1,*puVar3);
        puVar1 = puVar1 + -0x10;
      } while (puVar3 != puVar2);
      puVar1 = (undefined1 *)*param_1;
    }
    param_1[1] = puVar2;
    __ZdlPv(puVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1094ced78; end: 1094cee6b;  */

undefined8 * FUN_1094ced78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_109285684(param_1 + 5,param_2[5],param_2[6],(long)(param_2[6] - param_2[5]) >> 2);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_109285684();
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xb];
  uVar4 = param_2[0xe];
  uVar3 = param_2[0xd];
  uVar6 = param_2[0x10];
  uVar5 = param_2[0xf];
  uVar7 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 1094cee6c; end: 1094cee7f;  */

undefined4 FUN_1094cee6c(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char **ppcVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 auStack_58 [6];
  
  puVar3 = (undefined8 *)&UNK_10f56f2c4;
  func_0x000104c4f6cc();
  pcStack_98 = (char *)*puVar3;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x8000000000000000;
  cVar1 = *pcStack_98;
  pcStack_78 = pcStack_98;
  if (cVar1 == '\x01') {
    uVar5 = *(undefined8 *)(pcStack_98 + 8);
    FUN_1093793a4();
    pcStack_98 = (char *)*puVar3;
    cVar1 = *pcStack_98;
    uStack_70 = uVar5;
LAB_1094ceef8:
    lStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_90 = *(long *)(pcStack_98 + 8) + 8;
      goto LAB_1094cef3c;
    }
    if (cVar1 != '\x02') {
      uStack_80 = 1;
      goto LAB_1094cef3c;
    }
    uStack_88 = *(undefined8 *)(*(long *)(pcStack_98 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_60 = 1;
      goto LAB_1094ceef8;
    }
    uStack_88 = *(undefined8 *)(*(long *)(pcStack_98 + 8) + 8);
    uStack_68 = uStack_88;
  }
  uStack_80 = 0x8000000000000000;
  lStack_90 = 0;
LAB_1094cef3c:
  ppcVar4 = &pcStack_78;
  FUN_109379420(ppcVar4,&pcStack_98);
  if (((ulong)ppcVar4 & 1) == 0) {
    ppcVar4 = &pcStack_78;
    FUN_10937b950();
    if (*(char *)ppcVar4 != '\x02') {
      uVar5 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(ppcVar4);
      func_0x000107c31940(auStack_58,ppcVar4);
      FUN_10928a5e0(&pcStack_98,&UNK_10f56748c,auStack_58);
      FUN_10937bbbc(uVar5,0x12e,&pcStack_98);
      ___cxa_throw(uVar5,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094cf028);
      (*pcVar2)();
    }
    lVar6 = 0;
    do {
      FUN_1094cf080(ppcVar4,lVar6);
      FUN_10938d050();
      *(undefined4 *)((long)&pcStack_98 + lVar6 * 4) = auStack_58[0];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
  }
  else {
    pcStack_98._0_4_ = 0;
  }
  return pcStack_98._0_4_;
}



/* Entry: 1094cee80; end: 1094cf07f;  */

undefined4 FUN_1094cee80(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [6];
  
  pcStack_88 = (char *)*param_1;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0x8000000000000000;
  cVar1 = *pcStack_88;
  pcStack_68 = pcStack_88;
  if (cVar1 == '\x01') {
    uVar4 = *(undefined8 *)(pcStack_88 + 8);
    FUN_1093793a4();
    pcStack_88 = (char *)*param_1;
    cVar1 = *pcStack_88;
    uStack_60 = uVar4;
LAB_1094ceef8:
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_80 = *(long *)(pcStack_88 + 8) + 8;
      goto LAB_1094cef3c;
    }
    if (cVar1 != '\x02') {
      uStack_70 = 1;
      goto LAB_1094cef3c;
    }
    uStack_78 = *(undefined8 *)(*(long *)(pcStack_88 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_50 = 1;
      goto LAB_1094ceef8;
    }
    uStack_78 = *(undefined8 *)(*(long *)(pcStack_88 + 8) + 8);
    uStack_58 = uStack_78;
  }
  uStack_70 = 0x8000000000000000;
  lStack_80 = 0;
LAB_1094cef3c:
  ppcVar3 = &pcStack_68;
  FUN_109379420(ppcVar3,&pcStack_88);
  if (((ulong)ppcVar3 & 1) == 0) {
    ppcVar3 = &pcStack_68;
    FUN_10937b950();
    if (*(char *)ppcVar3 != '\x02') {
      uVar4 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(ppcVar3);
      func_0x000107c31940(auStack_48,ppcVar3);
      FUN_10928a5e0(&pcStack_88,&UNK_10f56748c,auStack_48);
      FUN_10937bbbc(uVar4,0x12e,&pcStack_88);
      ___cxa_throw(uVar4,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094cf028);
      (*pcVar2)();
    }
    lVar5 = 0;
    do {
      FUN_1094cf080(ppcVar3,lVar5);
      FUN_10938d050();
      *(undefined4 *)((long)&pcStack_88 + lVar5 * 4) = auStack_48[0];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
  }
  else {
    pcStack_88._0_4_ = 0;
  }
  return pcStack_88._0_4_;
}



/* Entry: 1094cf080; end: 1094cf29b;  */

long FUN_1094cf080(char *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x02') {
    lVar1 = **(long **)(param_1 + 8);
    if (param_2 < (ulong)((*(long **)(param_1 + 8))[1] - lVar1 >> 4)) {
      return lVar1 + param_2 * 0x10;
    }
    FUN_1094cf29c();
  }
  else {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_1);
    func_0x000107c31940(auStack_60,param_1);
    FUN_10928a5e0(auStack_48,&UNK_10f56caf4,auStack_60);
    FUN_10937bbbc(uVar3,0x130,auStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1094cf1cc);
  (*pcVar2)();
}



/* Entry: 1094cf29c; end: 1094cf2af;  */

void FUN_1094cf29c(undefined8 param_1,long param_2)

{
  long lStack_38;
  
  FUN_109262df8(&UNK_10f56f2c4);
  if (param_2 != 0) {
    func_0x0001092b0b8c(param_2 + 0x68);
    if (*(long *)(param_2 + 0x48) != 0) {
      *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x48);
      __ZdlPv();
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x30);
      __ZdlPv();
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
      __ZdlPv();
    }
    lStack_38 = param_2;
    FUN_1094cd478(&lStack_38);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 1094cf2b0; end: 1094cf323;  */

void FUN_1094cf2b0(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    func_0x0001092b0b8c(param_2 + 0x68);
    if (*(long *)(param_2 + 0x48) != 0) {
      *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x48);
      __ZdlPv();
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x30);
      __ZdlPv();
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
      __ZdlPv();
    }
    lStack_28 = param_2;
    FUN_1094cd478(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 1094cf324; end: 1094cf3fb;  */

void FUN_1094cf324(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dVar3 = 1.0;
  if (2.220446049250313e-16 < ABS(param_3[2])) {
    dVar3 = 1.0 / param_3[2];
  }
  dVar2 = *param_3 * dVar3;
  dVar3 = param_3[1] * dVar3;
  dVar1 = dVar2 * dVar2 + dVar3 * dVar3;
  dVar4 = SQRT(dVar1);
  dStack_50 = dVar2;
  dStack_48 = dVar3;
  if (*(char *)(param_2 + 1) == '\x01') {
    dVar1 = *param_2;
  }
  else {
    FUN_1094cf3fc(param_2,param_2 + 2);
    *param_2 = dVar1;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if (dVar1 <= dVar4) {
    dVar4 = param_2[7];
    dVar1 = param_2[6];
  }
  else {
    (**(code **)(*(long *)param_2[2] + 0x28))(&dStack_40,(long *)param_2[2],&dStack_50);
    dVar4 = param_2[7];
    dVar1 = param_2[6];
    dVar2 = dStack_40;
    dVar3 = dStack_38;
  }
  *param_1 = CONCAT44((float)(param_2[0xb] + dVar3 * dVar4),(float)(param_2[10] + dVar2 * dVar1));
  return;
}



/* Entry: 1094cf3fc; end: 1094cf61f;  */

double FUN_1094cf3fc(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  long lVar2;
  double *pdVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double adStack_80 [4];
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  uVar4 = 0;
  dVar5 = -1.79769313486232e+308;
  do {
    adStack_80[0] = (double)uVar4 * 0.01;
    adStack_80[1] = adStack_80[0];
    (**(code **)(*(long *)*param_2 + 0x28))(&dStack_50,(long *)*param_2,adStack_80);
    dVar6 = SQRT(dStack_50 * dStack_50 + dStack_48 * dStack_48);
    if (dVar6 <= dVar5) break;
    uVar4 = uVar4 + 1;
    dVar5 = dVar6;
  } while (uVar4 != 500);
  uVar4 = 0;
  dVar6 = -1.79769313486232e+308;
  adStack_80[0] = dVar5;
  do {
    dStack_50 = (double)uVar4 * 0.01 * -1.0;
    dStack_48 = (double)uVar4 * 0.01 * 1.0;
    (**(code **)(*(long *)*param_2 + 0x28))(&dStack_60,(long *)*param_2,&dStack_50);
    dVar7 = SQRT(dStack_60 * dStack_60 + dStack_58 * dStack_58);
    if (dVar7 <= dVar6) break;
    uVar4 = uVar4 + 1;
    dVar6 = dVar7;
  } while (uVar4 != 500);
  uVar4 = 0;
  dVar7 = -1.79769313486232e+308;
  adStack_80[1] = dVar6;
  do {
    dStack_50 = (double)uVar4 * 0.01 * 1.0;
    dStack_48 = (double)uVar4 * 0.01 * -1.0;
    (**(code **)(*(long *)*param_2 + 0x28))(&dStack_60,(long *)*param_2,&dStack_50);
    dVar6 = SQRT(dStack_60 * dStack_60 + dStack_58 * dStack_58);
    adStack_80[2] = dVar7;
    if (dVar6 <= dVar7) break;
    uVar4 = uVar4 + 1;
    dVar7 = dVar6;
    adStack_80[2] = dVar6;
  } while (uVar4 != 500);
  uVar4 = 0;
  dVar6 = -1.79769313486232e+308;
  do {
    dStack_50 = (double)uVar4 * -0.01;
    dStack_48 = dStack_50;
    (**(code **)(*(long *)*param_2 + 0x28))(&dStack_60,(long *)*param_2,&dStack_50);
    dVar7 = SQRT(dStack_60 * dStack_60 + dStack_58 * dStack_58);
    if (dVar7 <= dVar6) break;
    uVar4 = uVar4 + 1;
    dVar6 = dVar7;
  } while (uVar4 != 500);
  adStack_80[3] = dVar6;
  lVar2 = 8;
  pdVar3 = adStack_80;
  do {
    dVar6 = *(double *)((long)adStack_80 + lVar2);
    pdVar1 = (double *)((long)adStack_80 + lVar2);
    if (dVar5 <= dVar6) {
      pdVar1 = pdVar3;
      dVar6 = dVar5;
    }
    dVar5 = dVar6;
    lVar2 = lVar2 + 8;
    pdVar3 = pdVar1;
  } while (lVar2 != 0x20);
  return *pdVar1;
}



/* Entry: 1094cf620; end: 1094cf6e7;  */

undefined8 * FUN_1094cf620(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  (**(code **)(*(long *)*param_2 + 0x68))((long *)*param_2,param_1);
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_1093f56e8(param_1,param_2 + 1,param_2 + 4,param_2 + 8);
  (**(code **)(*(long *)*param_2 + 0x68))((long *)*param_2,param_1);
  return param_1;
}



/* Entry: 1094cf6e8; end: 1094cf753;  */

void FUN_1094cf6e8(long param_1,undefined8 param_2,float *param_3,int param_4)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_1094cf9dc(param_1,param_2);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    fVar2 = *param_3;
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    fVar5 = param_3[3];
    do {
      fVar6 = (*(float *)(plVar1 + 5) - fVar2) / fVar4;
      fVar7 = 1.0 - fVar6;
      if (param_4 == 0) {
        fVar7 = fVar6;
      }
      *(float *)(plVar1 + 5) = fVar7;
      *(float *)((long)plVar1 + 0x2c) = (*(float *)((long)plVar1 + 0x2c) - fVar3) / fVar5;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}



/* Entry: 1094cf754; end: 1094cf923;  */

bool FUN_1094cf754(float *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1e-06 <= *param_1) && (*param_1 <= 1.000001)) {
    bVar1 = false;
    if ((-1e-06 <= param_1[1]) && (param_1[1] <= 1.000001)) {
      bVar1 = false;
      if ((-1e-06 <= param_1[2]) && (param_1[2] <= 1.000001)) {
        if (param_1[3] < -1e-06) {
          return false;
        }
        bVar1 = param_1[3] <= 1.000001;
      }
    }
  }
  return bVar1;
}



/* Entry: 1094cf924; end: 1094cf977;  */

void FUN_1094cf924(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  auStack_28[0] = 0x1010000;
  auStack_40[0] = 0x2010000;
  uStack_30 = 0;
  uStack_48 = *param_2;
  uStack_38 = param_3;
  uStack_20 = param_1;
  FUN_109b0f718(0,0,auStack_28,auStack_40,&uStack_48,1);
  return;
}



/* Entry: 1094cf978; end: 1094cf9db;  */

void FUN_1094cf978(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = *(float *)(param_2 + 1);
  fVar5 = *(float *)(param_2 + 3);
  fVar6 = *(float *)(param_2 + 5);
  fVar7 = *(float *)(param_2 + 7);
  *param_1 = CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar1 +
                      (float)((ulong)param_2[2] >> 0x20) * fVar2 +
                      (float)((ulong)param_2[4] >> 0x20) * fVar3 +
                      (float)((ulong)param_2[6] >> 0x20),
                      (float)*param_2 * fVar1 + (float)param_2[2] * fVar2 +
                      (float)param_2[4] * fVar3 + (float)param_2[6]);
  *(float *)(param_1 + 1) = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6 + fVar7;
  return;
}



/* Entry: 1094cf9dc; end: 1094cfa4f;  */

undefined8 * FUN_1094cf9dc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1094cfa50(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1094cfc5c(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 1094cfa50; end: 1094cfb1f;  */

undefined1  [16] FUN_1094cfa50(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  plVar8 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 >= plVar12 && param_2 != plVar12) {
LAB_1094cfa98:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar8 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar8 = param_1;
        func_0x000107c31944();
        plVar4 = (long *)param_1[1];
        if (plVar4 != (long *)0x0) {
          uVar5 = (long)plVar4 - 1;
          if (((ulong)plVar4 & uVar5) == 0) {
            unaff_x25 = (long *)(uVar5 & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar7 = 0;
              if (plVar4 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar4);
            }
          }
          puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              plVar9 = (long *)plVar12[1];
              if (plVar9 == plVar8) {
                plVar9 = param_1;
                func_0x000104c4fbc4(param_1,plVar12 + 2,param_2);
                if (((ulong)plVar9 & 1) != 0) {
                  uVar3 = 0;
                  goto LAB_1094cfe50;
                }
              }
              else {
                if (((ulong)plVar4 & uVar5) == 0) {
                  plVar9 = (long *)((ulong)plVar9 & uVar5);
                }
                else if (plVar4 <= plVar9) {
                  uVar7 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar7 = (ulong)plVar9 / (ulong)plVar4;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar4);
                }
                if (plVar9 != unaff_x25) break;
              }
            }
          }
        }
        FUN_1094cfe9c(aplStack_88,param_1,plVar8,param_3);
        if ((plVar4 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))) {
          uVar5 = 1;
          if ((long *)0x2 < plVar4) {
            uVar5 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
          }
          uVar5 = uVar5 | (long)plVar4 << 1;
          uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          FUN_1094cfa50(param_1,uVar5);
          plVar4 = (long *)param_1[1];
          if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
          }
        }
        lVar2 = *param_1;
        plVar8 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = param_1 + 2;
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar8;
          if (*aplStack_88[0] != 0) {
            plVar8 = *(long **)(*aplStack_88[0] + 8);
            if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar4 - 1U);
            }
            else if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
            *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
        plVar12 = aplStack_88[0];
LAB_1094cfe50:
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = plVar12;
        return auVar15;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar12 = (long *)plVar4[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar5);
        }
        else if (param_2 <= plVar12) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar12 / (ulong)param_2;
          }
          plVar12 = (long *)((long)plVar12 - uVar7 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar4;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar7 = 0;
            if (param_2 != (long *)0x0) {
              uVar7 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar7 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar12) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar11 * 8) = plVar4;
              plVar12 = plVar11;
            }
            else {
              *plVar4 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar1 + (long)plVar11 * 8);
              **(long **)(lVar1 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar4;
            }
          }
          plVar4 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  if (param_2 < plVar12) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (param_2 < plVar12) goto LAB_1094cfa98;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 1094cfb20; end: 1094cfc5b;  */

undefined1  [16] FUN_1094cfb20(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  uVar13 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar13 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar9 = param_1;
      func_0x000107c31944();
      plVar10 = (long *)param_1[1];
      if (plVar10 != (long *)0x0) {
        uVar13 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar13) == 0) {
          unaff_x25 = (long *)(uVar13 & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar5 * (long)plVar10);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            plVar8 = (long *)plVar12[1];
            if (plVar8 == plVar9) {
              plVar8 = param_1;
              func_0x000104c4fbc4(param_1,plVar12 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) {
                uVar4 = 0;
                goto LAB_1094cfe50;
              }
            }
            else {
              if (((ulong)plVar10 & uVar13) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar13);
              }
              else if (plVar10 <= plVar8) {
                uVar5 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar10;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
              }
              if (plVar8 != unaff_x25) break;
            }
          }
        }
      }
      FUN_1094cfe9c(aplStack_88,param_1,plVar9,param_3);
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar10) {
          uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar10 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar13 <= uVar5) {
          uVar13 = uVar5;
        }
        FUN_1094cfa50(param_1,uVar13);
        plVar10 = (long *)param_1[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
        }
      }
      lVar3 = *param_1;
      plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        plVar9 = param_1 + 2;
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
        if (*aplStack_88[0] != 0) {
          plVar9 = *(long **)(*aplStack_88[0] + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
          *(long **)(*param_1 + (long)plVar9 * 8) = aplStack_88[0];
        }
      }
      else {
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar12 = aplStack_88[0];
LAB_1094cfe50:
      auVar15._8_8_ = uVar4;
      auVar15._0_8_ = plVar12;
      return auVar15;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar12 = plVar10;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar10;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
  }
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = lVar3;
  return auVar14;
}



/* Entry: 1094cfc5c; end: 1094cfe9b;  */

undefined1  [16] FUN_1094cfc5c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094cfe50;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_1094cfe9c(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1094cfa50(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_1094cfe50:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094cfe9c; end: 1094cff1f;  */

void FUN_1094cfe9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1094cff20(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094cff20; end: 1094d004f;  */

undefined8 * FUN_1094cff20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 1094d0050; end: 1094d04c3;  */

ulong FUN_1094d0050(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  long lStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plStack_48 = (long *)param_2[1];
  uStack_50 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = param_1;
  FUN_1094d08a8(param_1,&uStack_50,param_3);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((uVar6 & 1) == 0) {
    return uVar6;
  }
  uStack_5d = 0;
  uStack_5c = 0;
  if ((uint)param_3 < 2) {
    puVar8 = (undefined8 *)&UNK_10f5676e2;
LAB_1094d010c:
    lStack_58 = 0xb;
    uStack_68 = (undefined7)*puVar8;
    uStack_61 = *(undefined4 *)((long)puVar8 + 7);
  }
  else {
    if ((uint)param_3 == 2) {
      puVar8 = (undefined8 *)&UNK_10f5676ee;
      goto LAB_1094d010c;
    }
    lStack_58 = 0xc;
    uStack_68 = 0x6769685f736f69;
    uStack_61 = 0x6e655f68;
    uStack_5d = 100;
  }
  lStack_58 = lStack_58 << 0x38;
  FUN_1094a68cc(auStack_78,*param_2,&uStack_68);
  uVar11 = *param_2;
  func_0x000107c31940(auStack_a0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_88,uVar11,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  func_0x000107c31940(auStack_a0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_b0,auStack_78,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  func_0x000107c31940(auStack_a0,&DAT_10f2c3ed3);
  FUN_1094a70a8(auStack_c0,auStack_b0,auStack_a0,auStack_88);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  func_0x000107c31940(auStack_a0,&UNK_10f56f5c2);
  FUN_1094d04c4(auStack_c0,auStack_a0,auStack_88,param_1 + 400);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  func_0x000107c31940(auStack_a0,&UNK_10f56f5ce);
  FUN_1094d04c4(auStack_c0,auStack_a0,auStack_88,param_1 + 0x1a8);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  func_0x000107c31940(auStack_a0,"direction");
  FUN_1094a69fc(auStack_b0,auStack_a0,auStack_88,param_1 + 0x1c0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  lVar10 = *(long *)(param_1 + 400);
  if (*(long *)(param_1 + 0x198) == lVar10) {
    uVar9 = 0;
  }
  else {
    lVar12 = 0;
    uVar13 = 0;
    do {
      func_0x000107c2ac70(param_1 + 0xb8,lVar10 + lVar12);
      if (uVar13 < (ulong)((*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 3) *
                          -0x5555555555555555)) {
        func_0x000107c2ac70(param_1 + 0xb8,*(long *)(param_1 + 0x1a8) + lVar12);
      }
      uVar13 = uVar13 + 1;
      lVar10 = *(long *)(param_1 + 400);
      uVar9 = (*(long *)(param_1 + 0x198) - lVar10 >> 3) * -0x5555555555555555;
      lVar12 = lVar12 + 0x18;
    } while (uVar13 < uVar9);
  }
  if (uVar9 == (*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 3) * -0x71c71c71c71c71c7) {
    if (*(char *)(param_1 + 0x1d7) < '\0') {
      if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_1094d0378;
    }
    else if (*(char *)(param_1 + 0x1d7) == '\0') goto LAB_1094d0378;
    if ((*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 3) * -0x5555555555555555 - uVar9
        == 0) {
LAB_1094d0378:
      FUN_109380f8c(auStack_c0);
      FUN_109380f8c(auStack_b0);
      FUN_109380f8c(auStack_88);
      FUN_109380f8c(auStack_78);
      if (lStack_58 < 0) {
        __ZdlPv(CONCAT17((undefined1)uStack_61,uStack_68));
      }
      return uVar6;
    }
    puVar7 = &UNK_10f56f650;
  }
  else {
    puVar7 = &UNK_10f56f5dd;
  }
  func_0x000105688514(puVar7);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1094d03e0);
  (*pcVar5)();
}



/* Entry: 1094d04c4; end: 1094d0607;  */

void FUN_1094d04c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  pcStack_80 = (char *)*param_1;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x8000000000000000;
  cVar1 = *pcStack_80;
  pcStack_58 = pcStack_80;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_80 + 8);
    FUN_1093793a4(uVar2,param_2);
    pcStack_80 = (char *)*param_1;
    cVar1 = *pcStack_80;
    uStack_50 = uVar2;
LAB_1094d054c:
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_78 = *(long *)(pcStack_80 + 8) + 8;
      goto LAB_1094d0590;
    }
    if (cVar1 != '\x02') {
      uStack_68 = 1;
      goto LAB_1094d0590;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_40 = 1;
      goto LAB_1094d054c;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
    uStack_48 = uStack_70;
  }
  uStack_68 = 0x8000000000000000;
  lStack_78 = 0;
LAB_1094d0590:
  ppcVar3 = &pcStack_58;
  FUN_109379420(ppcVar3,&pcStack_80);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_58);
    FUN_10937c260(&pcStack_80);
    func_0x000107c3193c(param_4);
    param_4[1] = lStack_78;
    *param_4 = pcStack_80;
    param_4[2] = uStack_70;
    lStack_78 = 0;
    uStack_70 = 0;
    pcStack_80 = (char *)0x0;
    puStack_38 = (undefined1 *)&pcStack_80;
    func_0x000104c607c8(&puStack_38);
  }
  else {
    func_0x0001094b4944(param_3,param_2,param_4);
  }
  return;
}



/* Entry: 1094d0608; end: 1094d060b;  */

void FUN_1094d0608(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af76a8;
  if (*(char *)((long)param_1 + 0x1d7) < '\0') {
    __ZdlPv(param_1[0x38]);
  }
  puStack_28 = param_1 + 0x35;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x32;
  func_0x000104c607c8(&puStack_28);
  func_0x0001094d0688(param_1);
  return;
}



/* Entry: 1094d060c; end: 1094d061f;  */

void FUN_1094d060c(void)

{
  FUN_1094d0620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094d0620; end: 1094d078b;  */

void FUN_1094d0620(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af76a8;
  if (*(char *)((long)param_1 + 0x1d7) < '\0') {
    __ZdlPv(param_1[0x38]);
  }
  puStack_28 = param_1 + 0x35;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x32;
  func_0x000104c607c8(&puStack_28);
  func_0x0001094d0688(param_1);
  return;
}



/* Entry: 1094d078c; end: 1094d07fb;  */

void FUN_1094d078c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x48;
        FUN_1094d07fc(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094d07fc; end: 1094d08a7;  */

void FUN_1094d07fc(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094d08a8; end: 1094d1e7f;  */

/* WARNING: Removing unreachable block (ram,0x0001094d1474) */
/* WARNING: Removing unreachable block (ram,0x0001094d13dc) */
/* WARNING: Removing unreachable block (ram,0x0001094d0fa8) */
/* WARNING: Removing unreachable block (ram,0x0001094d1a70) */
/* WARNING: Removing unreachable block (ram,0x0001094d1348) */
/* WARNING: Removing unreachable block (ram,0x0001094d0e1c) */
/* WARNING: Removing unreachable block (ram,0x0001094d0dbc) */
/* WARNING: Removing unreachable block (ram,0x0001094d0d5c) */
/* WARNING: Removing unreachable block (ram,0x0001094d0ccc) */
/* WARNING: Removing unreachable block (ram,0x0001094d0c18) */
/* WARNING: Removing unreachable block (ram,0x0001094d0bb0) */
/* WARNING: Removing unreachable block (ram,0x0001094d0b20) */
/* WARNING: Removing unreachable block (ram,0x0001094d0ab8) */
/* WARNING: Removing unreachable block (ram,0x0001094d0a38) */
/* WARNING: Removing unreachable block (ram,0x0001094d09b0) */
/* WARNING: Removing unreachable block (ram,0x0001094d0980) */
/* WARNING: Removing unreachable block (ram,0x0001094d09ec) */
/* WARNING: Removing unreachable block (ram,0x0001094d0a7c) */
/* WARNING: Removing unreachable block (ram,0x0001094d0aec) */
/* WARNING: Removing unreachable block (ram,0x0001094d0b70) */
/* WARNING: Removing unreachable block (ram,0x0001094d0be4) */
/* WARNING: Removing unreachable block (ram,0x0001094d0c4c) */
/* WARNING: Removing unreachable block (ram,0x0001094d0d1c) */
/* WARNING: Removing unreachable block (ram,0x0001094d0d8c) */
/* WARNING: Removing unreachable block (ram,0x0001094d0dec) */
/* WARNING: Removing unreachable block (ram,0x0001094d0e58) */
/* WARNING: Removing unreachable block (ram,0x0001094d137c) */
/* WARNING: Removing unreachable block (ram,0x0001094d0f24) */
/* WARNING: Removing unreachable block (ram,0x0001094d1028) */
/* WARNING: Removing unreachable block (ram,0x0001094d1428) */
/* WARNING: Removing unreachable block (ram,0x0001094d1a44) */

undefined8 FUN_1094d08a8(long param_1,ulong *param_2,uint param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  char *****pppppcVar6;
  char ***pppcVar7;
  char ****ppppcVar8;
  undefined8 *puVar9;
  int ******ppppppiVar10;
  char **ppcVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  char *****apppppcStack_2a0 [2];
  char cStack_289;
  char ***pppcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  char *****pppppcStack_270;
  undefined8 uStack_268;
  long lStack_260;
  char ***pppcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char **ppcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [16];
  char ****ppppcStack_210;
  char ****ppppcStack_208;
  long lStack_200;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  int *****pppppiStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 auStack_168 [2];
  char cStack_151;
  char **ppcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  char ***apppcStack_108 [2];
  char ***apppcStack_f8 [2];
  undefined1 auStack_e8 [16];
  undefined7 uStack_d8;
  undefined4 uStack_d1;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  long lStack_c8;
  char ****ppppcStack_c0;
  char **ppcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  char ****ppppcStack_a0;
  char **ppcStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  char ***pppcStack_80;
  char **ppcStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  uStack_cd = 0;
  uStack_cc = 0;
  if (param_3 < 2) {
    puVar22 = (undefined8 *)&UNK_10f5676e2;
LAB_1094d0910:
    lStack_c8 = 0xb;
    uStack_d8 = (undefined7)*puVar22;
    uStack_d1 = *(undefined4 *)((long)puVar22 + 7);
  }
  else {
    if (param_3 == 2) {
      puVar22 = (undefined8 *)&UNK_10f5676ee;
      goto LAB_1094d0910;
    }
    lStack_c8 = 0xc;
    uStack_d8 = 0x6769685f736f69;
    uStack_d1 = 0x6e655f68;
    uStack_cd = 100;
  }
  lStack_c8 = lStack_c8 << 0x38;
  FUN_1094a68cc(auStack_e8,*param_2,&uStack_d8);
  uVar21 = *param_2;
  func_0x000107c31940(&pppcStack_80,&DAT_10f3b660d);
  FUN_1094a68cc(apppcStack_f8,uVar21,&pppcStack_80);
  func_0x000107c31940(&pppcStack_80,&DAT_10f3b660d);
  FUN_1094a68cc(apppcStack_108,auStack_e8,&pppcStack_80);
  uVar21 = *param_2;
  func_0x000107c31940(&pppcStack_80,&DAT_10f3b660d);
  FUN_1093781f4(uVar21,&pppcStack_80);
  if ((uVar21 & 1) == 0) {
    uVar21 = *param_2;
    func_0x000107c31940(&pppcStack_80,&UNK_10f56f6c5);
    FUN_1094a68cc(&ppppcStack_a0,uVar21,&pppcStack_80);
    FUN_1094a7878(apppcStack_f8,&ppppcStack_a0);
    FUN_109380f8c(&ppppcStack_a0);
    func_0x000107c31940(&pppcStack_80,&UNK_10f56f6c5);
    FUN_1094a68cc(&ppppcStack_a0,auStack_e8,&pppcStack_80);
    FUN_1094a7878(apppcStack_108,&ppppcStack_a0);
    FUN_109380f8c(&ppppcStack_a0);
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  func_0x000107c31940(&pppcStack_80,&DAT_10f2e8c7d);
  FUN_1094d1e80(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x10);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f6d0);
  FUN_1094a775c(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x14);
  func_0x000107c31940(&pppcStack_80,&UNK_10f4edfe2);
  FUN_1094a775c(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x18);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f6dd);
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  FUN_1094d1f9c(auStack_120,apppcStack_108,&pppcStack_80,apppcStack_f8,&uStack_138);
  if (lStack_128 < 0) {
    __ZdlPv(uStack_138);
  }
  uVar4 = SUB84(auStack_120,0);
  FUN_10937e820();
  *(undefined4 *)(param_1 + 8) = uVar4;
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f6e7);
  FUN_1094d2114(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0xc);
  func_0x000107c31940(&pppcStack_80,&DAT_10f56f6ff);
  FUN_1094a69fc(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x20);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f70a);
  func_0x0001094d2230(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x58);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f719);
  FUN_1094d1e80(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x70);
  func_0x000107c31940(&ppppcStack_a0,&DAT_10f30a732);
  ppcStack_150 = (char **)0x0;
  uStack_148 = 0;
  uStack_140 = 0;
  FUN_1094a75e8(&pppcStack_80,apppcStack_108,&ppppcStack_a0,apppcStack_f8,&ppcStack_150);
  func_0x000107c3193c(param_1 + 0x78);
  *(char ***)(param_1 + 0x80) = ppcStack_78;
  *(char ****)(param_1 + 0x78) = pppcStack_80;
  *(char **)(param_1 + 0x88) = pcStack_70;
  ppcStack_78 = (char **)0x0;
  pcStack_70 = (char *)0x0;
  pppcStack_80 = (char ***)0x0;
  ppppcStack_c0 = &pppcStack_80;
  func_0x000104c607c8(&ppppcStack_c0);
  ppppcStack_c0 = (char ****)&ppcStack_150;
  func_0x000104c607c8(&ppppcStack_c0);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f729);
  uStack_180 = 0;
  uStack_178 = 0;
  lStack_170 = 0;
  FUN_1094d1f9c(auStack_168,apppcStack_108,&pppcStack_80,apppcStack_f8,&uStack_180);
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  uVar4 = SUB84(auStack_168,0);
  FUN_10937e5e8();
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f735);
  FUN_1094a70a8(auStack_190,apppcStack_108,&pppcStack_80,apppcStack_f8);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f739);
  func_0x0001094a6db0(auStack_190,&pppcStack_80,param_1 + 0x180);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f73d);
  func_0x0001094a6db0(auStack_190,&pppcStack_80,param_1 + 0x184);
  func_0x000107c31940(&pppcStack_80,&DAT_10f2e8c7d);
  func_0x0001094a6db0(auStack_190,&pppcStack_80,param_1 + 0x188);
  func_0x000107c31940(&pppcStack_80,&UNK_10f56f74d);
  FUN_1094a9268(auStack_190,&pppcStack_80,param_1 + 0x18c);
  pppppiStack_1a8 = (int *****)0x0;
  lStack_1a0 = 0;
  uStack_198 = 0;
  func_0x000107c31940(&pppcStack_80,&DAT_10f2eb8fa);
  FUN_1094a69fc(apppcStack_108,&pppcStack_80,apppcStack_f8,&pppppiStack_1a8);
  if (uStack_198 < 0) {
    ppppppiVar10 = (int ******)pppppiStack_1a8;
    if (lStack_1a0 == 5) goto LAB_1094d0e88;
LAB_1094d0ea8:
    *(undefined4 *)(param_1 + 0x94) = 0;
    func_0x000107c31940(&ppppcStack_a0,&UNK_10f56f752);
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1094d2364(&pppcStack_80,apppcStack_108,&ppppcStack_a0,apppcStack_f8,&lStack_1c0);
    if (*(long *)(param_1 + 0x100) != 0) {
      *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    *(char ***)(param_1 + 0x108) = ppcStack_78;
    *(char ****)(param_1 + 0x100) = pppcStack_80;
    *(char **)(param_1 + 0x110) = pcStack_70;
    ppcStack_78 = (char **)0x0;
    pcStack_70 = (char *)0x0;
    pppcStack_80 = (char ***)0x0;
    if (lStack_1c0 != 0) {
      lStack_1b8 = lStack_1c0;
      __ZdlPv();
    }
    func_0x000107c31940(&ppppcStack_a0,&UNK_10f56f75e);
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    uStack_1c8 = 0;
    FUN_1094d2364(&pppcStack_80,apppcStack_108,&ppppcStack_a0,apppcStack_f8,&lStack_1d8);
    plVar20 = (long *)(param_1 + 0x118);
    if (*plVar20 != 0) {
      *(long *)(param_1 + 0x120) = *plVar20;
      __ZdlPv();
      *plVar20 = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    *(char ***)(param_1 + 0x120) = ppcStack_78;
    *plVar20 = (long)pppcStack_80;
    *(char **)(param_1 + 0x128) = pcStack_70;
    ppcStack_78 = (char **)0x0;
    pcStack_70 = (char *)0x0;
    pppcStack_80 = (char ***)0x0;
    if (lStack_1d8 != 0) {
      lStack_1d0 = lStack_1d8;
      __ZdlPv();
    }
    func_0x000107c31940(&ppppcStack_a0,&UNK_10f56f76b);
    lStack_1f0 = 0;
    lStack_1e8 = 0;
    uStack_1e0 = 0;
    FUN_1094d2364(&pppcStack_80,apppcStack_108,&ppppcStack_a0,apppcStack_f8,&lStack_1f0);
    if (*(long *)(param_1 + 0x130) != 0) {
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    *(char ***)(param_1 + 0x138) = ppcStack_78;
    *(char ****)(param_1 + 0x130) = pppcStack_80;
    *(char **)(param_1 + 0x140) = pcStack_70;
    ppcStack_78 = (char **)0x0;
    pcStack_70 = (char *)0x0;
    pppcStack_80 = (char ***)0x0;
    if (lStack_1f0 != 0) {
      lStack_1e8 = lStack_1f0;
      __ZdlPv();
    }
    func_0x000107c31940(&ppppcStack_210,&UNK_10f56f778);
    ppppcStack_c0 = (char ****)apppcStack_108[0];
    ppcStack_b8 = (char **)0x0;
    pcStack_b0 = (char *)0x0;
    uStack_a8 = 0x8000000000000000;
    cVar1 = *(char *)apppcStack_108[0];
    if (cVar1 == '\x01') {
      pppcVar7 = (char ***)apppcStack_108[0][1];
      FUN_1093793a4(pppcVar7,&ppppcStack_210);
      cVar1 = *(char *)apppcStack_108[0];
      ppcStack_b8 = (char **)pppcVar7;
LAB_1094d10a4:
      ppcStack_78 = (char **)0x0;
      pcStack_70 = (char *)0x0;
      uStack_68 = 0x8000000000000000;
      pppcStack_80 = apppcStack_108[0];
      if (cVar1 == '\x01') {
        ppcStack_78 = apppcStack_108[0][1] + 1;
      }
      else {
        if (cVar1 == '\x02') {
          pcStack_70 = apppcStack_108[0][1][1];
          goto LAB_1094d10c8;
        }
        uStack_68 = 1;
      }
    }
    else {
      if (cVar1 != '\x02') {
        uStack_a8 = 1;
        goto LAB_1094d10a4;
      }
      pcStack_70 = apppcStack_108[0][1][1];
      pppcStack_80 = apppcStack_108[0];
      pcStack_b0 = pcStack_70;
LAB_1094d10c8:
      uStack_68 = 0x8000000000000000;
      ppcStack_78 = (char **)0x0;
    }
    pppppcVar6 = &ppppcStack_c0;
    FUN_109379420(pppppcVar6,&pppcStack_80);
    if (((ulong)pppppcVar6 & 1) == 0) {
      pppppcVar6 = &ppppcStack_c0;
      FUN_10937b950(pppppcVar6);
      FUN_1094d26e0(&pppcStack_80,pppppcVar6);
      if (*(long *)(param_1 + 0x148) != 0) {
        *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x148);
        __ZdlPv();
      }
      *(char ***)(param_1 + 0x150) = ppcStack_78;
      *(char ****)(param_1 + 0x148) = pppcStack_80;
      ppcVar11 = (char **)pcStack_70;
LAB_1094d126c:
      *(char ***)(param_1 + 0x158) = ppcVar11;
    }
    else {
      pppcStack_80 = apppcStack_f8[0];
      ppcStack_78 = (char **)0x0;
      pcStack_70 = (char *)0x0;
      uStack_68 = 0x8000000000000000;
      cVar1 = *(char *)apppcStack_f8[0];
      if (cVar1 == '\x01') {
        pppcVar7 = (char ***)apppcStack_f8[0][1];
        FUN_1093793a4(pppcVar7,&ppppcStack_210);
        cVar1 = *(char *)apppcStack_f8[0];
        ppcStack_78 = (char **)pppcVar7;
LAB_1094d11e8:
        ppcStack_98 = (char **)0x0;
        pcStack_90 = (char *)0x0;
        uStack_88 = 0x8000000000000000;
        ppppcStack_a0 = (char ****)apppcStack_f8[0];
        if (cVar1 == '\x01') {
          ppcStack_98 = apppcStack_f8[0][1] + 1;
        }
        else {
          if (cVar1 == '\x02') {
            pcStack_90 = apppcStack_f8[0][1][1];
            goto LAB_1094d120c;
          }
          uStack_88 = 1;
        }
      }
      else {
        if (cVar1 != '\x02') {
          uStack_68 = 1;
          goto LAB_1094d11e8;
        }
        pcStack_90 = apppcStack_f8[0][1][1];
        ppppcStack_a0 = (char ****)apppcStack_f8[0];
        pcStack_70 = pcStack_90;
LAB_1094d120c:
        uStack_88 = 0x8000000000000000;
        ppcStack_98 = (char **)0x0;
      }
      ppppcVar8 = &pppcStack_80;
      FUN_109379420(ppppcVar8,&ppppcStack_a0);
      if (((ulong)ppppcVar8 & 1) == 0) {
        ppppcVar8 = &pppcStack_80;
        FUN_10937b950(ppppcVar8);
        FUN_1094d26e0(&ppppcStack_a0,ppppcVar8);
        if (*(long *)(param_1 + 0x148) != 0) {
          *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x148);
          __ZdlPv();
        }
        *(char ***)(param_1 + 0x150) = ppcStack_98;
        *(char *****)(param_1 + 0x148) = ppppcStack_a0;
        ppcVar11 = (char **)pcStack_90;
        goto LAB_1094d126c;
      }
    }
    if (lStack_200 < 0) {
      __ZdlPv(ppppcStack_210);
    }
  }
  else {
    if (uStack_198._7_1_ != '\x05') goto LAB_1094d0ea8;
    ppppppiVar10 = &pppppiStack_1a8;
LAB_1094d0e88:
    if (*(int *)ppppppiVar10 != 0x6e696f70 || *(char *)((long)ppppppiVar10 + 4) != 't')
    goto LAB_1094d0ea8;
    *(undefined4 *)(param_1 + 0x94) = 1;
    func_0x000107c31940(&ppppcStack_c0,&UNK_10f56f78c);
    pppcStack_80 = apppcStack_108[0];
    ppcStack_78 = (char **)0x0;
    pcStack_70 = (char *)0x0;
    uStack_68 = 0x8000000000000000;
    cVar1 = *(char *)apppcStack_108[0];
    if (cVar1 == '\x01') {
      pppcVar7 = (char ***)apppcStack_108[0][1];
      FUN_1093793a4(pppcVar7,&ppppcStack_c0);
      cVar1 = *(char *)apppcStack_108[0];
      ppcStack_78 = (char **)pppcVar7;
LAB_1094d12a8:
      ppcStack_98 = (char **)0x0;
      pcStack_90 = (char *)0x0;
      uStack_88 = 0x8000000000000000;
      ppppcStack_a0 = (char ****)apppcStack_108[0];
      if (cVar1 == '\x01') {
        ppcStack_98 = apppcStack_108[0][1] + 1;
      }
      else {
        if (cVar1 == '\x02') {
          pcStack_90 = apppcStack_108[0][1][1];
          goto LAB_1094d12cc;
        }
        uStack_88 = 1;
      }
    }
    else {
      if (cVar1 != '\x02') {
        uStack_68 = 1;
        goto LAB_1094d12a8;
      }
      pcStack_90 = apppcStack_108[0][1][1];
      ppppcStack_a0 = (char ****)apppcStack_108[0];
      pcStack_70 = pcStack_90;
LAB_1094d12cc:
      uStack_88 = 0x8000000000000000;
      ppcStack_98 = (char **)0x0;
    }
    ppppcVar8 = &pppcStack_80;
    FUN_109379420(ppppcVar8,&ppppcStack_a0);
    if (((ulong)ppppcVar8 & 1) == 0) {
      FUN_10937b950(&pppcStack_80);
      FUN_10937cf14(&ppppcStack_a0);
      if (*(long *)(param_1 + 0x160) != 0) {
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
        __ZdlPv();
      }
      *(char ***)(param_1 + 0x168) = ppcStack_98;
      *(char *****)(param_1 + 0x160) = ppppcStack_a0;
      *(char **)(param_1 + 0x170) = pcStack_90;
    }
    else {
      func_0x0001094a6ca4(apppcStack_f8,&ppppcStack_c0,param_1 + 0x160);
    }
    func_0x000107c31940(&pppcStack_80,&UNK_10f56f794);
    FUN_1094a775c(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x178);
    func_0x000107c31940(&pppcStack_80,&UNK_10f56f7a0);
    FUN_1094a775c(apppcStack_108,&pppcStack_80,apppcStack_f8,param_1 + 0x17c);
  }
  func_0x000107c31940(&pppcStack_80,&DAT_10f2c3ed3);
  FUN_1094a70a8(auStack_220,apppcStack_108,&pppcStack_80,apppcStack_f8);
  func_0x000107c31940(&ppppcStack_a0,&UNK_10f56f7ae);
  ppcStack_238 = (char **)0x0;
  uStack_230 = 0;
  uStack_228 = 0;
  FUN_1094a8f9c(&pppcStack_80,auStack_220,&ppppcStack_a0,&ppcStack_238);
  ppppcStack_c0 = (char ****)&ppcStack_238;
  func_0x000104c607c8(&ppppcStack_c0);
  func_0x000107c31940(&ppppcStack_c0,&UNK_10f56f7c2);
  pppcStack_250 = (char ***)0x0;
  uStack_248 = 0;
  uStack_240 = 0;
  FUN_1094a8f9c(&ppppcStack_a0,auStack_220,&ppppcStack_c0,&pppcStack_250);
  ppppcStack_210 = &pppcStack_250;
  func_0x000104c607c8(&ppppcStack_210);
  lVar12 = (long)ppcStack_78 - (long)pppcStack_80 >> 3;
  uVar13 = lVar12 * -0x5555555555555555;
  puVar22 = *(undefined8 **)(param_1 + 0xd0);
  puVar18 = *(undefined8 **)(param_1 + 0xd8);
  lVar15 = (long)puVar18 - (long)puVar22 >> 3;
  bVar3 = uVar13 < (ulong)(lVar15 * -0x71c71c71c71c71c7);
  uVar21 = uVar13 + lVar15 * 0x71c71c71c71c71c7;
  if (bVar3 || uVar21 == 0) {
    if (bVar3) {
      while (puVar18 != puVar22 + lVar12 * 3) {
        puVar18 = puVar18 + -9;
        FUN_1094d07fc(puVar18);
      }
      *(undefined8 **)(param_1 + 0xd8) = puVar22 + lVar12 * 3;
    }
  }
  else {
    if ((ulong)((*(long *)(param_1 + 0xe0) - (long)puVar18 >> 3) * -0x71c71c71c71c71c7) < uVar21) {
      if (uVar13 < 0x38e38e38e38e38f) {
        lVar15 = *(long *)(param_1 + 0xe0) - (long)puVar22 >> 3;
        uVar17 = lVar15 * 0x1c71c71c71c71c72;
        if (uVar17 < uVar13 || uVar17 + lVar12 * 0x5555555555555555 == 0) {
          uVar17 = uVar13;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar15 * -0x71c71c71c71c71c7)) {
          uVar17 = 0x38e38e38e38e38e;
        }
        if (uVar17 < 0x38e38e38e38e38f) {
          puVar9 = (undefined8 *)(uVar17 * 0x48);
          __Znwm();
          lVar12 = (long)puVar9 + ((long)puVar18 - (long)puVar22);
          lVar15 = ((uVar21 * 0x48 - 0x48) / 0x48) * 0x48 + 0x48;
          _bzero(lVar12,lVar15);
          puVar14 = puVar22;
          puVar16 = puVar9;
          if (puVar22 != puVar18) {
            do {
              uVar24 = puVar14[1];
              uVar23 = *puVar14;
              puVar16[2] = puVar14[2];
              puVar16[1] = uVar24;
              *puVar16 = uVar23;
              puVar14[1] = 0;
              puVar14[2] = 0;
              *puVar14 = 0;
              uVar24 = puVar14[4];
              uVar23 = puVar14[3];
              puVar16[5] = puVar14[5];
              puVar16[4] = uVar24;
              puVar16[3] = uVar23;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar14[3] = 0;
              uVar24 = puVar14[7];
              uVar23 = puVar14[6];
              puVar16[8] = puVar14[8];
              puVar16[7] = uVar24;
              puVar16[6] = uVar23;
              puVar14[7] = 0;
              puVar14[8] = 0;
              puVar14[6] = 0;
              puVar14 = puVar14 + 9;
              puVar16 = puVar16 + 9;
            } while (puVar14 != puVar18);
            do {
              FUN_1094d07fc(puVar22);
              puVar22 = puVar22 + 9;
            } while (puVar22 != puVar18);
            puVar22 = *(undefined8 **)(param_1 + 0xd0);
          }
          *(undefined8 **)(param_1 + 0xd0) = puVar9;
          *(long *)(param_1 + 0xd8) = lVar12 + lVar15;
          *(undefined8 **)(param_1 + 0xe0) = puVar9 + uVar17 * 9;
          if (puVar22 != (undefined8 *)0x0) {
            __ZdlPv(puVar22);
          }
          goto LAB_1094d167c;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x0001094d26cc();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094d1a88);
      (*pcVar2)();
    }
    uVar21 = (uVar21 * 0x48 - 0x48) / 0x48;
    _bzero(puVar18,uVar21 * 0x48 + 0x48);
    *(undefined8 **)(param_1 + 0xd8) = puVar18 + uVar21 * 9 + 9;
  }
LAB_1094d167c:
  ppppcStack_c0 = (char ****)0x0;
  ppcStack_b8 = (char **)0x0;
  pcStack_b0 = (char *)0x0;
  if ((*(int *)(param_1 + 0x94) != 0) && (0 < *(int *)(param_1 + 0x17c))) {
    func_0x000107c31940(&pppppcStack_270,&UNK_10f56f7d4);
    pppcStack_288 = (char ***)0x0;
    uStack_280 = 0;
    uStack_278 = 0;
    FUN_1094a8f9c(&ppppcStack_210,auStack_220,&pppppcStack_270,&pppcStack_288);
    func_0x000107c3193c(&ppppcStack_c0);
    ppcStack_b8 = (char **)ppppcStack_208;
    ppppcStack_c0 = ppppcStack_210;
    pcStack_b0 = (char *)lStack_200;
    ppppcStack_208 = (char ****)0x0;
    lStack_200 = 0;
    ppppcStack_210 = (char ****)0x0;
    apppppcStack_2a0[0] = &ppppcStack_210;
    func_0x000104c607c8(apppppcStack_2a0);
    apppppcStack_2a0[0] = (char *****)&pppcStack_288;
    func_0x000104c607c8(apppppcStack_2a0);
    if (lStack_260 < 0) {
      __ZdlPv(pppppcStack_270);
    }
  }
  lVar12 = *(long *)(param_1 + 0xd0);
  if (*(long *)(param_1 + 0xd8) != lVar12) {
    lVar19 = 0;
    uVar21 = 0;
    lVar15 = 0x30;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar12 + lVar15 + -0x30,(char *)((long)pppcStack_80 + lVar19));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*(long *)(param_1 + 0xd0) + lVar15 + -0x18,(char *)((long)ppppcStack_a0 + lVar19));
      if (0 < *(int *)(param_1 + 0x17c)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*(long *)(param_1 + 0xd0) + lVar15,(long)ppppcStack_c0 + lVar19);
      }
      uVar21 = uVar21 + 1;
      lVar12 = *(long *)(param_1 + 0xd0);
      lVar15 = lVar15 + 0x48;
      lVar19 = lVar19 + 0x18;
    } while (uVar21 < (ulong)((*(long *)(param_1 + 0xd8) - lVar12 >> 3) * -0x71c71c71c71c71c7));
  }
  func_0x000104c60808(param_1 + 0xb8);
  lVar12 = *(long *)(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xd0) != lVar12) {
    lVar15 = *(long *)(param_1 + 0xd0) + 0x30;
    do {
      func_0x000107c2ac70(param_1 + 0xb8,lVar15 + -0x30);
      func_0x000107c2ac70(param_1 + 0xb8,lVar15 + -0x18);
      if (*(char *)(lVar15 + 0x17) < '\0') {
        if (*(long *)(lVar15 + 8) != 0) goto LAB_1094d17ec;
      }
      else if (*(char *)(lVar15 + 0x17) != '\0') {
LAB_1094d17ec:
        func_0x000107c2ac70(param_1 + 0xb8,lVar15);
      }
      lVar19 = lVar15 + 0x18;
      lVar15 = lVar15 + 0x48;
    } while (lVar19 != lVar12);
  }
  func_0x000107c31940(&ppppcStack_210,&UNK_10f56f7e3);
  FUN_1094a69fc(apppcStack_108,&ppppcStack_210,apppcStack_f8,param_1 + 0xa0);
  if (lStack_200 < 0) {
    __ZdlPv(ppppcStack_210);
  }
  if (*(char *)(param_1 + 0x99) == '\x01') {
    ppppcStack_210 = (char ****)0x0;
    ppppcStack_208 = (char ****)0x0;
    lStack_200 = 0;
    func_0x000107c31940(&pppppcStack_270,&UNK_10f56f7f2);
    FUN_1094a69fc(apppcStack_108,&pppppcStack_270,apppcStack_f8,&ppppcStack_210);
    if (lStack_260 < 0) {
      __ZdlPv(pppppcStack_270);
    }
    FUN_1094d24d0(param_1 + 0xb8,&ppppcStack_210);
    if (lStack_200 < 0) {
      __ZdlPv(ppppcStack_210);
    }
  }
  plVar20 = (long *)(param_1 + 0xe8);
  *(long *)(param_1 + 0xf0) = *plVar20;
  ppppcStack_210 = (char ****)0x0;
  ppppcStack_208 = (char ****)0x0;
  lStack_200 = 0;
  func_0x000107c31940(&pppppcStack_270,&UNK_10f56f802);
  FUN_1094d04c4(apppcStack_108,&pppppcStack_270,apppcStack_f8,&ppppcStack_210);
  if (lStack_260 < 0) {
    __ZdlPv(pppppcStack_270);
  }
  if (ppppcStack_210 == ppppcStack_208) {
    if (*(int *)(param_1 + 0x90) != 0) {
      pppppcStack_270 = (char *****)CONCAT44(pppppcStack_270._4_4_,2);
      func_0x0001094d25f0(plVar20,&pppppcStack_270);
    }
  }
  else {
    FUN_10937dae0(&pppppcStack_270,&ppppcStack_210);
    if (*plVar20 != 0) {
      *(long *)(param_1 + 0xf0) = *plVar20;
      __ZdlPv();
      *plVar20 = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf0) = uStack_268;
    *(char ******)(param_1 + 0xe8) = pppppcStack_270;
    *(long *)(param_1 + 0xf8) = lStack_260;
  }
  pppppcStack_270 = (char *****)0x0;
  uStack_268 = 0;
  lStack_260 = 0;
  func_0x000107c31940(apppppcStack_2a0,&UNK_10f56f818);
  FUN_1094a69fc(apppcStack_108,apppppcStack_2a0,apppcStack_f8,&pppppcStack_270);
  if (cStack_289 < '\0') {
    __ZdlPv(apppppcStack_2a0[0]);
  }
  uVar5 = (uint)&pppppcStack_270;
  FUN_1094f59bc();
  if ((uVar5 >> 8 & 1) != 0) {
    *(char *)(param_1 + 0x50) = (char)uVar5;
  }
  if (lStack_260 < 0) {
    __ZdlPv(pppppcStack_270);
  }
  pppppcStack_270 = &ppppcStack_210;
  func_0x000104c607c8(&pppppcStack_270);
  ppppcStack_210 = (char ****)&ppppcStack_c0;
  func_0x000104c607c8(&ppppcStack_210);
  ppppcStack_c0 = (char ****)&ppppcStack_a0;
  func_0x000104c607c8(&ppppcStack_c0);
  ppppcStack_a0 = &pppcStack_80;
  func_0x000104c607c8(&ppppcStack_a0);
  FUN_109380f8c(auStack_220);
  if (uStack_198 < 0) {
    __ZdlPv(pppppiStack_1a8);
  }
  FUN_109380f8c(auStack_190);
  if (cStack_151 < '\0') {
    __ZdlPv(auStack_168[0]);
  }
  if (cStack_109 < '\0') {
    __ZdlPv(auStack_120[0]);
  }
  FUN_109380f8c(apppcStack_108);
  FUN_109380f8c(apppcStack_f8);
  FUN_109380f8c(auStack_e8);
  return 1;
}



/* Entry: 1094d1e80; end: 1094d1f9b;  */

void FUN_1094d1e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4(uVar2,param_2);
    pcStack_70 = (char *)*param_1;
    cVar1 = *pcStack_70;
    uStack_48 = uVar2;
LAB_1094d1f08:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_1094d1f4c;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_1094d1f4c;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_1094d1f08;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_1094d1f4c:
  ppcVar3 = &pcStack_50;
  FUN_109379420(ppcVar3,&pcStack_70);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_50);
    FUN_10938d050();
    *param_4 = pcStack_70._0_4_;
  }
  else {
    func_0x0001094a6db0(param_3,param_2,param_4);
  }
  return;
}



/* Entry: 1094d1f9c; end: 1094d2113;  */

void FUN_1094d1f9c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  char *pcStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcStack_80 = (char *)*param_2;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  cVar1 = *pcStack_80;
  pcStack_60 = pcStack_80;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_80 + 8);
    FUN_1093793a4(uVar2,param_3);
    pcStack_80 = (char *)*param_2;
    cVar1 = *pcStack_80;
    uStack_58 = uVar2;
LAB_1094d202c:
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_78 = *(long *)(pcStack_80 + 8) + 8;
      goto LAB_1094d2070;
    }
    if (cVar1 != '\x02') {
      uStack_68 = 1;
      goto LAB_1094d2070;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094d202c;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
    uStack_50 = uStack_70;
  }
  uStack_68 = 0x8000000000000000;
  lStack_78 = 0;
LAB_1094d2070:
  ppcVar3 = &pcStack_60;
  FUN_109379420(ppcVar3,&pcStack_80);
  if ((int)ppcVar3 == 0) {
    FUN_10937b950(&pcStack_60);
    FUN_10937c804(param_1);
  }
  else {
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_a0,*param_5,param_5[1]);
    }
    else {
      uStack_98 = param_5[1];
      uStack_a0 = *param_5;
      lStack_90 = param_5[2];
    }
    FUN_1094a6b30(param_1,param_4,param_3,&uStack_a0);
    if (lStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  return;
}



/* Entry: 1094d2114; end: 1094d2363;  */

void FUN_1094d2114(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4(uVar2,param_2);
    pcStack_70 = (char *)*param_1;
    cVar1 = *pcStack_70;
    uStack_48 = uVar2;
LAB_1094d219c:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_1094d21e0;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_1094d21e0;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_1094d219c;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_1094d21e0:
  ppcVar3 = &pcStack_50;
  FUN_109379420(ppcVar3,&pcStack_70);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_50);
    FUN_10938d198();
    *param_4 = pcStack_70._0_1_;
  }
  else {
    FUN_1094b4850(param_3,param_2,param_4);
  }
  return;
}



/* Entry: 1094d2364; end: 1094d24cf;  */

void FUN_1094d2364(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcStack_80 = (char *)*param_2;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  cVar1 = *pcStack_80;
  pcStack_60 = pcStack_80;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_80 + 8);
    FUN_1093793a4(uVar2,param_3);
    pcStack_80 = (char *)*param_2;
    cVar1 = *pcStack_80;
    uStack_58 = uVar2;
LAB_1094d23f4:
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_78 = *(long *)(pcStack_80 + 8) + 8;
      goto LAB_1094d2438;
    }
    if (cVar1 != '\x02') {
      uStack_68 = 1;
      goto LAB_1094d2438;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094d23f4;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
    uStack_50 = uStack_70;
  }
  uStack_68 = 0x8000000000000000;
  lStack_78 = 0;
LAB_1094d2438:
  ppcVar3 = &pcStack_60;
  FUN_109379420(ppcVar3,&pcStack_80);
  if ((int)ppcVar3 == 0) {
    FUN_10937b950(&pcStack_60);
    FUN_1094a87f4(param_1);
  }
  else {
    lStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = 0;
    FUN_1092cc0dc(&lStack_98,*param_5,param_5[1],param_5[1] - *param_5 >> 2);
    FUN_1094a74cc(param_1,param_4,param_3,&lStack_98);
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1094d24d0; end: 1094d26b3;  */

long * FUN_1094d24d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  long *plStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar7 = *param_2;
    puVar11[2] = param_2[2];
    puVar11[1] = uVar13;
    *puVar11 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar11 = puVar11 + 3;
    plVar4 = param_1;
  }
  else {
    lVar10 = (long)puVar11 - *param_1;
    uVar6 = (lVar10 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      func_0x000104c60770();
      uStack_68 = 0x1094d25f0;
      ppuStack_a0 = &puStack_70;
      puVar2 = (undefined4 *)param_1[1];
      if (puVar2 < (undefined4 *)param_1[2]) {
        puVar12 = puVar2 + 1;
        *puVar2 = *(undefined4 *)param_2;
        plVar3 = param_1;
      }
      else {
        lVar10 = (long)puVar2 - *param_1;
        uVar6 = (lVar10 >> 2) + 1;
        puStack_70 = &stack0xfffffffffffffff0;
        if (uVar6 >> 0x3e != 0) {
          plVar4 = param_1;
          FUN_10937df9c();
          pcStack_98 = FUN_1094d26b4;
          *plVar4 = (long)&PTR_FUN_110af76e8;
          puStack_b0 = param_2;
          plStack_a8 = param_1;
          if (plVar4[0x2c] != 0) {
            plVar4[0x2d] = plVar4[0x2c];
            __ZdlPv();
          }
          if (plVar4[0x29] != 0) {
            plVar4[0x2a] = plVar4[0x29];
            __ZdlPv();
          }
          if (plVar4[0x26] != 0) {
            plVar4[0x27] = plVar4[0x26];
            __ZdlPv();
          }
          if (plVar4[0x23] != 0) {
            plVar4[0x24] = plVar4[0x23];
            __ZdlPv();
          }
          if (plVar4[0x20] != 0) {
            plVar4[0x21] = plVar4[0x20];
            __ZdlPv();
          }
          if (plVar4[0x1d] != 0) {
            plVar4[0x1e] = plVar4[0x1d];
            __ZdlPv();
          }
          plStack_b8 = plVar4 + 0x1a;
          FUN_1094d078c(&plStack_b8);
          plStack_b8 = plVar4 + 0x17;
          func_0x000104c607c8(&plStack_b8);
          if (*(char *)((long)plVar4 + 0xb7) < '\0') {
            __ZdlPv(plVar4[0x14]);
          }
          plStack_b8 = plVar4 + 0xf;
          func_0x000104c607c8(&plStack_b8);
          if (plVar4[0xb] != 0) {
            plVar4[0xc] = plVar4[0xb];
            __ZdlPv();
          }
          if (*(char *)((long)plVar4 + 0x4f) < '\0') {
            __ZdlPv(plVar4[7]);
          }
          if (*(char *)((long)plVar4 + 0x37) < '\0') {
            __ZdlPv(plVar4[4]);
          }
          return plVar4;
        }
        uVar5 = param_1[2] - *param_1;
        uVar9 = (long)uVar5 >> 1;
        if (uVar9 <= uVar6) {
          uVar9 = uVar6;
        }
        if (0x7ffffffffffffffb < uVar5) {
          uVar9 = 0x3fffffffffffffff;
        }
        plVar4 = param_1;
        FUN_10937dfb0();
        lVar8 = *param_1;
        puVar2 = (undefined4 *)((long)plVar4 + lVar10);
        lVar10 = (long)puVar2 - (param_1[1] - lVar8);
        puVar12 = puVar2 + 1;
        *puVar2 = *(undefined4 *)param_2;
        _memcpy(lVar10,lVar8);
        plVar3 = (long *)*param_1;
        *param_1 = lVar10;
        param_1[1] = (long)puVar12;
        param_1[2] = (long)plVar4 + uVar9 * 4;
        if (plVar3 != (long *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar12;
      return plVar3;
    }
    lVar8 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      uVar9 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plVar4 = param_1;
    plStack_38 = param_1;
    func_0x000104c60784();
    puVar1 = (undefined8 *)((long)plVar4 + lVar10);
    uVar7 = param_2[2];
    uVar13 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[2] = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar11 = puVar1 + 3;
    lVar10 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar9 * 3);
    plVar4 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000107c31938(plVar4);
  }
  param_1[1] = (long)puVar11;
  return plVar4;
}



/* Entry: 1094d26b4; end: 1094d26b7;  */

undefined8 * FUN_1094d26b4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af76e8;
  if (param_1[0x2c] != 0) {
    param_1[0x2d] = param_1[0x2c];
    __ZdlPv();
  }
  if (param_1[0x29] != 0) {
    param_1[0x2a] = param_1[0x29];
    __ZdlPv();
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1a;
  FUN_1094d078c(&puStack_28);
  puStack_28 = param_1 + 0x17;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  puStack_28 = param_1 + 0xf;
  func_0x000104c607c8(&puStack_28);
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 1094d26b8; end: 1094d26df;  */

void FUN_1094d26b8(void)

{
  func_0x0001094d0688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094d26e0; end: 1094d2aeb;  */

void FUN_1094d26e0(long *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  char **ppcVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  char *pcStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined4 uStack_64;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 != '\x02') {
    uVar9 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_2);
    func_0x000107c31940(&pcStack_c0,param_2);
    FUN_10928a5e0(&pcStack_a0,&UNK_10f56748c,&pcStack_c0);
    FUN_10937bbbc(uVar9,0x12e,&pcStack_a0);
    ___cxa_throw(uVar9,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_1094d2a4c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1094d2a50);
    (*pcVar6)();
  }
  pppuStack_78 = (undefined8 ****)0x0;
  pppuStack_70 = (undefined8 ****)0x0;
  pppuStack_80 = (undefined8 ****)0x0;
  FUN_1094d2aec(&pppuStack_80,(*(long **)(param_2 + 8))[1] - **(long **)(param_2 + 8) >> 4);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x8000000000000000;
  cVar2 = *param_2;
  ppppuVar13 = (undefined8 ****)pppuStack_78;
  pcStack_c0 = param_2;
  pcStack_a0 = param_2;
  if (cVar2 == '\0') {
    uStack_88 = 1;
  }
  else {
    if (cVar2 == '\x02') {
      uStack_90 = **(undefined8 **)(param_2 + 8);
      puStack_b8 = (undefined8 *)0x0;
      uStack_a8 = 0x8000000000000000;
      uStack_b0 = (*(undefined8 **)(param_2 + 8))[1];
      goto LAB_1094d27cc;
    }
    if (cVar2 == '\x01') {
      puStack_b8 = *(undefined8 **)(param_2 + 8) + 1;
      uStack_98 = **(undefined8 **)(param_2 + 8);
      uStack_a8 = 0x8000000000000000;
      uStack_b0 = 0;
      goto LAB_1094d27cc;
    }
    uStack_88 = 0;
  }
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_a8 = 1;
LAB_1094d27cc:
  do {
    ppcVar7 = &pcStack_a0;
    FUN_10937c708(ppcVar7,&pcStack_c0);
    if (((ulong)ppcVar7 & 1) != 0) {
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      param_1[1] = (long)pppuStack_78;
      *param_1 = (long)pppuStack_80;
      param_1[2] = (long)pppuStack_70;
      return;
    }
    ppcVar7 = &pcStack_a0;
    FUN_10937c560(ppcVar7);
    FUN_1094cf080();
    FUN_10938d050();
    uVar4 = uStack_64;
    FUN_1094cf080(ppcVar7,1);
    FUN_10938d050();
    uVar5 = uStack_64;
    pppuVar3 = pppuStack_80;
    if (pppuStack_78 < pppuStack_70) {
      ppppuVar16 = ppppuVar13;
      if (ppppuVar13 == (undefined8 ****)pppuStack_78) {
        *(undefined4 *)pppuStack_78 = uVar4;
        *(undefined4 *)((long)pppuStack_78 + 4) = uVar5;
        pppuStack_78 = pppuStack_78 + 1;
      }
      else {
        ppppuVar15 = (undefined8 ****)(pppuStack_78 + -1);
        ppppuVar8 = (undefined8 ****)pppuStack_78;
        if (ppppuVar15 < pppuStack_78) {
          *pppuStack_78 = *ppppuVar15;
          ppppuVar8 = (undefined8 ****)(pppuStack_78 + 1);
        }
        if ((undefined8 ****)pppuStack_78 != ppppuVar13 + 1) {
          puVar11 = (undefined4 *)((long)pppuStack_78 + -4);
          do {
            ppppuVar14 = ppppuVar15 + -1;
            puVar11[-1] = *(undefined4 *)ppppuVar14;
            *puVar11 = *(undefined4 *)((long)ppppuVar15 + -4);
            ppppuVar15 = ppppuVar14;
            puVar11 = puVar11 + -2;
          } while (ppppuVar14 != ppppuVar13);
        }
        pppuStack_78 = ppppuVar8;
        *(undefined4 *)ppppuVar13 = uVar4;
        *(undefined4 *)((long)ppppuVar13 + 4) = uVar5;
      }
    }
    else {
      uVar10 = ((long)pppuStack_78 - (long)pppuStack_80 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) {
        FUN_1094d2b78();
        goto LAB_1094d2a4c;
      }
      uVar12 = (long)pppuStack_70 - (long)pppuStack_80 >> 2;
      if (uVar12 <= uVar10) {
        uVar12 = uVar10;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)pppuStack_70 - (long)pppuStack_80)) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 == 0) {
        ppppuVar15 = (undefined8 ****)0x0;
        uVar12 = 0;
      }
      else {
        ppppuVar15 = &pppuStack_80;
        FUN_1094d2b8c();
        uVar12 = uVar12 << 3;
      }
      uVar10 = (long)ppppuVar13 - (long)pppuVar3;
      ppppuVar16 = (undefined8 ****)((long)ppppuVar15 + uVar10);
      ppppuVar8 = (undefined8 ****)((long)ppppuVar15 + uVar12);
      if (uVar10 == uVar12) {
        if ((long)uVar10 < 1) {
          uVar10 = (long)uVar10 >> 2;
          if (ppppuVar13 == (undefined8 ****)pppuVar3) {
            uVar10 = 1;
          }
          ppppuVar8 = &pppuStack_80;
          uVar12 = uVar10;
          FUN_1094d2b8c();
          ppppuVar16 = ppppuVar8 + (uVar10 >> 2);
          ppppuVar8 = ppppuVar8 + uVar12;
          if (ppppuVar15 != (undefined8 ****)0x0) {
            __ZdlPv(ppppuVar15);
          }
        }
        else {
          ppppuVar16 = (undefined8 ****)
                       ((long)ppppuVar16 - ((uVar10 >> 1) + 4 & 0xfffffffffffffff8));
        }
      }
      *(undefined4 *)ppppuVar16 = uVar4;
      *(undefined4 *)((long)ppppuVar16 + 4) = uVar5;
      _memcpy(ppppuVar16 + 1,ppppuVar13,(long)pppuStack_78 - (long)ppppuVar13);
      ppppuVar15 = (undefined8 ****)
                   ((long)(ppppuVar16 + 1) + ((long)pppuStack_78 - (long)ppppuVar13));
      ppppuVar14 = (undefined8 ****)((long)ppppuVar16 - ((long)ppppuVar13 - (long)pppuStack_80));
      pppuStack_78 = ppppuVar13;
      _memcpy(ppppuVar14);
      bVar1 = (undefined8 ****)pppuStack_80 != (undefined8 ****)0x0;
      pppuStack_80 = ppppuVar14;
      pppuStack_78 = ppppuVar15;
      pppuStack_70 = ppppuVar8;
      if (bVar1) {
        __ZdlPv();
      }
    }
    FUN_10937c698(&pcStack_a0);
    ppppuVar13 = ppppuVar16 + 1;
  } while( true );
}



/* Entry: 1094d2aec; end: 1094d2b77;  */

/* WARNING: Removing unreachable block (ram,0x0001094d3148) */
/* WARNING: Removing unreachable block (ram,0x0001094d30e8) */
/* WARNING: Removing unreachable block (ram,0x0001094d2e24) */
/* WARNING: Removing unreachable block (ram,0x0001094d2cbc) */
/* WARNING: Removing unreachable block (ram,0x0001094d2c8c) */
/* WARNING: Removing unreachable block (ram,0x0001094d2dec) */
/* WARNING: Removing unreachable block (ram,0x0001094d30b8) */
/* WARNING: Removing unreachable block (ram,0x0001094d3118) */
/* WARNING: Removing unreachable block (ram,0x0001094d3178) */

undefined1  [16] FUN_1094d2aec(long *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong auStack_148 [8];
  char cStack_101;
  undefined1 auStack_100 [16];
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined7 uStack_b0;
  undefined4 uStack_a9;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  long lStack_a0;
  ulong *puStack_98;
  
  lVar4 = *param_1;
  if (param_2 <= (undefined8 *)(param_1[2] - lVar4 >> 3)) {
LAB_1094d2b64:
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = param_1[1];
    plVar1 = param_1;
    FUN_1094d2b8c();
    lVar4 = (long)plVar1 + (lVar5 - lVar4);
    plVar1 = plVar1 + (long)param_2;
    param_2 = (undefined8 *)*param_1;
    lVar7 = lVar4 - (param_1[1] - (long)param_2);
    _memcpy(lVar7);
    lVar5 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar4;
    param_1[2] = (long)plVar1;
    param_1 = (long *)0x0;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar13._8_8_ = param_2;
      auVar13._0_8_ = lVar5;
      return auVar13;
    }
    goto LAB_1094d2b64;
  }
  FUN_1094d2b78();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm(lVar4);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar4;
    return auVar11;
  }
  func_0x000104c4f740();
  uStack_a5 = 0;
  uStack_a4 = 0;
  if (param_3 < 2) {
    puVar6 = (undefined8 *)&UNK_10f5676e2;
  }
  else {
    if (param_3 != 2) {
      lStack_a0 = 0xc;
      uStack_b0 = 0x6769685f736f69;
      uStack_a9 = 0x6e655f68;
      uStack_a5 = 100;
      goto LAB_1094d2c50;
    }
    puVar6 = (undefined8 *)&UNK_10f5676ee;
  }
  lStack_a0 = 0xb;
  uStack_b0 = (undefined7)*puVar6;
  uStack_a9 = *(undefined4 *)((long)puVar6 + 7);
LAB_1094d2c50:
  lStack_a0 = lStack_a0 << 0x38;
  FUN_1094a68cc(auStack_c0,*param_2,&uStack_b0);
  uVar8 = *param_2;
  func_0x000107c31940(&uStack_f0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_d0,uVar8,&uStack_f0);
  func_0x000107c31940(&uStack_f0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_100,auStack_c0,&uStack_f0);
  func_0x000107c31940(auStack_148 + 6,&DAT_10f56f6ff);
  auStack_148[3] = 0;
  auStack_148[4] = 0;
  auStack_148[5] = 0;
  FUN_1094d1f9c(&uStack_f0,auStack_100,auStack_148 + 6,auStack_d0,auStack_148 + 3);
  if ((char)puVar2[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 8));
  }
  *(undefined8 *)(puVar2 + 0x10) = uStack_e8;
  *(ulong *)(puVar2 + 8) = uStack_f0;
  *(ulong *)(puVar2 + 0x18) = uStack_e0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  if ((long)auStack_148[5] < 0) {
    __ZdlPv(auStack_148[3]);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_148[6]);
  }
  func_0x000107c31940(auStack_148 + 6,&DAT_10f30a732);
  auStack_148[0] = 0;
  auStack_148[1] = 0;
  auStack_148[2] = 0;
  FUN_1094a75e8(&uStack_f0,auStack_100,auStack_148 + 6,auStack_d0,auStack_148);
  func_0x000107c3193c(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa8) = uStack_e8;
  *(ulong *)(puVar2 + 0xa0) = uStack_f0;
  *(ulong *)(puVar2 + 0xb0) = uStack_e0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  puStack_98 = &uStack_f0;
  func_0x000104c607c8(&puStack_98);
  puStack_98 = auStack_148;
  func_0x000104c607c8(&puStack_98);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_148[6]);
  }
  func_0x000107c31940(&uStack_f0,&UNK_10f56f82f);
  uVar9 = *(undefined4 *)(puVar2 + 0x9c);
  FUN_1094d3328(auStack_100,&uStack_f0,auStack_d0);
  *(undefined4 *)(puVar2 + 0x9c) = uVar9;
  func_0x000107c31940(&uStack_f0,&UNK_10f56f848);
  uVar9 = *(undefined4 *)(puVar2 + 0x98);
  FUN_1094d3328(auStack_100,&uStack_f0,auStack_d0);
  *(undefined4 *)(puVar2 + 0x98) = uVar9;
  func_0x000107c31940(auStack_148 + 6,&UNK_10f56f862);
  if ((char)puVar2[0x4f] < '\0') {
    func_0x000107c3192c(&uStack_160,*(undefined8 *)(puVar2 + 0x38),*(undefined8 *)(puVar2 + 0x40));
  }
  else {
    uStack_158 = *(undefined8 *)(puVar2 + 0x40);
    uStack_160 = *(undefined8 *)(puVar2 + 0x38);
    lStack_150 = *(long *)(puVar2 + 0x48);
  }
  FUN_1094d1f9c(&uStack_f0,auStack_100,auStack_148 + 6,auStack_d0,&uStack_160);
  if ((char)puVar2[0x4f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x38));
  }
  *(undefined8 *)(puVar2 + 0x40) = uStack_e8;
  *(ulong *)(puVar2 + 0x38) = uStack_f0;
  *(ulong *)(puVar2 + 0x48) = uStack_e0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_148[6]);
  }
  func_0x000107c31940(auStack_148 + 6,&UNK_10f56f86e);
  if ((char)puVar2[0x67] < '\0') {
    func_0x000107c3192c(&uStack_180,*(undefined8 *)(puVar2 + 0x50),*(undefined8 *)(puVar2 + 0x58));
  }
  else {
    uStack_178 = *(undefined8 *)(puVar2 + 0x58);
    uStack_180 = *(undefined8 *)(puVar2 + 0x50);
    lStack_170 = *(long *)(puVar2 + 0x60);
  }
  FUN_1094d1f9c(&uStack_f0,auStack_100,auStack_148 + 6,auStack_d0,&uStack_180);
  if ((char)puVar2[0x67] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x50));
  }
  *(undefined8 *)(puVar2 + 0x58) = uStack_e8;
  *(ulong *)(puVar2 + 0x50) = uStack_f0;
  *(ulong *)(puVar2 + 0x60) = uStack_e0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_148[6]);
  }
  func_0x000107c31940(auStack_148 + 6,&UNK_10f56f884);
  if ((char)puVar2[0x7f] < '\0') {
    func_0x000107c3192c(&uStack_1a0,*(undefined8 *)(puVar2 + 0x68),*(undefined8 *)(puVar2 + 0x70));
  }
  else {
    uStack_198 = *(undefined8 *)(puVar2 + 0x70);
    uStack_1a0 = *(undefined8 *)(puVar2 + 0x68);
    lStack_190 = *(long *)(puVar2 + 0x78);
  }
  FUN_1094d1f9c(&uStack_f0,auStack_100,auStack_148 + 6,auStack_d0,&uStack_1a0);
  if ((char)puVar2[0x7f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x68));
  }
  *(undefined8 *)(puVar2 + 0x70) = uStack_e8;
  *(ulong *)(puVar2 + 0x68) = uStack_f0;
  *(ulong *)(puVar2 + 0x78) = uStack_e0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_148[6]);
  }
  func_0x000107c31940(auStack_148 + 6,&UNK_10f56f89c);
  if ((char)puVar2[0x97] < '\0') {
    func_0x000107c3192c(&uStack_1c0,*(undefined8 *)(puVar2 + 0x80),*(undefined8 *)(puVar2 + 0x88));
  }
  else {
    uStack_1b8 = *(undefined8 *)(puVar2 + 0x88);
    uStack_1c0 = *(undefined8 *)(puVar2 + 0x80);
    lStack_1b0 = *(long *)(puVar2 + 0x90);
  }
  FUN_1094d1f9c(&uStack_f0,auStack_100,auStack_148 + 6,auStack_d0,&uStack_1c0);
  if ((char)puVar2[0x97] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x80));
  }
  *(undefined8 *)(puVar2 + 0x88) = uStack_e8;
  *(ulong *)(puVar2 + 0x80) = uStack_f0;
  *(ulong *)(puVar2 + 0x90) = uStack_e0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_148[6]);
  }
  func_0x000107c31940(&uStack_f0,&UNK_10f56f735);
  FUN_1094a70a8(auStack_148 + 6,auStack_100,&uStack_f0,auStack_d0);
  func_0x000107c31940(&uStack_f0,&UNK_10f56f739);
  func_0x0001094a6db0(auStack_148 + 6,&uStack_f0,puVar2 + 0xb8);
  func_0x000107c31940(&uStack_f0,&DAT_10f2e8c7d);
  func_0x0001094a6db0(auStack_148 + 6,&uStack_f0,puVar2 + 0xbc);
  func_0x000107c31940(&uStack_f0,&UNK_10f56f74d);
  puVar3 = &uStack_f0;
  FUN_1094a9268(auStack_148 + 6,puVar3,puVar2 + 0xc0);
  FUN_109380f8c(auStack_148 + 6);
  FUN_109380f8c(auStack_100);
  FUN_109380f8c(auStack_d0);
  FUN_109380f8c(auStack_c0);
  auVar12._8_8_ = puVar3;
  auVar12._0_8_ = 1;
  return auVar12;
}



/* Entry: 1094d2b78; end: 1094d2b8b;  */

/* WARNING: Removing unreachable block (ram,0x0001094d3148) */
/* WARNING: Removing unreachable block (ram,0x0001094d30e8) */
/* WARNING: Removing unreachable block (ram,0x0001094d2e24) */
/* WARNING: Removing unreachable block (ram,0x0001094d2cbc) */
/* WARNING: Removing unreachable block (ram,0x0001094d2c8c) */
/* WARNING: Removing unreachable block (ram,0x0001094d2dec) */
/* WARNING: Removing unreachable block (ram,0x0001094d30b8) */
/* WARNING: Removing unreachable block (ram,0x0001094d3118) */
/* WARNING: Removing unreachable block (ram,0x0001094d3178) */

undefined1  [16] FUN_1094d2b78(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  ulong auStack_118 [8];
  char cStack_d1;
  undefined1 auStack_d0 [16];
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined1 uStack_75;
  undefined4 uStack_74;
  long lStack_70;
  ulong *puStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000104c4f740();
  uStack_75 = 0;
  uStack_74 = 0;
  if (param_3 < 2) {
    puVar4 = (undefined8 *)&UNK_10f5676e2;
  }
  else {
    if (param_3 != 2) {
      lStack_70 = 0xc;
      uStack_80 = 0x6769685f736f69;
      uStack_79 = 0x6e655f68;
      uStack_75 = 100;
      goto LAB_1094d2c50;
    }
    puVar4 = (undefined8 *)&UNK_10f5676ee;
  }
  lStack_70 = 0xb;
  uStack_80 = (undefined7)*puVar4;
  uStack_79 = *(undefined4 *)((long)puVar4 + 7);
LAB_1094d2c50:
  lStack_70 = lStack_70 << 0x38;
  FUN_1094a68cc(auStack_90,*param_2,&uStack_80);
  uVar5 = *param_2;
  func_0x000107c31940(&uStack_c0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_a0,uVar5,&uStack_c0);
  func_0x000107c31940(&uStack_c0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_d0,auStack_90,&uStack_c0);
  func_0x000107c31940(auStack_118 + 6,&DAT_10f56f6ff);
  auStack_118[3] = 0;
  auStack_118[4] = 0;
  auStack_118[5] = 0;
  FUN_1094d1f9c(&uStack_c0,auStack_d0,auStack_118 + 6,auStack_a0,auStack_118 + 3);
  if ((char)puVar1[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 8));
  }
  *(undefined8 *)(puVar1 + 0x10) = uStack_b8;
  *(ulong *)(puVar1 + 8) = uStack_c0;
  *(ulong *)(puVar1 + 0x18) = uStack_b0;
  uStack_b0 = uStack_b0 & 0xffffffffffffff;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  if ((long)auStack_118[5] < 0) {
    __ZdlPv(auStack_118[3]);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_118[6]);
  }
  func_0x000107c31940(auStack_118 + 6,&DAT_10f30a732);
  auStack_118[0] = 0;
  auStack_118[1] = 0;
  auStack_118[2] = 0;
  FUN_1094a75e8(&uStack_c0,auStack_d0,auStack_118 + 6,auStack_a0,auStack_118);
  func_0x000107c3193c(puVar1 + 0xa0);
  *(undefined8 *)(puVar1 + 0xa8) = uStack_b8;
  *(ulong *)(puVar1 + 0xa0) = uStack_c0;
  *(ulong *)(puVar1 + 0xb0) = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  puStack_68 = &uStack_c0;
  func_0x000104c607c8(&puStack_68);
  puStack_68 = auStack_118;
  func_0x000104c607c8(&puStack_68);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_118[6]);
  }
  func_0x000107c31940(&uStack_c0,&UNK_10f56f82f);
  uVar6 = *(undefined4 *)(puVar1 + 0x9c);
  FUN_1094d3328(auStack_d0,&uStack_c0,auStack_a0);
  *(undefined4 *)(puVar1 + 0x9c) = uVar6;
  func_0x000107c31940(&uStack_c0,&UNK_10f56f848);
  uVar6 = *(undefined4 *)(puVar1 + 0x98);
  FUN_1094d3328(auStack_d0,&uStack_c0,auStack_a0);
  *(undefined4 *)(puVar1 + 0x98) = uVar6;
  func_0x000107c31940(auStack_118 + 6,&UNK_10f56f862);
  if ((char)puVar1[0x4f] < '\0') {
    func_0x000107c3192c(&uStack_130,*(undefined8 *)(puVar1 + 0x38),*(undefined8 *)(puVar1 + 0x40));
  }
  else {
    uStack_128 = *(undefined8 *)(puVar1 + 0x40);
    uStack_130 = *(undefined8 *)(puVar1 + 0x38);
    lStack_120 = *(long *)(puVar1 + 0x48);
  }
  FUN_1094d1f9c(&uStack_c0,auStack_d0,auStack_118 + 6,auStack_a0,&uStack_130);
  if ((char)puVar1[0x4f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x38));
  }
  *(undefined8 *)(puVar1 + 0x40) = uStack_b8;
  *(ulong *)(puVar1 + 0x38) = uStack_c0;
  *(ulong *)(puVar1 + 0x48) = uStack_b0;
  uStack_b0 = uStack_b0 & 0xffffffffffffff;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_118[6]);
  }
  func_0x000107c31940(auStack_118 + 6,&UNK_10f56f86e);
  if ((char)puVar1[0x67] < '\0') {
    func_0x000107c3192c(&uStack_150,*(undefined8 *)(puVar1 + 0x50),*(undefined8 *)(puVar1 + 0x58));
  }
  else {
    uStack_148 = *(undefined8 *)(puVar1 + 0x58);
    uStack_150 = *(undefined8 *)(puVar1 + 0x50);
    lStack_140 = *(long *)(puVar1 + 0x60);
  }
  FUN_1094d1f9c(&uStack_c0,auStack_d0,auStack_118 + 6,auStack_a0,&uStack_150);
  if ((char)puVar1[0x67] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x50));
  }
  *(undefined8 *)(puVar1 + 0x58) = uStack_b8;
  *(ulong *)(puVar1 + 0x50) = uStack_c0;
  *(ulong *)(puVar1 + 0x60) = uStack_b0;
  uStack_b0 = uStack_b0 & 0xffffffffffffff;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_118[6]);
  }
  func_0x000107c31940(auStack_118 + 6,&UNK_10f56f884);
  if ((char)puVar1[0x7f] < '\0') {
    func_0x000107c3192c(&uStack_170,*(undefined8 *)(puVar1 + 0x68),*(undefined8 *)(puVar1 + 0x70));
  }
  else {
    uStack_168 = *(undefined8 *)(puVar1 + 0x70);
    uStack_170 = *(undefined8 *)(puVar1 + 0x68);
    lStack_160 = *(long *)(puVar1 + 0x78);
  }
  FUN_1094d1f9c(&uStack_c0,auStack_d0,auStack_118 + 6,auStack_a0,&uStack_170);
  if ((char)puVar1[0x7f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x68));
  }
  *(undefined8 *)(puVar1 + 0x70) = uStack_b8;
  *(ulong *)(puVar1 + 0x68) = uStack_c0;
  *(ulong *)(puVar1 + 0x78) = uStack_b0;
  uStack_b0 = uStack_b0 & 0xffffffffffffff;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_118[6]);
  }
  func_0x000107c31940(auStack_118 + 6,&UNK_10f56f89c);
  if ((char)puVar1[0x97] < '\0') {
    func_0x000107c3192c(&uStack_190,*(undefined8 *)(puVar1 + 0x80),*(undefined8 *)(puVar1 + 0x88));
  }
  else {
    uStack_188 = *(undefined8 *)(puVar1 + 0x88);
    uStack_190 = *(undefined8 *)(puVar1 + 0x80);
    lStack_180 = *(long *)(puVar1 + 0x90);
  }
  FUN_1094d1f9c(&uStack_c0,auStack_d0,auStack_118 + 6,auStack_a0,&uStack_190);
  if ((char)puVar1[0x97] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x80));
  }
  *(undefined8 *)(puVar1 + 0x88) = uStack_b8;
  *(ulong *)(puVar1 + 0x80) = uStack_c0;
  *(ulong *)(puVar1 + 0x90) = uStack_b0;
  uStack_b0 = uStack_b0 & 0xffffffffffffff;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  if (lStack_180 < 0) {
    __ZdlPv(uStack_190);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_118[6]);
  }
  func_0x000107c31940(&uStack_c0,&UNK_10f56f735);
  FUN_1094a70a8(auStack_118 + 6,auStack_d0,&uStack_c0,auStack_a0);
  func_0x000107c31940(&uStack_c0,&UNK_10f56f739);
  func_0x0001094a6db0(auStack_118 + 6,&uStack_c0,puVar1 + 0xb8);
  func_0x000107c31940(&uStack_c0,&DAT_10f2e8c7d);
  func_0x0001094a6db0(auStack_118 + 6,&uStack_c0,puVar1 + 0xbc);
  func_0x000107c31940(&uStack_c0,&UNK_10f56f74d);
  puVar3 = &uStack_c0;
  FUN_1094a9268(auStack_118 + 6,puVar3,puVar1 + 0xc0);
  FUN_109380f8c(auStack_118 + 6);
  FUN_109380f8c(auStack_d0);
  FUN_109380f8c(auStack_a0);
  FUN_109380f8c(auStack_90);
  auVar8._8_8_ = puVar3;
  auVar8._0_8_ = 1;
  return auVar8;
}



/* Entry: 1094d2b8c; end: 1094d2bbf;  */

/* WARNING: Removing unreachable block (ram,0x0001094d3148) */
/* WARNING: Removing unreachable block (ram,0x0001094d30e8) */
/* WARNING: Removing unreachable block (ram,0x0001094d2e24) */
/* WARNING: Removing unreachable block (ram,0x0001094d2cbc) */
/* WARNING: Removing unreachable block (ram,0x0001094d2c8c) */
/* WARNING: Removing unreachable block (ram,0x0001094d2dec) */
/* WARNING: Removing unreachable block (ram,0x0001094d30b8) */
/* WARNING: Removing unreachable block (ram,0x0001094d3118) */
/* WARNING: Removing unreachable block (ram,0x0001094d3178) */

undefined1  [16] FUN_1094d2b8c(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined1 auStack_c0 [16];
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined7 uStack_70;
  undefined4 uStack_69;
  undefined1 uStack_65;
  undefined4 uStack_64;
  long lStack_60;
  ulong *puStack_58;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000104c4f740();
  uStack_65 = 0;
  uStack_64 = 0;
  if (param_3 < 2) {
    puVar3 = (undefined8 *)&UNK_10f5676e2;
  }
  else {
    if (param_3 != 2) {
      lStack_60 = 0xc;
      uStack_70 = 0x6769685f736f69;
      uStack_69 = 0x6e655f68;
      uStack_65 = 100;
      goto LAB_1094d2c50;
    }
    puVar3 = (undefined8 *)&UNK_10f5676ee;
  }
  lStack_60 = 0xb;
  uStack_70 = (undefined7)*puVar3;
  uStack_69 = *(undefined4 *)((long)puVar3 + 7);
LAB_1094d2c50:
  lStack_60 = lStack_60 << 0x38;
  FUN_1094a68cc(auStack_80,*param_2,&uStack_70);
  uVar4 = *param_2;
  func_0x000107c31940(&uStack_b0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_90,uVar4,&uStack_b0);
  func_0x000107c31940(&uStack_b0,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_c0,auStack_80,&uStack_b0);
  func_0x000107c31940(auStack_d8,&DAT_10f56f6ff);
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  FUN_1094d1f9c(&uStack_b0,auStack_c0,auStack_d8,auStack_90,&uStack_f0);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x10) = uStack_a8;
  *(ulong *)(param_1 + 8) = uStack_b0;
  *(ulong *)(param_1 + 0x18) = uStack_a0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  func_0x000107c31940(auStack_d8,&DAT_10f30a732);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  FUN_1094a75e8(&uStack_b0,auStack_c0,auStack_d8,auStack_90,&uStack_108);
  func_0x000107c3193c(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uStack_a8;
  *(ulong *)(param_1 + 0xa0) = uStack_b0;
  *(ulong *)(param_1 + 0xb0) = uStack_a0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  puStack_58 = &uStack_b0;
  func_0x000104c607c8(&puStack_58);
  puStack_58 = &uStack_108;
  func_0x000104c607c8(&puStack_58);
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  func_0x000107c31940(&uStack_b0,&UNK_10f56f82f);
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  FUN_1094d3328(auStack_c0,&uStack_b0,auStack_90);
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  func_0x000107c31940(&uStack_b0,&UNK_10f56f848);
  uVar5 = *(undefined4 *)(param_1 + 0x98);
  FUN_1094d3328(auStack_c0,&uStack_b0,auStack_90);
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  func_0x000107c31940(auStack_d8,&UNK_10f56f862);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    func_0x000107c3192c(&uStack_120,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40))
    ;
  }
  else {
    uStack_118 = *(undefined8 *)(param_1 + 0x40);
    uStack_120 = *(undefined8 *)(param_1 + 0x38);
    lStack_110 = *(long *)(param_1 + 0x48);
  }
  FUN_1094d1f9c(&uStack_b0,auStack_c0,auStack_d8,auStack_90,&uStack_120);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x40) = uStack_a8;
  *(ulong *)(param_1 + 0x38) = uStack_b0;
  *(ulong *)(param_1 + 0x48) = uStack_a0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  func_0x000107c31940(auStack_d8,&UNK_10f56f86e);
  if (*(char *)(param_1 + 0x67) < '\0') {
    func_0x000107c3192c(&uStack_140,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58))
    ;
  }
  else {
    uStack_138 = *(undefined8 *)(param_1 + 0x58);
    uStack_140 = *(undefined8 *)(param_1 + 0x50);
    lStack_130 = *(long *)(param_1 + 0x60);
  }
  FUN_1094d1f9c(&uStack_b0,auStack_c0,auStack_d8,auStack_90,&uStack_140);
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  *(undefined8 *)(param_1 + 0x58) = uStack_a8;
  *(ulong *)(param_1 + 0x50) = uStack_b0;
  *(ulong *)(param_1 + 0x60) = uStack_a0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  func_0x000107c31940(auStack_d8,&UNK_10f56f884);
  if (*(char *)(param_1 + 0x7f) < '\0') {
    func_0x000107c3192c(&uStack_160,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70))
    ;
  }
  else {
    uStack_158 = *(undefined8 *)(param_1 + 0x70);
    uStack_160 = *(undefined8 *)(param_1 + 0x68);
    lStack_150 = *(long *)(param_1 + 0x78);
  }
  FUN_1094d1f9c(&uStack_b0,auStack_c0,auStack_d8,auStack_90,&uStack_160);
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x70) = uStack_a8;
  *(ulong *)(param_1 + 0x68) = uStack_b0;
  *(ulong *)(param_1 + 0x78) = uStack_a0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  func_0x000107c31940(auStack_d8,&UNK_10f56f89c);
  if (*(char *)(param_1 + 0x97) < '\0') {
    func_0x000107c3192c(&uStack_180,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88))
    ;
  }
  else {
    uStack_178 = *(undefined8 *)(param_1 + 0x88);
    uStack_180 = *(undefined8 *)(param_1 + 0x80);
    lStack_170 = *(long *)(param_1 + 0x90);
  }
  FUN_1094d1f9c(&uStack_b0,auStack_c0,auStack_d8,auStack_90,&uStack_180);
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  *(undefined8 *)(param_1 + 0x88) = uStack_a8;
  *(ulong *)(param_1 + 0x80) = uStack_b0;
  *(ulong *)(param_1 + 0x90) = uStack_a0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  func_0x000107c31940(&uStack_b0,&UNK_10f56f735);
  FUN_1094a70a8(auStack_d8,auStack_c0,&uStack_b0,auStack_90);
  func_0x000107c31940(&uStack_b0,&UNK_10f56f739);
  func_0x0001094a6db0(auStack_d8,&uStack_b0,param_1 + 0xb8);
  func_0x000107c31940(&uStack_b0,&DAT_10f2e8c7d);
  func_0x0001094a6db0(auStack_d8,&uStack_b0,param_1 + 0xbc);
  func_0x000107c31940(&uStack_b0,&UNK_10f56f74d);
  puVar2 = &uStack_b0;
  FUN_1094a9268(auStack_d8,puVar2,param_1 + 0xc0);
  FUN_109380f8c(auStack_d8);
  FUN_109380f8c(auStack_c0);
  FUN_109380f8c(auStack_90);
  FUN_109380f8c(auStack_80);
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = 1;
  return auVar7;
}



/* Entry: 1094d2bc0; end: 1094d3327;  */

/* WARNING: Removing unreachable block (ram,0x0001094d3148) */
/* WARNING: Removing unreachable block (ram,0x0001094d30e8) */
/* WARNING: Removing unreachable block (ram,0x0001094d2e24) */
/* WARNING: Removing unreachable block (ram,0x0001094d2cbc) */
/* WARNING: Removing unreachable block (ram,0x0001094d2c8c) */
/* WARNING: Removing unreachable block (ram,0x0001094d2dec) */
/* WARNING: Removing unreachable block (ram,0x0001094d30b8) */
/* WARNING: Removing unreachable block (ram,0x0001094d3118) */
/* WARNING: Removing unreachable block (ram,0x0001094d3178) */

undefined8 FUN_1094d2bc0(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined1 auStack_a0 [16];
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined1 uStack_45;
  undefined4 uStack_44;
  long lStack_40;
  ulong *puStack_38;
  
  uStack_45 = 0;
  uStack_44 = 0;
  if (param_3 < 2) {
    puVar1 = (undefined8 *)&UNK_10f5676e2;
  }
  else {
    if (param_3 != 2) {
      lStack_40 = 0xc;
      uStack_50 = 0x6769685f736f69;
      uStack_49 = 0x6e655f68;
      uStack_45 = 100;
      goto LAB_1094d2c50;
    }
    puVar1 = (undefined8 *)&UNK_10f5676ee;
  }
  lStack_40 = 0xb;
  uStack_50 = (undefined7)*puVar1;
  uStack_49 = *(undefined4 *)((long)puVar1 + 7);
LAB_1094d2c50:
  lStack_40 = lStack_40 << 0x38;
  FUN_1094a68cc(auStack_60,*param_2,&uStack_50);
  uVar2 = *param_2;
  func_0x000107c31940(&uStack_90,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_70,uVar2,&uStack_90);
  func_0x000107c31940(&uStack_90,&DAT_10f3b660d);
  FUN_1094a68cc(auStack_a0,auStack_60,&uStack_90);
  func_0x000107c31940(auStack_b8,&DAT_10f56f6ff);
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  FUN_1094d1f9c(&uStack_90,auStack_a0,auStack_b8,auStack_70,&uStack_d0);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x10) = uStack_88;
  *(ulong *)(param_1 + 8) = uStack_90;
  *(ulong *)(param_1 + 0x18) = uStack_80;
  uStack_80 = uStack_80 & 0xffffffffffffff;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x000107c31940(auStack_b8,&DAT_10f30a732);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_1094a75e8(&uStack_90,auStack_a0,auStack_b8,auStack_70,&uStack_e8);
  func_0x000107c3193c(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uStack_88;
  *(ulong *)(param_1 + 0xa0) = uStack_90;
  *(ulong *)(param_1 + 0xb0) = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_38 = &uStack_90;
  func_0x000104c607c8(&puStack_38);
  puStack_38 = &uStack_e8;
  func_0x000104c607c8(&puStack_38);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x000107c31940(&uStack_90,&UNK_10f56f82f);
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  FUN_1094d3328(auStack_a0,&uStack_90,auStack_70);
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  func_0x000107c31940(&uStack_90,&UNK_10f56f848);
  uVar3 = *(undefined4 *)(param_1 + 0x98);
  FUN_1094d3328(auStack_a0,&uStack_90,auStack_70);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  func_0x000107c31940(auStack_b8,&UNK_10f56f862);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    func_0x000107c3192c(&uStack_100,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40))
    ;
  }
  else {
    uStack_f8 = *(undefined8 *)(param_1 + 0x40);
    uStack_100 = *(undefined8 *)(param_1 + 0x38);
    lStack_f0 = *(long *)(param_1 + 0x48);
  }
  FUN_1094d1f9c(&uStack_90,auStack_a0,auStack_b8,auStack_70,&uStack_100);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x40) = uStack_88;
  *(ulong *)(param_1 + 0x38) = uStack_90;
  *(ulong *)(param_1 + 0x48) = uStack_80;
  uStack_80 = uStack_80 & 0xffffffffffffff;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x000107c31940(auStack_b8,&UNK_10f56f86e);
  if (*(char *)(param_1 + 0x67) < '\0') {
    func_0x000107c3192c(&uStack_120,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58))
    ;
  }
  else {
    uStack_118 = *(undefined8 *)(param_1 + 0x58);
    uStack_120 = *(undefined8 *)(param_1 + 0x50);
    lStack_110 = *(long *)(param_1 + 0x60);
  }
  FUN_1094d1f9c(&uStack_90,auStack_a0,auStack_b8,auStack_70,&uStack_120);
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  *(undefined8 *)(param_1 + 0x58) = uStack_88;
  *(ulong *)(param_1 + 0x50) = uStack_90;
  *(ulong *)(param_1 + 0x60) = uStack_80;
  uStack_80 = uStack_80 & 0xffffffffffffff;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x000107c31940(auStack_b8,&UNK_10f56f884);
  if (*(char *)(param_1 + 0x7f) < '\0') {
    func_0x000107c3192c(&uStack_140,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70))
    ;
  }
  else {
    uStack_138 = *(undefined8 *)(param_1 + 0x70);
    uStack_140 = *(undefined8 *)(param_1 + 0x68);
    lStack_130 = *(long *)(param_1 + 0x78);
  }
  FUN_1094d1f9c(&uStack_90,auStack_a0,auStack_b8,auStack_70,&uStack_140);
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x70) = uStack_88;
  *(ulong *)(param_1 + 0x68) = uStack_90;
  *(ulong *)(param_1 + 0x78) = uStack_80;
  uStack_80 = uStack_80 & 0xffffffffffffff;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x000107c31940(auStack_b8,&UNK_10f56f89c);
  if (*(char *)(param_1 + 0x97) < '\0') {
    func_0x000107c3192c(&uStack_160,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88))
    ;
  }
  else {
    uStack_158 = *(undefined8 *)(param_1 + 0x88);
    uStack_160 = *(undefined8 *)(param_1 + 0x80);
    lStack_150 = *(long *)(param_1 + 0x90);
  }
  FUN_1094d1f9c(&uStack_90,auStack_a0,auStack_b8,auStack_70,&uStack_160);
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  *(undefined8 *)(param_1 + 0x88) = uStack_88;
  *(ulong *)(param_1 + 0x80) = uStack_90;
  *(ulong *)(param_1 + 0x90) = uStack_80;
  uStack_80 = uStack_80 & 0xffffffffffffff;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x000107c31940(&uStack_90,&UNK_10f56f735);
  FUN_1094a70a8(auStack_b8,auStack_a0,&uStack_90,auStack_70);
  func_0x000107c31940(&uStack_90,&UNK_10f56f739);
  func_0x0001094a6db0(auStack_b8,&uStack_90,param_1 + 0xb8);
  func_0x000107c31940(&uStack_90,&DAT_10f2e8c7d);
  func_0x0001094a6db0(auStack_b8,&uStack_90,param_1 + 0xbc);
  func_0x000107c31940(&uStack_90,&UNK_10f56f74d);
  FUN_1094a9268(auStack_b8,&uStack_90,param_1 + 0xc0);
  FUN_109380f8c(auStack_b8);
  FUN_109380f8c(auStack_a0);
  FUN_109380f8c(auStack_70);
  FUN_109380f8c(auStack_60);
  return 1;
}



/* Entry: 1094d3328; end: 1094d3447;  */

void FUN_1094d3328(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcStack_80 = (char *)*param_2;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  cVar1 = *pcStack_80;
  pcStack_60 = pcStack_80;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_80 + 8);
    FUN_1093793a4(uVar2,param_3);
    pcStack_80 = (char *)*param_2;
    cVar1 = *pcStack_80;
    uStack_58 = uVar2;
LAB_1094d33b4:
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_78 = *(long *)(pcStack_80 + 8) + 8;
      goto LAB_1094d33f8;
    }
    if (cVar1 != '\x02') {
      uStack_68 = 1;
      goto LAB_1094d33f8;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094d33b4;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
    uStack_50 = uStack_70;
  }
  uStack_68 = 0x8000000000000000;
  lStack_78 = 0;
LAB_1094d33f8:
  ppcVar3 = &pcStack_60;
  FUN_109379420(ppcVar3,&pcStack_80);
  if ((int)ppcVar3 == 0) {
    FUN_10937b950(&pcStack_60);
    FUN_10938d050();
  }
  else {
    FUN_1094a73d0(param_1,param_4,param_3);
  }
  return;
}



/* Entry: 1094d3448; end: 1094d344b;  */

long FUN_1094d3448(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xa0;
  func_0x000104c607c8(&lStack_28);
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1094d344c; end: 1094d345f;  */

void FUN_1094d344c(void)

{
  FUN_1094d3460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094d3460; end: 1094d34f7;  */

long FUN_1094d3460(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xa0;
  func_0x000104c607c8(&lStack_28);
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1094d34f8; end: 1094d3583;  */

undefined8 FUN_1094d34f8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113829e70 & 1) == 0) {
    iVar1 = 0x13829e70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x28;
      __Znwm();
      FUN_1094d3584();
      uRam0000000113829e68 = uVar2;
      ___cxa_guard_release(0x113829e70);
    }
  }
  return uRam0000000113829e68;
}



/* Entry: 1094d3584; end: 1094d383b;  */

undefined8 * FUN_1094d3584(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined ***apppuStack_60 [2];
  char cStack_49;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107c31940(apppuStack_60,&UNK_10f56f8b0);
  puVar2 = param_1;
  FUN_1094d3b30(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110af77c8;
  pcStack_40 = FUN_1094d383c;
  pppuStack_30 = &ppuStack_48;
  FUN_1094d4078(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094d3620:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094d3620;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f56f8bc);
  puVar2 = param_1;
  FUN_1094d3b30(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110af78c8;
  pcStack_40 = (code *)0x1094d3898;
  pppuStack_30 = &ppuStack_48;
  FUN_1094d4078(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094d36a4:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094d36a4;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f56f8cf);
  puVar2 = param_1;
  FUN_1094d3b30(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110af79b8;
  pcStack_40 = (code *)0x1094d3910;
  pppuStack_30 = &ppuStack_48;
  FUN_1094d4078(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1094d3728:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1094d3728;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f56f8e2);
  puVar2 = param_1;
  FUN_1094d3b30(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110af7aa8;
  pcStack_40 = (code *)0x1094d3990;
  pppuStack_30 = &ppuStack_48;
  FUN_1094d4078(&ppuStack_48,puVar2 + 5);
  pppuVar1 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1094d37b8;
    lVar3 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar3))();
LAB_1094d37b8:
  if (cStack_49 < '\0') {
    pppuVar1 = apppuStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  FUN_1094d3a74(param_1);
  __Unwind_Resume(pppuVar1);
  puVar2 = (undefined8 *)0x88;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110af7778;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0;
  extraout_x8[1] = puVar2;
  puVar2 = puVar2 + 3;
  *puVar2 = &PTR_FUN_110af7d58;
  *extraout_x8 = puVar2;
  return puVar2;
}



/* Entry: 1094d383c; end: 1094d3a73;  */

void FUN_1094d383c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110af7778;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110af7d58;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 1094d3a74; end: 1094d3acf;  */

long * FUN_1094d3a74(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094d3ad0(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094d3ad0; end: 1094d3b2f;  */

void FUN_1094d3ad0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1094d3b0c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1094d3b0c:
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094d3b30; end: 1094d3f1b;  */

long * FUN_1094d3b30(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar7 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar7) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x48;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar7;
  lVar3 = *param_3;
  plVar5[3] = param_3[1];
  plVar5[2] = lVar3;
  plVar5[4] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar5[8] = 0;
  if ((plVar13 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar13 < (float)(param_1[3] + 1))) {
    uVar14 = 1;
    if ((long *)0x2 < plVar13) {
      uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
    plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar6 <= plVar13) {
      plVar6 = plVar13;
    }
    if ((long)plVar6 - 1U == 0) {
      plVar6 = (long *)0x2;
    }
    else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar13 = (long *)param_1[1];
    if (plVar13 < plVar6) {
LAB_1094d3cb8:
      if ((ulong)plVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1094d3f08);
        (*pcVar2)();
      }
      lVar3 = (long)plVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar13 = (long *)0x0;
      param_1[1] = (long)plVar6;
      do {
        *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
        plVar13 = (long *)((long)plVar13 + 1);
      } while (plVar6 != plVar13);
      plVar8 = (long *)param_1[2];
      plVar13 = plVar6;
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)plVar8[1];
        uVar14 = (long)plVar6 - 1;
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar14);
        }
        else if (plVar6 <= plVar9) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar6;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
        }
        *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar8;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)plVar6 & uVar14) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar14);
          }
          else if (plVar6 <= plVar12) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar12 / (ulong)plVar6;
            }
            plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar12 * 8) = plVar8;
              plVar9 = plVar12;
            }
            else {
              *plVar8 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
              **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar8;
            }
          }
          plVar8 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (plVar6 < plVar13) {
      plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar8) {
        plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
      }
      if (plVar6 <= plVar8) {
        plVar6 = plVar8;
      }
      if (plVar6 < plVar13) {
        if (plVar6 != (long *)0x0) goto LAB_1094d3cb8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
    }
  }
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar5 == 0) goto LAB_1094d3e98;
    plVar7 = *(long **)(*plVar5 + 8);
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
    }
    else if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
    plVar7 = (long *)(*param_1 + (long)plVar7 * 8);
  }
  else {
    *plVar5 = *plVar7;
  }
  *plVar7 = (long)plVar5;
LAB_1094d3e98:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094d3f1c; end: 1094d3f63;  */

void FUN_1094d3f1c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094d3ad0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094d3f64; end: 1094d3f73;  */

void FUN_1094d3f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094d3f74; end: 1094d3f93;  */

void FUN_1094d3f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7778;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094d3f94; end: 1094d3fa7;  */

long FUN_1094d3f94(long param_1)

{
  long lStack_28;
  
  FUN_1094dc2d8(param_1 + 0x78);
  lStack_28 = param_1 + 0x60;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x48;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x30;
  FUN_1094d8bdc(&lStack_28);
  FUN_10938cda4(param_1 + 0x28,0);
  return param_1 + 0x18;
}



/* Entry: 1094d3fa8; end: 1094d3fdb;  */

void FUN_1094d3fa8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110af77c8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1094d3fdc; end: 1094d3ff7;  */

void FUN_1094d3fdc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110af77c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1094d3ff8; end: 1094d406b;  */

void FUN_1094d3ff8(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 1094d406c; end: 1094d4077;  */

undefined ** FUN_1094d406c(void)

{
  return &PTR_DAT_110af7848;
}



/* Entry: 1094d4078; end: 1094d41e3;  */

void FUN_1094d4078(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = (long)&PTR_FUN_110af7878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094d41e4; end: 1094d41f3;  */

void FUN_1094d41e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


