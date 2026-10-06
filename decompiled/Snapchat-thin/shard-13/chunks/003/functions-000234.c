/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a46e150; end: 10a46e2d7;  */

uint FUN_10a46e150(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  uint extraout_w15;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbf48,0);
  uVar10 = extraout_w15;
  if (param_2 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x58);
    if (uVar7 == *(ulong *)(param_2 + 0x58)) {
      if (uVar7 < 0x40 && (uVar7 & 0x3f) == 0) {
        uVar10 = 1;
      }
      else {
        uVar4 = 0;
        uVar5 = 0;
        puVar6 = *(ulong **)(param_1 + 0x50);
        puVar1 = puVar6 + (uVar7 >> 6);
        puVar8 = *(ulong **)(param_2 + 0x50);
        do {
          uVar9 = (uint)(*puVar6 >> (uVar4 & 0x3f));
          uVar11 = (uint)((*puVar8 >> (uVar5 & 0x3f) & 1) == 0);
          uVar10 = uVar9 ^ uVar11;
          if ((uVar9 & 1) == uVar11) break;
          iVar3 = (int)uVar4;
          lVar2 = 8;
          if (iVar3 != 0x3f) {
            lVar2 = 0;
          }
          puVar6 = (ulong *)((long)puVar6 + lVar2);
          uVar9 = 0;
          if (iVar3 != 0x3f) {
            uVar9 = iVar3 + 1;
          }
          uVar4 = (ulong)uVar9;
          iVar3 = (int)uVar5;
          lVar2 = 8;
          if (iVar3 != 0x3f) {
            lVar2 = 0;
          }
          puVar8 = (ulong *)((long)puVar8 + lVar2);
          uVar11 = 0;
          if (iVar3 != 0x3f) {
            uVar11 = iVar3 + 1;
          }
          uVar5 = (ulong)uVar11;
        } while ((uVar9 != ((uint)uVar7 & 0x3f)) || (puVar6 != puVar1));
      }
    }
    else {
      uVar10 = 0;
    }
  }
  return param_2 != 0 & uVar10;
}



/* Entry: 10a46e2d8; end: 10a46e2ef;  */

bool FUN_10a46e2d8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6f422e65756c6156 && param_2[1] == 0x5679617272416c6f) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46e2f0; end: 10a46e41f;  */

undefined8 * FUN_10a46e2f0(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_110bdc910;
  *param_1 = &PTR_FUN_110bdc968;
  param_1[-7] = &PTR_DAT_110bdc888;
  if (param_1[3] != 0) {
    __ZdlPv();
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a46e420; end: 10a46e483;  */

undefined1  [16] FUN_10a46e420(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b892e;
  return auVar1;
}



/* Entry: 10a46e484; end: 10a46e5ef;  */

void FUN_10a46e484(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    plVar7 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = (long *)param_2[9];
    plStack_50 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_50);
    plVar7 = (long *)((ulong)&plStack_50 | 8);
    pplVar3 = &plStack_50;
    if (param_4 != 0) {
      plVar7 = (long *)(param_4 + 0x28);
      pplVar3 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar7;
    plVar7 = *pplVar3;
  }
  plVar4 = (long *)0x80;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bde038;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_DAT_110bdafe8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xc] = param_3;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[5] = (long)&PTR_DAT_110bdb070;
  plVar4[10] = (long)&PTR_FUN_110bdb0c8;
  plVar4[0xb] = (long)plVar7;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar7 = plVar4 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4[8] = (long)plStack_50;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_48 = plVar4;
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  plVar7 = plStack_50;
  if (plStack_50 != param_2) {
    FUN_10a14dca0(plStack_50 + 10,param_2[10],param_2[0xb],param_2[0xb] - param_2[10] >> 3);
  }
  *param_1 = plVar7;
  param_1[1] = plStack_48;
  return;
}



/* Entry: 10a46e5f0; end: 10a46e68b;  */

void FUN_10a46e5f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a07b090(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46e68c; end: 10a46e6eb;  */

void FUN_10a46e68c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a369818(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a46e6ec; end: 10a46e833;  */

uint FUN_10a46e6ec(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar4;
  uint extraout_w11;
  uint uVar5;
  float *pfVar3;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbf78,0);
  uVar5 = extraout_w11;
  if (param_2 != 0) {
    pfVar2 = *(float **)(param_1 + 0x50);
    pfVar1 = *(float **)(param_1 + 0x58);
    if ((long)pfVar1 - (long)pfVar2 == *(long *)(param_2 + 0x58) - (long)*(float **)(param_2 + 0x50)
       ) {
      pfVar4 = *(float **)(param_2 + 0x50);
      if (pfVar2 == pfVar1) {
        uVar5 = 1;
      }
      else {
        do {
          pfVar3 = pfVar2 + 2;
          uVar5 = 0;
          if (pfVar2[1] == pfVar4[1]) {
            uVar5 = (uint)(*pfVar2 == *pfVar4);
          }
          pfVar2 = pfVar3;
          pfVar4 = pfVar4 + 2;
        } while (uVar5 == 1 && pfVar3 != pfVar1);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return param_2 != 0 & uVar5;
}



/* Entry: 10a46e834; end: 10a46e84b;  */

bool FUN_10a46e834(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x65562e65756c6156 && param_2[1] == 0x5679617272413263) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46e84c; end: 10a46e98b;  */

undefined8 * FUN_10a46e84c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdc988;
  param_1[-5] = &PTR_FUN_110bdca10;
  *param_1 = &PTR_FUN_110bdca68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a46e98c; end: 10a46e9ef;  */

undefined1  [16] FUN_10a46e98c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89a5;
  return auVar1;
}



/* Entry: 10a46e9f0; end: 10a46ec53;  */

void FUN_10a46e9f0(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar13 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_60);
    plVar13 = (long *)((ulong)&plStack_60 | 8);
    pplVar6 = &plStack_60;
    if (param_4 != 0) {
      plVar13 = (long *)(param_4 + 0x28);
      pplVar6 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar13;
    plVar13 = *pplVar6;
  }
  plVar8 = (long *)0x80;
  __Znwm();
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110bde088;
  plStack_60 = plVar8 + 3;
  *plStack_60 = (long)&PTR_DAT_110bdb208;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[0xc] = param_3;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[5] = (long)&PTR_DAT_110bdb290;
  plVar8[10] = (long)&PTR_FUN_110bdb2e8;
  plVar8[0xb] = (long)plVar13;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = *plVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar13 = plVar8 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar8[8] = (long)plStack_60;
  plVar8[9] = (long)plVar8;
  do {
    lVar11 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_58 = plVar8;
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar13 = plStack_60;
  if (plStack_60 != param_2) {
    plVar8 = plStack_60 + 10;
    lVar15 = *plVar8;
    lVar11 = param_2[10];
    lVar3 = param_2[0xb];
    uVar12 = lVar3 - lVar11;
    uVar10 = plStack_60[0xc];
    if (uVar10 - lVar15 < uVar12) {
      uVar16 = (long)uVar12 >> 4;
      if (lVar15 != 0) {
        plStack_60[0xb] = lVar15;
        __ZdlPv(lVar15);
        uVar10 = 0;
        *plVar8 = 0;
        plVar13[0xb] = 0;
        plVar13[0xc] = 0;
      }
      if (uVar16 >> 0x3c != 0) {
        FUN_10a1320a4();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a46ec40);
        (*pcVar7)();
      }
      uVar2 = (long)uVar10 >> 3;
      if ((ulong)((long)uVar10 >> 3) <= uVar16) {
        uVar2 = uVar16;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar2 = 0xfffffffffffffff;
      }
      FUN_10a494f08(plVar8,uVar2);
      lVar14 = plVar13[0xb];
      if (lVar3 != lVar11) {
        _memmove(lVar14,lVar11,uVar12);
      }
      lVar14 = lVar14 + uVar12;
    }
    else {
      lVar14 = plStack_60[0xb];
      if ((ulong)(lVar14 - lVar15) < uVar12) {
        lVar1 = lVar11 + (lVar14 - lVar15);
        if (lVar14 != lVar15) {
          _memmove(lVar15,lVar11);
          lVar14 = plVar13[0xb];
        }
        lVar3 = lVar3 - lVar1;
        if (lVar3 != 0) {
          _memmove(lVar14,lVar1,lVar3);
        }
        lVar14 = lVar14 + lVar3;
      }
      else {
        if (lVar3 != lVar11) {
          _memmove(lVar15,lVar11,uVar12);
        }
        lVar14 = lVar15 + uVar12;
      }
    }
    plVar13[0xb] = lVar14;
  }
  *param_1 = plVar13;
  param_1[1] = plStack_58;
  return;
}



/* Entry: 10a46ec54; end: 10a46ecef;  */

void FUN_10a46ec54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a494f98(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 4);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46ecf0; end: 10a46ed9b;  */

void FUN_10a46ecf0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a494f98(aiStack_30,uVar1,*(long *)(param_2 + 0x50),
                *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 4);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46ed9c; end: 10a46ef07;  */

uint FUN_10a46ed9c(long param_1,long param_2)

{
  uint extraout_w8;
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbfa8,0);
  uVar1 = extraout_w8;
  if (param_2 != 0) {
    pfVar2 = *(float **)(param_1 + 0x50);
    pfVar3 = *(float **)(param_2 + 0x50);
    if ((long)*(float **)(param_1 + 0x58) - (long)pfVar2 == *(long *)(param_2 + 0x58) - (long)pfVar3
       ) {
      for (; pfVar2 != *(float **)(param_1 + 0x58); pfVar2 = pfVar2 + 4) {
        if ((((*pfVar2 != *pfVar3) || (pfVar2[1] != pfVar3[1])) || (pfVar2[2] != pfVar3[2])) ||
           (pfVar2[3] != pfVar3[3])) goto LAB_10a46ee3c;
        pfVar3 = pfVar3 + 4;
      }
      uVar1 = 1;
    }
    else {
LAB_10a46ee3c:
      uVar1 = 0;
    }
  }
  return param_2 != 0 & uVar1;
}



/* Entry: 10a46ef08; end: 10a46ef1f;  */

bool FUN_10a46ef08(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x75512e65756c6156 && param_2[1] == 0x5679617272417461) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46ef20; end: 10a46f0ef;  */

undefined8 * FUN_10a46ef20(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdca88;
  param_1[-5] = &PTR_FUN_110bdcb10;
  *param_1 = &PTR_FUN_110bdcb68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a46f0f0; end: 10a46f16b;  */

undefined1  [16] FUN_10a46f0f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10e4b8943;
  return auVar1;
}



/* Entry: 10a46f16c; end: 10a46f207;  */

void FUN_10a46f16c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a4950a8(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 4);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46f208; end: 10a46f2b3;  */

void FUN_10a46f208(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a4950a8(aiStack_30,uVar1,*(long *)(param_2 + 0x50),
                *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 4);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46f2b4; end: 10a46f437;  */

bool FUN_10a46f2b4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbfd8,0);
  if (param_2 != 0) {
    lVar8 = *(long *)(param_1 + 0x50);
    if (*(long *)(param_1 + 0x58) - lVar8 == *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50))
    {
      if (*(long *)(param_1 + 0x58) == lVar8) {
        return true;
      }
      uVar9 = 0;
      while( true ) {
        plVar1 = (long *)(lVar8 + uVar9 * 0x10);
        plVar6 = (long *)plVar1[1];
        if (plVar6 == (long *)0x0) {
          lVar8 = 0;
          plVar6 = (long *)0x0;
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          if (plVar6 == (long *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar1;
          }
        }
        if ((ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 4) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a46f438);
          (*pcVar4)();
        }
        plVar1 = (long *)(*(long *)(param_2 + 0x50) + uVar9 * 0x10);
        plVar7 = (long *)plVar1[1];
        if ((plVar7 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
          bVar5 = lVar8 == 0;
        }
        else {
          bVar5 = lVar8 == *plVar1;
          plVar1 = plVar7 + 1;
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
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
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
        if (bVar5 == false) break;
        uVar9 = uVar9 + 1;
        lVar8 = *(long *)(param_1 + 0x50);
        if ((ulong)(*(long *)(param_1 + 0x58) - lVar8 >> 4) <= uVar9) {
          return bVar5;
        }
      }
      return false;
    }
  }
  return false;
}



/* Entry: 10a46f438; end: 10a46f56b;  */

void FUN_10a46f438(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-2] = &PTR_DAT_110bdb308;
  *param_1 = &PTR_FUN_110bdb390;
  param_1[5] = &PTR_FUN_110bdb3e8;
  puStack_28 = param_1 + 0xe;
  FUN_10a34c844(&puStack_28);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  param_1[-2] = &PTR_DAT_110bdcb88;
  *param_1 = &PTR_FUN_110bdcc10;
  param_1[5] = &PTR_FUN_110bdcc68;
  puStack_28 = param_1 + 8;
  FUN_10a34c804(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a46f56c; end: 10a46f583;  */

bool FUN_10a46f56c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x65532e65756c6156 && param_2[1] == 0x62617a696c616972) &&
      param_2[2] == 0x567961727241656c) && (int)param_2[3] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46f584; end: 10a46f76b;  */

void FUN_10a46f584(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_DAT_110bdb308;
  param_1[-5] = &PTR_FUN_110bdb390;
  *param_1 = &PTR_FUN_110bdb3e8;
  puStack_28 = param_1 + 9;
  FUN_10a34c844(&puStack_28);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  param_1[-7] = &PTR_DAT_110bdcb88;
  param_1[-5] = &PTR_FUN_110bdcc10;
  *param_1 = &PTR_FUN_110bdcc68;
  puStack_28 = param_1 + 3;
  FUN_10a34c804(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a46f76c; end: 10a46f7d7;  */

undefined1  [16] FUN_10a46f76c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10e4b89f9;
  return auVar1;
}



/* Entry: 10a46f7d8; end: 10a46f8ff;  */

void FUN_10a46f7d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    puVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = (undefined8 *)param_2[9];
    puStack_40 = (undefined8 *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar3 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar1 = &puStack_40;
    if (param_4 != 0) {
      puVar3 = (undefined8 *)(param_4 + 0x28);
      ppuVar1 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar3;
    puVar3 = *ppuVar1;
  }
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bde0d8;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xc] = param_3;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puStack_40 = puVar2 + 3;
  *puStack_40 = &PTR_DAT_110bdb408;
  puVar2[5] = &PTR_FUN_110bdb490;
  puVar2[10] = &PTR_FUN_110bdb4e8;
  puVar2[0xb] = puVar3;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puStack_38 = puVar2;
  FUN_10a4951fc(&puStack_40);
  if (puStack_40 != param_2) {
    FUN_10a105cdc(puStack_40 + 10,param_2[10],param_2[0xb],
                  ((long)(param_2[0xb] - param_2[10]) >> 3) * -0x5555555555555555);
  }
  *param_1 = puStack_40;
  param_1[1] = puStack_38;
  return;
}



/* Entry: 10a46f900; end: 10a46f9a7;  */

void FUN_10a46f900(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  func_0x00010989a420(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                      (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) *
                      -0x5555555555555555);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46f9a8; end: 10a46fa5f;  */

void FUN_10a46f9a8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x00010989a420(aiStack_30,uVar1,*(long *)(param_2 + 0x50),
                      (*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3) *
                      -0x5555555555555555);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46fa60; end: 10a46fb17;  */

uint FUN_10a46fa60(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_31;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdc008,0);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x50);
    lVar1 = *(long *)(param_1 + 0x58);
    lVar5 = *(long *)(param_2 + 0x50);
    if (lVar1 - lVar4 == *(long *)(param_2 + 0x58) - lVar5) {
      if (lVar4 == lVar1) {
        uVar2 = 1;
      }
      else {
        do {
          puVar3 = &uStack_31;
          FUN_10a0cd2f8(puVar3,lVar4,lVar5);
          uVar2 = (uint)puVar3;
          if (uVar2 == 0) break;
          lVar4 = lVar4 + 0x18;
          lVar5 = lVar5 + 0x18;
        } while (lVar4 != lVar1);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return param_2 != 0 & uVar2;
}



/* Entry: 10a46fb18; end: 10a46fbcb;  */

void FUN_10a46fb18(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bdcd10;
  param_1[5] = &PTR_FUN_110bdcd68;
  puStack_28 = param_1 + 8;
  param_1[-2] = &PTR_DAT_110bdcc88;
  FUN_10a0426d8(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a46fbcc; end: 10a46fbe3;  */

bool FUN_10a46fbcc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x16) &&
     ((*param_2 == 0x74532e65756c6156 && param_2[1] == 0x61727241676e6972) &&
      *(long *)((long)param_2 + 0xe) == 0x65756c6156796172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46fbe4; end: 10a46fd33;  */

void FUN_10a46fbe4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-5] = &PTR_FUN_110bdcd10;
  *param_1 = &PTR_FUN_110bdcd68;
  puStack_28 = param_1 + 3;
  param_1[-7] = &PTR_DAT_110bdcc88;
  FUN_10a0426d8(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a46fd34; end: 10a46fd97;  */

undefined1  [16] FUN_10a46fd34(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b897b;
  return auVar1;
}



/* Entry: 10a46fd98; end: 10a46ff0f;  */

void FUN_10a46fd98(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    plVar7 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = (long *)param_2[9];
    plStack_50 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_50);
    plVar7 = (long *)((ulong)&plStack_50 | 8);
    pplVar3 = &plStack_50;
    if (param_4 != 0) {
      plVar7 = (long *)(param_4 + 0x28);
      pplVar3 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar7;
    plVar7 = *pplVar3;
  }
  plVar4 = (long *)0x80;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bde128;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_DAT_110bdb508;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xc] = param_3;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[5] = (long)&PTR_DAT_110bdb590;
  plVar4[10] = (long)&PTR_FUN_110bdb5e8;
  plVar4[0xb] = (long)plVar7;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar7 = plVar4 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4[8] = (long)plStack_50;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_48 = plVar4;
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  plVar7 = plStack_50;
  if (plStack_50 != param_2) {
    FUN_10a12d500(plStack_50 + 10,param_2[10],param_2[0xb],
                  (param_2[0xb] - param_2[10] >> 2) * -0x5555555555555555);
  }
  *param_1 = plVar7;
  param_1[1] = plStack_48;
  return;
}



/* Entry: 10a46ff10; end: 10a46ffb7;  */

void FUN_10a46ff10(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3699ec(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) * -0x5555555555555555);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46ffb8; end: 10a470017;  */

void FUN_10a46ffb8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a36993c(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a470018; end: 10a470173;  */

uint FUN_10a470018(long param_1,long param_2)

{
  uint extraout_w8;
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdc038,0);
  uVar1 = extraout_w8;
  if (param_2 != 0) {
    pfVar2 = *(float **)(param_1 + 0x50);
    pfVar3 = *(float **)(param_2 + 0x50);
    if ((long)*(float **)(param_1 + 0x58) - (long)pfVar2 == *(long *)(param_2 + 0x58) - (long)pfVar3
       ) {
      for (; pfVar2 != *(float **)(param_1 + 0x58); pfVar2 = pfVar2 + 3) {
        if (((*pfVar2 != *pfVar3) || (pfVar2[1] != pfVar3[1])) || (pfVar2[2] != pfVar3[2]))
        goto LAB_10a4700a8;
        pfVar3 = pfVar3 + 3;
      }
      uVar1 = 1;
    }
    else {
LAB_10a4700a8:
      uVar1 = 0;
    }
  }
  return param_2 != 0 & uVar1;
}



/* Entry: 10a470174; end: 10a47018b;  */

bool FUN_10a470174(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x65562e65756c6156 && param_2[1] == 0x5679617272413363) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a47018c; end: 10a4702cb;  */

undefined8 * FUN_10a47018c(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdcd88;
  param_1[-5] = &PTR_FUN_110bdce10;
  *param_1 = &PTR_FUN_110bdce68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a4702cc; end: 10a47032f;  */

undefined1  [16] FUN_10a4702cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b8990;
  return auVar1;
}



/* Entry: 10a470330; end: 10a470593;  */

void FUN_10a470330(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar13 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_60);
    plVar13 = (long *)((ulong)&plStack_60 | 8);
    pplVar6 = &plStack_60;
    if (param_4 != 0) {
      plVar13 = (long *)(param_4 + 0x28);
      pplVar6 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar13;
    plVar13 = *pplVar6;
  }
  plVar8 = (long *)0x80;
  __Znwm();
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110bde178;
  plStack_60 = plVar8 + 3;
  *plStack_60 = (long)&PTR_DAT_110bdb608;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[0xc] = param_3;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[5] = (long)&PTR_DAT_110bdb690;
  plVar8[10] = (long)&PTR_FUN_110bdb6e8;
  plVar8[0xb] = (long)plVar13;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = *plVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar13 = plVar8 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar8[8] = (long)plStack_60;
  plVar8[9] = (long)plVar8;
  do {
    lVar11 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_58 = plVar8;
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar13 = plStack_60;
  if (plStack_60 != param_2) {
    plVar8 = plStack_60 + 10;
    lVar15 = *plVar8;
    lVar11 = param_2[10];
    lVar3 = param_2[0xb];
    uVar12 = lVar3 - lVar11;
    uVar10 = plStack_60[0xc];
    if (uVar10 - lVar15 < uVar12) {
      uVar16 = (long)uVar12 >> 4;
      if (lVar15 != 0) {
        plStack_60[0xb] = lVar15;
        __ZdlPv(lVar15);
        uVar10 = 0;
        *plVar8 = 0;
        plVar13[0xb] = 0;
        plVar13[0xc] = 0;
      }
      if (uVar16 >> 0x3c != 0) {
        FUN_10a132338();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a470580);
        (*pcVar7)();
      }
      uVar2 = (long)uVar10 >> 3;
      if ((ulong)((long)uVar10 >> 3) <= uVar16) {
        uVar2 = uVar16;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar2 = 0xfffffffffffffff;
      }
      FUN_10a4953dc(plVar8,uVar2);
      lVar14 = plVar13[0xb];
      if (lVar3 != lVar11) {
        _memmove(lVar14,lVar11,uVar12);
      }
      lVar14 = lVar14 + uVar12;
    }
    else {
      lVar14 = plStack_60[0xb];
      if ((ulong)(lVar14 - lVar15) < uVar12) {
        lVar1 = lVar11 + (lVar14 - lVar15);
        if (lVar14 != lVar15) {
          _memmove(lVar15,lVar11);
          lVar14 = plVar13[0xb];
        }
        lVar3 = lVar3 - lVar1;
        if (lVar3 != 0) {
          _memmove(lVar14,lVar1,lVar3);
        }
        lVar14 = lVar14 + lVar3;
      }
      else {
        if (lVar3 != lVar11) {
          _memmove(lVar15,lVar11,uVar12);
        }
        lVar14 = lVar15 + uVar12;
      }
    }
    plVar13[0xb] = lVar14;
  }
  *param_1 = plVar13;
  param_1[1] = plStack_58;
  return;
}



/* Entry: 10a470594; end: 10a47062f;  */

void FUN_10a470594(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a369ce8(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 4);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a470630; end: 10a47068f;  */

void FUN_10a470630(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a369c44(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a470690; end: 10a4707fb;  */

uint FUN_10a470690(long param_1,long param_2)

{
  uint extraout_w8;
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdc068,0);
  uVar1 = extraout_w8;
  if (param_2 != 0) {
    pfVar2 = *(float **)(param_1 + 0x50);
    pfVar3 = *(float **)(param_2 + 0x50);
    if ((long)*(float **)(param_1 + 0x58) - (long)pfVar2 == *(long *)(param_2 + 0x58) - (long)pfVar3
       ) {
      for (; pfVar2 != *(float **)(param_1 + 0x58); pfVar2 = pfVar2 + 4) {
        if ((((*pfVar2 != *pfVar3) || (pfVar2[1] != pfVar3[1])) || (pfVar2[2] != pfVar3[2])) ||
           (pfVar2[3] != pfVar3[3])) goto LAB_10a470730;
        pfVar3 = pfVar3 + 4;
      }
      uVar1 = 1;
    }
    else {
LAB_10a470730:
      uVar1 = 0;
    }
  }
  return param_2 != 0 & uVar1;
}



/* Entry: 10a4707fc; end: 10a470813;  */

bool FUN_10a4707fc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x65562e65756c6156 && param_2[1] == 0x5679617272413463) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a470814; end: 10a470953;  */

undefined8 * FUN_10a470814(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdce88;
  param_1[-5] = &PTR_FUN_110bdcf10;
  *param_1 = &PTR_FUN_110bdcf68;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a470954; end: 10a4709b7;  */

undefined1  [16] FUN_10a470954(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89ba;
  return auVar1;
}



/* Entry: 10a4709b8; end: 10a470c1b;  */

void FUN_10a4709b8(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar13 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_60);
    plVar13 = (long *)((ulong)&plStack_60 | 8);
    pplVar6 = &plStack_60;
    if (param_4 != 0) {
      plVar13 = (long *)(param_4 + 0x28);
      pplVar6 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar13;
    plVar13 = *pplVar6;
  }
  plVar8 = (long *)0x80;
  __Znwm();
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110bde1c8;
  plStack_60 = plVar8 + 3;
  *plStack_60 = (long)&PTR_DAT_110bdb708;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[0xc] = param_3;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[5] = (long)&PTR_DAT_110bdb790;
  plVar8[10] = (long)&PTR_FUN_110bdb7e8;
  plVar8[0xb] = (long)plVar13;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = *plVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar13 = plVar8 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar8[8] = (long)plStack_60;
  plVar8[9] = (long)plVar8;
  do {
    lVar11 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_58 = plVar8;
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar13 = plStack_60;
  if (plStack_60 != param_2) {
    plVar8 = plStack_60 + 10;
    lVar15 = *plVar8;
    lVar11 = param_2[10];
    lVar3 = param_2[0xb];
    uVar12 = lVar3 - lVar11;
    uVar10 = plStack_60[0xc];
    if (uVar10 - lVar15 < uVar12) {
      uVar16 = (long)uVar12 >> 4;
      if (lVar15 != 0) {
        plStack_60[0xb] = lVar15;
        __ZdlPv(lVar15);
        uVar10 = 0;
        *plVar8 = 0;
        plVar13[0xb] = 0;
        plVar13[0xc] = 0;
      }
      if (uVar16 >> 0x3c != 0) {
        FUN_10a369fac();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a470c08);
        (*pcVar7)();
      }
      uVar2 = (long)uVar10 >> 3;
      if ((ulong)((long)uVar10 >> 3) <= uVar16) {
        uVar2 = uVar16;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar2 = 0xfffffffffffffff;
      }
      FUN_10a4954ac(plVar8,uVar2);
      lVar14 = plVar13[0xb];
      if (lVar3 != lVar11) {
        _memmove(lVar14,lVar11,uVar12);
      }
      lVar14 = lVar14 + uVar12;
    }
    else {
      lVar14 = plStack_60[0xb];
      if ((ulong)(lVar14 - lVar15) < uVar12) {
        lVar1 = lVar11 + (lVar14 - lVar15);
        if (lVar14 != lVar15) {
          _memmove(lVar15,lVar11);
          lVar14 = plVar13[0xb];
        }
        lVar3 = lVar3 - lVar1;
        if (lVar3 != 0) {
          _memmove(lVar14,lVar1,lVar3);
        }
        lVar14 = lVar14 + lVar3;
      }
      else {
        if (lVar3 != lVar11) {
          _memmove(lVar15,lVar11,uVar12);
        }
        lVar14 = lVar15 + uVar12;
      }
    }
    plVar13[0xb] = lVar14;
  }
  *param_1 = plVar13;
  param_1[1] = plStack_58;
  return;
}



/* Entry: 10a470c1c; end: 10a470cb7;  */

void FUN_10a470c1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a36a0b8(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 4);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a470cb8; end: 10a470d17;  */

void FUN_10a470cb8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a36a014(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a470d18; end: 10a470e6b;  */

uint FUN_10a470d18(long param_1,long param_2)

{
  bool bVar1;
  uint extraout_w8;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdc098,0);
  uVar2 = extraout_w8;
  if (param_2 != 0) {
    pfVar3 = *(float **)(param_1 + 0x50);
    pfVar4 = *(float **)(param_2 + 0x50);
    if ((long)*(float **)(param_1 + 0x58) - (long)pfVar3 == *(long *)(param_2 + 0x58) - (long)pfVar4
       ) {
      for (; pfVar3 != *(float **)(param_1 + 0x58); pfVar3 = pfVar3 + 4) {
        bVar1 = false;
        if ((*pfVar3 == *pfVar4) && (bVar1 = false, !NAN(pfVar3[1]) && !NAN(pfVar4[1]))) {
          bVar1 = pfVar3[1] == pfVar4[1];
        }
        if (!bVar1) goto LAB_10a470da0;
        bVar1 = false;
        if ((pfVar3[2] == pfVar4[2]) && (bVar1 = false, !NAN(pfVar3[3]) && !NAN(pfVar4[3]))) {
          bVar1 = pfVar3[3] == pfVar4[3];
        }
        if (!bVar1) goto LAB_10a470da0;
        pfVar4 = pfVar4 + 4;
      }
      uVar2 = 1;
    }
    else {
LAB_10a470da0:
      uVar2 = 0;
    }
  }
  return param_2 != 0 & uVar2;
}



/* Entry: 10a470e6c; end: 10a470e83;  */

bool FUN_10a470e6c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x614d2e65756c6156 && param_2[1] == 0x5679617272413274) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a470e84; end: 10a470fc3;  */

undefined8 * FUN_10a470e84(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdcf88;
  param_1[-5] = &PTR_FUN_110bdd010;
  *param_1 = &PTR_FUN_110bdd068;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a470fc4; end: 10a471027;  */

undefined1  [16] FUN_10a470fc4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89cf;
  return auVar1;
}



/* Entry: 10a471028; end: 10a4712c7;  */

void FUN_10a471028(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long **pplVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plStack_70;
  long *plStack_68;
  
  if (param_4 == 0) {
    plVar13 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_68 = (long *)param_2[9];
    plStack_70 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_70);
    plVar13 = (long *)((ulong)&plStack_70 | 8);
    pplVar5 = &plStack_70;
    if (param_4 != 0) {
      plVar13 = (long *)(param_4 + 0x28);
      pplVar5 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar13;
    plVar13 = *pplVar5;
  }
  plVar7 = (long *)0x80;
  __Znwm();
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110bde218;
  plStack_70 = plVar7 + 3;
  *plStack_70 = (long)&PTR_DAT_110bdb808;
  *(undefined1 *)(plVar7 + 4) = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[0xc] = param_3;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[5] = (long)&PTR_DAT_110bdb890;
  plVar7[10] = (long)&PTR_FUN_110bdb8e8;
  plVar7[0xb] = (long)plVar13;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar13 = plVar7 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar7[8] = (long)plStack_70;
  plVar7[9] = (long)plVar7;
  do {
    lVar10 = *plVar8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plStack_68 = plVar7;
  if (lVar10 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  plVar13 = plStack_70;
  if (plStack_70 != param_2) {
    plVar7 = plStack_70 + 10;
    lVar14 = *plVar7;
    lVar10 = param_2[10];
    lVar2 = param_2[0xb];
    uVar12 = lVar2 - lVar10;
    lVar9 = plStack_70[0xc];
    if ((ulong)(lVar9 - lVar14) < uVar12) {
      uVar15 = ((long)uVar12 >> 2) * -0x71c71c71c71c71c7;
      if (lVar14 != 0) {
        plStack_70[0xb] = lVar14;
        __ZdlPv(lVar14);
        lVar9 = 0;
        *plVar7 = 0;
        plVar13[0xb] = 0;
        plVar13[0xc] = 0;
      }
      if (0x71c71c71c71c71c < uVar15) {
        FUN_10a36a338();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4712b4);
        (*pcVar6)();
      }
      uVar11 = (lVar9 >> 2) * 0x1c71c71c71c71c72;
      if (uVar11 < uVar15 || uVar11 + ((long)uVar12 >> 2) * 0x71c71c71c71c71c7 == 0) {
        uVar11 = uVar15;
      }
      if (0x38e38e38e38e38d < (ulong)((lVar9 >> 2) * -0x71c71c71c71c71c7)) {
        uVar11 = 0x71c71c71c71c71c;
      }
      FUN_10a49557c(plVar7,uVar11);
      lVar9 = plVar13[0xb];
      if (lVar2 != lVar10) {
        _memmove(lVar9,lVar10,uVar12);
      }
      lVar9 = lVar9 + uVar12;
    }
    else {
      lVar9 = plStack_70[0xb];
      if ((ulong)(lVar9 - lVar14) < uVar12) {
        lVar1 = lVar10 + (lVar9 - lVar14);
        if (lVar9 != lVar14) {
          _memmove(lVar14,lVar10);
          lVar9 = plVar13[0xb];
        }
        lVar2 = lVar2 - lVar1;
        if (lVar2 != 0) {
          _memmove(lVar9,lVar1,lVar2);
        }
        lVar9 = lVar9 + lVar2;
      }
      else {
        if (lVar2 != lVar10) {
          _memmove(lVar14,lVar10,uVar12);
        }
        lVar9 = lVar14 + uVar12;
      }
    }
    plVar13[0xb] = lVar9;
  }
  *param_1 = plVar13;
  param_1[1] = plStack_68;
  return;
}



/* Entry: 10a4712c8; end: 10a471377;  */

void FUN_10a4712c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a36a46c(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) * -0x71c71c71c71c71c7);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a471378; end: 10a4713d7;  */

void FUN_10a471378(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a36a3b4(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a4713d8; end: 10a471593;  */

uint FUN_10a4713d8(long param_1,long param_2)

{
  uint extraout_w8;
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdc0c8,0);
  uVar1 = extraout_w8;
  if (param_2 != 0) {
    pfVar2 = *(float **)(param_1 + 0x50);
    pfVar3 = *(float **)(param_2 + 0x50);
    if ((long)*(float **)(param_1 + 0x58) - (long)pfVar2 == *(long *)(param_2 + 0x58) - (long)pfVar3
       ) {
      for (; pfVar2 != *(float **)(param_1 + 0x58); pfVar2 = pfVar2 + 9) {
        if ((((((*pfVar2 != *pfVar3) || (pfVar2[1] != pfVar3[1])) || (pfVar2[2] != pfVar3[2])) ||
             ((pfVar2[3] != pfVar3[3] || (pfVar2[4] != pfVar3[4])))) ||
            ((pfVar2[5] != pfVar3[5] || ((pfVar2[6] != pfVar3[6] || (pfVar2[7] != pfVar3[7])))))) ||
           (pfVar2[8] != pfVar3[8])) goto LAB_10a4714c8;
        pfVar3 = pfVar3 + 9;
      }
      uVar1 = 1;
    }
    else {
LAB_10a4714c8:
      uVar1 = 0;
    }
  }
  return param_2 != 0 & uVar1;
}



/* Entry: 10a471594; end: 10a4715ab;  */

bool FUN_10a471594(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x614d2e65756c6156 && param_2[1] == 0x5679617272413374) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a4715ac; end: 10a4716eb;  */

undefined8 * FUN_10a4715ac(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdd088;
  param_1[-5] = &PTR_FUN_110bdd110;
  *param_1 = &PTR_FUN_110bdd168;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a4716ec; end: 10a47174f;  */

undefined1  [16] FUN_10a4716ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10e4b89e4;
  return auVar1;
}



/* Entry: 10a471750; end: 10a4718bb;  */

void FUN_10a471750(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    plVar7 = param_2;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = (long *)param_2[9];
    plStack_50 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_50);
    plVar7 = (long *)((ulong)&plStack_50 | 8);
    pplVar3 = &plStack_50;
    if (param_4 != 0) {
      plVar7 = (long *)(param_4 + 0x28);
      pplVar3 = (long **)(param_4 + 0x20);
    }
    param_3 = *plVar7;
    plVar7 = *pplVar3;
  }
  plVar4 = (long *)0x80;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bde268;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_DAT_110bdb908;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xc] = param_3;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[5] = (long)&PTR_DAT_110bdb990;
  plVar4[10] = (long)&PTR_FUN_110bdb9e8;
  plVar4[0xb] = (long)plVar7;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar7 = plVar4 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar4[8] = (long)plStack_50;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_48 = plVar4;
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  plVar7 = plStack_50;
  if (plStack_50 != param_2) {
    FUN_10a35d800(plStack_50 + 10,param_2[10],param_2[0xb],param_2[0xb] - param_2[10] >> 6);
  }
  *param_1 = plVar7;
  param_1[1] = plStack_48;
  return;
}



/* Entry: 10a4718bc; end: 10a471957;  */

void FUN_10a4718bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a36a6a0(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 6);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a471958; end: 10a4719b7;  */

void FUN_10a471958(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a36a5fc(param_1,param_2 + 0x50);
  return;
}



/* Entry: 10a4719b8; end: 10a471be3;  */

uint FUN_10a4719b8(long param_1,long param_2)

{
  uint extraout_w8;
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdc0f8,0);
  uVar1 = extraout_w8;
  if (param_2 != 0) {
    pfVar2 = *(float **)(param_1 + 0x50);
    pfVar3 = *(float **)(param_2 + 0x50);
    if ((long)*(float **)(param_1 + 0x58) - (long)pfVar2 == *(long *)(param_2 + 0x58) - (long)pfVar3
       ) {
      for (; pfVar2 != *(float **)(param_1 + 0x58); pfVar2 = pfVar2 + 0x10) {
        if (((((*pfVar2 != *pfVar3) || (pfVar2[1] != pfVar3[1])) || (pfVar2[2] != pfVar3[2])) ||
            (((pfVar2[3] != pfVar3[3] || (pfVar2[4] != pfVar3[4])) ||
             ((pfVar2[5] != pfVar3[5] || ((pfVar2[6] != pfVar3[6] || (pfVar2[7] != pfVar3[7]))))))))
           || ((pfVar2[8] != pfVar3[8] ||
               (((((pfVar2[9] != pfVar3[9] || (pfVar2[10] != pfVar3[10])) ||
                  (pfVar2[0xb] != pfVar3[0xb])) ||
                 ((pfVar2[0xc] != pfVar3[0xc] || (pfVar2[0xd] != pfVar3[0xd])))) ||
                ((pfVar2[0xe] != pfVar3[0xe] || (pfVar2[0xf] != pfVar3[0xf]))))))))
        goto LAB_10a471b18;
        pfVar3 = pfVar3 + 0x10;
      }
      uVar1 = 1;
    }
    else {
LAB_10a471b18:
      uVar1 = 0;
    }
  }
  return param_2 != 0 & uVar1;
}



/* Entry: 10a471be4; end: 10a471bfb;  */

bool FUN_10a471be4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x614d2e65756c6156 && param_2[1] == 0x5679617272413474) &&
      (int)param_2[2] == 0x65756c61)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a471bfc; end: 10a471d2b;  */

undefined8 * FUN_10a471bfc(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-7] = &PTR_DAT_110bdd188;
  param_1[-5] = &PTR_FUN_110bdd210;
  *param_1 = &PTR_FUN_110bdd268;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    __ZdlPv(lVar1);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a471d2c; end: 10a471da3;  */

undefined1  [16] FUN_10a471d2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10e4b8a10;
  return auVar1;
}



/* Entry: 10a471da4; end: 10a471f27;  */

void FUN_10a471da4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  undefined8 uStack_58;
  
  if (param_4 == 0) {
    lVar7 = param_2;
    func_0x00010a0fda30();
  }
  else {
    uStack_58 = *(undefined8 *)(param_2 + 0x48);
    lStack_60 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_60);
    puVar2 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar5 = &lStack_60;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar7 = *plVar5;
  }
  plVar6 = (long *)0x78;
  __Znwm();
  plVar8 = plVar6 + 1;
  *plVar8 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110bde2b8;
  plVar5 = plVar6 + 3;
  FUN_10a468c74(plVar5,lVar7,param_3);
  if (plVar6[9] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[8] = (long)plVar5;
    plVar6[9] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a471ee4;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[8] = (long)plVar5;
    plVar6[9] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a471ee4:
  FUN_10a4956f8(plVar6 + 0xd,param_2 + 0x50);
  *param_1 = (long)plVar5;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a471f28; end: 10a47203f;  */

void FUN_10a471f28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 0x50);
  plStack_38 = *(long **)(param_1 + 0x58);
  uVar5 = *param_3;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_40 = 0;
  if (lVar6 != 0) {
    lStack_40 = lVar6 + 0x68;
  }
  ppuStack_48 = &PTR_DAT_110c6c4c8;
  func_0x000109899de4(aiStack_58,uVar5,&lStack_40,&ppuStack_48,0,0);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10a3b6bb0(param_3,param_2,aiStack_58);
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  return;
}



/* Entry: 10a472040; end: 10a472187;  */

void FUN_10a472040(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x00010a495774(aiStack_30,uVar1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a472188; end: 10a47219f;  */

bool FUN_10a472188(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x6e412e65756c6156 && param_2[1] == 0x436e6f6974616d69) &&
      param_2[2] == 0x756c615665767275) && (char)param_2[3] == 'e')) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a4721a0; end: 10a472307;  */

undefined8 * FUN_10a4721a0(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110bdc388;
  param_1[-5] = &PTR_FUN_110bdc410;
  *param_1 = &PTR_FUN_110bdc468;
  FUN_10a493e78(param_1 + 3);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a472308; end: 10a47237f;  */

undefined1  [16] FUN_10a472308(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10e4b8960;
  return auVar1;
}



/* Entry: 10a472380; end: 10a472427;  */

void FUN_10a472380(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a495818(aiStack_30,*param_3,*(long *)(param_1 + 0x50),
                (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) * -0x5555555555555555);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a472428; end: 10a4724df;  */

void FUN_10a472428(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a495818(aiStack_30,uVar1,*(long *)(param_2 + 0x50),
                (*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3) * -0x5555555555555555);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a4724e0; end: 10a472583;  */

uint FUN_10a4724e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdc158,0);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if ((long)puVar1 - (long)puVar4 ==
        *(long *)(param_2 + 0x58) - (long)*(undefined8 **)(param_2 + 0x50)) {
      puVar6 = *(undefined8 **)(param_2 + 0x50);
      if (puVar4 == puVar1) {
        uVar2 = 1;
      }
      else {
        do {
          puVar5 = puVar4 + 3;
          uVar3 = *puVar4;
          FUN_10a494a0c(uVar3,puVar4[1],*puVar6,puVar6[1]);
          uVar2 = (uint)uVar3;
          puVar4 = puVar5;
          puVar6 = puVar6 + 3;
        } while (uVar2 != 0 && puVar5 != puVar1);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return param_2 != 0 & uVar2;
}



/* Entry: 10a472584; end: 10a47266f;  */

undefined8 * FUN_10a472584(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bdbb08;
  *param_1 = &PTR_FUN_110bdbb90;
  param_1[5] = &PTR_FUN_110bdbbe8;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  param_1[-2] = &PTR_DAT_110bdd288;
  *param_1 = &PTR_FUN_110bdd310;
  param_1[5] = &PTR_FUN_110bdd368;
  FUN_10a4766d8(param_1 + 8);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a472670; end: 10a472687;  */

bool FUN_10a472670(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x1a) &&
     (((*param_2 == 0x75432e65756c6156 && param_2[1] == 0x657079546d6f7473) &&
      param_2[2] == 0x6c61567961727241) && (short)param_2[3] == 0x6575)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a472688; end: 10a472773;  */

undefined8 * FUN_10a472688(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bdbb08;
  param_1[-5] = &PTR_FUN_110bdbb90;
  *param_1 = &PTR_FUN_110bdbbe8;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  param_1[-7] = &PTR_DAT_110bdd288;
  param_1[-5] = &PTR_FUN_110bdd310;
  *param_1 = &PTR_FUN_110bdd368;
  FUN_10a4766d8(param_1 + 3);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a472774; end: 10a4728b7;  */

undefined8 * FUN_10a472774(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar4 = param_1 + 1;
  plVar5 = plVar4;
  plVar1 = (long *)*plVar4;
joined_r0x00010a47279c:
  do {
    if (plVar1 == (long *)0x0) {
LAB_10a4727e8:
      puVar3 = (undefined8 *)0x50;
      __Znwm();
      uStack_48 = 0;
      puStack_58 = puVar3;
      plStack_50 = param_1;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(puVar3 + 4,*param_2,param_2[1]);
      }
      else {
        uVar6 = *param_2;
        puVar3[5] = param_2[1];
        puVar3[4] = uVar6;
        puVar3[6] = param_2[2];
      }
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[7] = 0;
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar5;
      *plVar4 = (long)puVar3;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar3 = (undefined8 *)*plVar4;
      }
      func_0x000107c2b058(param_1[1],puVar3);
      puVar3 = puStack_58;
      param_1[2] = param_1[2] + 1;
      puStack_58 = (undefined8 *)0x0;
      FUN_10a4728b8(&puStack_58);
LAB_10a47287c:
      return puVar3 + 7;
    }
    puVar3 = param_2;
    FUN_10a003e3c(param_2,plVar1 + 4);
    plVar5 = plVar1;
    if (((uint)puVar3 >> 7 & 1) != 0) {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar1;
      goto joined_r0x00010a47279c;
    }
    plVar2 = plVar1 + 4;
    FUN_10a003e3c(plVar2,param_2);
    if (((uint)plVar2 >> 7 & 1) == 0) {
      puVar3 = (undefined8 *)*plVar4;
      if (puVar3 != (undefined8 *)0x0) goto LAB_10a47287c;
      goto LAB_10a4727e8;
    }
    plVar4 = plVar1 + 1;
    plVar1 = (long *)*plVar4;
  } while( true );
}



/* Entry: 10a4728b8; end: 10a47295f;  */

long * FUN_10a4728b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (((char)param_1[2] == '\x01') && (*(char *)(lVar1 + 0x37) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10a472960; end: 10a4729e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a472994) */
/* WARNING: Removing unreachable block (ram,0x00010a4729a8) */

void FUN_10a472960(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a4729e4; end: 10a472aaf;  */

void FUN_10a4729e4(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x00010989803c(&puStack_38);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  func_0x0001098843c0(&puStack_40,&puStack_38,*param_2,plVar1);
  FUN_10a472ab0(param_1,*param_2,&puStack_38,&puStack_40);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a472ab0; end: 10a472b6b;  */

void FUN_10a472ab0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(*param_2 + 0x58))();
  puStack_48 = &uStack_40;
  uStack_60 = param_4;
  plStack_58 = param_2;
  uStack_50 = param_3;
  func_0x0001098960c0(aiStack_70);
  func_0x000109898570(param_1,param_2,aiStack_70);
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a472b6c; end: 10a472be7;  */

float FUN_10a472b6c(ulong param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = param_1;
  func_0x000107c284a0();
  fVar3 = ((float)(uVar1 & 0xffffffff) / 4.2949673e+09) * 2.0 + -1.0;
  func_0x000107c284a0(param_1);
  fVar2 = 3.1415927;
  ___sincosf_stret((((float)(param_1 & 0xffffffff) / 4.2949673e+09) * 2.0 + -1.0) * 3.1415927);
  return fVar2 * SQRT(1.0 - fVar3 * fVar3);
}



/* Entry: 10a472be8; end: 10a472c8b;  */

undefined8 * FUN_10a472be8(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_2;
  FUN_10a0051e8(param_2,*(undefined4 *)(param_3 + 3),*(undefined4 *)((long)param_3 + 0x1c),
                *(undefined4 *)(param_3 + 10),*(undefined4 *)(param_3 + 4),
                *(undefined4 *)((long)param_3 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_2[2] == param_2[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a472c8c);
      (*pcVar1)();
    }
    puStack_38 = (undefined8 *)(double)param_1;
    aiStack_40[0] = 3;
    FUN_10a005308(param_2[3] + -8,*param_2,*param_3,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_2;
}



/* Entry: 10a472c8c; end: 10a472da3;  */

void FUN_10a472c8c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,ulong param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a1ff918();
  if ((*param_4 != 3) || (param_4[4] != 3)) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a472d90);
    (*pcVar2)();
  }
  dVar15 = *(double *)(param_4 + 2);
  dVar16 = *(double *)(param_4 + 6);
  FUN_10a008350();
  func_0x000107c284a0();
  fVar13 = (float)dVar16;
  if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
    fVar13 = 0.0;
  }
  fVar14 = (float)dVar15;
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
    fVar14 = 0.0;
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) =
       (double)(fVar14 + ((float)(param_5 & 0xffffffff) / 4.2949673e+09) * (fVar13 - fVar14));
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a472da4; end: 10a472db7;  */

float FUN_10a472da4(float param_1,float param_2,float param_3)

{
  return param_2 * param_3 + (1.0 - param_3) * param_1;
}



/* Entry: 10a472db8; end: 10a472e53;  */

void FUN_10a472db8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a472e54(param_1,FUN_10a472da4,param_4,param_5);
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a472e54; end: 10a472f1b;  */

double FUN_10a472e54(double param_1,float param_2,float param_3,undefined4 *param_4,code *param_5,
                    int *param_6,undefined8 param_7)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_10a472f1c(param_7);
  if (((*param_6 == 3) && (param_6[4] == 3)) && (param_6[8] == 3)) {
    fVar2 = (float)*(double *)(param_6 + 6);
    fVar3 = (float)*(double *)(param_6 + 2);
    fVar4 = (float)*(double *)(param_6 + 10);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_6 + 6))) {
      fVar2 = 0.0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_6 + 2))) {
      fVar3 = 0.0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_6 + 10))) {
      fVar4 = 0.0;
    }
    (*param_5)(fVar3,fVar2,fVar4);
    *param_4 = 3;
    *(double *)(param_4 + 2) = (double)fVar3;
    return (double)fVar3;
  }
  puVar1 = &UNK_10f68f550;
  func_0x00010988bd28();
  if ((int)puVar1 == 3) {
    return param_1;
  }
  FUN_10a052ee0(3,0,puVar1);
  fVar2 = SUB84(param_1,0);
  if (fVar2 <= param_3) {
    param_3 = fVar2;
  }
  if (param_2 <= fVar2) {
    param_2 = param_3;
  }
  return (double)(ulong)(uint)param_2;
}



/* Entry: 10a472f1c; end: 10a472f3f;  */

ulong FUN_10a472f1c(ulong param_1,float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  
  fVar1 = (float)param_1;
  if ((int)param_4 == 3) {
    return param_1;
  }
  FUN_10a052ee0(3,0,param_4);
  if (fVar1 <= param_3) {
    param_3 = fVar1;
  }
  if (param_2 <= fVar1) {
    param_2 = param_3;
  }
  return (ulong)(uint)param_2;
}



/* Entry: 10a472f40; end: 10a472f53;  */

float FUN_10a472f40(float param_1,float param_2,float param_3)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  if (param_2 <= param_1) {
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10a472f54; end: 10a472fef;  */

void FUN_10a472f54(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a472e54(param_1,FUN_10a472f40,param_4,param_5);
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a472ff0; end: 10a473183;  */

void FUN_10a472ff0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a473184(param_5);
  if ((((*param_4 == 3) && (param_4[4] == 3)) && (param_4[8] == 3)) &&
     ((param_4[0xc] == 3 && (param_4[0x10] == 3)))) {
    fVar17 = (float)*(double *)(param_4 + 10);
    fVar18 = (float)*(double *)(param_4 + 6);
    fVar16 = 0.0;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 10))) {
      fVar17 = 0.0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 6))) {
      fVar18 = 0.0;
    }
    if (fVar18 != fVar17) {
      fVar2 = (float)*(double *)(param_4 + 0x12);
      if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x12))) {
        fVar2 = fVar16;
      }
      fVar3 = (float)*(double *)(param_4 + 2);
      if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
        fVar3 = fVar16;
      }
      fVar4 = (float)*(double *)(param_4 + 0xe);
      if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0xe))) {
        fVar4 = fVar16;
      }
      *param_1 = 3;
      *(double *)(param_1 + 2) =
           (double)(fVar4 + (fVar2 - fVar4) * ((fVar3 - fVar18) / (fVar17 - fVar18)));
      plVar1 = param_2 + 0x4b;
      lVar7 = param_2[0x59];
      uVar8 = lVar7 - 1;
      param_2[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar1[lVar7 + 2];
        if (param_2[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(param_2[0x57] + -8);
        param_2[0x57] = param_2[0x57] + -8;
        if (param_2[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar1;
      lVar12 = param_2[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = param_2[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar1;
            if (uVar9 >> 0x3c == 0) {
              lVar6 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar6 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar1 = lVar11;
              param_2[0x4c] = lVar12 + uVar15 * 0x10;
              param_2[0x4d] = lVar6 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        param_2[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        param_2[0x4c] = lVar7;
      }
code_r0x00010988c138:
      param_2[0x5a] = uVar8;
      return;
    }
    FUN_10a00946c(&UNK_10f65a3ab);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a473170);
  (*pcVar5)();
}



/* Entry: 10a473184; end: 10a4731a7;  */

ulong FUN_10a473184(ulong param_1,undefined8 param_2)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  
  if ((int)param_2 == 5) {
    return param_1;
  }
  pfVar1 = (float *)0x5;
  FUN_10a052ee0(5,0,param_2);
  uVar2 = (ulong)(uint)pfVar1[9];
  _atan2f(uVar2,pfVar1[10]);
  fVar4 = SQRT(pfVar1[4] * pfVar1[4] + *pfVar1 * *pfVar1);
  _atan2f(-pfVar1[8],fVar4);
  uVar3 = uVar2;
  ___sincosf_stret(uVar2);
  _atan2f(-(fVar4 * pfVar1[1]) + pfVar1[2] * (float)uVar3,
          -((float)uVar3 * pfVar1[6]) + pfVar1[5] * fVar4);
  return (ulong)(uint)-(float)uVar2;
}



/* Entry: 10a4731a8; end: 10a473233;  */

float FUN_10a4731a8(float *param_1)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  uVar1 = (ulong)(uint)param_1[9];
  _atan2f(uVar1,param_1[10]);
  fVar3 = SQRT(param_1[4] * param_1[4] + *param_1 * *param_1);
  _atan2f(-param_1[8],fVar3);
  uVar2 = uVar1;
  ___sincosf_stret(uVar1);
  _atan2f(-(fVar3 * param_1[1]) + param_1[2] * (float)uVar2,
          -((float)uVar2 * param_1[6]) + param_1[5] * fVar3);
  return -(float)uVar1;
}



/* Entry: 10a473234; end: 10a473237;  */

void FUN_10a473234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a473238; end: 10a473253;  */

void FUN_10a473238(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000105277f8c();
  func_0x000105277f8c();
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar3 = param_2[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != lVar2);
      lVar1 = *param_2;
    }
    param_2[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a473254; end: 10a47332b;  */

void FUN_10a473254(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}


