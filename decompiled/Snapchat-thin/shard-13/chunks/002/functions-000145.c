/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a21ca78; end: 10a21cbff;  */

void FUN_10a21ca78(long *param_1,ulong param_2,ulong param_3,uint *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_120 [24];
  undefined1 *puStack_108;
  ulong uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_c9;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(auStack_c8,*param_1);
  lVar6 = *(long *)(*param_1 + 0xc0);
  if (lVar6 == 0) {
    uStack_d0 = 0;
    FUN_10a239620(auStack_e0,&uStack_c9,&uStack_d0);
    FUN_10a224ec4(*param_1 + 0xc0,auStack_e0);
    if (plStack_d8 != (long *)0x0) {
      plVar1 = plStack_d8 + 1;
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
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      }
    }
    lVar6 = *(long *)(*param_1 + 0xc0);
  }
  lVar7 = *(long *)(lVar6 + 8);
  if (lVar7 == 0) {
    *(uint *)(*(long *)(lVar6 + 0x10) + 0x5f0) = *param_4 ^ 4;
  }
  else {
    *(uint *)(lVar7 + 0x34) = *param_4 ^ 4;
  }
  if (((int)param_3 < 1) || (uVar8 = param_3 >> 0x20, (int)(param_3 >> 0x20) < 1)) {
    bVar3 = (*param_4 & 1) != 0;
    param_3 = param_2;
    if (bVar3) {
      param_3 = param_2 >> 0x20;
    }
    uVar8 = param_2 >> 0x20;
    if (bVar3) {
      uVar8 = param_2 & 0xffffffff;
    }
  }
  uVar8 = param_3 & 0xffffffff | uVar8 << 0x20;
  if (lVar7 == 0) {
    FUN_10a19d398(*(undefined8 *)(lVar6 + 0x10),uVar8);
  }
  else {
    *(ulong *)(lVar7 + 0x2c) = uVar8;
  }
  puVar4 = auStack_c8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a22afb0(auStack_c8);
    puVar5 = puVar4;
    __Unwind_Resume(puVar4);
    pcStack_e8 = FUN_10a21cc00;
    uStack_100 = param_2;
    puStack_f8 = puVar4;
    puStack_f0 = &stack0xfffffffffffffff0;
    FUN_10a22b034(auStack_120);
    FUN_10a21cc60(puVar5,auStack_120);
    puStack_108 = auStack_120;
    FUN_10a22b234(&puStack_108);
    return;
  }
  return;
}



/* Entry: 10a21cc00; end: 10a21cc5f;  */

void FUN_10a21cc00(undefined8 param_1)

{
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  
  FUN_10a22b034(auStack_40);
  FUN_10a21cc60(param_1,auStack_40);
  puStack_28 = auStack_40;
  FUN_10a22b234(&puStack_28);
  return;
}



/* Entry: 10a21cc60; end: 10a21ccd3;  */

void FUN_10a21cc60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a21ccd4(param_1,&uStack_40,1,0);
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_10a22b234(&puStack_28);
  return;
}



/* Entry: 10a21ccd4; end: 10a21d143;  */

void FUN_10a21ccd4(ulong *param_1,long *param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 uVar5;
  ushort uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar14;
  long *plVar15;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  code *pcStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_d8 [128];
  long lStack_58;
  long *plVar13;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar7 = (byte *)0x113836328;
  FUN_10a08f69c();
  if ((*pbVar7 & 1) == 0) {
    uVar10 = *param_1;
    puVar8 = auStack_d8;
    FUN_10a219de8();
    FUN_10ad57cb8();
    if ((uVar10 & 1) == 0) {
      FUN_10ad57c20(&pcStack_120);
      uVar10 = (ulong)(pcStack_120 != (code *)0x0);
      puVar8 = (undefined1 *)((long)pcStack_120 * ((ulong)plStack_118 & 0xffffffff));
    }
    if (((uVar10 & 1) != 0) && ((ulong)puVar8 >> 0x17 < 0x19)) {
      do {
        bVar3 = bRam00000001137ead38;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1137ead38,0x10);
        if (bVar2) {
          bRam00000001137ead38 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      while ((bVar3 & 1) != 0) {
        do {
        } while ((bRam00000001137ead38 & 1) != 0);
        do {
          bVar3 = bRam00000001137ead38;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x1137ead38,0x10);
          if (bVar2) {
            bRam00000001137ead38 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if ((uRam00000001137ead39 & 0x100) == 0) {
        uVar5 = 0xd8;
        (*pcRam00000001137ead50)(0x1137eacd8,uRam00000001137eacf0);
        lStack_128 = CONCAT71(lStack_128._1_7_,uVar5);
        if ((uRam00000001137ead39 & 0x100) == 0) {
          uVar6 = (ushort)&lStack_128;
          (*pcRam00000001137eacf8)();
          pcVar4 = pcRam00000001137ead48;
          uRam00000001137ead39 = uVar6 | 0x100;
          if (pcRam00000001137ead48 != (code *)0x0) {
            pcStack_120 = pcRam00000001137ead48;
            pcRam00000001137ead48 = (code *)0x0;
            FUN_10a234e48(pcVar4,0x1137ead39);
            func_0x0001092b4274(&pcStack_120,pcVar4);
            if ((uRam00000001137ead39 & 0x100) == 0) goto LAB_10a21d0c0;
          }
        }
      }
      bRam00000001137ead38 = 0;
      if ((char)uRam00000001137ead39 == '\x01') {
        FUN_10a21dfec(param_1);
        FUN_10a21e1b8(param_1);
      }
    }
    FUN_10a4eeaf8(*(long *)(*param_1 + 0x208) + 0x10);
    uVar10 = *param_1;
    *(undefined8 *)(uVar10 + 0x238) = 0xffffffffffffffff;
    if (*(char *)(uVar10 + 0x7d1) == '\x01') {
      *(undefined1 *)(uVar10 + 0x7d1) = 0;
    }
    plVar15 = (long *)*param_2;
    plVar9 = (long *)param_2[1];
    plVar12 = plVar15;
    if (plVar15 == plVar9) {
LAB_10a21cf04:
      lStack_130 = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      plStack_140 = plVar15;
      plStack_138 = plVar9;
      FUN_10ad3ff58(uVar10 + 0x178,&plStack_140,param_4);
      pcStack_120 = (code *)&plStack_140;
      FUN_10a22b234(&pcStack_120);
      if (*(char *)(*param_1 + 0x7d8) == '\x01') {
        lVar11 = *(long *)(*param_1 + 0x208);
        if (*(long *)(lVar11 + 0xb8) != 0) {
          puVar14 = *(undefined8 **)(lVar11 + 0xb0);
          if (puVar14 == (undefined8 *)0x0) {
            plStack_118 = (long *)((ulong)plStack_118 & 0xffffffff00000000);
            pcStack_120 = (code *)0x0;
            FUN_10a4ec46c(*(long *)(lVar11 + 0xb8),&pcStack_120);
          }
          else {
            plVar15 = (long *)puVar14[2];
            if (plVar15 == (long *)0x0) {
              plVar15 = (long *)0x20;
              __Znwm();
              *plVar15 = lVar11;
              plVar15[3] = 0x10a235e80;
              pcStack_120 = FUN_10a235e1c;
              plStack_118 = plVar15;
              puStack_110 = puVar14;
              (**(code **)*puVar14)(puVar14,&pcStack_120);
            }
            else {
              lStack_128 = 0;
              (**(code **)(*plVar15 + 0x28))(plVar15,0,&lStack_128);
              if (lStack_128 != 0) {
                func_0x0001092af97c(&lStack_128);
                goto LAB_10a21d0c0;
              }
              plVar9 = (long *)0x28;
              __Znwm();
              *plVar9 = lVar11;
              plVar9[3] = (long)FUN_10a235e74;
              plVar9[4] = (long)plVar15;
              pcStack_120 = FUN_10a235dec;
              plStack_118 = plVar9;
              puStack_110 = puVar14;
              (**(code **)*puVar14)(puVar14,&pcStack_120);
              __ZNSt13exception_ptrD1Ev(&lStack_128);
            }
            lStack_128 = 0;
            __ZNSt13exception_ptrD1Ev(&lStack_128);
          }
        }
      }
      (**(code **)(**(long **)(*param_1 + 0x8b0) + 0x18))();
      if ((*(long *)(*(long *)(*param_1 + 0x180) + 0xb8) != 0) &&
         (lVar11 = *(long *)(*(long *)(*(long *)(*param_1 + 0x180) + 0xa8) + 0x28), lVar11 != 0)) {
        FUN_10a21d508(param_1,*(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xf8) + 0x268) + 0x98));
      }
      FUN_10a22afb0(auStack_d8);
      goto LAB_10a21d078;
    }
    do {
      plVar13 = plVar12 + 2;
      *(undefined1 *)(*plVar12 + 0x30) = param_3;
      plVar12 = plVar13;
    } while (plVar13 != plVar9);
    if (*(long *)(*plVar15 + 0x48) != 0) goto LAB_10a21cf04;
    FUN_10a21d440(&pcStack_120,*(undefined8 *)(uVar10 + 0x8b0));
    if ((long *)param_2[1] != (long *)*param_2) {
      FUN_10a21d4a4(*(long *)*param_2 + 0x48,&pcStack_120);
      plVar15 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar9 = plStack_118 + 1;
        do {
          lVar11 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      uVar10 = *param_1;
      plVar15 = (long *)*param_2;
      plVar9 = (long *)param_2[1];
      goto LAB_10a21cf04;
    }
  }
  else {
LAB_10a21d078:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a22b334();
LAB_10a21d0c0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a21d0c4);
  (*pcVar4)();
}



/* Entry: 10a21d144; end: 10a21d1bb;  */

void FUN_10a21d144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  FUN_10a22b034(auStack_50);
  FUN_10a21ccd4(param_1,auStack_50,param_3,param_4);
  puStack_38 = auStack_50;
  FUN_10a22b234(&puStack_38);
  return;
}



/* Entry: 10a21d1bc; end: 10a21d22f;  */

void FUN_10a21d1bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a21ccd4(param_1,&uStack_40,0,0);
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_10a22b234(&puStack_28);
  return;
}



/* Entry: 10a21d230; end: 10a21d2a3;  */

void FUN_10a21d230(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a21ccd4(param_1,&uStack_40,0,1);
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_10a22b234(&puStack_28);
  return;
}



/* Entry: 10a21d2a4; end: 10a21d43f;  */

void FUN_10a21d2a4(long *param_1,long *param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  long alStack_b8 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_b8,*param_1);
  lVar6 = *param_2;
  *(undefined1 *)(lVar6 + 0x30) = param_3;
  lVar5 = *param_1;
  if ((*(long *)(*(long *)(lVar5 + 0x180) + 0xb8) == 0) && (*(long *)(lVar6 + 0x48) == 0)) {
    FUN_10a21d440(auStack_c8,*(undefined8 *)(lVar5 + 0x8b0));
    FUN_10a21d4a4(*param_2 + 0x48,auStack_c8);
    if (plStack_c0 != (long *)0x0) {
      plVar3 = plStack_c0 + 1;
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
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
      }
    }
    lVar5 = *param_1;
  }
  FUN_10ad413d4(lVar5 + 0x178);
  FUN_10a4eeaf8(*(long *)(*param_1 + 0x208) + 0x10);
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x238) = 0xffffffffffffffff;
  if (*(char *)(lVar5 + 0x7d1) == '\x01') {
    *(undefined1 *)(lVar5 + 0x7d1) = 0;
  }
  (**(code **)(**(long **)(lVar5 + 0x8b0) + 0x18))();
  if ((*(long *)(*(long *)(*param_1 + 0x180) + 0xb8) != 0) &&
     (lVar5 = *(long *)(*(long *)(*(long *)(*param_1 + 0x180) + 0xa8) + 0x28), lVar5 != 0)) {
    param_2 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xf8) + 0x268) + 0x98);
    FUN_10a21d508(param_1);
  }
  plVar3 = alStack_b8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(alStack_b8);
  __Unwind_Resume(plVar3);
  func_0x000104bd46a0();
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bb4238;
  *plVar3 = (long)(puVar4 + 3);
  plVar3[1] = (long)puVar4;
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a21d440; end: 10a21d4a3;  */

void FUN_10a21d440(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bb4238;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a21d4a4; end: 10a21d507;  */

undefined8 * FUN_10a21d4a4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a21d508; end: 10a21d5bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a21d7cc) */
/* WARNING: Removing unreachable block (ram,0x00010a21d874) */

void FUN_10a21d508(long *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *****pppppuVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long *extraout_x8;
  undefined8 *puVar17;
  long *plVar18;
  byte *pbVar19;
  long *unaff_x23;
  code **unaff_x24;
  uint uVar20;
  long *plStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  code **ppcStack_3a0;
  long *plStack_398;
  byte *pbStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined1 ***pppuStack_370;
  code *pcStack_368;
  undefined8 ****ppppuStack_360;
  ulong uStack_358;
  code **ppcStack_350;
  long *plStack_340;
  long *plStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined8 ****ppppuStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined8 ****ppppuStack_300;
  ulong uStack_2f8;
  byte bStack_2e9;
  byte bStack_2e8;
  undefined8 uStack_2e0;
  byte bStack_2d8;
  ulong uStack_2d0;
  byte abStack_2c8 [8];
  long lStack_2c0;
  undefined8 *puStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  long alStack_298 [7];
  undefined8 uStack_260;
  code *pcStack_258;
  undefined **appuStack_250 [7];
  undefined8 uStack_218;
  ulong uStack_210;
  undefined1 auStack_208 [7];
  undefined1 uStack_201;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  long alStack_168 [16];
  long lStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [128];
  long lStack_38;
  ulong *puVar9;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (8 < param_2) {
    param_2 = 0;
  }
  plVar18 = (long *)(ulong)param_2;
  bVar5 = param_2 - 7 < 2;
  pbVar19 = (byte *)(ulong)bVar5;
  FUN_10a219de8(auStack_b8,*param_1);
  lVar15 = *param_1;
  *(bool *)(lVar15 + 0x7d9) = bVar5;
  *(bool *)(*(long *)(lVar15 + 0x180) + 0x10d) = bVar5;
  FUN_10a22afb0(auStack_b8);
  uVar14 = (ulong)(param_2 == 8);
  plVar10 = param_1;
  FUN_10a21df48();
  if (param_2 == 7) {
    *(undefined1 *)(*param_1 + 0x7da) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_c8 = FUN_10a21d5c0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = (ulong)(param_2 == 7);
  plStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10a219de8(alStack_168,*plVar10);
  FUN_10ad40968(*plVar10 + 0x178,uVar14);
  FUN_10a4eeaf8(*(long *)(*plVar10 + 0x208) + 0x10);
  (**(code **)(**(long **)(*plVar10 + 0x8b0) + 0x18))();
  FUN_10a21d694(plVar10);
  plVar10 = alStack_168;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(plVar10);
  func_0x000104bd46a0();
  pcStack_178 = FUN_10a21d694;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar10;
  ppuStack_180 = &puStack_d0;
  FUN_10ad05ac4();
  if ((int)plVar7 < 2) goto LAB_10a21dae8;
  lVar15 = *plVar10;
  if (*(long *)(*(long *)(lVar15 + 0x180) + 0xb8) == 0) {
    unaff_x23 = (long *)0x0;
LAB_10a21d710:
    unaff_x24 = (code **)0x1;
    uVar20 = 1;
  }
  else {
    unaff_x23 = *(long **)(*(long *)(*(long *)(lVar15 + 0x180) + 0xa8) + 0x28);
    if (unaff_x23 == (long *)0x0) goto LAB_10a21d710;
    unaff_x24 = (code **)0x0;
    uVar20 = (uint)((*(ulong *)(lVar15 + 0x238) & 0x1dc0e065b) != 0);
  }
  if (((*(char *)(lVar15 + 0x7d1) == '\x01' && *(byte *)(lVar15 + 2000) == uVar20) ||
      (plVar7 = *(long **)(lVar15 + 0x828), plVar7 == (long *)0x0)) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_2b0 = plVar7, plVar7 == (long *)0x0))
  goto LAB_10a21dae8;
  puVar17 = *(undefined8 **)(lVar15 + 0x820);
  puStack_2b8 = puVar17;
  if (puVar17 != (undefined8 *)0x0) {
    *(ushort *)(*plVar10 + 2000) = (ushort)uVar20 | 0x100;
    abStack_2c8[0] = 0;
    pbVar19 = abStack_2c8;
    lStack_2c0 = 0;
    uStack_2d0 = (ulong)uVar20;
    bStack_2d8 = 4;
    uStack_201 = 8;
    uStack_218 = 0x6465726975716572;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    pbVar8 = abStack_2c8;
    func_0x0001095b7584(pbVar8,&uStack_218);
    bVar1 = *pbVar8;
    *pbVar8 = bStack_2d8;
    uVar14 = *(ulong *)(pbVar8 + 8);
    bStack_2d8 = bVar1;
    *(ulong *)(pbVar8 + 8) = uStack_2d0;
    puVar9 = &uStack_2d0;
    uStack_2d0 = uVar14;
    func_0x000109380ffc(puVar9,bVar1);
    iVar6 = (int)puVar9;
    if (uVar20 == 0) {
      FUN_10ad05ac4();
      if (iVar6 == 3) {
        uStack_2e0 = 0x3c;
      }
      else {
        if (iVar6 != 4) goto LAB_10a21d888;
        uStack_2e0 = 0x78;
      }
      bStack_2e8 = 5;
      uStack_201 = 10;
      uStack_218 = 0x665f7265646e6572;
      uStack_210 = CONCAT53(uStack_210._3_5_,0x7370);
      pbVar8 = abStack_2c8;
      func_0x0001095b7584(pbVar8,&uStack_218);
      bVar1 = *pbVar8;
      *pbVar8 = bStack_2e8;
      uVar16 = *(undefined8 *)(pbVar8 + 8);
      bStack_2e8 = bVar1;
      *(undefined8 *)(pbVar8 + 8) = uStack_2e0;
      uStack_2e0 = uVar16;
      func_0x000109380ffc(&uStack_2e0,bVar1);
    }
LAB_10a21d888:
    FUN_10a0c32e4(&ppppuStack_300,abStack_2c8,0xffffffff,0x20,0,0);
    if ((int)unaff_x24 == 0) {
      lVar15 = unaff_x23[0x1f];
      if (*(char *)(lVar15 + 0x21f) < '\0') {
        func_0x000107c3192c(&ppppuStack_320,*(undefined8 *)(lVar15 + 0x208),
                            *(undefined8 *)(lVar15 + 0x210));
      }
      else {
        uStack_318 = *(ulong *)(lVar15 + 0x210);
        ppppuStack_320 = *(undefined8 *****)(lVar15 + 0x208);
        uStack_310 = *(ulong *)(lVar15 + 0x218);
      }
    }
    else {
      ppppuStack_320 = (undefined8 *****)0x0;
      uStack_318 = 0;
      uStack_310 = 0;
    }
    pppppuVar3 = (undefined8 *****)ppppuStack_300;
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppuVar3 = &ppppuStack_300;
    }
    FUN_10a3bf330(&uStack_2a8,pppppuVar3,uStack_2f8);
    plVar10 = (long *)0x138;
    __Znwm();
    uStack_218 = uStack_2a8;
    unaff_x23 = plVar10 + 1;
    *unaff_x23 = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_FUN_110b9f3b0;
    plVar18 = plVar10 + 3;
    uStack_2a8 = 0;
    uStack_210 = uStack_2a0;
    (**(code **)(alStack_298[0] + 0x10))(auStack_208,alStack_298);
    uStack_1d0 = uStack_260;
    uStack_358 = uStack_318;
    ppppuStack_360 = ppppuStack_320;
    if (-1 < (long)uStack_310) {
      uStack_358 = uStack_310 >> 0x38;
      ppppuStack_360 = &ppppuStack_320;
    }
    unaff_x24 = &pcStack_258;
    pcStack_258 = FUN_10a2371bc;
    appuStack_250[0] = &PTR_FUN_110bb4718;
    ppcStack_350 = unaff_x24;
    FUN_10a23708c(plVar18,&UNK_10e49ebb0,0x2b,"POST",4,&uStack_218,1);
    (*(code *)*appuStack_250[0])(appuStack_250);
    FUN_10a042634(&uStack_218);
    plStack_330 = plVar18;
    plStack_328 = plVar10;
    FUN_10a042634(&uStack_2a8);
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
      if (bVar5) {
        *unaff_x23 = *unaff_x23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_340 = plVar18;
    plStack_338 = plVar10;
    (**(code **)*puVar17)(puVar17,&plStack_340);
    plVar18 = plStack_338;
    if (plStack_338 != (long *)0x0) {
      plVar7 = plStack_338 + 1;
      do {
        lVar15 = *plVar7;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_338 + 0x10))(plStack_338);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    plVar18 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      plVar7 = plStack_328 + 1;
      do {
        lVar15 = *plVar7;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    if ((long)uStack_310 < 0) {
      __ZdlPv(ppppuStack_320);
    }
    if ((char)bStack_2e9 < '\0') {
      __ZdlPv(ppppuStack_300);
    }
    plVar7 = &lStack_2c0;
    func_0x000109380ffc(plVar7,abStack_2c8[0]);
    plVar18 = plStack_2b0;
    if (plStack_2b0 == (long *)0x0) goto LAB_10a21dae8;
  }
  plVar18 = plStack_2b0;
  plVar11 = plStack_2b0 + 1;
  do {
    lVar15 = *plVar11;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
    plVar7 = plVar18;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a21dae8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_2e9 < '\0') {
    __ZdlPv(ppppuStack_300);
  }
  puVar17 = (undefined8 *)(ulong)abStack_2c8[0];
  func_0x000109380ffc(pbVar19 + 8);
  func_0x00010a05a8c4(&puStack_2b8);
  plVar11 = plVar7;
  __Unwind_Resume();
  pcStack_368 = FUN_10a21dc08;
  plVar12 = plVar11;
  ppcStack_3a0 = unaff_x24;
  plStack_398 = unaff_x23;
  pbStack_390 = pbVar19;
  plStack_388 = plVar18;
  plStack_380 = plVar10;
  plStack_378 = plVar7;
  pppuStack_370 = &ppuStack_180;
  FUN_10ad055a0();
  if (((ulong)plVar12 & 1) == 0) {
    plStack_378 = extraout_x8;
    if ((bRam00000001138334e0 & 1) == 0) {
      iVar6 = 0x138334e0;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        FUN_109d1b1bc();
        ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
        ___cxa_guard_release(0x1138334e0);
      }
    }
    lVar15 = lRam00000001138334d8;
    *plStack_378 = lRam00000001138334d8;
    if (lVar15 != 0) {
      plVar18 = (long *)(lVar15 + 8);
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar14 = puVar17[1];
  puVar4 = (undefined8 *)*puVar17;
  if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
    uVar14 = (ulong)*(byte *)((long)puVar17 + 0x17);
    puVar4 = puVar17;
  }
  FUN_10ae03140(0,puVar4,uVar14);
  ppuVar13 = &PTR_PTR_1133008b8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar13,&PTR_PTR_1133008b8);
  iVar6 = (int)ppuVar13;
  func_0x00010ad0561c();
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a21de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*plVar11 + 0x30) + 0x40))
              (extraout_x8,*(long **)(*plVar11 + 0x30),puVar17);
    return;
  }
  (**(code **)(**(long **)(*plVar11 + 0x30) + 0x40))
            (&plStack_3c8,*(long **)(*plVar11 + 0x30),puVar17);
  (**(code **)(**(long **)(*plVar11 + 0x30) + 0x48))(&plStack_3d0);
  uStack_3a8 = 2;
  FUN_10a235b1c(&plStack_3c0,&uStack_3a8);
  plVar18 = (long *)(lStack_3b0 + 8);
  if (*plVar18 != 0) {
    func_0x0001092b4274(plVar18);
  }
  *plVar18 = lStack_3b8;
  lStack_3b8 = 0;
  func_0x00010a235d1c(lStack_3b0,0,&plStack_3c8);
  func_0x00010a235d1c(lStack_3b0,1,&plStack_3d0);
  *extraout_x8 = (long)plStack_3c0;
  plStack_3c0 = (long *)0x0;
  if ((lStack_3b8 != 0) && (func_0x0001092b4274(&lStack_3b8), plStack_3c0 != (long *)0x0)) {
    puVar9 = (ulong *)(plStack_3c0 + 1);
    do {
      uVar14 = *puVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar5) {
        *puVar9 = uVar14 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar9;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar5) {
          *puVar9 = uVar14 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_3c0 + 8))();
      }
    }
  }
  if (plStack_3d0 != (long *)0x0) {
    puVar9 = (ulong *)(plStack_3d0 + 1);
    do {
      uVar14 = *puVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar5) {
        *puVar9 = uVar14 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar9;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar5) {
          *puVar9 = uVar14 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_3d0 + 8))();
      }
    }
  }
  if (plStack_3c8 != (long *)0x0) {
    puVar9 = (ulong *)(plStack_3c8 + 1);
    do {
      uVar14 = *puVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar5) {
        *puVar9 = uVar14 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar9;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar5) {
          *puVar9 = uVar14 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_3c8 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a21d5c0; end: 10a21d693;  */

/* WARNING: Removing unreachable block (ram,0x00010a21d7cc) */
/* WARNING: Removing unreachable block (ram,0x00010a21d874) */

void FUN_10a21d5c0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *extraout_x8;
  long lVar16;
  undefined8 *puVar17;
  long *unaff_x21;
  byte *unaff_x22;
  long *unaff_x23;
  code **unaff_x24;
  uint uVar18;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  code **ppcStack_2e0;
  long *plStack_2d8;
  byte *pbStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 ****ppppuStack_2a0;
  ulong uStack_298;
  code **ppcStack_290;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined8 ****ppppuStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined8 ****ppppuStack_240;
  ulong uStack_238;
  byte bStack_229;
  byte bStack_228;
  undefined8 uStack_220;
  byte bStack_218;
  ulong uStack_210;
  byte abStack_208 [8];
  long lStack_200;
  undefined8 *puStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  long alStack_1d8 [7];
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined **appuStack_190 [7];
  undefined8 uStack_158;
  ulong uStack_150;
  undefined1 auStack_148 [7];
  undefined1 uStack_141;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long alStack_a8 [16];
  long lStack_28;
  ulong *puVar9;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  FUN_10ad40968(*param_1 + 0x178,param_2);
  FUN_10a4eeaf8(*(long *)(*param_1 + 0x208) + 0x10);
  (**(code **)(**(long **)(*param_1 + 0x8b0) + 0x18))();
  FUN_10a21d694(param_1);
  plVar10 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(plVar10);
  func_0x000104bd46a0();
  pcStack_b8 = FUN_10a21d694;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar10;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10ad05ac4();
  if ((int)plVar7 < 2) goto LAB_10a21dae8;
  lVar16 = *plVar10;
  if (*(long *)(*(long *)(lVar16 + 0x180) + 0xb8) == 0) {
    unaff_x23 = (long *)0x0;
LAB_10a21d710:
    unaff_x24 = (code **)0x1;
    uVar18 = 1;
  }
  else {
    unaff_x23 = *(long **)(*(long *)(*(long *)(lVar16 + 0x180) + 0xa8) + 0x28);
    if (unaff_x23 == (long *)0x0) goto LAB_10a21d710;
    unaff_x24 = (code **)0x0;
    uVar18 = (uint)((*(ulong *)(lVar16 + 0x238) & 0x1dc0e065b) != 0);
  }
  if (((*(char *)(lVar16 + 0x7d1) == '\x01' && *(byte *)(lVar16 + 2000) == uVar18) ||
      (plVar7 = *(long **)(lVar16 + 0x828), plVar7 == (long *)0x0)) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_1f0 = plVar7, plVar7 == (long *)0x0))
  goto LAB_10a21dae8;
  puVar17 = *(undefined8 **)(lVar16 + 0x820);
  puStack_1f8 = puVar17;
  if (puVar17 != (undefined8 *)0x0) {
    *(ushort *)(*plVar10 + 2000) = (ushort)uVar18 | 0x100;
    abStack_208[0] = 0;
    unaff_x22 = abStack_208;
    lStack_200 = 0;
    uStack_210 = (ulong)uVar18;
    bStack_218 = 4;
    uStack_141 = 8;
    uStack_158 = 0x6465726975716572;
    uStack_150 = uStack_150 & 0xffffffffffffff00;
    pbVar8 = abStack_208;
    func_0x0001095b7584(pbVar8,&uStack_158);
    bVar1 = *pbVar8;
    *pbVar8 = bStack_218;
    uVar14 = *(ulong *)(pbVar8 + 8);
    bStack_218 = bVar1;
    *(ulong *)(pbVar8 + 8) = uStack_210;
    puVar9 = &uStack_210;
    uStack_210 = uVar14;
    func_0x000109380ffc(puVar9,bVar1);
    iVar6 = (int)puVar9;
    if (uVar18 == 0) {
      FUN_10ad05ac4();
      if (iVar6 == 3) {
        uStack_220 = 0x3c;
      }
      else {
        if (iVar6 != 4) goto LAB_10a21d888;
        uStack_220 = 0x78;
      }
      bStack_228 = 5;
      uStack_141 = 10;
      uStack_158 = 0x665f7265646e6572;
      uStack_150 = CONCAT53(uStack_150._3_5_,0x7370);
      pbVar8 = abStack_208;
      func_0x0001095b7584(pbVar8,&uStack_158);
      bVar1 = *pbVar8;
      *pbVar8 = bStack_228;
      uVar15 = *(undefined8 *)(pbVar8 + 8);
      bStack_228 = bVar1;
      *(undefined8 *)(pbVar8 + 8) = uStack_220;
      uStack_220 = uVar15;
      func_0x000109380ffc(&uStack_220,bVar1);
    }
LAB_10a21d888:
    FUN_10a0c32e4(&ppppuStack_240,abStack_208,0xffffffff,0x20,0,0);
    if ((int)unaff_x24 == 0) {
      lVar16 = unaff_x23[0x1f];
      if (*(char *)(lVar16 + 0x21f) < '\0') {
        func_0x000107c3192c(&ppppuStack_260,*(undefined8 *)(lVar16 + 0x208),
                            *(undefined8 *)(lVar16 + 0x210));
      }
      else {
        uStack_258 = *(ulong *)(lVar16 + 0x210);
        ppppuStack_260 = *(undefined8 *****)(lVar16 + 0x208);
        uStack_250 = *(ulong *)(lVar16 + 0x218);
      }
    }
    else {
      ppppuStack_260 = (undefined8 *****)0x0;
      uStack_258 = 0;
      uStack_250 = 0;
    }
    pppppuVar4 = (undefined8 *****)ppppuStack_240;
    if (-1 < (char)bStack_229) {
      uStack_238 = (ulong)bStack_229;
      pppppuVar4 = &ppppuStack_240;
    }
    FUN_10a3bf330(&uStack_1e8,pppppuVar4,uStack_238);
    plVar10 = (long *)0x138;
    __Znwm();
    uStack_158 = uStack_1e8;
    unaff_x23 = plVar10 + 1;
    *unaff_x23 = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_FUN_110b9f3b0;
    plVar7 = plVar10 + 3;
    uStack_1e8 = 0;
    uStack_150 = uStack_1e0;
    (**(code **)(alStack_1d8[0] + 0x10))(auStack_148,alStack_1d8);
    uStack_110 = uStack_1a0;
    uStack_298 = uStack_258;
    ppppuStack_2a0 = ppppuStack_260;
    if (-1 < (long)uStack_250) {
      uStack_298 = uStack_250 >> 0x38;
      ppppuStack_2a0 = &ppppuStack_260;
    }
    unaff_x24 = &pcStack_198;
    pcStack_198 = FUN_10a2371bc;
    appuStack_190[0] = &PTR_FUN_110bb4718;
    ppcStack_290 = unaff_x24;
    FUN_10a23708c(plVar7,&UNK_10e49ebb0,0x2b,"POST",4,&uStack_158,1);
    (*(code *)*appuStack_190[0])(appuStack_190);
    FUN_10a042634(&uStack_158);
    plStack_270 = plVar7;
    plStack_268 = plVar10;
    FUN_10a042634(&uStack_1e8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
      if (bVar3) {
        *unaff_x23 = *unaff_x23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_280 = plVar7;
    plStack_278 = plVar10;
    (**(code **)*puVar17)(puVar17,&plStack_280);
    plVar7 = plStack_278;
    if (plStack_278 != (long *)0x0) {
      plVar11 = plStack_278 + 1;
      do {
        lVar16 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_278 + 0x10))(plStack_278);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      plVar11 = plStack_268 + 1;
      do {
        lVar16 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((long)uStack_250 < 0) {
      __ZdlPv(ppppuStack_260);
    }
    if ((char)bStack_229 < '\0') {
      __ZdlPv(ppppuStack_240);
    }
    plVar7 = &lStack_200;
    func_0x000109380ffc(plVar7,abStack_208[0]);
    unaff_x21 = plStack_1f0;
    if (plStack_1f0 == (long *)0x0) goto LAB_10a21dae8;
  }
  unaff_x21 = plStack_1f0;
  plVar11 = plStack_1f0 + 1;
  do {
    lVar16 = *plVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar16 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar16 == 0) {
    (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
    plVar7 = unaff_x21;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a21dae8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_229 < '\0') {
    __ZdlPv(ppppuStack_240);
  }
  puVar17 = (undefined8 *)(ulong)abStack_208[0];
  func_0x000109380ffc(unaff_x22 + 8);
  func_0x00010a05a8c4(&puStack_1f8);
  plVar11 = plVar7;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10a21dc08;
  plVar12 = plVar11;
  ppcStack_2e0 = unaff_x24;
  plStack_2d8 = unaff_x23;
  pbStack_2d0 = unaff_x22;
  plStack_2c8 = unaff_x21;
  plStack_2c0 = plVar10;
  plStack_2b8 = plVar7;
  ppuStack_2b0 = &puStack_c0;
  FUN_10ad055a0();
  if (((ulong)plVar12 & 1) == 0) {
    plStack_2b8 = extraout_x8;
    if ((bRam00000001138334e0 & 1) == 0) {
      iVar6 = 0x138334e0;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        FUN_109d1b1bc();
        ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
        ___cxa_guard_release(0x1138334e0);
      }
    }
    lVar16 = lRam00000001138334d8;
    *plStack_2b8 = lRam00000001138334d8;
    if (lVar16 != 0) {
      plVar10 = (long *)(lVar16 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar14 = puVar17[1];
  puVar5 = (undefined8 *)*puVar17;
  if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
    uVar14 = (ulong)*(byte *)((long)puVar17 + 0x17);
    puVar5 = puVar17;
  }
  FUN_10ae03140(0,puVar5,uVar14);
  ppuVar13 = &PTR_PTR_1133008b8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar13,&PTR_PTR_1133008b8);
  iVar6 = (int)ppuVar13;
  func_0x00010ad0561c();
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a21de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*plVar11 + 0x30) + 0x40))
              (extraout_x8,*(long **)(*plVar11 + 0x30),puVar17);
    return;
  }
  (**(code **)(**(long **)(*plVar11 + 0x30) + 0x40))
            (&plStack_308,*(long **)(*plVar11 + 0x30),puVar17);
  (**(code **)(**(long **)(*plVar11 + 0x30) + 0x48))(&plStack_310);
  uStack_2e8 = 2;
  FUN_10a235b1c(&plStack_300,&uStack_2e8);
  plVar10 = (long *)(lStack_2f0 + 8);
  if (*plVar10 != 0) {
    func_0x0001092b4274(plVar10);
  }
  *plVar10 = lStack_2f8;
  lStack_2f8 = 0;
  func_0x00010a235d1c(lStack_2f0,0,&plStack_308);
  func_0x00010a235d1c(lStack_2f0,1,&plStack_310);
  *extraout_x8 = (long)plStack_300;
  plStack_300 = (long *)0x0;
  if ((lStack_2f8 != 0) && (func_0x0001092b4274(&lStack_2f8), plStack_300 != (long *)0x0)) {
    puVar9 = (ulong *)(plStack_300 + 1);
    do {
      uVar14 = *puVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = uVar14 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar14 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_300 + 8))();
      }
    }
  }
  if (plStack_310 != (long *)0x0) {
    puVar9 = (ulong *)(plStack_310 + 1);
    do {
      uVar14 = *puVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = uVar14 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar14 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_310 + 8))();
      }
    }
  }
  if (plStack_308 != (long *)0x0) {
    puVar9 = (ulong *)(plStack_308 + 1);
    do {
      uVar14 = *puVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = uVar14 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar14 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_308 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a21d694; end: 10a21dc07;  */

/* WARNING: Removing unreachable block (ram,0x00010a21d7cc) */
/* WARNING: Removing unreachable block (ram,0x00010a21d874) */

void FUN_10a21d694(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *extraout_x8;
  long lVar15;
  undefined8 *puVar16;
  long *unaff_x21;
  byte *unaff_x22;
  long *unaff_x23;
  code **unaff_x24;
  uint uVar17;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  code **ppcStack_230;
  long *plStack_228;
  byte *pbStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 ****ppppuStack_1f0;
  ulong uStack_1e8;
  code **ppcStack_1e0;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 ****ppppuStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 ****ppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  byte bStack_178;
  undefined8 uStack_170;
  byte bStack_168;
  ulong uStack_160;
  byte abStack_158 [8];
  long lStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **appuStack_e0 [7];
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [7];
  undefined1 uStack_91;
  undefined8 uStack_60;
  long lStack_58;
  ulong *puVar9;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1;
  FUN_10ad05ac4();
  if ((int)plVar7 < 2) goto LAB_10a21dae8;
  lVar15 = *param_1;
  if (*(long *)(*(long *)(lVar15 + 0x180) + 0xb8) == 0) {
    unaff_x23 = (long *)0x0;
LAB_10a21d710:
    unaff_x24 = (code **)0x1;
    uVar17 = 1;
  }
  else {
    unaff_x23 = *(long **)(*(long *)(*(long *)(lVar15 + 0x180) + 0xa8) + 0x28);
    if (unaff_x23 == (long *)0x0) goto LAB_10a21d710;
    unaff_x24 = (code **)0x0;
    uVar17 = (uint)((*(ulong *)(lVar15 + 0x238) & 0x1dc0e065b) != 0);
  }
  if (((*(char *)(lVar15 + 0x7d1) == '\x01' && *(byte *)(lVar15 + 2000) == uVar17) ||
      (plVar7 = *(long **)(lVar15 + 0x828), plVar7 == (long *)0x0)) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_140 = plVar7, plVar7 == (long *)0x0))
  goto LAB_10a21dae8;
  puVar16 = *(undefined8 **)(lVar15 + 0x820);
  puStack_148 = puVar16;
  if (puVar16 != (undefined8 *)0x0) {
    *(ushort *)(*param_1 + 2000) = (ushort)uVar17 | 0x100;
    abStack_158[0] = 0;
    unaff_x22 = abStack_158;
    lStack_150 = 0;
    uStack_160 = (ulong)uVar17;
    bStack_168 = 4;
    uStack_91 = 8;
    uStack_a8 = 0x6465726975716572;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    pbVar8 = abStack_158;
    func_0x0001095b7584(pbVar8,&uStack_a8);
    bVar1 = *pbVar8;
    *pbVar8 = bStack_168;
    uVar13 = *(ulong *)(pbVar8 + 8);
    bStack_168 = bVar1;
    *(ulong *)(pbVar8 + 8) = uStack_160;
    puVar9 = &uStack_160;
    uStack_160 = uVar13;
    func_0x000109380ffc(puVar9,bVar1);
    iVar6 = (int)puVar9;
    if (uVar17 == 0) {
      FUN_10ad05ac4();
      if (iVar6 == 3) {
        uStack_170 = 0x3c;
      }
      else {
        if (iVar6 != 4) goto LAB_10a21d888;
        uStack_170 = 0x78;
      }
      bStack_178 = 5;
      uStack_91 = 10;
      uStack_a8 = 0x665f7265646e6572;
      uStack_a0 = CONCAT53(uStack_a0._3_5_,0x7370);
      pbVar8 = abStack_158;
      func_0x0001095b7584(pbVar8,&uStack_a8);
      bVar1 = *pbVar8;
      *pbVar8 = bStack_178;
      uVar14 = *(undefined8 *)(pbVar8 + 8);
      bStack_178 = bVar1;
      *(undefined8 *)(pbVar8 + 8) = uStack_170;
      uStack_170 = uVar14;
      func_0x000109380ffc(&uStack_170,bVar1);
    }
LAB_10a21d888:
    FUN_10a0c32e4(&ppppuStack_190,abStack_158,0xffffffff,0x20,0,0);
    if ((int)unaff_x24 == 0) {
      lVar15 = unaff_x23[0x1f];
      if (*(char *)(lVar15 + 0x21f) < '\0') {
        func_0x000107c3192c(&ppppuStack_1b0,*(undefined8 *)(lVar15 + 0x208),
                            *(undefined8 *)(lVar15 + 0x210));
      }
      else {
        uStack_1a8 = *(ulong *)(lVar15 + 0x210);
        ppppuStack_1b0 = *(undefined8 *****)(lVar15 + 0x208);
        uStack_1a0 = *(ulong *)(lVar15 + 0x218);
      }
    }
    else {
      ppppuStack_1b0 = (undefined8 *****)0x0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
    }
    pppppuVar4 = (undefined8 *****)ppppuStack_190;
    if (-1 < (char)bStack_179) {
      uStack_188 = (ulong)bStack_179;
      pppppuVar4 = &ppppuStack_190;
    }
    FUN_10a3bf330(&uStack_138,pppppuVar4,uStack_188);
    param_1 = (long *)0x138;
    __Znwm();
    uStack_a8 = uStack_138;
    unaff_x23 = param_1 + 1;
    *unaff_x23 = 0;
    param_1[2] = 0;
    *param_1 = (long)&PTR_FUN_110b9f3b0;
    plVar7 = param_1 + 3;
    uStack_138 = 0;
    uStack_a0 = uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
    uStack_60 = uStack_f0;
    uStack_1e8 = uStack_1a8;
    ppppuStack_1f0 = ppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      uStack_1e8 = uStack_1a0 >> 0x38;
      ppppuStack_1f0 = &ppppuStack_1b0;
    }
    unaff_x24 = &pcStack_e8;
    pcStack_e8 = FUN_10a2371bc;
    appuStack_e0[0] = &PTR_FUN_110bb4718;
    ppcStack_1e0 = unaff_x24;
    FUN_10a23708c(plVar7,&UNK_10e49ebb0,0x2b,"POST",4,&uStack_a8,1);
    (*(code *)*appuStack_e0[0])(appuStack_e0);
    FUN_10a042634(&uStack_a8);
    plStack_1c0 = plVar7;
    plStack_1b8 = param_1;
    FUN_10a042634(&uStack_138);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
      if (bVar3) {
        *unaff_x23 = *unaff_x23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_1d0 = plVar7;
    plStack_1c8 = param_1;
    (**(code **)*puVar16)(puVar16,&plStack_1d0);
    plVar7 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      plVar10 = plStack_1c8 + 1;
      do {
        lVar15 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = plStack_1b8;
    if (plStack_1b8 != (long *)0x0) {
      plVar10 = plStack_1b8 + 1;
      do {
        lVar15 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((long)uStack_1a0 < 0) {
      __ZdlPv(ppppuStack_1b0);
    }
    if ((char)bStack_179 < '\0') {
      __ZdlPv(ppppuStack_190);
    }
    plVar7 = &lStack_150;
    func_0x000109380ffc(plVar7,abStack_158[0]);
    unaff_x21 = plStack_140;
    if (plStack_140 == (long *)0x0) goto LAB_10a21dae8;
  }
  unaff_x21 = plStack_140;
  plVar10 = plStack_140 + 1;
  do {
    lVar15 = *plVar10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plStack_140 + 0x10))(plStack_140);
    plVar7 = unaff_x21;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a21dae8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_179 < '\0') {
    __ZdlPv(ppppuStack_190);
  }
  puVar16 = (undefined8 *)(ulong)abStack_158[0];
  func_0x000109380ffc(unaff_x22 + 8);
  func_0x00010a05a8c4(&puStack_148);
  plVar10 = plVar7;
  __Unwind_Resume();
  pcStack_1f8 = FUN_10a21dc08;
  plVar11 = plVar10;
  ppcStack_230 = unaff_x24;
  plStack_228 = unaff_x23;
  pbStack_220 = unaff_x22;
  plStack_218 = unaff_x21;
  plStack_210 = param_1;
  plStack_208 = plVar7;
  puStack_200 = &stack0xfffffffffffffff0;
  FUN_10ad055a0();
  if (((ulong)plVar11 & 1) == 0) {
    plStack_208 = extraout_x8;
    if ((bRam00000001138334e0 & 1) == 0) {
      iVar6 = 0x138334e0;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        FUN_109d1b1bc();
        ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
        ___cxa_guard_release(0x1138334e0);
      }
    }
    lVar15 = lRam00000001138334d8;
    *plStack_208 = lRam00000001138334d8;
    if (lVar15 != 0) {
      plVar7 = (long *)(lVar15 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar13 = puVar16[1];
  puVar5 = (undefined8 *)*puVar16;
  if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
    uVar13 = (ulong)*(byte *)((long)puVar16 + 0x17);
    puVar5 = puVar16;
  }
  FUN_10ae03140(0,puVar5,uVar13);
  ppuVar12 = &PTR_PTR_1133008b8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar12,&PTR_PTR_1133008b8);
  iVar6 = (int)ppuVar12;
  func_0x00010ad0561c();
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a21de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*plVar10 + 0x30) + 0x40))
              (extraout_x8,*(long **)(*plVar10 + 0x30),puVar16);
    return;
  }
  (**(code **)(**(long **)(*plVar10 + 0x30) + 0x40))
            (&plStack_258,*(long **)(*plVar10 + 0x30),puVar16);
  (**(code **)(**(long **)(*plVar10 + 0x30) + 0x48))(&plStack_260);
  uStack_238 = 2;
  FUN_10a235b1c(&plStack_250,&uStack_238);
  plVar7 = (long *)(lStack_240 + 8);
  if (*plVar7 != 0) {
    func_0x0001092b4274(plVar7);
  }
  *plVar7 = lStack_248;
  lStack_248 = 0;
  func_0x00010a235d1c(lStack_240,0,&plStack_258);
  func_0x00010a235d1c(lStack_240,1,&plStack_260);
  *extraout_x8 = (long)plStack_250;
  plStack_250 = (long *)0x0;
  if ((lStack_248 != 0) && (func_0x0001092b4274(&lStack_248), plStack_250 != (long *)0x0)) {
    puVar9 = (ulong *)(plStack_250 + 1);
    do {
      uVar13 = *puVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = uVar13 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar13 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_250 + 8))();
      }
    }
  }
  if (plStack_260 != (long *)0x0) {
    puVar9 = (ulong *)(plStack_260 + 1);
    do {
      uVar13 = *puVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = uVar13 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar13 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_260 + 8))();
      }
    }
  }
  if (plStack_258 != (long *)0x0) {
    puVar9 = (ulong *)(plStack_258 + 1);
    do {
      uVar13 = *puVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
      if (bVar3) {
        *puVar9 = uVar13 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar3) {
          *puVar9 = uVar13 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_258 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a21dc08; end: 10a21decf;  */

void FUN_10a21dc08(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar8;
  long *plVar9;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined **ppuVar7;
  
  plVar9 = param_2;
  FUN_10ad055a0();
  if (((ulong)plVar9 & 1) == 0) {
    if ((bRam00000001138334e0 & 1) == 0) {
      iVar6 = 0x138334e0;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        FUN_109d1b1bc();
        ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
        ___cxa_guard_release(0x1138334e0);
      }
    }
    lVar5 = lRam00000001138334d8;
    *param_1 = lRam00000001138334d8;
    if (lVar5 != 0) {
      plVar9 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar8 = param_3[1];
  puVar4 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar4 = param_3;
  }
  FUN_10ae03140(0,puVar4,uVar8);
  ppuVar7 = &PTR_PTR_1133008b8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133008b8);
  iVar6 = (int)ppuVar7;
  func_0x00010ad0561c();
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a21de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*param_2 + 0x30) + 0x40))(param_1,*(long **)(*param_2 + 0x30),param_3);
    return;
  }
  (**(code **)(**(long **)(*param_2 + 0x30) + 0x40))
            (&plStack_68,*(long **)(*param_2 + 0x30),param_3);
  (**(code **)(**(long **)(*param_2 + 0x30) + 0x48))(&plStack_70);
  uStack_48 = 2;
  FUN_10a235b1c(&plStack_60,&uStack_48);
  plVar9 = (long *)(lStack_50 + 8);
  if (*plVar9 != 0) {
    func_0x0001092b4274(plVar9);
  }
  *plVar9 = lStack_58;
  lStack_58 = 0;
  func_0x00010a235d1c(lStack_50,0,&plStack_68);
  func_0x00010a235d1c(lStack_50,1,&plStack_70);
  *param_1 = (long)plStack_60;
  plStack_60 = (long *)0x0;
  if ((lStack_58 != 0) && (func_0x0001092b4274(&lStack_58), plStack_60 != (long *)0x0)) {
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
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
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
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  if (plStack_68 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_68 + 1);
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
        (**(code **)(*plStack_68 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a21ded0; end: 10a21df47;  */

void FUN_10a21ded0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined **ppuVar6;
  
  plVar5 = param_2;
  FUN_10ad055a0();
  if (((ulong)plVar5 & 1) != 0) {
    ppuVar6 = &PTR_PTR_1133008e0;
    FUN_10ae079a0(0,&PTR_PTR_1133008e0);
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_1133008e0);
                    /* WARNING: Could not recover jumptable at 0x00010a21df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*param_2 + 0x30) + 0x50))(param_1);
    return;
  }
  if ((bRam00000001138334e0 & 1) == 0) {
    iVar4 = 0x138334e0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_109d1b1bc();
      ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
      ___cxa_guard_release(0x1138334e0);
    }
  }
  lVar3 = lRam00000001138334d8;
  *param_1 = lRam00000001138334d8;
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 10a21df48; end: 10a21dfeb;  */

void FUN_10a21df48(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte *pbVar6;
  long *plVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lStack_330;
  long *plStack_328;
  code *pcStack_320;
  code *pcStack_318;
  long *plStack_310;
  code *pcStack_308;
  code *pcStack_300;
  code *pcStack_2f8;
  undefined8 *puStack_2f0;
  undefined1 auStack_2e8 [128];
  code *pcStack_268;
  code *pcStack_260;
  code *pcStack_258;
  code *pcStack_250;
  long lStack_1e8;
  long lStack_188;
  code *pcStack_180;
  long *plStack_178;
  undefined8 *puStack_170;
  long alStack_168 [16];
  long lStack_e8;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  FUN_10ad3fac4(*param_1 + 0x178,param_2);
  plVar5 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(alStack_a8);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_168,*plVar5);
  FUN_10ad41734(*plVar5 + 0x178);
  pbVar6 = (byte *)0x1137eac78;
  FUN_10a08f69c();
  if ((*pbVar6 & 1) == 0) {
    lVar14 = *(long *)(*plVar5 + 0x208);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0xb8) != 0)) {
      puVar12 = *(undefined8 **)(lVar14 + 0xb0);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x00010a4ec5f4();
      }
      else {
        plVar13 = (long *)puVar12[2];
        puStack_170 = puVar12;
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x20;
          __Znwm();
          *plVar13 = lVar14;
          plVar13[3] = 0x10a236ff0;
          pcStack_180 = FUN_10a236f9c;
          plStack_178 = plVar13;
          (**(code **)*puVar12)(puVar12,&pcStack_180);
        }
        else {
          lStack_188 = 0;
          (**(code **)(*plVar13 + 0x28))(plVar13,0,&lStack_188);
          if (lStack_188 != 0) {
            func_0x0001092af97c(&lStack_188);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a21e168);
            (*pcVar8)();
          }
          plVar7 = (long *)0x28;
          __Znwm();
          *plVar7 = lVar14;
          plVar7[3] = (long)FUN_10a236fe4;
          plVar7[4] = (long)plVar13;
          pcStack_180 = (code *)0x10a236f6c;
          plStack_178 = plVar7;
          (**(code **)*puVar12)(puVar12,&pcStack_180);
          __ZNSt13exception_ptrD1Ev(&lStack_188);
        }
        lStack_188 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_188);
      }
    }
  }
  FUN_10a21d694(plVar5);
  plVar5 = alStack_168;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(alStack_168);
  __Unwind_Resume(plVar5);
  func_0x000104bd46a0();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(auStack_2e8,*plVar5);
  pbVar6 = (byte *)0x1138363e8;
  FUN_10a08fec0();
  if ((*pbVar6 >> 2 & 1) != 0) {
    _glFinish();
  }
  lVar14 = 0;
  FUN_10a303694();
  if (lVar14 != 0) {
    *(undefined4 *)(lVar14 + 0x278) = 0;
  }
  lStack_330 = lVar14;
  FUN_10a219de8(&pcStack_268,*plVar5);
  ppuVar9 = &PTR_PTR_113300948;
  FUN_10ae079a0(0,&PTR_PTR_113300948);
  FUN_10ae07cd4(ppuVar9,&PTR_PTR_113300948);
  func_0x00010a08f34c(*(undefined8 *)(*plVar5 + 0x10));
  lVar14 = *(long *)(*plVar5 + 0x208);
  if (*(long *)(lVar14 + 0xb8) == 0) {
LAB_10a21e4f0:
    FUN_10a224acc(*plVar5 + 0x188);
    FUN_10a224b28(*plVar5);
    FUN_10ad41b9c(*plVar5 + 0x178);
    FUN_10a4eeaf8(*(long *)(*plVar5 + 0x208) + 0x10);
    pcStack_320 = (code *)0x0;
    pcStack_318 = (code *)0x0;
    FUN_10a224ec4(*plVar5 + 0xc0,&pcStack_320);
    pcVar8 = pcStack_318;
    if (pcStack_318 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_318 + 8);
      do {
        lVar14 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_318 + 0x10))(pcStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    lVar10 = *plVar5;
    lVar14 = *(long *)(lVar10 + 0x150);
    *(undefined8 *)(lVar10 + 0x150) = 0;
    if (lVar14 != 0) {
      func_0x00010a237b14(lVar10 + 0x150);
      lVar10 = *plVar5;
    }
    plVar13 = *(long **)(lVar10 + 0x158);
    *(undefined8 *)(lVar10 + 0x158) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
      lVar10 = *plVar5;
    }
    lVar14 = *(long *)(lVar10 + 0x160);
    *(undefined8 *)(lVar10 + 0x160) = 0;
    if (lVar14 != 0) {
      func_0x00010a159354(lVar10 + 0x160);
      lVar10 = *plVar5;
    }
    pcStack_320 = (code *)0x0;
    pcStack_318 = (code *)0x0;
    FUN_10a0e673c(lVar10 + 0xd0,&pcStack_320);
    pcVar8 = pcStack_318;
    if (pcStack_318 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_318 + 8);
      do {
        lVar14 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_318 + 0x10))(pcStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_320 = (code *)0x0;
    pcStack_318 = (code *)0x0;
    FUN_10a0e673c(*plVar5 + 0x118,&pcStack_320);
    pcVar8 = pcStack_318;
    if (pcStack_318 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_318 + 8);
      do {
        lVar14 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_318 + 0x10))(pcStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_320 = (code *)0x0;
    pcStack_318 = (code *)0x0;
    FUN_10a0e673c(*plVar5 + 0x130,&pcStack_320);
    pcVar8 = pcStack_318;
    if (pcStack_318 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_318 + 8);
      do {
        lVar14 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_318 + 0x10))(pcStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_320 = (code *)0x0;
    pcStack_318 = (code *)0x0;
    func_0x00010a099dfc(*plVar5 + 0xf8,&pcStack_320);
    pcVar8 = pcStack_318;
    if (pcStack_318 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_318 + 8);
      do {
        lVar14 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_318 + 0x10))(pcStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_320 = (code *)0x0;
    pcStack_318 = (code *)0x0;
    func_0x00010a099dfc(*plVar5 + 0xe8,&pcStack_320);
    pcVar8 = pcStack_318;
    if (pcStack_318 != (code *)0x0) {
      pcVar2 = pcStack_318 + 8;
      do {
        lVar14 = *(long *)pcVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *(long *)pcVar2 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_318 + 0x10))(pcStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    FUN_10a30f97c();
    FUN_10a3103d8();
    FUN_10ad4ba44();
    FUN_10a22afb0(&pcStack_268);
    FUN_10a224f28(&lStack_330);
    lVar14 = *(long *)(*plVar5 + 0x208);
    if (*(long *)(lVar14 + 0xb8) != 0) {
      plVar13 = *(long **)(lVar14 + 0xb0);
      if (plVar13 == (long *)0x0) {
        func_0x00010a4ec5f4();
      }
      else {
        plVar7 = (long *)plVar13[2];
        pcStack_260 = (code *)0x0;
        pcStack_258 = (code *)0x0;
        if (plVar7 == (long *)0x0) {
          pcVar8 = (code *)0xc8;
          __Znwm();
          *(long *)(pcVar8 + 0x10) = 0;
          *(long *)(pcVar8 + 8) = 0x200000006;
          *(undefined2 *)(pcVar8 + 0x18) = 4;
          *(long *)(pcVar8 + 0x28) = 0;
          *(long *)(pcVar8 + 0x20) = 0;
          *(long *)(pcVar8 + 0x38) = 0;
          *(long *)(pcVar8 + 0x30) = 0;
          *(long *)(pcVar8 + 0x48) = 0;
          *(long *)(pcVar8 + 0x40) = 0;
          *(long *)(pcVar8 + 0x58) = 0;
          *(long *)(pcVar8 + 0x50) = 0;
          *(long *)(pcVar8 + 0x68) = 0;
          *(long *)(pcVar8 + 0x60) = 0;
          *(long *)(pcVar8 + 0x78) = 0;
          *(long *)(pcVar8 + 0x70) = 0;
          *(long *)(pcVar8 + 0x80) = 0;
          *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
          *(long *)(pcVar8 + 0x90) = 0;
          *(undefined2 *)(pcVar8 + 0x98) = 0;
          *(undefined ***)pcVar8 = &PTR_DAT_110bb47e8;
          pcStack_268 = pcVar8 + 0xa0;
          *(long *)pcStack_268 = lVar14;
          pcVar8[0xb8] = (code)0x1;
          *(long *)(pcVar8 + 0xc0) = 0;
          pcStack_250 = FUN_10a237b84;
          pcStack_260 = pcVar8;
          pcStack_258 = pcVar8;
        }
        else {
          pcStack_320 = (code *)0x0;
          (**(code **)(*plVar7 + 0x28))(plVar7,0,&pcStack_320);
          if (pcStack_320 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_320);
            goto LAB_10a21ea44;
          }
          pcVar8 = (code *)0xd0;
          __Znwm();
          *(long *)(pcVar8 + 0x10) = 0;
          *(long *)(pcVar8 + 8) = 0x200000006;
          *(undefined2 *)(pcVar8 + 0x18) = 4;
          *(long *)(pcVar8 + 0x28) = 0;
          *(long *)(pcVar8 + 0x20) = 0;
          *(long *)(pcVar8 + 0x38) = 0;
          *(long *)(pcVar8 + 0x30) = 0;
          *(long *)(pcVar8 + 0x48) = 0;
          *(long *)(pcVar8 + 0x40) = 0;
          *(long *)(pcVar8 + 0x58) = 0;
          *(long *)(pcVar8 + 0x50) = 0;
          *(long *)(pcVar8 + 0x68) = 0;
          *(long *)(pcVar8 + 0x60) = 0;
          *(long *)(pcVar8 + 0x78) = 0;
          *(long *)(pcVar8 + 0x70) = 0;
          *(long *)(pcVar8 + 0x80) = 0;
          *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
          *(long *)(pcVar8 + 0x90) = 0;
          *(undefined2 *)(pcVar8 + 0x98) = 0;
          *(long *)(pcVar8 + 0xa0) = lVar14;
          *(undefined ***)pcVar8 = &PTR_FUN_110bb47b0;
          pcVar8[0xb8] = (code)0x1;
          *(long *)(pcVar8 + 0xc0) = 0;
          *(long **)(pcVar8 + 200) = plVar7;
          if (pcStack_260 != (code *)0x0) {
            puVar1 = (ulong *)((long)pcStack_260 + 8);
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
                (**(code **)(*(long *)pcStack_260 + 8))();
              }
            }
          }
          pcStack_260 = pcVar8;
          if (pcStack_258 != (code *)0x0) {
            func_0x0001092b4274(&pcStack_258);
          }
          pcStack_250 = (code *)0x10a237b54;
          pcStack_268 = pcVar8 + 0xa0;
          pcStack_258 = pcVar8;
          __ZNSt13exception_ptrD1Ev(&pcStack_320);
        }
        pcVar8 = pcStack_268;
        if (*(long *)(pcStack_268 + 0x20) != 0) {
          func_0x0001092b4274();
        }
        *(code **)(pcVar8 + 0x20) = pcStack_258;
        pcStack_258 = (code *)0x0;
        pcStack_320 = pcStack_250;
        pcStack_318 = pcStack_268;
        plStack_310 = plVar13;
        (**(code **)*plVar13)(plVar13,&pcStack_320);
        pcStack_300 = pcStack_260;
        pcStack_260 = (code *)0x0;
        if (pcStack_258 != (code *)0x0) {
          func_0x0001092b4274(&pcStack_258);
          if (pcStack_260 != (code *)0x0) {
            puVar1 = (ulong *)((long)pcStack_260 + 8);
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
                (**(code **)(*(long *)pcStack_260 + 8))();
              }
            }
          }
        }
        FUN_109d1a244(&pcStack_300);
        FUN_10a09b344(&pcStack_300);
        if (pcStack_300 != (code *)0x0) {
          pcVar8 = pcStack_300 + 8;
          do {
            uVar11 = *(ulong *)pcVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar4) {
              *(ulong *)pcVar8 = uVar11 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *(ulong *)pcVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
              if (bVar4) {
                *(ulong *)pcVar8 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*(long *)pcStack_300 + 8))();
            }
          }
        }
      }
    }
    *(undefined8 *)(*plVar5 + 0x228) = 0;
    FUN_10a22afb0(auStack_2e8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar12 = *(undefined8 **)(lVar14 + 0xb0);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x00010a4ec544();
      goto LAB_10a21e4f0;
    }
    plVar13 = (long *)puVar12[2];
    pcStack_318 = (code *)0x0;
    plStack_310 = (long *)0x0;
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0xc8;
      __Znwm();
      plVar13[2] = 0;
      plVar13[1] = 0x200000006;
      *(undefined2 *)(plVar13 + 3) = 4;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[7] = 0;
      plVar13[6] = 0;
      plVar13[9] = 0;
      plVar13[8] = 0;
      plVar13[0xb] = 0;
      plVar13[10] = 0;
      plVar13[0xd] = 0;
      plVar13[0xc] = 0;
      plVar13[0xf] = 0;
      plVar13[0xe] = 0;
      plVar13[0x10] = 0;
      plVar13[0x11] = (long)(plVar13 + 3);
      plVar13[0x12] = 0;
      *(undefined2 *)(plVar13 + 0x13) = 0;
      *plVar13 = (long)&PTR_DAT_110bb4778;
      pcStack_320 = (code *)(plVar13 + 0x14);
      *(long *)pcStack_320 = lVar14;
      *(undefined1 *)(plVar13 + 0x17) = 1;
      plVar13[0x18] = 0;
      pcStack_308 = FUN_10a23788c;
      pcStack_318 = (code *)plVar13;
      plStack_310 = plVar13;
LAB_10a21e3f4:
      pcVar8 = pcStack_320;
      if (*(long *)(pcStack_320 + 0x20) != 0) {
        func_0x0001092b4274();
      }
      *(long **)(pcVar8 + 0x20) = plStack_310;
      plStack_310 = (long *)0x0;
      pcStack_300 = pcStack_308;
      pcStack_2f8 = pcStack_320;
      puStack_2f0 = puVar12;
      (**(code **)*puVar12)(puVar12,&pcStack_300);
      plStack_328 = (long *)pcStack_318;
      pcStack_318 = (code *)0x0;
      if (plStack_310 != (long *)0x0) {
        func_0x0001092b4274(&plStack_310);
        if (pcStack_318 != (code *)0x0) {
          puVar1 = (ulong *)((long)pcStack_318 + 8);
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
              (**(code **)(*(long *)pcStack_318 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_328);
      FUN_10a09b344(&plStack_328);
      if (plStack_328 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_328 + 1);
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
            (**(code **)(*plStack_328 + 8))();
          }
        }
      }
      goto LAB_10a21e4f0;
    }
    pcStack_300 = (code *)0x0;
    (**(code **)(*plVar13 + 0x28))(plVar13,0,&pcStack_300);
    if (pcStack_300 == (code *)0x0) {
      plVar7 = (long *)0xd0;
      __Znwm();
      plVar7[2] = 0;
      plVar7[1] = 0x200000006;
      *(undefined2 *)(plVar7 + 3) = 4;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[0x10] = 0;
      plVar7[0x11] = (long)(plVar7 + 3);
      plVar7[0x12] = 0;
      *(undefined2 *)(plVar7 + 0x13) = 0;
      plVar7[0x14] = lVar14;
      *plVar7 = (long)&PTR_FUN_110bb4740;
      *(undefined1 *)(plVar7 + 0x17) = 1;
      plVar7[0x18] = 0;
      plVar7[0x19] = (long)plVar13;
      if (pcStack_318 != (code *)0x0) {
        pcVar8 = pcStack_318 + 8;
        do {
          uVar11 = *(ulong *)pcVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar4) {
            *(ulong *)pcVar8 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *(ulong *)pcVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar4) {
              *(ulong *)pcVar8 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*(long *)pcStack_318 + 8))();
          }
        }
      }
      pcStack_318 = (code *)plVar7;
      if (plStack_310 != (long *)0x0) {
        func_0x0001092b4274(&plStack_310);
      }
      pcStack_308 = (code *)0x10a23785c;
      pcStack_320 = (code *)(plVar7 + 0x14);
      plStack_310 = plVar7;
      __ZNSt13exception_ptrD1Ev(&pcStack_300);
      goto LAB_10a21e3f4;
    }
  }
  func_0x0001092af97c(&pcStack_300);
LAB_10a21ea44:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a21ea48);
  (*pcVar8)();
}



/* Entry: 10a21dfec; end: 10a21e1b7;  */

void FUN_10a21dfec(long *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lStack_280;
  long *plStack_278;
  code *pcStack_270;
  code *pcStack_268;
  long *plStack_260;
  code *pcStack_258;
  code *pcStack_250;
  code *pcStack_248;
  undefined8 *puStack_240;
  undefined1 auStack_238 [128];
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  long lStack_138;
  long lStack_d8;
  code *pcStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long alStack_b8 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_b8,*param_1);
  FUN_10ad41734(*param_1 + 0x178);
  pbVar5 = (byte *)0x1137eac78;
  FUN_10a08f69c();
  if ((*pbVar5 & 1) == 0) {
    lVar14 = *(long *)(*param_1 + 0x208);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0xb8) != 0)) {
      puVar12 = *(undefined8 **)(lVar14 + 0xb0);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x00010a4ec5f4();
      }
      else {
        plVar13 = (long *)puVar12[2];
        puStack_c0 = puVar12;
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x20;
          __Znwm();
          *plVar13 = lVar14;
          plVar13[3] = 0x10a236ff0;
          pcStack_d0 = FUN_10a236f9c;
          plStack_c8 = plVar13;
          (**(code **)*puVar12)(puVar12,&pcStack_d0);
        }
        else {
          lStack_d8 = 0;
          (**(code **)(*plVar13 + 0x28))(plVar13,0,&lStack_d8);
          if (lStack_d8 != 0) {
            func_0x0001092af97c(&lStack_d8);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a21e168);
            (*pcVar8)();
          }
          plVar6 = (long *)0x28;
          __Znwm();
          *plVar6 = lVar14;
          plVar6[3] = (long)FUN_10a236fe4;
          plVar6[4] = (long)plVar13;
          pcStack_d0 = (code *)0x10a236f6c;
          plStack_c8 = plVar6;
          (**(code **)*puVar12)(puVar12,&pcStack_d0);
          __ZNSt13exception_ptrD1Ev(&lStack_d8);
        }
        lStack_d8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_d8);
      }
    }
  }
  FUN_10a21d694(param_1);
  plVar13 = alStack_b8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(alStack_b8);
  __Unwind_Resume(plVar13);
  func_0x000104bd46a0();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(auStack_238,*plVar13);
  pbVar5 = (byte *)0x1138363e8;
  FUN_10a08fec0();
  if ((*pbVar5 >> 2 & 1) != 0) {
    _glFinish();
  }
  lVar14 = 0;
  FUN_10a303694();
  if (lVar14 != 0) {
    *(undefined4 *)(lVar14 + 0x278) = 0;
  }
  lStack_280 = lVar14;
  FUN_10a219de8(&pcStack_1b8,*plVar13);
  ppuVar9 = &PTR_PTR_113300948;
  FUN_10ae079a0(0,&PTR_PTR_113300948);
  FUN_10ae07cd4(ppuVar9,&PTR_PTR_113300948);
  func_0x00010a08f34c(*(undefined8 *)(*plVar13 + 0x10));
  lVar14 = *(long *)(*plVar13 + 0x208);
  if (*(long *)(lVar14 + 0xb8) == 0) {
LAB_10a21e4f0:
    FUN_10a224acc(*plVar13 + 0x188);
    FUN_10a224b28(*plVar13);
    FUN_10ad41b9c(*plVar13 + 0x178);
    FUN_10a4eeaf8(*(long *)(*plVar13 + 0x208) + 0x10);
    pcStack_270 = (code *)0x0;
    pcStack_268 = (code *)0x0;
    FUN_10a224ec4(*plVar13 + 0xc0,&pcStack_270);
    pcVar8 = pcStack_268;
    if (pcStack_268 != (code *)0x0) {
      plVar6 = (long *)((long)pcStack_268 + 8);
      do {
        lVar14 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_268 + 0x10))(pcStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    lVar10 = *plVar13;
    lVar14 = *(long *)(lVar10 + 0x150);
    *(undefined8 *)(lVar10 + 0x150) = 0;
    if (lVar14 != 0) {
      func_0x00010a237b14(lVar10 + 0x150);
      lVar10 = *plVar13;
    }
    plVar6 = *(long **)(lVar10 + 0x158);
    *(undefined8 *)(lVar10 + 0x158) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
      lVar10 = *plVar13;
    }
    lVar14 = *(long *)(lVar10 + 0x160);
    *(undefined8 *)(lVar10 + 0x160) = 0;
    if (lVar14 != 0) {
      func_0x00010a159354(lVar10 + 0x160);
      lVar10 = *plVar13;
    }
    pcStack_270 = (code *)0x0;
    pcStack_268 = (code *)0x0;
    FUN_10a0e673c(lVar10 + 0xd0,&pcStack_270);
    pcVar8 = pcStack_268;
    if (pcStack_268 != (code *)0x0) {
      plVar6 = (long *)((long)pcStack_268 + 8);
      do {
        lVar14 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_268 + 0x10))(pcStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_270 = (code *)0x0;
    pcStack_268 = (code *)0x0;
    FUN_10a0e673c(*plVar13 + 0x118,&pcStack_270);
    pcVar8 = pcStack_268;
    if (pcStack_268 != (code *)0x0) {
      plVar6 = (long *)((long)pcStack_268 + 8);
      do {
        lVar14 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_268 + 0x10))(pcStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_270 = (code *)0x0;
    pcStack_268 = (code *)0x0;
    FUN_10a0e673c(*plVar13 + 0x130,&pcStack_270);
    pcVar8 = pcStack_268;
    if (pcStack_268 != (code *)0x0) {
      plVar6 = (long *)((long)pcStack_268 + 8);
      do {
        lVar14 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_268 + 0x10))(pcStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_270 = (code *)0x0;
    pcStack_268 = (code *)0x0;
    func_0x00010a099dfc(*plVar13 + 0xf8,&pcStack_270);
    pcVar8 = pcStack_268;
    if (pcStack_268 != (code *)0x0) {
      plVar6 = (long *)((long)pcStack_268 + 8);
      do {
        lVar14 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_268 + 0x10))(pcStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_270 = (code *)0x0;
    pcStack_268 = (code *)0x0;
    func_0x00010a099dfc(*plVar13 + 0xe8,&pcStack_270);
    pcVar8 = pcStack_268;
    if (pcStack_268 != (code *)0x0) {
      pcVar2 = pcStack_268 + 8;
      do {
        lVar14 = *(long *)pcVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *(long *)pcVar2 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_268 + 0x10))(pcStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    FUN_10a30f97c();
    FUN_10a3103d8();
    FUN_10ad4ba44();
    FUN_10a22afb0(&pcStack_1b8);
    FUN_10a224f28(&lStack_280);
    lVar14 = *(long *)(*plVar13 + 0x208);
    if (*(long *)(lVar14 + 0xb8) != 0) {
      plVar6 = *(long **)(lVar14 + 0xb0);
      if (plVar6 == (long *)0x0) {
        func_0x00010a4ec5f4();
      }
      else {
        plVar7 = (long *)plVar6[2];
        pcStack_1b0 = (code *)0x0;
        pcStack_1a8 = (code *)0x0;
        if (plVar7 == (long *)0x0) {
          pcVar8 = (code *)0xc8;
          __Znwm();
          *(long *)(pcVar8 + 0x10) = 0;
          *(long *)(pcVar8 + 8) = 0x200000006;
          *(undefined2 *)(pcVar8 + 0x18) = 4;
          *(long *)(pcVar8 + 0x28) = 0;
          *(long *)(pcVar8 + 0x20) = 0;
          *(long *)(pcVar8 + 0x38) = 0;
          *(long *)(pcVar8 + 0x30) = 0;
          *(long *)(pcVar8 + 0x48) = 0;
          *(long *)(pcVar8 + 0x40) = 0;
          *(long *)(pcVar8 + 0x58) = 0;
          *(long *)(pcVar8 + 0x50) = 0;
          *(long *)(pcVar8 + 0x68) = 0;
          *(long *)(pcVar8 + 0x60) = 0;
          *(long *)(pcVar8 + 0x78) = 0;
          *(long *)(pcVar8 + 0x70) = 0;
          *(long *)(pcVar8 + 0x80) = 0;
          *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
          *(long *)(pcVar8 + 0x90) = 0;
          *(undefined2 *)(pcVar8 + 0x98) = 0;
          *(undefined ***)pcVar8 = &PTR_DAT_110bb47e8;
          pcStack_1b8 = pcVar8 + 0xa0;
          *(long *)pcStack_1b8 = lVar14;
          pcVar8[0xb8] = (code)0x1;
          *(long *)(pcVar8 + 0xc0) = 0;
          pcStack_1a0 = FUN_10a237b84;
          pcStack_1b0 = pcVar8;
          pcStack_1a8 = pcVar8;
        }
        else {
          pcStack_270 = (code *)0x0;
          (**(code **)(*plVar7 + 0x28))(plVar7,0,&pcStack_270);
          if (pcStack_270 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_270);
            goto LAB_10a21ea44;
          }
          pcVar8 = (code *)0xd0;
          __Znwm();
          *(long *)(pcVar8 + 0x10) = 0;
          *(long *)(pcVar8 + 8) = 0x200000006;
          *(undefined2 *)(pcVar8 + 0x18) = 4;
          *(long *)(pcVar8 + 0x28) = 0;
          *(long *)(pcVar8 + 0x20) = 0;
          *(long *)(pcVar8 + 0x38) = 0;
          *(long *)(pcVar8 + 0x30) = 0;
          *(long *)(pcVar8 + 0x48) = 0;
          *(long *)(pcVar8 + 0x40) = 0;
          *(long *)(pcVar8 + 0x58) = 0;
          *(long *)(pcVar8 + 0x50) = 0;
          *(long *)(pcVar8 + 0x68) = 0;
          *(long *)(pcVar8 + 0x60) = 0;
          *(long *)(pcVar8 + 0x78) = 0;
          *(long *)(pcVar8 + 0x70) = 0;
          *(long *)(pcVar8 + 0x80) = 0;
          *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
          *(long *)(pcVar8 + 0x90) = 0;
          *(undefined2 *)(pcVar8 + 0x98) = 0;
          *(long *)(pcVar8 + 0xa0) = lVar14;
          *(undefined ***)pcVar8 = &PTR_FUN_110bb47b0;
          pcVar8[0xb8] = (code)0x1;
          *(long *)(pcVar8 + 0xc0) = 0;
          *(long **)(pcVar8 + 200) = plVar7;
          if (pcStack_1b0 != (code *)0x0) {
            puVar1 = (ulong *)((long)pcStack_1b0 + 8);
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
                (**(code **)(*(long *)pcStack_1b0 + 8))();
              }
            }
          }
          pcStack_1b0 = pcVar8;
          if (pcStack_1a8 != (code *)0x0) {
            func_0x0001092b4274(&pcStack_1a8);
          }
          pcStack_1a0 = (code *)0x10a237b54;
          pcStack_1b8 = pcVar8 + 0xa0;
          pcStack_1a8 = pcVar8;
          __ZNSt13exception_ptrD1Ev(&pcStack_270);
        }
        pcVar8 = pcStack_1b8;
        if (*(long *)(pcStack_1b8 + 0x20) != 0) {
          func_0x0001092b4274();
        }
        *(code **)(pcVar8 + 0x20) = pcStack_1a8;
        pcStack_1a8 = (code *)0x0;
        pcStack_270 = pcStack_1a0;
        pcStack_268 = pcStack_1b8;
        plStack_260 = plVar6;
        (**(code **)*plVar6)(plVar6,&pcStack_270);
        pcStack_250 = pcStack_1b0;
        pcStack_1b0 = (code *)0x0;
        if (pcStack_1a8 != (code *)0x0) {
          func_0x0001092b4274(&pcStack_1a8);
          if (pcStack_1b0 != (code *)0x0) {
            puVar1 = (ulong *)((long)pcStack_1b0 + 8);
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
                (**(code **)(*(long *)pcStack_1b0 + 8))();
              }
            }
          }
        }
        FUN_109d1a244(&pcStack_250);
        FUN_10a09b344(&pcStack_250);
        if (pcStack_250 != (code *)0x0) {
          pcVar8 = pcStack_250 + 8;
          do {
            uVar11 = *(ulong *)pcVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar4) {
              *(ulong *)pcVar8 = uVar11 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *(ulong *)pcVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
              if (bVar4) {
                *(ulong *)pcVar8 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*(long *)pcStack_250 + 8))();
            }
          }
        }
      }
    }
    *(undefined8 *)(*plVar13 + 0x228) = 0;
    FUN_10a22afb0(auStack_238);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar12 = *(undefined8 **)(lVar14 + 0xb0);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x00010a4ec544();
      goto LAB_10a21e4f0;
    }
    plVar6 = (long *)puVar12[2];
    pcStack_268 = (code *)0x0;
    plStack_260 = (long *)0x0;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0xc8;
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
      *plVar6 = (long)&PTR_DAT_110bb4778;
      pcStack_270 = (code *)(plVar6 + 0x14);
      *(long *)pcStack_270 = lVar14;
      *(undefined1 *)(plVar6 + 0x17) = 1;
      plVar6[0x18] = 0;
      pcStack_258 = FUN_10a23788c;
      pcStack_268 = (code *)plVar6;
      plStack_260 = plVar6;
LAB_10a21e3f4:
      pcVar8 = pcStack_270;
      if (*(long *)(pcStack_270 + 0x20) != 0) {
        func_0x0001092b4274();
      }
      *(long **)(pcVar8 + 0x20) = plStack_260;
      plStack_260 = (long *)0x0;
      pcStack_250 = pcStack_258;
      pcStack_248 = pcStack_270;
      puStack_240 = puVar12;
      (**(code **)*puVar12)(puVar12,&pcStack_250);
      plStack_278 = (long *)pcStack_268;
      pcStack_268 = (code *)0x0;
      if (plStack_260 != (long *)0x0) {
        func_0x0001092b4274(&plStack_260);
        if (pcStack_268 != (code *)0x0) {
          puVar1 = (ulong *)((long)pcStack_268 + 8);
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
              (**(code **)(*(long *)pcStack_268 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_278);
      FUN_10a09b344(&plStack_278);
      if (plStack_278 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_278 + 1);
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
            (**(code **)(*plStack_278 + 8))();
          }
        }
      }
      goto LAB_10a21e4f0;
    }
    pcStack_250 = (code *)0x0;
    (**(code **)(*plVar6 + 0x28))(plVar6,0,&pcStack_250);
    if (pcStack_250 == (code *)0x0) {
      plVar7 = (long *)0xd0;
      __Znwm();
      plVar7[2] = 0;
      plVar7[1] = 0x200000006;
      *(undefined2 *)(plVar7 + 3) = 4;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[0x10] = 0;
      plVar7[0x11] = (long)(plVar7 + 3);
      plVar7[0x12] = 0;
      *(undefined2 *)(plVar7 + 0x13) = 0;
      plVar7[0x14] = lVar14;
      *plVar7 = (long)&PTR_FUN_110bb4740;
      *(undefined1 *)(plVar7 + 0x17) = 1;
      plVar7[0x18] = 0;
      plVar7[0x19] = (long)plVar6;
      if (pcStack_268 != (code *)0x0) {
        pcVar8 = pcStack_268 + 8;
        do {
          uVar11 = *(ulong *)pcVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar4) {
            *(ulong *)pcVar8 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *(ulong *)pcVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar4) {
              *(ulong *)pcVar8 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*(long *)pcStack_268 + 8))();
          }
        }
      }
      pcStack_268 = (code *)plVar7;
      if (plStack_260 != (long *)0x0) {
        func_0x0001092b4274(&plStack_260);
      }
      pcStack_258 = (code *)0x10a23785c;
      pcStack_270 = (code *)(plVar7 + 0x14);
      plStack_260 = plVar7;
      __ZNSt13exception_ptrD1Ev(&pcStack_250);
      goto LAB_10a21e3f4;
    }
  }
  func_0x0001092af97c(&pcStack_250);
LAB_10a21ea44:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a21ea48);
  (*pcVar8)();
}



/* Entry: 10a21e1b8; end: 10a21eb83;  */

void FUN_10a21e1b8(long *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lStack_1a0;
  long *plStack_198;
  code *pcStack_190;
  code *pcStack_188;
  long *plStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [128];
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(auStack_158,*param_1);
  pbVar5 = (byte *)0x1138363e8;
  FUN_10a08fec0();
  if ((*pbVar5 >> 2 & 1) != 0) {
    _glFinish();
  }
  lVar6 = 0;
  FUN_10a303694();
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x278) = 0;
  }
  lStack_1a0 = lVar6;
  FUN_10a219de8(&pcStack_d8,*param_1);
  ppuVar9 = &PTR_PTR_113300948;
  FUN_10ae079a0(0,&PTR_PTR_113300948);
  FUN_10ae07cd4(ppuVar9,&PTR_PTR_113300948);
  func_0x00010a08f34c(*(undefined8 *)(*param_1 + 0x10));
  lVar6 = *(long *)(*param_1 + 0x208);
  if (*(long *)(lVar6 + 0xb8) == 0) {
LAB_10a21e4f0:
    FUN_10a224acc(*param_1 + 0x188);
    FUN_10a224b28(*param_1);
    FUN_10ad41b9c(*param_1 + 0x178);
    FUN_10a4eeaf8(*(long *)(*param_1 + 0x208) + 0x10);
    pcStack_190 = (code *)0x0;
    pcStack_188 = (code *)0x0;
    FUN_10a224ec4(*param_1 + 0xc0,&pcStack_190);
    pcVar8 = pcStack_188;
    if (pcStack_188 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_188 + 8);
      do {
        lVar6 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)pcStack_188 + 0x10))(pcStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    lVar10 = *param_1;
    lVar6 = *(long *)(lVar10 + 0x150);
    *(undefined8 *)(lVar10 + 0x150) = 0;
    if (lVar6 != 0) {
      func_0x00010a237b14(lVar10 + 0x150);
      lVar10 = *param_1;
    }
    plVar13 = *(long **)(lVar10 + 0x158);
    *(undefined8 *)(lVar10 + 0x158) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
      lVar10 = *param_1;
    }
    lVar6 = *(long *)(lVar10 + 0x160);
    *(undefined8 *)(lVar10 + 0x160) = 0;
    if (lVar6 != 0) {
      func_0x00010a159354(lVar10 + 0x160);
      lVar10 = *param_1;
    }
    pcStack_190 = (code *)0x0;
    pcStack_188 = (code *)0x0;
    FUN_10a0e673c(lVar10 + 0xd0,&pcStack_190);
    pcVar8 = pcStack_188;
    if (pcStack_188 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_188 + 8);
      do {
        lVar6 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)pcStack_188 + 0x10))(pcStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_190 = (code *)0x0;
    pcStack_188 = (code *)0x0;
    FUN_10a0e673c(*param_1 + 0x118,&pcStack_190);
    pcVar8 = pcStack_188;
    if (pcStack_188 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_188 + 8);
      do {
        lVar6 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)pcStack_188 + 0x10))(pcStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_190 = (code *)0x0;
    pcStack_188 = (code *)0x0;
    FUN_10a0e673c(*param_1 + 0x130,&pcStack_190);
    pcVar8 = pcStack_188;
    if (pcStack_188 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_188 + 8);
      do {
        lVar6 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)pcStack_188 + 0x10))(pcStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_190 = (code *)0x0;
    pcStack_188 = (code *)0x0;
    func_0x00010a099dfc(*param_1 + 0xf8,&pcStack_190);
    pcVar8 = pcStack_188;
    if (pcStack_188 != (code *)0x0) {
      plVar13 = (long *)((long)pcStack_188 + 8);
      do {
        lVar6 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)pcStack_188 + 0x10))(pcStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    pcStack_190 = (code *)0x0;
    pcStack_188 = (code *)0x0;
    func_0x00010a099dfc(*param_1 + 0xe8,&pcStack_190);
    pcVar8 = pcStack_188;
    if (pcStack_188 != (code *)0x0) {
      pcVar2 = pcStack_188 + 8;
      do {
        lVar6 = *(long *)pcVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *(long *)pcVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)pcStack_188 + 0x10))(pcStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
      }
    }
    FUN_10a30f97c();
    FUN_10a3103d8();
    FUN_10ad4ba44();
    FUN_10a22afb0(&pcStack_d8);
    FUN_10a224f28(&lStack_1a0);
    lVar6 = *(long *)(*param_1 + 0x208);
    if (*(long *)(lVar6 + 0xb8) != 0) {
      plVar13 = *(long **)(lVar6 + 0xb0);
      if (plVar13 == (long *)0x0) {
        func_0x00010a4ec5f4();
      }
      else {
        plVar7 = (long *)plVar13[2];
        pcStack_d0 = (code *)0x0;
        pcStack_c8 = (code *)0x0;
        if (plVar7 == (long *)0x0) {
          pcVar8 = (code *)0xc8;
          __Znwm();
          *(long *)(pcVar8 + 0x10) = 0;
          *(long *)(pcVar8 + 8) = 0x200000006;
          *(undefined2 *)(pcVar8 + 0x18) = 4;
          *(long *)(pcVar8 + 0x28) = 0;
          *(long *)(pcVar8 + 0x20) = 0;
          *(long *)(pcVar8 + 0x38) = 0;
          *(long *)(pcVar8 + 0x30) = 0;
          *(long *)(pcVar8 + 0x48) = 0;
          *(long *)(pcVar8 + 0x40) = 0;
          *(long *)(pcVar8 + 0x58) = 0;
          *(long *)(pcVar8 + 0x50) = 0;
          *(long *)(pcVar8 + 0x68) = 0;
          *(long *)(pcVar8 + 0x60) = 0;
          *(long *)(pcVar8 + 0x78) = 0;
          *(long *)(pcVar8 + 0x70) = 0;
          *(long *)(pcVar8 + 0x80) = 0;
          *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
          *(long *)(pcVar8 + 0x90) = 0;
          *(undefined2 *)(pcVar8 + 0x98) = 0;
          *(undefined ***)pcVar8 = &PTR_DAT_110bb47e8;
          pcStack_d8 = pcVar8 + 0xa0;
          *(long *)pcStack_d8 = lVar6;
          pcVar8[0xb8] = (code)0x1;
          *(long *)(pcVar8 + 0xc0) = 0;
          pcStack_c0 = FUN_10a237b84;
          pcStack_d0 = pcVar8;
          pcStack_c8 = pcVar8;
        }
        else {
          pcStack_190 = (code *)0x0;
          (**(code **)(*plVar7 + 0x28))(plVar7,0,&pcStack_190);
          if (pcStack_190 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_190);
            goto LAB_10a21ea44;
          }
          pcVar8 = (code *)0xd0;
          __Znwm();
          *(long *)(pcVar8 + 0x10) = 0;
          *(long *)(pcVar8 + 8) = 0x200000006;
          *(undefined2 *)(pcVar8 + 0x18) = 4;
          *(long *)(pcVar8 + 0x28) = 0;
          *(long *)(pcVar8 + 0x20) = 0;
          *(long *)(pcVar8 + 0x38) = 0;
          *(long *)(pcVar8 + 0x30) = 0;
          *(long *)(pcVar8 + 0x48) = 0;
          *(long *)(pcVar8 + 0x40) = 0;
          *(long *)(pcVar8 + 0x58) = 0;
          *(long *)(pcVar8 + 0x50) = 0;
          *(long *)(pcVar8 + 0x68) = 0;
          *(long *)(pcVar8 + 0x60) = 0;
          *(long *)(pcVar8 + 0x78) = 0;
          *(long *)(pcVar8 + 0x70) = 0;
          *(long *)(pcVar8 + 0x80) = 0;
          *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
          *(long *)(pcVar8 + 0x90) = 0;
          *(undefined2 *)(pcVar8 + 0x98) = 0;
          *(long *)(pcVar8 + 0xa0) = lVar6;
          *(undefined ***)pcVar8 = &PTR_FUN_110bb47b0;
          pcVar8[0xb8] = (code)0x1;
          *(long *)(pcVar8 + 0xc0) = 0;
          *(long **)(pcVar8 + 200) = plVar7;
          if (pcStack_d0 != (code *)0x0) {
            puVar1 = (ulong *)((long)pcStack_d0 + 8);
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
                (**(code **)(*(long *)pcStack_d0 + 8))();
              }
            }
          }
          pcStack_d0 = pcVar8;
          if (pcStack_c8 != (code *)0x0) {
            func_0x0001092b4274(&pcStack_c8);
          }
          pcStack_c0 = (code *)0x10a237b54;
          pcStack_d8 = pcVar8 + 0xa0;
          pcStack_c8 = pcVar8;
          __ZNSt13exception_ptrD1Ev(&pcStack_190);
        }
        pcVar8 = pcStack_d8;
        if (*(long *)(pcStack_d8 + 0x20) != 0) {
          func_0x0001092b4274();
        }
        *(code **)(pcVar8 + 0x20) = pcStack_c8;
        pcStack_c8 = (code *)0x0;
        pcStack_190 = pcStack_c0;
        pcStack_188 = pcStack_d8;
        plStack_180 = plVar13;
        (**(code **)*plVar13)(plVar13,&pcStack_190);
        pcStack_170 = pcStack_d0;
        pcStack_d0 = (code *)0x0;
        if (pcStack_c8 != (code *)0x0) {
          func_0x0001092b4274(&pcStack_c8);
          if (pcStack_d0 != (code *)0x0) {
            puVar1 = (ulong *)((long)pcStack_d0 + 8);
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
                (**(code **)(*(long *)pcStack_d0 + 8))();
              }
            }
          }
        }
        FUN_109d1a244(&pcStack_170);
        FUN_10a09b344(&pcStack_170);
        if (pcStack_170 != (code *)0x0) {
          pcVar8 = pcStack_170 + 8;
          do {
            uVar11 = *(ulong *)pcVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar4) {
              *(ulong *)pcVar8 = uVar11 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *(ulong *)pcVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
              if (bVar4) {
                *(ulong *)pcVar8 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*(long *)pcStack_170 + 8))();
            }
          }
        }
      }
    }
    *(undefined8 *)(*param_1 + 0x228) = 0;
    FUN_10a22afb0(auStack_158);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar12 = *(undefined8 **)(lVar6 + 0xb0);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x00010a4ec544();
      goto LAB_10a21e4f0;
    }
    plVar13 = (long *)puVar12[2];
    pcStack_188 = (code *)0x0;
    plStack_180 = (long *)0x0;
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0xc8;
      __Znwm();
      plVar13[2] = 0;
      plVar13[1] = 0x200000006;
      *(undefined2 *)(plVar13 + 3) = 4;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[7] = 0;
      plVar13[6] = 0;
      plVar13[9] = 0;
      plVar13[8] = 0;
      plVar13[0xb] = 0;
      plVar13[10] = 0;
      plVar13[0xd] = 0;
      plVar13[0xc] = 0;
      plVar13[0xf] = 0;
      plVar13[0xe] = 0;
      plVar13[0x10] = 0;
      plVar13[0x11] = (long)(plVar13 + 3);
      plVar13[0x12] = 0;
      *(undefined2 *)(plVar13 + 0x13) = 0;
      *plVar13 = (long)&PTR_DAT_110bb4778;
      pcStack_190 = (code *)(plVar13 + 0x14);
      *(long *)pcStack_190 = lVar6;
      *(undefined1 *)(plVar13 + 0x17) = 1;
      plVar13[0x18] = 0;
      pcStack_178 = FUN_10a23788c;
      pcStack_188 = (code *)plVar13;
      plStack_180 = plVar13;
LAB_10a21e3f4:
      pcVar8 = pcStack_190;
      if (*(long *)(pcStack_190 + 0x20) != 0) {
        func_0x0001092b4274();
      }
      *(long **)(pcVar8 + 0x20) = plStack_180;
      plStack_180 = (long *)0x0;
      pcStack_170 = pcStack_178;
      pcStack_168 = pcStack_190;
      puStack_160 = puVar12;
      (**(code **)*puVar12)(puVar12,&pcStack_170);
      plStack_198 = (long *)pcStack_188;
      pcStack_188 = (code *)0x0;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
        if (pcStack_188 != (code *)0x0) {
          puVar1 = (ulong *)((long)pcStack_188 + 8);
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
              (**(code **)(*(long *)pcStack_188 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_198);
      FUN_10a09b344(&plStack_198);
      if (plStack_198 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_198 + 1);
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
            (**(code **)(*plStack_198 + 8))();
          }
        }
      }
      goto LAB_10a21e4f0;
    }
    pcStack_170 = (code *)0x0;
    (**(code **)(*plVar13 + 0x28))(plVar13,0,&pcStack_170);
    if (pcStack_170 == (code *)0x0) {
      plVar7 = (long *)0xd0;
      __Znwm();
      plVar7[2] = 0;
      plVar7[1] = 0x200000006;
      *(undefined2 *)(plVar7 + 3) = 4;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[0x10] = 0;
      plVar7[0x11] = (long)(plVar7 + 3);
      plVar7[0x12] = 0;
      *(undefined2 *)(plVar7 + 0x13) = 0;
      plVar7[0x14] = lVar6;
      *plVar7 = (long)&PTR_FUN_110bb4740;
      *(undefined1 *)(plVar7 + 0x17) = 1;
      plVar7[0x18] = 0;
      plVar7[0x19] = (long)plVar13;
      if (pcStack_188 != (code *)0x0) {
        pcVar8 = pcStack_188 + 8;
        do {
          uVar11 = *(ulong *)pcVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar4) {
            *(ulong *)pcVar8 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *(ulong *)pcVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar4) {
              *(ulong *)pcVar8 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*(long *)pcStack_188 + 8))();
          }
        }
      }
      pcStack_188 = (code *)plVar7;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
      }
      pcStack_178 = (code *)0x10a23785c;
      pcStack_190 = (code *)(plVar7 + 0x14);
      plStack_180 = plVar7;
      __ZNSt13exception_ptrD1Ev(&pcStack_170);
      goto LAB_10a21e3f4;
    }
  }
  func_0x0001092af97c(&pcStack_170);
LAB_10a21ea44:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a21ea48);
  (*pcVar8)();
}



/* Entry: 10a21eb84; end: 10a21ebbf;  */

void FUN_10a21eb84(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar6 = *param_1 + 0x178;
  FUN_10ad3f994();
  if (lVar6 != 0) {
    if (*(byte *)(lVar6 + 0x155) != param_3) {
      *(char *)(lVar6 + 0x155) = (char)param_3;
      if (param_3 == 0) {
        FUN_10a3dce84(*(undefined8 *)(lVar6 + 0x108));
        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xf8) + 0x1f0);
        lVar7 = *(long *)(*(long *)(lVar6 + 0x108) + 0x830);
        plStack_28 = *(long **)(lVar7 + 0x20);
        uStack_30 = *(undefined8 *)(lVar7 + 0x18);
        if (*(long *)(lVar7 + 0x20) != 0) {
          plVar1 = (long *)(*(long *)(lVar7 + 0x20) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10ad49974(uVar5,&uStack_30,&uStack_30);
        plVar1 = plStack_28;
        if (plStack_28 != (long *)0x0) {
          plVar2 = plStack_28 + 1;
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
            (**(code **)(*plStack_28 + 0x10))(plStack_28);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        FUN_10a5a398c(lVar6,1);
      }
      else {
        FUN_10a3dce20();
        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xf8) + 0x1f0);
        lVar6 = *(long *)(*(long *)(lVar6 + 0x108) + 0x830);
        plStack_28 = *(long **)(lVar6 + 0x20);
        uStack_30 = *(undefined8 *)(lVar6 + 0x18);
        if (*(long *)(lVar6 + 0x20) != 0) {
          plVar1 = (long *)(*(long *)(lVar6 + 0x20) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x00010ad49ddc(uVar5,&uStack_30);
        plVar1 = plStack_28;
        if (plStack_28 != (long *)0x0) {
          plVar2 = plStack_28 + 1;
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
            (**(code **)(*plStack_28 + 0x10))(plStack_28);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 10a21ebc0; end: 10a220783;  */

void FUN_10a21ebc0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long param_5,
                  int param_6,long *param_7)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined ******ppppppuVar11;
  code *pcVar12;
  undefined **ppuVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  long ****pppplVar21;
  ulong uVar22;
  long lVar23;
  long ****pppplVar24;
  long *****ppppplVar25;
  undefined1 uVar26;
  int iVar27;
  long *****ppppplVar28;
  undefined *******pppppppuVar29;
  long ******pppppplVar30;
  long *plVar31;
  undefined **ppuVar32;
  char cVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long *****ppppplVar36;
  undefined8 uVar37;
  long ****pppplStack_630;
  long ****pppplStack_628;
  long ****pppplStack_620;
  long *plStack_618;
  undefined ******ppppppuStack_610;
  long *****ppppplStack_608;
  long ****pppplStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined7 uStack_5df;
  undefined1 uStack_5d8;
  char cStack_5c8;
  undefined1 auStack_5c0 [8];
  long *plStack_5b8;
  char cStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long *****ppppplStack_578;
  undefined1 auStack_570 [8];
  long *plStack_568;
  undefined ******ppppppuStack_560;
  long *****ppppplStack_558;
  undefined8 uStack_548;
  long *plStack_540;
  char acStack_538 [2];
  undefined2 uStack_536;
  int iStack_534;
  long ****pppplStack_530;
  long *****ppppplStack_528;
  undefined1 uStack_520;
  long *plStack_518;
  undefined ******ppppppuStack_510;
  undefined1 uStack_508;
  undefined7 uStack_507;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined ******ppppppuStack_4f0;
  long *****ppppplStack_4e8;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  ulong uStack_4d0;
  long *plStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined8 uStack_4b8;
  undefined ******ppppppuStack_4a0;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined8 uStack_480;
  long *****ppppplStack_478;
  long ****pppplStack_470;
  long ****pppplStack_468;
  long *****ppppplStack_460;
  long *plStack_458;
  float fStack_450;
  undefined **ppuStack_448;
  char cStack_440;
  undefined7 uStack_43f;
  long ****pppplStack_438;
  undefined1 uStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  char cStack_400;
  long *plStack_3f0;
  char cStack_3d8;
  undefined1 auStack_3d0 [424];
  char acStack_228 [2];
  undefined2 uStack_226;
  int iStack_224;
  long ***ppplStack_220;
  long ***ppplStack_218;
  undefined1 uStack_210;
  long *plStack_208;
  undefined1 auStack_200 [8];
  undefined8 *apuStack_1f8 [7];
  undefined1 auStack_1c0 [128];
  long *****ppppplStack_140;
  long ****pppplStack_138;
  undefined7 uStack_130;
  char cStack_129;
  long *****ppppplStack_100;
  long ****pppplStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(auStack_1c0,*param_2);
  (**(code **)(**(long **)(*param_2 + 0x30) + 0x38))(auStack_200);
  puVar10 = PTR___tlv_bootstrap_11340d750;
  ppuVar32 = &PTR___tlv_bootstrap_11340d750;
  plStack_518 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar13 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar32 & 1) == 0) {
    ppuVar32 = ppuVar13;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar32,0x100000000);
    ppuVar32 = &PTR___tlv_bootstrap_11340d750;
    (*(code *)puVar10)();
    *(undefined1 *)ppuVar32 = 1;
  }
  puVar9 = PTR___tlv_bootstrap_11340d738;
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  pppppplVar30 = (long ******)ppuVar13[2];
  ppuVar32 = &PTR___tlv_bootstrap_11340dd08;
  if (pppppplVar30 == (long ******)0x0) {
    acStack_538[0] = '\0';
    ppppplStack_528 = (long *****)0x0;
    uStack_520 = 0;
    pppppplVar15 = (long ******)ppuVar13;
  }
  else {
    cVar33 = *(char *)((long)pppppplVar30[1] + 0x17);
    uStack_536 = 7;
    pppppplVar14 = (long ******)ppuVar32;
    acStack_538[0] = cVar33;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    pppppplVar15 = pppppplVar14;
    iVar27 = *(int *)pppppplVar14;
    if (*(int *)pppppplVar14 == 0) {
      uStack_480 = (undefined *******)0x0;
      pppppplVar15 = (long ******)0x0;
      _pthread_threadid_np(0,&uStack_480);
      *(int *)pppppplVar14 = (int)uStack_480;
      iVar27 = (int)uStack_480;
    }
    ppppplVar20 = ppppplRam00000001137eabe0;
    ppppplStack_528 = (long *****)0x0;
    uStack_520 = 0;
    iStack_534 = iVar27;
    if (cVar33 != '\0') {
      ppppplVar19 = pppppplVar30[1];
      bVar8 = *(byte *)((long)ppppplVar19 + 0x42) | *(byte *)((long)ppppplVar19 + 0x43);
      if (((bVar8 & 1) != 0) || (*(char *)(ppppplVar19 + 8) == '\x01')) {
        uVar18 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        ppppplVar19 = (long *****)cntvct_el0;
        if (uVar18 != 1000000000) {
          uVar22 = 0;
          if (uVar18 != 0) {
            uVar22 = (ulong)ppppplVar19 / uVar18;
          }
          uVar7 = 0;
          if (uVar18 != 0) {
            uVar7 = (((long)ppppplVar19 - uVar22 * uVar18) * 1000000000) / uVar18;
          }
          ppppplVar19 = (long *****)(uVar7 + uVar22 * 1000000000);
        }
        pppplStack_530 = (long ****)ppppplVar19;
        if (((bVar8 & 1) != 0) &&
           (pppppplVar15 = pppppplVar30, FUN_10a1333cc(), pppppplVar15 != (long ******)0x0)) {
          uVar26 = 3;
          if (ppppplRam00000001137eabe0 != ppppplVar20) {
            uVar26 = 5;
          }
          ppppplVar25 = (long *****)0x0;
          if (ppppplRam00000001137eabe0 != ppppplVar20) {
            ppppplVar25 = ppppplVar20;
          }
          *pppppplVar15 = (long *****)&UNK_10f64673f;
          pppppplVar15[1] = ppppplVar25;
          pppppplVar15[2] = ppppplVar19;
          *(int *)(pppppplVar15 + 3) = iVar27;
          *(undefined2 *)((long)pppppplVar15 + 0x1c) = 7;
          *(undefined1 *)((long)pppppplVar15 + 0x1e) = uVar26;
          if (((ulong)pppppplVar30[0x38] & 1) == 0) goto LAB_10a220464;
          pppppplVar30[0x18] = (long *****)((long)pppppplVar30[0x18] + 1);
        }
      }
      if (*(char *)((long)pppppplVar30[1] + 0x41) == '\x01') {
        pppppplVar30 = (long ******)pppppplVar30[0xb];
        if (pppppplVar30 != (long ******)0x0) {
          pppppplVar15 = pppppplVar30;
          (*(code *)(*pppppplVar30)[2])(pppppplVar30,&UNK_10f64673f);
          ppppplStack_528 = (long *****)pppppplVar15;
        }
        uStack_520 = pppppplVar30 != (long ******)0x0;
      }
    }
  }
  uStack_548 = 0;
  plStack_540 = (long *)0x0;
  ppppppuStack_560 = (undefined ******)0x0;
  ppppplStack_558 = (long *****)0x0;
  if (param_3 != (long *)0x0) {
    pppplStack_628 = (long ****)param_3[2];
    pppplStack_630 = (long ****)0x0;
    pppppplVar15 = &ppppplStack_100;
    FUN_10a2360c8(&uStack_480,pppppplVar15,param_3,&pppplStack_630);
    ppppplStack_558 = ppppplStack_478;
    ppppppuStack_560 = (undefined ******)uStack_480;
    if (((*(byte *)(*(long *)(*param_2 + 0x208) + 0xe1) & 0xfd) != 1) &&
       (*(int *)(*(long *)(*param_2 + 0x208) + 0xe4) == 1)) {
      (**(code **)(*param_3 + 0x40))(param_3,1);
      pppppplVar15 = (long ******)&uStack_480;
      FUN_10a1b9b14(pppppplVar15,param_3);
      ppppplVar20 = ppppplStack_478;
      ppppppuStack_560 = (undefined ******)uStack_480;
      pppppplVar30 = (long ******)ppppplStack_558;
      ppppplStack_478 = (long *****)0x0;
      uStack_480 = (undefined *******)0x0;
      ppppplStack_558 = ppppplVar20;
      if (pppppplVar30 != (long ******)0x0) {
        pppppplVar14 = pppppplVar30 + 1;
        do {
          ppppplVar20 = *pppppplVar14;
          cVar33 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar5) {
            *pppppplVar14 = (long *****)((long)ppppplVar20 + -1);
            cVar33 = ExclusiveMonitorsStatus();
          }
        } while (cVar33 != '\0');
        if (ppppplVar20 == (long *****)0x0) {
          (*(code *)(*pppppplVar30)[2])(pppppplVar30);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppplVar15 = pppppplVar30;
        }
      }
      pppppplVar30 = (long ******)ppppplStack_478;
      if ((long ******)ppppplStack_478 != (long ******)0x0) {
        pppppplVar14 = (long ******)(ppppplStack_478 + 1);
        do {
          ppppplVar20 = *pppppplVar14;
          cVar33 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar5) {
            *pppppplVar14 = (long *****)((long)ppppplVar20 + -1);
            cVar33 = ExclusiveMonitorsStatus();
          }
        } while (cVar33 != '\0');
        if (ppppplVar20 == (long *****)0x0) {
          (*(code *)(*ppppplStack_478)[2])(ppppplStack_478);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppplVar15 = pppppplVar30;
        }
      }
    }
  }
  if (*(char *)(param_5 + 0x18) == '\x01') {
    cVar33 = *(char *)(param_5 + 8);
    ppppplVar20 = *(long ******)(param_5 + 0x10);
  }
  else {
    lVar23 = *param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    cVar33 = '\0';
    ppppplVar20 = (long *****)
                  ((double)((long)pppppplVar15 - *(long *)(lVar23 + 0x9a0)) / 1000000000.0);
  }
  ppppplStack_478 = (long *****)param_4[1];
  uStack_480 = (undefined *******)*param_4;
  if (param_4[1] != 0) {
    plVar31 = (long *)(param_4[1] + 8);
    do {
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppuStack_610 = (undefined ******)CONCAT44(ppppppuStack_610._4_4_,0x3f800000);
  ppppplVar19 = &pppplStack_470;
  pppplStack_468 = (long ****)0x0;
  pppplStack_470 = (long ****)0x0;
  pppplStack_620 = (long ****)0x0;
  plStack_618 = (long *)0x0;
  pppplStack_630 = (long ****)0x0;
  pppplStack_628 = (long ****)0x0;
  plStack_458 = (long *)0x0;
  ppppplStack_460 = (long *****)0x0;
  fStack_450 = 1.0;
  ppuStack_448 = &PTR_DAT_110ba5598;
  uStack_430 = 1;
  plStack_420 = (long *)param_7[1];
  plStack_428 = (long *)*param_7;
  if (param_7[1] != 0) {
    plVar31 = (long *)(param_7[1] + 8);
    do {
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  cStack_440 = cVar33;
  pppplStack_438 = (long ****)ppppplVar20;
  FUN_10a234f44(&pppplStack_630);
  ppppplVar34 = (long *****)pppplStack_468;
  ppppplVar25 = ppppplStack_558;
  ppppppuVar11 = ppppppuStack_560;
  if ((undefined *******)ppppppuStack_560 != (undefined *******)0x0) {
    iVar27 = *(int *)(*param_7 + 0xa0);
    ppppplVar28 = (long *****)(long)iVar27;
    pppplStack_628 = (long ****)CONCAT71(pppplStack_628._1_7_,cVar33);
    pppplStack_630 = (long ****)&PTR_DAT_110ba5598;
    plStack_618 = (long *)CONCAT71(plStack_618._1_7_,1);
    ppppppuStack_610 = ppppppuStack_560;
    ppppplStack_608 = ppppplStack_558;
    if ((long ******)ppppplStack_558 != (long ******)0x0) {
      pppppplVar30 = (long ******)(ppppplStack_558 + 1);
      do {
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppplVar30,0x10);
        if (bVar5) {
          *pppppplVar30 = (long *****)((long)*pppppplVar30 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    pppplStack_600 = (long ****)((ulong)pppplStack_600 & 0xffffffffffffff00);
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    pppplStack_620 = (long ****)ppppplVar20;
    if ((long *****)pppplStack_468 != (long *****)0x0) {
      uVar18 = (long)pppplStack_468 - 1;
      if (((ulong)pppplStack_468 & uVar18) == 0) {
        ppuVar32 = (undefined **)(uVar18 & (ulong)ppppplVar28);
      }
      else {
        ppuVar32 = (undefined **)ppppplVar28;
        if (pppplStack_468 <= ppppplVar28) {
          uVar22 = 0;
          if ((long *****)pppplStack_468 != (long *****)0x0) {
            uVar22 = (ulong)ppppplVar28 / (ulong)pppplStack_468;
          }
          ppuVar32 = (undefined **)((long)ppppplVar28 - uVar22 * (long)pppplStack_468);
        }
      }
      pppplVar21 = (long ****)pppplStack_470[(long)ppuVar32];
      if (pppplVar21 != (long ****)0x0) {
        do {
          while( true ) {
            pppplVar21 = (long ****)*pppplVar21;
            if (pppplVar21 == (long ****)0x0) goto LAB_10a21f0bc;
            ppppplVar20 = (long *****)pppplVar21[1];
            if (ppppplVar20 != ppppplVar28) break;
            if (*(int *)(pppplVar21 + 2) == iVar27) {
              if ((long ******)ppppplStack_558 != (long ******)0x0) {
                pppppplVar30 = (long ******)(ppppplStack_558 + 1);
                do {
                  ppppplVar20 = *pppppplVar30;
                  cVar33 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pppppplVar30,0x10);
                  if (bVar5) {
                    *pppppplVar30 = (long *****)((long)ppppplVar20 + -1);
                    cVar33 = ExclusiveMonitorsStatus();
                  }
                } while (cVar33 != '\0');
                if (ppppplVar20 == (long *****)0x0) {
                  (*(code *)(*ppppplStack_558)[2])(ppppplStack_558);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar25);
                }
              }
              goto LAB_10a21f240;
            }
          }
          if (((ulong)pppplStack_468 & uVar18) == 0) {
            ppppplVar20 = (long *****)((ulong)ppppplVar20 & uVar18);
          }
          else if (pppplStack_468 <= ppppplVar20) {
            uVar22 = 0;
            if ((long *****)pppplStack_468 != (long *****)0x0) {
              uVar22 = (ulong)ppppplVar20 / (ulong)pppplStack_468;
            }
            ppppplVar20 = (long *****)((long)ppppplVar20 - uVar22 * (long)pppplStack_468);
          }
        } while (ppppplVar20 == (long *****)ppuVar32);
      }
    }
LAB_10a21f0bc:
    pppppplVar30 = (long ******)0x78;
    __Znwm();
    uStack_f0 = 1;
    *pppppplVar30 = (long *****)0x0;
    pppppplVar30[1] = ppppplVar28;
    *(int *)(pppppplVar30 + 2) = iVar27;
    *(char *)(pppppplVar30 + 4) = cVar33;
    pppppplVar30[3] = (long *****)&PTR_DAT_110ba5598;
    pppppplVar30[5] = (long *****)pppplStack_620;
    *(char *)(pppppplVar30 + 6) = (char)plStack_618;
    pppppplVar30[7] = (long *****)ppppppuVar11;
    pppppplVar30[8] = ppppplVar25;
    ppppppuStack_610 = (undefined ******)0x0;
    ppppplStack_608 = (long *****)0x0;
    *(ulong *)((long)pppppplVar30 + 0x69) = CONCAT17(uStack_5d8,uStack_5df);
    *(ulong *)((long)pppppplVar30 + 0x61) = CONCAT17(uStack_5e0,uStack_5e7);
    pppppplVar30[0xc] = (long *****)CONCAT71(uStack_5e7,uStack_5e8);
    pppppplVar30[0xb] = (long *****)CONCAT71(uStack_5ef,uStack_5f0);
    pppppplVar30[10] = (long *****)CONCAT71(uStack_5f7,uStack_5f8);
    pppppplVar30[9] = (long *****)pppplStack_600;
    ppppplStack_100 = (long *****)pppppplVar30;
    pppplStack_f8 = (long ****)ppppplVar19;
    if ((ppppplVar34 == (long *****)0x0) ||
       (fStack_450 * (float)ppppplVar34 < (float)((long)plStack_458 + 1))) {
      uVar18 = 1;
      if ((long *****)0x2 < ppppplVar34) {
        uVar18 = (ulong)(((ulong)ppppplVar34 & (long)ppppplVar34 - 1U) != 0);
      }
      uVar18 = uVar18 | (long)ppppplVar34 << 1;
      uVar22 = (ulong)((float)((long)plStack_458 + 1) / fStack_450);
      if (uVar18 <= uVar22) {
        uVar18 = uVar22;
      }
      FUN_10a22b3b4(ppppplVar19,uVar18);
      ppppplVar34 = (long *****)pppplStack_468;
      if (((ulong)pppplStack_468 & (long)pppplStack_468 - 1U) == 0) {
        ppuVar32 = (undefined **)((long)pppplStack_468 - 1U & (ulong)ppppplVar28);
      }
      else {
        ppuVar32 = (undefined **)ppppplVar28;
        if (pppplStack_468 <= ppppplVar28) {
          uVar18 = 0;
          if ((long *****)pppplStack_468 != (long *****)0x0) {
            uVar18 = (ulong)ppppplVar28 / (ulong)pppplStack_468;
          }
          ppuVar32 = (undefined **)((long)ppppplVar28 - uVar18 * (long)pppplStack_468);
        }
      }
    }
    ppppplVar20 = (long *****)pppplStack_470[(long)ppuVar32];
    if (ppppplVar20 == (long *****)0x0) {
      *pppppplVar30 = ppppplStack_460;
      pppplStack_470[(long)ppuVar32] = (long ***)&ppppplStack_460;
      ppppplStack_460 = (long *****)pppppplVar30;
      if (*pppppplVar30 != (long *****)0x0) {
        ppppplVar20 = (long *****)(*pppppplVar30)[1];
        if (((ulong)ppppplVar34 & (long)ppppplVar34 - 1U) == 0) {
          ppppplVar20 = (long *****)((ulong)ppppplVar20 & (long)ppppplVar34 - 1U);
        }
        else if (ppppplVar34 <= ppppplVar20) {
          uVar18 = 0;
          if (ppppplVar34 != (long *****)0x0) {
            uVar18 = (ulong)ppppplVar20 / (ulong)ppppplVar34;
          }
          ppppplVar20 = (long *****)((long)ppppplVar20 - uVar18 * (long)ppppplVar34);
        }
        ppppplVar20 = (long *****)(pppplStack_470 + (long)ppppplVar20);
        goto LAB_10a21f22c;
      }
    }
    else {
      *pppppplVar30 = (long *****)*ppppplVar20;
LAB_10a21f22c:
      *ppppplVar20 = (long ****)pppppplVar30;
    }
    plStack_458 = (long *)((long)plStack_458 + 1);
  }
LAB_10a21f240:
  ppuVar17 = &PTR___tlv_bootstrap_11340d750;
  ppuVar32 = &PTR___tlv_bootstrap_11340dd08;
  FUN_10a220784(auStack_570,param_2,&uStack_480);
  if (plStack_568 != (long *)0x0) {
    plVar31 = plStack_568 + 1;
    do {
      lVar23 = *plVar31;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_568 + 0x10))(plStack_568);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_568);
    }
  }
  plVar31 = plStack_420;
  if (plStack_420 != (long *)0x0) {
    plVar2 = plStack_420 + 1;
    do {
      lVar23 = *plVar2;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_420 + 0x10))(plStack_420);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  FUN_10a234f44();
  ppppplVar20 = ppppplStack_478;
  if (ppppplStack_478 != (long *****)0x0) {
    ppppplVar25 = ppppplStack_478 + 1;
    do {
      pppplVar21 = *ppppplVar25;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppplVar25,0x10);
      if (bVar5) {
        *ppppplVar25 = (long ****)((long)pppplVar21 + -1);
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (pppplVar21 == (long ****)0x0) {
      (*(code *)(*ppppplStack_478)[2])(ppppplStack_478);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppplVar19 = ppppplVar20;
    }
  }
  if (param_6 == 0) {
    lVar23 = *param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar26 = 0;
    ppppplVar20 = (long *****)
                  ((double)((long)ppppplVar19 - *(long *)(lVar23 + 0x9a0)) / 1000000000.0);
    uStack_5f8 = 1;
  }
  else {
    uVar26 = *(undefined1 *)(param_5 + 8);
    ppppplVar20 = *(long ******)(param_5 + 0x10);
    uStack_5f8 = *(undefined1 *)(param_5 + 0x18);
  }
  FUN_10a4ee900(*(undefined8 *)(*param_2 + 0x208));
  FUN_10a4eeda4(&uStack_480,*(undefined8 *)(*param_2 + 0x208));
  lVar23 = *(long *)(*param_2 + 0x208);
  FUN_10a4eebc4();
  pppplStack_628 = (long ****)ppppplStack_478;
  pppplStack_630 = (long ****)uStack_480;
  ppppplStack_478 = (long *****)0x0;
  uStack_480 = (undefined *******)0x0;
  if (*(long *)(lVar23 + 0x218) != 0) {
    param_7 = (long *)(lVar23 + 0x218);
  }
  plStack_618 = (long *)param_7[1];
  pppplStack_620 = (long ****)*param_7;
  if (param_7[1] != 0) {
    plVar31 = (long *)(param_7[1] + 8);
    do {
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
  }
  ppppplStack_608 = (long *****)CONCAT71(ppppplStack_608._1_7_,uVar26);
  ppppppuStack_610 = (undefined ******)&PTR_DAT_110ba5598;
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  cStack_5c8 = '\0';
  auStack_5c0[0] = 0;
  cStack_5a0 = '\0';
  puStack_598 = &UNK_10e52b660;
  uStack_590 = 0;
  uStack_588 = 0;
  uStack_580 = 0;
  pppppplVar15 = *(long *******)(*param_2 + 0x208);
  pppplStack_600 = (long ****)ppppplVar20;
  FUN_10a4eebc4();
  pppppplVar30 = (long ******)ppppplStack_478;
  ppppplStack_578 = (long *****)pppppplVar15;
  if ((long ******)ppppplStack_478 != (long ******)0x0) {
    pppppplVar14 = (long ******)(ppppplStack_478 + 1);
    do {
      ppppplVar20 = *pppppplVar14;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
      if (bVar5) {
        *pppppplVar14 = (long *****)((long)ppppplVar20 + -1);
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (ppppplVar20 == (long *****)0x0) {
      (*(code *)(*ppppplStack_478)[2])(ppppplStack_478);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppplVar15 = pppppplVar30;
    }
  }
  iVar27 = (int)pppppplVar15;
  FUN_10ad055a0();
  if (iVar27 != 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar16 == (undefined *)0x0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar31 = (long *)*ppuVar16;
      if ((plVar31 == (long *)0x0) || ((**(code **)(*plVar31 + 0x18))(), plVar31 == (long *)0x0))
      goto LAB_10a21f474;
      plVar31 = plVar31 + 7;
    }
    else {
      plVar31 = (long *)(*ppuVar16 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppppuStack_4f0,&UNK_10f6463bc);
      func_0x000107c2b054(&ppppplStack_140,&UNK_10f64630a);
      if ((long)uStack_4e0 < 0) {
        uStack_480 = (undefined *******)"null";
        if ((long ******)ppppplStack_4e8 != (long ******)0x0) {
          uStack_480 = (undefined *******)ppppppuStack_4f0;
        }
      }
      else {
        uStack_480 = (undefined *******)"null";
        if (uStack_4e0._7_1_ != '\0') {
          uStack_480 = &ppppppuStack_4f0;
        }
      }
      if (cStack_129 < '\0') {
        ppppplStack_100 = (long *****)"null";
        if ((long *****)pppplStack_138 != (long *****)0x0) {
          ppppplStack_100 = ppppplStack_140;
        }
      }
      else {
        ppppplStack_100 = (long *****)"null";
        if (cStack_129 != '\0') {
          ppppplStack_100 = (long *****)&ppppplStack_140;
        }
      }
      FUN_10a224324(&uStack_480,&ppppplStack_100);
      if ((long)uStack_4e0 < 0) {
        if ((long ******)ppppplStack_4e8 != (long ******)0x0) {
          func_0x000107c3192c(&uStack_480,ppppppuStack_4f0);
          goto LAB_10a220398;
        }
LAB_10a220308:
        uVar26 = 0;
        uStack_480 = (undefined *******)((ulong)uStack_480 & 0xffffffffffffff00);
      }
      else {
        if (uStack_4e0._7_1_ == '\0') goto LAB_10a220308;
        ppppplStack_478 = ppppplStack_4e8;
        uStack_480 = (undefined *******)ppppppuStack_4f0;
        pppplStack_470 = (long ****)uStack_4e0;
LAB_10a220398:
        uVar26 = 1;
      }
      pppplStack_468 = (long ****)CONCAT71(pppplStack_468._1_7_,uVar26);
      if (cStack_129 < '\0') {
        if ((long *****)pppplStack_138 != (long *****)0x0) {
          func_0x000107c3192c(&ppppplStack_100,ppppplStack_140);
          goto LAB_10a220428;
        }
LAB_10a2203c4:
        uStack_e8 = 0;
        ppppplStack_100 = (long *****)((ulong)ppppplStack_100 & 0xffffffffffffff00);
      }
      else {
        if (cStack_129 == '\0') goto LAB_10a2203c4;
        pppplStack_f8 = pppplStack_138;
        ppppplStack_100 = ppppplStack_140;
        uStack_f0 = CONCAT17(cStack_129,uStack_130);
LAB_10a220428:
        uStack_e8 = 1;
      }
      FUN_10a234a0c(&uStack_480,&ppppplStack_100);
      goto LAB_10a220464;
    }
  }
LAB_10a21f474:
  FUN_10a219de8(&ppppplStack_100,*param_2);
  (**(code **)(**(long **)(*param_2 + 0x30) + 0x38))(&ppppplStack_140);
  ppuVar16 = ppuVar17;
  plStack_208 = param_2;
  (*(code *)puVar10)();
  if (((ulong)*ppuVar16 & 1) == 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340d738;
    (*(code *)puVar9)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar16,0x100000000);
    ppuVar16 = ppuVar17;
    (*(code *)puVar10)();
    *(undefined1 *)ppuVar16 = 1;
  }
  ppppplVar20 = (long *****)ppuVar13[2];
  if (ppppplVar20 == (long *****)0x0) {
    acStack_228[0] = '\0';
    ppplStack_218 = (long ***)0x0;
    uStack_210 = 0;
  }
  else {
    cVar33 = *(char *)((long)ppppplVar20[1] + 0x17);
    uStack_226 = 7;
    ppuVar16 = ppuVar32;
    acStack_228[0] = cVar33;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar27 = *(int *)ppuVar16;
    if (*(int *)ppuVar16 == 0) {
      uStack_480 = (undefined *******)0x0;
      _pthread_threadid_np(0,&uStack_480);
      *(int *)ppuVar16 = (int)uStack_480;
      iVar27 = (int)uStack_480;
    }
    ppppplVar19 = ppppplRam00000001137eabe0;
    ppplStack_218 = (long ***)0x0;
    uStack_210 = 0;
    iStack_224 = iVar27;
    if (cVar33 != '\0') {
      pppplVar21 = ppppplVar20[1];
      bVar8 = *(byte *)((long)pppplVar21 + 0x42) | *(byte *)((long)pppplVar21 + 0x43);
      if (((bVar8 & 1) != 0) || (*(char *)(pppplVar21 + 8) == '\x01')) {
        uVar18 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        pppplVar21 = (long ****)cntvct_el0;
        if (uVar18 != 1000000000) {
          uVar22 = 0;
          if (uVar18 != 0) {
            uVar22 = (ulong)pppplVar21 / uVar18;
          }
          uVar7 = 0;
          if (uVar18 != 0) {
            uVar7 = (((long)pppplVar21 - uVar22 * uVar18) * 1000000000) / uVar18;
          }
          pppplVar21 = (long ****)(uVar7 + uVar22 * 1000000000);
        }
        ppplStack_220 = (long ***)pppplVar21;
        if (((bVar8 & 1) != 0) &&
           (ppppplVar25 = ppppplVar20, FUN_10a1333cc(), ppppplVar25 != (long *****)0x0)) {
          uVar26 = 3;
          if (ppppplRam00000001137eabe0 != ppppplVar19) {
            uVar26 = 5;
          }
          ppppplVar34 = (long *****)0x0;
          if (ppppplRam00000001137eabe0 != ppppplVar19) {
            ppppplVar34 = ppppplVar19;
          }
          *ppppplVar25 = (long ****)&UNK_10f64677a;
          ppppplVar25[1] = (long ****)ppppplVar34;
          ppppplVar25[2] = pppplVar21;
          *(int *)(ppppplVar25 + 3) = iVar27;
          *(undefined2 *)((long)ppppplVar25 + 0x1c) = 7;
          *(undefined1 *)((long)ppppplVar25 + 0x1e) = uVar26;
          if (((ulong)ppppplVar20[0x38] & 1) == 0) goto LAB_10a220464;
          ppppplVar20[0x18] = (long ****)((long)ppppplVar20[0x18] + 1);
        }
      }
      if (*(char *)((long)ppppplVar20[1] + 0x41) == '\x01') {
        pppplVar21 = ppppplVar20[0xb];
        if (pppplVar21 != (long ****)0x0) {
          pppplVar24 = pppplVar21;
          (*(code *)(*pppplVar21)[2])(pppplVar21,&UNK_10f64677a);
          ppplStack_218 = (long ***)pppplVar24;
        }
        uStack_210 = pppplVar21 != (long ****)0x0;
      }
    }
  }
  FUN_10a13299c(&uStack_480,&UNK_10f6463cf);
  lVar23 = *param_2;
  __ZNSt3__15mutex4lockEv(lVar23 + 0x900);
  ppppplVar20 = *(long ******)(lVar23 + 0x8d8);
  ppppplStack_4e8 = *(long ******)(lVar23 + 0x8d8);
  ppppppuStack_4f0 = *(undefined *******)(lVar23 + 0x8d0);
  plStack_4d8 = *(long **)(lVar23 + 0x8e8);
  ppppplVar19 = *(long ******)(lVar23 + 0x8e0);
  *(undefined8 *)(lVar23 + 0x8e8) = 0;
  *(undefined8 *)(lVar23 + 0x8e0) = 0;
  *(undefined8 *)(lVar23 + 0x8d8) = 0;
  *(undefined8 *)(lVar23 + 0x8d0) = 0;
  uVar18 = *(ulong *)(lVar23 + 0x8f0);
  plVar31 = *(long **)(lVar23 + 0x8f8);
  *(undefined8 *)(lVar23 + 0x8f8) = 0;
  *(undefined8 *)(lVar23 + 0x8f0) = 0;
  uStack_4e0 = ppppplVar19;
  uStack_4d0 = uVar18;
  plStack_4c8 = plVar31;
  __ZNSt3__15mutex6unlockEv(lVar23 + 0x900);
  if (ppppplVar19 != ppppplVar20) {
    ppppplVar19 = ppppplVar20 + (uVar18 >> 6);
    pppplVar21 = *ppppplVar19 + (uVar18 & 0x3f) * 8;
    uVar18 = (long)plVar31 + uVar18;
    pppplVar24 = ppppplVar20[uVar18 >> 6];
    while (pppplVar21 != pppplVar24 + (uVar18 & 0x3f) * 8) {
      (*(code *)*pppplVar21)(pppplVar21);
      pppplVar21 = pppplVar21 + 8;
      if ((long)pppplVar21 - (long)*ppppplVar19 == 0x1000) {
        ppppplVar19 = ppppplVar19 + 1;
        pppplVar21 = *ppppplVar19;
      }
    }
  }
  FUN_10a2369a8(&ppppppuStack_4f0);
  iVar27 = (int)&uStack_480;
  FUN_10a144868();
  FUN_10ad055a0();
  if (iVar27 != 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar16 == (undefined *)0x0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar31 = (long *)*ppuVar16;
      if ((plVar31 == (long *)0x0) || ((**(code **)(*plVar31 + 0x18))(), plVar31 == (long *)0x0))
      goto LAB_10a21f718;
      plVar31 = plVar31 + 7;
    }
    else {
      plVar31 = (long *)(*ppuVar16 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppppuStack_4a0,&UNK_10f6463e5);
      func_0x000107c2b054(&ppppppuStack_510,&UNK_10f64630a);
      ppppppuStack_4f0 = (undefined ******)0x10f29b0c6;
      uStack_480 = (undefined *******)ppppppuStack_4f0;
      if ((long)uStack_490 < 0) {
        if (CONCAT71(uStack_497,uStack_498) != 0) {
          uStack_480 = (undefined *******)ppppppuStack_4a0;
        }
      }
      else if (uStack_490._7_1_ != '\0') {
        uStack_480 = &ppppppuStack_4a0;
      }
      if ((long)uStack_500 < 0) {
        if (CONCAT71(uStack_507,uStack_508) != 0) {
          ppppppuStack_4f0 = ppppppuStack_510;
        }
      }
      else if (uStack_500._7_1_ != '\0') {
        ppppppuStack_4f0 = (undefined ******)&ppppppuStack_510;
      }
      FUN_10a224324(&uStack_480,&ppppppuStack_4f0);
      if ((long)uStack_490 < 0) {
        if (CONCAT71(uStack_497,uStack_498) != 0) {
          func_0x000107c3192c(&uStack_480,ppppppuStack_4a0);
          goto LAB_10a2203e0;
        }
LAB_10a22037c:
        uVar26 = 0;
        uStack_480 = (undefined *******)((ulong)uStack_480 & 0xffffffffffffff00);
      }
      else {
        if (uStack_490._7_1_ == '\0') goto LAB_10a22037c;
        ppppplStack_478 = (long *****)CONCAT71(uStack_497,uStack_498);
        uStack_480 = (undefined *******)ppppppuStack_4a0;
        pppplStack_470 = (long ****)uStack_490;
LAB_10a2203e0:
        uVar26 = 1;
      }
      pppplStack_468 = (long ****)CONCAT71(pppplStack_468._1_7_,uVar26);
      if ((long)uStack_500 < 0) {
        if (CONCAT71(uStack_507,uStack_508) != 0) {
          func_0x000107c3192c(&ppppppuStack_4f0,ppppppuStack_510);
          goto LAB_10a220450;
        }
LAB_10a22040c:
        uVar26 = 0;
        ppppppuStack_4f0 = (undefined ******)((ulong)ppppppuStack_4f0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_500._7_1_ == '\0') goto LAB_10a22040c;
        ppppplStack_4e8 = (long *****)CONCAT71(uStack_507,uStack_508);
        ppppppuStack_4f0 = ppppppuStack_510;
        uStack_4e0 = uStack_500;
LAB_10a220450:
        uVar26 = 1;
      }
      plStack_4d8 = (long *)CONCAT71(plStack_4d8._1_7_,uVar26);
      FUN_10a234a0c(&uStack_480,&ppppppuStack_4f0);
      goto LAB_10a220464;
    }
  }
LAB_10a21f718:
  FUN_10a13299c(&uStack_480,&UNK_10f646419);
  pppplVar21 = pppplStack_620;
  FUN_10a22b608(pppplStack_620,*(int *)(pppplStack_620 + 0x14));
  iVar27 = *(int *)pppplVar21;
  if (iVar27 == -1) {
    iVar27 = 1;
  }
  *(int *)(*(long *)(*param_2 + 0x180) + 0x108) = iVar27;
  FUN_10a144868(&uStack_480);
  ppppplVar20 = ppppplStack_578;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = param_1 + 7;
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(ppppplStack_578 + 0x33) == -1) {
    pppplVar21 = pppplStack_620;
    FUN_10a22b608(pppplStack_620,*(int *)(pppplStack_620 + 0x14));
    ppppplVar25 = (long *****)pppplVar21[1];
    ppppplVar19 = (long *****)*pppplVar21;
    ppppplVar34 = (long *****)pppplVar21[2];
    ppppplVar35 = (long *****)pppplVar21[5];
    ppppplVar28 = (long *****)pppplVar21[4];
    ppppplVar20[0x36] = (long ****)pppplVar21[3];
    ppppplVar20[0x35] = (long ****)ppppplVar34;
    ppppplVar20[0x38] = (long ****)ppppplVar35;
    ppppplVar20[0x37] = (long ****)ppppplVar28;
    ppppplVar20[0x34] = (long ****)ppppplVar25;
    ppppplVar20[0x33] = (long ****)ppppplVar19;
    ppppplVar25 = (long *****)pppplVar21[7];
    ppppplVar19 = (long *****)pppplVar21[6];
    ppppplVar28 = (long *****)pppplVar21[9];
    ppppplVar34 = (long *****)pppplVar21[8];
    ppppplVar36 = (long *****)pppplVar21[0xb];
    ppppplVar35 = (long *****)pppplVar21[10];
    uVar37 = *(undefined8 *)((long)pppplVar21 + 0x5c);
    *(undefined8 *)((long)ppppplVar20 + 0x1fc) = *(undefined8 *)((long)pppplVar21 + 100);
    *(undefined8 *)((long)ppppplVar20 + 500) = uVar37;
    ppppplVar20[0x3c] = (long ****)ppppplVar28;
    ppppplVar20[0x3b] = (long ****)ppppplVar34;
    ppppplVar20[0x3e] = (long ****)ppppplVar36;
    ppppplVar20[0x3d] = (long ****)ppppplVar35;
    ppppplVar20[0x3a] = (long ****)ppppplVar25;
    ppppplVar20[0x39] = (long ****)ppppplVar19;
    FUN_10a22b858(ppppplVar20 + 0x41,pppplVar21 + 0xe);
  }
  if ((long *****)pppplStack_630 == (long *****)0x0) {
    ppppppuStack_4f0 = (undefined ******)0x0;
    ppppplStack_4e8 = (long *****)0x0;
  }
  else {
    FUN_10a236b04(&ppppppuStack_4f0,&ppppppuStack_4a0,&pppplStack_630);
  }
  uStack_498 = ppppplStack_608._0_1_;
  ppppppuStack_4a0 = (undefined ******)&PTR_DAT_110ba5598;
  uStack_490 = (long *****)pppplStack_600;
  uStack_488 = uStack_5f8;
  FUN_10ad3ddf0(&uStack_480,&ppppppuStack_4f0,&pppplStack_620,*(undefined1 *)(*param_2 + 0x7da),
                uStack_5f0,&ppppppuStack_4a0,&uStack_5e8,auStack_5c0,&puStack_598);
  ppppplVar19 = ppppplStack_4e8;
  if ((long ******)ppppplStack_4e8 != (long ******)0x0) {
    pppppplVar30 = (long ******)(ppppplStack_4e8 + 1);
    do {
      ppppplVar25 = *pppppplVar30;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppplVar30,0x10);
      if (bVar5) {
        *pppppplVar30 = (long *****)((long)ppppplVar25 + -1);
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (ppppplVar25 == (long *****)0x0) {
      (*(code *)(*ppppplStack_4e8)[2])(ppppplStack_4e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar19);
    }
  }
  FUN_10ad3f074(&ppppppuStack_4f0,*param_2 + 0x178,&uStack_480,ppppplVar20);
  FUN_10a22438c(param_1,&ppppppuStack_4f0);
  FUN_10a22ba60(auStack_4c0,uStack_4b8);
  plVar31 = plStack_4c8;
  if (plStack_4c8 != (long *)0x0) {
    plVar2 = plStack_4c8 + 1;
    do {
      lVar23 = *plVar2;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  plVar31 = plStack_4d8;
  if (plStack_4d8 != (long *)0x0) {
    plVar2 = plStack_4d8 + 1;
    do {
      lVar23 = *plVar2;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_4d8 + 0x10))(plStack_4d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  ppppplVar19 = ppppplStack_4e8;
  if ((long ******)ppppplStack_4e8 != (long ******)0x0) {
    pppppplVar30 = (long ******)(ppppplStack_4e8 + 1);
    do {
      ppppplVar25 = *pppppplVar30;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppplVar30,0x10);
      if (bVar5) {
        *pppppplVar30 = (long *****)((long)ppppplVar25 + -1);
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (ppppplVar25 == (long *****)0x0) {
      (*(code *)(*ppppplStack_4e8)[2])(ppppplStack_4e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar19);
    }
  }
  FUN_10a22b938(auStack_3d0);
  if ((cStack_3d8 == '\x01') && (plStack_3f0 != (long *)0x0)) {
    plVar31 = plStack_3f0 + 1;
    do {
      lVar23 = *plVar31;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3f0);
    }
  }
  if ((cStack_400 == '\x01') && (plStack_418 != (long *)0x0)) {
    plVar31 = plStack_418 + 1;
    do {
      lVar23 = *plVar31;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_418 + 0x10))(plStack_418);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_418);
    }
  }
  plVar31 = plStack_428;
  if (plStack_428 != (long *)0x0) {
    plVar2 = plStack_428 + 1;
    do {
      lVar23 = *plVar2;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_428 + 0x10))(plStack_428);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  plVar31 = (long *)CONCAT71(uStack_43f,cStack_440);
  if (plVar31 != (long *)0x0) {
    plVar2 = plVar31 + 1;
    do {
      lVar23 = *plVar2;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  plVar31 = plStack_458;
  if (plStack_458 != (long *)0x0) {
    plVar2 = plStack_458 + 1;
    do {
      lVar23 = *plVar2;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar23 + -1;
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_458 + 0x10))(plStack_458);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  pppplVar21 = pppplStack_468;
  if ((long *****)pppplStack_468 != (long *****)0x0) {
    ppppplVar19 = (long *****)(pppplStack_468 + 1);
    do {
      pppplVar24 = *ppppplVar19;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppplVar19,0x10);
      if (bVar5) {
        *ppppplVar19 = (long ****)((long)pppplVar24 + -1);
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (pppplVar24 == (long ****)0x0) {
      (*(code *)(*pppplStack_468)[2])(pppplStack_468);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar21);
    }
  }
  ppppplVar19 = ppppplStack_478;
  if ((long ******)ppppplStack_478 != (long ******)0x0) {
    pppppplVar30 = (long ******)(ppppplStack_478 + 1);
    do {
      ppppplVar25 = *pppppplVar30;
      cVar33 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppplVar30,0x10);
      if (bVar5) {
        *pppppplVar30 = (long *****)((long)ppppplVar25 + -1);
        cVar33 = ExclusiveMonitorsStatus();
      }
    } while (cVar33 != '\0');
    if (ppppplVar25 == (long *****)0x0) {
      (*(code *)(*ppppplStack_478)[2])(ppppplStack_478);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar19);
    }
  }
  ppuVar16 = ppuVar17;
  (*(code *)puVar10)();
  if (((ulong)*ppuVar16 & 1) == 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340d738;
    (*(code *)puVar9)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar16,0x100000000);
    (*(code *)puVar10)();
    *(undefined1 *)ppuVar17 = 1;
  }
  pppppppuVar29 = uStack_480;
  ppppplVar19 = (long *****)ppuVar13[2];
  if (ppppplVar19 == (long *****)0x0) {
    uStack_480 = (undefined *******)((ulong)uStack_480._1_7_ << 8);
    pppplStack_470 = (long ****)0x0;
    pppplStack_468 = (long ****)((ulong)pppplStack_468 & 0xffffffffffffff00);
  }
  else {
    cVar33 = *(char *)((long)ppppplVar19[1] + 0x17);
    uStack_480 = (undefined *******)CONCAT71(uStack_480._1_7_,cVar33);
    ppppplVar25 = (long *****)uStack_480;
    uStack_480._4_4_ = SUB84(pppppppuVar29,4);
    uStack_480._0_4_ = CONCAT22(7,(short)ppppplVar25);
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar27 = *(int *)ppuVar32;
    if (*(int *)ppuVar32 == 0) {
      ppppppuStack_4f0 = (undefined ******)0x0;
      _pthread_threadid_np(0,&ppppppuStack_4f0);
      *(int *)ppuVar32 = (int)ppppppuStack_4f0;
      iVar27 = (int)ppppppuStack_4f0;
    }
    ppppplVar25 = ppppplRam00000001137eabe0;
    uStack_480 = (undefined *******)CONCAT44(iVar27,(int)uStack_480);
    pppplStack_470 = (long ****)0x0;
    pppplStack_468 = (long ****)((ulong)pppplStack_468 & 0xffffffffffffff00);
    if (cVar33 != '\0') {
      pppplVar21 = ppppplVar19[1];
      bVar8 = *(byte *)((long)pppplVar21 + 0x42) | *(byte *)((long)pppplVar21 + 0x43);
      if (((bVar8 & 1) != 0) || (*(char *)(pppplVar21 + 8) == '\x01')) {
        uVar18 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        pppppplVar30 = (long ******)cntvct_el0;
        if (uVar18 != 1000000000) {
          uVar22 = 0;
          if (uVar18 != 0) {
            uVar22 = (ulong)pppppplVar30 / uVar18;
          }
          uVar7 = 0;
          if (uVar18 != 0) {
            uVar7 = (((long)pppppplVar30 - uVar22 * uVar18) * 1000000000) / uVar18;
          }
          pppppplVar30 = (long ******)(uVar7 + uVar22 * 1000000000);
        }
        ppppplStack_478 = (long *****)pppppplVar30;
        if (((bVar8 & 1) != 0) &&
           (ppppplVar34 = ppppplVar19, FUN_10a1333cc(), ppppplVar34 != (long *****)0x0)) {
          uVar26 = 3;
          if (ppppplRam00000001137eabe0 != ppppplVar25) {
            uVar26 = 5;
          }
          ppppplVar28 = (long *****)0x0;
          if (ppppplRam00000001137eabe0 != ppppplVar25) {
            ppppplVar28 = ppppplVar25;
          }
          *ppppplVar34 = (long ****)&UNK_10f64678c;
          ppppplVar34[1] = (long ****)ppppplVar28;
          ppppplVar34[2] = (long ****)pppppplVar30;
          *(int *)(ppppplVar34 + 3) = iVar27;
          *(undefined2 *)((long)ppppplVar34 + 0x1c) = 7;
          *(undefined1 *)((long)ppppplVar34 + 0x1e) = uVar26;
          if (((ulong)ppppplVar19[0x38] & 1) == 0) goto LAB_10a220464;
          ppppplVar19[0x18] = (long ****)((long)ppppplVar19[0x18] + 1);
        }
      }
      if (*(char *)((long)ppppplVar19[1] + 0x41) == '\x01') {
        ppppplVar19 = (long *****)ppppplVar19[0xb];
        if (ppppplVar19 != (long *****)0x0) {
          ppppplVar25 = ppppplVar19;
          (*(code *)(*ppppplVar19)[2])(ppppplVar19,&UNK_10f64678c);
          pppplStack_470 = (long ****)ppppplVar25;
        }
        pppplStack_468 = (long ****)CONCAT71(pppplStack_468._1_7_,ppppplVar19 != (long *****)0x0);
      }
    }
  }
  lVar23 = *param_2;
  if (*(int *)(lVar23 + 0x188) < 0) {
LAB_10a21fdf0:
    FUN_10a236c48(&uStack_480);
    FUN_10a13299c(&uStack_480,&UNK_10f64642a);
    uStack_508 = ppppplStack_608._0_1_;
    ppppppuStack_510 = (undefined ******)&PTR_DAT_110ba5598;
    uStack_500 = (long *****)pppplStack_600;
    uStack_4f8 = uStack_5f8;
    (**(code **)(**(long **)(*param_2 + 0x8a0) + 0x38))
              (*(long **)(*param_2 + 0x8a0),&ppppppuStack_510,ppppplVar20);
    ppppplStack_4e8 = (long *****)0x0;
    ppppppuStack_4f0 = (undefined ******)0x0;
    plStack_4d8 = (long *)0x0;
    uStack_4e0 = (long *****)0x0;
    uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x3f800000);
    func_0x00010a22bbc0(ppppplVar20 + 6,&ppppppuStack_4f0);
    FUN_10a234f44(&ppppppuStack_4f0);
    FUN_10a236e48(ppppplVar20 + 0xb,0);
    FUN_10a144868(&uStack_480);
    FUN_10a2367a8(acStack_228);
    FUN_10a22448c(&plStack_208);
    FUN_10a044790(&ppppplStack_140);
    (*(code *)*pppplStack_138)(&pppplStack_138);
    FUN_10a22afb0(&ppppplStack_100);
    FUN_10a22b938(&puStack_598);
    if ((cStack_5a0 == '\x01') && (plStack_5b8 != (long *)0x0)) {
      plVar31 = plStack_5b8 + 1;
      do {
        lVar23 = *plVar31;
        cVar33 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar5) {
          *plVar31 = lVar23 + -1;
          cVar33 = ExclusiveMonitorsStatus();
        }
      } while (cVar33 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_5b8);
      }
    }
    if ((cStack_5c8 == '\x01') &&
       (plVar31 = (long *)CONCAT71(uStack_5df,uStack_5e0), plVar31 != (long *)0x0)) {
      plVar2 = plVar31 + 1;
      do {
        lVar23 = *plVar2;
        cVar33 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar23 + -1;
          cVar33 = ExclusiveMonitorsStatus();
        }
      } while (cVar33 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
      }
    }
    plVar31 = plStack_618;
    if (plStack_618 != (long *)0x0) {
      plVar2 = plStack_618 + 1;
      do {
        lVar23 = *plVar2;
        cVar33 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar23 + -1;
          cVar33 = ExclusiveMonitorsStatus();
        }
      } while (cVar33 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plStack_618 + 0x10))(plStack_618);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
      }
    }
    pppplVar21 = pppplStack_628;
    if ((long *****)pppplStack_628 != (long *****)0x0) {
      ppppplVar20 = (long *****)(pppplStack_628 + 1);
      do {
        pppplVar24 = *ppppplVar20;
        cVar33 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppplVar20,0x10);
        if (bVar5) {
          *ppppplVar20 = (long ****)((long)pppplVar24 + -1);
          cVar33 = ExclusiveMonitorsStatus();
        }
      } while (cVar33 != '\0');
      if (pppplVar24 == (long ****)0x0) {
        (*(code *)(*pppplStack_628)[2])(pppplStack_628);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar21);
      }
    }
    ppppplVar20 = ppppplStack_558;
    if ((long ******)ppppplStack_558 != (long ******)0x0) {
      pppppplVar30 = (long ******)(ppppplStack_558 + 1);
      do {
        ppppplVar19 = *pppppplVar30;
        cVar33 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppplVar30,0x10);
        if (bVar5) {
          *pppppplVar30 = (long *****)((long)ppppplVar19 + -1);
          cVar33 = ExclusiveMonitorsStatus();
        }
      } while (cVar33 != '\0');
      if (ppppplVar19 == (long *****)0x0) {
        (*(code *)(*ppppplStack_558)[2])(ppppplStack_558);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar20);
      }
    }
    plVar31 = plStack_540;
    if (plStack_540 != (long *)0x0) {
      plVar2 = plStack_540 + 1;
      do {
        lVar23 = *plVar2;
        cVar33 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar23 + -1;
          cVar33 = ExclusiveMonitorsStatus();
        }
      } while (cVar33 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plStack_540 + 0x10))(plStack_540);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
      }
    }
    FUN_10a235e8c(acStack_538);
    func_0x00010a22428c(&plStack_518);
    FUN_10a044790(auStack_200);
    (*(code *)*apuStack_1f8[0])(apuStack_1f8);
    FUN_10a22afb0(auStack_1c0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar32 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    plVar31 = (long *)*ppuVar32;
    ppppppuStack_4f0 = (undefined ******)&UNK_10f646799;
    ppppplStack_4e8 = (long *****)0x32;
    if (plVar31 != (long *)0x0) {
      lVar1 = 0;
      if ((char)plVar31[0x2c] == '\0') {
        lVar1 = 8;
      }
      plVar31 = *(long **)(*plVar31 + lVar1);
      (**(code **)(*(long *)*plVar31 + 0x68))(&ppppppuStack_4f0,(long *)*plVar31,&ppppppuStack_510);
      if (*(int *)(lVar23 + 0x188) < 1) {
        pppppppuVar29 = &ppppppuStack_4f0;
      }
      else {
        pppppppuVar29 = (undefined *******)(lVar23 + (long)*(int *)(lVar23 + 0x18c) * 0x10 + 400);
      }
      plVar2 = (long *)plVar31[2];
      lVar1 = plVar31[3];
      __ZNSt3__115recursive_mutex4lockEv(lVar1);
      if (*(int *)(*plVar31 + 0x734) != 2) {
        (**(code **)(*plVar2 + 0x30))(plVar2,0,0,0,0,0,0);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2);
      __ZNSt3__115recursive_mutex6unlockEv(lVar1);
      if (*pppppppuVar29 != (undefined ******)0x0) {
        func_0x00010a22baf0(pppppppuVar29);
      }
      if (0 < *(int *)(lVar23 + 0x188)) {
        func_0x00010a22bb4c(pppppppuVar29,ppppppuStack_4f0,ppppplStack_4e8);
        iVar27 = *(int *)(lVar23 + 0x18c) + 1;
        iVar3 = *(int *)(lVar23 + 0x188);
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = iVar27 / iVar3;
        }
        *(int *)(lVar23 + 0x18c) = iVar27 - iVar4 * iVar3;
      }
      ppppplVar19 = ppppplStack_4e8;
      if ((long ******)ppppplStack_4e8 != (long ******)0x0) {
        pppppplVar30 = (long ******)(ppppplStack_4e8 + 1);
        do {
          ppppplVar25 = *pppppplVar30;
          cVar33 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppplVar30,0x10);
          if (bVar5) {
            *pppppplVar30 = (long *****)((long)ppppplVar25 + -1);
            cVar33 = ExclusiveMonitorsStatus();
          }
        } while (cVar33 != '\0');
        if (ppppplVar25 == (long *****)0x0) {
          (*(code *)(*ppppplStack_4e8)[2])(ppppplStack_4e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar19);
        }
      }
      goto LAB_10a21fdf0;
    }
  }
  FUN_10a0edfc4(&ppppppuStack_4f0);
LAB_10a220464:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a220468);
  (*pcVar12)();
}



/* Entry: 10a220784; end: 10a224203;  */

void FUN_10a220784(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined *******pppppppuVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined *******pppppppuVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined *******pppppppuVar18;
  char *pcVar19;
  uint *puVar20;
  undefined **ppuVar21;
  byte bVar22;
  undefined1 uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined ****ppppuVar28;
  byte bVar29;
  long lVar30;
  long lVar31;
  undefined ******ppppppuVar32;
  undefined ******ppppppuVar33;
  undefined ******ppppppuVar34;
  undefined *****pppppuVar35;
  undefined *****pppppuVar36;
  undefined ****ppppuVar37;
  byte bVar38;
  uint uVar39;
  int iVar40;
  long *plVar41;
  undefined8 uVar42;
  undefined8 *puVar43;
  long *plVar44;
  undefined *******pppppppuVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  undefined *******pppppppuVar49;
  long *plVar50;
  undefined ******ppppppuVar51;
  undefined ******ppppppuVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined ******ppppppuVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined **ppuStack_f78;
  char cStack_f70;
  undefined ****ppppuStack_f68;
  undefined1 uStack_f60;
  undefined *****pppppuStack_f58;
  undefined ******ppppppuStack_f50;
  undefined ******ppppppuStack_f48;
  undefined ******ppppppuStack_f40;
  undefined ******ppppppuStack_f38;
  int iStack_f24;
  undefined *****pppppuStack_f20;
  undefined *****pppppuStack_f18;
  undefined ******ppppppuStack_f10;
  long lStack_f08;
  float fStack_f00;
  undefined1 auStack_ef0 [7];
  undefined8 uStack_ee9;
  undefined1 uStack_ee1;
  char acStack_ee0 [2];
  undefined2 uStack_ede;
  int iStack_edc;
  ulong uStack_ed8;
  long *plStack_ed0;
  undefined1 uStack_ec8;
  undefined ******ppppppuStack_ec0;
  undefined ******ppppppuStack_eb8;
  undefined ******ppppppuStack_eb0;
  undefined ******ppppppuStack_ea8;
  undefined *****pppppuStack_ea0;
  undefined ****ppppuStack_e98;
  uint uStack_e90;
  undefined ******ppppppuStack_e80;
  undefined ******ppppppuStack_e78;
  undefined ******ppppppuStack_e70;
  undefined ******ppppppuStack_e68;
  undefined ******ppppppuStack_e60;
  undefined *****pppppuStack_e58;
  undefined ******ppppppuStack_e50;
  undefined ******ppppppuStack_e48;
  undefined8 uStack_e40;
  undefined ****ppppuStack_e38;
  uint uStack_e30;
  char cStack_e28;
  undefined8 uStack_e20;
  long *plStack_e18;
  undefined ******ppppppuStack_e10;
  undefined ******ppppppuStack_e08;
  undefined8 uStack_e00;
  undefined ****ppppuStack_df8;
  uint uStack_df0;
  char cStack_de8;
  undefined8 uStack_de0;
  long *plStack_dd8;
  undefined1 auStack_dd0 [8];
  undefined8 *apuStack_dc8 [7];
  undefined1 auStack_d90 [128];
  undefined ******ppppppuStack_d10;
  undefined ******ppppppuStack_d08;
  undefined ******ppppppuStack_d00;
  undefined8 uStack_cf8;
  uint uStack_cf0;
  undefined4 uStack_cec;
  long *plStack_ce8;
  undefined ******ppppppuStack_ce0;
  undefined ******ppppppuStack_cd8;
  undefined1 uStack_cc8;
  undefined2 uStack_cc0;
  undefined1 auStack_cb8 [192];
  undefined1 auStack_bf8 [24];
  undefined1 uStack_be0;
  ulong uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined5 uStack_bb8;
  undefined3 uStack_bb3;
  undefined5 uStack_bb0;
  undefined8 uStack_bab;
  undefined1 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined2 uStack_b78;
  undefined1 auStack_b70 [40];
  undefined1 uStack_b48;
  undefined1 auStack_b40 [40];
  undefined1 uStack_b18;
  undefined **ppuStack_b10;
  undefined1 uStack_b08;
  undefined1 auStack_b00 [40];
  undefined1 uStack_ad8;
  ulong uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined6 uStack_ab8;
  undefined2 uStack_ab2;
  undefined6 uStack_ab0;
  undefined1 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 uStack_a80;
  ulong uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined1 uStack_a60;
  ulong uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined1 uStack_a40;
  uint uStack_a38;
  undefined2 uStack_a34;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined1 uStack_a18;
  uint uStack_a10;
  undefined8 uStack_a08;
  long lStack_a00;
  ulong uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined1 uStack_960;
  undefined8 uStack_950;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined8 uStack_93c;
  undefined1 auStack_930 [32];
  undefined1 uStack_910;
  undefined1 auStack_900 [64];
  undefined1 uStack_8c0;
  undefined1 auStack_8b8 [8];
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined5 uStack_870;
  undefined3 uStack_86b;
  undefined5 uStack_868;
  undefined1 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined ******ppppppuStack_828;
  undefined ******ppppppuStack_820;
  undefined ******ppppppuStack_818;
  undefined1 uStack_810;
  ulong uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 uStack_7f0;
  undefined1 auStack_7e8 [40];
  undefined1 uStack_7c0;
  undefined8 uStack_7b8;
  undefined1 uStack_7b0;
  undefined7 uStack_7af;
  undefined1 uStack_7a8;
  undefined8 uStack_7a7;
  undefined8 uStack_798;
  long lStack_790;
  undefined *****pppppuStack_780;
  undefined *****pppppuStack_778;
  undefined *****pppppuStack_770;
  undefined *****pppppuStack_768;
  undefined *****pppppuStack_760;
  undefined *****pppppuStack_758;
  undefined *****pppppuStack_750;
  undefined *****pppppuStack_748;
  undefined *****pppppuStack_740;
  undefined *****pppppuStack_738;
  undefined *****pppppuStack_730;
  undefined *****pppppuStack_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined8 uStack_714;
  undefined *****pppppuStack_708;
  undefined *****pppppuStack_700;
  char cStack_6f8;
  undefined **ppuStack_6f0;
  char cStack_6e8;
  undefined *****pppppuStack_6e0;
  char cStack_6d8;
  undefined ******ppppppuStack_6d0;
  undefined ******ppppppuStack_6c8;
  undefined *****pppppuStack_6c0;
  undefined8 uStack_6b8;
  undefined ******ppppppuStack_6b0;
  undefined ******ppppppuStack_6a8;
  undefined ******ppppppuStack_6a0;
  undefined1 uStack_698;
  undefined7 uStack_697;
  char cStack_690;
  undefined7 uStack_68f;
  undefined1 uStack_688;
  undefined7 uStack_687;
  undefined1 uStack_680;
  undefined7 uStack_67f;
  undefined1 uStack_678;
  undefined7 uStack_677;
  long *plStack_670;
  undefined *****pppppuStack_130;
  undefined *****pppppuStack_128;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined *****pppppuStack_b8;
  undefined *****pppppuStack_b0;
  char cStack_a8;
  undefined **ppuStack_a0;
  char cStack_98;
  undefined *****pppppuStack_90;
  char cStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(auStack_d90,*param_2);
  (**(code **)(**(long **)(*param_2 + 0x30) + 0x38))(auStack_dd0);
  puVar27 = PTR___tlv_bootstrap_11340d750;
  ppuVar21 = &PTR___tlv_bootstrap_11340d750;
  ppuVar15 = ppuVar21;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar16 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar15 & 1) == 0) {
    ppuVar15 = ppuVar16;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar15,0x100000000);
    (*(code *)puVar27)();
    *(undefined1 *)ppuVar21 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar43 = (undefined8 *)ppuVar16[2];
  if (puVar43 == (undefined8 *)0x0) {
    acStack_ee0[0] = '\0';
    plStack_ed0 = (long *)0x0;
    uStack_ec8 = 0;
  }
  else {
    cVar8 = *(char *)(puVar43[1] + 0x17);
    uStack_ede = 7;
    ppuVar21 = &PTR___tlv_bootstrap_11340dd08;
    acStack_ee0[0] = cVar8;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar40 = *(int *)ppuVar21;
    if (*(int *)ppuVar21 == 0) {
      ppppppuStack_6d0 = (undefined ******)0x0;
      _pthread_threadid_np(0,&ppppppuStack_6d0);
      *(int *)ppuVar21 = (int)ppppppuStack_6d0;
      iVar40 = (int)ppppppuStack_6d0;
    }
    lVar31 = lRam00000001137eabe0;
    plStack_ed0 = (long *)0x0;
    uStack_ec8 = 0;
    iStack_edc = iVar40;
    if (cVar8 != '\0') {
      lVar30 = puVar43[1];
      bVar22 = *(byte *)(lVar30 + 0x42) | *(byte *)(lVar30 + 0x43);
      if (((bVar22 & 1) != 0) || (*(char *)(lVar30 + 0x40) == '\x01')) {
        uVar26 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar47 = cntvct_el0;
        if (uVar26 != 1000000000) {
          uVar10 = 0;
          if (uVar26 != 0) {
            uVar10 = uVar47 / uVar26;
          }
          uVar11 = 0;
          if (uVar26 != 0) {
            uVar11 = ((uVar47 - uVar10 * uVar26) * 1000000000) / uVar26;
          }
          uVar47 = uVar11 + uVar10 * 1000000000;
        }
        uStack_ed8 = uVar47;
        if ((bVar22 & 1) != 0) {
          puVar17 = puVar43;
          FUN_10a1333cc();
          if (puVar17 != (undefined8 *)0x0) {
            uVar23 = 3;
            if (lRam00000001137eabe0 != lVar31) {
              uVar23 = 5;
            }
            lVar30 = 0;
            if (lRam00000001137eabe0 != lVar31) {
              lVar30 = lVar31;
            }
            *puVar17 = &UNK_10f576492;
            puVar17[1] = lVar30;
            puVar17[2] = uVar47;
            *(int *)(puVar17 + 3) = iVar40;
            *(undefined2 *)((long)puVar17 + 0x1c) = 7;
            *(undefined1 *)((long)puVar17 + 0x1e) = uVar23;
            if ((*(byte *)(puVar43 + 0x38) & 1) == 0) goto LAB_10a2240e8;
            puVar43[0x18] = puVar43[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar43[1] + 0x41) == '\x01') {
        plVar44 = (long *)puVar43[0xb];
        if (plVar44 != (long *)0x0) {
          plVar41 = plVar44;
          (**(code **)(*plVar44 + 0x10))(plVar44,&UNK_10f576492);
          plStack_ed0 = plVar41;
        }
        uStack_ec8 = plVar44 != (long *)0x0;
      }
    }
  }
  puVar43 = (undefined8 *)param_3[0xb];
  FUN_10a22b608(puVar43,*(undefined4 *)(puVar43 + 0x14));
  lVar31 = *param_2;
  uVar53 = puVar43[1];
  uVar42 = *puVar43;
  uVar54 = puVar43[2];
  uVar57 = puVar43[5];
  uVar55 = puVar43[4];
  *(undefined8 *)(lVar31 + 0x58) = puVar43[3];
  *(undefined8 *)(lVar31 + 0x50) = uVar54;
  *(undefined8 *)(lVar31 + 0x68) = uVar57;
  *(undefined8 *)(lVar31 + 0x60) = uVar55;
  *(undefined8 *)(lVar31 + 0x48) = uVar53;
  *(undefined8 *)(lVar31 + 0x40) = uVar42;
  uVar53 = puVar43[7];
  uVar42 = puVar43[6];
  uVar55 = puVar43[9];
  uVar54 = puVar43[8];
  uVar58 = puVar43[0xb];
  uVar57 = puVar43[10];
  uVar59 = *(undefined8 *)((long)puVar43 + 0x5c);
  *(undefined8 *)(lVar31 + 0xa4) = *(undefined8 *)((long)puVar43 + 100);
  *(undefined8 *)(lVar31 + 0x9c) = uVar59;
  *(undefined8 *)(lVar31 + 0x88) = uVar55;
  *(undefined8 *)(lVar31 + 0x80) = uVar54;
  *(undefined8 *)(lVar31 + 0x98) = uVar58;
  *(undefined8 *)(lVar31 + 0x90) = uVar57;
  *(undefined8 *)(lVar31 + 0x78) = uVar53;
  *(undefined8 *)(lVar31 + 0x70) = uVar42;
  FUN_10a22b858(lVar31 + 0xb0,puVar43 + 0xe);
  cVar8 = *(char *)(param_3 + 8);
  uStack_ee9 = param_3[9];
  uStack_ee1 = *(undefined1 *)(param_3 + 10);
  iVar40 = (int)*(undefined8 *)(*param_2 + 0x208);
  FUN_10a4ee8d4();
  FUN_10ad055a0();
  if (iVar40 != 0) {
    ppuVar21 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar21 == (undefined *)0x0) {
      ppuVar21 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar44 = (long *)*ppuVar21;
      if ((plVar44 == (long *)0x0) || ((**(code **)(*plVar44 + 0x18))(), plVar44 == (long *)0x0))
      goto LAB_10a220a24;
      plVar44 = plVar44 + 7;
    }
    else {
      plVar44 = (long *)(*ppuVar21 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar44 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppppuStack_e10,&UNK_10f646389);
      func_0x000107c2b054(&ppppppuStack_e50,&UNK_10f64630a);
      if ((long)uStack_e00 < 0) {
        pcVar19 = "null";
        if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
          pcVar19 = (char *)ppppppuStack_e10;
        }
      }
      else {
        pcVar19 = "null";
        if (uStack_e00._7_1_ != '\0') {
          pcVar19 = (char *)&ppppppuStack_e10;
        }
      }
      if ((long)uStack_e40 < 0) {
        ppppppuStack_d10 = (undefined ******)"null";
        if ((undefined *******)ppppppuStack_e48 != (undefined *******)0x0) {
          ppppppuStack_d10 = ppppppuStack_e50;
        }
      }
      else {
        ppppppuStack_d10 = (undefined ******)"null";
        if (uStack_e40._7_1_ != '\0') {
          ppppppuStack_d10 = (undefined ******)&ppppppuStack_e50;
        }
      }
      ppppppuStack_6d0 = (undefined ******)pcVar19;
      FUN_10a224324(&ppppppuStack_6d0,&ppppppuStack_d10);
      if ((long)uStack_e00 < 0) {
        if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
          func_0x000107c3192c(&ppppppuStack_6d0,ppppppuStack_e10);
          goto LAB_10a22381c;
        }
LAB_10a223784:
        uVar23 = 0;
        ppppppuStack_6d0 = (undefined ******)((ulong)ppppppuStack_6d0 & 0xffffffffffffff00);
      }
      else {
        if (uStack_e00._7_1_ == '\0') goto LAB_10a223784;
        ppppppuStack_6c8 = ppppppuStack_e08;
        ppppppuStack_6d0 = ppppppuStack_e10;
        pppppuStack_6c0 = (undefined *****)uStack_e00;
LAB_10a22381c:
        uVar23 = 1;
      }
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar23);
      if ((long)uStack_e40 < 0) {
        if ((undefined *******)ppppppuStack_e48 != (undefined *******)0x0) {
          func_0x000107c3192c(&ppppppuStack_d10,ppppppuStack_e50);
          goto LAB_10a2238b4;
        }
LAB_10a223848:
        uVar23 = 0;
        ppppppuStack_d10 = (undefined ******)((ulong)ppppppuStack_d10 & 0xffffffffffffff00);
      }
      else {
        if (uStack_e40._7_1_ == '\0') goto LAB_10a223848;
        ppppppuStack_d08 = ppppppuStack_e48;
        ppppppuStack_d10 = ppppppuStack_e50;
        ppppppuStack_d00 = uStack_e40;
LAB_10a2238b4:
        uVar23 = 1;
      }
      uStack_cf8._0_4_ = CONCAT31(uStack_cf8._1_3_,uVar23);
      FUN_10a234a0c(&ppppppuStack_6d0,&ppppppuStack_d10);
      goto LAB_10a2240e8;
    }
  }
LAB_10a220a24:
  pppppuStack_f18 = (undefined *****)0x0;
  pppppuStack_f20 = (undefined *****)0x0;
  lStack_f08 = 0;
  ppppppuStack_f10 = (undefined ******)0x0;
  fStack_f00 = *(float *)(param_3 + 6);
  FUN_10a22b3b4(&pppppuStack_f20,param_3[3]);
  for (plVar44 = (long *)param_3[4]; plVar44 != (long *)0x0; plVar44 = (long *)*plVar44) {
    FUN_10a2364a4(&pppppuStack_f20,*(undefined4 *)(plVar44 + 2));
  }
  iStack_f24 = *(int *)(param_3[0xb] + 0xa0);
  ppppppuVar32 = &pppppuStack_f20;
  FUN_10a1ba680(ppppppuVar32,&iStack_f24);
  if (ppppppuVar32 == (undefined ******)0x0) {
    ppppppuStack_e10 = (undefined ******)0x0;
    ppppppuStack_e08 = (undefined ******)0x0;
LAB_10a220abc:
    ppppppuVar52 = ppppppuStack_e08;
    ppppppuVar32 = ppppppuStack_e10;
    if (*(int *)param_3[0xb] == 3) {
      ppppppuStack_f48 = (undefined ******)param_3[1];
      ppppppuStack_f50 = (undefined ******)*param_3;
      if (param_3[1] != 0) {
        plVar44 = (long *)(param_3[1] + 8);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar13) {
            *plVar44 = *plVar44 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppppppuStack_f40 = ppppppuStack_e10;
      ppppppuStack_f38 = ppppppuStack_e08;
      if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuStack_e08 + 1);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_10a220c98:
        pppppppuVar45 = (undefined *******)(ppppppuVar52 + 1);
        do {
          ppppppuVar32 = *pppppppuVar45;
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)ppppppuVar32 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (ppppppuVar32 == (undefined ******)0x0) {
          (*(code *)(*ppppppuVar52)[2])(ppppppuVar52);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
        }
      }
    }
    else {
      FUN_10a219de8(&ppppppuStack_6d0,*param_2);
      ppppppuStack_d10 = (undefined ******)*param_3;
      ppppppuStack_d08 = (undefined ******)param_3[1];
      pppppppuVar45 = (undefined *******)ppppppuStack_d10;
      if ((undefined *******)ppppppuStack_d08 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuStack_d08 + 1);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        pppppppuVar45 = (undefined *******)*param_3;
      }
      if ((pppppppuVar45 == (undefined *******)0x0 &&
           (undefined *******)ppppppuVar32 != (undefined *******)0x0) &&
         ((*(uint *)((long)ppppppuVar32 + 0x24) | 4) == 5)) {
        lVar30 = param_3[0xb];
        FUN_10a22b608(lVar30,*(undefined4 *)(lVar30 + 0xa0));
        FUN_10a2262a4(param_2,*(undefined4 *)(ppppppuVar32 + 2),
                      *(undefined4 *)((long)ppppppuVar32 + 0x14),lVar30,
                      *(undefined4 *)((long)ppppppuVar32 + 0x24));
        (**(code **)(**(long **)(*param_2 + 0xf8) + 0x40))(*(long **)(*param_2 + 0xf8),ppppppuVar32)
        ;
        lVar31 = lVar30;
        FUN_10a0ec6f0();
        if ((int)lVar31 == 0) {
          lVar31 = 0xf8;
        }
        else {
          FUN_10a0ec6f0(lVar30);
          FUN_10a22610c(param_2,(uint)lVar30 ^ 4,*(undefined1 *)(param_3[0xb] + 0x16));
          lVar31 = 0xe8;
        }
        FUN_10a225fb4(&ppppppuStack_d10,*param_2 + lVar31);
      }
      ppppppuVar34 = ppppppuStack_d08;
      if ((undefined *******)ppppppuStack_d08 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuStack_d08 + 1);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      if ((undefined *******)ppppppuVar52 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuVar52 + 1);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppppppuStack_f50 = ppppppuStack_d10;
      ppppppuStack_f48 = ppppppuStack_d08;
      ppppppuStack_f40 = ppppppuVar32;
      ppppppuStack_f38 = ppppppuVar52;
      if ((undefined *******)ppppppuStack_d08 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuStack_d08 + 1);
        do {
          ppppppuVar32 = *pppppppuVar45;
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)ppppppuVar32 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (ppppppuVar32 == (undefined ******)0x0) {
          (*(code *)(*ppppppuStack_d08)[2])(ppppppuStack_d08);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar34);
        }
      }
      FUN_10a22afb0(&ppppppuStack_6d0);
      if ((undefined *******)ppppppuVar52 != (undefined *******)0x0) goto LAB_10a220c98;
    }
    ppppppuVar32 = (undefined ******)((ulong)auStack_ef0 | 7);
    if ((undefined *******)ppppppuStack_f40 == (undefined *******)0x0) {
      func_0x00010a22bc60(&pppppuStack_f20);
    }
    else {
      ppppppuStack_d08 = (undefined ******)CONCAT71(ppppppuStack_d08._1_7_,cVar8);
      ppppppuStack_d10 = (undefined ******)&PTR_DAT_110ba5598;
      ppppppuStack_d00 = (undefined ******)*ppppppuVar32;
      uStack_cf8._0_4_ = CONCAT31(uStack_cf8._1_3_,*(undefined1 *)(ppppppuVar32 + 1));
      if ((undefined *******)ppppppuStack_f38 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuStack_f38 + 1);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      ppppppuStack_6c8 = (undefined ******)CONCAT71(ppppppuStack_6c8._1_7_,cVar8);
      ppppppuStack_6d0 = (undefined ******)&PTR_DAT_110ba5598;
      pppppuStack_6c0 = *ppppppuVar32;
      uStack_6b8 = CONCAT71(uStack_6b8._1_7_,*(undefined1 *)(ppppppuVar32 + 1));
      ppppppuStack_6b0 = ppppppuStack_f40;
      ppppppuStack_6a8 = ppppppuStack_f38;
      uStack_cf0 = 0;
      uStack_cec = 0;
      plStack_ce8 = (long *)0x0;
      ppppppuVar52 = &pppppuStack_f20;
      FUN_10a236708(ppppppuVar52,&iStack_f24);
      ppppppuVar34 = (undefined ******)pppppuStack_f18;
      iVar40 = iStack_f24;
      if (ppppppuVar52 == (undefined ******)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
        goto LAB_10a2240e8;
      }
      ppppppuStack_6a0 = (undefined ******)ppppppuVar52[9];
      uStack_698 = SUB81(ppppppuVar52[10],0);
      uStack_68f = (undefined7)*(undefined8 *)((long)ppppppuVar52 + 0x59);
      uStack_688 = (undefined1)((ulong)*(undefined8 *)((long)ppppppuVar52 + 0x59) >> 0x38);
      uStack_697 = (undefined7)*(undefined8 *)((long)ppppppuVar52 + 0x51);
      cStack_690 = (char)((ulong)*(undefined8 *)((long)ppppppuVar52 + 0x51) >> 0x38);
      uStack_680 = 0;
      uStack_678 = 0;
      ppppppuVar51 = (undefined ******)(long)iStack_f24;
      ppppppuVar52 = ppppppuVar32;
      if ((undefined ******)pppppuStack_f18 != (undefined ******)0x0) {
        uVar26 = (long)pppppuStack_f18 - 1;
        if (((ulong)pppppuStack_f18 & uVar26) == 0) {
          ppppppuVar52 = (undefined ******)(uVar26 & (ulong)ppppppuVar51);
        }
        else {
          ppppppuVar52 = ppppppuVar51;
          if (pppppuStack_f18 <= ppppppuVar51) {
            uVar47 = 0;
            if ((undefined ******)pppppuStack_f18 != (undefined ******)0x0) {
              uVar47 = (ulong)ppppppuVar51 / (ulong)pppppuStack_f18;
            }
            ppppppuVar52 = (undefined ******)((long)ppppppuVar51 - uVar47 * (long)pppppuStack_f18);
          }
        }
        if ((undefined *****)pppppuStack_f20[(long)ppppppuVar52] != (undefined *****)0x0) {
          for (pppppppuVar45 = (undefined *******)*pppppuStack_f20[(long)ppppppuVar52];
              pppppppuVar45 != (undefined *******)0x0;
              pppppppuVar45 = (undefined *******)*pppppppuVar45) {
            ppppppuVar33 = pppppppuVar45[1];
            if (ppppppuVar33 == ppppppuVar51) {
              if (*(int *)(pppppppuVar45 + 2) == iStack_f24) goto LAB_10a220f94;
            }
            else {
              if (((ulong)pppppuStack_f18 & uVar26) == 0) {
                ppppppuVar33 = (undefined ******)((ulong)ppppppuVar33 & uVar26);
              }
              else if (pppppuStack_f18 <= ppppppuVar33) {
                uVar47 = 0;
                if ((undefined ******)pppppuStack_f18 != (undefined ******)0x0) {
                  uVar47 = (ulong)ppppppuVar33 / (ulong)pppppuStack_f18;
                }
                ppppppuVar33 = (undefined ******)
                               ((long)ppppppuVar33 - uVar47 * (long)pppppuStack_f18);
              }
              if (ppppppuVar33 != ppppppuVar52) break;
            }
          }
        }
      }
      pppppppuVar45 = (undefined *******)0x78;
      __Znwm();
      ppppppuStack_e08 = &pppppuStack_f20;
      uStack_e00 = (undefined ******)0x1;
      *pppppppuVar45 = (undefined ******)0x0;
      pppppppuVar45[1] = ppppppuVar51;
      *(int *)(pppppppuVar45 + 2) = iVar40;
      pppppppuVar45[5] = (undefined ******)0x0;
      pppppppuVar45[4] = (undefined ******)0x0;
      pppppppuVar45[7] = (undefined ******)0x0;
      pppppppuVar45[6] = (undefined ******)0x0;
      pppppppuVar45[9] = (undefined ******)0x0;
      pppppppuVar45[8] = (undefined ******)0x0;
      pppppppuVar45[0xb] = (undefined ******)0x0;
      pppppppuVar45[10] = (undefined ******)0x0;
      pppppppuVar45[0xd] = (undefined ******)0x0;
      pppppppuVar45[0xc] = (undefined ******)0x0;
      pppppppuVar45[0xe] = (undefined ******)0x0;
      pppppppuVar45[3] = (undefined ******)&PTR_DAT_110ba5598;
      pppppppuVar45[7] = (undefined ******)0x0;
      pppppppuVar45[8] = (undefined ******)0x0;
      *(char *)(pppppppuVar45 + 9) = '\0';
      ppppppuStack_e10 = (undefined ******)pppppppuVar45;
      if ((ppppppuVar34 == (undefined ******)0x0) ||
         (fStack_f00 * (float)ppppppuVar34 < (float)(lStack_f08 + 1))) {
        if (ppppppuVar34 < (undefined ******)0x3) {
          uVar26 = 1;
        }
        else {
          uVar26 = (ulong)(((ulong)ppppppuVar34 & (long)ppppppuVar34 - 1U) != 0);
        }
        uVar26 = uVar26 | (long)ppppppuVar34 << 1;
        uVar47 = (ulong)((float)(lStack_f08 + 1) / fStack_f00);
        if (uVar26 <= uVar47) {
          uVar26 = uVar47;
        }
        FUN_10a22b3b4(&pppppuStack_f20,uVar26);
        ppppppuVar34 = (undefined ******)pppppuStack_f18;
        if (((ulong)pppppuStack_f18 & (long)pppppuStack_f18 - 1U) == 0) {
          ppppppuVar52 = (undefined ******)((long)pppppuStack_f18 - 1U & (ulong)ppppppuVar51);
        }
        else {
          ppppppuVar52 = ppppppuVar51;
          if (pppppuStack_f18 <= ppppppuVar51) {
            uVar26 = 0;
            if ((undefined ******)pppppuStack_f18 != (undefined ******)0x0) {
              uVar26 = (ulong)ppppppuVar51 / (ulong)pppppuStack_f18;
            }
            ppppppuVar52 = (undefined ******)((long)ppppppuVar51 - uVar26 * (long)pppppuStack_f18);
          }
        }
      }
      ppppppuVar51 = (undefined ******)pppppuStack_f20[(long)ppppppuVar52];
      if (ppppppuVar51 == (undefined ******)0x0) {
        *pppppppuVar45 = ppppppuStack_f10;
        pppppuStack_f20[(long)ppppppuVar52] = (undefined ****)&ppppppuStack_f10;
        ppppppuStack_f10 = (undefined ******)pppppppuVar45;
        if (*pppppppuVar45 != (undefined ******)0x0) {
          ppppppuVar51 = (undefined ******)(*pppppppuVar45)[1];
          if (((ulong)ppppppuVar34 & (long)ppppppuVar34 - 1U) == 0) {
            ppppppuVar51 = (undefined ******)((ulong)ppppppuVar51 & (long)ppppppuVar34 - 1U);
          }
          else if (ppppppuVar34 <= ppppppuVar51) {
            uVar26 = 0;
            if (ppppppuVar34 != (undefined ******)0x0) {
              uVar26 = (ulong)ppppppuVar51 / (ulong)ppppppuVar34;
            }
            ppppppuVar51 = (undefined ******)((long)ppppppuVar51 - uVar26 * (long)ppppppuVar34);
          }
          ppppppuVar51 = (undefined ******)(pppppuStack_f20 + (long)ppppppuVar51);
          goto LAB_10a220f84;
        }
      }
      else {
        *pppppppuVar45 = (undefined ******)*ppppppuVar51;
LAB_10a220f84:
        *ppppppuVar51 = (undefined *****)pppppppuVar45;
      }
      lStack_f08 = lStack_f08 + 1;
LAB_10a220f94:
      *(char *)(pppppppuVar45 + 4) = (char)ppppppuStack_6c8;
      pppppppuVar45[5] = (undefined ******)pppppuStack_6c0;
      *(char *)(pppppppuVar45 + 6) = (char)uStack_6b8;
      func_0x00010a22b8d4(pppppppuVar45 + 7,&ppppppuStack_6b0);
      ppppppuVar52 = ppppppuStack_6a8;
      pppppppuVar45[10] = (undefined ******)CONCAT71(uStack_697,uStack_698);
      pppppppuVar45[9] = ppppppuStack_6a0;
      pppppppuVar45[0xc] = (undefined ******)CONCAT71(uStack_687,uStack_688);
      pppppppuVar45[0xb] = (undefined ******)CONCAT71(uStack_68f,cStack_690);
      *(ulong *)((long)pppppppuVar45 + 0x69) = CONCAT17(uStack_678,uStack_67f);
      *(ulong *)((long)pppppppuVar45 + 0x61) = CONCAT17(uStack_680,uStack_687);
      if ((undefined *******)ppppppuStack_6a8 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuStack_6a8 + 1);
        do {
          ppppppuVar34 = *pppppppuVar45;
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (ppppppuVar34 == (undefined ******)0x0) {
          (*(code *)(*ppppppuStack_6a8)[2])(ppppppuStack_6a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
        }
      }
      plVar44 = plStack_ce8;
      if (plStack_ce8 != (long *)0x0) {
        plVar41 = plStack_ce8 + 1;
        do {
          lVar31 = *plVar41;
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
          if (bVar13) {
            *plVar41 = lVar31 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plStack_ce8 + 0x10))(plStack_ce8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
        }
      }
    }
    lVar31 = *(long *)(*param_2 + 0x208);
    if ((*(char *)(lVar31 + 0xe0) == '\x01') && (*(long *)(lVar31 + 0xb8) != 0)) {
      uVar26 = *param_2 + 0x178;
      FUN_10ad41a60();
      lVar31 = *param_2;
      plVar44 = *(long **)(lVar31 + 0x210);
      if (plVar44 != (long *)(lVar31 + 0x218)) {
        do {
          pppppppuVar45 = (undefined *******)plVar44[5];
          if (pppppppuVar45 != (undefined *******)0x0) {
            pppppppuVar49 = (undefined *******)plVar44[4];
            pppppppuVar18 = pppppppuVar45 + 2;
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
              if (bVar13) {
                *pppppppuVar18 = (undefined ******)((long)*pppppppuVar18 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            pppppppuVar18 = pppppppuVar45;
            __ZNSt3__119__shared_weak_count4lockEv();
            ppppppuStack_6c8 = (undefined ******)pppppppuVar18;
            if (pppppppuVar18 != (undefined *******)0x0) {
              ppppppuStack_6d0 = (undefined ******)pppppppuVar49;
              if (pppppppuVar49 != (undefined *******)0x0) {
                (*(code *)**pppppppuVar49)();
                uVar26 = (ulong)pppppppuVar49 | uVar26;
              }
              pppppppuVar49 = pppppppuVar18 + 1;
              do {
                ppppppuVar52 = *pppppppuVar49;
                cVar9 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar49,0x10);
                if (bVar13) {
                  *pppppppuVar49 = (undefined ******)((long)ppppppuVar52 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (ppppppuVar52 == (undefined ******)0x0) {
                (*(code *)(*pppppppuVar18)[2])(pppppppuVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar18);
              }
            }
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar45);
          }
          plVar41 = (long *)plVar44[1];
          plVar50 = plVar44;
          if ((long *)plVar44[1] == (long *)0x0) {
            do {
              plVar44 = (long *)plVar50[2];
              bVar13 = (long *)*plVar44 != plVar50;
              plVar50 = plVar44;
            } while (bVar13);
          }
          else {
            do {
              plVar44 = plVar41;
              plVar41 = (long *)*plVar44;
            } while ((long *)*plVar44 != (long *)0x0);
          }
        } while (plVar44 != (long *)(lVar31 + 0x218));
        lVar31 = *param_2;
      }
      *(ulong *)(lVar31 + 0x238) = uVar26 & (*(ulong *)(lVar31 + 0x230) ^ 0xffffffffffffffff);
      FUN_10a4ca448(&ppppppuStack_6d0);
      lVar31 = *param_2;
      plVar44 = *(long **)(lVar31 + 0x210);
      if (plVar44 != (long *)(lVar31 + 0x218)) {
        do {
          pppppppuVar45 = (undefined *******)plVar44[5];
          if (pppppppuVar45 != (undefined *******)0x0) {
            pppppppuVar49 = (undefined *******)plVar44[4];
            pppppppuVar18 = pppppppuVar45 + 2;
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
              if (bVar13) {
                *pppppppuVar18 = (undefined ******)((long)*pppppppuVar18 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            pppppppuVar18 = pppppppuVar45;
            __ZNSt3__119__shared_weak_count4lockEv();
            ppppppuStack_d08 = (undefined ******)pppppppuVar18;
            if (pppppppuVar18 != (undefined *******)0x0) {
              ppppppuStack_d10 = (undefined ******)pppppppuVar49;
              if (pppppppuVar49 != (undefined *******)0x0) {
                (*(code *)(*pppppppuVar49)[1])(pppppppuVar49,&ppppppuStack_6d0);
              }
              pppppppuVar49 = pppppppuVar18 + 1;
              do {
                ppppppuVar52 = *pppppppuVar49;
                cVar9 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar49,0x10);
                if (bVar13) {
                  *pppppppuVar49 = (undefined ******)((long)ppppppuVar52 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (ppppppuVar52 == (undefined ******)0x0) {
                (*(code *)(*pppppppuVar18)[2])(pppppppuVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar18);
              }
            }
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar45);
          }
          plVar41 = (long *)plVar44[1];
          plVar50 = plVar44;
          if ((long *)plVar44[1] == (long *)0x0) {
            do {
              plVar44 = (long *)plVar50[2];
              bVar13 = (long *)*plVar44 != plVar50;
              plVar50 = plVar44;
            } while (bVar13);
          }
          else {
            do {
              plVar44 = plVar41;
              plVar41 = (long *)*plVar44;
            } while ((long *)*plVar44 != (long *)0x0);
          }
        } while (plVar44 != (long *)(lVar31 + 0x218));
        lVar31 = *param_2;
      }
      func_0x00010ad41b08(lVar31 + 0x178,&ppppppuStack_6d0);
      FUN_10a224690(*param_2 + 0x240,&ppppppuStack_6d0);
      func_0x00010a231e08(&ppppppuStack_6d0);
      uVar26 = *param_2 + 0x240;
      FUN_10a4ca778();
      lVar31 = *param_2;
      *(ulong *)(lVar31 + 0x238) = *(ulong *)(lVar31 + 0x238) | uVar26;
      if ((*(long *)(*(long *)(lVar31 + 0x180) + 0xb8) != 0) &&
         (lVar31 = *(long *)(*(long *)(*(long *)(lVar31 + 0x180) + 0xa8) + 0x28), lVar31 != 0)) {
        lVar30 = *(long *)(lVar31 + 0xf8);
        lVar31 = (long)*(char *)(lVar30 + 0x21f);
        if (lVar31 < 0) {
          lVar46 = *(long *)(lVar30 + 0x208);
          lVar31 = *(long *)(lVar30 + 0x210);
        }
        else {
          lVar46 = lVar30 + 0x208;
        }
        FUN_10ad05c6c(lVar46,lVar31);
        if ((int)lVar46 != 0) {
          *(ulong *)(*param_2 + 0x238) = *(ulong *)(*param_2 + 0x238) & 0xfffffffe23f1f9a4;
        }
      }
      FUN_10a21d694(param_2);
      bVar22 = 0;
      if (*(char *)(param_3[0xb] + 0x15) != '\x01') {
        bVar22 = 2;
      }
      lVar31 = *param_2;
      if ((*(byte *)(lVar31 + 0x7d9) & 1) == 0) {
        pbVar1 = (byte *)(lVar31 + 0x171);
        lVar31 = *param_2;
        if ((*pbVar1 & 0xfd) == 1) {
          if (*(char *)(lVar31 + 0x350) == '\x01') {
            if (1 < *(byte *)(lVar31 + 0x2ac)) {
              *(undefined1 *)(lVar31 + 0x2ac) = 1;
            }
            if (*(char *)(lVar31 + 0x2ad) != '\0') {
              *(undefined1 *)(lVar31 + 0x2ad) = 0;
            }
            if (2 < *(byte *)(lVar31 + 0x2ae)) {
              bVar29 = 0;
              *(undefined1 *)(lVar31 + 0x2ae) = 2;
              goto LAB_10a221370;
            }
          }
          bVar29 = 0;
        }
        else {
          bVar29 = 1;
        }
LAB_10a221370:
        bVar38 = 1;
      }
      else {
        bVar29 = 0;
        bVar38 = 0;
      }
      if (bVar29 < *(byte *)(lVar31 + 0x240)) {
        *(byte *)(lVar31 + 0x240) = bVar29;
      }
      if (bVar38 < *(byte *)(lVar31 + 0x241)) {
        *(byte *)(lVar31 + 0x241) = bVar38;
      }
      if (bVar22 < *(byte *)(lVar31 + 0x242)) {
        *(byte *)(lVar31 + 0x242) = bVar22;
      }
      pppppppuVar45 = *(undefined ********)(lVar31 + 0x208);
      ppppppuStack_d10 =
           (undefined ******)CONCAT44(ppppppuStack_d10._4_4_,*(undefined4 *)(lVar31 + 0x240));
      uStack_cf8._0_4_ = 0;
      uStack_cf8._4_4_ = 0;
      uStack_cf8 = (char *)0x0;
      ppppppuStack_d08 = (undefined ******)0x0;
      ppppppuStack_d00 = (undefined ******)0x0;
      lVar30 = *(long *)(lVar31 + 0x250) - *(long *)(lVar31 + 0x248);
      if (lVar30 != 0) {
        uVar26 = (lVar30 >> 2) * -0x5555555555555555;
        if (0x1555555555555555 < uVar26) {
          FUN_10a22bcf0();
          goto LAB_10a2240e8;
        }
        pppppppuVar18 = (undefined *******)((ulong)&ppppppuStack_d10 | 8);
        FUN_10a22bd04();
        uStack_cf8 = (char *)((long)pppppppuVar18 + uVar26 * 0xc);
        ppppppuStack_d08 = (undefined ******)pppppppuVar18;
        ppppppuStack_d00 = (undefined ******)pppppppuVar18;
        _memmove();
        ppppppuStack_d00 = (undefined ******)((long)pppppppuVar18 + lVar30);
      }
      uStack_cf0 = uStack_cf0 & 0xffffff00;
      uStack_cc8 = 0;
      bVar13 = *(char *)(lVar31 + 0x288) == '\x01';
      if (bVar13) {
        FUN_10a22bd48(&uStack_cf0,lVar31 + 0x260);
      }
      uStack_cc0 = *(undefined2 *)(lVar31 + 0x290);
      uStack_cc8 = bVar13;
      FUN_10a22ca70(auStack_cb8,lVar31 + 0x298);
      auStack_bf8[0] = 0;
      uStack_be0 = 0;
      bVar13 = *(char *)(lVar31 + 0x370) == '\x01';
      if (bVar13) {
        FUN_10a22d2fc(auStack_bf8,lVar31 + 0x358);
      }
      uStack_bd8 = uStack_bd8 & 0xffffffffffffff00;
      uStack_ba0 = 0;
      bVar14 = *(char *)(lVar31 + 0x3b0) == '\x01';
      uStack_be0 = bVar13;
      if (bVar14) {
        uStack_bd8 = 0;
        uStack_bd0 = 0;
        uStack_bc8 = 0;
        FUN_10a051a50(&uStack_bd8,*(long *)(lVar31 + 0x378),*(long *)(lVar31 + 0x380),
                      (*(long *)(lVar31 + 0x380) - *(long *)(lVar31 + 0x378) >> 2) *
                      -0x5555555555555555);
        uStack_bab = *(undefined8 *)(lVar31 + 0x3a5);
        uStack_bb0 = (undefined5)((ulong)*(undefined8 *)(lVar31 + 0x39d) >> 0x18);
        uStack_bc0 = *(undefined8 *)(lVar31 + 0x390);
        uStack_bb8 = (undefined5)*(undefined8 *)(lVar31 + 0x398);
        uStack_bb3 = (undefined3)((ulong)*(undefined8 *)(lVar31 + 0x398) >> 0x28);
      }
      uStack_b90 = *(undefined8 *)(lVar31 + 0x3c0);
      uStack_b98 = *(undefined8 *)(lVar31 + 0x3b8);
      uStack_b80 = *(undefined8 *)(lVar31 + 0x3d0);
      uStack_b88 = *(undefined8 *)(lVar31 + 0x3c8);
      uStack_b78 = *(undefined2 *)(lVar31 + 0x3d8);
      auStack_b70[0] = 0;
      uStack_b48 = 0;
      bVar13 = *(char *)(lVar31 + 0x408) == '\x01';
      uStack_ba0 = bVar14;
      if (bVar13) {
        FUN_10a22dff8(auStack_b70,lVar31 + 0x3e0);
      }
      auStack_b40[0] = 0;
      uStack_b18 = 0;
      bVar14 = *(char *)(lVar31 + 0x438) == '\x01';
      uStack_b48 = bVar13;
      if (bVar14) {
        FUN_10a22ec14(auStack_b40,lVar31 + 0x410);
      }
      ppuStack_b10 = (undefined **)((ulong)ppuStack_b10 & 0xffffffffffffff00);
      uStack_ad8 = 0;
      bVar13 = *(char *)(lVar31 + 0x478) == '\x01';
      uStack_b18 = bVar14;
      if (bVar13) {
        uStack_b08 = *(undefined1 *)(lVar31 + 0x448);
        ppuStack_b10 = &PTR_FUN_110bef348;
        FUN_10a22ec14(auStack_b00,lVar31 + 0x450);
      }
      uStack_ad0 = uStack_ad0 & 0xffffffffffffff00;
      uStack_aa8 = 0;
      uStack_ad8 = bVar13;
      if (*(char *)(lVar31 + 0x4a8) == '\x01') {
        if (*(char *)(lVar31 + 0x497) < '\0') {
          func_0x000107c3192c(&uStack_ad0,*(undefined8 *)(lVar31 + 0x480),
                              *(undefined8 *)(lVar31 + 0x488));
        }
        else {
          uStack_ac8 = *(undefined8 *)(lVar31 + 0x488);
          uStack_ad0 = *(ulong *)(lVar31 + 0x480);
          uStack_ac0 = *(undefined8 *)(lVar31 + 0x490);
        }
        uStack_ab0 = (undefined6)((ulong)*(undefined8 *)(lVar31 + 0x49e) >> 0x10);
        uStack_ab8 = (undefined6)*(undefined8 *)(lVar31 + 0x498);
        uStack_ab2 = (undefined2)((ulong)*(undefined8 *)(lVar31 + 0x498) >> 0x30);
        uStack_aa8 = 1;
      }
      uStack_a98 = *(undefined8 *)(lVar31 + 0x4b8);
      uStack_aa0 = *(undefined8 *)(lVar31 + 0x4b0);
      uStack_a88 = *(undefined8 *)(lVar31 + 0x4c8);
      uStack_a90 = *(undefined8 *)(lVar31 + 0x4c0);
      uStack_a80 = *(undefined1 *)(lVar31 + 0x4d0);
      uStack_a78 = uStack_a78 & 0xffffffffffffff00;
      uStack_a60 = 0;
      bVar13 = *(char *)(lVar31 + 0x4f0) == '\x01';
      if (bVar13) {
        uStack_a78 = 0;
        uStack_a70 = 0;
        uStack_a68 = 0;
        FUN_10a22fc9c(&uStack_a78,*(long *)(lVar31 + 0x4d8),*(long *)(lVar31 + 0x4e0),
                      (*(long *)(lVar31 + 0x4e0) - *(long *)(lVar31 + 0x4d8) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
      }
      uStack_a58 = uStack_a58 & 0xffffffffffffff00;
      uStack_a40 = 0;
      bVar14 = *(char *)(lVar31 + 0x510) == '\x01';
      uStack_a60 = bVar13;
      if (bVar14) {
        uStack_a58 = 0;
        uStack_a50 = 0;
        uStack_a48 = 0;
        FUN_10a22fc9c(&uStack_a58,*(long *)(lVar31 + 0x4f8),*(long *)(lVar31 + 0x500),
                      (*(long *)(lVar31 + 0x500) - *(long *)(lVar31 + 0x4f8) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
      }
      uStack_a38 = uStack_a38 & 0xffffff00;
      uStack_a18 = 0;
      uStack_a40 = bVar14;
      if (*(char *)(lVar31 + 0x538) == '\x01') {
        uStack_a38 = *(uint *)(lVar31 + 0x518);
        uStack_a34 = *(undefined2 *)(lVar31 + 0x51c);
        if (*(char *)(lVar31 + 0x537) < '\0') {
          func_0x000107c3192c(&uStack_a30,*(undefined8 *)(lVar31 + 0x520),
                              *(undefined8 *)(lVar31 + 0x528));
        }
        else {
          uStack_a28 = *(undefined8 *)(lVar31 + 0x528);
          uStack_a30 = *(undefined8 *)(lVar31 + 0x520);
          uStack_a20 = *(undefined8 *)(lVar31 + 0x530);
        }
        uStack_a18 = 1;
      }
      uStack_a10 = uStack_a10 & 0xffffff00;
      uStack_910 = 0;
      if (*(char *)(lVar31 + 0x640) == '\x01') {
        uStack_a10 = *(uint *)(lVar31 + 0x540);
        uStack_a08 = *(undefined8 *)(lVar31 + 0x548);
        lStack_a00 = *(long *)(lVar31 + 0x550);
        if (lStack_a00 != 0) {
          plVar44 = (long *)(lStack_a00 + 8);
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar13) {
              *plVar44 = *plVar44 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        uStack_9f0 = uStack_9f0 & 0xffffffffffffff00;
        uStack_960 = *(char *)(lVar31 + 0x5f0) == '\x01';
        if ((bool)uStack_960) {
          uStack_9e8 = *(undefined8 *)(lVar31 + 0x568);
          uStack_9f0 = *(ulong *)(lVar31 + 0x560);
          uStack_9d8 = *(undefined8 *)(lVar31 + 0x578);
          uStack_9e0 = *(undefined8 *)(lVar31 + 0x570);
          uStack_9c8 = *(undefined8 *)(lVar31 + 0x588);
          uStack_9d0 = *(undefined8 *)(lVar31 + 0x580);
          uStack_9c0 = *(undefined8 *)(lVar31 + 0x590);
          uStack_998 = *(undefined8 *)(lVar31 + 0x5b8);
          uStack_9a0 = *(undefined8 *)(lVar31 + 0x5b0);
          uStack_988 = *(undefined8 *)(lVar31 + 0x5c8);
          uStack_990 = *(undefined8 *)(lVar31 + 0x5c0);
          uStack_978 = *(undefined8 *)(lVar31 + 0x5d8);
          uStack_980 = *(undefined8 *)(lVar31 + 0x5d0);
          uStack_970 = *(undefined8 *)(lVar31 + 0x5e0);
          uStack_9a8 = *(undefined8 *)(lVar31 + 0x5a8);
          uStack_9b0 = *(undefined8 *)(lVar31 + 0x5a0);
        }
        uStack_93c = *(undefined8 *)(lVar31 + 0x614);
        uStack_940 = (undefined4)((ulong)*(undefined8 *)(lVar31 + 0x60c) >> 0x20);
        uStack_950 = *(undefined8 *)(lVar31 + 0x600);
        uStack_948 = (undefined4)*(undefined8 *)(lVar31 + 0x608);
        uStack_944 = (undefined4)((ulong)*(undefined8 *)(lVar31 + 0x608) >> 0x20);
        FUN_10a1ccb30(auStack_930,lVar31 + 0x620);
        uStack_910 = 1;
      }
      auStack_900[0] = 0;
      uStack_8c0 = 0;
      bVar13 = *(char *)(lVar31 + 0x690) == '\x01';
      if (bVar13) {
        FUN_10a23005c(auStack_900,lVar31 + 0x650);
      }
      auStack_8b8[0] = 0;
      uStack_860 = 0;
      uStack_8c0 = bVar13;
      if (*(char *)(lVar31 + 0x6f0) == '\x01') {
        if (*(char *)(lVar31 + 0x6af) < '\0') {
          func_0x000107c3192c(auStack_8b8,*(undefined8 *)(lVar31 + 0x698),
                              *(undefined8 *)(lVar31 + 0x6a0));
        }
        else {
          uStack_8b0 = *(undefined8 *)(lVar31 + 0x6a0);
          auStack_8b8[0] = (undefined1)*(undefined8 *)(lVar31 + 0x698);
          uStack_8a8 = *(undefined8 *)(lVar31 + 0x6a8);
        }
        if (*(char *)(lVar31 + 0x6c7) < '\0') {
          func_0x000107c3192c(&uStack_8a0,*(undefined8 *)(lVar31 + 0x6b0),
                              *(undefined8 *)(lVar31 + 0x6b8));
        }
        else {
          uStack_898 = *(undefined8 *)(lVar31 + 0x6b8);
          uStack_8a0 = *(undefined8 *)(lVar31 + 0x6b0);
          uStack_890 = *(undefined8 *)(lVar31 + 0x6c0);
        }
        if (*(char *)(lVar31 + 0x6df) < '\0') {
          func_0x000107c3192c(&uStack_888,*(undefined8 *)(lVar31 + 0x6c8),
                              *(undefined8 *)(lVar31 + 0x6d0));
        }
        else {
          uStack_880 = *(undefined8 *)(lVar31 + 0x6d0);
          uStack_888 = *(undefined8 *)(lVar31 + 0x6c8);
          uStack_878 = *(undefined8 *)(lVar31 + 0x6d8);
        }
        uStack_868 = (undefined5)((ulong)*(undefined8 *)(lVar31 + 0x6e5) >> 0x18);
        uStack_870 = (undefined5)*(undefined8 *)(lVar31 + 0x6e0);
        uStack_86b = (undefined3)((ulong)*(undefined8 *)(lVar31 + 0x6e0) >> 0x28);
        uStack_860 = 1;
      }
      uStack_850 = *(undefined8 *)(lVar31 + 0x700);
      uStack_858 = *(undefined8 *)(lVar31 + 0x6f8);
      uStack_840 = *(undefined8 *)(lVar31 + 0x710);
      uStack_848 = *(undefined8 *)(lVar31 + 0x708);
      uStack_830 = *(undefined8 *)(lVar31 + 0x720);
      uStack_838 = *(undefined8 *)(lVar31 + 0x718);
      pppppppuVar18 = &ppppppuStack_828;
      ppppppuStack_828 = (undefined ******)((ulong)ppppppuStack_828 & 0xffffffffffffff00);
      uStack_810 = 0;
      if (*(char *)(lVar31 + 0x740) == '\x01') {
        ppppppuStack_828 = (undefined ******)0x0;
        ppppppuStack_820 = (undefined ******)0x0;
        ppppppuStack_818 = (undefined ******)0x0;
        lVar46 = *(long *)(lVar31 + 0x728);
        lVar48 = *(long *)(lVar31 + 0x730);
        ppppppuStack_6c8 = (undefined ******)((ulong)ppppppuStack_6c8 & 0xffffffffffffff00);
        lVar30 = lVar48 - lVar46;
        ppppppuStack_6d0 = (undefined ******)pppppppuVar18;
        if (lVar30 != 0) {
          uVar26 = (lVar30 >> 5) * -0x3333333333333333;
          if (0x199999999999999 < uVar26) {
            FUN_10a230500();
            goto LAB_10a2240e8;
          }
          FUN_10a230514();
          lVar30 = 0;
          ppppppuStack_818 = (undefined ******)(pppppppuVar18 + uVar26 * 0x14);
          ppppppuStack_828 = (undefined ******)pppppppuVar18;
          ppppppuStack_820 = (undefined ******)pppppppuVar18;
          do {
            puVar43 = (undefined8 *)(lVar46 + lVar30);
            pcVar19 = (char *)((long)pppppppuVar18 + lVar30);
            if (*(char *)((long)puVar43 + 0x17) < '\0') {
              func_0x000107c3192c(pcVar19,*puVar43,puVar43[1]);
            }
            else {
              uVar53 = puVar43[1];
              uVar42 = *puVar43;
              *(undefined8 *)(pcVar19 + 0x10) = puVar43[2];
              *(undefined8 *)(pcVar19 + 8) = uVar53;
              *(undefined8 *)pcVar19 = uVar42;
            }
            lVar3 = lVar46 + lVar30;
            pcVar19 = (char *)((long)pppppppuVar18 + lVar30 + 0x18);
            pcVar19[0] = '\0';
            pcVar19[1] = '\0';
            pcVar19[2] = '\0';
            pcVar19[3] = '\0';
            pcVar19[4] = '\0';
            pcVar19[5] = '\0';
            pcVar19[6] = '\0';
            pcVar19[7] = '\0';
            pcVar19 = (char *)((long)pppppppuVar18 + lVar30 + 0x20);
            pcVar19[0] = '\0';
            pcVar19[1] = '\0';
            pcVar19[2] = '\0';
            pcVar19[3] = '\0';
            pcVar19[4] = '\0';
            pcVar19[5] = '\0';
            pcVar19[6] = '\0';
            pcVar19[7] = '\0';
            pcVar19 = (char *)((long)pppppppuVar18 + lVar30 + 0x28);
            pcVar19[0] = '\0';
            pcVar19[1] = '\0';
            pcVar19[2] = '\0';
            pcVar19[3] = '\0';
            pcVar19[4] = '\0';
            pcVar19[5] = '\0';
            pcVar19[6] = '\0';
            pcVar19[7] = '\0';
            FUN_10a0cf0cc();
            if (*(char *)(lVar3 + 0x47) < '\0') {
              func_0x000107c3192c((char *)((long)pppppppuVar18 + lVar30 + 0x30),
                                  *(undefined8 *)(lVar3 + 0x30),
                                  *(undefined8 *)(lVar46 + lVar30 + 0x38));
            }
            else {
              uVar53 = *(undefined8 *)(lVar3 + 0x38);
              uVar42 = *(undefined8 *)(lVar3 + 0x30);
              *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x40) = *(undefined8 *)(lVar3 + 0x40);
              *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x38) = uVar53;
              *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x30) = uVar42;
            }
            lVar3 = lVar46 + lVar30;
            uVar53 = *(undefined8 *)(lVar3 + 0x50);
            uVar42 = *(undefined8 *)(lVar3 + 0x48);
            uVar54 = *(undefined8 *)(lVar3 + 0x58);
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x60) = *(undefined8 *)(lVar3 + 0x60);
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x58) = uVar54;
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x50) = uVar53;
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x48) = uVar42;
            uVar53 = *(undefined8 *)(lVar3 + 0x70);
            uVar42 = *(undefined8 *)(lVar3 + 0x68);
            uVar55 = *(undefined8 *)(lVar3 + 0x80);
            uVar54 = *(undefined8 *)(lVar3 + 0x78);
            uVar58 = *(undefined8 *)(lVar3 + 0x90);
            uVar57 = *(undefined8 *)(lVar3 + 0x88);
            *(char *)((long)pppppppuVar18 + lVar30 + 0x98) = *(char *)(lVar3 + 0x98);
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x90) = uVar58;
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x88) = uVar57;
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x80) = uVar55;
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x78) = uVar54;
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x70) = uVar53;
            *(undefined8 *)((long)pppppppuVar18 + lVar30 + 0x68) = uVar42;
            lVar30 = lVar30 + 0xa0;
          } while (lVar46 + lVar30 != lVar48);
          ppppppuStack_820 = (undefined ******)((long)pppppppuVar18 + lVar30);
        }
        uStack_810 = 1;
      }
      uStack_808 = uStack_808 & 0xffffffffffffff00;
      uStack_7f0 = 0;
      if (*(char *)(lVar31 + 0x760) == '\x01') {
        if (*(char *)(lVar31 + 0x75f) < '\0') {
          func_0x000107c3192c(&uStack_808,*(undefined8 *)(lVar31 + 0x748),
                              *(undefined8 *)(lVar31 + 0x750));
        }
        else {
          uStack_800 = *(undefined8 *)(lVar31 + 0x750);
          uStack_808 = *(ulong *)(lVar31 + 0x748);
          uStack_7f8 = *(undefined8 *)(lVar31 + 0x758);
        }
        uStack_7f0 = 1;
      }
      auStack_7e8[0] = 0;
      uStack_7c0 = 0;
      bVar13 = *(char *)(lVar31 + 0x790) == '\x01';
      if (bVar13) {
        FUN_10a13d1fc(auStack_7e8,lVar31 + 0x768);
      }
      uStack_7b8 = *(undefined8 *)(lVar31 + 0x798);
      uStack_7b0 = (undefined1)*(undefined8 *)(lVar31 + 0x7a0);
      uStack_7a7 = *(undefined8 *)(lVar31 + 0x7a9);
      uStack_7af = (undefined7)*(undefined8 *)(lVar31 + 0x7a1);
      uStack_7a8 = (undefined1)((ulong)*(undefined8 *)(lVar31 + 0x7a1) >> 0x38);
      uStack_798 = *(undefined8 *)(lVar31 + 0x7b8);
      lStack_790 = *(long *)(lVar31 + 0x7c0);
      if (lStack_790 != 0) {
        plVar44 = (long *)(lStack_790 + 8);
        do {
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar14) {
            *plVar44 = *plVar44 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      pppppuStack_780 = *(undefined ******)(*param_2 + 0x238);
      puVar43 = (undefined8 *)param_3[0xb];
      uStack_7c0 = bVar13;
      FUN_10a22b608(puVar43,*(undefined4 *)(puVar43 + 0x14));
      pppppuStack_770 = (undefined *****)puVar43[1];
      pppppuStack_778 = (undefined *****)*puVar43;
      pppppuStack_760 = (undefined *****)puVar43[3];
      pppppuStack_768 = (undefined *****)puVar43[2];
      pppppuStack_750 = (undefined *****)puVar43[5];
      pppppuStack_758 = (undefined *****)puVar43[4];
      pppppuStack_740 = (undefined *****)puVar43[7];
      pppppuStack_748 = (undefined *****)puVar43[6];
      pppppuStack_730 = (undefined *****)puVar43[9];
      pppppuStack_738 = (undefined *****)puVar43[8];
      pppppuStack_728 = (undefined *****)puVar43[10];
      uStack_714 = *(undefined8 *)((long)puVar43 + 100);
      uStack_718 = (undefined4)((ulong)*(undefined8 *)((long)puVar43 + 0x5c) >> 0x20);
      uStack_720 = (undefined4)puVar43[0xb];
      uStack_71c = (undefined4)((ulong)puVar43[0xb] >> 0x20);
      pppppuStack_700 = (undefined *****)puVar43[0xf];
      pppppuStack_708 = (undefined *****)puVar43[0xe];
      if (puVar43[0xf] != 0) {
        plVar44 = (long *)(puVar43[0xf] + 8);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar13) {
            *plVar44 = *plVar44 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      cStack_6f8 = *(char *)(param_3[0xb] + 0x14);
      ppuStack_6f0 = &PTR_DAT_110ba5598;
      pppppuStack_6e0 = *ppppppuVar32;
      cStack_6d8 = *(char *)(ppppppuVar32 + 1);
      cStack_6e8 = cVar8;
      if (pppppppuVar45[0x17] != (undefined ******)0x0) {
        if (pppppppuVar45[0x16] == (undefined ******)0x0) {
          ppppppuStack_6c8 = (undefined ******)CONCAT71(ppppppuStack_6c8._1_7_,cVar8);
          ppppppuStack_6d0 = (undefined ******)&PTR_DAT_110ba5598;
          pppppuStack_6c0 = *ppppppuVar32;
          uStack_6b8 = CONCAT71(uStack_6b8._1_7_,*(undefined1 *)(ppppppuVar32 + 1));
          FUN_10a4ec6ec(pppppppuVar45[0x17],&ppppppuStack_d10,&ppppppuStack_6d0);
        }
        else {
          ppppppuStack_6d0 = (undefined ******)pppppppuVar45;
          FUN_10a237240(&pppppuStack_6c0,&ppppppuStack_d10);
          pppppuStack_130 = pppppuStack_780;
          pppppuStack_e0 = pppppuStack_730;
          pppppuStack_e8 = pppppuStack_738;
          uStack_d0 = uStack_720;
          pppppuStack_d8 = pppppuStack_728;
          uStack_c4 = uStack_714;
          uStack_cc = uStack_71c;
          uStack_c8 = uStack_718;
          pppppuStack_120 = pppppuStack_770;
          pppppuStack_128 = pppppuStack_778;
          pppppuStack_110 = pppppuStack_760;
          pppppuStack_118 = pppppuStack_768;
          pppppuStack_100 = pppppuStack_750;
          pppppuStack_108 = pppppuStack_758;
          pppppuStack_f0 = pppppuStack_740;
          pppppuStack_f8 = pppppuStack_748;
          pppppuStack_b0 = pppppuStack_700;
          pppppuStack_b8 = pppppuStack_708;
          pppppuStack_708 = (undefined *****)0x0;
          pppppuStack_700 = (undefined *****)0x0;
          cStack_a8 = cStack_6f8;
          cStack_98 = cStack_6e8;
          ppuStack_a0 = &PTR_DAT_110ba5598;
          pppppuStack_90 = pppppuStack_6e0;
          cStack_88 = cStack_6d8;
          ppppppuVar52 = pppppppuVar45[0x16];
          ppppppuVar34 = (undefined ******)ppppppuVar52[2];
          if (ppppppuVar34 == (undefined ******)0x0) {
            pppppppuVar45 = (undefined *******)0x660;
            __Znwm();
            *pppppppuVar45 = ppppppuStack_6d0;
            FUN_10a237240(pppppppuVar45 + 2,&pppppuStack_6c0);
            pppppppuVar45[0xb4] = (undefined ******)pppppuStack_130;
            pppppppuVar45[0xbe] = (undefined ******)pppppuStack_e0;
            pppppppuVar45[0xbd] = (undefined ******)pppppuStack_e8;
            pppppppuVar45[0xc0] = (undefined ******)CONCAT44(uStack_cc,uStack_d0);
            pppppppuVar45[0xbf] = (undefined ******)pppppuStack_d8;
            *(undefined8 *)((long)pppppppuVar45 + 0x60c) = uStack_c4;
            *(ulong *)((long)pppppppuVar45 + 0x604) = CONCAT44(uStack_c8,uStack_cc);
            pppppppuVar45[0xb6] = (undefined ******)pppppuStack_120;
            pppppppuVar45[0xb5] = (undefined ******)pppppuStack_128;
            pppppppuVar45[0xb8] = (undefined ******)pppppuStack_110;
            pppppppuVar45[0xb7] = (undefined ******)pppppuStack_118;
            pppppppuVar45[0xba] = (undefined ******)pppppuStack_100;
            pppppppuVar45[0xb9] = (undefined ******)pppppuStack_108;
            pppppppuVar45[0xbc] = (undefined ******)pppppuStack_f0;
            pppppppuVar45[0xbb] = (undefined ******)pppppuStack_f8;
            pppppppuVar45[0xc4] = (undefined ******)pppppuStack_b0;
            pppppppuVar45[0xc3] = (undefined ******)pppppuStack_b8;
            pppppuStack_b8 = (undefined *****)0x0;
            pppppuStack_b0 = (undefined *****)0x0;
            *(char *)(pppppppuVar45 + 0xc5) = cStack_a8;
            *(char *)(pppppppuVar45 + 199) = cStack_98;
            pppppppuVar45[0xc6] = (undefined ******)&PTR_DAT_110ba5598;
            pppppppuVar45[200] = (undefined ******)pppppuStack_90;
            *(char *)(pppppppuVar45 + 0xc9) = cStack_88;
            pppppppuVar45[0xcb] = (undefined ******)0x10a237824;
            ppppppuStack_e10 = (undefined ******)FUN_10a237774;
            ppppppuStack_e08 = (undefined ******)pppppppuVar45;
            uStack_e00 = ppppppuVar52;
            (*(code *)**ppppppuVar52)(ppppppuVar52,&ppppppuStack_e10);
          }
          else {
            ppppppuStack_e50 = (undefined ******)0x0;
            (*(code *)(*ppppppuVar34)[5])(ppppppuVar34,0,&ppppppuStack_e50);
            if ((undefined *******)ppppppuStack_e50 != (undefined *******)0x0) {
              func_0x0001092af97c(&ppppppuStack_e50);
              goto LAB_10a2240e8;
            }
            pppppppuVar45 = (undefined *******)0x670;
            __Znwm();
            *pppppppuVar45 = ppppppuStack_6d0;
            FUN_10a237240(pppppppuVar45 + 2,&pppppuStack_6c0);
            pppppppuVar45[0xb4] = (undefined ******)pppppuStack_130;
            pppppppuVar45[0xbe] = (undefined ******)pppppuStack_e0;
            pppppppuVar45[0xbd] = (undefined ******)pppppuStack_e8;
            pppppppuVar45[0xc0] = (undefined ******)CONCAT44(uStack_cc,uStack_d0);
            pppppppuVar45[0xbf] = (undefined ******)pppppuStack_d8;
            *(undefined8 *)((long)pppppppuVar45 + 0x60c) = uStack_c4;
            *(ulong *)((long)pppppppuVar45 + 0x604) = CONCAT44(uStack_c8,uStack_cc);
            pppppppuVar45[0xb6] = (undefined ******)pppppuStack_120;
            pppppppuVar45[0xb5] = (undefined ******)pppppuStack_128;
            pppppppuVar45[0xb8] = (undefined ******)pppppuStack_110;
            pppppppuVar45[0xb7] = (undefined ******)pppppuStack_118;
            pppppppuVar45[0xba] = (undefined ******)pppppuStack_100;
            pppppppuVar45[0xb9] = (undefined ******)pppppuStack_108;
            pppppppuVar45[0xbc] = (undefined ******)pppppuStack_f0;
            pppppppuVar45[0xbb] = (undefined ******)pppppuStack_f8;
            pppppppuVar45[0xc4] = (undefined ******)pppppuStack_b0;
            pppppppuVar45[0xc3] = (undefined ******)pppppuStack_b8;
            pppppuStack_b8 = (undefined *****)0x0;
            pppppuStack_b0 = (undefined *****)0x0;
            *(char *)(pppppppuVar45 + 0xc5) = cStack_a8;
            *(char *)(pppppppuVar45 + 199) = cStack_98;
            pppppppuVar45[0xc6] = (undefined ******)&PTR_DAT_110ba5598;
            pppppppuVar45[200] = (undefined ******)pppppuStack_90;
            *(char *)(pppppppuVar45 + 0xc9) = cStack_88;
            pppppppuVar45[0xcb] = (undefined ******)FUN_10a2377ec;
            pppppppuVar45[0xcc] = ppppppuVar34;
            ppppppuStack_e10 = (undefined ******)FUN_10a237744;
            ppppppuStack_e08 = (undefined ******)pppppppuVar45;
            uStack_e00 = ppppppuVar52;
            (*(code *)**ppppppuVar52)(ppppppuVar52,&ppppppuStack_e10);
            __ZNSt13exception_ptrD1Ev(&ppppppuStack_e50);
          }
          ppppppuStack_e50 = (undefined ******)0x0;
          __ZNSt13exception_ptrD1Ev(&ppppppuStack_e50);
          pppppuVar36 = pppppuStack_b0;
          if ((undefined ******)pppppuStack_b0 != (undefined ******)0x0) {
            ppppppuVar52 = (undefined ******)(pppppuStack_b0 + 1);
            do {
              pppppuVar35 = *ppppppuVar52;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar52,0x10);
              if (bVar13) {
                *ppppppuVar52 = (undefined *****)((long)pppppuVar35 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (pppppuVar35 == (undefined *****)0x0) {
              (*(code *)(*pppppuStack_b0)[2])(pppppuStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar36);
            }
          }
          func_0x00010a231e08(&pppppuStack_6c0);
        }
      }
      pppppuVar36 = pppppuStack_700;
      if ((undefined ******)pppppuStack_700 != (undefined ******)0x0) {
        ppppppuVar52 = (undefined ******)(pppppuStack_700 + 1);
        do {
          pppppuVar35 = *ppppppuVar52;
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar52,0x10);
          if (bVar13) {
            *ppppppuVar52 = (undefined *****)((long)pppppuVar35 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppuVar35 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_700)[2])(pppppuStack_700);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar36);
        }
      }
      func_0x00010a231e08(&ppppppuStack_d10);
    }
    else {
      FUN_10a21d694(param_2);
    }
    lVar31 = *param_2;
    ppppppuStack_6c8 = (undefined ******)0x0;
    ppppppuStack_6d0 = (undefined ******)0x0;
    uStack_6b8 = 0;
    pppppuStack_6c0 = (undefined *****)0x0;
    ppppppuStack_6b0 = (undefined ******)CONCAT44(ppppppuStack_6b0._4_4_,0x3f800000);
    ppppppuStack_6a8 = ppppppuStack_f50;
    ppppppuStack_6a0 = ppppppuStack_f48;
    if ((undefined *******)ppppppuStack_f48 != (undefined *******)0x0) {
      pppppppuVar45 = (undefined *******)(ppppppuStack_f48 + 1);
      do {
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
        if (bVar13) {
          *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uStack_698 = 0x98;
    uStack_697 = 0x110ba55;
    uStack_688 = SUB81(*ppppppuVar32,0);
    uStack_687 = (undefined7)((ulong)*ppppppuVar32 >> 8);
    uStack_680 = *(undefined1 *)(ppppppuVar32 + 1);
    plStack_670 = (long *)param_3[0xc];
    uStack_678 = (undefined1)param_3[0xb];
    uStack_677 = (undefined7)((ulong)param_3[0xb] >> 8);
    if (param_3[0xc] != 0) {
      plVar44 = (long *)(param_3[0xc] + 8);
      do {
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
        if (bVar13) {
          *plVar44 = *plVar44 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    cStack_690 = cVar8;
    if (lStack_f08 == 0) {
      if ((undefined *******)ppppppuStack_f50 == (undefined *******)0x0) goto LAB_10a222298;
      ppuVar21 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar27 = *ppuVar21;
      if (((puVar27 != (undefined *)0x0) && (puVar27[0xc0] == '\x01')) &&
         (*(long *)(puVar27 + 0x80) != 0)) {
        FUN_10a08dbac(puVar27 + 0x18);
      }
      puVar20 = *(uint **)(lVar31 + 0x208);
      if (((char)puVar20[0x38] == '\x01') && (*(long *)(puVar20 + 0x2e) != 0)) {
        FUN_10a4ed6d4();
        if (*puVar20 == 0) goto LAB_10a222628;
        uVar25 = *(uint *)(ppppppuStack_f50 + 3);
        uVar5 = *(uint *)((long)ppppppuStack_f50 + 0x1c);
        uVar7 = puVar20[1];
        uVar4 = uVar25;
        if ((int)uVar5 <= (int)uVar25) {
          uVar4 = uVar5;
        }
        uVar39 = uVar5;
        uVar24 = uVar25;
        if ((int)uVar7 < (int)uVar4) {
          if ((int)uVar25 <= (int)uVar5) {
            uVar24 = uVar5;
          }
          uVar24 = (uint)((float)(int)(uVar24 * uVar7) / (float)(int)uVar4);
          uVar39 = uVar7;
          if ((int)uVar25 <= (int)uVar5) {
            uVar39 = uVar24;
            uVar24 = uVar7;
          }
        }
        uVar47 = (ulong)(uVar24 + 2) & 0xfffffffc;
        uVar26 = CONCAT44(uVar39,uVar24) + 0x200000000U & 0xfffffffc00000000;
        ppppppuStack_e60 = (undefined ******)(uVar26 | uVar47);
        uVar25 = *puVar20;
        uVar4 = uVar25;
        if (uVar25 != 2) {
          uVar4 = 7;
        }
        if ((*(byte *)(lVar31 + 0x171) & 0xfd) == 1) {
          iVar40 = 0;
        }
        else if ((*(byte *)(*(long *)(lVar31 + 0x208) + 0xe1) & 0xfd) == 1) {
          iVar40 = *(int *)(lVar31 + 500);
        }
        else {
          iVar40 = *(int *)(lVar31 + 500);
          if (*(int *)(*(long *)(lVar31 + 0x208) + 0xe4) == 1) {
            if (iVar40 < 2) {
              iVar40 = 1;
            }
            iVar40 = iVar40 + -1;
          }
        }
        if (((*(long *)(lVar31 + 0x140) == 0) ||
            (*(int *)(lVar31 + 0x108) != *(int *)(ppppppuStack_f50 + 3))) ||
           ((*(int *)(lVar31 + 0x10c) != *(int *)((long)ppppppuStack_f50 + 0x1c) ||
            ((*(uint *)(lVar31 + 0x110) != uVar4 || (*(int *)(lVar31 + 0x7d4) != iVar40)))))) {
          func_0x00010ae02ecc(0,iVar40);
          ppuVar21 = &PTR_PTR_113300a38;
          FUN_10ae079a0();
          func_0x00010ae02edc();
          FUN_10ae07cd4(ppuVar21,&PTR_PTR_113300a38);
          FUN_10a224b28(lVar31);
          uVar42 = 0x90;
          __Znwm();
          ppppppuStack_d10 = (undefined ******)0x10a23875c;
          ppppppuStack_d08 = (undefined ******)&PTR_DAT_110bb54d8;
          FUN_10a3128c0();
          (*(code *)*ppppppuStack_d08)(&ppppppuStack_d08);
          puVar43 = (undefined8 *)0x20;
          __Znwm();
          *puVar43 = &PTR_DAT_110bb48d8;
          puVar43[1] = 0;
          puVar43[2] = 0;
          puVar43[3] = uVar42;
          plVar44 = *(long **)(lVar31 + 0x148);
          *(undefined8 *)(lVar31 + 0x140) = uVar42;
          *(undefined8 **)(lVar31 + 0x148) = puVar43;
          if (plVar44 != (long *)0x0) {
            plVar41 = plVar44 + 1;
            do {
              lVar30 = *plVar41;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
              if (bVar13) {
                *plVar41 = lVar30 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plVar44 + 0x10))(plVar44);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
            }
          }
          *(undefined ******)(lVar31 + 0x108) = ppppppuStack_f50[3];
          *(uint *)(lVar31 + 0x110) = uVar4;
          *(int *)(lVar31 + 0x7d4) = iVar40;
        }
        if (uVar25 == 2) {
          ppppppuStack_e70 = (undefined ******)0x0;
          ppppppuStack_e68 = (undefined ******)0x0;
          pppppppuVar45 = (undefined *******)ppppppuStack_f50;
          (*(code *)(*ppppppuStack_f50)[6])();
          ppppppuVar52 = pppppppuVar45[3];
          if ((ppppppuVar52 == (undefined ******)0x0) || (*(int *)((long)ppppppuVar52 + 0x734) == 1)
             ) {
            FUN_10a30f97c();
            FUN_10a30fb38(&ppppppuStack_e50);
          }
          else {
            FUN_10a3ca004();
            uVar5 = *(int *)((long)ppppppuVar52 + 0x734) - 2;
            uVar25 = (uint)(0x2040404040203 >> (((ulong)uVar5 & 7) << 3));
            if (6 < uVar5) {
              uVar25 = 4;
            }
            ppppppuVar52 = pppppppuVar45[((ulong)uVar25 & 7) + 7];
            if (ppppppuVar52 == (undefined ******)0x0) {
              FUN_10a3ca05c();
              ppppppuVar52 = pppppppuVar45[((ulong)uVar25 & 7) + 7];
            }
            uStack_cf8._4_4_ = 0;
            uStack_cf0 = 1;
            ppppppuStack_d10 = ppppppuStack_e60;
            ppppppuStack_d00 = (undefined ******)((long)&segment_command_100000020.cmd + 3);
            ppppppuStack_d08 = (undefined ******)0x400000001;
            uStack_cf8._0_4_ = (uint)uStack_cf8 & 0xffffff00;
            FUN_10a048f04(&ppppppuStack_e10,ppppppuVar52[0x3c],&ppppppuStack_d10);
            *(char *)((long)ppppppuStack_e10 + 0x19) = '\x01';
            pppppppuVar45 = (undefined *******)ppppppuStack_e10;
            ___dynamic_cast(ppppppuStack_e10,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,
                            0xfffffffffffffffe);
            if (pppppppuVar45 == (undefined *******)0x0) {
              ppppppuStack_e50 = (undefined ******)0x0;
              ppppppuStack_e48 = (undefined ******)0x0;
              ppppppuStack_d10 = (undefined ******)&UNK_10f6467d7;
              ppppppuStack_d08 = (undefined ******)0x5c;
              FUN_10a0edfc4(&ppppppuStack_d10);
              goto LAB_10a2240e8;
            }
            ppppppuStack_e48 = ppppppuStack_e08;
            ppppppuStack_e50 = (undefined ******)pppppppuVar45;
            if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
              pppppppuVar45 = (undefined *******)(ppppppuStack_e08 + 1);
              do {
                cVar9 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                if (bVar13) {
                  *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
                ppppppuVar52 = ppppppuStack_e08;
              } while (cVar9 != '\0');
              if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
                pppppppuVar45 = (undefined *******)(ppppppuStack_e08 + 1);
                do {
                  ppppppuVar34 = *pppppppuVar45;
                  cVar9 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                  if (bVar13) {
                    *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (ppppppuVar34 == (undefined ******)0x0) {
                  (*(code *)(*ppppppuVar52)[2])(ppppppuVar52);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
                }
              }
            }
          }
          ppppppuVar34 = ppppppuStack_e48;
          ppppppuStack_e70 = ppppppuStack_e50;
          ppppppuVar52 = ppppppuStack_e68;
          ppppppuStack_e50 = (undefined ******)0x0;
          ppppppuStack_e48 = (undefined ******)0x0;
          ppppppuStack_e68 = ppppppuVar34;
          if ((undefined *******)ppppppuVar52 != (undefined *******)0x0) {
            pppppppuVar45 = (undefined *******)(ppppppuVar52 + 1);
            do {
              ppppppuVar34 = *pppppppuVar45;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
              if (bVar13) {
                *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppppuVar34 == (undefined ******)0x0) {
              (*(code *)(*ppppppuVar52)[2])(ppppppuVar52);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          ppppppuVar52 = ppppppuStack_e48;
          if (ppppppuStack_e48 != (undefined ******)0x0) {
            plVar44 = (long *)(ppppppuStack_e48 + 1);
            do {
              lVar30 = *plVar44;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
              if (bVar13) {
                *plVar44 = lVar30 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar30 == 0) {
              (**(code **)((long)*ppppppuStack_e48 + 0x10))(ppppppuStack_e48);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          ppppppuVar52 = ppppppuStack_f48;
          ppppppuStack_e78 = ppppppuStack_f48;
          ppppppuStack_e80 = ppppppuStack_f50;
          if ((undefined *******)ppppppuStack_f48 != (undefined *******)0x0) {
            pppppppuVar45 = (undefined *******)(ppppppuStack_f48 + 1);
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
              if (bVar13) {
                *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          FUN_10a225d30(lVar31,&ppppppuStack_e80,ppppppuStack_e70);
          if ((undefined *******)ppppppuVar52 != (undefined *******)0x0) {
            pppppppuVar45 = (undefined *******)(ppppppuVar52 + 1);
            do {
              ppppppuVar34 = *pppppppuVar45;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
              if (bVar13) {
                *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppppuVar34 == (undefined ******)0x0) {
              (*(code *)(*ppppppuVar52)[2])(ppppppuVar52);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
        }
        else {
          lVar30 = *(long *)(lVar31 + 0x150);
          if (lVar30 == 0) {
            uVar42 = 0x10;
            __Znwm();
            FUN_10a19eb18();
            ppppppuStack_d10 = (undefined ******)0x0;
            lVar30 = *(long *)(lVar31 + 0x150);
            *(undefined8 *)(lVar31 + 0x150) = uVar42;
            if (lVar30 != 0) {
              func_0x00010a237b14(lVar31 + 0x150);
              ppppppuVar52 = ppppppuStack_d10;
              ppppppuStack_d10 = (undefined ******)0x0;
              if ((undefined *******)ppppppuVar52 != (undefined *******)0x0) {
                func_0x00010a237b14(&ppppppuStack_d10);
              }
            }
            lVar30 = *(long *)(lVar31 + 0x150);
          }
          FUN_10a19ecbc(lVar30,uVar47,uVar26 >> 0x20,1);
          ppppppuStack_e60 = (undefined ******)(uVar26 | (uint)((int)uVar47 >> 2));
          ppppppuStack_e68 = (undefined ******)0x0;
          ppppppuStack_e70 = (undefined ******)0x0;
          FUN_10a30f97c();
          FUN_10a30fb38(&ppppppuStack_d10);
          ppppppuVar34 = ppppppuStack_d08;
          ppppppuStack_e70 = ppppppuStack_d10;
          ppppppuVar52 = ppppppuStack_e68;
          ppppppuStack_d08 = (undefined ******)0x0;
          ppppppuStack_d10 = (undefined ******)0x0;
          ppppppuStack_e68 = ppppppuVar34;
          if (ppppppuVar52 != (undefined ******)0x0) {
            plVar44 = (long *)(ppppppuVar52 + 1);
            do {
              lVar30 = *plVar44;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
              if (bVar13) {
                *plVar44 = lVar30 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar30 == 0) {
              (**(code **)((long)*ppppppuVar52 + 0x10))(ppppppuVar52);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          ppppppuVar52 = ppppppuStack_d08;
          if ((undefined *******)ppppppuStack_d08 != (undefined *******)0x0) {
            pppppppuVar45 = (undefined *******)(ppppppuStack_d08 + 1);
            do {
              ppppppuVar34 = *pppppppuVar45;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
              if (bVar13) {
                *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppppuVar34 == (undefined ******)0x0) {
              (*(code *)(*ppppppuStack_d08)[2])(ppppppuStack_d08);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          if ((bRam00000001137eabd0 & 1) == 0) {
            pppppppuVar45 = (undefined *******)ppppppuStack_f50;
            (*(code *)(*ppppppuStack_f50)[6])();
            ppppppuVar52 = pppppppuVar45[3];
            if ((ppppppuVar52 != (undefined ******)0x0) &&
               (*(int *)((long)ppppppuVar52 + 0x734) != 1)) {
              do {
                bVar22 = bRam00000001137eabd0;
                cVar9 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(0x1137eabd0,0x10);
                if (bVar13) {
                  bRam00000001137eabd0 = 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((bVar22 & 1) == 0) {
                FUN_10a156270(*(undefined4 *)((long)ppppppuVar52 + 0x734));
                FUN_10a225f60();
              }
            }
          }
          FUN_10a19ed68(*(undefined8 *)(lVar31 + 0x150),&ppppppuStack_f50,&ppppppuStack_e70);
        }
        pppppuStack_f58 = (undefined *****)0x0;
        pppppppuVar18 = *(undefined ********)(lVar31 + 0x148);
        pppppppuVar45 = *(undefined ********)(lVar31 + 0x140);
        if (*(long *)(lVar31 + 0x148) != 0) {
          plVar44 = (long *)(*(long *)(lVar31 + 0x148) + 8);
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar13) {
              *plVar44 = *plVar44 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        pppppuVar36 = (undefined *****)param_3[0xc];
        ppppppuVar52 = (undefined ******)param_3[0xb];
        if (param_3[0xc] != 0) {
          plVar44 = (long *)(param_3[0xc] + 8);
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar13) {
              *plVar44 = *plVar44 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        pppppppuVar49 = *(undefined ********)(lVar31 + 0x140);
        pppppppuVar6 = *(undefined ********)(lVar31 + 0x148);
        if (pppppppuVar6 != (undefined *******)0x0) {
          pppppppuVar2 = pppppppuVar6 + 1;
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar2,0x10);
            if (bVar13) {
              *pppppppuVar2 = (undefined ******)((long)*pppppppuVar2 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        pppppuStack_ea0 = (undefined *****)ppppppuVar52;
        ppppuStack_e98 = (undefined ****)pppppuVar36;
        uStack_e90 = uVar4;
        if ((((*(byte *)(*(long *)(lVar31 + 0x208) + 0xe1) & 0xfd) == 1) ||
            (*(int *)(*(long *)(lVar31 + 0x208) + 0xe4) == 0)) &&
           (*(long *)(*(long *)(lVar31 + 0x140) + 0x70) != 0)) {
          ppppppuVar52 = *(undefined *******)(lVar31 + 0x208);
          ppppppuStack_e50 = (undefined ******)&ppppppuStack_eb0;
          ppppppuStack_e48 = &pppppuStack_f58;
          ppppppuVar34 = (undefined ******)pppppuStack_f58;
          ppppppuStack_ec0 = (undefined ******)pppppppuVar49;
          ppppppuStack_eb8 = (undefined ******)pppppppuVar6;
          ppppppuStack_eb0 = (undefined ******)pppppppuVar45;
          ppppppuStack_ea8 = (undefined ******)pppppppuVar18;
          if (ppppppuVar52[0x17] != (undefined *****)0x0) {
            ppppppuVar34 = (undefined ******)ppppppuVar52[0x16];
            if (ppppppuVar34 == (undefined ******)0x0) {
              FUN_10a2387f4(&ppppppuStack_e50);
              ppppppuVar34 = (undefined ******)pppppuStack_f58;
            }
            else {
              pppppuVar36 = ppppppuVar34[2];
              ppppppuStack_d00 = (undefined ******)0x0;
              ppppppuStack_d08 = (undefined ******)0x0;
              if (pppppuVar36 == (undefined *****)0x0) {
                ppppppuVar51 = (undefined ******)0xd0;
                __Znwm();
                ppppppuVar51[2] = (undefined *****)0x0;
                ppppppuVar51[1] = (undefined *****)0x200000006;
                *(undefined2 *)(ppppppuVar51 + 3) = 4;
                ppppppuVar51[5] = (undefined *****)0x0;
                ppppppuVar51[4] = (undefined *****)0x0;
                ppppppuVar51[7] = (undefined *****)0x0;
                ppppppuVar51[6] = (undefined *****)0x0;
                ppppppuVar51[9] = (undefined *****)0x0;
                ppppppuVar51[8] = (undefined *****)0x0;
                ppppppuVar51[0xb] = (undefined *****)0x0;
                ppppppuVar51[10] = (undefined *****)0x0;
                ppppppuVar51[0xd] = (undefined *****)0x0;
                ppppppuVar51[0xc] = (undefined *****)0x0;
                ppppppuVar51[0xf] = (undefined *****)0x0;
                ppppppuVar51[0xe] = (undefined *****)0x0;
                ppppppuVar51[0x10] = (undefined *****)0x0;
                ppppppuVar51[0x11] = (undefined *****)(ppppppuVar51 + 3);
                ppppppuVar51[0x12] = (undefined *****)0x0;
                *(undefined2 *)(ppppppuVar51 + 0x13) = 0;
                ppppppuStack_d10 = ppppppuVar51 + 0x14;
                *ppppppuStack_d10 = (undefined *****)ppppppuVar52;
                *ppppppuVar51 = (undefined *****)&PTR_DAT_110bb4970;
                ppppppuVar51[0x16] = (undefined *****)ppppppuStack_e48;
                ppppppuVar51[0x15] = (undefined *****)ppppppuStack_e50;
                *(undefined1 *)(ppppppuVar51 + 0x18) = 1;
                ppppppuVar51[0x19] = (undefined *****)0x0;
                uStack_cf8._0_4_ = 0xa238954;
                uStack_cf8._4_4_ = 1;
                ppppppuStack_d08 = ppppppuVar51;
                ppppppuStack_d00 = ppppppuVar51;
              }
              else {
                ppppppuStack_e10 = (undefined ******)0x0;
                (*(code *)(*pppppuVar36)[5])(pppppuVar36,0,&ppppppuStack_e10);
                if ((undefined *******)ppppppuStack_e10 != (undefined *******)0x0) {
                  func_0x0001092af97c(&ppppppuStack_e10);
                  goto LAB_10a2240e8;
                }
                ppppppuVar51 = (undefined ******)0xd8;
                __Znwm();
                ppppppuVar51[2] = (undefined *****)0x0;
                ppppppuVar51[1] = (undefined *****)0x200000006;
                *(undefined2 *)(ppppppuVar51 + 3) = 4;
                ppppppuVar51[5] = (undefined *****)0x0;
                ppppppuVar51[4] = (undefined *****)0x0;
                ppppppuVar51[7] = (undefined *****)0x0;
                ppppppuVar51[6] = (undefined *****)0x0;
                ppppppuVar51[9] = (undefined *****)0x0;
                ppppppuVar51[8] = (undefined *****)0x0;
                ppppppuVar51[0xb] = (undefined *****)0x0;
                ppppppuVar51[10] = (undefined *****)0x0;
                ppppppuVar51[0xd] = (undefined *****)0x0;
                ppppppuVar51[0xc] = (undefined *****)0x0;
                ppppppuVar51[0xf] = (undefined *****)0x0;
                ppppppuVar51[0xe] = (undefined *****)0x0;
                ppppppuVar51[0x10] = (undefined *****)0x0;
                ppppppuVar51[0x11] = (undefined *****)(ppppppuVar51 + 3);
                ppppppuVar51[0x12] = (undefined *****)0x0;
                *(undefined2 *)(ppppppuVar51 + 0x13) = 0;
                *ppppppuVar51 = (undefined *****)&PTR_FUN_110bb4938;
                ppppppuVar51[0x14] = (undefined *****)ppppppuVar52;
                ppppppuVar51[0x16] = (undefined *****)ppppppuStack_e48;
                ppppppuVar51[0x15] = (undefined *****)ppppppuStack_e50;
                *(undefined1 *)(ppppppuVar51 + 0x18) = 1;
                ppppppuVar51[0x19] = (undefined *****)0x0;
                ppppppuVar51[0x1a] = pppppuVar36;
                if ((undefined *******)ppppppuStack_d08 != (undefined *******)0x0) {
                  pppppppuVar45 = (undefined *******)(ppppppuStack_d08 + 1);
                  do {
                    ppppppuVar52 = *pppppppuVar45;
                    cVar9 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                    if (bVar13) {
                      *pppppppuVar45 = (undefined ******)((long)ppppppuVar52 + -4);
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (((ulong)ppppppuVar52 & 0x1fffffffc) == 4) {
                    do {
                      ppppppuVar52 = *pppppppuVar45;
                      cVar9 = '\x01';
                      bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                      if (bVar13) {
                        *pppppppuVar45 = (undefined ******)((long)ppppppuVar52 + -1);
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if ((undefined ******)((long)ppppppuVar52 + -1) == (undefined ******)0x0) {
                      (*(code *)(*ppppppuStack_d08)[1])();
                    }
                  }
                }
                ppppppuStack_d08 = ppppppuVar51;
                if (ppppppuStack_d00 != (undefined ******)0x0) {
                  func_0x0001092b4274(&ppppppuStack_d00);
                }
                uStack_cf8._0_4_ = 0xa238924;
                uStack_cf8._4_4_ = 1;
                ppppppuStack_d10 = ppppppuVar51 + 0x14;
                ppppppuStack_d00 = ppppppuVar51;
                __ZNSt13exception_ptrD1Ev(&ppppppuStack_e10);
              }
              ppppppuVar52 = ppppppuStack_d10;
              if ((undefined ******)ppppppuStack_d10[5] != (undefined ******)0x0) {
                func_0x0001092b4274();
              }
              ppppppuStack_e10 = (undefined ******)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
              ppppppuVar52[5] = (undefined *****)ppppppuStack_d00;
              ppppppuStack_d00 = (undefined ******)0x0;
              ppppppuStack_e08 = ppppppuStack_d10;
              uStack_e00 = ppppppuVar34;
              (*(code *)**ppppppuVar34)(ppppppuVar34,&ppppppuStack_e10);
              pppppuStack_e58 = (undefined *****)ppppppuStack_d08;
              ppppppuStack_d08 = (undefined ******)0x0;
              if ((ppppppuStack_d00 != (undefined ******)0x0) &&
                 (func_0x0001092b4274(&ppppppuStack_d00),
                 (undefined *******)ppppppuStack_d08 != (undefined *******)0x0)) {
                pppppppuVar45 = (undefined *******)(ppppppuStack_d08 + 1);
                do {
                  ppppppuVar52 = *pppppppuVar45;
                  cVar9 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                  if (bVar13) {
                    *pppppppuVar45 = (undefined ******)((long)ppppppuVar52 + -4);
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (((ulong)ppppppuVar52 & 0x1fffffffc) == 4) {
                  do {
                    ppppppuVar52 = *pppppppuVar45;
                    cVar9 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
                    if (bVar13) {
                      *pppppppuVar45 = (undefined ******)((long)ppppppuVar52 + -1);
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if ((undefined ******)((long)ppppppuVar52 + -1) == (undefined ******)0x0) {
                    (*(code *)(*ppppppuStack_d08)[1])();
                  }
                }
              }
              FUN_109d1a244(&pppppuStack_e58);
              FUN_10a09b344(&pppppuStack_e58);
              ppppppuVar34 = (undefined ******)pppppuStack_f58;
              uStack_cf8 = (char *)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
              if ((undefined ******)pppppuStack_e58 != (undefined ******)0x0) {
                ppppppuVar52 = (undefined ******)(pppppuStack_e58 + 1);
                do {
                  pppppuVar36 = *ppppppuVar52;
                  cVar9 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar52,0x10);
                  if (bVar13) {
                    *ppppppuVar52 = (undefined *****)((long)pppppuVar36 + -4);
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                uStack_cf8 = (char *)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
                if (((ulong)pppppuVar36 & 0x1fffffffc) == 4) {
                  do {
                    pppppuVar36 = *ppppppuVar52;
                    cVar9 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar52,0x10);
                    if (bVar13) {
                      *ppppppuVar52 = (undefined *****)((long)pppppuVar36 + -1);
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  uStack_cf8 = (char *)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
                  if ((undefined *****)((long)pppppuVar36 + -1) == (undefined *****)0x0) {
                    ppppuVar28 = (undefined ****)(*pppppuStack_e58)[1];
                    goto LAB_10a2230b8;
                  }
                }
              }
            }
          }
        }
        else {
          ppppppuStack_eb0 = (undefined ******)0x0;
          ppppppuStack_ea8 = (undefined ******)0x0;
          if (pppppuVar36 != (undefined *****)0x0) {
            pppppuVar35 = pppppuVar36 + 1;
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
              if (bVar13) {
                *pppppuVar35 = (undefined ****)((long)*pppppuVar35 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          ppppppuStack_ec0 = (undefined ******)0x0;
          ppppppuStack_eb8 = (undefined ******)0x0;
          ppppppuStack_e50 = (undefined ******)0x0;
          ppppppuStack_e48 = (undefined ******)0x0;
          if (pppppuVar36 != (undefined *****)0x0) {
            pppppuVar35 = pppppuVar36 + 1;
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
              if (bVar13) {
                *pppppuVar35 = (undefined ****)((long)*pppppuVar35 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          uStack_e20 = 0;
          plStack_e18 = (long *)0x0;
          cStack_e28 = '\0';
          ppppppuStack_e10 = (undefined ******)0x0;
          ppppppuStack_e08 = (undefined ******)0x0;
          uStack_cf8._0_4_ = (uint)pppppuVar36;
          uStack_cf8._4_4_ = (undefined4)((ulong)pppppuVar36 >> 0x20);
          if (pppppuVar36 != (undefined *****)0x0) {
            pppppuVar35 = pppppuVar36 + 1;
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppuVar35,0x10);
              if (bVar13) {
                *pppppuVar35 = (undefined ****)((long)*pppppuVar35 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          uStack_de0 = 0;
          plStack_dd8 = (long *)0x0;
          plStack_ce8._0_1_ = 1;
          cStack_de8 = '\0';
          ppppppuVar34 = (undefined ******)0x138;
          uStack_e40 = ppppppuVar52;
          ppppuStack_e38 = (undefined ****)pppppuVar36;
          uStack_e30 = uVar4;
          uStack_e00 = ppppppuVar52;
          ppppuStack_df8 = (undefined ****)pppppuVar36;
          uStack_df0 = uVar4;
          ppppppuStack_d10 = (undefined ******)pppppppuVar45;
          ppppppuStack_d08 = (undefined ******)pppppppuVar18;
          ppppppuStack_d00 = ppppppuVar52;
          uStack_cf0 = uVar4;
          ppppppuStack_ce0 = (undefined ******)pppppppuVar49;
          ppppppuStack_cd8 = (undefined ******)pppppppuVar6;
          __Znwm();
          ppppppuVar51 = ppppppuVar34 + 1;
          *ppppppuVar51 = (undefined *****)0x0;
          ppppppuVar34[2] = (undefined *****)0x0;
          ppppppuVar34[3] = (undefined *****)0x32aaaba7;
          ppppppuVar34[5] = (undefined *****)0x0;
          ppppppuVar34[4] = (undefined *****)0x0;
          ppppppuVar34[7] = (undefined *****)0x0;
          ppppppuVar34[6] = (undefined *****)0x0;
          ppppppuVar34[9] = (undefined *****)0x0;
          ppppppuVar34[8] = (undefined *****)0x0;
          ppppppuVar34[10] = (undefined *****)0x0;
          ppppppuVar34[0xb] = (undefined *****)0x3cb0b1bb;
          ppppppuVar34[0xd] = (undefined *****)0x0;
          ppppppuVar34[0xc] = (undefined *****)0x0;
          ppppppuVar34[0xf] = (undefined *****)0x0;
          ppppppuVar34[0xe] = (undefined *****)0x0;
          *(undefined8 *)((long)ppppppuVar34 + 0x84) = 0;
          *(undefined8 *)((long)ppppppuVar34 + 0x7c) = 0;
          *ppppppuVar34 = (undefined *****)&PTR_FUN_110bb49c8;
          ppppppuStack_d08 = (undefined ******)0x0;
          ppppppuStack_d10 = (undefined ******)0x0;
          ppppppuVar34[0x20] = (undefined *****)pppppppuVar18;
          ppppppuVar34[0x1f] = (undefined *****)pppppppuVar45;
          ppppppuVar34[0x22] = pppppuVar36;
          ppppppuVar34[0x21] = (undefined *****)ppppppuVar52;
          if (pppppuVar36 != (undefined *****)0x0) {
            pppppuVar36 = pppppuVar36 + 1;
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppuVar36,0x10);
              if (bVar13) {
                *pppppuVar36 = (undefined ****)((long)*pppppuVar36 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          *(uint *)(ppppppuVar34 + 0x23) = uVar4;
          ppppppuVar34[0x25] = (undefined *****)pppppppuVar49;
          ppppppuVar34[0x26] = (undefined *****)pppppppuVar6;
          ppppppuStack_ce0 = (undefined ******)0x0;
          ppppppuStack_cd8 = (undefined ******)0x0;
          *(undefined1 *)(ppppppuVar34 + 0x24) = 1;
          plStack_ce8 = (long *)((ulong)plStack_ce8._1_7_ << 8);
          *(undefined4 *)(ppppppuVar34 + 0x11) = 8;
          FUN_10a085024(ppppppuVar34);
          do {
            pppppuVar36 = *ppppppuVar51;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar51,0x10);
            if (bVar13) {
              *ppppppuVar51 = (undefined *****)((long)pppppuVar36 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (pppppuVar36 == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar34)[2])(ppppppuVar34);
          }
          if ((char)plStack_ce8 == '\x01') {
            func_0x00010a3132f4(ppppppuStack_ce0);
          }
          ppppppuVar52 = ppppppuStack_cd8;
          if (ppppppuStack_cd8 != (undefined ******)0x0) {
            plVar44 = (long *)(ppppppuStack_cd8 + 1);
            do {
              lVar30 = *plVar44;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar44,0x10);
              if (bVar13) {
                *plVar44 = lVar30 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar30 == 0) {
              (**(code **)((long)*ppppppuStack_cd8 + 0x10))(ppppppuStack_cd8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          plVar44 = (long *)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
          if (plVar44 != (long *)0x0) {
            plVar41 = plVar44 + 1;
            do {
              lVar30 = *plVar41;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
              if (bVar13) {
                *plVar41 = lVar30 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plVar44 + 0x10))(plVar44);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
            }
          }
          ppppppuVar52 = ppppppuStack_d08;
          if ((undefined *******)ppppppuStack_d08 != (undefined *******)0x0) {
            pppppppuVar45 = (undefined *******)(ppppppuStack_d08 + 1);
            do {
              ppppppuVar51 = *pppppppuVar45;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
              if (bVar13) {
                *pppppppuVar45 = (undefined ******)((long)ppppppuVar51 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppppuVar51 == (undefined ******)0x0) {
              (*(code *)(*ppppppuStack_d08)[2])(ppppppuStack_d08);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          if (cStack_de8 == '\x01') {
            func_0x00010a3132f4(uStack_de0);
          }
          plVar44 = plStack_dd8;
          if (plStack_dd8 != (long *)0x0) {
            plVar41 = plStack_dd8 + 1;
            do {
              lVar30 = *plVar41;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
              if (bVar13) {
                *plVar41 = lVar30 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plStack_dd8 + 0x10))(plStack_dd8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
            }
          }
          ppppuVar28 = ppppuStack_df8;
          if ((undefined *****)ppppuStack_df8 != (undefined *****)0x0) {
            pppppuVar36 = (undefined *****)(ppppuStack_df8 + 1);
            do {
              ppppuVar37 = *pppppuVar36;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppuVar36,0x10);
              if (bVar13) {
                *pppppuVar36 = (undefined ****)((long)ppppuVar37 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppuVar37 == (undefined ****)0x0) {
              (*(code *)(*ppppuStack_df8)[2])(ppppuStack_df8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar28);
            }
          }
          ppppppuVar52 = ppppppuStack_e08;
          if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
            pppppppuVar45 = (undefined *******)(ppppppuStack_e08 + 1);
            do {
              ppppppuVar51 = *pppppppuVar45;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
              if (bVar13) {
                *pppppppuVar45 = (undefined ******)((long)ppppppuVar51 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppppuVar51 == (undefined ******)0x0) {
              (*(code *)(*ppppppuStack_e08)[2])(ppppppuStack_e08);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          if (cStack_e28 == '\x01') {
            func_0x00010a3132f4(uStack_e20);
          }
          plVar44 = plStack_e18;
          if (plStack_e18 != (long *)0x0) {
            plVar41 = plStack_e18 + 1;
            do {
              lVar30 = *plVar41;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
              if (bVar13) {
                *plVar41 = lVar30 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar30 == 0) {
              (**(code **)(*plStack_e18 + 0x10))(plStack_e18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
            }
          }
          ppppuVar28 = ppppuStack_e38;
          if ((undefined *****)ppppuStack_e38 != (undefined *****)0x0) {
            pppppuVar36 = (undefined *****)(ppppuStack_e38 + 1);
            do {
              ppppuVar37 = *pppppuVar36;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppuVar36,0x10);
              if (bVar13) {
                *pppppuVar36 = (undefined ****)((long)ppppuVar37 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppuVar37 == (undefined ****)0x0) {
              (*(code *)(*ppppuStack_e38)[2])(ppppuStack_e38);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar28);
            }
          }
          ppppppuVar52 = ppppppuStack_e48;
          if ((undefined *******)ppppppuStack_e48 != (undefined *******)0x0) {
            pppppppuVar45 = (undefined *******)(ppppppuStack_e48 + 1);
            do {
              ppppppuVar51 = *pppppppuVar45;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
              if (bVar13) {
                *pppppppuVar45 = (undefined ******)((long)ppppppuVar51 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppppuVar51 == (undefined ******)0x0) {
              (*(code *)(*ppppppuStack_e48)[2])(ppppppuStack_e48);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
            }
          }
          uStack_cf8 = (char *)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
          if ((undefined ******)pppppuStack_f58 != (undefined ******)0x0) {
            ppppppuVar52 = (undefined ******)(pppppuStack_f58 + 1);
            do {
              pppppuVar36 = *ppppppuVar52;
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar52,0x10);
              if (bVar13) {
                *ppppppuVar52 = (undefined *****)((long)pppppuVar36 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            uStack_cf8 = (char *)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
            if (pppppuVar36 == (undefined *****)0x0) {
              ppppuVar28 = (undefined ****)(*pppppuStack_f58)[2];
              pppppuStack_f58 = (undefined *****)ppppppuVar34;
LAB_10a2230b8:
              (*(code *)ppppuVar28)();
              ppppppuVar34 = (undefined ******)pppppuStack_f58;
              uStack_cf8 = (char *)CONCAT44(uStack_cf8._4_4_,(uint)uStack_cf8);
            }
          }
        }
        pppppuStack_f58 = (undefined *****)ppppppuVar34;
        ppppppuVar52 = ppppppuStack_eb8;
        if ((undefined *******)ppppppuStack_eb8 != (undefined *******)0x0) {
          pppppppuVar45 = (undefined *******)(ppppppuStack_eb8 + 1);
          do {
            ppppppuVar34 = *pppppppuVar45;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
            if (bVar13) {
              *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (ppppppuVar34 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_eb8)[2])(ppppppuStack_eb8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
          }
        }
        ppppuVar28 = ppppuStack_e98;
        if ((undefined *****)ppppuStack_e98 != (undefined *****)0x0) {
          pppppuVar36 = (undefined *****)(ppppuStack_e98 + 1);
          do {
            ppppuVar37 = *pppppuVar36;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppuVar36,0x10);
            if (bVar13) {
              *pppppuVar36 = (undefined ****)((long)ppppuVar37 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (ppppuVar37 == (undefined ****)0x0) {
            (*(code *)(*ppppuStack_e98)[2])(ppppuStack_e98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar28);
          }
        }
        ppppppuVar52 = ppppppuStack_ea8;
        if ((undefined *******)ppppppuStack_ea8 != (undefined *******)0x0) {
          pppppppuVar45 = (undefined *******)(ppppppuStack_ea8 + 1);
          do {
            ppppppuVar34 = *pppppppuVar45;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
            if (bVar13) {
              *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (ppppppuVar34 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_ea8)[2])(ppppppuStack_ea8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
          }
        }
        lVar46 = *(long *)(lVar31 + 0x140);
        lVar30 = *(long *)(lVar46 + 0x80);
        if (*(long *)(lVar46 + 0x78) == lVar30) {
          pppppppuVar18 = (undefined *******)0x48;
          __Znwm();
          pppppppuVar18[1] = (undefined ******)0x0;
          pppppppuVar18[2] = (undefined ******)0x0;
          *pppppppuVar18 = (undefined ******)&PTR_FUN_110bb4a10;
          pppppppuVar45 = pppppppuVar18 + 3;
          pppppppuVar18[4] = (undefined ******)0x0;
          *pppppppuVar45 = (undefined ******)0x0;
          pppppppuVar18[6] = (undefined ******)0x0;
          pppppppuVar18[5] = (undefined ******)0x0;
          pppppppuVar18[8] = (undefined ******)0x0;
          pppppppuVar18[7] = (undefined ******)0x0;
          pppppppuVar18[5] = (undefined ******)&PTR_DAT_110ba5598;
        }
        else {
          pppppppuVar45 = *(undefined ********)(lVar30 + -0x10);
          pppppppuVar18 = *(undefined ********)(lVar30 + -8);
          *(undefined8 *)(lVar30 + -0x10) = 0;
          *(undefined8 *)(lVar30 + -8) = 0;
          if (*(long *)(lVar46 + 0x78) == *(long *)(lVar46 + 0x80)) goto LAB_10a2240e8;
          lVar30 = *(long *)(lVar46 + 0x80) + -0x10;
          FUN_10a232e34();
          *(long *)(lVar46 + 0x80) = lVar30;
        }
        ppppppuStack_e10 = (undefined ******)pppppppuVar45;
        ppppppuStack_e08 = (undefined ******)pppppppuVar18;
        FUN_10a225fb4(pppppppuVar45,&ppppppuStack_f50);
        *(char *)(pppppppuVar45 + 3) = cVar8;
        pppppppuVar45[4] = (undefined ******)*ppppppuVar32;
        *(char *)(pppppppuVar45 + 5) = *(char *)(ppppppuVar32 + 1);
        uVar42 = *(undefined8 *)(lVar31 + 0x140);
        ppppppuStack_ea8 = ppppppuStack_e68;
        ppppppuStack_eb0 = ppppppuStack_e70;
        if ((undefined *******)ppppppuStack_e68 != (undefined *******)0x0) {
          pppppppuVar49 = (undefined *******)(ppppppuStack_e68 + 1);
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar49,0x10);
            if (bVar13) {
              *pppppppuVar49 = (undefined ******)((long)*pppppppuVar49 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        plStack_ce8 = (long *)0x0;
        uStack_cf0 = 0;
        uStack_cec = 0;
        ppppppuStack_cd8 = (undefined ******)0x0;
        ppppppuStack_ce0 = (undefined ******)0x0;
        uStack_cf8._0_4_ = 0;
        uStack_cf8._4_4_ = 0;
        ppppppuStack_d00 = (undefined ******)0x0;
        ppppppuStack_d10 = (undefined ******)FUN_10a239610;
        ppppppuStack_d08 = (undefined ******)&PTR_DAT_110950c70;
        if (pppppppuVar18 != (undefined *******)0x0) {
          pppppppuVar49 = pppppppuVar18 + 1;
          do {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar49,0x10);
            if (bVar13) {
              *pppppppuVar49 = (undefined ******)((long)*pppppppuVar49 + 1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        ppppppuStack_ec0 = (undefined ******)pppppppuVar45;
        ppppppuStack_eb8 = (undefined ******)pppppppuVar18;
        FUN_10a312bcc(uVar42,&ppppppuStack_eb0,&ppppppuStack_d10,&ppppppuStack_ec0,1);
        ppppppuVar52 = ppppppuStack_eb8;
        if ((undefined *******)ppppppuStack_eb8 != (undefined *******)0x0) {
          pppppppuVar45 = (undefined *******)(ppppppuStack_eb8 + 1);
          do {
            ppppppuVar34 = *pppppppuVar45;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
            if (bVar13) {
              *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (ppppppuVar34 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_eb8)[2])(ppppppuStack_eb8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
          }
        }
        (*(code *)*ppppppuStack_d08)(&ppppppuStack_d08);
        ppppppuVar52 = ppppppuStack_ea8;
        if ((undefined *******)ppppppuStack_ea8 != (undefined *******)0x0) {
          pppppppuVar45 = (undefined *******)(ppppppuStack_ea8 + 1);
          do {
            ppppppuVar34 = *pppppppuVar45;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
            if (bVar13) {
              *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (ppppppuVar34 == (undefined ******)0x0) {
            (*(code *)(*ppppppuVar52)[2])(ppppppuVar52);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
          }
        }
        ppppppuVar52 = ppppppuStack_e08;
        if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
          pppppppuVar45 = (undefined *******)(ppppppuStack_e08 + 1);
          do {
            ppppppuVar34 = *pppppppuVar45;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
            if (bVar13) {
              *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (ppppppuVar34 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_e08)[2])(ppppppuStack_e08);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
          }
        }
        ppppppuVar52 = ppppppuStack_e68;
        if ((undefined *******)ppppppuStack_e68 != (undefined *******)0x0) {
          pppppppuVar45 = (undefined *******)(ppppppuStack_e68 + 1);
          do {
            ppppppuVar34 = *pppppppuVar45;
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
            if (bVar13) {
              *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (ppppppuVar34 == (undefined ******)0x0) {
            (*(code *)(*ppppppuVar52)[2])(ppppppuVar52);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
          }
        }
      }
      else {
LAB_10a222628:
        FUN_10a224b28(lVar31);
        FUN_10a225eb8(&pppppuStack_f58,&ppppppuStack_6d0);
      }
    }
    else {
      ppuVar21 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      puVar27 = *ppuVar21;
      if (((puVar27 != (undefined *)0x0) && (puVar27[0xc0] == '\x01')) &&
         ((*(long *)(puVar27 + 0x80) != 0 &&
          ((lVar31 = *(long *)(*(long *)(puVar27 + 0x80) + 0x18), lVar31 != 0 &&
           (*(int *)(lVar31 + 0x734) == 1)))))) {
        FUN_10a08dbac(puVar27 + 0x18);
      }
      ppppppuVar52 = (undefined ******)pppppuStack_6c0;
      ppppppuStack_6b0 = (undefined ******)CONCAT44(ppppppuStack_6b0._4_4_,fStack_f00);
      pppppppuVar45 = (undefined *******)ppppppuStack_f10;
      if ((undefined *******)ppppppuStack_6c8 != (undefined *******)0x0) {
        pppppppuVar18 = (undefined *******)0x0;
        do {
          ppppppuStack_6d0[(long)pppppppuVar18] = (undefined *****)0x0;
          pppppppuVar18 = (undefined *******)((long)pppppppuVar18 + 1);
        } while ((undefined *******)ppppppuStack_6c8 != pppppppuVar18);
        uStack_6b8 = 0;
        pppppuStack_6c0 = (undefined *****)0x0;
        ppppppuVar34 = ppppppuVar52;
        if (ppppppuVar52 != (undefined ******)0x0 &&
            (undefined *******)ppppppuStack_f10 != (undefined *******)0x0) {
          do {
            ppppppuVar51 = ppppppuVar34 + 2;
            *(int *)ppppppuVar51 = *(int *)(pppppppuVar45 + 2);
            *(char *)(ppppppuVar34 + 4) = *(char *)(pppppppuVar45 + 4);
            ppppppuVar52 = pppppppuVar45[5];
            *(char *)(ppppppuVar34 + 6) = *(char *)(pppppppuVar45 + 6);
            ppppppuVar34[5] = (undefined *****)ppppppuVar52;
            FUN_10a2382fc(ppppppuVar34 + 7,pppppppuVar45 + 7);
            uVar53 = *(undefined8 *)((long)pppppppuVar45 + 0x69);
            uVar42 = *(undefined8 *)((long)pppppppuVar45 + 0x61);
            ppppppuVar33 = pppppppuVar45[0xc];
            ppppppuVar52 = pppppppuVar45[0xb];
            ppppppuVar56 = pppppppuVar45[9];
            ppppppuVar34[10] = (undefined *****)pppppppuVar45[10];
            ppppppuVar34[9] = (undefined *****)ppppppuVar56;
            ppppppuVar34[0xc] = (undefined *****)ppppppuVar33;
            ppppppuVar34[0xb] = (undefined *****)ppppppuVar52;
            *(undefined8 *)((long)ppppppuVar34 + 0x69) = uVar53;
            *(undefined8 *)((long)ppppppuVar34 + 0x61) = uVar42;
            ppppppuVar52 = (undefined ******)*ppppppuVar34;
            ppppppuVar34[1] = (undefined *****)(long)*(int *)ppppppuVar51;
            pppppppuVar18 = &ppppppuStack_6d0;
            FUN_10a238378(pppppppuVar18,(undefined *****)(long)*(int *)ppppppuVar51,ppppppuVar51);
            FUN_10a23868c(&ppppppuStack_6d0,ppppppuVar34,pppppppuVar18);
            pppppppuVar45 = (undefined *******)*pppppppuVar45;
            if (ppppppuVar52 == (undefined ******)0x0) break;
            ppppppuVar34 = ppppppuVar52;
          } while (pppppppuVar45 != (undefined *******)0x0);
        }
        func_0x00010a22bcb4(&ppppppuStack_6d0,ppppppuVar52);
      }
      if (pppppppuVar45 != (undefined *******)0x0) {
        do {
          pppppppuVar18 = (undefined *******)0x78;
          __Znwm();
          ppppppuStack_d00 = (undefined ******)0x1;
          *pppppppuVar18 = (undefined ******)0x0;
          pppppppuVar18[1] = (undefined ******)0x0;
          iVar40 = *(int *)(pppppppuVar45 + 2);
          *(int *)(pppppppuVar18 + 2) = iVar40;
          *(char *)(pppppppuVar18 + 4) = *(char *)(pppppppuVar45 + 4);
          pppppppuVar18[3] = (undefined ******)&PTR_DAT_110ba5598;
          ppppppuVar52 = pppppppuVar45[5];
          *(char *)(pppppppuVar18 + 6) = *(char *)(pppppppuVar45 + 6);
          pppppppuVar18[5] = ppppppuVar52;
          ppppppuVar52 = pppppppuVar45[8];
          ppppppuVar34 = pppppppuVar45[7];
          pppppppuVar18[8] = pppppppuVar45[8];
          pppppppuVar18[7] = ppppppuVar34;
          if (ppppppuVar52 != (undefined ******)0x0) {
            ppppppuVar52 = ppppppuVar52 + 1;
            do {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar52,0x10);
              if (bVar13) {
                *ppppppuVar52 = (undefined *****)((long)*ppppppuVar52 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            iVar40 = *(int *)(pppppppuVar18 + 2);
          }
          ppppppuVar34 = pppppppuVar45[10];
          ppppppuVar52 = pppppppuVar45[9];
          ppppppuVar33 = pppppppuVar45[0xc];
          ppppppuVar51 = pppppppuVar45[0xb];
          uVar42 = *(undefined8 *)((long)pppppppuVar45 + 0x61);
          *(undefined8 *)((long)pppppppuVar18 + 0x69) = *(undefined8 *)((long)pppppppuVar45 + 0x69);
          *(undefined8 *)((long)pppppppuVar18 + 0x61) = uVar42;
          pppppppuVar18[0xc] = ppppppuVar33;
          pppppppuVar18[0xb] = ppppppuVar51;
          pppppppuVar18[10] = ppppppuVar34;
          pppppppuVar18[9] = ppppppuVar52;
          pppppppuVar18[1] = (undefined ******)(long)iVar40;
          pppppppuVar49 = &ppppppuStack_6d0;
          ppppppuStack_d10 = (undefined ******)pppppppuVar18;
          ppppppuStack_d08 = (undefined ******)&ppppppuStack_6d0;
          FUN_10a238378(pppppppuVar49);
          FUN_10a23868c(&ppppppuStack_6d0,pppppppuVar18,pppppppuVar49);
          pppppppuVar45 = (undefined *******)*pppppppuVar45;
        } while (pppppppuVar45 != (undefined *******)0x0);
      }
LAB_10a222298:
      FUN_10a225eb8(&pppppuStack_f58,&ppppppuStack_6d0);
    }
    plVar44 = plStack_670;
    if (plStack_670 != (long *)0x0) {
      plVar41 = plStack_670 + 1;
      do {
        lVar31 = *plVar41;
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
        if (bVar13) {
          *plVar41 = lVar31 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plStack_670 + 0x10))(plStack_670);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
      }
    }
    ppppppuVar52 = ppppppuStack_6a0;
    if ((undefined *******)ppppppuStack_6a0 != (undefined *******)0x0) {
      pppppppuVar45 = (undefined *******)(ppppppuStack_6a0 + 1);
      do {
        ppppppuVar34 = *pppppppuVar45;
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
        if (bVar13) {
          *pppppppuVar45 = (undefined ******)((long)ppppppuVar34 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (ppppppuVar34 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_6a0)[2])(ppppppuStack_6a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar52);
      }
    }
    FUN_10a234f44(&ppppppuStack_6d0);
    lVar31 = *param_2;
    uVar42 = *(undefined8 *)(lVar31 + 0x208);
    uVar26 = lVar31 + 0x40;
    FUN_10a0ec6f0();
    uVar47 = *(ulong *)(lVar31 + 0x44);
    bVar13 = (uVar26 & 1) != 0;
    uVar26 = uVar47 >> 0x20;
    if (bVar13) {
      uVar26 = uVar47;
    }
    uVar10 = uVar47 & 0xffffffff;
    if (bVar13) {
      uVar10 = uVar47 >> 0x20;
    }
    FUN_10a4eda30(uVar42,&pppppuStack_f58,uVar10 | uVar26 << 0x20,&ppppppuStack_f50);
    iVar40 = (int)uVar42;
    FUN_10ad055a0();
    if (iVar40 != 0) {
      ppuVar21 = &PTR___tlv_bootstrap_11340dfd8;
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      if (*ppuVar21 == (undefined *)0x0) {
        ppuVar21 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        plVar44 = (long *)*ppuVar21;
        if (plVar44 != (long *)0x0) {
          (**(code **)(*plVar44 + 0x18))();
          if (plVar44 != (long *)0x0) {
            plVar44 = plVar44 + 7;
            goto LAB_10a22237c;
          }
        }
      }
      else {
        plVar44 = (long *)(*ppuVar21 + 8);
LAB_10a22237c:
        if (((uint)*(undefined8 *)(*plVar44 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppppppuStack_e10,&UNK_10f646452);
          func_0x000107c2b054(&ppppppuStack_e50,&UNK_10f64630a);
          pcVar19 = "null";
          ppppppuStack_6d0 = (undefined ******)pcVar19;
          if ((long)uStack_e00 < 0) {
            if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
              ppppppuStack_6d0 = ppppppuStack_e10;
            }
          }
          else if (uStack_e00._7_1_ != '\0') {
            ppppppuStack_6d0 = (undefined ******)&ppppppuStack_e10;
          }
          ppppppuStack_d10 = (undefined ******)pcVar19;
          if ((long)uStack_e40 < 0) {
            if ((undefined *******)ppppppuStack_e48 != (undefined *******)0x0) {
              ppppppuStack_d10 = ppppppuStack_e50;
            }
          }
          else if (uStack_e40._7_1_ != '\0') {
            ppppppuStack_d10 = (undefined ******)&ppppppuStack_e50;
          }
          FUN_10a224324(&ppppppuStack_6d0,&ppppppuStack_d10);
          if ((long)uStack_e00 < 0) {
            if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
              func_0x000107c3192c(&ppppppuStack_6d0,ppppppuStack_e10);
              goto LAB_10a223868;
            }
LAB_10a2237f8:
            uVar23 = 0;
            ppppppuStack_6d0 = (undefined ******)((ulong)ppppppuStack_6d0 & 0xffffffffffffff00);
          }
          else {
            if (uStack_e00._7_1_ == '\0') goto LAB_10a2237f8;
            ppppppuStack_6c8 = ppppppuStack_e08;
            ppppppuStack_6d0 = ppppppuStack_e10;
            pppppuStack_6c0 = (undefined *****)uStack_e00;
LAB_10a223868:
            uVar23 = 1;
          }
          uStack_6b8 = CONCAT71(uStack_6b8._1_7_,uVar23);
          if ((long)uStack_e40 < 0) {
            if ((undefined *******)ppppppuStack_e48 != (undefined *******)0x0) {
              func_0x000107c3192c(&ppppppuStack_d10,ppppppuStack_e50);
              goto LAB_10a2238e4;
            }
LAB_10a223894:
            uVar23 = 0;
            ppppppuStack_d10 = (undefined ******)((ulong)ppppppuStack_d10 & 0xffffffffffffff00);
            pcVar19 = uStack_cf8;
          }
          else {
            if (uStack_e40._7_1_ == '\0') goto LAB_10a223894;
            ppppppuStack_d08 = ppppppuStack_e48;
            ppppppuStack_d10 = ppppppuStack_e50;
            ppppppuStack_d00 = uStack_e40;
LAB_10a2238e4:
            uVar23 = 1;
            pcVar19 = uStack_cf8;
          }
          uStack_cf8._4_4_ = (undefined4)((ulong)pcVar19 >> 0x20);
          uStack_cf8._1_3_ = (undefined3)((ulong)pcVar19 >> 8);
          uStack_cf8._0_4_ = CONCAT31(uStack_cf8._1_3_,uVar23);
          FUN_10a234a0c(&ppppppuStack_6d0,&ppppppuStack_d10);
          goto LAB_10a2240e8;
        }
      }
    }
    FUN_10a4eec28(&ppppppuStack_eb0,*(undefined8 *)(lVar31 + 0x208));
    ppppppuVar52 = ppppppuStack_eb0;
    if ((undefined *******)ppppppuStack_f40 != (undefined *******)0x0) {
      *(undefined ******)(*param_2 + 0x228) = ppppppuStack_f40[2];
    }
    ppuStack_f78 = &PTR_DAT_110ba5598;
    ppppuStack_f68 = (undefined ****)*ppppppuVar32;
    uStack_f60 = *(undefined1 *)(ppppppuVar32 + 1);
    cStack_f70 = cVar8;
    (**(code **)(**(long **)(*param_2 + 0x8a0) + 0x30))
              (*(long **)(*param_2 + 0x8a0),&ppuStack_f78,ppppppuStack_eb0);
    lVar31 = *param_2;
    __ZNSt3__15mutex4lockEv(lVar31 + 0x7e0);
    plVar44 = *(long **)(lVar31 + 0x210);
LAB_10a2223f8:
    if (plVar44 != (long *)(lVar31 + 0x218)) {
      ppppppuStack_6c8 = (undefined ******)0x0;
      ppppppuStack_6d0 = (undefined ******)0x0;
      pppppppuVar45 = (undefined *******)plVar44[5];
      if (pppppppuVar45 == (undefined *******)0x0) goto LAB_10a222470;
      __ZNSt3__119__shared_weak_count4lockEv();
      ppppppuStack_6c8 = (undefined ******)pppppppuVar45;
      if ((pppppppuVar45 == (undefined *******)0x0) ||
         (ppppppuStack_6d0 = (undefined ******)plVar44[4],
         (undefined *******)ppppppuStack_6d0 == (undefined *******)0x0)) goto LAB_10a222470;
      (*(code *)(*ppppppuStack_6d0)[2])(ppppppuStack_6d0,ppppppuVar52);
      plVar50 = (long *)plVar44[1];
      if ((long *)plVar44[1] == (long *)0x0) {
        do {
          plVar41 = (long *)plVar44[2];
          bVar13 = (long *)*plVar41 != plVar44;
          plVar44 = plVar41;
        } while (bVar13);
      }
      else {
        do {
          plVar41 = plVar50;
          plVar50 = (long *)*plVar41;
        } while ((long *)*plVar41 != (long *)0x0);
      }
      goto LAB_10a222484;
    }
    __ZNSt3__15mutex6unlockEv(lVar31 + 0x7e0);
    ppppppuVar32 = ppppppuStack_ea8;
    param_1[1] = ppppppuStack_f48;
    *param_1 = ppppppuStack_f50;
    if ((undefined *******)ppppppuStack_f48 != (undefined *******)0x0) {
      pppppppuVar45 = (undefined *******)(ppppppuStack_f48 + 1);
      do {
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
        if (bVar13) {
          *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if ((undefined *******)ppppppuStack_ea8 != (undefined *******)0x0) {
      pppppppuVar45 = (undefined *******)(ppppppuStack_ea8 + 1);
      do {
        ppppppuVar52 = *pppppppuVar45;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
        if (bVar13) {
          *pppppppuVar45 = (undefined ******)((long)ppppppuVar52 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppppppuVar52 == (undefined ******)0x0) {
        (*(code *)(*ppppppuVar32)[2])(ppppppuVar32);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar32);
      }
    }
    if ((undefined ******)pppppuStack_f58 != (undefined ******)0x0) {
      ppppppuVar32 = (undefined ******)(pppppuStack_f58 + 1);
      do {
        pppppuVar36 = *ppppppuVar32;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar32,0x10);
        if (bVar13) {
          *ppppppuVar32 = (undefined *****)((long)pppppuVar36 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (pppppuVar36 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_f58)[2])();
      }
    }
    ppppppuVar32 = ppppppuStack_f38;
    if ((undefined *******)ppppppuStack_f38 != (undefined *******)0x0) {
      pppppppuVar45 = (undefined *******)(ppppppuStack_f38 + 1);
      do {
        ppppppuVar52 = *pppppppuVar45;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
        if (bVar13) {
          *pppppppuVar45 = (undefined ******)((long)ppppppuVar52 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppppppuVar52 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_f38)[2])(ppppppuStack_f38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar32);
      }
    }
    ppppppuVar32 = ppppppuStack_f48;
    if ((undefined *******)ppppppuStack_f48 != (undefined *******)0x0) {
      pppppppuVar45 = (undefined *******)(ppppppuStack_f48 + 1);
      do {
        ppppppuVar52 = *pppppppuVar45;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
        if (bVar13) {
          *pppppppuVar45 = (undefined ******)((long)ppppppuVar52 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppppppuVar52 == (undefined ******)0x0) {
        (*(code *)(*ppppppuStack_f48)[2])(ppppppuStack_f48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar32);
      }
    }
    FUN_10a234f44(&pppppuStack_f20);
    FUN_10a2362a4(acStack_ee0);
    FUN_10a044790(auStack_dd0);
    (*(code *)*apuStack_dc8[0])(apuStack_dc8);
    FUN_10a22afb0(auStack_d90);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppppppuVar32 = &pppppuStack_f20;
    FUN_10a236708(ppppppuVar32,&iStack_f24);
    if (ppppppuVar32 != (undefined ******)0x0) {
      ppppppuStack_e10 = (undefined ******)ppppppuVar32[7];
      ppppppuStack_e08 = (undefined ******)ppppppuVar32[8];
      if ((undefined *******)ppppppuStack_e08 != (undefined *******)0x0) {
        pppppppuVar45 = (undefined *******)(ppppppuStack_e08 + 1);
        do {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
          if (bVar13) {
            *pppppppuVar45 = (undefined ******)((long)*pppppppuVar45 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      goto LAB_10a220abc;
    }
  }
  FUN_109ffdddc(&UNK_10f639994);
LAB_10a2240e8:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a2240ec);
  (*pcVar12)();
LAB_10a222470:
  pppppppuVar45 = (undefined *******)ppppppuStack_6c8;
  plVar41 = (long *)(lVar31 + 0x210);
  func_0x00010a2320dc(plVar41,plVar44);
  plVar44 = plVar41;
  if (pppppppuVar45 != (undefined *******)0x0) {
LAB_10a222484:
    pppppppuVar18 = pppppppuVar45 + 1;
    do {
      ppppppuVar32 = *pppppppuVar18;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
      if (bVar13) {
        *pppppppuVar18 = (undefined ******)((long)ppppppuVar32 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    plVar44 = plVar41;
    if (ppppppuVar32 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar45)[2])(pppppppuVar45);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar45);
    }
  }
  goto LAB_10a2223f8;
}



/* Entry: 10a224204; end: 10a2242d7;  */

long FUN_10a224204(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a234f7c(param_1 + 0x58);
  func_0x00010a234f44(param_1 + 0x10);
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



/* Entry: 10a2242d8; end: 10a224323;  */

void FUN_10a2242d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a21ebc0(param_1,param_2,&uStack_30,param_3,param_4,param_5);
  return;
}



/* Entry: 10a224324; end: 10a22438b;  */

undefined * FUN_10a224324(undefined8 *param_1)

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
  
  FUN_10ae030a0(0,*param_1);
  FUN_10ae030a0();
  ppuVar6 = &PTR_PTR_113300cd0;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
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
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a22438c; end: 10a22448b;  */

long FUN_10a22438c(long param_1,long param_2)

{
  FUN_10a22b994();
  FUN_10a22b994(param_1 + 0x10,param_2 + 0x10);
  FUN_10a22b994(param_1 + 0x20,param_2 + 0x20);
  FUN_10a22b9f8(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 10a22448c; end: 10a224563;  */

undefined8 * FUN_10a22448c(undefined8 *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_60 [48];
  undefined *puStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)*param_1;
  FUN_10a13299c(auStack_60,&UNK_10f646969);
  if (*(long *)(*plVar5 + 0x10) != 0) {
    lVar4 = *(long *)(*(long *)(*plVar5 + 0x10) + 0x10);
    puStack_30 = &UNK_10f635282;
    uStack_28 = 0x2b;
    if (lVar4 == 0) {
      FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a224548);
      (*pcVar1)();
    }
    func_0x00010a090848(lVar4 + 0x50);
    pbVar2 = (byte *)0x113836510;
    FUN_10ad0621c();
    if ((*pbVar2 >> 5 & 1) == 0) {
      _glBindFramebuffer(0x8d40,0);
    }
  }
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*ppuVar3 != (undefined *)0x0) {
    FUN_10a08e624(*ppuVar3 + 0x18);
  }
  FUN_10a144868(auStack_60);
  return param_1;
}



/* Entry: 10a224564; end: 10a224607;  */

ulong FUN_10a224564(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  uVar1 = *(ulong *)(*param_1 + 0x208);
  FUN_10a4eebc4(uVar1);
  plVar2 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(alStack_a8);
  __Unwind_Resume();
  plVar3 = plVar2;
  FUN_10ad05ac4();
  if (0 < (int)plVar3) {
    lVar4 = *(long *)(*plVar2 + 0x180);
    if (*(long *)(lVar4 + 0xe8) == 0) {
      if ((*(long *)(lVar4 + 0xb8) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar4 + 0xa8) + 0x28), lVar4 == 0)) {
        return 0;
      }
      lVar4 = *(long *)(lVar4 + 0x108);
      if ((lVar4 != 0) && (*(int *)(*(long *)(lVar4 + 0x850) + 0x2c) != 0)) {
        return (ulong)((*(ulong *)(*plVar2 + 0x238) & 0x1dc0e065b) != 0);
      }
    }
  }
  return 1;
}



/* Entry: 10a224608; end: 10a22468f;  */

bool FUN_10a224608(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ad05ac4();
  if (0 < (int)plVar1) {
    lVar2 = *(long *)(*param_1 + 0x180);
    if (*(long *)(lVar2 + 0xe8) == 0) {
      if ((*(long *)(lVar2 + 0xb8) == 0) ||
         (lVar2 = *(long *)(*(long *)(lVar2 + 0xa8) + 0x28), lVar2 == 0)) {
        return false;
      }
      lVar2 = *(long *)(lVar2 + 0x108);
      if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 0x850) + 0x2c) != 0)) {
        return (*(ulong *)(*param_1 + 0x238) & 0x1dc0e065b) != 0;
      }
    }
  }
  return true;
}



/* Entry: 10a224690; end: 10a224853;  */

undefined4 * FUN_10a224690(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  func_0x00010a230680(param_1 + 2,param_2 + 2);
  FUN_10a2306d0(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  FUN_10a230878(param_1 + 0x16,param_2 + 0x16);
  func_0x00010a230d34(param_1 + 0x46,param_2 + 0x46);
  FUN_10a230e34(param_1 + 0x4e,param_2 + 0x4e);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x5e);
  uVar4 = *(undefined8 *)(param_2 + 100);
  uVar3 = *(undefined8 *)(param_2 + 0x62);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_2 + 0x66);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x5e) = uVar1;
  *(undefined8 *)(param_1 + 100) = uVar4;
  *(undefined8 *)(param_1 + 0x62) = uVar3;
  FUN_10a230edc(param_1 + 0x68,param_2 + 0x68);
  FUN_10a231084(param_1 + 0x74,param_2 + 0x74);
  FUN_10a23122c(param_1 + 0x80,param_2 + 0x80);
  func_0x00010a2312c0(param_1 + 0x90,param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x9e);
  uVar1 = *(undefined8 *)(param_2 + 0x9c);
  uVar4 = *(undefined8 *)(param_2 + 0xa2);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0x9e) = uVar2;
  *(undefined8 *)(param_1 + 0x9c) = uVar1;
  *(undefined8 *)(param_1 + 0xa2) = uVar4;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  func_0x00010a23137c(param_1 + 0xa6,param_2 + 0xa6);
  FUN_10a231480(param_1 + 0xae,param_2 + 0xae);
  func_0x00010a231520(param_1 + 0xb6,param_2 + 0xb6);
  FUN_10a2315dc(param_1 + 0xc0,param_2 + 0xc0);
  FUN_10a231878(param_1 + 0x104,param_2 + 0x104);
  FUN_10a231a38(param_1 + 0x116,param_2 + 0x116);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  uVar1 = *(undefined8 *)(param_2 + 0x12e);
  uVar3 = *(undefined8 *)(param_2 + 0x132);
  uVar5 = *(undefined8 *)(param_2 + 0x138);
  uVar4 = *(undefined8 *)(param_2 + 0x136);
  *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 0x132) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar5;
  *(undefined8 *)(param_1 + 0x136) = uVar4;
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  *(undefined8 *)(param_1 + 0x12e) = uVar1;
  func_0x00010a231bc8(param_1 + 0x13a,param_2 + 0x13a);
  FUN_10a231ccc(param_1 + 0x142,param_2 + 0x142);
  FUN_10a231d68(param_1 + 0x14a,param_2 + 0x14a);
  uVar2 = *(undefined8 *)(param_2 + 0x158);
  uVar1 = *(undefined8 *)(param_2 + 0x156);
  uVar3 = *(undefined8 *)((long)param_2 + 0x561);
  *(undefined8 *)((long)param_1 + 0x569) = *(undefined8 *)((long)param_2 + 0x569);
  *(undefined8 *)((long)param_1 + 0x561) = uVar3;
  *(undefined8 *)(param_1 + 0x158) = uVar2;
  *(undefined8 *)(param_1 + 0x156) = uVar1;
  func_0x00010a23061c(param_1 + 0x15e,param_2 + 0x15e);
  return param_1;
}



/* Entry: 10a224854; end: 10a2248a3;  */

void FUN_10a224854(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x7e0);
  FUN_10a231fb4(param_1 + 0x210,param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x7e0);
  return;
}



/* Entry: 10a2248a4; end: 10a2249d3;  */

void FUN_10a2248a4(ulong *param_1,byte param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int aiStack_238 [32];
  long lStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long alStack_188 [16];
  long lStack_108;
  ulong *puStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  long alStack_b8 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *param_1;
  FUN_10a219de8(alStack_b8);
  if ((uint)*(byte *)(*param_1 + 0x171) != (uint)param_2) {
    *(byte *)(*param_1 + 0x171) = param_2;
    *(byte *)(*(long *)(*param_1 + 0x208) + 0xe1) = param_2;
    FUN_10ad3ef74(*param_1 + 0x178,param_2);
    uVar4 = (ulong)(param_2 - 1 < 2);
    uStack_d0 = *(undefined1 *)(param_3 + 8);
    ppuStack_d8 = &PTR_DAT_110ba5598;
    uStack_c8 = *(undefined8 *)(param_3 + 0x10);
    uStack_c0 = *(undefined1 *)(param_3 + 0x18);
    (**(code **)(**(long **)(*param_1 + 0x8a0) + 0x10))
              (*(long **)(*param_1 + 0x8a0),uVar4,&ppuStack_d8);
  }
  plVar1 = alStack_b8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(alStack_b8);
  plVar2 = plVar1;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a2249d4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = param_1;
  plStack_f8 = plVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_10a219de8(alStack_188,*plVar2);
  uVar5 = uVar4;
  func_0x00010ad3fed0(*plVar2 + 0x178);
  plVar1 = alStack_188;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_198 = FUN_10a224a50;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1b0 = plVar2;
  uStack_1a8 = uVar4;
  ppuStack_1a0 = &puStack_f0;
  FUN_10a219de8(aiStack_238,*plVar1);
  func_0x00010ad3ff08(*plVar1 + 0x178,uVar5);
  piVar3 = aiStack_238;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    __Unwind_Resume();
    iVar6 = *piVar3;
    if (0 < iVar6) {
      lVar7 = 0;
      plVar1 = (long *)(piVar3 + 2);
      do {
        if (*plVar1 != 0) {
          func_0x00010a22baf0(plVar1);
          iVar6 = *piVar3;
        }
        lVar7 = lVar7 + 1;
        plVar1 = plVar1 + 2;
      } while (lVar7 < iVar6);
    }
    return;
  }
  return;
}



/* Entry: 10a2249d4; end: 10a224a4f;  */

void FUN_10a2249d4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int aiStack_158 [32];
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  uVar3 = param_2;
  func_0x00010ad3fed0(*param_1 + 0x178);
  plVar1 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_b8 = FUN_10a224a50;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_d0 = param_1;
  uStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a219de8(aiStack_158,*plVar1);
  func_0x00010ad3ff08(*plVar1 + 0x178,uVar3);
  piVar2 = aiStack_158;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    __Unwind_Resume();
    iVar4 = *piVar2;
    if (0 < iVar4) {
      lVar5 = 0;
      plVar1 = (long *)(piVar2 + 2);
      do {
        if (*plVar1 != 0) {
          func_0x00010a22baf0(plVar1);
          iVar4 = *piVar2;
        }
        lVar5 = lVar5 + 1;
        plVar1 = plVar1 + 2;
      } while (lVar5 < iVar4);
    }
    return;
  }
  return;
}



/* Entry: 10a224a50; end: 10a224acb;  */

void FUN_10a224a50(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int aiStack_a8 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(aiStack_a8,*param_1);
  func_0x00010ad3ff08(*param_1 + 0x178,param_2);
  piVar1 = aiStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    iVar2 = *piVar1;
    if (0 < iVar2) {
      lVar4 = 0;
      plVar3 = (long *)(piVar1 + 2);
      do {
        if (*plVar3 != 0) {
          func_0x00010a22baf0(plVar3);
          iVar2 = *piVar1;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 2;
      } while (lVar4 < iVar2);
    }
    return;
  }
  return;
}



/* Entry: 10a224acc; end: 10a224b27;  */

void FUN_10a224acc(int *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    lVar3 = 0;
    plVar2 = (long *)(param_1 + 2);
    do {
      if (*plVar2 != 0) {
        func_0x00010a22baf0(plVar2);
        iVar1 = *param_1;
      }
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 2;
    } while (lVar3 < iVar1);
  }
  return;
}



/* Entry: 10a224b28; end: 10a224ec3;  */

void FUN_10a224b28(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  if (*(long *)(param_1 + 0x140) != 0) {
    lVar9 = *(long *)(param_1 + 0x208);
    if (*(long *)(lVar9 + 0xb8) != 0) {
      puVar7 = *(undefined8 **)(lVar9 + 0xb0);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x00010a313478();
      }
      else {
        plVar8 = (long *)puVar7[2];
        plStack_70 = (long *)0x0;
        plStack_68 = (long *)0x0;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0xc8;
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
          *(undefined2 *)(plVar8 + 0x13) = 0;
          *plVar8 = (long)&PTR_DAT_110bb4858;
          plStack_78 = plVar8 + 0x14;
          *plStack_78 = lVar9;
          plVar8[0x15] = param_1;
          *(undefined1 *)(plVar8 + 0x17) = 1;
          plVar8[0x18] = 0;
          pcStack_60 = FUN_10a237de4;
          plStack_70 = plVar8;
          plStack_68 = plVar8;
        }
        else {
          pcStack_58 = (code *)0x0;
          (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
          if (pcStack_58 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a224e50);
            (*pcVar4)();
          }
          plVar5 = (long *)0xd0;
          __Znwm();
          *(undefined2 *)(plVar5 + 3) = 4;
          plVar5[2] = 0;
          plVar5[1] = 0x200000006;
          plVar5[5] = 0;
          plVar5[4] = 0;
          plVar5[7] = 0;
          plVar5[6] = 0;
          plVar5[9] = 0;
          plVar5[8] = 0;
          plVar5[0xb] = 0;
          plVar5[10] = 0;
          plVar5[0xd] = 0;
          plVar5[0xc] = 0;
          plVar5[0xf] = 0;
          plVar5[0xe] = 0;
          plVar5[0x10] = 0;
          plVar5[0x11] = (long)(plVar5 + 3);
          plVar5[0x12] = 0;
          *(undefined2 *)(plVar5 + 0x13) = 0;
          *plVar5 = (long)&PTR_FUN_110bb4820;
          plVar5[0x14] = lVar9;
          plVar5[0x15] = param_1;
          *(undefined1 *)(plVar5 + 0x17) = 1;
          plVar5[0x18] = 0;
          plVar5[0x19] = (long)plVar8;
          if (plStack_70 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_70 + 1);
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
                (**(code **)(*plStack_70 + 8))();
              }
            }
          }
          plStack_70 = plVar5;
          if (plStack_68 != (long *)0x0) {
            func_0x0001092b4274(&plStack_68);
          }
          pcStack_60 = (code *)0x10a237db4;
          plStack_78 = plVar5 + 0x14;
          plStack_68 = plVar5;
          __ZNSt13exception_ptrD1Ev(&pcStack_58);
        }
        plVar8 = plStack_78;
        if (plStack_78[4] != 0) {
          func_0x0001092b4274();
        }
        plVar8[4] = (long)plStack_68;
        plStack_68 = (long *)0x0;
        pcStack_58 = pcStack_60;
        plStack_50 = plStack_78;
        puStack_48 = puVar7;
        (**(code **)*puVar7)(puVar7,&pcStack_58);
        plStack_80 = plStack_70;
        plStack_70 = (long *)0x0;
        if (plStack_68 != (long *)0x0) {
          func_0x0001092b4274(&plStack_68);
          if (plStack_70 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_70 + 1);
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
                (**(code **)(*plStack_70 + 8))();
              }
            }
          }
        }
        FUN_109d1a244(&plStack_80);
        FUN_10a09b344(&plStack_80);
        if (plStack_80 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_80 + 1);
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
              (**(code **)(*plStack_80 + 8))();
            }
          }
        }
      }
    }
    func_0x00010a3133e8(*(undefined8 *)(param_1 + 0x140));
    plVar8 = *(long **)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  return;
}



/* Entry: 10a224ec4; end: 10a224f27;  */

undefined8 * FUN_10a224ec4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a224f28; end: 10a22502f;  */

long * FUN_10a224f28(long *param_1)

{
  undefined8 ****ppppuVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0x278) = 0xf;
  }
  plVar2 = param_1;
  FUN_10ad4bc5c();
  if ((int)plVar2 != 0) {
    FUN_10a185264(&pppuStack_48,0x400);
    puStack_58 = &UNK_10f64630a;
    uStack_50 = 0;
    FUN_10a304b28(&pppuStack_48,&puStack_58,0,0,plVar2);
    ppppuVar1 = (undefined8 ****)pppuStack_48;
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      ppppuVar1 = &pppuStack_48;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_40);
    ppuVar3 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar3,&PTR_PTR_113300cb8);
    if ((char)bStack_31 < '\0') {
      __ZdlPv(pppuStack_48);
    }
  }
  return param_1;
}



/* Entry: 10a225030; end: 10a225be3;  */

long * FUN_10a225030(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long ****pppplVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long ***ppplVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lStack_100;
  long *plStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_48;
  undefined **ppuVar7;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR_PTR_113300970;
  FUN_10ae079a0(0);
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_113300970);
  iVar6 = (int)ppuVar7;
  ppplStack_e0 = (long ***)0x0;
  ppplStack_d8 = (long ***)0x0;
  ppplStack_d0 = (long ***)0x0;
  FUN_10ad055a0();
  lVar11 = *param_1;
  if ((iVar6 != 0) && (*(long **)(lVar11 + 0x30) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar11 + 0x30) + 0x50))(&ppplStack_c8);
    if (ppplStack_d8 < ppplStack_d0) {
      *ppplStack_d8 = (long **)ppplStack_c8;
      ppplStack_d8 = ppplStack_d8 + 1;
    }
    else {
      pppplVar8 = &ppplStack_e0;
      func_0x0001098b74c4(pppplVar8,&ppplStack_c8);
      ppplStack_d8 = (long ***)pppplVar8;
      if ((long ****)ppplStack_c8 != (long ****)0x0) {
        pppplVar8 = (long ****)(ppplStack_c8 + 1);
        do {
          ppplVar14 = *pppplVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
          if (bVar4) {
            *pppplVar8 = (long ***)((long)ppplVar14 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)ppplVar14 & 0x1fffffffc) == 4) {
          do {
            ppplVar14 = *pppplVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
            if (bVar4) {
              *pppplVar8 = (long ***)((long)ppplVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long ***)((long)ppplVar14 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_c8)[1])();
          }
        }
      }
    }
    lVar11 = *param_1;
  }
  if (*(undefined8 **)(lVar11 + 0x10) != (undefined8 *)0x0) {
    func_0x00010a094208(&ppplStack_c8,**(undefined8 **)(lVar11 + 0x10));
    if (ppplStack_d8 < ppplStack_d0) {
      *ppplStack_d8 = (long **)ppplStack_c8;
      ppplStack_d8 = ppplStack_d8 + 1;
    }
    else {
      pppplVar8 = &ppplStack_e0;
      func_0x0001098b74c4(pppplVar8,&ppplStack_c8);
      ppplStack_d8 = (long ***)pppplVar8;
      if ((long ****)ppplStack_c8 != (long ****)0x0) {
        pppplVar8 = (long ****)(ppplStack_c8 + 1);
        do {
          ppplVar14 = *pppplVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
          if (bVar4) {
            *pppplVar8 = (long ***)((long)ppplVar14 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)ppplVar14 & 0x1fffffffc) == 4) {
          do {
            ppplVar14 = *pppplVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
            if (bVar4) {
              *pppplVar8 = (long ***)((long)ppplVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long ***)((long)ppplVar14 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_c8)[1])();
          }
        }
      }
    }
    lVar11 = *param_1;
  }
  FUN_10a219de8(&ppplStack_c8,lVar11);
  FUN_10a21e1b8(param_1);
  lVar11 = *param_1;
  plVar16 = *(long **)(lVar11 + 0x8a8);
  *(undefined8 *)(lVar11 + 0x8a8) = 0;
  *(undefined8 *)(lVar11 + 0x8a0) = 0;
  if (plVar16 != (long *)0x0) {
    plVar12 = plVar16 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  lVar11 = *param_1;
  plVar16 = *(long **)(lVar11 + 0x8b8);
  *(undefined8 *)(lVar11 + 0x8b8) = 0;
  *(undefined8 *)(lVar11 + 0x8b0) = 0;
  if (plVar16 != (long *)0x0) {
    plVar12 = plVar16 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  lVar11 = *param_1;
  plVar16 = *(long **)(lVar11 + 0x208);
  *(undefined8 *)(lVar11 + 0x208) = 0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
    lVar11 = *param_1;
  }
  lStack_100 = 0;
  plStack_f8 = (long *)0x0;
  func_0x00010a21badc(lVar11 + 0x830,&lStack_100);
  plVar16 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar12 = plStack_f8 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  FUN_10a22afb0(&ppplStack_c8);
  plVar16 = (long *)*param_1;
  if ((long *)plVar16[4] != (long *)0x0) {
    (**(code **)(*(long *)plVar16[4] + 0x38))(&ppplStack_c8);
    if (ppplStack_d8 < ppplStack_d0) {
      *ppplStack_d8 = (long **)ppplStack_c8;
      ppplStack_d8 = ppplStack_d8 + 1;
    }
    else {
      pppplVar8 = &ppplStack_e0;
      func_0x0001098b74c4(pppplVar8,&ppplStack_c8);
      ppplStack_d8 = (long ***)pppplVar8;
      if ((long ****)ppplStack_c8 != (long ****)0x0) {
        pppplVar8 = (long ****)(ppplStack_c8 + 1);
        do {
          ppplVar14 = *pppplVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
          if (bVar4) {
            *pppplVar8 = (long ***)((long)ppplVar14 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)ppplVar14 & 0x1fffffffc) == 4) {
          do {
            ppplVar14 = *pppplVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
            if (bVar4) {
              *pppplVar8 = (long ***)((long)ppplVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long ***)((long)ppplVar14 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_c8)[1])();
          }
        }
      }
    }
    plVar16 = (long *)*param_1;
  }
  plVar16 = (long *)*plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x38))(&ppplStack_e8);
    FUN_109d1a80c();
    pppplVar8 = (long ****)ppplStack_e8;
    lVar17 = *plVar16;
    plVar12 = (long *)*param_1;
    plVar16 = (long *)plVar12[1];
    lVar11 = *plVar12;
    *plVar12 = 0;
    plVar12[1] = 0;
    ppplStack_f0 = ppplStack_e8;
    ppplStack_e8 = (long ***)0x0;
    puVar9 = (undefined8 *)0x80;
    lStack_100 = lVar11;
    plStack_f8 = plVar16;
    __Znwm();
    *puVar9 = FUN_10a23d388;
    puVar9[1] = FUN_10a23d65c;
    func_0x0001092ba17c(puVar9 + 2);
    plVar12 = (long *)puVar9[7];
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
        pppplVar8 = (long ****)ppplStack_f0;
        lVar11 = lStack_100;
        plVar16 = plStack_f8;
      } while (cVar3 != '\0');
    }
    puVar9[10] = plVar16;
    puVar9[9] = lVar11;
    plStack_f8 = (long *)0x0;
    ppplStack_f0 = (long ***)0x0;
    lStack_100 = 0;
    puVar9[0xb] = pppplVar8;
    puVar9[0xc] = lVar17;
    *(undefined1 *)(puVar9 + 0xd) = 0;
    *(undefined1 *)(puVar9 + 0xf) = 0;
    puVar10 = puVar9 + 0xc;
    func_0x0001092ba064(puVar10,puVar9);
    if (((ulong)puVar10 & 1) == 0) {
      FUN_10a23239c(puVar9 + 0xe,puVar9 + 9);
      puVar9[0xc] = puVar9[0xe];
      plVar16 = (long *)(puVar9[0xe] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar9[0xc] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar9 + 0xf) = 1;
        lVar17 = puVar9[0xc];
        plVar16 = (long *)(lVar17 + 0x10);
        lVar11 = puVar9[3];
        do {
          lVar15 = *plVar16;
          if (lVar15 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              ppplStack_c8 = (long ***)0x0;
              puStack_c0 = puVar9;
              lStack_b8 = lVar11;
              func_0x000109d1b588(lVar17 + 0x18,&ppplStack_c8);
              *(undefined8 *)(lVar17 + 0x10) = 0;
              goto joined_r0x00010a225618;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar15 >> 1 & 1) == 0);
      }
      plVar16 = (long *)puVar9[0xc];
      if (((uint)*(undefined8 *)(puVar9[0xc] + 0x10) >> 5 & 1) != 0) goto LAB_10a2258ec;
      if (plVar16 != (long *)0x0) {
        puVar2 = (ulong *)(plVar16 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar16 + 8))();
          }
        }
      }
      plVar16 = (long *)puVar9[0xe];
      if (plVar16 != (long *)0x0) {
        puVar2 = (ulong *)(plVar16 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar16 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar9 + 2);
      plVar16 = (long *)puVar9[0xb];
      if (plVar16 != (long *)0x0) {
        puVar2 = (ulong *)(plVar16 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar16 + 8))();
          }
        }
      }
      plVar16 = (long *)puVar9[10];
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      func_0x000109d1a1d0(puVar9 + 2);
      __ZdlPv(puVar9);
    }
joined_r0x00010a225618:
    if (plVar12 != (long *)0x0) {
      puVar2 = (ulong *)(plVar12 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
    }
    if (ppplStack_f0 != (long ***)0x0) {
      puVar2 = (ulong *)(ppplStack_f0 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)((long)*ppplStack_f0 + 8))();
        }
      }
    }
    plVar16 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar12 = plStack_f8 + 1;
      do {
        lVar11 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    if ((long ****)ppplStack_e8 != (long ****)0x0) {
      pppplVar8 = (long ****)(ppplStack_e8 + 1);
      do {
        ppplVar14 = *pppplVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
        if (bVar4) {
          *pppplVar8 = (long ***)((long)ppplVar14 + -4);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((ulong)ppplVar14 & 0x1fffffffc) == 4) {
        do {
          ppplVar14 = *pppplVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
          if (bVar4) {
            *pppplVar8 = (long ***)((long)ppplVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((long ***)((long)ppplVar14 + -1) == (long ***)0x0) {
          (*(code *)(*ppplStack_e8)[1])();
        }
      }
    }
  }
  ppplVar14 = ppplStack_d8;
  pppplVar8 = (long ****)ppplStack_e0;
  if (ppplStack_e0 == ppplStack_d8) {
    FUN_109d1b124(&ppplStack_e8);
  }
  else {
    lStack_100 = (long)ppplStack_d8 - (long)ppplStack_e0 >> 3;
    func_0x0001098b7954(&ppplStack_c8,&lStack_100);
    plVar16 = (long *)(lStack_b8 + 8);
    if (*plVar16 != 0) {
      func_0x0001092b4274(plVar16);
    }
    *plVar16 = (long)puStack_c0;
    puStack_c0 = (undefined8 *)0x0;
    lVar11 = 0;
    do {
      func_0x0001098b799c(lStack_b8,lVar11,pppplVar8);
      pppplVar8 = pppplVar8 + 1;
      lVar11 = lVar11 + 1;
    } while (pppplVar8 != (long ****)ppplVar14);
    ppplStack_e8 = ppplStack_c8;
    ppplStack_c8 = (long ***)0x0;
    if ((puStack_c0 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_c0), (long ****)ppplStack_c8 != (long ****)0x0)) {
      pppplVar8 = (long ****)(ppplStack_c8 + 1);
      do {
        ppplVar14 = *pppplVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
        if (bVar4) {
          *pppplVar8 = (long ***)((long)ppplVar14 + -4);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((ulong)ppplVar14 & 0x1fffffffc) == 4) {
        do {
          ppplVar14 = *pppplVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
          if (bVar4) {
            *pppplVar8 = (long ***)((long)ppplVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((long ***)((long)ppplVar14 + -1) == (long ***)0x0) {
          (*(code *)(*ppplStack_c8)[1])();
        }
      }
    }
  }
  FUN_109d1a244(&ppplStack_e8);
  if ((long ****)ppplStack_e8 != (long ****)0x0) {
    pppplVar8 = (long ****)(ppplStack_e8 + 1);
    do {
      ppplVar14 = *pppplVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
      if (bVar4) {
        *pppplVar8 = (long ***)((long)ppplVar14 + -4);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((ulong)ppplVar14 & 0x1fffffffc) == 4) {
      do {
        ppplVar14 = *pppplVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
        if (bVar4) {
          *pppplVar8 = (long ***)((long)ppplVar14 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((long ***)((long)ppplVar14 + -1) == (long ***)0x0) {
        (*(code *)(*ppplStack_e8)[1])();
      }
    }
  }
  lVar11 = *param_1;
  plVar16 = *(long **)(lVar11 + 0x38);
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  if (plVar16 != (long *)0x0) {
    plVar12 = plVar16 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  func_0x00010a225c4c(*param_1 + 0x20);
  lVar11 = *param_1;
  plVar16 = *(long **)(lVar11 + 0x18);
  *(undefined8 *)(lVar11 + 0x10) = 0;
  *(undefined8 *)(lVar11 + 0x18) = 0;
  if (plVar16 != (long *)0x0) {
    plVar12 = plVar16 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  ppplStack_c8 = (long ***)&ppplStack_e0;
  FUN_10a2325bc(&ppplStack_c8);
  plVar16 = param_1;
  func_0x00010a235084(param_1,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10a2258ec:
  func_0x0001092af97c(plVar16 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2258f8);
  (*pcVar5)();
}



/* Entry: 10a225be4; end: 10a225cdb;  */

long FUN_10a225be4(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a225cdc; end: 10a225d2f;  */

undefined * FUN_10a225cdc(undefined8 param_1)

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
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_1133009a0;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
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
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a225d30; end: 10a225eb7;  */

void FUN_10a225d30(long param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  char cStack_1f9;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = *(int *)((long)param_3 + 0x4c);
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x30))();
  lVar5 = plVar2[3];
  lVar6 = *(long *)(param_1 + 0x160);
  if (((lVar6 == 0) || (*(long *)(param_1 + 0x168) != lVar5)) ||
     ((bool)*(char *)(param_1 + 0x170) != (iVar1 == 5))) {
    uVar3 = 0xc68;
    __Znwm();
    func_0x000107c2b054(&uStack_210,&UNK_10f64643b);
    FUN_10a0e4d58(uVar3,lVar5,iVar1 == 5,&uStack_210);
    lVar6 = *(long *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = uVar3;
    if (lVar6 != 0) {
      func_0x00010a159354(param_1 + 0x160);
    }
    if (cStack_1f9 < '\0') {
      __ZdlPv(CONCAT71(uStack_20f,uStack_210));
    }
    *(long *)(param_1 + 0x168) = lVar5;
    *(bool *)(param_1 + 0x170) = iVar1 == 5;
    lVar6 = *(long *)(param_1 + 0x160);
  }
  plVar4 = (long *)*param_2;
  uStack_210 = 0;
  uStack_78 = 0;
  (**(code **)(*plVar4 + 0x38))();
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3);
  uStack_68 = 0x3f800000;
  uStack_70 = 0;
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0x3f8000003f800000;
  FUN_10a0e5058(lVar6,plVar4,plVar2,&uStack_70,&uStack_210);
  *(undefined4 *)(param_3 + 10) = 5;
  FUN_10a09d158(&uStack_210);
  return;
}



/* Entry: 10a225eb8; end: 10a225f5f;  */

void FUN_10a225eb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = 0x32aaaba7;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3cb0b1bb;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *puVar1 = &PTR_DAT_110bb4890;
  puVar1[1] = 0;
  puStack_38 = puVar1;
  FUN_10a238150();
  *param_1 = puVar1;
  FUN_10a085024(puVar1);
  FUN_10a23822c(&puStack_38);
  return;
}



/* Entry: 10a225f60; end: 10a225fb3;  */

undefined * FUN_10a225f60(undefined8 param_1)

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
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113300a88;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
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
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a225fb4; end: 10a226087;  */

undefined8 * FUN_10a225fb4(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 10a226088; end: 10a2260db;  */

undefined * FUN_10a226088(undefined8 param_1)

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
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113300af8;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
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
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a2260dc; end: 10a22610b;  */

long * FUN_10a2260dc(long *param_1)

{
  long lVar1;
  
  func_0x00010a234f7c(param_1 + 0xb);
  func_0x00010a09db0c(param_1 + 5);
  func_0x00010a22bcb4(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a22610c; end: 10a2262a3;  */

void FUN_10a22610c(long *param_1,undefined4 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 *apuStack_3c8 [51];
  undefined1 uStack_230;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [288];
  undefined1 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  lVar4 = 0;
  uStack_68 = 0;
  uStack_70 = 0x3f80000000000000;
  uStack_58 = 0x3f800000;
  uStack_60 = 0x3f8000003f800000;
  uStack_88 = 0x3f80000000000000;
  uStack_90 = 0;
  uStack_78 = 0x3f8000003f800000;
  uStack_80 = 0x3f800000;
  uStack_44 = param_2;
  do {
    FUN_10a108ed4(&uStack_44,(long)&uStack_70 + lVar4,(long)&uStack_70 + lVar4 + 4);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x20);
  lVar4 = 8;
  uVar6 = uStack_70;
  do {
    uVar8 = *(ulong *)((long)&uStack_70 + lVar4);
    uVar6 = uVar6 ^ (uVar6 ^ uVar8) &
                    ~CONCAT44(-(uint)((float)(uVar6 >> 0x20) < (float)(uVar8 >> 0x20)),
                              -(uint)((float)uVar6 < (float)uVar8));
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x20);
  fVar5 = (float)uVar6;
  fVar7 = (float)(uVar6 >> 0x20);
  auVar9 = NEON_fmov(0xbf800000,4);
  uStack_60 = CONCAT44(auVar9._4_4_ + ((float)((ulong)uStack_60 >> 0x20) - fVar7) * 2.0,
                       auVar9._0_4_ + ((float)uStack_60 - fVar5) * 2.0);
  uStack_58 = CONCAT44(auVar9._12_4_ + ((float)((ulong)uStack_58 >> 0x20) - fVar7) * 2.0,
                       auVar9._8_4_ + ((float)uStack_58 - fVar5) * 2.0);
  uStack_68 = CONCAT44(auVar9._12_4_ + ((float)((ulong)uStack_68 >> 0x20) - fVar7) * 2.0,
                       auVar9._8_4_ + ((float)uStack_68 - fVar5) * 2.0);
  uStack_70 = CONCAT44(auVar9._4_4_ + ((float)(uStack_70 >> 0x20) - fVar7) * 2.0,
                       auVar9._0_4_ + ((float)uStack_70 - fVar5) * 2.0);
  plVar1 = *(long **)(*param_1 + 0xe8);
  (**(code **)(*plVar1 + 0x30))();
  FUN_10a0e3e64(auStack_228,plVar1[3]);
  uVar2 = *(undefined8 *)(*param_1 + 0xf8);
  uVar3 = *(undefined8 *)(*param_1 + 0xe8);
  uStack_100 = param_3;
  FUN_10a156fa0(apuStack_3c8,auStack_228);
  uStack_230 = 1;
  FUN_10a0e3b28(uVar2,uVar3,&uStack_90,4,&uStack_70,4,1,apuStack_3c8);
  FUN_10a09d158(apuStack_3c8);
  apuStack_3c8[0] = auStack_e0;
  FUN_10a09d1bc(apuStack_3c8);
  apuStack_3c8[0] = auStack_f8;
  FUN_10a09d284(apuStack_3c8);
  apuStack_3c8[0] = auStack_220;
  func_0x00010a09d2f4(apuStack_3c8);
  return;
}



/* Entry: 10a2262a4; end: 10a22649b;  */

void FUN_10a2262a4(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  code *pcStack_2b0;
  code *pcStack_2a8;
  long *plStack_2a0;
  undefined8 *puStack_298;
  long alStack_238 [16];
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long alStack_188 [16];
  long lStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  long *plStack_d0;
  long alStack_c8 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_c8,*param_1);
  FUN_10a0ec6f0();
  bVar6 = (param_4 & 1) != 0;
  uVar15 = (uint)param_3;
  uVar16 = (uint)param_2;
  uVar2 = uVar15;
  if (bVar6) {
    uVar2 = uVar16;
  }
  puVar10 = (undefined8 *)(ulong)uVar2;
  uVar3 = uVar16;
  if (bVar6) {
    uVar3 = uVar15;
  }
  uVar7 = (ulong)uVar3;
  lVar12 = *param_1;
  lVar14 = *(long *)(lVar12 + 0xe8);
  if ((((lVar14 == 0) || (*(uint *)(lVar14 + 0x18) != uVar3)) || (*(uint *)(lVar14 + 0x1c) != uVar2)
      ) || (*(int *)(lVar14 + 0x4c) != (int)param_5)) {
    FUN_10ad55a00(uVar7,puVar10,param_5,0);
    FUN_10a23267c(&uStack_d8,uVar7);
    puVar10 = &uStack_d8;
    func_0x00010a099dfc(*param_1 + 0xe8);
    plVar8 = plStack_d0;
    if (plStack_d0 != (long *)0x0) {
      plVar13 = plStack_d0 + 1;
      do {
        lVar12 = *plVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    lVar12 = *param_1;
  }
  lVar12 = *(long *)(lVar12 + 0xf8);
  if (((lVar12 == 0) || (*(uint *)(lVar12 + 0x18) != uVar16)) ||
     ((*(uint *)(lVar12 + 0x1c) != uVar15 || (*(int *)(lVar12 + 0x4c) != (int)param_5)))) {
    FUN_10ad55a00(param_2,param_3,param_5,0);
    FUN_10a23267c(&uStack_d8,param_2);
    puVar10 = &uStack_d8;
    func_0x00010a099dfc(*param_1 + 0xf8);
    if (plStack_d0 != (long *)0x0) {
      plVar8 = plStack_d0 + 1;
      do {
        lVar12 = *plVar8;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
      }
    }
  }
  plVar8 = alStack_c8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a22afb0(alStack_c8);
  __Unwind_Resume(plVar8);
  plVar13 = plVar8;
  func_0x000104bd46a0();
  pcStack_e8 = FUN_10a22649c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100 = param_5;
  plStack_f8 = plVar8;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_10a219de8(alStack_188,*plVar13);
  puVar11 = puVar10;
  FUN_10ad3fb54(*plVar13 + 0x178);
  plVar8 = alStack_188;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_198 = FUN_10a226518;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1b0 = plVar13;
  puStack_1a8 = puVar10;
  ppuStack_1a0 = &puStack_f0;
  FUN_10a219de8(alStack_238,*plVar8);
  FUN_10ad3fc50(*plVar8 + 0x178);
  plVar8 = alStack_238;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar12 = *(long *)(*plVar8 + 0x208);
  plVar13 = *(long **)(lVar12 + 0xb8);
  if (plVar13 != (long *)0x0) {
    puVar10 = *(undefined8 **)(lVar12 + 0xb0);
    if (puVar10 == (undefined8 *)0x0) {
      uVar18 = puVar11[1];
      uVar17 = *puVar11;
      if (puVar11[1] != 0) {
        plVar9 = (long *)(puVar11[1] + 0x10);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar14 = *(long *)(*plVar13 + 0x80);
      lVar12 = *(long *)(lVar14 + 0x48);
      *(undefined8 *)(lVar14 + 0x48) = uVar18;
      *(undefined8 *)(lVar14 + 0x40) = uVar17;
      if (lVar12 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    else {
      plVar13 = (long *)puVar10[2];
      plStack_2c0 = (long *)0x0;
      plStack_2b8 = (long *)0x0;
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0xc8;
        __Znwm();
        plVar13[2] = 0;
        plVar13[1] = 0x200000006;
        *(undefined2 *)(plVar13 + 3) = 4;
        plVar13[5] = 0;
        plVar13[4] = 0;
        plVar13[7] = 0;
        plVar13[6] = 0;
        plVar13[9] = 0;
        plVar13[8] = 0;
        plVar13[0xb] = 0;
        plVar13[10] = 0;
        plVar13[0xd] = 0;
        plVar13[0xc] = 0;
        plVar13[0xf] = 0;
        plVar13[0xe] = 0;
        plVar13[0x10] = 0;
        plVar13[0x11] = (long)(plVar13 + 3);
        plVar13[0x12] = 0;
        *(undefined2 *)(plVar13 + 0x13) = 0;
        *plVar13 = (long)&PTR_DAT_110bb4c30;
        plStack_2c8 = plVar13 + 0x14;
        *plStack_2c8 = lVar12;
        plVar13[0x15] = (long)puVar11;
        *(undefined1 *)(plVar13 + 0x17) = 1;
        plVar13[0x18] = 0;
        pcStack_2b0 = (code *)0x10a2399c4;
        plStack_2c0 = plVar13;
        plStack_2b8 = plVar13;
      }
      else {
        pcStack_2a8 = (code *)0x0;
        (**(code **)(*plVar13 + 0x28))(plVar13,0,&pcStack_2a8);
        if (pcStack_2a8 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_2a8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2268c4);
          (*pcVar5)();
        }
        plVar9 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar9 + 3) = 4;
        plVar9[2] = 0;
        plVar9[1] = 0x200000006;
        plVar9[5] = 0;
        plVar9[4] = 0;
        plVar9[7] = 0;
        plVar9[6] = 0;
        plVar9[9] = 0;
        plVar9[8] = 0;
        plVar9[0xb] = 0;
        plVar9[10] = 0;
        plVar9[0xd] = 0;
        plVar9[0xc] = 0;
        plVar9[0xf] = 0;
        plVar9[0xe] = 0;
        plVar9[0x10] = 0;
        plVar9[0x11] = (long)(plVar9 + 3);
        plVar9[0x12] = 0;
        *(undefined2 *)(plVar9 + 0x13) = 0;
        *plVar9 = (long)&PTR_DAT_110bb4bf8;
        plVar9[0x14] = lVar12;
        plVar9[0x15] = (long)puVar11;
        *(undefined1 *)(plVar9 + 0x17) = 1;
        plVar9[0x18] = 0;
        plVar9[0x19] = (long)plVar13;
        if (plStack_2c0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_2c0 + 1);
          do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar7 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar7 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plStack_2c0 + 8))();
            }
          }
        }
        plStack_2c0 = plVar9;
        if (plStack_2b8 != (long *)0x0) {
          func_0x0001092b4274(&plStack_2b8);
        }
        pcStack_2b0 = FUN_10a239994;
        plStack_2c8 = plVar9 + 0x14;
        plStack_2b8 = plVar9;
        __ZNSt13exception_ptrD1Ev(&pcStack_2a8);
      }
      plVar13 = plStack_2c8;
      if (plStack_2c8[4] != 0) {
        func_0x0001092b4274();
      }
      plVar13[4] = (long)plStack_2b8;
      plStack_2b8 = (long *)0x0;
      pcStack_2a8 = pcStack_2b0;
      plStack_2a0 = plStack_2c8;
      puStack_298 = puVar10;
      (**(code **)*puVar10)(puVar10,&pcStack_2a8);
      plStack_2d0 = plStack_2c0;
      plStack_2c0 = (long *)0x0;
      if (plStack_2b8 != (long *)0x0) {
        func_0x0001092b4274(&plStack_2b8);
        if (plStack_2c0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_2c0 + 1);
          do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar7 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar7 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plStack_2c0 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_2d0);
      FUN_10a09b344(&plStack_2d0);
      if (plStack_2d0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_2d0 + 1);
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar7 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar7 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_2d0 + 8))();
          }
        }
      }
    }
  }
  func_0x00010ad3fc88(*plVar8 + 0x178,puVar11);
  return;
}



/* Entry: 10a22649c; end: 10a226517;  */

void FUN_10a22649c(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  long alStack_158 [16];
  long lStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  puVar7 = param_2;
  FUN_10ad3fb54(*param_1 + 0x178);
  plVar5 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_b8 = FUN_10a226518;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_d0 = param_1;
  puStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a219de8(alStack_158,*plVar5);
  FUN_10ad3fc50(*plVar5 + 0x178);
  plVar5 = alStack_158;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar12 = *(long *)(*plVar5 + 0x208);
  plVar8 = *(long **)(lVar12 + 0xb8);
  if (plVar8 != (long *)0x0) {
    puVar11 = *(undefined8 **)(lVar12 + 0xb0);
    if (puVar11 == (undefined8 *)0x0) {
      uVar14 = puVar7[1];
      uVar13 = *puVar7;
      if (puVar7[1] != 0) {
        plVar6 = (long *)(puVar7[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar9 = *(long *)(*plVar8 + 0x80);
      lVar12 = *(long *)(lVar9 + 0x48);
      *(undefined8 *)(lVar9 + 0x48) = uVar14;
      *(undefined8 *)(lVar9 + 0x40) = uVar13;
      if (lVar12 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    else {
      plVar8 = (long *)puVar11[2];
      plStack_1e0 = (long *)0x0;
      plStack_1d8 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0xc8;
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
        *(undefined2 *)(plVar8 + 0x13) = 0;
        *plVar8 = (long)&PTR_DAT_110bb4c30;
        plStack_1e8 = plVar8 + 0x14;
        *plStack_1e8 = lVar12;
        plVar8[0x15] = (long)puVar7;
        *(undefined1 *)(plVar8 + 0x17) = 1;
        plVar8[0x18] = 0;
        pcStack_1d0 = (code *)0x10a2399c4;
        plStack_1e0 = plVar8;
        plStack_1d8 = plVar8;
      }
      else {
        pcStack_1c8 = (code *)0x0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_1c8);
        if (pcStack_1c8 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_1c8);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2268c4);
          (*pcVar4)();
        }
        plVar6 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar6 + 3) = 4;
        plVar6[2] = 0;
        plVar6[1] = 0x200000006;
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
        *plVar6 = (long)&PTR_DAT_110bb4bf8;
        plVar6[0x14] = lVar12;
        plVar6[0x15] = (long)puVar7;
        *(undefined1 *)(plVar6 + 0x17) = 1;
        plVar6[0x18] = 0;
        plVar6[0x19] = (long)plVar8;
        if (plStack_1e0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_1e0 + 1);
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
              (**(code **)(*plStack_1e0 + 8))();
            }
          }
        }
        plStack_1e0 = plVar6;
        if (plStack_1d8 != (long *)0x0) {
          func_0x0001092b4274(&plStack_1d8);
        }
        pcStack_1d0 = FUN_10a239994;
        plStack_1e8 = plVar6 + 0x14;
        plStack_1d8 = plVar6;
        __ZNSt13exception_ptrD1Ev(&pcStack_1c8);
      }
      plVar8 = plStack_1e8;
      if (plStack_1e8[4] != 0) {
        func_0x0001092b4274();
      }
      plVar8[4] = (long)plStack_1d8;
      plStack_1d8 = (long *)0x0;
      pcStack_1c8 = pcStack_1d0;
      plStack_1c0 = plStack_1e8;
      puStack_1b8 = puVar11;
      (**(code **)*puVar11)(puVar11,&pcStack_1c8);
      plStack_1f0 = plStack_1e0;
      plStack_1e0 = (long *)0x0;
      if (plStack_1d8 != (long *)0x0) {
        func_0x0001092b4274(&plStack_1d8);
        if (plStack_1e0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_1e0 + 1);
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
              (**(code **)(*plStack_1e0 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_1f0);
      FUN_10a09b344(&plStack_1f0);
      if (plStack_1f0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1f0 + 1);
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
            (**(code **)(*plStack_1f0 + 8))();
          }
        }
      }
    }
  }
  func_0x00010ad3fc88(*plVar5 + 0x178,puVar7);
  return;
}



/* Entry: 10a226518; end: 10a226593;  */

void FUN_10a226518(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  code *pcStack_120;
  code *pcStack_118;
  long *plStack_110;
  undefined8 *puStack_108;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  FUN_10ad3fc50(*param_1 + 0x178);
  plVar5 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar11 = *(long *)(*plVar5 + 0x208);
  plVar7 = *(long **)(lVar11 + 0xb8);
  if (plVar7 != (long *)0x0) {
    puVar10 = *(undefined8 **)(lVar11 + 0xb0);
    if (puVar10 == (undefined8 *)0x0) {
      uVar13 = param_2[1];
      uVar12 = *param_2;
      if (param_2[1] != 0) {
        plVar6 = (long *)(param_2[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar8 = *(long *)(*plVar7 + 0x80);
      lVar11 = *(long *)(lVar8 + 0x48);
      *(undefined8 *)(lVar8 + 0x48) = uVar13;
      *(undefined8 *)(lVar8 + 0x40) = uVar12;
      if (lVar11 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    else {
      plVar7 = (long *)puVar10[2];
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0xc8;
        __Znwm();
        plVar7[2] = 0;
        plVar7[1] = 0x200000006;
        *(undefined2 *)(plVar7 + 3) = 4;
        plVar7[5] = 0;
        plVar7[4] = 0;
        plVar7[7] = 0;
        plVar7[6] = 0;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[0xb] = 0;
        plVar7[10] = 0;
        plVar7[0xd] = 0;
        plVar7[0xc] = 0;
        plVar7[0xf] = 0;
        plVar7[0xe] = 0;
        plVar7[0x10] = 0;
        plVar7[0x11] = (long)(plVar7 + 3);
        plVar7[0x12] = 0;
        *(undefined2 *)(plVar7 + 0x13) = 0;
        *plVar7 = (long)&PTR_DAT_110bb4c30;
        plStack_138 = plVar7 + 0x14;
        *plStack_138 = lVar11;
        plVar7[0x15] = (long)param_2;
        *(undefined1 *)(plVar7 + 0x17) = 1;
        plVar7[0x18] = 0;
        pcStack_120 = (code *)0x10a2399c4;
        plStack_130 = plVar7;
        plStack_128 = plVar7;
      }
      else {
        pcStack_118 = (code *)0x0;
        (**(code **)(*plVar7 + 0x28))(plVar7,0,&pcStack_118);
        if (pcStack_118 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_118);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2268c4);
          (*pcVar4)();
        }
        plVar6 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar6 + 3) = 4;
        plVar6[2] = 0;
        plVar6[1] = 0x200000006;
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
        *plVar6 = (long)&PTR_DAT_110bb4bf8;
        plVar6[0x14] = lVar11;
        plVar6[0x15] = (long)param_2;
        *(undefined1 *)(plVar6 + 0x17) = 1;
        plVar6[0x18] = 0;
        plVar6[0x19] = (long)plVar7;
        if (plStack_130 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_130 + 1);
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
              (**(code **)(*plStack_130 + 8))();
            }
          }
        }
        plStack_130 = plVar6;
        if (plStack_128 != (long *)0x0) {
          func_0x0001092b4274(&plStack_128);
        }
        pcStack_120 = FUN_10a239994;
        plStack_138 = plVar6 + 0x14;
        plStack_128 = plVar6;
        __ZNSt13exception_ptrD1Ev(&pcStack_118);
      }
      plVar7 = plStack_138;
      if (plStack_138[4] != 0) {
        func_0x0001092b4274();
      }
      plVar7[4] = (long)plStack_128;
      plStack_128 = (long *)0x0;
      pcStack_118 = pcStack_120;
      plStack_110 = plStack_138;
      puStack_108 = puVar10;
      (**(code **)*puVar10)(puVar10,&pcStack_118);
      plStack_140 = plStack_130;
      plStack_130 = (long *)0x0;
      if (plStack_128 != (long *)0x0) {
        func_0x0001092b4274(&plStack_128);
        if (plStack_130 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_130 + 1);
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
              (**(code **)(*plStack_130 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_140);
      FUN_10a09b344(&plStack_140);
      if (plStack_140 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_140 + 1);
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
            (**(code **)(*plStack_140 + 8))();
          }
        }
      }
    }
  }
  func_0x00010ad3fc88(*plVar5 + 0x178,param_2);
  return;
}



/* Entry: 10a226594; end: 10a226937;  */

void FUN_10a226594(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  code *pcStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  lVar10 = *(long *)(*param_1 + 0x208);
  plVar6 = *(long **)(lVar10 + 0xb8);
  if (plVar6 != (long *)0x0) {
    puVar9 = *(undefined8 **)(lVar10 + 0xb0);
    if (puVar9 == (undefined8 *)0x0) {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = *(long *)(*plVar6 + 0x80);
      lVar10 = *(long *)(lVar7 + 0x48);
      *(undefined8 *)(lVar7 + 0x48) = uVar12;
      *(undefined8 *)(lVar7 + 0x40) = uVar11;
      if (lVar10 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    else {
      plVar6 = (long *)puVar9[2];
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0xc8;
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
        *plVar6 = (long)&PTR_DAT_110bb4c30;
        plStack_88 = plVar6 + 0x14;
        *plStack_88 = lVar10;
        plVar6[0x15] = (long)param_2;
        *(undefined1 *)(plVar6 + 0x17) = 1;
        plVar6[0x18] = 0;
        pcStack_70 = (code *)0x10a2399c4;
        plStack_80 = plVar6;
        plStack_78 = plVar6;
      }
      else {
        pcStack_68 = (code *)0x0;
        (**(code **)(*plVar6 + 0x28))(plVar6,0,&pcStack_68);
        if (pcStack_68 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_68);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2268c4);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_DAT_110bb4bf8;
        plVar5[0x14] = lVar10;
        plVar5[0x15] = (long)param_2;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar6;
        if (plStack_80 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_80 + 1);
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
              (**(code **)(*plStack_80 + 8))();
            }
          }
        }
        plStack_80 = plVar5;
        if (plStack_78 != (long *)0x0) {
          func_0x0001092b4274(&plStack_78);
        }
        pcStack_70 = FUN_10a239994;
        plStack_88 = plVar5 + 0x14;
        plStack_78 = plVar5;
        __ZNSt13exception_ptrD1Ev(&pcStack_68);
      }
      plVar6 = plStack_88;
      if (plStack_88[4] != 0) {
        func_0x0001092b4274();
      }
      plVar6[4] = (long)plStack_78;
      plStack_78 = (long *)0x0;
      pcStack_68 = pcStack_70;
      plStack_60 = plStack_88;
      puStack_58 = puVar9;
      (**(code **)*puVar9)(puVar9,&pcStack_68);
      plStack_90 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plStack_78 != (long *)0x0) {
        func_0x0001092b4274(&plStack_78);
        if (plStack_80 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_80 + 1);
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
              (**(code **)(*plStack_80 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_90);
      FUN_10a09b344(&plStack_90);
      if (plStack_90 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_90 + 1);
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
            (**(code **)(*plStack_90 + 8))();
          }
        }
      }
    }
  }
  func_0x00010ad3fc88(*param_1 + 0x178,param_2);
  return;
}



/* Entry: 10a226938; end: 10a2269b3;  */

void FUN_10a226938(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lStack_110;
  code *pcStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  func_0x00010ad3fcd8(*param_1 + 0x178);
  plVar10 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010ad3fd48(*plVar10 + 0x178);
  lVar11 = *(long *)(*plVar10 + 0x208);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long **)(lVar11 + 0xb8) != (long *)0x0) {
    puVar9 = *(undefined8 **)(lVar11 + 0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      if (lVar3 != 0) {
        plVar10 = (long *)(lVar3 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar9 = *(undefined8 **)(lVar11 + 0xb0);
      }
      plVar10 = (long *)puVar9[2];
      puStack_f8 = puVar9;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x28;
        __Znwm();
        *plVar10 = lVar11;
        plVar10[1] = lVar2;
        plVar10[2] = lVar3;
        if (lVar3 != 0) {
          plVar7 = (long *)(lVar3 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = *plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar10[4] = 0x10a239c9c;
        pcStack_108 = FUN_10a239c2c;
        plStack_100 = plVar10;
        (**(code **)*puVar9)(puVar9,&pcStack_108);
      }
      else {
        lStack_110 = 0;
        (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_110);
        if (lStack_110 != 0) {
          func_0x0001092af97c(&lStack_110);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a226b90);
          (*pcVar6)();
        }
        plVar7 = (long *)0x30;
        __Znwm();
        *plVar7 = lVar11;
        plVar7[1] = lVar2;
        plVar7[2] = lVar3;
        if (lVar3 != 0) {
          plVar1 = (long *)(lVar3 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar7[4] = (long)FUN_10a239c68;
        plVar7[5] = (long)plVar10;
        pcStack_108 = (code *)0x10a239bfc;
        plStack_100 = plVar7;
        (**(code **)*puVar9)(puVar9,&pcStack_108);
        __ZNSt13exception_ptrD1Ev(&lStack_110);
      }
      lStack_110 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_110);
      if (lVar3 == 0) {
        return;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar3);
      goto LAB_10a226b64;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar3 != 0) {
      plVar10 = (long *)(lVar3 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = *(long *)(lVar11 + 0x78);
    *(long *)(lVar11 + 0x70) = lVar2;
    *(long *)(lVar11 + 0x78) = lVar3;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (lVar3 == 0) {
    return;
  }
LAB_10a226b64:
  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar3);
  return;
}



/* Entry: 10a2269b4; end: 10a226bbb;  */

void FUN_10a2269b4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  func_0x00010ad3fd48(*param_1 + 0x178);
  lVar11 = *(long *)(*param_1 + 0x208);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long **)(lVar11 + 0xb8) != (long *)0x0) {
    puVar9 = *(undefined8 **)(lVar11 + 0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      if (lVar3 != 0) {
        plVar10 = (long *)(lVar3 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar9 = *(undefined8 **)(lVar11 + 0xb0);
      }
      plVar10 = (long *)puVar9[2];
      puStack_48 = puVar9;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x28;
        __Znwm();
        *plVar10 = lVar11;
        plVar10[1] = lVar2;
        plVar10[2] = lVar3;
        if (lVar3 != 0) {
          plVar7 = (long *)(lVar3 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = *plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar10[4] = 0x10a239c9c;
        pcStack_58 = FUN_10a239c2c;
        plStack_50 = plVar10;
        (**(code **)*puVar9)(puVar9,&pcStack_58);
      }
      else {
        lStack_60 = 0;
        (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_60);
        if (lStack_60 != 0) {
          func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a226b90);
          (*pcVar6)();
        }
        plVar7 = (long *)0x30;
        __Znwm();
        *plVar7 = lVar11;
        plVar7[1] = lVar2;
        plVar7[2] = lVar3;
        if (lVar3 != 0) {
          plVar1 = (long *)(lVar3 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar7[4] = (long)FUN_10a239c68;
        plVar7[5] = (long)plVar10;
        pcStack_58 = (code *)0x10a239bfc;
        plStack_50 = plVar7;
        (**(code **)*puVar9)(puVar9,&pcStack_58);
        __ZNSt13exception_ptrD1Ev(&lStack_60);
      }
      lStack_60 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_60);
      if (lVar3 == 0) {
        return;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar3);
      goto LAB_10a226b64;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar3 != 0) {
      plVar10 = (long *)(lVar3 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = *(long *)(lVar11 + 0x78);
    *(long *)(lVar11 + 0x70) = lVar2;
    *(long *)(lVar11 + 0x78) = lVar3;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (lVar3 == 0) {
    return;
  }
LAB_10a226b64:
  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar3);
  return;
}



/* Entry: 10a226bbc; end: 10a226c1b;  */

void FUN_10a226bbc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0x988);
  *(undefined8 *)(lVar5 + 0x988) = uVar7;
  *(undefined8 *)(lVar5 + 0x980) = uVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(*param_1 + 0x180);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0x398);
  *(undefined8 *)(lVar5 + 0x398) = uVar7;
  *(undefined8 *)(lVar5 + 0x390) = uVar6;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a226c1c; end: 10a226c97;  */

void FUN_10a226c1c(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 *puStack_1a8;
  long alStack_158 [16];
  long lStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  puVar6 = param_2;
  func_0x00010ad3fd10(*param_1 + 0x178);
  plVar7 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_b8 = FUN_10a226c98;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_d0 = param_1;
  puStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10a219de8(alStack_158,*plVar7);
  func_0x00010ad3fdb8(*plVar7 + 0x178);
  plVar7 = alStack_158;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar11 = *(long *)(*plVar7 + 0x208);
  plVar7 = *(long **)(lVar11 + 0xb8);
  if (plVar7 != (long *)0x0) {
    puVar10 = *(undefined8 **)(lVar11 + 0xb0);
    if (puVar10 == (undefined8 *)0x0) {
      uVar13 = puVar6[1];
      uVar12 = *puVar6;
      if (puVar6[1] != 0) {
        plVar5 = (long *)(puVar6[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar8 = *(long *)(*plVar7 + 0x80);
      lVar11 = *(long *)(lVar8 + 0x38);
      *(undefined8 *)(lVar8 + 0x38) = uVar13;
      *(undefined8 *)(lVar8 + 0x30) = uVar12;
      if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
        return;
      }
    }
    else {
      plVar7 = (long *)puVar10[2];
      plStack_1d0 = (long *)0x0;
      plStack_1c8 = (long *)0x0;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0xc8;
        __Znwm();
        plVar7[2] = 0;
        plVar7[1] = 0x200000006;
        *(undefined2 *)(plVar7 + 3) = 4;
        plVar7[5] = 0;
        plVar7[4] = 0;
        plVar7[7] = 0;
        plVar7[6] = 0;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[0xb] = 0;
        plVar7[10] = 0;
        plVar7[0xd] = 0;
        plVar7[0xc] = 0;
        plVar7[0xf] = 0;
        plVar7[0xe] = 0;
        plVar7[0x10] = 0;
        plVar7[0x11] = (long)(plVar7 + 3);
        plVar7[0x12] = 0;
        *(undefined2 *)(plVar7 + 0x13) = 0;
        *plVar7 = (long)&PTR_DAT_110bb4ca0;
        plStack_1d8 = plVar7 + 0x14;
        *plStack_1d8 = lVar11;
        plVar7[0x15] = (long)puVar6;
        *(undefined1 *)(plVar7 + 0x17) = 1;
        plVar7[0x18] = 0;
        lStack_1c0 = 0x10a239d00;
        plStack_1d0 = plVar7;
        plStack_1c8 = plVar7;
      }
      else {
        lStack_1b8 = 0;
        (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_1b8);
        if (lStack_1b8 != 0) {
          func_0x0001092af97c(&lStack_1b8);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a227038);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_DAT_110bb4c68;
        plVar5[0x14] = lVar11;
        plVar5[0x15] = (long)puVar6;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar7;
        if (plStack_1d0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_1d0 + 1);
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
              (**(code **)(*plStack_1d0 + 8))();
            }
          }
        }
        plStack_1d0 = plVar5;
        if (plStack_1c8 != (long *)0x0) {
          func_0x0001092b4274(&plStack_1c8);
        }
        lStack_1c0 = 0x10a239cd0;
        plStack_1d8 = plVar5 + 0x14;
        plStack_1c8 = plVar5;
        __ZNSt13exception_ptrD1Ev(&lStack_1b8);
      }
      plVar7 = plStack_1d8;
      if (plStack_1d8[4] != 0) {
        func_0x0001092b4274();
      }
      plVar7[4] = (long)plStack_1c8;
      plStack_1c8 = (long *)0x0;
      lStack_1b8 = lStack_1c0;
      plStack_1b0 = plStack_1d8;
      puStack_1a8 = puVar10;
      (**(code **)*puVar10)(puVar10,&lStack_1b8);
      plStack_1e0 = plStack_1d0;
      plStack_1d0 = (long *)0x0;
      if (plStack_1c8 != (long *)0x0) {
        func_0x0001092b4274(&plStack_1c8);
        if (plStack_1d0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_1d0 + 1);
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
              (**(code **)(*plStack_1d0 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_1e0);
      FUN_10a09b344(&plStack_1e0);
      if (plStack_1e0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1e0 + 1);
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
            (**(code **)(*plStack_1e0 + 8))();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a226c98; end: 10a226d13;  */

void FUN_10a226c98(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  func_0x00010ad3fdb8(*param_1 + 0x178);
  plVar6 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar10 = *(long *)(*plVar6 + 0x208);
  plVar6 = *(long **)(lVar10 + 0xb8);
  if (plVar6 != (long *)0x0) {
    puVar9 = *(undefined8 **)(lVar10 + 0xb0);
    if (puVar9 == (undefined8 *)0x0) {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = *(long *)(*plVar6 + 0x80);
      lVar10 = *(long *)(lVar7 + 0x38);
      *(undefined8 *)(lVar7 + 0x38) = uVar12;
      *(undefined8 *)(lVar7 + 0x30) = uVar11;
      if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
        return;
      }
    }
    else {
      plVar6 = (long *)puVar9[2];
      plStack_120 = (long *)0x0;
      plStack_118 = (long *)0x0;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0xc8;
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
        *plVar6 = (long)&PTR_DAT_110bb4ca0;
        plStack_128 = plVar6 + 0x14;
        *plStack_128 = lVar10;
        plVar6[0x15] = (long)param_2;
        *(undefined1 *)(plVar6 + 0x17) = 1;
        plVar6[0x18] = 0;
        lStack_110 = 0x10a239d00;
        plStack_120 = plVar6;
        plStack_118 = plVar6;
      }
      else {
        lStack_108 = 0;
        (**(code **)(*plVar6 + 0x28))(plVar6,0,&lStack_108);
        if (lStack_108 != 0) {
          func_0x0001092af97c(&lStack_108);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a227038);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_DAT_110bb4c68;
        plVar5[0x14] = lVar10;
        plVar5[0x15] = (long)param_2;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar6;
        if (plStack_120 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_120 + 1);
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
              (**(code **)(*plStack_120 + 8))();
            }
          }
        }
        plStack_120 = plVar5;
        if (plStack_118 != (long *)0x0) {
          func_0x0001092b4274(&plStack_118);
        }
        lStack_110 = 0x10a239cd0;
        plStack_128 = plVar5 + 0x14;
        plStack_118 = plVar5;
        __ZNSt13exception_ptrD1Ev(&lStack_108);
      }
      plVar6 = plStack_128;
      if (plStack_128[4] != 0) {
        func_0x0001092b4274();
      }
      plVar6[4] = (long)plStack_118;
      plStack_118 = (long *)0x0;
      lStack_108 = lStack_110;
      plStack_100 = plStack_128;
      puStack_f8 = puVar9;
      (**(code **)*puVar9)(puVar9,&lStack_108);
      plStack_130 = plStack_120;
      plStack_120 = (long *)0x0;
      if (plStack_118 != (long *)0x0) {
        func_0x0001092b4274(&plStack_118);
        if (plStack_120 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_120 + 1);
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
              (**(code **)(*plStack_120 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_130);
      FUN_10a09b344(&plStack_130);
      if (plStack_130 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_130 + 1);
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
            (**(code **)(*plStack_130 + 8))();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a226d14; end: 10a2270ab;  */

void FUN_10a226d14(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  lVar10 = *(long *)(*param_1 + 0x208);
  plVar6 = *(long **)(lVar10 + 0xb8);
  if (plVar6 != (long *)0x0) {
    puVar9 = *(undefined8 **)(lVar10 + 0xb0);
    if (puVar9 == (undefined8 *)0x0) {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = *(long *)(*plVar6 + 0x80);
      lVar10 = *(long *)(lVar7 + 0x38);
      *(undefined8 *)(lVar7 + 0x38) = uVar12;
      *(undefined8 *)(lVar7 + 0x30) = uVar11;
      if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
        return;
      }
    }
    else {
      plVar6 = (long *)puVar9[2];
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0xc8;
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
        *plVar6 = (long)&PTR_DAT_110bb4ca0;
        plStack_78 = plVar6 + 0x14;
        *plStack_78 = lVar10;
        plVar6[0x15] = (long)param_2;
        *(undefined1 *)(plVar6 + 0x17) = 1;
        plVar6[0x18] = 0;
        lStack_60 = 0x10a239d00;
        plStack_70 = plVar6;
        plStack_68 = plVar6;
      }
      else {
        lStack_58 = 0;
        (**(code **)(*plVar6 + 0x28))(plVar6,0,&lStack_58);
        if (lStack_58 != 0) {
          func_0x0001092af97c(&lStack_58);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a227038);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_DAT_110bb4c68;
        plVar5[0x14] = lVar10;
        plVar5[0x15] = (long)param_2;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar6;
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
        plStack_70 = plVar5;
        if (plStack_68 != (long *)0x0) {
          func_0x0001092b4274(&plStack_68);
        }
        lStack_60 = 0x10a239cd0;
        plStack_78 = plVar5 + 0x14;
        plStack_68 = plVar5;
        __ZNSt13exception_ptrD1Ev(&lStack_58);
      }
      plVar6 = plStack_78;
      if (plStack_78[4] != 0) {
        func_0x0001092b4274();
      }
      plVar6[4] = (long)plStack_68;
      plStack_68 = (long *)0x0;
      lStack_58 = lStack_60;
      plStack_50 = plStack_78;
      puStack_48 = puVar9;
      (**(code **)*puVar9)(puVar9,&lStack_58);
      plStack_80 = plStack_70;
      plStack_70 = (long *)0x0;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_80);
      FUN_10a09b344(&plStack_80);
      if (plStack_80 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_80 + 1);
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
            (**(code **)(*plStack_80 + 8))();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a2270ac; end: 10a227443;  */

void FUN_10a2270ac(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  lVar10 = *(long *)(*param_1 + 0x208);
  plVar6 = *(long **)(lVar10 + 0xb8);
  if (plVar6 != (long *)0x0) {
    puVar9 = *(undefined8 **)(lVar10 + 0xb0);
    if (puVar9 == (undefined8 *)0x0) {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = *(long *)(*plVar6 + 0x80);
      lVar10 = *(long *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = uVar12;
      *(undefined8 *)(lVar7 + 0x20) = uVar11;
      if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
        return;
      }
    }
    else {
      plVar6 = (long *)puVar9[2];
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0xc8;
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
        *plVar6 = (long)&PTR_DAT_110bb4d10;
        plStack_78 = plVar6 + 0x14;
        *plStack_78 = lVar10;
        plVar6[0x15] = (long)param_2;
        *(undefined1 *)(plVar6 + 0x17) = 1;
        plVar6[0x18] = 0;
        lStack_60 = 0x10a239f68;
        plStack_70 = plVar6;
        plStack_68 = plVar6;
      }
      else {
        lStack_58 = 0;
        (**(code **)(*plVar6 + 0x28))(plVar6,0,&lStack_58);
        if (lStack_58 != 0) {
          func_0x0001092af97c(&lStack_58);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2273d0);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_DAT_110bb4cd8;
        plVar5[0x14] = lVar10;
        plVar5[0x15] = (long)param_2;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar6;
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
        plStack_70 = plVar5;
        if (plStack_68 != (long *)0x0) {
          func_0x0001092b4274(&plStack_68);
        }
        lStack_60 = 0x10a239f38;
        plStack_78 = plVar5 + 0x14;
        plStack_68 = plVar5;
        __ZNSt13exception_ptrD1Ev(&lStack_58);
      }
      plVar6 = plStack_78;
      if (plStack_78[4] != 0) {
        func_0x0001092b4274();
      }
      plVar6[4] = (long)plStack_68;
      plStack_68 = (long *)0x0;
      lStack_58 = lStack_60;
      plStack_50 = plStack_78;
      puStack_48 = puVar9;
      (**(code **)*puVar9)(puVar9,&lStack_58);
      plStack_80 = plStack_70;
      plStack_70 = (long *)0x0;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_80);
      FUN_10a09b344(&plStack_80);
      if (plStack_80 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_80 + 1);
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
            (**(code **)(*plStack_80 + 8))();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a227444; end: 10a2274bf;  */

void FUN_10a227444(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long alStack_a8 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_a8,*param_1);
  func_0x00010ad3fdf0(*param_1 + 0x178);
  plVar4 = alStack_a8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar6 = *plVar4;
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(lVar6 + 0x888);
  *(undefined8 *)(lVar6 + 0x888) = uVar8;
  *(undefined8 *)(lVar6 + 0x880) = uVar7;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010a227524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*plVar4 + 0x8a0) + 0x18))(*(long **)(*plVar4 + 0x8a0),param_2);
  return;
}



/* Entry: 10a2274c0; end: 10a227713;  */

void FUN_10a2274c0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0x888);
  *(undefined8 *)(lVar5 + 0x888) = uVar7;
  *(undefined8 *)(lVar5 + 0x880) = uVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010a227524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x8a0) + 0x18))(*(long **)(*param_1 + 0x8a0),param_2);
  return;
}



/* Entry: 10a227714; end: 10a2279c3;  */

void FUN_10a227714(long *param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  code **ppcVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *pcVar11;
  code *pcStack_108;
  code *pcStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  long alStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a219de8(alStack_d8,*param_1);
  ppcVar7 = param_2;
  func_0x00010ad3fe28(*param_1 + 0x178);
  lVar8 = *param_1;
  pcVar11 = param_2[1];
  pcVar4 = *param_2;
  if (param_2[1] != (code *)0x0) {
    pcVar1 = param_2[1] + 0x10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(long *)pcVar1 = *(long *)pcVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(lVar8 + 0x878);
  *(code **)(lVar8 + 0x878) = pcVar11;
  *(code **)(lVar8 + 0x870) = pcVar4;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar8 = *(long *)(*param_1 + 0x208);
  pcVar4 = *param_2;
  pcVar11 = param_2[1];
  if (pcVar11 != (code *)0x0) {
    pcVar1 = pcVar11 + 0x10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(long *)pcVar1 = *(long *)pcVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_108 = pcVar4;
  pcStack_100 = pcVar11;
  if (*(long *)(lVar8 + 0xb8) == 0) {
LAB_10a22789c:
    if (pcVar11 == (code *)0x0) goto LAB_10a22791c;
  }
  else {
    puVar9 = *(undefined8 **)(lVar8 + 0xb0);
    if (puVar9 == (undefined8 *)0x0) {
      ppcVar7 = &pcStack_108;
      FUN_10a4d8a24(**(undefined8 **)(*(long *)(*param_1 + 0x1f8) + 0x10));
      goto LAB_10a22789c;
    }
    if (pcVar11 != (code *)0x0) {
      pcVar1 = pcVar11 + 0x10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar3) {
          *(long *)pcVar1 = *(long *)pcVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar9 = *(undefined8 **)(lVar8 + 0xb0);
    }
    plVar10 = (long *)puVar9[2];
    puStack_e0 = puVar9;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x30;
      __Znwm();
      *plVar10 = lVar8;
      plVar10[1] = (long)param_1;
      plVar10[2] = (long)pcVar4;
      plVar10[3] = (long)pcVar11;
      if (pcVar11 != (code *)0x0) {
        pcVar4 = pcVar11 + 0x10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(long *)pcVar4 = *(long *)pcVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10[5] = 0x10a23a258;
      pcStack_f0 = FUN_10a23a1d0;
      ppcVar7 = &pcStack_f0;
      plStack_e8 = plVar10;
      (**(code **)*puVar9)(puVar9);
    }
    else {
      lStack_f8 = 0;
      (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_f8);
      if (lStack_f8 != 0) {
        func_0x0001092af97c(&lStack_f8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a227964);
        (*pcVar4)();
      }
      plVar6 = (long *)0x38;
      __Znwm();
      *plVar6 = lVar8;
      plVar6[1] = (long)param_1;
      plVar6[2] = (long)pcVar4;
      plVar6[3] = (long)pcVar11;
      if (pcVar11 != (code *)0x0) {
        pcVar4 = pcVar11 + 0x10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(long *)pcVar4 = *(long *)pcVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar6[5] = (long)FUN_10a23a224;
      plVar6[6] = (long)plVar10;
      pcStack_f0 = (code *)0x10a23a1a0;
      ppcVar7 = &pcStack_f0;
      plStack_e8 = plVar6;
      (**(code **)*puVar9)(puVar9);
      __ZNSt13exception_ptrD1Ev(&lStack_f8);
    }
    lStack_f8 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_f8);
    if (pcVar11 == (code *)0x0) goto LAB_10a22791c;
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
LAB_10a22791c:
  plVar10 = alStack_d8;
  FUN_10a22afb0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (pcVar11 != (code *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
  }
  FUN_10a22afb0(alStack_d8);
  __Unwind_Resume(plVar10);
  func_0x000104bd46a0();
  lVar8 = *plVar10;
  pcVar11 = ppcVar7[1];
  pcVar4 = *ppcVar7;
  if (ppcVar7[1] != (code *)0x0) {
    pcVar1 = ppcVar7[1] + 0x10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(long *)pcVar1 = *(long *)pcVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(lVar8 + 0x828);
  *(code **)(lVar8 + 0x828) = pcVar11;
  *(code **)(lVar8 + 0x820) = pcVar4;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar8 = *(long *)(*plVar10 + 0x180);
  pcVar11 = ppcVar7[1];
  pcVar4 = *ppcVar7;
  if (ppcVar7[1] != (code *)0x0) {
    pcVar1 = ppcVar7[1] + 0x10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(long *)pcVar1 = *(long *)pcVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(lVar8 + 1000);
  *(code **)(lVar8 + 1000) = pcVar11;
  *(code **)(lVar8 + 0x3e0) = pcVar4;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a2279c4; end: 10a227a23;  */

void FUN_10a2279c4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0x828);
  *(undefined8 *)(lVar5 + 0x828) = uVar7;
  *(undefined8 *)(lVar5 + 0x820) = uVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(*param_1 + 0x180);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 1000);
  *(undefined8 *)(lVar5 + 1000) = uVar7;
  *(undefined8 *)(lVar5 + 0x3e0) = uVar6;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a227a24; end: 10a227c23;  */

void FUN_10a227a24(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  lVar10 = *(long *)(*param_1 + 0x208);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar9 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)(lVar10 + 0xb8) == 0) {
LAB_10a227b34:
    if (lVar3 == 0) goto LAB_10a227bb4;
  }
  else {
    puVar8 = *(undefined8 **)(lVar10 + 0xb0);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_10a23a28c(lVar2,lVar3);
      goto LAB_10a227b34;
    }
    if (lVar3 != 0) {
      plVar9 = (long *)(lVar3 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar8 = *(undefined8 **)(lVar10 + 0xb0);
    }
    plVar9 = (long *)puVar8[2];
    puStack_58 = puVar8;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x28;
      __Znwm();
      *plVar9 = lVar10;
      plVar9[1] = lVar2;
      plVar9[2] = lVar3;
      if (lVar3 != 0) {
        plVar7 = (long *)(lVar3 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar9[4] = 0x10a23a3a4;
      pcStack_68 = FUN_10a23a328;
      plStack_60 = plVar9;
      (**(code **)*puVar8)(puVar8,&pcStack_68);
    }
    else {
      lStack_70 = 0;
      (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_70);
      if (lStack_70 != 0) {
        func_0x0001092af97c(&lStack_70);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a227bec);
        (*pcVar6)();
      }
      plVar7 = (long *)0x30;
      __Znwm();
      *plVar7 = lVar10;
      plVar7[1] = lVar2;
      plVar7[2] = lVar3;
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar7[4] = (long)FUN_10a23a370;
      plVar7[5] = (long)plVar9;
      pcStack_68 = FUN_10a23a2f8;
      plStack_60 = plVar7;
      (**(code **)*puVar8)(puVar8,&pcStack_68);
      __ZNSt13exception_ptrD1Ev(&lStack_70);
    }
    lStack_70 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_70);
    if (lVar3 == 0) goto LAB_10a227bb4;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar3);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar3);
LAB_10a227bb4:
  func_0x00010ad3fe98(*param_1 + 0x178,param_2);
  return;
}



/* Entry: 10a227c24; end: 10a227ed7;  */

void FUN_10a227c24(ulong *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  FUN_10a08eebc(&uStack_50);
  plVar5 = plStack_48;
  plStack_58 = plStack_48;
  plStack_60 = (long *)uStack_50;
  if (plStack_48 != (long *)0x0) {
    plVar8 = plStack_48 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a09efac(0x1138355a0,0);
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)0x60;
  __Znwm();
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bb4d48;
  plVar9 = plVar5 + 3;
  *plVar9 = (long)&PTR_FUN_110bb3fb8;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[4] = 0;
  FUN_10a0424c4(plVar5 + 7);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_70 = plVar9;
  plStack_68 = plVar5;
  plStack_60 = plVar9;
  plStack_58 = plVar5;
  FUN_10a4ecab0(&plStack_70);
  do {
    lVar7 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar7 = plStack_60[1];
  lVar1 = plStack_60[2];
  lVar10 = lVar1 - lVar7;
  if (lVar10 != 0) {
    uVar6 = (lVar10 >> 4) * 0x2e8ba2e8ba2e8ba3;
    if (0x1745d1745d1745d < uVar6) {
      FUN_10a23274c();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a227e64);
      (*pcVar4)();
    }
    FUN_10a232760();
    lVar10 = 0;
    *param_1 = uVar6;
    param_1[2] = uVar6 + param_2 * 0xb0;
    do {
      FUN_10a2327a8(uVar6 + lVar10,lVar7 + lVar10);
      lVar10 = lVar10 + 0xb0;
    } while (lVar7 + lVar10 != lVar1);
    param_1[1] = uVar6 + lVar10;
  }
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a227ed8; end: 10a227f3b;  */

/* WARNING: Removing unreachable block (ram,0x00010a3df3dc) */

void FUN_10a227ed8(long *param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  char cStack_49;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *param_1 + 0x178;
  FUN_10ad3f994(lVar4,param_3);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x108), lVar4 == 0)) {
    return;
  }
  if (param_4 != 0) {
    if ((param_4 == 1) && (lVar8 = *(long *)(lVar4 + 0x9a0), lVar8 != 0)) {
      cStack_49 = '\x12';
      uStack_50 = 0x6449;
      uStack_58 = 0x72756f736552;
      uStack_52 = 99;
      uStack_51 = 0x65;
      uStack_60 = 0x6e7265747865;
      uStack_5a = 0x6c61;
      uStack_4e = 0;
      FUN_10a0ee880(param_5,&uStack_60);
      if (*(char *)((long)param_5 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_40,*param_5,param_5[1]);
      }
      else {
        uStack_38 = param_5[1];
        uStack_40 = *param_5;
      }
      if (cStack_49 < '\0') {
        __ZdlPv(CONCAT26(uStack_5a,uStack_60));
      }
      plStack_78 = (long *)param_2[1];
      uStack_80 = *param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9dd10c(auStack_70,lVar8,&uStack_40,&uStack_80);
      if (plStack_68 != (long *)0x0) {
        plVar5 = plStack_68 + 1;
        do {
          lVar4 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      if (plStack_78 == (long *)0x0) {
        return;
      }
      plVar5 = plStack_78 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar7 = plStack_78;
      } while (cVar2 != '\0');
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x980);
      if ((param_4 != 2) || (lVar4 == 0)) {
        if (param_4 != 3) {
          return;
        }
        if (lVar4 == 0) {
          return;
        }
        puVar1 = *(undefined8 **)(lVar4 + 0x58);
        for (puVar6 = *(undefined8 **)(lVar4 + 0x50); puVar6 != puVar1; puVar6 = puVar6 + 4) {
          FUN_10a860a30(*puVar6);
        }
        return;
      }
      cStack_49 = '\x0e';
      uStack_60 = 0x6e7265747865;
      uStack_5a = 0x6c61;
      uStack_58 = 0x644972657355;
      uStack_52 = 0;
      FUN_10a0ee880(param_5,&uStack_60);
      if (*(char *)((long)param_5 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_40,*param_5,param_5[1]);
      }
      else {
        uStack_38 = param_5[1];
        uStack_40 = *param_5;
      }
      if (cStack_49 < '\0') {
        __ZdlPv(CONCAT26(uStack_5a,uStack_60));
      }
      plStack_88 = (long *)param_2[1];
      uStack_90 = *param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a8789a0(lVar4,&uStack_40,&uStack_90);
      if (plStack_88 == (long *)0x0) {
        return;
      }
      plVar5 = plStack_88 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar7 = plStack_88;
      } while (cVar2 != '\0');
    }
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    return;
  }
  uVar10 = param_2[1];
  uVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(lVar4 + 0xcb8);
  *(undefined8 *)(lVar4 + 0xcb8) = uVar10;
  *(undefined8 *)(lVar4 + 0xcb0) = uVar9;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar7 = plVar5 + 1;
  do {
    lVar4 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a227f3c; end: 10a227fcf;  */

void FUN_10a227f3c(long *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  char cStack_49;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  lVar5 = *param_1 + 0x178;
  FUN_10ad3f994();
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x108), lVar5 == 0)) {
    return;
  }
  if (param_3 != 0) {
    if ((param_3 == 1) && (lVar6 = *(long *)(lVar5 + 0x9a0), lVar6 != 0)) {
      cStack_49 = '\x12';
      uStack_50 = 0x6449;
      uStack_58 = 0x72756f736552;
      uStack_52 = 99;
      uStack_51 = 0x65;
      uStack_60 = 0x6e7265747865;
      uStack_5a = 0x6c61;
      uStack_4e = 0;
      FUN_10a0ee880(param_4,&uStack_60);
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_40,*param_4,param_4[1]);
      }
      else {
        uStack_38 = param_4[1];
        uStack_40 = *param_4;
        lStack_30 = param_4[2];
      }
      if (cStack_49 < '\0') {
        __ZdlPv(CONCAT26(uStack_5a,uStack_60));
      }
      func_0x00010aa08908(lVar6 + 8,&uStack_40);
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x980);
      if ((param_3 != 2) || (lVar5 == 0)) {
        if (param_3 != 3) {
          return;
        }
        if (lVar5 == 0) {
          return;
        }
        puVar2 = *(undefined8 **)(lVar5 + 0x58);
        for (puVar8 = *(undefined8 **)(lVar5 + 0x50); puVar8 != puVar2; puVar8 = puVar8 + 4) {
          FUN_10a860acc(*puVar8);
        }
        return;
      }
      cStack_49 = '\x0e';
      uStack_60 = 0x6e7265747865;
      uStack_5a = 0x6c61;
      uStack_58 = 0x644972657355;
      uStack_52 = 0;
      FUN_10a0ee880(param_4,&uStack_60);
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_40,*param_4,param_4[1]);
      }
      else {
        uStack_38 = param_4[1];
        uStack_40 = *param_4;
        lStack_30 = param_4[2];
      }
      if (cStack_49 < '\0') {
        __ZdlPv(CONCAT26(uStack_5a,uStack_60));
      }
      FUN_10a878d44(lVar5,&uStack_40);
    }
    if (lStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
    return;
  }
  plVar7 = *(long **)(lVar5 + 0xcb8);
  *(undefined8 *)(lVar5 + 0xcb0) = 0;
  *(undefined8 *)(lVar5 + 0xcb8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a227fd0; end: 10a227fd3;  */

undefined8 * FUN_10a227fd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb3ca0;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a227fd4; end: 10a227fe7;  */

void FUN_10a227fd4(void)

{
  func_0x00010a227f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a227fe8; end: 10a2281d3;  */

undefined1  [16] FUN_10a227fe8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      plVar10 = *(long **)(param_1 + 8);
      plStack_50 = plVar10;
      plStack_48 = plVar4;
      if (plVar10 == (long *)0x0) {
        plVar11 = (long *)0x0;
        uVar8 = 0;
      }
      else {
        plVar11 = plVar10;
        (**(code **)(*plVar10 + 0x10))();
        uVar8 = 0;
        if (param_2 != 0) {
          FUN_10a0dc020(&uStack_68,0x400000);
          puVar12 = (ulong *)(param_1 + 0x18);
          if (*puVar12 != 0) {
            *(ulong *)(param_1 + 0x20) = *puVar12;
            __ZdlPv();
            *puVar12 = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
          }
          *(undefined8 *)(param_1 + 0x18) = uStack_68;
          *(undefined8 *)(param_1 + 0x28) = uStack_58;
          *(undefined8 *)(param_1 + 0x20) = uStack_60;
          plVar5 = plVar11;
          func_0x0001099f04ec(plVar11,uStack_68,param_2,(int)uStack_60 - (int)uStack_68);
          while ((int)plVar5 < 1) {
            lVar6 = *(long *)(param_1 + 0x18);
            uVar8 = *(long *)(param_1 + 0x20) - lVar6;
            if (uVar8 >> 0x1b != 0) {
              FUN_10a00946c(&UNK_10f646477);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10a228198);
              (*pcVar3)();
            }
            if (*(long *)(param_1 + 0x20) == lVar6) {
              iVar7 = 0;
            }
            else {
              func_0x000107c27d58(puVar12,uVar8);
              lVar6 = *(long *)(param_1 + 0x18);
              iVar7 = *(int *)(param_1 + 0x20) - (int)lVar6;
            }
            plVar5 = plVar11;
            func_0x0001099f04ec(plVar11,lVar6,param_2,iVar7);
          }
          uVar8 = (ulong)plVar5 & 0xffffffff;
          plVar11 = *(long **)(param_1 + 0x18);
          uVar9 = *(long *)(param_1 + 0x20) - (long)plVar11;
          if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
            if (uVar8 < uVar9) {
              *(ulong *)(param_1 + 0x20) = (long)plVar11 + uVar8;
            }
          }
          else {
            func_0x000107c27d58(puVar12,uVar8 - uVar9);
            plVar11 = (long *)*puVar12;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar10 = plVar4 + 1;
      do {
        lVar6 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      goto LAB_10a228168;
    }
  }
  plVar11 = (long *)0x0;
  uVar8 = 0;
LAB_10a228168:
  auVar13._8_8_ = uVar8;
  auVar13._0_8_ = plVar11;
  return auVar13;
}



/* Entry: 10a2281d4; end: 10a2281df;  */

void FUN_10a2281d4(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10a2281e0; end: 10a22824f;  */

undefined8 * FUN_10a2281e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb3cd0;
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a228250; end: 10a228383;  */

void FUN_10a228250(long param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lStack_68;
  long lStack_60;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 8);
      plStack_50 = plVar5;
      plStack_48 = plVar3;
      if (plVar5 != (long *)0x0) {
        if ((uint)param_2 < 0x7e000001) {
          iVar6 = (uint)param_2 + (int)((param_2 & 0xffffffff) / 0xff) + 0x10;
        }
        else {
          iVar6 = 0;
        }
        FUN_10a0dc020(&lStack_68,iVar6);
        func_0x000109299e8c(param_3,lStack_68,param_2,iVar6,0xc);
        (**(code **)(*plVar5 + 0x10))(plVar5,(long)(int)param_3,lStack_68);
        if (lStack_68 != 0) {
          lStack_60 = lStack_68;
          __ZdlPv();
        }
      }
      plVar5 = plVar3 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10a228384; end: 10a22870b;  */

undefined8 * FUN_10a228384(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_110bb3cf8;
  lVar9 = *(long *)(*(long *)param_1[1] + 0x208);
  if (*(long *)(lVar9 + 0xb8) != 0) {
    puVar7 = *(undefined8 **)(lVar9 + 0xb0);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_10a23adf0(param_1[4],param_1[5]);
    }
    else {
      plVar8 = (long *)puVar7[2];
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0xc8;
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
        *(undefined2 *)(plVar8 + 0x13) = 0;
        *plVar8 = (long)&PTR_DAT_110bb4f30;
        plStack_78 = plVar8 + 0x14;
        *plStack_78 = lVar9;
        plVar8[0x15] = (long)param_1;
        *(undefined1 *)(plVar8 + 0x17) = 1;
        plVar8[0x18] = 0;
        pcStack_60 = FUN_10a23ae90;
        plStack_70 = plVar8;
        plStack_68 = plVar8;
      }
      else {
        pcStack_58 = (code *)0x0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
        if (pcStack_58 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a228690);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_FUN_110bb4ef8;
        plVar5[0x14] = lVar9;
        plVar5[0x15] = (long)param_1;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar8;
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
        plStack_70 = plVar5;
        if (plStack_68 != (long *)0x0) {
          func_0x0001092b4274(&plStack_68);
        }
        pcStack_60 = FUN_10a23ae60;
        plStack_78 = plVar5 + 0x14;
        plStack_68 = plVar5;
        __ZNSt13exception_ptrD1Ev(&pcStack_58);
      }
      plVar8 = plStack_78;
      if (plStack_78[4] != 0) {
        func_0x0001092b4274();
      }
      plVar8[4] = (long)plStack_68;
      plStack_68 = (long *)0x0;
      pcStack_58 = pcStack_60;
      plStack_50 = plStack_78;
      puStack_48 = puVar7;
      (**(code **)*puVar7)(puVar7,&pcStack_58);
      plStack_80 = plStack_70;
      plStack_70 = (long *)0x0;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_80);
      FUN_10a09b344(&plStack_80);
      if (plStack_80 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_80 + 1);
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
            (**(code **)(*plStack_80 + 8))();
          }
        }
      }
    }
  }
  func_0x00010a23a5ec(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a22870c; end: 10a22870f;  */

undefined8 * FUN_10a22870c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_110bb3cf8;
  lVar9 = *(long *)(*(long *)param_1[1] + 0x208);
  if (*(long *)(lVar9 + 0xb8) != 0) {
    puVar7 = *(undefined8 **)(lVar9 + 0xb0);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_10a23adf0(param_1[4],param_1[5]);
    }
    else {
      plVar8 = (long *)puVar7[2];
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0xc8;
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
        *(undefined2 *)(plVar8 + 0x13) = 0;
        *plVar8 = (long)&PTR_DAT_110bb4f30;
        plStack_78 = plVar8 + 0x14;
        *plStack_78 = lVar9;
        plVar8[0x15] = (long)param_1;
        *(undefined1 *)(plVar8 + 0x17) = 1;
        plVar8[0x18] = 0;
        pcStack_60 = FUN_10a23ae90;
        plStack_70 = plVar8;
        plStack_68 = plVar8;
      }
      else {
        pcStack_58 = (code *)0x0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
        if (pcStack_58 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a228690);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_FUN_110bb4ef8;
        plVar5[0x14] = lVar9;
        plVar5[0x15] = (long)param_1;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar8;
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
        plStack_70 = plVar5;
        if (plStack_68 != (long *)0x0) {
          func_0x0001092b4274(&plStack_68);
        }
        pcStack_60 = FUN_10a23ae60;
        plStack_78 = plVar5 + 0x14;
        plStack_68 = plVar5;
        __ZNSt13exception_ptrD1Ev(&pcStack_58);
      }
      plVar8 = plStack_78;
      if (plStack_78[4] != 0) {
        func_0x0001092b4274();
      }
      plVar8[4] = (long)plStack_68;
      plStack_68 = (long *)0x0;
      pcStack_58 = pcStack_60;
      plStack_50 = plStack_78;
      puStack_48 = puVar7;
      (**(code **)*puVar7)(puVar7,&pcStack_58);
      plStack_80 = plStack_70;
      plStack_70 = (long *)0x0;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_80);
      FUN_10a09b344(&plStack_80);
      if (plStack_80 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_80 + 1);
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
            (**(code **)(*plStack_80 + 8))();
          }
        }
      }
    }
  }
  func_0x00010a23a5ec(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a228710; end: 10a228723;  */

void FUN_10a228710(void)

{
  FUN_10a228384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a228724; end: 10a22877b;  */

void FUN_10a228724(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_2[1];
  lVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[3];
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010a228778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



/* Entry: 10a22877c; end: 10a2288df;  */

void FUN_10a22877c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_198;
  long *plStack_190;
  undefined1 auStack_188 [320];
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar5 = 0;
  FUN_10a232a7c(*(long *)(param_1 + 0x20) + 8,0,0);
  plVar3 = *(long **)(param_1 + 0x18);
  if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0))
  {
    plVar4 = *(long **)(param_1 + 0x10);
    plStack_48 = plVar4;
    plStack_40 = plVar3;
    if ((plVar4 != (long *)0x0) && ((**(code **)(*plVar4 + 0x10))(), lVar5 != 0)) {
      FUN_10a0f639c(auStack_188,plVar4,lVar5);
      FUN_10a23b0c4(&uStack_198,&uStack_31);
      FUN_10a310514(uStack_198,auStack_188);
      FUN_10a232a7c(*(long *)(param_1 + 0x20) + 8,uStack_198,plStack_190);
      if (plStack_190 != (long *)0x0) {
        plVar3 = plStack_190 + 1;
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
          (**(code **)(*plStack_190 + 0x10))(plStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_190);
        }
      }
      func_0x00010a0f618c(auStack_188);
      plVar3 = plStack_40;
      if (plStack_40 == (long *)0x0) {
        return;
      }
    }
    plVar4 = plVar3 + 1;
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a2288e0; end: 10a22899f;  */

void FUN_10a2288e0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float fVar14;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  double dVar15;
  
  uVar2 = *(undefined8 *)(param_1 + 1);
  iVar3 = (int)uVar2 * (int)((ulong)param_2 >> 0x20);
  uVar7 = NEON_scvtf(uVar2,4);
  iVar1 = (int)((ulong)uVar2 >> 0x20) * (int)param_2;
  uVar2 = NEON_fmov(0xbf800000,4);
  if (iVar1 == iVar3) {
    uVar9 = *(undefined8 *)(param_1 + 7);
  }
  else {
    dVar10 = (double)iVar3 / (double)iVar1;
    auVar13._0_8_ = 1.0 / dVar10;
    *(undefined8 *)(param_1 + 3) = uVar2;
    auVar13._8_8_ = dVar10;
    auVar11 = NEON_fmov(0x3ff0000000000000,8);
    auVar11 = NEON_fminnm(auVar13,auVar11,8);
    auVar13 = NEON_fmov(0x3fe0000000000000,8);
    dVar10 = auVar13._0_8_ - auVar11._0_8_ * auVar13._0_8_;
    dVar15 = auVar13._8_8_ - auVar11._8_8_ * auVar13._8_8_;
    fVar8 = (float)dVar10;
    fVar14 = (float)dVar15;
    fVar6 = (float)((ulong)uVar7 >> 0x20);
    uVar9 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20) - fVar6 * fVar14,
                     (float)*(undefined8 *)(param_1 + 7) - (float)uVar7 * fVar8);
    uVar7 = CONCAT44(((float)(auVar11._8_8_ + dVar15) - fVar14) * fVar6,
                     ((float)(auVar11._0_8_ + dVar10) - fVar8) * (float)uVar7);
  }
  uVar12 = NEON_scvtf(param_2,4);
  fVar6 = (float)uVar12 / (float)uVar7;
  fVar8 = (float)((ulong)uVar12 >> 0x20) / (float)((ulong)uVar7 >> 0x20);
  *(ulong *)(param_1 + 7) =
       CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar8 +
                (fVar8 + (float)((ulong)uVar2 >> 0x20)) * 0.5,
                (float)uVar9 * fVar6 + (fVar6 + (float)uVar2) * 0.5);
  *(ulong *)(param_1 + 5) =
       CONCAT44(fVar8 * (float)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20),
                fVar6 * (float)*(undefined8 *)(param_1 + 5));
  *(undefined8 *)(param_1 + 1) = param_2;
  if (*param_1 != -1) {
    uVar5 = (ulong)(uint)param_1[7];
    if (NAN((float)param_1[7])) {
      uVar2 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) + -1,
                                  (int)*(undefined8 *)(param_1 + 1) + -1),4);
      uVar5 = CONCAT44((float)((ulong)uVar2 >> 0x20) * 0.5,(float)uVar2 * 0.5);
      *(ulong *)(param_1 + 7) = uVar5;
    }
    uVar4 = (ulong)(uint)param_1[4];
    if ((float)param_1[4] == -1.0) {
      uVar4 = (ulong)(uint)param_1[8];
      fVar6 = (float)param_1[3];
      FUN_10a0ecc90(uVar4,param_1[6],fVar6);
      param_1[4] = (int)uVar4;
    }
    else {
      fVar6 = (float)param_1[3];
    }
    if (fVar6 == -1.0) {
      fVar8 = (float)param_1[5];
      FUN_10a0ecc90(uVar5,fVar8,uVar4);
      fVar6 = (float)uVar5;
      param_1[3] = (int)fVar6;
    }
    else {
      fVar8 = (float)param_1[5];
    }
    if (fVar8 == -1.0) {
      iVar3 = param_1[1];
      fVar6 = fVar6 * 0.5 * 0.017453292;
      _tanf();
      param_1[5] = (int)(((float)iVar3 / fVar6) * 0.5);
    }
    if ((float)param_1[6] == -1.0) {
      iVar3 = param_1[2];
      fVar6 = (float)uVar4 * 0.5 * 0.017453292;
      _tanf();
      param_1[6] = (int)(((float)iVar3 / fVar6) * 0.5);
    }
  }
  return;
}



/* Entry: 10a2289a0; end: 10a2289fb;  */

undefined8 * FUN_10a2289a0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110bb3d30;
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    func_0x00010a042d30(lVar1 + 0x70);
    __ZdlPv(lVar1);
  }
  func_0x00010a234f7c(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a2289fc; end: 10a2289ff;  */

undefined8 * FUN_10a2289fc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110bb3d30;
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    func_0x00010a042d30(lVar1 + 0x70);
    __ZdlPv(lVar1);
  }
  func_0x00010a234f7c(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a228a00; end: 10a228a13;  */

void FUN_10a228a00(void)

{
  FUN_10a2289a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a228a14; end: 10a228a4b;  */

void FUN_10a228a14(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a228a4c; end: 10a228be7;  */

void FUN_10a228a4c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **appuStack_80 [2];
  undefined **appuStack_70 [2];
  undefined **appuStack_60 [3];
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x10);
      plStack_40 = plVar5;
      plStack_38 = plVar3;
      if (plVar5 != (long *)0x0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0,0);
        }
        else {
          FUN_10a0f984c(&ppuStack_90);
          func_0x00010a310ac0(*(undefined8 *)(param_1 + 0x20),&ppuStack_90);
          lStack_a8 = 0;
          lStack_a0 = 0;
          uStack_98 = 0;
          func_0x00010a0fb0f4(&ppuStack_90,&lStack_a8);
          (**(code **)(*plVar5 + 0x10))(plVar5,lStack_a0 - lStack_a8);
          if (lStack_a8 != 0) {
            lStack_a0 = lStack_a8;
            __ZdlPv();
          }
          plVar5 = plStack_48;
          ppuStack_90 = &PTR_FUN_110ba53b0;
          ppuStack_88 = &PTR_FUN_110ba5578;
          plStack_48 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          appuStack_60[0] = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(appuStack_60);
          appuStack_70[0] = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(appuStack_70);
          appuStack_80[0] = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(appuStack_80);
        }
      }
      plVar5 = plVar3 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10a228be8; end: 10a228bff;  */

long * FUN_10a228be8(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar4 = param_1;
  if ((param_3 != 0) && (plVar4 = param_1 + 4, *plVar4 == 0)) {
    lVar7 = *(long *)(param_3 + 0x220);
    lVar5 = *(long *)(param_3 + 0x218);
    if (*(long *)(param_3 + 0x220) != 0) {
      plVar6 = (long *)(*(long *)(param_3 + 0x220) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)param_1[5];
    param_1[5] = lVar7;
    *plVar4 = lVar5;
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
    return plVar4;
  }
  return plVar4;
}



/* Entry: 10a228c00; end: 10a228c7b;  */

undefined8 * FUN_10a228c00(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 10a228c7c; end: 10a228f1f;  */

void FUN_10a228c7c(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar6 = (long *)0x60;
  __Znwm();
  plVar15 = plVar6 + 1;
  *plVar15 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110bb5218;
  plVar16 = plVar6 + 3;
  *plVar16 = (long)&PTR_FUN_110bb5288;
  *(undefined4 *)(plVar6 + 7) = param_2;
  plVar6[4] = (long)FUN_10a23c2e0;
  plVar6[5] = (long)&PTR_FUN_110bb5258;
  plVar6[6] = param_1;
  puVar17 = *(undefined8 **)(param_1 + 0x40);
  plStack_70 = plVar16;
  plStack_68 = plVar6;
  if (puVar17 < *(undefined8 **)(param_1 + 0x48)) {
    *puVar17 = plVar16;
    puVar17[1] = plVar6;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar17 = puVar17 + 2;
LAB_10a228db4:
    *(undefined8 **)(param_1 + 0x40) = puVar17;
    plVar7 = (long *)*param_3;
    plVar1 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_80 = plVar16;
    plStack_78 = plVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7,&plStack_80);
    if (plStack_78 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puVar17 = *(undefined8 **)(param_1 + 0x28);
    if (puVar17 < *(undefined8 **)(param_1 + 0x30)) {
      uVar9 = *param_3;
      *param_3 = 0;
      puVar14 = puVar17 + 1;
      *puVar17 = uVar9;
LAB_10a228e90:
      *(undefined8 **)(param_1 + 0x28) = puVar14;
      do {
        lVar11 = *plVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      return;
    }
    lVar11 = *(long *)(param_1 + 0x20);
    lVar13 = (long)puVar17 - lVar11;
    uVar2 = (lVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x00010a232b1c();
      goto LAB_10a228ef4;
    }
    uVar10 = (long)*(undefined8 **)(param_1 + 0x30) - lVar11;
    uVar12 = (long)uVar10 >> 2;
    if (uVar12 <= uVar2) {
      uVar12 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 >> 0x3d == 0) {
      lVar8 = uVar12 << 3;
      __Znwm();
      puVar17 = (undefined8 *)(lVar8 + lVar13);
      uVar9 = *param_3;
      *param_3 = 0;
      puVar14 = puVar17 + 1;
      *puVar17 = uVar9;
      _memcpy(puVar17 + -(lVar13 >> 3),lVar11,lVar13);
      *(undefined8 **)(param_1 + 0x20) = puVar17 + -(lVar13 >> 3);
      *(undefined8 **)(param_1 + 0x28) = puVar14;
      *(ulong *)(param_1 + 0x30) = lVar8 + uVar12 * 8;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      goto LAB_10a228e90;
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0x38);
    lVar13 = (long)puVar17 - lVar11;
    uVar2 = (lVar13 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      func_0x00010a232b08();
      goto LAB_10a228ef4;
    }
    uVar10 = (long)*(undefined8 **)(param_1 + 0x48) - lVar11;
    uVar12 = (long)uVar10 >> 3;
    if (uVar12 <= uVar2) {
      uVar12 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar12 = 0xfffffffffffffff;
    }
    if (uVar12 >> 0x3c == 0) {
      lVar8 = uVar12 << 4;
      __Znwm();
      puVar14 = (undefined8 *)(lVar8 + lVar13);
      *puVar14 = plVar16;
      puVar14[1] = plVar6;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar17 = puVar14 + 2;
      _memcpy(puVar14 + (lVar13 >> 4) * -2,lVar11,lVar13);
      *(undefined8 **)(param_1 + 0x38) = puVar14 + (lVar13 >> 4) * -2;
      *(undefined8 **)(param_1 + 0x40) = puVar17;
      *(ulong *)(param_1 + 0x48) = lVar8 + uVar12 * 0x10;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      goto LAB_10a228db4;
    }
  }
  func_0x000109ffded8();
LAB_10a228ef4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a228ef8);
  (*pcVar5)();
}



/* Entry: 10a228f20; end: 10a2294eb;  */

void FUN_10a228f20(long param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong unaff_x27;
  ulong uVar24;
  float fVar25;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  plVar5 = (long *)0x70;
  __Znwm();
  plVar21 = plVar5 + 1;
  *plVar21 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110bb5160;
  plVar23 = plVar5 + 3;
  *plVar23 = (long)&PTR_FUN_110bb51d0;
  *(uint *)(plVar5 + 9) = param_2;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = (long)FUN_10a23bc6c;
  plVar5[7] = (long)&PTR_FUN_110bb51a0;
  plVar5[8] = param_1;
  plVar20 = (long *)(param_1 + 0x30);
  uVar18 = (ulong)param_2;
  uVar24 = *(ulong *)(param_1 + 0x38);
  if (uVar24 != 0) {
    uVar9 = uVar24 - 1;
    uVar12 = (ulong)((int)uVar24 + 3);
    if ((uVar24 & uVar9) != 0) {
      uVar12 = 3;
    }
    unaff_x27 = uVar12 & uVar18;
    puVar13 = *(undefined8 **)(*plVar20 + unaff_x27 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar13; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar12 = plVar19[1];
        if (uVar12 == uVar18) {
          if (*(uint *)(plVar19 + 2) == param_2) goto LAB_10a2292cc;
        }
        else {
          if ((uVar24 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar24 <= uVar12) {
            uVar10 = 0;
            if (uVar24 != 0) {
              uVar10 = uVar12 / uVar24;
            }
            uVar12 = uVar12 - uVar10 * uVar24;
          }
          if (uVar12 != unaff_x27) break;
        }
      }
    }
  }
  plVar19 = (long *)0x28;
  __Znwm();
  uStack_70 = 1;
  *plVar19 = 0;
  plVar19[1] = uVar18;
  *(uint *)(plVar19 + 2) = param_2;
  plVar19[3] = 0;
  plVar19[4] = 0;
  fVar25 = (float)(*(long *)(param_1 + 0x48) + 1);
  plStack_80 = plVar19;
  plStack_78 = plVar20;
  if ((uVar24 == 0) || (*(float *)(param_1 + 0x50) * (float)uVar24 < fVar25)) {
    uVar12 = 1;
    if (2 < uVar24) {
      uVar12 = (ulong)((uVar24 & uVar24 - 1) != 0);
    }
    uVar12 = uVar12 | uVar24 << 1;
    uVar9 = (ulong)(fVar25 / *(float *)(param_1 + 0x50));
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar24 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar24 < uVar12) {
LAB_10a2290d8:
      if (uVar12 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a2294b0;
      }
      lVar6 = uVar12 << 3;
      __Znwm();
      lVar7 = *plVar20;
      *plVar20 = lVar6;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      uVar24 = 0;
      *(ulong *)(param_1 + 0x38) = uVar12;
      do {
        *(undefined8 *)(*plVar20 + uVar24 * 8) = 0;
        uVar24 = uVar24 + 1;
      } while (uVar12 != uVar24);
      plVar14 = *(long **)(param_1 + 0x40);
      uVar24 = uVar12;
      if (plVar14 != (long *)0x0) {
        uVar9 = plVar14[1];
        uVar10 = uVar12 - 1;
        if ((uVar12 & uVar10) == 0) {
          uVar9 = uVar9 & uVar10;
        }
        else if (uVar12 <= uVar9) {
          uVar17 = 0;
          if (uVar12 != 0) {
            uVar17 = uVar9 / uVar12;
          }
          uVar9 = uVar9 - uVar17 * uVar12;
        }
        *(undefined8 **)(*plVar20 + uVar9 * 8) = (undefined8 *)(param_1 + 0x40);
        plVar15 = (long *)*plVar14;
        while (plVar15 != (long *)0x0) {
          uVar17 = plVar15[1];
          if ((uVar12 & uVar10) == 0) {
            uVar17 = uVar17 & uVar10;
          }
          else if (uVar12 <= uVar17) {
            uVar3 = 0;
            if (uVar12 != 0) {
              uVar3 = uVar17 / uVar12;
            }
            uVar17 = uVar17 - uVar3 * uVar12;
          }
          plVar16 = plVar15;
          if (uVar17 != uVar9) {
            lVar6 = *plVar20;
            if (*(long *)(lVar6 + uVar17 * 8) == 0) {
              *(long **)(lVar6 + uVar17 * 8) = plVar14;
              uVar9 = uVar17;
            }
            else {
              *plVar14 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar6 + uVar17 * 8);
              **(long **)(lVar6 + uVar17 * 8) = (long)plVar15;
              plVar16 = plVar14;
            }
          }
          plVar14 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (uVar12 < uVar24) {
      uVar9 = (ulong)((float)*(ulong *)(param_1 + 0x48) / *(float *)(param_1 + 0x50));
      if ((uVar24 < 3) || ((uVar24 & uVar24 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (uVar12 < uVar24) {
        if (uVar12 != 0) goto LAB_10a2290d8;
        lVar6 = *plVar20;
        *plVar20 = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
        uVar24 = 0;
      }
      else {
        uVar24 = *(ulong *)(param_1 + 0x38);
      }
    }
    if ((uVar24 & uVar24 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar24 + 3U & param_2);
    }
    else {
      unaff_x27 = uVar18;
      if (uVar24 <= uVar18) {
        uVar12 = 0;
        if (uVar24 != 0) {
          uVar12 = uVar18 / uVar24;
        }
        unaff_x27 = uVar18 - uVar12 * uVar24;
      }
    }
  }
  lVar6 = *plVar20;
  plVar14 = *(long **)(lVar6 + unaff_x27 * 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)(param_1 + 0x40);
    *plVar19 = *plVar14;
    *plVar14 = (long)plVar19;
    *(long **)(lVar6 + unaff_x27 * 8) = plVar14;
    if (*plVar19 != 0) {
      uVar18 = *(ulong *)(*plVar19 + 8);
      if ((uVar24 & uVar24 - 1) == 0) {
        uVar18 = uVar18 & uVar24 - 1;
      }
      else if (uVar24 <= uVar18) {
        uVar12 = 0;
        if (uVar24 != 0) {
          uVar12 = uVar18 / uVar24;
        }
        uVar18 = uVar18 - uVar12 * uVar24;
      }
      plVar14 = (long *)(*plVar20 + uVar18 * 8);
      goto LAB_10a2292bc;
    }
  }
  else {
    *plVar19 = *plVar14;
LAB_10a2292bc:
    *plVar14 = (long)plVar19;
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
LAB_10a2292cc:
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar2) {
      *plVar21 = *plVar21 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar20 = (long *)plVar19[4];
  plVar19[3] = (long)plVar23;
  plVar19[4] = (long)plVar5;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      lVar6 = *plVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar2) {
        *plVar21 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = (long *)*param_3;
  if (plVar5 != (long *)0x0) {
    plVar21 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar2) {
        *plVar21 = *plVar21 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_80 = plVar23;
  plStack_78 = plVar5;
  (**(code **)(*plVar20 + 0x10))(plVar20,&plStack_80);
  if (plStack_78 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar13 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) <= puVar13) {
    lVar6 = *(long *)(param_1 + 0x18);
    lVar7 = (long)puVar13 - lVar6;
    uVar24 = (lVar7 >> 3) + 1;
    if (uVar24 >> 0x3d == 0) {
      uVar12 = (long)*(undefined8 **)(param_1 + 0x28) - lVar6;
      uVar18 = (long)uVar12 >> 2;
      if (uVar18 <= uVar24) {
        uVar18 = uVar24;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar18 = 0x1fffffffffffffff;
      }
      if (uVar18 >> 0x3d == 0) {
        lVar8 = uVar18 << 3;
        __Znwm();
        puVar13 = (undefined8 *)(lVar8 + lVar7);
        uVar11 = *param_3;
        *param_3 = 0;
        puVar22 = puVar13 + 1;
        *puVar13 = uVar11;
        _memcpy(puVar13 + -(lVar7 >> 3),lVar6,lVar7);
        *(undefined8 **)(param_1 + 0x18) = puVar13 + -(lVar7 >> 3);
        *(undefined8 **)(param_1 + 0x20) = puVar22;
        *(ulong *)(param_1 + 0x28) = lVar8 + uVar18 * 8;
        if (lVar6 != 0) {
          __ZdlPv(lVar6);
        }
        goto LAB_10a229400;
      }
      func_0x000109ffded8();
    }
    else {
      FUN_10a232af4();
    }
LAB_10a2294b0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2294b4);
    (*pcVar4)();
  }
  uVar11 = *param_3;
  *param_3 = 0;
  puVar22 = puVar13 + 1;
  *puVar13 = uVar11;
LAB_10a229400:
  *(undefined8 **)(param_1 + 0x20) = puVar22;
  if (plVar5 != (long *)0x0) {
    plVar20 = plVar5 + 1;
    do {
      lVar6 = *plVar20;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar2) {
        *plVar20 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a2294ec; end: 10a229543;  */

void FUN_10a2294ec(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_2[1];
  lVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[2];
  param_1[2] = lVar6;
  param_1[1] = lVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010a229540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



/* Entry: 10a229544; end: 10a22978f;  */

void FUN_10a229544(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  uint *puVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  
  func_0x00010a23bea0(param_1 + 0x58);
  for (plVar9 = *(long **)(param_1 + 0x40); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    lVar12 = plVar9[3];
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined8 *)(lVar12 + 0x10) = 0;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0))
  {
    puVar8 = *(uint **)(param_1 + 8);
    if ((puVar8 != (uint *)0x0) && ((**(code **)(*(long *)puVar8 + 0x10))(), param_2 != 0)) {
      uVar2 = *puVar8;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f646496,&UNK_10f6464d6,0x46,&UNK_10f646510,in_x6,in_x7,
                            (ulong)uVar2);
      }
      if (0 < (int)uVar2) {
        uVar19 = 0;
        puVar8 = puVar8 + 1;
        puVar20 = puVar8 + (ulong)uVar2 * 3;
        do {
          uVar3 = *puVar8;
          uVar18 = (ulong)(int)uVar3;
          lVar12 = *(long *)(puVar8 + 1);
          if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f646496,&UNK_10f6464d6,0x4f,&UNK_10f64653e,in_x6,in_x7,
                                uVar18,lVar12);
          }
          uVar10 = *(ulong *)(param_1 + 0x38);
          if (uVar10 != 0) {
            uVar13 = uVar10 - 1;
            if ((uVar10 & uVar13) == 0) {
              uVar14 = uVar13 & uVar18;
            }
            else {
              uVar14 = uVar18;
              if (uVar10 <= uVar18) {
                uVar14 = 0;
                if (uVar10 != 0) {
                  uVar14 = uVar18 / uVar10;
                }
                uVar14 = uVar18 - uVar14 * uVar10;
              }
            }
            plVar15 = *(long **)(*(long *)(param_1 + 0x30) + uVar14 * 8);
            if (plVar15 != (long *)0x0) {
              do {
                while( true ) {
                  plVar15 = (long *)*plVar15;
                  if (plVar15 == (long *)0x0) goto LAB_10a2296ec;
                  uVar16 = plVar15[1];
                  if (uVar16 != uVar18) break;
                  if (*(uint *)(plVar15 + 2) == uVar3) {
                    if (lVar12 < 0) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a229774);
                      (*pcVar7)();
                    }
                    lVar11 = plVar15[3];
                    *(uint **)(lVar11 + 8) = puVar20;
                    *(long *)(lVar11 + 0x10) = lVar12;
                    goto LAB_10a2296ec;
                  }
                }
                if ((uVar10 & uVar13) == 0) {
                  uVar16 = uVar16 & uVar13;
                }
                else if (uVar10 <= uVar16) {
                  uVar6 = 0;
                  if (uVar10 != 0) {
                    uVar6 = uVar16 / uVar10;
                  }
                  uVar16 = uVar16 - uVar6 * uVar10;
                }
              } while (uVar16 == uVar14);
            }
          }
LAB_10a2296ec:
          puVar8 = puVar8 + 3;
          puVar20 = (uint *)((long)puVar20 + lVar12);
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar2);
      }
    }
    plVar15 = plVar9 + 1;
    do {
      lVar12 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar17 = *(undefined8 **)(param_1 + 0x18); puVar17 != puVar1; puVar17 = puVar17 + 1) {
    (**(code **)(*(long *)*puVar17 + 0x18))();
  }
  return;
}



/* Entry: 10a229790; end: 10a2297db;  */

void FUN_10a229790(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x20))((long *)*puVar2,param_2);
  }
  return;
}



/* Entry: 10a2297dc; end: 10a229813;  */

void FUN_10a2297dc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a229814; end: 10a2298d3;  */

void FUN_10a229814(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined **ppuStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uStack_60 = *(undefined8 *)(param_3 + 0x10);
  uStack_68 = *(undefined1 *)(param_3 + 8);
  ppuStack_70 = &PTR_DAT_110ba5598;
  uStack_58 = *(undefined1 *)(param_3 + 0x18);
  FUN_10a2298d4(param_1,param_2,&ppuStack_70);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  for (puVar2 = *(undefined8 **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    uStack_88 = *(undefined1 *)(param_3 + 8);
    ppuStack_90 = &PTR_DAT_110ba5598;
    uStack_80 = *(undefined8 *)(param_3 + 0x10);
    uStack_78 = *(undefined1 *)(param_3 + 0x18);
    (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,param_2,&ppuStack_90);
  }
  return;
}



/* Entry: 10a2298d4; end: 10a229947;  */

void FUN_10a2298d4(long *param_1,uint param_2,long param_3)

{
  undefined **ppuStack_30;
  undefined1 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (param_2 != (*(byte *)(param_1 + 1) & 1)) {
    *(byte *)(param_1 + 1) = (byte)param_2;
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a229944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))();
      return;
    }
    uStack_28 = *(undefined1 *)(param_3 + 8);
    ppuStack_30 = &PTR_DAT_110ba5598;
    uStack_20 = *(undefined8 *)(param_3 + 0x10);
    uStack_18 = *(undefined1 *)(param_3 + 0x18);
    (**(code **)(*param_1 + 0x20))(param_1,&ppuStack_30);
  }
  return;
}



/* Entry: 10a229948; end: 10a229a5f;  */

void FUN_10a229948(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  for (puVar2 = *(undefined8 **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    uStack_58 = *(undefined1 *)(param_2 + 8);
    ppuStack_60 = &PTR_DAT_110ba5598;
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
    uStack_48 = *(undefined1 *)(param_2 + 0x18);
    (**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,&ppuStack_60,param_3);
  }
  return;
}



/* Entry: 10a229a60; end: 10a229c1f;  */

long * FUN_10a229a60(long param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  long *plVar3;
  long *plVar4;
  double *pdVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  double dVar10;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x20);
  plVar3 = *(long **)(param_1 + 0xa8);
  if (plVar3 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = (long *)(param_1 + 0x60);
    dVar10 = *(double *)(param_2 + 0x10);
    if ((dVar10 != *(double *)(param_1 + 0x80)) ||
       (*(char *)(param_2 + 0x18) != *(char *)(param_1 + 0x88))) {
      pdVar1 = *(double **)(param_1 + 0x90);
      pdVar2 = *(double **)(param_1 + 0x98);
      pdVar6 = pdVar2;
      if ((long)pdVar2 - (long)pdVar1 != 0) {
        uVar7 = (long)pdVar2 - (long)pdVar1 >> 3;
        pdVar5 = pdVar1;
        do {
          uVar8 = uVar7 >> 1;
          pdVar6 = pdVar5 + uVar8 + 1;
          uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
          if (dVar10 <= pdVar5[uVar8]) {
            pdVar6 = pdVar5;
            uVar7 = uVar8;
          }
          pdVar5 = pdVar6;
        } while (uVar7 != 0);
      }
      if (pdVar2 == pdVar6) {
        pdVar6 = pdVar6 + -1;
      }
      else if ((pdVar1 != pdVar6) && (ABS(dVar10 - pdVar6[-1]) < ABS(dVar10 - *pdVar6))) {
        pdVar6 = pdVar6 + -1;
      }
      (**(code **)(*plVar3 + 0x218))(plVar3,(ulong)((long)pdVar6 - (long)pdVar1) >> 3);
      plVar3 = (long *)0x228;
      __Znwm();
      FUN_10a4c5ae8();
      plVar4 = (long *)*plVar9;
      *plVar9 = (long)plVar3;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
        plVar3 = (long *)*plVar9;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0xa8));
      uVar7 = *(ulong *)(param_1 + 0x60);
      FUN_10a4e97e4();
      *(ulong *)(param_1 + 0x68) = uVar7;
      if (*(int *)(param_1 + 8) == 1) {
        *(ulong *)(param_1 + 0x68) = uVar7 & 0xfffffffffffffeff;
      }
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x220))();
      *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 8);
      dVar10 = *(double *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x18);
      *(double *)(param_1 + 0x80) = dVar10;
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x20);
  return plVar9;
}



/* Entry: 10a229c20; end: 10a229d93;  */

void FUN_10a229c20(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_48;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined1 *)(param_2 + 0x88) = 0;
  plVar1 = *(long **)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))();
  if (param_3 != 0) {
    uVar2 = 0x140;
    __Znwm();
    FUN_10a0f639c();
    plVar1 = *(long **)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = uVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    uVar3 = 0;
    while( true ) {
      plVar1 = *(long **)(param_2 + 0xa8);
      (**(code **)(*plVar1 + 0x208))();
      if ((uint)plVar1 <= uVar3) break;
      (**(code **)(**(long **)(param_2 + 0xa8) + 0x218))(*(long **)(param_2 + 0xa8),uVar3);
      (**(code **)(**(long **)(param_2 + 0xa8) + 0xb8))
                (*(long **)(param_2 + 0xa8),&PTR_s_timestamp_110bb3d70);
      uStack_48 = param_1;
      FUN_10a229d94((undefined8 *)(param_2 + 0x90),&uStack_48);
      (**(code **)(**(long **)(param_2 + 0xa8) + 0x220))();
      uVar3 = uVar3 + 1;
    }
    (**(code **)(**(long **)(param_2 + 0x10) + 0x18))();
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x20);
  return;
}



/* Entry: 10a229d94; end: 10a229e57;  */

long * FUN_10a229d94(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar4 = param_1;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a0ced44();
      __ZNSt3__115recursive_mutex4lockEv(param_1 + 4);
      plVar7 = param_1;
      FUN_10a229a60(param_1,param_2);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)plVar7[1];
      }
      __ZNSt3__115recursive_mutex6unlockEv(param_1 + 4);
      return plVar7;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar7 = param_1;
    FUN_10a0ced58();
    lVar3 = *param_1;
    puVar2 = (undefined8 *)((long)plVar7 + lVar8);
    lVar8 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar8,lVar3);
    plVar4 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar7 + uVar6);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar4;
}



/* Entry: 10a229e58; end: 10a229ebb;  */

undefined8 FUN_10a229e58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x20);
  lVar1 = param_1;
  FUN_10a229a60(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x20);
  return uVar2;
}



/* Entry: 10a229ebc; end: 10a229ecf;  */

undefined8 FUN_10a229ebc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = 0x100;
  }
  return uVar1;
}



/* Entry: 10a229ed0; end: 10a229f33;  */

void FUN_10a229ed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 4);
  puVar1 = param_1;
  FUN_10a229a60(param_1,param_4 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10a4c89b0(param_4,*puVar1,puVar1[1],0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 4);
  return;
}


