/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1ec544; end: 10a1ec603;  */

long * FUN_10a1ec544(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)param_1[0x13];
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    plVar4 = (long *)(ulong)*(uint *)((long)param_1 + 0x1ec);
  }
  else {
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0xb8))();
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
  }
  return plVar4;
}



/* Entry: 10a1ec604; end: 10a1ec6c3;  */

long * FUN_10a1ec604(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)param_1[0x13];
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x3e);
  }
  else {
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0xc0))();
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
  }
  return plVar4;
}



/* Entry: 10a1ec6c4; end: 10a1ec783;  */

long * FUN_10a1ec6c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)param_1[0x13];
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    plVar4 = (long *)(ulong)*(uint *)((long)param_1 + 500);
  }
  else {
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 200))();
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
  }
  return plVar4;
}



/* Entry: 10a1ec784; end: 10a1ec833;  */

long * FUN_10a1ec784(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = *(long **)(param_1 + 0x98);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x1f8);
  }
  else {
    plVar6 = *(long **)(param_1 + 0xa0);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0xe0))();
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
  }
  return plVar4;
}



/* Entry: 10a1ec834; end: 10a1ec847;  */

undefined8 FUN_10a1ec834(void)

{
  return 0;
}



/* Entry: 10a1ec848; end: 10a1ec893;  */

float FUN_10a1ec848(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0xb0))();
  (**(code **)(*param_1 + 0xb8))(param_1);
  return (float)((ulong)plVar1 & 0xffffffff) / (float)((ulong)param_1 & 0xffffffff);
}



/* Entry: 10a1ec894; end: 10a1ec917;  */

void FUN_10a1ec894(long param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
  }
  if (*(long *)(param_1 + 600) != 0) {
    FUN_10a20f5c0(param_1 + 0x240);
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_10a1c054c(param_1 + 0xa8,&uStack_70);
  }
  return;
}



/* Entry: 10a1ec918; end: 10a1ec947;  */

void FUN_10a1ec918(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long **)(param_2 + 0x98) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1ec92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x98) + 0x90))();
    return;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x224);
  uVar1 = *(undefined8 *)(param_2 + 0x204);
  uVar3 = *(undefined8 *)(param_2 + 0x21c);
  uVar2 = *(undefined8 *)(param_2 + 0x214);
  param_1[1] = *(undefined8 *)(param_2 + 0x20c);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 10a1ec948; end: 10a1eca77;  */

void FUN_10a1ec948(float *param_1,long *param_2,int *param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  fVar3 = 1.0;
  fVar2 = 0.0;
  fVar1 = 0.0;
  fVar4 = 1.0;
  if (0 < (int)*param_4 && 0 < (int)param_4[1]) {
    fVar1 = (float)param_4[1];
    fVar2 = (float)*param_4;
    fVar4 = (float)(param_3[2] - *param_3) / fVar2;
    fVar3 = (float)(param_3[3] - param_3[1]) / fVar1;
    fVar2 = (float)*param_3 / fVar2;
    fVar1 = (float)param_3[1] / fVar1;
  }
  (**(code **)(*param_2 + 0x90))(&fStack_74);
  *param_1 = fStack_70 * 0.0 + fStack_74 * fVar4 + fStack_6c * fVar2;
  param_1[1] = fVar3 * fStack_70 + fStack_74 * 0.0 + fStack_6c * fVar1;
  param_1[2] = fStack_6c + fStack_70 * 0.0 + fStack_74 * 0.0;
  param_1[3] = fStack_64 * 0.0 + fStack_68 * fVar4 + fStack_60 * fVar2;
  param_1[4] = fVar3 * fStack_64 + fStack_68 * 0.0 + fStack_60 * fVar1;
  param_1[5] = fStack_60 + fStack_64 * 0.0 + fStack_68 * 0.0;
  param_1[6] = fStack_58 * 0.0 + fStack_5c * fVar4 + fStack_54 * fVar2;
  param_1[7] = fVar3 * fStack_58 + fStack_5c * 0.0 + fStack_54 * fVar1;
  param_1[8] = fStack_54 + fStack_58 * 0.0 + fStack_5c * 0.0;
  return;
}



/* Entry: 10a1eca78; end: 10a1ecc87;  */

void FUN_10a1eca78(long param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ushort uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a1eca8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x98))(plVar6);
    return;
  }
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[4];
  fVar11 = param_2[5];
  fVar12 = param_2[6];
  fVar13 = param_2[7];
  fVar14 = param_2[8];
  if (((((*(float *)(param_1 + 0x204) != *param_2) || (*(float *)(param_1 + 0x208) != fVar7)) ||
       (*(float *)(param_1 + 0x20c) != fVar8)) ||
      (((*(float *)(param_1 + 0x210) != fVar9 || (*(float *)(param_1 + 0x214) != fVar10)) ||
       ((*(float *)(param_1 + 0x218) != fVar11 ||
        ((*(float *)(param_1 + 0x21c) != fVar12 || (*(float *)(param_1 + 0x220) != fVar13)))))))) ||
     (*(float *)(param_1 + 0x224) != fVar14)) {
    puVar3 = &uStack_90;
    uVar4 = 0;
    lVar1 = param_1 + 0x204;
    *(float *)(param_1 + 0x204) = *param_2;
    *(float *)(param_1 + 0x208) = fVar7;
    *(float *)(param_1 + 0x20c) = fVar8;
    *(float *)(param_1 + 0x210) = fVar9;
    *(float *)(param_1 + 0x214) = fVar10;
    *(float *)(param_1 + 0x218) = fVar11;
    *(float *)(param_1 + 0x21c) = fVar12;
    *(float *)(param_1 + 0x220) = fVar13;
    *(float *)(param_1 + 0x224) = fVar14;
    func_0x00010a1bd170();
    lVar2 = -0x204;
    if (cRam00000001137eab32 == '\0') {
      lVar2 = -0xffff;
    }
    lVar2 = lVar1 + lVar2;
    if ((*(ushort *)(lVar2 + 0x101) >> 8 & 1) == 0) {
      if (((*(long *)(lVar2 + 0xd8) != 0) || ((*(ushort *)(lVar2 + 0x101) >> 9 & 1) != 0)) ||
         (*(long *)(lVar2 + 0xf8) != 0)) {
        func_0x00010a1bd170();
        if ((uVar4 & 1) != 0) {
          return;
        }
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        ppuStack_38 = &PTR_DAT_110bb2460;
        uVar4 = (ulong)&uStack_90 | 8;
        FUN_10a0dad0c(uVar4,&ppuStack_38);
        uVar5 = 0x204;
        if (cRam00000001137eab32 == '\0') {
          uVar5 = 0xffff;
        }
        lVar2 = 0x204;
        if (cRam00000001137eab32 == '\0') {
          lVar2 = 0xffff;
        }
        if ((*(ushort *)((lVar1 - lVar2) + 0x101) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar5 = 0x204;
          if (cRam00000001137eab32 == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar4 != 0) {
            FUN_10a1bd648();
            uVar5 = 0x204;
            if (cRam00000001137eab32 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar1 - (ulong)uVar5) + 0xa8,&uStack_90);
        return;
      }
      *(long *)(lVar2 + 0xb8) = *(long *)(lVar2 + 0xb8) + 1;
    }
    if ((*(undefined ***)(lVar2 + 0x108) != &PTR_DAT_110bb2460) &&
       (FUN_10a1bd5e0(), puVar3 != (undefined8 *)0x0)) {
      FUN_10a1bd648();
      *(undefined ***)(lVar2 + 0x108) = &PTR_DAT_110bb2460;
    }
  }
  return;
}



/* Entry: 10a1ecc88; end: 10a1ed003;  */

/* WARNING: Removing unreachable block (ram,0x00010a1ecea8) */
/* WARNING: Removing unreachable block (ram,0x00010a1ece98) */
/* WARNING: Removing unreachable block (ram,0x00010a1ecf08) */

void FUN_10a1ecc88(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined8 **ppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  func_0x00010989f98c(auStack_58,param_2 + 5);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_e8,uVar1 + 9,&ppuStack_100);
  pppuVar2 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar2 = appuStack_e8;
  }
  if (uVar1 != 0) {
    _memmove(pppuVar2,auStack_58,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x3a68746469772020;
  *(undefined2 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0x20;
  (**(code **)(*param_2 + 0xb0))(param_2);
  __ZNSt3__19to_stringEj(&ppuStack_100);
  pppuVar2 = (undefined8 ***)ppuStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    pppuVar2 = &ppuStack_100;
  }
  pppuVar4 = appuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar2,uStack_f8);
  puStack_c8 = pppuVar4[1];
  puStack_d0 = *pppuVar4;
  puStack_c0 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = &puStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&UNK_10f644f1b,10);
  uStack_a8 = ppuVar5[1];
  uStack_b0 = *ppuVar5;
  lStack_a0 = (long)ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  (**(code **)(*param_2 + 0xb8))(param_2);
  __ZNSt3__19to_stringEj(&ppuStack_118);
  pppuVar2 = (undefined8 ***)ppuStack_118;
  if (-1 < (char)bStack_101) {
    uStack_110 = (ulong)bStack_101;
    pppuVar2 = &ppuStack_118;
  }
  puVar6 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppuVar2,uStack_110);
  uStack_88 = puVar6[1];
  uStack_90 = *puVar6;
  uStack_80 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f644f26,10);
  uStack_68 = puVar6[1];
  uStack_70 = *puVar6;
  uStack_60 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  (**(code **)(*param_2 + 0xa8))(param_2);
  __ZNSt3__19to_stringEf(&puStack_130);
  ppuVar3 = (undefined1 **)puStack_130;
  if (-1 < (char)bStack_119) {
    uStack_128 = (ulong)bStack_119;
    ppuVar3 = &puStack_130;
  }
  puVar6 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,ppuVar3,uStack_128);
  uVar7 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar7;
  param_1[2] = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_119 < '\0') {
    __ZdlPv(puStack_130);
  }
  if ((char)bStack_101 < '\0') {
    __ZdlPv(ppuStack_118);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(puStack_d0);
  }
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  return;
}



/* Entry: 10a1ed004; end: 10a1ed00b;  */

/* WARNING: Removing unreachable block (ram,0x00010a1ecea8) */
/* WARNING: Removing unreachable block (ram,0x00010a1ece98) */
/* WARNING: Removing unreachable block (ram,0x00010a1ecf08) */

void FUN_10a1ed004(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined8 **ppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  plVar7 = (long *)(param_2 + -0x28);
  func_0x00010989f98c(auStack_58,param_2);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_e8,uVar1 + 9,&ppuStack_100);
  pppuVar2 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar2 = appuStack_e8;
  }
  if (uVar1 != 0) {
    _memmove(pppuVar2,auStack_58,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x3a68746469772020;
  *(undefined2 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0x20;
  (**(code **)(*plVar7 + 0xb0))(plVar7);
  __ZNSt3__19to_stringEj(&ppuStack_100);
  pppuVar2 = (undefined8 ***)ppuStack_100;
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    pppuVar2 = &ppuStack_100;
  }
  pppuVar4 = appuStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar2,uStack_f8);
  puStack_c8 = pppuVar4[1];
  puStack_d0 = *pppuVar4;
  puStack_c0 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = &puStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&UNK_10f644f1b,10);
  uStack_a8 = ppuVar5[1];
  uStack_b0 = *ppuVar5;
  lStack_a0 = (long)ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  (**(code **)(*plVar7 + 0xb8))(plVar7);
  __ZNSt3__19to_stringEj(&ppuStack_118);
  pppuVar2 = (undefined8 ***)ppuStack_118;
  if (-1 < (char)bStack_101) {
    uStack_110 = (ulong)bStack_101;
    pppuVar2 = &ppuStack_118;
  }
  puVar6 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppuVar2,uStack_110);
  uStack_88 = puVar6[1];
  uStack_90 = *puVar6;
  uStack_80 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f644f26,10);
  uStack_68 = puVar6[1];
  uStack_70 = *puVar6;
  uStack_60 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  (**(code **)(*plVar7 + 0xa8))(plVar7);
  __ZNSt3__19to_stringEf(&puStack_130);
  ppuVar3 = (undefined1 **)puStack_130;
  if (-1 < (char)bStack_119) {
    uStack_128 = (ulong)bStack_119;
    ppuVar3 = &puStack_130;
  }
  puVar6 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,ppuVar3,uStack_128);
  uVar8 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar8;
  param_1[2] = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_119 < '\0') {
    __ZdlPv(puStack_130);
  }
  if ((char)bStack_101 < '\0') {
    __ZdlPv(ppuStack_118);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(puStack_d0);
  }
  if ((char)bStack_e9 < '\0') {
    __ZdlPv(ppuStack_100);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  return;
}



/* Entry: 10a1ed00c; end: 10a1ed127;  */

undefined *** FUN_10a1ed00c(undefined ***param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  ulong *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  int iVar16;
  undefined4 uVar17;
  undefined ***pppuVar18;
  ulong uVar19;
  uint uVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined ***unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  pppuVar22 = param_1;
  if ((*(byte *)((long)param_1 + 0x201) & 1) == 0) {
    puVar13 = (ulong *)0x1;
    FUN_10a088744();
    if (puVar13 == (ulong *)0x0) {
      pppuVar21 = (undefined ***)0x0;
    }
    else {
      pppuVar21 = (undefined ***)*puVar13;
    }
    if ((int)pppuVar22 == 2) {
      pppuVar8 = pppuVar21;
      (*(code *)(*pppuVar21)[5])();
      pppuVar22 = pppuVar21;
      (*(code *)(*pppuVar21)[6])();
      pppuVar9 = pppuVar21;
      (*(code *)(*pppuVar21)[7])();
      pppuVar10 = pppuVar21;
      (*(code *)(*pppuVar21)[4])();
      pppuVar11 = pppuVar21;
      (*(code *)(*pppuVar21)[10])();
      pppuVar12 = pppuVar21;
      (*(code *)(*pppuVar21)[0xe])();
      (*(code *)(*pppuVar21)[9])();
      lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_98 = param_1 + 0x15;
      uVar2 = *(ushort *)((long)param_1 + 0x101);
      *(ushort *)((long)param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
      uStack_90 = 1;
      pcStack_a8 = FUN_10a1d0710;
      ppuStack_a0 = &PTR_FUN_110bad6c8;
      pppuVar14 = pppuVar22;
      pppuVar15 = pppuVar9;
      pppuVar5 = pppuVar10;
      pppuVar6 = pppuVar11;
      pppuVar18 = pppuVar12;
      if (*(int *)(param_1 + 0x3d) != (int)pppuVar8) {
        unaff_x26 = param_1 + 0x3d;
        *(int *)unaff_x26 = (int)pppuVar8;
        func_0x00010a1bd170(auStack_b0);
        func_0x00010a20efac(unaff_x26);
      }
      iVar16 = (int)pppuVar6;
      uVar17 = SUB84(pppuVar18,0);
      uVar20 = (uint)pppuVar5;
      if (*(int *)((long)param_1 + 0x1ec) != (int)pppuVar22) {
        unaff_x26 = (undefined ***)((long)param_1 + 0x1ec);
        *(int *)unaff_x26 = (int)pppuVar22;
        func_0x00010a1bd170(auStack_b0);
        func_0x00010a20f0c4(unaff_x26);
      }
      if (*(int *)(param_1 + 0x3f) != (int)pppuVar10) {
        pppuVar22 = param_1 + 0x3f;
        *(int *)pppuVar22 = (int)pppuVar10;
        func_0x00010a1bd170(auStack_b0);
        FUN_10a1fd58c(pppuVar22);
      }
      if (*(int *)((long)param_1 + 0x1fc) != (int)pppuVar11) {
        pppuVar10 = (undefined ***)((long)param_1 + 0x1fc);
        *(int *)pppuVar10 = (int)pppuVar11;
        func_0x00010a1bd170(auStack_b0);
        func_0x00010a20f1dc(pppuVar10);
      }
      *(char *)(param_1 + 0x40) = (char)pppuVar12;
      if (*(int *)(param_1 + 0x3e) != (int)pppuVar9) {
        pppuVar12 = param_1 + 0x3e;
        *(int *)pppuVar12 = (int)pppuVar9;
        func_0x00010a1bd170(auStack_b0);
        func_0x00010a20f328(pppuVar12);
      }
      *(int *)((long)param_1 + 500) = (int)pppuVar21;
      *(undefined1 *)((long)param_1 + 0x201) = 1;
      if (*(char *)(param_1 + 0x3c) == '\x01') {
        func_0x00010a042d30(param_1 + 0x3a);
        *(undefined1 *)(param_1 + 0x3c) = 0;
      }
      FUN_10a044790(&pcStack_a8);
      pppuVar5 = &ppuStack_a0;
      (*(code *)*ppuStack_a0)();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return pppuVar5;
      }
      ___stack_chk_fail();
      FUN_10a044790(&pcStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      pppuVar6 = pppuVar5;
      __Unwind_Resume();
      pcStack_b8 = FUN_10a1da580;
      pppuStack_100 = unaff_x26;
      pppuStack_f8 = pppuVar22;
      pppuStack_f0 = pppuVar10;
      pppuStack_e8 = pppuVar11;
      pppuStack_e0 = pppuVar12;
      pppuStack_d8 = pppuVar9;
      pppuStack_d0 = pppuVar21;
      pppuStack_c8 = pppuVar5;
      puStack_c0 = &stack0xfffffffffffffff0;
      pppuVar6[0x58] = &PTR_FUN_110c383b8;
      *(undefined2 *)(pppuVar6 + 0x5b) = 0x100;
      pppuVar6[0x5a] = (undefined **)0x0;
      pppuVar6[0x59] = (undefined **)0x0;
      pppuVar22 = pppuVar6;
      FUN_10a1da04c();
      *pppuVar22 = &PTR_DAT_110bae008;
      pppuVar22[2] = &PTR_FUN_110bae138;
      pppuVar22[5] = &PTR_FUN_110bae168;
      pppuVar22[0x58] = &PTR_FUN_110bae210;
      pppuVar22[0x15] = &PTR_FUN_110bae1c0;
      uVar1 = 4;
      if (0x26 < uVar20 - 0x30) {
        uVar1 = uVar20;
      }
      pppuVar22[0x52] = (undefined **)0x0;
      pppuVar22[0x51] = (undefined **)0x0;
      pppuVar22[0x54] = (undefined **)0x0;
      pppuVar22[0x53] = (undefined **)0x0;
      pppuVar22[0x56] = (undefined **)0x0;
      pppuVar22[0x55] = (undefined **)0x0;
      pppuVar22[0x57] = (undefined **)0x0;
      pppuVar21 = pppuVar8;
      FUN_10a2421c8();
      ppuVar7 = pppuVar21[0x45];
      (**(code **)(*ppuVar7 + 0x68))();
      uVar20 = *(uint *)(ppuVar7 + 0x11);
      if ((0 < (int)uVar20) && (uVar20 < (uint)pppuVar14 || uVar20 < (uint)pppuVar15)) {
        FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
        FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
        (*pcVar4)();
      }
      uVar20 = uVar1;
      if (uVar1 == 0x22) {
        uVar20 = 0x25;
      }
      uVar3 = 0x24;
      if (uVar1 != 0x21) {
        uVar3 = uVar20;
      }
      uVar20 = 1;
      FUN_109fc8e58(1,1,uVar3);
      if (uVar20 != 0) {
        uVar19 = ((ulong)pppuVar15 & 0xffffffff) * ((ulong)pppuVar14 & 0xffffffff);
        uVar3 = 0;
        if (uVar20 != 0) {
          uVar3 = 0xffffffff / uVar20;
        }
        if (uVar3 <= uVar19 && uVar19 - uVar3 != 0) {
          FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
          FUN_10a0029c0(&lStack_148);
          goto LAB_10a1da858;
        }
      }
      FUN_10a1da3a4(pppuVar6,pppuVar14,pppuVar15,0,0,uVar1,0,0);
      FUN_10a2421c8();
      ppuVar7 = pppuVar8[0x45];
      lStack_148 = (long)pppuVar14 << 0x20;
      uStack_140 = CONCAT44(1,(uint)pppuVar15);
      uStack_138 = (ulong)uVar1;
      uStack_12c = 0x100000001;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_130 = uVar17;
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7,&lStack_148);
      FUN_10a099d88(pppuVar22 + 0x51,ppuVar7);
      if (iVar16 != 0) {
        lStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        pppuVar22 = pppuVar6;
        (*(code *)(*pppuVar6)[0x1d])();
        if ((int)pppuVar22 == 0x21) {
          pppuVar22 = (undefined ***)0x24;
        }
        else if ((int)pppuVar22 == 0x22) {
          pppuVar22 = (undefined ***)0x25;
        }
        pppuVar21 = pppuVar6;
        (*(code *)(*pppuVar6)[0x16])();
        pppuVar10 = pppuVar6;
        (*(code *)(*pppuVar6)[0x17])(pppuVar6);
        FUN_109fc8e58(pppuVar21,pppuVar10,pppuVar22);
        if (((ulong)pppuVar21 & 0xffffffff) != 0) {
          func_0x000107c27d58(&lStack_148);
        }
        pppuVar22 = pppuVar6;
        (*(code *)(*pppuVar6)[0x16])();
        pppuVar21 = pppuVar6;
        (*(code *)(*pppuVar6)[0x17])();
        uStack_108 = (ulong)pppuVar22 & 0xffffffff | (long)pppuVar21 << 0x20;
        uStack_110 = 0;
        FUN_10a1daa20(pppuVar6,&uStack_110,lStack_148);
        if (lStack_148 != 0) {
          uStack_140 = lStack_148;
          __ZdlPv();
        }
      }
      return pppuVar6;
    }
  }
  return pppuVar22;
}



/* Entry: 10a1ed128; end: 10a1ed12f;  */

undefined8 FUN_10a1ed128(void)

{
  return 0;
}



/* Entry: 10a1ed130; end: 10a1ed2a3;  */

long * FUN_10a1ed130(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined4 uStack_b0;
  ulong uStack_ac;
  ulong uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar2 = param_1 + 0x2c;
  plVar7 = param_1;
  if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
    do {
      plVar6 = plVar7;
      (**(code **)(*plVar7 + 0x80))();
      if ((int)plVar6 != 2) goto LAB_10a1ed154;
      puVar1 = (ulong *)(plVar7 + 0x13);
      plVar7 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    plVar7 = param_1;
    (**(code **)(*param_1 + 0xb0))();
    plVar6 = param_1;
    (**(code **)(*param_1 + 0xb8))();
    iVar9 = (int)plVar7;
    iVar5 = (int)plVar6;
    if (iVar9 != 1 || iVar5 != 1) {
      uStack_ac = (ulong)plVar7 & 0xffffffff | (long)plVar6 << 0x20;
      uStack_b0 = 1;
      uStack_a4 = CONCAT44(-(uint)((int)((uint)(iVar5 < iVar9) << 0x1f) < 0),
                           -(uint)((int)((uint)(iVar5 < iVar9) << 0x1f) < 0)) & 0xfdf00000fdf00000 ^
                  0x42700000bf800000;
      uStack_94 = 0x7fc000007fc00000;
      uStack_9c = 0xbf800000bf800000;
      uStack_84 = 0;
      uStack_8c = 0x3f800000;
      uStack_74 = 0;
      uStack_7c = 0x3f80000000000000;
      uStack_64 = 0x3f800000;
      uStack_6c = 0;
      uStack_54 = 0x3f80000000000000;
      uStack_5c = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
      FUN_10a0ec8a8(&uStack_b0);
      FUN_10a1ed2a4(plVar2,&uStack_b0);
      plVar7 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
  }
LAB_10a1ed154:
  if ((char)param_1[0x3c] == '\0') {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}



/* Entry: 10a1ed2a4; end: 10a1ed3c3;  */

undefined8 * FUN_10a1ed2a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = uVar1;
    *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)((long)param_2 + 0xc);
    *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
    *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
    uVar1 = *(undefined8 *)((long)param_2 + 0x24);
    *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x24) = uVar1;
    uVar2 = *(undefined8 *)((long)param_2 + 0x3c);
    uVar1 = *(undefined8 *)((long)param_2 + 0x34);
    uVar4 = *(undefined8 *)((long)param_2 + 0x4c);
    uVar3 = *(undefined8 *)((long)param_2 + 0x44);
    uVar6 = *(undefined8 *)((long)param_2 + 0x5c);
    uVar5 = *(undefined8 *)((long)param_2 + 0x54);
    *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
    *(undefined8 *)((long)param_1 + 0x5c) = uVar6;
    *(undefined8 *)((long)param_1 + 0x54) = uVar5;
    *(undefined8 *)((long)param_1 + 0x4c) = uVar4;
    *(undefined8 *)((long)param_1 + 0x44) = uVar3;
    *(undefined8 *)((long)param_1 + 0x3c) = uVar2;
    *(undefined8 *)((long)param_1 + 0x34) = uVar1;
    FUN_10a0eca24(param_1 + 0xe,param_2 + 0xe);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar3 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    uVar7 = *(undefined8 *)((long)param_2 + 0x5c);
    *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
    *(undefined8 *)((long)param_1 + 0x5c) = uVar7;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    uVar1 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar1;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return param_1;
}



/* Entry: 10a1ed3c4; end: 10a1ed49f;  */

undefined8 FUN_10a1ed3c4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  func_0x00010a1ed36c();
  if (*param_2 == 0) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    (**(code **)(*param_1 + 0x118))(param_1,&uStack_30);
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
  }
  else {
    lVar5 = *(long *)(*param_2 + 8);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != -1)) {
      FUN_10a20eb44(param_1 + 0x48,param_2,param_2);
      (**(code **)(*param_1 + 0x110))(param_1,param_2);
      return 1;
    }
  }
  return 0;
}



/* Entry: 10a1ed4a0; end: 10a1ed58b;  */

void FUN_10a1ed4a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_2 + 0x98) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x268);
    __ZNSt3__15mutex4lockEv(uVar6);
    lVar4 = *(long *)(param_2 + 0x268);
    uVar7 = *(undefined8 *)(lVar4 + 0x40);
    param_1[1] = *(undefined8 *)(lVar4 + 0x48);
    *param_1 = uVar7;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar6);
    return;
  }
  plVar5 = *(long **)(param_2 + 0xa0);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a1ed4a0(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a1ed58c; end: 10a1ed677;  */

void FUN_10a1ed58c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x268);
    __ZNSt3__15mutex4lockEv(uVar6);
    *(undefined1 *)(*(long *)(param_1 + 0x268) + 0x6c) = 1;
    FUN_10a1ed678(*(long *)(param_1 + 0x268) + 0x40);
    func_0x00010a1ed6d4(*(long *)(param_1 + 0x268) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar6);
    return;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a1ed58c();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a1ed678; end: 10a1ed72f;  */

void FUN_10a1ed678(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a1ed730; end: 10a1ed827;  */

ulong FUN_10a1ed730(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x98);
  if (uVar4 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x268);
    __ZNSt3__15mutex4lockEv(uVar7);
    lVar5 = *(long *)(*(long *)(param_1 + 0x268) + 0x40);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) {
      uVar4 = 0;
    }
    else if (*(long *)(lVar5 + 0x40) == 0) {
      uVar4 = (ulong)(*(long *)(lVar5 + 0x18) * (long)*(int *)(lVar5 + 0x14) != 0);
    }
    else {
      uVar4 = 1;
    }
    __ZNSt3__15mutex6unlockEv(uVar7);
  }
  else {
    plVar6 = *(long **)(param_1 + 0xa0);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1ed730();
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
  }
  return uVar4;
}



/* Entry: 10a1ed828; end: 10a1ed913;  */

void FUN_10a1ed828(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_2 + 0x98) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x268);
    __ZNSt3__15mutex4lockEv(uVar6);
    lVar4 = *(long *)(param_2 + 0x268);
    uVar7 = *(undefined8 *)(lVar4 + 0x50);
    param_1[1] = *(undefined8 *)(lVar4 + 0x58);
    *param_1 = uVar7;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar6);
    return;
  }
  plVar5 = *(long **)(param_2 + 0xa0);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a1ed828(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a1ed914; end: 10a1ed9f3;  */

ulong FUN_10a1ed914(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x98);
  if (uVar4 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x268);
    __ZNSt3__15mutex4lockEv(uVar7);
    lVar5 = *(long *)(*(long *)(param_1 + 0x268) + 0x50);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)(*(long *)(lVar5 + 0x60) != 0);
    }
    __ZNSt3__15mutex6unlockEv(uVar7);
  }
  else {
    plVar6 = *(long **)(param_1 + 0xa0);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1ed914();
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
  }
  return uVar4;
}



/* Entry: 10a1ed9f4; end: 10a1edabb;  */

long FUN_10a1ed9f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x268);
    __ZNSt3__15mutex4lockEv(uVar7);
    lVar4 = *(long *)(*(long *)(param_1 + 0x268) + 0x60);
    __ZNSt3__15mutex6unlockEv(uVar7);
  }
  else {
    plVar6 = *(long **)(param_1 + 0xa0);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1ed9f4();
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
  }
  return lVar4;
}



/* Entry: 10a1edabc; end: 10a1edb3f;  */

undefined1  [16] FUN_10a1edabc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f644f31;
  return auVar1;
}



/* Entry: 10a1edb40; end: 10a1ede1f;  */

void FUN_10a1edb40(ulong param_1)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f63f32c,0xf);
  func_0x000109887da8(appuStack_c8,&UNK_10f644f31,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1b10;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xcffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x170;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb1b10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a20f614,0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f301a5c,FUN_10a20f7fc,FUN_10a20f8ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"region",FUN_10a20fdd4,FUN_10a20fe84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"clear",FUN_10a20ff3c,FUN_10a20fff4);
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
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f644f31,0xd);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1ede04);
  (*pcVar6)();
}



/* Entry: 10a1ede20; end: 10a1ede4f;  */

void FUN_10a1ede20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10a1ede50; end: 10a1edeb3;  */

undefined8 * FUN_10a1ede50(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a1edeb4; end: 10a1edf77;  */

void FUN_10a1edeb4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10a1edf78; end: 10a1ee247;  */

void FUN_10a1edf78(ulong param_1)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f645a5f,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1b40;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xcffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x170;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb1b40;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ee228;
    FUN_10a054dac(param_1,&DAT_10f3165f0,FUN_10a2100b4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f644f3f,FUN_10a210230,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f644f47,FUN_10a210358,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644f55,FUN_10a210428,FUN_10a21050c);
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
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f645a5f,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a1ee228:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1ee22c);
  (*pcVar6)();
}



/* Entry: 10a1ee248; end: 10a1ee3bf;  */

void FUN_10a1ee248(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  char *pcStack_58;
  long lStack_50;
  char acStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
  (**(code **)(*param_2 + 0x1d8))(&pcStack_58,param_2,&PTR_DAT_110bafbd8);
  if ((acStack_48[0] == '\x01') && (lStack_50 != 0)) {
    FUN_10a0d918c((undefined8 *)(param_1 + 0xe0),pcStack_58,pcStack_58 + lStack_50);
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bafbf8,0);
  *(int *)(param_1 + 0xf8) = (int)plVar1;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bafc18,0);
  *(int *)(param_1 + 0xfc) = (int)plVar1;
  uStack_60 = 0;
  plVar1 = param_2;
  FUN_10a1f53a4(param_2,&PTR_DAT_110bb2050,auStack_70);
  if (((ulong)plVar1 & 1) == 0) {
    pcStack_58 = "font";
    lStack_50 = 4;
    FUN_10a1f5b2c(acStack_48);
    FUN_10a1f53a4(param_2,&pcStack_58,auStack_70);
  }
  FUN_10a1f5b9c(auStack_88,auStack_70);
  FUN_10a1ee3c0(param_1,auStack_88);
  FUN_10a1f57fc(auStack_88);
  puVar2 = auStack_70;
  FUN_10a1f57fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a1f57fc(auStack_70);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_98 = FUN_10a1ee3c0;
  plStack_b0 = param_2;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10a1f5b9c(auStack_c8);
  FUN_10a1f6844(puVar3 + 0x100,auStack_c8);
  FUN_10a1f57fc(auStack_c8);
  return;
}



/* Entry: 10a1ee3c0; end: 10a1ee403;  */

void FUN_10a1ee3c0(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10a1f5b9c(auStack_38);
  FUN_10a1f6844(param_1 + 0x100,auStack_38);
  FUN_10a1f57fc(auStack_38);
  return;
}



/* Entry: 10a1ee404; end: 10a1ee4c3;  */

void FUN_10a1ee404(long param_1,long *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110bafbd8,*(long *)(param_1 + 0xe0),
             *(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bafbf8,*(undefined4 *)(param_1 + 0xf8));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bafc18,*(undefined4 *)(param_1 + 0xfc));
  FUN_10a1f6274(auStack_38,param_1 + 0x100);
  FUN_10a1f5c70(param_2,&PTR_DAT_110bb2050,auStack_38);
  FUN_10a1f57fc(auStack_38);
  return;
}



/* Entry: 10a1ee4c4; end: 10a1ee633;  */

undefined8 * FUN_10a1ee4c4(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110bb2a10;
  param_1[2] = &PTR_DAT_110bb2ab0;
  param_1[7] = &PTR_DAT_110bb2b08;
  func_0x00010a05a86c(param_1 + 0x2e);
  if ((*(char *)(param_1 + 0x2d) == '\x01') &&
     (plVar5 = (long *)param_1[0x2c], plVar5 != (long *)0x0)) {
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
  *param_1 = &PTR_FUN_110bafc48;
  param_1[2] = &PTR_DAT_110bafce8;
  param_1[7] = &PTR_DAT_110bafd40;
  plVar5 = (long *)param_1[0x2b];
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
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10a1f6428(param_1 + 0x25);
  }
  plVar5 = (long *)param_1[0x24];
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
  FUN_10a1f57fc(param_1 + 0x20);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a1ee634; end: 10a1ee647;  */

undefined8 * FUN_10a1ee634(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110bb2a10;
  param_1[2] = &PTR_DAT_110bb2ab0;
  param_1[7] = &PTR_DAT_110bb2b08;
  func_0x00010a05a86c(param_1 + 0x2e);
  if ((*(char *)(param_1 + 0x2d) == '\x01') &&
     (plVar5 = (long *)param_1[0x2c], plVar5 != (long *)0x0)) {
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
  *param_1 = &PTR_FUN_110bafc48;
  param_1[2] = &PTR_DAT_110bafce8;
  param_1[7] = &PTR_DAT_110bafd40;
  plVar5 = (long *)param_1[0x2b];
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
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10a1f6428(param_1 + 0x25);
  }
  plVar5 = (long *)param_1[0x24];
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
  FUN_10a1f57fc(param_1 + 0x20);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a1ee648; end: 10a1ee68b;  */

void FUN_10a1ee648(void)

{
  FUN_10a1ee4c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ee68c; end: 10a1eec43;  */

void FUN_10a1ee68c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  code *pcStack_90;
  code *pcStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + 0x168) == '\x01') {
    lVar8 = *(long *)(param_2 + 0x160);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    FUN_109d1a6fc(&plStack_c0);
    if (*(char *)(param_2 + 0x168) == '\x01') {
      func_0x0001092b4524(param_2 + 0x160,&plStack_c0);
    }
    else {
      *(long **)(param_2 + 0x160) = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar11 = plStack_c0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(param_2 + 0x168) = 1;
    }
    if (*(long *)(param_2 + 0x170) == 0) {
      FUN_10a05a5d4(&plStack_a8,&pcStack_88);
      FUN_10a1eec44(param_2 + 0x170,&plStack_a8);
      if (plStack_a0 != (long *)0x0) {
        plVar11 = plStack_a0 + 1;
        do {
          lVar8 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
    }
    lVar8 = *(long *)(*(long *)(param_2 + 0x50) + 0x870);
    puVar10 = *(undefined8 **)(lVar8 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(lVar8 + 0x28);
      plStack_c8 = *(long **)(lVar8 + 0x30);
    }
    else {
      plStack_c8 = *(long **)(lVar8 + 0x40);
    }
    if (plStack_c8 != (long *)0x0) {
      plVar11 = plStack_c8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar7 = *(undefined8 *)(param_2 + 0x170);
    lStack_f0 = lStack_b8;
    if (lStack_b8 != 0) {
      plVar11 = (long *)(lStack_b8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_f8 = param_2;
    puStack_d0 = puVar10;
    FUN_10a1eeca8(&lStack_e8,uVar7,&lStack_f8);
    lVar4 = lStack_d8;
    lVar8 = lStack_e0;
    plVar11 = (long *)puVar10[2];
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    if (plVar11 == (long *)0x0) {
      pcStack_88 = (code *)lStack_e8;
      lStack_e0 = 0;
      lStack_d8 = 0;
      plVar11 = (long *)0xd0;
      __Znwm();
      plVar11[2] = 0;
      plVar11[1] = 0x200000006;
      *(undefined2 *)(plVar11 + 3) = 4;
      plVar11[5] = 0;
      plVar11[4] = 0;
      plVar11[7] = 0;
      plVar11[6] = 0;
      plVar11[9] = 0;
      plVar11[8] = 0;
      plVar11[0xb] = 0;
      plVar11[10] = 0;
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
      plVar11[0xf] = 0;
      plVar11[0xe] = 0;
      plVar11[0x10] = 0;
      plVar11[0x11] = (long)(plVar11 + 3);
      plVar11[0x12] = 0;
      *(undefined2 *)(plVar11 + 0x13) = 0;
      *plVar11 = (long)&PTR_DAT_110bb2118;
      plStack_a8 = plVar11 + 0x14;
      *plStack_a8 = lStack_e8;
      plVar11[0x16] = lVar4;
      plVar11[0x15] = lVar8;
      plStack_80 = (long *)0x0;
      puStack_78 = (undefined8 *)0x0;
      *(undefined1 *)(plVar11 + 0x18) = 1;
      plVar11[0x19] = 0;
      plStack_a0 = plVar11;
      plStack_98 = plVar11;
      FUN_10a1eedbc(&pcStack_88);
      pcStack_90 = FUN_10a1f5e94;
    }
    else {
      lStack_b0 = 0;
      (**(code **)(*plVar11 + 0x28))(plVar11,0,&lStack_b0);
      lVar4 = lStack_d8;
      lVar8 = lStack_e0;
      if (lStack_b0 != 0) goto LAB_10a1eebd0;
      pcStack_88 = (code *)lStack_e8;
      lStack_e0 = 0;
      lStack_d8 = 0;
      plVar6 = (long *)0xd8;
      __Znwm();
      plVar6[2] = 0;
      plVar6[1] = 0x200000006;
      *(undefined2 *)(plVar6 + 3) = 4;
      plVar6[5] = 0;
      plVar6[4] = 0;
      plVar6[7] = 0;
      plVar6[6] = 0;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[0x10] = 0;
      plVar6[0x11] = (long)(plVar6 + 3);
      plVar6[0x12] = 0;
      *(undefined2 *)(plVar6 + 0x13) = 0;
      *plVar6 = (long)&PTR_FUN_110bb20e0;
      plVar6[0x14] = lStack_e8;
      plVar6[0x16] = lVar4;
      plVar6[0x15] = lVar8;
      plStack_80 = (long *)0x0;
      puStack_78 = (undefined8 *)0x0;
      *(undefined1 *)(plVar6 + 0x18) = 1;
      plVar6[0x19] = 0;
      plVar6[0x1a] = (long)plVar11;
      if (plStack_a0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_a0 + 1);
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
            (**(code **)(*plStack_a0 + 8))();
          }
        }
      }
      plStack_a0 = plVar6;
      if (plStack_98 != (long *)0x0) {
        func_0x0001092b4274(&plStack_98);
      }
      plStack_a8 = plVar6 + 0x14;
      plStack_98 = plVar6;
      FUN_10a1eedbc(&pcStack_88);
      pcStack_90 = FUN_10a1f5e64;
      __ZNSt13exception_ptrD1Ev(&lStack_b0);
    }
    plVar11 = plStack_a8;
    if (plStack_a8[5] != 0) {
      func_0x0001092b4274();
    }
    plVar11[5] = (long)plStack_98;
    plStack_98 = (long *)0x0;
    pcStack_88 = pcStack_90;
    plStack_80 = plStack_a8;
    puStack_78 = puVar10;
    (**(code **)*puVar10)(puVar10,&pcStack_88);
    plVar11 = plStack_a0;
    plStack_a0 = (long *)0x0;
    if ((plStack_98 != (long *)0x0) && (func_0x0001092b4274(&plStack_98), plStack_a0 != (long *)0x0)
       ) {
      puVar1 = (ulong *)(plStack_a0 + 1);
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
          (**(code **)(*plStack_a0 + 8))();
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
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
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    FUN_10a1eedbc(&lStack_e8);
    if (lStack_f0 != 0) {
      func_0x0001092b4274(&lStack_f0);
    }
    plVar11 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar6 = plStack_c8 + 1;
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
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    *param_1 = (long)plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar11 = plStack_c0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_b8 != 0) {
      func_0x0001092b4274(&lStack_b8);
    }
    if (plStack_c0 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_c0 + 1);
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
          (**(code **)(*plStack_c0 + 8))();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10a1eebd0:
  func_0x0001092af97c(&lStack_b0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1eebdc);
  (*pcVar5)();
}



/* Entry: 10a1eec44; end: 10a1eeca7;  */

undefined8 * FUN_10a1eec44(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a1eeca8; end: 10a1eedbb;  */

undefined8 * FUN_10a1eeca8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long alStack_80 [5];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar7 = *param_3;
  lVar2 = param_3[1];
  param_3[1] = 0;
  plVar5 = (long *)0x48;
  alStack_80[0] = lVar2;
  __Znwm();
  plVar5[2] = (long)&PTR_FUN_110bb2140;
  plVar5[3] = lVar7;
  plVar5[4] = lVar2;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar6;
  *puVar6 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar7 + 1;
  puVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = plVar5;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (lVar2 != 0) {
    func_0x0001092b4274(alStack_80,lVar2);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar5 = (long *)puVar6[2];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (puVar6[1] != 0) {
        FUN_10a05c0fc(puVar6[1],*puVar6);
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puVar6[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar6;
}



/* Entry: 10a1eedbc; end: 10a1eee3b;  */

undefined8 * FUN_10a1eedbc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a1eee3c; end: 10a1eee4f;  */

undefined8 * FUN_10a1eee3c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110bafc48;
  param_1[2] = &PTR_DAT_110bafce8;
  param_1[7] = &PTR_DAT_110bafd40;
  plVar5 = (long *)param_1[0x2b];
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
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10a1f6428(param_1 + 0x25);
  }
  plVar5 = (long *)param_1[0x24];
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
  FUN_10a1f57fc(param_1 + 0x20);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a1eee50; end: 10a1eee93;  */

void FUN_10a1eee50(void)

{
  func_0x00010a1ee55c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1eee94; end: 10a1eef2b;  */

undefined1  [16] FUN_10a1eee94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f644fd5;
  return auVar1;
}



/* Entry: 10a1eef2c; end: 10a1ef2fb;  */

void FUN_10a1eef2c(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f644fd5,0x16);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1b58;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xcffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x172;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110bb1b58;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ef2dc;
    FUN_10a054dac(param_1,&UNK_10f644fad,FUN_10a2115d4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ef2dc;
    FUN_10a054dac(param_1,&UNK_10f644fb5,FUN_10a211ba8,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ef2dc;
    FUN_10a054dac(param_1,&UNK_10f644fbf,FUN_10a212068,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ef2dc;
    FUN_10a054dac(param_1,&UNK_10f644fc7,FUN_10a21254c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ef2dc;
    FUN_10a054dac(param_1,&DAT_10f2e4657,FUN_10a212654,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f644fd5,0x16);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f644fd5;
    uStack_90 = 0xcffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f643dac;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f643dac;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a1ef2dc;
      FUN_10a054dac(param_1,&UNK_10f644141,FUN_10a2127b4,2,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a1ef2dc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1ef2e0);
  (*pcVar6)();
}



/* Entry: 10a1ef2fc; end: 10a1ef34f;  */

undefined8 * FUN_10a1ef2fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafd60;
  FUN_10a1f57fc(param_1 + 7);
  FUN_10a1f6428(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ef350; end: 10a1ef353;  */

undefined8 * FUN_10a1ef350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafd60;
  FUN_10a1f57fc(param_1 + 7);
  FUN_10a1f6428(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ef354; end: 10a1ef367;  */

void FUN_10a1ef354(void)

{
  FUN_10a1ef2fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ef368; end: 10a1ef403;  */

undefined8 * FUN_10a1ef368(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [272];
  undefined1 auStack_1c8 [8];
  undefined **appuStack_1c0 [2];
  undefined1 auStack_1b0 [272];
  
  if (*(char *)(param_1 + 0xb) == '\x01') {
    uVar13 = *(undefined8 *)((long)param_1 + 0x34);
    uVar12 = *(undefined8 *)((long)param_1 + 0x2c);
    uVar14 = param_1[4];
    *(undefined8 *)(param_2 + 0x30) = param_1[5];
    *(undefined8 *)(param_2 + 0x28) = uVar14;
    *(undefined8 *)(param_2 + 0x3c) = uVar13;
    *(undefined8 *)(param_2 + 0x34) = uVar12;
    if (*(char *)(param_2 + 0x60) == '\0') {
      puVar9 = (undefined8 *)(param_2 + 0x48);
      *puVar9 = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      FUN_10a1f6960(puVar9,param_1[8],param_1[9],(long)(param_1[9] - param_1[8]) >> 3);
      *(undefined1 *)(param_2 + 0x60) = 1;
      param_1 = puVar9;
    }
    else if ((undefined8 *)(param_2 + 0x28) != param_1 + 4) {
      lVar3 = param_1[8];
      lVar4 = param_1[9];
      uVar5 = lVar4 - lVar3 >> 3;
      puVar9 = (undefined8 *)(param_2 + 0x48);
      uVar6 = *(ulong *)(param_2 + 0x58);
      puVar10 = (undefined8 *)*puVar9;
      if ((ulong)((long)(uVar6 - (long)puVar10) >> 3) < uVar5) {
        puVar11 = puVar9;
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 **)(param_2 + 0x50) = puVar10;
          __ZdlPv();
          uVar6 = 0;
          *puVar9 = 0;
          *(undefined8 *)(param_2 + 0x50) = 0;
          *(undefined8 *)(param_2 + 0x58) = 0;
          puVar11 = puVar10;
        }
        if (uVar5 >> 0x3d != 0) {
          FUN_10a1f6a14();
          *puVar11 = &PTR_DAT_110bae008;
          puVar11[2] = &PTR_FUN_110bae138;
          puVar11[5] = &PTR_FUN_110bae168;
          puVar11[0x58] = &PTR_FUN_110bae210;
          puVar11[0x15] = &PTR_FUN_110bae1c0;
          if (puVar11[0x55] != 0) {
            puVar11[0x56] = puVar11[0x55];
            __ZdlPv();
          }
          FUN_10a0d92c8(puVar11 + 0x53);
          func_0x00010a0523dc(puVar11 + 0x51);
          *puVar11 = &PTR_FUN_110baff90;
          puVar11[2] = &PTR_FUN_110bb3968;
          puVar11[5] = &PTR_DAT_110bb3998;
          puVar11[0x58] = &PTR_DAT_110bb00f0;
          puVar11[0x15] = &PTR_DAT_110bb39f0;
          FUN_10a042c0c(puVar11 + 0x4d);
          func_0x00010a042c64(puVar11 + 0x48);
          func_0x00010a0523dc(puVar11 + 0x45);
          if (*(char *)(puVar11 + 0x3c) == '\x01') {
            func_0x00010a042d30(puVar11 + 0x3a);
          }
          puVar11[0x15] = &PTR_FUN_110b9f768;
          FUN_10a1c00f4(puVar11 + 0x15);
          *puVar11 = &PTR_DAT_110bb0140;
          puVar11[2] = &PTR_FUN_110b9f848;
          puVar11[5] = &PTR_DAT_110b9f878;
          puVar11[0x58] = &PTR_DAT_110bb0210;
          FUN_10a042dcc(puVar11 + 0x13);
          *puVar11 = &PTR_DAT_110c60a00;
          puVar11[2] = &PTR_DAT_110c60a88;
          puVar11[5] = &PTR_DAT_110c60ab8;
          ppuVar7 = (undefined **)(puVar11 + 0xb);
          puVar10 = (undefined8 *)puVar11[0xc];
          for (puVar9 = (undefined8 *)*ppuVar7; puVar9 != puVar10; puVar9 = puVar9 + 1) {
            FUN_10a009538(auStack_2e8,&UNK_10f69ea0f);
            __ZNSt13runtime_errorC2ERKS_(appuStack_1c0,auStack_2e8);
            _memcpy(auStack_1b0,auStack_2d8,0x110);
            appuStack_1c0[0] = &PTR_FUN_110b99e70;
            FUN_10a05bde0(auStack_1c8,appuStack_1c0);
            __ZNSt13runtime_errorD2Ev(appuStack_1c0);
            func_0x000109d1b350(*puVar9,auStack_1c8);
            __ZNSt13exception_ptrD1Ev(auStack_1c8);
            __ZNSt13runtime_errorD2Ev(auStack_2e8);
          }
          FUN_10ac634b8(ppuVar7);
          plVar8 = puVar11 + 10;
          if ((*plVar8 != 0) &&
             (*(undefined ***)(*(long *)(*plVar8 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
            FUN_10a5ae930();
          }
          FUN_10a3a743c(puVar11 + 3);
          if ((puVar11[0x12] != 0) && (lVar4 = *(long *)(puVar11[0x12] + 0x828), lVar4 != 0)) {
            FUN_10a1dfb2c(lVar4,puVar11);
          }
          if (*(char *)((long)puVar11 + 0x8f) < '\0') {
            __ZdlPv(puVar11[0xf]);
          }
          appuStack_1c0[0] = ppuVar7;
          FUN_10ac78cf4(appuStack_1c0);
          lVar4 = *plVar8;
          *plVar8 = 0;
          if (lVar4 != 0) {
            FUN_10ac7d690(plVar8);
          }
          if (puVar11[9] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          puVar11[5] = &PTR_DAT_110b17898;
          func_0x00010a004dac(puVar11 + 6);
          puVar11[2] = &PTR____cxa_pure_virtual_110bcfb60;
          func_0x00010a004e5c(puVar11 + 3);
          return puVar11;
        }
        uVar2 = (long)uVar6 >> 2;
        if ((ulong)((long)uVar6 >> 2) <= uVar5) {
          uVar2 = uVar5;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar2 = 0x1fffffffffffffff;
        }
        FUN_10a1f69d8(puVar9,uVar2);
        puVar10 = *(undefined8 **)(param_2 + 0x50);
        lVar4 = lVar4 - lVar3;
        if (lVar4 != 0) {
          puVar9 = puVar10;
          _memmove(puVar10,lVar3,lVar4);
        }
        lVar4 = (long)puVar10 + lVar4;
      }
      else {
        puVar11 = *(undefined8 **)(param_2 + 0x50);
        if ((ulong)((long)puVar11 - (long)puVar10 >> 3) < uVar5) {
          lVar1 = lVar3 + ((long)puVar11 - (long)puVar10);
          if (puVar11 != puVar10) {
            _memmove(puVar10,lVar3);
            puVar11 = *(undefined8 **)(param_2 + 0x50);
            puVar9 = puVar10;
          }
          lVar4 = lVar4 - lVar1;
          if (lVar4 != 0) {
            puVar9 = puVar11;
            _memmove(puVar11,lVar1,lVar4);
          }
          lVar4 = (long)puVar11 + lVar4;
        }
        else {
          lVar4 = lVar4 - lVar3;
          if (lVar4 != 0) {
            puVar9 = puVar10;
            _memmove(puVar10,lVar3,lVar4);
          }
          lVar4 = (long)puVar10 + lVar4;
        }
      }
      *(long *)(param_2 + 0x50) = lVar4;
      return puVar9;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 3);
  }
  return param_1;
}



/* Entry: 10a1ef404; end: 10a1ef567;  */

ulong FUN_10a1ef404(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar3 = param_1[1];
  if (uVar3 < param_1[2]) {
    FUN_10a1f66ac(uVar3,param_2);
    uVar7 = uVar3 + 0xe8;
  }
  else {
    lVar9 = uVar3 - *param_1;
    uVar7 = (lVar9 >> 3) * 0x34f72c234f72c235 + 1;
    if (0x11a7b9611a7b961 < uVar7) {
      FUN_10a1f67e8();
      if ((*(char *)(uVar3 + 0xd0) == '\x01') && (*(char *)(uVar3 + 0xb7) < '\0')) {
        __ZdlPv(*(undefined8 *)(uVar3 + 0xa0));
      }
      if ((*(char *)(uVar3 + 0x98) == '\x01') && (*(long *)(uVar3 + 0x78) != 0)) {
        *(long *)(uVar3 + 0x80) = *(long *)(uVar3 + 0x78);
        __ZdlPv();
      }
      if ((*(char *)(uVar3 + 0x60) == '\x01') && (*(long *)(uVar3 + 0x48) != 0)) {
        *(long *)(uVar3 + 0x50) = *(long *)(uVar3 + 0x48);
        __ZdlPv();
      }
      if (*(long *)(uVar3 + 8) != 0) {
        *(long *)(uVar3 + 0x10) = *(long *)(uVar3 + 8);
        __ZdlPv();
      }
      return uVar3;
    }
    lVar5 = (long)(param_1[2] - *param_1) >> 3;
    uVar6 = lVar5 * 0x69ee58469ee5846a;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x8d3dcb08d3dcaf < (ulong)(lVar5 * 0x34f72c234f72c235)) {
      uVar6 = 0x11a7b9611a7b961;
    }
    if (uVar6 == 0) {
      uVar6 = 0;
      lVar5 = 0;
    }
    else {
      lVar5 = param_2;
      FUN_10a1f67fc();
    }
    uVar7 = uVar6 + lVar9;
    uVar3 = uVar7;
    FUN_10a1f66ac(uVar7,param_2);
    uVar8 = *param_1;
    uVar2 = param_1[1];
    uVar1 = uVar7 + (uVar8 - uVar2);
    uVar4 = uVar1;
    uVar10 = uVar8;
    if (uVar2 != uVar8) {
      do {
        FUN_10a1f66ac(uVar4,uVar10);
        uVar10 = uVar10 + 0xe8;
        uVar4 = uVar4 + 0xe8;
      } while (uVar10 != uVar2);
      do {
        uVar3 = uVar8;
        FUN_10a1f63a0(uVar8);
        uVar8 = uVar8 + 0xe8;
      } while (uVar8 != uVar2);
      uVar8 = *param_1;
    }
    uVar7 = uVar7 + 0xe8;
    *param_1 = uVar1;
    param_1[1] = uVar7;
    param_1[2] = uVar6 + lVar5 * 0xe8;
    if (uVar8 != 0) {
      __ZdlPv(uVar8);
      uVar3 = uVar8;
    }
  }
  param_1[1] = uVar7;
  return uVar3;
}



/* Entry: 10a1ef568; end: 10a1ef5eb;  */

long FUN_10a1ef568(long param_1)

{
  if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(char *)(param_1 + 0xb7) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0xa0));
  }
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(long *)(param_1 + 0x78) != 0)) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(long *)(param_1 + 0x48) != 0)) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1ef5ec; end: 10a1efd6f;  */

void FUN_10a1ef5ec(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long **pplVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_c0 [24];
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puVar20 = *ppuVar8;
  plVar9 = (long *)0x198;
  __Znwm();
  plVar17 = plVar9 + 1;
  *plVar17 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_DAT_110bb2560;
  plVar10 = plVar9 + 3;
  plVar11 = plVar9;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar10,puVar20,plVar11,param_3);
  *(undefined4 *)(plVar9 + 0x25) = 0;
  *(undefined1 *)(plVar9 + 0x2b) = 0;
  plVar9[0x20] = 0;
  plVar9[0x1f] = 0;
  plVar9[0x22] = 0;
  plVar9[0x21] = 0;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  *(undefined1 *)(plVar9 + 0x28) = 0;
  plVar9[0x2d] = 0;
  plVar9[0x2e] = 0;
  plVar9[0x2c] = 0;
  plVar9[3] = (long)&PTR_FUN_110bb2a10;
  plVar9[5] = (long)&PTR_DAT_110bb2ab0;
  plVar9[10] = (long)&PTR_DAT_110bb2b08;
  *(undefined1 *)(plVar9 + 0x2f) = 0;
  *(undefined1 *)(plVar9 + 0x30) = 0;
  plVar9[0x31] = 0;
  plVar9[0x32] = 0;
  plStack_90 = plVar10;
  plStack_88 = plVar9;
  if (plVar9[9] == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = *plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar11 = plVar9 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar9[8] = (long)plVar10;
    plVar9[9] = (long)plVar9;
  }
  else {
    if (*(long *)(plVar9[9] + 8) != -1) goto LAB_10a1ef758;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = *plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar11 = plVar9 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar9[8] = (long)plVar10;
    plVar9[9] = (long)plVar9;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar14 = *plVar17;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10a1ef758:
  plVar10 = (long *)0x90;
  __Znwm();
  plStack_80 = plStack_90;
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  plVar10[2] = 0;
  plStack_a8 = plVar10 + 3;
  plVar10[4] = (long)plStack_88;
  *plStack_a8 = (long)plStack_90;
  *plVar10 = (long)&PTR_FUN_110b9fe30;
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0x32aaaba7;
  plVar10[9] = 0;
  plVar10[8] = 0;
  plVar10[0xb] = 0;
  plVar10[10] = 0;
  plVar10[0xd] = 0;
  plVar10[0xc] = 0;
  plVar10[0xf] = 0;
  plVar10[0xe] = 0;
  plVar10[0x11] = 0;
  plVar10[0x10] = 0;
  *param_1 = (long)plStack_80;
  param_1[1] = (long)plVar10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = *plVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = *plVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pplVar13 = &plStack_80;
  plStack_a0 = plVar10;
  plStack_78 = plVar10;
  func_0x00010a053e8c(plStack_a8);
  plVar10 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar11 = plStack_78 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (*plStack_a8 != 0) {
    pplVar13 = &plStack_a8;
    func_0x00010a053ee8();
  }
  plVar10 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar11 = plStack_a0 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar11 = plStack_88 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  lVar19 = *param_1;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  lVar14 = *(long *)(param_2 + 0x20);
  puVar3 = *(undefined1 **)(param_2 + 0x28);
  lVar21 = (long)puVar3 - lVar14;
  if (lVar21 == 0) {
    plVar10 = (long *)0x0;
    lVar21 = 0;
  }
  else {
    plVar11 = (long *)((lVar21 >> 3) * 0x34f72c234f72c235);
    if ((long *)0x11a7b9611a7b961 < plVar11) {
      FUN_10a1f67e8();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1efc18);
      (*pcVar7)();
    }
    FUN_10a1f67fc();
    lVar21 = 0;
    plVar10 = plVar11 + (long)pplVar13 * 0x1d;
    plStack_a8 = plVar11;
    plStack_a0 = plVar11;
    plStack_98 = plVar10;
    do {
      puVar1 = (undefined1 *)((long)plVar11 + lVar21);
      puVar2 = (undefined1 *)(lVar14 + lVar21);
      *puVar1 = *puVar2;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      FUN_10a1f68e8();
      uVar4 = puVar2[0x24];
      *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(puVar2 + 0x20);
      puVar1[0x24] = uVar4;
      puVar1[0x28] = 0;
      puVar1[0x60] = 0;
      if (puVar2[0x60] == '\x01') {
        lVar12 = lVar14 + lVar21;
        uVar22 = *(undefined8 *)(lVar12 + 0x30);
        uVar16 = *(undefined8 *)(lVar12 + 0x28);
        uVar23 = *(undefined8 *)(lVar12 + 0x34);
        *(undefined8 *)(puVar1 + 0x3c) = *(undefined8 *)(lVar12 + 0x3c);
        *(undefined8 *)(puVar1 + 0x34) = uVar23;
        *(undefined8 *)(puVar1 + 0x30) = uVar22;
        *(undefined8 *)(puVar1 + 0x28) = uVar16;
        *(undefined8 *)((long)plVar11 + lVar21 + 0x48) = 0;
        *(undefined8 *)((long)plVar11 + lVar21 + 0x50) = 0;
        *(undefined8 *)((long)plVar11 + lVar21 + 0x58) = 0;
        FUN_10a1f6960();
        puVar1[0x60] = 1;
      }
      puVar15 = (undefined8 *)((long)plVar11 + lVar21 + 0x68);
      *(undefined1 *)puVar15 = 0;
      *(undefined1 *)((long)plVar11 + lVar21 + 0x98) = 0;
      if (puVar2[0x98] == '\x01') {
        lVar12 = lVar14 + lVar21;
        uVar16 = *(undefined8 *)(lVar12 + 0x68);
        *(undefined4 *)((long)plVar11 + lVar21 + 0x70) = *(undefined4 *)(lVar12 + 0x70);
        *puVar15 = uVar16;
        *(undefined8 *)((long)plVar11 + lVar21 + 0x78) = 0;
        *(undefined8 *)((long)plVar11 + lVar21 + 0x80) = 0;
        *(undefined8 *)((long)plVar11 + lVar21 + 0x88) = 0;
        FUN_10a0ca588();
        *(undefined4 *)((long)plVar11 + lVar21 + 0x90) = *(undefined4 *)(lVar12 + 0x90);
        *(undefined1 *)((long)plVar11 + lVar21 + 0x98) = 1;
      }
      puVar15 = (undefined8 *)((long)plVar11 + lVar21 + 0xa0);
      *(undefined1 *)puVar15 = 0;
      *(undefined1 *)((long)plVar11 + lVar21 + 0xd0) = 0;
      if (puVar2[0xd0] == '\x01') {
        lVar12 = lVar14 + lVar21;
        if (*(char *)(lVar12 + 0xb7) < '\0') {
          func_0x000107c3192c(puVar15,*(undefined8 *)(lVar12 + 0xa0),
                              *(undefined8 *)(lVar14 + lVar21 + 0xa8));
        }
        else {
          uVar22 = *(undefined8 *)(lVar12 + 0xa8);
          uVar16 = *(undefined8 *)(lVar12 + 0xa0);
          *(undefined8 *)((long)plVar11 + lVar21 + 0xb0) = *(undefined8 *)(lVar12 + 0xb0);
          *(undefined8 *)((long)plVar11 + lVar21 + 0xa8) = uVar22;
          *puVar15 = uVar16;
        }
        lVar12 = lVar14 + lVar21;
        uVar22 = *(undefined8 *)(lVar12 + 0xc0);
        uVar16 = *(undefined8 *)(lVar12 + 0xb8);
        *(undefined1 *)((long)plVar11 + lVar21 + 200) = *(undefined1 *)(lVar12 + 200);
        *(undefined8 *)((long)plVar11 + lVar21 + 0xc0) = uVar22;
        *(undefined8 *)((long)plVar11 + lVar21 + 0xb8) = uVar16;
        *(undefined1 *)((long)plVar11 + lVar21 + 0xd0) = 1;
      }
      uVar16 = *(undefined8 *)(puVar2 + 0xd8);
      *(undefined4 *)((long)plVar11 + lVar21 + 0xe0) = *(undefined4 *)(puVar2 + 0xe0);
      *(undefined8 *)((long)plVar11 + lVar21 + 0xd8) = uVar16;
      lVar21 = lVar21 + 0xe8;
    } while (puVar2 + 0xe8 != puVar3);
    lVar21 = (long)plVar11 + lVar21;
  }
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar19 + 0xe8) = *(undefined8 *)(lVar19 + 0xe0);
  if (*(char *)(lVar19 + 0x140) == '\x01') {
    lVar14 = *(long *)(lVar19 + 0x128);
    if (lVar14 != 0) {
      lVar18 = *(long *)(lVar19 + 0x130);
      lVar12 = lVar14;
      if (lVar18 != lVar14) {
        do {
          lVar18 = lVar18 + -0xe8;
          FUN_10a1f63a0(lVar18);
        } while (lVar18 != lVar14);
        lVar12 = *(long *)(lVar19 + 0x128);
      }
      *(long *)(lVar19 + 0x130) = lVar14;
      __ZdlPv(lVar12);
      *(undefined8 *)(lVar19 + 0x128) = 0;
      *(undefined8 *)(lVar19 + 0x130) = 0;
      *(undefined8 *)(lVar19 + 0x138) = 0;
    }
    *(long **)(lVar19 + 0x128) = plStack_a8;
    *(long *)(lVar19 + 0x130) = lVar21;
    *(long **)(lVar19 + 0x138) = plVar10;
  }
  else {
    *(long **)(lVar19 + 0x128) = plStack_a8;
    *(long *)(lVar19 + 0x130) = lVar21;
    *(long **)(lVar19 + 0x138) = plVar10;
    *(undefined1 *)(lVar19 + 0x140) = 1;
  }
  plStack_98 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  *(undefined8 *)(lVar19 + 0x148) = uVar16;
  *(undefined8 *)(lVar19 + 0xf8) = 0;
  plVar10 = *(long **)(lVar19 + 0x120);
  *(undefined8 *)(lVar19 + 0x118) = 0;
  *(undefined8 *)(lVar19 + 0x120) = 0;
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = *(long **)(lVar19 + 0x158);
  *(undefined8 *)(lVar19 + 0x150) = 0;
  *(undefined8 *)(lVar19 + 0x158) = 0;
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      lVar14 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  FUN_10a1f6428(&plStack_a8);
  lVar14 = *param_1;
  FUN_10a1f6274(auStack_c0,param_2 + 0x38);
  FUN_10a1ee3c0(lVar14,auStack_c0);
  FUN_10a1f57fc(auStack_c0);
  return;
}



/* Entry: 10a1efd70; end: 10a1efe8b;  */

void FUN_10a1efd70(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645211;
  uStack_88 = 0xcffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1efe8c(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64521a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a1efee4(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645222;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a1efee4(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a1efe8c; end: 10a1efee3;  */

ulong FUN_10a1efe8c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a1efee4; end: 10a1eff3b;  */

ulong FUN_10a1efee4(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a212a2c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a1eff3c; end: 10a1f00ab;  */

void FUN_10a1eff3c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64522a;
  uStack_88 = 0xcffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645235;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f00ac(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645239;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f00ac();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f645241;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f00ac();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1f00ac; end: 10a1f0153;  */

undefined8 * FUN_10a1f00ac(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f0154);
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



/* Entry: 10a1f0154; end: 10a1f026f;  */

void FUN_10a1f0154(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645248;
  uStack_88 = 0xcffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f0270(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645255;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a1f02c8(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64525c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a1f02c8(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a1f0270; end: 10a1f02c7;  */

ulong FUN_10a1f0270(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a1f02c8; end: 10a1f031f;  */

ulong FUN_10a1f02c8(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a212aa0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a1f0320; end: 10a1f048f;  */

void FUN_10a1f0320(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645263;
  uStack_88 = 0xcffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64526b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f0490(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645270;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f0490();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f5a3797;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f0490();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1f0490; end: 10a1f0537;  */

undefined8 * FUN_10a1f0490(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f0538);
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



/* Entry: 10a1f0538; end: 10a1f06a7;  */

void FUN_10a1f0538(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645276;
  uStack_88 = 0xcffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64527f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f06a8(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645270;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f06a8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f645285;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x172;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a1f06a8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1f06a8; end: 10a1f074f;  */

undefined8 * FUN_10a1f06a8(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f0750);
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



/* Entry: 10a1f0750; end: 10a1f07d3;  */

undefined1  [16] FUN_10a1f0750(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f645c92;
  return auVar1;
}



/* Entry: 10a1f07d4; end: 10a1f0903;  */

void FUN_10a1f07d4(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xc);
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  uStack_60 = 0x172;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a1f0904(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64528b;
  uStack_78 = 0xcffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a212c10();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f645290;
  uStack_78 = 0xcffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a212d88(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64529a;
  uStack_78 = 0xcffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f643dac;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a212ea0(param_1,&puStack_98);
  FUN_10a212fb0(param_1);
  return;
}



/* Entry: 10a1f0904; end: 10a1f09db;  */

/* WARNING: Removing unreachable block (ram,0x00010a1f099c) */

undefined1  [16] FUN_10a1f0904(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f645c92,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a212b14(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1f09dc; end: 10a1f0a2b;  */

undefined8 * FUN_10a1f09dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafdb8;
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f0a2c; end: 10a1f0a2f;  */

undefined8 * FUN_10a1f0a2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafdb8;
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f0a30; end: 10a1f0a43;  */

void FUN_10a1f0a30(void)

{
  FUN_10a1f09dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f0a44; end: 10a1f0adb;  */

undefined1  [16] FUN_10a1f0a44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f6452c1;
  return auVar1;
}



/* Entry: 10a1f0adc; end: 10a1f0eaf;  */

void FUN_10a1f0adc(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f6452c1,0x15);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1b88;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xcffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x172;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110bb1b88;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f0e90;
    FUN_10a054dac(param_1,&UNK_10f6452a1,FUN_10a21306c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f0e90;
    FUN_10a054dac(param_1,&UNK_10f6452aa,FUN_10a213278,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f0e90;
    FUN_10a054dac(param_1,&UNK_10f6452b7,FUN_10a2133ac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f0e90;
    FUN_10a054dac(param_1,&DAT_10f2e4657,FUN_10a213490,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f6452c1,0x15);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f6452c1;
    uStack_90 = 0xcffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f643dac;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f643dac;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a1f0e90;
      FUN_10a054dac(param_1,&DAT_10f42625c,FUN_10a213694,2,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a1f0e90;
      FUN_10a054dac(param_1,&UNK_10f6452d7,FUN_10a213948,2,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a1f0e90:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1f0e94);
  (*pcVar6)();
}



/* Entry: 10a1f0eb0; end: 10a1f0eff;  */

undefined8 * FUN_10a1f0eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafe10;
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f0f00; end: 10a1f0f03;  */

undefined8 * FUN_10a1f0f00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafe10;
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f0f04; end: 10a1f0f17;  */

void FUN_10a1f0f04(void)

{
  FUN_10a1f0eb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f0f18; end: 10a1f1083;  */

undefined1  [16]
FUN_10a1f0f18(float param_1,float param_2,float param_3,float param_4,float param_5,
             undefined *param_6,long param_7)

{
  bool bVar1;
  float *pfVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  ushort uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  
  if ((uint)ABS(param_1) < 0x7f800000) {
    auVar21._0_8_ = CONCAT44(param_3,param_2);
    auVar21._8_4_ = param_4;
    auVar21._12_4_ = param_5;
    uVar22 = NEON_umaxv(CONCAT26(-(ushort)(0x7f7fffff < (uint)ABS(param_5)),
                                 CONCAT24(-(ushort)(0x7f7fffff < (uint)ABS(param_4)),
                                          CONCAT22(-(ushort)(0x7f7fffff <
                                                            (uint)((auVar21._0_8_ &
                                                                   0x7fffffff7fffffff) >> 0x20)),
                                                   -(ushort)(0x7f7fffff <
                                                            (uint)(auVar21._0_8_ &
                                                                  0x7fffffff7fffffff))))),2);
    if ((uVar22 & 1) == 0) {
      fVar24 = 1.0;
      if (param_1 <= 1.0) {
        fVar24 = param_1;
      }
      fVar28 = 0.0;
      if (0.0 <= param_1) {
        fVar28 = fVar24;
      }
      auVar23 = NEON_fmov(0x3f800000,4);
      auVar4._4_4_ = -(uint)(auVar23._4_4_ < param_3);
      auVar4._0_4_ = -(uint)(auVar23._0_4_ < param_2);
      auVar4._8_4_ = -(uint)(auVar23._8_4_ < param_4);
      auVar4._12_4_ = -(uint)(auVar23._12_4_ < param_5);
      auVar21 = auVar21 ^ (auVar21 ^ auVar23) & auVar4;
      fVar24 = auVar21._0_4_ * 255.0 + 0.5;
      fVar25 = auVar21._4_4_ * 255.0 + 0.5;
      fVar26 = auVar21._8_4_ * 255.0 + 0.5;
      fVar27 = auVar21._12_4_ * 255.0 + 0.5;
      pfVar14 = *(float **)(param_6 + 0x40);
      uVar16 = (undefined1)
               (int)(float)((uint)fVar24 ^ ((uint)fVar24 ^ 0x3f000000) & -(uint)(param_2 < 0.0));
      uVar17 = (undefined1)
               (int)(float)((uint)fVar25 ^ ((uint)fVar25 ^ 0x3f000000) & -(uint)(param_3 < 0.0));
      uVar18 = (undefined1)
               (int)(float)((uint)fVar26 ^ ((uint)fVar26 ^ 0x3f000000) & -(uint)(param_4 < 0.0));
      uVar19 = (undefined1)
               (int)(float)((uint)fVar27 ^ ((uint)fVar27 ^ 0x3f000000) & -(uint)(param_5 < 0.0));
      if (pfVar14 < *(float **)(param_6 + 0x48)) {
        *pfVar14 = fVar28;
        pfVar14[1] = (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
        pfVar14 = pfVar14 + 2;
        puVar6 = param_6;
LAB_10a1f1050:
        *(float **)(param_6 + 0x40) = pfVar14;
        auVar23._8_8_ = param_7;
        auVar23._0_8_ = puVar6;
        return auVar23;
      }
      lVar12 = (long)pfVar14 - *(long *)(param_6 + 0x38);
      uVar15 = (lVar12 >> 3) + 1;
      if (uVar15 >> 0x3d == 0) {
        uVar10 = (long)*(float **)(param_6 + 0x48) - *(long *)(param_6 + 0x38);
        uVar11 = (long)uVar10 >> 2;
        if (uVar11 <= uVar15) {
          uVar11 = uVar15;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar11 = 0x1fffffffffffffff;
        }
        FUN_10a1f6a28();
        pfVar2 = (float *)(uVar11 + lVar12);
        lVar12 = param_7 * 8;
        *pfVar2 = fVar28;
        pfVar2[1] = (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
        pfVar14 = pfVar2 + 2;
        param_7 = *(long *)(param_6 + 0x38);
        lVar13 = (long)pfVar2 - (*(long *)(param_6 + 0x40) - param_7);
        _memcpy(lVar13);
        puVar6 = *(undefined **)(param_6 + 0x38);
        *(long *)(param_6 + 0x38) = lVar13;
        *(float **)(param_6 + 0x40) = pfVar14;
        *(ulong *)(param_6 + 0x48) = uVar11 + lVar12;
        if (puVar6 != (undefined *)0x0) {
          __ZdlPv();
        }
        goto LAB_10a1f1050;
      }
      goto LAB_10a1f1080;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f64548d);
  }
  param_6 = &UNK_10f6454c9;
  FUN_10a00946c();
LAB_10a1f1080:
  FUN_10a1f6a14();
  if ((*(long *)(param_6 + 0x40) - *(long *)(param_6 + 0x38) >> 3) - 0x11U < 0xfffffffffffffff1) {
    puVar6 = &UNK_10f64550f;
    FUN_10a00946c(&UNK_10f64550f);
    if (lStack_a8 != 0) {
      __ZdlPv();
    }
    __Unwind_Resume(puVar6);
    auVar30._8_8_ = 0xb;
    auVar30._0_8_ = &UNK_10f645560;
    return auVar30;
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uVar3 = *(undefined2 *)(param_6 + 0x18);
  uVar5 = *(undefined8 *)(param_6 + 0x24);
  uStack_bc = (undefined4)uVar5;
  uStack_c4 = (undefined4)*(undefined8 *)(param_6 + 0x1c);
  uStack_c0 = (undefined4)((ulong)*(undefined8 *)(param_6 + 0x1c) >> 0x20);
  uVar20 = *(undefined8 *)(param_6 + 0x2c);
  FUN_10a1f6a5c(&lStack_a8);
  lVar13 = lStack_a0;
  lVar12 = lStack_a8;
  puVar6 = PTR___ZSt7nothrow_1103469d8;
  uVar11 = lStack_a0 - lStack_a8 >> 3;
  uVar15 = uVar11;
  lVar9 = lVar13;
  if ((long)uVar11 < 0x81) {
    uVar10 = 0;
  }
  else {
    do {
      lVar7 = uVar15 << 3;
      __ZnwmRKSt9nothrow_t(lVar7,puVar6);
      if (lVar7 != 0) {
        FUN_10a213b80(lVar12,lVar13,uVar11,lVar7,uVar15);
        __ZdlPv(lVar7);
        goto LAB_10a1f116c;
      }
      uVar10 = uVar15 >> 1;
      bVar1 = 1 < uVar15;
      uVar15 = uVar10;
    } while (bVar1);
  }
  FUN_10a213b80(lVar12,lVar13,uVar11,0,uVar10);
LAB_10a1f116c:
  puVar8 = (undefined8 *)0x68;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110bb2600;
  puVar8[7] = CONCAT44(uStack_bc,uStack_c0);
  puVar8[6] = CONCAT44(uStack_c4,CONCAT22(uStack_c6,uVar3));
  *(undefined8 *)((long)puVar8 + 0x44) = uVar20;
  *(undefined8 *)((long)puVar8 + 0x3c) = uVar5;
  puVar8[3] = &PTR_FUN_110bafdb8;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[10] = lVar12;
  puVar8[0xb] = lVar13;
  puVar8[0xc] = uStack_98;
  *extraout_x8 = puVar8 + 3;
  extraout_x8[1] = puVar8;
  auVar29._8_8_ = lVar9;
  auVar29._0_8_ = puVar8;
  return auVar29;
}



/* Entry: 10a1f1084; end: 10a1f11f7;  */

undefined1  [16] FUN_10a1f1084(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if ((*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 3) - 0x11U < 0xfffffffffffffff1) {
    puVar7 = &UNK_10f64550f;
    FUN_10a00946c(&UNK_10f64550f);
    if (lStack_68 != 0) {
      __ZdlPv();
    }
    __Unwind_Resume(puVar7);
    auVar15._8_8_ = 0xb;
    auVar15._0_8_ = &UNK_10f645560;
    return auVar15;
  }
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  uVar2 = *(undefined2 *)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x24);
  uStack_7c = (undefined4)uVar13;
  uStack_84 = (undefined4)*(undefined8 *)(param_2 + 0x1c);
  uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  uVar12 = *(undefined8 *)(param_2 + 0x2c);
  FUN_10a1f6a5c(&lStack_68);
  lVar4 = lStack_60;
  lVar3 = lStack_68;
  puVar7 = PTR___ZSt7nothrow_1103469d8;
  uVar10 = lStack_60 - lStack_68 >> 3;
  uVar11 = uVar10;
  lVar8 = lVar4;
  if ((long)uVar10 < 0x81) {
    uVar9 = 0;
  }
  else {
    do {
      lVar5 = uVar11 << 3;
      __ZnwmRKSt9nothrow_t(lVar5,puVar7);
      if (lVar5 != 0) {
        FUN_10a213b80(lVar3,lVar4,uVar10,lVar5,uVar11);
        __ZdlPv(lVar5);
        goto LAB_10a1f116c;
      }
      uVar9 = uVar11 >> 1;
      bVar1 = 1 < uVar11;
      uVar11 = uVar9;
    } while (bVar1);
  }
  FUN_10a213b80(lVar3,lVar4,uVar10,0,uVar9);
LAB_10a1f116c:
  puVar6 = (undefined8 *)0x68;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110bb2600;
  puVar6[7] = CONCAT44(uStack_7c,uStack_80);
  puVar6[6] = CONCAT44(uStack_84,CONCAT22(uStack_86,uVar2));
  *(undefined8 *)((long)puVar6 + 0x44) = uVar12;
  *(undefined8 *)((long)puVar6 + 0x3c) = uVar13;
  puVar6[3] = &PTR_FUN_110bafdb8;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[10] = lVar3;
  puVar6[0xb] = lVar4;
  puVar6[0xc] = uStack_58;
  *param_1 = puVar6 + 3;
  param_1[1] = puVar6;
  auVar14._8_8_ = lVar8;
  auVar14._0_8_ = puVar6;
  return auVar14;
}



/* Entry: 10a1f11f8; end: 10a1f127b;  */

undefined1  [16] FUN_10a1f11f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f645560;
  return auVar1;
}



/* Entry: 10a1f127c; end: 10a1f152f;  */

void FUN_10a1f127c(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f645560,0xb);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1ba0;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xcffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x172;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110bb1ba0;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f645560,0xb);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f645560;
    uStack_90 = 0xcffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f643dac;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f643dac;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a1f1510;
      FUN_10a054dac(param_1,&DAT_10f477b76,FUN_10a214420,1,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a1f1510;
      FUN_10a054dac(param_1,&DAT_10f49027d,FUN_10a2146e4,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a1f1510:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1f1514);
  (*pcVar6)();
}



/* Entry: 10a1f1530; end: 10a1f158b;  */

undefined8 * FUN_10a1f1530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafe68;
  if ((*(char *)(param_1 + 0xb) == '\x01') && (param_1[8] != 0)) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f158c; end: 10a1f158f;  */

undefined8 * FUN_10a1f158c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafe68;
  if ((*(char *)(param_1 + 0xb) == '\x01') && (param_1[8] != 0)) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f1590; end: 10a1f15a3;  */

void FUN_10a1f1590(void)

{
  FUN_10a1f1530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f15a4; end: 10a1f161b;  */

undefined1  [16] FUN_10a1f15a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f645ca1;
  return auVar1;
}



/* Entry: 10a1f161c; end: 10a1f19a7;  */

void FUN_10a1f161c(ulong param_1)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f645ca1,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1bb8;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xcffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x172;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb1bb8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f1988;
    FUN_10a054dac(param_1,&UNK_10f645595,FUN_10a2149fc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f1988;
    FUN_10a054dac(param_1,&UNK_10f6455a3,FUN_10a214b38,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6455ad,FUN_10a214c34,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6455ba,FUN_10a214d18,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f36a359,FUN_10a214de8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6455c5,FUN_10a214eec,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6455cd,FUN_10a214fac,0);
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
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f645ca1,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a1f1988:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1f198c);
  (*pcVar6)();
}



/* Entry: 10a1f19a8; end: 10a1f1a07;  */

undefined8 * FUN_10a1f19a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafec0;
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f1a08; end: 10a1f1a0b;  */

undefined8 * FUN_10a1f1a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bafec0;
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f1a0c; end: 10a1f1a1f;  */

void FUN_10a1f1a0c(void)

{
  FUN_10a1f19a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f1a20; end: 10a1f1e47;  */

void FUN_10a1f1a20(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  byte abStack_88 [4];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  float fStack_54;
  
  if (*(char *)(param_1 + 0x30) != '\x01') {
    return;
  }
  piVar11 = *(int **)(param_1 + 0x18);
  piVar1 = *(int **)(param_1 + 0x20);
  abStack_88[0] = 0;
  auVar20._0_14_ = ZEXT214(0);
  auVar20._14_2_ = 0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_84 = 0.0;
  fStack_80 = 0.0;
  uStack_6c = 0;
  fStack_74 = 0.0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  fStack_54 = 0.0;
  if (piVar11 != piVar1) {
    bVar7 = false;
    pfVar12 = (float *)((ulong)abStack_88 | 4);
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar13 = 0.0;
LAB_10a1f1a90:
    fStack_54 = 0.0;
    uVar17 = 0;
    uVar16 = 0;
    fVar18 = 0.0;
    bVar5 = bVar7;
    bVar8 = bVar7;
    do {
      iVar2 = *piVar11;
      if (iVar2 < 2) {
        if (iVar2 == 1) {
          auVar23._0_8_ = *(ulong *)(piVar11 + 1);
          auVar23._8_8_ = 0;
          auVar25._8_8_ = auVar23._0_8_;
          auVar25._0_8_ = auVar23._0_8_;
          fVar27 = (float)auVar23._0_8_;
          fVar28 = (float)(auVar23._0_8_ >> 0x20);
          fStack_54 = fVar18 + SQRT((fVar27 - fVar14) * (fVar27 - fVar14) +
                                    (fVar28 - fVar15) * (fVar28 - fVar15));
          if (bVar5) {
            auVar3._4_4_ = -(uint)(fVar28 < auVar20._4_4_);
            auVar3._0_4_ = -(uint)(fVar27 < auVar20._0_4_);
            auVar3._8_4_ = -(uint)(auVar20._8_4_ < fVar27);
            auVar3._12_4_ = -(uint)(auVar20._12_4_ < fVar28);
            auVar25 = auVar25 ^ (auVar25 ^ auVar20) & ~auVar3;
            auVar20 = NEON_ext(auVar25,auVar25,8,1);
            *pfVar12 = auVar25._0_4_;
            pfVar12[1] = auVar20._0_4_;
            pfVar12[2] = auVar25._4_4_;
            pfVar12[3] = auVar20._4_4_;
          }
          else {
            bVar8 = true;
            abStack_88[0] = 1;
            *pfVar12 = fVar27;
            pfVar12[1] = fVar27;
            pfVar12[2] = fVar28;
            pfVar12[3] = fVar28;
          }
          bVar5 = true;
          auVar20 = auVar25;
          fVar18 = fStack_54;
        }
        else {
          if (iVar2 == 0) goto LAB_10a1f1ce4;
LAB_10a1f1cac:
          auVar23._12_4_ = uVar17;
          auVar23._8_4_ = uVar16;
          auVar23._4_4_ = fVar15;
          auVar23._0_4_ = fVar14;
        }
      }
      else {
        if (iVar2 == 2) {
          uVar10 = 1;
          uVar22 = *(ulong *)(piVar11 + 5);
          fVar27 = fVar14;
          fVar28 = fVar15;
          bVar6 = bVar5;
          do {
            fVar29 = (float)uVar10 / 64.0;
            fVar30 = 1.0 - fVar29;
            fVar38 = fVar30 * fVar30 * fVar30;
            fVar34 = fVar29 * fVar30 * fVar30 * 3.0;
            fVar39 = fVar29 * fVar29 * fVar30 * 3.0;
            fVar29 = fVar29 * fVar29 * fVar29;
            fVar30 = (float)uVar22 * fVar29 +
                     (float)*(undefined8 *)(piVar11 + 3) * fVar39 +
                     fVar14 * fVar38 + (float)*(undefined8 *)(piVar11 + 1) * fVar34;
            fVar29 = (float)(uVar22 >> 0x20) * fVar29 +
                     (float)((ulong)*(undefined8 *)(piVar11 + 3) >> 0x20) * fVar39 +
                     fVar15 * fVar38 + (float)((ulong)*(undefined8 *)(piVar11 + 1) >> 0x20) * fVar34
            ;
            if (bVar6) {
              auVar36._0_4_ = -(uint)(fVar30 < auVar20._0_4_);
              auVar36._4_4_ = -(uint)(fVar29 < auVar20._4_4_);
              auVar36._8_4_ = -(uint)(auVar20._8_4_ < fVar30);
              auVar36._12_4_ = -(uint)(auVar20._12_4_ < fVar29);
              auVar4._8_4_ = fVar30;
              auVar4._0_8_ = CONCAT44(fVar29,fVar30);
              auVar4._12_4_ = fVar29;
              auVar20 = auVar20 ^ (auVar20 ^ auVar4) & auVar36;
              auVar32 = NEON_rev64(auVar20,4);
              auVar37._4_4_ = auVar20._8_4_;
              auVar37._0_4_ = auVar20._0_4_;
              auVar37._8_4_ = auVar32._0_4_;
              auVar37._12_4_ = auVar32._8_4_;
            }
            else {
              bVar8 = true;
              abStack_88[0] = 1;
              auVar37._4_4_ = fVar30;
              auVar37._0_4_ = fVar30;
              auVar37._8_4_ = fVar29;
              auVar37._12_4_ = fVar29;
              bVar5 = true;
              auVar20._12_4_ = fVar29;
              auVar20._8_4_ = fVar30;
              auVar20._0_8_ = CONCAT44(fVar29,fVar30);
            }
            fVar18 = fVar18 + SQRT((fVar30 - fVar27) * (fVar30 - fVar27) +
                                   (fVar29 - fVar28) * (fVar29 - fVar28));
            uVar10 = uVar10 + 1;
            bVar6 = true;
            fVar27 = fVar30;
            fVar28 = fVar29;
          } while (uVar10 != 0x41);
          fStack_7c = auVar37._8_4_;
          fStack_78 = auVar37._12_4_;
          fStack_84 = auVar37._0_4_;
          fStack_80 = auVar37._4_4_;
          fStack_54 = fVar18;
        }
        else {
          if (iVar2 != 3) goto LAB_10a1f1cac;
          uVar22 = *(ulong *)(piVar11 + 3);
          uVar10 = 1;
          auVar26._12_4_ = uVar17;
          auVar26._8_4_ = uVar16;
          auVar26._4_4_ = fVar15;
          auVar26._0_4_ = fVar14;
          bVar6 = bVar5;
          do {
            fVar27 = (float)uVar10 / 64.0;
            fVar29 = 1.0 - fVar27;
            fVar30 = fVar27 * (fVar29 + fVar29);
            fVar28 = (float)uVar22 * fVar27 * fVar27 +
                     fVar14 * fVar29 * fVar29 + (float)*(undefined8 *)(piVar11 + 1) * fVar30;
            fVar27 = (float)(uVar22 >> 0x20) * fVar27 * fVar27 +
                     fVar15 * fVar29 * fVar29 +
                     (float)((ulong)*(undefined8 *)(piVar11 + 1) >> 0x20) * fVar30;
            auVar35._8_8_ = CONCAT44(fVar27,fVar28);
            auVar35._0_8_ = CONCAT44(fVar27,fVar28);
            if (bVar5) {
              auVar31._0_4_ = -(uint)(fVar28 < auVar20._0_4_);
              auVar31._4_4_ = -(uint)(fVar27 < auVar20._4_4_);
              auVar31._8_4_ = -(uint)(auVar20._8_4_ < fVar28);
              auVar31._12_4_ = -(uint)(auVar20._12_4_ < fVar27);
              auVar20 = auVar20 ^ (auVar20 ^ auVar35) & auVar31;
              auVar32 = NEON_rev64(auVar20,4);
              auVar33._4_4_ = auVar20._8_4_;
              auVar33._0_4_ = auVar20._0_4_;
              auVar33._8_4_ = auVar32._0_4_;
              auVar33._12_4_ = auVar32._8_4_;
            }
            else {
              bVar8 = true;
              abStack_88[0] = 1;
              auVar33._4_4_ = fVar28;
              auVar33._0_4_ = fVar28;
              auVar33._8_4_ = fVar27;
              auVar33._12_4_ = fVar27;
              bVar6 = true;
              auVar20._8_8_ = CONCAT44(fVar27,fVar28);
              auVar20._0_8_ = CONCAT44(fVar27,fVar28);
            }
            fVar29 = fVar28 - auVar26._0_4_;
            fVar30 = fVar27 - auVar26._4_4_;
            fVar18 = fVar18 + SQRT(fVar29 * fVar29 + fVar30 * fVar30);
            uVar10 = uVar10 + 1;
            bVar5 = true;
            auVar26._4_4_ = fVar27;
            auVar26._0_4_ = fVar28;
            auVar26._8_8_ = 0;
          } while (uVar10 != 0x41);
          fStack_7c = auVar33._8_4_;
          fStack_78 = auVar33._12_4_;
          fStack_84 = auVar33._0_4_;
          fStack_80 = auVar33._4_4_;
          fStack_54 = fVar18;
          bVar5 = bVar6;
        }
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar22;
        fVar18 = fStack_54;
      }
      piVar11 = piVar11 + 7;
      uVar16 = auVar23._8_4_;
      uVar17 = auVar23._12_4_;
      fVar14 = auVar23._0_4_;
      fVar15 = auVar23._4_4_;
      if (piVar11 == piVar1) {
        if (bVar7) goto LAB_10a1f1d94;
        goto LAB_10a1f1db8;
      }
    } while( true );
  }
  fVar13 = 0.0;
LAB_10a1f1db8:
  *(float *)(param_1 + 0x34) = fVar13;
  lVar9 = CONCAT44(uStack_6c,uStack_70);
  if ((undefined4 *)(param_1 + 0x38) != &uStack_70) {
    func_0x00010a14ddc8();
    lVar9 = CONCAT44(uStack_6c,uStack_70);
  }
  *(byte *)(param_1 + 0x50) = abStack_88[0];
  *(ulong *)(param_1 + 0x5c) = CONCAT44(fStack_78,fStack_7c);
  *(ulong *)(param_1 + 0x54) = CONCAT44(fStack_80,fStack_84);
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (lVar9 != 0) {
    uStack_68 = (undefined4)lVar9;
    uStack_64 = (undefined4)((ulong)lVar9 >> 0x20);
    __ZdlPv(lVar9);
  }
  return;
LAB_10a1f1ce4:
  if (bVar7) {
    FUN_10a0ca014(&uStack_70,&fStack_54);
    fStack_74 = fStack_54 + fStack_74;
    fVar14 = (float)*(undefined8 *)(piVar11 + 1);
    fVar15 = (float)((ulong)*(undefined8 *)(piVar11 + 1) >> 0x20);
    fVar13 = fStack_74;
    if ((abStack_88[0] & 1) != 0) {
LAB_10a1f1d40:
      auVar32._4_4_ = fStack_80;
      auVar32._0_4_ = fStack_84;
      auVar32._8_4_ = fStack_7c;
      auVar32._12_4_ = fStack_78;
      auVar20 = NEON_rev64(auVar32,4);
      auVar19._4_4_ = fStack_7c;
      auVar19._0_4_ = fStack_84;
      auVar19._8_4_ = auVar20._0_4_;
      auVar19._12_4_ = auVar20._8_4_;
      auVar21._4_4_ = fVar15;
      auVar21._0_4_ = fVar14;
      auVar21._12_4_ = fVar15;
      auVar21._8_4_ = fVar14;
      auVar20 = NEON_ext(auVar19,auVar19,8,1);
      auVar24._0_4_ = -(uint)(fVar14 < fStack_84);
      auVar24._4_4_ = -(uint)(fVar15 < fStack_7c);
      auVar24._8_4_ = -(uint)(auVar20._0_4_ < fVar14);
      auVar24._12_4_ = -(uint)(auVar20._4_4_ < fVar15);
      auVar20 = auVar21 ^ (auVar21 ^ auVar19) & ~auVar24;
      auVar32 = NEON_rev64(auVar20,4);
      fStack_84 = auVar20._0_4_;
      fStack_80 = auVar20._8_4_;
      fStack_7c = auVar32._0_4_;
      fStack_78 = auVar32._8_4_;
      goto LAB_10a1f1d7c;
    }
  }
  else {
    fVar14 = (float)*(undefined8 *)(piVar11 + 1);
    fVar15 = (float)((ulong)*(undefined8 *)(piVar11 + 1) >> 0x20);
    if (bVar8) goto LAB_10a1f1d40;
  }
  abStack_88[0] = 1;
  auVar20._4_4_ = fVar15;
  auVar20._0_4_ = fVar14;
  auVar20._12_4_ = fVar15;
  auVar20._8_4_ = fVar14;
  fStack_84 = fVar14;
  fStack_80 = fVar14;
  fStack_7c = fVar15;
  fStack_78 = fVar15;
LAB_10a1f1d7c:
  fStack_54 = 0.0;
  piVar11 = piVar11 + 7;
  bVar7 = true;
  if (piVar11 == piVar1) goto LAB_10a1f1d94;
  goto LAB_10a1f1a90;
LAB_10a1f1d94:
  FUN_10a0ca014(&uStack_70,&fStack_54);
  fStack_74 = fStack_54 + fStack_74;
  fVar13 = fStack_74;
  goto LAB_10a1f1db8;
}



/* Entry: 10a1f1e48; end: 10a1f1f4f;  */

void FUN_10a1f1e48(undefined8 *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  FUN_10a1f1a20();
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    puVar3 = (undefined8 *)0x50;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110bcfba8;
    puVar4 = puVar3 + 3;
    *puVar4 = &PTR_FUN_110c6a8d8;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[6] = &PTR_FUN_110c6a940;
    *(undefined8 *)((long)puVar3 + 0x44) = 0;
    *(undefined8 *)((long)puVar3 + 0x3c) = 0;
  }
  else {
    puVar3 = (undefined8 *)0x50;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110bcfba8;
    puVar4 = puVar3 + 3;
    *puVar4 = &PTR_FUN_110c6a8d8;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[6] = &PTR_FUN_110c6a940;
    pauVar1 = (undefined1 (*) [16])(param_2 + 0x54);
    uVar2 = *(undefined8 *)*pauVar1;
    auVar5 = NEON_ext(*pauVar1,*pauVar1,8,1);
    *(int *)((long)puVar3 + 0x3c) = (int)uVar2;
    *(int *)(puVar3 + 8) = auVar5._0_4_;
    *(int *)((long)puVar3 + 0x44) = (int)((ulong)uVar2 >> 0x20);
    *(int *)(puVar3 + 9) = auVar5._4_4_;
  }
  *param_1 = puVar4;
  param_1[1] = puVar3;
  return;
}



/* Entry: 10a1f1f50; end: 10a1f2003;  */

void FUN_10a1f1f50(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107458bb4(param_1,(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 2) *
                              0x6db6db6db6db6db7);
  puVar2 = *(uint **)(param_2 + 0x20);
  for (puVar1 = *(uint **)(param_2 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 7) {
    if (*puVar1 < 4) {
      FUN_10a1f2004(param_1,(long)puVar1 + *(long *)(&UNK_10e49eaf0 + (ulong)*puVar1 * 8));
    }
  }
  return;
}



/* Entry: 10a1f2004; end: 10a1f20c7;  */

undefined1  [16] FUN_10a1f2004(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar4 = param_1;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a050828();
      auVar10._8_8_ = 0x11;
      auVar10._0_8_ = &UNK_10f64562b;
      return auVar10;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a05083c();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    param_2 = (undefined8 *)*param_1;
    lVar7 = (long)puVar2 - (param_1[1] - (long)param_2);
    _memcpy(lVar7);
    plVar4 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar6);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = plVar4;
  return auVar9;
}



/* Entry: 10a1f20c8; end: 10a1f2153;  */

undefined1  [16] FUN_10a1f20c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f64562b;
  return auVar1;
}



/* Entry: 10a1f2154; end: 10a1f2523;  */

void FUN_10a1f2154(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f64562b,0x11);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1bd0;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xcffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x172;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110bb1bd0;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f2504;
    FUN_10a054dac(param_1,&UNK_10f64560e,FUN_10a215070,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f2504;
    FUN_10a054dac(param_1,&UNK_10f645615,FUN_10a21521c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f2504;
    FUN_10a054dac(param_1,&UNK_10f64561c,FUN_10a2152d4,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f2504;
    FUN_10a054dac(param_1,&UNK_10f645624,FUN_10a2153f0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1f2504;
    FUN_10a054dac(param_1,&DAT_10f2e4657,FUN_10a2154cc,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f64562b,0x11);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f64562b;
    uStack_90 = 0xcffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f643dac;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f643dac;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xc);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a1f2504;
      FUN_10a054dac(param_1,&UNK_10f644141,FUN_10a21562c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a1f2504:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1f2508);
  (*pcVar6)();
}



/* Entry: 10a1f2524; end: 10a1f2573;  */

undefined8 * FUN_10a1f2524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baff18;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f2574; end: 10a1f2577;  */

undefined8 * FUN_10a1f2574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baff18;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1f2578; end: 10a1f258b;  */

void FUN_10a1f2578(void)

{
  FUN_10a1f2524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f258c; end: 10a1f261b;  */

void FUN_10a1f258c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar9;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 unaff_d8;
  uint uVar21;
  undefined8 unaff_d9;
  
  uVar19 = (undefined4)((ulong)param_4 >> 0x20);
  uVar18 = (uint)param_4;
  uVar17 = (undefined4)((ulong)param_3 >> 0x20);
  uVar16 = (uint)param_3;
code_r0x00010a1f258c:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar10 = (uint)param_2;
    uVar13 = (uint)param_1;
    if (((uVar13 & 0x7fffffff) < 0x7f800000) && ((uVar10 & 0x7fffffff) < 0x7f800000)) {
      *(undefined4 *)((long)register0x00000008 + -0x4c) = 0;
      *(uint *)((long)register0x00000008 + -0x48) = uVar13;
      *(uint *)((long)register0x00000008 + -0x44) = uVar10;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
      FUN_10a1f261c(param_7 + 3,(undefined1 *)((long)register0x00000008 + -0x4c));
      *(uint *)((long)param_7 + 0x34) = uVar13;
      *(uint *)(param_7 + 7) = uVar10;
      *(undefined1 *)(param_7 + 6) = 1;
      return;
    }
    plVar1 = (long *)&UNK_10f64563d;
    uVar11 = param_1;
    uVar12 = param_2;
    FUN_10a00946c();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10a1f261c;
    puVar4 = (undefined8 *)plVar1[1];
    if (puVar4 < (undefined8 *)plVar1[2]) {
      uVar12 = param_8[1];
      uVar11 = *param_8;
      uVar14 = *(undefined8 *)((long)param_8 + 0xc);
      *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)((long)param_8 + 0x14);
      *(undefined8 *)((long)puVar4 + 0xc) = uVar14;
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      lVar6 = (long)puVar4 + 0x1c;
LAB_10a1f2710:
      plVar1[1] = lVar6;
      return;
    }
    unaff_x21 = (long)puVar4 - *plVar1;
    uVar7 = (unaff_x21 >> 2) * 0x6db6db6db6db6db7 + 1;
    if (uVar7 < 0x924924924924925) {
      lVar6 = plVar1[2] - *plVar1 >> 2;
      uVar8 = lVar6 * -0x2492492492492492;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0x492492492492491 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
        uVar8 = 0x924924924924924;
      }
      puVar5 = param_8;
      FUN_10a1f6664();
      puVar4 = (undefined8 *)(uVar8 + unaff_x21);
      uVar12 = param_8[1];
      uVar11 = *param_8;
      uVar14 = *(undefined8 *)((long)param_8 + 0xc);
      *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)((long)param_8 + 0x14);
      *(undefined8 *)((long)puVar4 + 0xc) = uVar14;
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      lVar6 = (long)puVar4 + 0x1c;
      lVar9 = (long)puVar4 - (plVar1[1] - *plVar1);
      _memcpy(lVar9);
      lVar2 = *plVar1;
      *plVar1 = lVar9;
      plVar1[1] = lVar6;
      plVar1[2] = uVar8 + (long)puVar5 * 0x1c;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      goto LAB_10a1f2710;
    }
    param_7 = plVar1;
    puVar4 = param_8;
    FUN_10a1f6650();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = param_2;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = param_8;
    *(long **)((long)register0x00000008 + -0x98) = plVar1;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(code **)((long)register0x00000008 + -0x88) = FUN_10a1f2728;
    uVar10 = (uint)uVar12;
    uVar13 = (uint)uVar11;
    if (((uVar13 & 0x7fffffff) < 0x7f800000) && ((uVar10 & 0x7fffffff) < 0x7f800000)) {
      if ((*(byte *)(param_7 + 6) & 1) != 0) {
        *(undefined4 *)((long)register0x00000008 + -0xcc) = 1;
        *(uint *)((long)register0x00000008 + -200) = uVar13;
        *(uint *)((long)register0x00000008 + -0xc4) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
        FUN_10a1f261c(param_7 + 3,(undefined1 *)((long)register0x00000008 + -0xcc));
        *(uint *)((long)param_7 + 0x34) = uVar13;
        *(uint *)(param_7 + 7) = uVar10;
        return;
      }
      unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xa0);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x98);
      unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
      param_8 = puVar4;
      param_1 = uVar11;
      param_2 = uVar12;
      goto code_r0x00010a1f258c;
    }
    param_7 = (long *)&UNK_10f645674;
    uVar14 = uVar11;
    uVar15 = uVar12;
    param_1 = param_5;
    param_2 = param_6;
    FUN_10a00946c();
    *(undefined8 *)((long)register0x00000008 + -0x100) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar12;
    *(undefined8 **)((long)register0x00000008 + -0xf0) = param_8;
    *(long **)((long)register0x00000008 + -0xe8) = plVar1;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x10a1f27dc;
    uVar13 = (uint)uVar15;
    uVar10 = (uint)uVar14;
    param_5 = param_1;
    param_6 = param_2;
    if (((uVar10 & 0x7fffffff) < 0x7f800000) && ((uVar13 & 0x7fffffff) < 0x7f800000)) {
      if (((uVar16 & 0x7fffffff) < 0x7f800000) && ((uVar18 & 0x7fffffff) < 0x7f800000)) {
        uVar21 = (uint)param_1;
        uVar20 = (uint)param_2;
        uVar12 = param_2;
        uVar11 = param_1;
        if (((uVar21 & 0x7fffffff) < 0x7f800000) && ((uVar20 & 0x7fffffff) < 0x7f800000)) {
          if ((*(byte *)(param_7 + 6) & 1) != 0) {
            *(undefined4 *)((long)register0x00000008 + -0x11c) = 2;
            *(uint *)((long)register0x00000008 + -0x118) = uVar10;
            *(uint *)((long)register0x00000008 + -0x114) = uVar13;
            *(uint *)((long)register0x00000008 + -0x110) = uVar16;
            *(uint *)((long)register0x00000008 + -0x10c) = uVar18;
            *(uint *)((long)register0x00000008 + -0x108) = uVar21;
            *(uint *)((long)register0x00000008 + -0x104) = uVar20;
            FUN_10a1f261c(param_7 + 3,(undefined1 *)((long)register0x00000008 + -0x11c));
            *(uint *)((long)param_7 + 0x34) = uVar21;
            *(uint *)(param_7 + 7) = uVar20;
            return;
          }
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xe0);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xd8);
          unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xf0);
          unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xe8);
          unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x100);
          unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0xf8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
          param_8 = puVar4;
          goto code_r0x00010a1f258c;
        }
      }
    }
    param_7 = (long *)&UNK_10f6456ab;
    FUN_10a00946c();
    *(undefined8 *)((long)register0x00000008 + -0x150) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x148) = uVar12;
    *(undefined8 **)((long)register0x00000008 + -0x140) = param_8;
    *(long **)((long)register0x00000008 + -0x138) = plVar1;
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0x10a1f28ec;
    if ((0x7f7fffff < (uVar10 & 0x7fffffff)) || (0x7f7fffff < (uVar13 & 0x7fffffff))) {
LAB_10a1f29c4:
      puVar3 = &UNK_10f6456e3;
      FUN_10a00946c();
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x198) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -400) = param_8;
      *(long **)((long)register0x00000008 + -0x188) = plVar1;
      *(undefined1 **)((long)register0x00000008 + -0x180) =
           (undefined1 *)((long)register0x00000008 + -0x130);
      *(code **)((long)register0x00000008 + -0x178) = FUN_10a1f29d0;
      lVar6 = *(long *)(puVar3 + 0x18);
      lVar2 = *(long *)(puVar3 + 0x20);
      puVar4 = (undefined8 *)0x80;
      __Znwm();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_DAT_110bb26f0;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      FUN_10a1f68e8((undefined1 *)((long)register0x00000008 + -0x1c0),lVar6,lVar2,
                    (lVar2 - lVar6 >> 2) * 0x6db6db6db6db6db7);
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = &PTR_FUN_110bafec0;
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
      puVar4[7] = *(undefined8 *)((long)register0x00000008 + -0x1b8);
      puVar4[6] = uVar11;
      puVar4[8] = *(undefined8 *)((long)register0x00000008 + -0x1b0);
      *(undefined1 *)(puVar4 + 9) = 1;
      *(undefined8 *)((long)puVar4 + 0x4c) = 0;
      *(undefined8 *)((long)puVar4 + 0x5c) = 0;
      *(undefined8 *)((long)puVar4 + 0x54) = 0;
      *(undefined8 *)((long)puVar4 + 0x61) = 0;
      *(undefined8 *)((long)puVar4 + 0x74) = 0;
      *(undefined8 *)((long)puVar4 + 0x6c) = 0;
      *extraout_x8 = puVar4 + 3;
      extraout_x8[1] = puVar4;
      return;
    }
    param_2 = CONCAT44(uVar19,uVar18);
    param_1 = CONCAT44(uVar17,uVar16);
    if ((0x7f7fffff < (uVar16 & 0x7fffffff)) || (0x7f7fffff < (uVar18 & 0x7fffffff)))
    goto LAB_10a1f29c4;
    if ((*(byte *)(param_7 + 6) & 1) != 0) {
      *(undefined4 *)((long)register0x00000008 + -0x16c) = 3;
      *(uint *)((long)register0x00000008 + -0x168) = uVar10;
      *(uint *)((long)register0x00000008 + -0x164) = uVar13;
      *(uint *)((long)register0x00000008 + -0x160) = uVar16;
      *(uint *)((long)register0x00000008 + -0x15c) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
      FUN_10a1f261c(param_7 + 3,(undefined1 *)((long)register0x00000008 + -0x16c));
      *(uint *)((long)param_7 + 0x34) = uVar16;
      *(uint *)(param_7 + 7) = uVar18;
      return;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x130);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x128);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x140);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x138);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x150);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x148);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
    param_8 = puVar4;
  } while( true );
}



/* Entry: 10a1f261c; end: 10a1f2727;  */

void FUN_10a1f261c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 unaff_d8;
  undefined8 uVar20;
  uint uVar21;
  undefined8 unaff_d9;
  undefined8 uVar22;
  
  uVar18 = (undefined4)((ulong)param_4 >> 0x20);
  uVar17 = (uint)param_4;
  uVar16 = (undefined4)((ulong)param_3 >> 0x20);
  uVar15 = (uint)param_3;
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = (undefined8 *)param_7[1];
    if (puVar5 < (undefined8 *)param_7[2]) {
      uVar13 = param_8[1];
      uVar12 = *param_8;
      uVar20 = *(undefined8 *)((long)param_8 + 0xc);
      *(undefined8 *)((long)puVar5 + 0x14) = *(undefined8 *)((long)param_8 + 0x14);
      *(undefined8 *)((long)puVar5 + 0xc) = uVar20;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      lVar7 = (long)puVar5 + 0x1c;
LAB_10a1f2710:
      param_7[1] = lVar7;
      return;
    }
    unaff_x21 = (long)puVar5 - *param_7;
    uVar8 = (unaff_x21 >> 2) * 0x6db6db6db6db6db7 + 1;
    if (uVar8 < 0x924924924924925) {
      lVar7 = param_7[2] - *param_7 >> 2;
      uVar9 = lVar7 * -0x2492492492492492;
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
        uVar9 = uVar8;
      }
      if (0x492492492492491 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
        uVar9 = 0x924924924924924;
      }
      puVar6 = param_8;
      FUN_10a1f6664();
      puVar5 = (undefined8 *)(uVar9 + unaff_x21);
      uVar13 = param_8[1];
      uVar12 = *param_8;
      uVar20 = *(undefined8 *)((long)param_8 + 0xc);
      *(undefined8 *)((long)puVar5 + 0x14) = *(undefined8 *)((long)param_8 + 0x14);
      *(undefined8 *)((long)puVar5 + 0xc) = uVar20;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      lVar7 = (long)puVar5 + 0x1c;
      lVar10 = (long)puVar5 - (param_7[1] - *param_7);
      _memcpy(lVar10);
      lVar2 = *param_7;
      *param_7 = lVar10;
      param_7[1] = lVar7;
      param_7[2] = uVar9 + (long)puVar6 * 0x1c;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      goto LAB_10a1f2710;
    }
    plVar3 = param_7;
    puVar5 = param_8;
    FUN_10a1f6650();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 **)((long)register0x00000008 + -0x50) = param_8;
    *(long **)((long)register0x00000008 + -0x48) = param_7;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10a1f2728;
    uVar11 = (uint)param_2;
    uVar14 = (uint)param_1;
    if (((uVar14 & 0x7fffffff) < 0x7f800000) && ((uVar11 & 0x7fffffff) < 0x7f800000)) {
      if ((*(byte *)(plVar3 + 6) & 1) != 0) {
        *(undefined4 *)((long)register0x00000008 + -0x7c) = 1;
        *(uint *)((long)register0x00000008 + -0x78) = uVar14;
        *(uint *)((long)register0x00000008 + -0x74) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
        FUN_10a1f261c(plVar3 + 3,(undefined1 *)((long)register0x00000008 + -0x7c));
        *(uint *)((long)plVar3 + 0x34) = uVar14;
        *(uint *)(plVar3 + 7) = uVar11;
        return;
      }
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x40);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x38);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x60);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x58);
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
      param_8 = puVar5;
      unaff_d9 = param_1;
      unaff_d8 = param_2;
    }
    else {
      plVar3 = (long *)&UNK_10f645674;
      uVar12 = param_1;
      uVar13 = param_2;
      unaff_d9 = param_5;
      unaff_d8 = param_6;
      FUN_10a00946c();
      puVar1 = (undefined1 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = param_2;
      *(undefined8 **)((long)register0x00000008 + -0xa0) = param_8;
      *(long **)((long)register0x00000008 + -0x98) = param_7;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0x10a1f27dc;
      uVar14 = (uint)uVar13;
      uVar11 = (uint)uVar12;
      param_5 = unaff_d9;
      param_6 = unaff_d8;
      if (((uVar11 & 0x7fffffff) < 0x7f800000) && ((uVar14 & 0x7fffffff) < 0x7f800000)) {
        if (((uVar15 & 0x7fffffff) < 0x7f800000) && ((uVar17 & 0x7fffffff) < 0x7f800000)) {
          uVar21 = (uint)unaff_d9;
          uVar19 = (uint)unaff_d8;
          param_2 = unaff_d8;
          param_1 = unaff_d9;
          if (((uVar21 & 0x7fffffff) < 0x7f800000) && ((uVar19 & 0x7fffffff) < 0x7f800000)) {
            if ((*(byte *)(plVar3 + 6) & 1) != 0) {
              *(undefined4 *)((long)register0x00000008 + -0xcc) = 2;
              *(uint *)((long)register0x00000008 + -200) = uVar11;
              *(uint *)((long)register0x00000008 + -0xc4) = uVar14;
              *(uint *)((long)register0x00000008 + -0xc0) = uVar15;
              *(uint *)((long)register0x00000008 + -0xbc) = uVar17;
              *(uint *)((long)register0x00000008 + -0xb8) = uVar21;
              *(uint *)((long)register0x00000008 + -0xb4) = uVar19;
              FUN_10a1f261c(plVar3 + 3,(undefined1 *)((long)register0x00000008 + -0xcc));
              *(uint *)((long)plVar3 + 0x34) = uVar21;
              *(uint *)(plVar3 + 7) = uVar19;
              return;
            }
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x90);
            uVar13 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x98);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0xb0);
            uVar20 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
            param_8 = puVar5;
            goto FUN_10a1f258c;
          }
        }
      }
      plVar3 = (long *)&UNK_10f6456ab;
      FUN_10a00946c();
      *(undefined8 *)((long)register0x00000008 + -0x100) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = param_2;
      *(undefined8 **)((long)register0x00000008 + -0xf0) = param_8;
      *(long **)((long)register0x00000008 + -0xe8) = param_7;
      *(undefined1 **)((long)register0x00000008 + -0xe0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x10a1f28ec;
      if ((0x7f7fffff < (uVar11 & 0x7fffffff)) || (0x7f7fffff < (uVar14 & 0x7fffffff))) {
LAB_10a1f29c4:
        puVar4 = &UNK_10f6456e3;
        FUN_10a00946c();
        *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x148) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x140) = param_8;
        *(long **)((long)register0x00000008 + -0x138) = param_7;
        *(undefined1 **)((long)register0x00000008 + -0x130) =
             (undefined1 *)((long)register0x00000008 + -0xe0);
        *(code **)((long)register0x00000008 + -0x128) = FUN_10a1f29d0;
        lVar7 = *(long *)(puVar4 + 0x18);
        lVar2 = *(long *)(puVar4 + 0x20);
        puVar5 = (undefined8 *)0x80;
        __Znwm();
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_DAT_110bb26f0;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        FUN_10a1f68e8((undefined1 *)((long)register0x00000008 + -0x170),lVar7,lVar2,
                      (lVar2 - lVar7 >> 2) * 0x6db6db6db6db6db7);
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[3] = &PTR_FUN_110bafec0;
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x170);
        puVar5[7] = *(undefined8 *)((long)register0x00000008 + -0x168);
        puVar5[6] = uVar12;
        puVar5[8] = *(undefined8 *)((long)register0x00000008 + -0x160);
        *(undefined1 *)(puVar5 + 9) = 1;
        *(undefined8 *)((long)puVar5 + 0x4c) = 0;
        *(undefined8 *)((long)puVar5 + 0x5c) = 0;
        *(undefined8 *)((long)puVar5 + 0x54) = 0;
        *(undefined8 *)((long)puVar5 + 0x61) = 0;
        *(undefined8 *)((long)puVar5 + 0x74) = 0;
        *(undefined8 *)((long)puVar5 + 0x6c) = 0;
        *extraout_x8 = puVar5 + 3;
        extraout_x8[1] = puVar5;
        return;
      }
      unaff_d8 = CONCAT44(uVar18,uVar17);
      unaff_d9 = CONCAT44(uVar16,uVar15);
      if ((0x7f7fffff < (uVar15 & 0x7fffffff)) || (0x7f7fffff < (uVar17 & 0x7fffffff)))
      goto LAB_10a1f29c4;
      if ((*(byte *)(plVar3 + 6) & 1) != 0) {
        *(undefined4 *)((long)register0x00000008 + -0x11c) = 3;
        *(uint *)((long)register0x00000008 + -0x118) = uVar11;
        *(uint *)((long)register0x00000008 + -0x114) = uVar14;
        *(uint *)((long)register0x00000008 + -0x110) = uVar15;
        *(uint *)((long)register0x00000008 + -0x10c) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        FUN_10a1f261c(plVar3 + 3,(undefined1 *)((long)register0x00000008 + -0x11c));
        *(uint *)((long)plVar3 + 0x34) = uVar15;
        *(uint *)(plVar3 + 7) = uVar17;
        return;
      }
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x100);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0xf8);
      param_8 = puVar5;
    }
FUN_10a1f258c:
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x50);
    *(undefined8 *)(puVar1 + -0x30) = uVar22;
    *(undefined8 *)(puVar1 + -0x28) = uVar20;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar1 + -0x10) = uVar12;
    *(undefined8 *)(puVar1 + -8) = uVar13;
    unaff_x29 = puVar1 + -0x10;
    uVar11 = (uint)unaff_d8;
    uVar14 = (uint)unaff_d9;
    if (((uVar14 & 0x7fffffff) < 0x7f800000) && ((uVar11 & 0x7fffffff) < 0x7f800000)) {
      *(undefined4 *)(puVar1 + -0x4c) = 0;
      *(uint *)(puVar1 + -0x48) = uVar14;
      *(uint *)(puVar1 + -0x44) = uVar11;
      *(undefined8 *)(puVar1 + -0x40) = 0;
      *(undefined8 *)(puVar1 + -0x38) = 0;
      FUN_10a1f261c(plVar3 + 3,puVar1 + -0x4c);
      *(uint *)((long)plVar3 + 0x34) = uVar14;
      *(uint *)(plVar3 + 7) = uVar11;
      *(undefined1 *)(plVar3 + 6) = 1;
      return;
    }
    param_7 = (long *)&UNK_10f64563d;
    unaff_x30 = FUN_10a1f261c;
    param_1 = unaff_d9;
    param_2 = unaff_d8;
    FUN_10a00946c();
  } while( true );
}



/* Entry: 10a1f2728; end: 10a1f29cf;  */

void FUN_10a1f2728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,undefined8 *param_8)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long lVar10;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 unaff_d8;
  undefined8 uVar21;
  uint uVar22;
  undefined8 unaff_d9;
  undefined8 uVar23;
  
  uVar19 = (undefined4)((ulong)param_4 >> 0x20);
  uVar18 = (uint)param_4;
  uVar17 = (undefined4)((ulong)param_3 >> 0x20);
  uVar16 = (uint)param_3;
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar11 = (uint)param_2;
    uVar14 = (uint)param_1;
    if (((uVar14 & 0x7fffffff) < 0x7f800000) && ((uVar11 & 0x7fffffff) < 0x7f800000)) {
      if ((*(byte *)(param_7 + 6) & 1) != 0) {
        *(undefined4 *)((long)register0x00000008 + -0x4c) = 1;
        *(uint *)((long)register0x00000008 + -0x48) = uVar14;
        *(uint *)((long)register0x00000008 + -0x44) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        FUN_10a1f261c(param_7 + 3,(undefined1 *)((long)register0x00000008 + -0x4c));
        *(uint *)((long)param_7 + 0x34) = uVar14;
        *(uint *)(param_7 + 7) = uVar11;
        return;
      }
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0x18);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x28);
      puVar1 = (undefined1 *)register0x00000008;
      unaff_x20 = param_8;
      unaff_d9 = param_1;
      unaff_d8 = param_2;
    }
    else {
      param_7 = (long *)&UNK_10f645674;
      uVar12 = param_1;
      uVar13 = param_2;
      unaff_d9 = param_5;
      unaff_d8 = param_6;
      FUN_10a00946c();
      puVar1 = (undefined1 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x80) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0x78) = param_2;
      *(undefined8 **)((long)register0x00000008 + -0x70) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10a1f27dc;
      uVar14 = (uint)uVar13;
      uVar11 = (uint)uVar12;
      param_5 = unaff_d9;
      param_6 = unaff_d8;
      if (((uVar11 & 0x7fffffff) < 0x7f800000) && ((uVar14 & 0x7fffffff) < 0x7f800000)) {
        if (((uVar16 & 0x7fffffff) < 0x7f800000) && ((uVar18 & 0x7fffffff) < 0x7f800000)) {
          uVar22 = (uint)unaff_d9;
          uVar20 = (uint)unaff_d8;
          param_2 = unaff_d8;
          param_1 = unaff_d9;
          if (((uVar22 & 0x7fffffff) < 0x7f800000) && ((uVar20 & 0x7fffffff) < 0x7f800000)) {
            if ((*(byte *)(param_7 + 6) & 1) != 0) {
              *(undefined4 *)((long)register0x00000008 + -0x9c) = 2;
              *(uint *)((long)register0x00000008 + -0x98) = uVar11;
              *(uint *)((long)register0x00000008 + -0x94) = uVar14;
              *(uint *)((long)register0x00000008 + -0x90) = uVar16;
              *(uint *)((long)register0x00000008 + -0x8c) = uVar18;
              *(uint *)((long)register0x00000008 + -0x88) = uVar22;
              *(uint *)((long)register0x00000008 + -0x84) = uVar20;
              FUN_10a1f261c(param_7 + 3,(undefined1 *)((long)register0x00000008 + -0x9c));
              *(uint *)((long)param_7 + 0x34) = uVar22;
              *(uint *)(param_7 + 7) = uVar20;
              return;
            }
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x60);
            uVar15 = *(undefined8 *)((long)register0x00000008 + -0x58);
            uVar13 = *(undefined8 *)((long)register0x00000008 + -0x70);
            uVar9 = *(undefined8 *)((long)register0x00000008 + -0x68);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x80);
            uVar21 = *(undefined8 *)((long)register0x00000008 + -0x78);
            puVar1 = (undefined1 *)((long)register0x00000008 + -0x50);
            unaff_x20 = param_8;
            goto FUN_10a1f258c;
          }
        }
      }
      param_7 = (long *)&UNK_10f6456ab;
      FUN_10a00946c();
      *(undefined8 *)((long)register0x00000008 + -0xd0) = param_1;
      *(undefined8 *)((long)register0x00000008 + -200) = param_2;
      *(undefined8 **)((long)register0x00000008 + -0xc0) = unaff_x20;
      *(long **)((long)register0x00000008 + -0xb8) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0xb0) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x10a1f28ec;
      if ((0x7f7fffff < (uVar11 & 0x7fffffff)) || (0x7f7fffff < (uVar14 & 0x7fffffff))) {
LAB_10a1f29c4:
        puVar3 = &UNK_10f6456e3;
        FUN_10a00946c();
        *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x118) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x110) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x108) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x100) =
             (undefined1 *)((long)register0x00000008 + -0xb0);
        *(code **)((long)register0x00000008 + -0xf8) = FUN_10a1f29d0;
        lVar6 = *(long *)(puVar3 + 0x18);
        lVar2 = *(long *)(puVar3 + 0x20);
        puVar4 = (undefined8 *)0x80;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = &PTR_DAT_110bb26f0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        FUN_10a1f68e8((undefined1 *)((long)register0x00000008 + -0x140),lVar6,lVar2,
                      (lVar2 - lVar6 >> 2) * 0x6db6db6db6db6db7);
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[3] = &PTR_FUN_110bafec0;
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x140);
        puVar4[7] = *(undefined8 *)((long)register0x00000008 + -0x138);
        puVar4[6] = uVar12;
        puVar4[8] = *(undefined8 *)((long)register0x00000008 + -0x130);
        *(undefined1 *)(puVar4 + 9) = 1;
        *(undefined8 *)((long)puVar4 + 0x4c) = 0;
        *(undefined8 *)((long)puVar4 + 0x5c) = 0;
        *(undefined8 *)((long)puVar4 + 0x54) = 0;
        *(undefined8 *)((long)puVar4 + 0x61) = 0;
        *(undefined8 *)((long)puVar4 + 0x74) = 0;
        *(undefined8 *)((long)puVar4 + 0x6c) = 0;
        *extraout_x8 = puVar4 + 3;
        extraout_x8[1] = puVar4;
        return;
      }
      unaff_d8 = CONCAT44(uVar19,uVar18);
      unaff_d9 = CONCAT44(uVar17,uVar16);
      if ((0x7f7fffff < (uVar16 & 0x7fffffff)) || (0x7f7fffff < (uVar18 & 0x7fffffff)))
      goto LAB_10a1f29c4;
      if ((*(byte *)(param_7 + 6) & 1) != 0) {
        *(undefined4 *)((long)register0x00000008 + -0xec) = 3;
        *(uint *)((long)register0x00000008 + -0xe8) = uVar11;
        *(uint *)((long)register0x00000008 + -0xe4) = uVar14;
        *(uint *)((long)register0x00000008 + -0xe0) = uVar16;
        *(uint *)((long)register0x00000008 + -0xdc) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        FUN_10a1f261c(param_7 + 3,(undefined1 *)((long)register0x00000008 + -0xec));
        *(uint *)((long)param_7 + 0x34) = uVar16;
        *(uint *)(param_7 + 7) = uVar18;
        return;
      }
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0xd0);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -200);
      unaff_x20 = param_8;
    }
FUN_10a1f258c:
    *(undefined8 *)(puVar1 + -0x30) = uVar23;
    *(undefined8 *)(puVar1 + -0x28) = uVar21;
    *(undefined8 *)(puVar1 + -0x20) = uVar13;
    *(undefined8 *)(puVar1 + -0x18) = uVar9;
    *(undefined8 *)(puVar1 + -0x10) = uVar12;
    *(undefined8 *)(puVar1 + -8) = uVar15;
    uVar11 = (uint)unaff_d8;
    uVar14 = (uint)unaff_d9;
    if (((uVar14 & 0x7fffffff) < 0x7f800000) && ((uVar11 & 0x7fffffff) < 0x7f800000)) {
      *(undefined4 *)(puVar1 + -0x4c) = 0;
      *(uint *)(puVar1 + -0x48) = uVar14;
      *(uint *)(puVar1 + -0x44) = uVar11;
      *(undefined8 *)(puVar1 + -0x40) = 0;
      *(undefined8 *)(puVar1 + -0x38) = 0;
      FUN_10a1f261c(param_7 + 3,puVar1 + -0x4c);
      *(uint *)((long)param_7 + 0x34) = uVar14;
      *(uint *)(param_7 + 7) = uVar11;
      *(undefined1 *)(param_7 + 6) = 1;
      return;
    }
    unaff_x19 = (long *)&UNK_10f64563d;
    param_1 = unaff_d9;
    param_2 = unaff_d8;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x80);
    *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
    *(long *)(puVar1 + -0x78) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x70) = uVar13;
    *(undefined8 *)(puVar1 + -0x68) = uVar9;
    *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x58) = FUN_10a1f261c;
    unaff_x29 = puVar1 + -0x60;
    puVar4 = (undefined8 *)unaff_x19[1];
    if (puVar4 < (undefined8 *)unaff_x19[2]) {
      uVar13 = unaff_x20[1];
      uVar12 = *unaff_x20;
      uVar15 = *(undefined8 *)((long)unaff_x20 + 0xc);
      *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)((long)unaff_x20 + 0x14);
      *(undefined8 *)((long)puVar4 + 0xc) = uVar15;
      puVar4[1] = uVar13;
      *puVar4 = uVar12;
      lVar6 = (long)puVar4 + 0x1c;
      goto LAB_10a1f2710;
    }
    unaff_x21 = (long)puVar4 - *unaff_x19;
    uVar7 = (unaff_x21 >> 2) * 0x6db6db6db6db6db7 + 1;
    if (uVar7 < 0x924924924924925) {
      lVar6 = unaff_x19[2] - *unaff_x19 >> 2;
      uVar8 = lVar6 * -0x2492492492492492;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0x492492492492491 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
        uVar8 = 0x924924924924924;
      }
      puVar5 = unaff_x20;
      FUN_10a1f6664();
      puVar4 = (undefined8 *)(uVar8 + unaff_x21);
      uVar13 = unaff_x20[1];
      uVar12 = *unaff_x20;
      uVar15 = *(undefined8 *)((long)unaff_x20 + 0xc);
      *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)((long)unaff_x20 + 0x14);
      *(undefined8 *)((long)puVar4 + 0xc) = uVar15;
      puVar4[1] = uVar13;
      *puVar4 = uVar12;
      lVar6 = (long)puVar4 + 0x1c;
      lVar10 = (long)puVar4 - (unaff_x19[1] - *unaff_x19);
      _memcpy(lVar10);
      lVar2 = *unaff_x19;
      *unaff_x19 = lVar10;
      unaff_x19[1] = lVar6;
      unaff_x19[2] = uVar8 + (long)puVar5 * 0x1c;
      if (lVar2 != 0) {
        __ZdlPv();
      }
LAB_10a1f2710:
      unaff_x19[1] = lVar6;
      return;
    }
    unaff_x30 = FUN_10a1f2728;
    param_7 = unaff_x19;
    param_8 = unaff_x20;
    FUN_10a1f6650();
  } while( true );
}



/* Entry: 10a1f29d0; end: 10a1f2aaf;  */

void FUN_10a1f29d0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  puVar3 = (undefined8 *)0x80;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110bb26f0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a1f68e8(&uStack_50,lVar1,lVar2,(lVar2 - lVar1 >> 2) * 0x6db6db6db6db6db7);
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[3] = &PTR_FUN_110bafec0;
  puVar3[7] = uStack_48;
  puVar3[6] = uStack_50;
  puVar3[8] = uStack_40;
  *(undefined1 *)(puVar3 + 9) = 1;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0;
  *(undefined8 *)((long)puVar3 + 0x54) = 0;
  *(undefined8 *)((long)puVar3 + 0x61) = 0;
  *(undefined8 *)((long)puVar3 + 0x74) = 0;
  *(undefined8 *)((long)puVar3 + 0x6c) = 0;
  *param_1 = puVar3 + 3;
  param_1[1] = puVar3;
  return;
}



/* Entry: 10a1f2ab0; end: 10a1f2b33;  */

undefined1  [16] FUN_10a1f2ab0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f645736;
  return auVar1;
}


