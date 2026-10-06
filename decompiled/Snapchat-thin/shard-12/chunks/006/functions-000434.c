/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109475d84; end: 109475e4b;  */

long * FUN_109475d84(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar4 = (long *)(param_1 + 0x40);
  plVar6 = param_2;
  FUN_109477814();
  if (plVar4 != (long *)0x0) {
    plVar6 = (long *)plVar4[5];
    if (*plVar6 != *param_3) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      FUN_109474e2c(0x3f800000,param_1,param_2,&uStack_60);
      plVar4 = (long *)&stack0xffffffffffffffb8;
      FUN_109477320(plVar4);
      if (*param_3 != 0) {
        plVar4 = plVar6;
        FUN_109475e4c(plVar6,param_3);
        *(undefined4 *)(plVar6 + 0x2a) = 1;
      }
    }
    return plVar4;
  }
  plVar4 = (long *)&UNK_10f56e356;
  FUN_109262df8();
  FUN_109477320(&stack0xffffffffffffffb8);
  __Unwind_Resume();
  lVar7 = plVar6[1];
  lVar5 = *plVar6;
  if (plVar6[1] != 0) {
    plVar6 = (long *)(plVar6[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)plVar4[1];
  plVar4[1] = lVar7;
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



/* Entry: 109475e4c; end: 109475ec7;  */

undefined8 * FUN_109475e4c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109475ec8; end: 1094766db;  */

long *** FUN_109475ec8(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long **pplVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long **pplVar18;
  long ***ppplStack_428;
  undefined8 *puStack_420;
  long ***ppplStack_418;
  undefined1 *puStack_410;
  code *pcStack_408;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long **pplStack_398;
  long **pplStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [24];
  undefined8 uStack_368;
  undefined1 auStack_360 [24];
  undefined8 uStack_348;
  long **pplStack_340;
  undefined8 *puStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  double dStack_2b0;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [32];
  undefined1 auStack_278 [40];
  ulong uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  byte bStack_130;
  long **pplStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_1[0x9c];
  if (lVar15 != 0) {
    while( true ) {
      __ZNSt3__15mutex4lockEv(lVar15 + 0x30);
      if (*(long *)(lVar15 + 0x28) == 0) {
        pplStack_340 = (long **)((ulong)pplStack_340 & 0xffffffffffffff00);
        uStack_300 = uStack_300 & 0xffffffffffffff00;
      }
      else {
        puVar2 = (ulong *)(*(long *)(*(long *)(lVar15 + 8) + (*(ulong *)(lVar15 + 0x20) >> 6) * 8) +
                          (*(ulong *)(lVar15 + 0x20) & 0x3f) * 0x40);
        pplStack_120 = (long **)*puVar2;
        (**(code **)(puVar2[1] + 0x10))(&puStack_118);
        FUN_109477390(lVar15);
        pplStack_340 = pplStack_120;
        (*(code *)puStack_118[2])(&puStack_338,&puStack_118);
        uStack_300 = CONCAT71(uStack_300._1_7_,1);
        (*(code *)*puStack_118)(&puStack_118);
      }
      __ZNSt3__15mutex6unlockEv(lVar15 + 0x30);
      if ((char)uStack_300 != '\x01') break;
      (*(code *)pplStack_340)(&pplStack_340);
      if ((uStack_300 & 1) != 0) {
        (*(code *)*puStack_338)(&puStack_338);
      }
      lVar15 = param_1[0x9c];
    }
  }
  plStack_3a0 = (long *)0x0;
  pplStack_398 = (long **)0x0;
  pplStack_390 = (long **)0x0;
  plVar17 = (long *)param_1[10];
  if (plVar17 != (long *)0x0) {
    pplVar18 = (long **)0x0;
    do {
      puVar16 = (undefined8 *)plVar17[5];
      if ((long *)*puVar16 != (long *)0x0) {
        if (pplVar18 < pplStack_390) {
          *pplVar18 = (long *)*puVar16;
          plVar12 = (long *)puVar16[1];
          pplVar18[1] = plVar12;
          if (plVar12 != (long *)0x0) {
            plVar12 = plVar12 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = *plVar12 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pplVar18 = pplVar18 + 2;
          pplStack_398 = pplVar18;
        }
        else {
          lVar15 = (long)pplVar18 - (long)plStack_3a0;
          uVar1 = (lVar15 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_109477448();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x109476600);
            (*pcVar7)();
          }
          uVar14 = (long)pplStack_390 - (long)plStack_3a0 >> 3;
          if (uVar14 <= uVar1) {
            uVar14 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)pplStack_390 - (long)plStack_3a0)) {
            uVar14 = 0xfffffffffffffff;
          }
          pplVar8 = &plStack_3a0;
          FUN_10947745c();
          puVar3 = (undefined8 *)((long)pplVar8 + lVar15);
          lVar15 = puVar16[1];
          uVar13 = *puVar16;
          puVar3[1] = puVar16[1];
          *puVar3 = uVar13;
          if (lVar15 != 0) {
            plVar12 = (long *)(lVar15 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = *plVar12 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pplVar18 = (long **)(puVar3 + 2);
          plVar12 = (long *)((long)puVar3 - ((long)pplStack_398 - (long)plStack_3a0));
          _memcpy(plVar12);
          bVar6 = plStack_3a0 != (long *)0x0;
          plStack_3a0 = plVar12;
          pplStack_398 = pplVar18;
          pplStack_390 = pplVar8 + uVar14 * 2;
          if (bVar6) {
            __ZdlPv();
            pplStack_398 = pplVar18;
          }
        }
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  plStack_3d8 = (long *)param_1[0x9f];
  uStack_3e0 = param_1[0x9e];
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  FUN_1095b7968(&plStack_3c8,param_2,&plStack_3a0,&uStack_3e0);
  plVar17 = plStack_3d8;
  if (plStack_3d8 != (long *)0x0) {
    plVar12 = plStack_3d8 + 1;
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
      (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar17 = plStack_3a8;
  uVar13 = uStack_3b0;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  plVar12 = (long *)param_1[0x9f];
  param_1[0x9f] = plVar17;
  param_1[0x9e] = uVar13;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 1;
    do {
      lVar15 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  pplStack_120 = (long **)((ulong)pplStack_120 & 0xffffffffffffff00);
  uStack_90 = 0;
  uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
  bStack_130 = 0;
  if (plStack_3c8 != plStack_3c0) {
    plVar17 = (long *)param_1[10];
    if (plVar17 != (long *)0x0) {
      do {
        if (*(long *)plVar17[5] == *plStack_3c8) break;
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    func_0x0001094757e0(param_1,plVar17 + 2);
    *(int *)(param_1 + 0x46) = (int)plStack_3c8[0x14];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xd,param_1 + 0x10);
    if ((*(char *)(param_1 + 2) == '\x01') && (*(long **)plVar17[5] != (long *)0x0)) {
      lVar15 = **(long **)plVar17[5];
      if (lVar15 == 0) {
        pplStack_340 = (long **)0x0;
        puStack_338 = (undefined8 *)0x0;
        uStack_318 = 0;
        uStack_310 = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        lStack_330 = 0;
        uStack_328 = 0x3ff0000000000000;
        uStack_320 = 0;
        uStack_300 = 0x3ff0000000000000;
        uStack_2f8 = 0;
        uStack_2e0 = 0x3ff0000000000000;
        uStack_2d8 = 0;
        dStack_2b0 = 1.0;
        uStack_2c0 = 0x3ff0000000000000;
      }
      else {
        puStack_338 = *(undefined8 **)(lVar15 + 0x18);
        pplStack_340 = *(long ***)(lVar15 + 0x10);
        uStack_328 = *(undefined8 *)(lVar15 + 0x28);
        lStack_330 = *(undefined8 *)(lVar15 + 0x20);
        uStack_318 = *(undefined8 *)(lVar15 + 0x38);
        uStack_320 = *(undefined8 *)(lVar15 + 0x30);
        uStack_310 = *(undefined8 *)(lVar15 + 0x40);
        uStack_2e8 = *(undefined8 *)(lVar15 + 0x68);
        uStack_2f0 = *(undefined8 *)(lVar15 + 0x60);
        uStack_2d8 = *(undefined8 *)(lVar15 + 0x78);
        uStack_2e0 = *(undefined8 *)(lVar15 + 0x70);
        uStack_2c8 = *(undefined8 *)(lVar15 + 0x88);
        uStack_2d0 = *(undefined8 *)(lVar15 + 0x80);
        uStack_2c0 = *(undefined8 *)(lVar15 + 0x90);
        uStack_2f8 = *(undefined8 *)(lVar15 + 0x58);
        uStack_300 = *(ulong *)(lVar15 + 0x50);
        dStack_2b0 = *(double *)(lVar15 + 0xa0);
      }
      FUN_10937f9d4(&uStack_250,plStack_3c8 + 2,&pplStack_340);
      lStack_1b8 = lStack_248;
      uStack_1c0 = uStack_250;
      lStack_1a8 = lStack_238;
      lStack_1b0 = lStack_240;
      lStack_158 = lStack_1e8;
      lStack_160 = lStack_1f0;
      lStack_148 = lStack_1d8;
      lStack_150 = lStack_1e0;
      lStack_140 = lStack_1d0;
      lStack_178 = lStack_208;
      lStack_180 = lStack_210;
      lStack_168 = lStack_1f8;
      lStack_170 = lStack_200;
      if ((bStack_130 & 1) == 0) {
        bStack_130 = 1;
      }
      dStack_1a0 = dStack_230 / dStack_2b0;
      dStack_198 = dStack_228 / dStack_2b0;
      dStack_190 = dStack_220 / dStack_2b0;
    }
    else if (bStack_130 == 1) {
      lStack_1b8 = plStack_3c8[3];
      uStack_1c0 = plStack_3c8[2];
      lStack_1a8 = plStack_3c8[5];
      lStack_1b0 = plStack_3c8[4];
      dStack_198 = (double)plStack_3c8[7];
      dStack_1a0 = (double)plStack_3c8[6];
      dStack_190 = (double)plStack_3c8[8];
      lStack_178 = plStack_3c8[0xb];
      lStack_180 = plStack_3c8[10];
      lStack_168 = plStack_3c8[0xd];
      lStack_170 = plStack_3c8[0xc];
      lStack_158 = plStack_3c8[0xf];
      lStack_160 = plStack_3c8[0xe];
      lStack_148 = plStack_3c8[0x11];
      lStack_150 = plStack_3c8[0x10];
      lStack_140 = plStack_3c8[0x12];
    }
    else {
      lStack_1b8 = plStack_3c8[3];
      uStack_1c0 = plStack_3c8[2];
      lStack_1a8 = plStack_3c8[5];
      lStack_1b0 = plStack_3c8[4];
      dStack_198 = (double)plStack_3c8[7];
      dStack_1a0 = (double)plStack_3c8[6];
      dStack_190 = (double)plStack_3c8[8];
      lStack_168 = plStack_3c8[0xd];
      lStack_170 = plStack_3c8[0xc];
      lStack_158 = plStack_3c8[0xf];
      lStack_160 = plStack_3c8[0xe];
      lStack_148 = plStack_3c8[0x11];
      lStack_150 = plStack_3c8[0x10];
      lStack_140 = plStack_3c8[0x12];
      lStack_178 = plStack_3c8[0xb];
      lStack_180 = plStack_3c8[10];
      bStack_130 = 1;
    }
  }
  puVar16 = param_1 + 8;
  FUN_109477814(puVar16,param_1 + 0xd);
  if (puVar16 == (undefined8 *)0x0) {
    if (*(int *)(param_1 + 7) == 1) {
      *(undefined4 *)(param_1 + 7) = 2;
    }
  }
  else {
    lVar15 = puVar16[5];
    uStack_368 = 0;
    uStack_348 = 0;
    uStack_388 = *(undefined8 *)(lVar15 + 0x58);
    *(undefined8 *)(lVar15 + 0x58) = 0;
    FUN_1094778f8(auStack_360,lVar15 + 0x80);
    FUN_109477a64(auStack_380,lVar15 + 0x60);
    FUN_1095bdf90(&pplStack_340,param_2,&uStack_1c0,&uStack_388);
    FUN_1094775c8(&uStack_388);
    uVar13 = *(undefined8 *)(lVar15 + 0x58);
    *(undefined8 *)(lVar15 + 0x58) = uStack_2a0;
    uStack_2a0 = uVar13;
    FUN_1094778f8(lVar15 + 0x80,auStack_278);
    FUN_109477a64(lVar15 + 0x60,auStack_298);
    if (dStack_2b0._0_1_ == '\0') {
      uVar11 = 2;
    }
    else {
      puStack_118 = puStack_338;
      pplStack_120 = pplStack_340;
      uStack_108 = uStack_328;
      uStack_110 = lStack_330;
      uStack_f8 = uStack_318;
      uStack_100 = uStack_320;
      uStack_f0 = uStack_310;
      uStack_b8 = uStack_2d8;
      uStack_c0 = uStack_2e0;
      uStack_a8 = uStack_2c8;
      uStack_b0 = uStack_2d0;
      uStack_a0 = uStack_2c0;
      uStack_d8 = uStack_2f8;
      uStack_e0 = uStack_300;
      uStack_c8 = uStack_2e8;
      uStack_d0 = uStack_2f0;
      uVar11 = 1;
      uStack_90 = 1;
    }
    *(undefined4 *)(param_1 + 7) = uVar11;
    FUN_1094775c8(&uStack_2a0);
  }
  uVar4 = *(undefined1 *)((long)param_2 + 0x269);
  lStack_3f0 = param_1[0x9e];
  plVar17 = (long *)param_1[0x9f];
  if (plVar17 != (long *)0x0) {
    plVar12 = plVar17 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puStack_338 = *(undefined8 **)(lStack_3f0 + 0x78);
  pplStack_340 = *(long ***)(lStack_3f0 + 0x70);
  uStack_328 = *(undefined8 *)(lStack_3f0 + 0x88);
  lStack_330 = *(long *)(lStack_3f0 + 0x80);
  uStack_318 = *(undefined8 *)(lStack_3f0 + 0x98);
  uStack_320 = *(undefined8 *)(lStack_3f0 + 0x90);
  plStack_3e8 = plVar17;
  FUN_109473f54(param_1,&pplStack_120,&uStack_1c0,uVar4,&pplStack_340);
  if (plVar17 != (long *)0x0) {
    plVar12 = plVar17 + 1;
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
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  puVar16 = (undefined8 *)param_1[0x9a];
  if (puVar16 != (undefined8 *)0x0) {
    uStack_3f4 = *(undefined4 *)(param_1 + 7);
    func_0x000107c31940(&pplStack_340,&DAT_10f6856fe);
    FUN_1095b72e0(*puVar16,&pplStack_340,&uStack_3f4);
    if (lStack_330 < 0) {
      __ZdlPv(pplStack_340);
    }
    param_1 = (undefined8 *)param_1[0x9a];
    func_0x000107c31940(&pplStack_340,&UNK_10f56e347);
    uStack_250 = *param_2;
    FUN_1095b7238(*param_1,&pplStack_340,&uStack_250);
    if (lStack_330 < 0) {
      __ZdlPv(pplStack_340);
    }
  }
  plVar17 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    plVar12 = plStack_3a8 + 1;
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
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  pplStack_340 = &plStack_3c8;
  FUN_109477490(&pplStack_340);
  pplStack_340 = &plStack_3a0;
  ppplVar9 = &pplStack_340;
  func_0x000109477500();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_1094766dc(&plStack_3c8);
    pplStack_340 = &plStack_3a0;
    func_0x000109477500(&pplStack_340);
    ppplVar10 = ppplVar9;
    __Unwind_Resume();
    pcStack_408 = FUN_1094766dc;
    puStack_420 = param_1;
    ppplStack_418 = ppplVar9;
    puStack_410 = &stack0xfffffffffffffff0;
    func_0x00010947771c(ppplVar10 + 3);
    ppplStack_428 = ppplVar10;
    FUN_109477490(&ppplStack_428);
    return ppplVar10;
  }
  return ppplVar9;
}



/* Entry: 1094766dc; end: 109476803;  */

long FUN_1094766dc(long param_1)

{
  long lStack_28;
  
  func_0x00010947771c(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_109477490(&lStack_28);
  return param_1;
}



/* Entry: 109476804; end: 109476863;  */

long * FUN_109476804(long *param_1)

{
  long lVar1;
  
  if (param_1[1] != 0) {
    FUN_10953be74();
  }
  FUN_109476864(param_1 + 1,0);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZNSt3__15mutexD1Ev(lVar1 + 0x30);
    FUN_10947688c(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109476864; end: 10947688b;  */

void FUN_109476864(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10953be44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10947688c; end: 1094769b7;  */

long * FUN_10947688c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar2 = param_1[4];
    plVar6 = puVar4 + (uVar2 >> 6);
    lVar3 = *plVar6 + (uVar2 & 0x3f) * 0x40;
    lVar1 = puVar4[param_1[5] + uVar2 >> 6] + (param_1[5] + uVar2 & 0x3f) * 0x40;
    puVar5 = (undefined8 *)param_1[2];
    if (lVar3 != lVar1) {
      do {
        (*(code *)**(undefined8 **)(lVar3 + 8))((undefined8 *)(lVar3 + 8));
        lVar3 = lVar3 + 0x40;
        if (lVar3 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
        }
      } while (lVar3 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar5 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar5 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x20;
  }
  else {
    if (uVar2 != 2) goto LAB_109476994;
    lVar3 = 0x40;
  }
  param_1[4] = lVar3;
LAB_109476994:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094769b8; end: 109476a03;  */

long * FUN_1094769b8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109476a04; end: 109476b2b;  */

void FUN_109476a04(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = param_1[2];
  puVar5 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar5) >> 3) < param_4) {
    puVar6 = param_1;
    puVar2 = param_2;
    if (puVar5 != (undefined8 *)0x0) {
      param_1[1] = puVar5;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar6 = puVar5;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_1092d2ba8();
      puVar5 = (undefined8 *)puVar6[1];
      if (puVar5 < (undefined8 *)puVar6[2]) {
        uVar7 = *puVar2;
        puVar5[1] = puVar2[1];
        *puVar5 = uVar7;
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        *(undefined1 *)(puVar5 + 0x14) = 0;
        if (*(char *)(puVar2 + 0x14) == '\x01') {
          uVar7 = puVar2[2];
          uVar9 = puVar2[5];
          uVar8 = puVar2[4];
          puVar5[3] = puVar2[3];
          puVar5[2] = uVar7;
          puVar5[5] = uVar9;
          puVar5[4] = uVar8;
          uVar8 = puVar2[7];
          uVar7 = puVar2[6];
          puVar5[8] = puVar2[8];
          puVar5[7] = uVar8;
          puVar5[6] = uVar7;
          uVar8 = puVar2[0xd];
          uVar7 = puVar2[0xc];
          uVar10 = puVar2[0xf];
          uVar9 = puVar2[0xe];
          uVar12 = puVar2[0x11];
          uVar11 = puVar2[0x10];
          puVar5[0x12] = puVar2[0x12];
          puVar5[0xf] = uVar10;
          puVar5[0xe] = uVar9;
          puVar5[0x11] = uVar12;
          puVar5[0x10] = uVar11;
          puVar5[0xd] = uVar8;
          puVar5[0xc] = uVar7;
          uVar7 = puVar2[10];
          puVar5[0xb] = puVar2[0xb];
          puVar5[10] = uVar7;
          *(undefined1 *)(puVar5 + 0x14) = 1;
        }
        puVar5 = puVar5 + 0x16;
      }
      else {
        puVar5 = puVar6;
        FUN_109476bcc();
      }
      puVar6[1] = puVar5;
      return;
    }
    uVar1 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar1 = 0x1fffffffffffffff;
    }
    FUN_1092d4d38(param_1,uVar1);
    lVar4 = param_1[1];
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      _memmove(lVar4,param_2,param_3);
    }
    lVar4 = lVar4 + param_3;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar6 - (long)puVar5 >> 3) < param_4) {
      lVar4 = (long)param_2 + ((long)puVar6 - (long)puVar5);
      if (puVar6 != puVar5) {
        _memmove(puVar5,param_2);
        puVar6 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - lVar4;
      if (param_3 != 0) {
        _memmove(puVar6,lVar4,param_3);
      }
      lVar4 = (long)puVar6 + param_3;
    }
    else {
      param_3 = param_3 - (long)param_2;
      if (param_3 != 0) {
        _memmove(puVar5,param_2,param_3);
      }
      lVar4 = (long)puVar5 + param_3;
    }
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 109476b2c; end: 109476bcb;  */

void FUN_109476b2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
    if (*(char *)(param_2 + 0x14) == '\x01') {
      uVar2 = param_2[2];
      uVar4 = param_2[5];
      uVar3 = param_2[4];
      puVar1[3] = param_2[3];
      puVar1[2] = uVar2;
      puVar1[5] = uVar4;
      puVar1[4] = uVar3;
      uVar3 = param_2[7];
      uVar2 = param_2[6];
      puVar1[8] = param_2[8];
      puVar1[7] = uVar3;
      puVar1[6] = uVar2;
      uVar3 = param_2[0xd];
      uVar2 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar4 = param_2[0xe];
      uVar7 = param_2[0x11];
      uVar6 = param_2[0x10];
      puVar1[0x12] = param_2[0x12];
      puVar1[0xf] = uVar5;
      puVar1[0xe] = uVar4;
      puVar1[0x11] = uVar7;
      puVar1[0x10] = uVar6;
      puVar1[0xd] = uVar3;
      puVar1[0xc] = uVar2;
      uVar2 = param_2[10];
      puVar1[0xb] = param_2[0xb];
      puVar1[10] = uVar2;
      *(undefined1 *)(puVar1 + 0x14) = 1;
    }
    puVar1 = puVar1 + 0x16;
  }
  else {
    puVar1 = param_1;
    FUN_109476bcc();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 109476bcc; end: 109476dc7;  */

long * FUN_109476bcc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar7 = (lVar9 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar7 < 0x1745d1745d1745e) {
    lVar6 = param_1[2] - *param_1 >> 4;
    uVar8 = lVar6 * 0x5d1745d1745d1746;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar8 = 0x1745d1745d1745d;
    }
    plStack_38 = param_1;
    if (uVar8 < 0x1745d1745d1745e) {
      lVar6 = uVar8 * 0xb0;
      __Znwm();
      puVar1 = (undefined8 *)(lVar6 + lVar9);
      lStack_40 = lVar6 + uVar8 * 0xb0;
      uVar10 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar10;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      *(undefined1 *)(puVar1 + 0x14) = 0;
      if (*(char *)(param_2 + 0x14) == '\x01') {
        uVar10 = param_2[2];
        uVar12 = param_2[5];
        uVar11 = param_2[4];
        puVar1[3] = param_2[3];
        puVar1[2] = uVar10;
        puVar1[5] = uVar12;
        puVar1[4] = uVar11;
        uVar10 = param_2[6];
        puVar1[7] = param_2[7];
        puVar1[6] = uVar10;
        puVar1[8] = param_2[8];
        uVar10 = param_2[0xe];
        uVar12 = param_2[0x11];
        uVar11 = param_2[0x10];
        puVar1[0xf] = param_2[0xf];
        puVar1[0xe] = uVar10;
        puVar1[0x11] = uVar12;
        puVar1[0x10] = uVar11;
        puVar1[0x12] = param_2[0x12];
        uVar12 = param_2[10];
        uVar11 = param_2[0xd];
        uVar10 = param_2[0xc];
        puVar1[0xb] = param_2[0xb];
        puVar1[10] = uVar12;
        puVar1[0xd] = uVar11;
        puVar1[0xc] = uVar10;
        *(undefined1 *)(puVar1 + 0x14) = 1;
      }
      plStack_48 = puVar1 + 0x16;
      puVar4 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      lVar9 = (long)puVar1 + ((long)puVar4 - (long)puVar3);
      plVar5 = plStack_48;
      if ((long)puVar4 - (long)puVar3 != 0) {
        lVar6 = 0;
        do {
          puVar1 = (undefined8 *)((long)puVar4 + lVar6);
          puVar2 = (undefined8 *)(lVar9 + lVar6);
          uVar10 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar10;
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(puVar2 + 2) = 0;
          *(undefined1 *)(puVar2 + 0x14) = 0;
          if (*(char *)(puVar1 + 0x14) == '\x01') {
            uVar10 = puVar1[2];
            uVar12 = puVar1[5];
            uVar11 = puVar1[4];
            puVar2[3] = puVar1[3];
            puVar2[2] = uVar10;
            puVar2[5] = uVar12;
            puVar2[4] = uVar11;
            uVar11 = puVar1[7];
            uVar10 = puVar1[6];
            puVar2[8] = puVar1[8];
            puVar2[7] = uVar11;
            puVar2[6] = uVar10;
            uVar11 = puVar1[0xd];
            uVar10 = puVar1[0xc];
            uVar13 = puVar1[0xf];
            uVar12 = puVar1[0xe];
            uVar15 = puVar1[0x11];
            uVar14 = puVar1[0x10];
            puVar2[0x12] = puVar1[0x12];
            puVar2[0xf] = uVar13;
            puVar2[0xe] = uVar12;
            puVar2[0x11] = uVar15;
            puVar2[0x10] = uVar14;
            puVar2[0xd] = uVar11;
            puVar2[0xc] = uVar10;
            uVar10 = puVar1[10];
            puVar2[0xb] = puVar1[0xb];
            puVar2[10] = uVar10;
            *(undefined1 *)(puVar2 + 0x14) = 1;
          }
          lVar6 = lVar6 + 0xb0;
        } while (puVar1 + 0x16 != puVar3);
        do {
          func_0x0001094776c4();
          puVar4 = puVar4 + 0x16;
        } while (puVar4 != puVar3);
        puVar4 = (undefined8 *)*param_1;
        plVar5 = plStack_48;
      }
      *param_1 = lVar9;
      param_1[1] = (long)plVar5;
      lVar9 = param_1[2];
      param_1[2] = lStack_40;
      puStack_58 = puVar4;
      puStack_50 = puVar4;
      plStack_48 = puVar4;
      lStack_40 = lVar9;
      FUN_109476ddc(&puStack_58);
      return plVar5;
    }
  }
  else {
    FUN_109476dc8();
  }
  func_0x000104c4f740();
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar9 = plVar5[1];
  lVar6 = plVar5[2];
  while (lVar6 != lVar9) {
    plVar5[2] = lVar6 + -0xb0;
    func_0x0001094776c4();
    lVar6 = plVar5[2];
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 109476dc8; end: 109476ddb;  */

long * FUN_109476dc8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0xb0;
    func_0x0001094776c4();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109476ddc; end: 109476e27;  */

long * FUN_109476ddc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xb0;
    func_0x0001094776c4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109476e28; end: 109476e97;  */

void FUN_109476e28(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0xb0;
        func_0x0001094776c4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109476e98; end: 109476ff7;  */

void FUN_109476e98(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  long alStack_60 [3];
  long *plStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5002000000;
  pcStack_70 = FUN_109476ff8;
  pcStack_68 = FUN_10947706c;
  FUN_1094771c0(alStack_60);
  __ZNSt3__17promiseIvE10get_futureEv(param_1,puStack_80 + 9);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_109477094;
  puStack_98 = &UNK_110af67c8;
  puStack_90 = &uStack_88;
  func_0x000104c62d88(param_2[1],*param_2,&puStack_b0);
  lVar3 = 8;
  __Block_object_dispose(&uStack_88);
  __ZNSt3__17promiseIvED1Ev(auStack_40);
  if (plStack_48 == alStack_60) {
    lVar4 = 0x18;
  }
  else {
    plVar1 = plStack_48;
    if (plStack_48 == (long *)0x0) goto LAB_109476f84;
    lVar4 = 0x20;
  }
  (**(code **)(*plStack_48 + lVar4))();
  plVar1 = plStack_48;
LAB_109476f84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)lVar3 != 0) {
    func_0x000104bd46a0();
    lVar3 = 8;
    __Block_object_dispose(&uStack_88);
    __ZNSt3__17promiseIvED1Ev(auStack_40);
    FUN_109477174(alStack_60);
  }
  __Unwind_Resume();
  plVar2 = *(long **)(lVar3 + 0x40);
  if (plVar2 == (long *)0x0) {
    plVar1[8] = 0;
  }
  else if (plVar2 == (long *)(lVar3 + 0x28)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1 + 5);
    plVar1[8] = (long)(plVar1 + 5);
  }
  else {
    plVar1[8] = (long)plVar2;
    *(undefined8 *)(lVar3 + 0x40) = 0;
  }
  plVar1[9] = *(long *)(lVar3 + 0x48);
  *(undefined8 *)(lVar3 + 0x48) = 0;
  return;
}



/* Entry: 109476ff8; end: 10947706b;  */

void FUN_109476ff8(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (plVar1 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x28);
    *(long *)(param_1 + 0x40) = param_1 + 0x28;
  }
  else {
    *(long **)(param_1 + 0x40) = plVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 10947706c; end: 109477093;  */

long * FUN_10947706c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__17promiseIvED1Ev(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 109477094; end: 1094770a7;  */

void FUN_109477094(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  plVar4 = (long *)(lVar2 + 0x48);
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar3 = *(long *)(lVar3 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar3 == 0) {
        uStack_38 = uStack_38 & 0xffffffff00000000;
        plVar1 = *(long **)(lVar2 + 0x40);
        (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_38);
        __ZNSt3__17promiseIvE9set_valueEv(plVar4);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_40);
  __ZNSt3__17promiseIvE13set_exceptionESt13exception_ptr(plVar4,auStack_40);
  __ZNSt13exception_ptrD1Ev(auStack_40);
  ___cxa_end_catch();
  return;
}



/* Entry: 1094770a8; end: 109477173;  */

void FUN_1094770a8(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = (long *)(param_1 + 0x20);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar1 == 0) {
        uStack_38 = CONCAT44(uStack_38._4_4_,param_2);
        (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),&uStack_38);
        __ZNSt3__17promiseIvE9set_valueEv(plVar2);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_40);
  __ZNSt3__17promiseIvE13set_exceptionESt13exception_ptr(plVar2,auStack_40);
  __ZNSt13exception_ptrD1Ev(auStack_40);
  ___cxa_end_catch();
  return;
}



/* Entry: 109477174; end: 1094771bf;  */

long * FUN_109477174(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x18;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x20;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1094771c0; end: 10947723b;  */

long FUN_1094771c0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  uVar2 = *param_2;
  *puVar1 = &PTR_FUN_110af6838;
  puVar1[1] = uVar2;
  (**(code **)(param_2[1] + 0x10))(puVar1 + 2,param_2 + 1);
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  __ZNSt3__17promiseIvEC1Ev(param_1 + 0x20);
  return param_1;
}



/* Entry: 10947723c; end: 1094772ab;  */

undefined8 * FUN_10947723c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6838;
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 1094772ac; end: 1094772df;  */

void FUN_1094772ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110af6838;
  param_2[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001094772d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_2 + 2,(long *)(param_1 + 0x10));
  return;
}



/* Entry: 1094772e0; end: 10947730b;  */

void FUN_1094772e0(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10947730c; end: 10947731f;  */

void FUN_10947730c(long param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010947731c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(*param_2,(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 109477320; end: 10947738f;  */

void FUN_109477320(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x0001094776c4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109477390; end: 109477447;  */

bool FUN_109477390(long param_1)

{
  bool bVar1;
  
  (*(code *)**(undefined8 **)
              (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 6) * 8) +
               (*(ulong *)(param_1 + 0x20) & 0x3f) * 0x40 + 8))();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x7f < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x40;
  }
  return bVar1;
}



/* Entry: 109477448; end: 10947745b;  */

void FUN_109477448(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0xb0;
        FUN_10947766c();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar3);
    return;
  }
  return;
}



/* Entry: 10947745c; end: 10947748f;  */

void FUN_10947745c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0xb0;
        FUN_10947766c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar2);
    return;
  }
  return;
}



/* Entry: 109477490; end: 10947756f;  */

void FUN_109477490(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0xb0;
        FUN_10947766c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar2);
    return;
  }
  return;
}



/* Entry: 109477570; end: 1094775c7;  */

long FUN_109477570(long param_1)

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



/* Entry: 1094775c8; end: 10947766b;  */

undefined8 * FUN_1094775c8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10947762c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10947762c:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10947766c; end: 109477773;  */

long FUN_10947766c(long param_1)

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



/* Entry: 109477774; end: 1094777cf;  */

long * FUN_109477774(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094777d0(plVar1 + 2);
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



/* Entry: 1094777d0; end: 109477813;  */

void FUN_1094777d0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    func_0x00010947aa60();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109477814; end: 1094778f7;  */

long FUN_109477814(long *param_1,undefined8 param_2)

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
        if (plVar4 == plVar2) {
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



/* Entry: 1094778f8; end: 109477a63;  */

undefined *****
FUN_1094778f8(undefined *****param_1,undefined *****param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *****pppppuVar1;
  undefined *****pppppuVar2;
  undefined *****pppppuVar3;
  undefined *****pppppuVar4;
  undefined ****ppppuVar5;
  char cVar6;
  int iVar7;
  undefined *****pppppuVar8;
  undefined *****pppppuVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined *****unaff_x19;
  undefined *****unaff_x20;
  undefined ****ppppuVar11;
  undefined ***pppuStack_2a8;
  undefined1 uStack_2a0;
  undefined ***pppuStack_298;
  char cStack_290;
  undefined ***pppuStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined ***pppuStack_250;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  undefined ***apppuStack_230 [2];
  undefined1 auStack_220 [24];
  undefined8 auStack_208 [2];
  char cStack_1f1;
  long alStack_1f0 [3];
  long *plStack_1d8;
  undefined ****ppppuStack_1d0;
  undefined ****ppppuStack_1c8;
  undefined ****ppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  char cStack_1a8;
  undefined1 uStack_1a7;
  char cStack_178;
  long lStack_138;
  undefined ****ppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined ***apppuStack_d8 [3];
  undefined ****ppppuStack_c0;
  long lStack_b8;
  undefined ***apppuStack_80 [3];
  long lStack_68;
  undefined ****ppppuStack_60;
  undefined ****ppppuStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined ***apppuStack_40 [3];
  long lStack_28;
  
  pppppuVar2 = (undefined *****)apppuStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = param_1;
  pppppuVar4 = param_2;
  if (param_2 != param_1) {
    pppppuVar1 = (undefined *****)param_1[3];
    pppppuVar8 = (undefined *****)param_2[3];
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (pppppuVar1 == param_1) {
      if (pppppuVar8 == param_2) {
        (*(code *)(*pppppuVar1)[3])(pppppuVar1,apppuStack_40);
        (*(code *)(*param_1[3])[4])();
        param_1[3] = (undefined ****)0x0;
        (*(code *)(*param_2[3])[3])(param_2[3],param_1);
        (*(code *)(*param_2[3])[4])();
        param_2[3] = (undefined ****)0x0;
        param_1[3] = (undefined ****)param_1;
        (*(code *)apppuStack_40[0][3])(apppuStack_40);
        (*(code *)apppuStack_40[0][4])();
      }
      else {
        (*(code *)(*pppppuVar1)[3])();
        pppppuVar2 = (undefined *****)param_1[3];
        (*(code *)(*pppppuVar2)[4])();
        param_1[3] = param_2[3];
      }
      param_2[3] = (undefined ****)param_2;
      pppppuVar1 = pppppuVar2;
    }
    else if (pppppuVar8 == param_2) {
      pppppuVar4 = param_1;
      (*(code *)(*pppppuVar8)[3])(pppppuVar8);
      pppppuVar1 = (undefined *****)param_2[3];
      (*(code *)(*pppppuVar1)[4])();
      param_2[3] = param_1[3];
      param_1[3] = (undefined ****)param_1;
    }
    else {
      param_1[3] = (undefined ****)pppppuVar8;
      param_2[3] = (undefined ****)pppppuVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pppppuVar8 = (undefined *****)apppuStack_80;
  ppppuStack_60 = (undefined ****)unaff_x20;
  ppppuStack_58 = (undefined ****)unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  pcStack_48 = FUN_109477a64;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar2 = pppppuVar4;
  if (pppppuVar4 != pppppuVar1) {
    pppppuVar3 = (undefined *****)pppppuVar1[3];
    pppppuVar9 = (undefined *****)pppppuVar4[3];
    if (pppppuVar3 == pppppuVar1) {
      if (pppppuVar9 == pppppuVar4) {
        (*(code *)(*pppppuVar3)[3])(pppppuVar3,apppuStack_80);
        (*(code *)(*pppppuVar1[3])[4])();
        pppppuVar1[3] = (undefined ****)0x0;
        (*(code *)(*pppppuVar4[3])[3])(pppppuVar4[3],pppppuVar1);
        (*(code *)(*pppppuVar4[3])[4])();
        pppppuVar4[3] = (undefined ****)0x0;
        pppppuVar1[3] = (undefined ****)pppppuVar1;
        (*(code *)apppuStack_80[0][3])(apppuStack_80);
        (*(code *)apppuStack_80[0][4])();
      }
      else {
        (*(code *)(*pppppuVar3)[3])();
        pppppuVar8 = (undefined *****)pppppuVar1[3];
        (*(code *)(*pppppuVar8)[4])();
        pppppuVar1[3] = pppppuVar4[3];
      }
      pppppuVar4[3] = (undefined ****)pppppuVar4;
      pppppuVar1 = pppppuVar8;
    }
    else if (pppppuVar9 == pppppuVar4) {
      pppppuVar2 = pppppuVar1;
      (*(code *)(*pppppuVar9)[3])(pppppuVar9);
      pppppuVar8 = (undefined *****)pppppuVar4[3];
      (*(code *)(*pppppuVar8)[4])();
      pppppuVar4[3] = pppppuVar1[3];
      pppppuVar1[3] = (undefined ****)pppppuVar1;
      pppppuVar1 = pppppuVar8;
    }
    else {
      pppppuVar1[3] = (undefined ****)pppppuVar9;
      pppppuVar4[3] = (undefined ****)pppppuVar3;
      pppppuVar1 = pppppuVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_e8 = (undefined ****)pppppuVar1;
  ppppuStack_e0 = (undefined ****)pppppuVar2;
  FUN_109382f8c(apppuStack_d8,param_3);
  pppppuVar1 = &ppppuStack_e8;
  ppppuVar5 = apppuStack_d8;
  FUN_1094781a8(extraout_x8,pppppuVar1,ppppuVar5,param_4,param_5);
  iVar7 = (int)pppppuVar1;
  pppppuVar1 = (undefined *****)ppppuStack_c0;
  if (ppppuStack_c0 == apppuStack_d8) {
    lVar10 = 0x20;
LAB_109477c48:
    (**(code **)((long)*ppppuStack_c0 + lVar10))();
  }
  else if ((undefined *****)ppppuStack_c0 != (undefined *****)0x0) {
    lVar10 = 0x28;
    goto LAB_109477c48;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  if (ppppuStack_c0 == apppuStack_d8) {
    lVar10 = 0x20;
LAB_109477ca4:
    (**(code **)((long)*ppppuStack_c0 + lVar10))();
  }
  else if ((undefined *****)ppppuStack_c0 != (undefined *****)0x0) {
    lVar10 = 0x28;
    goto LAB_109477ca4;
  }
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pppppuVar1[3] == (undefined ****)0x0) {
    uStack_1a7 = *(undefined1 *)(pppppuVar1 + 0x17);
    ppppuStack_1c0 = (undefined ****)0x0;
    ppppuStack_1c8 = (undefined ****)0x0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    cStack_1a8 = '\0';
    ppppuStack_1d0 = ppppuVar5;
    FUN_109479f24(pppppuVar1,&ppppuStack_1d0);
    if (iVar7 != 0) {
      iVar7 = (int)pppppuVar1 + 0x28;
      FUN_1094782ac();
      *(int *)(pppppuVar1 + 4) = iVar7;
      if (iVar7 != 0xf) {
        ppppuVar11 = pppppuVar1[9];
        FUN_109479a1c(auStack_208,pppppuVar1 + 5);
        pppuStack_248 = (undefined ***)pppppuVar1[10];
        pppuStack_250 = (undefined ***)pppppuVar1[9];
        pppuStack_240 = (undefined ***)pppppuVar1[0xb];
        func_0x000107c31940(auStack_280,"value");
        FUN_109479b08(auStack_268,pppppuVar1,0xf,auStack_280);
        FUN_109384a64(apppuStack_230,0x65,&pppuStack_250,auStack_268);
        pppppuVar1 = (undefined *****)apppuStack_230;
        FUN_109385a70(&ppppuStack_1d0,ppppuVar11,auStack_208,apppuStack_230);
        apppuStack_230[0] = (undefined ***)&PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_220);
        __ZNSt9exceptionD2Ev(apppuStack_230);
        if (cStack_251 < '\0') {
          __ZdlPv(auStack_268[0]);
        }
        if (cStack_269 < '\0') {
          __ZdlPv(auStack_280[0]);
        }
        if (cStack_1f1 < '\0') {
          __ZdlPv(auStack_208[0]);
        }
      }
    }
    if (cStack_1a8 == '\x01') {
      *(char *)ppppuVar5 = '\t';
      pppuStack_2a8 = ppppuVar5[1];
      ppppuVar5[1] = (undefined ***)0x0;
      FUN_109380ffc(&pppuStack_2a8);
    }
    pppppuVar4 = (undefined *****)ppppuStack_1c8;
    if ((undefined *****)ppppuStack_1c8 != (undefined *****)0x0) {
      ppppuStack_1c0 = ppppuStack_1c8;
      __ZdlPv();
    }
    goto LAB_109477fe0;
  }
  FUN_1093830cc(alStack_1f0,pppppuVar1);
  FUN_109385ac0(&ppppuStack_1d0,ppppuVar5,alStack_1f0,*(undefined1 *)(pppppuVar1 + 0x17));
  if (plStack_1d8 == alStack_1f0) {
    lVar10 = 0x20;
LAB_109477e80:
    (**(code **)(*plStack_1d8 + lVar10))();
  }
  else if (plStack_1d8 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_109477e80;
  }
  FUN_10947911c(pppppuVar1,&ppppuStack_1d0);
  if (iVar7 != 0) {
    iVar7 = (int)pppppuVar1 + 0x28;
    FUN_1094782ac();
    *(int *)(pppppuVar1 + 4) = iVar7;
    if (iVar7 != 0xf) {
      ppppuVar11 = pppppuVar1[9];
      FUN_109479a1c(auStack_208,pppppuVar1 + 5);
      pppuStack_248 = (undefined ***)pppppuVar1[10];
      pppuStack_250 = (undefined ***)pppppuVar1[9];
      pppuStack_240 = (undefined ***)pppppuVar1[0xb];
      func_0x000107c31940(auStack_280,"value");
      FUN_109479b08(auStack_268,pppppuVar1,0xf,auStack_280);
      FUN_109384a64(apppuStack_230,0x65,&pppuStack_250,auStack_268);
      pppppuVar1 = (undefined *****)apppuStack_230;
      FUN_109384928(&ppppuStack_1d0,ppppuVar11,auStack_208,apppuStack_230);
      apppuStack_230[0] = (undefined ***)&PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_220);
      __ZNSt9exceptionD2Ev(apppuStack_230);
      if (cStack_251 < '\0') {
        __ZdlPv(auStack_268[0]);
      }
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
      }
      if (cStack_1f1 < '\0') {
        __ZdlPv(auStack_208[0]);
      }
    }
  }
  if (cStack_178 == '\x01') {
    cStack_290 = *(char *)ppppuVar5;
    *(char *)ppppuVar5 = '\t';
    pppuStack_288 = ppppuVar5[1];
    ppppuVar5[1] = (undefined ***)0x0;
    ppppuVar5 = &pppuStack_288;
    cVar6 = cStack_290;
LAB_109477fd4:
    FUN_109380ffc(ppppuVar5,cVar6);
  }
  else if (*(char *)ppppuVar5 == '\t') {
    *(char *)ppppuVar5 = '\0';
    uStack_2a0 = 9;
    pppuStack_298 = ppppuVar5[1];
    ppppuVar5[1] = (undefined ***)0x0;
    ppppuVar5 = &pppuStack_298;
    cVar6 = '\t';
    goto LAB_109477fd4;
  }
  pppppuVar4 = &ppppuStack_1d0;
  FUN_109387a34();
LAB_109477fe0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  apppuStack_230[0] = (undefined ***)&PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(pppppuVar1 + 2);
  __ZNSt9exceptionD2Ev(apppuStack_230);
  if (cStack_251 < '\0') {
    __ZdlPv(auStack_268[0]);
  }
  if (cStack_269 < '\0') {
    __ZdlPv(auStack_280[0]);
  }
  if (cStack_1f1 < '\0') {
    __ZdlPv(auStack_208[0]);
  }
  if ((undefined *****)ppppuStack_1c8 != (undefined *****)0x0) {
    ppppuStack_1c0 = ppppuStack_1c8;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_1094790dc(pppppuVar4 + 5);
  pppppuVar1 = (undefined *****)pppppuVar4[3];
  if (pppppuVar1 == pppppuVar4) {
    lVar10 = 0x20;
  }
  else {
    if (pppppuVar1 == (undefined *****)0x0) {
      return pppppuVar4;
    }
    lVar10 = 0x28;
  }
  (**(code **)((long)*pppppuVar1 + lVar10))();
  return pppppuVar4;
}



/* Entry: 109477a64; end: 109477bcf;  */

undefined *****
FUN_109477a64(undefined *****param_1,undefined *****param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *****pppppuVar1;
  undefined *****pppppuVar2;
  undefined ****ppppuVar3;
  undefined *****pppppuVar4;
  char cVar5;
  int iVar6;
  undefined *****pppppuVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined ****ppppuVar9;
  undefined ***pppuStack_268;
  undefined1 uStack_260;
  undefined ***pppuStack_258;
  char cStack_250;
  undefined ***pppuStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  undefined8 auStack_228 [2];
  char cStack_211;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  undefined ***apppuStack_1f0 [2];
  undefined1 auStack_1e0 [24];
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  long alStack_1b0 [3];
  long *plStack_198;
  undefined ****ppppuStack_190;
  undefined ****ppppuStack_188;
  undefined ****ppppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char cStack_168;
  undefined1 uStack_167;
  char cStack_138;
  long lStack_f8;
  undefined ****ppppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined ***apppuStack_98 [3];
  undefined ****ppppuStack_80;
  long lStack_78;
  undefined ***apppuStack_40 [3];
  long lStack_28;
  
  pppppuVar2 = (undefined *****)apppuStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = param_2;
  if (param_2 != param_1) {
    pppppuVar1 = (undefined *****)param_1[3];
    pppppuVar7 = (undefined *****)param_2[3];
    if (pppppuVar1 == param_1) {
      if (pppppuVar7 == param_2) {
        (*(code *)(*pppppuVar1)[3])(pppppuVar1,apppuStack_40);
        (*(code *)(*param_1[3])[4])();
        param_1[3] = (undefined ****)0x0;
        (*(code *)(*param_2[3])[3])(param_2[3],param_1);
        (*(code *)(*param_2[3])[4])();
        param_2[3] = (undefined ****)0x0;
        param_1[3] = (undefined ****)param_1;
        (*(code *)apppuStack_40[0][3])(apppuStack_40);
        (*(code *)apppuStack_40[0][4])();
      }
      else {
        (*(code *)(*pppppuVar1)[3])();
        pppppuVar2 = (undefined *****)param_1[3];
        (*(code *)(*pppppuVar2)[4])();
        param_1[3] = param_2[3];
      }
      param_2[3] = (undefined ****)param_2;
      param_1 = pppppuVar2;
    }
    else if (pppppuVar7 == param_2) {
      pppppuVar4 = param_1;
      (*(code *)(*pppppuVar7)[3])(pppppuVar7);
      pppppuVar2 = (undefined *****)param_2[3];
      (*(code *)(*pppppuVar2)[4])();
      param_2[3] = param_1[3];
      param_1[3] = (undefined ****)param_1;
      param_1 = pppppuVar2;
    }
    else {
      param_1[3] = (undefined ****)pppppuVar7;
      param_2[3] = (undefined ****)pppppuVar1;
      param_1 = pppppuVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_a8 = (undefined ****)param_1;
  ppppuStack_a0 = (undefined ****)pppppuVar4;
  FUN_109382f8c(apppuStack_98,param_3);
  pppppuVar4 = &ppppuStack_a8;
  ppppuVar3 = apppuStack_98;
  FUN_1094781a8(extraout_x8,pppppuVar4,ppppuVar3,param_4,param_5);
  iVar6 = (int)pppppuVar4;
  pppppuVar4 = (undefined *****)ppppuStack_80;
  if (ppppuStack_80 == apppuStack_98) {
    lVar8 = 0x20;
LAB_109477c48:
    (**(code **)((long)*ppppuStack_80 + lVar8))();
  }
  else if ((undefined *****)ppppuStack_80 != (undefined *****)0x0) {
    lVar8 = 0x28;
    goto LAB_109477c48;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  if (ppppuStack_80 == apppuStack_98) {
    lVar8 = 0x20;
LAB_109477ca4:
    (**(code **)((long)*ppppuStack_80 + lVar8))();
  }
  else if ((undefined *****)ppppuStack_80 != (undefined *****)0x0) {
    lVar8 = 0x28;
    goto LAB_109477ca4;
  }
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pppppuVar4[3] == (undefined ****)0x0) {
    uStack_167 = *(undefined1 *)(pppppuVar4 + 0x17);
    ppppuStack_180 = (undefined ****)0x0;
    ppppuStack_188 = (undefined ****)0x0;
    uStack_170 = 0;
    uStack_178 = 0;
    cStack_168 = '\0';
    ppppuStack_190 = ppppuVar3;
    FUN_109479f24(pppppuVar4,&ppppuStack_190);
    if (iVar6 != 0) {
      iVar6 = (int)pppppuVar4 + 0x28;
      FUN_1094782ac();
      *(int *)(pppppuVar4 + 4) = iVar6;
      if (iVar6 != 0xf) {
        ppppuVar9 = pppppuVar4[9];
        FUN_109479a1c(auStack_1c8,pppppuVar4 + 5);
        pppuStack_208 = (undefined ***)pppppuVar4[10];
        pppuStack_210 = (undefined ***)pppppuVar4[9];
        pppuStack_200 = (undefined ***)pppppuVar4[0xb];
        func_0x000107c31940(auStack_240,"value");
        FUN_109479b08(auStack_228,pppppuVar4,0xf,auStack_240);
        FUN_109384a64(apppuStack_1f0,0x65,&pppuStack_210,auStack_228);
        pppppuVar4 = (undefined *****)apppuStack_1f0;
        FUN_109385a70(&ppppuStack_190,ppppuVar9,auStack_1c8,apppuStack_1f0);
        apppuStack_1f0[0] = (undefined ***)&PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_1e0);
        __ZNSt9exceptionD2Ev(apppuStack_1f0);
        if (cStack_211 < '\0') {
          __ZdlPv(auStack_228[0]);
        }
        if (cStack_229 < '\0') {
          __ZdlPv(auStack_240[0]);
        }
        if (cStack_1b1 < '\0') {
          __ZdlPv(auStack_1c8[0]);
        }
      }
    }
    if (cStack_168 == '\x01') {
      *(char *)ppppuVar3 = '\t';
      pppuStack_268 = ppppuVar3[1];
      ppppuVar3[1] = (undefined ***)0x0;
      FUN_109380ffc(&pppuStack_268);
    }
    pppppuVar2 = (undefined *****)ppppuStack_188;
    if ((undefined *****)ppppuStack_188 != (undefined *****)0x0) {
      ppppuStack_180 = ppppuStack_188;
      __ZdlPv();
    }
    goto LAB_109477fe0;
  }
  FUN_1093830cc(alStack_1b0,pppppuVar4);
  FUN_109385ac0(&ppppuStack_190,ppppuVar3,alStack_1b0,*(undefined1 *)(pppppuVar4 + 0x17));
  if (plStack_198 == alStack_1b0) {
    lVar8 = 0x20;
LAB_109477e80:
    (**(code **)(*plStack_198 + lVar8))();
  }
  else if (plStack_198 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_109477e80;
  }
  FUN_10947911c(pppppuVar4,&ppppuStack_190);
  if (iVar6 != 0) {
    iVar6 = (int)pppppuVar4 + 0x28;
    FUN_1094782ac();
    *(int *)(pppppuVar4 + 4) = iVar6;
    if (iVar6 != 0xf) {
      ppppuVar9 = pppppuVar4[9];
      FUN_109479a1c(auStack_1c8,pppppuVar4 + 5);
      pppuStack_208 = (undefined ***)pppppuVar4[10];
      pppuStack_210 = (undefined ***)pppppuVar4[9];
      pppuStack_200 = (undefined ***)pppppuVar4[0xb];
      func_0x000107c31940(auStack_240,"value");
      FUN_109479b08(auStack_228,pppppuVar4,0xf,auStack_240);
      FUN_109384a64(apppuStack_1f0,0x65,&pppuStack_210,auStack_228);
      pppppuVar4 = (undefined *****)apppuStack_1f0;
      FUN_109384928(&ppppuStack_190,ppppuVar9,auStack_1c8,apppuStack_1f0);
      apppuStack_1f0[0] = (undefined ***)&PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_1e0);
      __ZNSt9exceptionD2Ev(apppuStack_1f0);
      if (cStack_211 < '\0') {
        __ZdlPv(auStack_228[0]);
      }
      if (cStack_229 < '\0') {
        __ZdlPv(auStack_240[0]);
      }
      if (cStack_1b1 < '\0') {
        __ZdlPv(auStack_1c8[0]);
      }
    }
  }
  if (cStack_138 == '\x01') {
    cStack_250 = *(char *)ppppuVar3;
    *(char *)ppppuVar3 = '\t';
    pppuStack_248 = ppppuVar3[1];
    ppppuVar3[1] = (undefined ***)0x0;
    ppppuVar3 = &pppuStack_248;
    cVar5 = cStack_250;
LAB_109477fd4:
    FUN_109380ffc(ppppuVar3,cVar5);
  }
  else if (*(char *)ppppuVar3 == '\t') {
    *(char *)ppppuVar3 = '\0';
    uStack_260 = 9;
    pppuStack_258 = ppppuVar3[1];
    ppppuVar3[1] = (undefined ***)0x0;
    ppppuVar3 = &pppuStack_258;
    cVar5 = '\t';
    goto LAB_109477fd4;
  }
  pppppuVar2 = &ppppuStack_190;
  FUN_109387a34();
LAB_109477fe0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  apppuStack_1f0[0] = (undefined ***)&PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(pppppuVar4 + 2);
  __ZNSt9exceptionD2Ev(apppuStack_1f0);
  if (cStack_211 < '\0') {
    __ZdlPv(auStack_228[0]);
  }
  if (cStack_229 < '\0') {
    __ZdlPv(auStack_240[0]);
  }
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  if ((undefined *****)ppppuStack_188 != (undefined *****)0x0) {
    ppppuStack_180 = ppppuStack_188;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_1094790dc(pppppuVar2 + 5);
  pppppuVar4 = (undefined *****)pppppuVar2[3];
  if (pppppuVar4 == pppppuVar2) {
    lVar8 = 0x20;
  }
  else {
    if (pppppuVar4 == (undefined *****)0x0) {
      return pppppuVar2;
    }
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppppuVar4 + lVar8))();
  return pppppuVar2;
}



/* Entry: 109477bd0; end: 109477cb7;  */

undefined ****
FUN_109477bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined ****ppppuVar1;
  undefined ***pppuVar2;
  undefined ****ppppuVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined **ppuStack_228;
  undefined1 uStack_220;
  undefined **ppuStack_218;
  char cStack_210;
  undefined **ppuStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **appuStack_1b0 [2];
  undefined1 auStack_1a0 [24];
  undefined8 auStack_188 [2];
  char cStack_171;
  long alStack_170 [3];
  long *plStack_158;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined1 uStack_127;
  char cStack_f8;
  long lStack_b8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = param_2;
  uStack_60 = param_3;
  FUN_109382f8c(appuStack_58,param_4);
  puVar6 = &uStack_68;
  pppuVar2 = appuStack_58;
  FUN_1094781a8(param_1,puVar6,pppuVar2,param_5,param_6);
  iVar5 = (int)puVar6;
  ppppuVar3 = (undefined ****)pppuStack_40;
  if (pppuStack_40 == appuStack_58) {
    lVar7 = 0x20;
LAB_109477c48:
    (**(code **)((long)*pppuStack_40 + lVar7))();
  }
  else if ((undefined ****)pppuStack_40 != (undefined ****)0x0) {
    lVar7 = 0x28;
    goto LAB_109477c48;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == appuStack_58) {
    lVar7 = 0x20;
LAB_109477ca4:
    (**(code **)((long)*pppuStack_40 + lVar7))();
  }
  else if ((undefined ****)pppuStack_40 != (undefined ****)0x0) {
    lVar7 = 0x28;
    goto LAB_109477ca4;
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppppuVar3[3] == (undefined ***)0x0) {
    uStack_127 = *(undefined1 *)(ppppuVar3 + 0x17);
    pppuStack_140 = (undefined ***)0x0;
    pppuStack_148 = (undefined ***)0x0;
    uStack_130 = 0;
    uStack_138 = 0;
    cStack_128 = '\0';
    pppuStack_150 = pppuVar2;
    FUN_109479f24(ppppuVar3,&pppuStack_150);
    if (iVar5 != 0) {
      iVar5 = (int)ppppuVar3 + 0x28;
      FUN_1094782ac();
      *(int *)(ppppuVar3 + 4) = iVar5;
      if (iVar5 != 0xf) {
        pppuVar8 = ppppuVar3[9];
        FUN_109479a1c(auStack_188,ppppuVar3 + 5);
        ppuStack_1c8 = (undefined **)ppppuVar3[10];
        ppuStack_1d0 = (undefined **)ppppuVar3[9];
        ppuStack_1c0 = (undefined **)ppppuVar3[0xb];
        func_0x000107c31940(auStack_200,"value");
        FUN_109479b08(auStack_1e8,ppppuVar3,0xf,auStack_200);
        FUN_109384a64(appuStack_1b0,0x65,&ppuStack_1d0,auStack_1e8);
        ppppuVar3 = (undefined ****)appuStack_1b0;
        FUN_109385a70(&pppuStack_150,pppuVar8,auStack_188,appuStack_1b0);
        appuStack_1b0[0] = &PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_1a0);
        __ZNSt9exceptionD2Ev(appuStack_1b0);
        if (cStack_1d1 < '\0') {
          __ZdlPv(auStack_1e8[0]);
        }
        if (cStack_1e9 < '\0') {
          __ZdlPv(auStack_200[0]);
        }
        if (cStack_171 < '\0') {
          __ZdlPv(auStack_188[0]);
        }
      }
    }
    if (cStack_128 == '\x01') {
      *(char *)pppuVar2 = '\t';
      ppuStack_228 = pppuVar2[1];
      pppuVar2[1] = (undefined **)0x0;
      FUN_109380ffc(&ppuStack_228);
    }
    ppppuVar1 = (undefined ****)pppuStack_148;
    if ((undefined ****)pppuStack_148 != (undefined ****)0x0) {
      pppuStack_140 = pppuStack_148;
      __ZdlPv();
    }
    goto LAB_109477fe0;
  }
  FUN_1093830cc(alStack_170,ppppuVar3);
  FUN_109385ac0(&pppuStack_150,pppuVar2,alStack_170,*(undefined1 *)(ppppuVar3 + 0x17));
  if (plStack_158 == alStack_170) {
    lVar7 = 0x20;
LAB_109477e80:
    (**(code **)(*plStack_158 + lVar7))();
  }
  else if (plStack_158 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_109477e80;
  }
  FUN_10947911c(ppppuVar3,&pppuStack_150);
  if (iVar5 != 0) {
    iVar5 = (int)ppppuVar3 + 0x28;
    FUN_1094782ac();
    *(int *)(ppppuVar3 + 4) = iVar5;
    if (iVar5 != 0xf) {
      pppuVar8 = ppppuVar3[9];
      FUN_109479a1c(auStack_188,ppppuVar3 + 5);
      ppuStack_1c8 = (undefined **)ppppuVar3[10];
      ppuStack_1d0 = (undefined **)ppppuVar3[9];
      ppuStack_1c0 = (undefined **)ppppuVar3[0xb];
      func_0x000107c31940(auStack_200,"value");
      FUN_109479b08(auStack_1e8,ppppuVar3,0xf,auStack_200);
      FUN_109384a64(appuStack_1b0,0x65,&ppuStack_1d0,auStack_1e8);
      ppppuVar3 = (undefined ****)appuStack_1b0;
      FUN_109384928(&pppuStack_150,pppuVar8,auStack_188,appuStack_1b0);
      appuStack_1b0[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_1a0);
      __ZNSt9exceptionD2Ev(appuStack_1b0);
      if (cStack_1d1 < '\0') {
        __ZdlPv(auStack_1e8[0]);
      }
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
      }
      if (cStack_171 < '\0') {
        __ZdlPv(auStack_188[0]);
      }
    }
  }
  if (cStack_f8 == '\x01') {
    cStack_210 = *(char *)pppuVar2;
    *(char *)pppuVar2 = '\t';
    ppuStack_208 = pppuVar2[1];
    pppuVar2[1] = (undefined **)0x0;
    pppuVar2 = &ppuStack_208;
    cVar4 = cStack_210;
LAB_109477fd4:
    FUN_109380ffc(pppuVar2,cVar4);
  }
  else if (*(char *)pppuVar2 == '\t') {
    *(char *)pppuVar2 = '\0';
    uStack_220 = 9;
    ppuStack_218 = pppuVar2[1];
    pppuVar2[1] = (undefined **)0x0;
    pppuVar2 = &ppuStack_218;
    cVar4 = '\t';
    goto LAB_109477fd4;
  }
  ppppuVar1 = &pppuStack_150;
  FUN_109387a34();
LAB_109477fe0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  appuStack_1b0[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(ppppuVar3 + 2);
  __ZNSt9exceptionD2Ev(appuStack_1b0);
  if (cStack_1d1 < '\0') {
    __ZdlPv(auStack_1e8[0]);
  }
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  if ((undefined ****)pppuStack_148 != (undefined ****)0x0) {
    pppuStack_140 = pppuStack_148;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_1094790dc(ppppuVar1 + 5);
  ppppuVar3 = (undefined ****)ppppuVar1[3];
  if (ppppuVar3 == ppppuVar1) {
    lVar7 = 0x20;
  }
  else {
    if (ppppuVar3 == (undefined ****)0x0) {
      return ppppuVar1;
    }
    lVar7 = 0x28;
  }
  (**(code **)((long)*ppppuVar3 + lVar7))();
  return ppppuVar1;
}



/* Entry: 109477cb8; end: 109478157;  */

char ** FUN_109477cb8(undefined ***param_1,int param_2,char *param_3)

{
  int iVar1;
  char **ppcVar2;
  undefined8 *puVar3;
  char **ppcVar4;
  char cVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  char cStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **appuStack_140 [2];
  undefined1 auStack_130 [24];
  undefined8 auStack_118 [2];
  char cStack_101;
  long alStack_100 [3];
  long *plStack_e8;
  char *pcStack_e0;
  char **ppcStack_d8;
  char **ppcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined1 uStack_b7;
  char cStack_88;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[3] == (undefined **)0x0) {
    uStack_b7 = *(undefined1 *)(param_1 + 0x17);
    ppcStack_d0 = (char **)0x0;
    ppcStack_d8 = (char **)0x0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    cStack_b8 = '\0';
    pcStack_e0 = param_3;
    FUN_109479f24(param_1,&pcStack_e0);
    if (param_2 != 0) {
      iVar1 = (int)param_1 + 0x28;
      FUN_1094782ac();
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0xf) {
        ppuVar7 = param_1[9];
        FUN_109479a1c(auStack_118,param_1 + 5);
        ppuStack_158 = param_1[10];
        ppuStack_160 = param_1[9];
        ppuStack_150 = param_1[0xb];
        func_0x000107c31940(auStack_190,"value");
        FUN_109479b08(auStack_178,param_1,0xf,auStack_190);
        FUN_109384a64(appuStack_140,0x65,&ppuStack_160,auStack_178);
        param_1 = appuStack_140;
        FUN_109385a70(&pcStack_e0,ppuVar7,auStack_118,appuStack_140);
        appuStack_140[0] = &PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_130);
        __ZNSt9exceptionD2Ev(appuStack_140);
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        if (cStack_179 < '\0') {
          __ZdlPv(auStack_190[0]);
        }
        if (cStack_101 < '\0') {
          __ZdlPv(auStack_118[0]);
        }
      }
    }
    if (cStack_b8 == '\x01') {
      *param_3 = '\t';
      uStack_1b8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      FUN_109380ffc(&uStack_1b8);
    }
    ppcVar2 = ppcStack_d8;
    if (ppcStack_d8 != (char **)0x0) {
      ppcStack_d0 = ppcStack_d8;
      __ZdlPv();
    }
    goto LAB_109477fe0;
  }
  FUN_1093830cc(alStack_100,param_1);
  FUN_109385ac0(&pcStack_e0,param_3,alStack_100,*(undefined1 *)(param_1 + 0x17));
  if (plStack_e8 == alStack_100) {
    lVar6 = 0x20;
LAB_109477e80:
    (**(code **)(*plStack_e8 + lVar6))();
  }
  else if (plStack_e8 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_109477e80;
  }
  FUN_10947911c(param_1,&pcStack_e0);
  if (param_2 != 0) {
    iVar1 = (int)param_1 + 0x28;
    FUN_1094782ac();
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0xf) {
      ppuVar7 = param_1[9];
      FUN_109479a1c(auStack_118,param_1 + 5);
      ppuStack_158 = param_1[10];
      ppuStack_160 = param_1[9];
      ppuStack_150 = param_1[0xb];
      func_0x000107c31940(auStack_190,"value");
      FUN_109479b08(auStack_178,param_1,0xf,auStack_190);
      FUN_109384a64(appuStack_140,0x65,&ppuStack_160,auStack_178);
      param_1 = appuStack_140;
      FUN_109384928(&pcStack_e0,ppuVar7,auStack_118,appuStack_140);
      appuStack_140[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_130);
      __ZNSt9exceptionD2Ev(appuStack_140);
      if (cStack_161 < '\0') {
        __ZdlPv(auStack_178[0]);
      }
      if (cStack_179 < '\0') {
        __ZdlPv(auStack_190[0]);
      }
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
    }
  }
  if (cStack_88 == '\x01') {
    cStack_1a0 = *param_3;
    *param_3 = '\t';
    uStack_198 = *(undefined8 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    puVar3 = &uStack_198;
    cVar5 = cStack_1a0;
LAB_109477fd4:
    FUN_109380ffc(puVar3,cVar5);
  }
  else if (*param_3 == '\t') {
    *param_3 = '\0';
    uStack_1b0 = 9;
    uStack_1a8 = *(undefined8 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    puVar3 = &uStack_1a8;
    cVar5 = '\t';
    goto LAB_109477fd4;
  }
  ppcVar2 = &pcStack_e0;
  FUN_109387a34();
LAB_109477fe0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppcVar2;
  }
  ___stack_chk_fail();
  appuStack_140[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(appuStack_140);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  if (ppcStack_d8 != (char **)0x0) {
    ppcStack_d0 = ppcStack_d8;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_1094790dc(ppcVar2 + 5);
  ppcVar4 = (char **)ppcVar2[3];
  if (ppcVar4 == ppcVar2) {
    lVar6 = 0x20;
  }
  else {
    if (ppcVar4 == (char **)0x0) {
      return ppcVar2;
    }
    lVar6 = 0x28;
  }
  (**(code **)(*ppcVar4 + lVar6))();
  return ppcVar2;
}



/* Entry: 109478158; end: 1094781a7;  */

long * FUN_109478158(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_1094790dc(param_1 + 5);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1094781a8; end: 10947827b;  */

long FUN_1094781a8(long param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_1093830cc(param_1,param_3);
  *(undefined4 *)(lVar2 + 0x20) = 0;
  uVar3 = *param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_2[1];
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  *(undefined1 *)(lVar2 + 0x38) = param_5;
  *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(char **)(lVar2 + 0x90) = "";
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  FUN_10947827c();
  *(int *)(param_1 + 0xb0) = (int)lVar2;
  *(undefined1 *)(param_1 + 0xb8) = param_4;
  iVar1 = (int)param_1 + 0x28;
  FUN_1094782ac();
  *(int *)(param_1 + 0x20) = iVar1;
  return param_1;
}



/* Entry: 10947827c; end: 1094782ab;  */

int FUN_10947827c(undefined8 *param_1)

{
  char cVar1;
  
  _localeconv();
  if ((char *)*param_1 == (char *)0x0) {
    cVar1 = '.';
  }
  else {
    cVar1 = *(char *)*param_1;
  }
  return (int)cVar1;
}



/* Entry: 1094782ac; end: 10947853f;  */

undefined4 * FUN_1094782ac(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((*(long *)(param_2 + 8) == 0) && (puVar5 = param_2, FUN_109478540(), ((ulong)puVar5 & 1) == 0)
     ) {
    puVar12 = &UNK_10f56787a;
    goto LAB_1094783c4;
  }
  do {
    FUN_109478e24(param_2);
    uVar2 = param_2[5];
    uVar11 = (ulong)uVar2;
  } while (uVar2 < 0x21 && (1L << (uVar11 & 0x3f) & 0x100002600U) != 0);
  cVar1 = *(char *)(param_2 + 4);
  while ((cVar1 == '\x01' && (uVar2 = (uint)uVar11, uVar2 == 0x2f))) {
    puVar5 = param_2;
    func_0x0001094785a0();
    if ((int)puVar5 == 0) {
      return (undefined4 *)0xe;
    }
    do {
      FUN_109478e24(param_2);
      uVar2 = param_2[5];
      uVar11 = (ulong)uVar2;
    } while (uVar2 < 0x21 && (1L << (uVar11 & 0x3f) & 0x100002600U) != 0);
    cVar1 = *(char *)(param_2 + 4);
  }
  if ((int)uVar2 < 0x3a) {
    if ((int)uVar2 < 0x2d) {
      if (uVar2 + 1 < 2) {
        return (undefined4 *)0xf;
      }
      if (uVar2 == 0x22) {
        unaff_x29 = &stack0xfffffffffffffff0;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_109478f1c();
        unaff_x21 = &UNK_10f567b51;
        unaff_x22 = &UNK_10dfcb630;
code_r0x000109478690:
        puVar5 = param_2;
        FUN_109478e24();
        puVar6 = (undefined4 *)0x4;
        puVar12 = unaff_x21;
        puVar14 = unaff_x20;
        switch((int)puVar5) {
        case 0:
          puVar12 = &UNK_10f567a2d;
          break;
        case 1:
          puVar12 = &UNK_10f567a76;
          break;
        case 2:
          puVar12 = &UNK_10f567abf;
          break;
        case 3:
          puVar12 = &UNK_10f567b08;
          break;
        case 4:
          break;
        case 5:
          puVar12 = &UNK_10f567b9a;
          break;
        case 6:
          puVar12 = &UNK_10f567be3;
          break;
        case 7:
          puVar12 = &UNK_10f567c2c;
          break;
        case 8:
          puVar12 = &UNK_10f567c75;
          break;
        case 9:
          puVar12 = &UNK_10f567cc3;
          break;
        case 10:
          puVar12 = &UNK_10f567d11;
          break;
        case 0xb:
          puVar12 = &UNK_10f567d5f;
          break;
        case 0xc:
          puVar12 = &UNK_10f567da7;
          break;
        case 0xd:
          puVar12 = &UNK_10f567df5;
          break;
        case 0xe:
          puVar12 = &UNK_10f567e43;
          break;
        case 0xf:
          puVar12 = &UNK_10f567e8b;
          break;
        case 0x10:
          puVar12 = &UNK_10f567ed3;
          break;
        case 0x11:
          puVar12 = &UNK_10f567f1c;
          break;
        case 0x12:
          puVar12 = &UNK_10f567f65;
          break;
        case 0x13:
          puVar12 = &UNK_10f567fae;
          break;
        case 0x14:
          puVar12 = &UNK_10f567ff7;
          break;
        case 0x15:
          puVar12 = &UNK_10f568040;
          break;
        case 0x16:
          puVar12 = &UNK_10f568089;
          break;
        case 0x17:
          puVar12 = &UNK_10f5680d2;
          break;
        case 0x18:
          puVar12 = &UNK_10f56811b;
          break;
        case 0x19:
          puVar12 = &UNK_10f568164;
          break;
        case 0x1a:
          puVar12 = &UNK_10f5681ac;
          break;
        case 0x1b:
          puVar12 = &UNK_10f5681f5;
          break;
        case 0x1c:
          puVar12 = &UNK_10f56823e;
          break;
        case 0x1d:
          puVar12 = &UNK_10f568286;
          break;
        case 0x1e:
          puVar12 = &UNK_10f5682ce;
          break;
        case 0x1f:
          puVar12 = &UNK_10f568316;
          break;
        case 0x20:
        case 0x21:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
          uVar2 = param_2[5];
          goto code_r0x0001094786c0;
        case 0x22:
          goto code_r0x000109478acc;
        case 0x5c:
          puVar5 = param_2;
          FUN_109478e24();
          puVar12 = &UNK_10f5679f9;
          iVar4 = (int)puVar5;
          if (iVar4 < 0x66) {
            if (iVar4 < 0x5c) {
              if (iVar4 == 0x22) {
                uVar2 = 0x22;
              }
              else {
                if (iVar4 != 0x2f) break;
                uVar2 = 0x2f;
              }
            }
            else if (iVar4 == 0x5c) {
              uVar2 = 0x5c;
            }
            else {
              if (iVar4 != 0x62) break;
              uVar2 = 8;
            }
          }
          else if (iVar4 < 0x72) {
            if (iVar4 == 0x66) {
              uVar2 = 0xc;
            }
            else {
              if (iVar4 != 0x6e) break;
              uVar2 = 10;
            }
          }
          else if (iVar4 == 0x72) {
            uVar2 = 0xd;
          }
          else {
            if (iVar4 != 0x74) {
              if (iVar4 == 0x75) {
                puVar14 = param_2;
                FUN_109478f70();
                uVar2 = (uint)puVar14;
                if (uVar2 == 0xffffffff) {
code_r0x000109478afc:
                  puVar12 = &UNK_10f567933;
                }
                else {
                  unaff_x20 = puVar14;
                  if ((uVar2 & 0xfffffc00) == 0xd800) {
                    puVar5 = param_2;
                    FUN_109478e24();
                    if (((int)puVar5 == 0x5c) &&
                       (puVar5 = param_2, FUN_109478e24(), (int)puVar5 == 0x75)) {
                      puVar5 = param_2;
                      FUN_109478f70();
                      uVar3 = (uint)puVar5;
                      if (uVar3 == 0xffffffff) goto code_r0x000109478afc;
                      if (uVar3 >> 10 == 0x37) {
                        puVar14 = (undefined4 *)(ulong)(uVar3 + uVar2 * 0x400 + 0xfca02400);
code_r0x0001094787d4:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,
                                   (uint)((ulong)puVar14 >> 0x12) & 0x3fff | 0xfffffff0);
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,(uint)puVar14 >> 0xc & 0x3f | 0xffffff80);
code_r0x0001094787f8:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,(uint)puVar14 >> 6 & 0x3f | 0xffffff80);
                        goto code_r0x000109478808;
                      }
                    }
                    puVar12 = &UNK_10f567969;
                  }
                  else {
                    if ((uVar2 & 0xfffffc00) != 0xdc00) {
                      if (0x7f < (int)uVar2) {
                        if (0x7ff < uVar2) {
                          if (uVar2 >> 0x10 != 0) goto code_r0x0001094787d4;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                    (param_2 + 0x14,uVar2 >> 0xc | 0xffffffe0);
                          goto code_r0x0001094787f8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,uVar2 >> 6 | 0xffffffc0);
code_r0x000109478808:
                        uVar2 = (uint)puVar14 & 0x3f | 0xffffff80;
                      }
                      goto code_r0x0001094786c0;
                    }
                    puVar12 = &UNK_10f5679b5;
                  }
                }
              }
              break;
            }
            uVar2 = 9;
          }
code_r0x0001094786c0:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(int)(char)uVar2);
          unaff_x20 = puVar14;
          goto code_r0x000109478690;
        default:
          puVar12 = &UNK_10f56835e;
          break;
        case 0xc2:
        case 0xc3:
        case 0xc4:
        case 0xc5:
        case 0xc6:
        case 199:
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
        case 0xd8:
        case 0xd9:
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xdd:
        case 0xde:
        case 0xdf:
          uStack_60 = 0xbf00000080;
          uVar10 = 2;
          goto code_r0x000109478850;
        case 0xe0:
          uStack_60 = 0xbf000000a0;
          goto code_r0x0001094786f4;
        case 0xe1:
        case 0xe2:
        case 0xe3:
        case 0xe4:
        case 0xe5:
        case 0xe6:
        case 0xe7:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xee:
        case 0xef:
          uStack_60 = 0xbf00000080;
          goto code_r0x0001094786f4;
        case 0xed:
          uStack_60 = 0x9f00000080;
code_r0x0001094786f4:
          uStack_58 = 0xbf00000080;
          uVar10 = 4;
code_r0x000109478850:
          puVar5 = param_2;
          param_1 = uStack_60;
          FUN_109479048(param_2,&uStack_60,uVar10);
          if (((ulong)puVar5 & 1) == 0) goto code_r0x000109478ac8;
          goto code_r0x000109478690;
        case 0xf0:
          puVar7 = (undefined8 *)&UNK_10dfcb840;
          goto code_r0x00010947883c;
        case 0xf1:
        case 0xf2:
        case 0xf3:
          puVar7 = (undefined8 *)&UNK_10dfcb858;
          goto code_r0x00010947883c;
        case 0xf4:
          puVar7 = (undefined8 *)&UNK_10dfcb870;
code_r0x00010947883c:
          uStack_50 = 0xbf00000080;
          uStack_58 = puVar7[1];
          uStack_60 = *puVar7;
          uVar10 = 6;
          goto code_r0x000109478850;
        case -1:
          puVar12 = &UNK_10f56790d;
        }
        *(undefined **)(param_2 + 0x1a) = puVar12;
        goto code_r0x000109478ac8;
      }
      if (uVar2 == 0x2c) {
        return (undefined4 *)0xd;
      }
    }
    else {
      puVar6 = param_2;
      if ((uVar2 - 0x30 < 10) || (uVar2 == 0x2d)) goto code_r0x000109478b24;
    }
  }
  else if ((int)uVar2 < 0x6e) {
    if ((int)uVar2 < 0x5d) {
      if (uVar2 == 0x3a) {
        return (undefined4 *)0xc;
      }
      if (uVar2 == 0x5b) {
        return (undefined4 *)0x8;
      }
    }
    else {
      if (uVar2 == 0x5d) {
        return (undefined4 *)0xa;
      }
      if (uVar2 == 0x66) {
        lVar13 = 0;
        while (puVar5 = param_2, FUN_109478e24(),
              (uint)(byte)(&UNK_10dfcb839)[lVar13] == ((uint)puVar5 & 0xff)) {
          lVar13 = lVar13 + 1;
          if (lVar13 == 4) {
            return (undefined4 *)0x2;
          }
        }
      }
    }
  }
  else if ((int)uVar2 < 0x7b) {
    if (uVar2 == 0x6e) {
      lVar13 = 1;
      while (puVar5 = param_2, FUN_109478e24(),
            (uint)(byte)(&stack0xffffffffffffffc8)[lVar13] == ((uint)puVar5 & 0xff)) {
        lVar13 = lVar13 + 1;
        if (lVar13 == 4) {
          return (undefined4 *)0x3;
        }
      }
    }
    else if (uVar2 == 0x74) {
      lVar13 = 1;
      while (puVar5 = param_2, FUN_109478e24(),
            (uint)(byte)(&stack0xffffffffffffffcc)[lVar13] == ((uint)puVar5 & 0xff)) {
        lVar13 = lVar13 + 1;
        if (lVar13 == 4) {
          return (undefined4 *)0x1;
        }
      }
    }
  }
  else {
    if (uVar2 == 0x7b) {
      return (undefined4 *)0x9;
    }
    if (uVar2 == 0x7d) {
      return (undefined4 *)0xb;
    }
  }
  puVar12 = &UNK_10f5678a7;
LAB_1094783c4:
  *(undefined **)(param_2 + 0x1a) = puVar12;
  return (undefined4 *)0xe;
code_r0x000109478ac8:
  puVar6 = (undefined4 *)0xe;
code_r0x000109478acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  unaff_x30 = FUN_109478b24;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&uStack_60;
  unaff_x19 = param_2;
code_r0x000109478b24:
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined4 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined4 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_109478f1c();
  iVar4 = puVar6[5];
  if (iVar4 - 0x31U < 9) {
    iVar15 = 5;
LAB_109478b54:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(int)(char)iVar4);
      puVar5 = puVar6;
      FUN_109478e24();
      iVar4 = (int)puVar5;
      if (9 < iVar4 - 0x30U) break;
      iVar4 = puVar6[5];
    }
    if (iVar4 != 0x2e) {
      if ((iVar4 != 0x45) && (iVar4 != 0x65)) {
LAB_109478d3c:
        puVar5 = puVar6;
        FUN_109478ecc();
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        ___error();
        *puVar5 = 0;
        piVar8 = puVar6 + 0x14;
        if (iVar15 == 5) {
          if (*(char *)((long)puVar6 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoull(piVar8,(undefined1 *)((long)register0x00000008 + -0x38),10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar6 + 0x1e) = piVar8;
            return (undefined4 *)0x5;
          }
        }
        else {
          if (*(char *)((long)puVar6 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoll(piVar8,(undefined1 *)((long)register0x00000008 + -0x38),10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar6 + 0x1c) = piVar8;
            return (undefined4 *)0x6;
          }
        }
        goto LAB_109478c10;
      }
      goto LAB_109478b98;
    }
LAB_109478ce4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 0x22));
    puVar5 = puVar6;
    FUN_109478e24();
    if (9 < (int)puVar5 - 0x30U) {
      puVar12 = &UNK_10f5683ad;
      goto LAB_109478e04;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_109478e24();
      iVar4 = (int)puVar5;
    } while (iVar4 - 0x30U < 10);
    if ((iVar4 == 0x65) || (iVar4 == 0x45)) goto LAB_109478b98;
  }
  else {
    if (iVar4 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,0x30);
      iVar15 = 5;
    }
    else {
      if (iVar4 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (puVar6 + 0x14,0x2d);
      }
      puVar5 = puVar6;
      FUN_109478e24();
      if ((int)puVar5 - 0x31U < 9) {
        iVar4 = puVar6[5];
        iVar15 = 6;
        goto LAB_109478b54;
      }
      if ((int)puVar5 != 0x30) {
        puVar12 = &UNK_10f568384;
        goto LAB_109478e04;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      iVar15 = 6;
    }
    puVar5 = puVar6;
    FUN_109478e24();
    iVar4 = (int)puVar5;
    if ((iVar4 != 0x65) && (iVar4 != 0x45)) {
      if (iVar4 != 0x2e) goto LAB_109478d3c;
      goto LAB_109478ce4;
    }
LAB_109478b98:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
    puVar5 = puVar6;
    FUN_109478e24();
    iVar4 = (int)puVar5;
    if (9 < iVar4 - 0x30U) {
      if ((iVar4 != 0x2d) && (iVar4 != 0x2b)) {
        puVar12 = &UNK_10f5683d6;
LAB_109478e04:
        *(undefined **)(puVar6 + 0x1a) = puVar12;
        return (undefined4 *)0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_109478e24();
      if (9 < (int)puVar5 - 0x30U) {
        puVar12 = &UNK_10f568411;
        goto LAB_109478e04;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
    puVar5 = puVar6;
    FUN_109478e24();
    iVar4 = (int)puVar5;
    while (iVar4 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_109478e24();
      iVar4 = (int)puVar5;
    }
  }
  puVar5 = puVar6;
  FUN_109478ecc();
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  ___error();
  *puVar5 = 0;
LAB_109478c10:
  puVar7 = (undefined8 *)(puVar6 + 0x14);
  if (*(char *)((long)puVar6 + 0x67) < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  _strtod(puVar7,(undefined1 *)((long)register0x00000008 + -0x38));
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  return (undefined4 *)0x7;
}



/* Entry: 109478540; end: 10947864f;  */

bool FUN_109478540(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_109478e24();
  if ((int)uVar2 == 0xef) {
    uVar2 = param_1;
    FUN_109478e24();
    if ((int)uVar2 == 0xbb) {
      FUN_109478e24(param_1);
      bVar1 = (int)param_1 == 0xbf;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    FUN_109478ecc(param_1);
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 109478650; end: 109478b23;  */

undefined4 * FUN_109478650(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong unaff_x20;
  ulong uVar12;
  int iVar13;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109478f1c();
code_r0x000109478690:
  uVar4 = param_2;
  FUN_109478e24();
  puVar5 = (undefined4 *)0x4;
  puVar11 = &UNK_10f567b51;
  uVar12 = unaff_x20;
  switch((int)uVar4) {
  case 0:
    puVar11 = &UNK_10f567a2d;
    break;
  case 1:
    puVar11 = &UNK_10f567a76;
    break;
  case 2:
    puVar11 = &UNK_10f567abf;
    break;
  case 3:
    puVar11 = &UNK_10f567b08;
    break;
  case 4:
    break;
  case 5:
    puVar11 = &UNK_10f567b9a;
    break;
  case 6:
    puVar11 = &UNK_10f567be3;
    break;
  case 7:
    puVar11 = &UNK_10f567c2c;
    break;
  case 8:
    puVar11 = &UNK_10f567c75;
    break;
  case 9:
    puVar11 = &UNK_10f567cc3;
    break;
  case 10:
    puVar11 = &UNK_10f567d11;
    break;
  case 0xb:
    puVar11 = &UNK_10f567d5f;
    break;
  case 0xc:
    puVar11 = &UNK_10f567da7;
    break;
  case 0xd:
    puVar11 = &UNK_10f567df5;
    break;
  case 0xe:
    puVar11 = &UNK_10f567e43;
    break;
  case 0xf:
    puVar11 = &UNK_10f567e8b;
    break;
  case 0x10:
    puVar11 = &UNK_10f567ed3;
    break;
  case 0x11:
    puVar11 = &UNK_10f567f1c;
    break;
  case 0x12:
    puVar11 = &UNK_10f567f65;
    break;
  case 0x13:
    puVar11 = &UNK_10f567fae;
    break;
  case 0x14:
    puVar11 = &UNK_10f567ff7;
    break;
  case 0x15:
    puVar11 = &UNK_10f568040;
    break;
  case 0x16:
    puVar11 = &UNK_10f568089;
    break;
  case 0x17:
    puVar11 = &UNK_10f5680d2;
    break;
  case 0x18:
    puVar11 = &UNK_10f56811b;
    break;
  case 0x19:
    puVar11 = &UNK_10f568164;
    break;
  case 0x1a:
    puVar11 = &UNK_10f5681ac;
    break;
  case 0x1b:
    puVar11 = &UNK_10f5681f5;
    break;
  case 0x1c:
    puVar11 = &UNK_10f56823e;
    break;
  case 0x1d:
    puVar11 = &UNK_10f568286;
    break;
  case 0x1e:
    puVar11 = &UNK_10f5682ce;
    break;
  case 0x1f:
    puVar11 = &UNK_10f568316;
    break;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    uVar1 = *(uint *)(param_2 + 0x14);
    goto code_r0x0001094786c0;
  case 0x22:
    goto code_r0x000109478acc;
  case 0x5c:
    uVar4 = param_2;
    FUN_109478e24();
    puVar11 = &UNK_10f5679f9;
    iVar3 = (int)uVar4;
    if (iVar3 < 0x66) {
      if (iVar3 < 0x5c) {
        if (iVar3 == 0x22) {
          uVar1 = 0x22;
        }
        else {
          if (iVar3 != 0x2f) break;
          uVar1 = 0x2f;
        }
      }
      else if (iVar3 == 0x5c) {
        uVar1 = 0x5c;
      }
      else {
        if (iVar3 != 0x62) break;
        uVar1 = 8;
      }
    }
    else if (iVar3 < 0x72) {
      if (iVar3 == 0x66) {
        uVar1 = 0xc;
      }
      else {
        if (iVar3 != 0x6e) break;
        uVar1 = 10;
      }
    }
    else if (iVar3 == 0x72) {
      uVar1 = 0xd;
    }
    else {
      if (iVar3 != 0x74) {
        if (iVar3 == 0x75) {
          uVar12 = param_2;
          FUN_109478f70();
          uVar1 = (uint)uVar12;
          if (uVar1 == 0xffffffff) {
code_r0x000109478afc:
            puVar11 = &UNK_10f567933;
          }
          else {
            unaff_x20 = uVar12;
            if ((uVar1 & 0xfffffc00) == 0xd800) {
              uVar4 = param_2;
              FUN_109478e24();
              if (((int)uVar4 == 0x5c) && (uVar4 = param_2, FUN_109478e24(), (int)uVar4 == 0x75)) {
                uVar4 = param_2;
                FUN_109478f70();
                uVar2 = (uint)uVar4;
                if (uVar2 == 0xffffffff) goto code_r0x000109478afc;
                if (uVar2 >> 10 == 0x37) {
                  uVar12 = (ulong)(uVar2 + uVar1 * 0x400 + 0xfca02400);
code_r0x0001094787d4:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)(uVar12 >> 0x12) & 0x3fff | 0xfffffff0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)uVar12 >> 0xc & 0x3f | 0xffffff80);
code_r0x0001094787f8:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)uVar12 >> 6 & 0x3f | 0xffffff80);
                  goto code_r0x000109478808;
                }
              }
              puVar11 = &UNK_10f567969;
            }
            else {
              if ((uVar1 & 0xfffffc00) != 0xdc00) {
                if (0x7f < (int)uVar1) {
                  if (0x7ff < uVar1) {
                    if (uVar1 >> 0x10 != 0) goto code_r0x0001094787d4;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2 + 0x50,uVar1 >> 0xc | 0xffffffe0);
                    goto code_r0x0001094787f8;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,uVar1 >> 6 | 0xffffffc0);
code_r0x000109478808:
                  uVar1 = (uint)uVar12 & 0x3f | 0xffffff80;
                }
                goto code_r0x0001094786c0;
              }
              puVar11 = &UNK_10f5679b5;
            }
          }
        }
        break;
      }
      uVar1 = 9;
    }
code_r0x0001094786c0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x50,(int)(char)uVar1);
    unaff_x20 = uVar12;
    goto code_r0x000109478690;
  default:
    puVar11 = &UNK_10f56835e;
    break;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    uStack_60 = 0xbf00000080;
    uVar10 = 2;
    goto code_r0x000109478850;
  case 0xe0:
    uStack_60 = 0xbf000000a0;
    goto code_r0x0001094786f4;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    uStack_60 = 0xbf00000080;
    goto code_r0x0001094786f4;
  case 0xed:
    uStack_60 = 0x9f00000080;
code_r0x0001094786f4:
    uStack_58 = 0xbf00000080;
    uVar10 = 4;
code_r0x000109478850:
    uVar4 = param_2;
    param_1 = uStack_60;
    FUN_109479048(param_2,&uStack_60,uVar10);
    if ((uVar4 & 1) == 0) goto code_r0x000109478ac8;
    goto code_r0x000109478690;
  case 0xf0:
    puVar6 = (undefined8 *)&UNK_10dfcb840;
    goto code_r0x00010947883c;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    puVar6 = (undefined8 *)&UNK_10dfcb858;
    goto code_r0x00010947883c;
  case 0xf4:
    puVar6 = (undefined8 *)&UNK_10dfcb870;
code_r0x00010947883c:
    uStack_50 = 0xbf00000080;
    uStack_58 = puVar6[1];
    uStack_60 = *puVar6;
    uVar10 = 6;
    goto code_r0x000109478850;
  case -1:
    puVar11 = &UNK_10f56790d;
  }
  *(undefined **)(param_2 + 0x68) = puVar11;
code_r0x000109478ac8:
  puVar5 = (undefined4 *)0xe;
code_r0x000109478acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  puStack_90 = &UNK_10dfcb630;
  puStack_88 = &UNK_10f567b51;
  pcStack_68 = FUN_109478b24;
  uStack_80 = unaff_x20;
  uStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_109478f1c();
  iVar3 = puVar5[5];
  if (iVar3 - 0x31U < 9) {
    iVar13 = 5;
LAB_109478b54:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(int)(char)iVar3);
      puVar7 = puVar5;
      FUN_109478e24();
      iVar3 = (int)puVar7;
      if (9 < iVar3 - 0x30U) break;
      iVar3 = puVar5[5];
    }
    if (iVar3 != 0x2e) {
      if ((iVar3 != 0x45) && (iVar3 != 0x65)) {
LAB_109478d3c:
        puVar7 = puVar5;
        FUN_109478ecc();
        uStack_98 = 0;
        ___error();
        *puVar7 = 0;
        piVar8 = puVar5 + 0x14;
        if (iVar13 == 5) {
          if (*(char *)((long)puVar5 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoull(piVar8,&uStack_98,10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar5 + 0x1e) = piVar8;
            return (undefined4 *)0x5;
          }
        }
        else {
          if (*(char *)((long)puVar5 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoll(piVar8,&uStack_98,10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar5 + 0x1c) = piVar8;
            return (undefined4 *)0x6;
          }
        }
        goto LAB_109478c10;
      }
      goto LAB_109478b98;
    }
LAB_109478ce4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 0x22));
    puVar7 = puVar5;
    FUN_109478e24();
    if (9 < (int)puVar7 - 0x30U) {
      puVar11 = &UNK_10f5683ad;
      goto LAB_109478e04;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_109478e24();
      iVar3 = (int)puVar7;
    } while (iVar3 - 0x30U < 10);
    if ((iVar3 == 0x65) || (iVar3 == 0x45)) goto LAB_109478b98;
  }
  else {
    if (iVar3 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,0x30);
      iVar13 = 5;
    }
    else {
      if (iVar3 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (puVar5 + 0x14,0x2d);
      }
      puVar7 = puVar5;
      FUN_109478e24();
      if ((int)puVar7 - 0x31U < 9) {
        iVar3 = puVar5[5];
        iVar13 = 6;
        goto LAB_109478b54;
      }
      if ((int)puVar7 != 0x30) {
        puVar11 = &UNK_10f568384;
        goto LAB_109478e04;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      iVar13 = 6;
    }
    puVar7 = puVar5;
    FUN_109478e24();
    iVar3 = (int)puVar7;
    if ((iVar3 != 0x65) && (iVar3 != 0x45)) {
      if (iVar3 != 0x2e) goto LAB_109478d3c;
      goto LAB_109478ce4;
    }
LAB_109478b98:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
    puVar7 = puVar5;
    FUN_109478e24();
    iVar3 = (int)puVar7;
    if (9 < iVar3 - 0x30U) {
      if ((iVar3 != 0x2d) && (iVar3 != 0x2b)) {
        puVar11 = &UNK_10f5683d6;
LAB_109478e04:
        *(undefined **)(puVar5 + 0x1a) = puVar11;
        return (undefined4 *)0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_109478e24();
      if (9 < (int)puVar7 - 0x30U) {
        puVar11 = &UNK_10f568411;
        goto LAB_109478e04;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
    puVar7 = puVar5;
    FUN_109478e24();
    iVar3 = (int)puVar7;
    while (iVar3 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_109478e24();
      iVar3 = (int)puVar7;
    }
  }
  puVar7 = puVar5;
  FUN_109478ecc();
  uStack_98 = 0;
  ___error();
  *puVar7 = 0;
LAB_109478c10:
  puVar6 = (undefined8 *)(puVar5 + 0x14);
  if (*(char *)((long)puVar5 + 0x67) < '\0') {
    puVar6 = (undefined8 *)*puVar6;
  }
  _strtod(puVar6,&uStack_98);
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  return (undefined4 *)0x7;
}



/* Entry: 109478b24; end: 109478e23;  */

undefined8 FUN_109478b24(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uStack_38;
  
  FUN_109478f1c();
  iVar1 = param_2[5];
  if (iVar1 - 0x31U < 9) {
    iVar7 = 5;
LAB_109478b54:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(int)(char)iVar1);
      puVar3 = param_2;
      FUN_109478e24();
      iVar1 = (int)puVar3;
      if (9 < iVar1 - 0x30U) break;
      iVar1 = param_2[5];
    }
    if (iVar1 != 0x2e) {
      if ((iVar1 != 0x45) && (iVar1 != 0x65)) {
LAB_109478d3c:
        puVar3 = param_2;
        FUN_109478ecc();
        uStack_38 = 0;
        ___error();
        *puVar3 = 0;
        piVar4 = param_2 + 0x14;
        if (iVar7 == 5) {
          if (*(char *)((long)param_2 + 0x67) < '\0') {
            piVar4 = *(int **)piVar4;
          }
          _strtoull(piVar4,&uStack_38,10);
          piVar5 = piVar4;
          ___error();
          if (*piVar5 == 0) {
            *(int **)(param_2 + 0x1e) = piVar4;
            return 5;
          }
        }
        else {
          if (*(char *)((long)param_2 + 0x67) < '\0') {
            piVar4 = *(int **)piVar4;
          }
          _strtoll(piVar4,&uStack_38,10);
          piVar5 = piVar4;
          ___error();
          if (*piVar5 == 0) {
            *(int **)(param_2 + 0x1c) = piVar4;
            return 6;
          }
        }
        goto LAB_109478c10;
      }
      goto LAB_109478b98;
    }
LAB_109478ce4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 0x22));
    puVar3 = param_2;
    FUN_109478e24();
    if (9 < (int)puVar3 - 0x30U) {
      puVar6 = &UNK_10f5683ad;
      goto LAB_109478e04;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_109478e24();
      iVar1 = (int)puVar3;
    } while (iVar1 - 0x30U < 10);
    if ((iVar1 == 0x65) || (iVar1 == 0x45)) goto LAB_109478b98;
  }
  else {
    if (iVar1 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,0x30);
      iVar7 = 5;
    }
    else {
      if (iVar1 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2 + 0x14,0x2d);
      }
      puVar3 = param_2;
      FUN_109478e24();
      if ((int)puVar3 - 0x31U < 9) {
        iVar1 = param_2[5];
        iVar7 = 6;
        goto LAB_109478b54;
      }
      if ((int)puVar3 != 0x30) {
        puVar6 = &UNK_10f568384;
        goto LAB_109478e04;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      iVar7 = 6;
    }
    puVar3 = param_2;
    FUN_109478e24();
    iVar1 = (int)puVar3;
    if ((iVar1 != 0x65) && (iVar1 != 0x45)) {
      if (iVar1 != 0x2e) goto LAB_109478d3c;
      goto LAB_109478ce4;
    }
LAB_109478b98:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 5));
    puVar3 = param_2;
    FUN_109478e24();
    iVar1 = (int)puVar3;
    if (9 < iVar1 - 0x30U) {
      if ((iVar1 != 0x2d) && (iVar1 != 0x2b)) {
        puVar6 = &UNK_10f5683d6;
LAB_109478e04:
        *(undefined **)(param_2 + 0x1a) = puVar6;
        return 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_109478e24();
      if (9 < (int)puVar3 - 0x30U) {
        puVar6 = &UNK_10f568411;
        goto LAB_109478e04;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 5));
    puVar3 = param_2;
    FUN_109478e24();
    iVar1 = (int)puVar3;
    while (iVar1 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_109478e24();
      iVar1 = (int)puVar3;
    }
  }
  puVar3 = param_2;
  FUN_109478ecc();
  uStack_38 = 0;
  ___error();
  *puVar3 = 0;
LAB_109478c10:
  puVar2 = (undefined8 *)(param_2 + 0x14);
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    puVar2 = (undefined8 *)*puVar2;
  }
  _strtod(puVar2,&uStack_38);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return 7;
}



/* Entry: 109478e24; end: 109478ecb;  */

int FUN_109478e24(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 uStack_21;
  
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar3 = *(uint *)((long)param_1 + 0x14);
  }
  else {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar3;
  }
  if (uVar3 == 0xffffffff) {
    iVar2 = -1;
  }
  else {
    uStack_21 = (undefined1)uVar3;
    FUN_1092d2eec(param_1 + 7,&uStack_21);
    iVar2 = *(int *)((long)param_1 + 0x14);
    if (iVar2 == 10) {
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
    }
  }
  return iVar2;
}



/* Entry: 109478ecc; end: 109478f1b;  */

void FUN_109478ecc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  lVar2 = *plVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x30);
    lVar2 = *plVar1;
    if (lVar2 == 0) goto LAB_109478f00;
  }
  *plVar1 = lVar2 + -1;
LAB_109478f00:
  if (*(int *)(param_1 + 0x14) != -1) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  return;
}



/* Entry: 109478f1c; end: 109478f6f;  */

void FUN_109478f1c(long param_1)

{
  undefined1 uStack_11;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  uStack_11 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  FUN_1092d2eec((undefined8 *)(param_1 + 0x38),&uStack_11);
  return;
}



/* Entry: 109478f70; end: 109479047;  */

int FUN_109478f70(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint auStack_60 [6];
  long lStack_48;
  
  iVar6 = 0;
  lVar7 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_60[2] = 4;
  auStack_60[3] = 0;
  auStack_60[0] = 0xc;
  auStack_60[1] = 8;
  do {
    uVar3 = *(uint *)((long)auStack_60 + lVar7);
    lVar4 = param_1;
    FUN_109478e24();
    iVar2 = *(int *)(param_1 + 0x14);
    uVar5 = iVar2 - 0x30;
    if (9 < uVar5) {
      if (iVar2 - 0x41U < 6) {
        uVar5 = iVar2 - 0x37;
      }
      else {
        if (5 < iVar2 - 0x61U) {
          iVar6 = -1;
          break;
        }
        uVar5 = iVar2 - 0x57;
      }
    }
    iVar6 = (uVar5 << (ulong)(uVar3 & 0x1f)) + iVar6;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return iVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (lVar4 + 0x50,(long)*(char *)(lVar4 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_109478e24(lVar4);
      iVar6 = *(int *)(lVar4 + 0x14);
      if ((iVar6 < *param_2) || (param_2[1] < iVar6)) {
        *(undefined **)(lVar4 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (lVar4 + 0x50,(int)(char)iVar6);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 109479048; end: 1094790db;  */

undefined8 FUN_109479048(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (param_1 + 0x50,(long)*(char *)(param_1 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_109478e24(param_1);
      iVar2 = *(int *)(param_1 + 0x14);
      if ((iVar2 < *param_2) || (param_2[1] < iVar2)) {
        *(undefined **)(param_1 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 0x50,(int)(char)iVar2);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 1094790dc; end: 10947911b;  */

long FUN_1094790dc(long param_1)

{
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10947911c; end: 109479a1b;  */

/* WARNING: Removing unreachable block (ram,0x000109479528) */

ulong FUN_10947911c(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined **appuStack_98 [2];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
code_r0x000109479154:
  iVar2 = (int)param_1;
  uVar4 = param_2;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    appuStack_98[0] = (undefined **)CONCAT71(appuStack_98[0]._1_7_,1);
    FUN_109386fe4(param_2,appuStack_98,0);
    break;
  case 2:
    appuStack_98[0] = (undefined **)((ulong)appuStack_98[0]._1_7_ << 8);
    FUN_109386fe4(param_2,appuStack_98,0);
    break;
  case 3:
    appuStack_98[0] = (undefined **)0x0;
    FUN_109387184(param_2,appuStack_98,0);
    break;
  case 4:
    FUN_1093874bc(param_2,param_1 + 0x78,0);
    break;
  case 5:
    appuStack_98[0] = *(undefined ***)(param_1 + 0xa0);
    FUN_109387664(param_2,appuStack_98,0);
    break;
  case 6:
    appuStack_98[0] = *(undefined ***)(param_1 + 0x98);
    FUN_10938731c(param_2,appuStack_98,0);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulong)*(undefined ***)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_109479a1c(auStack_70,param_1 + 0x28);
      FUN_109479a1c(auStack_e0,param_1 + 0x28);
      FUN_10928a5e0(auStack_c8,&UNK_10f568460,auStack_e0);
      FUN_109259240(&uStack_b0,auStack_c8,&DAT_10f638984);
      FUN_109386318(appuStack_98,0x196,&uStack_b0);
      func_0x0001093862c8(param_2,uVar5,auStack_70,appuStack_98);
      appuStack_98[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_88);
      __ZNSt9exceptionD2Ev(appuStack_98);
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      goto code_r0x000109479500;
    }
    appuStack_98[0] = *(undefined ***)(param_1 + 0xa8);
    FUN_109386e44(param_2,appuStack_98,0);
    break;
  case 8:
    uVar3 = param_2;
    FUN_10938603c(param_2,0xffffffffffffffff);
    if ((int)uVar3 == 0) {
code_r0x000109479534:
      param_2 = 0;
      goto LAB_1094793cc;
    }
    iVar1 = iVar2 + 0x28;
    FUN_1094782ac();
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 10) {
      FUN_1093861c4();
code_r0x000109479234:
      if ((uVar4 & 1) != 0) break;
      goto code_r0x000109479534;
    }
    appuStack_98[0] = (undefined **)CONCAT71(appuStack_98[0]._1_7_,1);
    func_0x0001078db3d4(&lStack_58,appuStack_98);
    goto code_r0x000109479154;
  case 9:
    uVar3 = param_2;
    FUN_109385bcc(param_2,0xffffffffffffffff);
    if ((uVar3 & 1) == 0) goto code_r0x000109479534;
    iVar1 = iVar2 + 0x28;
    FUN_1094782ac();
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0xb) {
      FUN_109385d54();
      goto code_r0x000109479234;
    }
    if (iVar1 == 4) {
      FUN_109385f0c(param_2,param_1 + 0x78);
      if ((int)uVar4 == 0) goto code_r0x000109479534;
      iVar1 = iVar2 + 0x28;
      FUN_1094782ac();
      *(int *)(param_1 + 0x20) = iVar1;
      if (iVar1 == 0xc) {
        appuStack_98[0] = (undefined **)((ulong)appuStack_98[0] & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_58,appuStack_98);
        iVar2 = iVar2 + 0x28;
        FUN_1094782ac();
        goto code_r0x000109479364;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_109479a1c(auStack_70,param_1 + 0x28);
      uStack_a8 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x48);
      lStack_a0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_e0,&UNK_10f56844f);
      FUN_109479b08(auStack_c8,param_1,0xc,auStack_e0);
      FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
      FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_109479a1c(auStack_70,param_1 + 0x28);
      uStack_a8 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x48);
      lStack_a0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_e0,&UNK_10f568444);
      FUN_109479b08(auStack_c8,param_1,4,auStack_e0);
      FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
      FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    }
    goto code_r0x0001094794e0;
  default:
    goto LAB_10947946c;
  case 0xe:
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    FUN_109479a1c(auStack_70,param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x50);
    uStack_b0 = *(undefined8 *)(param_1 + 0x48);
    lStack_a0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(auStack_e0,"value");
    FUN_109479b08(auStack_c8,param_1,0,auStack_e0);
    FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
    FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    goto code_r0x0001094794e0;
  }
  if (lStack_50 != 0) {
    do {
      uVar4 = param_2;
      if ((*(ulong *)(lStack_58 + (lStack_50 - 1U >> 6) * 8) >> (lStack_50 - 1U & 0x3f) & 1) == 0) {
        iVar1 = iVar2 + 0x28;
        FUN_1094782ac();
        *(int *)(param_1 + 0x20) = iVar1;
        if (iVar1 == 0xd) {
          iVar1 = iVar2 + 0x28;
          FUN_1094782ac();
          *(int *)(param_1 + 0x20) = iVar1;
          if (iVar1 != 4) {
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            FUN_109479a1c(auStack_70,param_1 + 0x28);
            uStack_a8 = *(undefined8 *)(param_1 + 0x50);
            uStack_b0 = *(undefined8 *)(param_1 + 0x48);
            lStack_a0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_e0,&UNK_10f568444);
            FUN_109479b08(auStack_c8,param_1,4,auStack_e0);
            FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
            FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
            goto code_r0x0001094794e0;
          }
          FUN_109385f0c(param_2,param_1 + 0x78);
          if ((int)uVar4 == 0) goto code_r0x000109479534;
          iVar1 = iVar2 + 0x28;
          FUN_1094782ac();
          *(int *)(param_1 + 0x20) = iVar1;
          if (iVar1 != 0xc) {
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            FUN_109479a1c(auStack_70,param_1 + 0x28);
            uStack_a8 = *(undefined8 *)(param_1 + 0x50);
            uStack_b0 = *(undefined8 *)(param_1 + 0x48);
            lStack_a0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_e0,&UNK_10f56844f);
            FUN_109479b08(auStack_c8,param_1,0xc,auStack_e0);
            FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
            FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
            goto code_r0x0001094794e0;
          }
          iVar2 = iVar2 + 0x28;
          FUN_1094782ac();
          goto code_r0x000109479364;
        }
        if (iVar1 != 0xb) {
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_109479a1c(auStack_70,param_1 + 0x28);
          uStack_a8 = *(undefined8 *)(param_1 + 0x50);
          uStack_b0 = *(undefined8 *)(param_1 + 0x48);
          lStack_a0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_e0,&DAT_10f365d6f);
          FUN_109479b08(auStack_c8,param_1,0xb,auStack_e0);
          FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
          FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
          goto code_r0x0001094794e0;
        }
        FUN_109385d54();
      }
      else {
        iVar1 = iVar2 + 0x28;
        FUN_1094782ac();
        *(int *)(param_1 + 0x20) = iVar1;
        if (iVar1 == 0xd) goto code_r0x000109479318;
        if (iVar1 != 10) {
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_109479a1c(auStack_70,param_1 + 0x28);
          uStack_a8 = *(undefined8 *)(param_1 + 0x50);
          uStack_b0 = *(undefined8 *)(param_1 + 0x48);
          lStack_a0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_e0,"array");
          FUN_109479b08(auStack_c8,param_1,10,auStack_e0);
          FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
          FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
          goto code_r0x0001094794e0;
        }
        FUN_1093861c4();
      }
      if ((uVar4 & 1) == 0) goto code_r0x000109479534;
      lStack_50 = lStack_50 + -1;
      if (lStack_50 == 0) break;
    } while( true );
  }
  param_2 = 1;
  goto LAB_1094793cc;
code_r0x000109479318:
  iVar2 = iVar2 + 0x28;
  FUN_1094782ac();
code_r0x000109479364:
  *(int *)(param_1 + 0x20) = iVar2;
  goto code_r0x000109479154;
LAB_10947946c:
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  FUN_109479a1c(auStack_70,param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_1 + 0x50);
  uStack_b0 = *(undefined8 *)(param_1 + 0x48);
  lStack_a0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(auStack_e0,"value");
  FUN_109479b08(auStack_c8,param_1,0x10,auStack_e0);
  FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
  FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
code_r0x0001094794e0:
  appuStack_98[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(auStack_88);
  __ZNSt9exceptionD2Ev(appuStack_98);
code_r0x000109479500:
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
LAB_1094793cc:
  if (lStack_58 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 109479a1c; end: 109479b07;  */

/* WARNING: Removing unreachable block (ram,0x000109479d84) */
/* WARNING: Removing unreachable block (ram,0x000109479bc0) */
/* WARNING: Removing unreachable block (ram,0x000109479cd0) */
/* WARNING: Removing unreachable block (ram,0x000109479e18) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109479a1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *******pppppppuVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined1 *puStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar2 = (byte *)param_2[8];
  for (pbVar1 = (byte *)param_2[7]; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    bVar3 = *pbVar1;
    param_2 = param_1;
    if (bVar3 < 0x20) {
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = (ulong)bVar3;
      _snprintf(&uStack_48,9,&UNK_10f568509);
      param_4 = &uStack_48;
      _strlen();
      param_3 = &uStack_48;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    }
    else {
      param_3 = (undefined8 *)(ulong)(uint)(int)(char)bVar3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  puVar6 = param_2;
  __Unwind_Resume();
  pcStack_58 = FUN_109479b08;
  pbStack_80 = pbVar2;
  pbStack_78 = pbVar1;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c31940(extraout_x8,&UNK_10f568528);
  uVar8 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  if (uVar8 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_c0,&UNK_10f568536,param_4);
    puVar7 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7," ",1);
    uStack_98 = puVar7[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar7;
    uStack_90 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (extraout_x8,&DAT_10f568545,2);
  uVar8 = (ulong)*(uint *)(puVar6 + 4);
  if (*(uint *)(puVar6 + 4) == 0xe) {
    func_0x000107c31940(auStack_f8,puVar6[0x12]);
    puVar7 = auStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f568548,0xe);
    uStack_d8 = puVar7[1];
    uStack_e0 = *puVar7;
    lStack_d0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_109479a1c(&puStack_110,puVar6 + 5);
    ppuVar5 = (undefined1 **)puStack_110;
    if (-1 < (char)bStack_f9) {
      uStack_108 = (ulong)bStack_f9;
      ppuVar5 = &puStack_110;
    }
    puVar6 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,ppuVar5,uStack_108);
    uStack_b8 = puVar6[1];
    uStack_c0 = *puVar6;
    lStack_b0 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,&DAT_10f638984,1);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    if ((char)bStack_f9 < '\0') {
      __ZdlPv(puStack_110);
    }
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    if (-1 < cStack_e1) goto joined_r0x000109479da4;
  }
  else {
    FUN_109387a10();
    func_0x000107c31940(&uStack_c0,uVar8);
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,&UNK_10f568557,0xb);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    auStack_f8[0] = uStack_c0;
    if (-1 < lStack_b0) goto joined_r0x000109479da4;
  }
  __ZdlPv(auStack_f8[0]);
joined_r0x000109479da4:
  if ((int)param_3 != 0) {
    FUN_109387a10(param_3);
    func_0x000107c31940(&uStack_c0,param_3);
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,&UNK_10f568563,0xb);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  return;
}



/* Entry: 109479b08; end: 109479f23;  */

/* WARNING: Removing unreachable block (ram,0x000109479d84) */
/* WARNING: Removing unreachable block (ram,0x000109479bc0) */
/* WARNING: Removing unreachable block (ram,0x000109479cd0) */
/* WARNING: Removing unreachable block (ram,0x000109479e18) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109479b08(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *******pppppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  func_0x000107c31940(param_1,&UNK_10f568528);
  uVar4 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar4 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar4 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_70,&UNK_10f568536,param_4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3," ",1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f568545,2);
  uVar4 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xe) {
    func_0x000107c31940(auStack_a8,*(undefined8 *)(param_2 + 0x90));
    puVar3 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f568548,0xe);
    uStack_88 = puVar3[1];
    uStack_90 = *puVar3;
    lStack_80 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109479a1c(&puStack_c0,param_2 + 0x28);
    ppuVar2 = (undefined1 **)puStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppuVar2 = &puStack_c0;
    }
    puVar3 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar2,uStack_b8);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    lStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&DAT_10f638984,1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(puStack_c0);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (-1 < cStack_91) goto joined_r0x000109479d94;
  }
  else {
    FUN_109387a10();
    func_0x000107c31940(&uStack_70,uVar4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568557,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    auStack_a8[0] = uStack_70;
    if (-1 < lStack_60) goto joined_r0x000109479d94;
  }
  __ZdlPv(auStack_a8[0]);
joined_r0x000109479d94:
  if ((int)param_3 != 0) {
    FUN_109387a10(param_3);
    func_0x000107c31940(&uStack_70,param_3);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568563,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  return;
}



/* Entry: 109479f24; end: 10947a85b;  */

undefined ** FUN_109479f24(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **appuStack_a8 [2];
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char cStack_69;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  ppuVar1 = (undefined **)(param_1 + 0x78);
code_r0x000109479f70:
  iVar3 = (int)param_1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 2:
    appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0]._1_7_ << 8);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 3:
    appuStack_a8[0] = (undefined **)0x0;
    FUN_109388200(param_2,appuStack_a8);
    break;
  case 4:
    FUN_1093885d4(param_2,ppuVar1);
    break;
  case 5:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa0);
    FUN_109388804(param_2,appuStack_a8);
    break;
  case 6:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0x98);
    FUN_1093883d4(param_2,appuStack_a8);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulong)*(undefined ***)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109479a1c(&uStack_80,param_1 + 0x28);
      FUN_109479a1c(auStack_f0,param_1 + 0x28);
      FUN_10928a5e0(auStack_d8,&UNK_10f568460,auStack_f0);
      FUN_109259240(&uStack_c0,auStack_d8,&DAT_10f638984);
      FUN_109386318(appuStack_a8,0x196,&uStack_c0);
      func_0x000109387ab4(param_2,uVar6,&uStack_80,appuStack_a8);
      appuStack_a8[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(appuStack_a8);
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      goto code_r0x00010947a348;
    }
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa8);
    FUN_109387e00(param_2,appuStack_a8);
    break;
  case 8:
    uStack_80 = 2;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_1094782ac();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 10) {
code_r0x00010947a060:
      param_2[2] = param_2[2] + -8;
      break;
    }
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    func_0x0001078db3d4(&lStack_68,appuStack_a8);
    goto code_r0x000109479f70;
  case 9:
    uStack_80 = 1;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_1094782ac();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0xb) goto code_r0x00010947a060;
    if (iVar2 == 4) {
      lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
      appuStack_a8[0] = ppuVar1;
      FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
      param_2[4] = (undefined *)(lVar5 + 0x38);
      iVar2 = iVar3 + 0x28;
      FUN_1094782ac();
      *(int *)(param_1 + 0x20) = iVar2;
      if (iVar2 == 0xc) {
        appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0] & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_68,appuStack_a8);
        iVar3 = iVar3 + 0x28;
        FUN_1094782ac();
        goto code_r0x00010947a1a0;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109479a1c(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f56844f);
      FUN_109479b08(auStack_d8,param_1,0xc,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109479a1c(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f568444);
      FUN_109479b08(auStack_d8,param_1,4,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    goto code_r0x00010947a328;
  default:
    goto LAB_10947a2b4;
  case 0xe:
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    FUN_109479a1c(&uStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    uStack_c0 = *(undefined8 *)(param_1 + 0x48);
    lStack_b0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(auStack_f0,"value");
    FUN_109479b08(auStack_d8,param_1,0,auStack_f0);
    FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
    FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    goto code_r0x00010947a328;
  }
  if (lStack_60 != 0) {
    do {
      if ((*(ulong *)(lStack_68 + (lStack_60 - 1U >> 6) * 8) >> (lStack_60 - 1U & 0x3f) & 1) == 0) {
        iVar2 = iVar3 + 0x28;
        FUN_1094782ac();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) {
          iVar2 = iVar3 + 0x28;
          FUN_1094782ac();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 4) {
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            FUN_109479a1c(&uStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            uStack_c0 = *(undefined8 *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_f0,&UNK_10f568444);
            FUN_109479b08(auStack_d8,param_1,4,auStack_f0);
            FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
            FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
            goto code_r0x00010947a328;
          }
          lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
          appuStack_a8[0] = ppuVar1;
          FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
          param_2[4] = (undefined *)(lVar5 + 0x38);
          iVar2 = iVar3 + 0x28;
          FUN_1094782ac();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 == 0xc) {
            iVar3 = iVar3 + 0x28;
            FUN_1094782ac();
            goto code_r0x00010947a1a0;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109479a1c(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&UNK_10f56844f);
          FUN_109479b08(auStack_d8,param_1,0xc,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010947a328;
        }
        if (iVar2 != 0xb) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109479a1c(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&DAT_10f365d6f);
          FUN_109479b08(auStack_d8,param_1,0xb,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010947a328;
        }
      }
      else {
        iVar2 = iVar3 + 0x28;
        FUN_1094782ac();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) goto code_r0x00010947a138;
        if (iVar2 != 10) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109479a1c(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,"array");
          FUN_109479b08(auStack_d8,param_1,10,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010947a328;
        }
      }
      param_2[2] = param_2[2] + -8;
      lStack_60 = lStack_60 + -1;
      if (lStack_60 == 0) break;
    } while( true );
  }
  param_2 = (undefined **)0x1;
  goto LAB_10947a210;
code_r0x00010947a138:
  iVar3 = iVar3 + 0x28;
  FUN_1094782ac();
code_r0x00010947a1a0:
  *(int *)(param_1 + 0x20) = iVar3;
  goto code_r0x000109479f70;
LAB_10947a2b4:
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  FUN_109479a1c(&uStack_80,param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  lStack_b0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(auStack_f0,"value");
  FUN_109479b08(auStack_d8,param_1,0x10,auStack_f0);
  FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
  FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
code_r0x00010947a328:
  appuStack_a8[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(auStack_98);
  __ZNSt9exceptionD2Ev(appuStack_a8);
code_r0x00010947a348:
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT71(uStack_7f,uStack_80));
  }
LAB_10947a210:
  if (lStack_68 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10947a85c; end: 10947a987;  */

long FUN_10947a85c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = (long *)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 8);
  do {
    if (plVar7 == (long *)0x0) goto LAB_10947a8bc;
    plVar6 = plVar7 + 4;
    func_0x00010938cf14(plVar6,param_2);
    plVar8 = plVar7;
    if ((char)plVar6 < '\x01') {
      plVar6 = plVar7 + 4;
      func_0x00010938cf14(plVar6,param_2);
      if (((uint)plVar6 >> 7 & 1) == 0) {
        plVar6 = plVar7;
        for (plVar8 = (long *)*plVar7; plVar8 != (long *)0x0;
            plVar8 = *(long **)((long)plVar8 + (uVar5 >> 4 & 8))) {
          uVar5 = (ulong)(plVar8 + 4);
          func_0x00010938cf14(uVar5,param_2);
          if (-1 < (char)uVar5) {
            plVar6 = plVar8;
          }
        }
        for (plVar7 = (long *)plVar7[1]; plVar7 != (long *)0x0;
            plVar7 = *(long **)((long)plVar7 + lVar4)) {
          plVar8 = plVar7 + 4;
          func_0x00010938cf14(plVar8,param_2);
          lVar4 = 0;
          plVar1 = plVar7;
          if ((char)plVar8 < '\x01') {
            lVar4 = 8;
            plVar1 = plVar2;
          }
          plVar2 = plVar1;
        }
        if (plVar6 == plVar2) {
LAB_10947a8bc:
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          do {
            plVar7 = (long *)plVar6[1];
            plVar8 = plVar6;
            if ((long *)plVar6[1] == (long *)0x0) {
              do {
                plVar6 = (long *)plVar8[2];
                bVar3 = (long *)*plVar6 != plVar8;
                plVar8 = plVar6;
              } while (bVar3);
            }
            else {
              do {
                plVar6 = plVar7;
                plVar7 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            lVar4 = lVar4 + 1;
          } while (plVar6 != plVar2);
        }
        return lVar4;
      }
      plVar8 = plVar7 + 1;
      plVar7 = plVar2;
    }
    plVar2 = plVar7;
    plVar7 = (long *)*plVar8;
  } while( true );
}



/* Entry: 10947a988; end: 10947aa1f;  */

undefined8 * FUN_10947a988(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 5;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  FUN_1095bdd04(param_1 + 0xb,param_1 + 4);
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 3;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



/* Entry: 10947aa20; end: 10947aad3;  */

long FUN_10947aa20(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10947aad4; end: 10947aef7;  */

undefined1  [16] FUN_10947aad4(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x26;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar9 = param_1;
  func_0x000107c31944();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x26 = (long *)(uVar16 & (ulong)plVar9);
    }
    else {
      unaff_x26 = plVar9;
      if (plVar15 <= plVar9) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar9 - uVar1 * (long)plVar15);
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar5; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar6 = (long *)plVar14[1];
        if (plVar6 == plVar9) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10947ae70;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar16);
          }
          else if (plVar15 <= plVar6) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar15;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar15);
          }
          if (plVar6 != unaff_x26) break;
        }
      }
    }
  }
  plVar14 = (long *)0x30;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar9;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar14 + 2,*param_3,param_3[1]);
  }
  else {
    lVar7 = *param_3;
    plVar14[3] = param_3[1];
    plVar14[2] = lVar7;
    plVar14[4] = param_3[2];
  }
  lVar7 = *param_4;
  *param_4 = 0;
  plVar14[5] = lVar7;
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_10947adf8;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar6 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar15) {
    plVar6 = plVar15;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar6) {
LAB_10947ac80:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10947aee0);
      (*pcVar2)();
    }
    lVar7 = (long)plVar6 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar7;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar6 != plVar15);
    plVar8 = (long *)param_1[2];
    plVar15 = plVar6;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar16 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar16) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar16);
      }
      else if (plVar6 <= plVar10) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)plVar6;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar6 & uVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar16);
        }
        else if (plVar6 <= plVar13) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar13 / (ulong)plVar6;
          }
          plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar6);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          lVar7 = *param_1;
          if (*(long *)(lVar7 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar7 + (long)plVar13 * 8) = plVar8;
            plVar10 = plVar13;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar7 + (long)plVar13 * 8);
            **(long **)(lVar7 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar6 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar8) {
      plVar6 = plVar8;
    }
    if (plVar6 < plVar15) {
      if (plVar6 != (long *)0x0) goto LAB_10947ac80;
      lVar7 = *param_1;
      *param_1 = 0;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x26 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x26 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_10947adf8:
  lVar7 = *param_1;
  plVar9 = *(long **)(lVar7 + (long)unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar9;
    if (*plVar14 != 0) {
      plVar9 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
  }
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10947ae70:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10947aef8; end: 10947af3f;  */

void FUN_10947aef8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094777d0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10947af40; end: 10947b20f;  */

void FUN_10947af40(undefined8 param_1,undefined ******param_2)

{
  undefined ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ****ppppuVar7;
  undefined *****pppppuVar8;
  undefined *****pppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined *****pppppuStack_c0;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  undefined ****ppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined ***pppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined8 *puStack_70;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar11 = param_2[2];
  ppppuVar10 = *pppppuVar11;
  ppppuStack_90 = (undefined ****)0x0;
  pppppuStack_88 = (undefined *****)0x0;
  FUN_1095bc208(&ppppuStack_80,*(undefined4 *)(pppppuVar11 + 6),pppppuVar11 + 4);
  pppppuStack_88 = pppppuStack_78;
  ppppuStack_90 = ppppuStack_80;
  pppppuVar8 = (undefined *****)ppppuStack_80;
  ppppppuVar5 = (undefined ******)pppppuStack_78;
  while( true ) {
    if (*(char *)((long)pppppuVar11 + 0x1f) < '\0') {
      param_2 = (undefined ******)pppppuVar11[1];
      func_0x000107c3192c(&pppppuStack_c0,param_2,pppppuVar11[2]);
    }
    else {
      pppuStack_b8 = (undefined ***)pppppuVar11[2];
      pppppuStack_c0 = (undefined *****)pppppuVar11[1];
      pppuStack_b0 = (undefined ***)pppppuVar11[3];
    }
    if (ppppppuVar5 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10947ba24;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110af67f8;
    puVar4 = (undefined8 *)0x30;
    ppppuStack_a8 = (undefined ****)pppppuVar8;
    pppppuStack_a0 = (undefined *****)ppppppuVar5;
    pppuStack_98 = (undefined ***)ppppuVar10;
    __Znwm();
    if ((long)pppuStack_b0 < 0) {
      param_2 = (undefined ******)pppppuStack_c0;
      func_0x000107c3192c(puVar4,pppppuStack_c0,pppuStack_b8);
      ppppuVar7 = (undefined ****)pppuStack_98;
    }
    else {
      puVar4[1] = pppuStack_b8;
      *puVar4 = pppppuStack_c0;
      puVar4[2] = pppuStack_b0;
      ppppuVar7 = ppppuVar10;
      ppppuStack_a8 = (undefined ****)pppppuVar8;
      pppppuStack_a0 = (undefined *****)ppppppuVar5;
    }
    pppppuVar11 = &ppppuStack_80;
    puVar4[4] = pppppuStack_a0;
    puVar4[3] = ppppuStack_a8;
    ppppuStack_a8 = (undefined ****)0x0;
    pppppuStack_a0 = (undefined *****)0x0;
    puVar4[5] = ppppuVar7;
    puStack_70 = puVar4;
    if (ppppuVar10[0x9c] == (undefined ***)0x0) {
      FUN_10947ba24(&ppppuStack_80);
    }
    else {
      param_2 = (undefined ******)&ppppuStack_80;
      FUN_10947b248();
    }
    ppppppuVar5 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)(ppppppuVar5);
    ppppppuVar6 = (undefined ******)pppppuStack_a0;
    if ((undefined ******)pppppuStack_a0 != (undefined ******)0x0) {
      ppppppuVar1 = (undefined ******)(pppppuStack_a0 + 1);
      do {
        pppppuVar8 = *ppppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar3) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar8 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar8 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_a0)[2])(pppppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar6);
        ppppppuVar5 = ppppppuVar6;
      }
    }
    if ((long)pppuStack_b0 < 0) {
      ppppppuVar5 = (undefined ******)pppppuStack_c0;
      __ZdlPv(pppppuStack_c0);
    }
    pppppuVar8 = pppppuStack_88;
    if ((undefined ******)pppppuStack_88 != (undefined ******)0x0) {
      ppppppuVar6 = (undefined ******)(pppppuStack_88 + 1);
      do {
        pppppuVar9 = *ppppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)pppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_88)[2])(pppppuStack_88);
        ppppppuVar5 = (undefined ******)pppppuVar8;
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar8);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
    __ZdlPv(pppppuVar8);
    FUN_10947b210(&pppppuStack_c0);
    do {
      FUN_10947766c(&ppppuStack_90);
      __Unwind_Resume(ppppppuVar5);
    } while ((int)param_2 != 1);
    ___cxa_begin_catch(ppppppuVar5);
    FUN_10937e740(&ppppuStack_80,&UNK_10f56e377);
    param_2 = (undefined ******)&UNK_10f56e137;
    FUN_109388c6c(1,&UNK_10f56e137,&UNK_10f55aaab,0x10d,&ppppuStack_80);
    if ((long)puStack_70 < 0) {
      __ZdlPv(ppppuStack_80);
    }
    ___cxa_end_catch();
    pppppuVar8 = (undefined *****)0x0;
    ppppppuVar5 = (undefined ******)0x0;
  }
  return;
}



/* Entry: 10947b210; end: 10947b247;  */

undefined8 * FUN_10947b210(undefined8 *param_1)

{
  FUN_10947766c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10947b248; end: 10947b293;  */

void FUN_10947b248(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  FUN_10947b294(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x30);
  return;
}



/* Entry: 10947b294; end: 10947b323;  */

void FUN_10947b294(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar3) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar3) * 8 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar2 == uVar4) {
    FUN_10947b324(param_1);
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar1 = (undefined8 *)(*(long *)(lVar3 + (uVar4 >> 6) * 8) + (uVar4 & 0x3f) * 0x40);
  *puVar1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar1 + 1,param_2 + 1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10947b324; end: 10947b4d3;  */

void FUN_10947b324(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x40) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10947b9f0();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0x1000;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10947b7e4(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10947b8e8(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010947b5d8(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10947b6dc(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x40;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10947b4d4(param_1,&plStack_60);
  return;
}



/* Entry: 10947b4d4; end: 10947b6db;  */

void FUN_10947b4d4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10947b9f0();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10947b6dc; end: 10947b7e3;  */

void FUN_10947b6dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10947b9f0();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10947b7e4; end: 10947b8e7;  */

void FUN_10947b7e4(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10947b9f0();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10947b8e8; end: 10947b9ef;  */

void FUN_10947b8e8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10947b9f0();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10947b9f0; end: 10947ba23;  */

void FUN_10947b9f0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  long *plStack_c8;
  undefined8 uStack_c0;
  long *aplStack_b8 [4];
  undefined1 auStack_98 [32];
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar9 + 0x28) + 0x40;
  FUN_109477814(lVar8,lVar9);
  if (lVar8 == 0) {
    FUN_109262df8(&UNK_10f56e356);
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x28);
    if (*(long *)(lVar9 + 0x18) == 0) {
      uStack_c0 = 0;
      aplStack_b8[0] = (long *)0x0;
      FUN_10947577c(lVar8,&uStack_c0);
      plVar5 = aplStack_b8[0];
      if (aplStack_b8[0] != (long *)0x0) {
        plVar1 = aplStack_b8[0] + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*aplStack_b8[0] + 0x10))(aplStack_b8[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      uVar6 = 2;
    }
    else {
      FUN_109475e4c(lVar8,(long *)(lVar9 + 0x18));
      if (*(char *)(lVar8 + 0x140) == '\x01') {
        plStack_108 = (long *)0x0;
        uStack_e8 = 0;
        plStack_c8 = (long *)0x0;
        if (*(long *)(lVar8 + 0x58) == 0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = *(long **)(lVar8 + 0x98);
          plStack_60 = plVar5;
          if (plVar5 != (long *)0x0) {
            if (plVar5 == (long *)(lVar8 + 0x80)) {
              plStack_60 = alStack_78;
              (**(code **)(*plVar5 + 0x18))(plVar5,alStack_78);
            }
            else {
              (**(code **)(*plVar5 + 0x10))();
              plStack_60 = plVar5;
            }
          }
          FUN_1094778f8(alStack_78,auStack_e0);
          if (plStack_60 == alStack_78) {
            lVar9 = 0x20;
LAB_10947bb68:
            (**(code **)(*plStack_60 + lVar9))();
          }
          else if (plStack_60 != (long *)0x0) {
            lVar9 = 0x28;
            goto LAB_10947bb68;
          }
          plVar5 = *(long **)(lVar8 + 0x78);
          if (plVar5 != (long *)0x0) {
            if (plVar5 == (long *)(lVar8 + 0x60)) {
              plStack_60 = alStack_78;
              (**(code **)(*plVar5 + 0x18))(plVar5,alStack_78);
              plVar5 = plStack_60;
            }
            else {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          plStack_60 = plVar5;
          FUN_109477a64(alStack_78,auStack_100);
          if (plStack_60 == alStack_78) {
            lVar9 = 0x20;
LAB_10947bbdc:
            (**(code **)(*plStack_60 + lVar9))();
          }
          else if (plStack_60 != (long *)0x0) {
            lVar9 = 0x28;
            goto LAB_10947bbdc;
          }
          if (plStack_c8 == (long *)0x0) goto LAB_10947bc94;
          plVar5 = plStack_c8;
          (**(code **)(*plStack_c8 + 0x30))(plStack_c8,*(undefined8 *)(lVar8 + 0x58));
        }
        plStack_108 = plVar5;
        FUN_1095bde44(&uStack_c0,&plStack_108,lVar8 + 0xb0);
        uVar7 = *(undefined8 *)(lVar8 + 0x58);
        *(undefined8 *)(lVar8 + 0x58) = uStack_c0;
        uStack_c0 = uVar7;
        FUN_1094778f8(lVar8 + 0x80,auStack_98);
        FUN_109477a64(lVar8 + 0x60,aplStack_b8);
        FUN_1094775c8(&uStack_c0);
        FUN_1094775c8(&plStack_108);
      }
      uVar6 = 1;
    }
    *(undefined4 *)(lVar8 + 0x150) = uVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10947bc94:
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10947bc9c);
  (*pcVar4)();
}



/* Entry: 10947ba24; end: 10947bd07;  */

void FUN_10947ba24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plStack_e8;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  long *plStack_a8;
  undefined8 uStack_a0;
  long *aplStack_98 [4];
  undefined1 auStack_78 [32];
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar9 + 0x28) + 0x40;
  FUN_109477814(lVar8,lVar9);
  if (lVar8 == 0) {
    FUN_109262df8(&UNK_10f56e356);
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x28);
    if (*(long *)(lVar9 + 0x18) == 0) {
      uStack_a0 = 0;
      aplStack_98[0] = (long *)0x0;
      FUN_10947577c(lVar8,&uStack_a0);
      plVar5 = aplStack_98[0];
      if (aplStack_98[0] != (long *)0x0) {
        plVar1 = aplStack_98[0] + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*aplStack_98[0] + 0x10))(aplStack_98[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      uVar6 = 2;
    }
    else {
      FUN_109475e4c(lVar8,(long *)(lVar9 + 0x18));
      if (*(char *)(lVar8 + 0x140) == '\x01') {
        plStack_e8 = (long *)0x0;
        uStack_c8 = 0;
        plStack_a8 = (long *)0x0;
        if (*(long *)(lVar8 + 0x58) == 0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = *(long **)(lVar8 + 0x98);
          plStack_40 = plVar5;
          if (plVar5 != (long *)0x0) {
            if (plVar5 == (long *)(lVar8 + 0x80)) {
              plStack_40 = alStack_58;
              (**(code **)(*plVar5 + 0x18))(plVar5,alStack_58);
            }
            else {
              (**(code **)(*plVar5 + 0x10))();
              plStack_40 = plVar5;
            }
          }
          FUN_1094778f8(alStack_58,auStack_c0);
          if (plStack_40 == alStack_58) {
            lVar9 = 0x20;
LAB_10947bb68:
            (**(code **)(*plStack_40 + lVar9))();
          }
          else if (plStack_40 != (long *)0x0) {
            lVar9 = 0x28;
            goto LAB_10947bb68;
          }
          plVar5 = *(long **)(lVar8 + 0x78);
          if (plVar5 != (long *)0x0) {
            if (plVar5 == (long *)(lVar8 + 0x60)) {
              plStack_40 = alStack_58;
              (**(code **)(*plVar5 + 0x18))(plVar5,alStack_58);
              plVar5 = plStack_40;
            }
            else {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          plStack_40 = plVar5;
          FUN_109477a64(alStack_58,auStack_e0);
          if (plStack_40 == alStack_58) {
            lVar9 = 0x20;
LAB_10947bbdc:
            (**(code **)(*plStack_40 + lVar9))();
          }
          else if (plStack_40 != (long *)0x0) {
            lVar9 = 0x28;
            goto LAB_10947bbdc;
          }
          if (plStack_a8 == (long *)0x0) goto LAB_10947bc94;
          plVar5 = plStack_a8;
          (**(code **)(*plStack_a8 + 0x30))(plStack_a8,*(undefined8 *)(lVar8 + 0x58));
        }
        plStack_e8 = plVar5;
        FUN_1095bde44(&uStack_a0,&plStack_e8,lVar8 + 0xb0);
        uVar7 = *(undefined8 *)(lVar8 + 0x58);
        *(undefined8 *)(lVar8 + 0x58) = uStack_a0;
        uStack_a0 = uVar7;
        FUN_1094778f8(lVar8 + 0x80,auStack_78);
        FUN_109477a64(lVar8 + 0x60,aplStack_98);
        FUN_1094775c8(&uStack_a0);
        FUN_1094775c8(&plStack_e8);
      }
      uVar6 = 1;
    }
    *(undefined4 *)(lVar8 + 0x150) = uVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10947bc94:
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10947bc9c);
  (*pcVar4)();
}



/* Entry: 10947bd08; end: 10947bd4f;  */

void FUN_10947bd08(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10947766c(puVar1 + 3);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10947bd50; end: 10947bd67;  */

void FUN_10947bd50(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10947bd68; end: 10947bdaf;  */

void FUN_10947bd68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x0001094776c4(lVar1 + 0x20);
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10947bdb0; end: 10947bdc7;  */

void FUN_10947bdb0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10947bdc8; end: 10947beab;  */

long FUN_10947bdc8(long *param_1,undefined8 param_2)

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



/* Entry: 10947beac; end: 10947c81f;  */

/* WARNING: Removing unreachable block (ram,0x00010947bf54) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10947beac(long *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long **pplVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  long *plStack_168;
  long *plStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_f8;
  long alStack_f0 [5];
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    if (param_3[2] == 0) goto LAB_10947bf24;
    func_0x000107c3192c(alStack_f0 + 4,param_3[1]);
  }
  else if (*(char *)((long)param_3 + 0x1f) == '\0') {
LAB_10947bf24:
    func_0x000107c31940(alStack_f0 + 4,&UNK_10f56e3a8);
  }
  else {
    puStack_c8 = (undefined8 *)param_3[2];
    alStack_f0[4] = param_3[1];
    uStack_c0 = param_3[3];
  }
  (**(code **)(*param_2 + 0x10))(&plStack_160,param_2,alStack_f0 + 4);
  plVar2 = plStack_160;
  (**(code **)(*plStack_160 + 0x28))();
  if (((ulong)plVar2 & 1) == 0) {
    func_0x000105688514(&UNK_10f56e3d0);
    goto LAB_10947c6a8;
  }
  (**(code **)(*plStack_160 + 0x20))(&plStack_168);
  plVar2 = plStack_168;
  puVar3 = (undefined8 *)0xb8;
  __Znwm();
  *puVar3 = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar3 + 1,param_3[1],param_3[2]);
  }
  else {
    uVar9 = param_3[1];
    puVar3[2] = param_3[2];
    puVar3[1] = uVar9;
    puVar3[3] = param_3[3];
  }
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 8) = 0x3f800000;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  if (*(int *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x20) != 0) {
    func_0x000105688514(&UNK_10f56e41c);
    goto LAB_10947c6a8;
  }
  ppuStack_158 = &PTR_FUN_110aefdd8;
  uStack_150 = 0;
  uStack_148 = 0;
  ppuStack_140 = (undefined **)0x0;
  uStack_138 = 0;
  pppuVar4 = &ppuStack_158;
  func_0x00010b4d15d4(pppuVar4,plVar2);
  if (((ulong)pppuVar4 & 1) == 0) {
    func_0x000105688514(&UNK_10f56e445);
    goto LAB_10947c6a8;
  }
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0;
  ppuVar6 = &PTR_PTR_1132d8ed8;
  if (ppuStack_140 != (undefined **)0x0) {
    ppuVar6 = ppuStack_140;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  alStack_f0[4] = 0;
  alStack_f0[1] = 0;
  alStack_f0[2] = 0;
  alStack_f0[3] = 0;
  ppuVar5 = (undefined **)(alStack_f0 + 1);
  func_0x000107c303b0(ppuVar5,0x1093426a8);
  if (ppuVar6 != ppuVar5) {
    FUN_109341e3c(ppuVar5);
    FUN_10934210c(ppuVar5,ppuVar6);
  }
  plStack_a0 = alStack_f0 + 1;
  pplVar8 = &plStack_a0;
  FUN_109484c14(alStack_f0 + 4);
  alStack_f0[0] = 0;
  if (lStack_a8 == 0) {
    puVar20 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    uVar16 = 0;
  }
  else {
    puVar20 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)0x0;
    uVar16 = 0;
    do {
      puVar13 = *(ulong **)(puStack_c8[uStack_b0 >> 9] + (uStack_b0 & 0x1ff) * 8);
      uStack_f8 = (ulong)(int)puVar13[1];
      if (uVar16 <= uStack_f8) {
        uVar16 = uStack_f8;
      }
      puVar22 = puVar13;
      if ((*puVar13 & 1) != 0) {
        puVar22 = (ulong *)(*puVar13 + 7);
      }
      if ((int)puVar13[1] != 0) {
        lVar17 = uStack_f8 << 3;
        puVar21 = puVar20;
        do {
          uVar14 = *puVar22;
          ppuVar6 = &PTR_PTR_1132d8ea0;
          if (*(undefined ***)(uVar14 + 0x30) != (undefined **)0x0) {
            ppuVar6 = *(undefined ***)(uVar14 + 0x30);
          }
          FUN_10940bc88();
          puStack_98 = ppuVar6[1];
          plStack_a0 = (long *)*ppuVar6;
          puStack_88 = ppuVar6[3];
          puStack_90 = ppuVar6[2];
          if (puVar15 < puVar18) {
            puVar24 = *ppuVar6;
            puVar28 = ppuVar6[3];
            puVar26 = ppuVar6[2];
            puVar15[1] = ppuVar6[1];
            *puVar15 = puVar24;
            puVar15[3] = puVar28;
            puVar15[2] = puVar26;
            puVar20 = puVar21;
          }
          else {
            lVar19 = (long)puVar15 - (long)puVar21;
            uVar11 = (lVar19 >> 5) + 1;
            if (uVar11 >> 0x3b != 0) {
              FUN_1094853c4();
              goto LAB_10947c6a8;
            }
            uVar12 = (long)puVar18 - (long)puVar21 >> 4;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7fffffffffffffdf < (ulong)((long)puVar18 - (long)puVar21)) {
              uVar12 = 0x7ffffffffffffff;
            }
            if (uVar12 >> 0x3b != 0) {
              func_0x000104c4f740();
              goto LAB_10947c6a8;
            }
            lVar7 = uVar12 << 5;
            __Znwm();
            puVar15 = (undefined8 *)(lVar7 + lVar19);
            puVar18 = (undefined8 *)(lVar7 + uVar12 * 0x20);
            puVar15[1] = puStack_98;
            *puVar15 = plStack_a0;
            puVar15[3] = puStack_88;
            puVar15[2] = puStack_90;
            puVar20 = puVar15 + (lVar19 >> 5) * -4;
            _memcpy(puVar20,puVar21,lVar19);
            if (puVar21 != (undefined8 *)0x0) {
              __ZdlPv(puVar21);
            }
          }
          puVar15 = puVar15 + 4;
          if (*(int *)(uVar14 + 0x20) < 1) {
            plStack_a0 = (long *)0x0;
            FUN_109484b50(&lStack_118,&plStack_a0);
            plStack_a0 = (long *)0x0;
            pplVar8 = &plStack_a0;
            FUN_109484b50(&lStack_130);
          }
          else {
            alStack_f0[0] = uStack_f8 + alStack_f0[0];
            FUN_1093fd894(&lStack_118,alStack_f0);
            uStack_f8 = (ulong)*(int *)(uVar14 + 0x20);
            FUN_1093fd894(&lStack_130,&uStack_f8);
            plStack_a0 = (long *)(uVar14 + 0x18);
            pplVar8 = &plStack_a0;
            FUN_1094853d8(alStack_f0 + 4);
          }
          puVar22 = puVar22 + 1;
          lVar17 = lVar17 + -8;
          puVar21 = puVar20;
        } while (lVar17 != 0);
      }
      lStack_a8 = lStack_a8 + -1;
      uStack_b0 = uStack_b0 + 1;
      if (0x3ff < uStack_b0) {
        __ZdlPv(*puStack_c8);
        puStack_c8 = puStack_c8 + 1;
        uStack_b0 = uStack_b0 - 0x200;
      }
    } while (lStack_a8 != 0);
  }
  FUN_10934261c(alStack_f0 + 1);
  FUN_109485488(alStack_f0 + 4);
  puVar3[0xc] = uVar16;
  uVar16 = (long)puVar15 - (long)puVar20 >> 5;
  lVar17 = puVar3[9];
  if ((ulong)((puVar3[0xb] - lVar17 >> 4) * -0x5555555555555555) < uVar16) {
    if (0x555555555555555 < uVar16) {
      FUN_10948556c();
      goto LAB_10947c6a8;
    }
    lVar19 = puVar3[10];
    uVar14 = uVar16;
    FUN_109485580();
    lVar17 = uVar14 + (lVar19 - lVar17);
    lVar19 = (long)pplVar8 * 0x30;
    pplVar8 = (long **)puVar3[9];
    lVar23 = lVar17 - (puVar3[10] - (long)pplVar8);
    _memcpy(lVar23);
    lVar7 = puVar3[9];
    puVar3[9] = lVar23;
    puVar3[10] = lVar17;
    puVar3[0xb] = uVar14 + lVar19;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  if (puVar15 != puVar20) {
    uVar14 = 0;
    puVar15 = (undefined8 *)puVar3[10];
    puVar18 = puVar20;
    do {
      lVar19 = lStack_118;
      lVar17 = lStack_130;
      if (puVar15 < (undefined8 *)puVar3[0xb]) {
        uVar9 = *(undefined8 *)(lStack_118 + uVar14 * 8);
        uVar10 = *(undefined8 *)(lStack_130 + uVar14 * 8);
        uVar25 = *puVar18;
        uVar29 = puVar18[3];
        uVar27 = puVar18[2];
        puVar15[1] = puVar18[1];
        *puVar15 = uVar25;
        puVar15[3] = uVar29;
        puVar15[2] = uVar27;
        puVar15[4] = uVar9;
        puVar15[5] = uVar10;
        puVar15 = puVar15 + 6;
      }
      else {
        lVar7 = puVar3[9];
        lVar23 = (long)puVar15 - lVar7;
        uVar11 = (lVar23 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar11) {
          FUN_10948556c();
          goto LAB_10947c6a8;
        }
        lVar7 = (long)puVar3[0xb] - lVar7 >> 4;
        uVar12 = lVar7 * 0x5555555555555556;
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
          uVar12 = 0x555555555555555;
        }
        FUN_109485580();
        puVar21 = (undefined8 *)(uVar12 + lVar23);
        uVar9 = *(undefined8 *)(lVar19 + uVar14 * 8);
        uVar10 = *(undefined8 *)(lVar17 + uVar14 * 8);
        lVar17 = (long)pplVar8 * 0x30;
        uVar25 = *puVar18;
        uVar29 = puVar18[3];
        uVar27 = puVar18[2];
        puVar21[1] = puVar18[1];
        *puVar21 = uVar25;
        puVar21[3] = uVar29;
        puVar21[2] = uVar27;
        puVar21[4] = uVar9;
        puVar21[5] = uVar10;
        puVar15 = puVar21 + 6;
        pplVar8 = (long **)puVar3[9];
        lVar7 = (long)puVar21 - (puVar3[10] - (long)pplVar8);
        _memcpy(lVar7);
        lVar19 = puVar3[9];
        puVar3[9] = lVar7;
        puVar3[10] = puVar15;
        puVar3[0xb] = uVar12 + lVar17;
        if (lVar19 != 0) {
          __ZdlPv();
        }
      }
      puVar3[10] = puVar15;
      uVar14 = uVar14 + 1;
      puVar18 = puVar18 + 4;
    } while (uVar16 != uVar14);
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  if (puVar20 != (undefined8 *)0x0) {
    __ZdlPv(puVar20);
  }
  FUN_109342244(&ppuStack_158);
  puVar3[0xd] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined8 *)((long)puVar3 + 0x84) = 0x3e19999a3f8ccccd;
  if (puVar3[10] - puVar3[9] == 0) {
LAB_10947c5bc:
    plVar2 = plStack_168;
    *(undefined1 *)(puVar3 + 0x12) = 0;
    *(undefined1 *)(puVar3 + 0x13) = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x14] = 0;
    *param_1 = (long)puVar3;
    param_1[1] = (long)&PTR_FUN_110af68a0;
    param_1[4] = (long)(param_1 + 1);
    param_1[5] = (long)&PTR_DAT_110af6930;
    param_1[8] = (long)(param_1 + 5);
    plStack_168 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_160;
    plStack_160 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar17 = (long)(puVar3[10] - puVar3[9]) >> 4;
    uVar16 = lVar17 * -0x5555555555555555;
    if (uVar16 < 0xaaaaaaaaaaaaaab) {
      FUN_1094855d8();
      _bzero();
      lVar7 = uVar16 - (puVar3[0xe] - puVar3[0xd]);
      _memcpy(lVar7);
      lVar19 = puVar3[0xd];
      puVar3[0xd] = lVar7;
      puVar3[0xe] = uVar16 + ((lVar17 * 8 - 0x18U) / 0x18) * 0x18 + 0x18;
      puVar3[0xf] = uVar16 + (long)pplVar8 * 0x18;
      if (lVar19 != 0) {
        __ZdlPv();
      }
      goto LAB_10947c5bc;
    }
  }
  FUN_1094855c4();
LAB_10947c6a8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10947c6ac);
  (*pcVar1)();
}



/* Entry: 10947c820; end: 10947e757;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10947c820(undefined8 *param_1,undefined1 *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  undefined7 uVar11;
  undefined7 uVar12;
  undefined7 uVar13;
  undefined1 uVar14;
  code *pcVar15;
  long *plVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long **pplVar20;
  undefined1 *puVar21;
  long **pplVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  int *piVar31;
  undefined8 *puVar32;
  long lVar33;
  long lVar34;
  byte *pbVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  int iVar40;
  long *plVar41;
  long *plVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 uVar45;
  undefined8 *puVar46;
  long *plVar47;
  long *plVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  int *piVar52;
  ushort uVar53;
  float fVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  float fVar58;
  undefined4 uVar59;
  double dVar60;
  long *plStack_620;
  long *plStack_618;
  long lStack_610;
  undefined8 uStack_608;
  int iStack_600;
  ulong uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d0;
  long lStack_5c8;
  undefined1 *puStack_5c0;
  undefined1 auStack_5b8 [16];
  undefined1 auStack_5a8 [64];
  undefined1 auStack_568 [24];
  float fStack_550;
  float fStack_54c;
  undefined1 uStack_53f;
  ulong auStack_538 [2];
  undefined8 uStack_528;
  undefined8 uStack_520;
  char cStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  int iStack_4b0;
  int iStack_4ac;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined1 uStack_481;
  undefined8 uStack_480;
  long *plStack_478;
  undefined8 uStack_470;
  long *plStack_468;
  long lStack_460;
  ulong uStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long lStack_440;
  undefined1 *puStack_438;
  undefined1 auStack_430 [64];
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  byte bStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_398;
  long lStack_390;
  undefined1 auStack_380 [656];
  char cStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  int *piStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10947e758(auStack_380);
  puVar2 = auStack_380;
  if (cStack_f0 == '\0') {
    puVar2 = param_2;
  }
  lVar23 = *(long *)(puVar2 + 0x110);
  uStack_480 = *(long **)(lVar23 + 0x10);
  FUN_10947eef0(auStack_5a8,param_2 + 0x10,&uStack_480);
  uVar14 = uStack_53f;
  plVar16 = (long *)*param_3;
  plVar19 = (long *)param_3[1];
  if ((long)plVar19 - (long)plVar16 == 0x10) {
    lVar24 = *plVar16;
    if (cStack_518 == *(char *)(lVar24 + 0xe0)) {
      if (cStack_518 != '\0') {
        uStack_528 = *(undefined8 *)(lVar24 + 0xd0);
        uStack_520 = *(undefined8 *)(lVar24 + 0xd8);
      }
    }
    else if (cStack_518 == '\0') {
      uStack_528 = *(undefined8 *)(lVar24 + 0xd0);
      uStack_520 = *(undefined8 *)(lVar24 + 0xd8);
      cStack_518 = '\x01';
    }
    else {
      cStack_518 = '\0';
    }
  }
  puVar49 = (undefined8 *)*param_4;
  piStack_b8 = (int *)0x0;
  plStack_c0 = (long *)0x0;
  lStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  lStack_a0 = CONCAT44(lStack_a0._4_4_,0x3f800000);
  puVar50 = (undefined8 *)puVar49[0x14];
  if (puVar50 != (undefined8 *)puVar49[0x15]) {
    do {
      plStack_478 = (long *)0x0;
      uStack_480 = (long *)0x0;
      plVar16 = (long *)puVar50[1];
      if (((plVar16 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_478 = plVar16, plVar16 == (long *)0x0))
         || (uStack_480 = (long *)*puVar50, uStack_480 == (long *)0x0)) {
LAB_10947c998:
        plVar16 = plStack_478;
        puVar51 = (undefined8 *)puVar50[3];
        for (puVar44 = (undefined8 *)puVar50[2]; puVar44 != puVar51; puVar44 = puVar44 + 1) {
          uVar45 = *puVar44;
          puVar46 = puVar49 + 4;
          FUN_109487a04(puVar46,uVar45);
          if (puVar46 != (undefined8 *)0x0) {
            FUN_109487914(puVar49[0xd],puVar49[0xe],puVar46 + 3);
            plVar19 = puVar49 + 4;
            FUN_109487a04(plVar19,uVar45);
            if (plVar19 != (long *)0x0) {
              uVar29 = puVar49[5];
              uVar25 = plVar19[1];
              uVar36 = uVar29 - 1;
              if ((uVar29 & uVar36) == 0) {
                uVar25 = uVar36 & uVar25;
              }
              else if (uVar29 <= uVar25) {
                uVar37 = 0;
                if (uVar29 != 0) {
                  uVar37 = uVar25 / uVar29;
                }
                uVar25 = uVar25 - uVar37 * uVar29;
              }
              lVar24 = *plVar19;
              plVar18 = *(long **)(puVar49[4] + uVar25 * 8);
              do {
                plVar41 = plVar18;
                plVar18 = (long *)*plVar41;
              } while ((long *)*plVar41 != plVar19);
              if (plVar41 == puVar49 + 6) {
LAB_10947ca54:
                if (lVar24 == 0) {
LAB_10947ca88:
                  *(undefined8 *)(puVar49[4] + uVar25 * 8) = 0;
                  lVar24 = *plVar19;
                  goto LAB_10947ca90;
                }
                uVar37 = *(ulong *)(lVar24 + 8);
                if ((uVar29 & uVar36) == 0) {
                  uVar38 = uVar37 & uVar36;
                }
                else {
                  uVar38 = uVar37;
                  if (uVar29 <= uVar37) {
                    uVar38 = 0;
                    if (uVar29 != 0) {
                      uVar38 = uVar37 / uVar29;
                    }
                    uVar38 = uVar37 - uVar38 * uVar29;
                  }
                }
                if (uVar38 != uVar25) goto LAB_10947ca88;
LAB_10947ca98:
                if ((uVar29 & uVar36) == 0) {
                  uVar37 = uVar37 & uVar36;
                }
                else if (uVar29 <= uVar37) {
                  uVar36 = 0;
                  if (uVar29 != 0) {
                    uVar36 = uVar37 / uVar29;
                  }
                  uVar37 = uVar37 - uVar36 * uVar29;
                }
                if (uVar37 != uVar25) {
                  *(long **)(puVar49[4] + uVar37 * 8) = plVar41;
                  lVar24 = *plVar19;
                }
              }
              else {
                uVar37 = plVar41[1];
                if ((uVar29 & uVar36) == 0) {
                  uVar37 = uVar37 & uVar36;
                }
                else if (uVar29 <= uVar37) {
                  uVar38 = 0;
                  if (uVar29 != 0) {
                    uVar38 = uVar37 / uVar29;
                  }
                  uVar37 = uVar37 - uVar38 * uVar29;
                }
                if (uVar37 != uVar25) goto LAB_10947ca54;
LAB_10947ca90:
                if (lVar24 != 0) {
                  uVar37 = *(ulong *)(lVar24 + 8);
                  goto LAB_10947ca98;
                }
              }
              *plVar41 = lVar24;
              *plVar19 = 0;
              puVar49[7] = puVar49[7] + -1;
              __ZdlPv();
            }
          }
        }
        puVar46 = (undefined8 *)puVar49[0x15];
        puVar44 = puVar50;
        puVar51 = puVar50;
        if (puVar50 + 5 != puVar46) {
          do {
            uVar45 = puVar51[5];
            uVar9 = puVar51[6];
            puVar51[5] = 0;
            puVar51[6] = 0;
            lVar24 = puVar51[1];
            puVar51[1] = uVar9;
            *puVar51 = uVar45;
            if (lVar24 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            func_0x0001094881d0(puVar51 + 2,puVar51 + 7);
            puVar44 = puVar51 + 5;
            puVar32 = puVar51 + 10;
            puVar51 = puVar44;
          } while (puVar32 != puVar46);
          puVar46 = (undefined8 *)puVar49[0x15];
        }
        while (puVar46 != puVar44) {
          puVar46 = puVar46 + -5;
          FUN_109485778(puVar46);
        }
        puVar49[0x15] = puVar44;
      }
      else {
        puVar44 = (undefined8 *)*param_3;
        puVar51 = (undefined8 *)param_3[1];
        if (puVar44 != puVar51) {
          do {
            if ((long *)*puVar44 == uStack_480) goto LAB_10947cba4;
            puVar44 = puVar44 + 2;
          } while (puVar44 != puVar51);
          goto LAB_10947c998;
        }
LAB_10947cba4:
        if (puVar44 == puVar51) goto LAB_10947c998;
        FUN_1094874a8(&plStack_c0,uStack_480,uStack_480,plVar16);
        puVar50 = puVar50 + 5;
      }
      if (plVar16 != (long *)0x0) {
        plVar19 = plVar16 + 1;
        do {
          lVar24 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    } while (puVar50 != (undefined8 *)puVar49[0x15]);
    plVar16 = (long *)*param_3;
    plVar19 = (long *)param_3[1];
  }
  if (plVar16 == plVar19) {
    uStack_480 = (long *)((ulong)uStack_480 & 0xffffffffffffff00);
    uStack_458 = uStack_458 & 0xffffffffffffff00;
  }
  else {
    plVar41 = (long *)0x0;
    plVar18 = puVar49 + 6;
    do {
      plVar47 = (long *)*plVar16;
      if (((ulong)plVar41 & 1) == 0) {
        (**(code **)(*plVar47 + 8))();
        plVar48 = (long *)*plVar16;
        plVar41 = plVar47;
      }
      else {
        plVar41 = (long *)0x1;
        plVar48 = plVar47;
      }
      plVar47 = plStack_c0;
      piVar31 = piStack_b8;
      func_0x000109487ad8(plStack_c0,piStack_b8,plVar48);
      if (plVar47 == (long *)0x0) {
        (**(code **)*plVar48)(&plStack_620,plVar48);
        plVar48 = plStack_618;
        for (plVar47 = plStack_620; lVar24 = lStack_610, plVar27 = plStack_618,
            plVar30 = plStack_620, plVar47 != plVar48; plVar47 = plVar47 + 1) {
          piVar52 = (int *)*plVar47;
          if (*piVar52 != 0) {
            puVar50 = puVar49 + 4;
            piVar31 = piVar52;
            func_0x000109487ba4();
            if (puVar50 != (undefined8 *)0x0) {
              FUN_10938ce40(&UNK_10f56e55f);
              goto LAB_10947e350;
            }
            uVar59 = *(undefined4 *)(puVar49 + 0x10);
            piVar17 = piVar52 + 4;
            FUN_109406458();
            uVar25 = ((ulong)(uint)((int)piVar52 << 3) + 8 ^ (ulong)piVar52 >> 0x20) *
                     -0x622015f714c7d297;
            uVar25 = ((ulong)piVar52 >> 0x20 ^ uVar25 >> 0x2f ^ uVar25) * -0x622015f714c7d297;
            puVar51 = (undefined8 *)((uVar25 ^ uVar25 >> 0x2f) * -0x622015f714c7d297);
            puVar44 = (undefined8 *)puVar49[5];
            puVar50 = puVar49;
            if (puVar44 != (undefined8 *)0x0) {
              uVar25 = (long)puVar44 - 1;
              if (((ulong)puVar44 & uVar25) == 0) {
                puVar50 = (undefined8 *)(uVar25 & (ulong)puVar51);
              }
              else {
                puVar50 = puVar51;
                if (puVar44 <= puVar51) {
                  uVar29 = 0;
                  if (puVar44 != (undefined8 *)0x0) {
                    uVar29 = (ulong)puVar51 / (ulong)puVar44;
                  }
                  puVar50 = (undefined8 *)((long)puVar51 - uVar29 * (long)puVar44);
                }
              }
              plVar30 = *(long **)(puVar49[4] + (long)puVar50 * 8);
              if (plVar30 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar30 = (long *)*plVar30;
                    if (plVar30 == (long *)0x0) goto LAB_10947cd4c;
                    puVar46 = (undefined8 *)plVar30[1];
                    if (puVar46 != puVar51) break;
                    if ((int *)plVar30[2] == piVar52) goto LAB_10947ce84;
                  }
                  if (((ulong)puVar44 & uVar25) == 0) {
                    puVar46 = (undefined8 *)((ulong)puVar46 & uVar25);
                  }
                  else if (puVar44 <= puVar46) {
                    uVar29 = 0;
                    if (puVar44 != (undefined8 *)0x0) {
                      uVar29 = (ulong)puVar46 / (ulong)puVar44;
                    }
                    puVar46 = (undefined8 *)((long)puVar46 - uVar29 * (long)puVar44);
                  }
                } while (puVar46 == puVar50);
              }
            }
LAB_10947cd4c:
            plVar30 = (long *)0x40;
            piVar26 = piVar31;
            __Znwm();
            *plVar30 = 0;
            plVar30[1] = (long)puVar51;
            plVar30[2] = (long)piVar52;
            *(undefined4 *)(plVar30 + 3) = uVar59;
            plVar30[4] = (long)piVar52;
            plVar30[5] = (long)piVar17;
            *(char *)(plVar30 + 6) = (char)piVar31;
            *(undefined1 *)(plVar30 + 7) = 0;
            if ((puVar44 == (undefined8 *)0x0) ||
               (*(float *)(puVar49 + 8) * (float)puVar44 < (float)(puVar49[7] + 1))) {
              uVar25 = 1;
              if ((undefined8 *)0x2 < puVar44) {
                uVar25 = (ulong)(((ulong)puVar44 & (long)puVar44 - 1U) != 0);
              }
              piVar26 = (int *)(uVar25 | (long)puVar44 << 1);
              piVar31 = (int *)(long)((float)(puVar49[7] + 1) / *(float *)(puVar49 + 8));
              if (piVar26 <= piVar31) {
                piVar26 = piVar31;
              }
              FUN_109485ffc(puVar49 + 4);
              puVar44 = (undefined8 *)puVar49[5];
              if (((ulong)puVar44 & (long)puVar44 - 1U) == 0) {
                puVar50 = (undefined8 *)((long)puVar44 - 1U & (ulong)puVar51);
              }
              else {
                puVar50 = puVar51;
                if (puVar44 <= puVar51) {
                  uVar25 = 0;
                  if (puVar44 != (undefined8 *)0x0) {
                    uVar25 = (ulong)puVar51 / (ulong)puVar44;
                  }
                  puVar50 = (undefined8 *)((long)puVar51 - uVar25 * (long)puVar44);
                }
              }
            }
            lVar24 = puVar49[4];
            plVar27 = *(long **)(lVar24 + (long)puVar50 * 8);
            if (plVar27 == (long *)0x0) {
              *plVar30 = *plVar18;
              *plVar18 = (long)plVar30;
              *(long **)(lVar24 + (long)puVar50 * 8) = plVar18;
              if (*plVar30 != 0) {
                puVar50 = *(undefined8 **)(*plVar30 + 8);
                if (((ulong)puVar44 & (long)puVar44 - 1U) == 0) {
                  puVar50 = (undefined8 *)((ulong)puVar50 & (long)puVar44 - 1U);
                }
                else if (puVar44 <= puVar50) {
                  uVar25 = 0;
                  if (puVar44 != (undefined8 *)0x0) {
                    uVar25 = (ulong)puVar50 / (ulong)puVar44;
                  }
                  puVar50 = (undefined8 *)((long)puVar50 - uVar25 * (long)puVar44);
                }
                plVar27 = (long *)(puVar49[4] + (long)puVar50 * 8);
                goto LAB_10947ce74;
              }
            }
            else {
              *plVar30 = *plVar27;
LAB_10947ce74:
              *plVar27 = (long)plVar30;
            }
            puVar49[7] = puVar49[7] + 1;
            piVar31 = piVar26;
LAB_10947ce84:
            *(int *)(puVar49 + 0x10) = *(int *)(puVar49 + 0x10) + 1;
          }
        }
        plVar47 = (long *)*plVar16;
        plVar48 = (long *)plVar16[1];
        if (plVar48 != (long *)0x0) {
          plVar4 = plVar48 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar6) {
              *plVar4 = *plVar4 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_470 = plStack_620;
        plStack_468 = plStack_618;
        lStack_460 = lStack_610;
        plStack_620 = (long *)0x0;
        plStack_618 = (long *)0x0;
        lStack_610 = 0;
        plVar4 = (long *)puVar49[0x15];
        uStack_480 = plVar47;
        plStack_478 = plVar48;
        if (plVar4 < (long *)puVar49[0x16]) {
          *plVar4 = (long)plVar47;
          plVar4[1] = (long)plVar48;
          plVar4[2] = (long)plVar30;
          plVar4[3] = (long)plVar27;
          plVar42 = plVar4 + 5;
          plVar4[4] = lVar24;
        }
        else {
          lVar33 = (long)plVar4 - puVar49[0x14];
          uVar25 = (lVar33 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar25) {
            FUN_109486278();
            goto LAB_10947e350;
          }
          lVar34 = (long)puVar49[0x16] - puVar49[0x14] >> 3;
          uVar29 = lVar34 * -0x6666666666666666;
          if (uVar29 < uVar25 || uVar29 - uVar25 == 0) {
            uVar29 = uVar25;
          }
          if (0x333333333333332 < (ulong)(lVar34 * -0x3333333333333333)) {
            uVar29 = 0x666666666666666;
          }
          FUN_10948628c();
          plVar42 = (long *)(uVar29 + lVar33);
          *plVar42 = (long)plVar47;
          plVar42[1] = (long)plVar48;
          plVar42[2] = (long)plVar30;
          plVar42[3] = (long)plVar27;
          plVar42[4] = lVar24;
          puVar44 = (undefined8 *)puVar49[0x14];
          puVar46 = (undefined8 *)puVar49[0x15];
          puVar51 = (undefined8 *)((long)plVar42 + ((long)puVar44 - (long)puVar46));
          puVar50 = puVar44;
          puVar32 = puVar51;
          if ((long)puVar44 - (long)puVar46 != 0) {
            do {
              uVar45 = *puVar50;
              puVar32[1] = puVar50[1];
              *puVar32 = uVar45;
              *puVar50 = 0;
              puVar50[1] = 0;
              puVar32[2] = 0;
              puVar32[3] = 0;
              puVar32[4] = 0;
              uVar45 = puVar50[2];
              puVar32[3] = puVar50[3];
              puVar32[2] = uVar45;
              puVar32[4] = puVar50[4];
              puVar50[2] = 0;
              puVar50[3] = 0;
              puVar50[4] = 0;
              puVar50 = puVar50 + 5;
              puVar32 = puVar32 + 5;
            } while (puVar50 != puVar46);
            do {
              FUN_109485778(puVar44);
              puVar44 = puVar44 + 5;
            } while (puVar44 != puVar46);
            puVar44 = (undefined8 *)puVar49[0x14];
          }
          plVar42 = plVar42 + 5;
          puVar49[0x14] = puVar51;
          puVar49[0x15] = plVar42;
          puVar49[0x16] = uVar29 + (long)piVar31 * 0x28;
          if (puVar44 != (undefined8 *)0x0) {
            __ZdlPv(puVar44);
          }
        }
        puVar49[0x15] = plVar42;
        if (plStack_620 != (long *)0x0) {
          plStack_618 = plStack_620;
          __ZdlPv();
        }
        FUN_109487c78(&plStack_c0,*plVar16,*plVar16,plVar16[1]);
        plVar41 = (long *)((ulong)plVar41 & 0xffffffff);
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar19);
    uStack_480 = (long *)((ulong)uStack_480 & 0xffffffffffffff00);
    uStack_458 = uStack_458 & 0xffffffffffffff00;
    if (((ulong)plVar41 & 1) != 0) {
      plStack_4f0 = (long *)((ulong)plStack_4f0 & 0xffffffffffffff00);
      uVar25 = (ulong)plStack_4e0 >> 8;
      plStack_4e0 = (long *)((ulong)plStack_4e0 & 0xffffffffffffff00);
      puVar21 = auStack_380;
      if (cStack_f0 == '\0') {
        puVar21 = param_2;
      }
      if ((puVar21[0x280] & 1) != 0) {
        puVar21 = auStack_380;
        if (cStack_f0 == '\0') {
          puVar21 = param_2;
        }
        plStack_4f0 = *(long **)(puVar21 + 0x270);
        plStack_4e8 = *(long **)(puVar21 + 0x278);
        if (plStack_4e8 != (long *)0x0) {
          plVar16 = plStack_4e8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = *plVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_4e0 = (long *)CONCAT71((int7)uVar25,1);
        pbVar35 = (byte *)(puVar49 + 0x13);
        plVar16 = puVar49 + 0x12;
        if ((*pbVar35 & 1) == 0) {
          (*(code *)*plStack_4f0)(&plStack_620);
          plVar19 = plStack_620;
          if (*pbVar35 == 1) {
            plStack_620 = (long *)0x0;
            plVar18 = (long *)*plVar16;
            *plVar16 = (long)plVar19;
            if (plVar18 != (long *)0x0) {
              plVar16 = plVar18 + 1;
              do {
                lVar24 = *plVar16;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *plVar16 = lVar24 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar24 == 0) {
                (**(code **)(*plVar18 + 0x10))();
              }
              if (plStack_620 != (long *)0x0) {
                plVar16 = plStack_620 + 1;
                do {
                  lVar24 = *plVar16;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar6) {
                    *plVar16 = lVar24 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar24 == 0) {
                  (**(code **)(*plStack_620 + 0x10))();
                }
              }
            }
          }
          else {
            *plVar16 = (long)plStack_620;
            *pbVar35 = 1;
          }
          if ((char)plStack_4e0 != '\x01') goto LAB_10947d1a4;
        }
        plVar16 = plStack_4e8;
        if (plStack_4e8 != (long *)0x0) {
          plVar19 = plStack_4e8 + 1;
          do {
            lVar24 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar24 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_4e8 + 0x10))(plStack_4e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
      }
LAB_10947d1a4:
      puVar50 = (undefined8 *)&iStack_4b0;
      FUN_109484a78(puVar50,*(undefined8 *)(puVar2 + 0x110));
      plStack_620 = (long *)((ulong)plStack_620 & 0xffffffffffffff00);
      uStack_5f8 = uStack_5f8 & 0xffffffffffffff00;
      if (*(byte *)(puVar49 + 0x13) == 1) {
        uVar45 = puVar49[0x12];
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_3c0 = puVar50;
        FUN_1093f25b0(uVar45,&uStack_3c0);
        if ((int)uVar45 == 0) {
          if ((*(byte *)(puVar49 + 0x13) & 1) == 0) goto LAB_10947e34c;
          puVar50 = (undefined8 *)puVar49[0x12];
          FUN_109487ecc();
          FUN_109406f6c(&uStack_3c0,*puVar50,&iStack_4b0,*puVar50);
          FUN_10945f960(&plStack_620,&uStack_3c0);
          if (uStack_3b0 != (undefined8 *)0x0) {
            uStack_3a8 = uStack_3b0;
            __ZdlPv();
          }
        }
      }
      FUN_109487f90(&uStack_480,&plStack_620);
      if (((char)uStack_5f8 == '\x01') && (lStack_610 != 0)) {
        uStack_608 = lStack_610;
        __ZdlPv();
      }
      iStack_4b0 = 0x10af4c80;
      iStack_4ac = 1;
      if (puStack_4a8 != (undefined8 *)0x0) {
        __ZdaPv();
      }
    }
  }
  plStack_618 = (long *)0x0;
  plStack_620 = (long *)0x0;
  uStack_608 = 0;
  lStack_610 = 0;
  iStack_600 = 0x3f800000;
  if (plStack_b0 != (long *)0x0) {
    plVar16 = plStack_b0;
    puVar21 = auStack_380;
    if (cStack_f0 == '\0') {
      puVar21 = param_2;
    }
    do {
      FUN_1094863c8(&uStack_3c0,plVar16[2],puVar21 + 0x230);
      puVar50 = uStack_3c0;
      puVar44 = uStack_3b8;
      if ((char)uStack_458 == '\x01') {
        plVar19 = (long *)plVar16[2];
        (**(code **)(*plVar19 + 8))();
        puVar50 = uStack_3c0;
        puVar44 = uStack_3b8;
        if ((int)plVar19 != 0) {
          if ((uStack_458 & 1) == 0) {
            FUN_10945fd6c();
            goto LAB_10947e350;
          }
          FUN_109486dec(&iStack_4b0,&uStack_3c0,&uStack_480,auStack_538);
          if (uStack_3c0 != (undefined8 *)0x0) {
            uStack_3b8 = uStack_3c0;
            __ZdlPv();
          }
          puVar50 = (undefined8 *)CONCAT44(iStack_4ac,iStack_4b0);
          uStack_3b8 = puStack_4a8;
          uStack_3c0 = puVar50;
          puVar44 = puStack_4a8;
          uStack_3b0 = puStack_4a0;
        }
      }
      for (; uVar45 = uStack_3b8, puVar50 != uStack_3b8; puVar50 = puVar50 + 1) {
        uStack_3b8 = puVar44;
        FUN_10943e634(&plStack_620,puVar50,puVar50);
        puVar44 = uStack_3b8;
        uStack_3b8 = (undefined8 *)uVar45;
      }
      uStack_3b8 = puVar44;
      if (uStack_3c0 != (undefined8 *)0x0) {
        uStack_3b8 = uStack_3c0;
        __ZdlPv(uStack_3c0);
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  plVar18 = puVar49 + 6;
  plVar19 = (long *)*plVar18;
  plVar16 = (long *)0x0;
  if (plVar19 == (long *)0x0) {
    plVar41 = (long *)0x0;
  }
  else {
    plVar47 = (long *)0x0;
    plVar48 = plVar16;
    plVar30 = (long *)0x0;
    do {
      pplVar20 = &plStack_620;
      FUN_109411dd4(pplVar20,plVar19 + 2);
      plVar16 = plVar48;
      plVar41 = plVar30;
      if (((pplVar20 == (long **)0x0 ^ *(byte *)(plVar19 + 7)) & 1) == 0) {
        if (plVar48 < plVar47) {
          plVar16 = plVar48 + 1;
          *plVar48 = (long)(plVar19 + 3);
        }
        else {
          lVar24 = (long)plVar48 - (long)plVar30;
          uVar25 = (lVar24 >> 3) + 1;
          if (uVar25 >> 0x3d != 0) {
            FUN_1094882f0();
            goto LAB_10947e350;
          }
          uVar29 = (long)plVar47 - (long)plVar30 >> 2;
          if (uVar29 <= uVar25) {
            uVar29 = uVar25;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plVar47 - (long)plVar30)) {
            uVar29 = 0x1fffffffffffffff;
          }
          if (uVar29 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10947e350;
          }
          lVar33 = uVar29 << 3;
          __Znwm();
          plVar48 = (long *)(lVar33 + lVar24);
          plVar47 = (long *)(lVar33 + uVar29 * 8);
          plVar41 = plVar48 + -(lVar24 >> 3);
          plVar16 = plVar48 + 1;
          *plVar48 = (long)(plVar19 + 3);
          _memcpy(plVar41,plVar30,lVar24);
          if (plVar30 != (long *)0x0) {
            __ZdlPv(plVar30);
          }
        }
      }
      plVar19 = (long *)*plVar19;
      plVar48 = plVar16;
      plVar30 = plVar41;
    } while (plVar19 != (long *)0x0);
  }
  lVar24 = 0;
  if (plVar16 != plVar41) {
    lVar24 = LZCOUNT((long)plVar16 - (long)plVar41 >> 3) * -2 + 0x7e;
  }
  plVar47 = plVar16;
  FUN_109488304(plVar41,plVar16,lVar24,1);
  for (plVar19 = plVar41; plVar16 != plVar19; plVar19 = plVar19 + 1) {
    lVar24 = *plVar19;
    if ((*(byte *)(lVar24 + 0x20) & 1) == 0) {
      plVar30 = *(long **)(*(long *)(lVar24 + 8) + 0x3f0);
      for (plVar48 = *(long **)(*(long *)(lVar24 + 8) + 1000); plVar48 != plVar30;
          plVar48 = plVar48 + 0x1a) {
        uVar25 = 0;
        plVar27 = (long *)plVar48[0xe];
        uVar10 = (undefined7)*plVar27;
        puVar50 = (undefined8 *)*plVar27;
        uVar11 = (undefined7)plVar27[1];
        puVar44 = (undefined8 *)plVar27[1];
        uVar12 = (undefined7)plVar27[2];
        puVar51 = (undefined8 *)plVar27[2];
        uVar13 = (undefined7)plVar27[3];
        puVar46 = (undefined8 *)plVar27[3];
        lVar33 = puVar49[9];
        do {
          lVar34 = lVar33 + uVar25 * 0x30;
          uVar25 = *(ulong *)(lVar34 + 0x20);
          lVar34 = *(long *)(lVar34 + 0x28);
          if (uVar25 < lVar34 + uVar25) {
            uStack_3c0._0_1_ = (byte)uVar10;
            uStack_3c0._1_1_ = (byte)((uint7)uVar10 >> 8);
            uStack_3c0._2_1_ = (byte)((uint7)uVar10 >> 0x10);
            uStack_3c0._3_1_ = (byte)((uint7)uVar10 >> 0x18);
            uStack_3c0._4_1_ = (byte)((uint7)uVar10 >> 0x20);
            uStack_3c0._5_1_ = (byte)((uint7)uVar10 >> 0x28);
            uStack_3c0._6_1_ = (byte)((uint7)uVar10 >> 0x30);
            uStack_3b8._0_1_ = (byte)uVar11;
            uStack_3b8._1_1_ = (byte)((uint7)uVar11 >> 8);
            uStack_3b8._2_1_ = (byte)((uint7)uVar11 >> 0x10);
            uStack_3b8._3_1_ = (byte)((uint7)uVar11 >> 0x18);
            uStack_3b8._4_1_ = (byte)((uint7)uVar11 >> 0x20);
            uStack_3b8._5_1_ = (byte)((uint7)uVar11 >> 0x28);
            uStack_3b8._6_1_ = (byte)((uint7)uVar11 >> 0x30);
            uStack_3b0._0_1_ = (byte)uVar12;
            uStack_3b0._1_1_ = (byte)((uint7)uVar12 >> 8);
            uStack_3b0._2_1_ = (byte)((uint7)uVar12 >> 0x10);
            uStack_3b0._3_1_ = (byte)((uint7)uVar12 >> 0x18);
            uStack_3b0._4_1_ = (byte)((uint7)uVar12 >> 0x20);
            uStack_3b0._5_1_ = (byte)((uint7)uVar12 >> 0x28);
            uStack_3b0._6_1_ = (byte)((uint7)uVar12 >> 0x30);
            uStack_3a8._0_1_ = (byte)uVar13;
            uStack_3a8._1_1_ = (byte)((uint7)uVar13 >> 8);
            uStack_3a8._2_1_ = (byte)((uint7)uVar13 >> 0x10);
            uStack_3a8._3_1_ = (byte)((uint7)uVar13 >> 0x18);
            uStack_3a8._4_1_ = (byte)((uint7)uVar13 >> 0x20);
            uStack_3a8._5_1_ = (byte)((uint7)uVar13 >> 0x28);
            uStack_3a8._6_1_ = (byte)((uint7)uVar13 >> 0x30);
            pbVar35 = (byte *)(lVar33 + uVar25 * 0x30);
            fVar54 = 3.4028235e+38;
            uVar36 = uVar25;
            uVar29 = uVar25;
            do {
              fVar58 = (float)(ushort)((ushort)(byte)POPCOUNT(*pbVar35 ^ (byte)uStack_3c0) +
                                       (ushort)(byte)POPCOUNT(pbVar35[2] ^ uStack_3c0._2_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[4] ^ uStack_3c0._4_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[6] ^ uStack_3c0._6_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[8] ^ (byte)uStack_3b8) +
                                       (ushort)(byte)POPCOUNT(pbVar35[10] ^ uStack_3b8._2_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0xc] ^ uStack_3b8._4_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0xe] ^ uStack_3b8._6_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x10] ^ (byte)uStack_3b0) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x12] ^ uStack_3b0._2_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x14] ^ uStack_3b0._4_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x16] ^ uStack_3b0._6_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x18] ^ (byte)uStack_3a8) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x1a] ^ uStack_3a8._2_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x1c] ^ uStack_3a8._4_1_) +
                                       (ushort)(byte)POPCOUNT(pbVar35[0x1e] ^ uStack_3a8._6_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[1] ^ uStack_3c0._1_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[3] ^ uStack_3c0._3_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[5] ^ uStack_3c0._5_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[7] ^
                                                             *(byte *)((long)plVar27 + 7)) +
                                      (ushort)(byte)POPCOUNT(pbVar35[9] ^ uStack_3b8._1_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0xb] ^ uStack_3b8._3_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0xd] ^ uStack_3b8._5_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0xf] ^
                                                             *(byte *)((long)plVar27 + 0xf)) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x11] ^ uStack_3b0._1_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x13] ^ uStack_3b0._3_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x15] ^ uStack_3b0._5_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x17] ^
                                                             *(byte *)((long)plVar27 + 0x17)) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x19] ^ uStack_3a8._1_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x1b] ^ uStack_3a8._3_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x1d] ^ uStack_3a8._5_1_) +
                                      (ushort)(byte)POPCOUNT(pbVar35[0x1f] ^
                                                             *(byte *)((long)plVar27 + 0x1f)));
              uVar25 = uVar29;
              if (fVar54 <= fVar58) {
                uVar25 = uVar36;
                fVar58 = fVar54;
              }
              fVar54 = fVar58;
              uVar29 = uVar29 + 1;
              pbVar35 = pbVar35 + 0x30;
              lVar34 = lVar34 + -1;
              uVar36 = uVar25;
            } while (lVar34 != 0);
          }
        } while (*(long *)(lVar33 + uVar25 * 0x30 + 0x28) != 0);
        plVar27 = (long *)(puVar49[0xd] + uVar25 * 0x18);
        uVar25 = plVar27[1];
        uStack_3c0 = puVar50;
        uStack_3b8 = puVar44;
        uStack_3b0 = puVar51;
        uStack_3a8 = puVar46;
        if (uVar25 < (ulong)plVar27[2]) {
          plVar47 = plVar48;
          FUN_1094890f4(uVar25,plVar48,lVar24);
          lVar43 = uVar25 + 0x40;
        }
        else {
          lVar33 = uVar25 - *plVar27;
          uVar25 = (lVar33 >> 6) + 1;
          if (uVar25 >> 0x3a != 0) {
            FUN_1094861cc();
            goto LAB_10947e350;
          }
          uVar36 = plVar27[2] - *plVar27;
          uVar29 = (long)uVar36 >> 5;
          if (uVar29 <= uVar25) {
            uVar29 = uVar25;
          }
          if (0x7fffffffffffffbf < uVar36) {
            uVar29 = 0x3ffffffffffffff;
          }
          if (uVar29 == 0) {
            uVar29 = 0;
            plVar47 = (long *)0x0;
          }
          else {
            FUN_1094861e0();
          }
          lVar33 = uVar29 + lVar33;
          FUN_1094890f4(lVar33,plVar48,lVar24);
          lVar34 = (long)plVar47 * 0x40;
          lVar43 = lVar33 + 0x40;
          plVar47 = (long *)*plVar27;
          lVar33 = lVar33 - (plVar27[1] - (long)plVar47);
          _memcpy(lVar33);
          lVar39 = *plVar27;
          *plVar27 = lVar33;
          plVar27[1] = lVar43;
          plVar27[2] = uVar29 + lVar34;
          if (lVar39 != 0) {
            __ZdlPv();
          }
        }
        plVar27[1] = lVar43;
      }
      *(undefined1 *)(lVar24 + 0x20) = 1;
    }
    else {
      plVar47 = (long *)puVar49[0xe];
      FUN_109487914(puVar49[0xd],plVar47,lVar24);
    }
  }
  if (plVar41 != (long *)0x0) {
    __ZdlPv(plVar41);
  }
  FUN_10948cb8c(&plStack_620);
  if (((char)uStack_458 == '\x01') && (uStack_470 != (long *)0x0)) {
    plStack_468 = uStack_470;
    __ZdlPv();
  }
  FUN_1094891bc(&plStack_c0);
  FUN_10940b4e0(&plStack_620,lVar23,auStack_5a8);
  puVar21 = auStack_380;
  if (cStack_f0 == '\0') {
    puVar21 = param_2;
  }
  cVar5 = puVar21[0x268];
  dVar60 = 0.0;
  if (cVar5 == '\x01') {
    puVar21 = auStack_380;
    if (cStack_f0 == '\0') {
      puVar21 = param_2;
    }
    puVar21 = puVar21 + 0x120;
    FUN_109406350(0x4024000000000000,puVar21);
    dVar60 = (double)(float)(double)puVar21;
  }
  lStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  if (0 < iStack_600) {
    fVar54 = *(float *)(puVar49 + 0x11);
    uVar25 = puVar49[0xc];
    iStack_4b0 = 0;
    do {
      iVar40 = iStack_4b0 + 1;
      plStack_4f0 = (long *)0x7fffffff80000000;
      iStack_4ac = iVar40;
      FUN_109a84930(&uStack_480,&uStack_608,&iStack_4b0,&plStack_4f0);
      plStack_c0 = (long *)*uStack_470;
      piStack_b8 = (int *)uStack_470[1];
      plStack_b0 = (long *)uStack_470[2];
      lStack_a8 = uStack_470[3];
      uVar59 = *(undefined4 *)((long)puVar49 + 0x84);
      puStack_4a0 = (undefined8 *)0x0;
      iStack_4b0 = 0;
      iStack_4ac = 0;
      puStack_4a8 = (undefined8 *)0x0;
      func_0x0001073bf8d4(&iStack_4b0,(long)(fVar54 * (float)uVar25) << 1);
      FUN_109489254(uVar59,puVar49 + 9,&plStack_c0,0,(long)(fVar54 * (float)uVar25),&iStack_4b0);
      FUN_109489218(&lStack_510,&iStack_4b0);
      if ((undefined8 *)CONCAT44(iStack_4ac,iStack_4b0) != (undefined8 *)0x0) {
        puStack_4a8 = (undefined8 *)CONCAT44(iStack_4ac,iStack_4b0);
        __ZdlPv();
      }
      if (lStack_448 != 0) {
        piVar31 = (int *)(lStack_448 + 0x14);
        do {
          iVar3 = *piVar31;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar6) {
            *piVar31 = iVar3 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_480);
        }
      }
      lStack_448 = 0;
      plStack_468 = (long *)0x0;
      uStack_470 = (long *)0x0;
      uStack_458 = 0;
      lStack_460 = 0;
      if (0 < uStack_480._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(lStack_440 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_480._4_4_);
      }
      if (puStack_438 != auStack_430 && puStack_438 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_438 + -8));
      }
      iStack_4b0 = iVar40;
    } while (iVar40 < iStack_600);
  }
  puStack_4a8 = (undefined8 *)0x0;
  iStack_4b0 = 0;
  iStack_4ac = 0;
  uStack_498 = 0;
  puStack_4a0 = (undefined8 *)0x0;
  uStack_490 = 0x3f800000;
  FUN_109489b00(&iStack_4b0,(long)(float)(ulong)puVar49[7]);
  dVar55 = (double)_fmod(dVar60,0x4076800000000000);
  dVar60 = dVar55 + 360.0;
  if (0.0 <= dVar55) {
    dVar60 = dVar55;
  }
  lStack_4c8 = 0;
  lStack_4c0 = 0;
  uStack_4b8 = 0;
  FUN_109488024(&lStack_4c8,puVar49[7]);
  while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
    func_0x0001094880b0(&lStack_4c8,plVar18 + 2);
  }
  lVar24 = 0;
  if (lStack_4c0 != lStack_4c8) {
    lVar24 = LZCOUNT(lStack_4c0 - lStack_4c8 >> 3) * -2 + 0x7e;
  }
  uStack_480 = puVar49 + 4;
  FUN_109489d0c(lStack_4c8,lStack_4c0,&uStack_480,lVar24,1);
  if (plStack_618 != plStack_620) {
    uVar25 = 0;
    do {
      iVar40 = (int)uVar25;
      plStack_c0 = (long *)CONCAT44(iVar40 + 1,iVar40);
      plStack_4f0 = (long *)0x7fffffff80000000;
      FUN_109a84930(&uStack_480,&uStack_608,&plStack_c0,&plStack_4f0);
      uStack_e0 = (long *)*uStack_470;
      uStack_d8 = (long *)uStack_470[1];
      uStack_d0 = (long *)uStack_470[2];
      uStack_c8 = uStack_470[3];
      dVar56 = (double)_fmod((double)*(float *)((long)plStack_620 + uVar25 * 0x1c + 0xc),
                             0x4076800000000000);
      dVar55 = dVar56 + 360.0;
      if (0.0 <= dVar56) {
        dVar55 = dVar56;
      }
      plVar19 = (long *)(lStack_510 + uVar25 * 0x18);
      plStack_4e8 = (long *)0x0;
      plStack_4f0 = (long *)0x0;
      uStack_4d8 = 0;
      plStack_4e0 = (long *)0x0;
      uStack_4d0 = 0x3f800000;
      plVar16 = (long *)*plVar19;
      plVar19 = (long *)plVar19[1];
      if (plVar16 != plVar19) {
        do {
          puVar50 = (undefined8 *)(puVar49[0xd] + *plVar16 * 0x18);
          plVar41 = (long *)puVar50[1];
          for (plVar18 = (long *)*puVar50; plVar18 != plVar41; plVar18 = plVar18 + 8) {
            uVar53 = (ushort)(byte)POPCOUNT(*(byte *)(plVar18 + 1) ^ (byte)uStack_e0) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 10) ^ uStack_e0._2_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0xc) ^ uStack_e0._4_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0xe) ^ uStack_e0._6_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)(plVar18 + 2) ^ (byte)uStack_d8) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x12) ^ uStack_d8._2_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x14) ^ uStack_d8._4_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x16) ^ uStack_d8._6_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)(plVar18 + 3) ^ (byte)uStack_d0) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x1a) ^ uStack_d0._2_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x1c) ^ uStack_d0._4_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x1e) ^ uStack_d0._6_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)(plVar18 + 4) ^ (byte)uStack_c8) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x22) ^ uStack_c8._2_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x24) ^ uStack_c8._4_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x26) ^ uStack_c8._6_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 9) ^ uStack_e0._1_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0xb) ^ uStack_e0._3_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0xd) ^ uStack_e0._5_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0xf) ^ uStack_e0._7_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x11) ^ uStack_d8._1_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x13) ^ uStack_d8._3_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x15) ^ uStack_d8._5_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x17) ^ uStack_d8._7_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x19) ^ uStack_d0._1_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x1b) ^ uStack_d0._3_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x1d) ^ uStack_d0._5_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x1f) ^ uStack_d0._7_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x21) ^ uStack_c8._1_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x23) ^ uStack_c8._3_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x25) ^ uStack_c8._5_1_) +
                     (ushort)(byte)POPCOUNT(*(byte *)((long)plVar18 + 0x27) ^ uStack_c8._7_1_);
            if (uVar53 < 0x47) {
              cVar7 = (char)(int)(dVar55 * 0.7111111111111111);
              if ((cVar5 != '\0') && ((char)plVar18[7] == '\x01')) {
                uVar8 = (uint)(char)((*(char *)((long)plVar18 + 0x3a) +
                                     (char)(int)(dVar60 * 0.7111111111111111)) -
                                    (*(char *)((long)plVar18 + 0x39) + cVar7));
                uVar1 = -uVar8;
                if (-1 < (int)uVar8) {
                  uVar1 = uVar8;
                }
                if (0x23 < uVar1) goto LAB_10947dc70;
              }
              lStack_4f8 = plVar18[6];
              plStack_c0 = &lStack_4f8;
              pplVar20 = &plStack_4f0;
              FUN_10948ae10(pplVar20,&lStack_4f8,&UNK_10dd5b8f9,&plStack_c0,&uStack_481);
              pplVar22 = pplVar20 + 3;
              plVar48 = *pplVar22;
              fVar54 = (float)uVar53;
              plVar47 = pplVar20[4];
              uVar29 = (long)plVar47 - (long)plVar48;
              if (2 < (ulong)(((long)uVar29 >> 3) * -0x3333333333333333)) {
                if (*(float *)(plVar48 + 3) <= fVar54) goto LAB_10947dc70;
                if (0x28 < (long)uVar29) {
                  plStack_c0 = (long *)*plVar48;
                  piStack_b8 = (int *)plVar48[1];
                  plStack_b0 = (long *)plVar48[2];
                  lStack_a8 = plVar48[3];
                  lStack_a0 = plVar48[4];
                  plVar30 = plVar48;
                  FUN_10948b0c0(plVar48,&lStack_4f8,(uVar29 >> 3) * -0x3333333333333333);
                  plVar27 = plVar47 + -5;
                  if (plVar27 == plVar30) {
                    plVar30[1] = (long)piStack_b8;
                    *plVar30 = (long)plStack_c0;
                    plVar30[3] = lStack_a8;
                    plVar30[2] = (long)plStack_b0;
                    *(undefined4 *)(plVar30 + 4) = (undefined4)lStack_a0;
                  }
                  else {
                    lVar24 = *plVar27;
                    lVar33 = plVar47[-4];
                    lVar34 = plVar47[-3];
                    lVar43 = plVar47[-2];
                    *(int *)(plVar30 + 4) = (int)plVar47[-1];
                    plVar30[1] = lVar33;
                    *plVar30 = lVar24;
                    plVar30[3] = lVar43;
                    plVar30[2] = lVar34;
                    plVar47[-4] = (long)piStack_b8;
                    *plVar27 = (long)plStack_c0;
                    plVar47[-2] = lStack_a8;
                    plVar47[-3] = (long)plStack_b0;
                    *(undefined4 *)(plVar47 + -1) = (undefined4)lStack_a0;
                    FUN_10948b154(plVar48,plVar30 + 5,&lStack_4f8,
                                  ((long)(plVar30 + 5) - (long)plVar48 >> 3) * -0x3333333333333333);
                  }
                  plVar47 = pplVar20[4];
                }
                plVar47 = plVar47 + -5;
                pplVar20[4] = plVar47;
              }
              lVar43 = *plVar18;
              lVar24 = plVar18[5];
              lVar33 = plVar18[6];
              cVar7 = cVar7 - *(char *)((long)plVar18 + 0x3a);
              lVar34 = plVar18[7];
              if (plVar47 < pplVar20[5]) {
                *plVar47 = lVar33;
                plVar47[1] = lVar43;
                plVar47[2] = lVar24;
                *(float *)(plVar47 + 3) = fVar54;
                *(char *)((long)plVar47 + 0x1c) = cVar7;
                *(char *)((long)plVar47 + 0x1d) = (char)lVar34;
                plVar48 = plVar47 + 5;
                *(int *)(plVar47 + 4) = iVar40;
              }
              else {
                lVar39 = (long)plVar47 - (long)*pplVar22;
                uVar29 = (lVar39 >> 3) * -0x3333333333333333 + 1;
                if (0x666666666666666 < uVar29) {
                  FUN_10940231c();
                  goto LAB_10947e350;
                }
                lVar28 = (long)pplVar20[5] - (long)*pplVar22 >> 3;
                uVar36 = lVar28 * -0x6666666666666666;
                if (uVar36 < uVar29 || uVar36 - uVar29 == 0) {
                  uVar36 = uVar29;
                }
                if (0x333333333333332 < (ulong)(lVar28 * -0x3333333333333333)) {
                  uVar36 = 0x666666666666666;
                }
                FUN_109402330();
                plVar47 = (long *)((long)pplVar22 + lVar39);
                *plVar47 = lVar33;
                plVar47[1] = lVar43;
                plVar47[2] = lVar24;
                *(float *)(plVar47 + 3) = fVar54;
                *(char *)((long)plVar47 + 0x1c) = cVar7;
                *(char *)((long)plVar47 + 0x1d) = (char)lVar34;
                *(int *)(plVar47 + 4) = iVar40;
                plVar48 = plVar47 + 5;
                plVar47 = (long *)((long)plVar47 - ((long)pplVar20[4] - (long)pplVar20[3]));
                _memcpy(plVar47);
                plVar30 = pplVar20[3];
                pplVar20[3] = plVar47;
                pplVar20[4] = plVar48;
                pplVar20[5] = (long *)(pplVar22 + uVar36 * 5);
                if (plVar30 != (long *)0x0) {
                  __ZdlPv();
                }
              }
              pplVar20[4] = plVar48;
              FUN_10948b154(pplVar20[3],plVar48,&plStack_c0,
                            ((long)plVar48 - (long)pplVar20[3] >> 3) * -0x3333333333333333);
            }
LAB_10947dc70:
          }
          plVar16 = plVar16 + 1;
          plVar18 = plStack_4e0;
        } while (plVar16 != plVar19);
        for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
          plVar16 = plVar18 + 2;
          puVar50 = (undefined8 *)&iStack_4b0;
          plStack_c0 = plVar16;
          FUN_10948b21c(puVar50,plVar16,&UNK_10dd5b8f9,&plStack_c0,&lStack_4f8);
          puVar44 = (undefined8 *)&iStack_4b0;
          plStack_c0 = plVar16;
          FUN_10948b21c(puVar44,plVar16,&UNK_10dd5b8f9,&plStack_c0,&lStack_4f8);
          FUN_10948b47c(puVar50 + 3,puVar44[4],plVar18[3],plVar18[4],
                        (plVar18[4] - plVar18[3] >> 3) * -0x3333333333333333);
        }
      }
      FUN_109482a78(&plStack_4f0);
      if (lStack_448 != 0) {
        piVar31 = (int *)(lStack_448 + 0x14);
        do {
          iVar40 = *piVar31;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar6) {
            *piVar31 = iVar40 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar40 + -1 == 0) {
          func_0x000109a848d4(&uStack_480);
        }
      }
      lStack_448 = 0;
      plStack_468 = (long *)0x0;
      uStack_470 = (long *)0x0;
      uStack_458 = 0;
      lStack_460 = 0;
      if (0 < uStack_480._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(lStack_440 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_480._4_4_);
      }
      if (puStack_438 != auStack_430 && puStack_438 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_438 + -8));
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < (ulong)(((long)plStack_618 - (long)plStack_620 >> 2) * 0x6db6db6db6db6db7));
  }
  FUN_10948b738(&uStack_3c0,&lStack_4c8,&iStack_4b0);
  if (lStack_4c8 != 0) {
    lStack_4c0 = lStack_4c8;
    __ZdlPv();
  }
  FUN_109482a78(&iStack_4b0);
  uStack_480 = &lStack_510;
  func_0x00010948bbc8(&uStack_480);
  puStack_4a0 = (undefined8 *)0x0;
  auVar57._0_14_ = ZEXT214(0);
  auVar57._14_2_ = 0;
  puStack_4a8 = (undefined8 *)0x0;
  iStack_4b0 = 0;
  iStack_4ac = 0;
  puVar50 = (undefined8 *)0x0;
  if (lStack_390 != 0) {
    piStack_b8 = (int *)0x0;
    plStack_c0 = (long *)0x0;
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_a0 = CONCAT44(lStack_a0._4_4_,0x3f800000);
    puVar50 = (undefined8 *)*param_3;
    puVar44 = (undefined8 *)param_3[1];
    if ((long)puVar44 - (long)puVar50 == 0x10) {
      FUN_10948bcc0(&plStack_c0,*puVar50,*puVar50,puVar50[1],&uStack_3a8);
    }
    else {
      plStack_478 = (long *)0x0;
      uStack_480 = (long *)0x0;
      plStack_468 = (long *)0x0;
      uStack_470 = (long *)0x0;
      lStack_460 = CONCAT44(lStack_460._4_4_,0x3f800000);
      for (; plVar16 = uStack_480, plVar19 = plStack_398, puVar50 != puVar44; puVar50 = puVar50 + 2)
      {
        (*(code *)**(undefined8 **)*puVar50)(&plStack_4f0);
        plVar19 = plStack_4e8;
        for (plVar16 = plStack_4f0; plVar16 != plVar19; plVar16 = plVar16 + 1) {
          uStack_e0 = (long *)*plVar16;
          puVar51 = &uStack_480;
          FUN_10948c1c8(puVar51,uStack_e0,&uStack_e0);
          FUN_10947f060(puVar51 + 3,*puVar50,puVar50[1]);
        }
        if (plStack_4f0 != (long *)0x0) {
          plStack_4e8 = plStack_4f0;
          __ZdlPv(plStack_4f0);
        }
      }
      for (; uStack_480 = plVar16, plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        FUN_10948c608(plVar16,plStack_478,plVar19[2]);
        if (plVar16 == (long *)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_10947e350;
        }
        pplVar20 = &plStack_c0;
        FUN_10948c6d4(pplVar20,plVar16[3]);
        FUN_10948c930(pplVar20 + 4,plVar19[2],plVar19[2],plVar19 + 3);
        plVar16 = uStack_480;
      }
      FUN_10948c16c(&uStack_480);
    }
    iVar40 = *(int *)(lVar23 + 0x10);
    if (*(int *)(lVar23 + 0x10) <= *(int *)(lVar23 + 0x14)) {
      iVar40 = *(int *)(lVar23 + 0x14);
    }
    fVar54 = fStack_550;
    if (fStack_550 <= fStack_54c * (float)iVar40) {
      fVar54 = fStack_54c * (float)iVar40;
    }
    if (plStack_b0 != (long *)0x0) {
      plVar16 = plStack_b0;
      do {
        plStack_4e8 = (long *)0x0;
        plStack_4e0 = (long *)0x0;
        plStack_4f0 = (long *)0x0;
        plVar19 = (long *)plVar16[2];
        (**(code **)(*plVar19 + 8))();
        if (((int)plVar19 == 0) || (auStack_538[0] < (ulong)plVar16[7])) {
          lStack_4c8 = 0xf00000020;
          lStack_4c0 = 0x3e4ccccd3f4ccccd;
          uStack_4b8 = CONCAT44(uStack_4b8._4_4_,0x41700000);
          plStack_478 = (long *)0x0;
          uStack_480 = (long *)0x0;
          plStack_468 = (long *)0x0;
          uStack_470 = (long *)0x0;
          lStack_460 = CONCAT44(lStack_460._4_4_,0x3f800000);
          FUN_109410fd0(&uStack_e0,plVar16 + 4,&uStack_3c0,&lStack_4c8,&uStack_480);
          if (plStack_4f0 != (long *)0x0) {
            plStack_4e8 = plStack_4f0;
            __ZdlPv();
          }
          plStack_4e8 = uStack_d8;
          plStack_4f0 = uStack_e0;
          plStack_4e0 = uStack_d0;
          uStack_d8 = (long *)0x0;
          uStack_d0 = (long *)0x0;
          uStack_e0 = (long *)0x0;
          FUN_10948cb8c(&uStack_480);
          uStack_53f = uVar14;
        }
        else {
          lStack_4c8 = *(long *)(param_2 + 0x10);
          plStack_478 = (long *)0x41f0000040c00000;
          uStack_480 = (long *)0x428c00003f333333;
          uStack_470 = (long *)CONCAT71(uStack_470._1_7_,1);
          uStack_470 = (long *)CONCAT44(0x3fc00000,(undefined4)uStack_470);
          plStack_468 = (long *)CONCAT71(plStack_468._1_7_,1);
          lStack_460 = 0x80;
          uStack_458 = CONCAT44(uStack_458._4_4_,0x40a00000);
          uStack_450 = 7;
          lStack_448 = CONCAT35(lStack_448._5_3_,0x141a00000);
          FUN_1093fd958(&uStack_e0,&plStack_620,&lStack_4c8,plVar16 + 4,&uStack_3c0,&uStack_480);
          if (plStack_4f0 != (long *)0x0) {
            plStack_4e8 = plStack_4f0;
            __ZdlPv();
          }
          uStack_53f = 0;
          plStack_4e8 = uStack_d8;
          plStack_4f0 = uStack_e0;
          plStack_4e0 = uStack_d0;
        }
        FUN_10940e340(&uStack_480,fVar54 * fVar54,&plStack_4f0,&plStack_620,puVar2,plVar16[2] + 0xb0
                      ,auStack_568,*puVar49);
        plVar19 = plStack_3f0;
        puVar50 = puStack_4a8;
        if (bStack_3d0 == 1) {
          uStack_d8 = plStack_3e8;
          uStack_e0 = plStack_3f0;
          uStack_d0 = plStack_3e0;
          plStack_3e8 = (long *)0x0;
          plStack_3e0 = (long *)0x0;
          plStack_3f0 = (long *)0x0;
          if (puStack_4a8 < puStack_4a0) {
            FUN_109480890(puStack_4a8,plVar16[2],plVar16[3],&uStack_480,&uStack_e0);
            puVar50 = puVar50 + 0x18;
          }
          else {
            puVar50 = (undefined8 *)&iStack_4b0;
            FUN_109480694(puVar50,plVar16[2],plVar16[3],&uStack_480,&uStack_e0);
          }
          puStack_4a8 = puVar50;
          if (plVar19 != (long *)0x0) {
            __ZdlPv();
          }
          if (((bStack_3d0 & 1) != 0) && (plStack_3f0 != (long *)0x0)) {
            plStack_3e8 = plStack_3f0;
            __ZdlPv();
          }
        }
        if (plStack_4f0 != (long *)0x0) {
          plStack_4e8 = plStack_4f0;
          __ZdlPv();
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    puVar50 = (undefined8 *)CONCAT44(iStack_4ac,iStack_4b0);
    lVar23 = 0;
    if (puStack_4a8 != puVar50) {
      lVar23 = LZCOUNT(((long)puStack_4a8 - (long)puVar50 >> 6) * -0x5555555555555555) * -2 + 0x7e;
    }
    FUN_109480a20(puVar50,puStack_4a8,lVar23,1);
    func_0x00010948bc5c(&plStack_c0);
    auVar57._4_4_ = iStack_4ac;
    auVar57._0_4_ = iStack_4b0;
    auVar57._8_8_ = puStack_4a8;
    puVar50 = puStack_4a0;
  }
  param_1[1] = auVar57._8_8_;
  *param_1 = auVar57._0_8_;
  puStack_4a0 = (undefined8 *)0x0;
  iStack_4b0 = 0;
  iStack_4ac = 0;
  puStack_4a8 = (undefined8 *)0x0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  uVar45 = *param_4;
  param_1[2] = puVar50;
  param_1[3] = uVar45;
  *param_4 = 0;
  FUN_109482730(param_1 + 8,param_4 + 5);
  FUN_10948289c(param_1 + 4,param_4 + 1);
  uStack_480 = (long *)&iStack_4b0;
  FUN_109482a08(&uStack_480);
  FUN_109482a78(&uStack_3a8);
  if (uStack_3c0 != (undefined8 *)0x0) {
    uStack_3b8 = uStack_3c0;
    __ZdlPv();
  }
  if (lStack_5d0 != 0) {
    piVar31 = (int *)(lStack_5d0 + 0x14);
    do {
      iVar40 = *piVar31;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar6) {
        *piVar31 = iVar40 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar40 + -1 == 0) {
      func_0x000109a848d4(&uStack_608);
    }
  }
  lStack_5d0 = 0;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_5e0 = 0;
  uStack_5e8 = 0;
  if (0 < uStack_608._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_5c8 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_608._4_4_);
  }
  if (puStack_5c0 != auStack_5b8 && puStack_5c0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_5c0 + -8));
  }
  if (plStack_620 != (long *)0x0) {
    plStack_618 = plStack_620;
    __ZdlPv();
  }
  func_0x000109482af4(auStack_380);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
LAB_10947e34c:
  FUN_10945fd6c();
LAB_10947e350:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10947e354);
  (*pcVar15)();
}



/* Entry: 10947e758; end: 10947eeef;  */

void FUN_10947e758(long *param_1,long *param_2,double *param_3)

{
  int iVar1;
  double *pdVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  long lVar11;
  undefined4 uVar12;
  double *pdVar13;
  long *plVar14;
  char cVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined **ppuStack_670;
  double dStack_668;
  undefined8 uStack_660;
  undefined4 uStack_658;
  undefined **ppuStack_650;
  long lStack_648;
  undefined8 uStack_640;
  int iStack_638;
  long alStack_630 [2];
  long lStack_620;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  double dStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  int iStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_520;
  long lStack_518;
  double dStack_510;
  double dStack_508;
  double dStack_500;
  double dStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  undefined4 uStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined1 uStack_3d8;
  undefined1 uStack_3d7;
  undefined6 uStack_3d6;
  undefined2 uStack_3d0;
  undefined6 uStack_3ce;
  undefined1 uStack_3c8;
  undefined1 uStack_3c7;
  ulong uStack_3c0;
  long *plStack_3b8;
  char cStack_3b0;
  undefined1 auStack_3a0 [656];
  undefined1 uStack_110;
  double adStack_100 [11];
  undefined8 uStack_a8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_3a0[0] = 0;
  plVar14 = param_2 + 2;
  dVar22 = (double)(int)*plVar14;
  uStack_110 = 0;
  dVar17 = dVar22 / (double)param_2[8];
  dVar23 = (double)*(int *)((long)param_2 + 0x14);
  dVar21 = dVar23 / (double)param_2[9];
  if (dVar17 <= dVar23 / (double)param_2[9]) {
    dVar21 = dVar17;
  }
  if (14.3 <= (dVar21 * 3.141592653589793) / 180.0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x52) = 0;
  }
  else {
    iStack_5d0 = (int)param_2[0xc];
    if (iStack_5d0 == 2) {
      dVar17 = (double)param_2[4];
      dVar24 = (double)param_2[5];
      adStack_100[0] = dVar17;
      adStack_100[1] = dVar22 - dVar17;
      adStack_100[2] = dVar24;
      adStack_100[3] = dVar23 - dVar24;
      lVar11 = 8;
      pdVar13 = adStack_100;
      dVar21 = dVar17;
      do {
        dVar20 = *(double *)((long)adStack_100 + lVar11);
        pdVar2 = (double *)((long)adStack_100 + lVar11);
        if (dVar20 <= dVar21) {
          pdVar2 = pdVar13;
          dVar20 = dVar21;
        }
        dVar21 = dVar20;
        lVar11 = lVar11 + 8;
        pdVar13 = pdVar2;
      } while (lVar11 != 0x20);
      dVar20 = *pdVar2;
      dVar21 = 280.0;
      if (280.0 < dVar20) {
        do {
          dVar18 = (double)FUN_10937d99c(dVar21,plVar14);
          if (0.4 < dVar18) {
            dVar20 = dVar21 + -10.0;
            break;
          }
          dVar21 = dVar21 + 10.0;
        } while (dVar21 < dVar20);
      }
      dVar20 = (double)(int)dVar20;
      dVar21 = 0.0;
      if (0.0 <= dVar17 - dVar20) {
        dVar21 = dVar17 - dVar20;
      }
      dVar18 = 0.0;
      if (0.0 <= dVar24 - dVar20) {
        dVar18 = dVar24 - dVar20;
      }
      if (dVar17 + dVar20 <= dVar22) {
        dVar22 = dVar17 + dVar20;
      }
      if (dVar24 + dVar20 <= dVar23) {
        dVar23 = dVar24 + dVar20;
      }
      iStack_638 = *(int *)(param_2[0x22] + 0x18);
      lStack_648 = *(long *)(param_2[0x22] + 8) + (long)(iStack_638 * (int)dVar18) +
                   (long)(int)dVar21;
      uStack_640 = CONCAT44((int)(dVar23 - dVar18),(int)(dVar22 - dVar21));
      ppuStack_650 = &PTR_DAT_110af5e80;
      ppuStack_670 = (undefined **)(dVar17 - (double)(long)dVar21);
      dStack_668 = dVar24 - (double)(long)dVar18;
      FUN_10937d520(adStack_100,(int)(dVar22 - dVar21),(int)(dVar23 - dVar18),&ppuStack_670,
                    param_2 + 6,2,param_2 + 0xd);
      alStack_630[0] = 0;
      lStack_620 = 0;
      lStack_5c8 = 0;
      lStack_5c0 = 0;
      lStack_608 = 0;
      lStack_610 = 0;
      lStack_5f8 = 0;
      lStack_600 = 0;
      lStack_5e8 = 0;
      dStack_5f0 = 0.0;
      lStack_5d8 = 0;
      lStack_5e0 = 0;
      iStack_5d0 = 0;
      lStack_5b0 = 0;
      lStack_5a8 = 0;
      lStack_5a0 = 0;
      lStack_598 = 0x3ff0000000000000;
      lStack_590 = 0;
      lStack_588 = 0;
      lStack_580 = 0;
      lStack_570 = 0x3ff0000000000000;
      lStack_568 = 0;
      lStack_560 = 0;
      lStack_558 = 0;
      lStack_550 = 0x3ff0000000000000;
      lStack_548 = 0;
      lStack_540 = 0;
      lStack_538 = 0;
      lStack_530 = 0x3ff0000000000000;
      lStack_518 = 0;
      lStack_520 = 0;
      dStack_508 = 0.0;
      dStack_510 = 0.0;
      dStack_500 = 0.0;
      dStack_4f8 = 1.0;
      lStack_4f0 = 0;
      lStack_4e8 = 0;
      lStack_4e0 = 0;
      lStack_4d8 = 0x3ff0000000000000;
      lStack_4d0 = 0;
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      lStack_4b0 = 0x3ff0000000000000;
      lStack_4a8 = 0;
      lStack_4a0 = 0;
      lStack_498 = 0;
      lStack_490 = 0x3ff0000000000000;
      lStack_488 = 0;
      lStack_480 = 0;
      lStack_478 = 0;
      lStack_470 = 0x3ff0000000000000;
      uStack_460 = 0;
      lStack_450 = 0;
      lStack_458 = 0;
      lStack_440 = 0;
      lStack_448 = 0;
      lStack_430 = 0;
      lStack_438 = 0;
      lStack_420 = 0;
      lStack_428 = 0;
      lStack_418 = 0;
      lStack_3e8 = 0x403e000000000000;
      lStack_3e0 = 0x403e000000000000;
      uStack_3d8 = 0;
      uStack_3c8 = 0;
      uStack_3c7 = 0;
      uStack_3c0 = uStack_3c0 & 0xffffffffffffff00;
      cStack_3b0 = '\0';
      lVar11 = *param_2;
      FUN_109484a78(&ppuStack_670,&ppuStack_650);
      param_3 = adStack_100;
      FUN_109484940(lVar11,alStack_630,param_3,&ppuStack_670,0);
      ppuStack_670 = &PTR_FUN_110af4c80;
      if (dStack_668 != 0.0) {
        __ZdaPv();
      }
      dStack_668 = 0.0;
      uStack_660 = 0;
      uStack_658 = 0;
      _free(uStack_a8);
    }
    else {
      alStack_630[0] = *param_2;
      lStack_620 = param_2[2];
      lStack_610 = param_2[4];
      lStack_608 = param_2[5];
      lStack_5f8 = param_2[7];
      lStack_600 = param_2[6];
      dStack_5f0 = (double)param_2[8];
      lStack_5e8 = param_2[9];
      lStack_5d8 = param_2[0xb];
      lStack_5e0 = param_2[10];
      FUN_10937da58(&lStack_5c8,param_2 + 0xd);
      lStack_5b0 = param_2[0x10];
      lStack_5a8 = param_2[0x11];
      lStack_598 = param_2[0x13];
      lStack_5a0 = param_2[0x12];
      lStack_590 = param_2[0x14];
      lStack_588 = param_2[0x15];
      lStack_580 = param_2[0x16];
      lStack_550 = param_2[0x1c];
      lStack_548 = param_2[0x1d];
      lStack_538 = param_2[0x1f];
      lStack_540 = param_2[0x1e];
      lStack_530 = param_2[0x20];
      lStack_568 = param_2[0x19];
      lStack_570 = param_2[0x18];
      lStack_560 = param_2[0x1a];
      lStack_558 = param_2[0x1b];
      lStack_520 = param_2[0x22];
      lStack_518 = param_2[0x23];
      if (param_2[0x23] != 0) {
        plVar14 = (long *)(param_2[0x23] + 8);
        do {
          cVar15 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = *plVar14 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
      }
      dStack_510 = (double)param_2[0x24];
      dStack_508 = (double)param_2[0x25];
      dStack_4f8 = (double)param_2[0x27];
      dStack_500 = (double)param_2[0x26];
      param_3 = (double *)(param_2 + 0x28);
      FUN_109460390(&lStack_4f0);
      uStack_3c7 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x262) >> 0x38);
      uStack_3c0 = uStack_3c0 & 0xffffffffffffff00;
      cStack_3b0 = '\0';
      if ((char)param_2[0x50] == '\x01') {
        uStack_3c0 = param_2[0x4e];
        plStack_3b8 = (long *)param_2[0x4f];
        if (param_2[0x4f] != 0) {
          plVar14 = (long *)(param_2[0x4f] + 8);
          do {
            cVar15 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar7) {
              *plVar14 = *plVar14 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
        }
        cStack_3b0 = '\x01';
      }
    }
    plVar14 = plStack_3b8;
    uStack_3c8 = (undefined1)param_2[0x4d];
    dStack_510 = (double)param_2[0x24];
    dStack_508 = (double)param_2[0x25];
    dStack_4f8 = (double)param_2[0x27];
    dStack_500 = (double)param_2[0x26];
    dVar21 = dStack_510 * dStack_510 + dStack_500 * dStack_500 +
             dStack_508 * dStack_508 + dStack_4f8 * dStack_4f8;
    if (0.0 < dVar21) {
      dVar21 = SQRT(dVar21);
      dStack_510 = dStack_510 / dVar21;
      dStack_508 = dStack_508 / dVar21;
      dStack_500 = dStack_500 / dVar21;
      dStack_4f8 = dStack_4f8 / dVar21;
    }
    lStack_400 = param_2[0x46];
    lStack_3f8 = param_2[0x47];
    lStack_3e8 = param_2[0x49];
    lStack_3f0 = param_2[0x48];
    lStack_3e0 = param_2[0x4a];
    lVar11 = param_2[0x4b];
    uStack_3d8 = (undefined1)lVar11;
    uStack_3d7 = (undefined1)((ulong)lVar11 >> 8);
    uStack_3d6 = (undefined6)((ulong)lVar11 >> 0x10);
    uStack_3d0 = (undefined2)param_2[0x4c];
    uStack_3ce = (undefined6)((ulong)param_2[0x4c] >> 0x10);
    if ((char)param_2[0x50] == '\x01') {
      uVar10 = param_2[0x4e];
      param_2 = (long *)param_2[0x4f];
      if (param_2 != (long *)0x0) {
        plVar6 = param_2 + 1;
        do {
          cVar15 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar7) {
            *plVar6 = *plVar6 + 1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
      }
      cVar15 = '\x01';
    }
    else {
      cVar15 = '\0';
      uVar10 = 0;
    }
    if (cStack_3b0 == cVar15) {
      plVar6 = plStack_3b8;
      if (cStack_3b0 != '\0') {
        if (param_2 != (long *)0x0) {
          plVar6 = param_2 + 1;
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_3c0 = uVar10;
        plVar6 = param_2;
        if (plStack_3b8 != (long *)0x0) {
          plVar6 = plStack_3b8 + 1;
          do {
            lVar11 = *plVar6;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar6 = param_2;
          if (lVar11 == 0) {
            lVar11 = *plStack_3b8;
            plStack_3b8 = param_2;
            (**(code **)(lVar11 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            plVar6 = plStack_3b8;
          }
        }
      }
    }
    else if (cStack_3b0 == '\0') {
      if (param_2 != (long *)0x0) {
        plVar14 = param_2 + 1;
        do {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      cStack_3b0 = '\x01';
      uStack_3c0 = uVar10;
      plVar6 = param_2;
    }
    else {
      if (plStack_3b8 != (long *)0x0) {
        plVar6 = plStack_3b8 + 1;
        do {
          lVar11 = *plVar6;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar7) {
            *plVar6 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      cStack_3b0 = '\0';
      plVar6 = plStack_3b8;
    }
    plStack_3b8 = plVar6;
    plVar14 = &lStack_400;
    if ((param_2 != (long *)0x0) && (cVar15 != '\0')) {
      plVar6 = param_2 + 1;
      do {
        lVar11 = *plVar6;
        cVar15 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar7) {
          *plVar6 = lVar11 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
      }
    }
    lVar5 = lStack_450;
    lVar4 = lStack_518;
    lVar11 = lStack_520;
    *param_1 = alStack_630[0];
    param_1[2] = lStack_620;
    param_1[5] = lStack_608;
    param_1[4] = lStack_610;
    param_1[7] = lStack_5f8;
    param_1[6] = lStack_600;
    param_1[9] = lStack_5e8;
    param_1[8] = (long)dStack_5f0;
    param_1[0xb] = lStack_5d8;
    param_1[10] = lStack_5e0;
    *(int *)(param_1 + 0xc) = iStack_5d0;
    param_1[0xd] = lStack_5c8;
    param_1[0xe] = lStack_5c0;
    lStack_5c8 = 0;
    lStack_5c0 = 0;
    param_1[0x11] = lStack_5a8;
    param_1[0x10] = lStack_5b0;
    param_1[0x13] = lStack_598;
    param_1[0x12] = lStack_5a0;
    param_1[0x15] = lStack_588;
    param_1[0x14] = lStack_590;
    param_1[0x16] = lStack_580;
    param_1[0x1d] = lStack_548;
    param_1[0x1c] = lStack_550;
    param_1[0x1f] = lStack_538;
    param_1[0x1e] = lStack_540;
    param_1[0x20] = lStack_530;
    param_1[0x19] = lStack_568;
    param_1[0x18] = lStack_570;
    param_1[0x1b] = lStack_558;
    param_1[0x1a] = lStack_560;
    lStack_520 = 0;
    lStack_518 = 0;
    param_1[0x23] = lVar4;
    param_1[0x22] = lVar11;
    param_1[0x25] = (long)dStack_508;
    param_1[0x24] = (long)dStack_510;
    param_1[0x27] = (long)dStack_4f8;
    param_1[0x26] = (long)dStack_500;
    param_1[0x29] = lStack_4e8;
    param_1[0x28] = lStack_4f0;
    param_1[0x2b] = lStack_4d8;
    param_1[0x2a] = lStack_4e0;
    param_1[0x2d] = lStack_4c8;
    param_1[0x2c] = lStack_4d0;
    param_1[0x2e] = lStack_4c0;
    param_1[0x38] = lStack_470;
    param_1[0x35] = lStack_488;
    param_1[0x34] = lStack_490;
    param_1[0x37] = lStack_478;
    param_1[0x36] = lStack_480;
    param_1[0x31] = lStack_4a8;
    param_1[0x30] = lStack_4b0;
    param_1[0x33] = lStack_498;
    param_1[0x32] = lStack_4a0;
    *(undefined4 *)(param_1 + 0x3a) = uStack_460;
    param_1[0x3b] = lStack_458;
    lStack_458 = 0;
    lStack_450 = 0;
    param_1[0x3d] = lStack_448;
    param_1[0x3c] = lVar5;
    param_1[0x3f] = lStack_438;
    param_1[0x3e] = lStack_440;
    param_1[0x40] = lStack_430;
    lStack_448 = 0;
    lStack_440 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    param_1[0x41] = lStack_428;
    param_1[0x43] = lStack_418;
    param_1[0x42] = lStack_420;
    lStack_428 = 0;
    lStack_418 = 0;
    lStack_420 = 0;
    param_1[0x44] = lStack_410;
    *(ulong *)((long)param_1 + 0x262) = CONCAT17(uStack_3c7,CONCAT16(uStack_3c8,uStack_3ce));
    *(ulong *)((long)param_1 + 0x25a) = CONCAT26(uStack_3d0,uStack_3d6);
    param_1[0x49] = lStack_3e8;
    param_1[0x48] = lStack_3f0;
    param_1[0x4b] = CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,uStack_3d8));
    param_1[0x4a] = lStack_3e0;
    param_1[0x47] = lStack_3f8;
    param_1[0x46] = lStack_400;
    *(undefined1 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    if (cStack_3b0 == '\x01') {
      param_1[0x4f] = (long)plStack_3b8;
      param_1[0x4e] = uStack_3c0;
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    *(undefined1 *)(param_1 + 0x52) = 1;
  }
  puVar8 = (undefined8 *)auStack_3a0;
  func_0x000109482af4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    ppuStack_670 = &PTR_FUN_110af4c80;
    if (dStack_668 != 0.0) {
      __ZdaPv();
    }
    plVar14[1] = 0;
    plVar14[2] = 0;
    *(int *)(plVar14 + 3) = 0;
    FUN_109458ce0(alStack_630);
    _free(uStack_a8);
    func_0x000109482af4(auStack_3a0);
    __Unwind_Resume();
    *(undefined8 *)(extraout_x8 + 3) = 0x3fb33333;
    extraout_x8[5] = 0;
    *(undefined8 *)(extraout_x8 + 9) = 0x3fb504f3;
    extraout_x8[0xb] = 0;
    *(undefined8 *)(extraout_x8 + 0x12) = 0x1900000001e;
    *(undefined8 *)(extraout_x8 + 0x10) = 0x7fffffff00000012;
    *(undefined8 *)(extraout_x8 + 0x14) = 0x753000000190;
    *(undefined8 *)(extraout_x8 + 0x16) = 0x3b23d70a40400000;
    *(undefined8 *)(extraout_x8 + 0x18) = 0xffffffffffffffff;
    *(undefined2 *)(extraout_x8 + 0x1a) = 0x101;
    *(undefined8 *)(extraout_x8 + 0x1c) = 0x40;
    extraout_x8[0x1e] = 0x40800000;
    *(undefined1 *)(extraout_x8 + 0x20) = 0;
    *(undefined1 *)(extraout_x8 + 0x24) = 0;
    auVar19._0_8_ = (long)(int)*puVar8;
    auVar19._8_8_ = (long)(int)((ulong)*puVar8 >> 0x20);
    auVar19 = NEON_scvtf(auVar19,8);
    dVar23 = auVar19._0_8_;
    dVar22 = auVar19._8_8_;
    dVar21 = dVar22 / (double)puVar8[7];
    if (dVar23 / (double)puVar8[6] <= dVar22 / (double)puVar8[7]) {
      dVar21 = dVar23 / (double)puVar8[6];
    }
    dVar23 = (double)_atan2(SQRT(dVar23 * dVar23 + dVar22 * dVar22) * 0.5,puVar8[4]);
    bVar7 = 14.3 <= (dVar21 * 3.141592653589793) / 180.0;
    uVar9 = 0xfffffffe;
    if (bVar7) {
      uVar9 = 1;
    }
    uVar12 = 0;
    if (bVar7) {
      uVar12 = 2;
    }
    *extraout_x8 = uVar9;
    extraout_x8[1] = uVar12;
    uVar12 = 3000;
    if (dVar23 + dVar23 <= 1.65) {
      uVar12 = 0x5dc;
    }
    extraout_x8[2] = uVar12;
    *(undefined8 *)(extraout_x8 + 0xc) = 0x10000001e;
    extraout_x8[0xe] = 2;
    extraout_x8[6] = uVar9;
    iVar1 = *(int *)param_3;
    if (*(int *)((long)param_3 + 4) <= *(int *)param_3) {
      iVar1 = *(int *)((long)param_3 + 4);
    }
    fVar16 = (float)_logf((float)iVar1 / 70.0,0x428c0000);
    extraout_x8[7] = (int)(fVar16 / 0.34657356);
    extraout_x8[8] = 500;
    return;
  }
  return;
}



/* Entry: 10947eef0; end: 10947f05f;  */

void FUN_10947eef0(undefined4 *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  
  *(undefined8 *)(param_1 + 3) = 0x3fb33333;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 9) = 0x3fb504f3;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0x1900000001e;
  *(undefined8 *)(param_1 + 0x10) = 0x7fffffff00000012;
  *(undefined8 *)(param_1 + 0x14) = 0x753000000190;
  *(undefined8 *)(param_1 + 0x16) = 0x3b23d70a40400000;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1a) = 0x101;
  *(undefined8 *)(param_1 + 0x1c) = 0x40;
  param_1[0x1e] = 0x40800000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  auVar7._0_8_ = (long)(int)*param_2;
  auVar7._8_8_ = (long)(int)((ulong)*param_2 >> 0x20);
  auVar7 = NEON_scvtf(auVar7,8);
  dVar6 = auVar7._0_8_;
  dVar8 = auVar7._8_8_;
  dVar9 = dVar8 / (double)param_2[7];
  if (dVar6 / (double)param_2[6] <= dVar8 / (double)param_2[7]) {
    dVar9 = dVar6 / (double)param_2[6];
  }
  dVar6 = (double)_atan2(SQRT(dVar6 * dVar6 + dVar8 * dVar8) * 0.5,param_2[4]);
  bVar2 = 14.3 <= (dVar9 * 3.141592653589793) / 180.0;
  uVar3 = 0xfffffffe;
  if (bVar2) {
    uVar3 = 1;
  }
  uVar4 = 0;
  if (bVar2) {
    uVar4 = 2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar4 = 3000;
  if (dVar6 + dVar6 <= 1.65) {
    uVar4 = 0x5dc;
  }
  param_1[2] = uVar4;
  *(undefined8 *)(param_1 + 0xc) = 0x10000001e;
  param_1[0xe] = 2;
  param_1[6] = uVar3;
  iVar1 = *param_3;
  if (param_3[1] <= *param_3) {
    iVar1 = param_3[1];
  }
  fVar5 = (float)_logf((float)iVar1 / 70.0,0x428c0000);
  param_1[7] = (int)(fVar5 / 0.34657356);
  param_1[8] = 500;
  return;
}



/* Entry: 10947f060; end: 10947f10b;  */

undefined8 * FUN_10947f060(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10947f10c; end: 10947f42f;  */

void FUN_10947f10c(long *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  long *plStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    if (param_3[2] != 0) {
      func_0x000107c3192c(&ppuStack_70,param_3[1]);
      goto LAB_10947f178;
    }
  }
  else if (*(char *)((long)param_3 + 0x1f) != '\0') {
    uStack_68 = param_3[2];
    ppuStack_70 = (undefined **)param_3[1];
    lStack_60 = param_3[3];
    goto LAB_10947f178;
  }
  func_0x000107c31940(&ppuStack_70,&UNK_10f56e3ea);
LAB_10947f178:
  (**(code **)(*param_2 + 0x10))(&plStack_78,param_2,&ppuStack_70);
  if (lStack_60 < 0) {
    __ZdlPv(ppuStack_70);
  }
  plVar2 = plStack_78;
  (**(code **)(*plStack_78 + 0x28))();
  if (((ulong)plVar2 & 1) == 0) {
    func_0x000105688514(&UNK_10f56e3d0);
  }
  else {
    (**(code **)(*plStack_78 + 0x20))(&plStack_80);
    plVar2 = plStack_80;
    puVar3 = (undefined8 *)0xb8;
    __Znwm();
    *puVar3 = *param_3;
    if (*(char *)((long)param_3 + 0x1f) < '\0') {
      func_0x000107c3192c(puVar3 + 1,param_3[1],param_3[2]);
    }
    else {
      uVar5 = param_3[1];
      puVar3[2] = param_3[2];
      puVar3[1] = uVar5;
      puVar3[3] = param_3[3];
    }
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    if (*(int *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x20) == 0) {
      ppuStack_70 = &PTR_FUN_110aefdd8;
      uStack_68 = 0;
      lStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      pppuVar4 = &ppuStack_70;
      func_0x00010b4d15d4(pppuVar4,plVar2);
      if (((ulong)pppuVar4 & 1) != 0) {
        FUN_10948cc68(puVar3 + 9,&ppuStack_70);
        FUN_109342244(&ppuStack_70);
        puVar3[0xd] = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        *(undefined8 *)((long)puVar3 + 0x84) = 0x3e19999a3f8ccccd;
        FUN_10948cbd4(puVar3 + 0xd,((long)(puVar3[10] - puVar3[9]) >> 4) * -0x5555555555555555);
        plVar2 = plStack_80;
        *(undefined1 *)(puVar3 + 0x12) = 0;
        *(undefined1 *)(puVar3 + 0x13) = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        puVar3[0x14] = 0;
        *param_1 = (long)puVar3;
        param_1[1] = (long)&PTR_FUN_110af69c0;
        param_1[4] = (long)(param_1 + 1);
        param_1[5] = (long)&PTR_DAT_110af6a50;
        param_1[8] = (long)(param_1 + 5);
        plStack_80 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar2 = plStack_78;
        plStack_78 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        return;
      }
      func_0x000105688514(&UNK_10f56e445);
    }
    else {
      func_0x000105688514(&UNK_10f56e41c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10947f368);
  (*pcVar1)();
}



/* Entry: 10947f430; end: 10948059f;  */

void FUN_10947f430(undefined8 *param_1,undefined1 *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined ******ppppppuVar5;
  long *plVar6;
  long *plVar7;
  undefined1 uVar8;
  code *pcVar9;
  long *plVar10;
  undefined *******pppppppuVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *******pppppppuVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  long *plVar34;
  long *plVar35;
  undefined8 *puVar36;
  float fVar37;
  undefined8 uVar38;
  undefined *******pppppppuVar39;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  ulong uStack_5d0;
  undefined ******ppppppuStack_5c0;
  undefined ******ppppppuStack_5b8;
  undefined *****pppppuStack_5b0;
  undefined *****apppppuStack_5a8 [2];
  long *plStack_598;
  long lStack_590;
  long *plStack_580;
  long *plStack_578;
  long lStack_570;
  undefined8 uStack_568;
  undefined4 uStack_560;
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_530;
  long lStack_528;
  undefined1 *puStack_520;
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [36];
  undefined4 uStack_4e4;
  undefined1 auStack_4c8 [24];
  float fStack_4b0;
  float fStack_4ac;
  undefined1 uStack_49f;
  ulong auStack_498 [2];
  undefined8 uStack_488;
  undefined8 uStack_480;
  char cStack_478;
  undefined ******ppppppuStack_470;
  undefined ******ppppppuStack_468;
  undefined ******ppppppuStack_460;
  long *plStack_450;
  long *plStack_448;
  ulong uStack_440;
  long lStack_430;
  int *piStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined ******ppppppuStack_400;
  long *plStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3e8;
  long lStack_3e0;
  uint uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined1 uStack_3c4;
  long *plStack_370;
  long *plStack_368;
  ulong uStack_360;
  byte bStack_350;
  undefined1 auStack_340 [656];
  char cStack_b0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10947e758(auStack_340);
  puVar1 = auStack_340;
  if (cStack_b0 == '\0') {
    puVar1 = param_2;
  }
  lVar15 = *(long *)(puVar1 + 0x110);
  ppppppuStack_400 = *(undefined *******)(lVar15 + 0x10);
  FUN_10947eef0(auStack_508,param_2 + 0x10,&ppppppuStack_400);
  uVar8 = uStack_49f;
  plVar10 = (long *)*param_3;
  plVar29 = (long *)param_3[1];
  if ((long)plVar29 - (long)plVar10 == 0x10) {
    lVar16 = *plVar10;
    if (cStack_478 == *(char *)(lVar16 + 0xe0)) {
      if (cStack_478 != '\0') {
        uStack_480 = *(undefined8 *)(lVar16 + 0xd8);
        uStack_488 = *(undefined8 *)(lVar16 + 0xd0);
      }
    }
    else if (cStack_478 == '\0') {
      uStack_480 = *(undefined8 *)(lVar16 + 0xd8);
      uStack_488 = *(undefined8 *)(lVar16 + 0xd0);
      cStack_478 = '\x01';
    }
    else {
      cStack_478 = '\0';
    }
  }
  puVar27 = (undefined8 *)*param_4;
  piStack_428 = (int *)0x0;
  lStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  uStack_410 = 0x3f800000;
  puVar12 = (undefined8 *)puVar27[0x14];
  if (puVar12 != (undefined8 *)puVar27[0x15]) {
    do {
      plStack_3f8 = (long *)0x0;
      ppppppuStack_400 = (undefined ******)0x0;
      plVar10 = (long *)puVar12[1];
      if (((plVar10 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_3f8 = plVar10, plVar10 == (long *)0x0))
         || (ppppppuStack_400 = (undefined ******)*puVar12,
            (undefined *******)ppppppuStack_400 == (undefined *******)0x0)) {
LAB_10947f5a8:
        plVar10 = plStack_3f8;
        puVar26 = (undefined8 *)puVar12[3];
        for (puVar36 = (undefined8 *)puVar12[2]; puVar36 != puVar26; puVar36 = puVar36 + 1) {
          uVar32 = *puVar36;
          puVar33 = puVar27 + 4;
          FUN_10948e514(puVar33,uVar32);
          if (puVar33 != (undefined8 *)0x0) {
            FUN_10948e42c(puVar27 + 4,puVar33 + 3);
            plVar29 = puVar27 + 4;
            FUN_10948e514(plVar29,uVar32);
            if (plVar29 != (long *)0x0) {
              uVar19 = puVar27[5];
              uVar17 = plVar29[1];
              uVar22 = uVar19 - 1;
              if ((uVar19 & uVar22) == 0) {
                uVar17 = uVar22 & uVar17;
              }
              else if (uVar19 <= uVar17) {
                uVar23 = 0;
                if (uVar19 != 0) {
                  uVar23 = uVar17 / uVar19;
                }
                uVar17 = uVar17 - uVar23 * uVar19;
              }
              lVar16 = *plVar29;
              plVar31 = *(long **)(puVar27[4] + uVar17 * 8);
              do {
                plVar34 = plVar31;
                plVar31 = (long *)*plVar34;
              } while ((long *)*plVar34 != plVar29);
              if (plVar34 == puVar27 + 6) {
LAB_10947f664:
                if (lVar16 == 0) {
LAB_10947f698:
                  *(undefined8 *)(puVar27[4] + uVar17 * 8) = 0;
                  lVar16 = *plVar29;
                  goto LAB_10947f6a0;
                }
                uVar23 = *(ulong *)(lVar16 + 8);
                if ((uVar19 & uVar22) == 0) {
                  uVar24 = uVar23 & uVar22;
                }
                else {
                  uVar24 = uVar23;
                  if (uVar19 <= uVar23) {
                    uVar24 = 0;
                    if (uVar19 != 0) {
                      uVar24 = uVar23 / uVar19;
                    }
                    uVar24 = uVar23 - uVar24 * uVar19;
                  }
                }
                if (uVar24 != uVar17) goto LAB_10947f698;
LAB_10947f6a8:
                if ((uVar19 & uVar22) == 0) {
                  uVar23 = uVar23 & uVar22;
                }
                else if (uVar19 <= uVar23) {
                  uVar22 = 0;
                  if (uVar19 != 0) {
                    uVar22 = uVar23 / uVar19;
                  }
                  uVar23 = uVar23 - uVar22 * uVar19;
                }
                if (uVar23 != uVar17) {
                  *(long **)(puVar27[4] + uVar23 * 8) = plVar34;
                  lVar16 = *plVar29;
                }
              }
              else {
                uVar23 = plVar34[1];
                if ((uVar19 & uVar22) == 0) {
                  uVar23 = uVar23 & uVar22;
                }
                else if (uVar19 <= uVar23) {
                  uVar24 = 0;
                  if (uVar19 != 0) {
                    uVar24 = uVar23 / uVar19;
                  }
                  uVar23 = uVar23 - uVar24 * uVar19;
                }
                if (uVar23 != uVar17) goto LAB_10947f664;
LAB_10947f6a0:
                if (lVar16 != 0) {
                  uVar23 = *(ulong *)(lVar16 + 8);
                  goto LAB_10947f6a8;
                }
              }
              *plVar34 = lVar16;
              *plVar29 = 0;
              puVar27[7] = puVar27[7] + -1;
              __ZdlPv();
            }
          }
        }
        puVar33 = (undefined8 *)puVar27[0x15];
        puVar36 = puVar12;
        puVar26 = puVar12;
        if (puVar12 + 5 != puVar33) {
          do {
            uVar38 = puVar26[6];
            uVar32 = puVar26[5];
            puVar26[5] = 0;
            puVar26[6] = 0;
            lVar16 = puVar26[1];
            puVar26[1] = uVar38;
            *puVar26 = uVar32;
            if (lVar16 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            func_0x0001094881d0(puVar26 + 2,puVar26 + 7);
            puVar36 = puVar26 + 5;
            puVar21 = puVar26 + 10;
            puVar26 = puVar36;
          } while (puVar21 != puVar33);
          puVar33 = (undefined8 *)puVar27[0x15];
        }
        while (puVar33 != puVar36) {
          puVar33 = puVar33 + -5;
          FUN_10948d768(puVar33);
        }
        puVar27[0x15] = puVar36;
      }
      else {
        puVar36 = (undefined8 *)*param_3;
        puVar26 = (undefined8 *)param_3[1];
        if (puVar36 != puVar26) {
          do {
            if ((undefined *******)*puVar36 == (undefined *******)ppppppuStack_400)
            goto LAB_10947f7b4;
            puVar36 = puVar36 + 2;
          } while (puVar36 != puVar26);
          goto LAB_10947f5a8;
        }
LAB_10947f7b4:
        if (puVar36 == puVar26) goto LAB_10947f5a8;
        FUN_1094874a8(&lStack_430,ppppppuStack_400,ppppppuStack_400,plVar10);
        puVar12 = puVar12 + 5;
      }
      if (plVar10 != (long *)0x0) {
        plVar29 = plVar10 + 1;
        do {
          lVar16 = *plVar29;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar4) {
            *plVar29 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    } while (puVar12 != (undefined8 *)puVar27[0x15]);
    plVar10 = (long *)*param_3;
    plVar29 = (long *)param_3[1];
  }
  if (plVar10 == plVar29) {
    ppppppuStack_400 = (undefined ******)((ulong)ppppppuStack_400 & 0xffffffffffffff00);
    uStack_3d8 = uStack_3d8 & 0xffffff00;
  }
  else {
    plVar31 = (long *)0x0;
    do {
      plVar34 = (long *)*plVar10;
      if (((ulong)plVar31 & 1) == 0) {
        (**(code **)(*plVar34 + 8))();
        plVar35 = (long *)*plVar10;
        plVar31 = plVar34;
      }
      else {
        plVar31 = (long *)0x1;
        plVar35 = plVar34;
      }
      lVar16 = lStack_430;
      piVar13 = piStack_428;
      func_0x000109487ad8(lStack_430,piStack_428,plVar35);
      if (lVar16 == 0) {
        (**(code **)*plVar35)(&plStack_580,plVar35);
        plVar35 = plStack_578;
        for (plVar34 = plStack_580; lVar16 = lStack_570, plVar7 = plStack_578, plVar6 = plStack_580,
            plVar34 != plVar35; plVar34 = plVar34 + 1) {
          piVar13 = (int *)*plVar34;
          if (*piVar13 != 0) {
            FUN_10948e5e8(puVar27 + 4);
          }
        }
        pppppppuVar11 = (undefined *******)*plVar10;
        plVar34 = (long *)plVar10[1];
        if (plVar34 != (long *)0x0) {
          plVar35 = plVar34 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar4) {
              *plVar35 = *plVar35 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_3f0 = plStack_580;
        plStack_3e8 = plStack_578;
        lStack_3e0 = lStack_570;
        plStack_580 = (long *)0x0;
        plStack_578 = (long *)0x0;
        lStack_570 = 0;
        plVar35 = (long *)puVar27[0x15];
        ppppppuStack_400 = (undefined ******)pppppppuVar11;
        plStack_3f8 = plVar34;
        if (plVar35 < (long *)puVar27[0x16]) {
          *plVar35 = (long)pppppppuVar11;
          plVar35[1] = (long)plVar34;
          plVar35[2] = (long)plVar6;
          plVar35[3] = (long)plVar7;
          plVar25 = plVar35 + 5;
          plVar35[4] = lVar16;
        }
        else {
          lVar30 = (long)plVar35 - puVar27[0x14];
          uVar17 = (lVar30 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar17) {
            FUN_10948e2b0();
            goto LAB_1094802f4;
          }
          lVar20 = (long)puVar27[0x16] - puVar27[0x14] >> 3;
          uVar19 = lVar20 * -0x6666666666666666;
          if (uVar19 < uVar17 || uVar19 - uVar17 == 0) {
            uVar19 = uVar17;
          }
          if (0x333333333333332 < (ulong)(lVar20 * -0x3333333333333333)) {
            uVar19 = 0x666666666666666;
          }
          FUN_10948e2c4();
          plVar25 = (long *)(uVar19 + lVar30);
          *plVar25 = (long)pppppppuVar11;
          plVar25[1] = (long)plVar34;
          plVar25[2] = (long)plVar6;
          plVar25[3] = (long)plVar7;
          plVar25[4] = lVar16;
          puVar36 = (undefined8 *)puVar27[0x14];
          puVar33 = (undefined8 *)puVar27[0x15];
          puVar26 = (undefined8 *)((long)plVar25 + ((long)puVar36 - (long)puVar33));
          puVar12 = puVar36;
          puVar21 = puVar26;
          if ((long)puVar36 - (long)puVar33 != 0) {
            do {
              uVar32 = *puVar12;
              puVar21[1] = puVar12[1];
              *puVar21 = uVar32;
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar21[2] = 0;
              puVar21[3] = 0;
              puVar21[4] = 0;
              uVar32 = puVar12[2];
              puVar21[3] = puVar12[3];
              puVar21[2] = uVar32;
              puVar21[4] = puVar12[4];
              puVar12[2] = 0;
              puVar12[3] = 0;
              puVar12[4] = 0;
              puVar12 = puVar12 + 5;
              puVar21 = puVar21 + 5;
            } while (puVar12 != puVar33);
            do {
              FUN_10948d768(puVar36);
              puVar36 = puVar36 + 5;
            } while (puVar36 != puVar33);
            puVar36 = (undefined8 *)puVar27[0x14];
          }
          plVar25 = plVar25 + 5;
          puVar27[0x14] = puVar26;
          puVar27[0x15] = plVar25;
          puVar27[0x16] = uVar19 + (long)piVar13 * 0x28;
          if (puVar36 != (undefined8 *)0x0) {
            __ZdlPv(puVar36);
          }
        }
        puVar27[0x15] = plVar25;
        if (plStack_580 != (long *)0x0) {
          plStack_578 = plStack_580;
          __ZdlPv();
        }
        FUN_109487c78(&lStack_430,*plVar10,*plVar10,plVar10[1]);
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar29);
    ppppppuStack_400 = (undefined ******)((ulong)ppppppuStack_400 & 0xffffffffffffff00);
    uStack_3d8 = uStack_3d8 & 0xffffff00;
    if (((ulong)plVar31 & 1) != 0) {
      plStack_450 = (long *)((ulong)plStack_450 & 0xffffffffffffff00);
      uVar17 = uStack_440 >> 8;
      uStack_440 = uStack_440 & 0xffffffffffffff00;
      puVar14 = auStack_340;
      if (cStack_b0 == '\0') {
        puVar14 = param_2;
      }
      if ((puVar14[0x280] & 1) != 0) {
        puVar14 = auStack_340;
        if (cStack_b0 == '\0') {
          puVar14 = param_2;
        }
        plStack_450 = *(long **)(puVar14 + 0x270);
        plStack_448 = *(long **)(puVar14 + 0x278);
        if (plStack_448 != (long *)0x0) {
          plVar10 = plStack_448 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = *plVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_440 = CONCAT71((int7)uVar17,1);
        pbVar28 = (byte *)(puVar27 + 0x13);
        plVar10 = puVar27 + 0x12;
        if ((*pbVar28 & 1) == 0) {
          (*(code *)*plStack_450)(&plStack_580);
          plVar29 = plStack_580;
          if (*pbVar28 == 1) {
            plStack_580 = (long *)0x0;
            plVar31 = (long *)*plVar10;
            *plVar10 = (long)plVar29;
            if (plVar31 != (long *)0x0) {
              plVar10 = plVar31 + 1;
              do {
                lVar16 = *plVar10;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = lVar16 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plVar31 + 0x10))();
              }
              if (plStack_580 != (long *)0x0) {
                plVar10 = plStack_580 + 1;
                do {
                  lVar16 = *plVar10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar4) {
                    *plVar10 = lVar16 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar16 == 0) {
                  (**(code **)(*plStack_580 + 0x10))();
                }
              }
            }
          }
          else {
            *plVar10 = (long)plStack_580;
            *pbVar28 = 1;
          }
          if ((char)uStack_440 != '\x01') goto LAB_10947fb70;
        }
        plVar10 = plStack_448;
        if (plStack_448 != (long *)0x0) {
          plVar29 = plStack_448 + 1;
          do {
            lVar16 = *plVar29;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar4) {
              *plVar29 = lVar16 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_448 + 0x10))(plStack_448);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
LAB_10947fb70:
      pppppppuVar11 = &ppppppuStack_470;
      FUN_109484a78(pppppppuVar11,*(undefined8 *)(puVar1 + 0x110));
      plStack_580 = (long *)((ulong)plStack_580 & 0xffffffffffffff00);
      uStack_558 = uStack_558 & 0xffffffffffffff00;
      if (*(byte *)(puVar27 + 0x13) == 1) {
        uVar32 = puVar27[0x12];
        __ZNSt3__16chrono12steady_clock3nowEv();
        ppppppuStack_5c0 = (undefined ******)pppppppuVar11;
        FUN_1093f25b0(uVar32,&ppppppuStack_5c0);
        if ((int)uVar32 == 0) {
          if ((*(byte *)(puVar27 + 0x13) & 1) == 0) goto LAB_1094802f0;
          puVar12 = (undefined8 *)puVar27[0x12];
          FUN_109487ecc();
          FUN_109406f6c(&ppppppuStack_5c0,*puVar12,&ppppppuStack_470,*puVar12);
          FUN_10945f960(&plStack_580,&ppppppuStack_5c0);
          if (pppppuStack_5b0 != (undefined *****)0x0) {
            apppppuStack_5a8[0] = pppppuStack_5b0;
            __ZdlPv();
          }
        }
      }
      FUN_109487f90(&ppppppuStack_400,&plStack_580);
      if (((char)uStack_558 == '\x01') && (lStack_570 != 0)) {
        uStack_568 = lStack_570;
        __ZdlPv();
      }
      ppppppuStack_470 = (undefined ******)&PTR_FUN_110af4c80;
      if ((undefined *******)ppppppuStack_468 != (undefined *******)0x0) {
        __ZdaPv();
      }
    }
  }
  uStack_568 = 0;
  lStack_570 = 0;
  plStack_578 = (long *)0x0;
  plStack_580 = (long *)0x0;
  uStack_560 = 0x3f800000;
  if (plStack_420 != (long *)0x0) {
    plVar10 = plStack_420;
    puVar14 = auStack_340;
    if (cStack_b0 == '\0') {
      puVar14 = param_2;
    }
    do {
      FUN_1094863c8(&ppppppuStack_5c0,plVar10[2],puVar14 + 0x230);
      pppppppuVar11 = (undefined *******)ppppppuStack_5c0;
      pppppppuVar39 = (undefined *******)ppppppuStack_5b8;
      if ((char)uStack_3d8 == '\x01') {
        plVar29 = (long *)plVar10[2];
        (**(code **)(*plVar29 + 8))();
        pppppppuVar11 = (undefined *******)ppppppuStack_5c0;
        pppppppuVar39 = (undefined *******)ppppppuStack_5b8;
        if ((int)plVar29 != 0) {
          if ((uStack_3d8 & 1) == 0) {
            FUN_10945fd6c();
            goto LAB_1094802f4;
          }
          FUN_109486dec(&ppppppuStack_470,&ppppppuStack_5c0,&ppppppuStack_400,auStack_498);
          if ((undefined *******)ppppppuStack_5c0 != (undefined *******)0x0) {
            ppppppuStack_5b8 = ppppppuStack_5c0;
            __ZdlPv();
          }
          ppppppuStack_5b8 = ppppppuStack_468;
          pppppppuVar11 = (undefined *******)ppppppuStack_470;
          ppppppuStack_5c0 = ppppppuStack_470;
          pppppppuVar39 = (undefined *******)ppppppuStack_468;
        }
      }
      for (; ppppppuVar5 = ppppppuStack_5b8, pppppppuVar11 != (undefined *******)ppppppuStack_5b8;
          pppppppuVar11 = pppppppuVar11 + 1) {
        ppppppuStack_5b8 = (undefined ******)pppppppuVar39;
        FUN_10943e634(&plStack_580,pppppppuVar11,pppppppuVar11);
        pppppppuVar39 = (undefined *******)ppppppuStack_5b8;
        ppppppuStack_5b8 = ppppppuVar5;
      }
      ppppppuStack_5b8 = (undefined ******)pppppppuVar39;
      if ((undefined *******)ppppppuStack_5c0 != (undefined *******)0x0) {
        ppppppuStack_5b8 = ppppppuStack_5c0;
        __ZdlPv(ppppppuStack_5c0);
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  FUN_10948e308(puVar27 + 4,&plStack_580);
  FUN_10948cb8c(&plStack_580);
  if (((char)uStack_3d8 == '\x01') && (uStack_3f0 != (long *)0x0)) {
    plStack_3e8 = uStack_3f0;
    __ZdlPv();
  }
  FUN_1094891bc(&lStack_430);
  FUN_10940bce4(&plStack_580,lVar15,auStack_508);
  puVar14 = auStack_340;
  if (cStack_b0 == '\0') {
    puVar14 = param_2;
  }
  if (puVar14[0x268] == '\x01') {
    puVar14 = auStack_340;
    if (cStack_b0 == '\0') {
      puVar14 = param_2;
    }
    puVar14 = puVar14 + 0x120;
    FUN_109406350(0x4024000000000000,puVar14);
    uVar32 = 1;
  }
  else {
    puVar14 = (undefined1 *)0x0;
    uVar32 = 0;
  }
  FUN_1094805a0(&ppppppuStack_5c0,puVar27 + 4,&plStack_580,&uStack_568,puVar14,uVar32);
  ppppppuStack_460 = (undefined ******)0x0;
  pppppppuVar11 = (undefined *******)0x0;
  pppppppuVar39 = (undefined *******)0x0;
  ppppppuStack_468 = (undefined ******)0x0;
  ppppppuStack_470 = (undefined ******)0x0;
  if (lStack_590 == 0) {
    pppppppuVar18 = (undefined *******)0x0;
  }
  else {
    piStack_428 = (int *)0x0;
    lStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    uStack_410 = 0x3f800000;
    puVar12 = (undefined8 *)*param_3;
    puVar36 = (undefined8 *)param_3[1];
    if ((long)puVar36 - (long)puVar12 == 0x10) {
      FUN_10948bcc0(&lStack_430,*puVar12,*puVar12,puVar12[1],apppppuStack_5a8);
    }
    else {
      plStack_3f8 = (long *)0x0;
      ppppppuStack_400 = (undefined ******)0x0;
      plStack_3e8 = (long *)0x0;
      uStack_3f0 = (long *)0x0;
      lStack_3e0 = CONCAT44(lStack_3e0._4_4_,0x3f800000);
      for (; plVar10 = plStack_598, pppppppuVar11 = (undefined *******)ppppppuStack_400,
          puVar12 != puVar36; puVar12 = puVar12 + 2) {
        (*(code *)**(undefined8 **)*puVar12)(&plStack_450);
        plVar29 = plStack_448;
        for (plVar10 = plStack_450; plVar10 != plVar29; plVar10 = plVar10 + 1) {
          plStack_5e0 = (long *)*plVar10;
          pppppppuVar11 = &ppppppuStack_400;
          FUN_10948c1c8(pppppppuVar11,plStack_5e0,&plStack_5e0);
          FUN_10947f060(pppppppuVar11 + 3,*puVar12,puVar12[1]);
        }
        if (plStack_450 != (long *)0x0) {
          plStack_448 = plStack_450;
          __ZdlPv(plStack_450);
        }
      }
      for (; ppppppuStack_400 = (undefined ******)pppppppuVar11, plVar10 != (long *)0x0;
          plVar10 = (long *)*plVar10) {
        FUN_10948c608(pppppppuVar11,plStack_3f8,plVar10[2]);
        if (pppppppuVar11 == (undefined *******)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094802f4;
        }
        plVar29 = &lStack_430;
        FUN_10948c6d4(plVar29,pppppppuVar11[3]);
        FUN_10948c930(plVar29 + 4,plVar10[2],plVar10[2],plVar10 + 3);
        pppppppuVar11 = (undefined *******)ppppppuStack_400;
      }
      FUN_10948c16c(&ppppppuStack_400);
    }
    iVar2 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) <= *(int *)(lVar15 + 0x14)) {
      iVar2 = *(int *)(lVar15 + 0x14);
    }
    fVar37 = fStack_4b0;
    if (fStack_4b0 <= fStack_4ac * (float)iVar2) {
      fVar37 = fStack_4ac * (float)iVar2;
    }
    if (plStack_420 != (long *)0x0) {
      plVar10 = plStack_420;
      do {
        uStack_440 = 0;
        plStack_448 = (long *)0x0;
        plStack_450 = (long *)0x0;
        plVar29 = (long *)plVar10[2];
        (**(code **)(*plVar29 + 8))();
        if (((int)plVar29 == 0) || (auStack_498[0] < (ulong)plVar10[7])) {
          uStack_5f8 = 0xf00000020;
          uStack_5f0 = 0x3e4ccccd3f4ccccd;
          uStack_5e8 = 0x41700000;
          plStack_3f8 = (long *)0x0;
          ppppppuStack_400 = (undefined ******)0x0;
          plStack_3e8 = (long *)0x0;
          uStack_3f0 = (long *)0x0;
          lStack_3e0 = CONCAT44(lStack_3e0._4_4_,0x3f800000);
          FUN_109410fd0(&plStack_5e0,plVar10 + 4,&ppppppuStack_5c0,&uStack_5f8,&ppppppuStack_400);
          if (plStack_450 != (long *)0x0) {
            plStack_448 = plStack_450;
            __ZdlPv();
          }
          plStack_448 = plStack_5d8;
          plStack_450 = plStack_5e0;
          uStack_440 = uStack_5d0;
          plStack_5d8 = (long *)0x0;
          uStack_5d0 = 0;
          plStack_5e0 = (long *)0x0;
          FUN_10948cb8c(&ppppppuStack_400);
          uStack_49f = uVar8;
        }
        else {
          uStack_5f8 = *(undefined8 *)(param_2 + 0x10);
          plStack_3f8 = (long *)0x41f0000040c00000;
          ppppppuStack_400 = (undefined ******)0x428c00003f333333;
          uStack_3f0 = (long *)CONCAT71(uStack_3f0._1_7_,1);
          uStack_3f0 = (long *)CONCAT44(0x3fc00000,(undefined4)uStack_3f0);
          plStack_3e8 = (long *)CONCAT71(plStack_3e8._1_7_,1);
          lStack_3e0 = 0x80;
          uStack_3d8 = 0x40a00000;
          uStack_3d0 = 7;
          uStack_3c8 = 0x41a00000;
          uStack_3c4 = 1;
          FUN_1093fd958(&plStack_5e0,uStack_4e4,0x428c0000,&plStack_580,&uStack_5f8,plVar10 + 4,
                        &ppppppuStack_5c0,&ppppppuStack_400);
          if (plStack_450 != (long *)0x0) {
            plStack_448 = plStack_450;
            __ZdlPv();
          }
          uStack_49f = 0;
          plStack_448 = plStack_5d8;
          plStack_450 = plStack_5e0;
          uStack_440 = uStack_5d0;
        }
        FUN_10940e340(&ppppppuStack_400,fVar37 * fVar37,&plStack_450,&plStack_580,puVar1,
                      plVar10[2] + 0xb0,auStack_4c8,*puVar27);
        plVar29 = plStack_370;
        ppppppuVar5 = ppppppuStack_468;
        if (bStack_350 == 1) {
          plStack_5d8 = plStack_368;
          plStack_5e0 = plStack_370;
          uStack_5d0 = uStack_360;
          plStack_368 = (long *)0x0;
          uStack_360 = 0;
          plStack_370 = (long *)0x0;
          if (ppppppuStack_468 < ppppppuStack_460) {
            FUN_109480890(ppppppuStack_468,plVar10[2],plVar10[3],&ppppppuStack_400,&plStack_5e0);
            pppppppuVar11 = (undefined *******)(ppppppuVar5 + 0x18);
          }
          else {
            pppppppuVar11 = &ppppppuStack_470;
            FUN_109480694(pppppppuVar11,plVar10[2],plVar10[3],&ppppppuStack_400,&plStack_5e0);
          }
          ppppppuStack_468 = (undefined ******)pppppppuVar11;
          if (plVar29 != (long *)0x0) {
            __ZdlPv();
          }
          if (((bStack_350 & 1) != 0) && (plStack_370 != (long *)0x0)) {
            plStack_368 = plStack_370;
            __ZdlPv();
          }
        }
        if (plStack_450 != (long *)0x0) {
          plStack_448 = plStack_450;
          __ZdlPv();
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    lVar15 = 0;
    if (ppppppuStack_468 != ppppppuStack_470) {
      lVar15 = LZCOUNT(((long)ppppppuStack_468 - (long)ppppppuStack_470 >> 6) * -0x5555555555555555)
               * -2 + 0x7e;
    }
    FUN_109482b74(ppppppuStack_470,ppppppuStack_468,lVar15,1);
    func_0x00010948bc5c(&lStack_430);
    pppppppuVar18 = (undefined *******)ppppppuStack_460;
    pppppppuVar11 = (undefined *******)ppppppuStack_470;
    pppppppuVar39 = (undefined *******)ppppppuStack_468;
  }
  param_1[1] = pppppppuVar39;
  *param_1 = pppppppuVar11;
  ppppppuStack_468 = (undefined ******)0x0;
  ppppppuStack_460 = (undefined ******)0x0;
  ppppppuStack_470 = (undefined ******)0x0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  uVar32 = *param_4;
  param_1[2] = pppppppuVar18;
  param_1[3] = uVar32;
  *param_4 = 0;
  FUN_109484668(param_1 + 8,param_4 + 5);
  FUN_1094847d4(param_1 + 4,param_4 + 1);
  ppppppuStack_400 = (undefined ******)&ppppppuStack_470;
  FUN_109482a08(&ppppppuStack_400);
  FUN_109482a78(apppppuStack_5a8);
  if ((undefined *******)ppppppuStack_5c0 != (undefined *******)0x0) {
    ppppppuStack_5b8 = ppppppuStack_5c0;
    __ZdlPv();
  }
  if (lStack_530 != 0) {
    piVar13 = (int *)(lStack_530 + 0x14);
    do {
      iVar2 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_568);
    }
  }
  lStack_530 = 0;
  uStack_550 = 0;
  uStack_558 = 0;
  uStack_540 = 0;
  uStack_548 = 0;
  if (0 < uStack_568._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_528 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_568._4_4_);
  }
  if (puStack_520 != auStack_518 && puStack_520 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_520 + -8));
  }
  if (plStack_580 != (long *)0x0) {
    plStack_578 = plStack_580;
    __ZdlPv();
  }
  func_0x000109482af4(auStack_340);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
LAB_1094802f0:
  FUN_10945fd6c();
LAB_1094802f4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1094802f8);
  (*pcVar9)();
}



/* Entry: 1094805a0; end: 109480643;  */

void FUN_1094805a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_70 [24];
  undefined1 *puStack_58;
  
  FUN_10948fdc8(auStack_70,param_2,param_4);
  FUN_10948ffac(param_1,param_2,param_3,param_4,auStack_70,param_5,param_6);
  puStack_58 = auStack_70;
  func_0x00010948bbc8(&puStack_58);
  return;
}



/* Entry: 109480644; end: 109480693;  */

void FUN_109480644(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 109480694; end: 10948088f;  */

long * FUN_109480694(long *param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  lVar13 = param_1[1] - *param_1;
  uVar9 = (lVar13 >> 6) * -0x5555555555555555 + 1;
  if (0x155555555555555 < uVar9) {
    FUN_109480990();
    func_0x0001094809d4(&puStack_78);
    __Unwind_Resume();
    *param_1 = param_2;
    param_1[1] = param_3;
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
    lVar13 = *param_4;
    lVar16 = param_4[3];
    lVar7 = param_4[2];
    param_1[3] = param_4[1];
    param_1[2] = lVar13;
    param_1[5] = lVar16;
    param_1[4] = lVar7;
    lVar7 = param_4[5];
    lVar13 = param_4[4];
    param_1[8] = param_4[6];
    param_1[7] = lVar7;
    param_1[6] = lVar13;
    lVar16 = param_4[9];
    lVar7 = param_4[8];
    lVar20 = param_4[0xb];
    lVar17 = param_4[10];
    lVar24 = param_4[0xd];
    lVar22 = param_4[0xc];
    lVar26 = param_4[0xf];
    lVar25 = param_4[0xe];
    lVar13 = param_4[0x10];
    param_1[0x14] = 0;
    param_1[0x12] = lVar13;
    param_1[0xf] = lVar24;
    param_1[0xe] = lVar22;
    param_1[0x11] = lVar26;
    param_1[0x10] = lVar25;
    param_1[0xb] = lVar16;
    param_1[10] = lVar7;
    param_1[0xd] = lVar20;
    param_1[0xc] = lVar17;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    FUN_10937ec50();
    return param_1;
  }
  lVar7 = param_1[2] - *param_1 >> 6;
  uVar10 = lVar7 * 0x5555555555555556;
  if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
    uVar10 = uVar9;
  }
  if (0xaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar10 = 0x155555555555555;
  }
  plStack_58 = param_1;
  if (uVar10 != 0) {
    if (uVar10 < 0x155555555555556) {
      puVar5 = (undefined8 *)(uVar10 * 0xc0);
      _malloc();
      if (puVar5 != (undefined8 *)0x0) goto LAB_109480764;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  puVar5 = (undefined8 *)0x0;
LAB_109480764:
  lVar13 = (long)puVar5 + lVar13;
  puStack_78 = puVar5;
  puStack_70 = (undefined8 *)lVar13;
  plStack_68 = (long *)lVar13;
  puStack_60 = puVar5 + uVar10 * 0x18;
  FUN_109480890(lVar13,param_2,param_3,param_4,param_5);
  plStack_68 = (long *)(lVar13 + 0xc0);
  puVar11 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)(lVar13 + ((long)puVar11 - (long)puVar2));
  puVar6 = puVar11;
  puVar8 = puVar1;
  plVar12 = plStack_68;
  puVar5 = puVar5 + uVar10 * 0x18;
  if ((long)puVar11 - (long)puVar2 != 0) {
    do {
      uVar14 = *puVar6;
      puVar8[1] = puVar6[1];
      *puVar8 = uVar14;
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar14 = puVar6[2];
      uVar18 = puVar6[5];
      uVar15 = puVar6[4];
      puVar8[3] = puVar6[3];
      puVar8[2] = uVar14;
      puVar8[5] = uVar18;
      puVar8[4] = uVar15;
      uVar15 = puVar6[7];
      uVar14 = puVar6[6];
      puVar8[8] = puVar6[8];
      puVar8[7] = uVar15;
      puVar8[6] = uVar14;
      uVar15 = puVar6[0xd];
      uVar14 = puVar6[0xc];
      uVar19 = puVar6[0xf];
      uVar18 = puVar6[0xe];
      uVar23 = puVar6[0x11];
      uVar21 = puVar6[0x10];
      puVar8[0x12] = puVar6[0x12];
      puVar8[0xf] = uVar19;
      puVar8[0xe] = uVar18;
      puVar8[0x11] = uVar23;
      puVar8[0x10] = uVar21;
      puVar8[0xd] = uVar15;
      puVar8[0xc] = uVar14;
      uVar14 = puVar6[10];
      puVar8[0xb] = puVar6[0xb];
      puVar8[10] = uVar14;
      puVar8[0x15] = 0;
      puVar8[0x16] = 0;
      puVar8[0x14] = 0;
      uVar14 = puVar6[0x14];
      puVar8[0x15] = puVar6[0x15];
      puVar8[0x14] = uVar14;
      puVar8[0x16] = puVar6[0x16];
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      puVar6 = puVar6 + 0x18;
      puVar8 = puVar8 + 0x18;
    } while (puVar6 != puVar2);
    do {
      FUN_1094809a4(puVar11);
      puVar11 = puVar11 + 0x18;
    } while (puVar11 != puVar2);
    puVar11 = (undefined8 *)*param_1;
    plVar12 = plStack_68;
    puVar5 = puStack_60;
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)plVar12;
  puStack_60 = (undefined8 *)param_1[2];
  param_1[2] = (long)puVar5;
  puStack_78 = puVar11;
  puStack_70 = puVar11;
  plStack_68 = puVar11;
  func_0x0001094809d4(&puStack_78);
  return plVar12;
}



/* Entry: 109480890; end: 109480937;  */

undefined8 * FUN_109480890(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  param_1[3] = param_4[1];
  param_1[2] = uVar4;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  uVar5 = param_4[5];
  uVar4 = param_4[4];
  param_1[8] = param_4[6];
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar6 = param_4[9];
  uVar5 = param_4[8];
  uVar8 = param_4[0xb];
  uVar7 = param_4[10];
  uVar10 = param_4[0xd];
  uVar9 = param_4[0xc];
  uVar12 = param_4[0xf];
  uVar11 = param_4[0xe];
  uVar4 = param_4[0x10];
  param_1[0x14] = 0;
  param_1[0x12] = uVar4;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0x11] = uVar12;
  param_1[0x10] = uVar11;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_10937ec50();
  return param_1;
}



/* Entry: 109480938; end: 10948098f;  */

long FUN_109480938(long param_1)

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



/* Entry: 109480990; end: 1094809a3;  */

undefined * FUN_109480990(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(long *)(puVar4 + 0xa0) != 0) {
    *(long *)(puVar4 + 0xa8) = *(long *)(puVar4 + 0xa0);
    __ZdlPv();
  }
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



/* Entry: 1094809a4; end: 109480a1f;  */

long FUN_1094809a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
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



/* Entry: 109480a20; end: 109481f43;  */

long * FUN_109480a20(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
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
  long *unaff_x19;
  long *plVar14;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar15;
  long *plVar16;
  long *unaff_x22;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  uint uStack_1f4;
  long lStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_1f4 = (uint)param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  plVar14 = param_1;
  plVar15 = unaff_x21;
  plVar17 = param_3;
  do {
    plStack_220 = plVar10 + -0x48;
    plStack_218 = plVar10 + -0x30;
    plStack_208 = plVar10 + -0x34;
    plStack_200 = plVar10 + -0x18;
    plStack_210 = plVar10 + -0x33;
    plVar16 = plVar14;
LAB_109480a88:
    plVar14 = plVar16;
    uVar21 = (long)plVar10 - (long)plVar14;
    uVar20 = ((long)uVar21 >> 6) * -0x5555555555555555;
    plVar8 = plVar10;
    if (uVar20 - 2 != 0 && 1 < (long)uVar20) {
      if (uVar20 == 3) {
        uVar20 = plVar14[0x2d] - plVar14[0x2c];
        if ((ulong)(plVar14[0x15] - plVar14[0x14]) < uVar20) {
          if (uVar20 < (ulong)(plVar10[-3] - plVar10[-4])) goto LAB_109481394;
          param_2 = plVar14 + 0x18;
          param_1 = plVar14;
          FUN_109482514();
          if ((ulong)(plVar10[-3] - plVar10[-4]) <= (ulong)(plVar14[0x2d] - plVar14[0x2c])) break;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109481f40;
          plVar14 = plVar14 + 0x18;
          plVar16 = plStack_200;
          goto code_r0x000109482514;
        }
        plVar16 = plStack_200;
        if ((ulong)(plVar10[-3] - plVar10[-4]) <= uVar20) break;
      }
      else {
        if (uVar20 == 4) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109481f40;
          param_2 = plVar14 + 0x18;
          param_3 = plVar14 + 0x30;
          param_4 = plStack_200;
          goto code_r0x000109481f44;
        }
        if (uVar20 != 5) goto LAB_109480ad0;
        param_2 = plVar14 + 0x18;
        param_3 = plVar14 + 0x30;
        param_4 = plVar14 + 0x48;
        param_1 = plVar14;
        FUN_109481f44();
        if ((ulong)(plVar10[-3] - plVar10[-4]) <= (ulong)(plVar14[0x5d] - plVar14[0x5c])) break;
        param_1 = plVar14 + 0x48;
        param_2 = plStack_200;
        FUN_109482514();
        if ((ulong)(plVar14[0x5d] - plVar14[0x5c]) <= (ulong)(plVar14[0x45] - plVar14[0x44])) break;
        param_1 = plVar14 + 0x30;
        param_2 = plVar14 + 0x48;
        FUN_109482514();
        if ((ulong)(plVar14[0x45] - plVar14[0x44]) <= (ulong)(plVar14[0x2d] - plVar14[0x2c])) break;
        plVar16 = plVar14 + 0x30;
      }
      param_2 = plVar16;
      param_1 = plVar14 + 0x18;
      FUN_109482514();
      if ((ulong)(plVar14[0x2d] - plVar14[0x2c]) <= (ulong)(plVar14[0x15] - plVar14[0x14])) break;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109481f40;
      plVar16 = plVar14 + 0x18;
      goto code_r0x000109482514;
    }
    if (uVar20 < 2) break;
    if (uVar20 == 2) {
      if ((ulong)(plVar10[-3] - plVar10[-4]) <= (ulong)(plVar14[0x15] - plVar14[0x14])) break;
LAB_109481394:
      plVar16 = plStack_200;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109481f40;
      goto code_r0x000109482514;
    }
LAB_109480ad0:
    if ((long)uVar21 < 0x1200) {
      if ((uStack_1f4 & 1) == 0) {
        if ((plVar14 != plVar10) && (plVar14 + 0x18 != plVar10)) {
          plVar15 = &lStack_130;
          plVar17 = plVar14 + 0x2e;
          plVar16 = plVar14 + 0x18;
          plVar9 = plVar14;
          do {
            plVar14 = plVar16;
            lVar13 = plVar9[0x2c];
            lVar11 = plVar9[0x2d];
            uVar20 = lVar11 - lVar13;
            if ((ulong)(plVar9[0x15] - plVar9[0x14]) < uVar20) {
              plStack_128 = (long *)plVar14[1];
              lStack_130 = *plVar14;
              *plVar14 = 0;
              plVar14[1] = 0;
              lStack_118 = plVar9[0x1b];
              lStack_120 = plVar9[0x1a];
              lStack_108 = plVar9[0x1d];
              lStack_110 = plVar9[0x1c];
              lStack_f8 = plVar9[0x1f];
              lStack_100 = plVar9[0x1e];
              lStack_f0 = plVar9[0x20];
              lStack_a0 = plVar9[0x2a];
              lStack_b8 = plVar9[0x27];
              lStack_c0 = plVar9[0x26];
              lStack_a8 = plVar9[0x29];
              lStack_b0 = plVar9[0x28];
              lStack_d8 = plVar9[0x23];
              lStack_e0 = plVar9[0x22];
              lStack_c8 = plVar9[0x25];
              lStack_d0 = plVar9[0x24];
              lStack_80 = plVar9[0x2e];
              plVar9[0x2c] = 0;
              plVar9[0x2d] = 0;
              plVar9[0x2e] = 0;
              plVar16 = plVar17;
              lStack_90 = lVar13;
              lStack_88 = lVar11;
              do {
                plVar9 = plVar16;
                FUN_1094826cc(plVar9 + -0x16,plVar9 + -0x2e);
                plVar9[-0x13] = plVar9[-0x2b];
                plVar9[-0x14] = plVar9[-0x2c];
                plVar9[-0x11] = plVar9[-0x29];
                plVar9[-0x12] = plVar9[-0x2a];
                plVar9[-0xf] = plVar9[-0x27];
                plVar9[-0x10] = plVar9[-0x28];
                plVar9[-0xe] = plVar9[-0x26];
                plVar9[-7] = plVar9[-0x1f];
                plVar9[-8] = plVar9[-0x20];
                plVar9[-5] = plVar9[-0x1d];
                plVar9[-6] = plVar9[-0x1e];
                plVar9[-4] = plVar9[-0x1c];
                plVar9[-0xb] = plVar9[-0x23];
                plVar9[-0xc] = plVar9[-0x24];
                plVar9[-9] = plVar9[-0x21];
                plVar9[-10] = plVar9[-0x22];
                FUN_109480644(plVar9 + -2,plVar9 + -0x1a);
                plVar16 = plVar9 + -0x18;
              } while ((ulong)(plVar9[-0x31] - plVar9[-0x32]) < uVar20);
              param_2 = &lStack_130;
              FUN_1094826cc(plVar9 + -0x2e);
              plVar9[-0x2b] = lStack_118;
              plVar9[-0x2c] = lStack_120;
              plVar9[-0x29] = lStack_108;
              plVar9[-0x2a] = lStack_110;
              plVar9[-0x26] = lStack_f0;
              plVar9[-0x27] = lStack_f8;
              plVar9[-0x28] = lStack_100;
              plVar9[-0x1c] = lStack_a0;
              plVar9[-0x1f] = lStack_b8;
              plVar9[-0x20] = lStack_c0;
              plVar9[-0x1d] = lStack_a8;
              plVar9[-0x1e] = lStack_b0;
              plVar9[-0x21] = lStack_c8;
              plVar9[-0x22] = lStack_d0;
              plVar9[-0x23] = lStack_d8;
              plVar9[-0x24] = lStack_e0;
              param_1 = (long *)plVar9[-0x1a];
              if (param_1 != (long *)0x0) {
                plVar9[-0x19] = (long)param_1;
                __ZdlPv();
                plVar9[-0x1a] = 0;
                plVar9[-0x19] = 0;
                *plVar16 = 0;
              }
              plVar18 = plStack_128;
              plVar9[-0x19] = lStack_88;
              plVar9[-0x1a] = lStack_90;
              *plVar16 = lStack_80;
              lStack_90 = 0;
              lStack_88 = 0;
              lStack_80 = 0;
              if (plStack_128 != (long *)0x0) {
                plVar16 = plStack_128 + 1;
                do {
                  lVar13 = *plVar16;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar7) {
                    *plVar16 = lVar13 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_128 + 0x10))(plStack_128);
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  param_1 = plVar18;
                }
              }
            }
            plVar17 = plVar17 + 0x18;
            plVar16 = plVar14 + 0x18;
            plVar9 = plVar14;
          } while (plVar14 + 0x18 != plVar10);
        }
        break;
      }
      if ((plVar14 == plVar10) || (plVar14 + 0x18 == plVar10)) break;
      lVar13 = 0;
      plVar16 = plVar14;
      plVar9 = plVar14 + 0x18;
      goto LAB_109481444;
    }
    if (plVar17 == (long *)0x0) {
      if (plVar14 == plVar10) break;
      plVar17 = (long *)(uVar20 - 2 >> 1);
      plVar10 = plVar17;
      goto LAB_109481604;
    }
    plVar16 = plVar14 + (uVar20 >> 1) * 0x18;
    uVar20 = plVar10[-3] - plVar10[-4];
    plVar15 = plVar14;
    if (uVar21 < 0x6001) {
      uVar21 = plVar14[0x15] - plVar14[0x14];
      plVar15 = plVar16;
      if ((ulong)(plVar16[0x15] - plVar16[0x14]) < uVar21) {
        plVar8 = plStack_200;
        if ((uVar21 < uVar20) ||
           (FUN_109482514(plVar16,plVar14), plVar15 = plVar14, plVar8 = plStack_200,
           (ulong)(plVar14[0x15] - plVar14[0x14]) < (ulong)(plVar10[-3] - plVar10[-4])))
        goto LAB_109480dec;
      }
      else if ((uVar21 < uVar20) &&
              (FUN_109482514(plVar14,plStack_200), plVar8 = plVar14,
              (ulong)(plVar16[0x15] - plVar16[0x14]) < (ulong)(plVar14[0x15] - plVar14[0x14])))
      goto LAB_109480dec;
    }
    else {
      uVar21 = plVar16[0x15] - plVar16[0x14];
      plVar8 = plVar14;
      if ((ulong)(plVar14[0x15] - plVar14[0x14]) < uVar21) {
        plVar9 = plStack_200;
        if ((uVar21 < uVar20) ||
           (FUN_109482514(plVar14,plVar16), plVar8 = plVar16, plVar9 = plStack_200,
           (ulong)(plVar16[0x15] - plVar16[0x14]) < (ulong)(plVar10[-3] - plVar10[-4]))) {
LAB_109480bd0:
          FUN_109482514(plVar8,plVar9);
        }
      }
      else if ((uVar21 < uVar20) &&
              (FUN_109482514(plVar16,plStack_200), plVar9 = plVar16,
              (ulong)(plVar14[0x15] - plVar14[0x14]) < (ulong)(plVar16[0x15] - plVar16[0x14])))
      goto LAB_109480bd0;
      plVar9 = plVar16 + -0x18;
      uVar20 = plVar16[-3] - plVar16[-4];
      if ((ulong)(plVar14[0x2d] - plVar14[0x2c]) < uVar20) {
        plVar8 = plVar14 + 0x18;
        plVar18 = plStack_218;
        if ((uVar20 < (ulong)(plVar10[-0x1b] - plVar10[-0x1c])) ||
           (FUN_109482514(plVar14 + 0x18,plVar9), plVar8 = plVar9, plVar18 = plStack_218,
           (ulong)(plVar16[-3] - plVar16[-4]) < (ulong)(plVar10[-0x1b] - plVar10[-0x1c]))) {
LAB_109480c9c:
          FUN_109482514(plVar8,plVar18);
        }
      }
      else if ((uVar20 < (ulong)(plVar10[-0x1b] - plVar10[-0x1c])) &&
              (FUN_109482514(plVar9,plStack_218),
              (ulong)(plVar14[0x2d] - plVar14[0x2c]) < (ulong)(plVar16[-3] - plVar16[-4]))) {
        plVar8 = plVar14 + 0x18;
        plVar18 = plVar9;
        goto LAB_109480c9c;
      }
      uVar20 = plVar16[0x2d] - plVar16[0x2c];
      if ((ulong)(plVar14[0x45] - plVar14[0x44]) < uVar20) {
        plVar8 = plVar14 + 0x30;
        plVar18 = plStack_220;
        if ((ulong)(*plStack_210 - *plStack_208) <= uVar20) {
          FUN_109482514(plVar8,plVar16 + 0x18);
          if ((ulong)(*plStack_210 - *plStack_208) <= (ulong)(plVar16[0x2d] - plVar16[0x2c]))
          goto LAB_109480d48;
          plVar8 = plVar16 + 0x18;
          plVar18 = plStack_220;
        }
LAB_109480d44:
        FUN_109482514(plVar8,plVar18);
      }
      else if ((uVar20 < (ulong)(*plStack_210 - *plStack_208)) &&
              (FUN_109482514(plVar16 + 0x18,plStack_220),
              (ulong)(plVar14[0x45] - plVar14[0x44]) < (ulong)(plVar16[0x2d] - plVar16[0x2c]))) {
        plVar8 = plVar14 + 0x30;
        plVar18 = plVar16 + 0x18;
        goto LAB_109480d44;
      }
LAB_109480d48:
      uVar20 = plVar16[0x15] - plVar16[0x14];
      plVar8 = plVar16;
      if ((ulong)(plVar16[-3] - plVar16[-4]) < uVar20) {
        if (uVar20 < (ulong)(plVar16[0x2d] - plVar16[0x2c])) {
          plVar16 = plVar16 + 0x18;
        }
        else {
          FUN_109482514(plVar9,plVar16);
          if ((ulong)(plVar16[0x2d] - plVar16[0x2c]) <= (ulong)(plVar16[0x15] - plVar16[0x14]))
          goto LAB_109480dec;
          plVar9 = plVar16;
          plVar16 = plVar16 + 0x18;
        }
LAB_109480de0:
        FUN_109482514(plVar9,plVar16);
      }
      else if ((uVar20 < (ulong)(plVar16[0x2d] - plVar16[0x2c])) &&
              (FUN_109482514(plVar16,plVar16 + 0x18),
              (ulong)(plVar16[-3] - plVar16[-4]) < (ulong)(plVar16[0x15] - plVar16[0x14])))
      goto LAB_109480de0;
LAB_109480dec:
      FUN_109482514(plVar15,plVar8);
    }
    plVar17 = (long *)((long)plVar17 + -1);
    if ((uStack_1f4 & 1) == 0) {
      lStack_90 = plVar14[0x14];
      lStack_88 = plVar14[0x15];
      plVar15 = (long *)(lStack_88 - lStack_90);
      if (plVar15 < (long *)(plVar14[-3] - plVar14[-4])) goto LAB_109480e20;
      plStack_128 = (long *)plVar14[1];
      lStack_130 = *plVar14;
      lStack_118 = plVar14[3];
      lStack_120 = plVar14[2];
      *plVar14 = 0;
      plVar14[1] = 0;
      lStack_108 = plVar14[5];
      lStack_110 = plVar14[4];
      lStack_f8 = plVar14[7];
      lStack_100 = plVar14[6];
      lStack_f0 = plVar14[8];
      lStack_d8 = plVar14[0xb];
      lStack_e0 = plVar14[10];
      lStack_c8 = plVar14[0xd];
      lStack_d0 = plVar14[0xc];
      lStack_b8 = plVar14[0xf];
      lStack_c0 = plVar14[0xe];
      lStack_a8 = plVar14[0x11];
      lStack_b0 = plVar14[0x10];
      lStack_a0 = plVar14[0x12];
      lStack_80 = plVar14[0x16];
      plVar14[0x14] = 0;
      plVar14[0x15] = 0;
      plVar14[0x16] = 0;
      plVar8 = plVar14;
      if ((long *)(plVar10[-3] - plVar10[-4]) < plVar15) {
        do {
          plVar16 = plVar8 + 0x18;
          plVar9 = plVar8 + 0x2c;
          plVar18 = plVar8 + 0x2d;
          plVar8 = plVar16;
        } while (plVar15 <= (long *)(*plVar18 - *plVar9));
      }
      else {
        do {
          plVar16 = plVar8 + 0x18;
          if (plVar10 <= plVar16) break;
          plVar9 = plVar8 + 0x2c;
          plVar18 = plVar8 + 0x2d;
          plVar8 = plVar16;
        } while (plVar15 <= (long *)(*plVar18 - *plVar9));
      }
      plVar8 = plVar10;
      plVar9 = plVar10;
      if (plVar16 < plVar10) {
        do {
          plVar9 = plVar8 + -0x18;
          plVar18 = plVar8 + -4;
          plVar4 = plVar8 + -3;
          plVar8 = plVar9;
        } while ((long *)(*plVar4 - *plVar18) < plVar15);
      }
      while (plVar16 < plVar9) {
        FUN_109482514(plVar16,plVar9);
        do {
          plVar8 = plVar16 + 0x2c;
          plVar18 = plVar16 + 0x2d;
          plVar16 = plVar16 + 0x18;
        } while (plVar15 <= (long *)(*plVar18 - *plVar8));
        do {
          plVar8 = plVar9 + -4;
          plVar18 = plVar9 + -3;
          plVar9 = plVar9 + -0x18;
        } while ((long *)(*plVar18 - *plVar8) < plVar15);
      }
      plVar9 = plVar16 + -0x18;
      if (plVar9 != plVar14) {
        FUN_1094826cc(plVar14,plVar9);
        lVar13 = plVar16[-0x16];
        lVar22 = plVar16[-0x13];
        lVar11 = plVar16[-0x14];
        plVar14[3] = plVar16[-0x15];
        plVar14[2] = lVar13;
        plVar14[5] = lVar22;
        plVar14[4] = lVar11;
        lVar11 = plVar16[-0x11];
        lVar13 = plVar16[-0x12];
        plVar14[8] = plVar16[-0x10];
        plVar14[7] = lVar11;
        plVar14[6] = lVar13;
        lVar23 = plVar16[-9];
        lVar22 = plVar16[-10];
        lVar11 = plVar16[-7];
        lVar13 = plVar16[-8];
        lVar25 = plVar16[-0xb];
        lVar24 = plVar16[-0xc];
        plVar14[0x12] = plVar16[-6];
        plVar14[0xf] = lVar23;
        plVar14[0xe] = lVar22;
        plVar14[0x11] = lVar11;
        plVar14[0x10] = lVar13;
        plVar14[0xd] = lVar25;
        plVar14[0xc] = lVar24;
        lVar13 = plVar16[-0xe];
        plVar14[0xb] = plVar16[-0xd];
        plVar14[10] = lVar13;
        FUN_109480644(plVar14 + 0x14,plVar16 + -4);
      }
      plVar8 = &lStack_130;
      FUN_1094826cc(plVar9);
      plVar16[-0x15] = lStack_118;
      plVar16[-0x16] = lStack_120;
      plVar16[-0x13] = lStack_108;
      plVar16[-0x14] = lStack_110;
      plVar16[-0x10] = lStack_f0;
      plVar16[-0x11] = lStack_f8;
      plVar16[-0x12] = lStack_100;
      plVar16[-6] = lStack_a0;
      plVar16[-9] = lStack_b8;
      plVar16[-10] = lStack_c0;
      plVar16[-7] = lStack_a8;
      plVar16[-8] = lStack_b0;
      plVar16[-0xb] = lStack_c8;
      plVar16[-0xc] = lStack_d0;
      plVar16[-0xd] = lStack_d8;
      plVar16[-0xe] = lStack_e0;
      param_1 = (long *)plVar16[-4];
      if (param_1 != (long *)0x0) {
        plVar16[-3] = (long)param_1;
        __ZdlPv();
        plVar16[-4] = 0;
        plVar16[-3] = 0;
        plVar16[-2] = 0;
      }
      plVar14 = plStack_128;
      plVar16[-3] = lStack_88;
      plVar16[-4] = lStack_90;
      plVar16[-2] = lStack_80;
      lStack_90 = 0;
      lStack_88 = 0;
      lStack_80 = 0;
      if (plStack_128 != (long *)0x0) {
        plVar9 = plStack_128 + 1;
        do {
          lVar13 = *plVar9;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar14;
        }
      }
      goto LAB_109481088;
    }
    lStack_90 = plVar14[0x14];
    lStack_88 = plVar14[0x15];
    plVar15 = (long *)(lStack_88 - lStack_90);
LAB_109480e20:
    lVar13 = 0;
    plStack_128 = (long *)plVar14[1];
    lStack_130 = *plVar14;
    lStack_118 = plVar14[3];
    lStack_120 = plVar14[2];
    *plVar14 = 0;
    plVar14[1] = 0;
    lStack_108 = plVar14[5];
    lStack_110 = plVar14[4];
    lStack_f8 = plVar14[7];
    lStack_100 = plVar14[6];
    lStack_f0 = plVar14[8];
    lStack_d8 = plVar14[0xb];
    lStack_e0 = plVar14[10];
    lStack_c8 = plVar14[0xd];
    lStack_d0 = plVar14[0xc];
    lStack_b8 = plVar14[0xf];
    lStack_c0 = plVar14[0xe];
    lStack_a8 = plVar14[0x11];
    lStack_b0 = plVar14[0x10];
    lStack_a0 = plVar14[0x12];
    lStack_80 = plVar14[0x16];
    plVar14[0x14] = 0;
    plVar14[0x15] = 0;
    plVar14[0x16] = 0;
    do {
      lVar11 = lVar13 + 0x160;
      lVar22 = lVar13 + 0x168;
      lVar13 = lVar13 + 0xc0;
    } while (plVar15 < (long *)(*(long *)((long)plVar14 + lVar22) -
                               *(long *)((long)plVar14 + lVar11)));
    plVar9 = (long *)((long)plVar14 + lVar13);
    plVar16 = plVar10;
    if (lVar13 == 0xc0) {
      do {
        plVar18 = plVar16;
        if (plVar16 <= plVar9) break;
        plVar18 = plVar16 + -0x18;
        plVar8 = plVar16 + -4;
        plVar4 = plVar16 + -3;
        plVar16 = plVar18;
      } while ((long *)(*plVar4 - *plVar8) <= plVar15);
    }
    else {
      do {
        plVar18 = plVar16 + -0x18;
        plVar8 = plVar16 + -4;
        plVar4 = plVar16 + -3;
        plVar16 = plVar18;
      } while ((long *)(*plVar4 - *plVar8) <= plVar15);
    }
    plVar16 = plVar9;
    plVar8 = plVar18;
    if (plVar9 < plVar18) {
      do {
        FUN_109482514(plVar16,plVar8);
        do {
          plVar4 = plVar16 + 0x2c;
          plVar5 = plVar16 + 0x2d;
          plVar16 = plVar16 + 0x18;
        } while (plVar15 < (long *)(*plVar5 - *plVar4));
        do {
          plVar4 = plVar8 + -4;
          plVar5 = plVar8 + -3;
          plVar8 = plVar8 + -0x18;
        } while ((long *)(*plVar5 - *plVar4) <= plVar15);
      } while (plVar16 < plVar8);
    }
    plVar8 = plVar16 + -0x18;
    if (plVar8 != plVar14) {
      FUN_1094826cc(plVar14,plVar8);
      lVar13 = plVar16[-0x16];
      lVar22 = plVar16[-0x13];
      lVar11 = plVar16[-0x14];
      plVar14[3] = plVar16[-0x15];
      plVar14[2] = lVar13;
      plVar14[5] = lVar22;
      plVar14[4] = lVar11;
      lVar11 = plVar16[-0x11];
      lVar13 = plVar16[-0x12];
      plVar14[8] = plVar16[-0x10];
      plVar14[7] = lVar11;
      plVar14[6] = lVar13;
      lVar23 = plVar16[-9];
      lVar22 = plVar16[-10];
      lVar11 = plVar16[-7];
      lVar13 = plVar16[-8];
      lVar25 = plVar16[-0xb];
      lVar24 = plVar16[-0xc];
      plVar14[0x12] = plVar16[-6];
      plVar14[0xf] = lVar23;
      plVar14[0xe] = lVar22;
      plVar14[0x11] = lVar11;
      plVar14[0x10] = lVar13;
      plVar14[0xd] = lVar25;
      plVar14[0xc] = lVar24;
      lVar13 = plVar16[-0xe];
      plVar14[0xb] = plVar16[-0xd];
      plVar14[10] = lVar13;
      FUN_109480644(plVar14 + 0x14,plVar16 + -4);
    }
    FUN_1094826cc(plVar8,&lStack_130);
    plVar16[-0x15] = lStack_118;
    plVar16[-0x16] = lStack_120;
    plVar16[-0x13] = lStack_108;
    plVar16[-0x14] = lStack_110;
    plVar16[-0x10] = lStack_f0;
    plVar16[-0x11] = lStack_f8;
    plVar16[-0x12] = lStack_100;
    plVar16[-6] = lStack_a0;
    plVar16[-9] = lStack_b8;
    plVar16[-10] = lStack_c0;
    plVar16[-7] = lStack_a8;
    plVar16[-8] = lStack_b0;
    plVar16[-0xb] = lStack_c8;
    plVar16[-0xc] = lStack_d0;
    plVar16[-0xd] = lStack_d8;
    plVar16[-0xe] = lStack_e0;
    plVar15 = plVar16 + -4;
    if (*plVar15 != 0) {
      plVar16[-3] = *plVar15;
      __ZdlPv();
      *plVar15 = 0;
      plVar16[-3] = 0;
      plVar16[-2] = 0;
    }
    plVar4 = plStack_128;
    plVar16[-3] = lStack_88;
    plVar16[-4] = lStack_90;
    plVar16[-2] = lStack_80;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    if (plStack_128 != (long *)0x0) {
      plVar5 = plStack_128 + 1;
      do {
        lVar13 = *plVar5;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar7) {
          *plVar5 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar9 < plVar18) goto LAB_109481070;
    plVar9 = plVar14;
    FUN_10948207c(plVar14,plVar8);
    param_1 = plVar16;
    param_2 = plVar10;
    FUN_10948207c();
    if ((int)param_1 == 0) goto code_r0x00010948106c;
    plVar10 = plVar8;
  } while (((ulong)plVar9 & 1) == 0);
  goto LAB_109481f08;
LAB_109481444:
  do {
    lVar11 = plVar16[0x2c];
    lVar22 = plVar16[0x2d];
    plVar18 = (long *)(lVar22 - lVar11);
    plVar17 = plVar18;
    if ((long *)(plVar16[0x15] - plVar16[0x14]) < plVar18) {
      plStack_128 = (long *)plVar9[1];
      lStack_130 = *plVar9;
      *plVar9 = 0;
      plVar9[1] = 0;
      lStack_118 = plVar16[0x1b];
      lStack_120 = plVar16[0x1a];
      lStack_108 = plVar16[0x1d];
      lStack_110 = plVar16[0x1c];
      lStack_f8 = plVar16[0x1f];
      lStack_100 = plVar16[0x1e];
      lStack_f0 = plVar16[0x20];
      lStack_a0 = plVar16[0x2a];
      lStack_b8 = plVar16[0x27];
      lStack_c0 = plVar16[0x26];
      lStack_a8 = plVar16[0x29];
      lStack_b0 = plVar16[0x28];
      lStack_d8 = plVar16[0x23];
      lStack_e0 = plVar16[0x22];
      lStack_c8 = plVar16[0x25];
      lStack_d0 = plVar16[0x24];
      lStack_80 = plVar16[0x2e];
      plVar16[0x2c] = 0;
      plVar16[0x2d] = 0;
      plVar16[0x2e] = 0;
      lVar23 = lVar13;
      lStack_90 = lVar11;
      lStack_88 = lVar22;
      do {
        lVar22 = lVar23;
        lVar11 = (long)plVar14 + lVar22;
        FUN_1094826cc(lVar11 + 0xc0,lVar11);
        *(undefined8 *)(lVar11 + 0xd8) = *(undefined8 *)(lVar11 + 0x18);
        *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)(lVar11 + 0x10);
        *(undefined8 *)(lVar11 + 0xe8) = *(undefined8 *)(lVar11 + 0x28);
        *(undefined8 *)(lVar11 + 0xe0) = *(undefined8 *)(lVar11 + 0x20);
        *(undefined8 *)(lVar11 + 0xf8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(lVar11 + 0xf0) = *(undefined8 *)(lVar11 + 0x30);
        *(undefined8 *)(lVar11 + 0x100) = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(lVar11 + 0x138) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)(lVar11 + 0x130) = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)(lVar11 + 0x148) = *(undefined8 *)(lVar11 + 0x88);
        *(undefined8 *)(lVar11 + 0x140) = *(undefined8 *)(lVar11 + 0x80);
        *(undefined8 *)(lVar11 + 0x150) = *(undefined8 *)(lVar11 + 0x90);
        *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar11 + 0x58);
        *(undefined8 *)(lVar11 + 0x110) = *(undefined8 *)(lVar11 + 0x50);
        *(undefined8 *)(lVar11 + 0x128) = *(undefined8 *)(lVar11 + 0x68);
        *(undefined8 *)(lVar11 + 0x120) = *(undefined8 *)(lVar11 + 0x60);
        FUN_109480644(lVar11 + 0x160,lVar11 + 0xa0);
        plVar17 = plVar14;
        if (lVar22 == 0) goto LAB_109481528;
        lVar23 = lVar22 + -0xc0;
      } while ((long *)(*(long *)(lVar11 + -0x18) - *(long *)(lVar11 + -0x20)) < plVar18);
      plVar17 = (long *)((long)plVar14 + lVar22);
LAB_109481528:
      param_2 = &lStack_130;
      FUN_1094826cc(plVar17);
      *(long *)(lVar11 + 0x18) = lStack_118;
      *(long *)(lVar11 + 0x10) = lStack_120;
      *(long *)(lVar11 + 0x28) = lStack_108;
      *(long *)(lVar11 + 0x20) = lStack_110;
      *(long *)(lVar11 + 0x40) = lStack_f0;
      *(long *)(lVar11 + 0x38) = lStack_f8;
      *(long *)(lVar11 + 0x30) = lStack_100;
      *(long *)(lVar11 + 0x90) = lStack_a0;
      *(long *)(lVar11 + 0x78) = lStack_b8;
      *(long *)(lVar11 + 0x70) = lStack_c0;
      *(long *)(lVar11 + 0x88) = lStack_a8;
      *(long *)(lVar11 + 0x80) = lStack_b0;
      *(long *)(lVar11 + 0x68) = lStack_c8;
      *(long *)(lVar11 + 0x60) = lStack_d0;
      *(long *)(lVar11 + 0x58) = lStack_d8;
      *(long *)(lVar11 + 0x50) = lStack_e0;
      plVar16 = (long *)(lVar11 + 0xa0);
      param_1 = (long *)*plVar16;
      if (param_1 != (long *)0x0) {
        plVar17[0x15] = (long)param_1;
        __ZdlPv();
        *plVar16 = 0;
        *(undefined8 *)(lVar11 + 0xa8) = 0;
        *(undefined8 *)(lVar11 + 0xb0) = 0;
      }
      plVar15 = plStack_128;
      *plVar16 = lStack_90;
      plVar17[0x16] = lStack_80;
      plVar17[0x15] = lStack_88;
      lStack_90 = 0;
      lStack_88 = 0;
      lStack_80 = 0;
      if (plStack_128 != (long *)0x0) {
        plVar16 = plStack_128 + 1;
        do {
          lVar11 = *plVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          param_1 = plVar15;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    plVar18 = plVar9 + 0x18;
    lVar13 = lVar13 + 0xc0;
    plVar16 = plVar9;
    plVar9 = plVar18;
  } while (plVar18 != plVar10);
  goto LAB_109481f08;
code_r0x00010948106c:
  if (((ulong)plVar9 & 1) == 0) {
LAB_109481070:
    param_4 = (long *)(ulong)(uStack_1f4 & 1);
    param_3 = plVar17;
    FUN_109480a20();
    param_1 = plVar14;
LAB_109481088:
    uStack_1f4 = 0;
    param_2 = plVar8;
  }
  goto LAB_109480a88;
LAB_109481604:
  do {
    if ((long)plVar10 <= (long)plVar17) {
      uVar2 = (long)plVar10 << 1 | 1;
      plVar16 = plVar14 + uVar2 * 0x18;
      uVar19 = (long)plVar10 * 2 + 2;
      uVar12 = uVar2;
      if ((long)uVar19 < (long)uVar20) {
        plVar9 = plVar16 + 0x14;
        plVar4 = plVar16 + 0x15;
        plVar18 = plVar16 + 0x2c;
        plVar5 = plVar16 + 0x2d;
        lVar13 = 0xc0;
        if ((ulong)(*plVar4 - *plVar9) <= (ulong)(*plVar5 - *plVar18)) {
          lVar13 = 0;
        }
        plVar16 = (long *)((long)plVar16 + lVar13);
        uVar12 = uVar19;
        if ((ulong)(*plVar4 - *plVar9) <= (ulong)(*plVar5 - *plVar18)) {
          uVar12 = uVar2;
        }
      }
      param_1 = plVar14 + (long)plVar10 * 0x18;
      lVar13 = param_1[0x14];
      lVar11 = param_1[0x15];
      uVar19 = lVar11 - lVar13;
      if ((ulong)(plVar16[0x15] - plVar16[0x14]) <= uVar19) {
        plStack_128 = (long *)param_1[1];
        lStack_130 = *param_1;
        *param_1 = 0;
        param_1[1] = 0;
        lStack_118 = param_1[3];
        lStack_120 = param_1[2];
        lStack_108 = param_1[5];
        lStack_110 = param_1[4];
        lStack_f8 = param_1[7];
        lStack_100 = param_1[6];
        lStack_f0 = param_1[8];
        lStack_c8 = param_1[0xd];
        lStack_d0 = param_1[0xc];
        lStack_b8 = param_1[0xf];
        lStack_c0 = param_1[0xe];
        lStack_a8 = param_1[0x11];
        lStack_b0 = param_1[0x10];
        lStack_a0 = param_1[0x12];
        lStack_d8 = param_1[0xb];
        lStack_e0 = param_1[10];
        lStack_80 = param_1[0x16];
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        lStack_90 = lVar13;
        lStack_88 = lVar11;
        do {
          plVar9 = plVar16;
          FUN_1094826cc(param_1,plVar9);
          lVar13 = plVar9[2];
          lVar22 = plVar9[5];
          lVar11 = plVar9[4];
          param_1[3] = plVar9[3];
          param_1[2] = lVar13;
          param_1[5] = lVar22;
          param_1[4] = lVar11;
          lVar11 = plVar9[7];
          lVar13 = plVar9[6];
          param_1[8] = plVar9[8];
          param_1[7] = lVar11;
          param_1[6] = lVar13;
          lVar23 = plVar9[0xf];
          lVar22 = plVar9[0xe];
          lVar11 = plVar9[0x11];
          lVar13 = plVar9[0x10];
          lVar25 = plVar9[0xd];
          lVar24 = plVar9[0xc];
          param_1[0x12] = plVar9[0x12];
          param_1[0xf] = lVar23;
          param_1[0xe] = lVar22;
          param_1[0x11] = lVar11;
          param_1[0x10] = lVar13;
          param_1[0xd] = lVar25;
          param_1[0xc] = lVar24;
          lVar13 = plVar9[10];
          param_1[0xb] = plVar9[0xb];
          param_1[10] = lVar13;
          FUN_109480644(param_1 + 0x14,plVar9 + 0x14);
          if ((long)plVar17 < (long)uVar12) break;
          uVar3 = uVar12 << 1 | 1;
          plVar16 = plVar14 + uVar3 * 0x18;
          uVar2 = uVar12 * 2 + 2;
          uVar12 = uVar3;
          if ((long)uVar2 < (long)uVar20) {
            plVar15 = plVar16 + 0x14;
            plVar4 = plVar16 + 0x15;
            plVar18 = plVar16 + 0x2c;
            plVar5 = plVar16 + 0x2d;
            lVar13 = 0xc0;
            if ((ulong)(*plVar4 - *plVar15) <= (ulong)(*plVar5 - *plVar18)) {
              lVar13 = 0;
            }
            plVar16 = (long *)((long)plVar16 + lVar13);
            uVar12 = uVar2;
            if ((ulong)(*plVar4 - *plVar15) <= (ulong)(*plVar5 - *plVar18)) {
              uVar12 = uVar3;
            }
          }
          param_1 = plVar9;
        } while ((ulong)(plVar16[0x15] - plVar16[0x14]) <= uVar19);
        param_2 = &lStack_130;
        FUN_1094826cc(plVar9);
        plVar9[3] = lStack_118;
        plVar9[2] = lStack_120;
        plVar9[5] = lStack_108;
        plVar9[4] = lStack_110;
        plVar9[7] = lStack_f8;
        plVar9[6] = lStack_100;
        plVar9[8] = lStack_f0;
        plVar9[0x12] = lStack_a0;
        plVar9[0xf] = lStack_b8;
        plVar9[0xe] = lStack_c0;
        plVar9[0x11] = lStack_a8;
        plVar9[0x10] = lStack_b0;
        plVar9[0xd] = lStack_c8;
        plVar9[0xc] = lStack_d0;
        plVar9[0xb] = lStack_d8;
        plVar9[10] = lStack_e0;
        param_1 = (long *)plVar9[0x14];
        if (param_1 != (long *)0x0) {
          plVar9[0x15] = (long)param_1;
          __ZdlPv();
          plVar9[0x14] = 0;
          plVar9[0x15] = 0;
          plVar9[0x16] = 0;
        }
        plVar15 = plStack_128;
        plVar9[0x15] = lStack_88;
        plVar9[0x14] = lStack_90;
        plVar9[0x16] = lStack_80;
        lStack_90 = 0;
        lStack_88 = 0;
        lStack_80 = 0;
        if (plStack_128 != (long *)0x0) {
          plVar16 = plStack_128 + 1;
          do {
            lVar13 = *plVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            param_1 = plVar15;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
    bVar7 = plVar10 != (long *)0x0;
    plVar10 = (long *)((long)plVar10 + -1);
  } while (bVar7);
  uVar20 = (uVar21 >> 6) * -0x5555555555555555;
  do {
    if (1 < (long)uVar20) {
      plStack_1e8 = (long *)plVar14[1];
      lStack_1f0 = *plVar14;
      lStack_1d8 = plVar14[3];
      lStack_1e0 = plVar14[2];
      *plVar14 = 0;
      plVar14[1] = 0;
      lStack_1c8 = plVar14[5];
      lStack_1d0 = plVar14[4];
      lStack_1b8 = plVar14[7];
      lStack_1c0 = plVar14[6];
      lStack_1b0 = plVar14[8];
      lStack_178 = plVar14[0xf];
      lStack_180 = plVar14[0xe];
      lStack_168 = plVar14[0x11];
      lStack_170 = plVar14[0x10];
      lStack_160 = plVar14[0x12];
      lStack_188 = plVar14[0xd];
      lStack_190 = plVar14[0xc];
      lStack_198 = plVar14[0xb];
      lStack_1a0 = plVar14[10];
      plStack_148 = (long *)plVar14[0x15];
      plStack_150 = (long *)plVar14[0x14];
      lStack_140 = plVar14[0x16];
      plVar14[0x14] = 0;
      plVar14[0x15] = 0;
      plVar14[0x16] = 0;
      plVar15 = plVar14;
      uVar21 = 0;
      do {
        uVar2 = uVar21 << 1 | 1;
        uVar19 = uVar21 * 2 + 2;
        plVar10 = plVar15 + uVar21 * 0x18 + 0x18;
        uVar12 = uVar2;
        if (((long)uVar19 < (long)uVar20) &&
           (plVar10 = plVar15 + uVar21 * 0x18 + 0x30, uVar12 = uVar19,
           (ulong)(plVar15[uVar21 * 0x18 + 0x2d] - plVar15[uVar21 * 0x18 + 0x2c]) <=
           (ulong)(plVar15[uVar21 * 0x18 + 0x45] - plVar15[uVar21 * 0x18 + 0x44]))) {
          plVar10 = plVar15 + uVar21 * 0x18 + 0x18;
          uVar12 = uVar2;
        }
        FUN_1094826cc(plVar15,plVar10);
        lVar13 = plVar10[2];
        lVar22 = plVar10[5];
        lVar11 = plVar10[4];
        plVar15[3] = plVar10[3];
        plVar15[2] = lVar13;
        plVar15[5] = lVar22;
        plVar15[4] = lVar11;
        lVar11 = plVar10[7];
        lVar13 = plVar10[6];
        plVar15[8] = plVar10[8];
        plVar15[7] = lVar11;
        plVar15[6] = lVar13;
        lVar23 = plVar10[0xf];
        lVar22 = plVar10[0xe];
        lVar11 = plVar10[0x11];
        lVar13 = plVar10[0x10];
        lVar25 = plVar10[0xd];
        lVar24 = plVar10[0xc];
        plVar15[0x12] = plVar10[0x12];
        plVar15[0xf] = lVar23;
        plVar15[0xe] = lVar22;
        plVar15[0x11] = lVar11;
        plVar15[0x10] = lVar13;
        plVar15[0xd] = lVar25;
        plVar15[0xc] = lVar24;
        lVar13 = plVar10[10];
        plVar15[0xb] = plVar10[0xb];
        plVar15[10] = lVar13;
        FUN_109480644(plVar15 + 0x14,plVar10 + 0x14);
        plVar15 = plVar10;
        uVar21 = uVar12;
      } while ((long)uVar12 <= (long)(uVar20 - 2 >> 1));
      plVar17 = plVar8 + -0x18;
      if (plVar10 == plVar17) {
        param_2 = &lStack_1f0;
        FUN_1094826cc(plVar10);
        plVar10[3] = lStack_1d8;
        plVar10[2] = lStack_1e0;
        plVar10[5] = lStack_1c8;
        plVar10[4] = lStack_1d0;
        plVar10[7] = lStack_1b8;
        plVar10[6] = lStack_1c0;
        plVar10[8] = lStack_1b0;
        plVar10[0x12] = lStack_160;
        plVar10[0xf] = lStack_178;
        plVar10[0xe] = lStack_180;
        plVar10[0x11] = lStack_168;
        plVar10[0x10] = lStack_170;
        plVar10[0xd] = lStack_188;
        plVar10[0xc] = lStack_190;
        plVar10[0xb] = lStack_198;
        plVar10[10] = lStack_1a0;
        param_1 = (long *)plVar10[0x14];
        if (param_1 != (long *)0x0) {
          plVar10[0x15] = (long)param_1;
          __ZdlPv();
          plVar10[0x14] = 0;
          plVar10[0x15] = 0;
          plVar10[0x16] = 0;
        }
        plVar10[0x15] = (long)plStack_148;
        plVar10[0x14] = (long)plStack_150;
        plVar10[0x16] = lStack_140;
        plStack_150 = (long *)0x0;
        plStack_148 = (long *)0x0;
        lStack_140 = 0;
      }
      else {
        FUN_1094826cc(plVar10,plVar17);
        lVar13 = plVar8[-0x16];
        lVar22 = plVar8[-0x13];
        lVar11 = plVar8[-0x14];
        plVar10[3] = plVar8[-0x15];
        plVar10[2] = lVar13;
        plVar10[5] = lVar22;
        plVar10[4] = lVar11;
        lVar11 = plVar8[-0x11];
        lVar13 = plVar8[-0x12];
        plVar10[8] = plVar8[-0x10];
        plVar10[7] = lVar11;
        plVar10[6] = lVar13;
        lVar23 = plVar8[-9];
        lVar22 = plVar8[-10];
        lVar11 = plVar8[-7];
        lVar13 = plVar8[-8];
        lVar25 = plVar8[-0xb];
        lVar24 = plVar8[-0xc];
        plVar10[0x12] = plVar8[-6];
        plVar10[0xf] = lVar23;
        plVar10[0xe] = lVar22;
        plVar10[0x11] = lVar11;
        plVar10[0x10] = lVar13;
        plVar10[0xd] = lVar25;
        plVar10[0xc] = lVar24;
        lVar13 = plVar8[-0xe];
        plVar10[0xb] = plVar8[-0xd];
        plVar10[10] = lVar13;
        FUN_109480644(plVar10 + 0x14,plVar8 + -4);
        param_2 = &lStack_1f0;
        FUN_1094826cc(plVar17);
        plVar8[-0x15] = lStack_1d8;
        plVar8[-0x16] = lStack_1e0;
        plVar8[-0x13] = lStack_1c8;
        plVar8[-0x14] = lStack_1d0;
        plVar8[-0x10] = lStack_1b0;
        plVar8[-0x11] = lStack_1b8;
        plVar8[-0x12] = lStack_1c0;
        plVar8[-6] = lStack_160;
        plVar8[-9] = lStack_178;
        plVar8[-10] = lStack_180;
        plVar8[-7] = lStack_168;
        plVar8[-8] = lStack_170;
        plVar8[-0xb] = lStack_188;
        plVar8[-0xc] = lStack_190;
        plVar8[-0xd] = lStack_198;
        plVar8[-0xe] = lStack_1a0;
        param_1 = (long *)plVar8[-4];
        if (param_1 != (long *)0x0) {
          plVar8[-3] = (long)param_1;
          __ZdlPv();
        }
        plVar8[-3] = (long)plStack_148;
        plVar8[-4] = (long)plStack_150;
        plVar8[-2] = lStack_140;
        plStack_150 = (long *)0x0;
        plStack_148 = (long *)0x0;
        lStack_140 = 0;
        uVar21 = (long)plVar10 + (0xc0 - (long)plVar14);
        if (0xc0 < (long)uVar21) {
          uVar19 = (uVar21 >> 6) * -0x5555555555555555 - 2 >> 1;
          plVar15 = plVar14 + uVar19 * 0x18;
          lVar13 = plVar10[0x14];
          lVar11 = plVar10[0x15];
          uVar21 = lVar11 - lVar13;
          if (uVar21 < (ulong)(plVar15[0x15] - plVar15[0x14])) {
            plStack_128 = (long *)plVar10[1];
            lStack_130 = *plVar10;
            lStack_118 = plVar10[3];
            lStack_120 = plVar10[2];
            *plVar10 = 0;
            plVar10[1] = 0;
            lStack_108 = plVar10[5];
            lStack_110 = plVar10[4];
            lStack_f8 = plVar10[7];
            lStack_100 = plVar10[6];
            lStack_f0 = plVar10[8];
            lStack_d8 = plVar10[0xb];
            lStack_e0 = plVar10[10];
            lStack_c8 = plVar10[0xd];
            lStack_d0 = plVar10[0xc];
            lStack_b8 = plVar10[0xf];
            lStack_c0 = plVar10[0xe];
            lStack_a8 = plVar10[0x11];
            lStack_b0 = plVar10[0x10];
            lStack_a0 = plVar10[0x12];
            lStack_80 = plVar10[0x16];
            plVar10[0x14] = 0;
            plVar10[0x15] = 0;
            plVar10[0x16] = 0;
            lStack_90 = lVar13;
            lStack_88 = lVar11;
            do {
              plVar17 = plVar15;
              FUN_1094826cc(plVar10,plVar17);
              lVar13 = plVar17[2];
              lVar22 = plVar17[5];
              lVar11 = plVar17[4];
              plVar10[3] = plVar17[3];
              plVar10[2] = lVar13;
              plVar10[5] = lVar22;
              plVar10[4] = lVar11;
              lVar11 = plVar17[7];
              lVar13 = plVar17[6];
              plVar10[8] = plVar17[8];
              plVar10[7] = lVar11;
              plVar10[6] = lVar13;
              lVar23 = plVar17[0xf];
              lVar22 = plVar17[0xe];
              lVar11 = plVar17[0x11];
              lVar13 = plVar17[0x10];
              lVar25 = plVar17[0xd];
              lVar24 = plVar17[0xc];
              plVar10[0x12] = plVar17[0x12];
              plVar10[0xf] = lVar23;
              plVar10[0xe] = lVar22;
              plVar10[0x11] = lVar11;
              plVar10[0x10] = lVar13;
              plVar10[0xd] = lVar25;
              plVar10[0xc] = lVar24;
              lVar13 = plVar17[10];
              plVar10[0xb] = plVar17[0xb];
              plVar10[10] = lVar13;
              FUN_109480644(plVar10 + 0x14,plVar17 + 0x14);
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1 >> 1;
              plVar15 = plVar14 + uVar19 * 0x18;
              plVar10 = plVar17;
            } while (uVar21 < (ulong)(plVar15[0x15] - plVar15[0x14]));
            param_2 = &lStack_130;
            FUN_1094826cc(plVar17);
            plVar17[3] = lStack_118;
            plVar17[2] = lStack_120;
            plVar17[5] = lStack_108;
            plVar17[4] = lStack_110;
            plVar17[7] = lStack_f8;
            plVar17[6] = lStack_100;
            plVar17[8] = lStack_f0;
            plVar17[0x12] = lStack_a0;
            plVar17[0xf] = lStack_b8;
            plVar17[0xe] = lStack_c0;
            plVar17[0x11] = lStack_a8;
            plVar17[0x10] = lStack_b0;
            plVar17[0xd] = lStack_c8;
            plVar17[0xc] = lStack_d0;
            plVar17[0xb] = lStack_d8;
            plVar17[10] = lStack_e0;
            if (plVar17[0x14] != 0) {
              plVar17[0x15] = plVar17[0x14];
              __ZdlPv();
            }
            plVar15 = plStack_128;
            plVar17[0x15] = lStack_88;
            plVar17[0x14] = lStack_90;
            plVar17[0x16] = lStack_80;
            lStack_90 = 0;
            lStack_88 = 0;
            lStack_80 = 0;
            if (plStack_128 != (long *)0x0) {
              plVar10 = plStack_128 + 1;
              do {
                lVar13 = *plVar10;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar7) {
                  *plVar10 = lVar13 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plStack_128 + 0x10))(plStack_128);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            param_1 = plStack_150;
            if (plStack_150 != (long *)0x0) {
              plStack_148 = plStack_150;
              __ZdlPv();
            }
          }
        }
      }
      plVar15 = plStack_1e8;
      if (plStack_1e8 != (long *)0x0) {
        plVar10 = plStack_1e8 + 1;
        do {
          lVar13 = *plVar10;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          param_1 = plVar15;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    plVar8 = plVar8 + -0x18;
    bVar7 = 2 < uVar20;
    uVar20 = uVar20 - 1;
  } while (bVar7);
LAB_109481f08:
  plVar10 = plVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
LAB_109481f40:
  unaff_x22 = plVar17;
  unaff_x21 = plVar15;
  unaff_x20 = plVar14;
  unaff_x19 = plVar10;
  unaff_x30 = FUN_109481f44;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&plStack_220;
  plVar14 = param_1;
  unaff_x29 = puVar1;
code_r0x000109481f44:
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar20 = param_2[0x15] - param_2[0x14];
  plVar15 = plVar14;
  plVar17 = plVar14;
  if ((ulong)(plVar14[0x15] - plVar14[0x14]) < uVar20) {
    plVar10 = param_3;
    if ((uVar20 < (ulong)(param_3[0x15] - param_3[0x14])) ||
       (FUN_109482514(plVar14,param_2), plVar17 = param_2,
       (ulong)(param_2[0x15] - param_2[0x14]) < (ulong)(param_3[0x15] - param_3[0x14]))) {
LAB_109481ff0:
      FUN_109482514(plVar17,plVar10);
      plVar15 = plVar17;
    }
  }
  else if ((uVar20 < (ulong)(param_3[0x15] - param_3[0x14])) &&
          (plVar15 = param_2, FUN_109482514(param_2,param_3), plVar10 = param_2,
          (ulong)(plVar14[0x15] - plVar14[0x14]) < (ulong)(param_2[0x15] - param_2[0x14])))
  goto LAB_109481ff0;
  if ((((ulong)(param_4[0x15] - param_4[0x14]) <= (ulong)(param_3[0x15] - param_3[0x14])) ||
      (plVar15 = param_3, FUN_109482514(param_3,param_4),
      (ulong)(param_3[0x15] - param_3[0x14]) <= (ulong)(param_2[0x15] - param_2[0x14]))) ||
     (plVar15 = param_2, FUN_109482514(param_2,param_3),
     (ulong)(param_2[0x15] - param_2[0x14]) <= (ulong)(plVar14[0x15] - plVar14[0x14]))) {
    return plVar15;
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(code **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
  plVar16 = param_2;
code_r0x000109482514:
  plVar17 = (long *)((long)register0x00000008 + -0x100);
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = plVar14[1];
  lVar13 = *plVar14;
  lVar23 = plVar14[3];
  lVar22 = plVar14[2];
  *plVar14 = 0;
  plVar14[1] = 0;
  *(long *)((long)register0x00000008 + -0xf8) = lVar11;
  *(long *)((long)register0x00000008 + -0x100) = lVar13;
  *(long *)((long)register0x00000008 + -0xe8) = lVar23;
  *(long *)((long)register0x00000008 + -0xf0) = lVar22;
  lVar13 = plVar14[4];
  lVar22 = plVar14[7];
  lVar11 = plVar14[6];
  *(long *)((long)register0x00000008 + -0xd8) = plVar14[5];
  *(long *)((long)register0x00000008 + -0xe0) = lVar13;
  *(long *)((long)register0x00000008 + -200) = lVar22;
  *(long *)((long)register0x00000008 + -0xd0) = lVar11;
  *(long *)((long)register0x00000008 + -0xc0) = plVar14[8];
  lVar13 = plVar14[0xe];
  lVar22 = plVar14[0x11];
  lVar11 = plVar14[0x10];
  *(long *)((long)register0x00000008 + -0x88) = plVar14[0xf];
  *(long *)((long)register0x00000008 + -0x90) = lVar13;
  *(long *)((long)register0x00000008 + -0x78) = lVar22;
  *(long *)((long)register0x00000008 + -0x80) = lVar11;
  *(long *)((long)register0x00000008 + -0x70) = plVar14[0x12];
  lVar22 = plVar14[10];
  lVar11 = plVar14[0xd];
  lVar13 = plVar14[0xc];
  *(long *)((long)register0x00000008 + -0xa8) = plVar14[0xb];
  *(long *)((long)register0x00000008 + -0xb0) = lVar22;
  *(long *)((long)register0x00000008 + -0x98) = lVar11;
  *(long *)((long)register0x00000008 + -0xa0) = lVar13;
  plVar10 = plVar14 + 0x14;
  lVar13 = *plVar10;
  *(long *)((long)register0x00000008 + -0x58) = plVar14[0x15];
  *(long *)((long)register0x00000008 + -0x60) = lVar13;
  *(long *)((long)register0x00000008 + -0x50) = plVar14[0x16];
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  *plVar10 = 0;
  FUN_1094826cc();
  lVar13 = plVar16[2];
  lVar22 = plVar16[5];
  lVar11 = plVar16[4];
  plVar14[3] = plVar16[3];
  plVar14[2] = lVar13;
  plVar14[5] = lVar22;
  plVar14[4] = lVar11;
  lVar11 = plVar16[7];
  lVar13 = plVar16[6];
  plVar14[8] = plVar16[8];
  plVar14[7] = lVar11;
  plVar14[6] = lVar13;
  lVar23 = plVar16[0xf];
  lVar22 = plVar16[0xe];
  lVar11 = plVar16[0x11];
  lVar13 = plVar16[0x10];
  lVar25 = plVar16[0xd];
  lVar24 = plVar16[0xc];
  plVar14[0x12] = plVar16[0x12];
  plVar14[0xf] = lVar23;
  plVar14[0xe] = lVar22;
  plVar14[0x11] = lVar11;
  plVar14[0x10] = lVar13;
  plVar14[0xd] = lVar25;
  plVar14[0xc] = lVar24;
  lVar13 = plVar16[10];
  plVar14[0xb] = plVar16[0xb];
  plVar14[10] = lVar13;
  FUN_109480644(plVar10,plVar16 + 0x14);
  FUN_1094826cc(plVar16);
  lVar13 = *(long *)((long)register0x00000008 + -0xf0);
  lVar22 = *(long *)((long)register0x00000008 + -0xd8);
  lVar11 = *(long *)((long)register0x00000008 + -0xe0);
  plVar16[3] = *(long *)((long)register0x00000008 + -0xe8);
  plVar16[2] = lVar13;
  plVar16[5] = lVar22;
  plVar16[4] = lVar11;
  lVar13 = *(long *)((long)register0x00000008 + -0xd0);
  plVar16[7] = *(long *)((long)register0x00000008 + -200);
  plVar16[6] = lVar13;
  plVar16[8] = *(long *)((long)register0x00000008 + -0xc0);
  lVar13 = *(long *)((long)register0x00000008 + -0x90);
  lVar22 = *(long *)((long)register0x00000008 + -0x78);
  lVar11 = *(long *)((long)register0x00000008 + -0x80);
  plVar16[0xf] = *(long *)((long)register0x00000008 + -0x88);
  plVar16[0xe] = lVar13;
  plVar16[0x11] = lVar22;
  plVar16[0x10] = lVar11;
  plVar16[0x12] = *(long *)((long)register0x00000008 + -0x70);
  lVar22 = *(long *)((long)register0x00000008 + -0xb0);
  lVar11 = *(long *)((long)register0x00000008 + -0x98);
  lVar13 = *(long *)((long)register0x00000008 + -0xa0);
  plVar16[0xb] = *(long *)((long)register0x00000008 + -0xa8);
  plVar16[10] = lVar22;
  plVar16[0xd] = lVar11;
  plVar16[0xc] = lVar13;
  plVar15 = (long *)plVar16[0x14];
  if (plVar15 != (long *)0x0) {
    plVar16[0x15] = (long)plVar15;
    __ZdlPv();
  }
  lVar13 = *(long *)((long)register0x00000008 + -0x60);
  plVar16[0x15] = *(long *)((long)register0x00000008 + -0x58);
  plVar16[0x14] = lVar13;
  plVar16[0x16] = *(long *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  plVar14 = *(long **)((long)register0x00000008 + -0xf8);
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 1;
    do {
      lVar13 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      plVar15 = plVar14;
      (**(code **)(*plVar14 + 0x10))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
      {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar14);
        return plVar14;
      }
      goto LAB_1094826c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
    return plVar15;
  }
LAB_1094826c8:
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x120) = plVar10;
  *(long **)((long)register0x00000008 + -0x118) = plVar14;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x108) = FUN_1094826cc;
  lVar11 = plVar17[1];
  lVar13 = *plVar17;
  *plVar17 = 0;
  plVar17[1] = 0;
  plVar17 = (long *)plVar15[1];
  plVar15[1] = lVar11;
  *plVar15 = lVar13;
  if (plVar17 != (long *)0x0) {
    plVar14 = plVar17 + 1;
    do {
      lVar13 = *plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  return plVar15;
}



/* Entry: 109481f44; end: 10948207b;  */

long * FUN_109481f44(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_38;
  
  uVar6 = param_2[0x15] - param_2[0x14];
  plVar4 = param_1;
  plVar8 = param_1;
  if ((ulong)(param_1[0x15] - param_1[0x14]) < uVar6) {
    plVar5 = param_3;
    if ((uVar6 < (ulong)(param_3[0x15] - param_3[0x14])) ||
       (FUN_109482514(param_1,param_2), plVar8 = param_2,
       (ulong)(param_2[0x15] - param_2[0x14]) < (ulong)(param_3[0x15] - param_3[0x14]))) {
LAB_109481ff0:
      FUN_109482514(plVar8,plVar5);
      plVar4 = plVar8;
    }
  }
  else if ((uVar6 < (ulong)(param_3[0x15] - param_3[0x14])) &&
          (plVar4 = param_2, FUN_109482514(param_2,param_3), plVar5 = param_2,
          (ulong)(param_1[0x15] - param_1[0x14]) < (ulong)(param_2[0x15] - param_2[0x14])))
  goto LAB_109481ff0;
  if ((((ulong)(*(long *)(param_4 + 0xa8) - *(long *)(param_4 + 0xa0)) <=
        (ulong)(param_3[0x15] - param_3[0x14])) ||
      (plVar4 = param_3, FUN_109482514(param_3,param_4),
      (ulong)(param_3[0x15] - param_3[0x14]) <= (ulong)(param_2[0x15] - param_2[0x14]))) ||
     (plVar4 = param_2, FUN_109482514(param_2,param_3),
     (ulong)(param_2[0x15] - param_2[0x14]) <= (ulong)(param_1[0x15] - param_1[0x14]))) {
    return plVar4;
  }
  plVar8 = &lStack_100;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_f8 = (long *)param_1[1];
  lStack_100 = *param_1;
  lStack_e8 = param_1[3];
  lStack_f0 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_d8 = param_1[5];
  lStack_e0 = param_1[4];
  lStack_c8 = param_1[7];
  lStack_d0 = param_1[6];
  lStack_c0 = param_1[8];
  lStack_88 = param_1[0xf];
  lStack_90 = param_1[0xe];
  lStack_78 = param_1[0x11];
  lStack_80 = param_1[0x10];
  lStack_70 = param_1[0x12];
  lStack_a8 = param_1[0xb];
  lStack_b0 = param_1[10];
  lStack_98 = param_1[0xd];
  lStack_a0 = param_1[0xc];
  plVar4 = param_1 + 0x14;
  lStack_58 = param_1[0x15];
  lStack_60 = *plVar4;
  lStack_50 = param_1[0x16];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *plVar4 = 0;
  FUN_1094826cc();
  lVar7 = param_2[2];
  lVar10 = param_2[5];
  lVar9 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = lVar7;
  param_1[5] = lVar10;
  param_1[4] = lVar9;
  lVar9 = param_2[7];
  lVar7 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = lVar9;
  param_1[6] = lVar7;
  lVar11 = param_2[0xf];
  lVar10 = param_2[0xe];
  lVar9 = param_2[0x11];
  lVar7 = param_2[0x10];
  lVar13 = param_2[0xd];
  lVar12 = param_2[0xc];
  param_1[0x12] = param_2[0x12];
  param_1[0xf] = lVar11;
  param_1[0xe] = lVar10;
  param_1[0x11] = lVar9;
  param_1[0x10] = lVar7;
  param_1[0xd] = lVar13;
  param_1[0xc] = lVar12;
  lVar7 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar7;
  FUN_109480644(plVar4,param_2 + 0x14);
  FUN_1094826cc(param_2);
  param_2[3] = lStack_e8;
  param_2[2] = lStack_f0;
  param_2[5] = lStack_d8;
  param_2[4] = lStack_e0;
  param_2[7] = lStack_c8;
  param_2[6] = lStack_d0;
  param_2[8] = lStack_c0;
  param_2[0xf] = lStack_88;
  param_2[0xe] = lStack_90;
  param_2[0x11] = lStack_78;
  param_2[0x10] = lStack_80;
  param_2[0x12] = lStack_70;
  param_2[0xb] = lStack_a8;
  param_2[10] = lStack_b0;
  param_2[0xd] = lStack_98;
  param_2[0xc] = lStack_a0;
  plVar4 = (long *)param_2[0x14];
  if (plVar4 != (long *)0x0) {
    param_2[0x15] = (long)plVar4;
    __ZdlPv();
  }
  plVar5 = plStack_f8;
  param_2[0x15] = lStack_58;
  param_2[0x14] = lStack_60;
  param_2[0x16] = lStack_50;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_60 = 0;
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      plVar4 = plStack_f8;
      (**(code **)(*plStack_f8 + 0x10))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return plVar5;
      }
      goto LAB_1094826c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
LAB_1094826c8:
  ___stack_chk_fail();
  lVar9 = plVar8[1];
  lVar7 = *plVar8;
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8 = (long *)plVar4[1];
  plVar4[1] = lVar9;
  *plVar4 = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar5 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar4;
}



/* Entry: 10948207c; end: 109482513;  */

long * FUN_10948207c(ulong param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x21;
  ulong unaff_x22;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_230;
  long *plStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_168;
  ulong uStack_160;
  long *plStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ((long)((long)param_2 - param_1) >> 6) * -0x5555555555555555;
  uVar12 = param_1;
  plVar11 = param_2;
  plVar4 = unaff_x21;
  if ((long)uVar6 < 3) {
    if (1 < uVar6) {
      if (uVar6 == 2) {
        if ((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0)) <
            (ulong)(param_2[-3] - param_2[-4])) {
          plVar4 = param_2 + -0x18;
          goto LAB_1094822c4;
        }
      }
      else {
LAB_1094821d8:
        plVar4 = (long *)(param_1 + 0x180);
        uVar6 = *(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160);
        uVar7 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
        if ((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0)) < uVar6) {
          plVar11 = plVar4;
          if (uVar7 <= uVar6) {
            plVar11 = (long *)(param_1 + 0xc0);
            FUN_109482514(param_1);
            if ((ulong)(*(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220)) <=
                (ulong)(*(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160)))
            goto LAB_109482300;
            uVar12 = param_1 + 0xc0;
            plVar11 = plVar4;
          }
LAB_1094822fc:
          FUN_109482514(uVar12);
        }
        else if ((uVar6 < uVar7) &&
                (plVar11 = plVar4, FUN_109482514(param_1 + 0xc0),
                (ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0)) <
                (ulong)(*(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160)))) {
          plVar11 = (long *)(param_1 + 0xc0);
          goto LAB_1094822fc;
        }
LAB_109482300:
        if ((long *)(param_1 + 0x240) != param_2) {
          lVar9 = 0;
          iVar13 = 0;
          plVar3 = (long *)(param_1 + 0x240);
          do {
            lVar8 = plVar3[0x14];
            lVar15 = plVar3[0x15];
            uVar12 = lVar15 - lVar8;
            unaff_x22 = uVar12;
            if ((ulong)(plVar4[0x15] - plVar4[0x14]) < uVar12) {
              plStack_128 = (long *)plVar3[1];
              lStack_130 = *plVar3;
              lStack_118 = plVar3[3];
              lStack_120 = plVar3[2];
              *plVar3 = 0;
              plVar3[1] = 0;
              lStack_108 = plVar3[5];
              lStack_110 = plVar3[4];
              lStack_f8 = plVar3[7];
              lStack_100 = plVar3[6];
              lStack_f0 = plVar3[8];
              lStack_b8 = plVar3[0xf];
              lStack_c0 = plVar3[0xe];
              lStack_a8 = plVar3[0x11];
              lStack_b0 = plVar3[0x10];
              lStack_a0 = plVar3[0x12];
              lStack_d8 = plVar3[0xb];
              lStack_e0 = plVar3[10];
              lStack_c8 = plVar3[0xd];
              lStack_d0 = plVar3[0xc];
              lStack_80 = plVar3[0x16];
              plVar3[0x14] = 0;
              plVar3[0x15] = 0;
              plVar3[0x16] = 0;
              lVar14 = lVar9;
              lStack_90 = lVar8;
              lStack_88 = lVar15;
              do {
                lVar8 = param_1 + lVar14;
                FUN_1094826cc(lVar8 + 0x240,lVar8 + 0x180);
                *(undefined8 *)(lVar8 + 600) = *(undefined8 *)(lVar8 + 0x198);
                *(undefined8 *)(lVar8 + 0x250) = *(undefined8 *)(lVar8 + 400);
                *(undefined8 *)(lVar8 + 0x268) = *(undefined8 *)(lVar8 + 0x1a8);
                *(undefined8 *)(lVar8 + 0x260) = *(undefined8 *)(lVar8 + 0x1a0);
                *(undefined8 *)(lVar8 + 0x278) = *(undefined8 *)(lVar8 + 0x1b8);
                *(undefined8 *)(lVar8 + 0x270) = *(undefined8 *)(lVar8 + 0x1b0);
                *(undefined8 *)(lVar8 + 0x280) = *(undefined8 *)(lVar8 + 0x1c0);
                *(undefined8 *)(lVar8 + 0x2b8) = *(undefined8 *)(lVar8 + 0x1f8);
                *(undefined8 *)(lVar8 + 0x2b0) = *(undefined8 *)(lVar8 + 0x1f0);
                *(undefined8 *)(lVar8 + 0x2c8) = *(undefined8 *)(lVar8 + 0x208);
                *(undefined8 *)(lVar8 + 0x2c0) = *(undefined8 *)(lVar8 + 0x200);
                *(undefined8 *)(lVar8 + 0x2d0) = *(undefined8 *)(lVar8 + 0x210);
                plVar4 = (long *)(lVar8 + 0x220);
                *(undefined8 *)(lVar8 + 0x298) = *(undefined8 *)(lVar8 + 0x1d8);
                *(undefined8 *)(lVar8 + 0x290) = *(undefined8 *)(lVar8 + 0x1d0);
                *(undefined8 *)(lVar8 + 0x2a8) = *(undefined8 *)(lVar8 + 0x1e8);
                *(undefined8 *)(lVar8 + 0x2a0) = *(undefined8 *)(lVar8 + 0x1e0);
                FUN_109480644(lVar8 + 0x2e0,plVar4);
                unaff_x22 = param_1;
                if (lVar14 == -0x180) goto LAB_109482400;
                lVar14 = lVar14 + -0xc0;
              } while ((ulong)(*(long *)(lVar8 + 0x168) - *(long *)(lVar8 + 0x160)) < uVar12);
              unaff_x22 = param_1 + lVar14 + 0x240;
LAB_109482400:
              plVar11 = &lStack_130;
              FUN_1094826cc(unaff_x22);
              *(long *)(lVar8 + 0x198) = lStack_118;
              *(long *)(lVar8 + 400) = lStack_120;
              *(long *)(lVar8 + 0x1a8) = lStack_108;
              *(long *)(lVar8 + 0x1a0) = lStack_110;
              *(long *)(lVar8 + 0x1b8) = lStack_f8;
              *(long *)(lVar8 + 0x1b0) = lStack_100;
              *(long *)(lVar8 + 0x1c0) = lStack_f0;
              *(long *)(lVar8 + 0x1f8) = lStack_b8;
              *(long *)(lVar8 + 0x1f0) = lStack_c0;
              *(long *)(lVar8 + 0x208) = lStack_a8;
              *(long *)(lVar8 + 0x200) = lStack_b0;
              *(long *)(lVar8 + 0x210) = lStack_a0;
              *(long *)(lVar8 + 0x1d8) = lStack_d8;
              *(long *)(lVar8 + 0x1d0) = lStack_e0;
              *(long *)(lVar8 + 0x1e8) = lStack_c8;
              *(long *)(lVar8 + 0x1e0) = lStack_d0;
              if (*(long *)(lVar8 + 0x220) != 0) {
                *(long *)(unaff_x22 + 0xa8) = *(long *)(lVar8 + 0x220);
                __ZdlPv();
                *plVar4 = 0;
                *(undefined8 *)(lVar8 + 0x228) = 0;
                *(undefined8 *)(lVar8 + 0x230) = 0;
              }
              plVar5 = plStack_128;
              *plVar4 = lStack_90;
              *(long *)(unaff_x22 + 0xb0) = lStack_80;
              *(long *)(unaff_x22 + 0xa8) = lStack_88;
              lStack_88 = 0;
              lStack_80 = 0;
              lStack_90 = 0;
              if (plStack_128 != (long *)0x0) {
                plVar10 = plStack_128 + 1;
                do {
                  lVar8 = *plVar10;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar2) {
                    *plVar10 = lVar8 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar8 == 0) {
                  (**(code **)(*plStack_128 + 0x10))(plStack_128);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                }
              }
              iVar13 = iVar13 + 1;
              if (iVar13 == 8) {
                plVar3 = (long *)(ulong)(plVar3 + 0x18 == param_2);
                goto LAB_1094824c8;
              }
            }
            plVar5 = plVar3 + 0x18;
            lVar9 = lVar9 + 0xc0;
            plVar4 = plVar3;
            plVar3 = plVar5;
          } while (plVar5 != param_2);
        }
      }
    }
  }
  else if (uVar6 == 3) {
    plVar4 = param_2 + -0x18;
    uVar6 = *(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160);
    unaff_x21 = plVar4;
    if ((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0)) < uVar6) {
      if ((ulong)(param_2[-3] - param_2[-4]) <= uVar6) {
        plVar11 = (long *)(param_1 + 0xc0);
        FUN_109482514(param_1);
        if ((ulong)(param_2[-3] - param_2[-4]) <=
            (ulong)(*(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160))) goto LAB_1094824c4;
        uVar12 = param_1 + 0xc0;
      }
LAB_1094822c4:
      FUN_109482514(uVar12);
      plVar11 = plVar4;
      plVar4 = unaff_x21;
    }
    else if (uVar6 < (ulong)(param_2[-3] - param_2[-4])) {
LAB_109482238:
      FUN_109482514(param_1 + 0xc0);
      plVar11 = plVar4;
      plVar4 = unaff_x21;
      if ((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0)) <
          (ulong)(*(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160))) {
        plVar4 = (long *)(param_1 + 0xc0);
        goto LAB_1094822c4;
      }
    }
  }
  else if (uVar6 == 4) {
    plVar11 = (long *)(param_1 + 0xc0);
    FUN_109481f44(param_1,plVar11,param_1 + 0x180,param_2 + -0x18);
  }
  else {
    if (uVar6 != 5) goto LAB_1094821d8;
    plVar11 = (long *)(param_1 + 0xc0);
    FUN_109481f44(param_1,plVar11,param_1 + 0x180,param_1 + 0x240);
    if ((ulong)(*(long *)(param_1 + 0x2e8) - *(long *)(param_1 + 0x2e0)) <
        (ulong)(param_2[-3] - param_2[-4])) {
      plVar11 = param_2 + -0x18;
      FUN_109482514(param_1 + 0x240);
      if ((ulong)(*(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220)) <
          (ulong)(*(long *)(param_1 + 0x2e8) - *(long *)(param_1 + 0x2e0))) {
        plVar11 = (long *)(param_1 + 0x240);
        FUN_109482514(param_1 + 0x180);
        if ((ulong)(*(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160)) <
            (ulong)(*(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220))) {
          plVar4 = (long *)(param_1 + 0x180);
          goto LAB_109482238;
        }
      }
    }
  }
LAB_1094824c4:
  plVar3 = (long *)0x1;
LAB_1094824c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar3;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_230;
  pcStack_138 = FUN_109482514;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_228 = (long *)plVar3[1];
  lStack_230 = *plVar3;
  lStack_218 = plVar3[3];
  lStack_220 = plVar3[2];
  *plVar3 = 0;
  plVar3[1] = 0;
  lStack_208 = plVar3[5];
  lStack_210 = plVar3[4];
  lStack_1f8 = plVar3[7];
  lStack_200 = plVar3[6];
  lStack_1f0 = plVar3[8];
  lStack_1b8 = plVar3[0xf];
  lStack_1c0 = plVar3[0xe];
  lStack_1a8 = plVar3[0x11];
  lStack_1b0 = plVar3[0x10];
  lStack_1a0 = plVar3[0x12];
  lStack_1d8 = plVar3[0xb];
  lStack_1e0 = plVar3[10];
  lStack_1c8 = plVar3[0xd];
  lStack_1d0 = plVar3[0xc];
  plVar10 = plVar3 + 0x14;
  lStack_188 = plVar3[0x15];
  lStack_190 = *plVar10;
  lStack_180 = plVar3[0x16];
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  *plVar10 = 0;
  uStack_160 = unaff_x22;
  plStack_158 = plVar4;
  plStack_150 = param_2;
  uStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_1094826cc();
  lVar9 = plVar11[2];
  lVar15 = plVar11[5];
  lVar8 = plVar11[4];
  plVar3[3] = plVar11[3];
  plVar3[2] = lVar9;
  plVar3[5] = lVar15;
  plVar3[4] = lVar8;
  lVar8 = plVar11[7];
  lVar9 = plVar11[6];
  plVar3[8] = plVar11[8];
  plVar3[7] = lVar8;
  plVar3[6] = lVar9;
  lVar14 = plVar11[0xf];
  lVar15 = plVar11[0xe];
  lVar8 = plVar11[0x11];
  lVar9 = plVar11[0x10];
  lVar17 = plVar11[0xd];
  lVar16 = plVar11[0xc];
  plVar3[0x12] = plVar11[0x12];
  plVar3[0xf] = lVar14;
  plVar3[0xe] = lVar15;
  plVar3[0x11] = lVar8;
  plVar3[0x10] = lVar9;
  plVar3[0xd] = lVar17;
  plVar3[0xc] = lVar16;
  lVar9 = plVar11[10];
  plVar3[0xb] = plVar11[0xb];
  plVar3[10] = lVar9;
  FUN_109480644(plVar10,plVar11 + 0x14);
  FUN_1094826cc(plVar11);
  plVar11[3] = lStack_218;
  plVar11[2] = lStack_220;
  plVar11[5] = lStack_208;
  plVar11[4] = lStack_210;
  plVar11[7] = lStack_1f8;
  plVar11[6] = lStack_200;
  plVar11[8] = lStack_1f0;
  plVar11[0xf] = lStack_1b8;
  plVar11[0xe] = lStack_1c0;
  plVar11[0x11] = lStack_1a8;
  plVar11[0x10] = lStack_1b0;
  plVar11[0x12] = lStack_1a0;
  plVar11[0xb] = lStack_1d8;
  plVar11[10] = lStack_1e0;
  plVar11[0xd] = lStack_1c8;
  plVar11[0xc] = lStack_1d0;
  plVar4 = (long *)plVar11[0x14];
  if (plVar4 != (long *)0x0) {
    plVar11[0x15] = (long)plVar4;
    __ZdlPv();
  }
  plVar3 = plStack_228;
  plVar11[0x15] = lStack_188;
  plVar11[0x14] = lStack_190;
  plVar11[0x16] = lStack_180;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_190 = 0;
  if (plStack_228 != (long *)0x0) {
    plVar11 = plStack_228 + 1;
    do {
      lVar9 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      plVar4 = plStack_228;
      (**(code **)(*plStack_228 + 0x10))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return plVar3;
      }
      goto LAB_1094826c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return plVar4;
  }
LAB_1094826c8:
  ___stack_chk_fail();
  lVar8 = plVar5[1];
  lVar9 = *plVar5;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar11 = (long *)plVar4[1];
  plVar4[1] = lVar8;
  *plVar4 = lVar9;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return plVar4;
}



/* Entry: 109482514; end: 1094826cb;  */

long * FUN_109482514(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_38;
  
  plVar7 = &lStack_100;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_f8 = (long *)param_1[1];
  lStack_100 = *param_1;
  lStack_e8 = param_1[3];
  lStack_f0 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_d8 = param_1[5];
  lStack_e0 = param_1[4];
  lStack_c8 = param_1[7];
  lStack_d0 = param_1[6];
  lStack_c0 = param_1[8];
  lStack_88 = param_1[0xf];
  lStack_90 = param_1[0xe];
  lStack_78 = param_1[0x11];
  lStack_80 = param_1[0x10];
  lStack_70 = param_1[0x12];
  lStack_a8 = param_1[0xb];
  lStack_b0 = param_1[10];
  lStack_98 = param_1[0xd];
  lStack_a0 = param_1[0xc];
  plVar4 = param_1 + 0x14;
  lStack_58 = param_1[0x15];
  lStack_60 = *plVar4;
  lStack_50 = param_1[0x16];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *plVar4 = 0;
  FUN_1094826cc();
  lVar6 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x20);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[2] = lVar6;
  param_1[5] = lVar9;
  param_1[4] = lVar8;
  lVar8 = *(long *)(param_2 + 0x38);
  lVar6 = *(long *)(param_2 + 0x30);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[7] = lVar8;
  param_1[6] = lVar6;
  lVar10 = *(long *)(param_2 + 0x78);
  lVar9 = *(long *)(param_2 + 0x70);
  lVar8 = *(long *)(param_2 + 0x88);
  lVar6 = *(long *)(param_2 + 0x80);
  lVar12 = *(long *)(param_2 + 0x68);
  lVar11 = *(long *)(param_2 + 0x60);
  param_1[0x12] = *(long *)(param_2 + 0x90);
  param_1[0xf] = lVar10;
  param_1[0xe] = lVar9;
  param_1[0x11] = lVar8;
  param_1[0x10] = lVar6;
  param_1[0xd] = lVar12;
  param_1[0xc] = lVar11;
  lVar6 = *(long *)(param_2 + 0x50);
  param_1[0xb] = *(long *)(param_2 + 0x58);
  param_1[10] = lVar6;
  FUN_109480644(plVar4,param_2 + 0xa0);
  FUN_1094826cc(param_2);
  *(long *)(param_2 + 0x18) = lStack_e8;
  *(long *)(param_2 + 0x10) = lStack_f0;
  *(long *)(param_2 + 0x28) = lStack_d8;
  *(long *)(param_2 + 0x20) = lStack_e0;
  *(long *)(param_2 + 0x38) = lStack_c8;
  *(long *)(param_2 + 0x30) = lStack_d0;
  *(long *)(param_2 + 0x40) = lStack_c0;
  *(long *)(param_2 + 0x78) = lStack_88;
  *(long *)(param_2 + 0x70) = lStack_90;
  *(long *)(param_2 + 0x88) = lStack_78;
  *(long *)(param_2 + 0x80) = lStack_80;
  *(long *)(param_2 + 0x90) = lStack_70;
  *(long *)(param_2 + 0x58) = lStack_a8;
  *(long *)(param_2 + 0x50) = lStack_b0;
  *(long *)(param_2 + 0x68) = lStack_98;
  *(long *)(param_2 + 0x60) = lStack_a0;
  plVar4 = *(long **)(param_2 + 0xa0);
  if (plVar4 != (long *)0x0) {
    *(long **)(param_2 + 0xa8) = plVar4;
    __ZdlPv();
  }
  plVar5 = plStack_f8;
  *(long *)(param_2 + 0xa8) = lStack_58;
  *(long *)(param_2 + 0xa0) = lStack_60;
  *(long *)(param_2 + 0xb0) = lStack_50;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_60 = 0;
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
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
      plVar4 = plStack_f8;
      (**(code **)(*plStack_f8 + 0x10))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return plVar5;
      }
      goto LAB_1094826c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
LAB_1094826c8:
  ___stack_chk_fail();
  lVar8 = plVar7[1];
  lVar6 = *plVar7;
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7 = (long *)plVar4[1];
  plVar4[1] = lVar8;
  *plVar4 = lVar6;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return plVar4;
}



/* Entry: 1094826cc; end: 10948272f;  */

undefined8 * FUN_1094826cc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109482730; end: 10948289b;  */

void FUN_109482730(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x19;
  long *unaff_x20;
  long lVar8;
  long *plVar9;
  long lVar10;
  long alStack_80 [3];
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1;
  plVar9 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar6 = (long *)param_2[3];
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (plVar1 == param_1) {
      if (plVar6 == param_2) {
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
      plVar1 = plVar2;
    }
    else if (plVar6 == param_2) {
      plVar9 = param_1;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar1 = (long *)param_2[3];
      (**(code **)(*plVar1 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar6;
      param_2[3] = (long)plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar9 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar6 = alStack_80;
  pcStack_48 = FUN_10948289c;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar9;
  plStack_60 = unaff_x20;
  plStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  if (plVar9 != plVar1) {
    plVar3 = (long *)plVar1[3];
    plVar7 = (long *)plVar9[3];
    if (plVar3 == plVar1) {
      if (plVar7 == plVar9) {
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_80);
        (**(code **)(*(long *)plVar1[3] + 0x20))();
        plVar1[3] = 0;
        (**(code **)(*(long *)plVar9[3] + 0x18))((long *)plVar9[3],plVar1);
        (**(code **)(*(long *)plVar9[3] + 0x20))();
        plVar9[3] = 0;
        plVar1[3] = (long)plVar1;
        (**(code **)(alStack_80[0] + 0x18))(alStack_80);
        (**(code **)(alStack_80[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        plVar6 = (long *)plVar1[3];
        (**(code **)(*plVar6 + 0x20))();
        plVar1[3] = plVar9[3];
      }
      plVar9[3] = (long)plVar9;
      plVar1 = plVar6;
    }
    else if (plVar7 == plVar9) {
      plVar2 = plVar1;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar6 = (long *)plVar9[3];
      (**(code **)(*plVar6 + 0x20))();
      plVar9[3] = plVar1[3];
      plVar1[3] = (long)plVar1;
      plVar1 = plVar6;
    }
    else {
      plVar1[3] = (long)plVar7;
      plVar9[3] = (long)plVar3;
      plVar1 = plVar3;
    }
  }
  iVar5 = (int)plVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar9 = (long *)*plVar1;
  lVar10 = *plVar9;
  if (lVar10 != 0) {
    lVar8 = plVar9[1];
    lVar4 = lVar10;
    if (lVar8 != lVar10) {
      do {
        lVar8 = lVar8 + -0xc0;
        FUN_1094809a4(lVar8);
      } while (lVar8 != lVar10);
      lVar4 = *(long *)*plVar1;
    }
    plVar9[1] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar4);
    return;
  }
  return;
}



/* Entry: 10948289c; end: 109482a07;  */

void FUN_10948289c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_2;
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
      plVar7 = param_1;
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
  iVar4 = (int)plVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar7 = (long *)*param_1;
  lVar8 = *plVar7;
  if (lVar8 != 0) {
    lVar6 = plVar7[1];
    lVar3 = lVar8;
    if (lVar6 != lVar8) {
      do {
        lVar6 = lVar6 + -0xc0;
        FUN_1094809a4(lVar6);
      } while (lVar6 != lVar8);
      lVar3 = *(long *)*param_1;
    }
    plVar7[1] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar3);
    return;
  }
  return;
}



/* Entry: 109482a08; end: 109482a77;  */

void FUN_109482a08(long *param_1)

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
        lVar2 = lVar2 + -0xc0;
        FUN_1094809a4(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar1);
    return;
  }
  return;
}


