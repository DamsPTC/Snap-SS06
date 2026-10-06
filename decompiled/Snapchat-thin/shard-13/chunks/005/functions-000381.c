/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a874ed4; end: 10a874f77;  */

void FUN_10a874ed4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  plVar6[2] = (long)&PTR_DAT_110c24228;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a874f78; end: 10a874ff7;  */

undefined8 * FUN_10a874f78(undefined8 *param_1)

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



/* Entry: 10a874ff8; end: 10a87509b;  */

void FUN_10a874ff8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  plVar6[2] = (long)&PTR_DAT_110c24240;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a87509c; end: 10a87511b;  */

undefined8 * FUN_10a87509c(undefined8 *param_1)

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



/* Entry: 10a87511c; end: 10a8751ef;  */

void FUN_10a87511c(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  byte bStack_50;
  char cStack_28;
  
  if (*param_2 == 0) {
    return;
  }
  FUN_10a26a258(auStack_68,*param_2 + 0x30);
  if ((cStack_28 == '\x01') && ((bStack_50 & 1) != 0)) {
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
    }
    if (uStack_60 != 0) {
      FUN_10a8a7448(param_1 + 0x268,auStack_68,auStack_68,param_2);
    }
  }
  lVar2 = *param_2;
  if (*(char *)(lVar2 + 0x2f) < '\0') {
    if (*(long *)(lVar2 + 0x20) == 0) goto LAB_10a8751c0;
  }
  else if (*(char *)(lVar2 + 0x2f) == '\0') goto LAB_10a8751c0;
  if ((*(byte *)(param_1 + 0x2b8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8751dc);
    (*pcVar1)();
  }
  FUN_10a8a7448(param_1 + 0x290,lVar2 + 0x18,lVar2 + 0x18,param_2);
LAB_10a8751c0:
  FUN_10a26a30c(auStack_68);
  return;
}



/* Entry: 10a8751f0; end: 10a875383;  */

/* WARNING: Removing unreachable block (ram,0x00010a875328) */

void FUN_10a8751f0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined2 uStack_9e;
  undefined1 auStack_9c [16];
  undefined1 uStack_8c;
  undefined1 auStack_88 [40];
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0xe30) != 2)) {
    puVar1 = (undefined8 *)0x138;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_110bbad88;
    func_0x000107c2b054(auStack_58,&UNK_10f67d9eb);
    puVar3 = puVar1 + 3;
    auStack_88[0] = 0;
    uStack_60 = 0;
    auStack_9c[0] = 0;
    uStack_8c = 0;
    uStack_9e = 0;
    FUN_10a247268(puVar3,param_3,auStack_58,param_4,param_5,auStack_9c,&uStack_9e,0,auStack_88);
    ppuVar2 = &PTR_DAT_110bb5d18;
  }
  else {
    puVar1 = (undefined8 *)0x138;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110bbad38;
    func_0x000107c2b054(auStack_58,&UNK_10f67d9eb);
    puVar3 = puVar1 + 3;
    auStack_9c[0] = 0;
    uStack_8c = 0;
    uStack_9e = 0;
    auStack_88[0] = 0;
    uStack_60 = 0;
    FUN_10a247268(puVar3,param_3,auStack_58,param_4,param_5,auStack_9c,&uStack_9e,1,auStack_88);
    ppuVar2 = &PTR_DAT_110bb5d70;
  }
  *puVar3 = ppuVar2;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a875384; end: 10a875637;  */

void FUN_10a875384(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  lVar14 = *param_2;
  if ((lVar14 == 0) || (*(char *)(lVar14 + 0xb0) != '\x01')) {
    return;
  }
  if (*(char *)(lVar14 + 0xaf) < '\0') {
    if (*(long *)(lVar14 + 0xa0) == 0) {
      return;
    }
  }
  else if (*(char *)(lVar14 + 0xaf) == '\0') {
    return;
  }
  plVar1 = (long *)(lVar14 + 0x98);
  if (*(char *)(lVar14 + 0x97) < '\0') {
    if (*(long *)(lVar14 + 0x88) != 0) goto LAB_10a8753e0;
LAB_10a875410:
    lVar7 = (long)*(char *)(lVar14 + 0x7f);
    if (lVar7 < 0) {
      lVar7 = *(long *)(lVar14 + 0x70);
    }
    if (lVar7 != 0) {
      lVar7 = param_1 + 0x268;
      FUN_10a8a78bc(lVar7,lVar14 + 0x68);
joined_r0x00010a87542c:
      if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                  (*param_2 + 0x48,plVar1);
        return;
      }
    }
  }
  else {
    if (*(char *)(lVar14 + 0x97) == '\0') goto LAB_10a875410;
LAB_10a8753e0:
    if (*(char *)(param_1 + 0x2b8) == '\x01') {
      lVar7 = param_1 + 0x290;
      FUN_10a8a78bc(lVar7,lVar14 + 0x80);
      if ((*(byte *)(param_1 + 0x2b8) & 1) == 0) goto LAB_10a875610;
      goto joined_r0x00010a87542c;
    }
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar8 = (ulong)*(byte *)(lVar14 + 0xaf);
  uVar9 = 0;
LAB_10a875470:
  cVar3 = (char)uVar8;
  uVar13 = uVar9;
  while( true ) {
    uVar13 = uVar13 + 1;
    uVar10 = uVar8;
    if (cVar3 < '\0') {
      uVar10 = *(ulong *)(lVar14 + 0xa0);
    }
    if (uVar10 <= uVar9) {
      uVar6 = (uint)(char)uStack_48._7_1_;
      uVar9 = uStack_50;
      if (-1 < (int)uVar6) {
        uVar9 = (ulong)uStack_48._7_1_;
      }
      if (uVar9 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*param_2 + 0x48,&uStack_58);
        uVar6 = (uint)uStack_48._7_1_;
      }
      if ((uVar6 >> 7 & 1) == 0) {
        return;
      }
      __ZdlPv(uStack_58);
      return;
    }
    plVar11 = (long *)*plVar1;
    if (-1 < cVar3) {
      plVar11 = plVar1;
    }
    bVar2 = *(byte *)((long)plVar11 + uVar9);
    if ((4 < bVar2 - 9) && (uVar6 = bVar2 - 0x20, uVar6 != 0)) break;
    uVar9 = uVar9 + 1;
  }
  uVar10 = *(ulong *)(lVar14 + 0xa0);
  if (-1 < cVar3) {
    uVar10 = uVar8;
  }
  if (uVar9 <= uVar10) {
    if (0x19 < bVar2 - 0x61) {
      uVar6 = (uint)bVar2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_58,(int)(char)uVar6);
    while( true ) {
      bVar2 = *(byte *)(lVar14 + 0xaf);
      uVar8 = (ulong)bVar2;
      if ((char)bVar2 < '\0') {
        uVar10 = *(ulong *)(lVar14 + 0xa0);
        if (uVar10 <= uVar13) {
          uVar6 = 1;
          goto LAB_10a875568;
        }
      }
      else {
        uVar10 = *(ulong *)(lVar14 + 0xa0);
        if (uVar8 <= uVar13) {
          uVar6 = 0;
          goto LAB_10a875568;
        }
      }
      uVar6 = (uint)(char)bVar2;
      plVar11 = (long *)*plVar1;
      if (-1 < (int)uVar6) {
        plVar11 = plVar1;
      }
      if (-0x41 < *(char *)((long)plVar11 + uVar13)) break;
      if (-1 < (int)uVar6) {
        uVar10 = uVar8;
      }
      if (uVar10 <= uVar13 - 1) goto LAB_10a875610;
      uVar13 = uVar13 + 1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_58);
    }
    uVar6 = uVar6 >> 0x1f;
LAB_10a875568:
    plVar11 = (long *)*plVar1;
    plVar4 = plVar1;
    if (uVar6 == 0) goto LAB_10a875588;
    while (uVar12 = uVar10, uVar9 = uVar13, uVar13 < uVar10) {
      while( true ) {
        if (uVar12 < uVar13) goto LAB_10a875610;
        uVar9 = uVar13;
        if (*(byte *)((long)plVar11 + uVar13) < 0x21 &&
            (1L << ((ulong)*(byte *)((long)plVar11 + uVar13) & 0x3f) & 0x100003e00U) != 0)
        goto LAB_10a875470;
        uVar13 = uVar13 + 1;
        plVar4 = plVar11;
        if (uVar6 != 0) break;
LAB_10a875588:
        plVar11 = plVar4;
        uVar12 = uVar8;
        uVar9 = uVar13;
        if (uVar8 <= uVar13) goto LAB_10a875470;
      }
    }
    goto LAB_10a875470;
  }
LAB_10a875610:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a875614);
  (*pcVar5)();
}



/* Entry: 10a875638; end: 10a87566b;  */

long FUN_10a875638(long param_1)

{
  func_0x00010a5c92ec(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a87566c; end: 10a875bcb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a87566c(undefined ********param_1,undefined *******param_2,long *param_3)

{
  undefined ********ppppppppuVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  undefined *******pppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined *******pppppppuVar11;
  undefined *******pppppppuVar12;
  undefined *******pppppppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *******pppppppuVar16;
  undefined *******pppppppuVar17;
  undefined *****pppppuVar18;
  undefined ******ppppppuVar19;
  undefined ******ppppppuVar20;
  long *unaff_x20;
  undefined *******unaff_x21;
  undefined ********ppppppppuVar21;
  undefined1 uVar22;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  char cStack_290;
  undefined *******apppppppuStack_288 [2];
  char cStack_271;
  undefined1 auStack_270 [8];
  long *plStack_268;
  undefined *******pppppppuStack_260;
  undefined *******pppppppuStack_258;
  undefined8 uStack_250;
  char cStack_248;
  undefined *******pppppppuStack_240;
  undefined *******pppppppuStack_238;
  undefined *******pppppppuStack_230;
  char cStack_228;
  undefined *******pppppppuStack_220;
  undefined *******pppppppuStack_218;
  undefined *******pppppppuStack_210;
  undefined *******pppppppuStack_208;
  undefined ******ppppppuStack_200;
  undefined ******ppppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined ******ppppppuStack_1e8;
  undefined *******pppppppuStack_1e0;
  undefined *******pppppppuStack_1d8;
  undefined *******pppppppuStack_1d0;
  undefined ******ppppppuStack_1c8;
  undefined ******ppppppuStack_1c0;
  undefined ******ppppppuStack_1b8;
  undefined ******ppppppuStack_1b0;
  undefined *******pppppppuStack_1a8;
  undefined *******pppppppuStack_1a0;
  undefined ********ppppppppuStack_180;
  undefined *******pppppppuStack_178;
  long *plStack_170;
  undefined ********ppppppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined ********ppppppppuStack_148;
  undefined ********ppppppppuStack_140;
  undefined ******ppppppuStack_138;
  undefined ******ppppppuStack_130;
  undefined ********ppppppppuStack_128;
  undefined ******ppppppuStack_120;
  undefined ******ppppppuStack_118;
  undefined ********ppppppppuStack_110;
  undefined ******ppppppuStack_108;
  undefined ******ppppppuStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined ********ppppppppuStack_e8;
  undefined ********ppppppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined ******ppppppuStack_d0;
  char cStack_c8;
  undefined ********appppppppuStack_c0 [2];
  char cStack_a9;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined ******ppppppuStack_98;
  undefined *******pppppppuStack_90;
  long *plStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar21 = (undefined ********)*param_3;
  if (ppppppppuVar21 != (undefined ********)0x0) {
    unaff_x20 = param_3;
    unaff_x21 = param_2;
    if (param_2 == (undefined *******)0x0) {
      ppuVar14 = &PTR_PTR_113303d00;
      FUN_10ae079a0(0,&PTR_PTR_113303d00);
      FUN_10ae07cd4(ppuVar14,&PTR_PTR_113303d00);
      param_1 = (undefined ********)*param_3;
      ppppppppuStack_148 = (undefined ********)0x0;
      ppppppppuStack_140 = (undefined ********)0x0;
      FUN_10a29f898(param_1,&ppppppppuStack_148);
      ppppppppuVar10 = ppppppppuStack_140;
      if (ppppppppuStack_140 != (undefined ********)0x0) {
        ppppppppuVar1 = ppppppppuStack_140 + 1;
        do {
          pppppppuVar16 = *ppppppppuVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar1,0x10);
          if (bVar5) {
            *ppppppppuVar1 = (undefined *******)((long)pppppppuVar16 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppppuVar16 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_140)[2])(ppppppppuStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = ppppppppuVar10;
        }
      }
    }
    else {
      pppppppuVar16 = param_1[0x46];
      if (pppppppuVar16 == (undefined *******)0x0) {
LAB_10a875790:
        if (*(char *)((long)param_2 + 0x97) < '\0') {
          if (param_2[0x11] == (undefined ******)0x0) goto LAB_10a8757b0;
LAB_10a8757c0:
          uVar22 = 0;
          goto LAB_10a8757c4;
        }
        if (*(char *)((long)param_2 + 0x97) != '\0') goto LAB_10a8757c0;
LAB_10a8757b0:
        ppppppuVar19 = (undefined ******)(long)*(char *)((long)param_2 + 0x7f);
        if ((long)ppppppuVar19 < 0) {
          ppppppuVar19 = param_2[0xe];
        }
        if (ppppppuVar19 != (undefined ******)0x0) goto LAB_10a8757c0;
        func_0x000107c2b054(appppppppuStack_c0,&UNK_10f67d9eb);
        if (*(char *)((long)param_2 + 0x5f) < '\0') {
          func_0x000107c3192c(&ppppppppuStack_e0,param_2[9],param_2[10]);
        }
        else {
          ppppppuStack_d8 = param_2[10];
          ppppppppuStack_e0 = (undefined ********)param_2[9];
          ppppppuStack_d0 = param_2[0xb];
        }
        cStack_c8 = '\x01';
        ppppppppuStack_148 = (undefined ********)((ulong)ppppppppuStack_148 & 0xffffffffffffff00);
        ppppppuStack_108 = (undefined ******)((ulong)ppppppuStack_108 & 0xffffffffffffff00);
        FUN_10a8751f0(auStack_a8,param_1[0x6a],appppppppuStack_c0,&ppppppppuStack_e0,
                      &ppppppppuStack_148);
        FUN_10a29f898(ppppppppuVar21,auStack_a8);
        if (plStack_a0 != (long *)0x0) {
          plVar2 = plStack_a0 + 1;
          do {
            lVar15 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
          }
        }
        param_1 = (undefined ********)&ppppppppuStack_148;
        FUN_10a26a30c();
        if ((cStack_c8 == '\x01') && ((long)ppppppuStack_d0 < 0)) {
          param_1 = ppppppppuStack_e0;
          __ZdlPv();
        }
        ppppppppuVar10 = appppppppuStack_c0[0];
        if (-1 < cStack_a9) goto LAB_10a8759c0;
      }
      else {
        if (pppppppuVar16 != param_2) {
          cVar4 = *(char *)((long)param_2 + 0x47);
          ppppppuVar20 = (undefined ******)(long)cVar4;
          ppppppuVar19 = ppppppuVar20;
          if ((long)ppppppuVar20 < 0) {
            ppppppuVar19 = param_2[7];
          }
          if (ppppppuVar19 != (undefined ******)0x0) {
            ppppppuVar19 = param_2[7];
            if (-1 < cVar4) {
              ppppppuVar19 = ppppppuVar20;
            }
            bVar3 = *(byte *)((long)pppppppuVar16 + 0x47);
            ppppppuVar20 = pppppppuVar16[7];
            if (-1 < (char)bVar3) {
              ppppppuVar20 = (undefined ******)(ulong)bVar3;
            }
            if (ppppppuVar19 == ppppppuVar20) {
              pppppppuVar11 = (undefined *******)param_2[6];
              if (-1 < cVar4) {
                pppppppuVar11 = param_2 + 6;
              }
              pppppppuVar17 = (undefined *******)pppppppuVar16[6];
              if (-1 < (char)bVar3) {
                pppppppuVar17 = pppppppuVar16 + 6;
              }
              _memcmp(pppppppuVar11,pppppppuVar17);
              if ((int)pppppppuVar11 == 0) goto LAB_10a8757a0;
            }
          }
          goto LAB_10a875790;
        }
LAB_10a8757a0:
        uVar22 = 1;
LAB_10a8757c4:
        ppppppppuVar21 = (undefined ********)&ppppppppuStack_148;
        ppppppppuStack_148 = param_1;
        if (*(char *)((long)param_2 + 0x5f) < '\0') {
          func_0x000107c3192c(&ppppppppuStack_140,param_2[9],param_2[10]);
        }
        else {
          ppppppuStack_138 = param_2[10];
          ppppppppuStack_140 = (undefined ********)param_2[9];
          ppppppuStack_130 = param_2[0xb];
        }
        if (*(char *)((long)param_2 + 0x97) < '\0') {
          func_0x000107c3192c(&ppppppppuStack_128,param_2[0x10],param_2[0x11]);
        }
        else {
          ppppppuStack_120 = param_2[0x11];
          ppppppppuStack_128 = (undefined ********)param_2[0x10];
          ppppppuStack_118 = param_2[0x12];
        }
        if (*(char *)((long)param_2 + 0x7f) < '\0') {
          func_0x000107c3192c(&ppppppppuStack_110,param_2[0xd],param_2[0xe]);
        }
        else {
          ppppppuStack_108 = param_2[0xe];
          ppppppppuStack_110 = (undefined ********)param_2[0xd];
          ppppppuStack_100 = param_2[0xf];
        }
        ppppppppuStack_e8 = (undefined ********)param_3[1];
        lStack_f0 = *param_3;
        if (param_3[1] != 0) {
          plVar2 = (long *)(param_3[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_f8 = uVar22;
        if (*(char *)(param_1 + 0x57) == '\x01') {
          param_1 = (undefined ********)&ppppppppuStack_148;
          FUN_10a875bcc();
        }
        else {
          ppppppuStack_98 = (undefined ******)0x10a8a7ab8;
          pppppppuStack_90 = (undefined *******)&PTR_FUN_110c250b0;
          param_3 = (long *)0x68;
          __Znwm();
          *param_3 = (long)ppppppppuStack_148;
          param_3[2] = (long)ppppppuStack_138;
          param_3[1] = (long)ppppppppuStack_140;
          param_3[3] = (long)ppppppuStack_130;
          ppppppppuStack_140 = (undefined ********)0x0;
          ppppppuStack_138 = (undefined ******)0x0;
          ppppppuStack_130 = (undefined ******)0x0;
          if ((long)ppppppuStack_118 < 0) {
            func_0x000107c3192c(param_3 + 4,ppppppppuStack_128,ppppppuStack_120);
          }
          else {
            param_3[5] = (long)ppppppuStack_120;
            param_3[4] = (long)ppppppppuStack_128;
            param_3[6] = (long)ppppppuStack_118;
          }
          if ((long)ppppppuStack_100 < 0) {
            func_0x000107c3192c(param_3 + 7,ppppppppuStack_110,ppppppuStack_108);
          }
          else {
            param_3[8] = (long)ppppppuStack_108;
            param_3[7] = (long)ppppppppuStack_110;
            param_3[9] = (long)ppppppuStack_100;
          }
          param_2 = &ppppppuStack_98;
          *(undefined1 *)(param_3 + 10) = uStack_f8;
          param_3[0xc] = (long)ppppppppuStack_e8;
          param_3[0xb] = lStack_f0;
          lStack_f0 = 0;
          ppppppppuStack_e8 = (undefined ********)0x0;
          plStack_88 = param_3;
          FUN_10a8693c8(param_1,&ppppppuStack_98);
          param_1 = &pppppppuStack_90;
          (*(code *)*pppppppuStack_90)();
        }
        ppppppppuVar10 = ppppppppuStack_e8;
        if (ppppppppuStack_e8 != (undefined ********)0x0) {
          ppppppppuVar1 = ppppppppuStack_e8 + 1;
          do {
            pppppppuVar16 = *ppppppppuVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar1,0x10);
            if (bVar5) {
              *ppppppppuVar1 = (undefined *******)((long)pppppppuVar16 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppppuVar16 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuStack_e8)[2])(ppppppppuStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_1 = ppppppppuVar10;
          }
        }
        if ((long)ppppppuStack_100 < 0) {
          param_1 = ppppppppuStack_110;
          __ZdlPv();
        }
        if ((long)ppppppuStack_118 < 0) {
          param_1 = ppppppppuStack_128;
          __ZdlPv();
        }
        ppppppppuVar10 = ppppppppuStack_140;
        unaff_x20 = param_3;
        unaff_x21 = param_2;
        if (-1 < (long)ppppppuStack_130) goto LAB_10a8759c0;
      }
      __ZdlPv();
      param_1 = ppppppppuVar10;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
    }
  }
LAB_10a8759c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_a9 < '\0') {
    __ZdlPv(appppppppuStack_c0[0]);
  }
  ppppppppuVar10 = param_1;
  __Unwind_Resume();
  ppppppppuStack_180 = ppppppppuVar21;
  pppppppuStack_178 = unaff_x21;
  plStack_170 = unaff_x20;
  ppppppppuStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  pcStack_158 = FUN_10a875bcc;
  pppppppuVar16 = *ppppppppuVar10;
  if ((*(char *)(ppppppppuVar10 + 10) == '\x01') && (pppppppuVar16[0x58] != (undefined ******)0x0))
  {
    pppppppuVar11 = ppppppppuVar10[0xb];
    pppppppuVar16 = pppppppuVar16 + 0x58;
    goto code_r0x00010a29f898;
  }
  pppppppuVar17 = (undefined *******)(long)*(char *)((long)ppppppppuVar10 + 0x37);
  pppppppuVar11 = pppppppuVar17;
  if ((long)pppppppuVar17 < 0) {
    pppppppuVar11 = ppppppppuVar10[5];
  }
  if (pppppppuVar11 == (undefined *******)0x0) {
    if (*(char *)((long)ppppppppuVar10 + 0x4f) < '\0') {
      if (ppppppppuVar10[8] == (undefined *******)0x0) goto LAB_10a875ccc;
    }
    else if (*(char *)((long)ppppppppuVar10 + 0x4f) == '\0') {
LAB_10a875ccc:
      pppppppuVar11 = ppppppppuVar10[0xb];
      func_0x000107c2b054(&pppppppuStack_240,&UNK_10f67d9eb);
      if (*(char *)((long)ppppppppuVar10 + 0x1f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_220,ppppppppuVar10[1],ppppppppuVar10[2]);
      }
      else {
        pppppppuStack_218 = ppppppppuVar10[2];
        pppppppuStack_220 = ppppppppuVar10[1];
        pppppppuStack_210 = ppppppppuVar10[3];
      }
      pppppppuStack_208 = (undefined *******)CONCAT71(pppppppuStack_208._1_7_,1);
      pppppppuStack_1e0 = (undefined *******)((ulong)pppppppuStack_1e0 & 0xffffffffffffff00);
      pppppppuStack_1a0 = (undefined *******)((ulong)pppppppuStack_1a0 & 0xffffffffffffff00);
      FUN_10a8751f0(&pppppppuStack_260,pppppppuVar16[0x6a],&pppppppuStack_240,&pppppppuStack_220,
                    &pppppppuStack_1e0);
      FUN_10a29f898(pppppppuVar11,&pppppppuStack_260);
      pppppppuVar16 = pppppppuStack_258;
      if (pppppppuStack_258 != (undefined *******)0x0) {
        pppppppuVar11 = pppppppuStack_258 + 1;
        do {
          ppppppuVar19 = *pppppppuVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
          if (bVar5) {
            *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppppuVar19 == (undefined ******)0x0) {
          (*(code *)(*pppppppuStack_258)[2])(pppppppuStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar16);
        }
      }
      FUN_10a26a30c(&pppppppuStack_1e0);
      if (((char)pppppppuStack_208 == '\x01') && ((long)pppppppuStack_210 < 0)) {
        __ZdlPv(pppppppuStack_220);
      }
      apppppppuStack_288[0] = pppppppuStack_240;
      if (-1 < (long)pppppppuStack_230) {
        return;
      }
      goto LAB_10a876124;
    }
  }
  if (-1 < *(char *)((long)ppppppppuVar10 + 0x37)) {
    if (pppppppuVar17 != (undefined *******)0x0) goto LAB_10a875c3c;
LAB_10a875c90:
    pppppppuVar17 = pppppppuVar16 + 0x4d;
    FUN_10a881d3c(pppppppuVar17,ppppppppuVar10 + 7);
    if (pppppppuVar17 == (undefined *******)0x0) {
      pppppppuVar11 = ppppppppuVar10[0xb];
      func_0x000107c2b054(apppppppuStack_288,&UNK_10f67d9eb);
      if (*(char *)((long)ppppppppuVar10 + 0x1f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_240,ppppppppuVar10[1],ppppppppuVar10[2]);
      }
      else {
        pppppppuStack_238 = ppppppppuVar10[2];
        pppppppuStack_240 = ppppppppuVar10[1];
        pppppppuStack_230 = ppppppppuVar10[3];
      }
      cStack_228 = '\x01';
      if (*(char *)((long)ppppppppuVar10 + 0x4f) < '\0') {
        func_0x000107c3192c(&pppppppuStack_260,ppppppppuVar10[7],ppppppppuVar10[8]);
      }
      else {
        pppppppuStack_258 = ppppppppuVar10[8];
        pppppppuStack_260 = ppppppppuVar10[7];
        uStack_250 = ppppppppuVar10[9];
      }
      cStack_248 = '\x01';
      func_0x000107c2b054(auStack_2a8,&UNK_10f67d9eb);
      cStack_290 = '\x01';
      FUN_10a29fefc(&pppppppuStack_220,&pppppppuStack_260,auStack_2a8);
      pppppppuStack_1e0 = (undefined *******)((ulong)pppppppuStack_1e0 & 0xffffffffffffff00);
      uVar7 = (ulong)ppppppuStack_1c8 >> 8;
      ppppppuStack_1c8 = (undefined ******)((ulong)ppppppuStack_1c8 & 0xffffffffffffff00);
      if ((char)pppppppuStack_208 == '\x01') {
        pppppppuStack_1d8 = pppppppuStack_218;
        pppppppuStack_1e0 = pppppppuStack_220;
        pppppppuStack_1d0 = pppppppuStack_210;
        pppppppuStack_218 = (undefined *******)0x0;
        pppppppuStack_210 = (undefined *******)0x0;
        pppppppuStack_220 = (undefined *******)0x0;
        ppppppuStack_1c8 = (undefined ******)CONCAT71((int7)uVar7,1);
      }
      ppppppuStack_1c0 = (undefined ******)((ulong)ppppppuStack_1c0 & 0xffffffffffffff00);
      uVar7 = (ulong)pppppppuStack_1a8 >> 8;
      pppppppuStack_1a8 = (undefined *******)((ulong)pppppppuStack_1a8 & 0xffffffffffffff00);
      if ((char)ppppppuStack_1e8 == '\x01') {
        ppppppuStack_1b8 = ppppppuStack_1f8;
        ppppppuStack_1c0 = ppppppuStack_200;
        ppppppuStack_1b0 = uStack_1f0;
        ppppppuStack_1f8 = (undefined ******)0x0;
        uStack_1f0 = (undefined ******)0x0;
        ppppppuStack_200 = (undefined ******)0x0;
        pppppppuStack_1a8 = (undefined *******)CONCAT71((int7)uVar7,1);
      }
      pppppppuStack_1a0 = (undefined *******)CONCAT71(pppppppuStack_1a0._1_7_,1);
      FUN_10a8751f0(auStack_270,pppppppuVar16[0x6a],apppppppuStack_288,&pppppppuStack_240,
                    &pppppppuStack_1e0);
      FUN_10a29f898(pppppppuVar11,auStack_270);
      if (plStack_268 != (long *)0x0) {
        plVar2 = plStack_268 + 1;
        do {
          lVar15 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
        }
      }
      FUN_10a26a30c(&pppppppuStack_1e0);
      if (((char)ppppppuStack_1e8 == '\x01') && ((long)uStack_1f0 < 0)) {
        __ZdlPv(ppppppuStack_200);
      }
      if (((char)pppppppuStack_208 == '\x01') && ((long)pppppppuStack_210 < 0)) {
        __ZdlPv(pppppppuStack_220);
      }
      if ((cStack_290 == '\x01') && (cStack_291 < '\0')) {
        __ZdlPv(auStack_2a8[0]);
      }
      if ((cStack_248 == '\x01') && ((long)uStack_250 < 0)) {
        __ZdlPv(pppppppuStack_260);
      }
      if ((cStack_228 == '\x01') && ((long)pppppppuStack_230 < 0)) {
        __ZdlPv(pppppppuStack_240);
      }
      if (-1 < cStack_271) {
        return;
      }
LAB_10a876124:
      __ZdlPv(apppppppuStack_288[0]);
      return;
    }
LAB_10a875ca0:
    pppppppuVar11 = ppppppppuVar10[0xb];
    pppppppuVar16 = pppppppuVar17 + 5;
code_r0x00010a29f898:
    if ((pppppppuVar11 == (undefined *******)0x0) || (*(char *)(pppppppuVar11 + 8) != '\x02')) {
      if ((pppppppuVar11 != (undefined *******)0x0) && (*(char *)(pppppppuVar11 + 8) == '\x01')) {
        ppppppuVar19 = *pppppppuVar11;
        pppppppuStack_178 = (undefined *******)pppppppuVar16[1];
        ppppppppuStack_180 = (undefined ********)*pppppppuVar16;
        if (pppppppuVar16[1] != (undefined ******)0x0) {
          ppppppuVar20 = pppppppuVar16[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
            if (bVar5) {
              *ppppppuVar20 = (undefined *****)((long)*ppppppuVar20 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        (*(code *)ppppppuVar19)(&ppppppppuStack_180,pppppppuVar11);
        pppppppuVar16 = pppppppuStack_178;
        if (pppppppuStack_178 != (undefined *******)0x0) {
          ppppppuVar19 = (undefined ******)(pppppppuStack_178 + 1);
          do {
            pppppuVar18 = *ppppppuVar19;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
            if (bVar5) {
              *ppppppuVar19 = (undefined *****)((long)pppppuVar18 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppuVar18 == (undefined *****)0x0) {
            (*(code *)(*pppppppuStack_178)[2])(pppppppuStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar16);
          }
        }
        return;
      }
      return;
    }
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppppuVar17 = pppppppuVar11;
    pppppppuVar12 = pppppppuVar16;
    FUN_10a688b40();
    if (pppppppuVar17 == (undefined *******)0x0) {
      pppppppuVar13 = (undefined *******)0x0;
      pppppppuVar9 = (undefined *******)0x0;
      if (pppppppuVar12 != (undefined *******)0x0) {
        ppppppuStack_1b0 = pppppppuVar11[1];
        ppppppuStack_1b8 = *pppppppuVar11;
        if (pppppppuVar11[1] != (undefined ******)0x0) {
          ppppppuVar19 = pppppppuVar11[1] + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
            if (bVar5) {
              *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppppuStack_1d8 = (undefined *******)*pppppppuVar16;
        pppppppuVar16 = (undefined *******)pppppppuVar16[1];
        if (pppppppuVar16 != (undefined *******)0x0) {
          pppppppuVar11 = pppppppuVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar5) {
              *pppppppuVar11 = (undefined ******)((long)*pppppppuVar11 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppppppuStack_1c8 = (undefined ******)FUN_10a29fdbc;
        ppppppuStack_1c0 = (undefined ******)&PTR_FUN_110bb9698;
        ppppppuStack_1e8 = (undefined ******)0x0;
        pppppppuStack_1e0 = (undefined *******)0x0;
        if (pppppppuVar16 != (undefined *******)0x0) {
          pppppppuVar11 = pppppppuVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar5) {
              *pppppppuVar11 = (undefined ******)((long)*pppppppuVar11 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppppuVar17 = &ppppppuStack_1e8;
        pppppppuVar11 = &ppppppuStack_1c8;
        pppppppuVar13 = &ppppppuStack_1c8;
        pppppppuStack_1d0 = pppppppuVar16;
        pppppppuStack_1a8 = pppppppuStack_1d8;
        pppppppuStack_1a0 = pppppppuVar16;
        FUN_10a4634ec(pppppppuVar12,pppppppuVar13);
        pppppppuVar9 = &ppppppuStack_1c0;
        (*(code *)*ppppppuStack_1c0)();
        if (pppppppuVar16 != (undefined *******)0x0) {
          pppppppuVar12 = pppppppuVar16 + 1;
          do {
            ppppppuVar19 = *pppppppuVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
            if (bVar5) {
              *pppppppuVar12 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar16)[2])(pppppppuVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar9 = pppppppuVar16;
          }
        }
        pppppppuVar16 = pppppppuStack_1e0;
        if (pppppppuStack_1e0 != (undefined *******)0x0) {
          pppppppuVar12 = pppppppuStack_1e0 + 1;
          do {
            ppppppuVar19 = *pppppppuVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
            if (bVar5) {
              *pppppppuVar12 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*pppppppuStack_1e0)[2])(pppppppuStack_1e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar9 = pppppppuVar16;
          }
        }
      }
    }
    else {
      *pppppppuVar17 =
           (undefined ******)
           CONCAT44((int)((ulong)*pppppppuVar17 >> 0x20) + 1,(int)*pppppppuVar17 + 1);
      pppppppuVar9 = (undefined *******)*pppppppuVar11;
      FUN_10a29fb54(pppppppuVar9,pppppppuVar16);
      iVar6 = *(int *)((long)pppppppuVar17 + 4) + -1;
      *(int *)((long)pppppppuVar17 + 4) = iVar6;
      pppppppuVar13 = pppppppuVar16;
      if (iVar6 == 0) {
        *(undefined4 *)pppppppuVar17 = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_1c0)(pppppppuVar11 + 1);
    FUN_10a29f714(pppppppuVar17 + 2);
    func_0x00010a004dac(&ppppppuStack_1e8);
    pppppppuVar16 = pppppppuVar9;
    __Unwind_Resume();
    ppppppuStack_1f8 = (undefined ******)FUN_10a29fb54;
    pppppppuStack_210 = pppppppuVar17;
    pppppppuStack_208 = pppppppuVar9;
    ppppppuStack_200 = (undefined ******)&puStack_160;
    func_0x000109884c0c(&pppppppuStack_220,pppppppuVar16 + 1,*pppppppuVar16);
    func_0x000109884820(&pppppppuStack_218,&pppppppuStack_220,*pppppppuVar16);
    if (pppppppuStack_220 != (undefined *******)0x0) {
      (*(code *)**pppppppuStack_220)();
    }
    (*(code *)(**pppppppuVar16)[6])(&pppppppuStack_220);
    FUN_10a29fc40(*pppppppuVar16,&pppppppuStack_220,&pppppppuStack_218,pppppppuVar13);
    if (pppppppuStack_220 != (undefined *******)0x0) {
      (*(code *)**pppppppuStack_220)();
    }
    if (pppppppuStack_218 != (undefined *******)0x0) {
      (*(code *)**pppppppuStack_218)();
    }
    return;
  }
  if (ppppppppuVar10[5] == (undefined *******)0x0) goto LAB_10a875c90;
LAB_10a875c3c:
  if (*(char *)(pppppppuVar16 + 0x57) == '\x01') {
    pppppppuVar17 = pppppppuVar16 + 0x52;
    FUN_10a881d3c(pppppppuVar17,ppppppppuVar10 + 4);
    if (((ulong)pppppppuVar16[0x57] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a876144);
      (*pcVar8)();
    }
    if (pppppppuVar17 != (undefined *******)0x0) goto LAB_10a875ca0;
  }
  pppppppuStack_1e0 = (undefined *******)((ulong)pppppppuStack_1e0 & 0xffffffffffffff00);
  pppppppuStack_1a0 = (undefined *******)((ulong)pppppppuStack_1a0 & 0xffffffffffffff00);
  if (*(char *)((long)ppppppppuVar10 + 0x4f) < '\0') {
    if (ppppppppuVar10[8] == (undefined *******)0x0) goto LAB_10a875db8;
    func_0x000107c3192c(&pppppppuStack_240,ppppppppuVar10[7]);
  }
  else {
    if (*(char *)((long)ppppppppuVar10 + 0x4f) == '\0') goto LAB_10a875db8;
    pppppppuStack_238 = ppppppppuVar10[8];
    pppppppuStack_240 = ppppppppuVar10[7];
    pppppppuStack_230 = ppppppppuVar10[9];
  }
  cStack_228 = '\x01';
  func_0x000107c2b054(&pppppppuStack_260,&UNK_10f67d9eb);
  cStack_248 = '\x01';
  FUN_10a29fefc(&pppppppuStack_220,&pppppppuStack_240,&pppppppuStack_260);
  FUN_10a29fe34(&pppppppuStack_1e0,&pppppppuStack_220);
  if (((char)ppppppuStack_1e8 == '\x01') && (uStack_1f0._7_1_ < '\0')) {
    __ZdlPv(ppppppuStack_200);
  }
  if (((char)pppppppuStack_208 == '\x01') && ((long)pppppppuStack_210 < 0)) {
    __ZdlPv(pppppppuStack_220);
  }
  if ((cStack_248 == '\x01') && (uStack_250._7_1_ < '\0')) {
    __ZdlPv(pppppppuStack_260);
  }
  if ((cStack_228 == '\x01') && ((long)pppppppuStack_230 < 0)) {
    __ZdlPv(pppppppuStack_240);
  }
LAB_10a875db8:
  pppppppuVar11 = ppppppppuVar10[0xb];
  if (*(char *)((long)ppppppppuVar10 + 0x1f) < '\0') {
    func_0x000107c3192c(&pppppppuStack_220,ppppppppuVar10[1],ppppppppuVar10[2]);
  }
  else {
    pppppppuStack_218 = ppppppppuVar10[2];
    pppppppuStack_220 = ppppppppuVar10[1];
    pppppppuStack_210 = ppppppppuVar10[3];
  }
  pppppppuStack_208 = (undefined *******)CONCAT71(pppppppuStack_208._1_7_,1);
  FUN_10a8751f0(&pppppppuStack_240,pppppppuVar16[0x6a],ppppppppuVar10 + 4,&pppppppuStack_220,
                &pppppppuStack_1e0);
  FUN_10a29f898(pppppppuVar11,&pppppppuStack_240);
  pppppppuVar16 = pppppppuStack_238;
  if (pppppppuStack_238 != (undefined *******)0x0) {
    pppppppuVar11 = pppppppuStack_238 + 1;
    do {
      ppppppuVar19 = *pppppppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
      if (bVar5) {
        *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppppuVar19 == (undefined ******)0x0) {
      (*(code *)(*pppppppuStack_238)[2])(pppppppuStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar16);
    }
  }
  if (((char)pppppppuStack_208 == '\x01') && ((long)pppppppuStack_210 < 0)) {
    __ZdlPv(pppppppuStack_220);
  }
  FUN_10a26a30c(&pppppppuStack_1e0);
  return;
}



/* Entry: 10a875bcc; end: 10a8762df;  */

void FUN_10a875bcc(long *param_1)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  code **ppcVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code **ppcVar15;
  long lVar16;
  code *pcVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  undefined8 auStack_158 [2];
  char cStack_141;
  char cStack_140;
  long alStack_138 [2];
  char cStack_121;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  char cStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  char cStack_d8;
  undefined ***pppuStack_d0;
  code *pcStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  
  lVar20 = *param_1;
  if (((char)param_1[10] == '\x01') && (*(long *)(lVar20 + 0x2c0) != 0)) {
    ppcVar12 = (code **)param_1[0xb];
    ppcVar14 = (code **)(lVar20 + 0x2c0);
    goto code_r0x00010a29f898;
  }
  lVar16 = (long)*(char *)((long)param_1 + 0x37);
  lVar19 = lVar16;
  if (lVar16 < 0) {
    lVar19 = param_1[5];
  }
  if (lVar19 == 0) {
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      if (param_1[8] == 0) goto LAB_10a875ccc;
    }
    else if (*(char *)((long)param_1 + 0x4f) == '\0') {
LAB_10a875ccc:
      lVar19 = param_1[0xb];
      func_0x000107c2b054(&lStack_f0,&UNK_10f67d9eb);
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        func_0x000107c3192c(&pppuStack_d0,param_1[1],param_1[2]);
      }
      else {
        pcStack_c8 = (code *)param_1[2];
        pppuStack_d0 = (undefined ***)param_1[1];
        pppuStack_c0 = (undefined ***)param_1[3];
      }
      pppuStack_b8 = (undefined ***)CONCAT71(pppuStack_b8._1_7_,1);
      pppuStack_90 = (undefined ***)((ulong)pppuStack_90 & 0xffffffffffffff00);
      pppuStack_50 = (undefined ***)((ulong)pppuStack_50 & 0xffffffffffffff00);
      FUN_10a8751f0(&lStack_110,*(undefined8 *)(lVar20 + 0x350),&lStack_f0,&pppuStack_d0,
                    &pppuStack_90);
      FUN_10a29f898(lVar19,&lStack_110);
      plVar4 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar3 = plStack_108 + 1;
        do {
          lVar20 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      FUN_10a26a30c(&pppuStack_90);
      if (((char)pppuStack_b8 == '\x01') && ((long)pppuStack_c0 < 0)) {
        __ZdlPv(pppuStack_d0);
      }
      alStack_138[0] = lStack_f0;
      if (-1 < lStack_e0) {
        return;
      }
      goto LAB_10a876124;
    }
  }
  if (-1 < *(char *)((long)param_1 + 0x37)) {
    if (lVar16 != 0) goto LAB_10a875c3c;
LAB_10a875c90:
    lVar19 = lVar20 + 0x268;
    FUN_10a881d3c(lVar19,param_1 + 7);
    if (lVar19 == 0) {
      lVar19 = param_1[0xb];
      func_0x000107c2b054(alStack_138,&UNK_10f67d9eb);
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        func_0x000107c3192c(&lStack_f0,param_1[1],param_1[2]);
      }
      else {
        plStack_e8 = (long *)param_1[2];
        lStack_f0 = param_1[1];
        lStack_e0 = param_1[3];
      }
      cStack_d8 = '\x01';
      if (*(char *)((long)param_1 + 0x4f) < '\0') {
        func_0x000107c3192c(&lStack_110,param_1[7],param_1[8]);
      }
      else {
        plStack_108 = (long *)param_1[8];
        lStack_110 = param_1[7];
        uStack_100 = param_1[9];
      }
      cStack_f8 = '\x01';
      func_0x000107c2b054(auStack_158,&UNK_10f67d9eb);
      cStack_140 = '\x01';
      FUN_10a29fefc(&pppuStack_d0,&lStack_110,auStack_158);
      pppuStack_90 = (undefined ***)((ulong)pppuStack_90 & 0xffffffffffffff00);
      uVar8 = (ulong)pcStack_78 >> 8;
      pcStack_78 = (code *)((ulong)pcStack_78 & 0xffffffffffffff00);
      if ((char)pppuStack_b8 == '\x01') {
        pcStack_88 = pcStack_c8;
        pppuStack_90 = pppuStack_d0;
        pppuStack_80 = pppuStack_c0;
        pcStack_c8 = (code *)0x0;
        pppuStack_c0 = (undefined ***)0x0;
        pppuStack_d0 = (undefined ***)0x0;
        pcStack_78 = (code *)CONCAT71((int7)uVar8,1);
      }
      ppuStack_70 = (undefined **)((ulong)ppuStack_70 & 0xffffffffffffff00);
      uVar8 = (ulong)pcStack_58 >> 8;
      pcStack_58 = (code *)((ulong)pcStack_58 & 0xffffffffffffff00);
      if ((char)pcStack_98 == '\x01') {
        pcStack_68 = pcStack_a8;
        ppuStack_70 = ppuStack_b0;
        pcStack_60 = uStack_a0;
        pcStack_a8 = (code *)0x0;
        uStack_a0 = (code *)0x0;
        ppuStack_b0 = (undefined **)0x0;
        pcStack_58 = (code *)CONCAT71((int7)uVar8,1);
      }
      pppuStack_50 = (undefined ***)CONCAT71(pppuStack_50._1_7_,1);
      FUN_10a8751f0(auStack_120,*(undefined8 *)(lVar20 + 0x350),alStack_138,&lStack_f0,&pppuStack_90
                   );
      FUN_10a29f898(lVar19,auStack_120);
      if (plStack_118 != (long *)0x0) {
        plVar4 = plStack_118 + 1;
        do {
          lVar20 = *plVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
        }
      }
      FUN_10a26a30c(&pppuStack_90);
      if (((char)pcStack_98 == '\x01') && ((long)uStack_a0 < 0)) {
        __ZdlPv(ppuStack_b0);
      }
      if (((char)pppuStack_b8 == '\x01') && ((long)pppuStack_c0 < 0)) {
        __ZdlPv(pppuStack_d0);
      }
      if ((cStack_140 == '\x01') && (cStack_141 < '\0')) {
        __ZdlPv(auStack_158[0]);
      }
      if ((cStack_f8 == '\x01') && (uStack_100 < 0)) {
        __ZdlPv(lStack_110);
      }
      if ((cStack_d8 == '\x01') && (lStack_e0 < 0)) {
        __ZdlPv(lStack_f0);
      }
      if (-1 < cStack_121) {
        return;
      }
LAB_10a876124:
      __ZdlPv(alStack_138[0]);
      return;
    }
LAB_10a875ca0:
    ppcVar12 = (code **)param_1[0xb];
    ppcVar14 = (code **)(lVar19 + 0x28);
code_r0x00010a29f898:
    if ((ppcVar12 == (code **)0x0) || (*(char *)(ppcVar12 + 8) != '\x02')) {
      if ((ppcVar12 != (code **)0x0) && (*(char *)(ppcVar12 + 8) == '\x01')) {
        pcVar17 = *ppcVar12;
        pcVar21 = ppcVar14[1];
        if (ppcVar14[1] != (code *)0x0) {
          pcVar1 = ppcVar14[1] + 8;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar6) {
              *(long *)pcVar1 = *(long *)pcVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        (*pcVar17)(&stack0xffffffffffffffd0,ppcVar12);
        if (pcVar21 != (code *)0x0) {
          pcVar17 = pcVar21 + 8;
          do {
            lVar20 = *(long *)pcVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar6) {
              *(long *)pcVar17 = lVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*(long *)pcVar21 + 0x10))(pcVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar21);
          }
        }
        return;
      }
      return;
    }
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar9 = ppcVar12;
    ppcVar13 = ppcVar14;
    FUN_10a688b40();
    if (ppcVar9 == (code **)0x0) {
      ppcVar15 = (code **)0x0;
      pppuVar10 = (undefined ***)0x0;
      if (ppcVar13 != (code **)0x0) {
        pcStack_60 = ppcVar12[1];
        pcStack_68 = *ppcVar12;
        if (ppcVar12[1] != (code *)0x0) {
          pcVar17 = ppcVar12[1] + 8;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar6) {
              *(long *)pcVar17 = *(long *)pcVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pcStack_88 = *ppcVar14;
        pppuVar11 = (undefined ***)ppcVar14[1];
        if (pppuVar11 != (undefined ***)0x0) {
          pppuVar10 = pppuVar11 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
            if (bVar6) {
              *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pcStack_78 = FUN_10a29fdbc;
        ppuStack_70 = &PTR_FUN_110bb9698;
        pcStack_98 = (code *)0x0;
        pppuStack_90 = (undefined ***)0x0;
        if (pppuVar11 != (undefined ***)0x0) {
          pppuVar10 = pppuVar11 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
            if (bVar6) {
              *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppcVar9 = &pcStack_98;
        ppcVar12 = &pcStack_78;
        ppcVar15 = &pcStack_78;
        pppuStack_80 = pppuVar11;
        pcStack_58 = pcStack_88;
        pppuStack_50 = pppuVar11;
        FUN_10a4634ec(ppcVar13,ppcVar15);
        pppuVar10 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
        if (pppuVar11 != (undefined ***)0x0) {
          pppuVar2 = pppuVar11 + 1;
          do {
            ppuVar18 = *pppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar6) {
              *pppuVar2 = (undefined **)((long)ppuVar18 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar18 == (undefined **)0x0) {
            (*(code *)(*pppuVar11)[2])(pppuVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar10 = pppuVar11;
          }
        }
        pppuVar11 = pppuStack_90;
        if (pppuStack_90 != (undefined ***)0x0) {
          pppuVar2 = pppuStack_90 + 1;
          do {
            ppuVar18 = *pppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar6) {
              *pppuVar2 = (undefined **)((long)ppuVar18 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppuVar18 == (undefined **)0x0) {
            (*(code *)(*pppuStack_90)[2])(pppuStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar10 = pppuVar11;
          }
        }
      }
    }
    else {
      *ppcVar9 = (code *)CONCAT44((int)((ulong)*ppcVar9 >> 0x20) + 1,(int)*ppcVar9 + 1);
      pppuVar10 = (undefined ***)*ppcVar12;
      FUN_10a29fb54(pppuVar10,ppcVar14);
      iVar7 = *(int *)((long)ppcVar9 + 4) + -1;
      *(int *)((long)ppcVar9 + 4) = iVar7;
      ppcVar15 = ppcVar14;
      if (iVar7 == 0) {
        *(undefined4 *)ppcVar9 = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(ppcVar12 + 1);
    FUN_10a29f714(ppcVar9 + 2);
    func_0x00010a004dac(&pcStack_98);
    pppuVar11 = pppuVar10;
    __Unwind_Resume();
    pcStack_a8 = FUN_10a29fb54;
    pppuStack_c0 = (undefined ***)ppcVar9;
    pppuStack_b8 = pppuVar10;
    ppuStack_b0 = (undefined **)&stack0xfffffffffffffff0;
    func_0x000109884c0c(&pppuStack_d0,pppuVar11 + 1,*pppuVar11);
    func_0x000109884820(&pcStack_c8,&pppuStack_d0,*pppuVar11);
    if (pppuStack_d0 != (undefined ***)0x0) {
      (*(code *)**pppuStack_d0)();
    }
    (**(code **)(**pppuVar11 + 0x30))(&pppuStack_d0);
    FUN_10a29fc40(*pppuVar11,&pppuStack_d0,&pcStack_c8,ppcVar15);
    if (pppuStack_d0 != (undefined ***)0x0) {
      (*(code *)**pppuStack_d0)();
    }
    if (pcStack_c8 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_c8)();
    }
    return;
  }
  if (param_1[5] == 0) goto LAB_10a875c90;
LAB_10a875c3c:
  if (*(char *)(lVar20 + 0x2b8) == '\x01') {
    lVar19 = lVar20 + 0x290;
    FUN_10a881d3c(lVar19,param_1 + 4);
    if ((*(byte *)(lVar20 + 0x2b8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10a876144);
      (*pcVar17)();
    }
    if (lVar19 != 0) goto LAB_10a875ca0;
  }
  pppuStack_90 = (undefined ***)((ulong)pppuStack_90 & 0xffffffffffffff00);
  pppuStack_50 = (undefined ***)((ulong)pppuStack_50 & 0xffffffffffffff00);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    if (param_1[8] == 0) goto LAB_10a875db8;
    func_0x000107c3192c(&lStack_f0,param_1[7]);
  }
  else {
    if (*(char *)((long)param_1 + 0x4f) == '\0') goto LAB_10a875db8;
    plStack_e8 = (long *)param_1[8];
    lStack_f0 = param_1[7];
    lStack_e0 = param_1[9];
  }
  cStack_d8 = '\x01';
  func_0x000107c2b054(&lStack_110,&UNK_10f67d9eb);
  cStack_f8 = '\x01';
  FUN_10a29fefc(&pppuStack_d0,&lStack_f0,&lStack_110);
  FUN_10a29fe34(&pppuStack_90,&pppuStack_d0);
  if (((char)pcStack_98 == '\x01') && (uStack_a0._7_1_ < '\0')) {
    __ZdlPv(ppuStack_b0);
  }
  if (((char)pppuStack_b8 == '\x01') && ((long)pppuStack_c0 < 0)) {
    __ZdlPv(pppuStack_d0);
  }
  if ((cStack_f8 == '\x01') && (uStack_100._7_1_ < '\0')) {
    __ZdlPv(lStack_110);
  }
  if ((cStack_d8 == '\x01') && (lStack_e0 < 0)) {
    __ZdlPv(lStack_f0);
  }
LAB_10a875db8:
  lVar19 = param_1[0xb];
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&pppuStack_d0,param_1[1],param_1[2]);
  }
  else {
    pcStack_c8 = (code *)param_1[2];
    pppuStack_d0 = (undefined ***)param_1[1];
    pppuStack_c0 = (undefined ***)param_1[3];
  }
  pppuStack_b8 = (undefined ***)CONCAT71(pppuStack_b8._1_7_,1);
  FUN_10a8751f0(&lStack_f0,*(undefined8 *)(lVar20 + 0x350),param_1 + 4,&pppuStack_d0,&pppuStack_90);
  FUN_10a29f898(lVar19,&lStack_f0);
  plVar4 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar3 = plStack_e8 + 1;
    do {
      lVar20 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (((char)pppuStack_b8 == '\x01') && ((long)pppuStack_c0 < 0)) {
    __ZdlPv(pppuStack_d0);
  }
  FUN_10a26a30c(&pppuStack_90);
  return;
}



/* Entry: 10a8762e0; end: 10a876337;  */

long FUN_10a8762e0(long param_1)

{
  func_0x00010a29f7c8(param_1 + 0x58);
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



/* Entry: 10a876338; end: 10a876483;  */

/* WARNING: Removing unreachable block (ram,0x00010a876418) */
/* WARNING: Removing unreachable block (ram,0x00010a87641c) */
/* WARNING: Removing unreachable block (ram,0x00010a876424) */
/* WARNING: Removing unreachable block (ram,0x00010a87642c) */
/* WARNING: Removing unreachable block (ram,0x00010a876430) */

void FUN_10a876338(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plStack_50;
  long *plStack_48;
  
  lVar4 = *param_3;
  if (lVar4 != 0) {
    lVar5 = param_3[1];
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x60;
    __Znwm();
    plVar6 = plVar3 + 1;
    *plVar6 = 0;
    plVar3[2] = 0;
    plStack_50 = plVar3 + 3;
    *plStack_50 = (long)FUN_10a8a7b40;
    *plVar3 = (long)&PTR_DAT_110bb9920;
    plVar3[4] = (long)&PTR_FUN_110c250c8;
    plVar3[5] = lVar4;
    plVar3[6] = lVar5;
    *(undefined1 *)(plVar3 + 0xb) = 1;
    plStack_48 = plVar3;
    FUN_10a87566c(param_1,param_2,&plStack_50);
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a876484; end: 10a87657f;  */

undefined8 *
FUN_10a876484(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = param_1;
  FUN_10a2aee08();
  *puVar4 = &PTR_FUN_110c23a50;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4 + 3,*param_3,param_3[1]);
  }
  else {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    puVar4[5] = param_3[2];
    puVar4[4] = uVar8;
    puVar4[3] = uVar7;
  }
  lVar6 = param_4[1];
  uVar7 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_5[1];
  uVar7 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[10] = param_6;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  ppuVar5 = &PTR_PTR_113303d40;
  FUN_10ae079a0(0,&PTR_PTR_113303d40);
  FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303d40);
  return param_1;
}



/* Entry: 10a876580; end: 10a876623;  */

void FUN_10a876580(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  plVar6[2] = (long)&PTR_FUN_110c24258;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a876624; end: 10a8766a3;  */

undefined8 * FUN_10a876624(undefined8 *param_1)

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



/* Entry: 10a8766a4; end: 10a87672f;  */

undefined1  [16] FUN_10a8766a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f67f4b6;
  return auVar1;
}



/* Entry: 10a876730; end: 10a8767eb;  */

void FUN_10a876730(undefined8 param_1)

{
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  ppuStack_80 = (undefined **)0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0xffffffff;
  FUN_10a8767ec(param_1,&puStack_88);
  puStack_98 = &UNK_10f67ea38;
  puStack_90 = &UNK_10f67efd7;
  ppuStack_80 = &puStack_98;
  puStack_88 = &UNK_10f67efc9;
  uStack_78 = 2;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a8a7fcc();
  FUN_10a8a8460(param_1);
  return;
}



/* Entry: 10a8767ec; end: 10a8768c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a876884) */

undefined1  [16] FUN_10a8767ec(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f67f4b6,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8a7ed0(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8768c4; end: 10a876a73;  */

undefined8 * FUN_10a8768c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a03c0d0(param_1 + 3);
  param_1[7] = &PTR_DAT_110c23b18;
  *param_1 = &PTR_FUN_110c23a80;
  param_1[3] = &PTR_DAT_110c23af0;
  param_1[8] = &PTR_DAT_110c23b40;
  param_1[9] = param_2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
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
  param_1[0x10] = puVar1 + 3;
  param_1[0x11] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x10);
  param_1[0x16] = 0;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  FUN_10a5ae998(param_1[4],&PTR_DAT_110b9f988,param_2,param_1 + 3);
  FUN_10a5ae998(param_1[0x10],&PTR_DAT_110c23fb8,param_2,param_1 + 7);
  return param_1;
}



/* Entry: 10a876a74; end: 10a877ad7;  */

/* WARNING: Removing unreachable block (ram,0x00010a877408) */
/* WARNING: Removing unreachable block (ram,0x00010a876b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a877418) */

void FUN_10a876a74(undefined **param_1,long *param_2,long *param_3,char param_4,long *param_5,
                  long *param_6,long *param_7,undefined8 *param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined **ppuVar16;
  int *piVar17;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *param_2;
  if (lVar24 == 0) {
    FUN_10a00946c(&UNK_10f67efe8);
LAB_10a877738:
    ___stack_chk_fail();
  }
  else {
    if (*(char *)(lVar24 + 0x5f) < '\0') {
      if (*(long *)(lVar24 + 0x50) == 0) goto LAB_10a876ae4;
    }
    else if (*(char *)(lVar24 + 0x5f) == '\0') {
LAB_10a876ae4:
      if (0x132 < *(int *)(*(long *)(param_1[9] + 0xa20) + 0x18)) {
        lVar25 = *(long *)(*(long *)(param_1[9] + 0x100) + 0x268);
        iVar6 = *(int *)(lVar25 + 0x30);
        if (iVar6 != 0) {
          lVar21 = (long)iVar6 << 2;
          piVar17 = *(int **)(lVar25 + 0x38);
          do {
            if (*piVar17 == 0) {
              ppuVar13 = (undefined **)0x20;
              __Znwm();
              ppuStack_b0 = (undefined **)0x8000000000000020;
              ppuStack_b8 = (undefined **)0x1c;
              ppuVar13[1] = (undefined *)0x70616e732e73656d;
              *ppuVar13 = (undefined *)0x61672e7363657073;
              builtin_strncpy((char *)((long)ppuVar13 + 0x14),".com:443",8);
              builtin_strncpy((char *)((long)ppuVar13 + 0xc),"snapchat",8);
              *(char *)((long)ppuVar13 + 0x1c) = '\0';
              ppuStack_c0 = ppuVar13;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (lVar24 + 0x48,&ppuStack_c0);
              goto LAB_10a876b74;
            }
            lVar21 = lVar21 + -4;
            piVar17 = piVar17 + 1;
          } while (lVar21 != 0);
        }
      }
      ppuVar13 = (undefined **)0x20;
      __Znwm();
      ppuStack_b0 = (undefined **)0x8000000000000020;
      ppuStack_b8 = (undefined **)0x18;
      ppuVar13[1] = (undefined *)0x7461686370616e73;
      *ppuVar13 = (undefined *)0x2e6970612e706367;
      ppuVar13[2] = (undefined *)0x3334343a6d6f632e;
      *(char *)(ppuVar13 + 3) = '\0';
      ppuStack_c0 = ppuVar13;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar24 + 0x48,&ppuStack_c0);
    }
LAB_10a876b74:
    if ((param_1[0x12] == (undefined *)0x0) && (param_1[9] != (undefined *)0x0)) {
      FUN_10a5ca860(&ppuStack_c0,&ppuStack_100,&UNK_10f67d9eb,&UNK_10f67d9eb,&UNK_10f67d9eb);
      FUN_10a860d8c(param_1 + 0x12,&ppuStack_c0);
      ppuVar13 = ppuStack_b8;
      if (ppuStack_b8 != (undefined **)0x0) {
        ppuVar16 = ppuStack_b8 + 1;
        do {
          puVar19 = *ppuVar16;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar9) {
            *ppuVar16 = puVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (puVar19 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
      ppuStack_f8 = (undefined **)0xb;
      ppuStack_100 = (undefined **)&DAT_10f535b2b;
      plVar12 = *(long **)(param_1[9] + 0xaa0);
      plVar11 = plVar12 + 9;
      FUN_10a1cda24(plVar11,&ppuStack_100);
      if (plVar11 == (long *)0x0) {
        FUN_10a00946c(&UNK_10f64981f);
        goto LAB_10a877780;
      }
      ppuStack_b8 = ppuStack_f8;
      ppuStack_c0 = ppuStack_100;
      FUN_10a2677b4(plVar12[0x11],&ppuStack_c0);
      plVar28 = (long *)plVar11[4];
      if ((plVar28 == (long *)0x0) ||
         (plVar15 = plVar28, ___dynamic_cast(plVar28,&PTR_DAT_110bbadc8,&PTR_DAT_110bbab38,0),
         plVar15 == (long *)0x0)) {
        FUN_10a00946c(&UNK_10f64983a);
        goto LAB_10a877780;
      }
      ppuStack_c0 = (undefined **)FUN_10a8a8564;
      ppuStack_b8 = &PTR_FUN_110c25100;
      ppuStack_b0 = param_1;
      FUN_10a5cabf8();
      (*(code *)*ppuStack_b8)(&ppuStack_b8);
      (**(code **)(*plVar28 + 0x10))(plVar28);
      plVar11 = (long *)plVar11[4];
      (**(code **)(*plVar11 + 0x18))();
      if ((int)plVar11 != 0) {
        (**(code **)(*(long *)((long)plVar12 + *(long *)(*plVar12 + -0x18)) + 0x28))
                  ((long)plVar12 + *(long *)(*plVar12 + -0x18));
      }
      ppuStack_138 = (undefined **)0xf;
      ppuStack_140 = (undefined **)&DAT_10f64980f;
      plVar12 = *(long **)(param_1[9] + 0xaa0);
      plVar11 = plVar12 + 9;
      FUN_10a1cda24(plVar11,&ppuStack_140);
      if (plVar11 == (long *)0x0) {
        FUN_10a00946c(&UNK_10f64981f);
        goto LAB_10a877780;
      }
      ppuStack_b8 = ppuStack_138;
      ppuStack_c0 = ppuStack_140;
      FUN_10a2677b4(plVar12[0x11],&ppuStack_c0);
      plVar28 = (long *)plVar11[4];
      if ((plVar28 == (long *)0x0) ||
         (plVar15 = plVar28, ___dynamic_cast(plVar28,&PTR_DAT_110bbadc8,&PTR_DAT_110bbab38,0),
         plVar15 == (long *)0x0)) {
        FUN_10a00946c(&UNK_10f64983a);
        goto LAB_10a877780;
      }
      ppuStack_c0 = (undefined **)FUN_10a8a8610;
      ppuStack_b8 = &PTR_FUN_110c25120;
      ppuStack_b0 = param_1;
      FUN_10a5cabf8();
      (*(code *)*ppuStack_b8)(&ppuStack_b8);
      (**(code **)(*plVar28 + 0x10))(plVar28);
      plVar11 = (long *)plVar11[4];
      (**(code **)(*plVar11 + 0x18))();
      if ((int)plVar11 != 0) {
        (**(code **)(*(long *)((long)plVar12 + *(long *)(*plVar12 + -0x18)) + 0x28))
                  ((long)plVar12 + *(long *)(*plVar12 + -0x18));
      }
    }
    plVar11 = *(long **)(*(long *)(param_1[9] + 0x100) + 0x1c8);
    (**(code **)(*plVar11 + 0xa0))();
    plStack_170 = (long *)0x0;
    plStack_168 = (long *)0x0;
    plVar12 = (long *)plVar11[1];
    if (((plVar12 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_168 = plVar12, plVar12 == (long *)0x0))
       || (plStack_170 = (long *)*plVar11, plStack_170 == (long *)0x0)) {
      puVar14 = (undefined8 *)0x100;
      __Znwm();
      puVar14[0x13] = 0;
      puVar14[0x12] = 0;
      puVar14[0x15] = 0;
      puVar14[0x14] = 0;
      puVar14[0x17] = 0;
      puVar14[0x16] = 0;
      *puVar14 = &PTR_DAT_1107eca30;
      puVar14[0x14] = 0;
      puVar14[0x13] = 0;
      puVar14[0x16] = 0;
      puVar14[0x15] = 0;
      puVar14[2] = 0;
      puVar14[1] = 0;
      puVar14[4] = 0;
      puVar14[3] = 0;
      puVar14[6] = 0;
      puVar14[5] = 0;
      puVar14[8] = 0;
      puVar14[7] = 0;
      puVar14[10] = 0;
      puVar14[9] = 0;
      puVar14[0xc] = 0;
      puVar14[0xb] = 0;
      puVar14[0xe] = 0;
      puVar14[0xd] = 0;
      puVar14[0x10] = 0;
      puVar14[0xf] = 0;
      puVar14[0x11] = 0;
      *(undefined4 *)(puVar14 + 0x17) = 0x3f800000;
      puVar14[0x18] = 0x32aaaba7;
      puVar14[0x1f] = 0;
      puVar14[0x1e] = 0;
      puVar14[0x1d] = 0;
      puVar14[0x1c] = 0;
      puVar14[0x1b] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x19] = 0;
      FUN_10a88b2c4(&puStack_180,puVar14,&UNK_104c5b964);
    }
    else {
      (**(code **)(*plStack_170 + 0x10))(&puStack_180);
    }
    plVar11 = *(long **)(*(long *)(param_1[9] + 0x100) + 0x1c8);
    (**(code **)(*plVar11 + 0x60))();
    lVar24 = plVar11[1];
    puVar23 = (undefined *)plVar11[1];
    puVar19 = (undefined *)*plVar11;
    if (lVar24 != 0) {
      plVar11 = (long *)(lVar24 + 0x10);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    puVar27 = param_1[9];
    lVar25 = *(long *)(puVar27 + 0x100);
    puVar3 = (undefined *)*param_5;
    puVar5 = (undefined *)param_5[1];
    ppuVar13 = (undefined **)0x690;
    __Znwm();
    ppuVar13[1] = (undefined *)0x0;
    ppuVar13[2] = (undefined *)0x0;
    *ppuVar13 = (undefined *)&PTR_FUN_110bf8328;
    if (puVar5 != (undefined *)0x0) {
      plVar11 = (long *)(puVar5 + 8);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    lVar21 = param_3[1];
    puVar32 = (undefined *)param_3[1];
    puVar30 = (undefined *)*param_3;
    if (lVar21 != 0) {
      plVar11 = (long *)(lVar21 + 0x10);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    cVar7 = *(char *)(param_1 + 0x14);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    ppuVar13[0x1a] = (undefined *)&PTR_DAT_110ae9180;
    ppuVar13[8] = (undefined *)&PTR_DAT_110c23a08;
    ppuVar13[5] = (undefined *)0x0;
    ppuVar13[4] = (undefined *)0x0;
    ppuStack_140 = (undefined **)0x10a5ca4e0;
    ppuStack_138 = &PTR_DAT_110950c70;
    ppuVar13[7] = (undefined *)0x0;
    ppuVar13[6] = (undefined *)0x0;
    ppuVar13[3] = (undefined *)&PTR_FUN_110c239a8;
    ppuVar13[9] = &UNK_10897d5f0;
    ppuVar13[10] = (undefined *)&PTR_DAT_110ae9180;
    ppuVar13[0x11] = (undefined *)0x32aaaba7;
    ppuVar13[0x13] = (undefined *)0x0;
    ppuVar13[0x12] = (undefined *)0x0;
    ppuVar13[0x15] = (undefined *)0x0;
    ppuVar13[0x14] = (undefined *)0x0;
    ppuVar13[0x17] = (undefined *)0x0;
    ppuVar13[0x16] = (undefined *)0x0;
    ppuVar13[0x18] = (undefined *)0x0;
    ppuVar13[0x19] = &UNK_10897d5f0;
    ppuVar13[0x21] = (undefined *)0x32aaaba7;
    ppuVar13[0x28] = (undefined *)0x0;
    ppuVar13[0x25] = (undefined *)0x0;
    ppuVar13[0x24] = (undefined *)0x0;
    ppuVar13[0x27] = (undefined *)0x0;
    ppuVar13[0x26] = (undefined *)0x0;
    ppuVar13[0x23] = (undefined *)0x0;
    ppuVar13[0x22] = (undefined *)0x0;
    ppuVar16 = ppuVar13;
    puStack_150 = puVar3;
    plStack_148 = (long *)puVar5;
    FUN_109d1a80c();
    ppuStack_c0 = (undefined **)*ppuVar16;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_e8 = 0;
    lStack_f0 = 0;
    ppuStack_100 = (undefined **)&UNK_1053a6a3c;
    ppuStack_f8 = &PTR_DAT_110ae9180;
    ppuStack_b8 = (undefined **)&UNK_1053a6a3c;
    ppuStack_b0 = &PTR_DAT_110ae9180;
    func_0x000109d18d1c(ppuVar13 + 0x29,&UNK_10f67ec36,0x13,&ppuStack_c0);
    func_0x0001092ba41c(&ppuStack_c0);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    puVar14 = (undefined8 *)0x20;
    __Znwm();
    puVar14[1] = 0;
    puVar14[2] = 0;
    *(undefined4 *)(puVar14 + 3) = 0;
    *puVar14 = &PTR_FUN_110c24800;
    ppuVar13[0x40] = (undefined *)(puVar14 + 3);
    ppuVar13[0x41] = (undefined *)puVar14;
    *(char *)(ppuVar13 + 0x42) = '\0';
    if (*(char *)(lVar25 + 0x21f) < '\0') {
      func_0x000107c3192c(ppuVar13 + 0x43,*(undefined8 *)(lVar25 + 0x208),
                          *(undefined8 *)(lVar25 + 0x210));
    }
    else {
      puVar33 = *(undefined **)(lVar25 + 0x210);
      puVar31 = *(undefined **)(lVar25 + 0x208);
      ppuVar13[0x45] = *(undefined **)(lVar25 + 0x218);
      ppuVar13[0x44] = puVar33;
      ppuVar13[0x43] = puVar31;
    }
    ppuVar13[0x48] = (undefined *)0x0;
    ppuVar13[0x47] = (undefined *)0x0;
    ppuVar13[0x46] = (undefined *)0x0;
    puVar31 = param_1[0x13];
    ppuVar13[0x49] = param_1[0x12];
    ppuVar13[0x4a] = puVar31;
    if (puVar31 != (undefined *)0x0) {
      plVar11 = (long *)(puVar31 + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    ppuVar13[0x53] = (undefined *)0x0;
    ppuVar13[0x50] = (undefined *)0x0;
    ppuVar13[0x4f] = (undefined *)0x0;
    ppuVar13[0x52] = (undefined *)0x0;
    ppuVar13[0x51] = (undefined *)0x0;
    ppuVar13[0x4c] = (undefined *)0x0;
    ppuVar13[0x4b] = (undefined *)0x0;
    ppuVar13[0x4e] = (undefined *)0x0;
    ppuVar13[0x4d] = (undefined *)0x0;
    *(undefined4 *)(ppuVar13 + 0x54) = 0x3f800000;
    *(char *)(ppuVar13 + 0x55) = '\0';
    *(char *)(ppuVar13 + 0x5a) = '\0';
    ppuVar13[0x61] = (undefined *)0x0;
    ppuVar13[0x5c] = (undefined *)0x0;
    ppuVar13[0x5b] = (undefined *)0x0;
    ppuVar13[0x5e] = (undefined *)0x0;
    ppuVar13[0x5d] = (undefined *)0x0;
    ppuVar13[0x60] = (undefined *)0x0;
    ppuVar13[0x5f] = (undefined *)0x0;
    *(undefined4 *)(ppuVar13 + 0x62) = 0x3f800000;
    ppuVar13[100] = (undefined *)0x0;
    ppuVar13[99] = (undefined *)0x0;
    ppuVar13[0x66] = (undefined *)0x0;
    ppuVar13[0x65] = (undefined *)0x0;
    *(undefined4 *)(ppuVar13 + 0x67) = 0x3f800000;
    ppuVar13[0x69] = (undefined *)0x0;
    ppuVar13[0x68] = (undefined *)0x0;
    ppuVar13[0x6b] = (undefined *)0x0;
    ppuVar13[0x6a] = (undefined *)0x0;
    *(undefined4 *)(ppuVar13 + 0x6c) = 0x3f800000;
    ppuVar13[0x6d] = puVar27;
    ppuVar13[0x6f] = puVar23;
    ppuVar13[0x6e] = puVar19;
    if (lVar24 != 0) {
      plVar11 = (long *)(lVar24 + 0x10);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    ppuVar13[0x71] = (undefined *)plStack_178;
    ppuVar13[0x70] = puStack_180;
    if (plStack_178 != (long *)0x0) {
      plVar11 = plStack_178 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    lVar18 = param_2[1];
    puVar19 = (undefined *)*param_2;
    ppuVar13[0x73] = (undefined *)param_2[1];
    ppuVar13[0x72] = puVar19;
    if (lVar18 != 0) {
      plVar11 = (long *)(lVar18 + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    FUN_10a05a5d4(ppuVar13 + 0x74,&ppuStack_c0);
    ppuVar13[0x76] = puVar3;
    ppuVar13[0x77] = puVar5;
    puStack_150 = (undefined *)0x0;
    plStack_148 = (long *)0x0;
    FUN_10a892a74(ppuVar13 + 0x78);
    ppuVar13[0x83] = (undefined *)0x0;
    ppuVar13[0x82] = (undefined *)0x0;
    ppuVar13[0x7f] = (undefined *)0x0;
    ppuVar13[0x7e] = (undefined *)0x0;
    ppuVar13[0x81] = (undefined *)0x0;
    ppuVar13[0x80] = (undefined *)0x0;
    ppuVar13[0x7b] = (undefined *)0x0;
    ppuVar13[0x7a] = (undefined *)0x0;
    ppuVar13[0x7d] = (undefined *)0x0;
    ppuVar13[0x7c] = (undefined *)0x0;
    FUN_10a85f960(ppuVar13 + 0x84,*(undefined8 *)(*(long *)(puVar27 + 0x100) + 0x1c8));
    *(char *)(ppuVar13 + 0x87) = param_4;
    ppuVar13[0x89] = puVar32;
    ppuVar13[0x88] = puVar30;
    if (lVar21 != 0) {
      plVar11 = (long *)(lVar21 + 0x10);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    ppuVar13[0x8a] = (undefined *)0x32aaaba7;
    ppuVar13[0x97] = (undefined *)0x0;
    ppuVar13[0x8c] = (undefined *)0x0;
    ppuVar13[0x8b] = (undefined *)0x0;
    ppuVar13[0x8e] = (undefined *)0x0;
    ppuVar13[0x8d] = (undefined *)0x0;
    ppuVar13[0x90] = (undefined *)0x0;
    ppuVar13[0x8f] = (undefined *)0x0;
    ppuVar13[0x92] = (undefined *)0x0;
    ppuVar13[0x91] = (undefined *)0x0;
    ppuVar13[0x94] = (undefined *)0x0;
    ppuVar13[0x93] = (undefined *)0x0;
    ppuVar13[0x96] = (undefined *)0x0;
    ppuVar13[0x95] = (undefined *)0x0;
    puVar14 = (undefined8 *)0x58;
    __Znwm();
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = &PTR_DAT_110bf7fc8;
    puVar14[8] = 0;
    puVar14[7] = 0;
    puVar14[6] = 0;
    puVar14[5] = 0;
    *(undefined8 *)((long)puVar14 + 0x4d) = 0;
    *(undefined8 *)((long)puVar14 + 0x45) = 0;
    puVar14[4] = 0;
    puVar14[3] = 0;
    ppuVar13[0x98] = (undefined *)(puVar14 + 3);
    ppuVar13[0x99] = (undefined *)puVar14;
    FUN_10a5cf1fc(ppuVar13 + 0x98);
    *(char *)(ppuVar13 + 0x9a) = cVar7;
    ((char *)((long)ppuVar13 + 0x4d1))[0] = '\0';
    ((char *)((long)ppuVar13 + 0x4d1))[1] = '\0';
    *(char *)((long)ppuVar13 + 0x4d3) = '\0';
    FUN_10a876484(ppuVar13 + 0x9b,puVar27,(long *)(lVar25 + 0x208),ppuVar13 + 0x6e,ppuVar13 + 0x74,
                  ppuVar13 + 3);
    ppuVar13[0xa9] = FUN_10a87eb30;
    ppuVar13[0xaa] = (undefined *)&PTR_DAT_110ae9180;
    FUN_10a892d0c(ppuVar13 + 0xb1,ppuVar13[0x70],ppuVar13[0x71]);
    ppuVar13[0xb3] = (undefined *)*param_6;
    (**(code **)(param_6[1] + 0x10))(ppuVar13 + 0xb4,param_6 + 1);
    ppuVar13[0xbb] = (undefined *)*param_7;
    (**(code **)(param_7[1] + 0x10))(ppuVar13 + 0xbc,param_7 + 1);
    ppuVar13[0xc9] = (undefined *)0x0;
    ppuVar13[0xc6] = (undefined *)0x0;
    ppuVar13[0xc5] = (undefined *)0x0;
    ppuVar13[200] = (undefined *)0x0;
    ppuVar13[199] = (undefined *)0x0;
    ppuVar13[0xc4] = (undefined *)0x0;
    ppuVar13[0xc3] = (undefined *)0x0;
    ppuVar13[0xca] = (undefined *)ppuStack_140;
    (*(code *)ppuStack_138[2])(ppuVar13 + 0xcb,&ppuStack_138);
    FUN_10a5ae998(ppuVar13[0x98],&PTR_DAT_110c23fb8,puVar27,ppuVar13 + 8);
    ppuVar16 = (undefined **)0x60;
    __Znwm();
    ppuVar16[1] = (undefined *)0x0;
    ppuVar16[2] = (undefined *)0x0;
    *ppuVar16 = (undefined *)&PTR_FUN_110c24850;
    ppuStack_c0 = ppuVar16 + 3;
    *ppuStack_c0 = (undefined *)0x32aaaba7;
    ppuVar16[5] = (undefined *)0x0;
    ppuVar16[4] = (undefined *)0x0;
    ppuVar16[7] = (undefined *)0x0;
    ppuVar16[6] = (undefined *)0x0;
    ppuVar16[9] = (undefined *)0x0;
    ppuVar16[8] = (undefined *)0x0;
    ppuVar16[0xb] = (undefined *)0x0;
    ppuVar16[10] = (undefined *)0x0;
    ppuStack_b8 = ppuVar16;
    FUN_10a85fa40(ppuVar13 + 0x7a,&ppuStack_c0);
    ppuVar16 = ppuStack_b8;
    if (ppuStack_b8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_b8 + 1;
      do {
        puVar19 = *ppuVar1;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = puVar19 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (puVar19 == (undefined *)0x0) {
        (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
      }
    }
    puVar19 = ppuVar13[0x6d];
    func_0x000107c2b054(&ppuStack_100,&UNK_10f67ec4a);
    if (puVar19 != (undefined *)0x0) {
      uVar29 = *(undefined8 *)(puVar19 + 0x8d8);
      func_0x000107c2b054(&ppuStack_c0,"true");
      FUN_10a76bdb0(uVar29,&ppuStack_100,&ppuStack_c0);
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (lVar21 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar11 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar12 = plStack_148 + 1;
      do {
        lVar25 = *plVar12;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *plVar12 = lVar25 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    ppuStack_190 = ppuVar13 + 3;
    ppuStack_188 = ppuVar13;
    func_0x00010a5ca544(&ppuStack_190,ppuVar13 + 6);
    plStack_198 = (long *)param_8[1];
    uStack_1a0 = *param_8;
    if (param_8[1] != 0) {
      plVar11 = (long *)(param_8[1] + 8);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    puVar14 = &uStack_1a0;
    FUN_10a74f474(ppuStack_190 + 0xc0);
    plVar11 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar12 = plStack_198 + 1;
      do {
        lVar25 = *plVar12;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *plVar12 = lVar25 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    ppuVar16 = ppuStack_188;
    ppuVar13 = ppuStack_190;
    ppuStack_100 = ppuStack_190;
    ppuStack_f8 = ppuStack_188;
    if (ppuStack_188 != (undefined **)0x0) {
      ppuVar1 = ppuStack_188 + 1;
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    lVar25 = *param_3;
    lVar21 = param_3[1];
    if (lVar21 != 0) {
      plVar11 = (long *)(lVar21 + 8);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = *plVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    puVar4 = (undefined8 *)param_1[0xb];
    lStack_f0 = lVar25;
    lStack_e8 = lVar21;
    if (puVar4 < param_1[0xc]) {
      *puVar4 = ppuStack_190;
      puVar4[1] = ppuStack_188;
      puVar26 = puVar4 + 4;
      puVar4[2] = lVar25;
      puVar4[3] = lVar21;
LAB_10a8775ec:
      param_1[0xb] = (undefined *)puVar26;
      FUN_10a8692fc(ppuStack_190);
      ppuVar13 = ppuStack_188;
      if (ppuStack_188 != (undefined **)0x0) {
        ppuVar16 = ppuStack_188 + 1;
        do {
          puVar19 = *ppuVar16;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar9) {
            *ppuVar16 = puVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (puVar19 == (undefined *)0x0) {
          (**(code **)(*ppuStack_188 + 0x10))(ppuStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        }
      }
      if (lVar24 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar24);
      }
      if (plStack_178 != (long *)0x0) {
        plVar11 = plStack_178 + 1;
        do {
          lVar24 = *plVar11;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar9) {
            *plVar11 = lVar24 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
        }
      }
      plVar11 = plStack_168;
      if (plStack_168 != (long *)0x0) {
        plVar12 = plStack_168 + 1;
        do {
          lVar24 = *plVar12;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar9) {
            *plVar12 = lVar24 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_168 + 0x10))(plStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      goto LAB_10a877738;
    }
    puVar19 = param_1[10];
    lVar18 = (long)puVar4 - (long)puVar19;
    uVar2 = (lVar18 >> 5) + 1;
    if (uVar2 >> 0x3b == 0) {
      uVar20 = (long)param_1[0xc] - (long)puVar19;
      uVar22 = (long)uVar20 >> 4;
      if (uVar22 <= uVar2) {
        uVar22 = uVar2;
      }
      if (0x7fffffffffffffdf < uVar20) {
        uVar22 = 0x7ffffffffffffff;
      }
      ppuStack_a0 = param_1 + 10;
      FUN_10a881f58();
      puVar19 = param_1[10];
      puVar23 = param_1[0xb];
      puVar4 = (undefined8 *)(uVar22 + lVar18);
      *puVar4 = ppuVar13;
      puVar4[1] = ppuVar16;
      ppuStack_100 = (undefined **)0x0;
      ppuStack_f8 = (undefined **)0x0;
      puVar4[2] = lVar25;
      puVar4[3] = lVar21;
      puVar26 = puVar4 + 4;
      puVar23 = (undefined *)((long)puVar4 - ((long)puVar23 - (long)puVar19));
      _memcpy(puVar23,puVar19);
      ppuStack_c0 = (undefined **)param_1[10];
      param_1[10] = puVar23;
      param_1[0xb] = (undefined *)puVar26;
      puStack_a8 = param_1[0xc];
      param_1[0xc] = (undefined *)(uVar22 + (long)puVar14 * 0x20);
      ppuStack_b8 = ppuStack_c0;
      ppuStack_b0 = ppuStack_c0;
      FUN_10a881f8c(&ppuStack_c0);
      goto LAB_10a8775ec;
    }
  }
  FUN_10a881f44();
LAB_10a877780:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a877784);
  (*pcVar10)();
}



/* Entry: 10a877ad8; end: 10a877ae7;  */

void FUN_10a877ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x48);
  return;
}



/* Entry: 10a877ae8; end: 10a877e5f;  */

/* WARNING: Removing unreachable block (ram,0x00010a877c1c) */

void FUN_10a877ae8(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x230;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c251b0;
    plVar6 = plVar3 + 3;
    FUN_10aaf027c(plVar6,0,param_3);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10a8a8820(&plStack_50,plVar3 + 8,plVar6);
    FUN_10a8a86bc(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x218;
    __Znwm();
    FUN_10aaf027c();
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c25150;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10a8a8820(&plStack_50,plVar3 + 5,plVar3);
    FUN_10a8a86bc(param_1,&plStack_50);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a877e60; end: 10a878607;  */

void FUN_10a877e60(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long lVar18;
  long *plVar19;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_f8 [8];
  long *plStack_f0;
  long *plStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x3f0;
  __Znwm();
  plVar19 = plVar6 + 1;
  plVar6[2] = 0;
  *plVar19 = 0;
  *plVar6 = (long)&PTR_FUN_110bf8288;
  _bzero(plVar6 + 4,0x3a8);
  plVar8 = plVar6 + 3;
  *plVar8 = (long)&PTR_DAT_110c25618;
  *(undefined1 *)(plVar6 + 0x18) = 1;
  plVar6[0x77] = 0;
  plVar6[0x76] = 0;
  *(undefined1 *)(plVar6 + 0x78) = 0;
  plVar6[0x7a] = 0;
  plVar6[0x79] = 0;
  plVar6[0x59] = 0;
  plVar6[0x58] = 0;
  plVar6[0x5b] = 0;
  plVar6[0x5a] = 0;
  plVar6[0x5d] = 0;
  plVar6[0x5c] = 0;
  plVar6[0x5f] = 0;
  plVar6[0x5e] = 0;
  plVar6[0x61] = 0;
  plVar6[0x60] = 0;
  plVar6[99] = 0;
  plVar6[0x62] = 0;
  plVar6[0x65] = 0;
  plVar6[100] = 0;
  plVar6[0x67] = 0;
  plVar6[0x66] = 0;
  plVar6[0x69] = 0;
  plVar6[0x68] = 0;
  plVar6[0x6b] = 0;
  plVar6[0x6a] = 0;
  plVar6[0x7c] = 0;
  plVar6[0x7b] = 0;
  plVar6[0x7d] = 0;
  lVar11 = *param_2;
  *(undefined1 *)(plVar6 + 0x18) = *(undefined1 *)(lVar11 + 0x28);
  plStack_d8 = plVar8;
  plStack_d0 = plVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6 + 9,lVar11 + 0x30)
  ;
  if (0x132 < *(int *)(*(long *)(param_1[9] + 0xa20) + 0x18)) {
    lVar11 = *(long *)(*(long *)(param_1[9] + 0x100) + 0x268);
    iVar2 = *(int *)(lVar11 + 0x30);
    if (iVar2 != 0) {
      lVar13 = (long)iVar2 << 2;
      piVar12 = *(int **)(lVar11 + 0x38);
      do {
        if (*piVar12 == 0) {
          ppuVar7 = (undefined **)0x20;
          __Znwm();
          ppuStack_a8 = (undefined **)0x8000000000000020;
          ppuStack_b0 = (undefined **)0x1c;
          ppuVar7[1] = (undefined *)0x70616e732e73656d;
          *ppuVar7 = (undefined *)0x61672e7363657073;
          builtin_strncpy((char *)((long)ppuVar7 + 0x14),".com:443",8);
          builtin_strncpy((char *)((long)ppuVar7 + 0xc),"snapchat",8);
          *(char *)((long)ppuVar7 + 0x1c) = '\0';
          ppuStack_b8 = ppuVar7;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar6 + 0xc,&ppuStack_b8);
          goto LAB_10a877fb4;
        }
        lVar13 = lVar13 + -4;
        piVar12 = piVar12 + 1;
      } while (lVar13 != 0);
    }
  }
  ppuVar7 = (undefined **)0x20;
  __Znwm();
  ppuStack_a8 = (undefined **)0x8000000000000020;
  ppuStack_b0 = (undefined **)0x18;
  ppuVar7[1] = (undefined *)0x7461686370616e73;
  *ppuVar7 = (undefined *)0x2e6970612e706367;
  ppuVar7[2] = (undefined *)0x3334343a6d6f632e;
  *(char *)(ppuVar7 + 3) = '\0';
  ppuStack_b8 = ppuVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar6 + 0xc,&ppuStack_b8);
LAB_10a877fb4:
  if ((long)ppuStack_a8 < 0) {
    __ZdlPv(ppuStack_b8);
  }
  plStack_138 = plVar8;
  plStack_130 = plVar6;
  if ((char)plVar6[0x18] == '\x01') {
    lVar11 = param_1[9];
    (**(code **)(*plVar8 + 0x48))(plVar8);
    FUN_10a877ae8(&ppuStack_b8,lVar11,plVar8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_c8 = 0;
    plStack_c0 = (long *)0x0;
    (**(code **)(*param_1 + 0x48))
              (param_1,&plStack_138,&ppuStack_b8,0,&uStack_c8,param_3,param_4,*param_2 + 0x48);
    plVar8 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar6 = plStack_c0 + 1;
      do {
        lVar11 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      plVar6 = plStack_130 + 1;
      do {
        lVar11 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (ppuStack_b0 != (undefined **)0x0) {
      ppuVar7 = ppuStack_b0 + 1;
      do {
        puVar14 = *ppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = puVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppuVar17 = ppuStack_b0;
      } while (cVar3 != '\0');
LAB_10a87843c:
      if (puVar14 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
  }
  else {
    plVar8 = *(long **)(*(long *)(param_1[9] + 0x100) + 0x1c8);
    (**(code **)(*plVar8 + 0xa0))();
    plStack_e8 = (long *)0x0;
    ppuStack_e0 = (undefined **)0x0;
    ppuVar7 = (undefined **)plVar8[1];
    if (((ppuVar7 == (undefined **)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_e0 = ppuVar7,
        ppuVar7 == (undefined **)0x0)) || (plStack_e8 = (long *)*plVar8, plStack_e8 == (long *)0x0))
    {
      puVar9 = (undefined8 *)0x100;
      __Znwm();
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0x17] = 0;
      puVar9[0x16] = 0;
      *puVar9 = &PTR_DAT_1107eca30;
      puVar9[0x14] = 0;
      puVar9[0x13] = 0;
      puVar9[0x16] = 0;
      puVar9[0x15] = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      puVar9[4] = 0;
      puVar9[3] = 0;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[7] = 0;
      puVar9[10] = 0;
      puVar9[9] = 0;
      puVar9[0xc] = 0;
      puVar9[0xb] = 0;
      puVar9[0xe] = 0;
      puVar9[0xd] = 0;
      puVar9[0x10] = 0;
      puVar9[0xf] = 0;
      puVar9[0x11] = 0;
      *(undefined4 *)(puVar9 + 0x17) = 0x3f800000;
      puVar9[0x18] = 0x32aaaba7;
      puVar9[0x1f] = 0;
      puVar9[0x1e] = 0;
      puVar9[0x1d] = 0;
      puVar9[0x1c] = 0;
      puVar9[0x1b] = 0;
      puVar9[0x1a] = 0;
      puVar9[0x19] = 0;
      FUN_10a88b2c4(auStack_f8,puVar9,&UNK_104c5b964);
    }
    else {
      (**(code **)(*plStack_e8 + 0x10))(auStack_f8);
    }
    plVar8 = *(long **)(*(long *)(param_1[9] + 0x100) + 0x1c8);
    (**(code **)(*plVar8 + 0x60))();
    lVar11 = plVar8[1];
    lStack_108 = plVar8[1];
    lStack_110 = *plVar8;
    if (lVar11 != 0) {
      plVar8 = (long *)(lVar11 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar18 = param_1[9];
    lVar13 = *(long *)(lVar18 + 0x100);
    plVar10 = (long *)0x690;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_FUN_110bf8328;
    plVar8 = plVar10 + 3;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_c8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    plStack_98 = (long *)0x0;
    lStack_a0 = 0;
    ppuStack_a8 = (undefined **)0x0;
    ppuStack_b8 = (undefined **)0x10a5ca4e0;
    ppuStack_b0 = &PTR_DAT_110950c70;
    FUN_10a85faa8(plVar8,lVar18,&lStack_110,auStack_f8,&plStack_138,lVar13 + 0x208,param_3,param_4,
                  &uStack_c8,&ppuStack_b8);
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
    do {
      lVar13 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar6 = plVar10 + 6;
    plStack_120 = plVar8;
    plStack_118 = plVar10;
    func_0x00010a5ca544(&plStack_120,plVar6,plVar8);
    plVar19 = plStack_118;
    plVar8 = plStack_120;
    plStack_138 = plStack_120;
    plStack_130 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar10 = plStack_118 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_128 = 0;
    plVar10 = (long *)param_1[0xb];
    if (plVar10 < (long *)param_1[0xc]) {
      *plVar10 = (long)plStack_120;
      plVar10[1] = (long)plStack_118;
      plVar8 = plVar10 + 4;
      plVar10[2] = 0;
      plVar10[3] = 0;
    }
    else {
      lVar13 = param_1[10];
      lVar18 = (long)plVar10 - lVar13;
      uVar1 = (lVar18 >> 5) + 1;
      if (uVar1 >> 0x3b != 0) goto LAB_10a878510;
      uVar15 = param_1[0xc] - lVar13;
      uVar16 = (long)uVar15 >> 4;
      if (uVar16 <= uVar1) {
        uVar16 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar15) {
        uVar16 = 0x7ffffffffffffff;
      }
      plStack_98 = param_1 + 10;
      FUN_10a881f58();
      plVar10 = (long *)(uVar16 + lVar18);
      *plVar10 = (long)plVar8;
      plVar10[1] = (long)plVar19;
      plVar10[2] = 0;
      plVar10[3] = 0;
      plVar8 = plVar10 + 4;
      lVar13 = (long)plVar10 - (param_1[0xb] - param_1[10]);
      _memcpy(lVar13);
      ppuStack_b8 = (undefined **)param_1[10];
      param_1[10] = lVar13;
      param_1[0xb] = (long)plVar8;
      lStack_a0 = param_1[0xc];
      param_1[0xc] = uVar16 + (long)plVar6 * 0x20;
      ppuStack_b0 = ppuStack_b8;
      ppuStack_a8 = ppuStack_b8;
      FUN_10a881f8c(&ppuStack_b8);
    }
    param_1[0xb] = (long)plVar8;
    FUN_10a8692fc(plStack_120);
    plVar8 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar6 = plStack_118 + 1;
      do {
        lVar13 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (lVar11 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plStack_f0 != (long *)0x0) {
      plVar8 = plStack_f0 + 1;
      do {
        lVar11 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
      }
    }
    if (ppuStack_e0 != (undefined **)0x0) {
      ppuVar7 = ppuStack_e0 + 1;
      do {
        puVar14 = *ppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = puVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        ppuVar17 = ppuStack_e0;
      } while (cVar3 != '\0');
      goto LAB_10a87843c;
    }
  }
  plVar8 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar6 = plStack_d0 + 1;
    do {
      lVar11 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a878510:
  FUN_10a881f44();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a878518);
  (*pcVar5)();
}



/* Entry: 10a878608; end: 10a87860f;  */

void FUN_10a878608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x30);
  return;
}



/* Entry: 10a878610; end: 10a878927;  */

/* WARNING: Removing unreachable block (ram,0x00010a878824) */
/* WARNING: Removing unreachable block (ram,0x00010a878828) */

void FUN_10a878610(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar9;
  long *unaff_x22;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x23;
  long *plVar12;
  long *plVar13;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = (long *)plVar5[0xe];
    unaff_x21 = (long *)plVar5[0xd];
    while (unaff_x19 != unaff_x21) {
      unaff_x19 = unaff_x19 + -2;
      FUN_10a5ca2e0();
    }
    unaff_x25 = (long *)plVar5[10];
    plVar5[0xe] = (long)unaff_x21;
    *(long **)((long)register0x00000008 + -0x78) = plVar5 + 10;
    unaff_x26 = (long *)plVar5[0xb];
    if (unaff_x25 == unaff_x26) break;
    unaff_x28 = 0xfffffffffffffff;
LAB_10a878670:
    unaff_x27 = *unaff_x25;
    lVar8 = unaff_x25[1];
    if (unaff_x21 < (long *)plVar5[0xf]) {
      *unaff_x21 = unaff_x27;
      unaff_x21[1] = lVar8;
      if (lVar8 != 0) {
        plVar12 = (long *)(lVar8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      unaff_x21 = unaff_x21 + 2;
LAB_10a878744:
      plVar5[0xe] = (long)unaff_x21;
      unaff_x25 = unaff_x25 + 4;
      if (unaff_x25 == unaff_x26) break;
      goto LAB_10a878670;
    }
    unaff_x22 = (long *)plVar5[0xd];
    unaff_x23 = (long)unaff_x21 - (long)unaff_x22;
    unaff_x24 = unaff_x23 >> 4;
    plVar12 = (long *)(unaff_x24 + 1);
    if ((ulong)plVar12 >> 0x3c == 0) {
      uVar7 = plVar5[0xf] - (long)unaff_x22;
      unaff_x21 = (long *)((long)uVar7 >> 3);
      if (unaff_x21 <= plVar12) {
        unaff_x21 = plVar12;
      }
      if (0x7fffffffffffffef < uVar7) {
        unaff_x21 = (long *)0xfffffffffffffff;
      }
      if ((ulong)unaff_x21 >> 0x3c != 0) goto LAB_10a878900;
      lVar6 = (long)unaff_x21 << 4;
      __Znwm();
      plVar12 = (long *)(lVar6 + unaff_x23);
      *plVar12 = unaff_x27;
      plVar12[1] = lVar8;
      if (lVar8 != 0) {
        plVar13 = (long *)(lVar8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = *plVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        unaff_x22 = (long *)plVar5[0xd];
        unaff_x23 = plVar5[0xe] - (long)unaff_x22;
        unaff_x24 = unaff_x23 >> 4;
      }
      lVar8 = (long)unaff_x21 * 0x10;
      unaff_x21 = plVar12 + 2;
      plVar12 = plVar12 + unaff_x24 * -2;
      unaff_x19 = plVar12;
      _memcpy(plVar12,unaff_x22,unaff_x23);
      plVar5[0xd] = (long)plVar12;
      plVar5[0xe] = (long)unaff_x21;
      plVar5[0xf] = lVar6 + lVar8;
      if (unaff_x22 != (long *)0x0) {
        __ZdlPv();
        unaff_x19 = unaff_x22;
      }
      goto LAB_10a878744;
    }
    FUN_10a881fec();
LAB_10a878900:
    func_0x000109ffded8();
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x68));
    unaff_x30 = FUN_10a878928;
    plVar12 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = plVar12 + -3;
    unaff_x20 = plVar5;
  }
  plVar12 = (long *)plVar5[0xd];
  if (plVar12 != unaff_x21) {
    do {
      plVar13 = plVar12 + 2;
      lVar8 = *plVar12;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      uVar10 = *(undefined8 *)(lVar8 + 0x3b8);
      __ZNSt3__15mutex4lockEv(uVar10);
      __ZNSt13exception_ptraSERKS_
                ((undefined1 *)((long)register0x00000008 + -0x68),*(long *)(lVar8 + 0x3b8) + 0x40);
      __ZNSt3__15mutex6unlockEv(uVar10);
      if (*(long *)((long)register0x00000008 + -0x68) != 0) {
        __ZNSt13exception_ptrC1ERKS_
                  ((undefined1 *)((long)register0x00000008 + -0x70),
                   (undefined1 *)((long)register0x00000008 + -0x68));
        __ZSt17rethrow_exceptionSt13exception_ptr((undefined1 *)((long)register0x00000008 + -0x70));
        goto LAB_10a8788f8;
      }
      __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x68));
      plVar12 = plVar13;
    } while (plVar13 != unaff_x21);
    plVar12 = (long *)plVar5[0xd];
    unaff_x21 = (long *)plVar5[0xe];
  }
  if (plVar12 != unaff_x21) {
    do {
      plVar13 = plVar12 + 2;
      FUN_10a8738b4(*plVar12);
      plVar12 = plVar13;
    } while (plVar13 != unaff_x21);
    plVar12 = (long *)plVar5[0xd];
    unaff_x21 = (long *)plVar5[0xe];
  }
  while (unaff_x21 != plVar12) {
    unaff_x21 = unaff_x21 + -2;
    FUN_10a5ca2e0(unaff_x21);
  }
  plVar5[0xe] = (long)plVar12;
  plVar12 = (long *)plVar5[10];
  plVar13 = (long *)plVar5[0xb];
  do {
    plVar9 = plVar13;
    if (plVar12 == plVar13) {
LAB_10a87880c:
      if (plVar9 <= (long *)plVar5[0xb]) {
        if (plVar9 == (long *)plVar5[0xb]) {
          return;
        }
        lVar8 = *(long *)((long)register0x00000008 + -0x78);
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
        plVar5 = *(long **)(lVar8 + 8);
        while (plVar5 != plVar9) {
          FUN_10a8995d8(plVar5 + -2);
          FUN_10a5ca2e0(plVar5 + -4);
          plVar5 = plVar5 + -4;
        }
        *(long **)(lVar8 + 8) = plVar9;
        return;
      }
LAB_10a8788f8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8788fc);
      (*pcVar4)();
    }
    if (**(int **)(*plVar12 + 0x1e8) == 4) {
      plVar9 = plVar12;
      plVar11 = plVar12;
      if (plVar12 != plVar13) {
        while (plVar3 = plVar11, plVar11 = plVar3 + 4, plVar9 = plVar12, plVar11 != plVar13) {
          if (**(int **)(*plVar11 + 0x1e8) != 4) {
            FUN_10a59e134(plVar12,plVar11);
            FUN_10a882000(plVar12 + 2,plVar3 + 6);
            plVar12 = plVar12 + 4;
          }
        }
      }
      goto LAB_10a87880c;
    }
    plVar12 = plVar12 + 4;
  } while( true );
}



/* Entry: 10a878928; end: 10a87892f;  */

/* WARNING: Removing unreachable block (ram,0x00010a878824) */
/* WARNING: Removing unreachable block (ram,0x00010a878828) */

void FUN_10a878928(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *unaff_x21;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x22;
  long *plVar11;
  long unaff_x23;
  long *plVar12;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar11 = param_1 + -3;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = (long *)param_1[0xb];
    unaff_x21 = (long *)param_1[10];
    while (unaff_x19 != unaff_x21) {
      unaff_x19 = unaff_x19 + -2;
      FUN_10a5ca2e0();
    }
    unaff_x25 = (long *)param_1[7];
    param_1[0xb] = (long)unaff_x21;
    *(long **)((long)register0x00000008 + -0x78) = param_1 + 7;
    unaff_x26 = (long *)param_1[8];
    if (unaff_x25 == unaff_x26) break;
    unaff_x28 = 0xfffffffffffffff;
LAB_10a878670:
    unaff_x27 = *unaff_x25;
    lVar7 = unaff_x25[1];
    if (unaff_x21 < (long *)param_1[0xc]) {
      *unaff_x21 = unaff_x27;
      unaff_x21[1] = lVar7;
      if (lVar7 != 0) {
        plVar12 = (long *)(lVar7 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      unaff_x21 = unaff_x21 + 2;
LAB_10a878744:
      param_1[0xb] = (long)unaff_x21;
      unaff_x25 = unaff_x25 + 4;
      if (unaff_x25 == unaff_x26) break;
      goto LAB_10a878670;
    }
    unaff_x22 = (long *)param_1[10];
    unaff_x23 = (long)unaff_x21 - (long)unaff_x22;
    unaff_x24 = unaff_x23 >> 4;
    plVar12 = (long *)(unaff_x24 + 1);
    if ((ulong)plVar12 >> 0x3c == 0) {
      uVar6 = param_1[0xc] - (long)unaff_x22;
      unaff_x21 = (long *)((long)uVar6 >> 3);
      if (unaff_x21 <= plVar12) {
        unaff_x21 = plVar12;
      }
      if (0x7fffffffffffffef < uVar6) {
        unaff_x21 = (long *)0xfffffffffffffff;
      }
      if ((ulong)unaff_x21 >> 0x3c != 0) goto LAB_10a878900;
      lVar5 = (long)unaff_x21 << 4;
      __Znwm();
      plVar12 = (long *)(lVar5 + unaff_x23);
      *plVar12 = unaff_x27;
      plVar12[1] = lVar7;
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        unaff_x22 = (long *)param_1[10];
        unaff_x23 = param_1[0xb] - (long)unaff_x22;
        unaff_x24 = unaff_x23 >> 4;
      }
      lVar7 = (long)unaff_x21 * 0x10;
      unaff_x21 = plVar12 + 2;
      plVar12 = plVar12 + unaff_x24 * -2;
      unaff_x19 = plVar12;
      _memcpy(plVar12,unaff_x22,unaff_x23);
      param_1[10] = (long)plVar12;
      param_1[0xb] = (long)unaff_x21;
      param_1[0xc] = lVar5 + lVar7;
      if (unaff_x22 != (long *)0x0) {
        __ZdlPv();
        unaff_x19 = unaff_x22;
      }
      goto LAB_10a878744;
    }
    FUN_10a881fec();
LAB_10a878900:
    func_0x000109ffded8();
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x68));
    unaff_x30 = FUN_10a878928;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x20 = plVar11;
  }
  plVar11 = (long *)param_1[10];
  if (plVar11 != unaff_x21) {
    do {
      plVar12 = plVar11 + 2;
      lVar7 = *plVar11;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      uVar9 = *(undefined8 *)(lVar7 + 0x3b8);
      __ZNSt3__15mutex4lockEv(uVar9);
      __ZNSt13exception_ptraSERKS_
                ((undefined1 *)((long)register0x00000008 + -0x68),*(long *)(lVar7 + 0x3b8) + 0x40);
      __ZNSt3__15mutex6unlockEv(uVar9);
      if (*(long *)((long)register0x00000008 + -0x68) != 0) {
        __ZNSt13exception_ptrC1ERKS_
                  ((undefined1 *)((long)register0x00000008 + -0x70),
                   (undefined1 *)((long)register0x00000008 + -0x68));
        __ZSt17rethrow_exceptionSt13exception_ptr((undefined1 *)((long)register0x00000008 + -0x70));
        goto LAB_10a8788f8;
      }
      __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x68));
      plVar11 = plVar12;
    } while (plVar12 != unaff_x21);
    plVar11 = (long *)param_1[10];
    unaff_x21 = (long *)param_1[0xb];
  }
  if (plVar11 != unaff_x21) {
    do {
      plVar12 = plVar11 + 2;
      FUN_10a8738b4(*plVar11);
      plVar11 = plVar12;
    } while (plVar12 != unaff_x21);
    plVar11 = (long *)param_1[10];
    unaff_x21 = (long *)param_1[0xb];
  }
  while (unaff_x21 != plVar11) {
    unaff_x21 = unaff_x21 + -2;
    FUN_10a5ca2e0(unaff_x21);
  }
  param_1[0xb] = (long)plVar11;
  plVar11 = (long *)param_1[7];
  plVar12 = (long *)param_1[8];
  do {
    plVar8 = plVar12;
    if (plVar11 == plVar12) {
LAB_10a87880c:
      if (plVar8 <= (long *)param_1[8]) {
        if (plVar8 == (long *)param_1[8]) {
          return;
        }
        lVar7 = *(long *)((long)register0x00000008 + -0x78);
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
        plVar11 = *(long **)(lVar7 + 8);
        while (plVar11 != plVar8) {
          FUN_10a8995d8(plVar11 + -2);
          FUN_10a5ca2e0(plVar11 + -4);
          plVar11 = plVar11 + -4;
        }
        *(long **)(lVar7 + 8) = plVar8;
        return;
      }
LAB_10a8788f8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8788fc);
      (*pcVar4)();
    }
    if (**(int **)(*plVar11 + 0x1e8) == 4) {
      plVar8 = plVar11;
      plVar10 = plVar11;
      if (plVar11 != plVar12) {
        while (plVar3 = plVar10, plVar10 = plVar3 + 4, plVar8 = plVar11, plVar10 != plVar12) {
          if (**(int **)(*plVar10 + 0x1e8) != 4) {
            FUN_10a59e134(plVar11,plVar10);
            FUN_10a882000(plVar11 + 2,plVar3 + 6);
            plVar11 = plVar11 + 4;
          }
        }
      }
      goto LAB_10a87880c;
    }
    plVar11 = plVar11 + 4;
  } while( true );
}



/* Entry: 10a878930; end: 10a87899f;  */

void FUN_10a878930(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0x58);
  for (plVar4 = *(long **)(param_1 + 0x50); plVar4 != plVar1; plVar4 = plVar4 + 4) {
    lVar3 = *plVar4;
    FUN_10a871f30(lVar3);
    (**(code **)(**(long **)(lVar3 + 0x378) + 0x50))();
  }
  *(undefined1 *)(param_1 + 0xa1) = 1;
  puVar2 = (undefined8 *)(param_1 + 0xb0);
  func_0x00010a8a851c(param_1 + 0xa8,*puVar2);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 **)(param_1 + 0xa8) = puVar2;
  return;
}



/* Entry: 10a8789a0; end: 10a878d43;  */

undefined *** FUN_10a8789a0(undefined ***param_1,undefined **param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  undefined **ppuVar12;
  undefined1 uVar13;
  undefined ***unaff_x22;
  undefined *puVar14;
  undefined8 *unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar15;
  undefined8 unaff_x25;
  undefined **unaff_x26;
  undefined8 uVar16;
  code *unaff_x27;
  undefined **ppuVar17;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  byte abStack_a18 [2304];
  code *pcStack_118;
  undefined8 uStack_110;
  undefined ***pppuStack_108;
  undefined8 uStack_100;
  undefined ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_88;
  long lStack_70;
  
  puVar11 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_1 + 0xa1) & 1) == 0) {
    pppuVar9 = (undefined ***)param_1[9][0x134];
    if (pppuVar9 != (undefined ***)0x0) {
      pppuStack_f8 = (undefined ***)param_3[1];
      uStack_100 = *param_3;
      if (param_3[1] != 0) {
        plVar1 = (long *)(param_3[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar8 = (undefined ***)param_2;
      FUN_10a9dd10c(&uStack_f0,pppuVar9,param_2,&uStack_100);
      unaff_x21 = pppuStack_f8;
      if (pppuStack_f8 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_f8 + 1;
        do {
          ppuVar12 = *pppuVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar5) {
            *pppuVar2 = (undefined **)((long)ppuVar12 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_f8)[2])(pppuStack_f8);
          pppuVar9 = unaff_x21;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      unaff_x24 = param_1[10];
      unaff_x26 = param_1[0xb];
      unaff_x20 = param_1;
      if (unaff_x24 != unaff_x26) {
        unaff_x23 = &uStack_e0;
        unaff_x20 = (undefined ***)&UNK_10f67d9eb;
        unaff_x27 = FUN_10a8935dc;
        unaff_x28 = &PTR_FUN_110c248a8;
        do {
          unaff_x21 = pppuStack_e8;
          unaff_x25 = uStack_f0;
          puVar14 = *unaff_x24;
          uStack_110 = uStack_f0;
          pppuStack_108 = pppuStack_e8;
          if (pppuStack_e8 != (undefined ***)0x0) {
            pppuVar9 = pppuStack_e8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
              if (bVar5) {
                *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar7 = puVar14 + 0x300;
          FUN_10a8934f8(puVar7,param_2);
          if (puVar7 == (undefined *)0x0) {
            FUN_10a5ca860(&uStack_c0,&ppuStack_b0,&UNK_10f67d9eb,&UNK_10f67d9eb,&UNK_10f67d9eb);
LAB_10a878b48:
            pppuStack_98 = pppuStack_b8;
            if (pppuStack_b8 != (undefined ***)0x0) {
              pppuVar9 = pppuStack_b8 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
                if (bVar5) {
                  *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          else {
            puVar7 = puVar14 + 0x300;
            FUN_10a894b50(puVar7,param_2);
            if (puVar7 == (undefined *)0x0) {
              FUN_109ffdddc(&UNK_10f639994);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a878cdc);
              (*pcVar6)();
            }
            pppuStack_b8 = *(undefined ****)(puVar7 + 0x30);
            uStack_c0 = *(undefined8 *)(puVar7 + 0x28);
            if (*(long *)(puVar7 + 0x30) != 0) {
              plVar1 = (long *)(*(long *)(puVar7 + 0x30) + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = *plVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              goto LAB_10a878b48;
            }
            pppuStack_98 = (undefined ***)0x0;
          }
          if (unaff_x21 != (undefined ***)0x0) {
            pppuVar9 = unaff_x21 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
              if (bVar5) {
                *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_b0 = (undefined **)FUN_10a8935dc;
          ppuStack_a8 = &PTR_FUN_110c248a8;
          uStack_e0 = 0;
          uStack_d8 = 0;
          uStack_90 = unaff_x25;
          pppuStack_88 = unaff_x21;
          uStack_d0 = 0;
          uStack_c8 = 0;
          pppuVar8 = &ppuStack_b0;
          uStack_a0 = uStack_c0;
          FUN_10a860860(puVar14,pppuVar8);
          pppuVar9 = &ppuStack_a8;
          (*(code *)*ppuStack_a8)();
          unaff_x22 = pppuStack_b8;
          if (pppuStack_b8 != (undefined ***)0x0) {
            pppuVar2 = pppuStack_b8 + 1;
            do {
              ppuVar12 = *pppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
              if (bVar5) {
                *pppuVar2 = (undefined **)((long)ppuVar12 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppuVar12 == (undefined **)0x0) {
              (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
              pppuVar9 = unaff_x22;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          if (unaff_x21 != (undefined ***)0x0) {
            pppuVar2 = unaff_x21 + 1;
            do {
              ppuVar12 = *pppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
              if (bVar5) {
                *pppuVar2 = (undefined **)((long)ppuVar12 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppuVar12 == (undefined **)0x0) {
              (*(code *)(*unaff_x21)[2])(unaff_x21);
              pppuVar9 = unaff_x21;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          unaff_x24 = unaff_x24 + 4;
        } while (unaff_x24 != unaff_x26);
      }
      param_2 = (undefined **)pppuVar8;
      param_1 = pppuVar9;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_e8 + 1;
        do {
          ppuVar12 = *pppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar5) {
            *pppuVar9 = (undefined **)((long)ppuVar12 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = pppuStack_e8;
        }
      }
      goto LAB_10a8789dc;
    }
    param_2 = &PTR_PTR_113303d80;
    FUN_10ae079a0();
    pppuVar8 = param_1;
    pcStack_118 = unaff_x30;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto FUN_10ae07cd4;
  }
  else {
LAB_10a8789dc:
    pppuVar9 = param_1;
    pppuVar8 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
  }
  unaff_x20 = pppuVar8;
  ___stack_chk_fail();
  func_0x00010a1fec54(&uStack_100);
  pppuVar8 = pppuVar9;
  __Unwind_Resume();
  pcStack_118 = FUN_10a878d44;
  ppuVar17 = pppuVar8[0xb];
  for (ppuVar12 = pppuVar8[10]; ppuVar12 != ppuVar17; ppuVar12 = ppuVar12 + 4) {
    FUN_10a8608ac(*ppuVar12,param_2);
  }
  if (pppuVar8[9][0x134] != (undefined *)0x0) {
    puVar14 = pppuVar8[9][0x134] + 8;
    puVar7 = puVar14;
    FUN_10aa0893c(puVar14,param_2);
    if (puVar7 != (undefined *)0x0) {
      FUN_10aa08a20(puVar14,puVar7);
    }
    return (undefined ***)(ulong)(puVar7 != (undefined *)0x0);
  }
  param_2 = &PTR_PTR_113303d80;
  FUN_10ae079a0(0);
  register0x00000008 = (BADSPACEBASE *)&uStack_110;
  unaff_x19 = pppuVar9;
  unaff_x29 = puVar11;
FUN_10ae07cd4:
  iVar10 = 0x13303d80;
  *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
  *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = pcStack_118;
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = (undefined ***)0x0;
  if ((undefined ***)param_2 != (undefined ***)0x0) {
    FUN_10ae03188((undefined1 *)((long)register0x00000008 + -0x8a8),
                  (undefined1 *)((long)register0x00000008 + -0x470),0x400,
                  (undefined1 *)((long)register0x00000008 + -0x870),0x400,param_2[0x13],param_2[0xf]
                  ,param_2 + 0x14,0x400);
    if (*(int *)((long)register0x00000008 + -0x878) == 0) {
      puVar7 = *(undefined **)((long)register0x00000008 + -0x8a8);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -0x8a0);
      *(uint *)((long)register0x00000008 + -0x91c) =
           (uint)*(byte *)((long)register0x00000008 + -0x898);
      puVar14 = *(undefined **)((long)register0x00000008 + -0x890);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x888);
      uVar13 = *(undefined1 *)((long)register0x00000008 + -0x880);
    }
    else {
      uVar13 = 0;
      *(undefined4 *)((long)register0x00000008 + -0x91c) = 0;
      puVar14 = &UNK_10f6c352e;
      uVar15 = 0x10;
      uVar16 = 0x10;
      puVar7 = puVar14;
    }
    ppuVar17 = (undefined **)param_2[0x12];
    ppuVar12 = (undefined **)param_2[0xb];
    unaff_x20 = (undefined ***)0x0;
    _clock_gettime_nsec_np();
    pppuVar9 = unaff_x20;
    _pthread_self();
    _pthread_mach_thread_np();
    uVar3 = *(undefined4 *)(param_2 + 0xe);
    *(undefined ***)((long)register0x00000008 + -0x8e8) = param_2 + 1;
    *(undefined ***)((long)register0x00000008 + -0x8e0) = ppuVar12;
    *(undefined ***)((long)register0x00000008 + -0x8d8) = ppuVar17;
    *(ulong *)((long)register0x00000008 + -0x8d0) = (ulong)(ppuVar17 != (undefined **)0x0);
    *(undefined ****)((long)register0x00000008 + -0x8c8) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x8c0) = (ulong)pppuVar9 & 0xffffffff;
    *(undefined4 *)((long)register0x00000008 + -0x8b8) = uVar3;
    *(undefined ***)((long)register0x00000008 + -0x8b0) = param_2 + 0x10;
    pppuVar9 = (undefined ***)*param_2;
    *(undefined **)((long)register0x00000008 + -0x900) = puVar7;
    *(undefined8 *)((long)register0x00000008 + -0x8f8) = uVar16;
    *(char *)((long)register0x00000008 + -0x8f0) =
         (char)*(undefined4 *)((long)register0x00000008 + -0x91c);
    *(undefined **)((long)register0x00000008 + -0x918) = puVar14;
    *(undefined8 *)((long)register0x00000008 + -0x910) = uVar15;
    *(undefined1 *)((long)register0x00000008 + -0x908) = uVar13;
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x8e8);
    FUN_10ae0784c(pppuVar9,puVar11,(undefined1 *)((long)register0x00000008 + -0x900),
                  (undefined1 *)((long)register0x00000008 + -0x918));
    iVar10 = (int)puVar11;
    unaff_x19 = (undefined ***)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined ****)((long)register0x00000008 + -0x940) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x938) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x930) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x928) = FUN_10ae07e28;
  func_0x00010ae087bc();
  FUN_10ae07e54(pppuVar9);
  return pppuVar9;
}



/* Entry: 10a878d44; end: 10a878dc7;  */

undefined * FUN_10a878d44(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
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
  
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  for (puVar10 = *(undefined8 **)(param_1 + 0x50); puVar10 != puVar1; puVar10 = puVar10 + 4) {
    FUN_10a8608ac(*puVar10,param_2);
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x9a0);
  if (lVar9 != 0) {
    lVar9 = lVar9 + 8;
    lVar2 = lVar9;
    FUN_10aa0893c(lVar9,param_2);
    if (lVar2 != 0) {
      FUN_10aa08a20(lVar9,lVar2);
    }
    return (undefined *)(ulong)(lVar2 != 0);
  }
  ppuVar8 = &PTR_PTR_113303d80;
  ppuVar7 = ppuVar8;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar7[0x13],ppuVar7[0xf],
                  ppuVar7 + 0x14,0x400);
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
    puVar12 = ppuVar7[0x12];
    puVar11 = ppuVar7[0xb];
    uVar3 = 0;
    _clock_gettime_nsec_np();
    uVar4 = uVar3;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar7 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar7 + 0xe);
    uStack_8c0 = uVar4 & 0xffffffff;
    ppuStack_8b0 = ppuVar7 + 0x10;
    puVar5 = *ppuVar7;
    ppuVar8 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar11;
    puStack_8d8 = puVar12;
    uStack_8d0 = (ulong)(puVar12 != (undefined *)0x0);
    uStack_8c8 = uVar3;
    FUN_10ae0784c(puVar5,ppuVar8,&puStack_900,&puStack_918);
  }
  iVar6 = (int)ppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar5);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10a878dc8; end: 10a8791bb;  */

void FUN_10a878dc8(long param_1,int param_2)

{
  *(bool *)(param_1 + 0xa0) = param_2 != 0;
  return;
}



/* Entry: 10a8791bc; end: 10a87955b;  */

void FUN_10a8791bc(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f63f207,0x1a);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c24048;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c24048;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67efff,FUN_10a8a8a00,FUN_10a8a8abc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3538dc,FUN_10a8a8c70,FUN_10a8a8d2c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67f009,FUN_10a8a8e10,FUN_10a8a8ec8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67f016,FUN_10a8a8fd4,FUN_10a8a908c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"storeId",FUN_10a8a914c,FUN_10a8a922c);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f63f207,0x1a);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f63f207;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f67d9eb;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f67d9eb;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a87953c;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a8a9328,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a87953c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a879540);
  (*pcVar6)();
}



/* Entry: 10a87955c; end: 10a8798df;  */

void FUN_10a87955c(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  func_0x000109887da8(appuStack_c8,&UNK_10f67f4e5,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23c58;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23c58;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"storeId",FUN_10a8a9468,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3538dc,FUN_10a8a95b0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f016,FUN_10a8a966c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67efff,FUN_10a8a9724,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f02d,FUN_10a8a97e0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f048,FUN_10a8a989c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f063,FUN_10a8a9958,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f67f4e5,0x19);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8798c4);
  (*pcVar6)();
}



/* Entry: 10a8798e0; end: 10a8799fb;  */

void FUN_10a8798e0(undefined8 param_1)

{
  undefined8 uVar1;
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
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67d9eb;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a8799fc(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f06d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xb3;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8a9b0c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f048;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xb5;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8a9c80(uVar1,&puStack_98);
  FUN_10a8a9d90(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a8799fc; end: 10a879ad3;  */

/* WARNING: Removing unreachable block (ram,0x00010a879a94) */

undefined1  [16] FUN_10a8799fc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f67f4ff,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8a9a10(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a879ad4; end: 10a879bef;  */

void FUN_10a879ad4(undefined8 param_1)

{
  undefined8 uVar1;
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
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67d9eb;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a879bf0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f079;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xb3;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8a9f48();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f048;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xb5;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8aa0bc(uVar1,&puStack_98);
  FUN_10a8aa1cc(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a879bf0; end: 10a879cc7;  */

/* WARNING: Removing unreachable block (ram,0x00010a879c88) */

undefined1  [16] FUN_10a879bf0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f67f517,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8a9e4c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a879cc8; end: 10a879deb;  */

void FUN_10a879cc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67d9eb;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a879dec(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f048;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xb5;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8aa384();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67efff;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x4000000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8aa4fc(uVar1,&puStack_98);
  FUN_10a8aa60c(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a879dec; end: 10a879ec3;  */

/* WARNING: Removing unreachable block (ram,0x00010a879e84) */

undefined1  [16] FUN_10a879dec(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f67f52f,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8aa288(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a879ec4; end: 10a87a193;  */

void FUN_10a879ec4(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  func_0x000109887da8(appuStack_c8,&UNK_10f67f550,0x1b);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23e18;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23e18;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f368b64,FUN_10a8aa6c8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"key",FUN_10a8aa7e8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f085,FUN_10a8aa8c8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f048,FUN_10a8aa980,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f67f550,0x1b);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a87a178);
  (*pcVar6)();
}



/* Entry: 10a87a194; end: 10a87a31b;  */

void FUN_10a87a194(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67f091;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
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
  puStack_a8 = &UNK_10f67f09b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87a31c(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67f0a1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87a31c();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67f0a9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x4000000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x179000000ad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87a31c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a87a31c; end: 10a87a3c3;  */

undefined8 * FUN_10a87a31c(undefined8 *param_1,undefined8 *param_2,char param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87a3c4);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)(int)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a87a3c4; end: 10a87a573;  */

void FUN_10a87a3c4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f4ba8b1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
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
  puStack_a8 = &UNK_10f67f0b3;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87a574(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f52afcd;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87a574();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f68525a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87a574();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67f0bd;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87a574();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a87a574; end: 10a87a617;  */

undefined8 * FUN_10a87a574(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87a618);
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



/* Entry: 10a87a618; end: 10a87a66f;  */

undefined8 * FUN_10a87a618(undefined8 *param_1)

{
  FUN_10a8820bc(param_1 + 10);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a87a670; end: 10a87a707;  */

void FUN_10a87a670(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107c2b054(auStack_38,&UNK_10f67f0ee);
    if (*(char *)(param_1 + 8) == '\x01') {
      (*(code *)*param_1)(auStack_38,param_1);
    }
    else if (*(char *)(param_1 + 8) == '\x02') {
      FUN_10a05aad0(param_1,auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a87a708; end: 10a87a947;  */

void FUN_10a87a708(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar12 = *(long *)(param_2 + 0x230);
  bVar4 = *(byte *)((long)param_3 + 0x17);
  uVar1 = param_3[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)(lVar12 + 0x47);
  uVar2 = *(ulong *)(lVar12 + 0x38);
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar8 = (long *)*param_3;
    if (-1 < (char)bVar4) {
      plVar8 = param_3;
    }
    plVar3 = (long *)*(long *)(lVar12 + 0x30);
    if (-1 < (char)bVar5) {
      plVar3 = (long *)(lVar12 + 0x30);
    }
    _memcmp(plVar8,plVar3);
    if ((int)plVar8 == 0) {
      lVar11 = *(long *)(param_2 + 0x238);
      *param_1 = lVar12;
      param_1[1] = lVar11;
      if (lVar11 == 0) {
        return;
      }
      plVar8 = (long *)(lVar11 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = *plVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      return;
    }
  }
  param_2 = param_2 + 0x328;
  FUN_10a8934f8(param_2,param_3);
  if (param_2 == 0) {
    FUN_10ae03140();
    ppuVar10 = &PTR_PTR_113303e88;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar10,&PTR_PTR_113303e88);
    puVar9 = (undefined8 *)0xd0;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_110bf8238;
    func_0x000107c2b054(auStack_48,&UNK_10f67d9eb);
    func_0x000107c2b054(auStack_60,&UNK_10f67d9eb);
    func_0x000107c2b054(auStack_78,&UNK_10f67d9eb);
    FUN_10a5caa80(puVar9 + 3,auStack_48,auStack_60,auStack_78,param_3,0xffffffffffffffff);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    *param_1 = (long)(puVar9 + 3);
    param_1[1] = (long)puVar9;
  }
  else {
    lVar12 = *(long *)(param_2 + 0x30);
    lVar11 = *(long *)(param_2 + 0x28);
    param_1[1] = *(long *)(param_2 + 0x30);
    *param_1 = lVar11;
    if (lVar12 != 0) {
      plVar8 = (long *)(lVar12 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = *plVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  return;
}



/* Entry: 10a87a948; end: 10a87aaf7;  */

void FUN_10a87a948(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    lVar10 = param_2[1];
    uVar17 = *param_2;
    puVar7[1] = param_2[1];
    *puVar7 = uVar17;
    if (lVar10 != 0) {
      plVar15 = (long *)(lVar10 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar7 = puVar7 + 2;
  }
  else {
    lVar10 = (long)puVar7 - *param_1;
    uVar16 = (lVar10 >> 4) + 1;
    if (uVar16 >> 0x3c != 0) {
      func_0x00010a8826ac();
      lVar10 = *param_1;
      if ((undefined8 *)(param_1[2] - lVar10 >> 4) < param_2) {
        if ((ulong)param_2 >> 0x3c != 0) {
          func_0x00010a8826ac();
          lVar12 = param_1[6];
          __ZNSt3__15mutex4lockEv(lVar12 + 0x40);
          lVar10 = *(long *)(lVar12 + 0x28);
          uStack_130 = *(undefined8 *)(lVar12 + 0x38);
          lVar18 = *(long *)(lVar12 + 0x30);
          *(undefined8 *)(lVar12 + 0x28) = 0;
          *(undefined8 *)(lVar12 + 0x30) = 0;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          lStack_140 = lVar10;
          lStack_138 = lVar18;
          __ZNSt3__15mutex6unlockEv(lVar12 + 0x40);
          if (lVar18 - lVar10 != 0) {
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_150 = 0x3f800000;
            lVar12 = lVar10;
            do {
              plVar14 = *(long **)(lVar12 + 0x58);
              for (plVar15 = *(long **)(lVar12 + 0x50); plVar15 != plVar14; plVar15 = plVar15 + 6) {
                plStack_188 = plVar15;
                if (*(char *)((long)plVar15 + 0x17) < '\0') {
                  plStack_188 = (long *)*plVar15;
                }
                lStack_180 = plVar15[3];
                lStack_178 = (long)((int)plVar15[4] - (int)lStack_180);
                puVar7 = &uStack_170;
                lStack_128 = lVar12;
                FUN_10a8ac074(puVar7,lVar12,&lStack_128);
                FUN_10a87b6a8(puVar7 + 5,&plStack_188);
              }
              lVar12 = lVar12 + 0x68;
            } while (lVar12 != lVar18);
            lVar12 = lVar18 - lVar10 >> 3;
            uVar16 = lVar12 * 0x4ec4ec4ec4ec4ec5;
            if (uVar16 >> 0x3a != 0) {
              func_0x00010a882754();
LAB_10a87ad54:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a87ad58);
              (*pcVar6)();
            }
            plVar14 = (long *)(lVar12 * -0x4ec4ec4ec4ec4ec0);
            __Znwm();
            _bzero();
            lVar12 = 0;
            uVar13 = 0;
            plVar15 = plVar14 + 4;
            do {
              plVar2 = (long *)(lVar10 + lVar12);
              plVar9 = plVar2 + 3;
              if (*(char *)((long)plVar2 + 0x2f) < '\0') {
                plVar9 = (long *)*plVar9;
              }
              if (uVar16 - uVar13 == 0) goto LAB_10a87ad54;
              plVar15[-1] = (long)plVar9;
              lVar3 = lVar10 + lVar12;
              plVar9 = (long *)(lVar3 + 0x30);
              if (*(char *)(lVar3 + 0x47) < '\0') {
                plVar9 = (long *)*plVar9;
              }
              plVar15[2] = (long)plVar9;
              plVar9 = plVar2;
              if (*(char *)(lVar3 + 0x17) < '\0') {
                plVar9 = (long *)*plVar2;
              }
              plVar15[-4] = (long)plVar9;
              *(undefined4 *)plVar15 = *(undefined4 *)(lVar10 + lVar12 + 0x4c);
              *(undefined2 *)(plVar15 + 3) = *(undefined2 *)(lVar10 + lVar12 + 0x48);
              puVar7 = &uStack_170;
              plStack_188 = plVar2;
              FUN_10a8ac074(puVar7,plVar2,&plStack_188);
              lVar10 = lStack_140;
              plVar15[-3] = puVar7[5];
              uVar11 = (lVar18 - lStack_140 >> 3) * 0x4ec4ec4ec4ec4ec5;
              if (uVar11 < uVar13 || uVar11 - uVar13 == 0) goto LAB_10a87ad54;
              plStack_188 = (long *)(lStack_140 + lVar12);
              puVar7 = &uStack_170;
              FUN_10a8ac074(puVar7,plStack_188,&plStack_188);
              *(int *)(plVar15 + -2) = (int)((ulong)(puVar7[6] - puVar7[5]) >> 3) * -0x55555555;
              uVar13 = uVar13 + 1;
              lVar12 = lVar12 + 0x68;
              plVar15 = plVar15 + 8;
            } while (uVar13 <= uVar11 && uVar11 - uVar13 != 0);
            lStack_180 = CONCAT44(lStack_180._4_4_,(int)uVar11);
            plStack_188 = plVar14;
            (**(code **)(*(long *)param_1[2] + 0xc0))((long *)param_1[2],&plStack_188);
            __ZdlPv(plVar14);
            FUN_10a8abfd4(&uStack_170);
          }
          FUN_10a87ea6c(&lStack_140);
          return;
        }
        lVar12 = param_1[1];
        puVar7 = param_2;
        plStack_98 = param_1;
        FUN_10a8826c0();
        lVar10 = (long)param_2 + (lVar12 - lVar10);
        lVar12 = lVar10 - (param_1[1] - *param_1);
        _memcpy(lVar12);
        lStack_b8 = *param_1;
        *param_1 = lVar12;
        param_1[1] = lVar10;
        lStack_a0 = param_1[2];
        param_1[2] = (long)(param_2 + (long)puVar7 * 2);
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a8826f4(&lStack_b8);
      }
      return;
    }
    uVar11 = param_1[2] - *param_1;
    uVar13 = (long)uVar11 >> 3;
    if (uVar13 <= uVar16) {
      uVar13 = uVar16;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar13 = 0xfffffffffffffff;
    }
    puVar8 = param_2;
    plStack_38 = param_1;
    FUN_10a8826c0();
    puVar1 = (undefined8 *)(uVar13 + lVar10);
    lVar10 = param_2[1];
    uVar17 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar17;
    if (lVar10 != 0) {
      plVar15 = (long *)(lVar10 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar7 = puVar1 + 2;
    lVar10 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar7;
    lStack_40 = param_1[2];
    param_1[2] = uVar13 + (long)puVar8 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a8826f4(&lStack_58);
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a87aaf8; end: 10a87ad8b;  */

void FUN_10a87aaf8(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar6 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar6 + 0x40);
  lVar9 = *(long *)(lVar6 + 0x28);
  uStack_70 = *(undefined8 *)(lVar6 + 0x38);
  lVar13 = *(long *)(lVar6 + 0x30);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  lStack_80 = lVar9;
  lStack_78 = lVar13;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x40);
  if (lVar13 - lVar9 != 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x3f800000;
    lVar6 = lVar9;
    do {
      plVar8 = *(long **)(lVar6 + 0x58);
      for (plVar10 = *(long **)(lVar6 + 0x50); plVar10 != plVar8; plVar10 = plVar10 + 6) {
        plStack_c8 = plVar10;
        if (*(char *)((long)plVar10 + 0x17) < '\0') {
          plStack_c8 = (long *)*plVar10;
        }
        lStack_c0 = plVar10[3];
        lStack_b8 = (long)((int)plVar10[4] - (int)lStack_c0);
        puVar4 = &uStack_b0;
        lStack_68 = lVar6;
        FUN_10a8ac074(puVar4,lVar6,&lStack_68);
        FUN_10a87b6a8(puVar4 + 5,&plStack_c8);
      }
      lVar6 = lVar6 + 0x68;
    } while (lVar6 != lVar13);
    lVar6 = lVar13 - lVar9 >> 3;
    uVar11 = lVar6 * 0x4ec4ec4ec4ec4ec5;
    if (uVar11 >> 0x3a != 0) {
      func_0x00010a882754();
LAB_10a87ad54:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a87ad58);
      (*pcVar3)();
    }
    plVar8 = (long *)(lVar6 * -0x4ec4ec4ec4ec4ec0);
    __Znwm();
    _bzero();
    lVar6 = 0;
    uVar12 = 0;
    plVar10 = plVar8 + 4;
    do {
      plVar1 = (long *)(lVar9 + lVar6);
      plVar5 = plVar1 + 3;
      if (*(char *)((long)plVar1 + 0x2f) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      if (uVar11 - uVar12 == 0) goto LAB_10a87ad54;
      plVar10[-1] = (long)plVar5;
      lVar2 = lVar9 + lVar6;
      plVar5 = (long *)(lVar2 + 0x30);
      if (*(char *)(lVar2 + 0x47) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      plVar10[2] = (long)plVar5;
      plVar5 = plVar1;
      if (*(char *)(lVar2 + 0x17) < '\0') {
        plVar5 = (long *)*plVar1;
      }
      plVar10[-4] = (long)plVar5;
      *(undefined4 *)plVar10 = *(undefined4 *)(lVar9 + lVar6 + 0x4c);
      *(undefined2 *)(plVar10 + 3) = *(undefined2 *)(lVar9 + lVar6 + 0x48);
      puVar4 = &uStack_b0;
      plStack_c8 = plVar1;
      FUN_10a8ac074(puVar4,plVar1,&plStack_c8);
      lVar9 = lStack_80;
      plVar10[-3] = puVar4[5];
      uVar7 = (lVar13 - lStack_80 >> 3) * 0x4ec4ec4ec4ec4ec5;
      if (uVar7 < uVar12 || uVar7 - uVar12 == 0) goto LAB_10a87ad54;
      plStack_c8 = (long *)(lStack_80 + lVar6);
      puVar4 = &uStack_b0;
      FUN_10a8ac074(puVar4,plStack_c8,&plStack_c8);
      *(int *)(plVar10 + -2) = (int)((ulong)(puVar4[6] - puVar4[5]) >> 3) * -0x55555555;
      uVar12 = uVar12 + 1;
      lVar6 = lVar6 + 0x68;
      plVar10 = plVar10 + 8;
    } while (uVar12 <= uVar7 && uVar7 - uVar12 != 0);
    lStack_c0 = CONCAT44(lStack_c0._4_4_,(int)uVar7);
    plStack_c8 = plVar8;
    (**(code **)(**(long **)(param_1 + 0x10) + 0xc0))(*(long **)(param_1 + 0x10),&plStack_c8);
    __ZdlPv(plVar8);
    FUN_10a8abfd4(&uStack_b0);
  }
  FUN_10a87ea6c(&lStack_80);
  return;
}



/* Entry: 10a87ad8c; end: 10a87afb3;  */

void FUN_10a87ad8c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_80;
  ulong uStack_78;
  long *plStack_70;
  ulong uStack_68;
  undefined4 uStack_60;
  long *plStack_58;
  
  lVar9 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar9 + 0x128);
  lStack_80 = *(long *)(lVar9 + 0x100);
  uStack_78 = *(ulong *)(lVar9 + 0x108);
  *(undefined8 *)(lVar9 + 0x100) = 0;
  *(undefined8 *)(lVar9 + 0x108) = 0;
  plStack_70 = *(long **)(lVar9 + 0x110);
  uStack_68 = *(ulong *)(lVar9 + 0x118);
  *(undefined8 *)(lVar9 + 0x110) = 0;
  *(undefined8 *)(lVar9 + 0x118) = 0;
  uStack_60 = *(undefined4 *)(lVar9 + 0x120);
  *(undefined4 *)(lVar9 + 0x120) = 0x3f800000;
  if (uStack_68 != 0) {
    uVar6 = plStack_70[1];
    if ((uStack_78 & uStack_78 - 1) == 0) {
      uVar6 = uVar6 & uStack_78 - 1;
    }
    else if (uStack_78 <= uVar6) {
      uVar2 = 0;
      if (uStack_78 != 0) {
        uVar2 = uVar6 / uStack_78;
      }
      uVar6 = uVar6 - uVar2 * uStack_78;
    }
    *(long ***)(lStack_80 + uVar6 * 8) = &plStack_70;
  }
  __ZNSt3__15mutex6unlockEv(lVar9 + 0x128);
  uVar6 = uStack_68;
  if (uStack_68 != 0) {
    if (uStack_68 >> 0x3b != 0) {
      func_0x00010a88280c();
LAB_10a87af80:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a87af84);
      (*pcVar3)();
    }
    plVar10 = (long *)(uStack_68 << 5);
    plVar4 = plVar10;
    __Znwm();
    _bzero();
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    uStack_90 = 0x3f800000;
    plVar11 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      do {
        plVar7 = (long *)plVar11[5];
        plVar1 = (long *)plVar11[6];
        if (plVar7 != plVar1) {
          do {
            plStack_c8 = plVar7;
            if (*(char *)((long)plVar7 + 0x17) < '\0') {
              plStack_c8 = (long *)*plVar7;
            }
            lStack_c0 = plVar7[3];
            lStack_b8 = (long)((int)plVar7[4] - (int)lStack_c0);
            puVar5 = &uStack_b0;
            plStack_58 = plVar11 + 2;
            FUN_10a8ac074(puVar5,plVar11 + 2,&plStack_58);
            FUN_10a87b6a8(puVar5 + 5,&plStack_c8);
            plVar7 = plVar7 + 6;
          } while (plVar7 != plVar1);
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      if (plStack_a0 != (long *)0x0) {
        lVar9 = ((long)plVar10 >> 5) + 1;
        plVar11 = plStack_a0;
        plVar10 = plVar4 + 2;
        do {
          plVar7 = plVar11 + 2;
          if (*(char *)((long)plVar11 + 0x27) < '\0') {
            plVar7 = (long *)*plVar7;
          }
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) goto LAB_10a87af80;
          plVar10[-2] = (long)plVar7;
          lVar8 = plVar11[5];
          plVar10[-1] = lVar8;
          *(int *)plVar10 = (int)((ulong)(plVar11[6] - lVar8) >> 3) * -0x55555555;
          plVar11 = (long *)*plVar11;
          plVar10 = plVar10 + 4;
        } while (plVar11 != (long *)0x0);
      }
    }
    lStack_c0 = CONCAT44(lStack_c0._4_4_,(int)uVar6);
    plStack_c8 = plVar4;
    (**(code **)(**(long **)(param_1 + 0x10) + 0xd0))(*(long **)(param_1 + 0x10),&plStack_c8);
    FUN_10a8abfd4(&uStack_b0);
    __ZdlPv(plVar4);
  }
  FUN_10a88b9bc(&lStack_80);
  return;
}



/* Entry: 10a87afb4; end: 10a87b10f;  */

void FUN_10a87afb4(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long **pplStack_70;
  undefined4 uStack_68;
  long **pplStack_60;
  long lStack_58;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar6 + 0x1a8);
  plVar7 = *(long **)(lVar6 + 400);
  uStack_38 = *(undefined8 *)(lVar6 + 0x1a0);
  lVar3 = *(long *)(lVar6 + 0x198);
  *(undefined8 *)(lVar6 + 400) = 0;
  *(undefined8 *)(lVar6 + 0x198) = 0;
  *(undefined8 *)(lVar6 + 0x1a0) = 0;
  plStack_48 = plVar7;
  lStack_40 = lVar3;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x1a8);
  lVar3 = lVar3 - (long)plVar7;
  if (lVar3 != 0) {
    FUN_10a882768(&pplStack_60,(lVar3 >> 3) * -0x5555555555555555);
    if (lStack_40 - (long)plStack_48 == 0) {
      uVar2 = lStack_58 - (long)pplStack_60;
    }
    else {
      lVar3 = (lStack_40 - (long)plStack_48 >> 3) * -0x5555555555555555;
      uVar2 = lStack_58 - (long)pplStack_60;
      lVar6 = (long)uVar2 >> 3;
      plVar7 = plStack_48;
      pplVar4 = pplStack_60;
      do {
        plVar5 = plVar7;
        if (*(char *)((long)plVar7 + 0x17) < '\0') {
          plVar5 = (long *)*plVar7;
        }
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87b0e0);
          (*pcVar1)();
        }
        *pplVar4 = plVar5;
        lVar6 = lVar6 + -1;
        plVar7 = plVar7 + 3;
        lVar3 = lVar3 + -1;
        pplVar4 = pplVar4 + 1;
      } while (lVar3 != 0);
    }
    pplStack_70 = pplStack_60;
    uStack_68 = (undefined4)(uVar2 >> 3);
    (**(code **)(**(long **)(param_1 + 0x10) + 0xd8))(*(long **)(param_1 + 0x10),&pplStack_70);
    if (pplStack_60 != (long **)0x0) {
      __ZdlPv(pplStack_60);
    }
  }
  pplStack_60 = &plStack_48;
  FUN_10a0426d8(&pplStack_60);
  return;
}



/* Entry: 10a87b110; end: 10a87b287;  */

void FUN_10a87b110(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_a0;
  undefined4 uStack_98;
  long **pplStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long *plStack_60;
  long lStack_58;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar6 + 0xc0);
  plVar7 = *(long **)(lVar6 + 0xa8);
  uStack_38 = *(undefined8 *)(lVar6 + 0xb8);
  lVar3 = *(long *)(lVar6 + 0xb0);
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  plStack_48 = plVar7;
  lStack_40 = lVar3;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0xc0);
  lVar3 = lVar3 - (long)plVar7;
  if (lVar3 != 0) {
    FUN_10a882768(&plStack_60,(lVar3 >> 3) * -0x5555555555555555);
    uStack_88 = 0;
    pplStack_90 = (long **)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0x3f800000;
    if (lStack_40 - (long)plStack_48 == 0) {
      uVar2 = lStack_58 - (long)plStack_60;
    }
    else {
      lVar3 = (lStack_40 - (long)plStack_48 >> 3) * -0x5555555555555555;
      uVar2 = lStack_58 - (long)plStack_60;
      lVar6 = (long)uVar2 >> 3;
      plVar7 = plStack_48;
      plVar4 = plStack_60;
      do {
        plVar5 = plVar7;
        if (*(char *)((long)plVar7 + 0x17) < '\0') {
          plVar5 = (long *)*plVar7;
        }
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87b250);
          (*pcVar1)();
        }
        *plVar4 = (long)plVar5;
        lVar6 = lVar6 + -1;
        plVar7 = plVar7 + 3;
        lVar3 = lVar3 + -1;
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0);
    }
    plStack_a0 = plStack_60;
    uStack_98 = (undefined4)(uVar2 >> 3);
    (**(code **)(**(long **)(param_1 + 0x10) + 200))(*(long **)(param_1 + 0x10),&plStack_a0);
    FUN_10a8abfd4(&pplStack_90);
    if (plStack_60 != (long *)0x0) {
      __ZdlPv(plStack_60);
    }
  }
  pplStack_90 = &plStack_48;
  FUN_10a0426d8(&pplStack_90);
  return;
}



/* Entry: 10a87b288; end: 10a87b3e7;  */

void FUN_10a87b288(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long **pplStack_70;
  undefined4 uStack_68;
  long **pplStack_60;
  long lStack_58;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar6 + 0x228);
  plVar7 = *(long **)(lVar6 + 0x210);
  uStack_38 = *(undefined8 *)(lVar6 + 0x220);
  lVar3 = *(long *)(lVar6 + 0x218);
  *(undefined8 *)(lVar6 + 0x218) = 0;
  *(undefined8 *)(lVar6 + 0x210) = 0;
  *(undefined8 *)(lVar6 + 0x220) = 0;
  plStack_48 = plVar7;
  lStack_40 = lVar3;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x228);
  lVar3 = lVar3 - (long)plVar7;
  if (lVar3 != 0) {
    FUN_10a882768(&pplStack_60,(lVar3 >> 3) * -0x5555555555555555);
    if (lStack_40 - (long)plStack_48 == 0) {
      uVar2 = lStack_58 - (long)pplStack_60;
    }
    else {
      lVar3 = (lStack_40 - (long)plStack_48 >> 3) * -0x5555555555555555;
      uVar2 = lStack_58 - (long)pplStack_60;
      lVar6 = (long)uVar2 >> 3;
      plVar7 = plStack_48;
      pplVar4 = pplStack_60;
      do {
        plVar5 = plVar7;
        if (*(char *)((long)plVar7 + 0x17) < '\0') {
          plVar5 = (long *)*plVar7;
        }
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87b3b8);
          (*pcVar1)();
        }
        *pplVar4 = plVar5;
        lVar6 = lVar6 + -1;
        plVar7 = plVar7 + 3;
        lVar3 = lVar3 + -1;
        pplVar4 = pplVar4 + 1;
      } while (lVar3 != 0);
    }
    pplStack_70 = pplStack_60;
    uStack_68 = (undefined4)(uVar2 >> 3);
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe0))(*(long **)(param_1 + 0x10),&pplStack_70);
    if (pplStack_60 != (long **)0x0) {
      __ZdlPv(pplStack_60);
    }
  }
  pplStack_60 = &plStack_48;
  FUN_10a0426d8(&pplStack_60);
  return;
}



/* Entry: 10a87b3e8; end: 10a87b547;  */

void FUN_10a87b3e8(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long **pplStack_70;
  undefined4 uStack_68;
  long **pplStack_60;
  long lStack_58;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar6 + 0x2a8);
  plVar7 = *(long **)(lVar6 + 0x290);
  uStack_38 = *(undefined8 *)(lVar6 + 0x2a0);
  lVar3 = *(long *)(lVar6 + 0x298);
  *(undefined8 *)(lVar6 + 0x298) = 0;
  *(undefined8 *)(lVar6 + 0x290) = 0;
  *(undefined8 *)(lVar6 + 0x2a0) = 0;
  plStack_48 = plVar7;
  lStack_40 = lVar3;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x2a8);
  lVar3 = lVar3 - (long)plVar7;
  if (lVar3 != 0) {
    FUN_10a882768(&pplStack_60,(lVar3 >> 3) * -0x5555555555555555);
    if (lStack_40 - (long)plStack_48 == 0) {
      uVar2 = lStack_58 - (long)pplStack_60;
    }
    else {
      lVar3 = (lStack_40 - (long)plStack_48 >> 3) * -0x5555555555555555;
      uVar2 = lStack_58 - (long)pplStack_60;
      lVar6 = (long)uVar2 >> 3;
      plVar7 = plStack_48;
      pplVar4 = pplStack_60;
      do {
        plVar5 = plVar7;
        if (*(char *)((long)plVar7 + 0x17) < '\0') {
          plVar5 = (long *)*plVar7;
        }
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87b518);
          (*pcVar1)();
        }
        *pplVar4 = plVar5;
        lVar6 = lVar6 + -1;
        plVar7 = plVar7 + 3;
        lVar3 = lVar3 + -1;
        pplVar4 = pplVar4 + 1;
      } while (lVar3 != 0);
    }
    pplStack_70 = pplStack_60;
    uStack_68 = (undefined4)(uVar2 >> 3);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x128))(*(long **)(param_1 + 0x10),&pplStack_70);
    if (pplStack_60 != (long **)0x0) {
      __ZdlPv(pplStack_60);
    }
  }
  pplStack_60 = &plStack_48;
  FUN_10a0426d8(&pplStack_60);
  return;
}



/* Entry: 10a87b548; end: 10a87b6a7;  */

void FUN_10a87b548(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long **pplStack_70;
  undefined4 uStack_68;
  long **pplStack_60;
  long lStack_58;
  long *plStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(lVar6 + 0x328);
  plVar7 = *(long **)(lVar6 + 0x310);
  uStack_38 = *(undefined8 *)(lVar6 + 800);
  lVar3 = *(long *)(lVar6 + 0x318);
  *(undefined8 *)(lVar6 + 0x318) = 0;
  *(undefined8 *)(lVar6 + 0x310) = 0;
  *(undefined8 *)(lVar6 + 800) = 0;
  plStack_48 = plVar7;
  lStack_40 = lVar3;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x328);
  lVar3 = lVar3 - (long)plVar7;
  if (lVar3 != 0) {
    FUN_10a882768(&pplStack_60,(lVar3 >> 3) * -0x5555555555555555);
    if (lStack_40 - (long)plStack_48 == 0) {
      uVar2 = lStack_58 - (long)pplStack_60;
    }
    else {
      lVar3 = (lStack_40 - (long)plStack_48 >> 3) * -0x5555555555555555;
      uVar2 = lStack_58 - (long)pplStack_60;
      lVar6 = (long)uVar2 >> 3;
      plVar7 = plStack_48;
      pplVar4 = pplStack_60;
      do {
        plVar5 = plVar7;
        if (*(char *)((long)plVar7 + 0x17) < '\0') {
          plVar5 = (long *)*plVar7;
        }
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87b678);
          (*pcVar1)();
        }
        *pplVar4 = plVar5;
        lVar6 = lVar6 + -1;
        plVar7 = plVar7 + 3;
        lVar3 = lVar3 + -1;
        pplVar4 = pplVar4 + 1;
      } while (lVar3 != 0);
    }
    pplStack_70 = pplStack_60;
    uStack_68 = (undefined4)(uVar2 >> 3);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x130))(*(long **)(param_1 + 0x10),&pplStack_70);
    if (pplStack_60 != (long **)0x0) {
      __ZdlPv(pplStack_60);
    }
  }
  pplStack_60 = &plStack_48;
  FUN_10a0426d8(&pplStack_60);
  return;
}



/* Entry: 10a87b6a8; end: 10a87b7af;  */

/* WARNING: Removing unreachable block (ram,0x00010a87bbcc) */

void FUN_10a87b6a8(long *param_1,long *******param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 *******pppppppuVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long ***ppplVar10;
  code *pcVar11;
  bool bVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  undefined **ppuVar15;
  int iVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long lVar19;
  long ******pppppplVar20;
  long ***ppplVar21;
  ulong uVar22;
  long *******ppppppplVar23;
  long *****ppppplVar24;
  ulong uVar25;
  long *****ppppplVar26;
  long *******ppppppplVar27;
  long ****pppplVar28;
  long lVar29;
  long ****pppplVar30;
  undefined8 *puVar31;
  long *****ppppplVar32;
  long *******ppppppplVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long *plVar36;
  long *****ppppplVar37;
  long lVar38;
  long *******ppppppplVar39;
  long *******ppppppplVar40;
  long *****ppppplVar41;
  long *****ppppplStack_300;
  long *****ppppplStack_2f8;
  undefined8 ******ppppppuStack_2f0;
  long ****pppplStack_2e8;
  ulong uStack_2e0;
  long ******pppppplStack_2d8;
  long *****ppppplStack_2d0;
  undefined7 uStack_2c8;
  char cStack_2c1;
  long ******pppppplStack_2c0;
  long ****pppplStack_2b8;
  long ****pppplStack_2b0;
  long ******pppppplStack_2a8;
  long ****pppplStack_2a0;
  long ****pppplStack_298;
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  long ******pppppplStack_280;
  long ******pppppplStack_278;
  long ******pppppplStack_270;
  long ****pppplStack_268;
  long ******pppppplStack_260;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long lStack_b8;
  
  puVar31 = (undefined8 *)param_1[1];
  if (puVar31 < (undefined8 *)param_1[2]) {
    pppppplVar13 = param_2[1];
    pppppplVar20 = *param_2;
    puVar31[2] = param_2[2];
    puVar31[1] = pppppplVar13;
    *puVar31 = pppppplVar20;
    puVar31 = puVar31 + 3;
LAB_10a87b790:
    param_1[1] = (long)puVar31;
    return;
  }
  lVar29 = *param_1;
  uVar22 = ((long)puVar31 - lVar29 >> 3) * -0x5555555555555555 + 1;
  if (uVar22 < 0xaaaaaaaaaaaaaab) {
    lVar19 = param_1[2] - lVar29 >> 3;
    uVar25 = lVar19 * 0x5555555555555556;
    if (uVar25 < uVar22 || uVar25 - uVar22 == 0) {
      uVar25 = uVar22;
    }
    if (0x555555555555554 < (ulong)(lVar19 * -0x5555555555555555)) {
      uVar25 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar25 < 0xaaaaaaaaaaaaaab) {
      lVar19 = uVar25 * 0x18;
      __Znwm();
      puVar31 = (undefined8 *)(lVar19 + ((long)puVar31 - lVar29));
      pppppplVar20 = *param_2;
      puVar31[1] = param_2[1];
      *puVar31 = pppppplVar20;
      puVar31[2] = param_2[2];
      puVar31 = puVar31 + 3;
      _memcpy();
      *param_1 = lVar19;
      param_1[1] = (long)puVar31;
      param_1[2] = lVar19 + uVar25 * 0x18;
      if (lVar29 != 0) {
        __ZdlPv(lVar29);
      }
      goto LAB_10a87b790;
    }
  }
  else {
    FUN_10a882740();
  }
  func_0x000109ffded8();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_288 = (long *****)param_2[0xaf];
  ppppplStack_290 = (long *****)param_2[0xae];
  if (param_2[0xaf] != (long ******)0x0) {
    pppppplVar20 = param_2[0xaf] + 1;
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
      if (bVar12) {
        *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  pppppplStack_2a8 = (long ******)0x0;
  pppplStack_2a0 = (long ****)0x0;
  pppplStack_298 = (long ****)0x0;
  pppppplStack_2c0 = (long ******)0x0;
  pppplStack_2b8 = (long ****)0x0;
  pppplStack_2b0 = (long ****)0x0;
  lVar29 = (long)(int)param_3[1];
  if ((int)param_3[1] != 0) {
    func_0x00010a87aa5c(&pppppplStack_2a8);
    pppplVar28 = pppplStack_2b8;
    pppppplVar20 = pppppplStack_2c0;
    iVar16 = (int)param_3[1];
    uVar22 = (ulong)iVar16;
    if ((ulong)((long)pppplStack_2b0 - (long)pppppplStack_2c0 >> 4) < uVar22) {
      if (iVar16 < 0) goto LAB_10a87c674;
      pppppplStack_260 = (long ******)&pppppplStack_2c0;
      FUN_10a88297c();
      ppppplVar37 = (long *****)((long)pppplVar28 + (uVar22 - (long)pppppplVar20));
      ppppppplVar33 =
           (long *******)((long)ppppplVar37 - ((long)pppplStack_2b8 - (long)pppppplStack_2c0));
      _memcpy(ppppppplVar33);
      pppppplStack_270 = pppppplStack_2c0;
      pppplStack_268 = pppplStack_2b0;
      pppppplStack_280 = pppppplStack_2c0;
      pppppplStack_278 = pppppplStack_2c0;
      pppppplStack_2c0 = (long ******)ppppppplVar33;
      pppplStack_2b8 = (long ****)ppppplVar37;
      pppplStack_2b0 = (long ****)(uVar22 + lVar29 * 0x10);
      func_0x00010a882a0c(&pppppplStack_280);
      iVar16 = (int)param_3[1];
    }
    if (0 < iVar16) {
      lVar29 = 0;
      do {
        if (*(int *)param_2[0x3d] == 4) {
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[1] = 0;
          *param_1 = 0;
          goto LAB_10a87c5c4;
        }
        plVar36 = (long *)(*param_3 + lVar29 * 0x40);
        if (*plVar36 == 0) {
          ppuVar15 = &PTR_PTR_113303ee0;
          FUN_10ae079a0(0,&PTR_PTR_113303ee0);
          FUN_10ae07cd4(ppuVar15,&PTR_PTR_113303ee0);
        }
        else {
          lVar38 = plVar36[1];
          uVar3 = *(uint *)(plVar36 + 2);
          ppppppplVar33 = (long *******)(ulong)uVar3;
          lVar9 = plVar36[4];
          ppplVar21 = (long ***)plVar36[5];
          lVar19 = plVar36[6];
          bVar4 = *(byte *)(plVar36 + 7);
          bVar5 = *(byte *)((long)plVar36 + 0x39);
          func_0x000107c2b054(&pppppplStack_2d8);
          ppppppuStack_2f0 = (undefined8 *******)0x0;
          pppplStack_2e8 = (long ****)0x0;
          uStack_2e0 = 0;
          if (lVar19 != 0) {
            func_0x000107c2c4dc(&ppppppuStack_2f0,lVar19);
          }
          ppppplVar37 = (long *****)pppplStack_2e8;
          if (-1 < (long)uStack_2e0) {
            ppppplVar37 = (long *****)(uStack_2e0 >> 0x38);
          }
          if (ppppplVar37 == (long *****)0x0) {
            bVar12 = false;
          }
          else {
            pppppplVar20 = param_2[0x46];
            bVar6 = *(byte *)((long)pppppplVar20 + 0x47);
            ppppplVar35 = pppppplVar20[7];
            if (-1 < (char)bVar6) {
              ppppplVar35 = (long *****)(ulong)bVar6;
            }
            if (ppppplVar35 == ppppplVar37) {
              pppppplVar13 = (long ******)pppppplVar20[6];
              if (-1 < (char)bVar6) {
                pppppplVar13 = pppppplVar20 + 6;
              }
              pppppppuVar2 = (undefined8 *******)ppppppuStack_2f0;
              if (-1 < (long)uStack_2e0) {
                pppppppuVar2 = &ppppppuStack_2f0;
              }
              _memcmp(pppppplVar13,pppppppuVar2);
              bVar12 = (int)pppppplVar13 != 0;
            }
            else {
              bVar12 = true;
            }
          }
          ppppplVar37 = ppppplStack_290;
          ppppplVar35 = (long *****)ppppplStack_290[1];
          ppppppplVar40 = (long *******)*ppppplStack_290;
          if ((long *****)ppppplStack_290[1] != (long *****)0x0) {
            ppppplVar26 = (long *****)(ppppplStack_290[1] + 2);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          pppppplStack_280 = (long ******)FUN_10a8aaba8;
          pppppplStack_278 = (long ******)&PTR_FUN_110c25240;
          ppppplVar41 = (long *****)ppppplVar37[1];
          ppppplVar26 = (long *****)*ppppplVar37;
          pppppplStack_270 = (long ******)ppppppplVar40;
          pppplStack_268 = (long ****)ppppplVar35;
          if ((long *****)ppppplVar37[1] != (long *****)0x0) {
            ppppplVar35 = (long *****)(ppppplVar37[1] + 2);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
              if (bVar8) {
                *ppppplVar35 = (long ****)((long)*ppppplVar35 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
              if (bVar8) {
                *ppppplVar35 = (long ****)((long)*ppppplVar35 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          ppplStack_f8 = (long ***)FUN_10a8ab538;
          ppplStack_f0 = (long ***)&PTR_FUN_110c25260;
          ppppplVar35 = (long *****)ppppplVar37[1];
          ppppplVar34 = (long *****)ppppplVar37[1];
          ppppplVar32 = (long *****)*ppppplVar37;
          pppplStack_e8 = (long ****)ppppplVar26;
          pppplStack_e0 = (long ****)ppppplVar41;
          if (ppppplVar35 != (long *****)0x0) {
            ppppplVar26 = ppppplVar35 + 2;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar35);
          }
          ppuStack_138 = (undefined **)FUN_10a8ab820;
          ppuStack_130 = &PTR_FUN_110c25280;
          pppppplVar13 = (long ******)0x158;
          pppplStack_128 = (long ****)ppppplVar32;
          pppplStack_120 = (long ****)ppppplVar34;
          __Znwm();
          pppppplVar13[1] = (long *****)0x0;
          pppppplVar13[2] = (long *****)0x0;
          pppppplVar20 = pppppplVar13 + 3;
          *pppppplVar13 = (long *****)&PTR_FUN_110be7500;
          FUN_10a5cce24(pppppplVar20,bVar12,&pppppplStack_280,&ppplStack_f8,&ppuStack_138);
          ppppplStack_300 = (long *****)pppppplVar20;
          ppppplStack_2f8 = (long *****)pppppplVar13;
          FUN_10a4ba650(&ppppplStack_300,pppppplVar13 + 8,pppppplVar20);
          (*(code *)*ppuStack_130)(&ppuStack_130);
          (*(code *)*ppplStack_f0)(&ppplStack_f0);
          (*(code *)*pppppplStack_278)(&pppppplStack_278);
          if (0 < (int)uVar3) {
            plVar36 = (long *)(lVar38 + 0x10);
            ppppppplVar40 = ppppppplVar33;
            do {
              lVar19 = plVar36[-1];
              lVar38 = *plVar36;
              func_0x000107c2b054(&ppplStack_f8,plVar36[-2]);
              ppuStack_138 = (undefined **)0x0;
              ppuStack_130 = (undefined **)0x0;
              pppplStack_128 = (long ****)0x0;
              FUN_10a105aa8(&ppuStack_138,lVar19,lVar19 + lVar38,lVar38);
              FUN_10a0f6350(&pppppplStack_280,&ppuStack_138);
              pppppplVar20 = (long ******)0x0;
              if ((long ******)ppppplStack_300 != (long ******)0x0) {
                pppppplVar20 = (long ******)(ppppplStack_300 + 3);
              }
              FUN_10a0ff770(&pppppplStack_280,pppppplVar20);
              func_0x00010a0f618c(&pppppplStack_280);
              if (ppuStack_138 != (undefined **)0x0) {
                ppuStack_130 = ppuStack_138;
                __ZdlPv();
              }
              plVar36 = plVar36 + 3;
              ppppppplVar40 = (long *******)((long)ppppppplVar40 + -1);
              ppppppplVar33 = (long *******)0x0;
            } while (ppppppplVar40 != (long *******)0x0);
          }
          ppppppplVar40 = (long *******)(ppppplVar37 + 7);
          ppppppplVar18 = &pppppplStack_2d8;
          ppppppplVar14 = ppppppplVar40;
          func_0x000107c2b05c();
          ppppppplVar39 = (long *******)ppppplVar37[8];
          if (ppppppplVar39 != (long *******)0x0) {
            uVar22 = (long)ppppppplVar39 - 1;
            if (((ulong)ppppppplVar39 & uVar22) == 0) {
              ppppppplVar33 = (long *******)(uVar22 & (ulong)ppppppplVar14);
            }
            else {
              ppppppplVar33 = ppppppplVar14;
              if (ppppppplVar39 <= ppppppplVar14) {
                uVar25 = 0;
                if (ppppppplVar39 != (long *******)0x0) {
                  uVar25 = (ulong)ppppppplVar14 / (ulong)ppppppplVar39;
                }
                ppppppplVar33 = (long *******)((long)ppppppplVar14 - uVar25 * (long)ppppppplVar39);
              }
            }
            if ((*ppppppplVar40)[(long)ppppppplVar33] != (long *****)0x0) {
              for (pppplVar28 = *(*ppppppplVar40)[(long)ppppppplVar33]; pppplVar28 != (long ****)0x0
                  ; pppplVar28 = (long ****)*pppplVar28) {
                ppppppplVar17 = (long *******)pppplVar28[1];
                if (ppppppplVar17 == ppppppplVar14) {
                  ppppppplVar18 = (long *******)(pppplVar28 + 2);
                  ppppppplVar17 = ppppppplVar40;
                  func_0x000107c2b068(ppppppplVar40,ppppppplVar18,&pppppplStack_2d8);
                  if (((ulong)ppppppplVar17 & 1) != 0) goto LAB_10a87bf68;
                }
                else {
                  if (((ulong)ppppppplVar39 & uVar22) == 0) {
                    ppppppplVar17 = (long *******)((ulong)ppppppplVar17 & uVar22);
                  }
                  else if (ppppppplVar39 <= ppppppplVar17) {
                    uVar25 = 0;
                    if (ppppppplVar39 != (long *******)0x0) {
                      uVar25 = (ulong)ppppppplVar17 / (ulong)ppppppplVar39;
                    }
                    ppppppplVar17 =
                         (long *******)((long)ppppppplVar17 - uVar25 * (long)ppppppplVar39);
                  }
                  if (ppppppplVar17 != ppppppplVar33) break;
                }
              }
            }
          }
          ppppppplVar17 = (long *******)0x38;
          __Znwm();
          pppppplStack_270 = (long ******)0x0;
          *ppppppplVar17 = (long ******)0x0;
          ppppppplVar17[1] = (long ******)ppppppplVar14;
          pppppplStack_280 = (long ******)ppppppplVar17;
          pppppplStack_278 = (long ******)ppppppplVar40;
          if (cStack_2c1 < '\0') {
            ppppppplVar18 = (long *******)pppppplStack_2d8;
            func_0x000107c3192c(ppppppplVar17 + 2,pppppplStack_2d8,ppppplStack_2d0);
          }
          else {
            ppppppplVar17[3] = (long ******)ppppplStack_2d0;
            ppppppplVar17[2] = pppppplStack_2d8;
            ppppppplVar17[4] = (long ******)CONCAT17(cStack_2c1,uStack_2c8);
          }
          ppppppplVar17[6] = (long ******)ppppplStack_2f8;
          ppppppplVar17[5] = (long ******)ppppplStack_300;
          if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
            pppppplVar20 = (long ******)(ppppplStack_2f8 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
              if (bVar12) {
                *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          pppppplStack_270 = (long ******)CONCAT71(pppppplStack_270._1_7_,1);
          if ((ppppppplVar39 == (long *******)0x0) ||
             (*(float *)(ppppplVar37 + 0xb) * (float)ppppppplVar39 <
              (float)((long)ppppplVar37[10] + 1))) {
            uVar22 = 1;
            if ((long *******)0x2 < ppppppplVar39) {
              uVar22 = (ulong)(((ulong)ppppppplVar39 & (long)ppppppplVar39 - 1U) != 0);
            }
            ppppppplVar33 = (long *******)(uVar22 | (long)ppppppplVar39 << 1);
            ppppppplVar39 =
                 (long *******)
                 (long)((float)((long)ppppplVar37[10] + 1) / *(float *)(ppppplVar37 + 0xb));
            if (ppppppplVar33 <= ppppppplVar39) {
              ppppppplVar33 = ppppppplVar39;
            }
            if ((long)ppppppplVar33 - 1U == 0) {
              ppppppplVar33 = (long *******)0x2;
            }
            else if (((ulong)ppppppplVar33 & (long)ppppppplVar33 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            ppppppplVar39 = (long *******)ppppplVar37[8];
            if (ppppppplVar39 < ppppppplVar33) {
LAB_10a87bd7c:
              if ((ulong)ppppppplVar33 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a87c678;
              }
              pppppplVar20 = (long ******)((long)ppppppplVar33 << 3);
              __Znwm();
              pppppplVar13 = *ppppppplVar40;
              *ppppppplVar40 = pppppplVar20;
              if (pppppplVar13 != (long ******)0x0) {
                __ZdlPv();
              }
              ppppppplVar39 = (long *******)0x0;
              ppppplVar37[8] = (long ****)ppppppplVar33;
              do {
                (*ppppppplVar40)[(long)ppppppplVar39] = (long *****)0x0;
                ppppppplVar39 = (long *******)((long)ppppppplVar39 + 1);
              } while (ppppppplVar33 != ppppppplVar39);
              ppppplVar35 = (long *****)ppppplVar37[9];
              ppppppplVar39 = ppppppplVar33;
              if (ppppplVar35 != (long *****)0x0) {
                ppppppplVar23 = (long *******)ppppplVar35[1];
                uVar22 = (long)ppppppplVar33 - 1;
                if (((ulong)ppppppplVar33 & uVar22) == 0) {
                  ppppppplVar23 = (long *******)((ulong)ppppppplVar23 & uVar22);
                }
                else if (ppppppplVar33 <= ppppppplVar23) {
                  uVar25 = 0;
                  if (ppppppplVar33 != (long *******)0x0) {
                    uVar25 = (ulong)ppppppplVar23 / (ulong)ppppppplVar33;
                  }
                  ppppppplVar23 = (long *******)((long)ppppppplVar23 - uVar25 * (long)ppppppplVar33)
                  ;
                }
                (*ppppppplVar40)[(long)ppppppplVar23] = ppppplVar37 + 9;
                ppppplVar26 = (long *****)*ppppplVar35;
                while (ppppplVar26 != (long *****)0x0) {
                  ppppppplVar27 = (long *******)ppppplVar26[1];
                  if (((ulong)ppppppplVar33 & uVar22) == 0) {
                    ppppppplVar27 = (long *******)((ulong)ppppppplVar27 & uVar22);
                  }
                  else if (ppppppplVar33 <= ppppppplVar27) {
                    uVar25 = 0;
                    if (ppppppplVar33 != (long *******)0x0) {
                      uVar25 = (ulong)ppppppplVar27 / (ulong)ppppppplVar33;
                    }
                    ppppppplVar27 =
                         (long *******)((long)ppppppplVar27 - uVar25 * (long)ppppppplVar33);
                  }
                  ppppplVar41 = ppppplVar26;
                  if (ppppppplVar27 != ppppppplVar23) {
                    pppppplVar20 = *ppppppplVar40;
                    if (pppppplVar20[(long)ppppppplVar27] == (long *****)0x0) {
                      pppppplVar20[(long)ppppppplVar27] = ppppplVar35;
                      ppppppplVar23 = ppppppplVar27;
                    }
                    else {
                      *ppppplVar35 = *ppppplVar26;
                      *ppppplVar26 = *pppppplVar20[(long)ppppppplVar27];
                      *pppppplVar20[(long)ppppppplVar27] = (long ****)ppppplVar26;
                      ppppplVar41 = ppppplVar35;
                    }
                  }
                  ppppplVar35 = ppppplVar41;
                  ppppplVar26 = (long *****)*ppppplVar41;
                }
              }
            }
            else if (ppppppplVar33 < ppppppplVar39) {
              ppppppplVar23 =
                   (long *******)(long)((float)ppppplVar37[10] / *(float *)(ppppplVar37 + 0xb));
              if ((ppppppplVar39 < (long *******)0x3) ||
                 (((ulong)ppppppplVar39 & (long)ppppppplVar39 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *******)0x1 < ppppppplVar23) {
                ppppppplVar23 = (long *******)(1L << (-LZCOUNT((long)ppppppplVar23 + -1) & 0x3fU));
              }
              if (ppppppplVar33 <= ppppppplVar23) {
                ppppppplVar33 = ppppppplVar23;
              }
              if (ppppppplVar33 < ppppppplVar39) {
                if (ppppppplVar33 != (long *******)0x0) goto LAB_10a87bd7c;
                pppppplVar20 = *ppppppplVar40;
                *ppppppplVar40 = (long ******)0x0;
                if (pppppplVar20 != (long ******)0x0) {
                  __ZdlPv();
                }
                ppppplVar37[8] = (long ****)0x0;
                ppppppplVar39 = (long *******)0x0;
              }
              else {
                ppppppplVar39 = (long *******)ppppplVar37[8];
              }
            }
            if (((ulong)ppppppplVar39 & (long)ppppppplVar39 - 1U) == 0) {
              ppppppplVar33 = (long *******)((long)ppppppplVar39 - 1U & (ulong)ppppppplVar14);
            }
            else {
              ppppppplVar33 = ppppppplVar14;
              if (ppppppplVar39 <= ppppppplVar14) {
                uVar22 = 0;
                if (ppppppplVar39 != (long *******)0x0) {
                  uVar22 = (ulong)ppppppplVar14 / (ulong)ppppppplVar39;
                }
                ppppppplVar33 = (long *******)((long)ppppppplVar14 - uVar22 * (long)ppppppplVar39);
              }
            }
          }
          pppppplVar20 = *ppppppplVar40;
          ppppplVar35 = pppppplVar20[(long)ppppppplVar33];
          if (ppppplVar35 == (long *****)0x0) {
            pppppplVar13 = (long ******)(ppppplVar37 + 9);
            *ppppppplVar17 = (long ******)*pppppplVar13;
            *pppppplVar13 = (long *****)ppppppplVar17;
            pppppplVar20[(long)ppppppplVar33] = (long *****)pppppplVar13;
            if (*ppppppplVar17 != (long ******)0x0) {
              ppppppplVar33 = (long *******)(*ppppppplVar17)[1];
              if (((ulong)ppppppplVar39 & (long)ppppppplVar39 - 1U) == 0) {
                ppppppplVar33 = (long *******)((ulong)ppppppplVar33 & (long)ppppppplVar39 - 1U);
              }
              else if (ppppppplVar39 <= ppppppplVar33) {
                uVar22 = 0;
                if (ppppppplVar39 != (long *******)0x0) {
                  uVar22 = (ulong)ppppppplVar33 / (ulong)ppppppplVar39;
                }
                ppppppplVar33 = (long *******)((long)ppppppplVar33 - uVar22 * (long)ppppppplVar39);
              }
              (*ppppppplVar40)[(long)ppppppplVar33] = (long *****)ppppppplVar17;
            }
          }
          else {
            *ppppppplVar17 = (long ******)*ppppplVar35;
            *ppppplVar35 = (long ****)ppppppplVar17;
          }
          ppppplVar37[10] = (long ****)((long)ppppplVar37[10] + 1);
LAB_10a87bf68:
          if (pppplStack_2a0 < pppplStack_298) {
            pppplStack_2a0[1] = (long ***)ppppplStack_2f8;
            *pppplStack_2a0 = (long ***)ppppplStack_300;
            if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
              pppppplVar20 = (long ******)(ppppplStack_2f8 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
                if (bVar12) {
                  *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            ppppplVar37 = (long *****)(pppplStack_2a0 + 2);
          }
          else {
            lVar19 = (long)pppplStack_2a0 - (long)pppppplStack_2a8;
            uVar22 = (lVar19 >> 4) + 1;
            if (uVar22 >> 0x3c != 0) {
              func_0x00010a8826ac();
              goto LAB_10a87c678;
            }
            uVar25 = (long)pppplStack_298 - (long)pppppplStack_2a8 >> 3;
            if (uVar25 <= uVar22) {
              uVar25 = uVar22;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppplStack_298 - (long)pppppplStack_2a8)) {
              uVar25 = 0xfffffffffffffff;
            }
            pppppplStack_260 = (long ******)&pppppplStack_2a8;
            FUN_10a8826c0();
            plVar36 = (long *)(uVar25 + lVar19);
            plVar36[1] = (long)ppppplStack_2f8;
            *plVar36 = (long)ppppplStack_300;
            if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
              pppppplVar20 = (long ******)(ppppplStack_2f8 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
                if (bVar12) {
                  *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            lVar19 = (long)ppppppplVar18 * 0x10;
            ppppplVar37 = (long *****)(plVar36 + 2);
            ppppppplVar33 =
                 (long *******)((long)plVar36 - ((long)pppplStack_2a0 - (long)pppppplStack_2a8));
            ppppppplVar18 = (long *******)pppppplStack_2a8;
            _memcpy(ppppppplVar33);
            pppppplStack_270 = pppppplStack_2a8;
            pppplStack_268 = pppplStack_298;
            pppppplStack_280 = pppppplStack_2a8;
            pppppplStack_278 = pppppplStack_2a8;
            pppppplStack_2a8 = (long ******)ppppppplVar33;
            pppplStack_2a0 = (long ****)ppppplVar37;
            pppplStack_298 = (long ****)(uVar25 + lVar19);
            func_0x00010a8826f4(&pppppplStack_280);
          }
          ppppplVar35 = (long *****)pppplStack_2e8;
          if (-1 < (long)uStack_2e0) {
            ppppplVar35 = (long *****)(uStack_2e0 >> 0x38);
          }
          uVar1 = 2;
          if ((bVar5 & 1) == 0) {
            uVar1 = ppppplVar35 == (long *****)0x0;
          }
          pppplStack_2a0 = (long ****)ppppplVar37;
          if (ppppplVar35 == (long *****)0x0) {
            ppppppplVar33 = (long *******)0xd0;
            __Znwm();
            ppppppplVar33[1] = (long ******)0x0;
            ppppppplVar33[2] = (long ******)0x0;
            *ppppppplVar33 = (long ******)&PTR_FUN_110bf8238;
            ppppppplVar33[0x17] = (long ******)0x0;
            ppppppplVar33[0x16] = (long ******)0x0;
            ppppppplVar33[0x19] = (long ******)0x0;
            ppppppplVar33[0x18] = (long ******)0x0;
            pppppplStack_280 = (long ******)(ppppppplVar33 + 3);
            *pppppplStack_280 = (long *****)&PTR_FUN_110c25680;
            ppppppplVar33[9] = (long ******)0x0;
            ppppppplVar33[8] = (long ******)0x0;
            ppppppplVar33[0xb] = (long ******)0x0;
            ppppppplVar33[10] = (long ******)0x0;
            ppppppplVar33[0xd] = (long ******)0x0;
            ppppppplVar33[0xc] = (long ******)0x0;
            ppppppplVar33[0xf] = (long ******)0x0;
            ppppppplVar33[0xe] = (long ******)0x0;
            ppppppplVar33[5] = (long ******)0x0;
            ppppppplVar33[4] = (long ******)0x0;
            ppppppplVar33[7] = (long ******)0x0;
            ppppppplVar33[6] = (long ******)0x0;
            ppppppplVar33[0xe] = (long ******)0x0;
            ppppppplVar33[0xf] = (long ******)0xffffffffffffffff;
            ppppppplVar33[0x13] = (long ******)0x0;
            ppppppplVar33[0x12] = (long ******)0x0;
            ppppppplVar33[0x15] = (long ******)0x0;
            ppppppplVar33[0x14] = (long ******)0x0;
            ppppppplVar33[0x11] = (long ******)0x0;
            ppppppplVar33[0x10] = (long ******)0x0;
            *(undefined1 *)(ppppppplVar33 + 0x16) = 0;
            pppppplStack_278 = (long ******)ppppppplVar33;
          }
          else {
            ppppppplVar18 = param_2;
            FUN_10a87a708(&pppppplStack_280,param_2,&ppppppuStack_2f0);
          }
          ppppplVar37 = (long *****)param_3[2];
          pppplVar28 = (long ****)0x70;
          __Znwm();
          pppplVar28[1] = (long ***)0x0;
          pppplVar28[2] = (long ***)0x0;
          pppplVar30 = pppplVar28 + 3;
          *pppplVar30 = (long ***)&PTR_DAT_110c23c10;
          *pppplVar28 = (long ***)&PTR_FUN_110c252b0;
          pppplVar28[4] = (long ***)0x0;
          pppplVar28[5] = (long ***)0x0;
          if (cStack_2c1 < '\0') {
            ppppppplVar18 = (long *******)pppppplStack_2d8;
            func_0x000107c3192c(pppplVar28 + 6,pppppplStack_2d8,ppppplStack_2d0);
          }
          else {
            pppplVar28[7] = (long ***)ppppplStack_2d0;
            pppplVar28[6] = (long ***)pppppplStack_2d8;
            pppplVar28[8] = (long ***)CONCAT17(cStack_2c1,uStack_2c8);
          }
          pppppplVar20 = pppppplStack_278;
          *(int *)(pppplVar28 + 9) = (int)lVar9;
          *(byte *)((long)pppplVar28 + 0x4c) = bVar4 & 1;
          *(undefined1 *)((long)pppplVar28 + 0x4d) = uVar1;
          pppplVar28[10] = ppplVar21;
          pppplVar28[0xb] = (long ***)ppppplVar37;
          pppplVar28[0xd] = (long ***)pppppplStack_278;
          pppplVar28[0xc] = (long ***)pppppplStack_280;
          ppplStack_f8 = (long ***)pppplVar30;
          ppplStack_f0 = (long ***)pppplVar28;
          if ((long *******)pppppplStack_278 != (long *******)0x0) {
            ppppppplVar33 = (long *******)(pppppplStack_278 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
              if (bVar12) {
                *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              pppppplVar13 = *ppppppplVar33;
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
              if (bVar12) {
                *ppppppplVar33 = (long ******)((long)pppppplVar13 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppplVar13 == (long ******)0x0) {
              (*(code *)(*pppppplStack_278)[2])(pppppplStack_278);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar20);
            }
          }
          ppplVar10 = ppplStack_f0;
          ppplVar21 = ppplStack_f8;
          ppppplVar41 = ppppplStack_290;
          ppppplVar26 = ppppplStack_2f8;
          ppppplVar35 = ppppplStack_300;
          uVar22 = ((ulong)(uint)((int)ppppplStack_300 << 3) + 8 ^ (ulong)ppppplStack_300 >> 0x20) *
                   -0x622015f714c7d297;
          uVar22 = ((ulong)ppppplStack_300 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
          ppppplVar34 = (long *****)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
          ppppplVar32 = (long *****)ppppplStack_290[0xd];
          if (ppppplVar32 != (long *****)0x0) {
            uVar22 = (long)ppppplVar32 - 1;
            if (((ulong)ppppplVar32 & uVar22) == 0) {
              ppppplVar37 = (long *****)((ulong)ppppplVar34 & uVar22);
            }
            else {
              ppppplVar37 = ppppplVar34;
              if (ppppplVar32 <= ppppplVar34) {
                uVar25 = 0;
                if (ppppplVar32 != (long *****)0x0) {
                  uVar25 = (ulong)ppppplVar34 / (ulong)ppppplVar32;
                }
                ppppplVar37 = (long *****)((long)ppppplVar34 - uVar25 * (long)ppppplVar32);
              }
            }
            pppplVar28 = (long ****)ppppplStack_290[0xc][(long)ppppplVar37];
            if (pppplVar28 != (long ****)0x0) {
              do {
                while( true ) {
                  pppplVar28 = (long ****)*pppplVar28;
                  if (pppplVar28 == (long ****)0x0) goto LAB_10a87c28c;
                  ppppplVar24 = (long *****)pppplVar28[1];
                  if (ppppplVar24 != ppppplVar34) break;
                  if ((long *****)pppplVar28[2] == ppppplStack_300) goto LAB_10a87c3d4;
                }
                if (((ulong)ppppplVar32 & uVar22) == 0) {
                  ppppplVar24 = (long *****)((ulong)ppppplVar24 & uVar22);
                }
                else if (ppppplVar32 <= ppppplVar24) {
                  uVar25 = 0;
                  if (ppppplVar32 != (long *****)0x0) {
                    uVar25 = (ulong)ppppplVar24 / (ulong)ppppplVar32;
                  }
                  ppppplVar24 = (long *****)((long)ppppplVar24 - uVar25 * (long)ppppplVar32);
                }
              } while (ppppplVar24 == ppppplVar37);
            }
          }
LAB_10a87c28c:
          ppppplVar24 = (long *****)0x30;
          __Znwm();
          *ppppplVar24 = (long ****)0x0;
          ppppplVar24[1] = (long ****)ppppplVar34;
          ppppplVar24[2] = (long ****)ppppplVar35;
          ppppplVar24[3] = (long ****)ppppplVar26;
          if ((long ******)ppppplVar26 != (long ******)0x0) {
            pppppplVar20 = (long ******)(ppppplVar26 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
              if (bVar12) {
                *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          ppppplVar24[4] = (long ****)ppplVar21;
          ppppplVar24[5] = (long ****)ppplVar10;
          if ((long ****)ppplVar10 != (long ****)0x0) {
            pppplVar28 = (long ****)(ppplVar10 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
              if (bVar12) {
                *pppplVar28 = (long ***)((long)*pppplVar28 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if ((ppppplVar32 == (long *****)0x0) ||
             (*(float *)(ppppplVar41 + 0x10) * (float)ppppplVar32 <
              (float)((long)ppppplVar41[0xf] + 1))) {
            uVar22 = 1;
            if ((long *****)0x2 < ppppplVar32) {
              uVar22 = (ulong)(((ulong)ppppplVar32 & (long)ppppplVar32 - 1U) != 0);
            }
            ppppppplVar18 = (long *******)(uVar22 | (long)ppppplVar32 << 1);
            ppppppplVar33 =
                 (long *******)
                 (long)((float)((long)ppppplVar41[0xf] + 1) / *(float *)(ppppplVar41 + 0x10));
            if (ppppppplVar18 <= ppppppplVar33) {
              ppppppplVar18 = ppppppplVar33;
            }
            FUN_10a8abcec(ppppplVar41 + 0xc);
            ppppplVar32 = (long *****)ppppplVar41[0xd];
            if (((ulong)ppppplVar32 & (long)ppppplVar32 - 1U) == 0) {
              ppppplVar37 = (long *****)((long)ppppplVar32 - 1U & (ulong)ppppplVar34);
            }
            else {
              ppppplVar37 = ppppplVar34;
              if (ppppplVar32 <= ppppplVar34) {
                uVar22 = 0;
                if (ppppplVar32 != (long *****)0x0) {
                  uVar22 = (ulong)ppppplVar34 / (ulong)ppppplVar32;
                }
                ppppplVar37 = (long *****)((long)ppppplVar34 - uVar22 * (long)ppppplVar32);
              }
            }
          }
          ppppplVar35 = (long *****)ppppplVar41[0xc];
          pppplVar28 = ppppplVar35[(long)ppppplVar37];
          if (pppplVar28 == (long ****)0x0) {
            pppppplVar20 = (long ******)(ppppplVar41 + 0xe);
            *ppppplVar24 = (long ****)*pppppplVar20;
            *pppppplVar20 = ppppplVar24;
            ppppplVar35[(long)ppppplVar37] = (long ****)pppppplVar20;
            if (*ppppplVar24 != (long ****)0x0) {
              ppppplVar37 = (long *****)(*ppppplVar24)[1];
              if (((ulong)ppppplVar32 & (long)ppppplVar32 - 1U) == 0) {
                ppppplVar37 = (long *****)((ulong)ppppplVar37 & (long)ppppplVar32 - 1U);
              }
              else if (ppppplVar32 <= ppppplVar37) {
                uVar22 = 0;
                if (ppppplVar32 != (long *****)0x0) {
                  uVar22 = (ulong)ppppplVar37 / (ulong)ppppplVar32;
                }
                ppppplVar37 = (long *****)((long)ppppplVar37 - uVar22 * (long)ppppplVar32);
              }
              ppppplVar41[0xc][(long)ppppplVar37] = (long ***)ppppplVar24;
            }
          }
          else {
            *ppppplVar24 = (long ****)*pppplVar28;
            *pppplVar28 = (long ***)ppppplVar24;
          }
          ppppplVar41[0xf] = (long ****)((long)ppppplVar41[0xf] + 1);
LAB_10a87c3d4:
          if (pppplStack_2b8 < pppplStack_2b0) {
            *pppplStack_2b8 = ppplVar21;
            pppplStack_2b8[1] = ppplVar10;
            if ((long ****)ppplVar10 != (long ****)0x0) {
              pppplVar28 = (long ****)(ppplVar10 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
                if (bVar12) {
                  *pppplVar28 = (long ***)((long)*pppplVar28 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            ppppplVar37 = (long *****)(pppplStack_2b8 + 2);
          }
          else {
            lVar19 = (long)pppplStack_2b8 - (long)pppppplStack_2c0;
            uVar22 = (lVar19 >> 4) + 1;
            if (uVar22 >> 0x3c != 0) {
              FUN_10a882968();
              goto LAB_10a87c678;
            }
            uVar25 = (long)pppplStack_2b0 - (long)pppppplStack_2c0 >> 3;
            if (uVar25 <= uVar22) {
              uVar25 = uVar22;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppplStack_2b0 - (long)pppppplStack_2c0)) {
              uVar25 = 0xfffffffffffffff;
            }
            pppppplStack_260 = (long ******)&pppppplStack_2c0;
            FUN_10a88297c();
            plVar36 = (long *)(uVar25 + lVar19);
            *plVar36 = (long)ppplVar21;
            plVar36[1] = (long)ppplVar10;
            if ((long ****)ppplVar10 != (long ****)0x0) {
              pppplVar28 = (long ****)(ppplVar10 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
                if (bVar12) {
                  *pppplVar28 = (long ***)((long)*pppplVar28 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            ppppplVar37 = (long *****)(plVar36 + 2);
            ppppppplVar33 =
                 (long *******)((long)plVar36 - ((long)pppplStack_2b8 - (long)pppppplStack_2c0));
            _memcpy(ppppppplVar33);
            pppppplStack_270 = pppppplStack_2c0;
            pppplStack_268 = pppplStack_2b0;
            pppppplStack_280 = pppppplStack_2c0;
            pppppplStack_278 = pppppplStack_2c0;
            pppppplStack_2c0 = (long ******)ppppppplVar33;
            pppplStack_2b8 = (long ****)ppppplVar37;
            pppplStack_2b0 = (long ****)(uVar25 + (long)ppppppplVar18 * 0x10);
            func_0x00010a882a0c(&pppppplStack_280);
          }
          pppplStack_2b8 = (long ****)ppppplVar37;
          if ((long ****)ppplVar10 != (long ****)0x0) {
            pppplVar28 = (long ****)(ppplVar10 + 1);
            do {
              ppplVar21 = *pppplVar28;
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
              if (bVar12) {
                *pppplVar28 = (long ***)((long)ppplVar21 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (ppplVar21 == (long ***)0x0) {
              (*(code *)(*ppplVar10)[2])(ppplVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar10);
            }
          }
          ppppplVar37 = ppppplStack_2f8;
          if ((long ******)ppppplStack_2f8 != (long ******)0x0) {
            pppppplVar20 = (long ******)(ppppplStack_2f8 + 1);
            do {
              ppppplVar35 = *pppppplVar20;
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
              if (bVar12) {
                *pppppplVar20 = (long *****)((long)ppppplVar35 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (ppppplVar35 == (long *****)0x0) {
              (*(code *)(*ppppplStack_2f8)[2])(ppppplStack_2f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar37);
            }
          }
          if ((long)uStack_2e0 < 0) {
            __ZdlPv(ppppppuStack_2f0);
          }
          if (cStack_2c1 < '\0') {
            __ZdlPv(pppppplStack_2d8);
          }
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 < (int)param_3[1]);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a882820(param_1,pppppplStack_2a8,pppplStack_2a0,
                (long)pppplStack_2a0 - (long)pppppplStack_2a8 >> 4);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a8828c4();
LAB_10a87c5c4:
  func_0x00010a8829b0(&pppppplStack_2c0);
  FUN_10a87f1e0(&pppppplStack_2a8);
  ppppplVar37 = ppppplStack_288;
  if ((long ******)ppppplStack_288 != (long ******)0x0) {
    pppppplVar20 = (long ******)(ppppplStack_288 + 1);
    do {
      ppppplVar35 = *pppppplVar20;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
      if (bVar12) {
        *pppppplVar20 = (long *****)((long)ppppplVar35 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppppplVar35 == (long *****)0x0) {
      (*(code *)(*ppppplStack_288)[2])(ppppplStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar37);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a87c674:
  FUN_10a882968();
LAB_10a87c678:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a87c67c);
  (*pcVar11)();
}



/* Entry: 10a87b7b0; end: 10a87c7eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a87bbcc) */

void FUN_10a87b7b0(undefined8 *param_1,long *******param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 *******pppppppuVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long ***ppplVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  long ******pppppplVar14;
  long *******ppppppplVar15;
  long lVar16;
  undefined **ppuVar17;
  int iVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long ******pppppplVar21;
  long ***ppplVar22;
  long *******ppppppplVar23;
  long *****ppppplVar24;
  ulong uVar25;
  long *****ppppplVar26;
  long *******ppppppplVar27;
  long ****pppplVar28;
  long lVar29;
  long ****pppplVar30;
  long *****ppppplVar31;
  long *******ppppppplVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long *plVar35;
  long *****ppppplVar36;
  long lVar37;
  long *******ppppppplVar38;
  long *******ppppppplVar39;
  long *****ppppplVar40;
  long *****ppppplStack_2c0;
  long *****ppppplStack_2b8;
  undefined8 ******ppppppuStack_2b0;
  long ****pppplStack_2a8;
  ulong uStack_2a0;
  long ******pppppplStack_298;
  long *****ppppplStack_290;
  undefined7 uStack_288;
  char cStack_281;
  long ******pppppplStack_280;
  long ****pppplStack_278;
  long ****pppplStack_270;
  long ******pppppplStack_268;
  long ****pppplStack_260;
  long ****pppplStack_258;
  long *****ppppplStack_250;
  long *****ppppplStack_248;
  long ******pppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  long ****pppplStack_228;
  long ******pppppplStack_220;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_248 = (long *****)param_2[0xaf];
  ppppplStack_250 = (long *****)param_2[0xae];
  if (param_2[0xaf] != (long ******)0x0) {
    pppppplVar21 = param_2[0xaf] + 1;
    do {
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar12) {
        *pppppplVar21 = (long *****)((long)*pppppplVar21 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  pppppplStack_268 = (long ******)0x0;
  pppplStack_260 = (long ****)0x0;
  pppplStack_258 = (long ****)0x0;
  pppppplStack_280 = (long ******)0x0;
  pppplStack_278 = (long ****)0x0;
  pppplStack_270 = (long ****)0x0;
  lVar16 = (long)(int)param_3[1];
  if ((int)param_3[1] != 0) {
    func_0x00010a87aa5c(&pppppplStack_268);
    pppplVar28 = pppplStack_278;
    pppppplVar21 = pppppplStack_280;
    iVar18 = (int)param_3[1];
    uVar13 = (ulong)iVar18;
    if ((ulong)((long)pppplStack_270 - (long)pppppplStack_280 >> 4) < uVar13) {
      if (iVar18 < 0) goto LAB_10a87c674;
      pppppplStack_220 = (long ******)&pppppplStack_280;
      FUN_10a88297c();
      ppppplVar36 = (long *****)((long)pppplVar28 + (uVar13 - (long)pppppplVar21));
      ppppppplVar32 =
           (long *******)((long)ppppplVar36 - ((long)pppplStack_278 - (long)pppppplStack_280));
      _memcpy(ppppppplVar32);
      pppppplStack_230 = pppppplStack_280;
      pppplStack_228 = pppplStack_270;
      pppppplStack_240 = pppppplStack_280;
      pppppplStack_238 = pppppplStack_280;
      pppppplStack_280 = (long ******)ppppppplVar32;
      pppplStack_278 = (long ****)ppppplVar36;
      pppplStack_270 = (long ****)(uVar13 + lVar16 * 0x10);
      func_0x00010a882a0c(&pppppplStack_240);
      iVar18 = (int)param_3[1];
    }
    if (0 < iVar18) {
      lVar16 = 0;
      do {
        if (*(int *)param_2[0x3d] == 4) {
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[1] = 0;
          *param_1 = 0;
          goto LAB_10a87c5c4;
        }
        plVar35 = (long *)(*param_3 + lVar16 * 0x40);
        if (*plVar35 == 0) {
          ppuVar17 = &PTR_PTR_113303ee0;
          FUN_10ae079a0(0,&PTR_PTR_113303ee0);
          FUN_10ae07cd4(ppuVar17,&PTR_PTR_113303ee0);
        }
        else {
          lVar37 = plVar35[1];
          uVar3 = *(uint *)(plVar35 + 2);
          ppppppplVar32 = (long *******)(ulong)uVar3;
          lVar9 = plVar35[4];
          ppplVar22 = (long ***)plVar35[5];
          lVar29 = plVar35[6];
          bVar4 = *(byte *)(plVar35 + 7);
          bVar5 = *(byte *)((long)plVar35 + 0x39);
          func_0x000107c2b054(&pppppplStack_298);
          ppppppuStack_2b0 = (undefined8 *******)0x0;
          pppplStack_2a8 = (long ****)0x0;
          uStack_2a0 = 0;
          if (lVar29 != 0) {
            func_0x000107c2c4dc(&ppppppuStack_2b0,lVar29);
          }
          ppppplVar36 = (long *****)pppplStack_2a8;
          if (-1 < (long)uStack_2a0) {
            ppppplVar36 = (long *****)(uStack_2a0 >> 0x38);
          }
          if (ppppplVar36 == (long *****)0x0) {
            bVar12 = false;
          }
          else {
            pppppplVar21 = param_2[0x46];
            bVar6 = *(byte *)((long)pppppplVar21 + 0x47);
            ppppplVar34 = pppppplVar21[7];
            if (-1 < (char)bVar6) {
              ppppplVar34 = (long *****)(ulong)bVar6;
            }
            if (ppppplVar34 == ppppplVar36) {
              pppppplVar14 = (long ******)pppppplVar21[6];
              if (-1 < (char)bVar6) {
                pppppplVar14 = pppppplVar21 + 6;
              }
              pppppppuVar2 = (undefined8 *******)ppppppuStack_2b0;
              if (-1 < (long)uStack_2a0) {
                pppppppuVar2 = &ppppppuStack_2b0;
              }
              _memcmp(pppppplVar14,pppppppuVar2);
              bVar12 = (int)pppppplVar14 != 0;
            }
            else {
              bVar12 = true;
            }
          }
          ppppplVar36 = ppppplStack_250;
          ppppplVar34 = (long *****)ppppplStack_250[1];
          ppppppplVar39 = (long *******)*ppppplStack_250;
          if ((long *****)ppppplStack_250[1] != (long *****)0x0) {
            ppppplVar26 = (long *****)(ppppplStack_250[1] + 2);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          pppppplStack_240 = (long ******)FUN_10a8aaba8;
          pppppplStack_238 = (long ******)&PTR_FUN_110c25240;
          ppppplVar40 = (long *****)ppppplVar36[1];
          ppppplVar26 = (long *****)*ppppplVar36;
          pppppplStack_230 = (long ******)ppppppplVar39;
          pppplStack_228 = (long ****)ppppplVar34;
          if ((long *****)ppppplVar36[1] != (long *****)0x0) {
            ppppplVar34 = (long *****)(ppppplVar36[1] + 2);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
              if (bVar8) {
                *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
              if (bVar8) {
                *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          ppplStack_b8 = (long ***)FUN_10a8ab538;
          ppplStack_b0 = (long ***)&PTR_FUN_110c25260;
          ppppplVar34 = (long *****)ppppplVar36[1];
          ppppplVar33 = (long *****)ppppplVar36[1];
          ppppplVar31 = (long *****)*ppppplVar36;
          pppplStack_a8 = (long ****)ppppplVar26;
          pppplStack_a0 = (long ****)ppppplVar40;
          if (ppppplVar34 != (long *****)0x0) {
            ppppplVar26 = ppppplVar34 + 2;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppplVar26,0x10);
              if (bVar8) {
                *ppppplVar26 = (long ****)((long)*ppppplVar26 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar34);
          }
          ppuStack_f8 = (undefined **)FUN_10a8ab820;
          ppuStack_f0 = &PTR_FUN_110c25280;
          pppppplVar14 = (long ******)0x158;
          pppplStack_e8 = (long ****)ppppplVar31;
          pppplStack_e0 = (long ****)ppppplVar33;
          __Znwm();
          pppppplVar14[1] = (long *****)0x0;
          pppppplVar14[2] = (long *****)0x0;
          pppppplVar21 = pppppplVar14 + 3;
          *pppppplVar14 = (long *****)&PTR_FUN_110be7500;
          FUN_10a5cce24(pppppplVar21,bVar12,&pppppplStack_240,&ppplStack_b8,&ppuStack_f8);
          ppppplStack_2c0 = (long *****)pppppplVar21;
          ppppplStack_2b8 = (long *****)pppppplVar14;
          FUN_10a4ba650(&ppppplStack_2c0,pppppplVar14 + 8,pppppplVar21);
          (*(code *)*ppuStack_f0)(&ppuStack_f0);
          (*(code *)*ppplStack_b0)(&ppplStack_b0);
          (*(code *)*pppppplStack_238)(&pppppplStack_238);
          if (0 < (int)uVar3) {
            plVar35 = (long *)(lVar37 + 0x10);
            ppppppplVar39 = ppppppplVar32;
            do {
              lVar29 = plVar35[-1];
              lVar37 = *plVar35;
              func_0x000107c2b054(&ppplStack_b8,plVar35[-2]);
              ppuStack_f8 = (undefined **)0x0;
              ppuStack_f0 = (undefined **)0x0;
              pppplStack_e8 = (long ****)0x0;
              FUN_10a105aa8(&ppuStack_f8,lVar29,lVar29 + lVar37,lVar37);
              FUN_10a0f6350(&pppppplStack_240,&ppuStack_f8);
              pppppplVar21 = (long ******)0x0;
              if ((long ******)ppppplStack_2c0 != (long ******)0x0) {
                pppppplVar21 = (long ******)(ppppplStack_2c0 + 3);
              }
              FUN_10a0ff770(&pppppplStack_240,pppppplVar21);
              func_0x00010a0f618c(&pppppplStack_240);
              if (ppuStack_f8 != (undefined **)0x0) {
                ppuStack_f0 = ppuStack_f8;
                __ZdlPv();
              }
              plVar35 = plVar35 + 3;
              ppppppplVar39 = (long *******)((long)ppppppplVar39 + -1);
              ppppppplVar32 = (long *******)0x0;
            } while (ppppppplVar39 != (long *******)0x0);
          }
          ppppppplVar39 = (long *******)(ppppplVar36 + 7);
          ppppppplVar20 = &pppppplStack_298;
          ppppppplVar15 = ppppppplVar39;
          func_0x000107c2b05c();
          ppppppplVar38 = (long *******)ppppplVar36[8];
          if (ppppppplVar38 != (long *******)0x0) {
            uVar13 = (long)ppppppplVar38 - 1;
            if (((ulong)ppppppplVar38 & uVar13) == 0) {
              ppppppplVar32 = (long *******)(uVar13 & (ulong)ppppppplVar15);
            }
            else {
              ppppppplVar32 = ppppppplVar15;
              if (ppppppplVar38 <= ppppppplVar15) {
                uVar25 = 0;
                if (ppppppplVar38 != (long *******)0x0) {
                  uVar25 = (ulong)ppppppplVar15 / (ulong)ppppppplVar38;
                }
                ppppppplVar32 = (long *******)((long)ppppppplVar15 - uVar25 * (long)ppppppplVar38);
              }
            }
            if ((*ppppppplVar39)[(long)ppppppplVar32] != (long *****)0x0) {
              for (pppplVar28 = *(*ppppppplVar39)[(long)ppppppplVar32]; pppplVar28 != (long ****)0x0
                  ; pppplVar28 = (long ****)*pppplVar28) {
                ppppppplVar19 = (long *******)pppplVar28[1];
                if (ppppppplVar19 == ppppppplVar15) {
                  ppppppplVar20 = (long *******)(pppplVar28 + 2);
                  ppppppplVar19 = ppppppplVar39;
                  func_0x000107c2b068(ppppppplVar39,ppppppplVar20,&pppppplStack_298);
                  if (((ulong)ppppppplVar19 & 1) != 0) goto LAB_10a87bf68;
                }
                else {
                  if (((ulong)ppppppplVar38 & uVar13) == 0) {
                    ppppppplVar19 = (long *******)((ulong)ppppppplVar19 & uVar13);
                  }
                  else if (ppppppplVar38 <= ppppppplVar19) {
                    uVar25 = 0;
                    if (ppppppplVar38 != (long *******)0x0) {
                      uVar25 = (ulong)ppppppplVar19 / (ulong)ppppppplVar38;
                    }
                    ppppppplVar19 =
                         (long *******)((long)ppppppplVar19 - uVar25 * (long)ppppppplVar38);
                  }
                  if (ppppppplVar19 != ppppppplVar32) break;
                }
              }
            }
          }
          ppppppplVar19 = (long *******)0x38;
          __Znwm();
          pppppplStack_230 = (long ******)0x0;
          *ppppppplVar19 = (long ******)0x0;
          ppppppplVar19[1] = (long ******)ppppppplVar15;
          pppppplStack_240 = (long ******)ppppppplVar19;
          pppppplStack_238 = (long ******)ppppppplVar39;
          if (cStack_281 < '\0') {
            ppppppplVar20 = (long *******)pppppplStack_298;
            func_0x000107c3192c(ppppppplVar19 + 2,pppppplStack_298,ppppplStack_290);
          }
          else {
            ppppppplVar19[3] = (long ******)ppppplStack_290;
            ppppppplVar19[2] = pppppplStack_298;
            ppppppplVar19[4] = (long ******)CONCAT17(cStack_281,uStack_288);
          }
          ppppppplVar19[6] = (long ******)ppppplStack_2b8;
          ppppppplVar19[5] = (long ******)ppppplStack_2c0;
          if ((long ******)ppppplStack_2b8 != (long ******)0x0) {
            pppppplVar21 = (long ******)(ppppplStack_2b8 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
              if (bVar12) {
                *pppppplVar21 = (long *****)((long)*pppppplVar21 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          pppppplStack_230 = (long ******)CONCAT71(pppppplStack_230._1_7_,1);
          if ((ppppppplVar38 == (long *******)0x0) ||
             (*(float *)(ppppplVar36 + 0xb) * (float)ppppppplVar38 <
              (float)((long)ppppplVar36[10] + 1))) {
            uVar13 = 1;
            if ((long *******)0x2 < ppppppplVar38) {
              uVar13 = (ulong)(((ulong)ppppppplVar38 & (long)ppppppplVar38 - 1U) != 0);
            }
            ppppppplVar32 = (long *******)(uVar13 | (long)ppppppplVar38 << 1);
            ppppppplVar38 =
                 (long *******)
                 (long)((float)((long)ppppplVar36[10] + 1) / *(float *)(ppppplVar36 + 0xb));
            if (ppppppplVar32 <= ppppppplVar38) {
              ppppppplVar32 = ppppppplVar38;
            }
            if ((long)ppppppplVar32 - 1U == 0) {
              ppppppplVar32 = (long *******)0x2;
            }
            else if (((ulong)ppppppplVar32 & (long)ppppppplVar32 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            ppppppplVar38 = (long *******)ppppplVar36[8];
            if (ppppppplVar38 < ppppppplVar32) {
LAB_10a87bd7c:
              if ((ulong)ppppppplVar32 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a87c678;
              }
              pppppplVar21 = (long ******)((long)ppppppplVar32 << 3);
              __Znwm();
              pppppplVar14 = *ppppppplVar39;
              *ppppppplVar39 = pppppplVar21;
              if (pppppplVar14 != (long ******)0x0) {
                __ZdlPv();
              }
              ppppppplVar38 = (long *******)0x0;
              ppppplVar36[8] = (long ****)ppppppplVar32;
              do {
                (*ppppppplVar39)[(long)ppppppplVar38] = (long *****)0x0;
                ppppppplVar38 = (long *******)((long)ppppppplVar38 + 1);
              } while (ppppppplVar32 != ppppppplVar38);
              ppppplVar34 = (long *****)ppppplVar36[9];
              ppppppplVar38 = ppppppplVar32;
              if (ppppplVar34 != (long *****)0x0) {
                ppppppplVar23 = (long *******)ppppplVar34[1];
                uVar13 = (long)ppppppplVar32 - 1;
                if (((ulong)ppppppplVar32 & uVar13) == 0) {
                  ppppppplVar23 = (long *******)((ulong)ppppppplVar23 & uVar13);
                }
                else if (ppppppplVar32 <= ppppppplVar23) {
                  uVar25 = 0;
                  if (ppppppplVar32 != (long *******)0x0) {
                    uVar25 = (ulong)ppppppplVar23 / (ulong)ppppppplVar32;
                  }
                  ppppppplVar23 = (long *******)((long)ppppppplVar23 - uVar25 * (long)ppppppplVar32)
                  ;
                }
                (*ppppppplVar39)[(long)ppppppplVar23] = ppppplVar36 + 9;
                ppppplVar26 = (long *****)*ppppplVar34;
                while (ppppplVar26 != (long *****)0x0) {
                  ppppppplVar27 = (long *******)ppppplVar26[1];
                  if (((ulong)ppppppplVar32 & uVar13) == 0) {
                    ppppppplVar27 = (long *******)((ulong)ppppppplVar27 & uVar13);
                  }
                  else if (ppppppplVar32 <= ppppppplVar27) {
                    uVar25 = 0;
                    if (ppppppplVar32 != (long *******)0x0) {
                      uVar25 = (ulong)ppppppplVar27 / (ulong)ppppppplVar32;
                    }
                    ppppppplVar27 =
                         (long *******)((long)ppppppplVar27 - uVar25 * (long)ppppppplVar32);
                  }
                  ppppplVar40 = ppppplVar26;
                  if (ppppppplVar27 != ppppppplVar23) {
                    pppppplVar21 = *ppppppplVar39;
                    if (pppppplVar21[(long)ppppppplVar27] == (long *****)0x0) {
                      pppppplVar21[(long)ppppppplVar27] = ppppplVar34;
                      ppppppplVar23 = ppppppplVar27;
                    }
                    else {
                      *ppppplVar34 = *ppppplVar26;
                      *ppppplVar26 = *pppppplVar21[(long)ppppppplVar27];
                      *pppppplVar21[(long)ppppppplVar27] = (long ****)ppppplVar26;
                      ppppplVar40 = ppppplVar34;
                    }
                  }
                  ppppplVar34 = ppppplVar40;
                  ppppplVar26 = (long *****)*ppppplVar40;
                }
              }
            }
            else if (ppppppplVar32 < ppppppplVar38) {
              ppppppplVar23 =
                   (long *******)(long)((float)ppppplVar36[10] / *(float *)(ppppplVar36 + 0xb));
              if ((ppppppplVar38 < (long *******)0x3) ||
                 (((ulong)ppppppplVar38 & (long)ppppppplVar38 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *******)0x1 < ppppppplVar23) {
                ppppppplVar23 = (long *******)(1L << (-LZCOUNT((long)ppppppplVar23 + -1) & 0x3fU));
              }
              if (ppppppplVar32 <= ppppppplVar23) {
                ppppppplVar32 = ppppppplVar23;
              }
              if (ppppppplVar32 < ppppppplVar38) {
                if (ppppppplVar32 != (long *******)0x0) goto LAB_10a87bd7c;
                pppppplVar21 = *ppppppplVar39;
                *ppppppplVar39 = (long ******)0x0;
                if (pppppplVar21 != (long ******)0x0) {
                  __ZdlPv();
                }
                ppppplVar36[8] = (long ****)0x0;
                ppppppplVar38 = (long *******)0x0;
              }
              else {
                ppppppplVar38 = (long *******)ppppplVar36[8];
              }
            }
            if (((ulong)ppppppplVar38 & (long)ppppppplVar38 - 1U) == 0) {
              ppppppplVar32 = (long *******)((long)ppppppplVar38 - 1U & (ulong)ppppppplVar15);
            }
            else {
              ppppppplVar32 = ppppppplVar15;
              if (ppppppplVar38 <= ppppppplVar15) {
                uVar13 = 0;
                if (ppppppplVar38 != (long *******)0x0) {
                  uVar13 = (ulong)ppppppplVar15 / (ulong)ppppppplVar38;
                }
                ppppppplVar32 = (long *******)((long)ppppppplVar15 - uVar13 * (long)ppppppplVar38);
              }
            }
          }
          pppppplVar21 = *ppppppplVar39;
          ppppplVar34 = pppppplVar21[(long)ppppppplVar32];
          if (ppppplVar34 == (long *****)0x0) {
            pppppplVar14 = (long ******)(ppppplVar36 + 9);
            *ppppppplVar19 = (long ******)*pppppplVar14;
            *pppppplVar14 = (long *****)ppppppplVar19;
            pppppplVar21[(long)ppppppplVar32] = (long *****)pppppplVar14;
            if (*ppppppplVar19 != (long ******)0x0) {
              ppppppplVar32 = (long *******)(*ppppppplVar19)[1];
              if (((ulong)ppppppplVar38 & (long)ppppppplVar38 - 1U) == 0) {
                ppppppplVar32 = (long *******)((ulong)ppppppplVar32 & (long)ppppppplVar38 - 1U);
              }
              else if (ppppppplVar38 <= ppppppplVar32) {
                uVar13 = 0;
                if (ppppppplVar38 != (long *******)0x0) {
                  uVar13 = (ulong)ppppppplVar32 / (ulong)ppppppplVar38;
                }
                ppppppplVar32 = (long *******)((long)ppppppplVar32 - uVar13 * (long)ppppppplVar38);
              }
              (*ppppppplVar39)[(long)ppppppplVar32] = (long *****)ppppppplVar19;
            }
          }
          else {
            *ppppppplVar19 = (long ******)*ppppplVar34;
            *ppppplVar34 = (long ****)ppppppplVar19;
          }
          ppppplVar36[10] = (long ****)((long)ppppplVar36[10] + 1);
LAB_10a87bf68:
          if (pppplStack_260 < pppplStack_258) {
            pppplStack_260[1] = (long ***)ppppplStack_2b8;
            *pppplStack_260 = (long ***)ppppplStack_2c0;
            if ((long ******)ppppplStack_2b8 != (long ******)0x0) {
              pppppplVar21 = (long ******)(ppppplStack_2b8 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
                if (bVar12) {
                  *pppppplVar21 = (long *****)((long)*pppppplVar21 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            ppppplVar36 = (long *****)(pppplStack_260 + 2);
          }
          else {
            lVar29 = (long)pppplStack_260 - (long)pppppplStack_268;
            uVar13 = (lVar29 >> 4) + 1;
            if (uVar13 >> 0x3c != 0) {
              func_0x00010a8826ac();
              goto LAB_10a87c678;
            }
            uVar25 = (long)pppplStack_258 - (long)pppppplStack_268 >> 3;
            if (uVar25 <= uVar13) {
              uVar25 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppplStack_258 - (long)pppppplStack_268)) {
              uVar25 = 0xfffffffffffffff;
            }
            pppppplStack_220 = (long ******)&pppppplStack_268;
            FUN_10a8826c0();
            plVar35 = (long *)(uVar25 + lVar29);
            plVar35[1] = (long)ppppplStack_2b8;
            *plVar35 = (long)ppppplStack_2c0;
            if ((long ******)ppppplStack_2b8 != (long ******)0x0) {
              pppppplVar21 = (long ******)(ppppplStack_2b8 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
                if (bVar12) {
                  *pppppplVar21 = (long *****)((long)*pppppplVar21 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            lVar29 = (long)ppppppplVar20 * 0x10;
            ppppplVar36 = (long *****)(plVar35 + 2);
            ppppppplVar32 =
                 (long *******)((long)plVar35 - ((long)pppplStack_260 - (long)pppppplStack_268));
            ppppppplVar20 = (long *******)pppppplStack_268;
            _memcpy(ppppppplVar32);
            pppppplStack_230 = pppppplStack_268;
            pppplStack_228 = pppplStack_258;
            pppppplStack_240 = pppppplStack_268;
            pppppplStack_238 = pppppplStack_268;
            pppppplStack_268 = (long ******)ppppppplVar32;
            pppplStack_260 = (long ****)ppppplVar36;
            pppplStack_258 = (long ****)(uVar25 + lVar29);
            func_0x00010a8826f4(&pppppplStack_240);
          }
          ppppplVar34 = (long *****)pppplStack_2a8;
          if (-1 < (long)uStack_2a0) {
            ppppplVar34 = (long *****)(uStack_2a0 >> 0x38);
          }
          uVar1 = 2;
          if ((bVar5 & 1) == 0) {
            uVar1 = ppppplVar34 == (long *****)0x0;
          }
          pppplStack_260 = (long ****)ppppplVar36;
          if (ppppplVar34 == (long *****)0x0) {
            ppppppplVar32 = (long *******)0xd0;
            __Znwm();
            ppppppplVar32[1] = (long ******)0x0;
            ppppppplVar32[2] = (long ******)0x0;
            *ppppppplVar32 = (long ******)&PTR_FUN_110bf8238;
            ppppppplVar32[0x17] = (long ******)0x0;
            ppppppplVar32[0x16] = (long ******)0x0;
            ppppppplVar32[0x19] = (long ******)0x0;
            ppppppplVar32[0x18] = (long ******)0x0;
            pppppplStack_240 = (long ******)(ppppppplVar32 + 3);
            *pppppplStack_240 = (long *****)&PTR_FUN_110c25680;
            ppppppplVar32[9] = (long ******)0x0;
            ppppppplVar32[8] = (long ******)0x0;
            ppppppplVar32[0xb] = (long ******)0x0;
            ppppppplVar32[10] = (long ******)0x0;
            ppppppplVar32[0xd] = (long ******)0x0;
            ppppppplVar32[0xc] = (long ******)0x0;
            ppppppplVar32[0xf] = (long ******)0x0;
            ppppppplVar32[0xe] = (long ******)0x0;
            ppppppplVar32[5] = (long ******)0x0;
            ppppppplVar32[4] = (long ******)0x0;
            ppppppplVar32[7] = (long ******)0x0;
            ppppppplVar32[6] = (long ******)0x0;
            ppppppplVar32[0xe] = (long ******)0x0;
            ppppppplVar32[0xf] = (long ******)0xffffffffffffffff;
            ppppppplVar32[0x13] = (long ******)0x0;
            ppppppplVar32[0x12] = (long ******)0x0;
            ppppppplVar32[0x15] = (long ******)0x0;
            ppppppplVar32[0x14] = (long ******)0x0;
            ppppppplVar32[0x11] = (long ******)0x0;
            ppppppplVar32[0x10] = (long ******)0x0;
            *(undefined1 *)(ppppppplVar32 + 0x16) = 0;
            pppppplStack_238 = (long ******)ppppppplVar32;
          }
          else {
            ppppppplVar20 = param_2;
            FUN_10a87a708(&pppppplStack_240,param_2,&ppppppuStack_2b0);
          }
          ppppplVar36 = (long *****)param_3[2];
          pppplVar28 = (long ****)0x70;
          __Znwm();
          pppplVar28[1] = (long ***)0x0;
          pppplVar28[2] = (long ***)0x0;
          pppplVar30 = pppplVar28 + 3;
          *pppplVar30 = (long ***)&PTR_DAT_110c23c10;
          *pppplVar28 = (long ***)&PTR_FUN_110c252b0;
          pppplVar28[4] = (long ***)0x0;
          pppplVar28[5] = (long ***)0x0;
          if (cStack_281 < '\0') {
            ppppppplVar20 = (long *******)pppppplStack_298;
            func_0x000107c3192c(pppplVar28 + 6,pppppplStack_298,ppppplStack_290);
          }
          else {
            pppplVar28[7] = (long ***)ppppplStack_290;
            pppplVar28[6] = (long ***)pppppplStack_298;
            pppplVar28[8] = (long ***)CONCAT17(cStack_281,uStack_288);
          }
          pppppplVar21 = pppppplStack_238;
          *(int *)(pppplVar28 + 9) = (int)lVar9;
          *(byte *)((long)pppplVar28 + 0x4c) = bVar4 & 1;
          *(undefined1 *)((long)pppplVar28 + 0x4d) = uVar1;
          pppplVar28[10] = ppplVar22;
          pppplVar28[0xb] = (long ***)ppppplVar36;
          pppplVar28[0xd] = (long ***)pppppplStack_238;
          pppplVar28[0xc] = (long ***)pppppplStack_240;
          ppplStack_b8 = (long ***)pppplVar30;
          ppplStack_b0 = (long ***)pppplVar28;
          if ((long *******)pppppplStack_238 != (long *******)0x0) {
            ppppppplVar32 = (long *******)(pppppplStack_238 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar32,0x10);
              if (bVar12) {
                *ppppppplVar32 = (long ******)((long)*ppppppplVar32 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              pppppplVar14 = *ppppppplVar32;
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar32,0x10);
              if (bVar12) {
                *ppppppplVar32 = (long ******)((long)pppppplVar14 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppppplVar14 == (long ******)0x0) {
              (*(code *)(*pppppplStack_238)[2])(pppppplStack_238);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
            }
          }
          ppplVar10 = ppplStack_b0;
          ppplVar22 = ppplStack_b8;
          ppppplVar40 = ppppplStack_250;
          ppppplVar26 = ppppplStack_2b8;
          ppppplVar34 = ppppplStack_2c0;
          uVar13 = ((ulong)(uint)((int)ppppplStack_2c0 << 3) + 8 ^ (ulong)ppppplStack_2c0 >> 0x20) *
                   -0x622015f714c7d297;
          uVar13 = ((ulong)ppppplStack_2c0 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
          ppppplVar33 = (long *****)((uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297);
          ppppplVar31 = (long *****)ppppplStack_250[0xd];
          if (ppppplVar31 != (long *****)0x0) {
            uVar13 = (long)ppppplVar31 - 1;
            if (((ulong)ppppplVar31 & uVar13) == 0) {
              ppppplVar36 = (long *****)((ulong)ppppplVar33 & uVar13);
            }
            else {
              ppppplVar36 = ppppplVar33;
              if (ppppplVar31 <= ppppplVar33) {
                uVar25 = 0;
                if (ppppplVar31 != (long *****)0x0) {
                  uVar25 = (ulong)ppppplVar33 / (ulong)ppppplVar31;
                }
                ppppplVar36 = (long *****)((long)ppppplVar33 - uVar25 * (long)ppppplVar31);
              }
            }
            pppplVar28 = (long ****)ppppplStack_250[0xc][(long)ppppplVar36];
            if (pppplVar28 != (long ****)0x0) {
              do {
                while( true ) {
                  pppplVar28 = (long ****)*pppplVar28;
                  if (pppplVar28 == (long ****)0x0) goto LAB_10a87c28c;
                  ppppplVar24 = (long *****)pppplVar28[1];
                  if (ppppplVar24 != ppppplVar33) break;
                  if ((long *****)pppplVar28[2] == ppppplStack_2c0) goto LAB_10a87c3d4;
                }
                if (((ulong)ppppplVar31 & uVar13) == 0) {
                  ppppplVar24 = (long *****)((ulong)ppppplVar24 & uVar13);
                }
                else if (ppppplVar31 <= ppppplVar24) {
                  uVar25 = 0;
                  if (ppppplVar31 != (long *****)0x0) {
                    uVar25 = (ulong)ppppplVar24 / (ulong)ppppplVar31;
                  }
                  ppppplVar24 = (long *****)((long)ppppplVar24 - uVar25 * (long)ppppplVar31);
                }
              } while (ppppplVar24 == ppppplVar36);
            }
          }
LAB_10a87c28c:
          ppppplVar24 = (long *****)0x30;
          __Znwm();
          *ppppplVar24 = (long ****)0x0;
          ppppplVar24[1] = (long ****)ppppplVar33;
          ppppplVar24[2] = (long ****)ppppplVar34;
          ppppplVar24[3] = (long ****)ppppplVar26;
          if ((long ******)ppppplVar26 != (long ******)0x0) {
            pppppplVar21 = (long ******)(ppppplVar26 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
              if (bVar12) {
                *pppppplVar21 = (long *****)((long)*pppppplVar21 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          ppppplVar24[4] = (long ****)ppplVar22;
          ppppplVar24[5] = (long ****)ppplVar10;
          if ((long ****)ppplVar10 != (long ****)0x0) {
            pppplVar28 = (long ****)(ppplVar10 + 1);
            do {
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
              if (bVar12) {
                *pppplVar28 = (long ***)((long)*pppplVar28 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if ((ppppplVar31 == (long *****)0x0) ||
             (*(float *)(ppppplVar40 + 0x10) * (float)ppppplVar31 <
              (float)((long)ppppplVar40[0xf] + 1))) {
            uVar13 = 1;
            if ((long *****)0x2 < ppppplVar31) {
              uVar13 = (ulong)(((ulong)ppppplVar31 & (long)ppppplVar31 - 1U) != 0);
            }
            ppppppplVar20 = (long *******)(uVar13 | (long)ppppplVar31 << 1);
            ppppppplVar32 =
                 (long *******)
                 (long)((float)((long)ppppplVar40[0xf] + 1) / *(float *)(ppppplVar40 + 0x10));
            if (ppppppplVar20 <= ppppppplVar32) {
              ppppppplVar20 = ppppppplVar32;
            }
            FUN_10a8abcec(ppppplVar40 + 0xc);
            ppppplVar31 = (long *****)ppppplVar40[0xd];
            if (((ulong)ppppplVar31 & (long)ppppplVar31 - 1U) == 0) {
              ppppplVar36 = (long *****)((long)ppppplVar31 - 1U & (ulong)ppppplVar33);
            }
            else {
              ppppplVar36 = ppppplVar33;
              if (ppppplVar31 <= ppppplVar33) {
                uVar13 = 0;
                if (ppppplVar31 != (long *****)0x0) {
                  uVar13 = (ulong)ppppplVar33 / (ulong)ppppplVar31;
                }
                ppppplVar36 = (long *****)((long)ppppplVar33 - uVar13 * (long)ppppplVar31);
              }
            }
          }
          ppppplVar34 = (long *****)ppppplVar40[0xc];
          pppplVar28 = ppppplVar34[(long)ppppplVar36];
          if (pppplVar28 == (long ****)0x0) {
            pppppplVar21 = (long ******)(ppppplVar40 + 0xe);
            *ppppplVar24 = (long ****)*pppppplVar21;
            *pppppplVar21 = ppppplVar24;
            ppppplVar34[(long)ppppplVar36] = (long ****)pppppplVar21;
            if (*ppppplVar24 != (long ****)0x0) {
              ppppplVar36 = (long *****)(*ppppplVar24)[1];
              if (((ulong)ppppplVar31 & (long)ppppplVar31 - 1U) == 0) {
                ppppplVar36 = (long *****)((ulong)ppppplVar36 & (long)ppppplVar31 - 1U);
              }
              else if (ppppplVar31 <= ppppplVar36) {
                uVar13 = 0;
                if (ppppplVar31 != (long *****)0x0) {
                  uVar13 = (ulong)ppppplVar36 / (ulong)ppppplVar31;
                }
                ppppplVar36 = (long *****)((long)ppppplVar36 - uVar13 * (long)ppppplVar31);
              }
              ppppplVar40[0xc][(long)ppppplVar36] = (long ***)ppppplVar24;
            }
          }
          else {
            *ppppplVar24 = (long ****)*pppplVar28;
            *pppplVar28 = (long ***)ppppplVar24;
          }
          ppppplVar40[0xf] = (long ****)((long)ppppplVar40[0xf] + 1);
LAB_10a87c3d4:
          if (pppplStack_278 < pppplStack_270) {
            *pppplStack_278 = ppplVar22;
            pppplStack_278[1] = ppplVar10;
            if ((long ****)ppplVar10 != (long ****)0x0) {
              pppplVar28 = (long ****)(ppplVar10 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
                if (bVar12) {
                  *pppplVar28 = (long ***)((long)*pppplVar28 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            ppppplVar36 = (long *****)(pppplStack_278 + 2);
          }
          else {
            lVar29 = (long)pppplStack_278 - (long)pppppplStack_280;
            uVar13 = (lVar29 >> 4) + 1;
            if (uVar13 >> 0x3c != 0) {
              FUN_10a882968();
              goto LAB_10a87c678;
            }
            uVar25 = (long)pppplStack_270 - (long)pppppplStack_280 >> 3;
            if (uVar25 <= uVar13) {
              uVar25 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppplStack_270 - (long)pppppplStack_280)) {
              uVar25 = 0xfffffffffffffff;
            }
            pppppplStack_220 = (long ******)&pppppplStack_280;
            FUN_10a88297c();
            plVar35 = (long *)(uVar25 + lVar29);
            *plVar35 = (long)ppplVar22;
            plVar35[1] = (long)ppplVar10;
            if ((long ****)ppplVar10 != (long ****)0x0) {
              pppplVar28 = (long ****)(ppplVar10 + 1);
              do {
                cVar7 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
                if (bVar12) {
                  *pppplVar28 = (long ***)((long)*pppplVar28 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            ppppplVar36 = (long *****)(plVar35 + 2);
            ppppppplVar32 =
                 (long *******)((long)plVar35 - ((long)pppplStack_278 - (long)pppppplStack_280));
            _memcpy(ppppppplVar32);
            pppppplStack_230 = pppppplStack_280;
            pppplStack_228 = pppplStack_270;
            pppppplStack_240 = pppppplStack_280;
            pppppplStack_238 = pppppplStack_280;
            pppppplStack_280 = (long ******)ppppppplVar32;
            pppplStack_278 = (long ****)ppppplVar36;
            pppplStack_270 = (long ****)(uVar25 + (long)ppppppplVar20 * 0x10);
            func_0x00010a882a0c(&pppppplStack_240);
          }
          pppplStack_278 = (long ****)ppppplVar36;
          if ((long ****)ppplVar10 != (long ****)0x0) {
            pppplVar28 = (long ****)(ppplVar10 + 1);
            do {
              ppplVar22 = *pppplVar28;
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar28,0x10);
              if (bVar12) {
                *pppplVar28 = (long ***)((long)ppplVar22 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (ppplVar22 == (long ***)0x0) {
              (*(code *)(*ppplVar10)[2])(ppplVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar10);
            }
          }
          ppppplVar36 = ppppplStack_2b8;
          if ((long ******)ppppplStack_2b8 != (long ******)0x0) {
            pppppplVar21 = (long ******)(ppppplStack_2b8 + 1);
            do {
              ppppplVar34 = *pppppplVar21;
              cVar7 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
              if (bVar12) {
                *pppppplVar21 = (long *****)((long)ppppplVar34 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (ppppplVar34 == (long *****)0x0) {
              (*(code *)(*ppppplStack_2b8)[2])(ppppplStack_2b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
            }
          }
          if ((long)uStack_2a0 < 0) {
            __ZdlPv(ppppppuStack_2b0);
          }
          if (cStack_281 < '\0') {
            __ZdlPv(pppppplStack_298);
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)param_3[1]);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a882820(param_1,pppppplStack_268,pppplStack_260,
                (long)pppplStack_260 - (long)pppppplStack_268 >> 4);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a8828c4();
LAB_10a87c5c4:
  func_0x00010a8829b0(&pppppplStack_280);
  FUN_10a87f1e0(&pppppplStack_268);
  ppppplVar36 = ppppplStack_248;
  if ((long ******)ppppplStack_248 != (long ******)0x0) {
    pppppplVar21 = (long ******)(ppppplStack_248 + 1);
    do {
      ppppplVar34 = *pppppplVar21;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pppppplVar21,0x10);
      if (bVar12) {
        *pppppplVar21 = (long *****)((long)ppppplVar34 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppppplVar34 == (long *****)0x0) {
      (*(code *)(*ppppplStack_248)[2])(ppppplStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a87c674:
  FUN_10a882968();
LAB_10a87c678:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a87c67c);
  (*pcVar11)();
}



/* Entry: 10a87c7ec; end: 10a87ca0f;  */

undefined *** FUN_10a87c7ec(undefined ***param_1,long *param_2,long *param_3)

{
  undefined ***pppuVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 *unaff_x23;
  code **unaff_x24;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined ***pppuStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  pppuVar8 = param_1;
  if (lVar3 - lVar2 != 0) {
    uVar10 = 0;
    unaff_x24 = &pcStack_a8;
    do {
      if ((ulong)(param_2[1] - *param_2 >> 4) <= uVar10) {
LAB_10a87c9cc:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a87c9d0);
        (*pcVar7)();
      }
      puVar6 = (undefined8 *)(*param_2 + uVar10 * 0x10);
      pppuStack_b8 = (undefined ***)puVar6[1];
      uStack_c0 = *puVar6;
      if (pppuStack_b8 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_b8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar5) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if ((ulong)(param_3[1] - *param_3 >> 4) <= uVar10) goto LAB_10a87c9cc;
      puVar6 = (undefined8 *)(*param_3 + uVar10 * 0x10);
      pppuVar11 = (undefined ***)puVar6[1];
      uStack_d0 = *puVar6;
      if (pppuVar11 != (undefined ***)0x0) {
        pppuVar8 = pppuVar11 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar5) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (pppuStack_b8 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_b8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar5) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (pppuVar11 != (undefined ***)0x0) {
        pppuVar8 = pppuVar11 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar5) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pcStack_a8 = FUN_10a8ac550;
      ppuStack_a0 = &PTR_FUN_110c25308;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      pppuStack_c8 = pppuVar11;
      uStack_98 = uStack_c0;
      pppuStack_90 = pppuStack_b8;
      uStack_88 = uStack_d0;
      pppuStack_80 = pppuVar11;
      FUN_10a860860(param_1,&pcStack_a8);
      pppuVar8 = &ppuStack_a0;
      (*(code *)*ppuStack_a0)();
      if (pppuVar11 != (undefined ***)0x0) {
        pppuVar1 = pppuVar11 + 1;
        do {
          ppuVar9 = *pppuVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar5) {
            *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar9 == (undefined **)0x0) {
          (*(code *)(*pppuVar11)[2])(pppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar11;
        }
      }
      pppuVar11 = pppuStack_b8;
      if (pppuStack_b8 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_b8 + 1;
        do {
          ppuVar9 = *pppuVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar5) {
            *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppuVar9 == (undefined **)0x0) {
          (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar8 = pppuVar11;
        }
      }
      uVar10 = uVar10 + 1;
      unaff_x23 = &uStack_f0;
    } while (uVar10 != lVar3 - lVar2 >> 4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a0)(unaff_x24 + 1);
  func_0x00010a8835b0((undefined1 *)((long)unaff_x23 + 0x10));
  FUN_10a297544(&uStack_f0);
  func_0x00010a8835b0(&uStack_d0);
  FUN_10a297544(&uStack_c0);
  __Unwind_Resume();
  FUN_10a8ad420(pppuVar8 + 5);
  FUN_10a297544(pppuVar8 + 3);
  if (*(char *)((long)pppuVar8 + 0x17) < '\0') {
    __ZdlPv(*pppuVar8);
  }
  return pppuVar8;
}



/* Entry: 10a87ca10; end: 10a87ca9f;  */

undefined8 * FUN_10a87ca10(undefined8 *param_1)

{
  FUN_10a8ad420(param_1 + 5);
  FUN_10a297544(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a87caa0; end: 10a87cb23;  */

undefined1  [16] FUN_10a87caa0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f65522f;
  return auVar1;
}



/* Entry: 10a87cb24; end: 10a87ce43;  */

void FUN_10a87cb24(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f65522f,0xe);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c24060;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c24060;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scope",FUN_10a8b14cc,FUN_10a8b1588);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f673026,FUN_10a8b1718,FUN_10a8b17d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f673037,FUN_10a8b1894,FUN_10a8b1974);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f65522f,0xe);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f65522f;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f67d9eb;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f67d9eb;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a87ce24;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a8b1a70,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a87ce24:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a87ce28);
  (*pcVar6)();
}



/* Entry: 10a87ce44; end: 10a87cfb3;  */

void FUN_10a87ce44(ulong param_1)

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
  puStack_a8 = &UNK_10f67f104;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_60 = 0x9400000094;
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
  puStack_a8 = &DAT_10f2ea6ee;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x9400000094;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87cfb4(param_1,&puStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f68525a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x9400000094;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87cfb4();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f674bb1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x9400000094;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a87cfb4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a87cfb4; end: 10a87d057;  */

undefined8 * FUN_10a87cfb4(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87d058);
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



/* Entry: 10a87d058; end: 10a87d1a7;  */

void FUN_10a87d058(ulong param_1)

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
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f111;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x9400000094;
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
  puStack_98 = &DAT_10f2ea6ee;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x9400000094;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a87d1a8(param_1,&puStack_98,1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f68525a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x9400000094;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a87d1a8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f674bb1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x9400000094;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a87d1a8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a87d1a8; end: 10a87d24b;  */

undefined8 * FUN_10a87d1a8(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a87d24c);
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



/* Entry: 10a87d24c; end: 10a87d2c3;  */

undefined1  [16] FUN_10a87d24c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f63f236;
  return auVar1;
}



/* Entry: 10a87d2c4; end: 10a87d65f;  */

void FUN_10a87d2c4(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  func_0x000109887da8(appuStack_c8,&UNK_10f63f236,9);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c240d0;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xbffffffff;
  uStack_88 = 0x4000000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x176;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c240d0;
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
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a8b1c40,0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67f13a,FUN_10a8b1da4,FUN_10a8b1e64);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67f14d,FUN_10a8b232c,FUN_10a8b23ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67f15e,FUN_10a8b24a4,FUN_10a8b2564);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"phase",FUN_10a8b261c,FUN_10a8b26d8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67f175,FUN_10a8b27bc,FUN_10a8b287c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67f17d,FUN_10a8b2934,FUN_10a8b29f0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63f236,9);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a87d644);
  (*pcVar6)();
}



/* Entry: 10a87d660; end: 10a87d77b;  */

void FUN_10a87d660(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f189;
  uStack_78 = 0xbffffffff;
  uStack_80 = 0x4000000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a87d77c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f18f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10a87d7d4(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67f19a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000179;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 2;
  FUN_10a87d7d4(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a87d77c; end: 10a87d7d3;  */

ulong FUN_10a87d77c(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a87d7d4; end: 10a87d82b;  */

ulong FUN_10a87d7d4(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a8b2ab0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a87d82c; end: 10a87d91b;  */

undefined1  [16] FUN_10a87d82c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &DAT_10f2f6ea2;
  return auVar1;
}



/* Entry: 10a87d91c; end: 10a87dc27;  */

void FUN_10a87d91c(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  func_0x000109887da8(appuStack_c8,&DAT_10f2f6ea2,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23b78;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23b78;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"userId",FUN_10a8b2b24,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f1a3,FUN_10a8b2c6c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"displayName",FUN_10a8b2d4c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f1b0,FUN_10a8b2e2c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"bitmojiAvatarId",FUN_10a8b2ee8,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f2f6ea2,8);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a87dc0c);
  (*pcVar6)();
}



/* Entry: 10a87dc28; end: 10a87debb;  */

void FUN_10a87dc28(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  func_0x000109887da8(appuStack_c8,&UNK_10f67f56c,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23be8;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23be8;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2d46e3,FUN_10a8b2fc8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f048,FUN_10a8b30e8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67f1cb,FUN_10a8b31a4,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f67f56c,0xe);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a87dea0);
  (*pcVar6)();
}



/* Entry: 10a87debc; end: 10a87debf;  */

undefined8 * FUN_10a87debc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c25680;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    __ZdlPv(param_1[0x13]);
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a87dec0; end: 10a87ded3;  */

void FUN_10a87dec0(void)

{
  func_0x00010a882a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a87ded4; end: 10a87e39b;  */

undefined8 * FUN_10a87ded4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c23ba0;
  FUN_10a87f1e0(param_1 + 6);
  func_0x00010a5c92ec(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a87e39c; end: 10a87e3a7;  */

long FUN_10a87e39c(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10a87e3a8; end: 10a87e51f;  */

undefined8 * FUN_10a87e3a8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110c23f38;
  func_0x00010a042b54(param_1 + 0x81);
  if (*(char *)((long)param_1 + 0x407) < '\0') {
    __ZdlPv(param_1[0x7e]);
  }
  func_0x00010a8933ec(param_1 + 0x7b);
  *param_1 = &PTR_DAT_110c25618;
  if (*(char *)((long)param_1 + 0x3d7) < '\0') {
    __ZdlPv(param_1[0x78]);
  }
  *param_1 = &PTR_FUN_110c23910;
  FUN_10a889908(param_1 + 0x76);
  if ((ulong)*(byte *)(param_1 + 0x75) < 3) {
    (*(code *)(&PTR_FUN_110c24578)[*(byte *)(param_1 + 0x75)])(param_1 + 0x73);
    if ((ulong)*(byte *)(param_1 + 0x71) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x71)])(param_1 + 0x69);
      func_0x00010a8838c8(param_1 + 0x67);
      func_0x00010a883870(param_1 + 0x65);
      func_0x00010a883818(param_1 + 99);
      func_0x00010a8837c0(param_1 + 0x61);
      func_0x00010a883768(param_1 + 0x5f);
      func_0x00010a883710(param_1 + 0x5d);
      func_0x00010a8836b8(param_1 + 0x5b);
      func_0x00010a8836b8(param_1 + 0x59);
      func_0x00010a883660(param_1 + 0x57);
      func_0x00010a883608(param_1 + 0x55);
      if ((ulong)*(byte *)(param_1 + 0x54) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x54)])(param_1 + 0x4c);
        if ((ulong)*(byte *)(param_1 + 0x4b) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x4b)])(param_1 + 0x43);
          if ((ulong)*(byte *)(param_1 + 0x42) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x42)])(param_1 + 0x3a);
            if ((ulong)*(byte *)(param_1 + 0x39) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x39)])(param_1 + 0x31);
              if ((ulong)*(byte *)(param_1 + 0x30) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x30)])(param_1 + 0x28);
                if ((ulong)*(byte *)(param_1 + 0x27) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x27)])(param_1 + 0x1f);
                  if ((ulong)*(byte *)(param_1 + 0x1e) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x1e)])(param_1 + 0x16);
                    if (*(char *)((long)param_1 + 0xa7) < '\0') {
                      __ZdlPv(param_1[0x12]);
                    }
                    if (*(char *)((long)param_1 + 0x8f) < '\0') {
                      __ZdlPv(param_1[0xf]);
                    }
                    if (*(char *)((long)param_1 + 0x77) < '\0') {
                      __ZdlPv(param_1[0xc]);
                    }
                    if (*(char *)((long)param_1 + 0x5f) < '\0') {
                      __ZdlPv(param_1[9]);
                    }
                    if (*(char *)((long)param_1 + 0x47) < '\0') {
                      __ZdlPv(param_1[6]);
                    }
                    if (*(char *)((long)param_1 + 0x2f) < '\0') {
                      __ZdlPv(param_1[3]);
                    }
                    *param_1 = &PTR_DAT_110b17898;
                    func_0x00010a004dac(param_1 + 1);
                    return param_1;
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a85dc70);
  (*pcVar1)();
}



/* Entry: 10a87e520; end: 10a87e533;  */

void FUN_10a87e520(void)

{
  FUN_10a87eb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a87e534; end: 10a87e75b;  */

undefined8 * FUN_10a87e534(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c23a80;
  param_1[3] = &PTR_DAT_110c23af0;
  param_1[7] = &PTR_DAT_110c23b18;
  param_1[8] = &PTR_DAT_110c23b40;
  func_0x00010a8a851c(param_1 + 0x15,param_1[0x16]);
  func_0x00010a5c92ec(param_1 + 0x12);
  func_0x00010a004e5c(param_1 + 0x10);
  puStack_28 = param_1 + 0xd;
  FUN_10a881e3c(&puStack_28);
  puStack_28 = param_1 + 10;
  FUN_10a881eac(&puStack_28);
  param_1[3] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a87e75c; end: 10a87e763;  */

void FUN_10a87e75c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110c23a80;
  *param_1 = &PTR_DAT_110c23af0;
  param_1[4] = &PTR_DAT_110c23b18;
  param_1[5] = &PTR_DAT_110c23b40;
  func_0x00010a8a851c(param_1 + 0x12,param_1[0x13]);
  func_0x00010a5c92ec(param_1 + 0xf);
  func_0x00010a004e5c(param_1 + 0xd);
  puStack_28 = param_1 + 10;
  FUN_10a881e3c(&puStack_28);
  puStack_28 = param_1 + 7;
  FUN_10a881eac(&puStack_28);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
  __ZdlPv(puVar1);
  return;
}



/* Entry: 10a87e764; end: 10a87e817;  */

void FUN_10a87e764(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110c23a80;
  param_1[-4] = &PTR_DAT_110c23af0;
  *param_1 = &PTR_DAT_110c23b18;
  param_1[1] = &PTR_DAT_110c23b40;
  func_0x00010a8a851c(param_1 + 0xe,param_1[0xf]);
  func_0x00010a5c92ec(param_1 + 0xb);
  func_0x00010a004e5c(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a881e3c(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_10a881eac(&puStack_28);
  param_1[-4] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[-1] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[-1] = 0;
  }
  func_0x00010a004e5c(param_1 + -3);
  param_1[-7] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -6);
  return;
}



/* Entry: 10a87e818; end: 10a87e81f;  */

void FUN_10a87e818(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c23a80;
  param_1[-4] = &PTR_DAT_110c23af0;
  *param_1 = &PTR_DAT_110c23b18;
  param_1[1] = &PTR_DAT_110c23b40;
  func_0x00010a8a851c(param_1 + 0xe,param_1[0xf]);
  func_0x00010a5c92ec(param_1 + 0xb);
  func_0x00010a004e5c(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a881e3c(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_10a881eac(&puStack_28);
  param_1[-4] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[-1] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[-1] = 0;
  }
  func_0x00010a004e5c(param_1 + -3);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -6);
  __ZdlPv(puVar1);
  return;
}



/* Entry: 10a87e820; end: 10a87e8d3;  */

void FUN_10a87e820(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-8] = &PTR_FUN_110c23a80;
  param_1[-5] = &PTR_DAT_110c23af0;
  param_1[-1] = &PTR_DAT_110c23b18;
  *param_1 = &PTR_DAT_110c23b40;
  func_0x00010a8a851c(param_1 + 0xd,param_1[0xe]);
  func_0x00010a5c92ec(param_1 + 10);
  func_0x00010a004e5c(param_1 + 8);
  puStack_28 = param_1 + 5;
  FUN_10a881e3c(&puStack_28);
  puStack_28 = param_1 + 2;
  FUN_10a881eac(&puStack_28);
  param_1[-5] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[-2] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[-2] = 0;
  }
  func_0x00010a004e5c(param_1 + -4);
  param_1[-8] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -7);
  return;
}



/* Entry: 10a87e8d4; end: 10a87e8db;  */

void FUN_10a87e8d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -8;
  *puVar1 = &PTR_FUN_110c23a80;
  param_1[-5] = &PTR_DAT_110c23af0;
  param_1[-1] = &PTR_DAT_110c23b18;
  *param_1 = &PTR_DAT_110c23b40;
  func_0x00010a8a851c(param_1 + 0xd,param_1[0xe]);
  func_0x00010a5c92ec(param_1 + 10);
  func_0x00010a004e5c(param_1 + 8);
  puStack_28 = param_1 + 5;
  FUN_10a881e3c(&puStack_28);
  puStack_28 = param_1 + 2;
  FUN_10a881eac(&puStack_28);
  param_1[-5] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[-2] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[-2] = 0;
  }
  func_0x00010a004e5c(param_1 + -4);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -7);
  __ZdlPv(puVar1);
  return;
}



/* Entry: 10a87e8dc; end: 10a87e98b;  */

undefined8 * FUN_10a87e8dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24000;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  FUN_10a297544(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a87e98c; end: 10a87e98f;  */

undefined8 * FUN_10a87e98c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c256d8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a87e990; end: 10a87e9a3;  */

void FUN_10a87e990(void)

{
  func_0x00010a883560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a87e9a4; end: 10a87ea6b;  */

undefined8 * FUN_10a87e9a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24088;
  func_0x00010a87edc4(param_1 + 0xd);
  func_0x00010a87edc4(param_1 + 9);
  func_0x00010a87edc4(param_1 + 6);
  func_0x00010a87edc4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a87ea6c; end: 10a87ead3;  */

void FUN_10a87ea6c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x68;
        FUN_10a87ead4(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a87ead4; end: 10a87eb2f;  */

void FUN_10a87ead4(undefined8 *param_1)

{
  FUN_10a8820bc(param_1 + 10);
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



/* Entry: 10a87eb30; end: 10a87eb3f;  */

undefined8 * FUN_10a87eb30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000105277f8c();
  *param_3 = &PTR_FUN_110c23a50;
  func_0x00010a05a86c(param_3 + 8);
  if (param_3[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_3 + 0x2f) < '\0') {
    __ZdlPv(param_3[3]);
  }
  *param_3 = &PTR____cxa_pure_virtual_110bbb230;
  FUN_10a5ae930(param_3[1]);
  func_0x00010a004e5c(param_3 + 1);
  return param_3;
}



/* Entry: 10a87eb40; end: 10a87eb8b;  */

undefined8 * FUN_10a87eb40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c23a50;
  func_0x00010a05a86c(param_1 + 8);
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR____cxa_pure_virtual_110bbb230;
  FUN_10a5ae930(param_1[1]);
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a87eb8c; end: 10a87ece7;  */

long * FUN_10a87eb8c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar5 = puVar6;
  if (puVar2 != puVar6) {
    uVar3 = param_1[4];
    plVar7 = puVar6 + (uVar3 >> 6);
    lVar4 = *plVar7 + (uVar3 & 0x3f) * 0x40;
    lVar1 = puVar6[param_1[5] + uVar3 >> 6] + (param_1[5] + uVar3 & 0x3f) * 0x40;
    puVar5 = puVar2;
    if (lVar4 != lVar1) {
      do {
        (*(code *)**(undefined8 **)(lVar4 + 8))((undefined8 *)(lVar4 + 8));
        lVar4 = lVar4 + 0x40;
        if (lVar4 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar4 = *plVar7;
        }
      } while (lVar4 != lVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar5 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar5 - (long)puVar6;
  while (uVar3 = lVar4 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar6);
    puVar2 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    puVar5 = puVar2;
    lVar4 = (long)puVar2 - (long)puVar6;
  }
  if (uVar3 == 1) {
    lVar4 = 0x20;
  }
  else {
    if (uVar3 != 2) goto LAB_10a87ec8c;
    lVar4 = 0x40;
  }
  param_1[4] = lVar4;
LAB_10a87ec8c:
  if (puVar6 != puVar5) {
    do {
      puVar2 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar2;
    } while (puVar2 != puVar5);
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar5) {
    param_1[2] = (long)puVar2 + ((long)puVar5 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a87ece8; end: 10a87ed2f;  */

long * FUN_10a87ece8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a87ed30; end: 10a87ed43;  */

undefined1  [16] FUN_10a87ed30(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f67f21b;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a5c92ec();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a87ed44; end: 10a87ee1f;  */

undefined1  [16] FUN_10a87ed44(long *param_1,undefined8 param_2)

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
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a5c92ec();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a87ee20; end: 10a87eeb7;  */

undefined8 * FUN_10a87ee20(undefined8 *param_1,undefined8 *param_2)

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
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
  }
  return param_1;
}



/* Entry: 10a87eeb8; end: 10a87ef03;  */

undefined8 * FUN_10a87eeb8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a87ef04; end: 10a87f0c3;  */

void FUN_10a87ef04(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar6 = param_1[2];
  plVar13 = (long *)*param_1;
  if ((ulong)((long)(uVar6 - (long)plVar13) >> 4) < param_4) {
    plVar7 = param_1;
    plVar4 = param_2;
    if (plVar13 != (long *)0x0) {
      plVar3 = (long *)param_1[1];
      plVar7 = plVar13;
      if (plVar3 != plVar13) {
        do {
          plVar3 = plVar3 + -2;
          func_0x00010a5c92ec();
        } while (plVar3 != plVar13);
        plVar7 = (long *)*param_1;
      }
      param_1[1] = (long)plVar13;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3c != 0) {
      FUN_10a87ed30();
      pcStack_48 = FUN_10a87f0c4;
      plStack_60 = param_3;
      plStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((ulong)plVar4 >> 0x3c == 0) {
        plVar13 = plVar4;
        FUN_10a87ed44();
        *plVar7 = (long)plVar4;
        plVar7[1] = (long)plVar4;
        plVar7[2] = (long)(plVar4 + (long)plVar13 * 2);
        return;
      }
      FUN_10a87ed30();
      pcStack_68 = FUN_10a87f100;
      plVar3 = (long *)plVar7[1];
      if (plVar3 < (long *)plVar7[2]) {
        lVar10 = *plVar4;
        plVar12 = plVar3 + 2;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar10;
        *plVar4 = 0;
        plVar4[1] = 0;
      }
      else {
        lVar10 = (long)plVar3 - *plVar7;
        uVar6 = (lVar10 >> 4) + 1;
        plStack_90 = plVar13;
        plStack_88 = param_2;
        plStack_80 = param_3;
        plStack_78 = param_1;
        ppuStack_70 = &puStack_50;
        if (uVar6 >> 0x3c != 0) {
          FUN_10a87ed30();
          lVar10 = *plVar7;
          if (lVar10 != 0) {
            lVar5 = plVar7[1];
            lVar9 = lVar10;
            if (lVar5 != lVar10) {
              do {
                lVar5 = lVar5 + -0x10;
                FUN_10a297544();
              } while (lVar5 != lVar10);
              lVar9 = *plVar7;
            }
            plVar7[1] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(lVar9);
            return;
          }
          return;
        }
        uVar8 = plVar7[2] - *plVar7;
        uVar11 = (long)uVar8 >> 3;
        if (uVar11 <= uVar6) {
          uVar11 = uVar6;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar11 = 0xfffffffffffffff;
        }
        plVar3 = plVar4;
        plStack_98 = plVar7;
        FUN_10a87ed44();
        plVar13 = (long *)(uVar11 + lVar10);
        lVar10 = *plVar4;
        plVar12 = plVar13 + 2;
        plVar13[1] = plVar4[1];
        *plVar13 = lVar10;
        *plVar4 = 0;
        plVar4[1] = 0;
        lVar10 = (long)plVar13 - (plVar7[1] - *plVar7);
        _memcpy(lVar10);
        lStack_b8 = *plVar7;
        *plVar7 = lVar10;
        plVar7[1] = (long)plVar12;
        lStack_a0 = plVar7[2];
        plVar7[2] = uVar11 + (long)plVar3 * 0x10;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a87ed78(&lStack_b8);
      }
      plVar7[1] = (long)plVar12;
      return;
    }
    uVar11 = (long)uVar6 >> 3;
    if ((ulong)((long)uVar6 >> 3) <= param_4) {
      uVar11 = param_4;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar11 = 0xfffffffffffffff;
    }
    FUN_10a87f0c4(param_1,uVar11);
    plVar7 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar10 = param_2[1];
      lVar9 = *param_2;
      plVar7[1] = param_2[1];
      *plVar7 = lVar9;
      if (lVar10 != 0) {
        plVar13 = (long *)(lVar10 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = *plVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7 = plVar7 + 2;
    }
  }
  else {
    plVar7 = (long *)param_1[1];
    if (param_4 <= (ulong)((long)plVar7 - (long)plVar13 >> 4)) {
      if (param_2 != param_3) {
        do {
          plVar7 = param_2 + 2;
          FUN_10a8602bc(plVar13,*param_2,param_2[1]);
          plVar13 = plVar13 + 2;
          param_2 = plVar7;
        } while (plVar7 != param_3);
        plVar7 = (long *)param_1[1];
      }
      while (plVar7 != plVar13) {
        plVar7 = plVar7 + -2;
        func_0x00010a5c92ec();
      }
      param_1[1] = (long)plVar13;
      return;
    }
    plVar4 = (long *)((long)param_2 + ((long)plVar7 - (long)plVar13));
    if (plVar7 != plVar13) {
      do {
        plVar7 = param_2 + 2;
        FUN_10a8602bc(plVar13,*param_2,param_2[1]);
        plVar13 = plVar13 + 2;
        param_2 = plVar7;
      } while (plVar7 != plVar4);
      plVar7 = (long *)param_1[1];
    }
    for (; plVar4 != param_3; plVar4 = plVar4 + 2) {
      lVar10 = plVar4[1];
      lVar9 = *plVar4;
      plVar7[1] = plVar4[1];
      *plVar7 = lVar9;
      if (lVar10 != 0) {
        plVar13 = (long *)(lVar10 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = *plVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7 = plVar7 + 2;
    }
  }
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a87f0c4; end: 10a87f0ff;  */

void FUN_10a87f0c4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar3 = param_2;
    FUN_10a87ed44();
    *param_1 = (long)param_2;
    param_1[1] = (long)param_2;
    param_1[2] = (long)(param_2 + (long)puVar3 * 2);
    return;
  }
  FUN_10a87ed30();
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    puVar9 = puVar3 + 2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar10;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar8 = (long)puVar3 - *param_1;
    uVar1 = (lVar8 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a87ed30();
      lVar8 = *param_1;
      if (lVar8 != 0) {
        lVar2 = param_1[1];
        lVar6 = lVar8;
        if (lVar2 != lVar8) {
          do {
            lVar2 = lVar2 + -0x10;
            FUN_10a297544();
          } while (lVar2 != lVar8);
          lVar6 = *param_1;
        }
        param_1[1] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar6);
        return;
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    puVar4 = param_2;
    plStack_58 = param_1;
    FUN_10a87ed44();
    puVar3 = (undefined8 *)(uVar7 + lVar8);
    uVar10 = *param_2;
    puVar9 = puVar3 + 2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar10;
    *param_2 = 0;
    param_2[1] = 0;
    lVar8 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_78 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    lStack_60 = param_1[2];
    param_1[2] = uVar7 + (long)puVar4 * 0x10;
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    func_0x00010a87ed78(&lStack_78);
  }
  param_1[1] = (long)puVar9;
  return;
}


