/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aabadb4; end: 10aabae0b;  */

void FUN_10aabadb4(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  pcVar1 = (code *)*param_1;
  __ZNSt13exception_ptrC1ERKS_(auStack_28);
  (*pcVar1)(auStack_28,param_1);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  return;
}



/* Entry: 10aabae0c; end: 10aabae83;  */

void FUN_10aabae0c(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  pcVar1 = (code *)*param_1;
  lStack_38 = param_2[1];
  lStack_40 = *param_2;
  lStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  (*pcVar1)(&lStack_40,param_1);
  if (lStack_40 != 0) {
    lStack_38 = lStack_40;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aabae84; end: 10aabaf1f;  */

long FUN_10aabae84(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf8);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) != param_2)) || (*(int *)(lVar2 + 0x24) != param_3))
  {
    lVar2 = 0x90;
    __Znwm();
    FUN_10a1b2a84();
    plVar1 = *(long **)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      lVar2 = *(long *)(param_1 + 0xf8);
    }
  }
  return lVar2;
}



/* Entry: 10aabaf20; end: 10aabafc7;  */

long * FUN_10aabaf20(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 2) * -0x3333333333333333) < param_2) {
    if (0xccccccccccccccc < param_2) {
      FUN_10a22cce8();
      *param_1 = (long)&PTR_FUN_110c42cc0;
      param_1[3] = (long)&PTR_FUN_110c42d88;
      FUN_10aab82e4();
      FUN_10aabb088(param_1 + 4,0);
      func_0x00010a136de4(param_1 + 0x3c);
      func_0x00010a1bb0e8(param_1 + 0x39);
      func_0x000109d18f34(param_1 + 0x22);
      lVar3 = param_1[0x21];
      param_1[0x21] = 0;
      if (lVar3 != 0) {
        func_0x00010a237b14(param_1 + 0x21);
      }
      plVar2 = (long *)param_1[0x1f];
      param_1[0x1f] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      func_0x000109d18f34(param_1 + 8);
      if (param_1[5] != 0) {
        param_1[6] = param_1[5];
        __ZdlPv();
      }
      FUN_10aabb088(param_1 + 4,0);
      if (param_1[2] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      return param_1;
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    FUN_10a22ccfc();
    lVar3 = (long)plVar2 + (lVar4 - lVar3);
    lVar4 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    plVar1 = (long *)*param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    param_1[2] = (long)plVar2 + param_2 * 0x14;
    param_1 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar1;
    }
  }
  return param_1;
}



/* Entry: 10aabafc8; end: 10aabb087;  */

undefined8 * FUN_10aabafc8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c42cc0;
  param_1[3] = &PTR_FUN_110c42d88;
  FUN_10aab82e4(param_1,1);
  FUN_10aabb088(param_1 + 4,0);
  func_0x00010a136de4(param_1 + 0x3c);
  func_0x00010a1bb0e8(param_1 + 0x39);
  func_0x000109d18f34(param_1 + 0x22);
  lVar2 = param_1[0x21];
  param_1[0x21] = 0;
  if (lVar2 != 0) {
    func_0x00010a237b14(param_1 + 0x21);
  }
  plVar1 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109d18f34(param_1 + 8);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  FUN_10aabb088(param_1 + 4,0);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aabb088; end: 10aabb0af;  */

void FUN_10aabb088(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a08ef58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aabb0b0; end: 10aabb0f3;  */

long FUN_10aabb0b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10aabb088(param_1 + 0x38,0);
  FUN_10aadf414(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
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



/* Entry: 10aabb0f4; end: 10aabbbfb;  */

void FUN_10aabb0f4(long param_1,uint *param_2)

{
  long **pplVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  long **pplVar25;
  long **pplVar26;
  ulong uVar27;
  ulong uVar28;
  ulong unaff_x25;
  float fVar29;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long **pplStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long **pplStack_70;
  long **pplStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long *plStack_58;
  
  pplVar15 = &plStack_110;
  iVar9 = (int)param_1 + 0x240;
  FUN_10a4f0ad8();
  if (iVar9 == 0) {
    return;
  }
  FUN_10a5049e4(&plStack_80,&plStack_110,param_1 + 0x240);
  plVar19 = plStack_80;
  func_0x000107c2b054(&plStack_110,&DAT_10f2ecb66);
  (**(code **)(*plVar19 + 0x10))(&plStack_e0,plVar19,&plStack_110);
  plVar11 = plStack_e0;
  plVar10 = (long *)0x28;
  __Znwm();
  plVar23 = plVar10 + 1;
  *plVar23 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_DAT_110af82b8;
  plVar19 = plVar10 + 3;
  func_0x000109380ad4(plVar19,plVar11);
  plVar11 = plStack_e0;
  plStack_e0 = (long *)0x0;
  plStack_90 = plVar19;
  plStack_88 = plVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  if (lStack_100 < 0) {
    __ZdlPv(plStack_110);
  }
  plVar11 = (long *)0x1a8;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_DAT_110afa3c0;
  plVar12 = plVar11 + 3;
  plVar11[4] = 0;
  *plVar12 = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0x10] = 0;
  plVar11[0xf] = 0;
  plVar11[0x12] = 0;
  plVar11[0x11] = 0;
  plVar11[0x14] = 0;
  plVar11[0x13] = 0;
  plVar11[0x16] = 0;
  plVar11[0x15] = 0;
  plVar11[0x18] = 0;
  plVar11[0x17] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x20] = 0;
  plVar11[0x1f] = 0;
  plVar11[0x22] = 0;
  plVar11[0x21] = 0;
  plVar11[0x24] = 0;
  plVar11[0x23] = 0;
  plVar11[0x26] = 0;
  plVar11[0x25] = 0;
  plVar11[0x28] = 0;
  plVar11[0x27] = 0;
  plVar11[0x2a] = 0;
  plVar11[0x29] = 0;
  plVar11[0x2c] = 0;
  plVar11[0x2b] = 0;
  plVar11[0x2e] = 0;
  plVar11[0x2d] = 0;
  plVar11[0x30] = 0;
  plVar11[0x2f] = 0;
  plVar11[0x32] = 0;
  plVar11[0x31] = 0;
  plVar11[0x34] = 0;
  plVar11[0x33] = 0;
  func_0x00010950cb3c();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar5) {
      *plVar23 = *plVar23 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_b0 = plVar19;
  plStack_a8 = plVar10;
  plStack_a0 = plVar12;
  plStack_98 = plVar11;
  func_0x0001094e8fbc();
  plVar19 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar11 = plStack_a8 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = plStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plStack_a0 + 7,plStack_a0 + 4);
  pplVar13 = (long **)0x50;
  __Znwm();
  pplVar13[1] = (long *)0x0;
  pplVar13[2] = (long *)0x0;
  *pplVar13 = (long *)&PTR_DAT_110af9fd0;
  pplVar26 = pplVar13 + 3;
  *pplVar26 = (long *)&PTR_DAT_110afa020;
  pplVar13[5] = (long *)0x0;
  pplVar13[4] = (long *)0x0;
  pplVar13[7] = (long *)0x0;
  pplVar13[6] = (long *)0x0;
  *(undefined1 *)(pplVar13 + 7) = 1;
  pplVar13[8] = (long *)0x0;
  pplVar13[9] = (long *)0x0;
  pplVar14 = pplVar13;
  pplStack_c0 = pplVar26;
  pplStack_b8 = pplVar13;
  if (plStack_98 == (long *)0x0) {
    pplVar13[4] = plVar19;
    pplVar13[5] = (long *)0x0;
  }
  else {
    plVar11 = plStack_98 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pplVar25 = (long **)pplVar13[5];
    pplVar13[4] = plVar19;
    pplVar13[5] = plStack_98;
    if (pplVar25 != (long **)0x0) {
      pplVar1 = pplVar25 + 1;
      do {
        plVar19 = *pplVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar5) {
          *pplVar1 = (long *)((long)plVar19 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (plVar19 == (long *)0x0) {
        (*(code *)(*pplVar25)[2])(pplVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pplVar14 = pplVar25;
      }
    }
  }
  *(undefined1 *)(pplVar13 + 7) = 0;
  func_0x00010ad031c0();
  if (*(char *)((long)pplVar14 + 0x17) < '\0') {
    plVar19 = *pplVar14;
    pplVar25 = pplVar14 + 1;
    pplVar14 = &plStack_e0;
    func_0x000107c3192c(pplVar14,plVar19,*pplVar25);
  }
  else {
    plStack_d8 = pplVar14[1];
    plStack_e0 = *pplVar14;
    plStack_d0 = pplVar14[2];
  }
  plVar19 = plStack_d8;
  if (-1 < (long)plStack_d0) {
    plVar19 = (long *)((ulong)plStack_d0 >> 0x38);
  }
  if (plVar19 != (long *)0x0) {
    plVar19 = (long *)0x28;
    __Znwm();
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&PTR_DAT_110afa410;
    uStack_60 = 0;
    func_0x0001094a39d4(plVar19 + 3,&plStack_110,&plStack_e0,&uStack_60);
    pplVar25 = (long **)pplVar13[9];
    pplVar13[8] = plVar19 + 3;
    pplVar13[9] = plVar19;
    pplVar14 = pplVar15;
    pplVar26 = pplStack_c0;
    if (pplVar25 != (long **)0x0) {
      pplVar15 = pplVar25 + 1;
      do {
        plVar19 = *pplVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar15,0x10);
        if (bVar5) {
          *pplVar15 = (long *)((long)plVar19 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (plVar19 == (long *)0x0) {
        (*(code *)(*pplVar25)[2])(pplVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar25);
        pplVar14 = pplVar25;
        pplVar26 = pplStack_c0;
      }
    }
  }
  pplVar26[3] = *(long **)param_2;
  func_0x0001094d34f8();
  func_0x000107c2b054(&plStack_110,&UNK_10f56f8bc);
  func_0x0001094d3a28(&uStack_60,pplVar14,&plStack_110);
  if (lStack_100 < 0) {
    __ZdlPv(plStack_110);
  }
  plStack_108 = plStack_78;
  plStack_110 = plStack_80;
  if (plStack_78 != (long *)0x0) {
    plVar19 = plStack_78 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = *plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pplStack_68 = pplStack_b8;
  if (pplStack_b8 != (long **)0x0) {
    pplVar15 = pplStack_b8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar15,0x10);
      if (bVar5) {
        *pplVar15 = (long *)((long)*pplVar15 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pplStack_70 = pplVar26;
  (**(code **)(*(long *)CONCAT71(uStack_5f,uStack_60) + 0x10))
            ((long *)CONCAT71(uStack_5f,uStack_60),&plStack_110,&pplStack_70);
  pplVar15 = pplStack_68;
  if (pplStack_68 != (long **)0x0) {
    pplVar14 = pplStack_68 + 1;
    do {
      plVar19 = *pplVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
      if (bVar5) {
        *pplVar14 = (long *)((long)plVar19 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar19 == (long *)0x0) {
      (*(code *)(*pplStack_68)[2])(pplStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar15);
    }
  }
  plVar19 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar11 = plStack_108 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = (long *)(param_1 + 0x208);
  uVar3 = *param_2 & 0xff00 | param_2[1] & 0xff;
  uVar27 = (ulong)uVar3;
  uVar28 = *(ulong *)(param_1 + 0x210);
  if (uVar28 != 0) {
    uVar20 = uVar28 - 1;
    if ((uVar28 & uVar20) == 0) {
      unaff_x25 = (ulong)((uint)uVar28 - 1 & uVar3);
    }
    else {
      unaff_x25 = uVar27;
      if (uVar28 <= uVar27) {
        uVar2 = (uint)uVar28 & 0xffff;
        uVar6 = 0;
        if ((uVar28 & 0xffff) != 0) {
          uVar6 = uVar3 / uVar2;
        }
        unaff_x25 = (ulong)(uVar3 - uVar6 * uVar2);
      }
    }
    puVar21 = *(undefined8 **)(*plVar19 + unaff_x25 * 8);
    if (puVar21 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar21; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar22 = plVar11[1];
        if (uVar22 == uVar27) {
          if (*(uint *)(plVar11 + 2) == *param_2 && *(uint *)((long)plVar11 + 0x14) == param_2[1])
          goto LAB_10aabb85c;
        }
        else {
          if ((uVar28 & uVar20) == 0) {
            uVar22 = uVar22 & uVar20;
          }
          else if (uVar28 <= uVar22) {
            uVar17 = 0;
            if (uVar28 != 0) {
              uVar17 = uVar22 / uVar28;
            }
            uVar22 = uVar22 - uVar17 * uVar28;
          }
          if (uVar22 != unaff_x25) break;
        }
      }
    }
  }
  plVar11 = (long *)0x28;
  __Znwm();
  lStack_100 = 1;
  *plVar11 = 0;
  plVar11[1] = uVar27;
  lVar18 = *(long *)param_2;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[2] = lVar18;
  fVar29 = (float)(*(long *)(param_1 + 0x220) + 1);
  plStack_110 = plVar11;
  plStack_108 = plVar19;
  if ((uVar28 == 0) || (*(float *)(param_1 + 0x228) * (float)uVar28 < fVar29)) {
    uVar20 = 1;
    if (2 < uVar28) {
      uVar20 = (ulong)((uVar28 & uVar28 - 1) != 0);
    }
    uVar20 = uVar20 | uVar28 << 1;
    uVar22 = (ulong)(fVar29 / *(float *)(param_1 + 0x228));
    if (uVar20 <= uVar22) {
      uVar20 = uVar22;
    }
    if (uVar20 - 1 == 0) {
      uVar20 = 2;
    }
    else if ((uVar20 & uVar20 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar28 = *(ulong *)(param_1 + 0x210);
    }
    if (uVar28 < uVar20) {
LAB_10aabb66c:
      if (uVar20 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10aabbac0);
        (*pcVar8)();
      }
      lVar18 = uVar20 << 3;
      __Znwm();
      lVar16 = *plVar19;
      *plVar19 = lVar18;
      if (lVar16 != 0) {
        __ZdlPv();
      }
      uVar28 = 0;
      *(ulong *)(param_1 + 0x210) = uVar20;
      do {
        *(undefined8 *)(*plVar19 + uVar28 * 8) = 0;
        uVar28 = uVar28 + 1;
      } while (uVar20 != uVar28);
      plVar10 = *(long **)(param_1 + 0x218);
      uVar28 = uVar20;
      if (plVar10 != (long *)0x0) {
        uVar22 = plVar10[1];
        uVar17 = uVar20 - 1;
        if ((uVar20 & uVar17) == 0) {
          uVar22 = uVar22 & uVar17;
        }
        else if (uVar20 <= uVar22) {
          uVar24 = 0;
          if (uVar20 != 0) {
            uVar24 = uVar22 / uVar20;
          }
          uVar22 = uVar22 - uVar24 * uVar20;
        }
        *(long *)(*plVar19 + uVar22 * 8) = param_1 + 0x218;
        plVar23 = (long *)*plVar10;
        while (plVar23 != (long *)0x0) {
          uVar24 = plVar23[1];
          if ((uVar20 & uVar17) == 0) {
            uVar24 = uVar24 & uVar17;
          }
          else if (uVar20 <= uVar24) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar24 / uVar20;
            }
            uVar24 = uVar24 - uVar7 * uVar20;
          }
          plVar12 = plVar23;
          if (uVar24 != uVar22) {
            lVar18 = *plVar19;
            if (*(long *)(lVar18 + uVar24 * 8) == 0) {
              *(long **)(lVar18 + uVar24 * 8) = plVar10;
              uVar22 = uVar24;
            }
            else {
              *plVar10 = *plVar23;
              *plVar23 = **(undefined8 **)(lVar18 + uVar24 * 8);
              **(long **)(lVar18 + uVar24 * 8) = (long)plVar23;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar23 = (long *)*plVar12;
        }
      }
    }
    else if (uVar20 < uVar28) {
      uVar22 = (ulong)((float)*(ulong *)(param_1 + 0x220) / *(float *)(param_1 + 0x228));
      if ((uVar28 < 3) || ((uVar28 & uVar28 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar22) {
        uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
      }
      if (uVar20 <= uVar22) {
        uVar20 = uVar22;
      }
      if (uVar20 < uVar28) {
        if (uVar20 != 0) goto LAB_10aabb66c;
        lVar18 = *plVar19;
        *plVar19 = 0;
        if (lVar18 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x210) = 0;
        uVar28 = 0;
      }
      else {
        uVar28 = *(ulong *)(param_1 + 0x210);
      }
    }
    if ((uVar28 & uVar28 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar28 - 1U & uVar3);
    }
    else {
      unaff_x25 = uVar27;
      if (uVar28 <= uVar27) {
        uVar20 = 0;
        if (uVar28 != 0) {
          uVar20 = uVar27 / uVar28;
        }
        unaff_x25 = uVar27 - uVar20 * uVar28;
      }
    }
  }
  lVar18 = *plVar19;
  plVar10 = *(long **)(lVar18 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar11 = *(long *)(param_1 + 0x218);
    *(long **)(param_1 + 0x218) = plVar11;
    *(long *)(lVar18 + unaff_x25 * 8) = param_1 + 0x218;
    if (*plVar11 == 0) goto LAB_10aabb850;
    uVar27 = *(ulong *)(*plVar11 + 8);
    if ((uVar28 & uVar28 - 1) == 0) {
      uVar27 = uVar27 & uVar28 - 1;
    }
    else if (uVar28 <= uVar27) {
      uVar20 = 0;
      if (uVar28 != 0) {
        uVar20 = uVar27 / uVar28;
      }
      uVar27 = uVar27 - uVar20 * uVar28;
    }
    plVar10 = (long *)(*plVar19 + uVar27 * 8);
  }
  else {
    *plVar11 = *plVar10;
  }
  *plVar10 = (long)plVar11;
LAB_10aabb850:
  *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 1;
LAB_10aabb85c:
  if (plStack_58 != (long *)0x0) {
    plVar19 = plStack_58 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = *plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar19 = (long *)plVar11[4];
  plVar11[4] = (long)plStack_58;
  plVar11[3] = CONCAT71(uStack_5f,uStack_60);
  if (plVar19 != (long *)0x0) {
    plVar11 = plVar19 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar19 = plStack_58 + 1;
    do {
      lVar18 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  plStack_f0 = (long *)0x0;
  plStack_108 = (long *)0x0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  lStack_100 = 0;
  func_0x000107c2b054(&plStack_110,&UNK_10f68da37);
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  FUN_10aabbbfc(param_1 + 0x240,&plStack_110);
  plVar19 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plVar11 = plStack_f0 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  if (lStack_100 < 0) {
    __ZdlPv(plStack_110);
  }
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  if ((long)plStack_d0 < 0) {
    __ZdlPv(plStack_e0);
  }
  pplVar15 = pplStack_b8;
  if (pplStack_b8 != (long **)0x0) {
    pplVar14 = pplStack_b8 + 1;
    do {
      plVar19 = *pplVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
      if (bVar5) {
        *pplVar14 = (long *)((long)plVar19 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar19 == (long *)0x0) {
      (*(code *)(*pplStack_b8)[2])(pplStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar15);
    }
  }
  plVar19 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar11 = plStack_98 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar11 = plStack_88 + 1;
    do {
      lVar18 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar19 = plStack_78 + 1;
    do {
      lVar18 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10aabbbfc; end: 10aabbcf3;  */

undefined8 * FUN_10aabbbfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  FUN_10a152118(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10aabbcf4; end: 10aabc1c3;  */

/* WARNING: Removing unreachable block (ram,0x00010aabc354) */

void FUN_10aabbcf4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  long *unaff_x22;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  undefined8 *puStack_348;
  long lStack_340;
  undefined **ppuStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  undefined1 auStack_2d0 [4];
  int iStack_2cc;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_298;
  long lStack_290;
  undefined1 *puStack_288;
  undefined1 auStack_280 [20];
  undefined1 auStack_26c [64];
  undefined1 uStack_22c;
  undefined8 uStack_228;
  long *plStack_220;
  undefined1 auStack_218 [208];
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  
  puVar10 = param_3;
  puVar20 = param_3;
  FUN_10aab8a44();
  puStack_148 = &UNK_10f68db71;
  puStack_140 = (undefined8 *)0x18;
  if (*(int *)((long)puVar10 + 0x24) == 1) {
    puVar10 = param_3;
    FUN_10aab8a44();
    puStack_148 = &UNK_10f68db8a;
    puStack_140 = (undefined8 *)0x13;
    if (*(long *)(param_2 + 0x220) != 0) {
      uStack_310 = NEON_scvtf(puVar10[2],4);
      unaff_x22 = *(long **)(param_2 + 0x218);
      plVar13 = (long *)*unaff_x22;
      if (plVar13 != (long *)0x0) {
        fVar23 = (float)((ulong)uStack_310 >> 0x20);
        plVar12 = unaff_x22;
        do {
          uVar28 = NEON_scvtf(CONCAT44((int)plVar12[2],(int)plVar13[2]),4);
          uVar24 = NEON_scvtf(CONCAT44((int)((ulong)plVar12[2] >> 0x20),
                                       (int)((ulong)plVar13[2] >> 0x20)),4);
          unaff_x22 = plVar13;
          if (ABS((float)((ulong)uVar28 >> 0x20) / (float)((ulong)uVar24 >> 0x20) -
                  (float)uStack_310 / fVar23) <=
              ABS((float)uVar28 / (float)uVar24 - (float)uStack_310 / fVar23)) {
            unaff_x22 = plVar12;
          }
          plVar13 = (long *)*plVar13;
          plVar12 = unaff_x22;
        } while (plVar13 != (long *)0x0);
      }
      plVar13 = (long *)unaff_x22[3];
      puStack_148 = &UNK_10f68db9e;
      puStack_140 = (undefined8 *)0x1b;
      param_3 = (undefined8 *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_10a0f3910(auStack_2d0,puVar10 + 2,0);
        plStack_2d8 = *(long **)(param_2 + 0x238);
        uStack_2e0 = *(undefined8 *)(param_2 + 0x230);
        if (*(long *)(param_2 + 0x238) != 0) {
          plVar12 = (long *)(*(long *)(param_2 + 0x238) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = *plVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_228 = 0;
        plStack_220 = (long *)0x0;
        auStack_26c[0] = 0;
        uStack_22c = 0;
        func_0x0001094d91e0(auStack_218,auStack_2d0,0,&uStack_228,auStack_26c,0,0);
        plVar12 = plVar13;
        (**(code **)(*plVar13 + 0x18))(plVar13);
        func_0x0001094f5e80(&puStack_148,auStack_218,plVar12);
        (**(code **)(*plVar13 + 0x20))(plVar13,&puStack_148,&uStack_2e0);
        func_0x0001094d92f0(&puStack_148);
        func_0x0001094d92f0(auStack_218);
        plVar13 = plStack_220;
        if (plStack_220 != (long *)0x0) {
          plVar12 = plStack_220 + 1;
          do {
            lVar15 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_220 + 0x10))(plStack_220);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = plStack_2d8;
        if (plStack_2d8 != (long *)0x0) {
          plVar12 = plStack_2d8 + 1;
          do {
            lVar15 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        if (lStack_298 != 0) {
          piVar1 = (int *)(lStack_298 + 0x14);
          do {
            iVar4 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(auStack_2d0);
          }
        }
        lStack_298 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        if (0 < iStack_2cc) {
          lVar15 = 0;
          do {
            *(undefined4 *)(lStack_290 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < iStack_2cc);
        }
        if (puStack_288 != auStack_280 && puStack_288 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_288 + -8));
        }
        plVar13 = (long *)unaff_x22[3];
        (**(code **)(*plVar13 + 0x30))();
        puStack_148 = (undefined *)0x0;
        puStack_140 = (undefined8 *)0x0;
        puStack_138 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)*plVar13;
        puVar20 = (undefined8 *)plVar13[1];
        if (puVar10 != puVar20) {
          uVar24 = uStack_310;
          puStack_318 = param_1;
          do {
            fVar23 = (float)*puVar10;
            fVar26 = (float)((ulong)*puVar10 >> 0x20);
            fVar21 = fVar23 * (float)uVar24;
            fVar25 = (float)((ulong)uVar24 >> 0x20);
            fVar22 = fVar26 * fVar25;
            fVar23 = (fVar23 + (float)puVar10[1]) * (float)uVar24;
            fVar25 = (fVar26 + (float)((ulong)puVar10[1] >> 0x20)) * fVar25;
            fVar26 = (fVar23 - fVar21) * 0.07000005 * 0.5;
            fVar27 = (fVar25 - fVar22) * -0.26 * 0.5;
            fVar21 = fVar21 - fVar26;
            fVar22 = fVar22 - fVar27;
            fVar23 = fVar23 + fVar26;
            fVar25 = fVar25 + fVar27;
            if (puStack_140 < puStack_138) {
              puStack_140[1] = CONCAT44(fVar25 - fVar22,fVar23 - fVar21);
              *puStack_140 = CONCAT44((fVar22 + fVar25) * 0.5,(fVar21 + fVar23) * 0.5);
              *(undefined4 *)(puStack_140 + 2) = 0;
              puVar11 = (undefined8 *)((long)puStack_140 + 0x14);
            }
            else {
              uStack_2f8 = 0;
              uStack_2e8 = 0;
              uStack_2f0 = CONCAT44(fVar22,fVar21);
              lVar15 = (long)puStack_140 - (long)puStack_148;
              uVar16 = (lVar15 >> 2) * -0x3333333333333333 + 1;
              uStack_300 = CONCAT44(fVar25,fVar23);
              if (0xccccccccccccccc < uVar16) {
                FUN_10a22cce8();
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10aabc154);
                (*pcVar7)();
              }
              lVar14 = (long)puStack_138 - (long)puStack_148 >> 2;
              uVar17 = lVar14 * -0x6666666666666666;
              if (uVar17 < uVar16 || uVar17 - uVar16 == 0) {
                uVar17 = uVar16;
              }
              if (0x666666666666665 < (ulong)(lVar14 * -0x3333333333333333)) {
                uVar17 = 0xccccccccccccccc;
              }
              ppuVar8 = &puStack_148;
              FUN_10a22ccfc();
              puVar3 = (undefined8 *)((long)ppuVar8 + lVar15);
              fVar26 = (float)uStack_2f0;
              fVar23 = fVar26 + (float)uStack_300;
              fVar22 = (float)((ulong)uStack_2f0 >> 0x20);
              fVar25 = (float)((ulong)uStack_300 >> 0x20);
              fVar21 = fVar22 + fVar25;
              puVar18 = (undefined8 *)((long)ppuVar8 + uVar17 * 0x14);
              puVar3[1] = CONCAT44(fVar25 - fVar22,(float)uStack_300 - fVar26);
              *puVar3 = CONCAT44(fVar21 * 0.5,fVar23 * 0.5);
              *(undefined4 *)(puVar3 + 2) = 0;
              puVar11 = (undefined8 *)((long)puVar3 + 0x14);
              puVar19 = (undefined *)((long)puVar3 - ((long)puStack_140 - (long)puStack_148));
              _memcpy(CONCAT44(fVar21 - fVar22,fVar23 - fVar26),puVar19);
              bVar6 = puStack_148 != (undefined *)0x0;
              uVar24 = uStack_310;
              puStack_148 = puVar19;
              puStack_138 = puVar18;
              if (bVar6) {
                puStack_140 = puVar11;
                __ZdlPv();
                uVar24 = uStack_310;
              }
            }
            puVar10 = puVar10 + 0x10;
            param_1 = puStack_318;
            puStack_140 = puVar11;
          } while (puVar10 != puVar20);
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        FUN_10a22cc2c(param_1,puStack_148,puStack_140,
                      ((long)puStack_140 - (long)puStack_148 >> 2) * -0x3333333333333333);
        if (puStack_148 != (undefined *)0x0) {
          puStack_140 = (undefined8 *)puStack_148;
          __ZdlPv();
        }
        return;
      }
    }
  }
  ppuVar8 = &puStack_148;
  FUN_10a0edfc4();
  func_0x000104bd46a0();
  if (puStack_148 != (undefined *)0x0) {
    puStack_140 = (undefined8 *)puStack_148;
    __ZdlPv();
  }
  ppuVar9 = ppuVar8;
  __Unwind_Resume();
  pcStack_328 = FUN_10aabc1c4;
  if ((undefined *)*puVar20 != ppuVar9[0x4d]) {
    plStack_350 = unaff_x22;
    puStack_348 = param_3;
    lStack_340 = param_2;
    ppuStack_338 = ppuVar8;
    puStack_330 = &stack0xfffffffffffffff0;
    FUN_10a4ec3f0(ppuVar9 + 0x4d);
    puVar20 = (undefined8 *)*puVar20;
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    lStack_388 = -0x7fffffffffffffe0;
    uStack_390 = 0x1f;
    puVar10[1] = 0x454341465f4e4e5f;
    *puVar10 = 0x45524f43534e454c;
    *(undefined8 *)((long)puVar10 + 0x17) = 0x4c45444f4d5f524f;
    *(undefined8 *)((long)puVar10 + 0xf) = 0x5443455445445f45;
    *(undefined1 *)((long)puVar10 + 0x1f) = 0;
    puStack_398 = puVar10;
    FUN_10a4d898c(&plStack_380,*puVar20,&puStack_398);
    puStack_3a8 = ppuVar9[2];
    puStack_3b0 = ppuVar9[1];
    if (puStack_3a8 != (undefined *)0x0) {
      plVar13 = (long *)(puStack_3a8 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar20 = (undefined8 *)0x80;
    puStack_378 = puStack_3b0;
    puStack_370 = puStack_3a8;
    __Znwm();
    *puVar20 = FUN_10aae7da4;
    puVar20[1] = FUN_10aae804c;
    func_0x0001092ba17c(puVar20 + 2);
    plVar13 = (long *)puVar20[7];
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = *plVar12 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puStack_3a8 = puStack_370;
      puStack_3b0 = puStack_378;
    }
    puVar20[9] = plStack_380;
    plStack_380 = (long *)0x0;
    puVar20[0xb] = puStack_3a8;
    puVar20[10] = puStack_3b0;
    puStack_378 = (undefined *)0x0;
    puStack_370 = (undefined *)0x0;
    puVar20[0xc] = &PTR_PTR_1132fed50;
    *(undefined1 *)(puVar20 + 0xd) = 0;
    *(undefined1 *)(puVar20 + 0xf) = 0;
    puVar11 = puVar20 + 0xc;
    func_0x0001092ba064(puVar11,puVar20);
    if (((ulong)puVar11 & 1) == 0) {
      FUN_10aad69f0(puVar20 + 0xe,puVar20 + 9);
      puVar20[0xc] = puVar20[0xe];
      plVar12 = (long *)(puVar20[0xe] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = *plVar12 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((uint)*(undefined8 *)(puVar20[0xc] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar20 + 0xf) = 1;
        lVar15 = puVar20[0xc];
        plVar12 = (long *)(lVar15 + 0x10);
        uVar24 = puVar20[3];
        do {
          lVar14 = *plVar12;
          if (lVar14 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              uStack_368 = 0;
              puStack_360 = puVar20;
              uStack_358 = uVar24;
              func_0x000109d1b588(lVar15 + 0x18,&uStack_368);
              *(undefined8 *)(lVar15 + 0x10) = 0;
              goto joined_r0x00010aabc4e0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar14 >> 1 & 1) == 0);
      }
      plVar12 = (long *)puVar20[0xc];
      if (((uint)*(undefined8 *)(puVar20[0xc] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar12 + 0x12);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10aabc568);
        (*pcVar7)();
      }
      if (plVar12 != (long *)0x0) {
        puVar2 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = (long *)puVar20[0xe];
      if (plVar12 != (long *)0x0) {
        puVar2 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar20 + 2);
      if (puVar20[0xb] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar12 = (long *)puVar20[9];
      if (plVar12 != (long *)0x0) {
        puVar2 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar20 + 2);
      __ZdlPv(puVar20);
    }
joined_r0x00010aabc4e0:
    if (plVar13 != (long *)0x0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar16 = *puVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar16 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
    }
    if (puStack_370 != (undefined *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plStack_380 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_380 + 1);
      do {
        uVar16 = *puVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar16 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar16 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plStack_380 + 8))();
        }
      }
    }
    if (lStack_388 < 0) {
      __ZdlPv(puVar10);
    }
  }
  return;
}



/* Entry: 10aabc1c4; end: 10aabc687;  */

/* WARNING: Removing unreachable block (ram,0x00010aabc354) */

void FUN_10aabc1c4(long param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  if (*param_2 != *(long *)(param_1 + 0x268)) {
    FUN_10a4ec3f0(param_1 + 0x268);
    puVar12 = (undefined8 *)*param_2;
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    lStack_68 = -0x7fffffffffffffe0;
    uStack_70 = 0x1f;
    puVar5[1] = 0x454341465f4e4e5f;
    *puVar5 = 0x45524f43534e454c;
    *(undefined8 *)((long)puVar5 + 0x17) = 0x4c45444f4d5f524f;
    *(undefined8 *)((long)puVar5 + 0xf) = 0x5443455445445f45;
    *(undefined1 *)((long)puVar5 + 0x1f) = 0;
    puStack_78 = puVar5;
    FUN_10a4d898c(&plStack_60,*puVar12,&puStack_78);
    lStack_88 = *(long *)(param_1 + 0x10);
    uStack_90 = *(undefined8 *)(param_1 + 8);
    if (lStack_88 != 0) {
      plVar11 = (long *)(lStack_88 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar12 = (undefined8 *)0x80;
    uStack_58 = uStack_90;
    lStack_50 = lStack_88;
    __Znwm();
    *puVar12 = FUN_10aae7da4;
    puVar12[1] = FUN_10aae804c;
    func_0x0001092ba17c(puVar12 + 2);
    plVar11 = (long *)puVar12[7];
    if (plVar11 != (long *)0x0) {
      plVar7 = plVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_88 = lStack_50;
      uStack_90 = uStack_58;
    }
    puVar12[9] = plStack_60;
    plStack_60 = (long *)0x0;
    puVar12[0xb] = lStack_88;
    puVar12[10] = uStack_90;
    uStack_58 = 0;
    lStack_50 = 0;
    puVar12[0xc] = &PTR_PTR_1132fed50;
    *(undefined1 *)(puVar12 + 0xd) = 0;
    *(undefined1 *)(puVar12 + 0xf) = 0;
    puVar6 = puVar12 + 0xc;
    func_0x0001092ba064(puVar6,puVar12);
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10aad69f0(puVar12 + 0xe,puVar12 + 9);
      puVar12[0xc] = puVar12[0xe];
      plVar7 = (long *)(puVar12[0xe] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(puVar12[0xc] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar12 + 0xf) = 1;
        lVar13 = puVar12[0xc];
        plVar7 = (long *)(lVar13 + 0x10);
        uVar8 = puVar12[3];
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
              puStack_40 = puVar12;
              uStack_38 = uVar8;
              func_0x000109d1b588(lVar13 + 0x18,&uStack_48);
              *(undefined8 *)(lVar13 + 0x10) = 0;
              goto joined_r0x00010aabc4e0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar10 >> 1 & 1) == 0);
      }
      plVar7 = (long *)puVar12[0xc];
      if (((uint)*(undefined8 *)(puVar12[0xc] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aabc568);
        (*pcVar4)();
      }
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
      plVar7 = (long *)puVar12[0xe];
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
      func_0x0001092ba100(puVar12 + 2);
      if (puVar12[0xb] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar7 = (long *)puVar12[9];
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
      func_0x000109d1a1d0(puVar12 + 2);
      __ZdlPv(puVar12);
    }
joined_r0x00010aabc4e0:
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
    if (lStack_50 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plStack_60 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_60 + 1);
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
          (**(code **)(*plStack_60 + 8))();
        }
      }
    }
    if (lStack_68 < 0) {
      __ZdlPv(puVar5);
    }
  }
  return;
}



/* Entry: 10aabc688; end: 10aabc6fb;  */

long * FUN_10aabc688(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10aabc6fc; end: 10aabc70b;  */

byte FUN_10aabc6fc(long param_1)

{
  return *(byte *)(param_1 + 0x1f0) & 1;
}



/* Entry: 10aabc70c; end: 10aabc7ab;  */

undefined1  [16] FUN_10aabc70c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f68db8a;
  uStack_28 = 0x13;
  uVar2 = param_2;
  if (param_1[0x44] != 0) {
    puVar1 = param_1;
    (**(code **)*param_1)();
    puStack_30 = &UNK_10f68dbba;
    uStack_28 = 0x1d;
    if (((ulong)puVar1 & 1) != 0) {
      lVar3 = param_1[0x43];
      if (lVar3 == 0) {
        puStack_30 = (undefined *)0x0;
      }
      else {
        uStack_38 = param_2;
        (**(code **)(**(long **)(lVar3 + 0x18) + 0x38))
                  (&puStack_30,*(long **)(lVar3 + 0x18),&uStack_38);
      }
      auVar4[8] = lVar3 != 0;
      auVar4._0_8_ = puStack_30;
      auVar4._9_7_ = 0;
      return auVar4;
    }
  }
  FUN_10a0edfc4(&puStack_30);
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = 1;
  return auVar5;
}



/* Entry: 10aabc7ac; end: 10aabc7b3;  */

undefined8 FUN_10aabc7ac(void)

{
  return 1;
}



/* Entry: 10aabc7b4; end: 10aabc8a3;  */

void FUN_10aabc7b4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long *plStack_28;
  
  piVar4 = (int *)0x1138355a0;
  FUN_10a08fec0();
  if (*piVar4 != 0) {
    param_1 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    lStack_30 = -0x7fffffffffffffe0;
    uStack_38 = 0x1f;
    puVar5[1] = 0x454341465f4e4e5f;
    *puVar5 = 0x45524f43534e454c;
    *(undefined8 *)((long)puVar5 + 0x17) = 0x4c45444f4d5f524f;
    *(undefined8 *)((long)puVar5 + 0xf) = 0x5443455445445f45;
    *(undefined1 *)((long)puVar5 + 0x1f) = 0;
    puStack_40 = puVar5;
    FUN_10a4d898c(&plStack_28,*param_1,&puStack_40);
    if (plStack_28 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_28 + 1);
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
          (**(code **)(*plStack_28 + 8))();
        }
      }
    }
    if (lStack_30 < 0) {
      __ZdlPv(puVar5);
    }
  }
  return;
}



/* Entry: 10aabc8a4; end: 10aabd09b;  */

void FUN_10aabc8a4(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  undefined8 uVar31;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar8 = (undefined4 *)0x8;
  __Znwm();
  puStack_f8 = puVar8 + 2;
  puStack_108 = puVar8;
  puStack_100 = puVar8;
  if (param_2 == 0) {
    if ((*(long *)(param_1 + 0xe8) == 0) && (*(long *)(param_1 + 0xe0) == 0)) {
      FUN_10aabdc1c(&puStack_108,3);
    }
  }
  else if ((*(long *)(param_1 + 0x100) == 0) && (*(long *)(param_1 + 0xf8) == 0)) {
    FUN_10aabdc1c(&puStack_108,2);
  }
  if (puStack_108 != puStack_100) {
    if ((*(int *)(param_1 + 0x128) == 1) &&
       (puVar15 = puStack_100 + -1, puVar8 = puStack_108, puStack_108 < puVar15)) {
      do {
        puVar17 = puVar8 + 1;
        uVar3 = *puVar8;
        *puVar8 = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar3;
        puVar15 = puVar16;
        puVar8 = puVar17;
      } while (puVar17 < puVar16);
    }
    lStack_130 = 0;
    uStack_128 = 0;
    lStack_138 = 0;
    FUN_10aad6794(&lStack_138,puStack_108,puStack_100,(long)puStack_100 - (long)puStack_108 >> 2);
    lVar6 = lStack_130;
    lVar20 = lStack_138;
    plVar23 = *(long **)(param_1 + 0x148);
    plVar25 = *(long **)(param_1 + 0x148);
    uVar31 = *(undefined8 *)(param_1 + 0x140);
    if (plVar23 != (long *)0x0) {
      plVar9 = plVar23 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10ad515f4(1);
    plVar9 = (long *)0x30;
    __Znwm();
    uVar21 = lVar6 - lVar20 >> 2;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110c43ee8;
    plVar30 = plVar9 + 3;
    *plVar30 = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    if (lVar6 == lVar20) {
      plStack_118 = (long *)0x0;
      plStack_110 = (long *)0x0;
      plStack_120 = (long *)0x0;
      plStack_a0 = plVar30;
      plStack_98 = plVar9;
    }
    else {
      if (uVar21 >> 0x3d != 0) {
        FUN_10aadf218();
        goto LAB_10aabcf78;
      }
      plVar27 = (long *)((lVar6 - lVar20) * 2);
      plVar10 = plVar27;
      __Znwm();
      plVar9[3] = (long)plVar10;
      plVar9[4] = (long)plVar10;
      plVar2 = (long *)((long)plVar10 + (long)plVar27);
      plVar9[5] = (long)plVar2;
      plVar24 = plVar10;
      do {
        puVar11 = (undefined8 *)0xa0;
        __Znwm();
        puVar11[2] = 0;
        puVar11[3] = 0x32aaaba7;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[7] = 0;
        puVar11[6] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[10] = 0;
        puVar11[0xb] = 0x3cb0b1bb;
        puVar11[0xd] = 0;
        puVar11[0xc] = 0;
        puVar11[0xf] = 0;
        puVar11[0xe] = 0;
        *(undefined8 *)((long)puVar11 + 0x84) = 0;
        *(undefined8 *)((long)puVar11 + 0x7c) = 0;
        *puVar11 = &PTR_FUN_110c43f38;
        puVar11[1] = 0;
        *plVar24 = (long)puVar11;
        plVar27 = plVar27 + -1;
        plVar24 = plVar24 + 1;
      } while (plVar27 != (long *)0x0);
      plVar24 = (long *)0x0;
      plVar9[4] = (long)plVar2;
      plStack_118 = (long *)0x0;
      plStack_110 = (long *)0x0;
      plStack_120 = (long *)0x0;
      plVar27 = (long *)0x0;
      plStack_a0 = plVar30;
      plStack_98 = plVar9;
      do {
        plVar9 = plStack_118;
        lVar29 = *plVar10;
        if (lVar29 == 0) {
          FUN_10a0843f8(3);
          goto LAB_10aabcf78;
        }
        FUN_10a085024(lVar29);
        if (plVar9 < plVar24) {
          *plVar9 = lVar29;
          plVar28 = plVar27;
          plVar30 = plVar9;
        }
        else {
          lVar26 = (long)plVar9 - (long)plVar27 >> 3;
          uVar1 = lVar26 + 1;
          if (uVar1 >> 0x3d != 0) {
            FUN_10aad6780();
            goto LAB_10aabcf78;
          }
          uVar22 = (long)plVar24 - (long)plVar27 >> 2;
          if (uVar22 <= uVar1) {
            uVar22 = uVar1;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plVar24 - (long)plVar27)) {
            uVar22 = 0x1fffffffffffffff;
          }
          if (uVar22 == 0) {
            lVar12 = 0;
          }
          else {
            if (uVar22 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10aabcf78;
            }
            lVar12 = uVar22 << 3;
            __Znwm();
          }
          plVar30 = (long *)(lVar12 + ((long)plVar9 - (long)plVar27));
          plVar28 = plVar30 + -lVar26;
          *plVar30 = lVar29;
          plVar24 = plVar28;
          plVar18 = plVar27;
          if (plVar27 != plVar9) {
            do {
              *plVar24 = *plVar18;
              plVar19 = plVar18 + 1;
              *plVar18 = 0;
              plVar24 = plVar24 + 1;
              plVar18 = plVar19;
            } while (plVar19 != plVar9);
            do {
              plVar24 = (long *)*plVar27;
              if (plVar24 != (long *)0x0) {
                plVar18 = plVar24 + 1;
                do {
                  lVar29 = *plVar18;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar5) {
                    *plVar18 = lVar29 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar29 == 0) {
                  (**(code **)(*plVar24 + 0x10))();
                }
              }
              plVar27 = plVar27 + 1;
              plVar18 = plStack_120;
            } while (plVar27 != plVar9);
          }
          plVar24 = (long *)(lVar12 + uVar22 * 8);
          plStack_120 = plVar28;
          plStack_110 = plVar24;
          if (plVar18 != (long *)0x0) {
            __ZdlPv(plVar18);
          }
        }
        plStack_118 = plVar30 + 1;
        plVar10 = plVar10 + 1;
        plVar27 = plVar28;
      } while (plVar10 != plVar2);
    }
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar13 = 0x168;
    __Znwm();
    FUN_10a08ee34();
    if (plVar25 != (long *)0x0) {
      plVar9 = plVar25 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_e0 = 0;
    lStack_d8 = 0;
    uStack_d0 = 0;
    uStack_f0 = uVar31;
    plStack_e8 = plVar25;
    FUN_10aad6794(&lStack_e0,lVar20,lVar6,uVar21);
    puVar11 = (undefined8 *)(param_1 + 0x28);
    plStack_c8 = plStack_a0;
    plStack_c0 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar25 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = *plVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar25 = *(long **)(param_1 + 0x38);
    lStack_b8 = uVar13;
    puStack_b0 = puVar11;
    if (plVar25 == (long *)0x0) {
      puVar14 = (undefined8 *)0x58;
      __Znwm();
      plVar25 = plStack_e8;
      uVar31 = uStack_f0;
      uStack_f0 = 0;
      plStack_e8 = (long *)0x0;
      puVar14[1] = plVar25;
      *puVar14 = uVar31;
      puVar14[3] = lStack_d8;
      puVar14[2] = lStack_e0;
      puVar14[4] = uStack_d0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      puVar14[6] = plStack_c0;
      puVar14[5] = plStack_c8;
      plStack_c0 = (long *)0x0;
      lStack_b8 = 0;
      uStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      puVar14[7] = uVar13;
      puVar14[8] = puVar11;
      puVar14[10] = 0x10aae018c;
      pcStack_88 = FUN_10aadf4f4;
      puStack_80 = puVar14;
      puStack_78 = puVar11;
      (**(code **)*puVar11)(puVar11,&pcStack_88);
    }
    else {
      lStack_90 = 0;
      (**(code **)(*plVar25 + 0x28))(plVar25,0,&lStack_90);
      if (lStack_90 != 0) {
        func_0x0001092af97c(&lStack_90);
LAB_10aabcf78:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10aabcf7c);
        (*pcVar7)();
      }
      puVar14 = (undefined8 *)0x60;
      __Znwm();
      lVar20 = lStack_b8;
      plVar9 = plStack_e8;
      uVar31 = uStack_f0;
      uStack_f0 = 0;
      plStack_e8 = (long *)0x0;
      puVar14[1] = plVar9;
      *puVar14 = uVar31;
      puVar14[3] = lStack_d8;
      puVar14[2] = lStack_e0;
      puVar14[4] = uStack_d0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      puVar14[6] = plStack_c0;
      puVar14[5] = plStack_c8;
      uStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      lStack_b8 = 0;
      puVar14[8] = puStack_b0;
      puVar14[7] = lVar20;
      puVar14[10] = FUN_10aae013c;
      puVar14[0xb] = plVar25;
      pcStack_88 = (code *)0x10aadf4c4;
      puStack_80 = puVar14;
      puStack_78 = puVar11;
      (**(code **)*puVar11)(puVar11,&pcStack_88);
      __ZNSt13exception_ptrD1Ev(&lStack_90);
    }
    lStack_90 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_90);
    lVar20 = lStack_b8;
    lStack_b8 = 0;
    if (lVar20 != 0) {
      FUN_10a08ef58();
      __ZdlPv();
    }
    plVar25 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar9 = plStack_c0 + 1;
      do {
        lVar20 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    if (lStack_e0 != 0) {
      lStack_d8 = lStack_e0;
      __ZdlPv();
    }
    plVar25 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar9 = plStack_e8 + 1;
      do {
        lVar20 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    plVar25 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar9 = plStack_98 + 1;
      do {
        lVar20 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    if (plVar23 != (long *)0x0) {
      plVar25 = plVar23 + 1;
      do {
        lVar20 = *plVar25;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *plVar25 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    if (lStack_138 != 0) {
      lStack_130 = lStack_138;
      __ZdlPv();
    }
    if (plStack_118 != plStack_120) {
      uVar21 = 0;
      do {
        if ((ulong)((long)puStack_100 - (long)puStack_108 >> 2) <= uVar21) goto LAB_10aabcf78;
        if (puStack_108[uVar21] == 2) {
          lVar20 = plStack_120[uVar21];
          plStack_120[uVar21] = 0;
          plVar23 = *(long **)(param_1 + 0xf8);
          *(long *)(param_1 + 0xf8) = lVar20;
          if (plVar23 != (long *)0x0) {
            plVar25 = plVar23 + 1;
            do {
              lVar20 = *plVar25;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *plVar25 = lVar20 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_10aabcee0:
            if (lVar20 == 0) {
              (**(code **)(*plVar23 + 0x10))();
            }
          }
        }
        else {
          if (puStack_108[uVar21] != 3) {
            FUN_10a00946c(&UNK_10f68dbf3);
            goto LAB_10aabcf78;
          }
          lVar20 = plStack_120[uVar21];
          plStack_120[uVar21] = 0;
          plVar23 = *(long **)(param_1 + 0xe0);
          *(long *)(param_1 + 0xe0) = lVar20;
          if (plVar23 != (long *)0x0) {
            plVar25 = plVar23 + 1;
            do {
              lVar20 = *plVar25;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *plVar25 = lVar20 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            goto LAB_10aabcee0;
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < (ulong)((long)plStack_118 - (long)plStack_120 >> 3));
    }
    FUN_10aad6870(&plStack_120);
  }
  if (puStack_108 != (undefined4 *)0x0) {
    __ZdlPv(puStack_108);
  }
  return;
}



/* Entry: 10aabd09c; end: 10aabd09f;  */

long FUN_10aabd09c(long param_1)

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



/* Entry: 10aabd0a0; end: 10aabdbc7;  */

void FUN_10aabd0a0(undefined ***param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long lVar17;
  undefined **ppuVar18;
  long *plVar19;
  long *plVar20;
  long *plStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  code *pcStack_270;
  undefined **appuStack_268 [7];
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined **appuStack_220 [7];
  undefined **ppuStack_1e8;
  code *pcStack_1e0;
  long alStack_1d8 [7];
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **appuStack_190 [7];
  long *plStack_158;
  long *plStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined **appuStack_138 [7];
  code *pcStack_100;
  undefined8 *apuStack_f8 [7];
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar11 = param_1;
  if ((*(char *)((long)param_1 + 300) == '\x01') && (param_1[0x22] == (undefined **)0x0)) {
    FUN_109d1a80c();
    ppuStack_2b8 = *pppuVar11;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    puStack_2f8 = &UNK_1053a6a3c;
    ppuStack_2f0 = &PTR_DAT_110ae9180;
    pcStack_270 = FUN_10aae1d0c;
    appuStack_268[0] = &PTR_DAT_110c440c8;
    puStack_228 = &UNK_1053a6a3c;
    appuStack_220[0] = &PTR_DAT_110ae9180;
    puStack_2b0 = &UNK_1053a6a3c;
    ppuStack_2a8 = &PTR_DAT_110ae9180;
    ppuVar8 = (undefined **)0x278;
    ppuStack_230 = ppuStack_2b8;
    __Znwm();
    pcStack_100 = (code *)0x0;
    FUN_10aab8180();
    pcVar7 = pcStack_100;
    pcStack_100 = (code *)0x0;
    if (pcVar7 != (code *)0x0) {
      FUN_10a08ef58();
      __ZdlPv();
    }
    *ppuVar8 = (undefined *)&PTR_FUN_110c42db0;
    ppuVar8[3] = (undefined *)&PTR_FUN_110c42e78;
    *(undefined2 *)(ppuVar8 + 0x3e) = 0;
    ppuVar8[0x40] = (undefined *)0x0;
    ppuVar8[0x3f] = (undefined *)0x0;
    ppuVar8[0x42] = (undefined *)0x0;
    ppuVar8[0x41] = (undefined *)0x0;
    ppuVar8[0x44] = (undefined *)0x0;
    ppuVar8[0x43] = (undefined *)0x0;
    *(undefined4 *)(ppuVar8 + 0x45) = 0x3f800000;
    ppuVar8[0x47] = (undefined *)0x0;
    ppuVar8[0x46] = (undefined *)0x0;
    func_0x000107c2b054(ppuVar8 + 0x48,&UNK_10f68da37);
    ppuVar8[0x4c] = (undefined *)0x0;
    ppuVar8[0x4b] = (undefined *)0x0;
    ppuVar8[0x4e] = (undefined *)0x0;
    ppuVar8[0x4d] = (undefined *)0x0;
    puVar9 = (undefined8 *)0x28;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_DAT_110af99a8;
    puVar9[4] = 0;
    puVar9[3] = &PTR_DAT_110af99f8;
    ppuVar8[0x46] = (undefined *)(puVar9 + 3);
    plVar20 = (long *)ppuVar8[0x47];
    ppuVar8[0x47] = (undefined *)puVar9;
    if (plVar20 != (long *)0x0) {
      plVar19 = plVar20 + 1;
      do {
        lVar13 = *plVar19;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *plVar19 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    ppuVar8[0x46][8] = 0;
    pcStack_100 = pcStack_270;
    (*(code *)appuStack_268[0][2])(apuStack_f8,appuStack_268);
    ppuStack_c0 = ppuStack_230;
    puStack_b8 = puStack_228;
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    (*(code *)appuStack_220[0][2])(appuStack_b0,appuStack_220);
    puStack_228 = &UNK_1053a6a3c;
    (*(code *)*appuStack_220[0])(appuStack_220);
    appuStack_220[0] = &PTR_DAT_110ae9180;
    plStack_78 = (long *)0x0;
    plVar20 = (long *)0xb0;
    __Znwm();
    ppuVar15 = ppuStack_c0;
    plVar20[2] = 0;
    plVar20[1] = 0x200000006;
    *(undefined2 *)(plVar20 + 3) = 4;
    plVar20[5] = 0;
    plVar20[4] = 0;
    plVar20[7] = 0;
    plVar20[6] = 0;
    plVar20[9] = 0;
    plVar20[8] = 0;
    plVar20[0xb] = 0;
    plVar20[10] = 0;
    plVar20[0xd] = 0;
    plVar20[0xc] = 0;
    plVar20[0xf] = 0;
    plVar20[0xe] = 0;
    plVar20[0x10] = 0;
    plVar20[0x11] = (long)(plVar20 + 3);
    plVar20[0x12] = 0;
    *plVar20 = (long)&PTR_DAT_110c440a0;
    *(undefined1 *)(plVar20 + 0x13) = 0;
    *(undefined1 *)(plVar20 + 0x15) = 0;
    plStack_320 = (long *)0x0;
    lStack_318 = 0;
    ppuStack_148 = ppuStack_c0;
    puStack_140 = puStack_b8;
    appuStack_138[0] = &PTR_DAT_110ae9180;
    plStack_150 = plVar20;
    plStack_78 = plVar20;
    (*(code *)appuStack_b0[0][2])(appuStack_138,appuStack_b0);
    puStack_b8 = &UNK_1053a6a3c;
    (*(code *)*appuStack_b0[0])(appuStack_b0);
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    puVar9 = (undefined8 *)0xb8;
    __Znwm();
    *puVar9 = FUN_10aae8704;
    puVar9[1] = FUN_10aae89a8;
    func_0x0001092ba17c(puVar9 + 2);
    plVar20 = plStack_150;
    plVar19 = (long *)puVar9[7];
    if (plVar19 != (long *)0x0) {
      plVar1 = plVar19 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plStack_150 = (long *)0x0;
    puVar9[10] = ppuStack_148;
    puVar9[9] = plVar20;
    puVar9[0xc] = &PTR_DAT_110ae9180;
    puVar9[0xb] = puStack_140;
    (*(code *)appuStack_138[0][2])(puVar9 + 0xc,appuStack_138);
    puStack_140 = &UNK_1053a6a3c;
    (*(code *)*appuStack_138[0])(appuStack_138);
    appuStack_138[0] = &PTR_DAT_110ae9180;
    puVar9[0x13] = ppuVar15;
    *(undefined1 *)(puVar9 + 0x14) = 0;
    *(undefined1 *)(puVar9 + 0x16) = 0;
    puVar10 = puVar9 + 0x13;
    func_0x0001092ba064(puVar10,puVar9);
    if (((ulong)puVar10 & 1) == 0) {
      FUN_10aae17c8(puVar9 + 0x15,puVar9 + 9);
      puVar9[0x13] = puVar9[0x15];
      plVar20 = (long *)(puVar9[0x15] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((uint)*(undefined8 *)(puVar9[0x13] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar9 + 0x16) = 1;
        lVar13 = puVar9[0x13];
        plVar20 = (long *)(lVar13 + 0x10);
        uVar14 = puVar9[3];
        do {
          lVar17 = *plVar20;
          if (lVar17 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar6) {
              *plVar20 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              uStack_310 = 0;
              puStack_308 = puVar9;
              uStack_300 = uVar14;
              func_0x000109d1b588(lVar13 + 0x18,&uStack_310);
              *(undefined8 *)(lVar13 + 0x10) = 0;
              goto joined_r0x00010aabd5a8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar17 >> 1 & 1) == 0);
      }
      pppuVar11 = (undefined ***)puVar9[0x13];
      if (((uint)*(undefined8 *)(puVar9[0x13] + 0x10) >> 5 & 1) != 0) goto LAB_10aabd934;
      if (pppuVar11 != (undefined ***)0x0) {
        pppuVar2 = pppuVar11 + 1;
        do {
          ppuVar15 = *pppuVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar6) {
            *pppuVar2 = (undefined **)((long)ppuVar15 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)ppuVar15 & 0x1fffffffc) == 4) {
          do {
            ppuVar15 = *pppuVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
            if (bVar6) {
              *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined **)((long)ppuVar15 + -1) == (undefined **)0x0) {
            (*(code *)(*pppuVar11)[1])();
          }
        }
      }
      plVar20 = (long *)puVar9[0x15];
      if (plVar20 != (long *)0x0) {
        puVar3 = (ulong *)(plVar20 + 1);
        do {
          uVar16 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar9 + 2);
      func_0x0001092ba41c(puVar9 + 10);
      plVar20 = (long *)puVar9[9];
      if (plVar20 != (long *)0x0) {
        puVar3 = (ulong *)(plVar20 + 1);
        do {
          uVar16 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar16 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar16 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar9 + 2);
      __ZdlPv(puVar9);
    }
joined_r0x00010aabd5a8:
    if (plVar19 != (long *)0x0) {
      puVar3 = (ulong *)(plVar19 + 1);
      do {
        uVar16 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar16 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar16 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plVar19 + 8))(plVar19);
        }
      }
    }
    func_0x0001092ba41c((ulong)&plStack_150 | 8);
    if (plStack_150 != (long *)0x0) {
      puVar3 = (ulong *)(plStack_150 + 1);
      do {
        uVar16 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar16 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar16 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plStack_150 + 8))();
        }
      }
    }
    if (lStack_318 != 0) {
      func_0x0001092b4274((ulong)&plStack_320 | 8);
    }
    if (plStack_320 != (long *)0x0) {
      puVar3 = (ulong *)(plStack_320 + 1);
      do {
        uVar16 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar16 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar16 & 0x1fffffffc) == 4) {
        do {
          uVar16 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar16 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar16 - 1 == 0) {
          (**(code **)(*plStack_320 + 8))();
        }
      }
    }
    pcStack_1e0 = pcStack_100;
    ppuStack_1e8 = ppuVar8;
    (*(code *)apuStack_f8[0][2])(alStack_1d8,apuStack_f8);
    ppuStack_1a0 = ppuStack_c0;
    puStack_198 = puStack_b8;
    appuStack_190[0] = &PTR_DAT_110ae9180;
    (*(code *)appuStack_b0[0][2])(appuStack_190,appuStack_b0);
    puStack_b8 = &UNK_1053a6a3c;
    (*(code *)*appuStack_b0[0])(appuStack_b0);
    plStack_158 = plStack_78;
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    plStack_78 = (long *)0x0;
    func_0x0001092ba41c(&ppuStack_c0);
    (*(code *)*apuStack_f8[0])(apuStack_f8);
    ppuVar8 = ppuStack_1e8;
    if (ppuStack_1e8 == (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
    }
    else {
      ppuVar15 = (undefined **)0xb0;
      __Znwm();
      pcStack_100 = pcStack_1e0;
      (**(code **)(alStack_1d8[0] + 0x10))(apuStack_f8,alStack_1d8);
      ppuStack_c0 = ppuStack_1a0;
      puStack_b8 = puStack_198;
      appuStack_b0[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_190[0][2])(appuStack_b0,appuStack_190);
      puStack_198 = &UNK_1053a6a3c;
      (*(code *)*appuStack_190[0])(appuStack_190);
      plStack_78 = plStack_158;
      appuStack_190[0] = &PTR_DAT_110ae9180;
      plStack_158 = (long *)0x0;
      ppuVar18 = ppuVar15 + 1;
      *ppuVar18 = (undefined *)0x0;
      *ppuVar15 = (undefined *)&PTR_FUN_110c440f0;
      ppuVar15[2] = (undefined *)0x0;
      ppuVar15[3] = (undefined *)ppuVar8;
      ppuVar15[4] = pcStack_100;
      (*(code *)apuStack_f8[0][2])(ppuVar15 + 5,apuStack_f8);
      ppuVar15[0xe] = (undefined *)&PTR_DAT_110ae9180;
      ppuVar15[0xc] = (undefined *)ppuStack_c0;
      ppuVar15[0xd] = puStack_b8;
      (*(code *)appuStack_b0[0][2])(ppuVar15 + 0xe,appuStack_b0);
      puStack_b8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_b0[0])(appuStack_b0);
      ppuVar15[0x15] = (undefined *)plStack_78;
      appuStack_b0[0] = &PTR_DAT_110ae9180;
      plStack_78 = (long *)0x0;
      func_0x0001092ba41c(&ppuStack_c0);
      (*(code *)*apuStack_f8[0])(apuStack_f8);
      if ((ppuStack_1e8 != (undefined **)0x0) &&
         ((ppuStack_1e8[2] == (undefined *)0x0 || (*(long *)(ppuStack_1e8[2] + 8) == -1)))) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar6) {
            *ppuVar18 = *ppuVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuVar4 = ppuVar15 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = *ppuVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar12 = ppuStack_1e8[2];
        ppuStack_1e8[1] = (undefined *)ppuStack_1e8;
        ppuStack_1e8[2] = (undefined *)ppuVar15;
        if (puVar12 != (undefined *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        do {
          puVar12 = *ppuVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
          if (bVar6) {
            *ppuVar18 = puVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
        }
      }
    }
    ppuStack_1e8 = (undefined **)0x0;
    ppuVar18 = param_1[0x23];
    param_1[0x22] = ppuVar8;
    param_1[0x23] = ppuVar15;
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar8 = ppuVar18 + 1;
      do {
        puVar12 = *ppuVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar6) {
          *ppuVar8 = puVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    FUN_10aae1d2c(&ppuStack_1e8);
    func_0x0001092ba41c(&ppuStack_230);
    (*(code *)*appuStack_268[0])(appuStack_268);
    func_0x0001092ba41c(&ppuStack_2b8);
    pppuVar11 = &ppuStack_2f0;
    (*(code *)*ppuStack_2f0)(pppuVar11);
    if (param_1[0x26] != (undefined **)0x0) {
      pppuVar11 = (undefined ***)param_1[0x22];
      (*(code *)(*pppuVar11)[7])(pppuVar11,param_1 + 0x26);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10aabd934:
  func_0x0001092af97c(pppuVar11 + 0x12);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aabdb6c);
  (*pcVar7)();
}



/* Entry: 10aabdbc8; end: 10aabdc1b;  */

long * FUN_10aabdbc8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x00010aadf46c(param_1 + 1);
  plVar4 = (long *)*param_1;
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
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10aabdc1c; end: 10aabdcdb;  */

void FUN_10aabdc1c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  
  puVar2 = (undefined4 *)param_1[1];
  uVar7 = (undefined4)param_2;
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10aad6828();
      FUN_10a4ec3f0(param_1 + 0x26);
      plVar4 = (long *)param_1[0x22];
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aabdd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
        return;
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    FUN_10aad683c();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)(uVar6 + lVar8);
    lVar9 = (long)puVar2 - (param_1[1] - lVar3);
    puVar10 = puVar2 + 1;
    *puVar2 = uVar7;
    _memcpy(lVar9,lVar3);
    lVar8 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    param_1[2] = uVar6 + param_2 * 4;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10aabdcdc; end: 10aabdd23;  */

void FUN_10aabdcdc(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_10a4ec3f0(param_1 + 0x130);
  plVar1 = *(long **)(param_1 + 0x110);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aabdd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10aabdd24; end: 10aabdedf;  */

bool FUN_10aabdd24(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_38;
  
  if (param_1[1] != 0) {
    return true;
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    return false;
  }
  if ((param_2 & 1) == 0) {
    plVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plStack_40 = plVar4;
    func_0x0001093f25b0(plVar6,&plStack_40);
    if ((int)plVar6 != 0) goto LAB_10aabde40;
    plVar6 = (long *)*param_1;
  }
  *param_1 = 0;
  plStack_40 = plVar6 + 3;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(plVar6,&plStack_40);
  lVar7 = plVar6[2];
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar7 != 0) {
    __ZNSt13exception_ptrC1ERKS_(&uStack_48,plVar6 + 2);
    __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_48);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aabde80);
    (*pcVar3)();
  }
  lVar8 = plVar6[0x13];
  lVar7 = plVar6[0x12];
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  if (cStack_38 == '\x01') {
    __ZNSt3__15mutex6unlockEv(plStack_40);
  }
  plVar4 = plVar6 + 1;
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
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  plVar6 = (long *)param_1[2];
  param_1[2] = lVar8;
  param_1[1] = lVar7;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
LAB_10aabde40:
  return param_1[1] != 0;
}



/* Entry: 10aabdee0; end: 10aabe007;  */

uint FUN_10aabdee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  FUN_10aabd0a0();
  puVar1 = *(undefined8 **)(param_1 + 0x110);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x00010aabbc54(*(undefined8 *)(param_1 + 0x110),&uStack_38,param_2);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x110);
    (**(code **)*puVar1)();
    if (((ulong)puVar1 & 1) != 0) {
      uVar3 = 1;
      goto LAB_10aabdf68;
    }
  }
  lVar2 = param_1 + 0xe0;
  FUN_10aabdd24(lVar2,param_2);
  param_1 = param_1 + 0xf8;
  FUN_10aabdd24(param_1,param_2);
  uVar3 = (uint)lVar2 | (uint)param_1;
LAB_10aabdf68:
  return uVar3 & 1;
}



/* Entry: 10aabe008; end: 10aabe277;  */

/* WARNING: Removing unreachable block (ram,0x00010aabe1d0) */

void FUN_10aabe008(long param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined **ppuVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *unaff_x25;
  undefined1 auStack_258 [8];
  undefined **ppuStack_250;
  undefined8 **ppuStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined **appuStack_228 [36];
  undefined8 *puStack_108;
  undefined8 ****ppppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [7];
  undefined8 uStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10aabc8a4(param_1,1);
  lVar3 = param_1 + 0xf8;
  FUN_10aabdd24(lVar3,1);
  if ((((int)lVar3 == 0) ||
      (puVar4 = *(undefined8 **)(param_1 + 0x100), puVar4 == (undefined8 *)0x0)) ||
     ((**(code **)*puVar4)(), (int)puVar4 == 0)) {
    func_0x000107c2b054(&ppppuStack_100,&UNK_10f68dc36);
    uVar1 = uStack_f8;
    pppppuVar2 = (undefined8 *****)ppppuStack_100;
    if (-1 < (long)uStack_f0) {
      uVar1 = uStack_f0 >> 0x38;
      pppppuVar2 = &ppppuStack_100;
    }
    FUN_10ae03140(0,pppppuVar2,uVar1);
    param_3 = &PTR_PTR_113306168;
    ppuVar7 = param_3;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113306168);
    FUN_10a002a94(appuStack_228,&ppppuStack_100);
    appuStack_228[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(&puStack_108,appuStack_228);
    __ZNSt13runtime_errorD2Ev(appuStack_228);
    FUN_10aabe278(param_5,&puStack_108);
    ppuVar5 = &puStack_108;
    __ZNSt13exception_ptrD1Ev();
  }
  else {
    plVar9 = *(long **)(param_1 + 0x100);
    uStack_98 = *param_4;
    unaff_x25 = &uStack_98;
    (**(code **)(param_4[1] + 0x18))(apuStack_90,param_4 + 1);
    uStack_d8 = *param_5;
    param_4 = &uStack_d8;
    (**(code **)(param_5[1] + 0x18))(apuStack_d0,param_5 + 1);
    uStack_f8 = param_6[1];
    ppppuStack_100 = (undefined8 ****)*param_6;
    uStack_e8 = param_6[3];
    uStack_f0 = param_6[2];
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,param_3,&uStack_98,&uStack_d8,&ppppuStack_100,1);
    (*(code *)*apuStack_d0[0])(apuStack_d0);
    ppuVar5 = apuStack_90;
    (*(code *)*apuStack_90[0])();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*apuStack_d0[0])(param_4 + 1);
    (*(code *)*apuStack_90[0])(unaff_x25 + 1);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    pcStack_238 = FUN_10aabe278;
    pcVar8 = (code *)*ppuVar6;
    ppuStack_250 = param_3;
    ppuStack_248 = ppuVar5;
    puStack_240 = &stack0xfffffffffffffff0;
    __ZNSt13exception_ptrC1ERKS_(auStack_258);
    (*pcVar8)(auStack_258,ppuVar6);
    __ZNSt13exception_ptrD1Ev(auStack_258);
    return;
  }
  return;
}



/* Entry: 10aabe278; end: 10aabe2cf;  */

void FUN_10aabe278(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  pcVar1 = (code *)*param_1;
  __ZNSt13exception_ptrC1ERKS_(auStack_28);
  (*pcVar1)(auStack_28,param_1);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  return;
}



/* Entry: 10aabe2d0; end: 10aabe367;  */

long FUN_10aabe2d0(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x68))();
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aabe368; end: 10aabefdb;  */

void FUN_10aabe368(undefined8 **param_1,code ***param_2,ulong param_3,code ****param_4,long *param_5
                  ,float *param_6,code ***param_7)

{
  long *plVar1;
  code **ppcVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  code ***pppcVar8;
  undefined8 **ppuVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  code ****ppppcVar16;
  code ***pppcVar17;
  undefined8 *puStack_548;
  long lStack_540;
  undefined5 uStack_538;
  undefined3 uStack_533;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined5 uStack_528;
  undefined3 uStack_523;
  long lStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  code **appcStack_4f8 [7];
  code **ppcStack_4c0;
  undefined8 *apuStack_4b8 [7];
  long lStack_480;
  code **appcStack_478 [7];
  code **ppcStack_440;
  undefined8 *apuStack_438 [7];
  long lStack_400;
  code **appcStack_3f8 [7];
  code **ppcStack_3c0;
  undefined8 *apuStack_3b8 [7];
  long lStack_380;
  code **appcStack_378 [7];
  code **ppcStack_340;
  undefined8 *apuStack_338 [7];
  code **ppcStack_300;
  undefined8 *apuStack_2f8 [7];
  code **ppcStack_2c0;
  undefined8 *apuStack_2b8 [7];
  code ***pppcStack_280;
  undefined8 *apuStack_278 [7];
  code **ppcStack_240;
  undefined8 *apuStack_238 [7];
  code ***pppcStack_200;
  undefined8 *apuStack_1f8 [7];
  code ***pppcStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  code **ppcStack_180;
  undefined8 *puStack_178;
  code ***pppcStack_170;
  undefined8 *puStack_168;
  code **ppcStack_160;
  undefined8 *apuStack_158 [7];
  code ***pppcStack_120;
  undefined8 *apuStack_118 [7];
  long lStack_e0;
  undefined5 uStack_d8;
  undefined3 uStack_d3;
  undefined5 uStack_d0;
  undefined3 uStack_cb;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  code **ppcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppcVar8 = param_2;
  FUN_10aabd0a0();
  if (((param_3 & 1) == 0) && (*(char *)(param_6 + 7) == '\x01')) {
    ppuVar12 = &PTR_PTR_113306180;
    FUN_10ae079a0(0,&PTR_PTR_113306180);
    FUN_10ae07cd4(ppuVar12,&PTR_PTR_113306180);
    ppcStack_240 = (code **)*param_4;
    (*(code *)param_4[1][3])(apuStack_238,param_4 + 1);
    pppcStack_280 = (code ***)*param_5;
    param_4 = &pppcStack_280;
    (**(code **)(param_5[1] + 0x18))(apuStack_278,param_5 + 1);
    lStack_540 = *(long *)param_6;
    uStack_538 = (undefined5)*(undefined8 *)(param_6 + 2);
    uStack_533 = (undefined3)((ulong)*(undefined8 *)(param_6 + 2) >> 0x28);
    uStack_528 = (undefined5)*(undefined8 *)(param_6 + 6);
    uStack_523 = (undefined3)((ulong)*(undefined8 *)(param_6 + 6) >> 0x28);
    uStack_530 = (undefined4)*(undefined8 *)(param_6 + 4);
    uStack_52c = (undefined4)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20);
    ppcVar2 = (code **)param_1[1];
    puVar11 = param_1[2];
    if (puVar11 == (undefined8 *)0x0) {
      puStack_178 = (undefined8 *)0x0;
    }
    else {
      plVar15 = puVar11 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puStack_178 = puVar11;
      } while (cVar4 != '\0');
    }
    puStack_168 = (undefined8 *)((ulong)puStack_168 & 0xffffffffffffff00);
    ppcStack_160 = ppcStack_240;
    ppcStack_180 = ppcVar2;
    pppcStack_170 = param_2;
    (*(code *)apuStack_238[0][3])(apuStack_158,apuStack_238);
    pppcStack_120 = pppcStack_280;
    (*(code *)apuStack_278[0][3])(apuStack_118,apuStack_278);
    uStack_d8 = uStack_538;
    lStack_e0 = lStack_540;
    uStack_cb = uStack_52c._1_3_;
    uStack_c8 = uStack_528;
    uStack_d3 = uStack_533;
    uStack_d0 = (undefined5)
                (CONCAT17((undefined1)uStack_52c,CONCAT43(uStack_530,uStack_533)) >> 0x18);
    ppcStack_b8 = (code **)FUN_10aae20c0;
    ppuStack_b0 = &PTR_FUN_110c44140;
    puVar7 = (undefined8 *)0xc0;
    __Znwm();
    *puVar7 = ppcStack_180;
    puVar7[1] = puStack_178;
    puVar7[2] = pppcStack_170;
    *(undefined1 *)(puVar7 + 3) = puStack_168._0_1_;
    puVar7[4] = ppcStack_160;
    puStack_178 = (undefined8 *)0x0;
    ppcStack_180 = (code **)0x0;
    (*(code *)apuStack_158[0][2])(puVar7 + 5,apuStack_158);
    puVar7[0xc] = pppcStack_120;
    (*(code *)apuStack_118[0][2])(puVar7 + 0xd,apuStack_118);
    puVar7[0x15] = CONCAT35(uStack_d3,uStack_d8);
    puVar7[0x14] = lStack_e0;
    puVar7[0x17] = CONCAT35(uStack_c3,uStack_c8);
    puVar7[0x16] = CONCAT35(uStack_cb,uStack_d0);
    puStack_a8 = puVar7;
    (*(code *)*apuStack_118[0])(apuStack_118);
    (*(code *)*apuStack_158[0])(apuStack_158);
    if (puStack_178 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (puVar11 != (undefined8 *)0x0) {
      plVar15 = puVar11 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puStack_168 = (undefined8 *)((ulong)puStack_168 & 0xffffffffffffff00);
    ppcStack_160 = ppcStack_240;
    ppcStack_180 = ppcVar2;
    puStack_178 = puVar11;
    pppcStack_170 = param_2;
    (*(code *)apuStack_238[0][3])(apuStack_158,apuStack_238);
    pppcStack_120 = pppcStack_280;
    (*(code *)apuStack_278[0][3])(apuStack_118,apuStack_278);
    uStack_d8 = uStack_538;
    lStack_e0 = lStack_540;
    uStack_cb = uStack_52c._1_3_;
    uStack_c8 = uStack_528;
    uStack_d3 = uStack_533;
    uStack_d0 = (undefined5)
                (CONCAT17((undefined1)uStack_52c,CONCAT43(uStack_530,uStack_533)) >> 0x18);
    pppcStack_1c0 = (code ***)FUN_10aae240c;
    ppuStack_1b8 = &PTR_FUN_110c44160;
    puVar7 = (undefined8 *)0xc0;
    __Znwm();
    puVar7[1] = puStack_178;
    *puVar7 = ppcStack_180;
    puStack_178 = (undefined8 *)0x0;
    ppcStack_180 = (code **)0x0;
    puVar7[2] = pppcStack_170;
    *(undefined1 *)(puVar7 + 3) = puStack_168._0_1_;
    puVar7[4] = ppcStack_160;
    (*(code *)apuStack_158[0][2])(puVar7 + 5,apuStack_158);
    puVar7[0xc] = pppcStack_120;
    (*(code *)apuStack_118[0][2])(puVar7 + 0xd,apuStack_118);
    puVar7[0x15] = CONCAT35(uStack_d3,uStack_d8);
    puVar7[0x14] = lStack_e0;
    puVar7[0x17] = CONCAT35(uStack_c3,uStack_c8);
    puVar7[0x16] = CONCAT35(uStack_cb,uStack_d0);
    puStack_1b0 = puVar7;
    (*(code *)*apuStack_118[0])(apuStack_118);
    (*(code *)*apuStack_158[0])(apuStack_158);
    if (puStack_178 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puVar7 = param_1[0x22];
    if (puVar7 == (undefined8 *)0x0) {
LAB_10aabe894:
      ppcStack_180 = ppcStack_240;
      (*(code *)apuStack_238[0][3])(&puStack_178,apuStack_238);
      pppcStack_200 = pppcStack_280;
      (*(code *)apuStack_278[0][3])(apuStack_1f8,apuStack_278);
      param_7 = param_2;
      FUN_10aabe008(param_1,param_2,0,&ppcStack_180,&pppcStack_200,&lStack_540);
    }
    else {
      (**(code **)*puVar7)();
      if (((ulong)puVar7 & 1) == 0) {
        pppcVar8 = param_2;
        FUN_10aab9bcc(param_2,&lStack_540);
        ppcStack_180 = (code **)((ulong)ppcStack_180 & 0xffffffffffffff00);
        puStack_178 = (undefined8 *)((ulong)puStack_178 & 0xffffffffffffff00);
        FUN_10aab9c6c(uStack_530);
        pppcStack_200 = pppcVar8;
        func_0x00010aabbc54(param_1[0x22],&pppcStack_200,1);
      }
      puVar7 = param_1[0x22];
      (**(code **)*puVar7)();
      if ((int)puVar7 == 0) goto LAB_10aabe894;
      param_1 = (undefined8 **)param_1[0x22];
      ppcStack_180 = ppcStack_b8;
      (*(code *)ppuStack_b0[3])(&puStack_178,&ppuStack_b0);
      pppcStack_200 = pppcStack_1c0;
      (*(code *)ppuStack_1b8[3])(apuStack_1f8,&ppuStack_1b8);
      uStack_518 = CONCAT35(uStack_533,uStack_538);
      uStack_508 = CONCAT35(uStack_523,uStack_528);
      uStack_510 = CONCAT44(uStack_52c,uStack_530);
      lStack_520 = lStack_540;
      param_7 = param_2;
      (*(code *)(*param_1)[3])(param_1,param_2,0,&ppcStack_180,&pppcStack_200,&lStack_520,1);
    }
    (*(code *)*apuStack_1f8[0])(apuStack_1f8);
    (*(code *)*puStack_178)(&puStack_178);
    (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
    if (puVar11 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar11);
    }
    (*(code *)*apuStack_278[0])(apuStack_278);
    pcVar13 = (code *)*apuStack_238[0];
    ppuVar9 = apuStack_238;
LAB_10aabe960:
    (*pcVar13)(ppuVar9);
    pppcVar17 = param_2;
  }
  else {
    puVar11 = param_1[0x22];
    if ((puVar11 != (undefined8 *)0x0) && ((**(code **)*puVar11)(), (int)puVar11 != 0)) {
      param_1 = (undefined8 **)param_1[0x22];
      ppcStack_2c0 = (code **)*param_4;
      (*(code *)param_4[1][3])(apuStack_2b8,param_4 + 1);
      ppcStack_300 = (code **)*param_5;
      param_4 = (code ****)&ppcStack_300;
      (**(code **)(param_5[1] + 0x18))(apuStack_2f8,param_5 + 1);
      puStack_178 = *(undefined8 **)(param_6 + 2);
      ppcStack_180 = *(code ***)param_6;
      puStack_168 = *(undefined8 **)(param_6 + 6);
      pppcStack_170 = *(code ****)(param_6 + 4);
      param_7 = param_2;
      (*(code *)(*param_1)[3])(param_1,param_2,param_3,&ppcStack_2c0,&ppcStack_300,&ppcStack_180,1);
      (*(code *)*apuStack_2f8[0])(apuStack_2f8);
      pcVar13 = (code *)*apuStack_2b8[0];
      ppuVar9 = apuStack_2b8;
      goto LAB_10aabe960;
    }
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 2) {
LAB_10aabe548:
      __ZNSt3__16chrono12steady_clock3nowEv();
      bVar5 = (long)param_1[0x24] <= (long)puVar11 - (long)param_1[3];
    }
    else if (iVar3 == 1) {
      bVar5 = true;
    }
    else {
      if (iVar3 != 0) goto LAB_10aabed5c;
      if (*param_6 / param_6[4] < 0.025) goto LAB_10aabe548;
      bVar5 = false;
    }
    ppcStack_180 = (code **)param_1[1];
    puStack_548 = param_1[2];
    if (puStack_548 == (undefined8 *)0x0) {
      puStack_178 = (undefined8 *)0x0;
    }
    else {
      plVar15 = puStack_548 + 2;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puStack_178 = puStack_548;
      } while (cVar4 != '\0');
    }
    pppcStack_170 = *param_4;
    ppppcVar16 = param_4 + 1;
    (*(code *)(*ppppcVar16)[3])(&puStack_168,ppppcVar16);
    ppcStack_b8 = (code **)FUN_10aae2750;
    ppuStack_b0 = &PTR_FUN_110c44180;
    puVar11 = (undefined8 *)0x50;
    __Znwm();
    puVar11[1] = puStack_178;
    *puVar11 = ppcStack_180;
    puStack_178 = (undefined8 *)0x0;
    ppcStack_180 = (code **)0x0;
    puVar11[2] = pppcStack_170;
    (*(code *)puStack_168[2])(puVar11 + 3,&puStack_168);
    puStack_a8 = puVar11;
    (*(code *)*puStack_168)(&puStack_168);
    if (puStack_178 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppcVar17 = &ppcStack_b8;
    if (bVar5) {
      FUN_10aabc8a4(param_1,1);
      ppuVar9 = param_1 + 0x1f;
      pppcVar8 = param_7;
      FUN_10aabdd24(ppuVar9,param_7);
      if ((int)ppuVar9 == 0) {
        ppuVar9 = param_1 + 0x1c;
        FUN_10aabdd24(ppuVar9,param_7);
        if ((((int)ppuVar9 != 0) && (puVar11 = param_1[0x1d], puVar11 != (undefined8 *)0x0)) &&
           ((**(code **)*puVar11)(), (int)puVar11 != 0)) {
          plVar15 = param_1[0x1d];
          ppcStack_3c0 = (code **)*param_4;
          param_1 = apuStack_3b8;
          (*(code *)param_4[1][3])(param_1,ppppcVar16);
          lStack_400 = *param_5;
          param_4 = (code ****)appcStack_3f8;
          (**(code **)(param_5[1] + 0x18))(param_4,param_5 + 1);
          puStack_178 = *(undefined8 **)(param_6 + 2);
          ppcStack_180 = *(code ***)param_6;
          puStack_168 = *(undefined8 **)(param_6 + 6);
          pppcStack_170 = *(code ****)(param_6 + 4);
          (**(code **)(*plVar15 + 0x18))
                    (plVar15,param_2,param_3,&ppcStack_3c0,&lStack_400,&ppcStack_180,1);
          goto LAB_10aabece4;
        }
      }
      else {
        puVar11 = param_1[0x20];
        param_7 = pppcVar8;
        if ((puVar11 != (undefined8 *)0x0) &&
           ((**(code **)*puVar11)(), param_7 = pppcVar8, (int)puVar11 != 0)) {
          plVar15 = param_1[0x20];
          ppcStack_340 = ppcStack_b8;
          param_1 = apuStack_338;
          (*(code *)ppuStack_b0[3])(param_1,&ppuStack_b0);
          lStack_380 = *param_5;
          param_4 = (code ****)appcStack_378;
          (**(code **)(param_5[1] + 0x18))(param_4,param_5 + 1);
          puStack_178 = *(undefined8 **)(param_6 + 2);
          ppcStack_180 = *(code ***)param_6;
          puStack_168 = *(undefined8 **)(param_6 + 6);
          pppcStack_170 = *(code ****)(param_6 + 4);
          (**(code **)(*plVar15 + 0x18))
                    (plVar15,param_2,param_3,&ppcStack_340,&lStack_380,&ppcStack_180,1);
LAB_10aabece4:
          (*(code *)**param_4)(param_4);
          (*(code *)**param_1)(param_1);
          param_7 = param_2;
        }
      }
    }
    else {
      ppuVar9 = param_1 + 0x1c;
      pppcVar8 = param_7;
      FUN_10aabdd24(ppuVar9,param_7);
      if ((int)ppuVar9 == 0) {
        ppuVar9 = param_1 + 0x1f;
        FUN_10aabdd24(ppuVar9,param_7);
        if ((((int)ppuVar9 != 0) && (puVar11 = param_1[0x20], puVar11 != (undefined8 *)0x0)) &&
           ((**(code **)*puVar11)(), (int)puVar11 != 0)) {
          plVar15 = param_1[0x20];
          ppcStack_4c0 = ppcStack_b8;
          param_1 = apuStack_4b8;
          (*(code *)ppuStack_b0[3])(param_1,&ppuStack_b0);
          lStack_500 = *param_5;
          param_4 = (code ****)appcStack_4f8;
          (**(code **)(param_5[1] + 0x18))(param_4,param_5 + 1);
          puStack_178 = *(undefined8 **)(param_6 + 2);
          ppcStack_180 = *(code ***)param_6;
          puStack_168 = *(undefined8 **)(param_6 + 6);
          pppcStack_170 = *(code ****)(param_6 + 4);
          (**(code **)(*plVar15 + 0x18))
                    (plVar15,param_2,param_3,&ppcStack_4c0,&lStack_500,&ppcStack_180,1);
          goto LAB_10aabece4;
        }
      }
      else {
        puVar11 = param_1[0x1d];
        param_7 = pppcVar8;
        if ((puVar11 != (undefined8 *)0x0) &&
           ((**(code **)*puVar11)(), param_7 = pppcVar8, (int)puVar11 != 0)) {
          plVar15 = param_1[0x1d];
          ppcStack_440 = (code **)*param_4;
          param_1 = apuStack_438;
          (*(code *)param_4[1][3])(param_1,ppppcVar16);
          lStack_480 = *param_5;
          param_4 = (code ****)appcStack_478;
          (**(code **)(param_5[1] + 0x18))(param_4,param_5 + 1);
          puStack_178 = *(undefined8 **)(param_6 + 2);
          ppcStack_180 = *(code ***)param_6;
          puStack_168 = *(undefined8 **)(param_6 + 6);
          pppcStack_170 = *(code ****)(param_6 + 4);
          (**(code **)(*plVar15 + 0x18))
                    (plVar15,param_2,param_3,&ppcStack_440,&lStack_480,&ppcStack_180,1);
          goto LAB_10aabece4;
        }
      }
    }
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
    if (puStack_548 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pppcVar8 = param_7;
  param_2 = pppcVar17;
LAB_10aabed5c:
  puVar10 = &UNK_10f68dc77;
  FUN_10a00946c();
  (**appcStack_3f8[0])(param_4);
  (*(code *)*apuStack_3b8[0])(param_1);
  (*(code *)*ppuStack_b0)(param_2 + 1);
  if (puStack_548 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(puStack_548);
  }
  __Unwind_Resume();
  puVar11 = *(undefined8 **)(puVar10 + 0x110);
  if ((puVar11 == (undefined8 *)0x0) || ((**(code **)*puVar11)(), ((ulong)puVar11 & 1) == 0)) {
    iVar3 = *(int *)(puVar10 + 0x20);
    if (iVar3 == 2) {
      puVar11 = *(undefined8 **)(puVar10 + 0x100);
      if (((puVar11 == (undefined8 *)0x0) || ((**(code **)*puVar11)(), (int)puVar11 != 0)) &&
         (*(undefined8 **)(puVar10 + 0xe8) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(puVar10 + 0xe8))();
      }
    }
    else {
      if (iVar3 == 1) {
        puVar11 = *(undefined8 **)(puVar10 + 0x100);
      }
      else {
        if (iVar3 != 0) {
          puVar10 = &UNK_10f68dc77;
          FUN_10a00946c();
          if (*(long *)(puVar10 + 0xe8) != 0) {
            FUN_10aab82e4(*(long *)(puVar10 + 0xe8),pppcVar8);
          }
          if (*(long *)(puVar10 + 0x100) != 0) {
            FUN_10aab82e4(*(long *)(puVar10 + 0x100),pppcVar8);
          }
          if (*(long *)(puVar10 + 0x110) != 0) {
            FUN_10aab82e4(*(long *)(puVar10 + 0x110),pppcVar8);
            plVar15 = *(long **)(puVar10 + 0x118);
            *(undefined8 *)(puVar10 + 0x110) = 0;
            *(undefined8 *)(puVar10 + 0x118) = 0;
            if (plVar15 != (long *)0x0) {
              plVar1 = plVar15 + 1;
              do {
                lVar14 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar15);
                return;
              }
            }
          }
          return;
        }
        puVar11 = *(undefined8 **)(puVar10 + 0xe8);
      }
      if (puVar11 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aabf050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar11)();
        return;
      }
    }
  }
  return;
}



/* Entry: 10aabefdc; end: 10aabf127;  */

void FUN_10aabefdc(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar5 = *(undefined8 **)(param_1 + 0x110);
  if ((puVar5 == (undefined8 *)0x0) || ((**(code **)*puVar5)(), ((ulong)puVar5 & 1) == 0)) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 == 2) {
      puVar5 = *(undefined8 **)(param_1 + 0x100);
      if (((puVar5 == (undefined8 *)0x0) || ((**(code **)*puVar5)(), (int)puVar5 != 0)) &&
         (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(param_1 + 0xe8))();
      }
    }
    else {
      if (iVar2 == 1) {
        puVar5 = *(undefined8 **)(param_1 + 0x100);
      }
      else {
        if (iVar2 != 0) {
          puVar6 = &UNK_10f68dc77;
          FUN_10a00946c();
          if (*(long *)(puVar6 + 0xe8) != 0) {
            FUN_10aab82e4(*(long *)(puVar6 + 0xe8),param_2);
          }
          if (*(long *)(puVar6 + 0x100) != 0) {
            FUN_10aab82e4(*(long *)(puVar6 + 0x100),param_2);
          }
          if (*(long *)(puVar6 + 0x110) != 0) {
            FUN_10aab82e4(*(long *)(puVar6 + 0x110),param_2);
            plVar8 = *(long **)(puVar6 + 0x118);
            *(undefined8 *)(puVar6 + 0x110) = 0;
            *(undefined8 *)(puVar6 + 0x118) = 0;
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 1;
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
                (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
                return;
              }
            }
          }
          return;
        }
        puVar5 = *(undefined8 **)(param_1 + 0xe8);
      }
      if (puVar5 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aabf050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar5)();
        return;
      }
    }
  }
  return;
}



/* Entry: 10aabf128; end: 10aabf4bb;  */

undefined8 * FUN_10aabf128(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a23545c(&puStack_50,&puStack_68);
  plVar5 = (long *)*param_3;
  (**(code **)(*plVar5 + 0x18))();
  plStack_58 = (long *)plVar5[7];
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = (undefined8 *)0xd0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110ae90f0;
  puVar8 = puVar6 + 3;
  func_0x000109d18e28(puVar8,&UNK_10f64964f,0x15,param_3,&plStack_58);
  puStack_68 = puVar8;
  plStack_60 = puVar6;
  FUN_10a4d8a24(*puStack_50,param_2);
  plVar5 = (long *)0x68;
  __Znwm();
  *plVar5 = (long)puVar8;
  plVar5[1] = (long)puVar6;
  puStack_68 = (undefined8 *)0x0;
  plStack_60 = (long *)0x0;
  plVar5[3] = (long)plStack_48;
  plVar5[2] = (long)puStack_50;
  puStack_50 = (undefined8 *)0x0;
  plStack_48 = (long *)0x0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  *(undefined2 *)(plVar5 + 8) = 0x101;
  plVar5[9] = 0;
  plVar5[10] = 0;
  FUN_10ad008d8(plVar5 + 0xb);
  FUN_10a235640(auStack_78,plVar5);
  uVar7 = 0x220;
  __Znwm();
  FUN_10aac68ac();
  puVar8 = (undefined8 *)0x20;
  __Znwm();
  *puVar8 = &PTR_FUN_110c441b0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = uVar7;
  plVar5 = (long *)param_1[1];
  *param_1 = uVar7;
  param_1[1] = puVar8;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plStack_70 != (long *)0x0) {
    plVar5 = plStack_70 + 1;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  plVar5 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
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
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_58 + 1);
    do {
      uVar9 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aabf4bc; end: 10aabf9b3;  */

void FUN_10aabf4bc(long *param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
                  uint param_6,uint param_7,ulong param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  ulong uStack_1a4;
  undefined8 uStack_19c;
  ulong uStack_194;
  undefined8 uStack_18c;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined2 uStack_134;
  char cStack_132;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  undefined1 auStack_110 [88];
  undefined1 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  uVar13 = *(undefined8 *)(param_3 + 0x10);
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_10a7a7820(&puStack_90,param_4,param_4 + param_5 * 0x10);
  iVar14 = (int)((ulong)uVar13 >> 0x20);
  iVar12 = (int)uVar13;
  if (puStack_90 != puStack_88) {
    uVar17 = NEON_scvtf(CONCAT44(iVar12,iVar14),4);
    bVar5 = (param_7 & 1) == 0;
    uVar20 = NEON_rev64(uVar17,4);
    auVar18._0_8_ =
         uVar17 ^ (uVar17 ^ uVar20) &
                  ~CONCAT44(-(uint)((int)((uint)bVar5 << 0x1f) < 0),
                            -(uint)((int)((uint)bVar5 << 0x1f) < 0));
    auVar18._8_8_ = auVar18._0_8_;
    auVar18 = NEON_rev64(auVar18,4);
    puVar6 = puStack_90;
    do {
      puVar7 = puVar6 + 2;
      puVar6[1] = CONCAT44(auVar18._12_4_ * (float)((ulong)puVar6[1] >> 0x20),
                           auVar18._8_4_ * (float)puVar6[1]);
      *puVar6 = CONCAT44(auVar18._4_4_ * (float)((ulong)*puVar6 >> 0x20),
                         auVar18._0_4_ * (float)*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puStack_88);
  }
  uStack_144 = 0x3da9fbe700000000;
  uStack_13c = 0xffffffff;
  uStack_138 = 0;
  uStack_134 = 0x101;
  cStack_132 = '\x02';
  auStack_110[0] = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  if ((param_8 & 1) == 0) {
    uStack_148 = 0xd;
  }
  else {
    uStack_13c = 3;
    uStack_148 = 0xdd;
  }
  lStack_128 = 0;
  uStack_120 = 0;
  lStack_130 = 0;
  bStack_118 = 1;
  FUN_10aabaf20(&lStack_130,(long)puStack_88 - (long)puStack_90 >> 4);
  puVar6 = puStack_88;
  puVar7 = puStack_90;
  if (puStack_90 != puStack_88) {
    puVar10 = puStack_90;
    do {
      if ((bStack_118 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aabf96c);
        (*pcVar4)();
      }
      fStack_1c0 = (float)(int)(*(double *)(&UNK_10e4f45c8 + (ulong)(param_6 & 3) * 8) / 180.0);
      puVar11 = puVar10 + 2;
      fVar15 = (float)*puVar10;
      fStack_1c8 = (float)puVar10[1];
      fVar21 = fVar15 + fStack_1c8;
      fVar19 = (float)((ulong)*puVar10 >> 0x20);
      fStack_1c4 = (float)((ulong)puVar10[1] >> 0x20);
      fVar23 = fVar19 + fStack_1c4;
      uStack_1d0._0_4_ = fVar21 * 0.5;
      uStack_1d0._4_4_ = fVar23 * 0.5;
      fStack_1c8 = fStack_1c8 - fVar15;
      fStack_1c4 = fStack_1c4 - fVar19;
      FUN_10aad6dd0(fStack_1c0,CONCAT44(fVar23 - fVar19,fVar21 - fVar15),&lStack_130,&uStack_1d0);
      puVar7 = puStack_88;
      puVar10 = puVar11;
    } while (puVar11 != puVar6);
  }
  uStack_144 = CONCAT44(uStack_144._4_4_,(int)((ulong)((long)puVar7 - (long)puStack_90) >> 4));
  if ((char)uStack_134 != '\0') {
    uStack_134 = uStack_134 & 0xff00;
  }
  if (uStack_134._1_1_ != '\0') {
    uStack_134 = uStack_134 & 0xff;
  }
  if (cStack_132 != '\0') {
    cStack_132 = '\0';
  }
  uStack_1d0._0_4_ = 1.4013e-45;
  uVar17 = CONCAT44(-(uint)((int)((uint)(iVar14 < iVar12) << 0x1f) < 0),
                    -(uint)((int)((uint)(iVar14 < iVar12) << 0x1f) < 0)) & 0xfdf00000fdf00000 ^
           0x42700000bf800000;
  fStack_1c4 = (float)uVar17;
  fStack_1c0 = (float)(uVar17 >> 0x20);
  uStack_1b4 = 0x7fc000007fc00000;
  uStack_1bc = 0xbf800000bf800000;
  uStack_1a4 = 0;
  uStack_1ac = 0x3f800000;
  uStack_194 = 0;
  uStack_19c = 0x3f80000000000000;
  fStack_184 = 1.0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_174 = 0;
  uStack_170 = 0x3f800000;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  plStack_158 = (long *)0x0;
  uStack_1d0._4_4_ = (float)iVar12;
  fStack_1c8 = (float)iVar14;
  FUN_10a0ec8a8(&uStack_1d0);
  uStack_1d0._0_4_ = 1.4013e-45;
  fVar15 = 0.70710677;
  if ((param_7 & 3) < 2) {
    if ((param_7 & 3) == 0) {
      fVar15 = 1.0;
      fVar21 = 0.0;
      fVar23 = 0.0;
      fVar19 = 0.0;
    }
    else {
      fVar21 = -0.0;
      fVar23 = -0.0;
      fVar19 = -0.70710677;
    }
  }
  else if ((param_7 & 3) == 3) {
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar19 = fVar15;
  }
  else {
    fVar19 = 1.0;
    fVar21 = 0.0;
    fVar15 = -4.371139e-08;
    fVar23 = 0.0;
  }
  fVar25 = fVar21 * fVar23 + fVar19 * fVar15;
  fVar26 = fVar21 * fVar19 - fVar23 * fVar15;
  fVar16 = fVar21 * fVar23 - fVar19 * fVar15;
  fVar24 = fVar23 * fVar19 + fVar21 * fVar15;
  fVar22 = fVar21 * fVar19 + fVar23 * fVar15;
  fVar15 = fVar23 * fVar19 - fVar21 * fVar15;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_1ac = CONCAT44(fVar25 + fVar25,(fVar23 * fVar23 + fVar19 * fVar19) * -2.0 + 1.0);
  uStack_1a4 = (ulong)(uint)(fVar26 + fVar26);
  fStack_184 = (fVar21 * fVar21 + fVar23 * fVar23) * -2.0 + 1.0;
  uStack_19c = CONCAT44((fVar21 * fVar21 + fVar19 * fVar19) * -2.0 + 1.0,fVar16 + fVar16);
  uStack_194 = (ulong)(uint)(fVar24 + fVar24);
  uStack_18c = CONCAT44(fVar15 + fVar15,fVar22 + fVar22);
  uStack_170 = 0x3f800000;
  FUN_10aab25d4(*param_2,&uStack_1d0);
  FUN_10aab71cc(*param_2);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  FUN_10aab2844(&plStack_1d8,*param_2,param_3,param_3,0,&uStack_1e8,0,&uStack_148);
  if (plStack_1d8 == (long *)0x0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar9 = plStack_1d8[5];
    param_1[1] = plStack_1d8[6];
    *param_1 = lVar9;
    param_1[2] = plStack_1d8[7];
    plStack_1d8[6] = 0;
    plStack_1d8[7] = 0;
    plStack_1d8[5] = 0;
    lVar8 = plStack_1d8[9];
    lVar9 = plStack_1d8[8];
    param_1[4] = plStack_1d8[9];
    param_1[3] = lVar9;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plStack_1d8 + 8))();
  }
  plVar1 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar2 = plStack_158 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_1d0 = &uStack_a8;
  FUN_10a22d224(&uStack_1d0);
  FUN_10a22ce48(auStack_110);
  if ((bStack_118 == 1) && (lStack_130 != 0)) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aabf9b4; end: 10aabfb47;  */

void FUN_10aabf9b4(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *****pppppuVar8;
  long *****ppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******UNRECOVERED_JUMPTABLE;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long ******extraout_x8;
  long ******pppppplVar14;
  long ***ppplVar15;
  undefined **ppuVar16;
  long ****pppplVar17;
  undefined8 ****ppppuVar18;
  long *****ppppplVar19;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  long *****ppppplStack_190;
  long *****ppppplStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  undefined8 uStack_160;
  long lStack_138;
  long *****ppppplStack_130;
  long *****ppppplStack_128;
  long *****ppppplStack_120;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long *****appppplStack_f8 [2];
  char cStack_e1;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 *****pppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 uStack_50;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    iVar5 = (int)param_1;
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    if (uStack_50._7_1_ < '\0') {
      __ZdlPv(ppppuStack_60);
    }
    if (uStack_68._7_1_ < '\0') {
      __ZdlPv(pppppuStack_78);
    }
    __Unwind_Resume();
    pcStack_98 = FUN_10aabfb48;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar9 = (long *****)0x28;
    puStack_a0 = &stack0xfffffffffffffff0;
    __Znwm();
    lStack_d0 = -0x7fffffffffffffd8;
    ppppplStack_d8 = (long *****)0x22;
    *(undefined2 *)(ppppplVar9 + 4) = 0x4c4d;
    ppppplVar9[1] = (long ****)0x415254454341465f;
    *ppppplVar9 = (long ****)0x45524f43534e454c;
    ppppplVar9[3] = (long ****)0x585f454e494c4550;
    ppppplVar9[2] = (long ****)0x49505f474e494b43;
    *(undefined1 *)((long)ppppplVar9 + 0x22) = 0;
    extraout_x8[1] = (long *****)0x0;
    extraout_x8[2] = (long *****)0x0;
    *extraout_x8 = (long *****)0x0;
    ppppplStack_e0 = ppppplVar9;
    FUN_10a102f04(extraout_x8,&ppppplStack_e0,&lStack_c8,1);
    if (lStack_d0 < 0) {
      __ZdlPv(ppppplStack_e0);
    }
    lVar1 = 2;
    if (iVar5 != 0) {
      lVar1 = 3;
    }
    ppuVar16 = &PTR_DAT_110c42ee0;
    pppppplVar12 = (long ******)(&PTR_DAT_110c42ee0 + lVar1 * 2);
    ppppplStack_e0 = (long *****)0x0;
    ppppplStack_d8 = (long *****)0x0;
    lStack_d0 = 0;
    pppppplVar13 = &ppppplStack_e0;
    FUN_10aad6ec8();
    ppppplVar9 = ppppplStack_d8;
    pppppplVar14 = (long ******)ppppplStack_e0;
    for (pppppplVar10 = (long ******)ppppplStack_e0; ppppplStack_e0 = (long *****)pppppplVar14,
        pppppplVar10 != (long ******)ppppplVar9; pppppplVar10 = pppppplVar10 + 2) {
      pppppplVar12 = (long ******)pppppplVar10[1];
      FUN_10aabf9b4(appppplStack_f8,*pppppplVar10,pppppplVar12,param_2);
      ppuVar16 = (undefined **)appppplStack_f8;
      pppppplVar13 = extraout_x8;
      FUN_10a059fa0();
      if (cStack_e1 < '\0') {
        pppppplVar13 = (long ******)appppplStack_f8[0];
        __ZdlPv();
      }
      pppppplVar14 = (long ******)ppppplStack_e0;
    }
    if (pppppplVar14 != (long ******)0x0) {
      pppppplVar13 = pppppplVar14;
      ppppplStack_d8 = (long *****)pppppplVar14;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return;
    }
    ___stack_chk_fail();
    FUN_10a0426d8(appppplStack_f8);
    pppppplVar10 = pppppplVar13;
    __Unwind_Resume();
    ppppplStack_130 = ppppplVar9;
    pcStack_108 = FUN_10aabfcf4;
    lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppplVar11 = pppppplVar10;
    UNRECOVERED_JUMPTABLE = (long ******)ppuVar16;
    ppppplStack_128 = (long *****)pppppplVar14;
    ppppplStack_120 = (long *****)pppppplVar13;
    ppuStack_110 = &puStack_a0;
    (*(code *)(*pppppplVar10)[0x40])();
    if ((int)pppppplVar11 == 0) {
      func_0x000107c2acdc();
      pppppplVar13 = pppppplVar11;
      if (pppppplVar12[1] != pppppplVar11[1]) {
        pppppplVar13 = pppppplVar12;
        func_0x000107c2acd4();
        ppppplVar19 = *pppppplVar11;
        pppppplVar12[1] = pppppplVar11[1];
        *pppppplVar12 = ppppplVar19;
        if (pppppplVar12[1] != (long *****)0x0) {
          ppppplVar19 = pppppplVar12[1] + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppplVar19,0x10);
            if (bVar3) {
              *(int *)ppppplVar19 = *(int *)ppppplVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
        return;
      }
    }
    else {
      (*(code *)(*pppppplVar10)[0x42])(pppppplVar10,ppuVar16);
      func_0x0001096b9358(&ppppplStack_170);
      ppppplVar19 = pppppplVar12[1];
      pppppplVar12[1] = ppppplStack_168;
      *pppppplVar12 = ppppplStack_170;
      ppppplStack_170 = (long *****)&PTR_SUB_110b01d60;
      ppppplStack_168 = ppppplVar19;
      func_0x000107c2acd4(&ppppplStack_170);
      func_0x0001096b9498(pppppplVar12);
      func_0x00010aac2ce4(pppppplVar10,pppppplVar12[1] + 6);
      pppppplVar13 = pppppplVar10;
      (*(code *)(*pppppplVar10)[0x40])(pppppplVar10,&PTR_DAT_110c431a8);
      if ((int)pppppplVar13 != 0) {
        func_0x0001096b9498(pppppplVar12);
        ppuVar16 = (undefined **)pppppplVar12[1];
        (*(code *)(*pppppplVar10)[0x42])(pppppplVar10,&PTR_DAT_110c431a8);
        FUN_10aac2df0(pppppplVar10,ppuVar16 + 1);
        (*(code *)(*pppppplVar10)[0x44])(pppppplVar10);
      }
      ppppplStack_170 = (long *****)0x0;
      ppppplStack_168 = (long *****)0x0;
      uStack_160 = 0;
      pppppplVar13 = pppppplVar10;
      (*(code *)(*pppppplVar10)[0x40])(pppppplVar10,&PTR_DAT_110c43248);
      if ((int)pppppplVar13 == 0) {
        pppppplVar14 = (long ******)0x0;
        pppppplVar13 = (long ******)0x0;
      }
      else {
        FUN_10aaaf654(pppppplVar10,&PTR_DAT_110c43248,&ppppplStack_170);
        pppppplVar13 = (long ******)ppppplStack_170;
        pppppplVar14 = (long ******)ppppplStack_168;
      }
      func_0x0001096b9614(pppppplVar12,
                          (int)((ulong)((long)pppppplVar14 - (long)pppppplVar13) >> 2) * -0x55555555
                         );
      pppppplVar13 = (long ******)ppppplStack_170;
      if ((long ******)ppppplStack_170 != (long ******)0x0) {
        ppppplStack_168 = ppppplStack_170;
        __ZdlPv();
      }
      UNRECOVERED_JUMPTABLE = (long ******)(*pppppplVar10)[0x44];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
                    /* WARNING: Could not recover jumptable at 0x00010aabff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(pppppplVar10);
        return;
      }
    }
    ___stack_chk_fail();
    if (((int)UNRECOVERED_JUMPTABLE != 0) &&
       (func_0x000104bd46a0(), (long ******)ppppplStack_170 != (long ******)0x0)) {
      ppppplStack_168 = ppppplStack_170;
      __ZdlPv();
    }
    pppppplVar10 = pppppplVar13;
    __Unwind_Resume();
    ppppplStack_1a0 = ppppplVar9;
    pcStack_178 = FUN_10aabff3c;
    ppppplStack_198 = (long *****)ppuVar16;
    ppppplStack_190 = (long *****)pppppplVar12;
    ppppplStack_188 = (long *****)pppppplVar13;
    pppuStack_180 = &ppuStack_110;
    (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_s_key_110c437f8);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[10])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43090,*(undefined4 *)pppppplVar10);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43878,*(undefined4 *)((long)pppppplVar10 + 4));
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f10);
    (*(code *)pppppplVar10[1][3])(pppppplVar10 + 1,UNRECOVERED_JUMPTABLE);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
    if (pppppplVar10[0x37] != (long *****)0x0) {
      (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43818);
      ppppplVar9 = pppppplVar10[0x37];
      (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c438f8);
      ppplVar15 = ppppplVar9[2][9];
      iVar5 = 0;
      if (ppplVar15 != (long ***)0x0) {
        iVar5 = (int)((ulong)((long)ppplVar15[2] - (long)ppplVar15[1]) >> 2);
      }
      (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
                (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43268,
                 iVar5 + *(int *)((long)ppppplVar9[2] + 0xc));
      (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
                (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43288,*(undefined4 *)(ppppplVar9[2] + 2));
      (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
                (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432a8,
                 *(undefined4 *)((long)ppppplVar9[2] + 0x14));
      pppplVar17 = ppppplVar9[2];
      if (pppplVar17[9] != (long ***)0x0) {
        (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c431a8);
        FUN_10aac31f0(UNRECOVERED_JUMPTABLE,pppplVar17 + 8);
        (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
        pppplVar17 = ppppplVar9[2];
      }
      ppplVar15 = pppplVar17[5];
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1c0 = 0;
      FUN_10aad79c4(&uStack_1c0,ppplVar15,
                    ppplVar15 + (((long)pppplVar17[6] - (long)ppplVar15) * 0x10000000 >> 0x20) * 2,
                    ((long)pppplVar17[6] - (long)ppplVar15) * 0x10000000 >> 0x20);
      (*(code *)(*UNRECOVERED_JUMPTABLE)[0x27])
                (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432c8,&uStack_1c0);
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      FUN_10a0426d8(&puStack_1a8);
      (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
      pppplVar17 = pppppplVar10[0x37][3];
      (*(code *)(*UNRECOVERED_JUMPTABLE)[5])
                (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432e8,pppplVar17,
                 ((long)pppppplVar10[0x37][4] - (long)pppplVar17) * 0x40000000 >> 0x1e &
                 0xfffffffffffffffc);
      ppppplVar9 = pppppplVar10[0x37];
      (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_s_transform_110c43308);
      func_0x00010aac2d6c(UNRECOVERED_JUMPTABLE,ppppplVar9 + 6);
      (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
      (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
    }
    FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f30,pppppplVar10 + 0x3c);
    FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f50,pppppplVar10 + 0x3e);
    FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f70,pppppplVar10 + 0x38);
    FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43838,pppppplVar10 + 0x3a);
    FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f90,pppppplVar10 + 0x40);
    if (pppppplVar10[0x43] == (long *****)0x0) {
      return;
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42fb0);
    func_0x00010aac2d6c(UNRECOVERED_JUMPTABLE,pppppplVar10[0x43] + 6);
    ppppplVar9 = pppppplVar10[0x43];
    if (ppppplVar9[2] != (long ****)0x0) {
      (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c431a8);
      FUN_10aac31f0(UNRECOVERED_JUMPTABLE,ppppplVar9 + 1);
      (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
      ppppplVar9 = pppppplVar10[0x43];
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43248,ppppplVar9[3],
               (long)((int)((ulong)((long)ppppplVar9[4] - (long)ppppplVar9[3]) >> 2) * -0x55555555)
               * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010aac0338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
    return;
  }
  if (param_3 < 0x17) {
    uStack_68 = CONCAT17((char)param_3,(undefined7)uStack_68);
    ppppppuVar6 = &pppppuStack_78;
    if (param_3 == 0) goto LAB_10aabfa38;
  }
  else {
    ppppppuVar7 = (undefined8 ******)0x19;
    if ((param_3 | 7) != 0x17) {
      ppppppuVar7 = (undefined8 ******)((param_3 | 7) + 1);
    }
    ppppppuVar6 = ppppppuVar7;
    __Znwm();
    uStack_68 = (ulong)ppppppuVar7 | 0x8000000000000000;
    pppppuStack_78 = ppppppuVar6;
    uStack_70 = param_3;
  }
  _memmove(ppppppuVar6,param_2,param_3);
LAB_10aabfa38:
  *(undefined1 *)((long)ppppppuVar6 + param_3) = 0;
  ppppppuVar7 = &pppppuStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar7,&UNK_10f68dd28,2);
  ppppuStack_58 = ppppppuVar7[1];
  ppppuStack_60 = *ppppppuVar7;
  uStack_50 = ppppppuVar7[2];
  ppppppuVar7[1] = (undefined8 *****)0x0;
  ppppppuVar7[2] = (undefined8 *****)0x0;
  *ppppppuVar7 = (undefined8 *****)0x0;
  __ZNSt3__19to_stringEi(&puStack_90,param_4);
  ppuVar4 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar4 = &puStack_90;
  }
  pppppuVar8 = &ppppuStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar8,ppuVar4,uStack_88);
  ppppuVar18 = *pppppuVar8;
  param_1[1] = pppppuVar8[1];
  *param_1 = ppppuVar18;
  param_1[2] = pppppuVar8[2];
  pppppuVar8[1] = (undefined8 ****)0x0;
  pppppuVar8[2] = (undefined8 ****)0x0;
  *pppppuVar8 = (undefined8 ****)0x0;
  if ((char)bStack_79 < '\0') {
    __ZdlPv(puStack_90);
  }
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppppuStack_60);
  }
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppppuStack_78);
  }
  return;
}



/* Entry: 10aabfb48; end: 10aabfcf3;  */

void FUN_10aabfb48(long ******param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *****ppppplVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  long ******UNRECOVERED_JUMPTABLE;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  int iVar10;
  long ***ppplVar11;
  undefined **ppuVar12;
  long ****pppplVar13;
  long *****ppppplVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  undefined8 uStack_d0;
  long lStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long *****ppppplStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *****appppplStack_68 [2];
  char cStack_51;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar4 = (long *****)0x28;
  __Znwm();
  lStack_40 = -0x7fffffffffffffd8;
  ppppplStack_48 = (long *****)0x22;
  *(undefined2 *)(ppppplVar4 + 4) = 0x4c4d;
  ppppplVar4[1] = (long ****)0x415254454341465f;
  *ppppplVar4 = (long ****)0x45524f43534e454c;
  ppppplVar4[3] = (long ****)0x585f454e494c4550;
  ppppplVar4[2] = (long ****)0x49505f474e494b43;
  *(undefined1 *)((long)ppppplVar4 + 0x22) = 0;
  param_1[1] = (long *****)0x0;
  param_1[2] = (long *****)0x0;
  *param_1 = (long *****)0x0;
  ppppplStack_50 = ppppplVar4;
  FUN_10a102f04(param_1,&ppppplStack_50,&lStack_38,1);
  if (lStack_40 < 0) {
    __ZdlPv(ppppplStack_50);
  }
  lVar1 = 2;
  if (param_2 != 0) {
    lVar1 = 3;
  }
  ppuVar12 = &PTR_DAT_110c42ee0;
  pppppplVar7 = (long ******)(&PTR_DAT_110c42ee0 + lVar1 * 2);
  ppppplStack_50 = (long *****)0x0;
  ppppplStack_48 = (long *****)0x0;
  lStack_40 = 0;
  pppppplVar8 = &ppppplStack_50;
  FUN_10aad6ec8();
  ppppplVar4 = ppppplStack_48;
  pppppplVar9 = (long ******)ppppplStack_50;
  for (pppppplVar5 = (long ******)ppppplStack_50; ppppplStack_50 = (long *****)pppppplVar9,
      pppppplVar5 != (long ******)ppppplVar4; pppppplVar5 = pppppplVar5 + 2) {
    pppppplVar7 = (long ******)pppppplVar5[1];
    FUN_10aabf9b4(appppplStack_68,*pppppplVar5,pppppplVar7,param_3);
    ppuVar12 = (undefined **)appppplStack_68;
    pppppplVar8 = param_1;
    FUN_10a059fa0();
    if (cStack_51 < '\0') {
      pppppplVar8 = (long ******)appppplStack_68[0];
      __ZdlPv();
    }
    pppppplVar9 = (long ******)ppppplStack_50;
  }
  if (pppppplVar9 != (long ******)0x0) {
    pppppplVar8 = pppppplVar9;
    ppppplStack_48 = (long *****)pppppplVar9;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  appppplStack_68[0] = (long *****)param_1;
  FUN_10a0426d8(appppplStack_68);
  pppppplVar5 = pppppplVar8;
  __Unwind_Resume();
  ppppplStack_a0 = ppppplVar4;
  pcStack_78 = FUN_10aabfcf4;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar6 = pppppplVar5;
  UNRECOVERED_JUMPTABLE = (long ******)ppuVar12;
  ppppplStack_98 = (long *****)pppppplVar9;
  ppppplStack_90 = (long *****)pppppplVar8;
  ppppplStack_88 = (long *****)param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  (*(code *)(*pppppplVar5)[0x40])();
  if ((int)pppppplVar6 == 0) {
    func_0x000107c2acdc();
    pppppplVar8 = pppppplVar6;
    if (pppppplVar7[1] != pppppplVar6[1]) {
      pppppplVar8 = pppppplVar7;
      func_0x000107c2acd4();
      ppppplVar14 = *pppppplVar6;
      pppppplVar7[1] = pppppplVar6[1];
      *pppppplVar7 = ppppplVar14;
      if (pppppplVar7[1] != (long *****)0x0) {
        ppppplVar14 = pppppplVar7[1] + -1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
          if (bVar3) {
            *(int *)ppppplVar14 = *(int *)ppppplVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return;
    }
  }
  else {
    (*(code *)(*pppppplVar5)[0x42])(pppppplVar5,ppuVar12);
    func_0x0001096b9358(&ppppplStack_e0);
    ppppplVar14 = pppppplVar7[1];
    pppppplVar7[1] = ppppplStack_d8;
    *pppppplVar7 = ppppplStack_e0;
    ppppplStack_e0 = (long *****)&PTR_SUB_110b01d60;
    ppppplStack_d8 = ppppplVar14;
    func_0x000107c2acd4(&ppppplStack_e0);
    func_0x0001096b9498(pppppplVar7);
    func_0x00010aac2ce4(pppppplVar5,pppppplVar7[1] + 6);
    pppppplVar8 = pppppplVar5;
    (*(code *)(*pppppplVar5)[0x40])(pppppplVar5,&PTR_DAT_110c431a8);
    if ((int)pppppplVar8 != 0) {
      func_0x0001096b9498(pppppplVar7);
      ppuVar12 = (undefined **)pppppplVar7[1];
      (*(code *)(*pppppplVar5)[0x42])(pppppplVar5,&PTR_DAT_110c431a8);
      FUN_10aac2df0(pppppplVar5,ppuVar12 + 1);
      (*(code *)(*pppppplVar5)[0x44])(pppppplVar5);
    }
    ppppplStack_e0 = (long *****)0x0;
    ppppplStack_d8 = (long *****)0x0;
    uStack_d0 = 0;
    pppppplVar8 = pppppplVar5;
    (*(code *)(*pppppplVar5)[0x40])(pppppplVar5,&PTR_DAT_110c43248);
    if ((int)pppppplVar8 == 0) {
      pppppplVar9 = (long ******)0x0;
      pppppplVar8 = (long ******)0x0;
    }
    else {
      FUN_10aaaf654(pppppplVar5,&PTR_DAT_110c43248,&ppppplStack_e0);
      pppppplVar8 = (long ******)ppppplStack_e0;
      pppppplVar9 = (long ******)ppppplStack_d8;
    }
    func_0x0001096b9614(pppppplVar7,
                        (int)((ulong)((long)pppppplVar9 - (long)pppppplVar8) >> 2) * -0x55555555);
    pppppplVar8 = (long ******)ppppplStack_e0;
    if ((long ******)ppppplStack_e0 != (long ******)0x0) {
      ppppplStack_d8 = ppppplStack_e0;
      __ZdlPv();
    }
    UNRECOVERED_JUMPTABLE = (long ******)(*pppppplVar5)[0x44];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                    /* WARNING: Could not recover jumptable at 0x00010aabff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(pppppplVar5);
      return;
    }
  }
  ___stack_chk_fail();
  if (((int)UNRECOVERED_JUMPTABLE != 0) &&
     (func_0x000104bd46a0(), (long ******)ppppplStack_e0 != (long ******)0x0)) {
    ppppplStack_d8 = ppppplStack_e0;
    __ZdlPv();
  }
  pppppplVar5 = pppppplVar8;
  __Unwind_Resume();
  ppppplStack_110 = ppppplVar4;
  pcStack_e8 = FUN_10aabff3c;
  ppppplStack_108 = (long *****)ppuVar12;
  ppppplStack_100 = (long *****)pppppplVar7;
  ppppplStack_f8 = (long *****)pppppplVar8;
  ppuStack_f0 = &puStack_80;
  (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_s_key_110c437f8);
  (*(code *)(*UNRECOVERED_JUMPTABLE)[10])
            (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43090,*(undefined4 *)pppppplVar5);
  (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
            (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43878,*(undefined4 *)((long)pppppplVar5 + 4));
  (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
  (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f10);
  (*(code *)pppppplVar5[1][3])(pppppplVar5 + 1,UNRECOVERED_JUMPTABLE);
  (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
  if (pppppplVar5[0x37] != (long *****)0x0) {
    (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43818);
    ppppplVar4 = pppppplVar5[0x37];
    (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c438f8);
    ppplVar11 = ppppplVar4[2][9];
    iVar10 = 0;
    if (ppplVar11 != (long ***)0x0) {
      iVar10 = (int)((ulong)((long)ppplVar11[2] - (long)ppplVar11[1]) >> 2);
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43268,iVar10 + *(int *)((long)ppppplVar4[2] + 0xc)
              );
    (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43288,*(undefined4 *)(ppppplVar4[2] + 2));
    (*(code *)(*UNRECOVERED_JUMPTABLE)[8])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432a8,*(undefined4 *)((long)ppppplVar4[2] + 0x14))
    ;
    pppplVar13 = ppppplVar4[2];
    if (pppplVar13[9] != (long ***)0x0) {
      (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c431a8);
      FUN_10aac31f0(UNRECOVERED_JUMPTABLE,pppplVar13 + 8);
      (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
      pppplVar13 = ppppplVar4[2];
    }
    ppplVar11 = pppplVar13[5];
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    FUN_10aad79c4(&uStack_130,ppplVar11,
                  ppplVar11 + (((long)pppplVar13[6] - (long)ppplVar11) * 0x10000000 >> 0x20) * 2,
                  ((long)pppplVar13[6] - (long)ppplVar11) * 0x10000000 >> 0x20);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[0x27])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432c8,&uStack_130);
    puStack_118 = (undefined1 *)&uStack_130;
    FUN_10a0426d8(&puStack_118);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
    pppplVar13 = pppppplVar5[0x37][3];
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432e8,pppplVar13,
               ((long)pppppplVar5[0x37][4] - (long)pppplVar13) * 0x40000000 >> 0x1e &
               0xfffffffffffffffc);
    ppppplVar4 = pppppplVar5[0x37];
    (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_s_transform_110c43308);
    func_0x00010aac2d6c(UNRECOVERED_JUMPTABLE,ppppplVar4 + 6);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
  }
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f30,pppppplVar5 + 0x3c);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f50,pppppplVar5 + 0x3e);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f70,pppppplVar5 + 0x38);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43838,pppppplVar5 + 0x3a);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f90,pppppplVar5 + 0x40);
  if (pppppplVar5[0x43] != (long *****)0x0) {
    (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42fb0);
    func_0x00010aac2d6c(UNRECOVERED_JUMPTABLE,pppppplVar5[0x43] + 6);
    ppppplVar4 = pppppplVar5[0x43];
    if (ppppplVar4[2] != (long ****)0x0) {
      (*(code *)(*UNRECOVERED_JUMPTABLE)[3])(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c431a8);
      FUN_10aac31f0(UNRECOVERED_JUMPTABLE,ppppplVar4 + 1);
      (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
      ppppplVar4 = pppppplVar5[0x43];
    }
    (*(code *)(*UNRECOVERED_JUMPTABLE)[5])
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43248,ppppplVar4[3],
               (long)((int)((ulong)((long)ppppplVar4[4] - (long)ppppplVar4[3]) >> 2) * -0x55555555)
               * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010aac0338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*UNRECOVERED_JUMPTABLE)[4])(UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



/* Entry: 10aabfcf4; end: 10aabff3b;  */

void FUN_10aabfcf4(undefined **param_1,code *param_2,undefined **param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar4;
  int *piVar5;
  undefined **ppuVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_1;
  UNRECOVERED_JUMPTABLE = param_2;
  (**(code **)(*param_1 + 0x200))();
  if ((int)ppuVar4 == 0) {
    func_0x000107c2acdc();
    ppuVar6 = ppuVar4;
    if (param_3[1] != ppuVar4[1]) {
      ppuVar6 = param_3;
      func_0x000107c2acd4();
      puVar9 = *ppuVar4;
      param_3[1] = ppuVar4[1];
      *param_3 = puVar9;
      if (param_3[1] != (undefined *)0x0) {
        piVar5 = (int *)(param_3[1] + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x210))(param_1,param_2);
    func_0x0001096b9358(&ppuStack_70);
    puVar9 = param_3[1];
    param_3[1] = (undefined *)ppuStack_68;
    *param_3 = (undefined *)ppuStack_70;
    ppuStack_70 = &PTR_SUB_110b01d60;
    ppuStack_68 = (undefined **)puVar9;
    func_0x000107c2acd4(&ppuStack_70);
    func_0x0001096b9498(param_3);
    func_0x00010aac2ce4(param_1,param_3[1] + 0x30);
    ppuVar4 = param_1;
    (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110c431a8);
    if ((int)ppuVar4 != 0) {
      func_0x0001096b9498(param_3);
      puVar9 = param_3[1];
      (**(code **)(*param_1 + 0x210))(param_1,&PTR_DAT_110c431a8);
      FUN_10aac2df0(param_1,puVar9 + 8);
      (**(code **)(*param_1 + 0x220))(param_1);
    }
    ppuStack_70 = (undefined **)0x0;
    ppuStack_68 = (undefined **)0x0;
    uStack_60 = 0;
    ppuVar4 = param_1;
    (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110c43248);
    if ((int)ppuVar4 == 0) {
      ppuVar6 = (undefined **)0x0;
      ppuVar4 = (undefined **)0x0;
    }
    else {
      FUN_10aaaf654(param_1,&PTR_DAT_110c43248,&ppuStack_70);
      ppuVar4 = ppuStack_70;
      ppuVar6 = ppuStack_68;
    }
    func_0x0001096b9614(param_3,(int)((ulong)((long)ppuVar6 - (long)ppuVar4) >> 2) * -0x55555555);
    ppuVar6 = ppuStack_70;
    if (ppuStack_70 != (undefined **)0x0) {
      ppuStack_68 = ppuStack_70;
      __ZdlPv();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x220);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010aabff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  ___stack_chk_fail();
  if ((int)UNRECOVERED_JUMPTABLE != 0) {
    func_0x000104bd46a0();
    if (ppuStack_70 != (undefined **)0x0) {
      ppuStack_68 = ppuStack_70;
      __ZdlPv();
    }
  }
  __Unwind_Resume();
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE,&PTR_s_key_110c437f8);
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x50))
            (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43090,*(undefined4 *)ppuVar6);
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x40))
            (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43878,*(undefined4 *)((long)ppuVar6 + 4));
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f10);
  (**(code **)(ppuVar6[1] + 0x18))(ppuVar6 + 1,UNRECOVERED_JUMPTABLE);
  (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
  if (ppuVar6[0x37] != (undefined *)0x0) {
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43818);
    puVar9 = ppuVar6[0x37];
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c438f8);
    lVar8 = *(long *)(*(long *)(puVar9 + 0x10) + 0x48);
    iVar7 = 0;
    if (lVar8 != 0) {
      iVar7 = (int)((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8)) >> 2);
    }
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x40))
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43268,
               iVar7 + *(int *)(*(long *)(puVar9 + 0x10) + 0xc));
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x40))
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43288,
               *(undefined4 *)(*(long *)(puVar9 + 0x10) + 0x10));
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x40))
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432a8,
               *(undefined4 *)(*(long *)(puVar9 + 0x10) + 0x14));
    lVar8 = *(long *)(puVar9 + 0x10);
    if (*(long *)(lVar8 + 0x48) != 0) {
      (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c431a8)
      ;
      FUN_10aac31f0(UNRECOVERED_JUMPTABLE,lVar8 + 0x40);
      (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
      lVar8 = *(long *)(puVar9 + 0x10);
    }
    lVar1 = *(long *)(lVar8 + 0x28);
    lVar8 = *(long *)(lVar8 + 0x30) - lVar1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    FUN_10aad79c4(&uStack_c0,lVar1,lVar1 + (lVar8 * 0x10000000 >> 0x20) * 0x10,
                  lVar8 * 0x10000000 >> 0x20);
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x138))
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432c8,&uStack_c0);
    puStack_a8 = (undefined1 *)&uStack_c0;
    FUN_10a0426d8(&puStack_a8);
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
    lVar8 = *(long *)(ppuVar6[0x37] + 0x18);
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x28))
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c432e8,lVar8,
               (*(long *)(ppuVar6[0x37] + 0x20) - lVar8) * 0x40000000 >> 0x1e & 0xfffffffffffffffc);
    puVar9 = ppuVar6[0x37];
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))
              (UNRECOVERED_JUMPTABLE,&PTR_s_transform_110c43308);
    func_0x00010aac2d6c(UNRECOVERED_JUMPTABLE,puVar9 + 0x30);
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
  }
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f30,ppuVar6 + 0x3c);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f50,ppuVar6 + 0x3e);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f70,ppuVar6 + 0x38);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43838,ppuVar6 + 0x3a);
  FUN_10aac0268(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42f90,ppuVar6 + 0x40);
  if (ppuVar6[0x43] != (undefined *)0x0) {
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c42fb0);
    func_0x00010aac2d6c(UNRECOVERED_JUMPTABLE,ppuVar6[0x43] + 0x30);
    puVar9 = ppuVar6[0x43];
    if (*(long *)(puVar9 + 0x10) != 0) {
      (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE,&PTR_DAT_110c431a8)
      ;
      FUN_10aac31f0(UNRECOVERED_JUMPTABLE,puVar9 + 8);
      (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
      puVar9 = ppuVar6[0x43];
    }
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x28))
              (UNRECOVERED_JUMPTABLE,&PTR_DAT_110c43248,*(long *)(puVar9 + 0x18),
               (long)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >> 2) *
                     -0x55555555) * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010aac0338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 0x20))(UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



/* Entry: 10aabff3c; end: 10aac0267;  */

void FUN_10aabff3c(undefined4 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_key_110c437f8);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c43090,*param_1);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c43878,param_1[1]);
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c42f10);
  (**(code **)(*(long *)(param_1 + 2) + 0x18))(param_1 + 2,param_2);
  (**(code **)(*param_2 + 0x20))(param_2);
  if (*(long *)(param_1 + 0x6e) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c43818);
    lVar3 = *(long *)(param_1 + 0x6e);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c438f8);
    lVar2 = *(long *)(*(long *)(lVar3 + 0x10) + 0x48);
    iVar1 = 0;
    if (lVar2 != 0) {
      iVar1 = (int)((ulong)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8)) >> 2);
    }
    (**(code **)(*param_2 + 0x40))
              (param_2,&PTR_DAT_110c43268,iVar1 + *(int *)(*(long *)(lVar3 + 0x10) + 0xc));
    (**(code **)(*param_2 + 0x40))
              (param_2,&PTR_DAT_110c43288,*(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x10));
    (**(code **)(*param_2 + 0x40))
              (param_2,&PTR_DAT_110c432a8,*(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x14));
    lVar2 = *(long *)(lVar3 + 0x10);
    if (*(long *)(lVar2 + 0x48) != 0) {
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c431a8);
      FUN_10aac31f0(param_2,lVar2 + 0x40);
      (**(code **)(*param_2 + 0x20))(param_2);
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    lVar3 = *(long *)(lVar2 + 0x28);
    lVar2 = *(long *)(lVar2 + 0x30) - lVar3;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    FUN_10aad79c4(&uStack_50,lVar3,lVar3 + (lVar2 * 0x10000000 >> 0x20) * 0x10,
                  lVar2 * 0x10000000 >> 0x20);
    (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110c432c8,&uStack_50);
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_10a0426d8(&puStack_38);
    (**(code **)(*param_2 + 0x20))(param_2);
    lVar2 = *(long *)(*(long *)(param_1 + 0x6e) + 0x18);
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c432e8,lVar2,
               (*(long *)(*(long *)(param_1 + 0x6e) + 0x20) - lVar2) * 0x40000000 >> 0x1e &
               0xfffffffffffffffc);
    lVar2 = *(long *)(param_1 + 0x6e);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_transform_110c43308);
    func_0x00010aac2d6c(param_2,lVar2 + 0x30);
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  FUN_10aac0268(param_2,&PTR_DAT_110c42f30,param_1 + 0x78);
  FUN_10aac0268(param_2,&PTR_DAT_110c42f50,param_1 + 0x7c);
  FUN_10aac0268(param_2,&PTR_DAT_110c42f70,param_1 + 0x70);
  FUN_10aac0268(param_2,&PTR_DAT_110c43838,param_1 + 0x74);
  FUN_10aac0268(param_2,&PTR_DAT_110c42f90,param_1 + 0x80);
  if (*(long *)(param_1 + 0x86) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c42fb0);
    func_0x00010aac2d6c(param_2,*(long *)(param_1 + 0x86) + 0x30);
    lVar2 = *(long *)(param_1 + 0x86);
    if (*(long *)(lVar2 + 0x10) != 0) {
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c431a8);
      FUN_10aac31f0(param_2,lVar2 + 8);
      (**(code **)(*param_2 + 0x20))(param_2);
      lVar2 = *(long *)(param_1 + 0x86);
    }
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c43248,*(long *)(lVar2 + 0x18),
               (long)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 2) *
                     -0x55555555) * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010aac0338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x20))(param_2);
    return;
  }
  return;
}



/* Entry: 10aac0268; end: 10aac033f;  */

void FUN_10aac0268(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_3 + 8) != 0) {
    (**(code **)(*param_1 + 0x18))();
    func_0x00010aac2d6c(param_1,*(long *)(param_3 + 8) + 0x30);
    lVar1 = *(long *)(param_3 + 8);
    if (*(long *)(lVar1 + 0x10) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,&PTR_DAT_110c431a8);
      FUN_10aac31f0(param_1,lVar1 + 8);
      (**(code **)(*param_1 + 0x20))(param_1);
      lVar1 = *(long *)(param_3 + 8);
    }
    (**(code **)(*param_1 + 0x28))
              (param_1,&PTR_DAT_110c43248,*(long *)(lVar1 + 0x18),
               (long)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 2) *
                     -0x55555555) * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010aac0338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



/* Entry: 10aac0340; end: 10aac03cf;  */

undefined8 * FUN_10aac0340(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c447c8;
  param_1[0xd] = &PTR_FUN_110ba8440;
  puStack_28 = param_1 + 0x12;
  FUN_10a0426d8(&puStack_28);
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  func_0x00010a14e208(param_1 + 0xb);
  FUN_10a500034(param_1 + 8);
  puStack_28 = param_1 + 5;
  FUN_10a4fff4c(&puStack_28);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aac03d0; end: 10aac03d3;  */

undefined8 * FUN_10aac03d0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c447c8;
  param_1[0xd] = &PTR_FUN_110ba8440;
  puStack_28 = param_1 + 0x12;
  FUN_10a0426d8(&puStack_28);
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  func_0x00010a14e208(param_1 + 0xb);
  FUN_10a500034(param_1 + 8);
  puStack_28 = param_1 + 5;
  FUN_10a4fff4c(&puStack_28);
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aac03d4; end: 10aac03e7;  */

void FUN_10aac03d4(void)

{
  FUN_10aac0340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aac03e8; end: 10aac1507;  */

void FUN_10aac03e8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *****pppppuVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *****pppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined **ppuVar12;
  undefined *****pppppuVar13;
  undefined **ppuVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined ****ppppuVar20;
  int *piVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuStack_140;
  undefined ****ppppuStack_138;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  undefined ****ppppuStack_100;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined ****ppppuStack_e0;
  undefined1 uStack_d8;
  undefined ****ppppuStack_d0;
  undefined ****ppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined ****ppppuStack_b8;
  undefined ****ppppuStack_b0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c42fd0,0);
  *(int *)(param_1 + 0x20) = (int)plVar22;
  plVar22 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c42ff0,0);
  *(char *)(param_1 + 0x24) = (char)plVar22;
  plVar22 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c43858);
  if ((int)plVar22 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c43858);
    plVar22 = param_2;
    (**(code **)(*param_2 + 0x208))();
    FUN_10aac1508(param_1 + 0x28,(ulong)plVar22 & 0xffffffff);
    if ((int)plVar22 != 0) {
      uVar23 = 0;
      do {
        uVar18 = (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 5) * -0xf0f0f0f0f0f0f0f;
        if (uVar18 < uVar23 || uVar18 - uVar23 == 0) goto LAB_10aac13b0;
        puVar24 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar23 * 0x220);
        (**(code **)(*param_2 + 0x218))(param_2,uVar23);
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_key_110c437f8);
        if ((int)plVar6 == 0) {
          *puVar24 = 0xffffffff00000000;
        }
        else {
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_key_110c437f8);
          plVar6 = param_2;
          (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c43090,0);
          *(int *)puVar24 = (int)plVar6;
          plVar6 = param_2;
          (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c43878,0xffffffff);
          *(int *)((long)puVar24 + 4) = (int)plVar6;
          (**(code **)(*param_2 + 0x220))(param_2);
        }
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c42f10);
        (**(code **)(puVar24[1] + 0x10))(puVar24 + 1,param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c43818);
        if ((int)plVar6 == 0) {
          func_0x000107c2acdc();
          if (puVar24[0x37] != plVar6[1]) {
            func_0x000107c2acd4(puVar24 + 0x36);
            lVar16 = *plVar6;
            puVar24[0x37] = plVar6[1];
            puVar24[0x36] = lVar16;
            if (puVar24[0x37] != 0) {
              piVar15 = (int *)(puVar24[0x37] + -8);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                if (bVar5) {
                  *piVar15 = *piVar15 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
        }
        else {
          func_0x0001096ba870(&ppppuStack_d0);
          pppppuVar13 = (undefined *****)puVar24[0x37];
          puVar24[0x37] = ppppuStack_c8;
          puVar24[0x36] = ppppuStack_d0;
          ppppuStack_d0 = (undefined ****)&PTR_SUB_110b01d60;
          ppppuStack_c8 = (undefined ****)pppppuVar13;
          func_0x000107c2acd4(&ppppuStack_d0);
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c43818);
          lStack_128 = 0;
          lStack_120 = 0;
          uStack_118 = 0;
          FUN_10aae372c(param_2,&PTR_DAT_110c432e8,&lStack_128);
          plVar6 = param_2;
          (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c438f8);
          if ((int)plVar6 == 0) {
            func_0x0001096b72bc(&ppppuStack_d0,3,1,(ulong)(lStack_120 - lStack_128) >> 2,0);
            func_0x0001096b7480(&ppppuStack_e0,&ppppuStack_d0);
            pppppuVar13 = &ppppuStack_e0;
            ___dynamic_cast(pppppuVar13,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
            if (pppppuVar13 == (undefined *****)0x0) {
              func_0x000107c2acdc();
            }
            ppppuStack_108 = pppppuVar13[1];
            if ((undefined *****)ppppuStack_108 != (undefined *****)0x0) {
              pppppuVar13 = (undefined *****)(ppppuStack_108 + -1);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
                if (bVar5) {
                  *(int *)pppppuVar13 = *(int *)pppppuVar13 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            ppppuStack_110 = (undefined ****)&PTR_DAT_110b04b98;
            func_0x0001096ba9b0(puVar24 + 0x36,&ppppuStack_110);
            ppppuStack_110 = (undefined ****)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppuStack_110);
            ppppuStack_e0 = (undefined ****)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppuStack_e0);
            ppppuStack_d0 = (undefined ****)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppuStack_d0);
          }
          else {
            func_0x0001096b6920(&ppuStack_140);
            (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c438f8);
            plVar6 = param_2;
            (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c43268);
            plVar7 = param_2;
            (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c43288);
            plVar8 = param_2;
            (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c432a8);
            func_0x0001096b72bc(&ppuStack_f0,3,plVar6,plVar7,plVar8);
            plVar6 = param_2;
            (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c431a8);
            if ((int)plVar6 != 0) {
              func_0x0001096b81dc(&ppppuStack_d0);
              (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c431a8);
              FUN_10aac2df0(param_2,&ppppuStack_d0);
              (**(code **)(*param_2 + 0x220))(param_2);
              lVar16 = lStack_e8;
              if (*(undefined ******)(lStack_e8 + 0x48) != (undefined *****)ppppuStack_c8) {
                func_0x000107c2acd4(lStack_e8 + 0x40);
                *(undefined *****)(lVar16 + 0x48) = ppppuStack_c8;
                *(undefined *****)(lVar16 + 0x40) = ppppuStack_d0;
                if (*(long *)(lVar16 + 0x48) != 0) {
                  piVar15 = (int *)(*(long *)(lVar16 + 0x48) + -8);
                  do {
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                    if (bVar5) {
                      *piVar15 = *piVar15 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
              }
              ppppuStack_d0 = (undefined ****)&PTR_SUB_110b01d60;
              func_0x000107c2acd4(&ppppuStack_d0);
            }
            (**(code **)(*param_2 + 0x60))(&ppppuStack_d0,param_2,&PTR_DAT_110c432c8);
            ppppuVar10 = ppppuStack_c8;
            pppppuVar13 = (undefined *****)ppppuStack_d0;
            ppppuStack_108 = (undefined ****)0x0;
            ppppuStack_100 = (undefined ****)0x0;
            ppppuStack_110 = (undefined ****)0x0;
            ppppuStack_e0 = (undefined ****)&ppppuStack_110;
            uStack_d8 = 0;
            if ((long)ppppuStack_c8 - (long)ppppuStack_d0 != 0) {
              lVar16 = (long)ppppuStack_c8 - (long)ppppuStack_d0 >> 3;
              if ((ulong)(lVar16 * -0x5555555555555555) >> 0x3c != 0) {
                FUN_10aad7888();
                goto LAB_10aac13b0;
              }
              pppppuVar9 = (undefined *****)(lVar16 * -0x5555555555555550);
              __Znwm();
              ppppuStack_100 = (undefined ****)(pppppuVar9 + lVar16 * -0xaaaaaaaaaaaaaaa);
              ppppuStack_110 = (undefined ****)pppppuVar9;
              ppppuStack_108 = (undefined ****)pppppuVar9;
              FUN_10aad771c(pppppuVar13,ppppuVar10,pppppuVar9);
              ppppuStack_108 = (undefined ****)pppppuVar13;
            }
            lVar16 = lStack_e8;
            func_0x0001096b78b0(lStack_e8 + 0x28);
            *(undefined *****)(lVar16 + 0x30) = ppppuStack_108;
            *(undefined *****)(lVar16 + 0x28) = ppppuStack_110;
            *(undefined *****)(lVar16 + 0x38) = ppppuStack_100;
            ppppuStack_108 = (undefined ****)0x0;
            ppppuStack_100 = (undefined ****)0x0;
            ppppuStack_110 = (undefined ****)0x0;
            ppppuStack_e0 = (undefined ****)&ppppuStack_110;
            func_0x00010aad7938(&ppppuStack_e0);
            func_0x0001096b7480(&ppppuStack_e0,&ppuStack_f0);
            pppppuVar13 = &ppppuStack_e0;
            ___dynamic_cast(pppppuVar13,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
            if (pppppuVar13 == (undefined *****)0x0) {
              func_0x000107c2acdc();
            }
            pppppuVar13 = (undefined *****)pppppuVar13[1];
            if (pppppuVar13 != (undefined *****)0x0) {
              pppppuVar9 = pppppuVar13 + -1;
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
                if (bVar5) {
                  *(int *)pppppuVar9 = *(int *)pppppuVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            ppppuStack_108 = ppppuStack_138;
            ppuStack_140 = &PTR_DAT_110b04b98;
            ppppuStack_110 = (undefined ****)&PTR_SUB_110b01d60;
            ppppuStack_138 = (undefined ****)pppppuVar13;
            func_0x000107c2acd4(&ppppuStack_110);
            ppppuStack_e0 = (undefined ****)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppuStack_e0);
            ppppuStack_110 = (undefined ****)&ppppuStack_d0;
            FUN_10a0426d8(&ppppuStack_110);
            ppuStack_f0 = &PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppuStack_f0);
            (**(code **)(*param_2 + 0x220))(param_2);
            func_0x0001096ba9b0(puVar24 + 0x36,&ppuStack_140);
            ppuStack_140 = &PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppuStack_140);
          }
          func_0x0001096baa30(puVar24 + 0x36);
          if (lStack_120 - lStack_128 != 0) {
            _memmove(*(undefined8 *)(puVar24[0x37] + 0x18),lStack_128,lStack_120 - lStack_128);
          }
          func_0x0001096baa30(puVar24 + 0x36);
          lVar16 = puVar24[0x37];
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_transform_110c43308);
          func_0x00010aac2ce4(param_2,lVar16 + 0x30);
          (**(code **)(*param_2 + 0x220))(param_2);
          if (lStack_128 != 0) {
            lStack_120 = lStack_128;
            __ZdlPv();
          }
          (**(code **)(*param_2 + 0x220))(param_2);
        }
        FUN_10aabfcf4(param_2,&PTR_DAT_110c42f30,puVar24 + 0x3c);
        FUN_10aabfcf4(param_2,&PTR_DAT_110c42f50,puVar24 + 0x3e);
        FUN_10aabfcf4(param_2,&PTR_DAT_110c42f70,puVar24 + 0x38);
        FUN_10aabfcf4(param_2,&PTR_DAT_110c43838,puVar24 + 0x3a);
        FUN_10aabfcf4(param_2,&PTR_DAT_110c42f90,puVar24 + 0x40);
        FUN_10aabfcf4(param_2,&PTR_DAT_110c42fb0,puVar24 + 0x42);
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar23 = uVar23 + 1;
      } while (uVar23 != ((ulong)plVar22 & 0xffffffff));
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  uVar23 = (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 5) * -0xf0f0f0f0f0f0f0f;
  if (0 < (int)uVar23) {
    uVar18 = 0;
    piVar15 = (int *)(*(long *)(param_1 + 0x28) + 4);
    piVar21 = piVar15;
    do {
      if (uVar23 - uVar18 == 0) goto LAB_10aac13b0;
      if ((*piVar21 < 0) || ((*piVar15 == 0 && *piVar21 == 0 && (piVar21[-1] == 0)))) {
        *piVar21 = (int)uVar18;
      }
      uVar18 = uVar18 + 1;
      piVar21 = piVar21 + 0x88;
    } while ((uVar23 & 0x7fffffff) != uVar18);
  }
  plVar22 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c43010);
  if (((ulong)plVar22 & 1) != 0) {
    ppppuStack_110 = (undefined ****)0x0;
    ppppuStack_108 = (undefined ****)0x0;
    ppppuStack_100 = (undefined ****)0x0;
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c43010);
    plVar22 = param_2;
    (**(code **)(*param_2 + 0x208))();
    uVar18 = (ulong)plVar22 & 0xffffffff;
    lVar25 = (long)ppppuStack_108 - (long)ppppuStack_110;
    lVar16 = lVar25 >> 3;
    bVar5 = uVar18 < (ulong)(lVar16 * 0x21cfb2b78c13521d);
    uVar23 = uVar18 + lVar16 * -0x21cfb2b78c13521d;
    if (bVar5 || uVar23 == 0) {
      pppppuVar13 = (undefined *****)ppppuStack_108;
      if (bVar5) {
        pppppuVar13 = (undefined *****)(ppppuStack_110 + uVar18 * 0x35);
        pppppuVar9 = (undefined *****)ppppuStack_108;
        while (pppppuVar9 != pppppuVar13) {
          pppppuVar9 = pppppuVar9 + -0x35;
          (*(code *)**pppppuVar9)(pppppuVar9);
        }
      }
    }
    else if ((ulong)(((long)ppppuStack_100 - (long)ppppuStack_108 >> 3) * 0x21cfb2b78c13521d) <
             uVar23) {
      lVar17 = (long)ppppuStack_100 - (long)ppppuStack_110 >> 3;
      uVar19 = lVar17 * 0x439f656f1826a43a;
      if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
        uVar19 = uVar18;
      }
      if (0x4d4873ecade303 < (ulong)(lVar17 * 0x21cfb2b78c13521d)) {
        uVar19 = 0x9a90e7d95bc609;
      }
      ppppuStack_b0 = (undefined ****)&ppppuStack_110;
      if (0x9a90e7d95bc609 < uVar19) goto LAB_10aac13ac;
      ppppuVar10 = (undefined ****)(uVar19 * 0x1a8);
      __Znwm();
      puVar1 = (undefined8 *)((long)ppppuVar10 + lVar25);
      lVar16 = uVar18 * 0x1a8 + lVar16 * -8;
      puVar24 = puVar1;
      ppppuStack_d0 = ppppuVar10;
      ppppuStack_c8 = (undefined ****)puVar1;
      ppppuStack_b8 = ppppuVar10 + uVar19 * 0x35;
      do {
        puVar24[0x34] = 0;
        puVar24[0x31] = 0;
        puVar24[0x30] = 0;
        puVar24[0x33] = 0;
        puVar24[0x32] = 0;
        puVar24[0x2d] = 0;
        puVar24[0x2c] = 0;
        puVar24[0x2f] = 0;
        puVar24[0x2e] = 0;
        puVar24[0x29] = 0;
        puVar24[0x28] = 0;
        puVar24[0x2b] = 0;
        puVar24[0x2a] = 0;
        puVar24[0x25] = 0;
        puVar24[0x24] = 0;
        puVar24[0x27] = 0;
        puVar24[0x26] = 0;
        puVar24[0x21] = 0;
        puVar24[0x20] = 0;
        puVar24[0x23] = 0;
        puVar24[0x22] = 0;
        puVar24[0x1d] = 0;
        puVar24[0x1c] = 0;
        puVar24[0x1f] = 0;
        puVar24[0x1e] = 0;
        puVar24[0x19] = 0;
        puVar24[0x18] = 0;
        puVar24[0x1b] = 0;
        puVar24[0x1a] = 0;
        puVar24[0x15] = 0;
        puVar24[0x14] = 0;
        puVar24[0x17] = 0;
        puVar24[0x16] = 0;
        puVar24[0x11] = 0;
        puVar24[0x10] = 0;
        puVar24[0x13] = 0;
        puVar24[0x12] = 0;
        puVar24[0xd] = 0;
        puVar24[0xc] = 0;
        puVar24[0xf] = 0;
        puVar24[0xe] = 0;
        puVar24[9] = 0;
        puVar24[8] = 0;
        puVar24[0xb] = 0;
        puVar24[10] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        puVar24[7] = 0;
        puVar24[6] = 0;
        puVar24[1] = 0;
        *puVar24 = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        FUN_10a7a88cc(puVar24);
        ppppuVar20 = ppppuStack_108;
        pppppuVar13 = (undefined *****)ppppuStack_110;
        puVar24 = puVar24 + 0x35;
        lVar16 = lVar16 + -0x1a8;
      } while (lVar16 != 0);
      pppppuVar2 = (undefined *****)((long)puVar1 + ((long)ppppuStack_110 - (long)ppppuStack_108));
      pppppuVar11 = pppppuVar2;
      pppppuVar9 = (undefined *****)ppppuStack_110;
      if (ppppuStack_108 != ppppuStack_110) {
        do {
          FUN_10a69c1a8(pppppuVar11,pppppuVar9);
          pppppuVar9 = pppppuVar9 + 0x35;
          pppppuVar11 = pppppuVar11 + 0x35;
        } while (pppppuVar9 != (undefined *****)ppppuVar20);
        do {
          (*(code *)**pppppuVar13)(pppppuVar13);
          pppppuVar13 = pppppuVar13 + 0x35;
        } while (pppppuVar13 != (undefined *****)ppppuVar20);
      }
      ppppuStack_b8 = ppppuStack_100;
      ppppuStack_d0 = ppppuStack_110;
      ppppuStack_110 = (undefined ****)pppppuVar2;
      ppppuStack_108 = (undefined ****)(puVar1 + (uVar23 & 0xffffffff) * 0x35);
      ppppuStack_100 = ppppuVar10 + uVar19 * 0x35;
      ppppuStack_c8 = ppppuStack_d0;
      ppppuStack_c0 = ppppuStack_d0;
      FUN_10aae29fc(&ppppuStack_d0);
      pppppuVar13 = (undefined *****)ppppuStack_108;
    }
    else {
      pppppuVar13 = (undefined *****)(ppppuStack_108 + (uVar23 & 0xffffffff) * 0x35);
      lVar16 = uVar18 * 0x1a8 + lVar16 * -8;
      pppppuVar9 = (undefined *****)ppppuStack_108;
      do {
        pppppuVar9[0x34] = (undefined ****)0x0;
        pppppuVar9[0x31] = (undefined ****)0x0;
        pppppuVar9[0x30] = (undefined ****)0x0;
        pppppuVar9[0x33] = (undefined ****)0x0;
        pppppuVar9[0x32] = (undefined ****)0x0;
        pppppuVar9[0x2d] = (undefined ****)0x0;
        pppppuVar9[0x2c] = (undefined ****)0x0;
        pppppuVar9[0x2f] = (undefined ****)0x0;
        pppppuVar9[0x2e] = (undefined ****)0x0;
        pppppuVar9[0x29] = (undefined ****)0x0;
        pppppuVar9[0x28] = (undefined ****)0x0;
        pppppuVar9[0x2b] = (undefined ****)0x0;
        pppppuVar9[0x2a] = (undefined ****)0x0;
        pppppuVar9[0x25] = (undefined ****)0x0;
        pppppuVar9[0x24] = (undefined ****)0x0;
        pppppuVar9[0x27] = (undefined ****)0x0;
        pppppuVar9[0x26] = (undefined ****)0x0;
        pppppuVar9[0x21] = (undefined ****)0x0;
        pppppuVar9[0x20] = (undefined ****)0x0;
        pppppuVar9[0x23] = (undefined ****)0x0;
        pppppuVar9[0x22] = (undefined ****)0x0;
        pppppuVar9[0x1d] = (undefined ****)0x0;
        pppppuVar9[0x1c] = (undefined ****)0x0;
        pppppuVar9[0x1f] = (undefined ****)0x0;
        pppppuVar9[0x1e] = (undefined ****)0x0;
        pppppuVar9[0x19] = (undefined ****)0x0;
        pppppuVar9[0x18] = (undefined ****)0x0;
        pppppuVar9[0x1b] = (undefined ****)0x0;
        pppppuVar9[0x1a] = (undefined ****)0x0;
        pppppuVar9[0x15] = (undefined ****)0x0;
        pppppuVar9[0x14] = (undefined ****)0x0;
        pppppuVar9[0x17] = (undefined ****)0x0;
        pppppuVar9[0x16] = (undefined ****)0x0;
        pppppuVar9[0x11] = (undefined ****)0x0;
        pppppuVar9[0x10] = (undefined ****)0x0;
        pppppuVar9[0x13] = (undefined ****)0x0;
        pppppuVar9[0x12] = (undefined ****)0x0;
        pppppuVar9[0xd] = (undefined ****)0x0;
        pppppuVar9[0xc] = (undefined ****)0x0;
        pppppuVar9[0xf] = (undefined ****)0x0;
        pppppuVar9[0xe] = (undefined ****)0x0;
        pppppuVar9[9] = (undefined ****)0x0;
        pppppuVar9[8] = (undefined ****)0x0;
        pppppuVar9[0xb] = (undefined ****)0x0;
        pppppuVar9[10] = (undefined ****)0x0;
        pppppuVar9[5] = (undefined ****)0x0;
        pppppuVar9[4] = (undefined ****)0x0;
        pppppuVar9[7] = (undefined ****)0x0;
        pppppuVar9[6] = (undefined ****)0x0;
        pppppuVar9[1] = (undefined ****)0x0;
        *pppppuVar9 = (undefined ****)0x0;
        pppppuVar9[3] = (undefined ****)0x0;
        pppppuVar9[2] = (undefined ****)0x0;
        FUN_10a7a88cc(pppppuVar9);
        pppppuVar9 = pppppuVar9 + 0x35;
        lVar16 = lVar16 + -0x1a8;
      } while (lVar16 != 0);
    }
    ppppuStack_108 = (undefined ****)pppppuVar13;
    if ((int)plVar22 != 0) {
      lVar16 = 0;
      uVar23 = 0;
      do {
        ppppuVar10 = ppppuStack_110;
        uVar19 = ((long)ppppuStack_108 - (long)ppppuStack_110 >> 3) * 0x21cfb2b78c13521d;
        if (uVar19 < uVar23 || uVar19 - uVar23 == 0) goto LAB_10aac13b0;
        (**(code **)(*param_2 + 0x218))(param_2,uVar23);
        (**(code **)(*(long *)((long)ppppuVar10 + lVar16) + 0x10))
                  ((long)ppppuVar10 + lVar16,param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar23 = uVar23 + 1;
        lVar16 = lVar16 + 0x1a8;
      } while (uVar18 != uVar23);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
    lVar16 = *(long *)(param_1 + 0x28);
    lVar25 = *(long *)(param_1 + 0x30);
    if (lVar16 == lVar25) {
      FUN_10aac1508(param_1 + 0x28,
                    ((long)ppppuStack_108 - (long)ppppuStack_110 >> 3) * 0x21cfb2b78c13521d);
      lVar16 = *(long *)(param_1 + 0x28);
      lVar25 = *(long *)(param_1 + 0x30);
    }
    if (lVar25 != lVar16) {
      lVar25 = 0;
      uVar23 = 0;
      lVar17 = 8;
      do {
        uVar18 = ((long)ppppuStack_108 - (long)ppppuStack_110 >> 3) * 0x21cfb2b78c13521d;
        if (uVar18 < uVar23 || uVar18 - uVar23 == 0) goto LAB_10aac13b0;
        FUN_10a69bf24(lVar16 + lVar17,(long)ppppuStack_110 + lVar25);
        uVar23 = uVar23 + 1;
        lVar16 = *(long *)(param_1 + 0x28);
        uVar18 = (*(long *)(param_1 + 0x30) - lVar16 >> 5) * -0xf0f0f0f0f0f0f0f;
        lVar25 = lVar25 + 0x1a8;
        lVar17 = lVar17 + 0x220;
      } while (uVar23 <= uVar18 && uVar18 - uVar23 != 0);
    }
    FUN_10aad71bc(&ppppuStack_110);
  }
  plVar22 = (long *)(param_1 + 0x58);
  lVar16 = *plVar22;
  if (lVar16 == 0) {
    lStack_128 = CONCAT71(lStack_128._1_7_,1);
    FUN_10a14e260(&ppppuStack_d0,&ppppuStack_110,&lStack_128);
    func_0x00010a14ccb4(plVar22,&ppppuStack_d0);
    ppppuVar10 = ppppuStack_c8;
    if ((undefined *****)ppppuStack_c8 != (undefined *****)0x0) {
      pppppuVar13 = (undefined *****)(ppppuStack_c8 + 1);
      do {
        ppppuVar20 = *pppppuVar13;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
        if (bVar5) {
          *pppppuVar13 = (undefined ****)((long)ppppuVar20 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppuVar20 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar10);
      }
    }
    lVar16 = *plVar22;
  }
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110c43030,lVar16);
  plVar22 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c43050);
  if ((int)plVar22 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c43050);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(param_1 + 0x68,param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  puVar26 = PTR___tlv_bootstrap_11340d7e0;
  ppuVar14 = &PTR___tlv_bootstrap_11340d7e0;
  ppuVar12 = ppuVar14;
  (*(code *)PTR___tlv_bootstrap_11340d7e0)();
  if (((ulong)*ppuVar12 & 1) == 0) {
    ppuVar12 = &PTR___tlv_bootstrap_11340d7c8;
    (*(code *)PTR___tlv_bootstrap_11340d7c8)();
    __tlv_atexit(0x10aac16d0,ppuVar12,0x100000000);
    (*(code *)puVar26)();
    *(undefined1 *)ppuVar14 = 1;
  }
  plVar22 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c43070);
  if ((int)plVar22 == 0) {
    ppuVar14 = &PTR___tlv_bootstrap_11340d7c8;
    (*(code *)PTR___tlv_bootstrap_11340d7c8)();
    pppppuVar13 = (undefined *****)ppuVar14[1];
    if (((pppppuVar13 != (undefined *****)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_c8 = (undefined ****)pppppuVar13,
        pppppuVar13 != (undefined *****)0x0)) &&
       ((ppppuStack_d0 = (undefined ****)*ppuVar14,
        (undefined *****)ppppuStack_d0 == (undefined *****)0x0 ||
        (func_0x00010aac16fc(param_1 + 0x40,&ppppuStack_d0),
        (undefined *****)ppppuStack_c8 != (undefined *****)0x0)))) {
      pppppuVar9 = (undefined *****)ppppuStack_c8;
      pppppuVar13 = (undefined *****)(ppppuStack_c8 + 1);
      do {
        ppppuVar10 = *pppppuVar13;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
        if (bVar5) {
          *pppppuVar13 = (undefined ****)((long)ppppuVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
        goto LAB_10aac12a0;
      }
    }
  }
  else {
    plVar22 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c43070);
    if ((int)plVar22 != 0) {
      pppppuVar13 = (undefined *****)0xd8;
      __Znwm();
      pppppuVar13[1] = (undefined ****)0x0;
      pppppuVar13[2] = (undefined ****)0x0;
      *pppppuVar13 = (undefined ****)&PTR_DAT_110b04b48;
      pppppuVar13[4] = (undefined ****)0x0;
      pppppuVar13[3] = (undefined ****)0x0;
      pppppuVar13[8] = (undefined ****)0x0;
      pppppuVar13[7] = (undefined ****)0x0;
      pppppuVar13[10] = (undefined ****)0x0;
      pppppuVar13[9] = (undefined ****)0x0;
      pppppuVar13[0xc] = (undefined ****)0x0;
      pppppuVar13[0xb] = (undefined ****)0x0;
      pppppuVar13[6] = (undefined ****)0x0;
      pppppuVar13[5] = (undefined ****)0x0;
      pppppuVar13[0x10] = (undefined ****)0x0;
      pppppuVar13[0xf] = (undefined ****)0x0;
      pppppuVar13[0x12] = (undefined ****)0x0;
      pppppuVar13[0x11] = (undefined ****)0x0;
      pppppuVar13[0x14] = (undefined ****)0x0;
      pppppuVar13[0x13] = (undefined ****)0x0;
      pppppuVar13[0x16] = (undefined ****)0x0;
      pppppuVar13[0x15] = (undefined ****)0x0;
      pppppuVar13[0x18] = (undefined ****)0x0;
      pppppuVar13[0x17] = (undefined ****)0x0;
      pppppuVar13[0x1a] = (undefined ****)0x0;
      pppppuVar13[0x19] = (undefined ****)0x0;
      pppppuVar13[0xe] = (undefined ****)0x0;
      pppppuVar13[0xd] = (undefined ****)0x0;
      *(undefined4 *)(pppppuVar13 + 8) = 0x3f800000;
      pppppuVar13[10] = (undefined ****)0x0;
      pppppuVar13[0xb] = (undefined ****)0x0;
      pppppuVar13[0xc] = (undefined ****)0x0;
      func_0x0001096b81dc();
      pppppuVar13[0x1a] = (undefined ****)0x0;
      pppppuVar13[0x19] = (undefined ****)0x0;
      pppppuVar13[0x18] = (undefined ****)0x0;
      pppppuVar13[0x17] = (undefined ****)0x0;
      pppppuVar13[0x16] = (undefined ****)0x0;
      pppppuVar13[0x15] = (undefined ****)0x0;
      pppppuVar13[0x14] = (undefined ****)0x0;
      pppppuVar13[0x13] = (undefined ****)0x0;
      pppppuVar13[0x12] = (undefined ****)0x0;
      pppppuVar13[0x11] = (undefined ****)0x0;
      pppppuVar13[0x10] = (undefined ****)0x0;
      pppppuVar13[0xf] = (undefined ****)0x0;
      ppppuStack_d0 = (undefined ****)(pppppuVar13 + 3);
      ppppuStack_c8 = (undefined ****)pppppuVar13;
      func_0x00010aae2a50(param_1 + 0x40,&ppppuStack_d0);
      ppppuVar10 = ppppuStack_c8;
      if ((undefined *****)ppppuStack_c8 != (undefined *****)0x0) {
        pppppuVar13 = (undefined *****)(ppppuStack_c8 + 1);
        do {
          ppppuVar20 = *pppppuVar13;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar5) {
            *pppppuVar13 = (undefined ****)((long)ppppuVar20 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppuVar20 == (undefined ****)0x0) {
          (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar10);
        }
      }
      lVar16 = *(long *)(param_1 + 0x40);
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c43070);
      plVar22 = param_2;
      (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c43168);
      *(int *)(lVar16 + 0x30) = (int)plVar22;
      FUN_10aaaf654(param_2,&PTR_DAT_110c43188,lVar16 + 0x38);
      plVar22 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c431a8);
      if ((int)plVar22 != 0) {
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c431a8);
        FUN_10aac2df0(param_2,lVar16 + 0x50);
        (**(code **)(*param_2 + 0x220))(param_2);
      }
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c43898);
      func_0x00010aac2b08(param_2,&PTR_DAT_110c430e8,lVar16 + 0x60);
      func_0x00010aac2b08(param_2,&PTR_DAT_110c43108,lVar16 + 0x78);
      func_0x00010aac2b08(param_2,&PTR_DAT_110c43128,lVar16 + 0x90);
      func_0x00010aac2b08(param_2,&PTR_DAT_110c43148,lVar16 + 0xa8);
      (**(code **)(*param_2 + 0x220))(param_2);
      (**(code **)(*param_2 + 0x220))(param_2);
    }
    ppuVar14 = &PTR___tlv_bootstrap_11340d7c8;
    (*(code *)PTR___tlv_bootstrap_11340d7c8)();
    puVar27 = *(undefined **)(param_1 + 0x48);
    puVar26 = *(undefined **)(param_1 + 0x40);
    if (*(long *)(param_1 + 0x48) != 0) {
      plVar22 = (long *)(*(long *)(param_1 + 0x48) + 0x10);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar5) {
          *plVar22 = *plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuVar9 = (undefined *****)ppuVar14[1];
    ppuVar14[1] = puVar27;
    *ppuVar14 = puVar26;
    if (pppppuVar9 != (undefined *****)0x0) {
LAB_10aac12a0:
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar9);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
LAB_10aac13ac:
  func_0x000109ffded8();
LAB_10aac13b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aac13b4);
  (*pcVar4)();
}



/* Entry: 10aac1508; end: 10aac16cf;  */

long **** FUN_10aac1508(long ****param_1,ulong param_2)

{
  long ***ppplVar1;
  ulong uVar2;
  bool bVar3;
  long ****pppplVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long ****pppplVar8;
  long lVar9;
  long ****pppplVar10;
  long ***ppplStack_78;
  long **pplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  
  ppplVar1 = *param_1;
  pppplVar8 = (long ****)param_1[1];
  lVar6 = (long)pppplVar8 - (long)ppplVar1 >> 5;
  bVar3 = param_2 < (ulong)(lVar6 * -0xf0f0f0f0f0f0f0f);
  uVar2 = param_2 + lVar6 * 0xf0f0f0f0f0f0f0f;
  if (bVar3 || uVar2 == 0) {
    pppplVar4 = param_1;
    if (bVar3) {
      while (pppplVar8 != (long ****)(ppplVar1 + param_2 * 0x44)) {
        pppplVar8 = pppplVar8 + -0x44;
        pppplVar4 = pppplVar8;
        FUN_10a4ffeb4(pppplVar8);
      }
      param_1[1] = ppplVar1 + param_2 * 0x44;
    }
  }
  else if ((ulong)(((long)param_1[2] - (long)pppplVar8 >> 5) * -0xf0f0f0f0f0f0f0f) < uVar2) {
    if (0x78787878787878 < param_2) {
      FUN_10a4ffc58();
      ppplStack_68 = (long ***)pppplVar8;
      FUN_10aad7170(&ppplStack_78);
      __Unwind_Resume();
      if (param_1[1] != (long ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      return param_1;
    }
    lVar5 = (long)param_1[2] - (long)ppplVar1 >> 5;
    uVar7 = lVar5 * -0x1e1e1e1e1e1e1e1e;
    if (uVar7 < param_2 || uVar7 - param_2 == 0) {
      uVar7 = param_2;
    }
    if (0x3c3c3c3c3c3c3b < (ulong)(lVar5 * -0xf0f0f0f0f0f0f0f)) {
      uVar7 = 0x78787878787878;
    }
    pppplVar4 = param_1;
    ppplStack_58 = (long ***)param_1;
    FUN_10a4ffc6c();
    lVar5 = (long)pppplVar4 + ((long)pppplVar8 - (long)ppplVar1);
    lVar9 = param_2 * 0x220 + lVar6 * -0x20;
    lVar6 = lVar5;
    ppplStack_78 = (long ***)pppplVar4;
    pplStack_70 = (long **)lVar5;
    ppplStack_60 = (long ***)(pppplVar4 + uVar7 * 0x44);
    do {
      _bzero(lVar6,0x220);
      FUN_10aad6f70(lVar6);
      lVar6 = lVar6 + 0x220;
      lVar9 = lVar9 + -0x220;
    } while (lVar9 != 0);
    ppplVar1 = (long ***)((long)*param_1 + (lVar5 - (long)param_1[1]));
    func_0x00010aad7108(*param_1,param_1[1],ppplVar1);
    ppplStack_78 = *param_1;
    *param_1 = ppplVar1;
    param_1[1] = (long ***)(lVar5 + uVar2 * 0x220);
    ppplStack_60 = param_1[2];
    param_1[2] = (long ***)(pppplVar4 + uVar7 * 0x44);
    pppplVar4 = &ppplStack_78;
    pplStack_70 = (long **)ppplStack_78;
    ppplStack_68 = ppplStack_78;
    FUN_10aad7170(pppplVar4);
  }
  else {
    pppplVar10 = pppplVar8 + uVar2 * 0x44;
    lVar6 = param_2 * 0x220 + lVar6 * -0x20;
    do {
      _bzero(pppplVar8,0x220);
      pppplVar4 = pppplVar8;
      FUN_10aad6f70(pppplVar8);
      pppplVar8 = pppplVar8 + 0x44;
      lVar6 = lVar6 + -0x220;
    } while (lVar6 != 0);
    param_1[1] = (long ***)pppplVar10;
  }
  return pppplVar4;
}



/* Entry: 10aac16d0; end: 10aac1777;  */

long FUN_10aac16d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aac1778; end: 10aac19ab;  */

void FUN_10aac1778(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c42fd0,*(undefined4 *)(param_1 + 0x20));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c42ff0,*(undefined1 *)(param_1 + 0x24));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c43858);
  FUN_10aae2ab4(param_2,param_1 + 0x28);
  (**(code **)(*param_2 + 0x20))(param_2);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c43030);
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c43050);
  (**(code **)(*(long *)(param_1 + 0x68) + 0x18))((long *)(param_1 + 0x68),param_2);
  (**(code **)(*param_2 + 0x20))(param_2);
  puVar12 = PTR___tlv_bootstrap_11340dfc0;
  ppuVar9 = &PTR___tlv_bootstrap_11340dfc0;
  ppuVar5 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340dfc0)();
  ppuVar6 = &PTR___tlv_bootstrap_11340dfa8;
  if (((ulong)*ppuVar5 & 1) == 0) {
    ppuVar5 = ppuVar6;
    (*(code *)PTR___tlv_bootstrap_11340dfa8)(&PTR___tlv_bootstrap_11340dfa8);
    __tlv_atexit(FUN_10aac16d0,ppuVar5,0x100000000);
    (*(code *)puVar12)();
    *(undefined1 *)ppuVar9 = 1;
  }
  puVar11 = (undefined8 *)(param_1 + 0x40);
  (*(code *)PTR___tlv_bootstrap_11340dfa8)(*puVar11);
  if (((extraout_x8 != 0) && (plVar7 = (long *)ppuVar6[1], plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if ((*ppuVar6 == (undefined *)0x0) || (*ppuVar6 != (undefined *)*puVar11)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    if (!bVar4) {
      return;
    }
  }
  FUN_10aac19ac(param_2,&PTR_DAT_110c43070,puVar11);
  puVar13 = *(undefined **)(param_1 + 0x48);
  puVar12 = *(undefined **)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x48) + 0x10);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = ppuVar6[1];
  ppuVar6[1] = puVar13;
  *ppuVar6 = puVar12;
  if (puVar8 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10aac19ac; end: 10aac19ff;  */

void FUN_10aac19ac(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x18))();
    func_0x00010aac2c20(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010aac19f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



/* Entry: 10aac1a00; end: 10aac1abb;  */

long FUN_10aac1a00(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x68) == 0)) {
    ppuVar2 = &PTR_PTR_1133061c8;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 0x40);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x30) == (int)param_2) {
        return lVar3;
      }
      func_0x00010ae02ecc(0,param_2);
      func_0x00010ae02ecc();
      ppuVar2 = &PTR_PTR_113306228;
      ppuVar1 = ppuVar2;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      goto LAB_10aac1a94;
    }
    ppuVar2 = &PTR_PTR_1133061f8;
  }
  ppuVar1 = ppuVar2;
  FUN_10ae079a0(0,ppuVar2);
LAB_10aac1a94:
  FUN_10ae07cd4(ppuVar1,ppuVar2);
  return 0;
}



/* Entry: 10aac1abc; end: 10aac1bf3;  */

void FUN_10aac1abc(undefined8 *param_1,long param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 4);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if ((bVar1 & 1) == 0) {
      lVar3 = *param_3;
      lVar4 = param_3[1];
      lVar2 = lVar4 - lVar3 >> 3;
      if (lVar2 != 0) {
        FUN_10a0507f0(param_1,lVar2);
        lVar2 = param_1[1];
        lVar4 = lVar4 - lVar3;
        if (lVar4 != 0) {
          _memmove(lVar2,lVar3,lVar4);
        }
        param_1[1] = lVar2 + lVar4;
      }
      return;
    }
    lVar3 = 0;
    lVar4 = param_3[4] - param_3[3];
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    lVar3 = param_3[3];
    lVar4 = param_3[4];
    param_1[2] = 0;
    lVar4 = lVar4 - lVar3;
    lVar3 = param_3[7] - param_3[6] >> 2;
  }
  func_0x000107458bb4(param_1,lVar3 + (lVar4 >> 3));
  FUN_10aad7230(param_1,param_1[1],param_3[3],param_3[4],param_3[4] - param_3[3] >> 3);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_10aad7230(param_1,param_1[1],param_3[6],param_3[7],param_3[7] - param_3[6] >> 3);
    FUN_10aad7230(param_1,param_1[1],param_3[9],param_3[10],param_3[10] - param_3[9] >> 3);
  }
  return;
}



/* Entry: 10aac1bf4; end: 10aac1cff;  */

void FUN_10aac1bf4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0x1d0;
  if (((*(byte *)(param_2 + 4) | *(byte *)(param_2 + 5)) & 1) == 0) {
    lVar1 = 0x1c0;
  }
  lVar3 = *(long *)(param_3 + lVar1 + 8);
  lVar1 = *(long *)(lVar3 + 0x18);
  iVar2 = (int)((ulong)(*(long *)(lVar3 + 0x20) - lVar1) >> 2) * -0x55555555;
  func_0x00010aad7428(param_1,0,lVar1,lVar1 + (long)iVar2 * 0xc,(long)iVar2);
  if (*(char *)(param_2 + 5) == '\x01') {
    lVar1 = *(long *)(*(long *)(param_3 + 0x218) + 0x18);
    iVar2 = (int)((ulong)(*(long *)(*(long *)(param_3 + 0x218) + 0x20) - lVar1) >> 2) * -0x55555555;
    func_0x00010aad7428(param_1,param_1[1],lVar1,lVar1 + (long)iVar2 * 0xc,(long)iVar2);
    lVar1 = *(long *)(*(long *)(param_3 + 0x208) + 0x18);
    iVar2 = (int)((ulong)(*(long *)(*(long *)(param_3 + 0x208) + 0x20) - lVar1) >> 2) * -0x55555555;
    func_0x00010aad7428(param_1,param_1[1],lVar1,lVar1 + (long)iVar2 * 0xc,(long)iVar2);
  }
  return;
}



/* Entry: 10aac1d00; end: 10aac2b07;  */

void FUN_10aac1d00(long *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long ******pppppplVar13;
  undefined ***pppuVar14;
  int *piVar15;
  long ****pppplVar16;
  ulong uVar17;
  long lVar18;
  long ****pppplVar19;
  long ****pppplVar20;
  long ******pppppplVar21;
  long lVar22;
  long *plVar23;
  long *****ppppplVar24;
  long *****ppppplVar25;
  long ******pppppplVar26;
  long *****ppppplVar27;
  long ******pppppplVar28;
  float fVar29;
  undefined ***pppuVar30;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long *****ppppplStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  char cStack_b9;
  long lStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  undefined8 uStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  long *****ppppplStack_78;
  long *****ppppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_d0 = (long *****)0x0;
  uStack_c8 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  cStack_b9 = '\0';
  lVar22 = *(long *)(param_2 + 8);
  pppppplVar7 = (long ******)(*(long *)(param_3 + 8) + 8);
  if (*(char *)(*(long *)(param_3 + 8) + 0x1f) < '\0') {
    pppppplVar7 = (long ******)*pppppplVar7;
  }
  ppppplStack_b0 = (long *****)pppppplVar7;
  _strlen();
  lVar22 = lVar22 + 0x40;
  ppppplStack_a8 = (long *****)pppppplVar7;
  FUN_10aae2bbc(lVar22,&ppppplStack_b0);
  if (lVar22 == 0) {
    lVar12 = *(long *)(param_2 + 8);
    uVar17 = *(ulong *)(lVar12 + 0x20);
    if (-1 < (char)*(byte *)(lVar12 + 0x2f)) {
      uVar17 = (ulong)*(byte *)(lVar12 + 0x2f);
    }
    FUN_10a003c90(&ppppplStack_b0,uVar17 + 1,&ppuStack_e0);
    pppppplVar7 = (long ******)ppppplStack_b0;
    if (-1 < (long)uStack_a0) {
      pppppplVar7 = &ppppplStack_b0;
    }
    if (uVar17 != 0) {
      lVar18 = *(long *)(lVar12 + 0x18);
      if (-1 < *(char *)(lVar12 + 0x2f)) {
        lVar18 = lVar12 + 0x18;
      }
      _memmove(pppppplVar7,lVar18,uVar17);
    }
    *(undefined2 *)((long)pppppplVar7 + uVar17) = 0x2f;
    plVar23 = (long *)(*(long *)(param_3 + 8) + 8);
    if (*(char *)(*(long *)(param_3 + 8) + 0x1f) < '\0') {
      plVar23 = (long *)*plVar23;
    }
    lVar12 = (long)plVar23;
    _strlen(plVar23);
    pppppplVar7 = &ppppplStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppplVar7,plVar23,lVar12);
    pppppplVar8 = (long ******)*pppppplVar7;
    uStack_88 = SUB87(pppppplVar7[1],0);
    uStack_81 = (undefined1)*(undefined8 *)((long)pppppplVar7 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar7 + 0xf) >> 8);
    cVar3 = *(char *)((long)pppppplVar7 + 0x17);
    pppppplVar7[1] = (long *****)0x0;
    pppppplVar7[2] = (long *****)0x0;
    *pppppplVar7 = (long *****)0x0;
    if (cStack_b9 < '\0') {
      __ZdlPv(ppppplStack_d0);
    }
    uStack_c8 = uStack_88;
    uStack_c1 = uStack_81;
    uStack_c0 = uStack_80;
    ppppplStack_d0 = (long *****)pppppplVar8;
    cStack_b9 = cVar3;
    if ((long)uStack_a0 < 0) {
      __ZdlPv(ppppplStack_b0);
    }
    lVar12 = *(long *)(param_2 + 8);
    ppppplVar25 = (long *****)(lVar12 + 0x18);
LAB_10aac1f64:
    lVar18 = *(long *)(lVar12 + 8);
    __ZNSt3__15mutex4lockEv(lVar18 + 0x50);
    lVar12 = lVar18;
    func_0x00010aae2cb8(lVar18,&ppppplStack_d0);
    if (lVar12 == 0) {
      pppppplVar7 = (long ******)(lVar18 + 0x28);
      pppppplVar8 = pppppplVar7;
      func_0x00010aae2d9c(pppppplVar7,&ppppplStack_d0);
      if (pppppplVar8 == (long ******)0x0) {
        ppppplVar24 = *(long ******)(lVar18 + 0xa0);
        ppppplVar27 = (long *****)ppppplVar24[2];
        uStack_80 = 0;
        uStack_79 = 0;
        ppppplStack_78 = (long *****)0x0;
        if (ppppplVar27 == (long *****)0x0) {
          pppppplVar8 = &ppppplStack_b0;
          if (cStack_b9 < '\0') {
            func_0x000107c3192c(&ppppplStack_a8,ppppplStack_d0,CONCAT17(uStack_c1,uStack_c8));
          }
          else {
            uStack_a0 = (long *****)CONCAT17(uStack_c1,uStack_c8);
            ppppplStack_a8 = ppppplStack_d0;
            pppplStack_98 = (long ****)CONCAT17(cStack_b9,uStack_c0);
          }
          pppppplVar9 = (long ******)0xe8;
          pppplStack_90 = (long ****)ppppplVar25;
          __Znwm();
          pppplVar16 = pppplStack_98;
          pppppplVar9[2] = (long *****)0x0;
          pppppplVar9[1] = (long *****)0x200000006;
          *(undefined2 *)(pppppplVar9 + 3) = 4;
          pppppplVar9[5] = (long *****)0x0;
          pppppplVar9[4] = (long *****)0x0;
          pppppplVar9[7] = (long *****)0x0;
          pppppplVar9[6] = (long *****)0x0;
          pppppplVar9[9] = (long *****)0x0;
          pppppplVar9[8] = (long *****)0x0;
          pppppplVar9[0xb] = (long *****)0x0;
          pppppplVar9[10] = (long *****)0x0;
          pppppplVar9[0xd] = (long *****)0x0;
          pppppplVar9[0xc] = (long *****)0x0;
          pppppplVar9[0xf] = (long *****)0x0;
          pppppplVar9[0xe] = (long *****)0x0;
          pppppplVar9[0x10] = (long *****)0x0;
          pppppplVar9[0x11] = (long *****)(pppppplVar9 + 3);
          pppppplVar9[0x12] = (long *****)0x0;
          *(undefined1 *)(pppppplVar9 + 0x13) = 0;
          *(undefined1 *)(pppppplVar9 + 0x15) = 0;
          *pppppplVar9 = (long *****)&PTR_FUN_110c442e8;
          pppppplVar9[0x18] = uStack_a0;
          pppppplVar9[0x17] = ppppplStack_a8;
          ppppplStack_a8 = (long *****)0x0;
          uStack_a0 = (long *****)0x0;
          pppplStack_98 = (long ****)0x0;
          pppppplVar9[0x19] = (long *****)pppplVar16;
          pppppplVar9[0x1a] = ppppplVar25;
          *(undefined1 *)(pppppplVar9 + 0x1b) = 1;
          pppppplVar9[0x1c] = (long *****)0x0;
          plVar23 = (long *)CONCAT17(uStack_79,uStack_80);
          if (plVar23 != (long *)0x0) {
            puVar1 = (ulong *)(plVar23 + 1);
            do {
              uVar17 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar17 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar17 & 0x1fffffffc) == 4) {
              do {
                uVar17 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar17 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar17 - 1 == 0) {
                (**(code **)(*plVar23 + 8))();
              }
            }
          }
          uStack_80 = SUB87(pppppplVar9,0);
          uStack_79 = (undefined1)((ulong)pppppplVar9 >> 0x38);
          if (ppppplStack_78 != (long *****)0x0) {
            func_0x0001092b4274(&ppppplStack_78);
          }
          uStack_88 = SUB87(pppppplVar9 + 0x16,0);
          uStack_81 = (undefined1)((ulong)(pppppplVar9 + 0x16) >> 0x38);
          ppppplStack_78 = (long *****)pppppplVar9;
          if ((long)pppplStack_98 < 0) {
            __ZdlPv(ppppplStack_a8);
          }
          ppppplStack_70 = (long *****)FUN_10aae2eb0;
        }
        else {
          lStack_b8 = 0;
          (*(code *)(*ppppplVar27)[5])(ppppplVar27,0,&lStack_b8);
          if (lStack_b8 != 0) {
            func_0x0001092af97c(&lStack_b8);
            goto LAB_10aac29b0;
          }
          if (cStack_b9 < '\0') {
            func_0x000107c3192c(&ppppplStack_a8,ppppplStack_d0,CONCAT17(uStack_c1,uStack_c8));
          }
          else {
            uStack_a0 = (long *****)CONCAT17(uStack_c1,uStack_c8);
            ppppplStack_a8 = ppppplStack_d0;
            pppplStack_98 = (long ****)CONCAT17(cStack_b9,uStack_c0);
          }
          pppppplVar8 = (long ******)0xf0;
          pppplStack_90 = (long ****)ppppplVar25;
          __Znwm();
          pppplVar16 = pppplStack_98;
          *(undefined2 *)(pppppplVar8 + 3) = 4;
          pppppplVar8[2] = (long *****)0x0;
          pppppplVar8[1] = (long *****)0x200000006;
          pppppplVar8[5] = (long *****)0x0;
          pppppplVar8[4] = (long *****)0x0;
          pppppplVar8[7] = (long *****)0x0;
          pppppplVar8[6] = (long *****)0x0;
          pppppplVar8[9] = (long *****)0x0;
          pppppplVar8[8] = (long *****)0x0;
          pppppplVar8[0xb] = (long *****)0x0;
          pppppplVar8[10] = (long *****)0x0;
          pppppplVar8[0xd] = (long *****)0x0;
          pppppplVar8[0xc] = (long *****)0x0;
          pppppplVar8[0xf] = (long *****)0x0;
          pppppplVar8[0xe] = (long *****)0x0;
          pppppplVar8[0x10] = (long *****)0x0;
          pppppplVar8[0x11] = (long *****)(pppppplVar8 + 3);
          pppppplVar8[0x12] = (long *****)0x0;
          *(undefined1 *)(pppppplVar8 + 0x13) = 0;
          *(undefined1 *)(pppppplVar8 + 0x15) = 0;
          *pppppplVar8 = (long *****)&PTR_FUN_110c44278;
          pppppplVar8[0x18] = uStack_a0;
          pppppplVar8[0x17] = ppppplStack_a8;
          ppppplStack_a8 = (long *****)0x0;
          uStack_a0 = (long *****)0x0;
          pppplStack_98 = (long ****)0x0;
          pppppplVar8[0x19] = (long *****)pppplVar16;
          pppppplVar8[0x1a] = ppppplVar25;
          *(undefined1 *)(pppppplVar8 + 0x1b) = 1;
          pppppplVar8[0x1c] = (long *****)0x0;
          pppppplVar8[0x1d] = ppppplVar27;
          plVar23 = (long *)CONCAT17(uStack_79,uStack_80);
          if (plVar23 != (long *)0x0) {
            puVar1 = (ulong *)(plVar23 + 1);
            do {
              uVar17 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar17 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar17 & 0x1fffffffc) == 4) {
              do {
                uVar17 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar17 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar17 - 1 == 0) {
                (**(code **)(*plVar23 + 8))();
              }
            }
          }
          uStack_80 = SUB87(pppppplVar8,0);
          uStack_79 = (undefined1)((ulong)pppppplVar8 >> 0x38);
          if (ppppplStack_78 != (long *****)0x0) {
            func_0x0001092b4274(&ppppplStack_78);
          }
          uStack_88 = SUB87(pppppplVar8 + 0x16,0);
          uStack_81 = (undefined1)((ulong)(pppppplVar8 + 0x16) >> 0x38);
          ppppplStack_78 = (long *****)pppppplVar8;
          if ((long)pppplStack_98 < 0) {
            __ZdlPv(ppppplStack_a8);
          }
          ppppplStack_70 = (long *****)FUN_10aae2e80;
          __ZNSt13exception_ptrD1Ev(&lStack_b8);
        }
        pppppplVar9 = (long ******)CONCAT17(uStack_81,uStack_88);
        pppppplVar28 = pppppplVar9;
        if (pppppplVar9[6] != (long *****)0x0) {
          func_0x0001092b4274();
          pppppplVar28 = (long ******)CONCAT17(uStack_81,uStack_88);
        }
        pppppplVar9[6] = ppppplStack_78;
        ppppplStack_78 = (long *****)0x0;
        ppppplStack_b0 = ppppplStack_70;
        ppppplStack_a8 = (long *****)pppppplVar28;
        uStack_a0 = ppppplVar24;
        (*(code *)**ppppplVar24)(ppppplVar24,&ppppplStack_b0);
        ppppplVar25 = (long *****)CONCAT17(uStack_79,uStack_80);
        uStack_80 = 0;
        uStack_79 = 0;
        if (ppppplStack_78 != (long *****)0x0) {
          func_0x0001092b4274(&ppppplStack_78);
          plVar23 = (long *)CONCAT17(uStack_79,uStack_80);
          if (plVar23 != (long *)0x0) {
            puVar1 = (ulong *)(plVar23 + 1);
            do {
              uVar17 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar17 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar17 & 0x1fffffffc) == 4) {
              do {
                uVar17 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar17 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar17 - 1 == 0) {
                (**(code **)(*plVar23 + 8))();
              }
            }
          }
        }
        pppppplVar9 = pppppplVar7;
        func_0x000107c2b05c(pppppplVar7,&ppppplStack_d0);
        pppppplVar28 = *(long *******)(lVar18 + 0x30);
        if (pppppplVar28 != (long ******)0x0) {
          uVar17 = (long)pppppplVar28 - 1;
          if (((ulong)pppppplVar28 & uVar17) == 0) {
            pppppplVar8 = (long ******)(uVar17 & (ulong)pppppplVar9);
          }
          else {
            pppppplVar8 = pppppplVar9;
            if (pppppplVar28 <= pppppplVar9) {
              uVar5 = 0;
              if (pppppplVar28 != (long ******)0x0) {
                uVar5 = (ulong)pppppplVar9 / (ulong)pppppplVar28;
              }
              pppppplVar8 = (long ******)((long)pppppplVar9 - uVar5 * (long)pppppplVar28);
            }
          }
          if ((*pppppplVar7)[(long)pppppplVar8] != (long ****)0x0) {
            for (pppppplVar26 = (long ******)*(*pppppplVar7)[(long)pppppplVar8];
                pppppplVar26 != (long ******)0x0; pppppplVar26 = (long ******)*pppppplVar26) {
              pppppplVar13 = (long ******)pppppplVar26[1];
              if (pppppplVar13 == pppppplVar9) {
                pppppplVar13 = pppppplVar7;
                func_0x000107c2b068(pppppplVar7,pppppplVar26 + 2,&ppppplStack_d0);
                if (((ulong)pppppplVar13 & 1) != 0) goto LAB_10aac2650;
              }
              else {
                if (((ulong)pppppplVar28 & uVar17) == 0) {
                  pppppplVar13 = (long ******)((ulong)pppppplVar13 & uVar17);
                }
                else if (pppppplVar28 <= pppppplVar13) {
                  uVar5 = 0;
                  if (pppppplVar28 != (long ******)0x0) {
                    uVar5 = (ulong)pppppplVar13 / (ulong)pppppplVar28;
                  }
                  pppppplVar13 = (long ******)((long)pppppplVar13 - uVar5 * (long)pppppplVar28);
                }
                if (pppppplVar13 != pppppplVar8) break;
              }
            }
          }
        }
        pppppplVar26 = (long ******)0x30;
        __Znwm();
        uStack_a0 = (long *****)0x0;
        *pppppplVar26 = (long *****)0x0;
        pppppplVar26[1] = (long *****)pppppplVar9;
        ppppplStack_b0 = (long *****)pppppplVar26;
        ppppplStack_a8 = (long *****)pppppplVar7;
        if (cStack_b9 < '\0') {
          func_0x000107c3192c(pppppplVar26 + 2,ppppplStack_d0,CONCAT17(uStack_c1,uStack_c8));
        }
        else {
          pppppplVar26[3] = (long *****)CONCAT17(uStack_c1,uStack_c8);
          pppppplVar26[2] = ppppplStack_d0;
          pppppplVar26[4] = (long *****)CONCAT17(cStack_b9,uStack_c0);
        }
        pppppplVar26[5] = (long *****)0x0;
        uStack_a0 = (long *****)CONCAT71(uStack_a0._1_7_,1);
        fVar29 = (float)(*(long *)(lVar18 + 0x40) + 1);
        if ((pppppplVar28 == (long ******)0x0) ||
           (*(float *)(lVar18 + 0x48) * (float)pppppplVar28 < fVar29)) {
          uVar17 = 1;
          if ((long ******)0x2 < pppppplVar28) {
            uVar17 = (ulong)(((ulong)pppppplVar28 & (long)pppppplVar28 - 1U) != 0);
          }
          pppppplVar8 = (long ******)(uVar17 | (long)pppppplVar28 << 1);
          pppppplVar28 = (long ******)(long)(fVar29 / *(float *)(lVar18 + 0x48));
          if (pppppplVar8 <= pppppplVar28) {
            pppppplVar8 = pppppplVar28;
          }
          if ((long)pppppplVar8 - 1U == 0) {
            pppppplVar8 = (long ******)0x2;
          }
          else if (((ulong)pppppplVar8 & (long)pppppplVar8 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          pppppplVar28 = *(long *******)(lVar18 + 0x30);
          if (pppppplVar28 < pppppplVar8) {
LAB_10aac2464:
            if ((ulong)pppppplVar8 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10aac29b0;
            }
            ppppplVar24 = (long *****)((long)pppppplVar8 << 3);
            __Znwm();
            ppppplVar27 = *pppppplVar7;
            *pppppplVar7 = ppppplVar24;
            if (ppppplVar27 != (long *****)0x0) {
              __ZdlPv();
            }
            pppppplVar28 = (long ******)0x0;
            *(long *******)(lVar18 + 0x30) = pppppplVar8;
            do {
              (*pppppplVar7)[(long)pppppplVar28] = (long ****)0x0;
              pppppplVar28 = (long ******)((long)pppppplVar28 + 1);
            } while (pppppplVar8 != pppppplVar28);
            pppplVar16 = *(long *****)(lVar18 + 0x38);
            pppppplVar28 = pppppplVar8;
            if (pppplVar16 != (long ****)0x0) {
              pppppplVar13 = (long ******)pppplVar16[1];
              uVar17 = (long)pppppplVar8 - 1;
              if (((ulong)pppppplVar8 & uVar17) == 0) {
                pppppplVar13 = (long ******)((ulong)pppppplVar13 & uVar17);
              }
              else if (pppppplVar8 <= pppppplVar13) {
                uVar5 = 0;
                if (pppppplVar8 != (long ******)0x0) {
                  uVar5 = (ulong)pppppplVar13 / (ulong)pppppplVar8;
                }
                pppppplVar13 = (long ******)((long)pppppplVar13 - uVar5 * (long)pppppplVar8);
              }
              (*pppppplVar7)[(long)pppppplVar13] = (long ****)(lVar18 + 0x38);
              pppplVar19 = (long ****)*pppplVar16;
              while (pppplVar19 != (long ****)0x0) {
                pppppplVar21 = (long ******)pppplVar19[1];
                if (((ulong)pppppplVar8 & uVar17) == 0) {
                  pppppplVar21 = (long ******)((ulong)pppppplVar21 & uVar17);
                }
                else if (pppppplVar8 <= pppppplVar21) {
                  uVar5 = 0;
                  if (pppppplVar8 != (long ******)0x0) {
                    uVar5 = (ulong)pppppplVar21 / (ulong)pppppplVar8;
                  }
                  pppppplVar21 = (long ******)((long)pppppplVar21 - uVar5 * (long)pppppplVar8);
                }
                pppplVar20 = pppplVar19;
                if (pppppplVar21 != pppppplVar13) {
                  ppppplVar24 = *pppppplVar7;
                  if (ppppplVar24[(long)pppppplVar21] == (long ****)0x0) {
                    ppppplVar24[(long)pppppplVar21] = pppplVar16;
                    pppppplVar13 = pppppplVar21;
                  }
                  else {
                    *pppplVar16 = *pppplVar19;
                    *pppplVar19 = *ppppplVar24[(long)pppppplVar21];
                    *ppppplVar24[(long)pppppplVar21] = (long ***)pppplVar19;
                    pppplVar20 = pppplVar16;
                  }
                }
                pppplVar16 = pppplVar20;
                pppplVar19 = (long ****)*pppplVar20;
              }
            }
          }
          else if (pppppplVar8 < pppppplVar28) {
            pppppplVar13 = (long ******)
                           (long)((float)*(ulong *)(lVar18 + 0x40) / *(float *)(lVar18 + 0x48));
            if ((pppppplVar28 < (long ******)0x3) ||
               (((ulong)pppppplVar28 & (long)pppppplVar28 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ******)0x1 < pppppplVar13) {
              pppppplVar13 = (long ******)(1L << (-LZCOUNT((long)pppppplVar13 + -1) & 0x3fU));
            }
            if (pppppplVar8 <= pppppplVar13) {
              pppppplVar8 = pppppplVar13;
            }
            if (pppppplVar8 < pppppplVar28) {
              if (pppppplVar8 != (long ******)0x0) goto LAB_10aac2464;
              ppppplVar24 = *pppppplVar7;
              *pppppplVar7 = (long *****)0x0;
              if (ppppplVar24 != (long *****)0x0) {
                __ZdlPv();
              }
              *(undefined8 *)(lVar18 + 0x30) = 0;
              pppppplVar28 = (long ******)0x0;
            }
            else {
              pppppplVar28 = *(long *******)(lVar18 + 0x30);
            }
          }
          if (((ulong)pppppplVar28 & (long)pppppplVar28 - 1U) == 0) {
            pppppplVar8 = (long ******)((long)pppppplVar28 - 1U & (ulong)pppppplVar9);
          }
          else {
            pppppplVar8 = pppppplVar9;
            if (pppppplVar28 <= pppppplVar9) {
              uVar17 = 0;
              if (pppppplVar28 != (long ******)0x0) {
                uVar17 = (ulong)pppppplVar9 / (ulong)pppppplVar28;
              }
              pppppplVar8 = (long ******)((long)pppppplVar9 - uVar17 * (long)pppppplVar28);
            }
          }
        }
        ppppplVar24 = *pppppplVar7;
        pppplVar16 = ppppplVar24[(long)pppppplVar8];
        if (pppplVar16 == (long ****)0x0) {
          pppplVar16 = (long ****)(lVar18 + 0x38);
          *pppppplVar26 = (long *****)*pppplVar16;
          *pppplVar16 = (long ***)pppppplVar26;
          ppppplVar24[(long)pppppplVar8] = pppplVar16;
          if (*pppppplVar26 != (long *****)0x0) {
            pppppplVar8 = (long ******)(*pppppplVar26)[1];
            if (((ulong)pppppplVar28 & (long)pppppplVar28 - 1U) == 0) {
              pppppplVar8 = (long ******)((ulong)pppppplVar8 & (long)pppppplVar28 - 1U);
            }
            else if (pppppplVar28 <= pppppplVar8) {
              uVar17 = 0;
              if (pppppplVar28 != (long ******)0x0) {
                uVar17 = (ulong)pppppplVar8 / (ulong)pppppplVar28;
              }
              pppppplVar8 = (long ******)((long)pppppplVar8 - uVar17 * (long)pppppplVar28);
            }
            (*pppppplVar7)[(long)pppppplVar8] = (long ****)pppppplVar26;
          }
        }
        else {
          *pppppplVar26 = (long *****)*pppplVar16;
          *pppplVar16 = (long ***)pppppplVar26;
        }
        *(long *)(lVar18 + 0x40) = *(long *)(lVar18 + 0x40) + 1;
LAB_10aac2650:
        ppppplVar24 = pppppplVar26[5];
        if (ppppplVar24 != (long *****)0x0) {
          ppppplVar27 = ppppplVar24 + 1;
          do {
            pppplVar16 = *ppppplVar27;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
            if (bVar4) {
              *ppppplVar27 = (long ****)((long)pppplVar16 + -4);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (((ulong)pppplVar16 & 0x1fffffffc) == 4) {
            do {
              pppplVar16 = *ppppplVar27;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppplVar27,0x10);
              if (bVar4) {
                *ppppplVar27 = (long ****)((long)pppplVar16 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((long ****)((long)pppplVar16 + -1) == (long ****)0x0) {
              (*(code *)(*ppppplVar24)[1])();
            }
          }
        }
        pppppplVar26[5] = ppppplVar25;
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar18 + 0x50);
    __ZNSt3__15mutex4lockEv(lVar18 + 0x50);
    lVar12 = lVar18;
    func_0x00010aae2cb8(lVar18,&ppppplStack_d0);
    if (lVar12 == 0) {
      lVar12 = lVar18 + 0x28;
      func_0x00010aae2d9c(lVar12,&ppppplStack_d0);
      if (lVar12 == 0) {
        pppuVar30 = *(undefined ****)(lVar18 + 0x98);
        ppuStack_e0 = *(undefined ***)(lVar18 + 0x90);
        goto LAB_10aac26c0;
      }
      plVar23 = *(long **)(lVar12 + 0x28);
      uStack_88 = SUB87(plVar23,0);
      uStack_81 = (undefined1)((ulong)plVar23 >> 0x38);
      if (plVar23 != (long *)0x0) {
        plVar2 = plVar23 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      __ZNSt3__15mutex6unlockEv(lVar18 + 0x50);
      FUN_109d1a244(&uStack_88);
      plVar2 = plVar23 + 2;
      if ((((uint)*plVar2 >> 1 & 1) == 0) || (((uint)*plVar2 >> 5 & 1) != 0)) {
        if (((uint)*plVar2 >> 5 & 1) == 0) {
          puVar10 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar10 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar10,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(&ppppplStack_b0,plVar23 + 0x12);
          func_0x0001092af97c(&ppppplStack_b0);
        }
        goto LAB_10aac29b0;
      }
      if ((*(byte *)(plVar23 + 0x15) & 1) == 0) goto LAB_10aac29b0;
      pppuStack_d8 = (undefined ***)plVar23[0x14];
      ppuStack_e0 = (undefined **)plVar23[0x13];
      if (pppuStack_d8 != (undefined ***)0x0) {
        pppuVar30 = pppuStack_d8 + -1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar30,0x10);
          if (bVar4) {
            *(int *)pppuVar30 = *(int *)pppuVar30 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar1 = (ulong *)(plVar23 + 1);
      do {
        uVar17 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar17 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar17 & 0x1fffffffc) == 4) {
        do {
          uVar17 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar17 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar17 - 1 == 0) {
          (**(code **)(*plVar23 + 8))(plVar23);
        }
      }
      if (pppuStack_d8 != (undefined ***)0x0) goto LAB_10aac26ec;
LAB_10aac27c8:
      lVar12 = *(long *)(param_3 + 8);
      lVar22 = (long)*(char *)(lVar12 + 0x1f);
      if (lVar22 < 0) {
        lVar18 = *(long *)(lVar12 + 8);
        lVar22 = *(long *)(lVar12 + 0x10);
      }
      else {
        lVar18 = lVar12 + 8;
      }
      FUN_10ae03140(0,lVar18,lVar22);
      FUN_10ae03140();
      ppuVar11 = &PTR_PTR_113306280;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar11,&PTR_PTR_113306280);
    }
    else {
      pppuVar30 = *(undefined ****)(lVar12 + 0x30);
      ppuStack_e0 = *(undefined ***)(lVar12 + 0x28);
LAB_10aac26c0:
      if (pppuVar30 != (undefined ***)0x0) {
        pppuVar14 = pppuVar30 + -1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
          if (bVar4) {
            *(int *)pppuVar14 = *(int *)pppuVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppuStack_d8 = pppuVar30;
      __ZNSt3__15mutex6unlockEv(lVar18 + 0x50);
      if (pppuVar30 == (undefined ***)0x0) goto LAB_10aac27c8;
LAB_10aac26ec:
      if (lVar22 != 0) {
        FUN_10aad7680(lVar22 + 0x38);
      }
    }
    param_1[1] = (long)pppuStack_d8;
    *param_1 = (long)ppuStack_e0;
    if (param_1[1] != 0) {
      piVar15 = (int *)(param_1[1] + -8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = *piVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_e0 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_e0);
    if (cStack_b9 < '\0') {
      __ZdlPv(ppppplStack_d0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar18 = *(long *)(param_3 + 8);
    lVar12 = (long)*(char *)(lVar18 + 0x1f);
    if (lVar12 < 0) {
      ppuStack_e0 = *(undefined ***)(lVar18 + 8);
      lVar12 = *(long *)(lVar18 + 0x10);
    }
    else {
      ppuStack_e0 = (undefined **)(lVar18 + 8);
    }
    pppuStack_d8 = (undefined ***)(long)(int)lVar12;
    if ((int)lVar12 < 0) goto LAB_10aac29b0;
    pppuVar30 = &ppuStack_e0;
    FUN_10a166af4(pppuVar30,"/",0);
    ppuVar11 = ppuStack_e0;
    pppppplVar7 = (long ******)((long)pppuStack_d8 - (long)pppuVar30);
    if (pppuVar30 <= pppuStack_d8) {
      if ((long ******)0x7ffffffffffffff7 < pppppplVar7) {
        func_0x000109ffde50();
        goto LAB_10aac29b0;
      }
      if (pppppplVar7 < (long ******)0x17) {
        uStack_a0 = (long *****)CONCAT17((char)pppppplVar7,(undefined7)uStack_a0);
        pppppplVar9 = &ppppplStack_b0;
        if (pppuStack_d8 != pppuVar30) goto LAB_10aac1f08;
      }
      else {
        pppppplVar8 = (long ******)0x19;
        if (((ulong)pppppplVar7 | 7) != 0x17) {
          pppppplVar8 = (long ******)(((ulong)pppppplVar7 | 7) + 1);
        }
        pppppplVar9 = pppppplVar8;
        __Znwm();
        uStack_a0 = (long *****)((ulong)pppppplVar8 | 0x8000000000000000);
        ppppplStack_b0 = (long *****)pppppplVar9;
        ppppplStack_a8 = (long *****)pppppplVar7;
LAB_10aac1f08:
        _memmove(pppppplVar9,(long)ppuVar11 + (long)pppuVar30,pppppplVar7);
      }
      *(undefined1 *)((long)pppppplVar9 + (long)pppppplVar7) = 0;
      ppppplVar25 = (long *****)(lVar22 + 0x20);
      FUN_10a0b4df8(&uStack_88,ppppplVar25,&ppppplStack_b0);
      if (cStack_b9 < '\0') {
        __ZdlPv(ppppplStack_d0);
      }
      ppppplStack_d0 = (long *****)CONCAT17(uStack_81,uStack_88);
      uStack_c8 = uStack_80;
      uStack_c1 = uStack_79;
      uStack_c0 = SUB87(ppppplStack_78,0);
      cStack_b9 = (char)((ulong)ppppplStack_78 >> 0x38);
      if ((long)uStack_a0 < 0) {
        __ZdlPv(ppppplStack_b0);
      }
      lVar12 = *(long *)(param_2 + 8);
      goto LAB_10aac1f64;
    }
  }
  FUN_109ffdddc(&UNK_10f2fca6e);
LAB_10aac29b0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aac29b4);
  (*pcVar6)();
}



/* Entry: 10aac2b08; end: 10aac2def;  */

void FUN_10aac2b08(long *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  plVar2 = param_2;
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
  }
  else if ((uStack_30 & 7) == 0) {
    func_0x0001096b5544(param_3,uStack_30 >> 3);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*param_3,uStack_38,uStack_30);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aac2b78);
    (*pcVar1)();
  }
  FUN_10a324f10();
  (**(code **)(*param_2 + 0x28))();
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c43108,plVar2[3],plVar2[4] - plVar2[3]);
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c43128,plVar2[6],plVar2[7] - plVar2[6]);
                    /* WARNING: Could not recover jumptable at 0x00010aac2c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c43148,plVar2[9],plVar2[10] - plVar2[9]);
  return;
}



/* Entry: 10aac2df0; end: 10aac316f;  */

void FUN_10aac2df0(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined **appuStack_c0 [2];
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  byte bStack_78;
  long lStack_58;
  
  pppuVar4 = appuStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001096b88e8(&ppuStack_98);
  FUN_10aac3170(param_1,&PTR_DAT_110c431c8,lStack_90 + 8);
  FUN_10aac3170(param_1,&PTR_DAT_110c431e8,lStack_90 + 0x20);
  lVar11 = lStack_90;
  (**(code **)(*param_1 + 0x1d8))(&puStack_88,param_1,&PTR_DAT_110c43898);
  if ((bStack_78 & 1) == 0) {
    FUN_10a108fd4(&PTR_DAT_110c43898);
    goto LAB_10aac3100;
  }
  if ((uStack_80 & 7) != 0) {
    FUN_10a324f10(&PTR_DAT_110c43898);
    goto LAB_10aac3100;
  }
  func_0x0001096b9118(lVar11 + 0x38,uStack_80 >> 3);
  if ((bStack_78 & 1) == 0) goto LAB_10aac3100;
  _memcpy(*(undefined8 *)(lVar11 + 0x38),puStack_88,uStack_80);
  (**(code **)(*param_1 + 0x60))(&puStack_88,param_1,&PTR_DAT_110c43208);
  lVar11 = lStack_90;
  plVar9 = (long *)(lStack_90 + 0x50);
  uVar10 = ((long)(uStack_80 - (long)puStack_88) >> 3) * -0x5555555555555555;
  uVar8 = *(long *)(lStack_90 + 0x60) - *plVar9 >> 4;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
    uVar8 = *(long *)(lStack_90 + 0x58) - *plVar9 >> 4;
    if (uVar8 < uVar10) {
      puVar6 = puStack_88 + uVar8 * 3;
      FUN_10aad77bc(puStack_88,puVar6);
      FUN_10aad771c(puVar6,uStack_80,*(undefined8 *)(lVar11 + 0x58));
      goto LAB_10aac2f94;
    }
    FUN_10aad77bc(puStack_88,uStack_80);
    puVar6 = *(undefined8 **)(lVar11 + 0x58);
    while (puVar6 != puStack_88) {
      puVar6 = puVar6 + -2;
      (**(code **)*puVar6)(puVar6);
    }
    *(undefined8 **)(lVar11 + 0x58) = puStack_88;
LAB_10aac2fe0:
    FUN_10aac3170(param_1,&PTR_DAT_110c43228,lStack_90 + 0x68);
    func_0x0001096b8ba0(appuStack_c0,&ppuStack_98);
    ___dynamic_cast(appuStack_c0,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
    if (pppuVar4 == (undefined ***)0x0) {
      func_0x000107c2acdc();
    }
    lVar11 = *(long *)((long)pppuVar4 + 8);
    if (lVar11 != 0) {
      piVar7 = (int *)(lVar11 + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_a8 = param_2[1];
    param_2[1] = lVar11;
    *param_2 = &PTR_DAT_110b04dd8;
    ppuStack_b0 = (undefined8 **)&PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_b0);
    appuStack_c0[0] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(appuStack_c0);
    ppuStack_b0 = &puStack_88;
    FUN_10a0426d8(&ppuStack_b0);
    ppuStack_98 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_98);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x0001096b78b0(plVar9);
    if (uVar10 >> 0x3c == 0) {
      uVar5 = *(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x50);
      uVar8 = (long)uVar5 >> 3;
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (0x7fffffffffffffef < uVar5) {
        uVar8 = 0xfffffffffffffff;
      }
      func_0x00010aad76dc(plVar9,uVar8);
      FUN_10aad771c(puStack_88,uStack_80,*(undefined8 *)(lVar11 + 0x58));
      puVar6 = puStack_88;
LAB_10aac2f94:
      *(undefined8 **)(lVar11 + 0x58) = puVar6;
      goto LAB_10aac2fe0;
    }
  }
  FUN_10aad7888();
LAB_10aac3100:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aac3104);
  (*pcVar3)();
}



/* Entry: 10aac3170; end: 10aac31ef;  */

void FUN_10aac3170(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  plVar5 = param_2;
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
  }
  else if ((uStack_30 & 3) == 0) {
    func_0x000108a5942c(param_3,uStack_30 >> 2);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*param_3,uStack_38,uStack_30);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aac31e0);
    (*pcVar3)();
  }
  FUN_10a324f10();
  (**(code **)(*param_2 + 0x28))();
  lVar7 = *(long *)(plVar5[1] + 0x20);
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c431e8,lVar7,
             (*(long *)(plVar5[1] + 0x28) - lVar7) * 0x40000000 >> 0x1e & 0xfffffffffffffffc);
  lVar7 = *(long *)(plVar5[1] + 0x38);
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c43898,lVar7,
             (*(long *)(plVar5[1] + 0x40) - lVar7) * 0x20000000 >> 0x1d & 0xfffffffffffffff8);
  uStack_98 = 0;
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  lVar7 = *(long *)(plVar5[1] + 0x50);
  uVar2 = (*(long *)(plVar5[1] + 0x58) - lVar7) * 0x10000000 & 0xffffffff00000000;
  if (uVar2 != 0) {
    lVar1 = lVar7 + ((long)uVar2 >> 0x1c);
    do {
      puVar4 = puStack_90;
      lVar6 = *(long *)(lVar7 + 8);
      lStack_a0 = (long)*(char *)(lVar6 + 0x1f);
      if (lStack_a0 < 0) {
        puStack_a8 = *(undefined8 **)(lVar6 + 8);
        lStack_a0 = *(long *)(lVar6 + 0x10);
      }
      else {
        puStack_a8 = (undefined8 *)(lVar6 + 8);
      }
      if (puStack_90 < puStack_88) {
        FUN_10aad789c(puStack_90);
        puVar4 = puVar4 + 3;
      }
      else {
        puVar4 = &uStack_98;
        func_0x000108afa384(puVar4,&puStack_a8);
      }
      lVar7 = lVar7 + 0x10;
      puStack_90 = puVar4;
    } while (lVar7 != lVar1);
  }
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110c43208,&uStack_98);
  lVar7 = *(long *)(plVar5[1] + 0x68);
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c43228,lVar7,
             (*(long *)(plVar5[1] + 0x70) - lVar7) * 0x40000000 >> 0x1e & 0xfffffffffffffffc);
  puStack_a8 = &uStack_98;
  FUN_10a0426d8(&puStack_a8);
  return;
}



/* Entry: 10aac31f0; end: 10aac33af;  */

void FUN_10aac31f0(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 8);
  (**(code **)(*param_1 + 0x28))
            (param_1,&PTR_DAT_110c431c8,lVar5,
             (*(long *)(*(long *)(param_2 + 8) + 0x10) - lVar5) * 0x40000000 >> 0x1e &
             0xfffffffffffffffc);
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x20);
  (**(code **)(*param_1 + 0x28))
            (param_1,&PTR_DAT_110c431e8,lVar5,
             (*(long *)(*(long *)(param_2 + 8) + 0x28) - lVar5) * 0x40000000 >> 0x1e &
             0xfffffffffffffffc);
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x38);
  (**(code **)(*param_1 + 0x28))
            (param_1,&PTR_DAT_110c43898,lVar5,
             (*(long *)(*(long *)(param_2 + 8) + 0x40) - lVar5) * 0x20000000 >> 0x1d &
             0xfffffffffffffff8);
  uStack_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x50);
  uVar2 = (*(long *)(*(long *)(param_2 + 8) + 0x58) - lVar5) * 0x10000000 & 0xffffffff00000000;
  if (uVar2 != 0) {
    lVar1 = lVar5 + ((long)uVar2 >> 0x1c);
    do {
      puVar3 = puStack_50;
      lVar4 = *(long *)(lVar5 + 8);
      lStack_60 = (long)*(char *)(lVar4 + 0x1f);
      if (lStack_60 < 0) {
        puStack_68 = *(undefined8 **)(lVar4 + 8);
        lStack_60 = *(long *)(lVar4 + 0x10);
      }
      else {
        puStack_68 = (undefined8 *)(lVar4 + 8);
      }
      if (puStack_50 < puStack_48) {
        FUN_10aad789c(puStack_50);
        puVar3 = puVar3 + 3;
      }
      else {
        puVar3 = &uStack_58;
        func_0x000108afa384(puVar3,&puStack_68);
      }
      lVar5 = lVar5 + 0x10;
      puStack_50 = puVar3;
    } while (lVar5 != lVar1);
  }
  (**(code **)(*param_1 + 0x138))(param_1,&PTR_DAT_110c43208,&uStack_58);
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x68);
  (**(code **)(*param_1 + 0x28))
            (param_1,&PTR_DAT_110c43228,lVar5,
             (*(long *)(*(long *)(param_2 + 8) + 0x70) - lVar5) * 0x40000000 >> 0x1e &
             0xfffffffffffffffc);
  puStack_68 = &uStack_58;
  FUN_10a0426d8(&puStack_68);
  return;
}



/* Entry: 10aac33b0; end: 10aac340f;  */

undefined8 * FUN_10aac33b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43338;
  FUN_10aae2930(param_1 + 1);
  return param_1;
}



/* Entry: 10aac3410; end: 10aac343b;  */

ulong FUN_10aac3410(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if ((*(byte *)(param_2 + 0x110) & 1) != 0) {
    uVar1 = 0x100;
    if ((*(byte *)(param_2 + 0x59) & 2) != 0) {
      uVar1 = 0x108;
    }
    return uVar1 | (ulong)*(byte *)(param_2 + 0xe8) << 0x1f;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aac343c);
  (*pcVar2)();
}



/* Entry: 10aac343c; end: 10aac34f3;  */

void FUN_10aac343c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_2 + 0x110) & 1) != 0) {
    if ((*(byte *)(param_2 + 0x59) >> 1 & 1) != 0) {
      uStack_38 = 0;
      uStack_30 = 0;
      lStack_28 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      FUN_10a113ca0(param_2 + 0x2d8,&uStack_40);
      if (lStack_28 < 0) {
        __ZdlPv(uStack_38);
      }
      if ((*(byte *)(param_2 + 0x110) & 1) == 0) goto LAB_10aac34d4;
    }
    if (*(char *)(param_2 + 0xe8) == '\x01') {
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      func_0x00010aad008c((undefined8 *)(param_2 + 0x298),param_2 + 0x90);
    }
    return;
  }
LAB_10aac34d4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aac34d8);
  (*pcVar1)();
}



/* Entry: 10aac34f4; end: 10aac352b;  */

undefined8 FUN_10aac34f4(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)0x1138355a0;
  FUN_10a08fec0();
  uVar2 = 0x16800000007;
  if (*piVar1 != 0) {
    uVar2 = 0x16800000002;
  }
  return uVar2;
}



/* Entry: 10aac352c; end: 10aac3547;  */

void FUN_10aac352c(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  ppuVar2 = &PTR_PTR_113306300;
  FUN_10ae079a0(0,&PTR_PTR_113306300);
  FUN_10ae07cd4(ppuVar2,&PTR_PTR_113306300);
  *(undefined4 *)(lVar1 + 0x24) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0001096e4e8c(lVar1 + 0x140,0x11382aac8,&uStack_40);
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_10aada088(&puStack_28);
  FUN_10aab1c58(lVar1 + 0x68);
  return;
}



/* Entry: 10aac3548; end: 10aac358f;  */

void FUN_10aac3548(long *param_1)

{
  undefined **ppuVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if ((int)param_1[0x43] == 1) {
    if (*(long **)(*param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(*param_1 + 0x20) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  ppuVar1 = &PTR_PTR_113306300;
  FUN_10ae079a0(0,&PTR_PTR_113306300);
  FUN_10ae07cd4(ppuVar1,&PTR_PTR_113306300);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0001096e4e8c(param_1 + 0x28,0x11382aac8,&uStack_40);
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_10aada088(&puStack_28);
  FUN_10aab1c58(param_1 + 0xd);
  return;
}



/* Entry: 10aac3590; end: 10aac36f7;  */

void FUN_10aac3590(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,byte *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined1 auStack_100 [20];
  byte bStack_ec;
  byte bStack_eb;
  byte bStack_ea;
  byte bStack_48;
  
  FUN_10aab25d4(*(undefined8 *)(param_1 + 8),param_4 + 0x198);
  FUN_10a22ca70(auStack_100,param_5 + 0x58);
  if ((bStack_48 & 1) != 0) {
    if (*param_5 < bStack_ec) {
      bStack_ec = *param_5;
    }
    if (param_5[1] < bStack_eb) {
      bStack_eb = param_5[1];
    }
    if (param_5[2] < bStack_ea) {
      bStack_ea = param_5[2];
    }
    uVar1 = *(undefined8 *)(param_4 + 0x70);
    uVar2 = *(undefined8 *)(param_4 + 0x78);
    uVar7 = *(undefined8 *)(param_1 + 8);
    plVar9 = (long *)param_3[1];
    uStack_118 = param_3[1];
    uStack_120 = *param_3;
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((bStack_48 & 1) == 0) goto LAB_10aac36d8;
    }
    FUN_10aab2844(&uStack_108,uVar7,param_2,param_2,uVar1,&uStack_120,uVar2,auStack_100);
    plVar6 = *(long **)(param_4 + 0x68);
    *(undefined8 *)(param_4 + 0x68) = uStack_108;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    uStack_108 = 0;
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar9 + 1;
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    FUN_10a22d294(auStack_100);
    return;
  }
LAB_10aac36d8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aac36dc);
  (*pcVar5)();
}



/* Entry: 10aac36f8; end: 10aac3c2b;  */

long ***** FUN_10aac36f8(long *****param_1,undefined8 param_2,long ****param_3)

{
  long *****ppppplVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  long lVar13;
  long ***ppplVar14;
  long ****pppplStack_168;
  long ****pppplStack_160;
  long ****pppplStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long ****pppplStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  long ****pppplStack_120;
  undefined5 uStack_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  char cStack_109;
  long ****pppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  undefined4 uStack_e8;
  long *plStack_e0;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long ****)0x0;
  param_1[1] = (long ****)0x0;
  param_1[2] = (long ****)0x0;
  FUN_10aad7b98(param_1 + 3);
  param_1[0x29] = (long ****)0x0;
  param_1[0x28] = (long ****)0x0;
  param_1[0x2b] = (long ****)0x0;
  param_1[0x2a] = (long ****)0x0;
  param_1[0x27] = (long ****)0x0;
  param_1[0x26] = (long ****)0x0;
  param_1[0x24] = (long ****)&UNK_1096b1e6c;
  param_1[0x25] = (long ****)&PTR_DAT_110ae9180;
  param_1[0x2c] = (long ****)0x0;
  *(undefined4 *)(param_1 + 0x2d) = 5;
  param_1[0x2e] = (long ****)0x0;
  param_1[0x2f] = (long ****)0x0;
  FUN_10aad7b98(param_1 + 0x30,param_2);
  param_1[0x51] = (long ****)&UNK_1096b1e6c;
  param_1[0x52] = (long ****)&PTR_DAT_110ae9180;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  pppplVar10 = (long ****)0xb8;
  __Znwm();
  ppppplVar1 = param_1 + 0x5c;
  ppplStack_f8 = (long ***)&UNK_1053a6a3c;
  ppplStack_f0 = (long ***)&PTR_DAT_110ae9180;
  pppplStack_100 = param_3;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&pppplStack_100);
  *ppppplVar1 = pppplVar10;
  pppplVar11 = (long ****)0x20;
  __Znwm();
  *pppplVar11 = (long ***)&PTR_FUN_110c44370;
  pppplVar11[1] = (long ***)0x0;
  pppplVar11[2] = (long ***)0x0;
  pppplVar11[3] = (long ***)pppplVar10;
  param_1[0x5d] = pppplVar11;
  param_1[0x5e] = pppplVar10;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  pppplStack_100 = (long ****)CONCAT44(pppplStack_100._4_4_,1);
  ppplStack_f8 = (long ***)0x0;
  uStack_e8 = 3;
  plStack_e0 = (long *)0x3e8;
  uStack_d0 = 3;
  uStack_c8 = 2000;
  uStack_b8 = 1;
  uStack_b0 = 4000;
  uStack_a0 = 1;
  uStack_98 = 8000;
  uStack_88 = 1;
  uStack_80 = 16000;
  uStack_70 = 1;
  uStack_68 = 20000;
  pppplStack_120 = (long ****)0x0;
  uStack_118 = 0;
  uStack_113 = 0;
  uStack_110 = 0;
  uStack_10b = 0;
  uStack_10a = 0;
  cStack_109 = '\0';
  ppppplVar12 = &pppplStack_120;
  FUN_10a504768(ppppplVar12,&pppplStack_100,&lStack_58,7);
  param_1[0x60] = (long ****)0x0;
  param_1[0x62] = (long ****)CONCAT35(uStack_113,uStack_118);
  param_1[0x61] = pppplStack_120;
  param_1[99] = (long ****)CONCAT17(cStack_109,CONCAT16(uStack_10a,CONCAT15(uStack_10b,uStack_110)))
  ;
  param_1[100] = (long ****)0x0;
  if (((ulong)param_1[0x5b] & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10aac3af4);
    (*pcVar9)();
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
  if (lRam00000001137ec180 != -1) {
    pppplStack_120 = (long ****)&pppplStack_100;
    ppppplVar12 = (long *****)0x1137ec180;
    pppplStack_100 = (long ****)&pppplStack_140;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ec180,&pppplStack_120,0x10aae3964);
  }
  func_0x00010ad03330();
  pppplVar10 = ppppplVar12[1];
  if (-1 < (char)*(byte *)((long)ppppplVar12 + 0x17)) {
    pppplVar10 = (long ****)(ulong)*(byte *)((long)ppppplVar12 + 0x17);
  }
  FUN_10a003c90(&pppplStack_100,(long)pppplVar10 + 0xe,&pppplStack_120);
  ppppplVar4 = (long *****)pppplStack_100;
  if (-1 < (long)ppplStack_f0) {
    ppppplVar4 = &pppplStack_100;
  }
  if (pppplVar10 != (long ****)0x0) {
    ppppplVar5 = (long *****)*ppppplVar12;
    if (-1 < *(char *)((long)ppppplVar12 + 0x17)) {
      ppppplVar5 = ppppplVar12;
    }
    _memmove(ppppplVar4,ppppplVar5,pppplVar10);
  }
  puVar3 = (undefined8 *)((long)ppppplVar4 + (long)pppplVar10);
  *puVar3 = 0x6e696b636172542f;
  *(undefined8 *)((long)puVar3 + 6) = 0x2f61746144676e69;
  *(undefined1 *)((long)puVar3 + 0xe) = 0;
  ppppplVar12 = &pppplStack_100;
  FUN_10ad015f0(ppppplVar12,0x4000);
  if ((int)ppppplVar12 == 0) {
    func_0x00010ad03330();
    cStack_109 = '\x15';
    uStack_118 = 0x676e696b63;
    pppplStack_120 = (long ****)0x6172546574694c2f;
    uStack_113 = 0x746144;
    uStack_110 = 0x736e6c2e61;
    uStack_10b = 0;
    pppplVar10 = ppppplVar12[1];
    ppppplVar4 = (long *****)*ppppplVar12;
    if (-1 < (char)*(byte *)((long)ppppplVar12 + 0x17)) {
      pppplVar10 = (long ****)(ulong)*(byte *)((long)ppppplVar12 + 0x17);
      ppppplVar4 = ppppplVar12;
    }
    ppppplVar12 = &pppplStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppplVar12,0,ppppplVar4,pppplVar10);
    ppplStack_138 = (long ***)ppppplVar12[1];
    pppplStack_140 = *ppppplVar12;
    ppplStack_130 = (long ***)ppppplVar12[2];
    ppppplVar12[1] = (long ****)0x0;
    ppppplVar12[2] = (long ****)0x0;
    *ppppplVar12 = (long ****)0x0;
    if (cStack_109 < '\0') {
      __ZdlPv(pppplStack_120);
    }
  }
  else {
    if (-1 < (long)ppplStack_f0) {
      ppplStack_138 = ppplStack_f8;
      pppplStack_140 = pppplStack_100;
      ppplStack_130 = ppplStack_f0;
      goto LAB_10aac3a1c;
    }
    func_0x000107c3192c(&pppplStack_140,pppplStack_100,ppplStack_f8);
  }
  if ((long)ppplStack_f0 < 0) {
    __ZdlPv(pppplStack_100);
  }
LAB_10aac3a1c:
  FUN_10a4f45d8(&pppplStack_100,&pppplStack_140,0);
  FUN_10aabbbfc(param_1 + 6,&pppplStack_100);
  plVar8 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar2 = plStack_e0 + 1;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if ((long)ppplStack_f0 < 0) {
    __ZdlPv(pppplStack_100);
  }
  FUN_10a4f0ad8(param_1 + 6);
  func_0x0001096adb84();
  pppplVar10 = param_1[0x23];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pppplVar10 + 3,param_1 + 6);
  ppppplVar12 = (long *****)(pppplVar10 + 6);
  FUN_10a34bb2c(ppppplVar12,param_1 + 9);
  if ((long)ppplStack_130 < 0) {
    ppppplVar12 = (long *****)pppplStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_109 < '\0') {
      __ZdlPv(pppplStack_120);
    }
    if ((long)ppplStack_f0 < 0) {
      __ZdlPv(pppplStack_100);
    }
    pppplVar10 = param_1[0x61];
    if (pppplVar10 != (long ****)0x0) {
      param_1[0x62] = pppplVar10;
      __ZdlPv();
    }
    func_0x00010a061620(ppppplVar1);
    if (*(char *)(param_1 + 0x5b) == '\x01') {
      FUN_10aad7da8(param_1 + 0x30);
    }
    FUN_10a235538(param_1 + 0x2e);
    (*(code *)*param_1[0x25])(param_1 + 0x25);
    FUN_10aac3c2c(param_1 + 3);
    pppplVar10 = param_1[2];
    if (pppplVar10 != (long ****)0x0) {
      pppplVar11 = pppplVar10 + 1;
      do {
        ppplVar14 = *pppplVar11;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar11,0x10);
        if (bVar7) {
          *pppplVar11 = (long ***)((long)ppplVar14 - 4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)ppplVar14 & 0x1fffffffc) == 4) {
        do {
          ppplVar14 = *pppplVar11;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppplVar11,0x10);
          if (bVar7) {
            *pppplVar11 = (long ***)((long)ppplVar14 - 1U);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((long ***)((long)ppplVar14 - 1U) == (long ***)0x0) {
          (*(code *)(*pppplVar10)[1])();
        }
      }
    }
    if (param_1[1] != (long ****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __Unwind_Resume();
    pcStack_148 = FUN_10aac3c2c;
    ppppplVar12[0x1f] = (long ****)&PTR_SUB_110b01d60;
    pppplStack_160 = (long ****)ppppplVar1;
    pppplStack_158 = (long ****)param_1;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x000107c2acd4();
    pppplStack_168 = (long ****)(ppppplVar12 + 0x1c);
    FUN_10a22d224(&pppplStack_168);
    FUN_10a22ce48(ppppplVar12 + 0xf);
    if ((*(char *)(ppppplVar12 + 0xe) == '\x01') && (ppppplVar12[0xb] != (long ****)0x0)) {
      ppppplVar12[0xc] = ppppplVar12[0xb];
      __ZdlPv();
    }
    FUN_10a15206c(ppppplVar12 + 6);
    if (*(char *)((long)ppppplVar12 + 0x2f) < '\0') {
      __ZdlPv(ppppplVar12[3]);
    }
    ppppplVar12[1] = (long ****)&PTR_SUB_110b01d60;
    func_0x000107c2acd4();
    pppplVar10 = *ppppplVar12;
    *ppppplVar12 = (long ****)0x0;
    if (pppplVar10 != (long ****)0x0) {
      (*(code *)(*pppplVar10)[1])();
    }
    return ppppplVar12;
  }
  return param_1;
}



/* Entry: 10aac3c2c; end: 10aac3cdb;  */

long * FUN_10aac3c2c(long *param_1)

{
  long *plVar1;
  long *plStack_28;
  
  param_1[0x1f] = (long)&PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  plStack_28 = param_1 + 0x1c;
  FUN_10a22d224(&plStack_28);
  FUN_10a22ce48(param_1 + 0xf);
  if (((char)param_1[0xe] == '\x01') && (param_1[0xb] != 0)) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  FUN_10a15206c(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  param_1[1] = (long)&PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10aac3cdc; end: 10aac421f;  */

void FUN_10aac3cdc(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined ***pppuVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined1 uStack_73;
  char cStack_69;
  long *plStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar15 = (undefined8 *)*param_1;
  ppuVar8 = (undefined **)0x28;
  __Znwm();
  lStack_50 = -0x7fffffffffffffd8;
  pppuStack_58 = (undefined ***)0x22;
  *(undefined2 *)(ppuVar8 + 4) = 0x4c4d;
  ppuVar8[1] = (undefined *)0x415254454341465f;
  *ppuVar8 = (undefined *)0x45524f43534e454c;
  ppuVar8[3] = (undefined *)0x585f454e494c4550;
  ppuVar8[2] = (undefined *)0x49505f474e494b43;
  *(undefined1 *)((long)ppuVar8 + 0x22) = 0;
  ppuStack_60 = ppuVar8;
  FUN_10a4d898c(&plStack_48,*puVar15,&ppuStack_60);
  __ZdlPv(ppuVar8);
  plVar14 = plStack_48;
  if (((uint)plStack_48[2] >> 5 & 1) == 0) {
    if ((((uint)plStack_48[2] >> 1 & 1) == 0) || (((uint)plStack_48[2] >> 5 & 1) != 0)) {
      if (((uint)plStack_48[2] >> 5 & 1) == 0) {
        puVar15 = (undefined8 *)0x10;
        ___cxa_allocate_exception();
        __ZNSt13runtime_errorC2EPKc();
        *puVar15 = &PTR_DAT_110ae85c0;
        ___cxa_throw(puVar15,&PTR_DAT_110ae8598,&DAT_1092af9d8);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&ppuStack_60,plStack_48 + 0x12);
        func_0x0001092af97c(&ppuStack_60);
      }
LAB_10aac40c4:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10aac40c8);
      (*pcVar7)();
    }
    if ((*(byte *)(plStack_48 + 0x18) & 1) == 0) goto LAB_10aac40c4;
    plVar1 = plStack_48 + 0x13;
    plVar9 = plVar1;
    FUN_10a4f0ad8();
    if (((ulong)plVar9 & 1) == 0) {
      ppuVar8 = &PTR_PTR_1133062c8;
      FUN_10ae079a0(0,&PTR_PTR_1133062c8);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133062c8);
      goto LAB_10aac4000;
    }
    cStack_69 = '\r';
    uStack_80._0_5_ = 0x636172542f;
    uStack_80._5_3_ = 0x6e696b;
    uStack_78 = 0x6c6d782e67;
    uStack_73 = 0;
    uVar12 = plVar14[0x14];
    plVar9 = (long *)plVar14[0x13];
    if (-1 < (char)*(byte *)((long)plVar14 + 0xaf)) {
      uVar12 = (ulong)*(byte *)((long)plVar14 + 0xaf);
      plVar9 = plVar1;
    }
    puVar15 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar15,0,plVar9,uVar12);
    pppuStack_58 = (undefined ***)puVar15[1];
    ppuStack_60 = (undefined **)*puVar15;
    lStack_50 = puVar15[2];
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = 0;
    FUN_10aac4220(&plStack_68,&ppuStack_60,0);
    if (lStack_50 < 0) {
      __ZdlPv(ppuStack_60);
    }
    if (cStack_69 < '\0') {
      __ZdlPv(CONCAT35(uStack_80._5_3_,(undefined5)uStack_80));
    }
    FUN_109d1a244(&plStack_68);
    FUN_10aac46d0(&ppuStack_60,&plStack_68);
    FUN_10aae3888(&uStack_80,&ppuStack_60);
    ppuStack_60 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
    puVar15 = &uStack_80;
    func_0x0001096940e8(puVar15,0x11382a920);
    lStack_88 = puVar15[1];
    if (lStack_88 != 0) {
      piVar11 = (int *)(lStack_88 + -8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar6) {
          *piVar11 = *piVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuStack_90 = &PTR_DAT_110b01708;
    lVar16 = *(long *)(lStack_88 + 8);
    uVar12 = (*(long *)(lStack_88 + 0x10) - lVar16) * 0x10000000 >> 0x1c & 0xfffffffffffffff0;
    if (uVar12 != 0) {
      lVar3 = lVar16 + uVar12;
      do {
        lVar13 = *(long *)(lVar16 + 8);
        pppuStack_58 = (undefined ***)(long)*(char *)(lVar13 + 0x1f);
        if ((long)pppuStack_58 < 0) {
          ppuStack_60 = *(undefined ***)(lVar13 + 8);
          pppuStack_58 = *(undefined ****)(lVar13 + 0x10);
        }
        else {
          ppuStack_60 = (undefined **)(lVar13 + 8);
        }
        pppuVar10 = &ppuStack_60;
        FUN_10a166af4(pppuVar10,"/",0);
        pppuVar4 = pppuStack_58;
        if (pppuVar10 <= pppuStack_58) {
          pppuVar4 = pppuVar10;
        }
        puVar15 = (undefined8 *)*param_1;
        FUN_10aad6d34(&ppuStack_60,ppuStack_60,pppuVar4);
        FUN_10a4d898c(&plStack_98,*puVar15,&ppuStack_60);
        if (plStack_98 != (long *)0x0) {
          puVar2 = (ulong *)(plStack_98 + 1);
          do {
            uVar12 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar12 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = uVar12 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plStack_98 + 8))();
            }
          }
        }
        if (lStack_50 < 0) {
          __ZdlPv(ppuStack_60);
        }
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != lVar3);
    }
    ppuStack_90 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_90);
    uStack_80._0_5_ = 0x110b01d60;
    uStack_80._5_3_ = 0;
    func_0x000107c2acd4(&uStack_80);
    if (plStack_68 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_68 + 1);
      do {
        uVar12 = *puVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar12 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar12 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plStack_68 + 8))();
        }
      }
    }
  }
  plVar14 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    return;
  }
LAB_10aac4000:
  puVar2 = (ulong *)(plVar14 + 1);
  do {
    uVar12 = *puVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = uVar12 - 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar12 & 0x1fffffffc) == 4) {
    do {
      uVar12 = *puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar12 - 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (uVar12 - 1 == 0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
  return;
}



/* Entry: 10aac4220; end: 10aac46cf;  */

void FUN_10aac4220(undefined8 *param_1,long *param_2,int param_3)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lStack_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  char cStack_a9;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *param_2;
  uStack_80 = (undefined7)param_2[1];
  uStack_79 = (undefined1)*(undefined8 *)((long)param_2 + 0xf);
  uVar5 = uStack_79;
  uStack_78 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0xf) >> 8);
  uVar6 = uStack_78;
  cVar3 = *(char *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  if (param_3 == 0) {
    uStack_b8 = uStack_80;
    uStack_80 = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    plVar11 = (long *)0xb0;
    lStack_c0 = lVar2;
    uStack_b1 = uVar5;
    uStack_b0 = uVar6;
    cStack_a9 = cVar3;
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
    *plVar11 = (long)&PTR_FUN_110c43978;
    *(undefined1 *)(plVar11 + 0x13) = 0;
    *(undefined1 *)(plVar11 + 0x15) = 0;
    plStack_98 = plVar11;
    FUN_10aad8390(&uStack_70,&lStack_c0);
    FUN_10aad82c8(plVar11,&uStack_70);
    uStack_70 = 0x110b01d60;
    uStack_69 = 0;
    func_0x000107c2acd4(&uStack_70);
    *param_1 = plVar11;
    plStack_a0 = (long *)0x0;
    func_0x0001092b4274(&plStack_98,plVar11);
    if (plStack_a0 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_a0 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plStack_a0 + 8))();
        }
      }
    }
    if (cStack_a9 < '\0') {
      __ZdlPv(lStack_c0);
    }
  }
  else {
    puVar10 = param_1;
    FUN_109d1a80c();
    puVar10 = (undefined8 *)*puVar10;
    plVar11 = (long *)puVar10[2];
    plStack_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    if (plVar11 == (long *)0x0) {
      uStack_70 = uStack_80;
      uStack_69 = uStack_79;
      uStack_68 = uStack_78;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_78 = 0;
      plVar11 = (long *)0xe0;
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
      *(undefined1 *)(plVar11 + 0x13) = 0;
      *(undefined1 *)(plVar11 + 0x15) = 0;
      *plVar11 = (long)&PTR_FUN_110c43998;
      plStack_a0 = plVar11 + 0x16;
      *plStack_a0 = lVar2;
      *(ulong *)((long)plVar11 + 0xbf) = CONCAT71(uStack_68,uStack_69);
      plVar11[0x17] = CONCAT17(uStack_69,uStack_70);
      *(char *)((long)plVar11 + 199) = cVar3;
      *(undefined1 *)(plVar11 + 0x1a) = 1;
      plVar11[0x1b] = 0;
      pcStack_88 = FUN_10aad7ea4;
      plStack_98 = plVar11;
      plStack_90 = plVar11;
    }
    else {
      lStack_a8 = 0;
      (**(code **)(*plVar11 + 0x28))(plVar11,0,&lStack_a8);
      if (lStack_a8 != 0) goto LAB_10aac4640;
      uStack_70 = uStack_80;
      uStack_69 = uStack_79;
      uStack_68 = uStack_78;
      uStack_80 = 0;
      uStack_79 = 0;
      uStack_78 = 0;
      plVar8 = (long *)0xe8;
      __Znwm();
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[6] = 0;
      plVar8[9] = 0;
      plVar8[8] = 0;
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[0xd] = 0;
      plVar8[0xc] = 0;
      plVar8[0xf] = 0;
      plVar8[0xe] = 0;
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      plVar8[0x12] = 0;
      *(undefined1 *)(plVar8 + 0x13) = 0;
      *(undefined1 *)(plVar8 + 0x15) = 0;
      *plVar8 = (long)&PTR_FUN_110c43928;
      plVar8[0x16] = lVar2;
      *(ulong *)((long)plVar8 + 0xbf) = CONCAT71(uStack_68,uStack_69);
      plVar8[0x17] = CONCAT17(uStack_69,uStack_70);
      *(char *)((long)plVar8 + 199) = cVar3;
      *(undefined1 *)(plVar8 + 0x1a) = 1;
      plVar8[0x1b] = 0;
      plVar8[0x1c] = (long)plVar11;
      if (plStack_98 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_98 + 1);
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plStack_98 + 8))();
          }
        }
      }
      plStack_98 = plVar8;
      if (plStack_90 != (long *)0x0) {
        func_0x0001092b4274(&plStack_90);
      }
      pcStack_88 = FUN_10aad7e74;
      plStack_a0 = plVar8 + 0x16;
      plStack_90 = plVar8;
      __ZNSt13exception_ptrD1Ev(&lStack_a8);
    }
    plVar11 = plStack_a0;
    if (plStack_a0[5] != 0) {
      func_0x0001092b4274();
    }
    plVar11[5] = (long)plStack_90;
    plStack_90 = (long *)0x0;
    uStack_70 = SUB87(pcStack_88,0);
    uStack_69 = (undefined1)((ulong)pcStack_88 >> 0x38);
    uStack_68 = SUB87(plStack_a0,0);
    uStack_61 = (undefined1)((ulong)plStack_a0 >> 0x38);
    puStack_60 = puVar10;
    (**(code **)*puVar10)(puVar10,&uStack_70);
    *param_1 = plStack_98;
    plStack_98 = (long *)0x0;
    if (plStack_90 != (long *)0x0) {
      func_0x0001092b4274(&plStack_90);
      if (plStack_98 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_98 + 1);
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plStack_98 + 8))();
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10aac4640:
  func_0x0001092af97c(&lStack_a8);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aac464c);
  (*pcVar7)();
}



/* Entry: 10aac46d0; end: 10aac4797;  */

void FUN_10aac46d0(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined **ppuStack_40;
  long lStack_38;
  
  func_0x0001092af8bc(param_2);
  plVar5 = (long *)*param_2;
  if ((*(byte *)(plVar5 + 0x15) & 1) != 0) {
    lStack_38 = plVar5[0x14];
    plVar5[0x14] = 0;
    ppuStack_40 = &PTR_DAT_110b01050;
    *param_2 = 0;
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
    param_1[1] = lStack_38;
    *param_1 = ppuStack_40;
    *param_1 = &PTR_DAT_110b01050;
    ppuStack_40 = &PTR_SUB_110b01d60;
    lStack_38 = 0;
    func_0x000107c2acd4(&ppuStack_40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aac4794);
  (*pcVar4)();
}



/* Entry: 10aac4798; end: 10aac47ff;  */

long FUN_10aac4798(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xb0;
  FUN_10a22d224(&lStack_28);
  FUN_10a22ce48(param_1 + 0x48);
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(long *)(param_1 + 0x28) != 0)) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aac4800; end: 10aac4a9f;  */

void FUN_10aac4800(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    ppuVar9 = &PTR_DAT_110c43a30;
    lVar12 = 0x20;
    do {
      puVar11 = ppuVar9[1];
      if ((puVar11 != (undefined *)0x10) ||
         (*(long *)*ppuVar9 != 0x676e696b63617254 ||
          *(long *)((long)*ppuVar9 + 8) != 0x6c6d782e74736146)) {
        puStack_80 = (undefined1 *)0x0;
        uStack_78 = 0;
        uStack_70 = 0;
        uVar10 = *(ulong *)(param_1 + 0x38);
        if (-1 < (char)*(byte *)(param_1 + 0x47)) {
          uVar10 = (ulong)*(byte *)(param_1 + 0x47);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                  (&puStack_80,puVar11 + uVar10 + 3);
        uVar10 = *(ulong *)(param_1 + 0x38);
        lVar4 = *(long *)(param_1 + 0x30);
        if (-1 < (char)*(byte *)(param_1 + 0x47)) {
          uVar10 = (ulong)*(byte *)(param_1 + 0x47);
          lVar4 = param_1 + 0x30;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_80,lVar4,uVar10);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_80,"/",1);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&puStack_80,*ppuVar9,puVar11);
        uVar6 = 0;
        FUN_10ad01a04();
        uVar10 = uStack_78;
        ppuVar5 = (undefined1 **)puStack_80;
        if (-1 < (long)uStack_70) {
          uVar10 = uStack_70 >> 0x38;
          ppuVar5 = &puStack_80;
        }
        FUN_10ae03140(0,ppuVar5,uVar10);
        if ((uVar6 & 1) != 0) {
          ppuVar9 = &PTR_PTR_1133063a0;
          FUN_10ae079a0();
          FUN_10ae0314c();
          FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133063a0);
          goto LAB_10aac49f0;
        }
        ppuVar8 = &PTR_PTR_1133064e0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133064e0);
        if ((long)uStack_70 < 0) {
          __ZdlPv(puStack_80);
        }
      }
      ppuVar9 = ppuVar9 + 2;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
    ppuVar9 = &PTR_PTR_113306378;
    FUN_10ae079a0(0,&PTR_PTR_113306378);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113306378);
    func_0x000107c2b054(&puStack_80,&UNK_10f68da37);
LAB_10aac49f0:
    FUN_10aac4220(&uStack_68,&puStack_80,1);
    plVar7 = *(long **)(param_1 + 0x10);
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
    *(undefined8 *)(param_1 + 0x10) = uStack_68;
    if ((long)uStack_70 < 0) {
      __ZdlPv(puStack_80);
    }
  }
  return;
}



/* Entry: 10aac4aa0; end: 10aac4bc7;  */

void FUN_10aac4aa0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined **ppuVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_158;
  undefined8 *puStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 *puStack_128;
  char cStack_119;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_d8;
  long lStack_d0;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_38;
  
  pppuVar13 = &ppuStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10aae3888(&ppuStack_60);
  uVar8 = param_1[2];
  param_1[2] = lStack_58;
  param_1[1] = ppuStack_60;
  ppuStack_60 = &PTR_SUB_110b01d60;
  lStack_58 = uVar8;
  func_0x000107c2acd4(&ppuStack_60);
  uVar8 = 0x10;
  __Znwm();
  lStack_58 = param_1[2];
  if (lStack_58 != 0) {
    piVar15 = (int *)(lStack_58 + -8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = *piVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_60 = &PTR_DAT_110b01050;
  func_0x0001096b019c(uVar8);
  ppuStack_60 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_60);
  plVar9 = (long *)*param_1;
  *param_1 = uVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pppuVar13 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_148 = (undefined8 ****)0x0;
  pppuStack_140 = (undefined8 ****)0x0;
  pppuStack_138 = (undefined8 ****)0x0;
  puVar10 = (undefined8 *)0x28;
  _malloc();
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 3) = 1;
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 2) = 0;
    puVar10 = puVar10 + 4;
    *puVar10 = &PTR_DAT_110b00de0;
  }
  ppuStack_158 = &PTR_DAT_110af5700;
  lVar20 = (long)pppuVar13[0x20];
  plVar21 = *(long **)(lVar20 + 0x78);
  puStack_150 = puVar10;
  if (plVar21 != (long *)0x0) {
    do {
      FUN_10aae34d0(lVar20 + 0x40,plVar21 + 2,plVar21 + 2);
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
    lVar20 = (long)pppuVar13[0x20];
  }
  if (*(long *)(lVar20 + 0x80) != 0) {
    func_0x00010aad9bd0(*(undefined8 *)(lVar20 + 0x78));
    *(undefined8 *)(lVar20 + 0x78) = 0;
    lVar16 = *(long *)(lVar20 + 0x70);
    if (lVar16 != 0) {
      lVar17 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar20 + 0x68) + lVar17 * 8) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar16 != lVar17);
    }
    *(undefined8 *)(lVar20 + 0x80) = 0;
  }
  uVar22 = 1;
  do {
    if ((uVar22 & (*(uint *)(pppuVar13 + 8) ^ 0xffffffff)) == 0) {
      uVar18 = 0;
      piVar15 = (int *)&UNK_110c43c20;
      while( true ) {
        for (; piVar19 = (int *)(&UNK_110c43b30 + uVar18 * 0x18), *piVar19 < (int)uVar22;
            uVar18 = uVar18 * 2 + 2) {
          piVar19 = piVar15;
          if (3 < uVar18) goto LAB_10aac4d1c;
        }
        if (4 < uVar18) break;
        uVar18 = uVar18 << 1 | 1;
        piVar15 = piVar19;
      }
LAB_10aac4d1c:
      if (((piVar19 != (int *)&UNK_110c43c20) &&
          (*piVar19 <= (int)uVar22 && piVar19 != (int *)&UNK_110c43c20)) &&
         (*(long *)(piVar19 + 4) != 0)) {
        puVar10 = *(undefined8 **)(piVar19 + 2);
        lVar20 = *(long *)(piVar19 + 4) << 4;
        do {
          pppuVar6 = pppuStack_140;
          uStack_168 = puVar10[1];
          uStack_170 = *puVar10;
          if ((uVar22 & 0x7e0) == 0) {
            if (pppuStack_140 < pppuStack_138) {
              FUN_10aad8c30(pppuStack_140,&uStack_170);
              pppuStack_140 = pppuVar6 + 3;
            }
            else {
              ppppuVar11 = &pppuStack_148;
              func_0x000107c27954(ppppuVar11,&uStack_170);
              pppuStack_140 = ppppuVar11;
            }
          }
          else {
            FUN_10aabf9b4(&pppuStack_130,uStack_170,uStack_168,
                          *(undefined4 *)((long)pppuVar13 + 0x4c));
            FUN_10a059fa0(&pppuStack_148,&pppuStack_130);
            if (cStack_119 < '\0') {
              __ZdlPv(pppuStack_130);
            }
          }
          puVar10 = puVar10 + 2;
          lVar20 = lVar20 + -0x10;
        } while (lVar20 != 0);
      }
    }
    uVar22 = uVar22 * 2;
  } while ((int)uVar22 < 0x401);
  ppuStack_f0 = &PTR_FUN_110c443d0;
  uStack_e8 = param_4;
  pppuStack_d8 = &ppuStack_f0;
  func_0x0001096c6be4(&ppuStack_158,0x11382aaa8,&ppuStack_f0);
  if (pppuStack_d8 == &ppuStack_f0) {
    lVar20 = 0x20;
LAB_10aac4e18:
    (**(code **)((long)*pppuStack_d8 + lVar20))();
  }
  else if (pppuStack_d8 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_10aac4e18;
  }
  pppuVar12 = &ppuStack_158;
  func_0x000109696b6c(pppuVar12,0x11382aa60,pppuVar13 + 0x1f);
  func_0x00010ad031c0();
  pppuVar1 = (undefined ***)*pppuVar12;
  if (-1 < *(char *)((long)pppuVar12 + 0x17)) {
    pppuVar1 = pppuVar12;
  }
  pppuVar12 = pppuVar1;
  _strlen(pppuVar1);
  func_0x000109697928(&pppuStack_130,pppuVar1,pppuVar12);
  func_0x000109693ff4(&ppuStack_158,0x11382aa68,&pppuStack_130);
  pppuStack_130 = (undefined8 ***)&PTR_SUB_110b01d60;
  func_0x000107c2acd4(&pppuStack_130);
  lVar20 = (long)*pppuVar13;
  if (lVar20 == 0) {
    FUN_10a00946c(&UNK_10f68dd55);
    goto LAB_10aac5064;
  }
  puStack_178 = puStack_150;
  ppuStack_180 = ppuStack_158;
  if (puStack_150 != (undefined8 *)0x0) {
    piVar15 = (int *)(puStack_150 + -1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = *piVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x0001096aefa4(&pppuStack_130,lVar20,&ppuStack_180,&pppuStack_148,param_3);
  ppuStack_180 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_180);
  if ((*(byte *)(puStack_128 + 1) & 1) == 0) {
    ppuVar14 = &PTR_PTR_113306560;
    FUN_10ae079a0(0,&PTR_PTR_113306560);
    FUN_10ae07cd4(ppuVar14,&PTR_PTR_113306560);
    pppuVar6 = pppuStack_140;
    if (pppuStack_148 != pppuStack_140) {
      ppppuVar11 = (undefined8 ****)pppuStack_148;
      do {
        pppuVar2 = ppppuVar11[1];
        ppppuVar5 = (undefined8 ****)*ppppuVar11;
        if (-1 < (char)*(byte *)((long)ppppuVar11 + 0x17)) {
          pppuVar2 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar11 + 0x17);
          ppppuVar5 = ppppuVar11;
        }
        FUN_10ae03140(0,ppppuVar5,pppuVar2);
        ppuVar14 = &PTR_PTR_1133063d0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar14,&PTR_PTR_1133063d0);
        ppppuVar11 = ppppuVar11 + 3;
      } while (ppppuVar11 != (undefined8 ****)pppuVar6);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x1137ec188,0x10);
      if (bVar4) {
        cVar3 = ExclusiveMonitorsStatus();
        iRam00000001137ec188 = iRam00000001137ec188 + 1;
      }
    } while (cVar3 != '\0');
    if (iRam00000001137ec188 < 0x10) {
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[7] = 0;
      plVar9[6] = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&UNK_1096b1e6c;
      plVar9[1] = (long)&PTR_DAT_110ae9180;
      goto LAB_10aac4fe0;
    }
  }
  else {
    *plVar9 = (long)pppuStack_130;
    (*(code *)puStack_128[2])(plVar9 + 1,&puStack_128);
LAB_10aac4fe0:
    (*(code *)*puStack_128)(&puStack_128);
    ppuStack_158 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_158);
    pppuStack_130 = &pppuStack_148;
    FUN_10a0426d8(&pppuStack_130);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f68dd72);
LAB_10aac5064:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aac5068);
  (*pcVar7)();
}



/* Entry: 10aac4bc8; end: 10aac513b;  */

void FUN_10aac4bc8(long *param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 *puStack_c8;
  char cStack_b9;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_e8 = (undefined8 ****)0x0;
  pppuStack_e0 = (undefined8 ****)0x0;
  pppuStack_d8 = (undefined8 ****)0x0;
  puVar8 = (undefined8 *)0x28;
  _malloc();
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 3) = 1;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
    puVar8 = puVar8 + 4;
    *puVar8 = &PTR_DAT_110b00de0;
  }
  ppuStack_f8 = &PTR_DAT_110af5700;
  lVar17 = param_2[0x20];
  plVar18 = *(long **)(lVar17 + 0x78);
  puStack_f0 = puVar8;
  if (plVar18 != (long *)0x0) {
    do {
      FUN_10aae34d0(lVar17 + 0x40,plVar18 + 2,plVar18 + 2);
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
    lVar17 = param_2[0x20];
  }
  if (*(long *)(lVar17 + 0x80) != 0) {
    func_0x00010aad9bd0(*(undefined8 *)(lVar17 + 0x78));
    *(undefined8 *)(lVar17 + 0x78) = 0;
    lVar12 = *(long *)(lVar17 + 0x70);
    if (lVar12 != 0) {
      lVar14 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar17 + 0x68) + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
    }
    *(undefined8 *)(lVar17 + 0x80) = 0;
  }
  uVar19 = 1;
  do {
    if ((uVar19 & (*(uint *)(param_2 + 8) ^ 0xffffffff)) == 0) {
      uVar15 = 0;
      piVar13 = (int *)&UNK_110c43c20;
      while( true ) {
        for (; piVar16 = (int *)(&UNK_110c43b30 + uVar15 * 0x18), *piVar16 < (int)uVar19;
            uVar15 = uVar15 * 2 + 2) {
          piVar16 = piVar13;
          if (3 < uVar15) goto LAB_10aac4d1c;
        }
        if (4 < uVar15) break;
        uVar15 = uVar15 << 1 | 1;
        piVar13 = piVar16;
      }
LAB_10aac4d1c:
      if (((piVar16 != (int *)&UNK_110c43c20) &&
          (*piVar16 <= (int)uVar19 && piVar16 != (int *)&UNK_110c43c20)) &&
         (*(long *)(piVar16 + 4) != 0)) {
        puVar8 = *(undefined8 **)(piVar16 + 2);
        lVar17 = *(long *)(piVar16 + 4) << 4;
        do {
          pppuVar6 = pppuStack_e0;
          uStack_108 = puVar8[1];
          uStack_110 = *puVar8;
          if ((uVar19 & 0x7e0) == 0) {
            if (pppuStack_e0 < pppuStack_d8) {
              FUN_10aad8c30(pppuStack_e0,&uStack_110);
              pppuStack_e0 = pppuVar6 + 3;
            }
            else {
              ppppuVar9 = &pppuStack_e8;
              func_0x000107c27954(ppppuVar9,&uStack_110);
              pppuStack_e0 = ppppuVar9;
            }
          }
          else {
            FUN_10aabf9b4(&pppuStack_d0,uStack_110,uStack_108,*(undefined4 *)((long)param_2 + 0x4c))
            ;
            FUN_10a059fa0(&pppuStack_e8,&pppuStack_d0);
            if (cStack_b9 < '\0') {
              __ZdlPv(pppuStack_d0);
            }
          }
          puVar8 = puVar8 + 2;
          lVar17 = lVar17 + -0x10;
        } while (lVar17 != 0);
      }
    }
    uVar19 = uVar19 * 2;
  } while ((int)uVar19 < 0x401);
  ppuStack_90 = &PTR_FUN_110c443d0;
  uStack_88 = param_4;
  pppuStack_78 = &ppuStack_90;
  func_0x0001096c6be4(&ppuStack_f8,0x11382aaa8,&ppuStack_90);
  if (pppuStack_78 == &ppuStack_90) {
    lVar17 = 0x20;
LAB_10aac4e18:
    (**(code **)((long)*pppuStack_78 + lVar17))();
  }
  else if (pppuStack_78 != (undefined ***)0x0) {
    lVar17 = 0x28;
    goto LAB_10aac4e18;
  }
  pppuVar10 = &ppuStack_f8;
  func_0x000109696b6c(pppuVar10,0x11382aa60,param_2 + 0x1f);
  func_0x00010ad031c0();
  pppuVar1 = (undefined ***)*pppuVar10;
  if (-1 < *(char *)((long)pppuVar10 + 0x17)) {
    pppuVar1 = pppuVar10;
  }
  pppuVar10 = pppuVar1;
  _strlen(pppuVar1);
  func_0x000109697928(&pppuStack_d0,pppuVar1,pppuVar10);
  func_0x000109693ff4(&ppuStack_f8,0x11382aa68,&pppuStack_d0);
  pppuStack_d0 = (undefined8 ***)&PTR_SUB_110b01d60;
  func_0x000107c2acd4(&pppuStack_d0);
  lVar17 = *param_2;
  if (lVar17 == 0) {
    FUN_10a00946c(&UNK_10f68dd55);
    goto LAB_10aac5064;
  }
  puStack_118 = puStack_f0;
  ppuStack_120 = ppuStack_f8;
  if (puStack_f0 != (undefined8 *)0x0) {
    piVar13 = (int *)(puStack_f0 + -1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x0001096aefa4(&pppuStack_d0,lVar17,&ppuStack_120,&pppuStack_e8,param_3);
  ppuStack_120 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_120);
  if ((*(byte *)(puStack_c8 + 1) & 1) == 0) {
    ppuVar11 = &PTR_PTR_113306560;
    FUN_10ae079a0(0,&PTR_PTR_113306560);
    FUN_10ae07cd4(ppuVar11,&PTR_PTR_113306560);
    pppuVar6 = pppuStack_e0;
    if (pppuStack_e8 != pppuStack_e0) {
      ppppuVar9 = (undefined8 ****)pppuStack_e8;
      do {
        pppuVar2 = ppppuVar9[1];
        ppppuVar5 = (undefined8 ****)*ppppuVar9;
        if (-1 < (char)*(byte *)((long)ppppuVar9 + 0x17)) {
          pppuVar2 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar9 + 0x17);
          ppppuVar5 = ppppuVar9;
        }
        FUN_10ae03140(0,ppppuVar5,pppuVar2);
        ppuVar11 = &PTR_PTR_1133063d0;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar11,&PTR_PTR_1133063d0);
        ppppuVar9 = ppppuVar9 + 3;
      } while (ppppuVar9 != (undefined8 ****)pppuVar6);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x1137ec188,0x10);
      if (bVar4) {
        cVar3 = ExclusiveMonitorsStatus();
        iRam00000001137ec188 = iRam00000001137ec188 + 1;
      }
    } while (cVar3 != '\0');
    if (iRam00000001137ec188 < 0x10) {
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *param_1 = (long)&UNK_1096b1e6c;
      param_1[1] = (long)&PTR_DAT_110ae9180;
      goto LAB_10aac4fe0;
    }
  }
  else {
    *param_1 = (long)pppuStack_d0;
    (*(code *)puStack_c8[2])(param_1 + 1,&puStack_c8);
LAB_10aac4fe0:
    (*(code *)*puStack_c8)(&puStack_c8);
    ppuStack_f8 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&ppuStack_f8);
    pppuStack_d0 = &pppuStack_e8;
    FUN_10a0426d8(&pppuStack_d0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f68dd72);
LAB_10aac5064:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aac5068);
  (*pcVar7)();
}



/* Entry: 10aac513c; end: 10aac631b;  */

/* WARNING: Removing unreachable block (ram,0x00010aac5d2c) */

void FUN_10aac513c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined ******ppppppuVar3;
  char cVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined *******pppppppuVar10;
  undefined ****ppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined **ppuVar14;
  undefined ******ppppppuVar15;
  ulong uVar16;
  long lVar17;
  undefined *******pppppppuVar18;
  int *piVar19;
  undefined ******ppppppuVar20;
  undefined ********ppppppppuVar21;
  undefined *******pppppppuVar22;
  long lVar23;
  undefined *******pppppppuVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  undefined *****pppppuVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined *******pppppppuVar31;
  long *plStack_2c0;
  undefined ******ppppppuStack_2b8;
  undefined *******pppppppuStack_2b0;
  undefined *******pppppppuStack_2a8;
  undefined *******pppppppuStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined *******pppppppuStack_288;
  undefined ******ppppppuStack_280;
  undefined ******ppppppuStack_278;
  undefined ******ppppppuStack_270;
  undefined ******ppppppuStack_268;
  float fStack_260;
  undefined **ppuStack_250;
  long lStack_248;
  undefined *******pppppppuStack_238;
  undefined *******pppppppuStack_230;
  undefined ******ppppppuStack_228;
  undefined ******ppppppuStack_220;
  undefined **ppuStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_1e0;
  undefined5 uStack_1d8;
  undefined1 uStack_1d3;
  undefined2 uStack_1d2;
  undefined8 uStack_1d0;
  undefined *******pppppppuStack_1a0;
  undefined *******pppppppuStack_198;
  undefined *******pppppppuStack_190;
  undefined *******pppppppuStack_188;
  undefined *******pppppppuStack_180;
  undefined *******pppppppuStack_178;
  undefined *******pppppppuStack_170;
  undefined *******pppppppuStack_168;
  undefined ******ppppppuStack_160;
  undefined ******ppppppuStack_158;
  undefined ******ppppppuStack_150;
  undefined ******ppppppuStack_148;
  float fStack_140;
  undefined ******ppppppuStack_138;
  undefined ******ppppppuStack_130;
  undefined8 *apuStack_128 [7];
  undefined ******ppppppuStack_f0;
  undefined8 *apuStack_e8 [14];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x5b) & 1) == 0) goto LAB_10aac6194;
  if (*(char *)(param_1 + 0x59) == '\0') {
LAB_10aac5f84:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar14 = &PTR_PTR_1133065a0;
    FUN_10ae079a0(0,&PTR_PTR_1133065a0);
    FUN_10ae07cd4(ppuVar14,&PTR_PTR_1133065a0);
    puVar9 = param_2;
    FUN_10a4f0ad8();
    if ((int)puVar9 == 0) goto LAB_10aac5f84;
    uStack_1d0 = (undefined8 *)CONCAT17(0xd,(undefined7)uStack_1d0);
    uStack_1e0._0_5_ = 0x636172542f;
    uStack_1e0._5_3_ = 0x6e696b;
    uStack_1d8 = 0x6c6d782e67;
    uStack_1d3 = 0;
    uVar16 = param_2[1];
    puVar9 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar16 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar9 = param_2;
    }
    puVar25 = &uStack_1e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar25,0,puVar9,uVar16);
    pppppppuStack_198 = (undefined *******)puVar25[1];
    pppppppuStack_1a0 = (undefined *******)*puVar25;
    pppppppuStack_190 = (undefined *******)puVar25[2];
    puVar25[1] = 0;
    puVar25[2] = 0;
    *puVar25 = 0;
    FUN_10aac4220(&plStack_2c0,&pppppppuStack_1a0,0);
    if ((long)pppppppuStack_190 < 0) {
      __ZdlPv(pppppppuStack_1a0);
    }
    if ((long)uStack_1d0 < 0) {
      __ZdlPv(CONCAT35(uStack_1e0._5_3_,(undefined5)uStack_1e0));
    }
    if ((*(byte *)(param_1 + 0x5b) & 1) == 0) goto LAB_10aac6194;
    FUN_109d1a244(&plStack_2c0);
    FUN_10aac46d0(&pppppppuStack_1a0,&plStack_2c0);
    FUN_10aac4aa0(param_1 + 0x30,&pppppppuStack_1a0);
    pppppppuStack_1a0 = (undefined *******)&PTR_SUB_110b01d60;
    func_0x000107c2acd4(&pppppppuStack_1a0);
    ppuVar14 = &PTR_PTR_113306438;
    FUN_10ae079a0(0,&PTR_PTR_113306438);
    FUN_10ae07cd4(ppuVar14,&PTR_PTR_113306438);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x33,param_2)
    ;
    FUN_10a34bb2c(param_1 + 0x36,param_2 + 3);
    lVar27 = param_1[0x50];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar27 + 0x18,param_2);
    FUN_10a34bb2c(lVar27 + 0x30,param_2 + 3);
    uStack_1e0._0_5_ = 0x10aae3efc;
    uStack_1e0._5_3_ = 0;
    uStack_1d8 = 0x110c44470;
    uStack_1d3 = 0;
    uStack_1d2 = 0;
    ppppppuStack_220 = (undefined ******)FUN_10aae3f50;
    ppuStack_218 = &PTR_FUN_110c44490;
    puVar9 = param_1 + 0x31;
    puStack_210 = param_1;
    uStack_1d0 = param_1;
    func_0x0001096940e8(puVar9,0x11382a920);
    lStack_248 = puVar9[1];
    if (lStack_248 != 0) {
      piVar19 = (int *)(lStack_248 + -8);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar7) {
          *piVar19 = *piVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuStack_250 = &PTR_DAT_110b01708;
    lVar27 = *(long *)(lStack_248 + 8);
    uVar16 = *(long *)(lStack_248 + 0x10) - lVar27;
    if ((uVar16 & 0xffffffff0) == 0) {
      (*(code *)CONCAT35(uStack_1e0._5_3_,(undefined5)uStack_1e0))(&uStack_1e0);
LAB_10aac5f08:
      ppuStack_250 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppuStack_250);
      (*(code *)*ppuStack_218)(&ppuStack_218);
      (**(code **)CONCAT26(uStack_1d2,CONCAT15(uStack_1d3,uStack_1d8)))(&uStack_1d8);
      if (plStack_2c0 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_2c0 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plStack_2c0 + 8))();
          }
        }
      }
      goto LAB_10aac5f84;
    }
    if (param_1[0x2e] == 0) {
      FUN_10a009538(&pppppppuStack_1a0,&UNK_10f68ddb0);
      FUN_10a05bde0(&ppppppuStack_280,&pppppppuStack_1a0);
      (*(code *)ppppppuStack_220)(&ppppppuStack_280,&ppppppuStack_220);
      __ZNSt13exception_ptrD1Ev(&ppppppuStack_280);
      __ZNSt13runtime_errorD2Ev(&pppppppuStack_1a0);
      goto LAB_10aac5f08;
    }
    ppppppuStack_278 = (undefined ******)0x0;
    ppppppuStack_280 = (undefined ******)0x0;
    ppppppuStack_268 = (undefined ******)0x0;
    ppppppuStack_270 = (undefined ******)0x0;
    fStack_260 = 1.0;
    uStack_290 = 0;
    pppppppuStack_288 = (undefined *******)0x0;
    uVar16 = (long)(uVar16 * 0x10000000) >> 0x1c & 0xfffffffffffffff0;
    puStack_298 = &uStack_290;
    if (uVar16 == 0) {
      pppppppuStack_2b0 = (undefined *******)0x0;
      pppppppuStack_2a8 = (undefined *******)0x0;
      pppppppuStack_2a0 = (undefined *******)0x0;
LAB_10aac579c:
      if (puStack_298 != &uStack_290) {
        puVar9 = puStack_298;
        do {
          puVar25 = (undefined8 *)param_1[0x2e];
          FUN_10aad6d34(&pppppppuStack_238,puVar9[4],puVar9[5]);
          FUN_10a4d898c(&ppppppuStack_2b8,*puVar25,&pppppppuStack_238);
          if (pppppppuStack_2a8 < pppppppuStack_2a0) {
            *pppppppuStack_2a8 = ppppppuStack_2b8;
            pppppppuStack_2a8 = pppppppuStack_2a8 + 1;
          }
          else {
            lVar26 = (long)pppppppuStack_2a8 - (long)pppppppuStack_2b0;
            lVar27 = lVar26 >> 3;
            pppppppuVar10 = (undefined *******)(lVar27 + 1);
            if ((ulong)pppppppuVar10 >> 0x3d != 0) {
              FUN_10aad8ccc();
              goto LAB_10aac6194;
            }
            pppppppuVar24 =
                 (undefined *******)((long)pppppppuStack_2a0 - (long)pppppppuStack_2b0 >> 2);
            if (pppppppuVar24 <= pppppppuVar10) {
              pppppppuVar24 = pppppppuVar10;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)pppppppuStack_2a0 - (long)pppppppuStack_2b0)) {
              pppppppuVar24 = (undefined *******)0x1fffffffffffffff;
            }
            pppppppuStack_180 = (undefined *******)&pppppppuStack_2b0;
            if (pppppppuVar24 == (undefined *******)0x0) {
              ppppppppuVar13 = (undefined ********)0x0;
            }
            else {
              ppppppppuVar13 = (undefined ********)pppppppuStack_2a8;
              FUN_10aad8ce0();
              lVar27 = (long)pppppppuStack_2a8 - (long)pppppppuStack_2b0 >> 3;
            }
            pppppppuStack_198 = (undefined *******)((long)pppppppuVar24 + lVar26);
            ppppppppuVar12 = (undefined ********)(pppppppuStack_198 + -lVar27);
            ppppppppuVar21 = (undefined ********)(pppppppuStack_198 + 1);
            *pppppppuStack_198 = ppppppuStack_2b8;
            ppppppuStack_2b8 = (undefined ******)0x0;
            pppppppuStack_1a0 = pppppppuVar24;
            pppppppuStack_190 = (undefined *******)ppppppppuVar21;
            pppppppuStack_188 = pppppppuVar24 + (long)ppppppppuVar13;
            func_0x00010aad8d14(pppppppuStack_2b0,pppppppuStack_2a8,ppppppppuVar12);
            pppppppuStack_190 = pppppppuStack_2b0;
            pppppppuStack_188 = pppppppuStack_2a0;
            pppppppuStack_1a0 = pppppppuStack_2b0;
            pppppppuStack_198 = pppppppuStack_2b0;
            pppppppuStack_2b0 = (undefined *******)ppppppppuVar12;
            pppppppuStack_2a8 = (undefined *******)ppppppppuVar21;
            pppppppuStack_2a0 = pppppppuVar24 + (long)ppppppppuVar13;
            func_0x00010aad8da8(&pppppppuStack_1a0);
            pppppppuStack_2a8 = (undefined *******)ppppppppuVar21;
            if ((undefined *******)ppppppuStack_2b8 != (undefined *******)0x0) {
              pppppppuVar10 = (undefined *******)(ppppppuStack_2b8 + 1);
              do {
                ppppppuVar15 = *pppppppuVar10;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
                if (bVar7) {
                  *pppppppuVar10 = (undefined ******)((long)ppppppuVar15 + -4);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (((ulong)ppppppuVar15 & 0x1fffffffc) == 4) {
                do {
                  ppppppuVar15 = *pppppppuVar10;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
                  if (bVar7) {
                    *pppppppuVar10 = (undefined ******)((long)ppppppuVar15 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((undefined ******)((long)ppppppuVar15 + -1) == (undefined ******)0x0) {
                  (*(code *)(*ppppppuStack_2b8)[1])();
                }
              }
            }
          }
          if ((long)ppppppuStack_228 < 0) {
            __ZdlPv(pppppppuStack_238);
          }
          puVar25 = (undefined8 *)puVar9[1];
          puVar29 = puVar9;
          if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
            do {
              puVar9 = (undefined8 *)puVar29[2];
              bVar7 = (undefined8 *)*puVar9 != puVar29;
              puVar29 = puVar9;
            } while (bVar7);
          }
          else {
            do {
              puVar9 = puVar25;
              puVar25 = (undefined8 *)*puVar9;
            } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
          }
        } while (puVar9 != &uStack_290);
      }
      func_0x00010ae02f70(0,pppppppuStack_288);
      ppuVar14 = &PTR_PTR_113306620;
      FUN_10ae079a0();
      func_0x00010ae02f80();
      FUN_10ae07cd4(ppuVar14,&PTR_PTR_113306620);
      pppppppuStack_198 = (undefined *******)param_1[1];
      pppppppuStack_1a0 = (undefined *******)*param_1;
      if (param_1[1] != 0) {
        plVar1 = (long *)(param_1[1] + 0x10);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppppppuStack_188 = (undefined *******)0x0;
      pppppppuStack_180 = (undefined *******)0x0;
      pppppppuStack_190 = (undefined *******)&pppppppuStack_188;
      pppppppuStack_178 = pppppppuStack_2b0;
      pppppppuStack_170 = pppppppuStack_2a8;
      pppppppuStack_168 = pppppppuStack_2a0;
      puVar9 = puStack_298;
      ppppppuStack_160 = ppppppuStack_280;
      ppppppuStack_158 = ppppppuStack_278;
      ppppppuStack_150 = ppppppuStack_270;
      ppppppuStack_148 = ppppppuStack_268;
      while (ppppppuStack_270 = ppppppuStack_150, ppppppuStack_268 = ppppppuStack_148,
            puVar9 != &uStack_290) {
        ppppppppuVar13 = &pppppppuStack_188;
        pppppppuStack_2b0 = pppppppuStack_178;
        pppppppuStack_2a8 = pppppppuStack_170;
        pppppppuStack_2a0 = pppppppuStack_168;
        ppppppuStack_280 = ppppppuStack_160;
        ppppppuStack_278 = ppppppuStack_158;
        if ((undefined ********)pppppppuStack_190 == &pppppppuStack_188) {
LAB_10aac5a20:
          ppppppppuVar12 = &pppppppuStack_188;
          ppppppppuVar21 = &pppppppuStack_188;
          if ((undefined ********)pppppppuStack_188 != (undefined ********)0x0) {
            pppppppuStack_238 = (undefined *******)ppppppppuVar13;
            ppppppppuVar12 = ppppppppuVar13 + 1;
            goto LAB_10aac5a34;
          }
LAB_10aac5a40:
          pppppppuVar10 = (undefined *******)0x30;
          __Znwm();
          ppppppuVar15 = (undefined ******)puVar9[4];
          pppppppuVar10[5] = (undefined ******)puVar9[5];
          pppppppuVar10[4] = ppppppuVar15;
          *pppppppuVar10 = (undefined ******)0x0;
          pppppppuVar10[1] = (undefined ******)0x0;
          pppppppuVar10[2] = (undefined ******)ppppppppuVar21;
          *ppppppppuVar12 = pppppppuVar10;
          if ((undefined ********)*pppppppuStack_190 != (undefined ********)0x0) {
            pppppppuStack_190 = (undefined *******)*pppppppuStack_190;
            pppppppuVar10 = *ppppppppuVar12;
          }
          func_0x000107c2b058(pppppppuStack_188,pppppppuVar10);
          pppppppuStack_180 = (undefined *******)((long)pppppppuStack_180 + 1);
        }
        else {
          ppppppppuVar12 = (undefined ********)pppppppuStack_188;
          ppppppppuVar21 = &pppppppuStack_188;
          if ((undefined ********)pppppppuStack_188 == (undefined ********)0x0) {
            do {
              ppppppppuVar13 = (undefined ********)ppppppppuVar21[2];
              bVar7 = (undefined ********)*ppppppppuVar13 == ppppppppuVar21;
              ppppppppuVar21 = ppppppppuVar13;
            } while (bVar7);
          }
          else {
            do {
              ppppppppuVar13 = ppppppppuVar12;
              ppppppppuVar12 = (undefined ********)ppppppppuVar13[1];
            } while ((undefined ********)ppppppppuVar13[1] != (undefined ********)0x0);
          }
          pppppppuVar10 = ppppppppuVar13[4];
          FUN_10a003d5c(pppppppuVar10,ppppppppuVar13[5],puVar9[4],puVar9[5]);
          if (((uint)pppppppuVar10 >> 7 & 1) != 0) goto LAB_10aac5a20;
          ppppppppuVar12 = &pppppppuStack_190;
          FUN_10aae4008(ppppppppuVar12,&pppppppuStack_238,puVar9 + 4);
LAB_10aac5a34:
          ppppppppuVar21 = (undefined ********)pppppppuStack_238;
          if (*ppppppppuVar12 == (undefined *******)0x0) goto LAB_10aac5a40;
        }
        puVar25 = (undefined8 *)puVar9[1];
        puVar29 = puVar9;
        pppppppuStack_178 = pppppppuStack_2b0;
        pppppppuStack_170 = pppppppuStack_2a8;
        pppppppuStack_168 = pppppppuStack_2a0;
        ppppppuStack_160 = ppppppuStack_280;
        ppppppuStack_158 = ppppppuStack_278;
        ppppppuStack_150 = ppppppuStack_270;
        ppppppuStack_148 = ppppppuStack_268;
        if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
          do {
            puVar9 = (undefined8 *)puVar29[2];
            bVar7 = (undefined8 *)*puVar9 != puVar29;
            puVar29 = puVar9;
          } while (bVar7);
        }
        else {
          do {
            puVar9 = puVar25;
            puVar25 = (undefined8 *)*puVar9;
          } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
        }
      }
      pppppppuStack_2a8 = (undefined *******)0x0;
      pppppppuStack_2a0 = (undefined *******)0x0;
      pppppppuStack_2b0 = (undefined *******)0x0;
      ppppppuStack_280 = (undefined ******)0x0;
      ppppppuStack_278 = (undefined ******)0x0;
      if ((undefined *******)ppppppuStack_148 != (undefined *******)0x0) {
        pppppppuVar10 = (undefined *******)ppppppuStack_150[1];
        if (((ulong)ppppppuStack_158 & (long)ppppppuStack_158 - 1U) == 0) {
          pppppppuVar10 = (undefined *******)((ulong)pppppppuVar10 & (long)ppppppuStack_158 - 1U);
        }
        else if (ppppppuStack_158 <= pppppppuVar10) {
          uVar16 = 0;
          if ((undefined *******)ppppppuStack_158 != (undefined *******)0x0) {
            uVar16 = (ulong)pppppppuVar10 / (ulong)ppppppuStack_158;
          }
          pppppppuVar10 = (undefined *******)((long)pppppppuVar10 - uVar16 * (long)ppppppuStack_158)
          ;
        }
        ppppppuStack_160[(long)pppppppuVar10] = (undefined *****)&ppppppuStack_150;
        ppppppuStack_270 = (undefined ******)0x0;
        ppppppuStack_268 = (undefined ******)0x0;
      }
      ppppppuStack_138 = (undefined ******)(param_1 + 0x4f);
      ppppppuStack_130 = (undefined ******)CONCAT35(uStack_1e0._5_3_,(undefined5)uStack_1e0);
      fStack_140 = fStack_260;
      (**(code **)(CONCAT26(uStack_1d2,CONCAT15(uStack_1d3,uStack_1d8)) + 0x10))
                (apuStack_128,&uStack_1d8);
      ppppppuStack_f0 = ppppppuStack_220;
      (*(code *)ppuStack_218[2])(apuStack_e8,&ppuStack_218);
      ppppppppuVar13 = (undefined ********)0x158;
      __Znwm();
      *ppppppppuVar13 = (undefined *******)FUN_10aae8fa0;
      ppppppppuVar13[1] = (undefined *******)FUN_10aae9250;
      func_0x0001092ba17c(ppppppppuVar13 + 2);
      ppppppuVar20 = ppppppuStack_158;
      ppppppuVar15 = ppppppuStack_160;
      pppppppuVar10 = ppppppppuVar13[7];
      if (pppppppuVar10 != (undefined *******)0x0) {
        pppppppuVar24 = pppppppuVar10 + 1;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar7) {
            *pppppppuVar24 = (undefined ******)((long)*pppppppuVar24 + 4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppppppuVar12 = ppppppppuVar13 + 0xc;
      *ppppppppuVar12 = pppppppuStack_188;
      ppppppppuVar13[10] = pppppppuStack_198;
      ppppppppuVar13[9] = pppppppuStack_1a0;
      pppppppuStack_1a0 = (undefined *******)0x0;
      pppppppuStack_198 = (undefined *******)0x0;
      ppppppppuVar13[0xb] = pppppppuStack_190;
      ppppppppuVar13[0xd] = pppppppuStack_180;
      if ((undefined ********)pppppppuStack_180 == (undefined ********)0x0) {
        ppppppppuVar13[0xb] = (undefined *******)ppppppppuVar12;
      }
      else {
        pppppppuStack_188[2] = (undefined ******)ppppppppuVar12;
        pppppppuStack_188 = (undefined *******)0x0;
        pppppppuStack_180 = (undefined *******)0x0;
        pppppppuStack_190 = (undefined *******)&pppppppuStack_188;
      }
      ppppppppuVar13[0x13] = (undefined *******)ppppppuStack_150;
      ppppppppuVar13[0xf] = pppppppuStack_170;
      ppppppppuVar13[0xe] = pppppppuStack_178;
      ppppppppuVar13[0x10] = pppppppuStack_168;
      pppppppuStack_170 = (undefined *******)0x0;
      pppppppuStack_168 = (undefined *******)0x0;
      pppppppuStack_178 = (undefined *******)0x0;
      ppppppppuVar13[0x11] = (undefined *******)ppppppuStack_160;
      ppppppuStack_160 = (undefined ******)0x0;
      ppppppuStack_158 = (undefined ******)0x0;
      ppppppppuVar13[0x12] = (undefined *******)ppppppuVar20;
      ppppppppuVar13[0x14] = (undefined *******)ppppppuStack_148;
      *(float *)(ppppppppuVar13 + 0x15) = fStack_140;
      if ((undefined *******)ppppppuStack_148 != (undefined *******)0x0) {
        pppppppuVar24 = (undefined *******)ppppppuStack_150[1];
        if (((ulong)ppppppuVar20 & (long)ppppppuVar20 - 1U) == 0) {
          pppppppuVar24 = (undefined *******)((ulong)pppppppuVar24 & (long)ppppppuVar20 - 1U);
        }
        else if (ppppppuVar20 <= pppppppuVar24) {
          uVar16 = 0;
          if ((undefined *******)ppppppuVar20 != (undefined *******)0x0) {
            uVar16 = (ulong)pppppppuVar24 / (ulong)ppppppuVar20;
          }
          pppppppuVar24 = (undefined *******)((long)pppppppuVar24 - uVar16 * (long)ppppppuVar20);
        }
        ppppppuVar15[(long)pppppppuVar24] = (undefined *****)(ppppppppuVar13 + 0x13);
        ppppppuStack_150 = (undefined ******)0x0;
        ppppppuStack_148 = (undefined ******)0x0;
      }
      ppppppppuVar13[0x16] = (undefined *******)ppppppuStack_138;
      ppppppppuVar13[0x17] = (undefined *******)ppppppuStack_130;
      (*(code *)apuStack_128[0][2])(ppppppppuVar13 + 0x18,apuStack_128);
      ppppppppuVar13[0x1f] = (undefined *******)ppppppuStack_f0;
      (*(code *)apuStack_e8[0][2])(ppppppppuVar13 + 0x20,apuStack_e8);
      ppppppppuVar13[0x27] = (undefined *******)&PTR_PTR_1132fed50;
      *(undefined1 *)(ppppppppuVar13 + 0x28) = 0;
      *(undefined1 *)(ppppppppuVar13 + 0x2a) = 0;
      ppppppppuVar12 = ppppppppuVar13 + 0x27;
      func_0x0001092ba064(ppppppppuVar12,ppppppppuVar13);
      if (((ulong)ppppppppuVar12 & 1) == 0) {
        FUN_10aad8e34(ppppppppuVar13 + 0x29,ppppppppuVar13 + 9);
        ppppppppuVar13[0x27] = ppppppppuVar13[0x29];
        pppppppuVar24 = ppppppppuVar13[0x29] + 1;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar7) {
            *pppppppuVar24 = (undefined ******)((long)*pppppppuVar24 + 4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)ppppppppuVar13[0x27][2] >> 1 & 1) == 0) {
          *(undefined1 *)(ppppppppuVar13 + 0x2a) = 1;
          pppppppuVar31 = ppppppppuVar13[0x27];
          pppppppuVar24 = pppppppuVar31 + 2;
          pppppppuVar22 = ppppppppuVar13[3];
          do {
            ppppppuVar15 = *pppppppuVar24;
            if (ppppppuVar15 == (undefined ******)0x0) {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
              if (bVar7) {
                *pppppppuVar24 = (undefined ******)0x1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                pppppppuStack_238 = (undefined *******)0x0;
                pppppppuStack_230 = (undefined *******)ppppppppuVar13;
                ppppppuStack_228 = (undefined ******)pppppppuVar22;
                func_0x000109d1b588(pppppppuVar31 + 3,&pppppppuStack_238);
                pppppppuVar31[2] = (undefined ******)0x0;
                goto joined_r0x00010aac5ea8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)ppppppuVar15 >> 1 & 1) == 0);
        }
        pppppppuVar24 = ppppppppuVar13[0x27];
        if (((uint)ppppppppuVar13[0x27][2] >> 5 & 1) != 0) {
          func_0x0001092af97c(pppppppuVar24 + 0x12);
          goto LAB_10aac6194;
        }
        if (pppppppuVar24 != (undefined *******)0x0) {
          pppppppuVar22 = pppppppuVar24 + 1;
          do {
            ppppppuVar15 = *pppppppuVar22;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar22,0x10);
            if (bVar7) {
              *pppppppuVar22 = (undefined ******)((long)ppppppuVar15 + -4);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (((ulong)ppppppuVar15 & 0x1fffffffc) == 4) {
            do {
              ppppppuVar15 = *pppppppuVar22;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar22,0x10);
              if (bVar7) {
                *pppppppuVar22 = (undefined ******)((long)ppppppuVar15 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((undefined ******)((long)ppppppuVar15 + -1) == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar24)[1])();
            }
          }
        }
        pppppppuVar24 = ppppppppuVar13[0x29];
        if (pppppppuVar24 != (undefined *******)0x0) {
          pppppppuVar22 = pppppppuVar24 + 1;
          do {
            ppppppuVar15 = *pppppppuVar22;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar22,0x10);
            if (bVar7) {
              *pppppppuVar22 = (undefined ******)((long)ppppppuVar15 + -4);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (((ulong)ppppppuVar15 & 0x1fffffffc) == 4) {
            do {
              ppppppuVar15 = *pppppppuVar22;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar22,0x10);
              if (bVar7) {
                *pppppppuVar22 = (undefined ******)((long)ppppppuVar15 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((undefined ******)((long)ppppppuVar15 + -1) == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar24)[1])();
            }
          }
        }
        func_0x0001092ba100(ppppppppuVar13 + 2);
        (*(code *)*ppppppppuVar13[0x20])(ppppppppuVar13 + 0x20);
        (*(code *)*ppppppppuVar13[0x18])(ppppppppuVar13 + 0x18);
        func_0x000109f6f4d4(ppppppppuVar13 + 0x11);
        FUN_10aad9c0c(ppppppppuVar13 + 0xe);
        FUN_10aae3fd0(ppppppppuVar13[0xc]);
        if (ppppppppuVar13[10] != (undefined *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        func_0x000109d1a1d0(ppppppppuVar13 + 2);
        __ZdlPv(ppppppppuVar13);
      }
joined_r0x00010aac5ea8:
      if (pppppppuVar10 != (undefined *******)0x0) {
        pppppppuVar24 = pppppppuVar10 + 1;
        do {
          ppppppuVar15 = *pppppppuVar24;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar7) {
            *pppppppuVar24 = (undefined ******)((long)ppppppuVar15 + -4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((ulong)ppppppuVar15 & 0x1fffffffc) == 4) {
          do {
            ppppppuVar15 = *pppppppuVar24;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
            if (bVar7) {
              *pppppppuVar24 = (undefined ******)((long)ppppppuVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((undefined ******)((long)ppppppuVar15 + -1) == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar10)[1])(pppppppuVar10);
          }
        }
      }
      (*(code *)*apuStack_e8[0])(apuStack_e8);
      (*(code *)*apuStack_128[0])(apuStack_128);
      func_0x000109f6f4d4(&ppppppuStack_160);
      FUN_10aad9c0c(&pppppppuStack_178);
      FUN_10aae3fd0(pppppppuStack_188);
      if ((undefined ********)pppppppuStack_198 != (undefined ********)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10aad9c0c(&pppppppuStack_2b0);
      FUN_10aae3fd0(uStack_290);
      func_0x000109f6f4d4(&ppppppuStack_280);
      goto LAB_10aac5f08;
    }
    lVar26 = lVar27 + uVar16;
    do {
      lVar23 = *(long *)(lVar27 + 8);
      pppppppuStack_198 = (undefined *******)(long)*(char *)(lVar23 + 0x1f);
      if ((long)pppppppuStack_198 < 0) {
        pppppppuStack_1a0 = *(undefined ********)(lVar23 + 8);
        pppppppuStack_198 = *(undefined ********)(lVar23 + 0x10);
      }
      else {
        pppppppuStack_1a0 = (undefined *******)(lVar23 + 8);
      }
      ppppppppuVar13 = &pppppppuStack_1a0;
      FUN_10a166af4(ppppppppuVar13,"/",0);
      pppppppuStack_230 = pppppppuStack_198;
      if (ppppppppuVar13 <= pppppppuStack_198) {
        pppppppuStack_230 = (undefined *******)ppppppppuVar13;
      }
      pppppppuStack_238 = pppppppuStack_1a0;
      lVar17 = *(long *)(lVar27 + 8);
      lVar23 = (long)*(char *)(lVar17 + 0x1f);
      if (lVar23 < 0) {
        lVar30 = *(long *)(lVar17 + 8);
        lVar23 = *(long *)(lVar17 + 0x10);
      }
      else {
        lVar30 = lVar17 + 8;
      }
      FUN_10ae03140(0,lVar30,lVar23);
      ppuVar14 = &PTR_PTR_1133065e0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar14,&PTR_PTR_1133065e0);
      ppuVar8 = &puStack_298;
      FUN_10aae4008(ppuVar8,&pppppppuStack_1a0,&pppppppuStack_238);
      if (*ppuVar8 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x30;
        __Znwm();
        puVar9[5] = pppppppuStack_230;
        puVar9[4] = pppppppuStack_238;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = pppppppuStack_1a0;
        *ppuVar8 = puVar9;
        if ((undefined8 *)*puStack_298 != (undefined8 *)0x0) {
          puVar9 = *ppuVar8;
          puStack_298 = (undefined8 *)*puStack_298;
        }
        func_0x000107c2b058(uStack_290,puVar9);
        pppppppuStack_288 = (undefined *******)((long)pppppppuStack_288 + 1);
      }
      lVar23 = *(long *)(lVar27 + 8);
      pppppppuVar10 = (undefined *******)0x30;
      __Znwm();
      *pppppppuVar10 = (undefined ******)0x0;
      pppppppuVar10[1] = (undefined ******)0x0;
      ppppppuVar15 = (undefined ******)(long)*(char *)(lVar23 + 0x1f);
      if ((long)ppppppuVar15 < 0) {
        ppppppuVar20 = *(undefined *******)(lVar23 + 8);
        ppppppuVar15 = *(undefined *******)(lVar23 + 0x10);
      }
      else {
        ppppppuVar20 = (undefined ******)(lVar23 + 8);
      }
      pppppppuVar10[2] = ppppppuVar20;
      pppppppuVar10[3] = ppppppuVar15;
      pppppppuVar10[5] = (undefined ******)pppppppuStack_230;
      pppppppuVar10[4] = (undefined ******)pppppppuStack_238;
      FUN_10a054838(&ppppppuStack_280);
      ppppppuVar15 = pppppppuVar10[2];
      pppppppuVar24 = &ppppppuStack_280;
      FUN_10a054838(pppppppuVar24,ppppppuVar15,pppppppuVar10[3]);
      pppppppuVar22 = (undefined *******)ppppppuStack_278;
      pppppppuVar10[1] = (undefined ******)pppppppuVar24;
      if ((undefined *******)ppppppuStack_278 != (undefined *******)0x0) {
        uVar16 = (long)ppppppuStack_278 - 1;
        if (((ulong)ppppppuStack_278 & uVar16) == 0) {
          pppppppuVar31 = (undefined *******)(uVar16 & (ulong)pppppppuVar24);
        }
        else {
          pppppppuVar31 = pppppppuVar24;
          if (ppppppuStack_278 <= pppppppuVar24) {
            uVar5 = 0;
            if ((undefined *******)ppppppuStack_278 != (undefined *******)0x0) {
              uVar5 = (ulong)pppppppuVar24 / (ulong)ppppppuStack_278;
            }
            pppppppuVar31 =
                 (undefined *******)((long)pppppppuVar24 - uVar5 * (long)ppppppuStack_278);
          }
        }
        if (((undefined ******)ppppppuStack_280[(long)pppppppuVar31] != (undefined ******)0x0) &&
           (pppppuVar28 = (undefined *****)*ppppppuStack_280[(long)pppppppuVar31],
           pppppuVar28 != (undefined *****)0x0)) {
          ppppppuVar20 = pppppppuVar10[2];
          ppppppuVar3 = pppppppuVar10[3];
          do {
            pppppppuVar18 = (undefined *******)pppppuVar28[1];
            if (pppppppuVar18 == pppppppuVar24) {
              if ((undefined ******)pppppuVar28[3] == ppppppuVar3) {
                ppppuVar11 = pppppuVar28[2];
                ppppppuVar15 = ppppppuVar20;
                _memcmp(ppppuVar11,ppppppuVar20,ppppppuVar3);
                if ((int)ppppuVar11 == 0) {
                  __ZdlPv(pppppppuVar10);
                  goto LAB_10aac5698;
                }
              }
            }
            else {
              if (((ulong)pppppppuVar22 & uVar16) == 0) {
                pppppppuVar18 = (undefined *******)((ulong)pppppppuVar18 & uVar16);
              }
              else if (pppppppuVar22 <= pppppppuVar18) {
                uVar5 = 0;
                if (pppppppuVar22 != (undefined *******)0x0) {
                  uVar5 = (ulong)pppppppuVar18 / (ulong)pppppppuVar22;
                }
                pppppppuVar18 =
                     (undefined *******)((long)pppppppuVar18 - uVar5 * (long)pppppppuVar22);
              }
              if (pppppppuVar18 != pppppppuVar31) break;
            }
            pppppuVar28 = (undefined *****)*pppppuVar28;
          } while (pppppuVar28 != (undefined *****)0x0);
        }
      }
      if ((pppppppuVar22 == (undefined *******)0x0) ||
         (fStack_260 * (float)pppppppuVar22 < (float)((long)ppppppuStack_268 + 1))) {
        uVar16 = 1;
        if ((undefined *******)0x2 < pppppppuVar22) {
          uVar16 = (ulong)(((ulong)pppppppuVar22 & (long)pppppppuVar22 - 1U) != 0);
        }
        ppppppuVar15 = (undefined ******)(uVar16 | (long)pppppppuVar22 << 1);
        ppppppuVar20 = (undefined ******)(long)((float)((long)ppppppuStack_268 + 1) / fStack_260);
        if (ppppppuVar15 <= ppppppuVar20) {
          ppppppuVar15 = ppppppuVar20;
        }
        FUN_109f6f564(&ppppppuStack_280);
        pppppppuVar24 = (undefined *******)pppppppuVar10[1];
        pppppppuVar22 = (undefined *******)ppppppuStack_278;
      }
      uVar16 = (long)pppppppuVar22 - 1;
      if (((ulong)pppppppuVar22 & uVar16) == 0) {
        pppppppuVar24 = (undefined *******)(uVar16 & (ulong)pppppppuVar24);
      }
      else if (pppppppuVar22 <= pppppppuVar24) {
        uVar5 = 0;
        if (pppppppuVar22 != (undefined *******)0x0) {
          uVar5 = (ulong)pppppppuVar24 / (ulong)pppppppuVar22;
        }
        pppppppuVar24 = (undefined *******)((long)pppppppuVar24 - uVar5 * (long)pppppppuVar22);
      }
      pppppppuVar31 = (undefined *******)ppppppuStack_280[(long)pppppppuVar24];
      if (pppppppuVar31 == (undefined *******)0x0) {
        *pppppppuVar10 = ppppppuStack_270;
        ppppppuStack_280[(long)pppppppuVar24] = (undefined *****)&ppppppuStack_270;
        ppppppuStack_270 = (undefined ******)pppppppuVar10;
        if (*pppppppuVar10 != (undefined ******)0x0) {
          pppppppuVar31 = (undefined *******)(*pppppppuVar10)[1];
          if (((ulong)pppppppuVar22 & uVar16) == 0) {
            pppppppuVar31 = (undefined *******)((ulong)pppppppuVar31 & uVar16);
          }
          else if (pppppppuVar22 <= pppppppuVar31) {
            uVar16 = 0;
            if (pppppppuVar22 != (undefined *******)0x0) {
              uVar16 = (ulong)pppppppuVar31 / (ulong)pppppppuVar22;
            }
            pppppppuVar31 = (undefined *******)((long)pppppppuVar31 - uVar16 * (long)pppppppuVar22);
          }
          pppppppuVar31 = (undefined *******)(ppppppuStack_280 + (long)pppppppuVar31);
          goto LAB_10aac5688;
        }
      }
      else {
        *pppppppuVar10 = *pppppppuVar31;
LAB_10aac5688:
        *pppppppuVar31 = (undefined ******)pppppppuVar10;
      }
      ppppppuStack_268 = (undefined ******)((long)ppppppuStack_268 + 1);
LAB_10aac5698:
      lVar27 = lVar27 + 0x10;
    } while (lVar27 != lVar26);
    pppppppuStack_2b0 = (undefined *******)0x0;
    pppppppuStack_2a8 = (undefined *******)0x0;
    pppppppuStack_2a0 = (undefined *******)0x0;
    if ((undefined ********)pppppppuStack_288 == (undefined ********)0x0) goto LAB_10aac579c;
    if ((ulong)pppppppuStack_288 >> 0x3d == 0) {
      pppppppuStack_180 = (undefined *******)&pppppppuStack_2b0;
      ppppppppuVar12 = (undefined ********)pppppppuStack_288;
      FUN_10aad8ce0();
      ppppppppuVar13 =
           (undefined ********)
           ((long)ppppppppuVar12 + ((long)pppppppuStack_2b0 - (long)pppppppuStack_2a8));
      pppppppuStack_1a0 = (undefined *******)ppppppppuVar12;
      pppppppuStack_198 = (undefined *******)ppppppppuVar12;
      pppppppuStack_190 = (undefined *******)ppppppppuVar12;
      pppppppuStack_188 = (undefined *******)(ppppppppuVar12 + (long)ppppppuVar15);
      func_0x00010aad8d14(pppppppuStack_2b0,pppppppuStack_2a8,ppppppppuVar13);
      pppppppuStack_190 = pppppppuStack_2b0;
      pppppppuStack_188 = pppppppuStack_2a0;
      pppppppuStack_1a0 = pppppppuStack_2b0;
      pppppppuStack_198 = pppppppuStack_2b0;
      pppppppuStack_2b0 = (undefined *******)ppppppppuVar13;
      pppppppuStack_2a8 = (undefined *******)ppppppppuVar12;
      pppppppuStack_2a0 = (undefined *******)(ppppppppuVar12 + (long)ppppppuVar15);
      func_0x00010aad8da8(&pppppppuStack_1a0);
      goto LAB_10aac579c;
    }
  }
  FUN_10aad8ccc();
LAB_10aac6194:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aac6198);
  (*pcVar6)();
}



/* Entry: 10aac631c; end: 10aac637f;  */

long FUN_10aac631c(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xb8))();
  (*(code *)**(undefined8 **)(param_1 + 0x78))((undefined8 *)(param_1 + 0x78));
  func_0x000109f6f4d4(param_1 + 0x40);
  FUN_10aad9c0c(param_1 + 0x28);
  FUN_10aae3fd0(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aac6380; end: 10aac6837;  */

/* WARNING: Removing unreachable block (ram,0x00010aac64f4) */

void FUN_10aac6380(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar12 = (undefined8 *)param_1[0x2e];
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  lStack_68 = -0x7fffffffffffffd8;
  uStack_70 = 0x22;
  *(undefined2 *)(puVar5 + 4) = 0x4c4d;
  puVar5[1] = 0x415254454341465f;
  *puVar5 = 0x45524f43534e454c;
  puVar5[3] = 0x585f454e494c4550;
  puVar5[2] = 0x49505f474e494b43;
  *(undefined1 *)((long)puVar5 + 0x22) = 0;
  puStack_78 = puVar5;
  FUN_10a4d898c(&plStack_60,*puVar12,&puStack_78);
  lStack_88 = param_1[1];
  uStack_90 = *param_1;
  if (lStack_88 != 0) {
    plVar11 = (long *)(lStack_88 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar12 = (undefined8 *)0x80;
  uStack_58 = uStack_90;
  lStack_50 = lStack_88;
  __Znwm();
  *puVar12 = FUN_10aae96bc;
  puVar12[1] = FUN_10aae9964;
  func_0x0001092ba17c(puVar12 + 2);
  plVar11 = (long *)puVar12[7];
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_88 = lStack_50;
    uStack_90 = uStack_58;
  }
  puVar12[9] = plStack_60;
  plStack_60 = (long *)0x0;
  puVar12[0xb] = lStack_88;
  puVar12[10] = uStack_90;
  uStack_58 = 0;
  lStack_50 = 0;
  puVar12[0xc] = &PTR_PTR_1132fed50;
  *(undefined1 *)(puVar12 + 0xd) = 0;
  *(undefined1 *)(puVar12 + 0xf) = 0;
  puVar6 = puVar12 + 0xc;
  func_0x0001092ba064(puVar6,puVar12);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10aad9cb0(puVar12 + 0xe,puVar12 + 9);
    puVar12[0xc] = puVar12[0xe];
    plVar7 = (long *)(puVar12[0xe] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar12[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar12 + 0xf) = 1;
      lVar13 = puVar12[0xc];
      plVar7 = (long *)(lVar13 + 0x10);
      uVar8 = puVar12[3];
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
            puStack_40 = puVar12;
            uStack_38 = uVar8;
            func_0x000109d1b588(lVar13 + 0x18,&uStack_48);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            goto joined_r0x00010aac6680;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar12[0xc];
    if (((uint)*(undefined8 *)(puVar12[0xc] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aac6718);
      (*pcVar4)();
    }
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
    plVar7 = (long *)puVar12[0xe];
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
    func_0x0001092ba100(puVar12 + 2);
    if (puVar12[0xb] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar7 = (long *)puVar12[9];
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
    func_0x000109d1a1d0(puVar12 + 2);
    __ZdlPv(puVar12);
  }
joined_r0x00010aac6680:
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
  if (lStack_50 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_60 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_60 + 1);
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
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  if (lStack_68 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10aac6838; end: 10aac68ab;  */

long * FUN_10aac6838(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10aac68ac; end: 10aac70ef;  */

/* WARNING: Removing unreachable block (ram,0x00010aac64f4) */

long * FUN_10aac68ac(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int ***pppiVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  int ****ppppiVar10;
  int ****ppppiVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  int ****ppppiVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  int ***pppiStack_d8;
  int ***pppiStack_d0;
  int ***pppiStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *param_2;
  *param_1 = lVar24;
  lVar18 = param_2[1];
  param_1[1] = lVar18;
  if (lVar18 != 0) {
    plVar16 = (long *)(lVar18 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar24 = *param_2;
  }
  puVar9 = (undefined8 *)0x20;
  plStack_e0 = param_1;
  __Znwm();
  plStack_f0 = plStack_e0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110c444c0;
  *(undefined1 *)(puVar9 + 3) = *(undefined1 *)(lVar24 + 0x40);
  plStack_e0[2] = (long)(puVar9 + 3);
  plStack_e0[3] = (long)puVar9;
  plStack_e0[4] = 0;
  plStack_e0[5] = 0;
  if (iRam00000001132ffd98 == 3) {
    fVar32 = 1.0;
    fVar33 = 1.0;
  }
  else if (iRam00000001132ffd98 == 2) {
    fVar33 = 0.75;
    fVar32 = 1.25;
  }
  else {
    fVar33 = 0.5;
    fVar32 = 1.5;
  }
  pppiStack_d8 = (int ***)0x0;
  pppiStack_d0 = (int ***)0x0;
  pppiStack_c8 = (int ***)0x0;
  ppppiVar10 = (int ****)0x90;
  plStack_e8 = param_2;
  __Znwm();
  lVar18 = 0;
  plStack_f0 = (long *)((long)plStack_f0 + 0x154);
  pppiStack_c8 = (int ***)(ppppiVar10 + 0x12);
  pppiStack_d8 = (int ***)ppppiVar10;
  do {
    fVar29 = *(float *)(&UNK_10e4f2864 + lVar18);
    fVar30 = *(float *)(&UNK_10e4f287c + lVar18);
    if (ppppiVar10 < pppiStack_c8) {
      *(int *)ppppiVar10 = (int)(fVar33 * fVar29);
      ppppiVar10[1] = (int ***)(long)(int)(fVar32 * fVar30);
      ppppiVar10 = ppppiVar10 + 3;
    }
    else {
      lVar24 = (long)ppppiVar10 - (long)pppiStack_d8;
      uVar22 = (lVar24 >> 3) * -0x5555555555555555 + 1;
      pppiStack_d0 = (int ***)ppppiVar10;
      if (0xaaaaaaaaaaaaaaa < uVar22) {
        FUN_10a50482c();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10aac6f34);
        (*pcVar7)();
      }
      lVar19 = (long)pppiStack_c8 - (long)pppiStack_d8 >> 3;
      uVar23 = lVar19 * 0x5555555555555556;
      if (uVar23 < uVar22 || uVar23 - uVar22 == 0) {
        uVar23 = uVar22;
      }
      if (0x555555555555554 < (ulong)(lVar19 * -0x5555555555555555)) {
        uVar23 = 0xaaaaaaaaaaaaaaa;
      }
      ppppiVar11 = &pppiStack_d8;
      FUN_10a504840();
      pppiVar6 = pppiStack_d8;
      lVar19 = (long)pppiStack_d0 - (long)pppiStack_d8;
      piVar14 = (int *)((long)ppppiVar11 + lVar24);
      *piVar14 = (int)(fVar33 * fVar29);
      *(int ****)(piVar14 + 2) = (int ***)(long)(int)(fVar32 * fVar30);
      ppppiVar10 = (int ****)(piVar14 + 6);
      ppppiVar25 = (int ****)((long)piVar14 - lVar19);
      _memcpy(ppppiVar25,pppiVar6);
      bVar5 = (int ****)pppiStack_d8 != (int ****)0x0;
      pppiStack_d8 = (int ***)ppppiVar25;
      pppiStack_c8 = (int ***)(ppppiVar11 + uVar23 * 3);
      if (bVar5) {
        pppiStack_d0 = (int ***)ppppiVar10;
        __ZdlPv();
      }
    }
    plVar16 = plStack_e0;
    lVar18 = lVar18 + 4;
  } while (lVar18 != 0x18);
  plVar17 = plStack_e0 + 0xb;
  *plVar17 = 0;
  plStack_e0[6] = 0;
  plStack_e0[7] = (long)pppiStack_d8;
  plStack_e0[8] = (long)ppppiVar10;
  plStack_e0[9] = (long)pppiStack_c8;
  pppiStack_d0 = (int ***)0x0;
  pppiStack_c8 = (int ***)0x0;
  plVar21 = plStack_e0 + 0xd;
  *plVar21 = (long)&PTR_FUN_110c42c80;
  pppiStack_d8 = (int ***)0x0;
  plStack_e0[10] = 0;
  plStack_e0[0xc] = 0;
  *(undefined4 *)(plStack_e0 + 0xe) = 0;
  plStack_e0[0x10] = 0;
  plStack_e0[0xf] = 0;
  plStack_e0[0x12] = 0;
  plStack_e0[0x11] = 0;
  plStack_e0[0x14] = 0;
  plStack_e0[0x13] = 0;
  plStack_e0[0x16] = 0;
  plStack_e0[0x15] = 0;
  plStack_e0[0x18] = 0;
  plStack_e0[0x17] = 0;
  plStack_e0[0x1a] = 0;
  plStack_e0[0x19] = 0;
  plStack_e0[0x1c] = 0;
  plStack_e0[0x1b] = 0;
  plStack_e0[0x1e] = 0;
  plStack_e0[0x1d] = 0;
  plStack_e0[0x20] = 0;
  plStack_e0[0x1f] = 0;
  plStack_e0[0x22] = 0;
  plStack_e0[0x21] = 0;
  plStack_e0[0x24] = 0;
  plStack_e0[0x23] = 0;
  plStack_e0[0x26] = 0;
  plStack_e0[0x25] = 0;
  plStack_e0[0x27] = 0;
  func_0x000107c2ad00(plStack_e0 + 0x28);
  *(undefined4 *)(plVar16 + 0x2a) = 0xffffffff;
  *plStack_f0 = 0;
  auVar31 = NEON_fmov(0xbf800000,4);
  plStack_f0[2] = auVar31._8_8_;
  plStack_f0[1] = auVar31._0_8_;
  *(undefined4 *)((long)plVar16 + 0x16c) = 0x7fc00000;
  plVar16[0x2e] = 0x3f8000007fc00000;
  plVar16[0x2f] = 0;
  plVar16[0x30] = 0;
  *(undefined4 *)(plVar16 + 0x31) = 0x3f800000;
  *(undefined8 *)((long)plVar16 + 0x194) = 0;
  *(undefined8 *)((long)plVar16 + 0x18c) = 0;
  *(undefined4 *)((long)plVar16 + 0x19c) = 0x3f800000;
  plVar16[0x34] = 0;
  plVar16[0x35] = 0;
  plVar16[0x36] = 0x3f800000;
  *(undefined4 *)(plVar16 + 0x37) = 0;
  *(undefined8 *)((long)plVar16 + 0x1e4) = 0;
  *(undefined8 *)((long)plVar16 + 0x1dc) = 0;
  *(undefined8 *)((long)plVar16 + 500) = 0;
  *(undefined8 *)((long)plVar16 + 0x1ec) = 0;
  plVar16[0x40] = 0;
  plVar16[0x3f] = 0;
  plVar16[0x38] = 0;
  plVar16[0x39] = 0;
  plVar16[0x3a] = 0;
  *(undefined4 *)(plVar16 + 0x3b) = 0x3f800000;
  *(undefined4 *)((long)plVar16 + 0x1ec) = 0x3f800000;
  *(undefined4 *)(plVar16 + 0x40) = 0x3f800000;
  FUN_10aae40c4(&uStack_c0);
  plVar26 = plStack_e8;
  uVar27 = *(undefined8 *)*plStack_e8;
  puVar12 = (undefined8 *)0x340;
  __Znwm();
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &PTR_FUN_110c44560;
  puVar9 = puVar12 + 3;
  FUN_10aac36f8(puVar9,&uStack_c0,uVar27);
  plVar16[0x41] = (long)puVar9;
  plVar16[0x42] = (long)puVar12;
  FUN_10aae45d4(puVar12,puVar9,puVar9);
  if (plStack_b8 != (long *)0x0) {
    plVar13 = plStack_b8 + 1;
    do {
      lVar18 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  plStack_f0 = plVar16 + 0x41;
  *(undefined4 *)(plVar16 + 0x43) = 0;
  puVar9 = (undefined8 *)*plVar26;
  uVar27 = *puVar9;
  plVar13 = (long *)0x178;
  __Znwm();
  plVar28 = plVar13 + 1;
  *plVar28 = 0;
  plVar13[2] = 0;
  plVar15 = plVar13 + 3;
  *plVar15 = (long)&PTR_FUN_110c42ea0;
  *plVar13 = (long)&PTR_FUN_110c445b0;
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[4] = 0;
  *(undefined4 *)(plVar13 + 7) = 0;
  plStack_b8 = (long *)&UNK_1053a6a3c;
  ppuStack_b0 = &PTR_DAT_110ae9180;
  uStack_c0 = uVar27;
  func_0x000109d18d1c(plVar13 + 8,&UNK_10f68dbd8,0x1a,&uStack_c0);
  func_0x0001092ba41c(&uStack_c0);
  plVar26 = plStack_e0;
  plVar13[0x20] = 0;
  plVar13[0x1f] = 0;
  *(undefined1 *)((long)plVar13 + 0x144) = 0;
  plVar13[0x29] = 0;
  plVar13[0x2a] = 0;
  plVar13[0x22] = 0;
  plVar13[0x21] = 0;
  plVar13[0x24] = 0;
  plVar13[0x23] = 0;
  plVar13[0x26] = 0;
  plVar13[0x25] = 0;
  plVar13[0x2b] = puVar9[6];
  lVar18 = puVar9[7];
  plVar13[0x2c] = lVar18;
  if (lVar18 != 0) {
    plVar2 = (long *)(lVar18 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcVar20 = (char *)plStack_e0[2];
  lVar18 = plStack_e0[3];
  plVar13[0x2d] = (long)pcVar20;
  plVar13[0x2e] = lVar18;
  if (lVar18 != 0) {
    plVar2 = (long *)(lVar18 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pcVar20 = (char *)plStack_e0[2];
  }
  plVar13[0x27] = 1000000000;
  cVar4 = *pcVar20;
  *(uint *)(plVar13 + 7) = (uint)(cVar4 != '\x01');
  *(uint *)(plVar13 + 0x28) = (uint)(cVar4 != '\x01');
  FUN_10aabc8a4(plVar15);
  if ((bRam00000001137ec1a0 & 1) == 0) {
    iVar8 = 0x137ec1a0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      FUN_10a08eebc(0x1137ec1e0);
      ___cxa_atexit(FUN_10aabd09c,0x1137ec1e0,0x100000000);
      ___cxa_guard_release(0x1137ec1a0);
      plVar26 = plStack_e0;
    }
  }
  plVar2 = plRam00000001137ec1e8;
  plStack_b8 = plRam00000001137ec1e8;
  uStack_c0 = uRam00000001137ec1e0;
  if (plRam00000001137ec1e8 != (long *)0x0) {
    plVar3 = plRam00000001137ec1e8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a09efac(0x1138355a0,0);
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      lVar18 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  piVar14 = (int *)0x1138355a0;
  FUN_10a08fec0();
  *(bool *)((long)plVar13 + 0x144) = *piVar14 != 0;
  FUN_10aabd0a0(plVar15);
  if (plVar13[5] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *plVar28 = *plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar13 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar13[4] = (long)plVar15;
    plVar13[5] = (long)plVar13;
  }
  else {
    if (*(long *)(plVar13[5] + 8) != -1) goto LAB_10aac6e80;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *plVar28 = *plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar13 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar13[4] = (long)plVar15;
    plVar13[5] = (long)plVar13;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar18 = *plVar28;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar5) {
      *plVar28 = lVar18 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar18 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
  }
LAB_10aac6e80:
  plVar28 = (long *)plVar26[0xc];
  plVar26[0xb] = (long)plVar15;
  plVar26[0xc] = (long)plVar13;
  if (plVar28 != (long *)0x0) {
    plVar15 = plVar28 + 1;
    do {
      lVar18 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
    }
  }
  (**(code **)(*(long *)*plVar17 + 0x38))((long *)*plVar17,*plStack_e8 + 0x10);
  FUN_10aac70f0(plVar26);
  plVar15 = (long *)*plStack_f0;
  FUN_10aac4800();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar26;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137ec1a0);
  FUN_10aade53c(plVar13 + 0x2d);
  func_0x00010a23495c(plVar28 + 0xc);
  FUN_10a235538(plVar13 + 0x29);
  func_0x00010aae1558(plVar28 + 6);
  FUN_10aabdbc8(plVar28 + 3);
  FUN_10aabdbc8(plVar28);
  func_0x000109d18f34(plVar13 + 8);
  if (plVar13[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__119__shared_weak_countD2Ev(plVar13);
  __ZdlPv();
  FUN_10aae3978(plStack_f0);
  func_0x00010a042d30(plStack_e0 + 0x38);
  func_0x000109696618(plVar16 + 0x28);
  func_0x00010aab0284(plVar21);
  func_0x00010aae467c(plVar17);
  if (plStack_e0[7] != 0) {
    plStack_e0[8] = plStack_e0[7];
    __ZdlPv();
  }
  plVar16 = (long *)plStack_e0[5];
  if (plVar16 != (long *)0x0) {
    plVar13 = plVar16 + 1;
    do {
      lVar18 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  FUN_10aade53c(plStack_e0 + 2);
  func_0x00010a23575c(plStack_e0);
  plVar13 = plVar15;
  __Unwind_Resume();
  pcStack_f8 = FUN_10aac70f0;
  puVar9 = (undefined8 *)plVar13[0x41];
  plVar16 = plVar13;
  plStack_120 = plVar21;
  plStack_118 = plVar17;
  plStack_110 = plVar15;
  plStack_108 = plVar26;
  puStack_100 = &stack0xfffffffffffffff0;
  if (puVar9 == (undefined8 *)0x0) {
    FUN_10aae40c4(&puStack_130);
    uVar27 = *(undefined8 *)*plVar13;
    plVar17 = (long *)0x340;
    __Znwm();
    plVar17[1] = 0;
    plVar17[2] = 0;
    *plVar17 = (long)&PTR_FUN_110c44560;
    plVar26 = plVar17 + 3;
    FUN_10aac36f8(plVar26,&puStack_130,uVar27);
    plVar16 = plVar17;
    FUN_10aae45d4(plVar17,plVar26,plVar26);
    plVar13[0x41] = (long)plVar26;
    plVar26 = (long *)plVar13[0x42];
    plVar13[0x42] = (long)plVar17;
    if (plVar26 != (long *)0x0) {
      plVar17 = plVar26 + 1;
      do {
        lVar18 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        plVar16 = plVar26;
      }
    }
    plVar26 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar17 = plStack_128 + 1;
      do {
        lVar18 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
        plVar16 = plVar26;
      }
    }
    puVar9 = (undefined8 *)plVar13[0x41];
  }
  if ((*(long *)(*plVar13 + 0x10) != 0) && (*(long *)(*plVar13 + 0x10) != puVar9[0x2e])) {
    plVar16 = puVar9 + 0x2e;
    FUN_10a4ec3f0(plVar16);
    if ((*(byte *)(puVar9 + 0x5b) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10aac7240);
      (*pcVar7)();
    }
    if (*(char *)(puVar9 + 0x59) == '\x01') {
      puVar12 = (undefined8 *)puVar9[0x2e];
      plVar16 = (long *)0x28;
      __Znwm();
      lStack_158 = -0x7fffffffffffffd8;
      uStack_160 = 0x22;
      *(undefined2 *)(plVar16 + 4) = 0x4c4d;
      plVar16[1] = 0x415254454341465f;
      *plVar16 = 0x45524f43534e454c;
      plVar16[3] = 0x585f454e494c4550;
      plVar16[2] = 0x49505f474e494b43;
      *(undefined1 *)((long)plVar16 + 0x22) = 0;
      plStack_168 = plVar16;
      FUN_10a4d898c(&plStack_150,*puVar12,&plStack_168);
      uStack_180 = *puVar9;
      lStack_178 = puVar9[1];
      if (lStack_178 != 0) {
        plVar26 = (long *)(lStack_178 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar5) {
            *plVar26 = *plVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar9 = (undefined8 *)0x80;
      uStack_148 = uStack_180;
      lStack_140 = lStack_178;
      __Znwm();
      *puVar9 = FUN_10aae96bc;
      puVar9[1] = FUN_10aae9964;
      func_0x0001092ba17c(puVar9 + 2);
      plVar26 = (long *)puVar9[7];
      if (plVar26 != (long *)0x0) {
        plVar17 = plVar26 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lStack_178 = lStack_140;
        uStack_180 = uStack_148;
      }
      puVar9[9] = plStack_150;
      plStack_150 = (long *)0x0;
      puVar9[0xb] = lStack_178;
      puVar9[10] = uStack_180;
      uStack_148 = 0;
      lStack_140 = 0;
      puVar9[0xc] = &PTR_PTR_1132fed50;
      *(undefined1 *)(puVar9 + 0xd) = 0;
      *(undefined1 *)(puVar9 + 0xf) = 0;
      puVar12 = puVar9 + 0xc;
      func_0x0001092ba064(puVar12,puVar9);
      if (((ulong)puVar12 & 1) == 0) {
        FUN_10aad9cb0(puVar9 + 0xe,puVar9 + 9);
        puVar9[0xc] = puVar9[0xe];
        plVar17 = (long *)(puVar9[0xe] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar9[0xc] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar9 + 0xf) = 1;
          lVar18 = puVar9[0xc];
          plVar17 = (long *)(lVar18 + 0x10);
          plVar21 = (long *)puVar9[3];
          do {
            lVar24 = *plVar17;
            if (lVar24 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar5) {
                *plVar17 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uStack_138 = 0;
                puStack_130 = puVar9;
                plStack_128 = plVar21;
                func_0x000109d1b588(lVar18 + 0x18,&uStack_138);
                *(undefined8 *)(lVar18 + 0x10) = 0;
                goto joined_r0x00010aac6680;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar24 >> 1 & 1) == 0);
        }
        plVar17 = (long *)puVar9[0xc];
        if (((uint)*(undefined8 *)(puVar9[0xc] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar17 + 0x12);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10aac6718);
          (*pcVar7)();
        }
        if (plVar17 != (long *)0x0) {
          puVar1 = (ulong *)(plVar17 + 1);
          do {
            uVar22 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar22 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar22 & 0x1fffffffc) == 4) {
            do {
              uVar22 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar22 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar22 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        plVar17 = (long *)puVar9[0xe];
        if (plVar17 != (long *)0x0) {
          puVar1 = (ulong *)(plVar17 + 1);
          do {
            uVar22 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar22 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar22 & 0x1fffffffc) == 4) {
            do {
              uVar22 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar22 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar22 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar9 + 2);
        if (puVar9[0xb] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar17 = (long *)puVar9[9];
        if (plVar17 != (long *)0x0) {
          puVar1 = (ulong *)(plVar17 + 1);
          do {
            uVar22 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar22 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar22 & 0x1fffffffc) == 4) {
            do {
              uVar22 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar22 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar22 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar9 + 2);
        __ZdlPv(puVar9);
      }
joined_r0x00010aac6680:
      if (plVar26 != (long *)0x0) {
        puVar1 = (ulong *)(plVar26 + 1);
        do {
          uVar22 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar22 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar22 & 0x1fffffffc) == 4) {
          do {
            uVar22 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar22 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar22 - 1 == 0) {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
      }
      if (lStack_140 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar26 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_150 + 1);
        do {
          uVar22 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar22 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar22 & 0x1fffffffc) == 4) {
          do {
            uVar22 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar22 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar22 - 1 == 0) {
            (**(code **)(*plStack_150 + 8))();
          }
        }
      }
      if (lStack_158 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar16);
        return plVar16;
      }
      return plVar26;
    }
  }
  return plVar16;
}



/* Entry: 10aac70f0; end: 10aac7267;  */

/* WARNING: Removing unreachable block (ram,0x00010aac64f4) */

void FUN_10aac70f0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  puVar11 = (undefined8 *)param_1[0x41];
  if (puVar11 == (undefined8 *)0x0) {
    FUN_10aae40c4(&puStack_40);
    uVar13 = *(undefined8 *)*param_1;
    puVar6 = (undefined8 *)0x340;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110c44560;
    puVar11 = puVar6 + 3;
    FUN_10aac36f8(puVar11,&puStack_40,uVar13);
    FUN_10aae45d4(puVar6,puVar11,puVar11);
    param_1[0x41] = (long)puVar11;
    plVar14 = (long *)param_1[0x42];
    param_1[0x42] = (long)puVar6;
    if (plVar14 != (long *)0x0) {
      plVar5 = plVar14 + 1;
      do {
        lVar9 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar14 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar5 = plStack_38 + 1;
      do {
        lVar9 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    puVar11 = (undefined8 *)param_1[0x41];
  }
  if ((*(long *)(*param_1 + 0x10) != 0) && (*(long *)(*param_1 + 0x10) != puVar11[0x2e])) {
    FUN_10a4ec3f0(puVar11 + 0x2e);
    if ((*(byte *)(puVar11 + 0x5b) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aac7240);
      (*pcVar4)();
    }
    if (*(char *)(puVar11 + 0x59) == '\x01') {
      puVar12 = (undefined8 *)puVar11[0x2e];
      puVar6 = (undefined8 *)0x28;
      __Znwm();
      lStack_68 = -0x7fffffffffffffd8;
      uStack_70 = 0x22;
      *(undefined2 *)(puVar6 + 4) = 0x4c4d;
      puVar6[1] = 0x415254454341465f;
      *puVar6 = 0x45524f43534e454c;
      puVar6[3] = 0x585f454e494c4550;
      puVar6[2] = 0x49505f474e494b43;
      *(undefined1 *)((long)puVar6 + 0x22) = 0;
      puStack_78 = puVar6;
      FUN_10a4d898c(&plStack_60,*puVar12,&puStack_78);
      lStack_88 = puVar11[1];
      uStack_90 = *puVar11;
      if (lStack_88 != 0) {
        plVar14 = (long *)(lStack_88 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar11 = (undefined8 *)0x80;
      uStack_58 = uStack_90;
      lStack_50 = lStack_88;
      __Znwm();
      *puVar11 = FUN_10aae96bc;
      puVar11[1] = FUN_10aae9964;
      func_0x0001092ba17c(puVar11 + 2);
      plVar14 = (long *)puVar11[7];
      if (plVar14 != (long *)0x0) {
        plVar5 = plVar14 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lStack_88 = lStack_50;
        uStack_90 = uStack_58;
      }
      puVar11[9] = plStack_60;
      plStack_60 = (long *)0x0;
      puVar11[0xb] = lStack_88;
      puVar11[10] = uStack_90;
      uStack_58 = 0;
      lStack_50 = 0;
      puVar11[0xc] = &PTR_PTR_1132fed50;
      *(undefined1 *)(puVar11 + 0xd) = 0;
      *(undefined1 *)(puVar11 + 0xf) = 0;
      puVar12 = puVar11 + 0xc;
      func_0x0001092ba064(puVar12,puVar11);
      if (((ulong)puVar12 & 1) == 0) {
        FUN_10aad9cb0(puVar11 + 0xe,puVar11 + 9);
        puVar11[0xc] = puVar11[0xe];
        plVar5 = (long *)(puVar11[0xe] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)*(undefined8 *)(puVar11[0xc] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar11 + 0xf) = 1;
          lVar9 = puVar11[0xc];
          plVar5 = (long *)(lVar9 + 0x10);
          plVar7 = (long *)puVar11[3];
          do {
            lVar10 = *plVar5;
            if (lVar10 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                uStack_48 = 0;
                puStack_40 = puVar11;
                plStack_38 = plVar7;
                func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
                *(undefined8 *)(lVar9 + 0x10) = 0;
                goto joined_r0x00010aac6680;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar10 >> 1 & 1) == 0);
        }
        plVar5 = (long *)puVar11[0xc];
        if (((uint)*(undefined8 *)(puVar11[0xc] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10aac6718);
          (*pcVar4)();
        }
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        plVar5 = (long *)puVar11[0xe];
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar11 + 2);
        if (puVar11[0xb] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar5 = (long *)puVar11[9];
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar11 + 2);
        __ZdlPv(puVar11);
      }
joined_r0x00010aac6680:
      if (plVar14 != (long *)0x0) {
        puVar1 = (ulong *)(plVar14 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (lStack_50 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plStack_60 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_60 + 1);
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_60 + 8))();
          }
        }
      }
      if (lStack_68 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar6);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10aac7268; end: 10aac7323;  */

long FUN_10aac7268(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  FUN_10aac3548();
  plVar4 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar4 + 0x10))(plVar4,0);
  FUN_10aae3978(param_1 + 0x208);
  func_0x00010a042d30(param_1 + 0x1c0);
  *(undefined ***)(param_1 + 0x140) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x140);
  func_0x00010aab0284(param_1 + 0x68);
  func_0x00010aae467c((undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  plVar4 = *(long **)(param_1 + 0x28);
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
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_10aade53c(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 8);
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
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10aac7324; end: 10aac7373;  */

int FUN_10aac7324(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0x140);
  func_0x0001096e4e0c(plVar2,0x11382aac8);
  lVar3 = *plVar2;
  if (lVar3 == plVar2[1]) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) == 0) {
        iVar1 = iVar1 + 1;
      }
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != plVar2[1]);
  }
  return iVar1;
}



/* Entry: 10aac7374; end: 10aac74ef;  */

void FUN_10aac7374(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined **ppuStack_90;
  long lStack_88;
  
  puVar3 = param_1;
  func_0x000107c2acec();
  *puVar3 = &PTR_DAT_110b05928;
  pfVar4 = (float *)*param_2;
  pfVar1 = (float *)param_2[1];
  if (pfVar4 != pfVar1) {
    fVar9 = (float)(int)((ulong)param_3 >> 0x20);
    do {
      fVar12 = *pfVar4;
      fVar11 = pfVar4[1];
      fVar8 = pfVar4[2];
      fVar10 = pfVar4[3];
      fVar7 = pfVar4[4];
      func_0x0001096b9ea0(&ppuStack_90);
      func_0x0001096b9f58(&ppuStack_90);
      *(float *)(lStack_88 + 0x10) = fVar12 * (float)(int)param_3;
      *(float *)(lStack_88 + 0x14) = fVar11 * fVar9;
      func_0x0001096b9f58(&ppuStack_90);
      lVar2 = lStack_88;
      fVar8 = fVar8 * (float)(int)param_3;
      fVar10 = fVar10 * fVar9;
      uVar5 = *(ulong *)(lStack_88 + 8);
      uVar6 = uVar5;
      _hypotf(uVar5,uVar5 >> 0x20);
      fVar8 = ((fVar10 * fVar10 + fVar8 * fVar8) / (fVar8 + fVar10)) / (float)uVar6;
      *(ulong *)(lVar2 + 8) = CONCAT44((float)(uVar5 >> 0x20) * fVar8,(float)uVar5 * fVar8);
      func_0x0001096b9f58(&ppuStack_90);
      lVar2 = lStack_88;
      fVar8 = *(float *)(lStack_88 + 8);
      fVar10 = *(float *)(lStack_88 + 0xc);
      _hypotf();
      ___sincosf_stret();
      *(float *)(lVar2 + 8) = fVar10 * fVar8;
      *(float *)(lVar2 + 0xc) = fVar7 * fVar8;
      func_0x0001096985c0(param_1[1] + 8,&ppuStack_90);
      ppuStack_90 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppuStack_90);
      pfVar4 = pfVar4 + 5;
    } while (pfVar4 != pfVar1);
  }
  return;
}



/* Entry: 10aac74f0; end: 10aac7537;  */

undefined8 * FUN_10aac74f0(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  *param_1 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1);
  return param_1;
}



/* Entry: 10aac7538; end: 10aac75a7;  */

void FUN_10aac7538(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x148) + -0x20;
  func_0x0001096966c0(lVar1,uRam000000011382aa98);
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x28) == 0)) {
    FUN_10aac7324();
    if (((int)param_1 < param_2) && (0 < (int)param_1)) {
      func_0x00010a505604();
    }
  }
  return;
}



/* Entry: 10aac75a8; end: 10aac828f;  */

void FUN_10aac75a8(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 ****ppppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined8 ****ppppuStack_288;
  undefined **ppuStack_280;
  undefined7 uStack_278;
  char cStack_271;
  long *plStack_270;
  long *plStack_268;
  undefined2 uStack_25c;
  undefined1 uStack_25a;
  undefined8 ****ppppuStack_258;
  long lStack_250;
  undefined7 uStack_248;
  char cStack_241;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  long *plStack_228;
  code *pcStack_200;
  undefined **ppuStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int iStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  byte bStack_1a4;
  undefined2 uStack_1a3;
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 ****ppppuStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_1;
  FUN_10ad055a0();
  if ((int)lVar15 == 0) {
LAB_10aac7620:
    cVar1 = *(char *)(param_4 + 0x20);
    plVar9 = *(long **)(param_1 + 0x58);
    (**(code **)(*plVar9 + 8))(plVar9,cVar1 == '\0',*(undefined8 *)(param_4 + 0x24));
    if ((int)plVar9 != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x58);
      (**(code **)*puVar10)();
      iVar7 = (int)puVar10;
      if (iVar7 != 0) {
        FUN_10ad055a0();
        if (iVar7 != 0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
          (*(code *)PTR___tlv_bootstrap_11340dfd8)();
          if (*ppuVar8 == (undefined *)0x0) {
            ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
            (*(code *)PTR___tlv_bootstrap_11340dd98)();
            plVar9 = (long *)*ppuVar8;
            if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
            goto LAB_10aac768c;
            plVar9 = plVar9 + 7;
          }
          else {
            plVar9 = (long *)(*ppuVar8 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppuStack_2b0,&UNK_10f68ddf2);
            func_0x000107c2b054(&ppppuStack_258,&UNK_10f68da37);
            if (uStack_2a0 < 0) {
              ppppuStack_120 = (undefined8 ****)"null";
              if (ppuStack_2a8 != (undefined **)0x0) {
                ppppuStack_120 = ppppuStack_2b0;
              }
            }
            else {
              ppppuStack_120 = (undefined8 ****)"null";
              if (uStack_2a0._7_1_ != '\0') {
                ppppuStack_120 = &ppppuStack_2b0;
              }
            }
            if (cStack_241 < '\0') {
              pppppuVar14 = (undefined8 *****)"null";
              if (lStack_250 != 0) {
                pppppuVar14 = (undefined8 *****)ppppuStack_258;
              }
            }
            else {
              pppppuVar14 = (undefined8 *****)"null";
              if (cStack_241 != '\0') {
                pppppuVar14 = &ppppuStack_258;
              }
            }
            fStack_1c0 = SUB84(pppppuVar14,0);
            uStack_1bc = (undefined4)((ulong)pppppuVar14 >> 0x20);
            FUN_10a224324(&ppppuStack_120,&fStack_1c0);
            if (uStack_2a0 < 0) {
              if (ppuStack_2a8 != (undefined **)0x0) {
                func_0x000107c3192c(&ppppuStack_120,ppppuStack_2b0);
                goto LAB_10aac8014;
              }
LAB_10aac7f84:
              uVar13 = 0;
              ppppuStack_120 = (undefined8 ****)((ulong)ppppuStack_120 & 0xffffffffffffff00);
            }
            else {
              if (uStack_2a0._7_1_ == '\0') goto LAB_10aac7f84;
              ppuStack_118 = ppuStack_2a8;
              ppppuStack_120 = ppppuStack_2b0;
              lStack_110 = uStack_2a0;
LAB_10aac8014:
              uVar13 = 1;
            }
            uStack_108 = CONCAT71(uStack_108._1_7_,uVar13);
            if (cStack_241 < '\0') {
              if (lStack_250 != 0) {
                func_0x000107c3192c(&fStack_1c0,ppppuStack_258);
                goto LAB_10aac80a4;
              }
LAB_10aac8040:
              uVar13 = 0;
              fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
            }
            else {
              if (cStack_241 == '\0') goto LAB_10aac8040;
              uStack_1b8 = (undefined4)lStack_250;
              iStack_1b4 = (int)((ulong)lStack_250 >> 0x20);
              fStack_1c0 = SUB84(ppppuStack_258,0);
              uStack_1bc = (undefined4)((ulong)ppppuStack_258 >> 0x20);
              fStack_1b0 = (float)uStack_248;
              uStack_1ac = (undefined4)(CONCAT17(cStack_241,uStack_248) >> 0x20);
LAB_10aac80a4:
              uVar13 = 1;
            }
            uStack_1a8 = CONCAT31(uStack_1a8._1_3_,uVar13);
            FUN_10a234a0c(&ppppuStack_120,&fStack_1c0);
            goto LAB_10aac80e0;
          }
        }
LAB_10aac768c:
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        lStack_110 = 0;
        ppppuStack_120 = (undefined8 *****)0x10aad5010;
        ppuStack_118 = &PTR_DAT_110950c70;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        pcStack_e0 = FUN_10aad5004;
        ppuStack_d8 = &PTR_DAT_110950c70;
        plStack_90 = (long *)0x0;
        uStack_a0 = 0;
        uStack_98 = 0;
        piVar11 = (int *)0x1138355a0;
        FUN_10a08fec0();
        if (*piVar11 == 0) {
          plVar9 = (long *)param_3[1];
          plStack_130 = (long *)param_3[1];
          lStack_138 = *param_3;
          if (plVar9 != (long *)0x0) {
            plVar12 = plVar9 + 1;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_1a8 = 0;
          bStack_1a4 = 0;
          uStack_1a3 = 0;
          uStack_1a1 = 0;
          fStack_1b0 = 0.0;
          uStack_1ac = 0;
          fStack_1c0 = 1.668941e-32;
          uStack_1bc = 1;
          uStack_1b8 = 0x10950c70;
          iStack_1b4 = 1;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          pcStack_180 = FUN_10aad5004;
          ppuStack_178 = &PTR_DAT_110950c70;
          uStack_140 = 0;
          if (plVar9 != (long *)0x0) {
            plVar12 = plVar9 + 1;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          func_0x00010aab89a0(&ppppuStack_120,&fStack_1c0);
          plVar12 = plStack_130;
          if (plStack_130 != (long *)0x0) {
            plVar17 = plStack_130 + 1;
            do {
              lVar15 = *plVar17;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar5) {
                *plVar17 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_130 + 0x10))(plStack_130);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          (*(code *)*ppuStack_178)(&ppuStack_178);
          (**(code **)CONCAT44(iStack_1b4,uStack_1b8))(&uStack_1b8);
          if (plVar9 != (long *)0x0) {
            plVar12 = plVar9 + 1;
            do {
              lVar15 = *plVar12;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          if (*param_3 == 0) {
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_1a8 = 0;
            bStack_1a4 = 0;
            uStack_1a3 = 0;
            uStack_1a1 = 0;
            fStack_1b0 = 0.0;
            uStack_1ac = 0;
            fStack_1c0 = 1.668941e-32;
            uStack_1bc = 1;
            uStack_1b8 = 0x10950c70;
            iStack_1b4 = 1;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            pcStack_180 = FUN_10aad5004;
            ppuStack_178 = &PTR_DAT_110950c70;
            lStack_138 = 0;
            plStack_130 = (long *)0x0;
            uStack_140 = param_2;
            func_0x00010aab89a0(&ppppuStack_120,&fStack_1c0);
            plVar9 = plStack_130;
            if (plStack_130 != (long *)0x0) {
              plVar12 = plStack_130 + 1;
              do {
                lVar15 = *plVar12;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar5) {
                  *plVar12 = lVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_130 + 0x10))(plStack_130);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
              }
            }
            (*(code *)*ppuStack_178)(&ppuStack_178);
            (**(code **)CONCAT44(iStack_1b4,uStack_1b8))(&uStack_1b8);
          }
        }
        else {
          plVar9 = (long *)param_3[1];
          plStack_130 = (long *)param_3[1];
          lStack_138 = *param_3;
          if (plVar9 != (long *)0x0) {
            plVar12 = plVar9 + 1;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_1a8 = 0;
          bStack_1a4 = 0;
          uStack_1a3 = 0;
          uStack_1a1 = 0;
          fStack_1b0 = 0.0;
          uStack_1ac = 0;
          fStack_1c0 = 1.668941e-32;
          uStack_1bc = 1;
          uStack_1b8 = 0x10950c70;
          iStack_1b4 = 1;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          pcStack_180 = FUN_10aad5004;
          ppuStack_178 = &PTR_DAT_110950c70;
          if (plVar9 != (long *)0x0) {
            plVar12 = plVar9 + 1;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          uStack_140 = param_2;
          func_0x00010aab89a0(&ppppuStack_120,&fStack_1c0);
          plVar12 = plStack_130;
          if (plStack_130 != (long *)0x0) {
            plVar17 = plStack_130 + 1;
            do {
              lVar15 = *plVar17;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar5) {
                *plVar17 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_130 + 0x10))(plStack_130);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          (*(code *)*ppuStack_178)(&ppuStack_178);
          (**(code **)CONCAT44(iStack_1b4,uStack_1b8))(&uStack_1b8);
          if (plVar9 != (long *)0x0) {
            plVar12 = plVar9 + 1;
            do {
              lVar15 = *plVar12;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
        }
        uVar19 = *(undefined8 *)(param_4 + 4);
        iVar7 = *(int *)(param_4 + 0xc);
        uVar20 = *(undefined8 *)(param_4 + 0x14);
        bVar2 = *(byte *)(param_4 + 0x1c);
        uStack_25c = *(undefined2 *)(param_4 + 0x1d);
        uStack_25a = *(undefined1 *)(param_4 + 0x1f);
        fVar23 = *(float *)(param_4 + 0x2c);
        uVar16 = *(undefined8 *)(param_4 + 0x24);
        plVar9 = *(long **)(param_1 + 0x58);
        (**(code **)(*plVar9 + 0x20))();
        fVar21 = (float)(int)plVar9 / (fVar23 * (float)(int)((ulong)uVar16 >> 0x20));
        if ((iVar7 < 2) && ((bVar2 & 1) == 0)) {
          piVar11 = (int *)0x1138355a0;
          FUN_10a08fec0();
          if (*piVar11 != 0) goto LAB_10aac7a14;
        }
        else {
LAB_10aac7a14:
          fVar21 = fVar21 * 1.5;
        }
        fVar22 = 1.0;
        if (fVar21 <= 1.0) {
          fVar22 = fVar21;
        }
        cVar3 = *(char *)(param_4 + 0x21);
        plVar9 = (long *)0x20;
        __Znwm();
        plVar17 = plVar9 + 1;
        *plVar17 = 0;
        plVar9[2] = 0;
        *plVar9 = (long)&PTR_DAT_110c44600;
        puVar10 = (undefined8 *)0xb8;
        __Znwm();
        plVar18 = plVar9 + 3;
        *plVar18 = (long)puVar10;
        fStack_1c0 = fVar23 * fVar22;
        puVar10[2] = 0;
        puVar10[3] = 0x32aaaba7;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0x3cb0b1bb;
        puVar10[0xd] = 0;
        puVar10[0xc] = 0;
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        *(undefined8 *)((long)puVar10 + 0x84) = 0;
        *(undefined8 *)((long)puVar10 + 0x7c) = 0;
        *puVar10 = &PTR_FUN_110c44650;
        puVar10[1] = 0;
        plVar12 = *(long **)(param_1 + 0x58);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uStack_2a0 = *(long *)(param_4 + 0x24);
        ppuStack_2a8 = (undefined **)0x0;
        pcStack_200 = FUN_10aae4960;
        ppuStack_1f8 = &PTR_FUN_110c44688;
        ppppuStack_2b0 = (undefined8 *****)0x0;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pcStack_240 = FUN_10aae4bb8;
        ppuStack_238 = &PTR_FUN_110c446a8;
        ppppuStack_258 = (undefined8 *****)0x0;
        lStack_250 = 0;
        uStack_1bc = (undefined4)uVar19;
        uStack_1b8 = (undefined4)((ulong)uVar19 >> 0x20);
        uStack_1ac = (undefined4)uVar20;
        uStack_1a8 = (undefined4)((ulong)uVar20 >> 0x20);
        uStack_1a3 = uStack_25c;
        uStack_1a1 = uStack_25a;
        plStack_270 = plVar18;
        plStack_268 = plVar9;
        plStack_230 = plVar18;
        plStack_228 = plVar9;
        plStack_1f0 = plVar18;
        plStack_1e8 = plVar9;
        lStack_1e0 = uStack_2a0;
        iStack_1b4 = iVar7;
        fStack_1b0 = fVar22;
        bStack_1a4 = bVar2;
        (**(code **)(*plVar12 + 0x18))
                  (plVar12,&ppppuStack_120,cVar3 != '\0',&pcStack_200,&pcStack_240,&fStack_1c0,
                   cVar1 == '\0');
        (*(code *)*ppuStack_238)(&ppuStack_238);
        (*(code *)*ppuStack_1f8)(&ppuStack_1f8);
        lVar15 = *plVar18;
        if (lVar15 == 0) {
          FUN_10a0843f8(3);
          goto LAB_10aac80e0;
        }
        FUN_10a085024(lVar15);
        plVar9 = *(long **)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar15;
        if (plVar9 != (long *)0x0) {
          plVar12 = plVar9 + 1;
          do {
            lVar15 = *plVar12;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
        *(long **)(param_1 + 0x30) = plVar9;
        FUN_10ad055a0();
        if ((int)plVar9 != 0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
          (*(code *)PTR___tlv_bootstrap_11340dfd8)();
          if (*ppuVar8 == (undefined *)0x0) {
            ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
            (*(code *)PTR___tlv_bootstrap_11340dd98)();
            plVar9 = (long *)*ppuVar8;
            if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
            goto LAB_10aac7c08;
            plVar9 = plVar9 + 7;
          }
          else {
            plVar9 = (long *)(*ppuVar8 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppuStack_258,&UNK_10f68de14);
            func_0x000107c2b054(&ppppuStack_288,&UNK_10f68da37);
            ppppuStack_2b0 = (undefined8 ****)0x10f29b0c6;
            pppppuVar14 = (undefined8 *****)ppppuStack_2b0;
            if (cStack_241 < '\0') {
              if (lStack_250 != 0) {
                pppppuVar14 = (undefined8 *****)ppppuStack_258;
              }
            }
            else if (cStack_241 != '\0') {
              pppppuVar14 = &ppppuStack_258;
            }
            fStack_1c0 = SUB84(pppppuVar14,0);
            uStack_1bc = (undefined4)((ulong)pppppuVar14 >> 0x20);
            if (cStack_271 < '\0') {
              if (ppuStack_280 != (undefined **)0x0) {
                ppppuStack_2b0 = ppppuStack_288;
              }
            }
            else if (cStack_271 != '\0') {
              ppppuStack_2b0 = &ppppuStack_288;
            }
            FUN_10a224324(&fStack_1c0,&ppppuStack_2b0);
            if (cStack_241 < '\0') {
              if (lStack_250 != 0) {
                func_0x000107c3192c(&fStack_1c0,ppppuStack_258);
                goto LAB_10aac805c;
              }
LAB_10aac7ff8:
              uVar13 = 0;
              fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
            }
            else {
              if (cStack_241 == '\0') goto LAB_10aac7ff8;
              uStack_1b8 = (undefined4)lStack_250;
              iStack_1b4 = (int)((ulong)lStack_250 >> 0x20);
              fStack_1c0 = SUB84(ppppuStack_258,0);
              uStack_1bc = (undefined4)((ulong)ppppuStack_258 >> 0x20);
              fStack_1b0 = (float)uStack_248;
              uStack_1ac = (undefined4)(CONCAT17(cStack_241,uStack_248) >> 0x20);
LAB_10aac805c:
              uVar13 = 1;
            }
            uStack_1a8 = CONCAT31(uStack_1a8._1_3_,uVar13);
            if (cStack_271 < '\0') {
              if (ppuStack_280 != (undefined **)0x0) {
                func_0x000107c3192c(&ppppuStack_2b0,ppppuStack_288);
                goto LAB_10aac80cc;
              }
LAB_10aac8088:
              uStack_298 = 0;
              ppppuStack_2b0 = (undefined8 ****)((ulong)ppppuStack_2b0 & 0xffffffffffffff00);
            }
            else {
              if (cStack_271 == '\0') goto LAB_10aac8088;
              ppuStack_2a8 = ppuStack_280;
              ppppuStack_2b0 = ppppuStack_288;
              uStack_2a0 = CONCAT17(cStack_271,uStack_278);
LAB_10aac80cc:
              uStack_298 = 1;
            }
            FUN_10a234a0c(&fStack_1c0,&ppppuStack_2b0);
            goto LAB_10aac80e0;
          }
        }
LAB_10aac7c08:
        plVar9 = plStack_268;
        if (plStack_268 != (long *)0x0) {
          plVar12 = plStack_268 + 1;
          do {
            lVar15 = *plVar12;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_268 + 0x10))(plStack_268);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar12 = plStack_90 + 1;
          do {
            lVar15 = *plVar12;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        (*(code *)*ppuStack_d8)(&ppuStack_d8);
        (*(code *)*ppuStack_118)(&ppuStack_118);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar9 = (long *)*ppuVar8;
      if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
      goto LAB_10aac7620;
      plVar9 = plVar9 + 7;
    }
    else {
      plVar9 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) goto LAB_10aac7620;
  }
  func_0x000107c2b054(&ppppuStack_2b0,&UNK_10f68ddda);
  func_0x000107c2b054(&ppppuStack_258,&UNK_10f68da37);
  if (uStack_2a0 < 0) {
    ppppuStack_120 = (undefined8 ****)"null";
    if (ppuStack_2a8 != (undefined **)0x0) {
      ppppuStack_120 = ppppuStack_2b0;
    }
  }
  else {
    ppppuStack_120 = (undefined8 ****)"null";
    if (uStack_2a0._7_1_ != '\0') {
      ppppuStack_120 = &ppppuStack_2b0;
    }
  }
  if (cStack_241 < '\0') {
    pppppuVar14 = (undefined8 *****)"null";
    if (lStack_250 != 0) {
      pppppuVar14 = (undefined8 *****)ppppuStack_258;
    }
  }
  else {
    pppppuVar14 = (undefined8 *****)"null";
    if (cStack_241 != '\0') {
      pppppuVar14 = &ppppuStack_258;
    }
  }
  fStack_1c0 = SUB84(pppppuVar14,0);
  uStack_1bc = (undefined4)((ulong)pppppuVar14 >> 0x20);
  FUN_10a224324(&ppppuStack_120,&fStack_1c0);
  if (uStack_2a0 < 0) {
    if (ppuStack_2a8 != (undefined **)0x0) {
      func_0x000107c3192c(&ppppuStack_120,ppppuStack_2b0);
      goto LAB_10aac7ea4;
    }
LAB_10aac7e88:
    uVar13 = 0;
    ppppuStack_120 = (undefined8 ****)((ulong)ppppuStack_120 & 0xffffffffffffff00);
  }
  else {
    if (uStack_2a0._7_1_ == '\0') goto LAB_10aac7e88;
    ppuStack_118 = ppuStack_2a8;
    ppppuStack_120 = ppppuStack_2b0;
    lStack_110 = uStack_2a0;
LAB_10aac7ea4:
    uVar13 = 1;
  }
  uStack_108 = CONCAT71(uStack_108._1_7_,uVar13);
  if (cStack_241 < '\0') {
    if (lStack_250 != 0) {
      func_0x000107c3192c(&fStack_1c0,ppppuStack_258);
      goto LAB_10aac7eec;
    }
LAB_10aac7ed0:
    uVar13 = 0;
    fStack_1c0 = (float)((uint)fStack_1c0 & 0xffffff00);
  }
  else {
    if (cStack_241 == '\0') goto LAB_10aac7ed0;
    uStack_1b8 = (undefined4)lStack_250;
    iStack_1b4 = (int)((ulong)lStack_250 >> 0x20);
    fStack_1c0 = SUB84(ppppuStack_258,0);
    uStack_1bc = (undefined4)((ulong)ppppuStack_258 >> 0x20);
    fStack_1b0 = (float)uStack_248;
    uStack_1ac = (undefined4)(CONCAT17(cStack_241,uStack_248) >> 0x20);
LAB_10aac7eec:
    uVar13 = 1;
  }
  uStack_1a8 = CONCAT31(uStack_1a8._1_3_,uVar13);
  FUN_10a234a0c(&ppppuStack_120,&fStack_1c0);
LAB_10aac80e0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aac80e4);
  (*pcVar6)();
}



/* Entry: 10aac8290; end: 10aac833f;  */

void FUN_10aac8290(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined **ppuStack_40;
  long lStack_38;
  
  uVar3 = 0x10;
  __Znwm();
  lStack_38 = *(long *)(param_2 + 8);
  if (lStack_38 != 0) {
    piVar4 = (int *)(lStack_38 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110b01050;
  func_0x0001096b019c(uVar3,&ppuStack_40);
  *param_1 = uVar3;
  ppuStack_40 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 10aac8340; end: 10aac844b;  */

void FUN_10aac8340(undefined8 *param_1)

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



/* Entry: 10aac844c; end: 10aac8503;  */

void FUN_10aac844c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_SUB_110ba84d0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar2 = *(long *)(param_2 + 8);
  uVar6 = *(undefined8 *)(lVar2 + 0x48);
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  uVar4 = *(undefined8 *)(lVar2 + 0x58);
  uVar3 = *(undefined8 *)(lVar2 + 0x50);
  uVar7 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)((long)param_1 + 0xc) = uVar7;
  *(undefined8 *)((long)param_1 + 0x24) = uVar6;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x34) = uVar4;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar3;
  lVar1 = (long)*(int *)(*(long *)(lVar2 + 0x10) + 0x14);
  lVar2 = *(long *)(lVar2 + 0x18) +
          (long)(int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 2) * 4 +
          lVar1 * -4;
  FUN_10aada134(param_1 + 8,lVar2,lVar2 + ((lVar1 << 0x20) >> 0x1e));
  lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x18);
  FUN_10aada134(param_1 + 0xb,lVar2,
                lVar2 + (((long)*(int *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + 0x10) << 0x20)
                        >> 0x1e));
  FUN_10a14d0b4(param_1);
  return;
}



/* Entry: 10aac8504; end: 10aac861f;  */

void FUN_10aac8504(undefined8 param_1)

{
  undefined1 uStack_99;
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
  puStack_98 = &UNK_10f68df30;
  uStack_78 = 0xffffffff00000002;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000110;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aac8620(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68df39;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000110;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10aac8678(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68df3e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000110;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 2;
  FUN_10aac8678(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10aac8620; end: 10aac8677;  */

ulong FUN_10aac8620(ulong param_1,undefined8 *param_2)

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



/* Entry: 10aac8678; end: 10aac86cf;  */

ulong FUN_10aac8678(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10aae4ec0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10aac86d0; end: 10aac8887;  */

void FUN_10aac86d0(ulong param_1)

{
  ulong uVar1;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "FingerType";
  uStack_68 = 0xffffffff00000002;
  uStack_70 = 0x40000000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Thumb";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aac8888(param_1,&pcStack_88,1);
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Index";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aac8888();
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Middle";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aac8888();
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Ring";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aac8888();
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Pinky";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aac8888();
  FUN_10a003ff4();
  return;
}



/* Entry: 10aac8888; end: 10aac892f;  */

undefined8 * FUN_10aac8888(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aac8930);
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



/* Entry: 10aac8930; end: 10aac9b5f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10aac8930(long param_1,long *param_2,undefined8 param_3,undefined *param_4,
                    undefined8 param_5,undefined8 param_6,undefined *param_7,long **param_8)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long **pplVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  long lVar16;
  long *plVar17;
  long ******pppppplVar18;
  undefined **ppuVar19;
  ulong uVar20;
  undefined **ppuVar21;
  ulong uVar22;
  ulong uVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  long ******pppppplVar28;
  ulong uVar29;
  ulong *puVar30;
  long ******pppppplVar31;
  long *******ppppppplVar32;
  undefined **ppuVar33;
  long *******ppppppplVar34;
  ulong uVar35;
  undefined8 *puVar36;
  undefined *puVar37;
  ulong uVar38;
  long ******pppppplVar39;
  ulong unaff_x26;
  undefined **ppuVar40;
  long ******pppppplVar41;
  undefined **ppuVar42;
  long lVar43;
  ulong uStack_248;
  undefined1 auStack_240 [8];
  long lStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  ulong uStack_210;
  long lStack_208;
  long lStack_200;
  ulong uStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  float fStack_1e0;
  long lStack_1d0;
  long ******pppppplStack_1c8;
  long *******ppppppplStack_1c0;
  ulong uStack_1b8;
  float fStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  long **pplStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)param_2[2];
  if (plVar11 == (long *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = 0;
    do {
      uVar22 = plVar11[2] | uVar22;
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  pppppplStack_1c8 = (long ******)0x0;
  lStack_1d0 = 0;
  uStack_1b8 = 0;
  ppppppplStack_1c0 = (long *******)0x0;
  fStack_1b0 = 1.0;
  uStack_1f8 = 0;
  lStack_200 = 0;
  lStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  fStack_1e0 = *(float *)(param_2 + 4);
  uStack_1a0 = param_6;
  uStack_198 = param_5;
  uStack_190 = param_3;
  FUN_10a52f010(&lStack_200,param_2[1]);
  plVar11 = (long *)param_2[2];
  if (plVar11 != (long *)0x0) {
    do {
      uVar35 = uStack_1f8;
      uVar38 = plVar11[2];
      if (uStack_1f8 != 0) {
        uVar12 = uStack_1f8 - 1;
        if ((uStack_1f8 & uVar12) == 0) {
          unaff_x26 = uVar12 & uVar38;
        }
        else {
          unaff_x26 = uVar38;
          if (uStack_1f8 <= uVar38) {
            uVar23 = 0;
            if (uStack_1f8 != 0) {
              uVar23 = uVar38 / uStack_1f8;
            }
            unaff_x26 = uVar38 - uVar23 * uStack_1f8;
          }
        }
        plVar17 = *(long **)(lStack_200 + unaff_x26 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10aac8a6c;
              uVar23 = plVar17[1];
              if (uVar23 != uVar38) break;
              if (plVar17[2] == uVar38) goto LAB_10aac8ba8;
            }
            if ((uStack_1f8 & uVar12) == 0) {
              uVar23 = uVar23 & uVar12;
            }
            else if (uStack_1f8 <= uVar23) {
              uVar29 = 0;
              if (uStack_1f8 != 0) {
                uVar29 = uVar23 / uStack_1f8;
              }
              uVar23 = uVar23 - uVar29 * uStack_1f8;
            }
          } while (uVar23 == unaff_x26);
        }
      }
LAB_10aac8a6c:
      plVar17 = (long *)0x28;
      __Znwm();
      uStack_160 = 1;
      *plVar17 = 0;
      plVar17[1] = uVar38;
      plVar17[2] = plVar11[2];
      lVar16 = plVar11[4];
      lVar43 = plVar11[3];
      plVar17[4] = plVar11[4];
      plVar17[3] = lVar43;
      if (lVar16 != 0) {
        plVar13 = (long *)(lVar16 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_170 = plVar17;
      plStack_168 = &lStack_200;
      if ((uVar35 == 0) || (fStack_1e0 * (float)uVar35 < (float)(lStack_1e8 + 1))) {
        uVar12 = 1;
        if (2 < uVar35) {
          uVar12 = (ulong)((uVar35 & uVar35 - 1) != 0);
        }
        uVar12 = uVar12 | uVar35 << 1;
        uVar35 = (ulong)((float)(lStack_1e8 + 1) / fStack_1e0);
        if (uVar12 <= uVar35) {
          uVar12 = uVar35;
        }
        FUN_10a52f010(&lStack_200,uVar12);
        uVar35 = uStack_1f8;
        if ((uStack_1f8 & uStack_1f8 - 1) == 0) {
          unaff_x26 = uStack_1f8 - 1 & uVar38;
        }
        else {
          unaff_x26 = uVar38;
          if (uStack_1f8 <= uVar38) {
            uVar12 = 0;
            if (uStack_1f8 != 0) {
              uVar12 = uVar38 / uStack_1f8;
            }
            unaff_x26 = uVar38 - uVar12 * uStack_1f8;
          }
        }
      }
      plVar13 = *(long **)(lStack_200 + unaff_x26 * 8);
      if (plVar13 == (long *)0x0) {
        *plVar17 = (long)plStack_1f0;
        *(long ***)(lStack_200 + unaff_x26 * 8) = &plStack_1f0;
        plStack_1f0 = plVar17;
        if (*plVar17 != 0) {
          uVar38 = *(ulong *)(*plVar17 + 8);
          if ((uVar35 & uVar35 - 1) == 0) {
            uVar38 = uVar38 & uVar35 - 1;
          }
          else if (uVar35 <= uVar38) {
            uVar12 = 0;
            if (uVar35 != 0) {
              uVar12 = uVar38 / uVar35;
            }
            uVar38 = uVar38 - uVar12 * uVar35;
          }
          plVar13 = (long *)(lStack_200 + uVar38 * 8);
          goto LAB_10aac8b98;
        }
      }
      else {
        *plVar17 = *plVar13;
LAB_10aac8b98:
        *plVar13 = (long)plVar17;
      }
      lStack_1e8 = lStack_1e8 + 1;
LAB_10aac8ba8:
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  if (plStack_1f0 != (long *)0x0) {
    plVar11 = plStack_1f0;
    do {
      plVar17 = (long *)plVar11[3];
      (**(code **)(*plVar17 + 0x48))(plVar17,param_7);
      uVar35 = uStack_1f8;
      lVar16 = lStack_200;
      if (plVar17 != (long *)0x0) {
        pppppplVar41 = (long ******)0x0;
        do {
          pppppplVar31 = (long ******)((ulong)plVar17 & -(long)plVar17);
          lVar6 = lVar16;
          FUN_10aae4f7c(lVar16,uVar35,pppppplVar31);
          pppppplVar28 = pppppplStack_1c8;
          lVar43 = lStack_1d0;
          pppppplVar39 = (long ******)0x0;
          if (lVar6 != 0) {
            pppppplVar39 = pppppplVar31;
          }
          pppppplVar41 = (long ******)((ulong)pppppplVar39 | (ulong)pppppplVar41);
          plVar17 = (long *)((long)plVar17 - 1U & (ulong)plVar17);
        } while (plVar17 != (long *)0x0);
        pppppplVar39 = (long ******)plVar11[2];
        lVar16 = lStack_1d0;
        FUN_10aae51a0(lStack_1d0,pppppplStack_1c8,pppppplVar39);
        if (lVar16 == 0) {
          if (pppppplVar28 != (long ******)0x0) {
            uVar35 = (long)pppppplVar28 - 1;
            if (((ulong)pppppplVar28 & uVar35) == 0) {
              pppppplVar31 = (long ******)(uVar35 & (ulong)pppppplVar39);
            }
            else {
              pppppplVar31 = pppppplVar39;
              if (pppppplVar28 <= pppppplVar39) {
                uVar38 = 0;
                if (pppppplVar28 != (long ******)0x0) {
                  uVar38 = (ulong)pppppplVar39 / (ulong)pppppplVar28;
                }
                pppppplVar31 = (long ******)((long)pppppplVar39 - uVar38 * (long)pppppplVar28);
              }
            }
            puVar36 = *(undefined8 **)(lVar43 + (long)pppppplVar31 * 8);
            if (puVar36 != (undefined8 *)0x0) {
              for (ppppppplVar34 = (long *******)*puVar36; ppppppplVar34 != (long *******)0x0;
                  ppppppplVar34 = (long *******)*ppppppplVar34) {
                pppppplVar18 = ppppppplVar34[1];
                if (pppppplVar18 == pppppplVar39) {
                  if (ppppppplVar34[2] == pppppplVar39) goto LAB_10aac8f44;
                }
                else {
                  if (((ulong)pppppplVar28 & uVar35) == 0) {
                    pppppplVar18 = (long ******)((ulong)pppppplVar18 & uVar35);
                  }
                  else if (pppppplVar28 <= pppppplVar18) {
                    uVar38 = 0;
                    if (pppppplVar28 != (long ******)0x0) {
                      uVar38 = (ulong)pppppplVar18 / (ulong)pppppplVar28;
                    }
                    pppppplVar18 = (long ******)((long)pppppplVar18 - uVar38 * (long)pppppplVar28);
                  }
                  if (pppppplVar18 != pppppplVar31) break;
                }
              }
            }
          }
          ppppppplVar34 = (long *******)0x20;
          __Znwm();
          *ppppppplVar34 = (long ******)0x0;
          ppppppplVar34[1] = pppppplVar39;
          ppppppplVar34[2] = (long ******)plVar11[2];
          ppppppplVar34[3] = (long ******)0x0;
          if ((pppppplVar28 == (long ******)0x0) ||
             (fStack_1b0 * (float)pppppplVar28 < (float)(uStack_1b8 + 1))) {
            uVar35 = 1;
            if ((long ******)0x2 < pppppplVar28) {
              uVar35 = (ulong)(((ulong)pppppplVar28 & (long)pppppplVar28 - 1U) != 0);
            }
            pppppplVar31 = (long ******)(uVar35 | (long)pppppplVar28 << 1);
            pppppplVar18 = (long ******)(long)((float)(uStack_1b8 + 1) / fStack_1b0);
            if (pppppplVar31 <= pppppplVar18) {
              pppppplVar31 = pppppplVar18;
            }
            pppppplVar18 = pppppplVar28;
            if ((long)pppppplVar31 - 1U == 0) {
              pppppplVar31 = (long ******)0x2;
            }
            else if (((ulong)pppppplVar31 & (long)pppppplVar31 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
              pppppplVar18 = pppppplStack_1c8;
            }
            pppppplVar28 = pppppplVar31;
            if (pppppplVar18 < pppppplVar31) {
LAB_10aac8d64:
              if ((ulong)pppppplVar28 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10aac9ab8;
              }
              lVar16 = (long)pppppplVar28 << 3;
              __Znwm();
              bVar3 = lStack_1d0 != 0;
              lStack_1d0 = lVar16;
              if (bVar3) {
                __ZdlPv();
              }
              pppppplVar31 = (long ******)0x0;
              do {
                *(undefined8 *)(lStack_1d0 + (long)pppppplVar31 * 8) = 0;
                pppppplVar31 = (long ******)((long)pppppplVar31 + 1);
              } while (pppppplVar28 != pppppplVar31);
              pppppplStack_1c8 = pppppplVar28;
              if (ppppppplStack_1c0 != (long *******)0x0) {
                pppppplVar31 = ppppppplStack_1c0[1];
                uVar35 = (long)pppppplVar28 - 1;
                if (((ulong)pppppplVar28 & uVar35) == 0) {
                  pppppplVar31 = (long ******)((ulong)pppppplVar31 & uVar35);
                }
                else if (pppppplVar28 <= pppppplVar31) {
                  uVar38 = 0;
                  if (pppppplVar28 != (long ******)0x0) {
                    uVar38 = (ulong)pppppplVar31 / (ulong)pppppplVar28;
                  }
                  pppppplVar31 = (long ******)((long)pppppplVar31 - uVar38 * (long)pppppplVar28);
                }
                *(long *********)(lStack_1d0 + (long)pppppplVar31 * 8) = &ppppppplStack_1c0;
                ppppppplVar32 = (long *******)*ppppppplStack_1c0;
                ppppppplVar27 = ppppppplStack_1c0;
                while (ppppppplVar32 != (long *******)0x0) {
                  pppppplVar18 = ppppppplVar32[1];
                  if (((ulong)pppppplVar28 & uVar35) == 0) {
                    pppppplVar18 = (long ******)((ulong)pppppplVar18 & uVar35);
                  }
                  else if (pppppplVar28 <= pppppplVar18) {
                    uVar38 = 0;
                    if (pppppplVar28 != (long ******)0x0) {
                      uVar38 = (ulong)pppppplVar18 / (ulong)pppppplVar28;
                    }
                    pppppplVar18 = (long ******)((long)pppppplVar18 - uVar38 * (long)pppppplVar28);
                  }
                  ppppppplVar26 = ppppppplVar32;
                  if (pppppplVar18 != pppppplVar31) {
                    if (*(long *)(lStack_1d0 + (long)pppppplVar18 * 8) == 0) {
                      *(long ********)(lStack_1d0 + (long)pppppplVar18 * 8) = ppppppplVar27;
                      pppppplVar31 = pppppplVar18;
                    }
                    else {
                      *ppppppplVar27 = *ppppppplVar32;
                      *ppppppplVar32 =
                           (long ******)**(undefined8 **)(lStack_1d0 + (long)pppppplVar18 * 8);
                      **(undefined8 **)(lStack_1d0 + (long)pppppplVar18 * 8) = ppppppplVar32;
                      ppppppplVar26 = ppppppplVar27;
                    }
                  }
                  ppppppplVar27 = ppppppplVar26;
                  ppppppplVar32 = (long *******)*ppppppplVar26;
                }
              }
            }
            else {
              pppppplVar28 = pppppplVar18;
              if (pppppplVar31 < pppppplVar18) {
                pppppplVar28 = (long ******)(long)((float)uStack_1b8 / fStack_1b0);
                if ((pppppplVar18 < (long ******)0x3) ||
                   (((ulong)pppppplVar18 & (long)pppppplVar18 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long ******)0x1 < pppppplVar28) {
                  pppppplVar28 = (long ******)(1L << (-LZCOUNT((long)pppppplVar28 + -1) & 0x3fU));
                }
                lVar16 = lStack_1d0;
                if (pppppplVar31 <= pppppplVar28) {
                  pppppplVar31 = pppppplVar28;
                }
                pppppplVar28 = pppppplStack_1c8;
                if (pppppplVar31 < pppppplVar18) {
                  pppppplVar28 = pppppplVar31;
                  if (pppppplVar31 != (long ******)0x0) goto LAB_10aac8d64;
                  lStack_1d0 = 0;
                  if (lVar16 != 0) {
                    __ZdlPv();
                  }
                  pppppplStack_1c8 = (long ******)0x0;
                  pppppplVar28 = (long ******)0x0;
                }
              }
            }
            if (((ulong)pppppplVar28 & (long)pppppplVar28 - 1U) == 0) {
              pppppplVar31 = (long ******)((long)pppppplVar28 - 1U & (ulong)pppppplVar39);
            }
            else {
              pppppplVar31 = pppppplVar39;
              if (pppppplVar28 <= pppppplVar39) {
                uVar35 = 0;
                if (pppppplVar28 != (long ******)0x0) {
                  uVar35 = (ulong)pppppplVar39 / (ulong)pppppplVar28;
                }
                pppppplVar31 = (long ******)((long)pppppplVar39 - uVar35 * (long)pppppplVar28);
              }
            }
          }
          puVar36 = *(undefined8 **)(lStack_1d0 + (long)pppppplVar31 * 8);
          if (puVar36 == (undefined8 *)0x0) {
            *ppppppplVar34 = (long ******)ppppppplStack_1c0;
            *(long *********)(lStack_1d0 + (long)pppppplVar31 * 8) = &ppppppplStack_1c0;
            ppppppplStack_1c0 = ppppppplVar34;
            if (*ppppppplVar34 != (long ******)0x0) {
              pppppplVar39 = (long ******)(*ppppppplVar34)[1];
              if (((ulong)pppppplVar28 & (long)pppppplVar28 - 1U) == 0) {
                pppppplVar39 = (long ******)((ulong)pppppplVar39 & (long)pppppplVar28 - 1U);
              }
              else if (pppppplVar28 <= pppppplVar39) {
                uVar35 = 0;
                if (pppppplVar28 != (long ******)0x0) {
                  uVar35 = (ulong)pppppplVar39 / (ulong)pppppplVar28;
                }
                pppppplVar39 = (long ******)((long)pppppplVar39 - uVar35 * (long)pppppplVar28);
              }
              puVar36 = (undefined8 *)(lStack_1d0 + (long)pppppplVar39 * 8);
              goto LAB_10aac8f34;
            }
          }
          else {
            *ppppppplVar34 = (long ******)*puVar36;
LAB_10aac8f34:
            *puVar36 = ppppppplVar34;
          }
          uStack_1b8 = uStack_1b8 + 1;
LAB_10aac8f44:
          ppppppplVar34[3] = pppppplVar41;
        }
        else {
          *(ulong *)(lVar16 + 0x18) = *(ulong *)(lVar16 + 0x18) | (ulong)pppppplVar41;
        }
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  iVar5 = (int)&lStack_200;
  FUN_10a52ecec();
  ppuStack_218 = (undefined **)0x0;
  ppuStack_220 = (undefined **)0x0;
  lStack_208 = 0;
  uStack_210 = 0;
  ppuStack_228 = (undefined **)0x0;
  ppuStack_230 = (undefined **)0x0;
  FUN_10ad055a0();
  if ((iVar5 == 0) || (pplVar7 = param_8, (*(code *)(*param_8)[3])(), pplVar7 == (long **)0x0)) {
    ppuStack_b8 = (undefined **)(param_1 + 8);
    ppuStack_b0 = (undefined **)&UNK_1053a6a3c;
    ppuStack_a8 = &PTR_DAT_110ae9180;
    func_0x000109d18d1c(&plStack_170,&UNK_10f68e392,0x19,&ppuStack_b8);
  }
  else {
    ppuStack_b8 = (undefined **)(param_1 + 8);
    ppuStack_b0 = (undefined **)&UNK_1053a6a3c;
    ppuStack_a8 = &PTR_DAT_110ae9180;
    func_0x000109d18e28(&plStack_170,&UNK_10f68e392,0x19,&ppuStack_b8,pplVar7 + 7);
  }
  func_0x0001092ba41c(&ppuStack_b8);
  if (uVar22 != 0) {
    ppuVar33 = (undefined **)0x0;
    ppuVar40 = (undefined **)0x0;
    uVar35 = 0;
    do {
      lStack_238 = 0;
      uVar38 = uVar22 & (uVar35 ^ 0xffffffffffffffff);
      if (uVar38 == 0) {
        uStack_248 = 0;
      }
      else {
        uStack_248 = 0;
        do {
          uVar12 = uVar38 & -uVar38;
          if (((uVar12 & uVar35) == 0) &&
             ((lVar16 = lStack_1d0, FUN_10aae51a0(lStack_1d0,pppppplStack_1c8,uVar12), lVar16 == 0
              || (*(long *)(lVar16 + 0x18) == 0)))) {
            lVar16 = *param_2;
            FUN_10aae4f7c(lVar16,param_2[1],uVar12);
            if (lVar16 == 0) {
              FUN_109ffdddc(&UNK_10f639994);
              goto LAB_10aac9ab8;
            }
            puVar36 = (undefined8 *)(lVar16 + 0x18);
            plVar11 = (long *)*puVar36;
            (**(code **)(*plVar11 + 8))();
            pplVar7 = param_8;
            if ((int)plVar11 == 0) {
              pplVar7 = &plStack_170;
            }
            plVar11 = pplVar7[2];
            ppuStack_b0 = (undefined **)0x0;
            ppuStack_a8 = (undefined **)0x0;
            if (plVar11 == (long *)0x0) {
              ppuVar33 = (undefined **)0xe8;
              __Znwm();
              ppuVar33[2] = (undefined *)0x0;
              ppuVar33[1] = (undefined *)0x200000006;
              *(undefined2 *)(ppuVar33 + 3) = 4;
              ppuVar33[5] = (undefined *)0x0;
              ppuVar33[4] = (undefined *)0x0;
              ppuVar33[7] = (undefined *)0x0;
              ppuVar33[6] = (undefined *)0x0;
              ppuVar33[9] = (undefined *)0x0;
              ppuVar33[8] = (undefined *)0x0;
              ppuVar33[0xb] = (undefined *)0x0;
              ppuVar33[10] = (undefined *)0x0;
              ppuVar33[0xd] = (undefined *)0x0;
              ppuVar33[0xc] = (undefined *)0x0;
              ppuVar33[0xf] = (undefined *)0x0;
              ppuVar33[0xe] = (undefined *)0x0;
              ppuVar33[0x10] = (undefined *)0x0;
              ppuVar33[0x11] = (undefined *)(ppuVar33 + 3);
              ppuVar33[0x12] = (undefined *)0x0;
              *(undefined2 *)(ppuVar33 + 0x13) = 0;
              ppuVar33[0x14] = (undefined *)puVar36;
              *ppuVar33 = (undefined *)&PTR_DAT_110c43c70;
              ppuVar33[0x15] = (undefined *)&uStack_190;
              ppuVar33[0x16] = param_4;
              ppuVar33[0x17] = (undefined *)&uStack_198;
              ppuVar33[0x18] = (undefined *)&uStack_1a0;
              ppuVar33[0x19] = param_7;
              *(undefined1 *)(ppuVar33 + 0x1b) = 1;
              ppuVar33[0x1c] = (undefined *)0x0;
              ppuStack_b8 = ppuVar33 + 0x14;
              ppuStack_b0 = ppuVar33;
              pcStack_a0 = FUN_10aada294;
              ppuStack_a8 = ppuVar33;
            }
            else {
              pcStack_188 = (code *)0x0;
              (**(code **)(*plVar11 + 0x28))(plVar11,0,&pcStack_188);
              if (pcStack_188 != (code *)0x0) {
                func_0x0001092af97c(&pcStack_188);
                goto LAB_10aac9ab8;
              }
              ppuVar33 = (undefined **)0xf0;
              __Znwm();
              *(undefined2 *)(ppuVar33 + 3) = 4;
              ppuVar33[2] = (undefined *)0x0;
              ppuVar33[1] = (undefined *)0x200000006;
              ppuVar33[5] = (undefined *)0x0;
              ppuVar33[4] = (undefined *)0x0;
              ppuVar33[7] = (undefined *)0x0;
              ppuVar33[6] = (undefined *)0x0;
              ppuVar33[9] = (undefined *)0x0;
              ppuVar33[8] = (undefined *)0x0;
              ppuVar33[0xb] = (undefined *)0x0;
              ppuVar33[10] = (undefined *)0x0;
              ppuVar33[0xd] = (undefined *)0x0;
              ppuVar33[0xc] = (undefined *)0x0;
              ppuVar33[0xf] = (undefined *)0x0;
              ppuVar33[0xe] = (undefined *)0x0;
              ppuVar33[0x10] = (undefined *)0x0;
              ppuVar33[0x11] = (undefined *)(ppuVar33 + 3);
              ppuVar33[0x12] = (undefined *)0x0;
              *(undefined2 *)(ppuVar33 + 0x13) = 0;
              *ppuVar33 = (undefined *)&PTR_FUN_110c43c38;
              ppuVar33[0x14] = (undefined *)puVar36;
              ppuVar33[0x15] = (undefined *)&uStack_190;
              ppuVar33[0x16] = param_4;
              ppuVar33[0x17] = (undefined *)&uStack_198;
              ppuVar33[0x18] = (undefined *)&uStack_1a0;
              ppuVar33[0x19] = param_7;
              *(undefined1 *)(ppuVar33 + 0x1b) = 1;
              ppuVar33[0x1c] = (undefined *)0x0;
              ppuVar33[0x1d] = (undefined *)plVar11;
              if (ppuStack_b0 != (undefined **)0x0) {
                puVar1 = (ulong *)(ppuStack_b0 + 1);
                do {
                  uVar23 = *puVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = uVar23 - 4;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((uVar23 & 0x1fffffffc) == 4) {
                  do {
                    uVar23 = *puVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = uVar23 - 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (uVar23 - 1 == 0) {
                    (**(code **)((long)*ppuStack_b0 + 8))();
                  }
                }
              }
              ppuStack_b0 = ppuVar33;
              if (ppuStack_a8 != (undefined **)0x0) {
                func_0x0001092b4274(&ppuStack_a8);
              }
              pcStack_a0 = FUN_10aada264;
              ppuStack_b8 = ppuVar33 + 0x14;
              ppuStack_a8 = ppuVar33;
              __ZNSt13exception_ptrD1Ev(&pcStack_188);
            }
            ppuVar33 = ppuStack_b8;
            if (ppuStack_b8[8] != (undefined *)0x0) {
              func_0x0001092b4274();
            }
            ppuVar33[8] = (undefined *)ppuStack_a8;
            ppuStack_a8 = (undefined **)0x0;
            pcStack_188 = pcStack_a0;
            ppuStack_180 = ppuStack_b8;
            pplStack_178 = pplVar7;
            (*(code *)**pplVar7)(pplVar7,&pcStack_188);
            ppuVar33 = ppuStack_b0;
            ppuStack_b0 = (undefined **)0x0;
            ppuVar40 = ppuStack_a8;
            if ((ppuStack_a8 != (undefined **)0x0) &&
               (func_0x0001092b4274(&ppuStack_a8), ppuStack_b0 != (undefined **)0x0)) {
              puVar1 = (ulong *)(ppuStack_b0 + 1);
              do {
                uVar23 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar23 - 4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((uVar23 & 0x1fffffffc) == 4) {
                do {
                  uVar23 = *puVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = uVar23 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (uVar23 - 1 == 0) {
                  (**(code **)((long)*ppuStack_b0 + 8))();
                }
              }
            }
            ppuVar14 = ppuStack_218;
            ppuVar21 = ppuStack_220;
            ppuVar19 = ppuStack_228;
            ppuVar42 = ppuStack_230;
            uVar29 = (long)ppuStack_220 - (long)ppuStack_228;
            uVar23 = 0;
            if (uVar29 != 0) {
              uVar23 = ((long)ppuStack_220 - (long)ppuStack_228) * 0x20 - 1;
            }
            uVar20 = lStack_208 + uStack_210;
            if (uVar23 == uVar20) {
              if (uStack_210 < 0x100) {
                if (uVar29 < (ulong)((long)ppuStack_218 - (long)ppuStack_230)) {
                  puVar37 = (undefined *)0x1000;
                  __Znwm();
                  if (ppuVar14 == ppuVar21) {
                    if (ppuVar19 == ppuVar42) {
                      ppuVar14 = (undefined **)((long)ppuVar14 - (long)ppuVar19 >> 2);
                      if (ppuVar21 == ppuVar19) {
                        ppuVar14 = (undefined **)0x1;
                      }
                      ppuVar9 = ppuVar14;
                      FUN_10aae5330();
                      ppuVar14 = (undefined **)
                                 ((long)ppuVar9 + ((long)ppuVar14 * 2 + 6U & 0xfffffffffffffff8));
                      ppuStack_220 = ppuVar14;
                      if (ppuVar21 != ppuVar19) {
                        ppuStack_220 = (undefined **)((long)ppuVar14 + uVar29);
                        ppuVar21 = ppuVar14;
                        ppuVar24 = ppuVar19;
                        do {
                          *ppuVar21 = *ppuVar24;
                          uVar29 = uVar29 - 8;
                          ppuVar21 = ppuVar21 + 1;
                          ppuVar24 = ppuVar24 + 1;
                        } while (uVar29 != 0);
                      }
                      ppuStack_218 = ppuVar9 + (long)ppuVar40;
                      bVar3 = ppuVar19 != (undefined **)0x0;
                      ppuVar19 = ppuVar14;
                      ppuStack_230 = ppuVar9;
                      if (bVar3) {
                        __ZdlPv(ppuVar42);
                      }
                    }
                    ppuVar19[-1] = puVar37;
                    goto LAB_10aac937c;
                  }
                  *ppuVar21 = puVar37;
                  ppuStack_220 = ppuVar21 + 1;
                }
                else {
                  ppuVar14 = (undefined **)((long)ppuStack_218 - (long)ppuStack_230 >> 2);
                  if (ppuStack_218 == ppuStack_230) {
                    ppuVar14 = (undefined **)0x1;
                  }
                  FUN_10aae5330();
                  puVar37 = (undefined *)0x1000;
                  ppuVar10 = ppuVar40;
                  __Znwm();
                  ppuVar9 = (undefined **)((long)ppuVar14 + uVar29);
                  ppuVar24 = ppuVar14 + (long)ppuVar40;
                  ppuVar8 = ppuVar14;
                  if (uVar29 == (long)ppuVar40 * 8) {
                    if ((long)uVar29 < 1) {
                      ppuVar40 = (undefined **)((long)ppuVar9 - (long)ppuVar14 >> 2);
                      if (ppuVar21 == ppuVar19) {
                        ppuVar40 = (undefined **)0x1;
                      }
                      ppuVar8 = ppuVar40;
                      FUN_10aae5330();
                      ppuVar9 = ppuVar8 + ((ulong)ppuVar40 >> 2);
                      ppuVar24 = ppuVar8 + (long)ppuVar10;
                      if (ppuVar14 != (undefined **)0x0) {
                        __ZdlPv(ppuVar14);
                      }
                    }
                    else {
                      lVar16 = ((long)ppuVar9 - (long)ppuVar14 >> 3) + 1;
                      ppuVar9 = ppuVar9 + -((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
                    }
                  }
                  ppuVar40 = ppuVar9 + 1;
                  *ppuVar9 = puVar37;
                  ppuVar14 = ppuVar8;
                  if (ppuVar21 != ppuVar19) {
                    do {
                      ppuVar8 = ppuVar14;
                      ppuVar42 = ppuVar9;
                      if (ppuVar9 == ppuVar14) {
                        if (ppuVar40 < ppuVar24) {
                          lVar16 = ((long)ppuVar24 - (long)ppuVar40 >> 3) + 1;
                          lVar43 = (long)ppuVar40 - (long)ppuVar14;
                          lVar6 = (long)ppuVar40 - (long)ppuVar14;
                          ppuVar40 = ppuVar40 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
                          ppuVar42 = (undefined **)((long)ppuVar40 - lVar43);
                          if (lVar6 != 0) {
                            _memmove(ppuVar42,ppuVar9,lVar6);
                            ppuVar10 = ppuVar9;
                          }
                        }
                        else {
                          ppuVar42 = (undefined **)((long)ppuVar24 - (long)ppuVar14 >> 2);
                          if ((long)ppuVar24 - (long)ppuVar14 == 0) {
                            ppuVar42 = (undefined **)0x1;
                          }
                          ppuVar8 = ppuVar42;
                          FUN_10aae5330();
                          ppuVar42 = (undefined **)
                                     ((long)ppuVar8 + ((long)ppuVar42 * 2 + 6U & 0xfffffffffffffff8)
                                     );
                          lVar16 = (long)ppuVar40 - (long)ppuVar14;
                          ppuVar40 = ppuVar42;
                          if (lVar16 != 0) {
                            ppuVar40 = (undefined **)((long)ppuVar42 + lVar16);
                            ppuVar19 = ppuVar42;
                            do {
                              *ppuVar19 = *ppuVar9;
                              lVar16 = lVar16 + -8;
                              ppuVar19 = ppuVar19 + 1;
                              ppuVar9 = ppuVar9 + 1;
                            } while (lVar16 != 0);
                          }
                          ppuVar24 = ppuVar8 + (long)ppuVar10;
                          if (ppuVar14 != (undefined **)0x0) {
                            __ZdlPv(ppuVar14);
                          }
                        }
                      }
                      ppuVar21 = ppuVar21 + -1;
                      ppuVar9 = ppuVar42 + -1;
                      *ppuVar9 = *ppuVar21;
                      ppuVar14 = ppuVar8;
                      ppuVar42 = ppuStack_230;
                    } while (ppuVar21 != ppuStack_228);
                  }
                  ppuStack_230 = ppuVar8;
                  ppuStack_228 = ppuVar9;
                  ppuStack_220 = ppuVar40;
                  ppuStack_218 = ppuVar24;
                  if (ppuVar42 != (undefined **)0x0) {
                    __ZdlPv(ppuVar42);
                  }
                }
              }
              else {
                ppuVar19 = ppuStack_228 + 1;
                puVar37 = *ppuStack_228;
                uStack_210 = uStack_210 - 0x100;
LAB_10aac937c:
                ppuStack_228 = ppuVar19;
                FUN_10aae5234(&ppuStack_230,puVar37);
              }
              uVar20 = uStack_210 + lStack_208;
            }
            puVar37 = ppuStack_228[uVar20 >> 8];
            *(ulong *)(puVar37 + (uVar20 & 0xff) * 0x10) = uVar12;
            *(undefined ***)((long)(puVar37 + (uVar20 & 0xff) * 0x10) + 8) = ppuVar33;
            lStack_208 = lStack_208 + 1;
            uStack_248 = uVar12 | uStack_248;
            ppuVar33 = ppuStack_220;
            ppuVar40 = ppuStack_228;
          }
          uVar38 = uVar38 - 1 & uVar38;
        } while (uVar38 != 0);
      }
      FUN_109d202f4(param_1 + 8);
      if (ppuVar33 != ppuVar40) {
        ppuVar42 = ppuVar40 + (uStack_210 >> 8);
        uVar38 = lStack_208 + uStack_210;
        puVar37 = ppuVar40[uVar38 >> 8];
        puVar1 = (ulong *)(*ppuVar42 + (uStack_210 & 0xff) * 0x10);
        while (puVar1 != (ulong *)(puVar37 + (uVar38 & 0xff) * 0x10)) {
          FUN_109d1a244(puVar1 + 1);
          FUN_10a09b344(puVar1 + 1);
          puVar30 = puVar1 + 2;
          if ((long)puVar30 - (long)*ppuVar42 == 0x1000) {
            ppuVar42 = ppuVar42 + 1;
            puVar30 = (ulong *)*ppuVar42;
          }
          uVar35 = *puVar1 | uVar35;
          puVar1 = puVar30;
          ppuVar33 = ppuStack_220;
          ppuVar40 = ppuStack_228;
        }
      }
      if (ppuVar33 != ppuVar40) {
        ppuVar42 = ppuVar40 + (uStack_210 >> 8);
        puVar15 = *ppuVar42;
        uVar38 = lStack_208 + uStack_210;
        puVar25 = ppuVar40[uVar38 >> 8];
        puVar37 = puVar15 + (uStack_210 & 0xff) * 0x10;
        while (puVar37 != puVar25 + (uVar38 & 0xff) * 0x10) {
          plVar11 = *(long **)(puVar37 + 8);
          if (plVar11 != (long *)0x0) {
            puVar1 = (ulong *)(plVar11 + 1);
            do {
              uVar12 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar12 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar12 & 0x1fffffffc) == 4) {
              do {
                uVar12 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar12 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar12 - 1 == 0) {
                (**(code **)(*plVar11 + 8))();
              }
            }
            puVar15 = *ppuVar42;
          }
          puVar37 = puVar37 + 0x10;
          ppuVar33 = ppuStack_220;
          ppuVar40 = ppuStack_228;
          if ((long)puVar37 - (long)puVar15 == 0x1000) {
            ppuVar42 = ppuVar42 + 1;
            puVar15 = *ppuVar42;
            puVar37 = puVar15;
          }
        }
      }
      lStack_208 = 0;
      uVar38 = (long)ppuVar33 - (long)ppuVar40 >> 3;
      if (2 < uVar38) {
        lVar16 = (long)ppuVar33 - (long)ppuVar40;
        ppuVar42 = ppuVar40;
        do {
          lVar16 = lVar16 + -8;
          ppuVar40 = ppuVar42 + 1;
          __ZdlPv(*ppuVar42);
          uVar38 = lVar16 >> 3;
          ppuVar42 = ppuVar40;
          ppuStack_228 = ppuVar40;
        } while (2 < uVar38);
      }
      lVar16 = lStack_238;
      if (uVar38 == 1) {
        uStack_210 = 0x80;
      }
      else if (uVar38 == 2) {
        uStack_210 = 0x100;
      }
      ppuStack_b8 = (undefined **)0x0;
      __ZNSt13exception_ptrD1Ev(&ppuStack_b8);
      if (lVar16 != 0) {
        __ZNSt13exception_ptrC1ERKS_(auStack_240,&lStack_238);
        __ZSt17rethrow_exceptionSt13exception_ptr(auStack_240);
LAB_10aac9ab8:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10aac9abc);
        (*pcVar4)();
      }
      if (ppppppplStack_1c0 != (long *******)0x0) {
        ppppppplVar34 = ppppppplStack_1c0;
        do {
          pppppplVar41 = ppppppplVar34[3];
          ppppppplVar32 = (long *******)*ppppppplVar34;
          ppppppplVar34[3] = (long ******)((ulong)pppppplVar41 & ~uStack_248);
          if ((long ******)((ulong)pppppplVar41 & ~uStack_248) == (long ******)0x0) {
            pppppplVar41 = ppppppplVar34[1];
            uVar38 = (long)pppppplStack_1c8 - 1;
            if (((ulong)pppppplStack_1c8 & uVar38) == 0) {
              pppppplVar41 = (long ******)(uVar38 & (ulong)pppppplVar41);
            }
            else if (pppppplStack_1c8 <= pppppplVar41) {
              uVar12 = 0;
              if (pppppplStack_1c8 != (long ******)0x0) {
                uVar12 = (ulong)pppppplVar41 / (ulong)pppppplStack_1c8;
              }
              pppppplVar41 = (long ******)((long)pppppplVar41 - uVar12 * (long)pppppplStack_1c8);
            }
            ppppppplVar27 = *(long ********)(lStack_1d0 + (long)pppppplVar41 * 8);
            do {
              ppppppplVar26 = ppppppplVar27;
              ppppppplVar27 = (long *******)*ppppppplVar26;
            } while ((long *******)*ppppppplVar26 != ppppppplVar34);
            ppppppplVar27 = ppppppplVar32;
            if ((long ********)ppppppplVar26 == &ppppppplStack_1c0) {
LAB_10aac98a0:
              if (ppppppplVar32 == (long *******)0x0) {
LAB_10aac98d8:
                *(undefined8 *)(lStack_1d0 + (long)pppppplVar41 * 8) = 0;
                ppppppplVar27 = (long *******)*ppppppplVar34;
                goto LAB_10aac98e0;
              }
              pppppplVar39 = ppppppplVar32[1];
              if (((ulong)pppppplStack_1c8 & uVar38) == 0) {
                pppppplVar28 = (long ******)((ulong)pppppplVar39 & uVar38);
              }
              else {
                pppppplVar28 = pppppplVar39;
                if (pppppplStack_1c8 <= pppppplVar39) {
                  uVar12 = 0;
                  if (pppppplStack_1c8 != (long ******)0x0) {
                    uVar12 = (ulong)pppppplVar39 / (ulong)pppppplStack_1c8;
                  }
                  pppppplVar28 = (long ******)((long)pppppplVar39 - uVar12 * (long)pppppplStack_1c8)
                  ;
                }
              }
              if (pppppplVar28 != pppppplVar41) goto LAB_10aac98d8;
LAB_10aac98e8:
              if (((ulong)pppppplStack_1c8 & uVar38) == 0) {
                pppppplVar39 = (long ******)((ulong)pppppplVar39 & uVar38);
              }
              else if (pppppplStack_1c8 <= pppppplVar39) {
                uVar38 = 0;
                if (pppppplStack_1c8 != (long ******)0x0) {
                  uVar38 = (ulong)pppppplVar39 / (ulong)pppppplStack_1c8;
                }
                pppppplVar39 = (long ******)((long)pppppplVar39 - uVar38 * (long)pppppplStack_1c8);
              }
              if (pppppplVar39 != pppppplVar41) {
                *(long ********)(lStack_1d0 + (long)pppppplVar39 * 8) = ppppppplVar26;
                ppppppplVar27 = (long *******)*ppppppplVar34;
              }
            }
            else {
              pppppplVar39 = ppppppplVar26[1];
              if (((ulong)pppppplStack_1c8 & uVar38) == 0) {
                pppppplVar39 = (long ******)((ulong)pppppplVar39 & uVar38);
              }
              else if (pppppplStack_1c8 <= pppppplVar39) {
                uVar12 = 0;
                if (pppppplStack_1c8 != (long ******)0x0) {
                  uVar12 = (ulong)pppppplVar39 / (ulong)pppppplStack_1c8;
                }
                pppppplVar39 = (long ******)((long)pppppplVar39 - uVar12 * (long)pppppplStack_1c8);
              }
              if (pppppplVar39 != pppppplVar41) goto LAB_10aac98a0;
LAB_10aac98e0:
              if (ppppppplVar27 != (long *******)0x0) {
                pppppplVar39 = ppppppplVar27[1];
                goto LAB_10aac98e8;
              }
            }
            *ppppppplVar26 = (long ******)ppppppplVar27;
            *ppppppplVar34 = (long ******)0x0;
            uStack_1b8 = uStack_1b8 - 1;
            __ZdlPv();
          }
          ppppppplVar34 = ppppppplVar32;
        } while (ppppppplVar32 != (long *******)0x0);
      }
      __ZNSt13exception_ptrD1Ev(&lStack_238);
    } while ((uVar22 & (uVar35 ^ 0xffffffffffffffff)) != 0);
  }
  func_0x000109d18f34(&plStack_170);
  FUN_10aae5010(&ppuStack_230);
  plVar11 = &lStack_1d0;
  FUN_10aae4f34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __ZNSt13exception_ptrD1Ev(&lStack_238);
    func_0x000109d18f34(&plStack_170);
    FUN_10aae5010(&ppuStack_230);
    FUN_10aae4f34(&lStack_1d0);
    __Unwind_Resume(plVar11);
    func_0x000104bd46a0();
    *plVar11 = (long)&PTR_FUN_110c447a0;
    FUN_109d201a8(plVar11 + 1);
    return plVar11;
  }
  return plVar11;
}



/* Entry: 10aac9b60; end: 10aac9bbf;  */

undefined8 * FUN_10aac9b60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c447a0;
  FUN_109d201a8(param_1 + 1);
  return param_1;
}



/* Entry: 10aac9bc0; end: 10aac9ecf;  */

void FUN_10aac9bc0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  long *plStack_80;
  long *plStack_78;
  char cStack_69;
  undefined8 ***pppuStack_68;
  long *plStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  long *plStack_50;
  long *plStack_48;
  
  cStack_69 = '\x04';
  plStack_80 = (long *)CONCAT35(plStack_80._5_3_,0x79646f62);
  (**(code **)(*param_2 + 0xa8))(&pppuStack_68,param_2,&PTR_s_label_110c43c98,&plStack_80,4);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  param_1[1] = (ulong)plStack_60;
  *param_1 = (ulong)pppuStack_68;
  param_1[2] = CONCAT17(uStack_51,uStack_58);
  uStack_51 = 0;
  pppuStack_68 = (undefined8 ***)((ulong)pppuStack_68 & 0xffffffffffffff00);
  if (cStack_69 < '\0') {
    __ZdlPv(plStack_80);
  }
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c433a0);
  if ((int)plVar5 == 0) {
    pppuStack_68 = (undefined8 ***)0x0;
    plStack_60 = (long *)0x0;
    func_0x00010a504104(param_1 + 3,&pppuStack_68);
    plVar5 = plStack_60;
    if (plStack_60 == (long *)0x0) {
      return;
    }
    plVar9 = plStack_60 + 1;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 != 0) {
      return;
    }
    (**(code **)(*plStack_60 + 0x10))(plStack_60);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    return;
  }
  (**(code **)(*param_2 + 0xa0))(&pppuStack_98,param_2,&PTR_DAT_110c433a0);
  bVar4 = bStack_81;
  uVar1 = uStack_90;
  if (-1 < (char)bStack_81) {
    uVar1 = (ulong)bStack_81;
  }
  if (uVar1 == 0) {
    plVar5 = (long *)param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    if (plVar5 == (long *)0x0) goto LAB_10aac9e68;
    plVar9 = plVar5 + 1;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 != 0) goto LAB_10aac9e68;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    plVar5 = (long *)0xd0;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110bef6c8;
    plVar9 = plVar5 + 3;
    *plVar9 = (long)&PTR_DAT_110aeb838;
    plVar5[4] = 0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    *(undefined8 *)((long)plVar5 + 0x5c) = 0;
    *(undefined8 *)((long)plVar5 + 0x54) = 0;
    *(undefined8 *)((long)plVar5 + 100) = 1;
    *(undefined4 *)((long)plVar5 + 0x6c) = 1;
    plVar5[0xe] = (long)&DAT_10e5b4a18;
    plVar5[0xf] = 0;
    plVar5[0x10] = (long)&DAT_11383d918;
    plVar5[0x12] = 0;
    plVar5[0x11] = 0;
    plVar5[0x14] = 0;
    plVar5[0x13] = 0;
    plVar5[0x16] = 0;
    plVar5[0x15] = 0;
    plVar5[0x18] = 0;
    plVar5[0x17] = 0;
    plVar5[0x19] = 0;
    pppuStack_68 = pppuStack_98;
    if (-1 < (char)bVar4) {
      pppuStack_68 = &pppuStack_98;
    }
    plVar6 = plVar9;
    plStack_80 = plVar9;
    plStack_78 = plVar5;
    plStack_60 = (long *)uVar1;
    func_0x000107c30348(plVar9,&pppuStack_68);
    if ((int)plVar6 == 0) {
      pplVar7 = &plStack_50;
    }
    else {
      pplVar7 = &plStack_80;
      plStack_50 = plVar9;
      plStack_48 = plVar5;
    }
    *pplVar7 = (long *)0x0;
    pplVar7[1] = (long *)0x0;
    func_0x00010a504104(param_1 + 3,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar9 = plStack_48 + 1;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_78;
    if (plStack_78 == (long *)0x0) goto LAB_10aac9e68;
    plVar9 = plStack_78 + 1;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 != 0) goto LAB_10aac9e68;
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
LAB_10aac9e68:
  if ((char)bStack_81 < '\0') {
    __ZdlPv(pppuStack_98);
  }
  return;
}



/* Entry: 10aac9ed0; end: 10aac9f87;  */

void FUN_10aac9ed0(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 **ppuStack_48;
  long lStack_40;
  char cStack_31;
  undefined8 **ppuStack_30;
  long lStack_28;
  
  FUN_10a00d760(param_2,&PTR_s_label_110c43c98,param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b4d1804(&ppuStack_48);
    lStack_28 = (long)cStack_31;
    ppuStack_30 = &ppuStack_48;
    if (lStack_28 < 0) {
      ppuStack_30 = ppuStack_48;
      lStack_28 = lStack_40;
      if (lStack_40 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10aac9f6c);
        (*pcVar1)();
      }
    }
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c433a0,&ppuStack_30);
    if (cStack_31 < '\0') {
      __ZdlPv(ppuStack_48);
    }
  }
  return;
}



/* Entry: 10aac9f88; end: 10aaca043;  */

float FUN_10aac9f88(float *param_1,long param_2)

{
  float afStack_60 [4];
  float fStack_50;
  float fStack_40;
  float fStack_30;
  
  func_0x0001094f5708(afStack_60,param_2 + 0x24);
  return (*param_1 * afStack_60[0] + param_1[1] * fStack_50 + param_1[2] * fStack_40 + fStack_30) *
         0.01;
}



/* Entry: 10aaca044; end: 10aaca09f;  */

void FUN_10aaca044(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && (3 < param_3)) {
    *param_1 = *param_2;
    *(ulong *)(param_1 + 1) = (ulong)(uint)param_2[3];
    if (param_3 != 4) {
      param_1[3] = param_2[1];
      *(ulong *)(param_1 + 4) = (ulong)(uint)param_2[4];
      if (5 < param_3) {
        param_1[6] = param_2[2];
        uVar2 = NEON_fmov(0x3f800000,4);
        *(ulong *)(param_1 + 7) = CONCAT44((int)((ulong)uVar2 >> 0x20),param_2[5]);
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaca0a0);
  (*pcVar1)();
}



/* Entry: 10aaca0a0; end: 10aaca267;  */

void FUN_10aaca0a0(float *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar7 = 1.0 / (float)(int)param_3;
  fVar1 = 1.0 / (float)(int)((ulong)param_3 >> 0x20);
  fVar6 = fVar7 * 0.0;
  fVar8 = fVar1 * 0.0;
  fVar4 = (float)(int)param_2;
  fVar2 = (float)(int)((ulong)param_2 >> 0x20);
  fVar5 = (float)((uint)fVar4 ^ (uint)ABS(fVar4));
  fVar3 = (float)((uint)fVar2 ^ (uint)ABS(fVar2));
  fVar12 = param_4[7];
  fVar9 = param_4[8];
  fVar10 = param_4[4];
  fVar11 = param_4[5];
  fVar13 = param_4[6];
  fVar14 = -(fVar12 * fVar11) + fVar9 * fVar10;
  fVar15 = *param_4;
  fVar16 = param_4[1];
  fVar18 = param_4[2];
  fVar17 = param_4[3];
  fVar19 = -(fVar12 * fVar18) + fVar9 * fVar16;
  fVar21 = -(fVar10 * fVar18) + fVar11 * fVar16;
  fVar20 = 1.0 / (-(fVar17 * fVar19) + fVar14 * fVar15 + fVar21 * fVar13);
  fVar14 = fVar14 * fVar20;
  fVar22 = -((-(fVar13 * fVar11) + fVar9 * fVar17) * fVar20);
  fVar23 = (-(fVar13 * fVar10) + fVar12 * fVar17) * fVar20;
  fVar19 = -(fVar19 * fVar20);
  fVar9 = (-(fVar13 * fVar18) + fVar9 * fVar15) * fVar20;
  fVar12 = -((-(fVar13 * fVar16) + fVar12 * fVar15) * fVar20);
  fVar21 = fVar21 * fVar20;
  fVar11 = -((-(fVar17 * fVar18) + fVar11 * fVar15) * fVar20);
  fVar20 = (-(fVar17 * fVar16) + fVar10 * fVar15) * fVar20;
  fVar10 = fVar8 * fVar19;
  fVar15 = fVar10 + fVar14 * fVar7 + fVar21 * 0.0;
  fVar16 = fVar19 * fVar1 + fVar14 * fVar6 + fVar21 * 0.0;
  fVar21 = fVar21 + fVar10 + fVar14 * fVar6;
  fVar13 = fVar8 * fVar9;
  fVar14 = fVar13 + fVar22 * fVar7 + fVar11 * 0.0;
  fVar10 = fVar9 * fVar1 + fVar22 * fVar6 + fVar11 * 0.0;
  fVar11 = fVar11 + fVar13 + fVar22 * fVar6;
  fVar8 = fVar8 * fVar12;
  fVar9 = fVar8 + fVar23 * fVar7 + fVar20 * 0.0;
  fVar7 = fVar12 * fVar1 + fVar23 * fVar6 + fVar20 * 0.0;
  fVar20 = fVar20 + fVar8 + fVar23 * fVar6;
  *param_1 = fVar5 * fVar14 + fVar4 * fVar15 + fVar5 * fVar9;
  param_1[1] = fVar5 * fVar10 + fVar4 * fVar16 + fVar5 * fVar7;
  param_1[2] = fVar5 * fVar11 + fVar4 * fVar21 + fVar5 * fVar20;
  param_1[3] = fVar14 * fVar2 + fVar3 * fVar15 + fVar3 * fVar9;
  param_1[4] = fVar10 * fVar2 + fVar3 * fVar16 + fVar3 * fVar7;
  param_1[5] = fVar11 * fVar2 + fVar3 * fVar21 + fVar3 * fVar20;
  param_1[6] = fVar9 + fVar14 * 0.0 + fVar15 * 0.0;
  param_1[7] = fVar7 + fVar10 * 0.0 + fVar16 * 0.0;
  param_1[8] = fVar20 + fVar11 * 0.0 + fVar21 * 0.0;
  return;
}



/* Entry: 10aaca268; end: 10aaca31b;  */

void FUN_10aaca268(float *param_1)

{
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  FUN_10aaca0a0(&fStack_48);
  *param_1 = fStack_48 + fStack_3c * 0.0 + fStack_30 * 0.0;
  *(ulong *)(param_1 + 3) =
       CONCAT44(-fStack_38 + fStack_44 * 0.0 + fStack_2c * 0.0,
                -fStack_3c + fStack_48 * 0.0 + fStack_30 * 0.0);
  *(ulong *)(param_1 + 1) =
       CONCAT44(fStack_40 + fStack_34 * 0.0 + fStack_28 * 0.0,
                fStack_44 + fStack_38 * 0.0 + fStack_2c * 0.0);
  param_1[5] = -fStack_34 + fStack_40 * 0.0 + fStack_28 * 0.0;
  param_1[6] = fStack_3c + fStack_48 * 0.0 + fStack_30;
  param_1[7] = fStack_38 + fStack_44 * 0.0 + fStack_2c;
  param_1[8] = fStack_34 + fStack_40 * 0.0 + fStack_28;
  return;
}



/* Entry: 10aaca31c; end: 10aaca40b;  */

void FUN_10aaca31c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  
  *param_1 = &PTR_DAT_110aef618;
  param_1[1] = 0;
  puVar5 = (uint *)(param_1 + 2);
  param_1[3] = 0;
  puVar5[0] = 0;
  puVar5[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *puVar5 = 1;
  lVar3 = 0;
  func_0x000109341730();
  param_1[3] = lVar3;
  *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 2;
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 2) = uVar1 | 2;
  uVar4 = param_1[4];
  if (uVar4 == 0) {
    uVar4 = param_1[1];
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000109341730();
    param_1[4] = uVar4;
  }
  *(undefined4 *)(uVar4 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(uint *)(uVar4 + 0x10);
  *(uint *)(uVar4 + 0x10) = uVar2 | 1;
  *puVar5 = uVar1 | 2;
  *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  *(uint *)(uVar4 + 0x10) = uVar2 | 3;
  return;
}



/* Entry: 10aaca40c; end: 10aaca4cf;  */

void FUN_10aaca40c(undefined4 *param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = param_3[7];
  lVar8 = param_3[6];
  lVar6 = param_3[8];
  *(long *)(param_1 + 0x10) = param_3[9];
  *(long *)(param_1 + 0xe) = lVar6;
  lVar6 = param_3[10];
  lVar11 = param_3[0xd];
  lVar10 = param_3[0xc];
  *(long *)(param_1 + 0x14) = param_3[0xb];
  *(long *)(param_1 + 0x12) = lVar6;
  *(long *)(param_1 + 0x18) = lVar11;
  *(long *)(param_1 + 0x16) = lVar10;
  uVar7 = *(undefined8 *)((long)param_3 + 0x6c);
  *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)((long)param_3 + 0x74);
  *(undefined8 *)(param_1 + 0x19) = uVar7;
  lVar6 = param_3[2];
  lVar11 = param_3[5];
  lVar10 = param_3[4];
  *(long *)(param_1 + 4) = param_3[3];
  *(long *)(param_1 + 2) = lVar6;
  *(long *)(param_1 + 8) = lVar11;
  *(long *)(param_1 + 6) = lVar10;
  lVar6 = *param_3;
  iVar2 = *(int *)(lVar6 + 0x24);
  *param_1 = param_2;
  *(long *)(param_1 + 0xc) = lVar9;
  *(long *)(param_1 + 10) = lVar8;
  lVar8 = param_3[0x11];
  lVar9 = param_3[0x10];
  *(long *)(param_1 + 0x20) = param_3[0x11];
  *(long *)(param_1 + 0x1e) = lVar9;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *param_3;
  }
  bVar5 = iVar2 == 7;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(param_1 + 0x24) = 0;
  bVar4 = (int)((uint)bVar5 << 0x1f) < 0;
  bVar5 = (int)((uint)bVar5 << 0x1f) < 0;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(lVar6 + 0x10);
  *(ulong *)(param_1 + 0x28) =
       CONCAT44((uint)(~-bVar5 & 4) + (uint)bVar5,(uint)(~-bVar4 & 3) + (uint)bVar4);
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = (int)uVar7;
  lVar8 = param_3[1];
  *(long *)(param_1 + 0x2e) = lVar6;
  *(long *)(param_1 + 0x30) = lVar8;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 10aaca4d0; end: 10aaca727;  */

/* WARNING: Removing unreachable block (ram,0x00010aacaaa4) */

undefined ***
FUN_10aaca4d0(undefined8 param_1,undefined *param_2,ulong param_3,float param_4,long *param_5,
             int param_6,ulong param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  ulong *puVar19;
  undefined ****ppppuVar20;
  undefined ****ppppuVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  undefined **ppuVar25;
  ulong *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined ***pppuVar29;
  undefined ***pppuVar30;
  ulong uVar31;
  undefined **ppuVar32;
  int iVar33;
  long lVar34;
  undefined ****ppppuVar35;
  ulong *puVar36;
  undefined ***unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined ***unaff_x26;
  undefined8 *puVar37;
  float fVar38;
  undefined **ppuVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined **appuStack_3c0 [7];
  undefined4 uStack_388;
  undefined4 uStack_380;
  undefined1 uStack_37c;
  undefined1 uStack_378;
  undefined4 uStack_374;
  undefined1 uStack_370;
  undefined1 uStack_36c;
  long lStack_368;
  undefined ***pppuStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined ***pppuStack_348;
  ulong *puStack_340;
  undefined ****ppppuStack_338;
  undefined ***pppuStack_330;
  undefined ***pppuStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined ***pppuStack_308;
  ulong *puStack_300;
  ulong *puStack_2f8;
  long lStack_2f0;
  undefined ***pppuStack_2e8;
  undefined ***pppuStack_2e0;
  undefined ***pppuStack_2d8;
  undefined ***pppuStack_2d0;
  undefined ***pppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined8 uStack_27c;
  undefined8 uStack_274;
  undefined4 uStack_26c;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [24];
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_70;
  undefined1 uStack_6c;
  long lStack_48;
  
  ppppuVar20 = &pppuStack_a0;
  ppppuVar21 = &pppuStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = 7;
  if ((param_7 & 1) == 0) {
    uVar23 = 1;
  }
  puVar36 = (ulong *)(ulong)uVar23;
  ppppuVar35 = &pppuStack_98;
  if (param_6 == 0) {
    auStack_88._0_4_ = 0x7fffffff;
    ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x168);
    uStack_78 = 1;
    uStack_74 = 1;
    uStack_70 = 0;
    uStack_6c = 0;
    plVar12 = param_5;
    auStack_88._4_4_ = uVar23;
    func_0x0001098ac018(param_5,&UNK_10e4a7ac1,0x23,auStack_88,0,1);
    lVar34 = *param_5;
    pppuStack_98 = (undefined ***)0x0;
    uStack_90 = 0;
    pppuStack_a0 = (undefined ***)0x0;
    auStack_88._0_4_ = (int)plVar12;
    pppuVar18 = (undefined ***)(auStack_88 + 4);
    lVar22 = 1;
    FUN_10a26ebc0(&pppuStack_a0,0,auStack_88);
    auStack_88 = (undefined1  [8])FUN_10aadaba8;
    ppuStack_80 = &PTR_FUN_110c43cf0;
    uStack_78 = 0x7fffffff;
    pppuVar29 = (undefined ***)(lVar34 + 0x18);
    puVar19 = (ulong *)auStack_88;
    FUN_10aada760(pppuVar29);
  }
  else {
    auStack_88 = (undefined1  [8])((ulong)uVar23 << 0x20);
    unaff_x23 = (undefined ***)0x168;
    unaff_x24 = (undefined8 *)0x1;
    ppuStack_80._0_4_ = 0x168;
    uStack_78 = 1;
    uStack_74 = 1;
    uStack_70 = 0;
    uStack_6c = 0;
    plVar12 = param_5;
    func_0x0001098ac018(param_5,&UNK_10e4a7ac1,0x23,auStack_88,0,1);
    auStack_88._4_4_ = uVar23;
    auStack_88._0_4_ = 1;
    ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x168);
    uStack_78 = 1;
    uStack_74 = 1;
    uStack_70 = 0;
    uStack_6c = 0;
    puVar36 = (ulong *)auStack_88;
    plVar11 = param_5;
    func_0x0001098ac018(param_5,&UNK_10e4a7ac1,0x23,auStack_88,0,1);
    lVar34 = *param_5;
    pppuStack_98 = (undefined ***)0x0;
    uStack_90 = 0;
    pppuStack_a0 = (undefined ***)0x0;
    auStack_88 = (undefined1  [8])CONCAT44((int)plVar11,(int)plVar12);
    pppuVar18 = &ppuStack_80;
    lVar22 = 2;
    FUN_10a26ebc0(&pppuStack_a0,0,auStack_88);
    auStack_88 = (undefined1  [8])FUN_10aada958;
    ppuStack_80 = &PTR_FUN_110c43cd8;
    pppuVar29 = (undefined ***)(lVar34 + 0x18);
    puVar19 = (ulong *)auStack_88;
    FUN_10aada760(pppuVar29);
    ppppuVar21 = ppppuVar20;
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  pppuVar30 = pppuStack_a0;
  if (pppuStack_a0 != (undefined ***)0x0) {
    pppuStack_98 = pppuStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar29;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (pppuStack_a0 != (undefined ***)0x0) {
    pppuStack_98 = pppuStack_a0;
    __ZdlPv();
  }
  pppuVar13 = pppuVar30;
  __Unwind_Resume();
  pcStack_a8 = FUN_10aaca728;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *pppuVar13 = (undefined **)0x0;
  pppuVar13[1] = (undefined **)0x0;
  pppuVar13[2] = (undefined **)0x0;
  pppuVar29 = (undefined ***)0x0;
  pppuStack_308 = pppuVar18;
  lStack_2f0 = lVar22;
  pppuStack_2e8 = pppuVar13;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppppuVar21 != (undefined ****)0x0) {
    pppuStack_2e0 = (undefined ***)0x0;
    pppuVar18 = pppuVar18 + lVar22 * 0x44;
    unaff_x24 = &uStack_180;
    pppuVar30 = (undefined ***)&uStack_168;
    unaff_x23 = &ppuStack_208;
    puStack_2f8 = puVar19 + (long)ppppuVar21 * 0x10;
    ppppuVar35 = (undefined ****)0xc;
    puVar36 = puVar19;
    pppuStack_2d8 = pppuVar18;
    pppuStack_2d0 = pppuVar30;
    do {
      puVar19 = puVar36;
      FUN_10aaca31c(auStack_1b0);
      ppuStack_2c0 = &PTR_DAT_110aeb838;
      uStack_2b8 = 0;
      uVar15 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_27c = 0;
      uStack_284 = 0;
      uStack_280 = 0;
      uStack_274 = 1;
      uStack_26c = 1;
      puStack_268 = &DAT_10e5b4a18;
      uStack_260 = 0;
      puStack_258 = &DAT_11383d918;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_210 = 0;
      pppuVar29 = pppuStack_308;
      if (lStack_2f0 != 0) {
        do {
          uVar47 = (undefined4)uVar15;
          pppuVar13 = pppuVar29;
          if ((pppuVar29[0x3b] != (undefined **)0x0 && pppuVar29[0x41] != (undefined **)0x0) &&
             (pppuVar29[0x43] != (undefined **)0x0)) {
            puVar14 = &uStack_2a8;
            pppuStack_2c8 = pppuVar29;
            func_0x000107c303b0(puVar14,&UNK_109312438);
            *(undefined4 *)((long)puVar14 + 0x134) = 0x3f800000;
            uVar23 = *(uint *)(puVar14 + 2);
            *(undefined1 *)((long)puVar14 + 0x13c) = 1;
            *(uint *)(puVar14 + 2) = uVar23 | 0xa0000;
            pppuVar18 = pppuStack_2c8;
            *(undefined4 *)((long)puVar14 + 0x144) = *(undefined4 *)((long)pppuStack_2c8 + 4);
            *(uint *)(puVar14 + 2) = uVar23 | 0x2a0000;
            func_0x0001096b966c(pppuVar18 + 0x3a,0x51);
            uStack_1b8 = SUB84(param_2,0);
            uStack_1b4 = (undefined4)param_3;
            uStack_1bc = uVar47;
            FUN_10aac9f88(&uStack_1bc,puVar36);
            uStack_180 = &PTR_DAT_110aefb90;
            uStack_178 = (undefined **)0x0;
            ppuStack_158 = (undefined **)((ulong)ppuStack_158 & 0xffffffffffffff00);
            uStack_168 = (undefined **)CONCAT44((int)param_2,uVar47);
            ppuStack_160 = (undefined **)(param_3 & 0xffffffff);
            uStack_170 = (undefined **)0x7;
            *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 2;
            puVar37 = (undefined8 *)puVar14[0x17];
            if (puVar37 == (undefined8 *)0x0) {
              puVar37 = (undefined8 *)puVar14[1];
              if (((ulong)puVar37 & 1) != 0) {
                puVar37 = *(undefined8 **)((ulong)puVar37 & 0xfffffffffffffffe);
              }
              func_0x0001093416e0();
              puVar14[0x17] = puVar37;
            }
            if (puVar37 != unaff_x24) {
              uVar24 = puVar37[1];
              uVar15 = uVar24;
              if ((uVar24 & 1) != 0) {
                uVar15 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              uVar31 = (ulong)uStack_178;
              if (((ulong)uStack_178 & 1) != 0) {
                uVar31 = *(ulong *)((ulong)uStack_178 & 0xfffffffffffffffe);
              }
              if (uVar15 == uVar31) {
                lVar22 = 0;
                puVar37[1] = uStack_178;
                uStack_178 = (undefined **)uVar24;
                uVar47 = *(undefined4 *)(puVar37 + 2);
                *(undefined4 *)(puVar37 + 2) = (undefined4)uStack_170;
                uStack_170 = (undefined **)CONCAT44(uStack_170._4_4_,uVar47);
                do {
                  uVar4 = *(undefined1 *)((long)puVar37 + lVar22 + 0x18);
                  *(undefined1 *)((long)puVar37 + lVar22 + 0x18) =
                       *(undefined1 *)((long)pppuVar30 + lVar22);
                  *(undefined1 *)((long)pppuVar30 + lVar22) = uVar4;
                  lVar22 = lVar22 + 1;
                } while (lVar22 != 0x11);
              }
              else {
                func_0x000109340dd8(puVar37);
                func_0x000109340c8c(puVar37,&uStack_180);
              }
            }
            if (((ulong)uStack_178 & 1) != 0) {
              func_0x0001053936ac(&uStack_178);
            }
            *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 2;
            pppuVar18 = pppuStack_2c8;
            uVar15 = puVar14[0x17];
            if (uVar15 == 0) {
              uVar15 = puVar14[1];
              if ((uVar15 & 1) != 0) {
                uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
              }
              func_0x0001093416e0();
              puVar14[0x17] = uVar15;
            }
            fVar38 = *(float *)(uVar15 + 0x20);
            if (0.0 < fVar38) {
              ppuVar39 = &PTR_PTR_1132d8bd0;
              if (ppuStack_198 != (undefined **)0x0) {
                ppuVar39 = ppuStack_198;
              }
              ppuVar16 = &PTR_PTR_1132d8bd0;
              if (ppuStack_190 != (undefined **)0x0) {
                ppuVar16 = ppuStack_190;
              }
              param_3 = *(ulong *)(uVar15 + 0x18);
              param_2 = ppuVar16[3];
              *(ulong *)(uVar15 + 0x18) =
                   CONCAT44(((float)((ulong)ppuVar39[3] >> 0x20) * (float)(param_3 >> 0x20)) /
                            fVar38 + (float)((ulong)param_2 >> 0x20),
                            (SUB84(ppuVar39[3],0) * (float)param_3) / fVar38 + SUB84(param_2,0));
              *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 3;
            }
            *(undefined4 *)((long)puVar14 + 0x154) = 3;
            *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 0x2000000;
            puVar14 = puVar14 + 9;
            func_0x000107c303b0(puVar14,&UNK_109312438);
            uStack_170 = (undefined **)CONCAT17(4,(undefined7)uStack_170);
            uStack_180 = (undefined **)CONCAT35(uStack_180._5_3_,0x64616568);
            *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 1;
            uVar15 = puVar14[1];
            if ((uVar15 & 1) != 0) {
              uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
            }
            func_0x000107c3024c(puVar14 + 0x16,&uStack_180,uVar15);
            uStack_178 = pppuVar18[0x3b];
            if (uStack_178 != (undefined **)0x0) {
              ppuVar39 = uStack_178 + -1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar39,0x10);
                if (bVar6) {
                  *(int *)ppuVar39 = *(int *)ppuVar39 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uStack_180 = &PTR_DAT_110b05018;
            uStack_168 = pppuVar18[0x43];
            if (uStack_168 != (undefined **)0x0) {
              ppuVar39 = uStack_168 + -1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar39,0x10);
                if (bVar6) {
                  *(int *)ppuVar39 = *(int *)ppuVar39 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uStack_170 = &PTR_DAT_110b05018;
            ppuStack_158 = pppuVar18[0x41];
            ppuVar39 = pppuVar18[0x40];
            if (ppuStack_158 != (undefined **)0x0) {
              ppuVar16 = ppuStack_158 + -1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
                if (bVar6) {
                  *(int *)ppuVar16 = *(int *)ppuVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar22 = 0;
            ppuStack_160 = &PTR_DAT_110b05018;
            do {
              func_0x0001096b9684(&lStack_1d8,(long)unaff_x24 + lVar22);
              lVar9 = lStack_1d0;
              for (lVar34 = lStack_1d8; lVar34 != lVar9; lVar34 = lVar34 + 0xc) {
                FUN_10aac9f88(lVar34,puVar36);
                ppuStack_208 = &PTR_DAT_110aefb90;
                ppuStack_200 = (undefined **)0x0;
                uStack_1e0 = 0;
                uStack_1f0 = CONCAT44((int)param_2,(int)ppuVar39);
                uStack_1e8 = param_3 & 0xffffffff;
                uStack_1f8 = 7;
                pppuVar18 = (undefined ***)(puVar14 + 6);
                func_0x000107c303b0(pppuVar18,&SUB_1093416e0);
                if (pppuVar18 != unaff_x23) {
                  ppuVar25 = pppuVar18[1];
                  ppuVar16 = ppuVar25;
                  if (((ulong)ppuVar25 & 1) != 0) {
                    ppuVar16 = *(undefined ***)((ulong)ppuVar25 & 0xfffffffffffffffe);
                  }
                  ppuVar32 = ppuStack_200;
                  if (((ulong)ppuStack_200 & 1) != 0) {
                    ppuVar32 = *(undefined ***)((ulong)ppuStack_200 & 0xfffffffffffffffe);
                  }
                  if (ppuVar16 == ppuVar32) {
                    lVar28 = 0;
                    pppuVar18[1] = ppuStack_200;
                    ppuStack_200 = ppuVar25;
                    uVar47 = *(undefined4 *)(pppuVar18 + 2);
                    *(undefined4 *)(pppuVar18 + 2) = (undefined4)uStack_1f8;
                    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,uVar47);
                    do {
                      uVar4 = *(undefined1 *)((long)pppuVar18 + lVar28 + 0x18);
                      *(undefined1 *)((long)pppuVar18 + lVar28 + 0x18) =
                           *(undefined1 *)((long)&uStack_1f0 + lVar28);
                      *(undefined1 *)((long)&uStack_1f0 + lVar28) = uVar4;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 0x11);
                  }
                  else {
                    func_0x000109340dd8(pppuVar18);
                    func_0x000109340c8c(pppuVar18,&ppuStack_208);
                  }
                }
                if (((ulong)ppuStack_200 & 1) != 0) {
                  func_0x0001053936ac(&ppuStack_200);
                }
              }
              if (lStack_1d8 != 0) {
                lStack_1d0 = lStack_1d8;
                __ZdlPv(lStack_1d8);
              }
              lVar22 = lVar22 + 0x10;
            } while (lVar22 != 0x30);
            lVar22 = 0x20;
            do {
              *(undefined ***)((long)unaff_x24 + lVar22) = &PTR_SUB_110b01d60;
              func_0x000107c2acd4((long)unaff_x24 + lVar22);
              fVar41 = (float)param_3;
              fVar40 = SUB84(param_2,0);
              fVar38 = SUB84(ppuVar39,0);
              lVar22 = lVar22 + -0x10;
            } while (lVar22 != -0x10);
            *(undefined4 *)((long)puVar14 + 0x15c) = 4;
            *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 0x8000010;
            pppuVar18 = pppuStack_2c8;
            uVar24 = puVar14[0x1a];
            if (uVar24 == 0) {
              uVar24 = puVar14[1];
              if ((uVar24 & 1) != 0) {
                uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
              }
              func_0x00010933b59c();
              puVar14[0x1a] = uVar24;
            }
            func_0x0001096bb814(pppuVar18[0x39] + 6);
            fVar42 = param_4 * param_4 + fVar38 * fVar38 + fVar40 * fVar40 + fVar41 * fVar41;
            if (fVar42 == 0.0) {
              param_4 = 1.0;
              fVar38 = 0.0;
              fVar40 = 0.0;
              fVar41 = 0.0;
            }
            else {
              fVar42 = 1.0 / SQRT(fVar42);
              param_4 = param_4 * fVar42;
              fVar38 = fVar38 * fVar42;
              fVar40 = fVar40 * fVar42;
              fVar41 = fVar41 * fVar42;
            }
            fVar43 = *(float *)((long)puVar36 + 0x24);
            fVar48 = *(float *)(puVar36 + 7);
            fVar49 = *(float *)((long)puVar36 + 0x4c);
            fVar50 = (fVar43 - fVar48) - fVar49;
            fVar52 = (fVar48 - fVar43) - fVar49;
            fVar42 = (fVar49 - fVar43) - fVar48;
            fVar49 = fVar43 + fVar48 + fVar49;
            fVar43 = fVar50;
            if (fVar50 <= fVar49) {
              fVar43 = fVar49;
            }
            bVar7 = 2;
            if (fVar52 <= fVar43) {
              fVar52 = fVar43;
              bVar7 = fVar49 < fVar50;
            }
            bVar8 = 3;
            if (fVar42 <= fVar52) {
              fVar42 = fVar52;
              bVar8 = bVar7;
            }
            fVar44 = SQRT(fVar42 + 1.0) * 0.5;
            fVar50 = 0.25 / fVar44;
            fVar48 = (*(float *)((long)puVar36 + 0x44) - *(float *)((long)puVar36 + 0x2c)) * fVar50;
            fVar51 = (*(float *)(puVar36 + 5) + *(float *)((long)puVar36 + 0x34)) * fVar50;
            fVar53 = (*(float *)((long)puVar36 + 0x3c) + *(float *)(puVar36 + 9)) * fVar50;
            fVar49 = (*(float *)(puVar36 + 5) - *(float *)((long)puVar36 + 0x34)) * fVar50;
            fVar46 = (*(float *)((long)puVar36 + 0x2c) + *(float *)((long)puVar36 + 0x44)) * fVar50;
            fVar45 = fVar48;
            fVar42 = fVar53;
            fVar52 = fVar44;
            fVar43 = fVar51;
            if (bVar8 != 2) {
              fVar45 = fVar49;
              fVar42 = fVar44;
              fVar52 = fVar53;
              fVar43 = fVar46;
            }
            fVar50 = (*(float *)((long)puVar36 + 0x3c) - *(float *)(puVar36 + 9)) * fVar50;
            fVar53 = fVar44;
            if (bVar8 != 0) {
              fVar53 = fVar50;
              fVar49 = fVar46;
              fVar48 = fVar51;
              fVar50 = fVar44;
            }
            if (bVar8 < 2) {
              fVar45 = fVar53;
              fVar42 = fVar49;
              fVar52 = fVar48;
              fVar43 = fVar50;
            }
            iVar33 = 0;
            fVar49 = fVar52 * fVar52 + fVar42 * fVar42 + fVar43 * fVar43 + fVar45 * fVar45;
            fVar45 = fVar45 / fVar49;
            fVar43 = -fVar43 / fVar49;
            fVar52 = -fVar52 / fVar49;
            fVar49 = -fVar42 / fVar49;
            fVar50 = (fVar45 * -4.371139e-08 - fVar43) + fVar52 * -0.0 + fVar49 * -0.0;
            fVar44 = fVar45 + fVar43 * -4.371139e-08 + fVar49 * 0.0 + fVar52 * -0.0;
            fVar46 = (fVar45 * 0.0 + fVar52 * -4.371139e-08 + fVar43 * 0.0) - fVar49;
            fVar42 = fVar52 + fVar45 * 0.0 + fVar49 * -4.371139e-08 + fVar43 * -0.0;
            fVar52 = ((-(fVar44 * fVar38) + param_4 * fVar50) - fVar40 * fVar46) - fVar41 * fVar42;
            fVar49 = (param_4 * fVar44 + fVar38 * fVar50 + fVar41 * fVar46) - fVar40 * fVar42;
            fVar48 = (param_4 * fVar46 + fVar40 * fVar50 + fVar38 * fVar42) - fVar41 * fVar44;
            fVar38 = (param_4 * fVar42 + fVar41 * fVar50 + fVar40 * fVar44) - fVar38 * fVar46;
            fVar41 = fVar49 * fVar49;
            param_2 = (undefined *)(ulong)(uint)fVar41;
            fVar42 = fVar48 * fVar48;
            param_3 = (ulong)(uint)fVar42;
            fVar40 = fVar49 * fVar48 + fVar52 * fVar38;
            uStack_180 = (undefined **)
                         CONCAT44(fVar40 + fVar40,(fVar42 + fVar38 * fVar38) * -2.0 + 1.0);
            fVar43 = fVar49 * fVar38 - fVar52 * fVar48;
            fVar40 = fVar49 * fVar48 - fVar52 * fVar38;
            uStack_178 = (undefined **)CONCAT44(fVar40 + fVar40,fVar43 + fVar43);
            fVar40 = fVar49 * fVar52 + fVar48 * fVar38;
            uStack_170 = (undefined **)
                         CONCAT44(fVar40 + fVar40,(fVar41 + fVar38 * fVar38) * -2.0 + 1.0);
            fVar40 = fVar49 * fVar38 + fVar52 * fVar48;
            param_4 = fVar48 * fVar38 - fVar49 * fVar52;
            param_4 = param_4 + param_4;
            uStack_168 = (undefined **)CONCAT44(param_4,fVar40 + fVar40);
            fVar38 = (fVar41 + fVar42) * -2.0 + 1.0;
            uVar15 = (ulong)(uint)fVar38;
            ppuStack_160 = (undefined **)CONCAT44(ppuStack_160._4_4_,fVar38);
            do {
              lVar22 = 0;
              unaff_x26 = (undefined ***)0x0;
              do {
                puVar1 = (undefined4 *)((long)&uStack_178 + (long)unaff_x26 * 0xc);
                if (iVar33 != 2) {
                  puVar1 = (undefined4 *)((long)unaff_x24 + lVar22);
                }
                puVar2 = (undefined4 *)((long)&uStack_180 + (long)unaff_x26 * 0xc + 4);
                if (iVar33 != 1) {
                  puVar2 = puVar1;
                }
                uVar47 = *puVar2;
                uVar23 = *(uint *)(uVar24 + 0xd8);
                uVar3 = *(uint *)(uVar24 + 0xdc);
                puVar19 = (ulong *)(ulong)uVar3;
                if (uVar23 == uVar3) {
                  func_0x000109311970(uVar24 + 0xd8,puVar19,uVar3 + 1);
                  uVar23 = *(uint *)(uVar24 + 0xd8);
                }
                *(uint *)(uVar24 + 0xd8) = uVar23 + 1;
                *(undefined4 *)(*(long *)(uVar24 + 0xe0) + (long)(int)uVar23 * 4) = uVar47;
                unaff_x26 = (undefined ***)((long)unaff_x26 + 1);
                lVar22 = lVar22 + 0xc;
              } while (lVar22 != 0x24);
              iVar33 = iVar33 + 1;
              pppuVar13 = pppuStack_2c8;
              pppuVar30 = pppuStack_2d0;
              pppuVar18 = pppuStack_2d8;
            } while (iVar33 != 3);
          }
          pppuVar29 = pppuVar13 + 0x44;
        } while (pppuVar13 + 0x44 != pppuVar18);
      }
      func_0x00010933df00(auStack_1b0);
      if (pppuStack_2e0 < pppuStack_2e8[2]) {
        pppuVar29 = &ppuStack_2c0;
        puVar19 = (ulong *)0x0;
        func_0x0001093a1fb8();
        pppuVar13 = pppuStack_2e0;
      }
      else {
        lVar22 = (long)pppuStack_2e0 - (long)*pppuStack_2e8;
        pppuVar29 = (undefined ***)((lVar22 >> 3) * -0x2c8590b21642c859 + 1);
        if ((undefined ***)0x1642c8590b21642 < pppuVar29) {
          FUN_10aadad48();
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10aacb204);
          (*pcVar10)();
        }
        lVar34 = (long)pppuStack_2e8[2] - (long)*pppuStack_2e8 >> 3;
        pppuVar30 = (undefined ***)(lVar34 * -0x590b21642c8590b2);
        if (pppuVar30 < pppuVar29 || (long)pppuVar30 - (long)pppuVar29 == 0) {
          pppuVar30 = pppuVar29;
        }
        if (0xb21642c8590b20 < (ulong)(lVar34 * -0x2c8590b21642c859)) {
          pppuVar30 = (undefined ***)0x1642c8590b21642;
        }
        if (pppuVar30 == (undefined ***)0x0) {
          puStack_300 = (ulong *)0x0;
        }
        else {
          func_0x00010aadad5c();
          puStack_300 = puVar19;
        }
        pppuVar13 = (undefined ***)((long)pppuVar30 + lVar22);
        pppuVar29 = &ppuStack_2c0;
        puVar19 = (ulong *)0x0;
        pppuStack_2c8 = pppuVar30;
        func_0x0001093a1fb8(pppuVar13);
        pppuVar17 = pppuStack_2e0;
        unaff_x26 = (undefined ***)*pppuStack_2e8;
        ppuVar39 = (undefined **)((long)pppuVar13 + ((long)unaff_x26 - (long)pppuStack_2e0));
        ppuVar16 = ppuVar39;
        pppuVar30 = unaff_x26;
        if (pppuStack_2e0 != unaff_x26) {
          do {
            puVar19 = (ulong *)0x0;
            pppuVar29 = pppuVar30;
            func_0x0001093a1fb8(ppuVar16);
            pppuVar18 = pppuStack_2d8;
            pppuVar30 = pppuVar30 + 0x17;
            ppuVar16 = ppuVar16 + 0x17;
          } while (pppuVar30 != pppuVar17);
          do {
            func_0x00010930ef1c(unaff_x26);
            unaff_x26 = unaff_x26 + 0x17;
          } while (unaff_x26 != pppuVar17);
          unaff_x26 = (undefined ***)*pppuStack_2e8;
        }
        *pppuStack_2e8 = ppuVar39;
        pppuStack_2e8[2] = (undefined **)(pppuStack_2c8 + (long)puStack_300 * 0x17);
        pppuVar30 = pppuStack_2d0;
        if (unaff_x26 != (undefined ***)0x0) {
          __ZdlPv(unaff_x26);
          pppuVar30 = pppuStack_2d0;
        }
      }
      pppuStack_2e0 = pppuVar13 + 0x17;
      unaff_x25 = 0x1642c8590b21642;
      pppuStack_2e8[1] = (undefined **)pppuStack_2e0;
      pppuVar13 = &ppuStack_2c0;
      func_0x00010930ef1c();
      puVar36 = puVar36 + 0x10;
    } while (puVar36 != puStack_2f8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return pppuVar13;
  }
  ___stack_chk_fail();
  func_0x00010930ef1c(&ppuStack_2c0);
  func_0x00010aadada4(pppuStack_2e8);
  __Unwind_Resume(pppuVar13);
  pppuVar18 = pppuVar13;
  func_0x000104bd46a0();
  pcStack_318 = FUN_10aacb314;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(pppuVar18 + 2) = 0;
  *(undefined2 *)((long)pppuVar18 + 0x14) = 0x101;
  *(undefined1 *)((long)pppuVar18 + 0x16) = 2;
  *(undefined1 *)(pppuVar18 + 3) = 0;
  *(undefined1 *)(pppuVar18 + 6) = 0;
  *(undefined1 *)(pppuVar18 + 7) = 0;
  *(undefined1 *)(pppuVar18 + 0x12) = 0;
  *(undefined1 *)(pppuVar18 + 0x13) = 0;
  pppuVar18[0x15] = (undefined **)0x0;
  pppuVar18[0x16] = (undefined **)0x0;
  pppuVar18[0x14] = (undefined **)0x0;
  *pppuVar18 = (undefined **)0x0;
  pppuVar18[1] = (undefined **)0xffffffff3da9fbe7;
  pppuVar17 = pppuVar18;
  pppuStack_360 = unaff_x26;
  uStack_358 = unaff_x25;
  puStack_350 = unaff_x24;
  pppuStack_348 = unaff_x23;
  puStack_340 = puVar36;
  ppppuStack_338 = ppppuVar35;
  pppuStack_330 = pppuVar13;
  pppuStack_328 = pppuVar30;
  ppuStack_320 = &puStack_b0;
  if (pppuVar29 != (undefined ***)0x0) {
    puVar36 = puVar19 + (long)pppuVar29 * 0xb;
    do {
      uVar15 = (ulong)*(char *)((long)puVar19 + 0x17);
      puVar26 = puVar19;
      if ((long)uVar15 < 0) {
        uVar15 = puVar19[1];
        puVar26 = (ulong *)*puVar19;
      }
      if (((uVar15 == 9) && (*puVar26 == 0x646f427265707075 && (char)puVar26[1] == 'y')) &&
         (0 < (int)puVar19[5])) {
        iVar33 = 0;
        do {
          uStack_388 = 0;
          uStack_380 = 0x500;
          uStack_37c = 0;
          uStack_378 = 0;
          uStack_374 = 3;
          uStack_370 = 0;
          uStack_36c = 0;
          appuStack_3c0[0]._0_4_ = iVar33;
          FUN_10a4c3c44(pppuVar18,appuStack_3c0);
          pppuVar17 = appuStack_3c0;
          FUN_10a22d0f8();
          iVar33 = iVar33 + 1;
        } while (iVar33 < (int)puVar19[5]);
      }
      puVar19 = puVar19 + 0xb;
    } while (puVar19 != puVar36);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return pppuVar17;
  }
  ___stack_chk_fail();
  pppuVar18 = pppuVar17;
  if (pppuVar17 != (undefined ***)0x0) {
    if (((*(byte *)(pppuVar17 + 2) >> 1 & 1) != 0) && ((*(byte *)(pppuVar17[10] + 2) >> 2 & 1) != 0)
       ) {
      puVar27 = pppuVar17[10][5];
      puVar27[0x48] = 0;
      *(uint *)(puVar27 + 0x10) = *(uint *)(puVar27 + 0x10) | 8;
    }
    pppuVar18 = pppuVar17 + 6;
    pppuVar29 = pppuVar18;
    if (((ulong)*pppuVar18 & 1) != 0) {
      pppuVar29 = (undefined ***)((long)*pppuVar18 + 7);
    }
    if (*(int *)(pppuVar17 + 7) != 0) {
      lVar22 = (long)*(int *)(pppuVar17 + 7) << 3;
      do {
        pppuVar18 = (undefined ***)*pppuVar29;
        FUN_10aacb474(pppuVar18);
        lVar22 = lVar22 + -8;
        pppuVar29 = pppuVar29 + 1;
      } while (lVar22 != 0);
    }
  }
  return pppuVar18;
}



/* Entry: 10aaca728; end: 10aacb313;  */

/* WARNING: Removing unreachable block (ram,0x00010aacaaa4) */

void FUN_10aaca728(undefined8 param_1,undefined *param_2,ulong param_3,float param_4,
                  undefined ***param_5,ulong *param_6,long param_7,ulong param_8,long param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  undefined ***pppuVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  undefined **ppuVar20;
  long lVar21;
  ulong *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined **ppuVar28;
  int iVar29;
  undefined8 *unaff_x19;
  long lVar30;
  undefined8 unaff_x21;
  ulong *unaff_x22;
  undefined ***unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined ***unaff_x26;
  undefined8 *puVar31;
  ulong uVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined **appuStack_320 [7];
  undefined4 uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined1 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 uStack_2d0;
  undefined1 uStack_2cc;
  long lStack_2c8;
  undefined ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined ***pppuStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_298;
  undefined ***pppuStack_290;
  undefined8 *puStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  ulong uStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  long lStack_250;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  ulong uStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [24];
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = (undefined **)0x0;
  param_5[1] = (undefined **)0x0;
  param_5[2] = (undefined **)0x0;
  pppuVar13 = (undefined ***)0x0;
  uStack_268 = param_8;
  lStack_250 = param_9;
  pppuStack_248 = param_5;
  if (param_7 != 0) {
    pppuStack_240 = (undefined ***)0x0;
    param_8 = param_8 + param_9 * 0x220;
    unaff_x24 = &uStack_e0;
    unaff_x19 = &uStack_c8;
    unaff_x23 = &ppuStack_168;
    puStack_258 = param_6 + param_7 * 0x10;
    unaff_x21 = 0xc;
    unaff_x22 = param_6;
    uStack_238 = param_8;
    puStack_230 = unaff_x19;
    do {
      puVar16 = unaff_x22;
      FUN_10aaca31c(auStack_110);
      ppuStack_220 = &PTR_DAT_110aeb838;
      uStack_218 = 0;
      uVar18 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1dc = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1d4 = 1;
      uStack_1cc = 1;
      puStack_1c8 = &DAT_10e5b4a18;
      uStack_1c0 = 0;
      puStack_1b8 = &DAT_11383d918;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_170 = 0;
      uVar26 = uStack_268;
      if (lStack_250 != 0) {
        do {
          uVar42 = (undefined4)uVar18;
          uVar27 = uVar26;
          if ((*(long *)(uVar26 + 0x1d8) != 0 && *(long *)(uVar26 + 0x208) != 0) &&
             (*(long *)(uVar26 + 0x218) != 0)) {
            puVar12 = &uStack_208;
            uStack_228 = uVar26;
            func_0x000107c303b0(puVar12,&UNK_109312438);
            *(undefined4 *)((long)puVar12 + 0x134) = 0x3f800000;
            uVar17 = *(uint *)(puVar12 + 2);
            *(undefined1 *)((long)puVar12 + 0x13c) = 1;
            *(uint *)(puVar12 + 2) = uVar17 | 0xa0000;
            uVar26 = uStack_228;
            *(undefined4 *)((long)puVar12 + 0x144) = *(undefined4 *)(uStack_228 + 4);
            *(uint *)(puVar12 + 2) = uVar17 | 0x2a0000;
            func_0x0001096b966c(uVar26 + 0x1d0,0x51);
            uStack_118 = SUB84(param_2,0);
            uStack_114 = (undefined4)param_3;
            uStack_11c = uVar42;
            FUN_10aac9f88(&uStack_11c,unaff_x22);
            uStack_e0 = &PTR_DAT_110aefb90;
            uStack_d8 = 0;
            uStack_b8 = uStack_b8 & 0xffffffffffffff00;
            uStack_c8 = CONCAT44((int)param_2,uVar42);
            ppuStack_c0 = (undefined **)(param_3 & 0xffffffff);
            uStack_d0 = (undefined **)0x7;
            *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | 2;
            puVar31 = (undefined8 *)puVar12[0x17];
            if (puVar31 == (undefined8 *)0x0) {
              puVar31 = (undefined8 *)puVar12[1];
              if (((ulong)puVar31 & 1) != 0) {
                puVar31 = *(undefined8 **)((ulong)puVar31 & 0xfffffffffffffffe);
              }
              func_0x0001093416e0();
              puVar12[0x17] = puVar31;
            }
            if (puVar31 != unaff_x24) {
              uVar18 = puVar31[1];
              uVar26 = uVar18;
              if ((uVar18 & 1) != 0) {
                uVar26 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
              }
              uVar27 = uStack_d8;
              if ((uStack_d8 & 1) != 0) {
                uVar27 = *(ulong *)(uStack_d8 & 0xfffffffffffffffe);
              }
              if (uVar26 == uVar27) {
                lVar30 = 0;
                puVar31[1] = uStack_d8;
                uStack_d8 = uVar18;
                uVar42 = *(undefined4 *)(puVar31 + 2);
                *(undefined4 *)(puVar31 + 2) = (undefined4)uStack_d0;
                uStack_d0 = (undefined **)CONCAT44(uStack_d0._4_4_,uVar42);
                do {
                  uVar4 = *(undefined1 *)((long)puVar31 + lVar30 + 0x18);
                  *(undefined1 *)((long)puVar31 + lVar30 + 0x18) =
                       *(undefined1 *)((long)unaff_x19 + lVar30);
                  *(undefined1 *)((long)unaff_x19 + lVar30) = uVar4;
                  lVar30 = lVar30 + 1;
                } while (lVar30 != 0x11);
              }
              else {
                func_0x000109340dd8(puVar31);
                func_0x000109340c8c(puVar31,&uStack_e0);
              }
            }
            if ((uStack_d8 & 1) != 0) {
              func_0x0001053936ac(&uStack_d8);
            }
            *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | 2;
            uVar26 = uStack_228;
            uVar18 = puVar12[0x17];
            if (uVar18 == 0) {
              uVar18 = puVar12[1];
              if ((uVar18 & 1) != 0) {
                uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
              }
              func_0x0001093416e0();
              puVar12[0x17] = uVar18;
            }
            fVar33 = *(float *)(uVar18 + 0x20);
            if (0.0 < fVar33) {
              ppuVar24 = &PTR_PTR_1132d8bd0;
              if (ppuStack_f8 != (undefined **)0x0) {
                ppuVar24 = ppuStack_f8;
              }
              ppuVar20 = &PTR_PTR_1132d8bd0;
              if (ppuStack_f0 != (undefined **)0x0) {
                ppuVar20 = ppuStack_f0;
              }
              param_3 = *(ulong *)(uVar18 + 0x18);
              param_2 = ppuVar20[3];
              *(ulong *)(uVar18 + 0x18) =
                   CONCAT44(((float)((ulong)ppuVar24[3] >> 0x20) * (float)(param_3 >> 0x20)) /
                            fVar33 + (float)((ulong)param_2 >> 0x20),
                            (SUB84(ppuVar24[3],0) * (float)param_3) / fVar33 + SUB84(param_2,0));
              *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 3;
            }
            *(undefined4 *)((long)puVar12 + 0x154) = 3;
            *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | 0x2000000;
            puVar12 = puVar12 + 9;
            func_0x000107c303b0(puVar12,&UNK_109312438);
            uStack_d0 = (undefined **)CONCAT17(4,(undefined7)uStack_d0);
            uStack_e0 = (undefined **)CONCAT35(uStack_e0._5_3_,0x64616568);
            *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | 1;
            uVar18 = puVar12[1];
            if ((uVar18 & 1) != 0) {
              uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
            }
            func_0x000107c3024c(puVar12 + 0x16,&uStack_e0,uVar18);
            uStack_d8 = *(long *)(uVar26 + 0x1d8);
            if (uStack_d8 != 0) {
              piVar19 = (int *)(uStack_d8 + -8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar6) {
                  *piVar19 = *piVar19 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uStack_e0 = &PTR_DAT_110b05018;
            uStack_c8 = *(long *)(uVar26 + 0x218);
            if (uStack_c8 != 0) {
              piVar19 = (int *)(uStack_c8 + -8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar6) {
                  *piVar19 = *piVar19 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uStack_d0 = &PTR_DAT_110b05018;
            uStack_b8 = *(ulong *)(uVar26 + 0x208);
            uVar34 = *(undefined8 *)(uVar26 + 0x200);
            if (uStack_b8 != 0) {
              piVar19 = (int *)(uStack_b8 - 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar6) {
                  *piVar19 = *piVar19 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar30 = 0;
            ppuStack_c0 = &PTR_DAT_110b05018;
            do {
              func_0x0001096b9684(&lStack_138,(long)unaff_x24 + lVar30);
              lVar10 = lStack_130;
              for (lVar21 = lStack_138; lVar21 != lVar10; lVar21 = lVar21 + 0xc) {
                FUN_10aac9f88(lVar21,unaff_x22);
                ppuStack_168 = &PTR_DAT_110aefb90;
                ppuStack_160 = (undefined **)0x0;
                uStack_140 = 0;
                uStack_150 = CONCAT44((int)param_2,(int)uVar34);
                uStack_148 = param_3 & 0xffffffff;
                uStack_158 = 7;
                pppuVar13 = (undefined ***)(puVar12 + 6);
                func_0x000107c303b0(pppuVar13,&SUB_1093416e0);
                if (pppuVar13 != unaff_x23) {
                  ppuVar20 = pppuVar13[1];
                  ppuVar24 = ppuVar20;
                  if (((ulong)ppuVar20 & 1) != 0) {
                    ppuVar24 = *(undefined ***)((ulong)ppuVar20 & 0xfffffffffffffffe);
                  }
                  ppuVar28 = ppuStack_160;
                  if (((ulong)ppuStack_160 & 1) != 0) {
                    ppuVar28 = *(undefined ***)((ulong)ppuStack_160 & 0xfffffffffffffffe);
                  }
                  if (ppuVar24 == ppuVar28) {
                    lVar25 = 0;
                    pppuVar13[1] = ppuStack_160;
                    ppuStack_160 = ppuVar20;
                    uVar42 = *(undefined4 *)(pppuVar13 + 2);
                    *(undefined4 *)(pppuVar13 + 2) = (undefined4)uStack_158;
                    uStack_158 = CONCAT44(uStack_158._4_4_,uVar42);
                    do {
                      uVar4 = *(undefined1 *)((long)pppuVar13 + lVar25 + 0x18);
                      *(undefined1 *)((long)pppuVar13 + lVar25 + 0x18) =
                           *(undefined1 *)((long)&uStack_150 + lVar25);
                      *(undefined1 *)((long)&uStack_150 + lVar25) = uVar4;
                      lVar25 = lVar25 + 1;
                    } while (lVar25 != 0x11);
                  }
                  else {
                    func_0x000109340dd8(pppuVar13);
                    func_0x000109340c8c(pppuVar13,&ppuStack_168);
                  }
                }
                if (((ulong)ppuStack_160 & 1) != 0) {
                  func_0x0001053936ac(&ppuStack_160);
                }
              }
              if (lStack_138 != 0) {
                lStack_130 = lStack_138;
                __ZdlPv(lStack_138);
              }
              lVar30 = lVar30 + 0x10;
            } while (lVar30 != 0x30);
            lVar30 = 0x20;
            do {
              *(undefined ***)((long)unaff_x24 + lVar30) = &PTR_SUB_110b01d60;
              func_0x000107c2acd4((long)unaff_x24 + lVar30);
              fVar36 = (float)param_3;
              fVar35 = SUB84(param_2,0);
              fVar33 = (float)uVar34;
              lVar30 = lVar30 + -0x10;
            } while (lVar30 != -0x10);
            *(undefined4 *)((long)puVar12 + 0x15c) = 4;
            *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | 0x8000010;
            uVar26 = uStack_228;
            uVar32 = puVar12[0x1a];
            if (uVar32 == 0) {
              uVar32 = puVar12[1];
              if ((uVar32 & 1) != 0) {
                uVar32 = *(ulong *)(uVar32 & 0xfffffffffffffffe);
              }
              func_0x00010933b59c();
              puVar12[0x1a] = uVar32;
            }
            func_0x0001096bb814(*(long *)(uVar26 + 0x1c8) + 0x30);
            fVar37 = param_4 * param_4 + fVar33 * fVar33 + fVar35 * fVar35 + fVar36 * fVar36;
            if (fVar37 == 0.0) {
              param_4 = 1.0;
              fVar33 = 0.0;
              fVar35 = 0.0;
              fVar36 = 0.0;
            }
            else {
              fVar37 = 1.0 / SQRT(fVar37);
              param_4 = param_4 * fVar37;
              fVar33 = fVar33 * fVar37;
              fVar35 = fVar35 * fVar37;
              fVar36 = fVar36 * fVar37;
            }
            fVar38 = *(float *)((long)unaff_x22 + 0x24);
            fVar43 = *(float *)(unaff_x22 + 7);
            fVar44 = *(float *)((long)unaff_x22 + 0x4c);
            fVar45 = (fVar38 - fVar43) - fVar44;
            fVar47 = (fVar43 - fVar38) - fVar44;
            fVar37 = (fVar44 - fVar38) - fVar43;
            fVar44 = fVar38 + fVar43 + fVar44;
            fVar38 = fVar45;
            if (fVar45 <= fVar44) {
              fVar38 = fVar44;
            }
            bVar7 = 2;
            if (fVar47 <= fVar38) {
              fVar47 = fVar38;
              bVar7 = fVar44 < fVar45;
            }
            bVar8 = 3;
            if (fVar37 <= fVar47) {
              fVar37 = fVar47;
              bVar8 = bVar7;
            }
            fVar39 = SQRT(fVar37 + 1.0) * 0.5;
            fVar45 = 0.25 / fVar39;
            fVar43 = (*(float *)((long)unaff_x22 + 0x44) - *(float *)((long)unaff_x22 + 0x2c)) *
                     fVar45;
            fVar46 = (*(float *)(unaff_x22 + 5) + *(float *)((long)unaff_x22 + 0x34)) * fVar45;
            fVar48 = (*(float *)((long)unaff_x22 + 0x3c) + *(float *)(unaff_x22 + 9)) * fVar45;
            fVar44 = (*(float *)(unaff_x22 + 5) - *(float *)((long)unaff_x22 + 0x34)) * fVar45;
            fVar41 = (*(float *)((long)unaff_x22 + 0x2c) + *(float *)((long)unaff_x22 + 0x44)) *
                     fVar45;
            fVar40 = fVar43;
            fVar37 = fVar48;
            fVar47 = fVar39;
            fVar38 = fVar46;
            if (bVar8 != 2) {
              fVar40 = fVar44;
              fVar37 = fVar39;
              fVar47 = fVar48;
              fVar38 = fVar41;
            }
            fVar45 = (*(float *)((long)unaff_x22 + 0x3c) - *(float *)(unaff_x22 + 9)) * fVar45;
            fVar48 = fVar39;
            if (bVar8 != 0) {
              fVar48 = fVar45;
              fVar44 = fVar41;
              fVar43 = fVar46;
              fVar45 = fVar39;
            }
            if (bVar8 < 2) {
              fVar40 = fVar48;
              fVar37 = fVar44;
              fVar47 = fVar43;
              fVar38 = fVar45;
            }
            iVar29 = 0;
            fVar44 = fVar47 * fVar47 + fVar37 * fVar37 + fVar38 * fVar38 + fVar40 * fVar40;
            fVar40 = fVar40 / fVar44;
            fVar38 = -fVar38 / fVar44;
            fVar47 = -fVar47 / fVar44;
            fVar44 = -fVar37 / fVar44;
            fVar45 = (fVar40 * -4.371139e-08 - fVar38) + fVar47 * -0.0 + fVar44 * -0.0;
            fVar39 = fVar40 + fVar38 * -4.371139e-08 + fVar44 * 0.0 + fVar47 * -0.0;
            fVar41 = (fVar40 * 0.0 + fVar47 * -4.371139e-08 + fVar38 * 0.0) - fVar44;
            fVar37 = fVar47 + fVar40 * 0.0 + fVar44 * -4.371139e-08 + fVar38 * -0.0;
            fVar47 = ((-(fVar39 * fVar33) + param_4 * fVar45) - fVar35 * fVar41) - fVar36 * fVar37;
            fVar44 = (param_4 * fVar39 + fVar33 * fVar45 + fVar36 * fVar41) - fVar35 * fVar37;
            fVar43 = (param_4 * fVar41 + fVar35 * fVar45 + fVar33 * fVar37) - fVar36 * fVar39;
            fVar33 = (param_4 * fVar37 + fVar36 * fVar45 + fVar35 * fVar39) - fVar33 * fVar41;
            fVar36 = fVar44 * fVar44;
            param_2 = (undefined *)(ulong)(uint)fVar36;
            fVar37 = fVar43 * fVar43;
            param_3 = (ulong)(uint)fVar37;
            fVar35 = fVar44 * fVar43 + fVar47 * fVar33;
            uStack_e0 = (undefined **)
                        CONCAT44(fVar35 + fVar35,(fVar37 + fVar33 * fVar33) * -2.0 + 1.0);
            fVar38 = fVar44 * fVar33 - fVar47 * fVar43;
            fVar35 = fVar44 * fVar43 - fVar47 * fVar33;
            uStack_d8 = CONCAT44(fVar35 + fVar35,fVar38 + fVar38);
            fVar35 = fVar44 * fVar47 + fVar43 * fVar33;
            uStack_d0 = (undefined **)
                        CONCAT44(fVar35 + fVar35,(fVar36 + fVar33 * fVar33) * -2.0 + 1.0);
            fVar35 = fVar44 * fVar33 + fVar47 * fVar43;
            param_4 = fVar43 * fVar33 - fVar44 * fVar47;
            param_4 = param_4 + param_4;
            uStack_c8 = CONCAT44(param_4,fVar35 + fVar35);
            fVar33 = (fVar36 + fVar37) * -2.0 + 1.0;
            uVar18 = (ulong)(uint)fVar33;
            ppuStack_c0 = (undefined **)CONCAT44(ppuStack_c0._4_4_,fVar33);
            do {
              lVar30 = 0;
              unaff_x26 = (undefined ***)0x0;
              do {
                puVar1 = (undefined4 *)((long)&uStack_d8 + (long)unaff_x26 * 0xc);
                if (iVar29 != 2) {
                  puVar1 = (undefined4 *)((long)unaff_x24 + lVar30);
                }
                puVar2 = (undefined4 *)((long)&uStack_e0 + (long)unaff_x26 * 0xc + 4);
                if (iVar29 != 1) {
                  puVar2 = puVar1;
                }
                uVar42 = *puVar2;
                uVar17 = *(uint *)(uVar32 + 0xd8);
                uVar3 = *(uint *)(uVar32 + 0xdc);
                puVar16 = (ulong *)(ulong)uVar3;
                if (uVar17 == uVar3) {
                  func_0x000109311970(uVar32 + 0xd8,puVar16,uVar3 + 1);
                  uVar17 = *(uint *)(uVar32 + 0xd8);
                }
                *(uint *)(uVar32 + 0xd8) = uVar17 + 1;
                *(undefined4 *)(*(long *)(uVar32 + 0xe0) + (long)(int)uVar17 * 4) = uVar42;
                unaff_x26 = (undefined ***)((long)unaff_x26 + 1);
                lVar30 = lVar30 + 0xc;
              } while (lVar30 != 0x24);
              iVar29 = iVar29 + 1;
              uVar27 = uStack_228;
              unaff_x19 = puStack_230;
              param_8 = uStack_238;
            } while (iVar29 != 3);
          }
          uVar26 = uVar27 + 0x220;
        } while (uVar27 + 0x220 != param_8);
      }
      func_0x00010933df00(auStack_110);
      if (pppuStack_240 < pppuStack_248[2]) {
        pppuVar13 = &ppuStack_220;
        param_6 = (ulong *)0x0;
        func_0x0001093a1fb8();
        pppuVar15 = pppuStack_240;
      }
      else {
        lVar30 = (long)pppuStack_240 - (long)*pppuStack_248;
        uVar26 = (lVar30 >> 3) * -0x2c8590b21642c859 + 1;
        if (0x1642c8590b21642 < uVar26) {
          FUN_10aadad48();
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10aacb204);
          (*pcVar11)();
        }
        lVar21 = (long)pppuStack_248[2] - (long)*pppuStack_248 >> 3;
        uVar18 = lVar21 * -0x590b21642c8590b2;
        if (uVar18 < uVar26 || uVar18 - uVar26 == 0) {
          uVar18 = uVar26;
        }
        if (0xb21642c8590b20 < (ulong)(lVar21 * -0x2c8590b21642c859)) {
          uVar18 = 0x1642c8590b21642;
        }
        if (uVar18 == 0) {
          puStack_260 = (ulong *)0x0;
        }
        else {
          func_0x00010aadad5c();
          puStack_260 = puVar16;
        }
        pppuVar15 = (undefined ***)(uVar18 + lVar30);
        pppuVar13 = &ppuStack_220;
        param_6 = (ulong *)0x0;
        uStack_228 = uVar18;
        func_0x0001093a1fb8(pppuVar15);
        pppuVar9 = pppuStack_240;
        unaff_x26 = (undefined ***)*pppuStack_248;
        ppuVar24 = (undefined **)((long)pppuVar15 + ((long)unaff_x26 - (long)pppuStack_240));
        ppuVar20 = ppuVar24;
        pppuVar14 = unaff_x26;
        if (pppuStack_240 != unaff_x26) {
          do {
            param_6 = (ulong *)0x0;
            pppuVar13 = pppuVar14;
            func_0x0001093a1fb8(ppuVar20);
            param_8 = uStack_238;
            pppuVar14 = pppuVar14 + 0x17;
            ppuVar20 = ppuVar20 + 0x17;
          } while (pppuVar14 != pppuVar9);
          do {
            func_0x00010930ef1c(unaff_x26);
            unaff_x26 = unaff_x26 + 0x17;
          } while (unaff_x26 != pppuVar9);
          unaff_x26 = (undefined ***)*pppuStack_248;
        }
        *pppuStack_248 = ppuVar24;
        pppuStack_248[2] = (undefined **)(uStack_228 + (long)puStack_260 * 0xb8);
        unaff_x19 = puStack_230;
        if (unaff_x26 != (undefined ***)0x0) {
          __ZdlPv(unaff_x26);
          unaff_x19 = puStack_230;
        }
      }
      pppuStack_240 = pppuVar15 + 0x17;
      unaff_x25 = 0x1642c8590b21642;
      pppuStack_248[1] = (undefined **)pppuStack_240;
      param_5 = &ppuStack_220;
      func_0x00010930ef1c();
      unaff_x22 = unaff_x22 + 0x10;
    } while (unaff_x22 != puStack_258);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010930ef1c(&ppuStack_220);
  func_0x00010aadada4(pppuStack_248);
  __Unwind_Resume(param_5);
  pppuVar14 = param_5;
  func_0x000104bd46a0();
  pcStack_278 = FUN_10aacb314;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(pppuVar14 + 2) = 0;
  *(undefined2 *)((long)pppuVar14 + 0x14) = 0x101;
  *(undefined1 *)((long)pppuVar14 + 0x16) = 2;
  *(undefined1 *)(pppuVar14 + 3) = 0;
  *(undefined1 *)(pppuVar14 + 6) = 0;
  *(undefined1 *)(pppuVar14 + 7) = 0;
  *(undefined1 *)(pppuVar14 + 0x12) = 0;
  *(undefined1 *)(pppuVar14 + 0x13) = 0;
  pppuVar14[0x15] = (undefined **)0x0;
  pppuVar14[0x16] = (undefined **)0x0;
  pppuVar14[0x14] = (undefined **)0x0;
  *pppuVar14 = (undefined **)0x0;
  pppuVar14[1] = (undefined **)0xffffffff3da9fbe7;
  pppuVar15 = pppuVar14;
  pppuStack_2c0 = unaff_x26;
  uStack_2b8 = unaff_x25;
  puStack_2b0 = unaff_x24;
  pppuStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  uStack_298 = unaff_x21;
  pppuStack_290 = param_5;
  puStack_288 = unaff_x19;
  puStack_280 = &stack0xfffffffffffffff0;
  if (pppuVar13 != (undefined ***)0x0) {
    puVar16 = param_6 + (long)pppuVar13 * 0xb;
    do {
      uVar26 = (ulong)*(char *)((long)param_6 + 0x17);
      puVar22 = param_6;
      if ((long)uVar26 < 0) {
        uVar26 = param_6[1];
        puVar22 = (ulong *)*param_6;
      }
      if (((uVar26 == 9) && (*puVar22 == 0x646f427265707075 && (char)puVar22[1] == 'y')) &&
         (0 < (int)param_6[5])) {
        iVar29 = 0;
        do {
          uStack_2e8 = 0;
          uStack_2e0 = 0x500;
          uStack_2dc = 0;
          uStack_2d8 = 0;
          uStack_2d4 = 3;
          uStack_2d0 = 0;
          uStack_2cc = 0;
          appuStack_320[0]._0_4_ = iVar29;
          FUN_10a4c3c44(pppuVar14,appuStack_320);
          pppuVar15 = appuStack_320;
          FUN_10a22d0f8();
          iVar29 = iVar29 + 1;
        } while (iVar29 < (int)param_6[5]);
      }
      param_6 = param_6 + 0xb;
    } while (param_6 != puVar16);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  if (pppuVar15 != (undefined ***)0x0) {
    if (((*(byte *)(pppuVar15 + 2) >> 1 & 1) != 0) && ((*(byte *)(pppuVar15[10] + 2) >> 2 & 1) != 0)
       ) {
      puVar23 = pppuVar15[10][5];
      puVar23[0x48] = 0;
      *(uint *)(puVar23 + 0x10) = *(uint *)(puVar23 + 0x10) | 8;
    }
    ppuVar24 = pppuVar15[6];
    pppuVar13 = pppuVar15 + 6;
    if (((ulong)ppuVar24 & 1) != 0) {
      pppuVar13 = (undefined ***)((long)ppuVar24 + 7);
    }
    if (*(int *)(pppuVar15 + 7) != 0) {
      lVar30 = (long)*(int *)(pppuVar15 + 7) << 3;
      do {
        FUN_10aacb474(*pppuVar13);
        lVar30 = lVar30 + -8;
        pppuVar13 = pppuVar13 + 1;
      } while (lVar30 != 0);
    }
  }
  return;
}


