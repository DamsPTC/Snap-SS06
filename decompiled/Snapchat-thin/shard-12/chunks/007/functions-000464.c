/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1095a4a78; end: 1095a4adb;  */

long FUN_1095a4a78(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 1095a4adc; end: 1095a4b1b;  */

long FUN_1095a4adc(long param_1)

{
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1095a4b1c; end: 1095a4c0b;  */

undefined8 FUN_1095a4b1c(undefined8 param_1)

{
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined2 uStack_3b;
  char cStack_39;
  undefined5 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  uStack_90 = 0x3e99999a;
  uStack_8c = 1;
  func_0x000107c31940(auStack_88,&UNK_10f57511e);
  uStack_70 = 0x40;
  uStack_6c = 0;
  uStack_68 = 0x3f800000;
  uStack_64 = 0x101;
  uStack_62 = 0;
  uStack_60 = 0x80;
  uStack_5c = 0;
  uStack_58 = 0x3dcccccd;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_3b = 0;
  cStack_39 = '\0';
  uStack_38 = 0;
  uStack_30 = 0x300000168;
  FUN_1095b18cc(param_1,&uStack_21,&uStack_90);
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  return param_1;
}



/* Entry: 1095a4c0c; end: 1095a6adb;  */

/* WARNING: Removing unreachable block (ram,0x0001095a6658) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1095a4c0c(long *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *******pppppppuVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  code *pcVar13;
  long *plVar14;
  long *******ppppppplVar15;
  ulong uVar16;
  long *****ppppplVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long *****ppppplVar23;
  undefined8 *puVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long ***ppplVar29;
  long *****ppppplVar30;
  int iVar31;
  long ***ppplVar32;
  long ***ppplVar33;
  byte bVar34;
  uint uVar35;
  ulong uVar36;
  long *****ppppplVar37;
  long *plVar38;
  long *plVar39;
  long ******pppppplVar40;
  ulong uVar41;
  long *****ppppplVar42;
  ulong uVar43;
  float fVar44;
  long ******pppppplVar45;
  undefined8 uVar46;
  long ******pppppplVar47;
  long *****ppppplVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  byte bStack_39c;
  undefined8 *puStack_398;
  long ***ppplStack_390;
  undefined8 uStack_388;
  long *******ppppppplStack_380;
  long ******pppppplStack_378;
  undefined7 uStack_370;
  char cStack_369;
  long *****ppppplStack_368;
  ulong uStack_360;
  long lStack_358;
  undefined8 auStack_350 [2];
  char cStack_339;
  undefined8 *******pppppppuStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long *******ppppppplStack_318;
  long ******pppppplStack_310;
  long *****ppppplStack_308;
  int iStack_300;
  uint uStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  long *****ppppplStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long ******pppppplStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  long *plStack_250;
  undefined1 auStack_248 [56];
  long *******ppppppplStack_210;
  long *****ppppplStack_208;
  long ******pppppplStack_200;
  long *****ppppplStack_1f8;
  long *******ppppppplStack_1d0;
  long ******pppppplStack_1c8;
  long *****ppppplStack_1c0;
  undefined8 uStack_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long *****ppppplStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined1 auStack_170 [24];
  undefined4 uStack_158;
  undefined1 auStack_150 [24];
  undefined4 uStack_138;
  undefined1 auStack_130 [24];
  undefined4 uStack_118;
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *param_2;
  *(undefined1 *)((long)param_1 + 0x15c) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x2b) = uVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x2c,param_2 + 2);
  uVar46 = *(undefined8 *)((long)param_2 + 0x36);
  uVar49 = *(undefined8 *)((long)param_2 + 0x2e);
  lVar26 = *(long *)(param_2 + 8);
  param_1[0x30] = *(long *)(param_2 + 10);
  param_1[0x2f] = lVar26;
  *(undefined8 *)((long)param_1 + 0x18e) = uVar46;
  *(undefined8 *)((long)param_1 + 0x186) = uVar49;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x33,param_2 + 0x10);
  lVar26 = *(long *)(param_2 + 0x16);
  param_1[0x37] = *(long *)(param_2 + 0x18);
  param_1[0x36] = lVar26;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  FUN_10938cda4(param_1 + 0x15,0);
  plVar14 = (long *)param_1[0x92];
  param_1[0x92] = 0;
  if (plVar14 != (long *)0x0) {
    plVar39 = plVar14 + 1;
    do {
      lVar26 = *plVar39;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar11) {
        *plVar39 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  func_0x0001095ae004(param_1 + 0xcf,0);
  *(undefined2 *)(param_1 + 0xce) = 0x100;
  func_0x0001095ae04c(param_1 + 8,0);
  plVar14 = param_1 + 0xb5;
  func_0x0001094b6d08(plVar14);
  plVar39 = param_1 + 0xba;
  func_0x0001094b6d08(plVar39);
  pppppplVar40 = (long ******)(param_1 + 0xbf);
  if (param_1[0xc2] != 0) {
    func_0x0001095a2ba0(pppppplVar40,param_1[0xc1]);
    param_1[0xc1] = 0;
    lVar26 = param_1[0xc0];
    if (lVar26 != 0) {
      lVar27 = 0;
      do {
        (*pppppplVar40)[lVar27] = (long ****)0x0;
        lVar27 = lVar27 + 1;
      } while (lVar26 != lVar27);
    }
    param_1[0xc2] = 0;
  }
  FUN_1095a0258(auStack_248,param_3,param_4);
  FUN_1095a0328(&puStack_258,auStack_248);
  if (puStack_258 == (undefined8 *)0x0) {
    FUN_10937e740(&ppppppplStack_1d0,&UNK_10f5751a6);
    FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f500dfc,0x1b3,&ppppppplStack_1d0);
    if ((long)ppppplStack_1c0 < 0) {
      __ZdlPv(ppppppplStack_1d0);
    }
    *(undefined4 *)((long)param_1 + 300) = 1;
    goto LAB_1095a6480;
  }
  if (param_1 + 0xc4 != puStack_258 + 0x15) {
    FUN_10928555c();
  }
  if (param_1 + 199 != puStack_258 + 0x18) {
    FUN_10928555c();
  }
  if (*(char *)((long)puStack_258 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_270,*puStack_258,puStack_258[1]);
  }
  else {
    uStack_268 = puStack_258[1];
    uStack_270 = *puStack_258;
    lStack_260 = puStack_258[2];
  }
  lVar26 = param_1[0xc5];
  lVar27 = param_1[0xc4];
  uVar35 = *(uint *)((long)param_1 + 0x1bc);
  uVar6 = *(undefined4 *)(puStack_258 + 0xd);
  uVar50 = *(undefined4 *)(puStack_258 + 0xe);
  puStack_288 = (undefined8 *)0x0;
  puStack_280 = (undefined8 *)0x0;
  uStack_278 = 0;
  FUN_109285684(&puStack_288,puStack_258[10],puStack_258[0xb],
                (long)(puStack_258[0xb] - puStack_258[10]) >> 2);
  puStack_298 = (undefined8 *)0x0;
  uStack_290 = 0;
  puStack_2a0 = (undefined8 *)0x0;
  FUN_1092cc0dc(&puStack_2a0,puStack_258[0xf],puStack_258[0x10],
                (long)(puStack_258[0x10] - puStack_258[0xf]) >> 2);
  puVar24 = puStack_258;
  *(undefined1 *)((long)param_1 + 0x124) = *(undefined1 *)(puStack_258 + 0x1b);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)((long)puStack_258 + 0x4c);
  func_0x000107c3193c(param_1 + 0x7c);
  lVar21 = puVar24[0x1c];
  param_1[0x7d] = puVar24[0x1d];
  param_1[0x7c] = lVar21;
  param_1[0x7e] = puVar24[0x1e];
  puVar24[0x1c] = 0;
  puVar24[0x1d] = 0;
  puVar24[0x1e] = 0;
  func_0x0001095a2eb4(param_1 + 0x80,puStack_258 + 0x1f);
  *(undefined4 *)(param_1 + 0x7f) = *(undefined4 *)(puStack_258 + 0x24);
  bStack_39c = *(byte *)((long)puStack_258 + 0x124);
  if (plVar14 != puStack_258 + 0x31) {
    *(undefined4 *)(param_1 + 0xb9) = *(undefined4 *)(puStack_258 + 0x35);
    FUN_1095b2520(plVar14,puStack_258[0x33]);
  }
  if (param_1 + 0x9b != puStack_258 + 0x2c) {
    *(undefined4 *)(param_1 + 0x9f) = *(undefined4 *)(puStack_258 + 0x30);
    func_0x00010729c334(param_1 + 0x9b,puStack_258[0x2e],0);
  }
  if (plVar39 != puStack_258 + 0x36) {
    *(undefined4 *)(param_1 + 0xbe) = *(undefined4 *)(puStack_258 + 0x3a);
    FUN_1095b2520(plVar39,puStack_258[0x38]);
  }
  if (pppppplVar40 != (long ******)(puStack_258 + 0x3b)) {
    *(undefined4 *)(param_1 + 0xc3) = *(undefined4 *)(puStack_258 + 0x3f);
    plVar14 = (long *)puStack_258[0x3d];
    lVar21 = param_1[0xc0];
    if (lVar21 != 0) {
      lVar28 = 0;
      do {
        (*pppppplVar40)[lVar28] = (long ****)0x0;
        lVar28 = lVar28 + 1;
      } while (lVar21 != lVar28);
      plVar38 = (long *)param_1[0xc1];
      param_1[0xc2] = 0;
      param_1[0xc1] = 0;
      plVar39 = plVar38;
      if (plVar38 != (long *)0x0 && plVar14 != (long *)0x0) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar39 + 2,plVar14 + 2);
          if (plVar39 != plVar14) {
            FUN_10928555c(plVar39 + 5,plVar14[5],plVar14[6],plVar14[6] - plVar14[5] >> 2);
          }
          plVar38 = (long *)*plVar39;
          func_0x0001095b2af4(pppppplVar40,plVar39);
          plVar14 = (long *)*plVar14;
        } while ((plVar38 != (long *)0x0) && (plVar39 = plVar38, plVar14 != (long *)0x0));
      }
      func_0x0001095a2ba0(pppppplVar40,plVar38);
    }
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      ppppppplVar15 = (long *******)0x40;
      __Znwm();
      ppppplStack_1c0 = (long *****)0x0;
      *ppppppplVar15 = (long ******)0x0;
      ppppppplVar15[1] = (long ******)0x0;
      ppppppplStack_1d0 = ppppppplVar15;
      pppppplStack_1c8 = pppppplVar40;
      if (*(char *)((long)plVar14 + 0x27) < '\0') {
        func_0x000107c3192c(ppppppplVar15 + 2,plVar14[2],plVar14[3]);
      }
      else {
        pppppplVar47 = (long ******)plVar14[3];
        pppppplVar45 = (long ******)plVar14[2];
        ppppppplVar15[4] = (long ******)plVar14[4];
        ppppppplVar15[3] = pppppplVar47;
        ppppppplVar15[2] = pppppplVar45;
      }
      ppppppplVar15[5] = (long ******)0x0;
      ppppppplVar15[6] = (long ******)0x0;
      ppppppplVar15[7] = (long ******)0x0;
      FUN_109285684();
      ppppplStack_1c0 = (long *****)CONCAT71(ppppplStack_1c0._1_7_,1);
      pppppplVar45 = pppppplVar40;
      func_0x000107c31944(pppppplVar40,ppppppplVar15 + 2);
      ppppppplVar15[1] = pppppplVar45;
      func_0x0001095b2af4(pppppplVar40,ppppppplStack_1d0);
    }
  }
  if (*(char *)((long)puStack_258 + 0x2f) < '\0') {
    func_0x000107c3192c(&uStack_2c0,puStack_258[3],puStack_258[4]);
  }
  else {
    uStack_2b8 = puStack_258[4];
    uStack_2c0 = puStack_258[3];
    lStack_2b0 = puStack_258[5];
  }
  iVar20 = (int)((ulong)(lVar26 - lVar27) >> 2) + ~uVar35;
  if (*(char *)(puStack_258 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_2c0,puStack_258[0x29] + (long)iVar20 * 0x18);
  }
  ppplStack_390 = (long ***)(param_1 + 0x16);
  if (*(char *)((long)param_1 + 199) < '\0') {
    param_1[0x17] = 4;
    ppplVar29 = (long ***)param_1[0x16];
  }
  else {
    *(undefined1 *)((long)param_1 + 199) = 4;
    ppplVar29 = ppplStack_390;
  }
  *(undefined4 *)ppplVar29 = 0x61746164;
  *(undefined1 *)((long)ppplVar29 + 4) = 0;
  puVar24 = (undefined8 *)puStack_258[0x25];
  if (puVar24 == (undefined8 *)puStack_258[0x26]) {
    func_0x000107c31940(&ppppppplStack_1d0,&UNK_10f55a914);
  }
  else if (*(char *)((long)puVar24 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppppplStack_1d0,*puVar24,puVar24[1]);
  }
  else {
    pppppplStack_1c8 = (long ******)puVar24[1];
    ppppppplStack_1d0 = (long *******)*puVar24;
    ppppplStack_1c0 = (long *****)puVar24[2];
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    __ZdlPv(param_1[0x19]);
  }
  param_1[0x1a] = (long)pppppplStack_1c8;
  param_1[0x19] = (long)ppppppplStack_1d0;
  param_1[0x1b] = (long)ppppplStack_1c0;
  *(undefined4 *)(param_1 + 299) = uVar50;
  fVar44 = *(float *)(puStack_2a0 + 1);
  uVar49 = *puStack_2a0;
  param_1[0x128] = (long)(double)(float)((ulong)uVar49 >> 0x20);
  param_1[0x127] = (long)(double)(float)uVar49;
  param_1[0x129] = (long)(double)fVar44;
  param_1[0x12a] = 0;
  *(undefined8 *)((long)param_1 + 0x95c) = *puStack_288;
  lVar26 = 0x638;
  if (*(char *)((long)param_1 + 0x15c) == '\0') {
    lVar26 = 0x620;
  }
  *(undefined4 *)(param_1 + 0x47) =
       *(undefined4 *)(*(long *)((long)param_1 + lVar26) + (long)iVar20 * 4);
  *(undefined4 *)((long)param_1 + 0x23c) = uVar6;
  puStack_398 = param_3;
  if ((bRam0000000113733030 & 1) == 0) goto LAB_1095a6500;
  do {
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    lVar26 = puStack_258[0x12];
    lVar27 = puStack_258[0x13];
    if (lVar26 == lVar27) {
LAB_1095a5448:
      *(undefined4 *)((long)param_1 + 300) = 1;
      FUN_10937e740(&ppppppplStack_1d0,&UNK_10f575224);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f500dfc,0x204,&ppppppplStack_1d0);
      if ((long)ppppplStack_1c0 < 0) {
        __ZdlPv(ppppppplStack_1d0);
      }
    }
    else {
      do {
        uVar16 = 0x113733068;
        func_0x000107c31944(0x113733068,lVar26);
        uVar43 = uRam0000000113733070;
        if (uRam0000000113733070 != 0) {
          uVar36 = uRam0000000113733070 - 1;
          if ((uRam0000000113733070 & uVar36) == 0) {
            uVar41 = uVar36 & uVar16;
          }
          else {
            uVar41 = uVar16;
            if (uRam0000000113733070 <= uVar16) {
              uVar41 = 0;
              if (uRam0000000113733070 != 0) {
                uVar41 = uVar16 / uRam0000000113733070;
              }
              uVar41 = uVar16 - uVar41 * uRam0000000113733070;
            }
          }
          plVar14 = *(long **)(lRam0000000113733068 + uVar41 * 8);
          if (plVar14 != (long *)0x0) {
            for (plVar14 = (long *)*plVar14; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
              uVar22 = plVar14[1];
              if (uVar16 == uVar22) {
                uVar22 = 0x113733068;
                func_0x000104c4fbc4(0x113733068,plVar14 + 2,lVar26);
                if ((uVar22 & 1) != 0) {
                  if (*(int *)(plVar14 + 5) - 1U < 9) {
                    uVar35 = *(uint *)(&UNK_10dfd5e14 + (ulong)(*(int *)(plVar14 + 5) - 1U) * 4);
                  }
                  else {
                    uVar35 = 0;
                  }
                  func_0x000109cd2af4();
                  if ((uVar35 & (*(uint *)(uVar22 + 0x40) ^ 0xffffffff)) == 0) {
                    iVar20 = *(int *)(plVar14 + 5);
                    *(int *)((long)param_1 + 0x104) = iVar20;
                    *(uint *)(param_1 + 0x21) = uVar35;
                    goto LAB_1095a531c;
                  }
                  break;
                }
              }
              else {
                if ((uVar43 & uVar36) == 0) {
                  uVar22 = uVar22 & uVar36;
                }
                else if (uVar43 <= uVar22) {
                  uVar12 = 0;
                  if (uVar43 != 0) {
                    uVar12 = uVar22 / uVar43;
                  }
                  uVar22 = uVar22 - uVar12 * uVar43;
                }
                if (uVar22 != uVar41) break;
              }
            }
          }
        }
        lVar26 = lVar26 + 0x18;
      } while (lVar26 != lVar27);
      iVar20 = *(int *)((long)param_1 + 0x104);
LAB_1095a531c:
      if (iVar20 == 0) goto LAB_1095a5448;
      fVar44 = *(float *)(param_1 + 0x36);
      iVar20 = (int)param_1[0x47];
      iVar7 = *(int *)((long)param_1 + 0x964);
      iVar25 = (int)((float)iVar20 / fVar44);
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = (iVar25 + iVar7 + -1) / iVar7;
      }
      iVar31 = (int)(fVar44 * (float)iVar20);
      iVar9 = 0;
      if (iVar7 != 0) {
        iVar9 = (iVar31 + iVar7 + -1) / iVar7;
      }
      iVar4 = iVar20;
      iVar8 = iVar8 * iVar7;
      if (1.0 < fVar44) {
        iVar4 = iVar9 * iVar7;
        iVar8 = iVar20;
      }
      *(int *)((long)param_1 + 0x10c) = iVar4;
      *(int *)(param_1 + 0x22) = iVar8;
      *(int *)((long)param_1 + 0x11c) = iVar4;
      *(int *)(param_1 + 0x24) = iVar8;
      if (*(char *)((long)param_1 + 0x1b4) == '\x01') {
        iVar7 = (int)param_1[0x37];
        uVar35 = (int)((float)iVar7 / fVar44) + 7;
        uVar2 = uVar35 & 7;
        if (-1 < (int)-uVar35) {
          uVar2 = -(-uVar35 & 7);
        }
        uVar1 = (int)(fVar44 * (float)iVar7) + 7;
        uVar3 = uVar1 & 7;
        if (-1 < (int)-uVar1) {
          uVar3 = -(-uVar1 & 7);
        }
        iVar8 = iVar7;
        iVar9 = uVar35 - uVar2;
        if (1.0 < fVar44) {
          iVar8 = uVar1 - uVar3;
          iVar9 = iVar7;
        }
        *(int *)((long)param_1 + 0x10c) = iVar8;
        *(int *)(param_1 + 0x22) = iVar9;
      }
      iVar7 = *(int *)((long)param_1 + 0x23c);
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = (iVar7 + -1 + iVar25) / iVar7;
      }
      iVar25 = 0;
      if (iVar7 != 0) {
        iVar25 = (iVar7 + -1 + iVar31) / iVar7;
      }
      iVar9 = iVar20;
      iVar8 = iVar8 * iVar7;
      if (1.0 < fVar44) {
        iVar9 = iVar25 * iVar7;
        iVar8 = iVar20;
      }
      *(int *)((long)param_1 + 0x114) = iVar9;
      *(int *)(param_1 + 0x23) = iVar8;
      lVar26 = param_1[0x7d];
      lVar27 = param_1[0x7c];
      if (*(char *)((long)param_1 + 199) < '\0') {
        func_0x000107c3192c(&ppppppplStack_1d0,param_1[0x16],param_1[0x17]);
      }
      else {
        pppppplStack_1c8 = (long ******)ppplStack_390[1];
        ppppppplStack_1d0 = (long *******)*ppplStack_390;
        ppppplStack_1c0 = (long *****)ppplStack_390[2];
      }
      uStack_1b8 = (undefined8 *******)CONCAT44(iVar8,iVar9);
      iStack_1b0 = (int)((ulong)(lVar26 - lVar27) >> 3) * -0x55555555 + 3;
      uStack_1ac = 1;
      uStack_1a8 = 1;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      pppppplStack_198 = (long ******)((ulong)pppppplStack_198 & 0xffffffffffffff00);
      uStack_180 = uStack_180 & 0xffffffffffffff00;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      pppppplStack_2d8 = (long ******)0x0;
      FUN_1093789c8(&pppppplStack_2d8,&ppppppplStack_1d0,&lStack_178,1);
      if (((uStack_180 & 1) != 0) && (pppppplStack_198 != (long ******)0x0)) {
        pppppplStack_190 = pppppplStack_198;
        __ZdlPv();
      }
      if ((long)ppppplStack_1c0 < 0) {
        __ZdlPv(ppppppplStack_1d0);
      }
      if (*(char *)((long)param_1 + 0xdf) < '\0') {
        func_0x000107c3192c(&ppppppplStack_1d0,param_1[0x19],param_1[0x1a]);
      }
      else {
        pppppplStack_1c8 = (long ******)param_1[0x1a];
        ppppppplStack_1d0 = (long *******)param_1[0x19];
        ppppplStack_1c0 = (long *****)param_1[0x1b];
      }
      ppppplStack_2f0 = (long *****)0x0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      func_0x000107c2ac94(&ppppplStack_2f0,&ppppppplStack_1d0,&uStack_1b8,1);
      if ((long)ppppplStack_1c0 < 0) {
        __ZdlPv(ppppppplStack_1d0);
      }
      if ((param_1[0x83] != 0) && (plVar14 = (long *)param_1[0x82], plVar14 != (long *)0x0)) {
        ppppplVar30 = (long *****)(param_1 + 0x151);
        ppplStack_390 = (long ***)(param_1 + 0x153);
        do {
          iVar20 = (int)plVar14[5];
          iVar7 = 0;
          if (iVar20 != 0) {
            iVar7 = *(int *)((long)param_1 + 0x114) / iVar20;
          }
          if (*(int *)((long)param_1 + 0x114) != iVar7 * iVar20) {
LAB_1095a5fb0:
            FUN_10937e740(&ppppppplStack_1d0,&UNK_10f575288);
            FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f500dfc,0x21f,&ppppppplStack_1d0);
            if ((long)ppppplStack_1c0 < 0) {
              __ZdlPv(ppppppplStack_1d0);
            }
            goto LAB_1095a6420;
          }
          uVar35 = 0;
          if (iVar20 != 0) {
            uVar35 = (int)param_1[0x23] / iVar20;
          }
          ppppplVar42 = (long *****)(ulong)uVar35;
          if ((int)param_1[0x23] != uVar35 * iVar20) goto LAB_1095a5fb0;
          iVar20 = *(int *)((long)plVar14 + 0x2c);
          uStack_2f4 = 1;
          uVar43 = plVar14[3];
          if (-1 < (char)*(byte *)((long)plVar14 + 0x27)) {
            uVar43 = (ulong)*(byte *)((long)plVar14 + 0x27);
          }
          iStack_300 = iVar7;
          uStack_2fc = uVar35;
          iStack_2f8 = iVar20;
          func_0x000104c4f768(&ppppppplStack_380,uVar43 + 3,&ppppppplStack_210);
          plVar39 = plVar14 + 2;
          ppppppplVar15 = ppppppplStack_380;
          if (-1 < cStack_369) {
            ppppppplVar15 = (long *******)&ppppppplStack_380;
          }
          if (uVar43 != 0) {
            plVar38 = (long *)plVar14[2];
            if (-1 < *(char *)((long)plVar14 + 0x27)) {
              plVar38 = plVar39;
            }
            _memmove(ppppppplVar15,plVar38,uVar43);
          }
          *(undefined4 *)((long)ppppppplVar15 + uVar43) = 0x6e695f;
          if (cStack_369 < '\0') {
            func_0x000107c3192c(&ppppppplStack_1d0,ppppppplStack_380,pppppplStack_378);
          }
          else {
            pppppplStack_1c8 = pppppplStack_378;
            ppppppplStack_1d0 = ppppppplStack_380;
            ppppplStack_1c0 = (long *****)CONCAT17(cStack_369,uStack_370);
          }
          uStack_1b8 = (undefined8 *******)CONCAT44(uStack_2fc,iStack_300);
          iStack_1b0 = iStack_2f8;
          uStack_1ac = uStack_2f4;
          uStack_1a8 = 1;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          pppppplStack_198 = (long ******)((ulong)pppppplStack_198 & 0xffffffffffffff00);
          uStack_180 = uStack_180 & 0xffffffffffffff00;
          FUN_1095ae098(&pppppplStack_2d8,&ppppppplStack_1d0);
          if (((uStack_180 & 1) != 0) && (pppppplStack_198 != (long ******)0x0)) {
            pppppplStack_190 = pppppplStack_198;
            __ZdlPv();
          }
          if ((long)ppppplStack_1c0 < 0) {
            __ZdlPv(ppppppplStack_1d0);
          }
          if (cStack_369 < '\0') {
            __ZdlPv(ppppppplStack_380);
          }
          uVar43 = plVar14[3];
          if (-1 < (char)*(byte *)((long)plVar14 + 0x27)) {
            uVar43 = (ulong)*(byte *)((long)plVar14 + 0x27);
          }
          func_0x000104c4f768(&ppppppplStack_1d0,uVar43 + 4,&ppppppplStack_380);
          ppppppplVar15 = ppppppplStack_1d0;
          if (-1 < (long)ppppplStack_1c0) {
            ppppppplVar15 = (long *******)&ppppppplStack_1d0;
          }
          if (uVar43 != 0) {
            plVar38 = (long *)plVar14[2];
            if (-1 < *(char *)((long)plVar14 + 0x27)) {
              plVar38 = plVar39;
            }
            _memmove(ppppppplVar15,plVar38,uVar43);
          }
          *(undefined4 *)((long)ppppppplVar15 + uVar43) = 0x74756f5f;
          *(undefined1 *)((undefined4 *)((long)ppppppplVar15 + uVar43) + 1) = 0;
          FUN_1094d24d0(&ppppplStack_2f0,&ppppppplStack_1d0);
          if ((long)ppppplStack_1c0 < 0) {
            __ZdlPv(ppppppplStack_1d0);
          }
          uVar43 = plVar14[3];
          if (-1 < (char)*(byte *)((long)plVar14 + 0x27)) {
            uVar43 = (ulong)*(byte *)((long)plVar14 + 0x27);
          }
          func_0x000104c4f768(&ppppppplStack_318,uVar43 + 3,&ppppppplStack_380);
          ppppppplVar15 = ppppppplStack_318;
          if (-1 < (long)ppppplStack_308) {
            ppppppplVar15 = (long *******)&ppppppplStack_318;
          }
          if (uVar43 != 0) {
            plVar38 = (long *)plVar14[2];
            if (-1 < *(char *)((long)plVar14 + 0x27)) {
              plVar38 = plVar39;
            }
            _memmove(ppppppplVar15,plVar38,uVar43);
          }
          *(undefined4 *)((long)ppppppplVar15 + uVar43) = 0x6e695f;
          uVar43 = plVar14[3];
          if (-1 < (char)*(byte *)((long)plVar14 + 0x27)) {
            uVar43 = (ulong)*(byte *)((long)plVar14 + 0x27);
          }
          func_0x000104c4f768(&pppppppuStack_330,uVar43 + 4,&ppppppplStack_380);
          pppppppuVar5 = pppppppuStack_330;
          if (-1 < lStack_320) {
            pppppppuVar5 = &pppppppuStack_330;
          }
          if (uVar43 != 0) {
            plVar38 = (long *)plVar14[2];
            if (-1 < *(char *)((long)plVar14 + 0x27)) {
              plVar38 = plVar39;
            }
            _memmove(pppppppuVar5,plVar38,uVar43);
          }
          *(undefined4 *)((long)pppppppuVar5 + uVar43) = 0x74756f5f;
          *(undefined1 *)((undefined4 *)((long)pppppppuVar5 + uVar43) + 1) = 0;
          uStack_388 = 0x100000001;
          func_0x000109d0eb9c(&ppppppplStack_380,&iStack_300,&uStack_388);
          uVar35 = iVar7 * iVar20 * uVar35;
          if (uVar35 != 0) {
            _bzero(uStack_360,(ulong)uVar35 << 2);
          }
          ppppplStack_1c0 = ppppplStack_308;
          pppppplStack_1c8 = pppppplStack_310;
          ppppppplStack_1d0 = ppppppplStack_318;
          uStack_1a8 = (undefined4)lStack_320;
          uStack_1a4 = (uint)((ulong)lStack_320 >> 0x20);
          pppppplStack_310 = (long ******)0x0;
          ppppplStack_308 = (long *****)0x0;
          lStack_320 = 0;
          ppppppplStack_318 = (long *******)0x0;
          iStack_1b0 = (int)uStack_328;
          uStack_1ac = (undefined4)((ulong)uStack_328 >> 0x20);
          uStack_1b8 = pppppppuStack_330;
          pppppppuStack_330 = (undefined8 *******)0x0;
          uStack_328 = 0;
          uStack_1a0 = 0x108a5c28;
          uStack_19c = 1;
          pppppplStack_190 = (long ******)CONCAT17(cStack_369,uStack_370);
          pppppplStack_198 = pppppplStack_378;
          ppppplStack_188 = ppppplStack_368;
          lStack_178 = lStack_358;
          uStack_180 = uStack_360;
          if (lStack_358 != 0) {
            plVar38 = (long *)(lStack_358 + 8);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
              if (bVar11) {
                *plVar38 = *plVar38 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          FUN_109407928(auStack_170,auStack_350);
          ppppplVar17 = ppppplVar30;
          func_0x000107c31944(ppppplVar30,plVar39);
          ppppplVar37 = (long *****)param_1[0x152];
          if (ppppplVar37 != (long *****)0x0) {
            uVar43 = (long)ppppplVar37 - 1;
            if (((ulong)ppppplVar37 & uVar43) == 0) {
              ppppplVar42 = (long *****)(uVar43 & (ulong)ppppplVar17);
            }
            else {
              ppppplVar42 = ppppplVar17;
              if (ppppplVar37 <= ppppplVar17) {
                uVar16 = 0;
                if (ppppplVar37 != (long *****)0x0) {
                  uVar16 = (ulong)ppppplVar17 / (ulong)ppppplVar37;
                }
                ppppplVar42 = (long *****)((long)ppppplVar17 - uVar16 * (long)ppppplVar37);
              }
            }
            if ((*ppppplVar30)[(long)ppppplVar42] != (long ***)0x0) {
              for (pppppplVar40 = (long ******)*(*ppppplVar30)[(long)ppppplVar42];
                  pppppplVar40 != (long ******)0x0; pppppplVar40 = (long ******)*pppppplVar40) {
                ppppplVar23 = pppppplVar40[1];
                if (ppppplVar23 == ppppplVar17) {
                  ppppplVar23 = ppppplVar30;
                  func_0x000104c4fbc4(ppppplVar30,pppppplVar40 + 2,plVar39);
                  if (((ulong)ppppplVar23 & 1) != 0) goto LAB_1095a5c70;
                }
                else {
                  if (((ulong)ppppplVar37 & uVar43) == 0) {
                    ppppplVar23 = (long *****)((ulong)ppppplVar23 & uVar43);
                  }
                  else if (ppppplVar37 <= ppppplVar23) {
                    uVar16 = 0;
                    if (ppppplVar37 != (long *****)0x0) {
                      uVar16 = (ulong)ppppplVar23 / (ulong)ppppplVar37;
                    }
                    ppppplVar23 = (long *****)((long)ppppplVar23 - uVar16 * (long)ppppplVar37);
                  }
                  if (ppppplVar23 != ppppplVar42) break;
                }
              }
            }
          }
          pppppplVar40 = (long ******)0xa8;
          __Znwm();
          pppppplStack_200 = (long ******)0x0;
          *pppppplVar40 = (long *****)0x0;
          pppppplVar40[1] = ppppplVar17;
          ppppppplStack_210 = (long *******)pppppplVar40;
          ppppplStack_208 = ppppplVar30;
          if (*(char *)((long)plVar14 + 0x27) < '\0') {
            func_0x000107c3192c(pppppplVar40 + 2,plVar14[2],plVar14[3]);
          }
          else {
            ppppplVar48 = (long *****)plVar14[3];
            ppppplVar23 = (long *****)*plVar39;
            pppppplVar40[4] = (long *****)plVar14[4];
            pppppplVar40[3] = ppppplVar48;
            pppppplVar40[2] = ppppplVar23;
          }
          pppppplVar40[0x12] = (long *****)0x0;
          pppppplVar40[0x11] = (long *****)0x0;
          pppppplVar40[0x14] = (long *****)0x0;
          pppppplVar40[0x13] = (long *****)0x0;
          pppppplVar40[6] = (long *****)0x0;
          pppppplVar40[5] = (long *****)0x0;
          pppppplVar40[8] = (long *****)0x0;
          pppppplVar40[7] = (long *****)0x0;
          pppppplVar40[10] = (long *****)0x0;
          pppppplVar40[9] = (long *****)0x0;
          pppppplVar40[0xc] = (long *****)0x0;
          pppppplVar40[0xd] = (long *****)0x0;
          pppppplVar40[0xb] = (long *****)&PTR_DAT_1108a5c28;
          pppppplVar40[0xe] = (long *****)0x100000001;
          pppppplVar40[0xf] = (long *****)0x0;
          pppppplVar40[0x10] = (long *****)0x0;
          *(code *)(pppppplVar40 + 0x11) = (code)0x0;
          pppppplStack_200 = (long ******)CONCAT71(pppppplStack_200._1_7_,1);
          if ((ppppplVar37 == (long *****)0x0) ||
             (*(float *)(param_1 + 0x155) * (float)ppppplVar37 < (float)(param_1[0x154] + 1))) {
            uVar43 = 1;
            if ((long *****)0x2 < ppppplVar37) {
              uVar43 = (ulong)(((ulong)ppppplVar37 & (long)ppppplVar37 - 1U) != 0);
            }
            ppppplVar42 = (long *****)(uVar43 | (long)ppppplVar37 << 1);
            ppppplVar37 = (long *****)
                          (long)((float)(param_1[0x154] + 1) / *(float *)(param_1 + 0x155));
            if (ppppplVar42 <= ppppplVar37) {
              ppppplVar42 = ppppplVar37;
            }
            if ((long)ppppplVar42 - 1U == 0) {
              ppppplVar42 = (long *****)0x2;
            }
            else if (((ulong)ppppplVar42 & (long)ppppplVar42 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            ppppplVar37 = (long *****)param_1[0x152];
            if (ppppplVar37 < ppppplVar42) {
LAB_1095a5a80:
              ppppplVar37 = ppppplVar42;
              if ((ulong)ppppplVar37 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_1095a6a44;
              }
              pppplVar19 = (long ****)((long)ppppplVar37 << 3);
              __Znwm();
              pppplVar18 = *ppppplVar30;
              *ppppplVar30 = pppplVar19;
              if (pppplVar18 != (long ****)0x0) {
                __ZdlPv();
              }
              ppppplVar42 = (long *****)0x0;
              param_1[0x152] = (long)ppppplVar37;
              do {
                (*ppppplVar30)[(long)ppppplVar42] = (long ***)0x0;
                ppppplVar42 = (long *****)((long)ppppplVar42 + 1);
              } while (ppppplVar37 != ppppplVar42);
              ppplVar29 = (long ***)*ppplStack_390;
              if (ppplVar29 != (long ***)0x0) {
                ppppplVar42 = (long *****)ppplVar29[1];
                uVar43 = (long)ppppplVar37 - 1;
                if (((ulong)ppppplVar37 & uVar43) == 0) {
                  ppppplVar42 = (long *****)((ulong)ppppplVar42 & uVar43);
                }
                else if (ppppplVar37 <= ppppplVar42) {
                  uVar16 = 0;
                  if (ppppplVar37 != (long *****)0x0) {
                    uVar16 = (ulong)ppppplVar42 / (ulong)ppppplVar37;
                  }
                  ppppplVar42 = (long *****)((long)ppppplVar42 - uVar16 * (long)ppppplVar37);
                }
                (*ppppplVar30)[(long)ppppplVar42] = ppplStack_390;
                ppplVar32 = (long ***)*ppplVar29;
                while (ppplVar32 != (long ***)0x0) {
                  ppppplVar23 = (long *****)ppplVar32[1];
                  if (((ulong)ppppplVar37 & uVar43) == 0) {
                    ppppplVar23 = (long *****)((ulong)ppppplVar23 & uVar43);
                  }
                  else if (ppppplVar37 <= ppppplVar23) {
                    uVar16 = 0;
                    if (ppppplVar37 != (long *****)0x0) {
                      uVar16 = (ulong)ppppplVar23 / (ulong)ppppplVar37;
                    }
                    ppppplVar23 = (long *****)((long)ppppplVar23 - uVar16 * (long)ppppplVar37);
                  }
                  ppplVar33 = ppplVar32;
                  if (ppppplVar23 != ppppplVar42) {
                    pppplVar19 = *ppppplVar30;
                    if (pppplVar19[(long)ppppplVar23] == (long ***)0x0) {
                      pppplVar19[(long)ppppplVar23] = ppplVar29;
                      ppppplVar42 = ppppplVar23;
                    }
                    else {
                      *ppplVar29 = *ppplVar32;
                      *ppplVar32 = *pppplVar19[(long)ppppplVar23];
                      *pppplVar19[(long)ppppplVar23] = (long **)ppplVar32;
                      ppplVar33 = ppplVar29;
                    }
                  }
                  ppplVar29 = ppplVar33;
                  ppplVar32 = (long ***)*ppplVar33;
                }
              }
            }
            else if (ppppplVar42 < ppppplVar37) {
              ppppplVar23 = (long *****)
                            (long)((float)(ulong)param_1[0x154] / *(float *)(param_1 + 0x155));
              if ((ppppplVar37 < (long *****)0x3) ||
                 (((ulong)ppppplVar37 & (long)ppppplVar37 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *****)0x1 < ppppplVar23) {
                ppppplVar23 = (long *****)(1L << (-LZCOUNT((long)ppppplVar23 + -1) & 0x3fU));
              }
              if (ppppplVar42 <= ppppplVar23) {
                ppppplVar42 = ppppplVar23;
              }
              if (ppppplVar42 < ppppplVar37) {
                if (ppppplVar42 != (long *****)0x0) goto LAB_1095a5a80;
                pppplVar19 = *ppppplVar30;
                *ppppplVar30 = (long ****)0x0;
                if (pppplVar19 != (long ****)0x0) {
                  __ZdlPv();
                }
                ppppplVar37 = (long *****)0x0;
                param_1[0x152] = 0;
              }
              else {
                ppppplVar37 = (long *****)param_1[0x152];
              }
            }
            if (((ulong)ppppplVar37 & (long)ppppplVar37 - 1U) == 0) {
              ppppplVar42 = (long *****)((long)ppppplVar37 - 1U & (ulong)ppppplVar17);
            }
            else {
              ppppplVar42 = ppppplVar17;
              if (ppppplVar37 <= ppppplVar17) {
                uVar43 = 0;
                if (ppppplVar37 != (long *****)0x0) {
                  uVar43 = (ulong)ppppplVar17 / (ulong)ppppplVar37;
                }
                ppppplVar42 = (long *****)((long)ppppplVar17 - uVar43 * (long)ppppplVar37);
              }
            }
          }
          pppplVar19 = *ppppplVar30;
          ppplVar29 = pppplVar19[(long)ppppplVar42];
          if (ppplVar29 == (long ***)0x0) {
            *pppppplVar40 = (long *****)*ppplStack_390;
            *ppplStack_390 = (long **)pppppplVar40;
            pppplVar19[(long)ppppplVar42] = ppplStack_390;
            if (*pppppplVar40 != (long *****)0x0) {
              ppppplVar42 = (long *****)(*pppppplVar40)[1];
              if (((ulong)ppppplVar37 & (long)ppppplVar37 - 1U) == 0) {
                ppppplVar42 = (long *****)((ulong)ppppplVar42 & (long)ppppplVar37 - 1U);
              }
              else if (ppppplVar37 <= ppppplVar42) {
                uVar43 = 0;
                if (ppppplVar37 != (long *****)0x0) {
                  uVar43 = (ulong)ppppplVar42 / (ulong)ppppplVar37;
                }
                ppppplVar42 = (long *****)((long)ppppplVar42 - uVar43 * (long)ppppplVar37);
              }
              (*ppppplVar30)[(long)ppppplVar42] = (long ***)pppppplVar40;
            }
          }
          else {
            *pppppplVar40 = (long *****)*ppplVar29;
            *ppplVar29 = (long **)pppppplVar40;
          }
          param_1[0x154] = param_1[0x154] + 1;
LAB_1095a5c70:
          if ((char)*(code *)((long)pppppplVar40 + 0x3f) < '\0') {
            __ZdlPv(pppppplVar40[5]);
          }
          pppppplVar40[6] = (long *****)pppppplStack_1c8;
          pppppplVar40[5] = (long *****)ppppppplStack_1d0;
          pppppplVar40[7] = ppppplStack_1c0;
          ppppplStack_1c0 = (long *****)((ulong)ppppplStack_1c0 & 0xffffffffffffff);
          ppppppplStack_1d0 = (long *******)((ulong)ppppppplStack_1d0 & 0xffffffffffffff00);
          if ((char)*(code *)((long)pppppplVar40 + 0x57) < '\0') {
            __ZdlPv(pppppplVar40[8]);
          }
          pppppplVar40[10] = (long *****)CONCAT44(uStack_1a4,uStack_1a8);
          pppppplVar40[9] = (long *****)CONCAT44(uStack_1ac,iStack_1b0);
          pppppplVar40[8] = (long *****)uStack_1b8;
          uStack_1a4 = uStack_1a4 & 0xffffff;
          uStack_1b8 = (undefined8 *******)((ulong)uStack_1b8 & 0xffffffffffffff00);
          pppppplVar40[0xd] = (long *****)pppppplStack_190;
          pppppplVar40[0xc] = (long *****)pppppplStack_198;
          pppppplVar40[0xe] = ppppplStack_188;
          func_0x0001093783c0(pppppplVar40 + 0xf,&uStack_180);
          func_0x00010937843c(pppppplVar40 + 0x11,auStack_170);
          func_0x000105675c90(&uStack_1a0);
          if ((int)uStack_1a4 < 0) {
            __ZdlPv(uStack_1b8);
          }
          if ((long)ppppplStack_1c0 < 0) {
            __ZdlPv(ppppppplStack_1d0);
          }
          func_0x000105675c90(&ppppppplStack_380);
          if (lStack_320 < 0) {
            __ZdlPv(pppppppuStack_330);
          }
          if ((long)ppppplStack_308 < 0) {
            __ZdlPv(ppppppplStack_318);
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      FUN_109378950(&ppppppplStack_380,&pppppplStack_2d8,&ppppplStack_2f0);
      plVar14 = param_1 + 0x3c;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (plVar14,param_1 + 0x33);
      if (*(char *)((long)param_1 + 0x1af) < '\0') {
        if (param_1[0x34] != 0) goto LAB_1095a5dc0;
LAB_1095a6114:
        bVar34 = 0;
LAB_1095a6118:
        (**(code **)(*(long *)*puStack_398 + 0x10))
                  (&ppppppplStack_1d0,(long *)*puStack_398,&uStack_2c0);
        ppppppplVar15 = ppppppplStack_1d0;
        ppppppplStack_1d0 = (long *******)0x0;
        plVar14 = (long *)param_1[0x29];
        param_1[0x29] = (long)ppppppplVar15;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))(plVar14);
          ppppppplVar15 = ppppppplStack_1d0;
          ppppppplStack_1d0 = (long *******)0x0;
          if (ppppppplVar15 != (long *******)0x0) {
            (*(code *)(*ppppppplVar15)[1])();
          }
          ppppppplVar15 = (long *******)param_1[0x29];
        }
        if (ppppppplVar15 == (long *******)0x0) {
          FUN_10937e740(&ppppppplStack_1d0,&UNK_10f5753a8);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f500dfc,0x267,&ppppppplStack_1d0);
          if ((long)ppppplStack_1c0 < 0) {
            __ZdlPv(ppppppplStack_1d0);
          }
          *(undefined4 *)((long)param_1 + 300) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x1c) = 1;
          (*(code *)(*ppppppplVar15)[4])(&ppppppplStack_210);
          if (ppppppplStack_210 == (long *******)0x0) {
            FUN_10937e740(&ppppppplStack_1d0,&UNK_10f5753a8);
            FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f500dfc,0x26f,&ppppppplStack_1d0);
            if ((long)ppppplStack_1c0 < 0) {
              __ZdlPv(ppppppplStack_1d0);
            }
            *(undefined4 *)((long)param_1 + 300) = 1;
          }
          else {
            if ((bVar34 & 1) == 0) {
              uVar49 = 0x80;
              __Znwm(0x80);
              func_0x000109cda3ec();
              FUN_10938cda4(param_1 + 0x15,uVar49);
              func_0x000109cdaf68(param_1[0x15],ppppppplStack_210,1,&ppppppplStack_380);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_1 + 0x26,&uStack_270);
            *(undefined4 *)((long)param_1 + 300) = 2;
            FUN_1095b355c(param_1 + 0xab);
            FUN_1095b355c(param_1 + 0xb0);
            FUN_1095b1210(param_1 + 0x60);
            FUN_1095b1210(param_1 + 0x65);
            FUN_1095b1210(param_1 + 0x6a);
            puVar24 = (undefined8 *)param_1[0x4a];
            param_1[0x4e] = 0;
            lVar26 = param_1[0x4b] - (long)puVar24;
            while (uVar43 = lVar26 >> 3, 2 < uVar43) {
              __ZdlPv(*puVar24);
              puVar24 = (undefined8 *)(param_1[0x4a] + 8);
              param_1[0x4a] = (long)puVar24;
              lVar26 = param_1[0x4b] - (long)puVar24;
            }
            if (uVar43 == 1) {
              lVar26 = 0x100;
LAB_1095a630c:
              param_1[0x4d] = lVar26;
            }
            else if (uVar43 == 2) {
              lVar26 = 0x200;
              goto LAB_1095a630c;
            }
            puVar24 = (undefined8 *)param_1[0x52];
            param_1[0x56] = 0;
            lVar26 = param_1[0x53] - (long)puVar24;
            while (uVar43 = lVar26 >> 3, 2 < uVar43) {
              __ZdlPv(*puVar24);
              puVar24 = (undefined8 *)(param_1[0x52] + 8);
              param_1[0x52] = (long)puVar24;
              lVar26 = param_1[0x53] - (long)puVar24;
            }
            if (uVar43 == 1) {
              lVar26 = 0x100;
LAB_1095a6370:
              param_1[0x55] = lVar26;
            }
            else if (uVar43 == 2) {
              lVar26 = 0x200;
              goto LAB_1095a6370;
            }
            puVar24 = (undefined8 *)param_1[0x5a];
            param_1[0x5e] = 0;
            lVar26 = param_1[0x5b] - (long)puVar24;
            while (uVar43 = lVar26 >> 3, 2 < uVar43) {
              __ZdlPv(*puVar24);
              puVar24 = (undefined8 *)(param_1[0x5a] + 8);
              param_1[0x5a] = (long)puVar24;
              lVar26 = param_1[0x5b] - (long)puVar24;
            }
            if (uVar43 == 1) {
              lVar26 = 0x100;
            }
            else {
              if (uVar43 != 2) goto LAB_1095a63d8;
              lVar26 = 0x200;
            }
            param_1[0x5d] = lVar26;
          }
LAB_1095a63d8:
          ppppppplVar15 = ppppppplStack_210;
          ppppppplStack_210 = (long *******)0x0;
          if (ppppppplVar15 != (long *******)0x0) {
            (*(code *)(*ppppppplVar15)[1])();
          }
        }
      }
      else {
        if (*(char *)((long)param_1 + 0x1af) == '\0') goto LAB_1095a6114;
LAB_1095a5dc0:
        uVar35 = *(uint *)(param_1 + 0x21);
        func_0x000109cd2af4();
        if ((uVar35 & (*(uint *)(plVar14 + 8) ^ 0xffffffff)) != 0) goto LAB_1095a6114;
        uVar35 = *(uint *)(param_1 + 0x21);
        if ((((0x3e < uVar35 - 2) ||
             ((1L << ((ulong)(uVar35 - 2) & 0x3f) & 0x4000000040000041U) == 0)) &&
            ((uVar35 & 0x20190) == 0)) &&
           (((uVar35 != 0x200 && (uVar35 != 0x400)) && ((uVar35 & 0x2db800) == 0))))
        goto LAB_1095a6114;
        if (*(int *)((long)param_1 + 0x104) == 2) {
          *(undefined1 *)((long)param_1 + 0x1de) = 1;
        }
        pppppplVar40 = (long ******)0x28;
        __Znwm();
        pppppplVar40[1] = (long *****)0x0;
        pppppplVar40[2] = (long *****)0x0;
        *pppppplVar40 = (long *****)&PTR_DAT_110afa410;
        ppppppplStack_318 = (long *******)CONCAT71(ppppppplStack_318._1_7_,1);
        FUN_1094a39d4(pppppplVar40 + 3,&ppppppplStack_210,param_1 + 0x33,&ppppppplStack_318);
        ppppppplStack_1d0 = (long *******)(pppppplVar40 + 3);
        pppppplStack_1c8 = pppppplVar40;
        FUN_10951264c(param_1 + 0x1d,&ppppppplStack_1d0);
        pppppplVar40 = pppppplStack_1c8;
        if (pppppplStack_1c8 != (long ******)0x0) {
          pppppplVar45 = pppppplStack_1c8 + 1;
          do {
            ppppplVar30 = *pppppplVar45;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppplVar45,0x10);
            if (bVar11) {
              *pppppplVar45 = (long *****)((long)ppppplVar30 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (ppppplVar30 == (long *****)0x0) {
            (*(code *)(*pppppplStack_1c8)[2])(pppppplStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar40);
          }
        }
        (**(code **)(*(long *)*puStack_398 + 0x10))
                  (&ppppppplStack_318,(long *)*puStack_398,&uStack_2c0);
        ppppppplVar15 = ppppppplStack_318;
        if (ppppppplStack_318 == (long *******)0x0) {
          *(undefined4 *)((long)param_1 + 300) = 1;
          FUN_10937e740(&ppppppplStack_1d0,&UNK_10f5752fd);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f500dfc,0x244,&ppppppplStack_1d0);
          if ((long)ppppplStack_1c0 < 0) {
            __ZdlPv(ppppppplStack_1d0);
          }
          uVar43 = 0;
        }
        else {
          lVar26 = param_1[0x21];
          ppppppplStack_210 = ppppppplStack_318;
          pppplVar19 = (long ****)0x20;
          __Znwm();
          *pppplVar19 = (long ***)&PTR_FUN_110af7448;
          pppplVar19[1] = (long ***)0x0;
          pppplVar19[2] = (long ***)0x0;
          pppplVar19[3] = (long ***)ppppppplVar15;
          ppppppplStack_318 = (long *******)0x0;
          ppppplStack_208 = (long *****)pppplVar19;
          FUN_1094d900c(&ppppppplStack_1d0,&ppppppplStack_380,(int)lVar26,&ppppppplStack_210,2,
                        param_1 + 0x38);
          FUN_1094a3794(&ppppppplStack_210);
          ppppppplStack_210 = (long *******)*param_1;
          ppppplVar30 = (long *****)param_1[1];
          if (ppppplVar30 == (long *****)0x0) {
            ppppplStack_208 = (long *****)0x0;
LAB_1095a6698:
            FUN_1092315e8();
LAB_1095a6a44:
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1095a6a48);
            (*pcVar13)();
          }
          __ZNSt3__119__shared_weak_count4lockEv();
          ppppppplVar15 = ppppppplStack_210;
          ppppplStack_208 = ppppplVar30;
          if (ppppplVar30 == (long *****)0x0) goto LAB_1095a6698;
          ppppplVar42 = ppppplVar30 + 2;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppplVar42,0x10);
            if (bVar11) {
              *ppppplVar42 = (long ****)((long)*ppppplVar42 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          func_0x0001095b23b4(&ppppppplStack_210);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppplVar42,0x10);
            if (bVar11) {
              *ppppplVar42 = (long ****)((long)*ppppplVar42 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          uVar43 = (ulong)*(uint *)(param_1 + 0x21);
          func_0x000109cdb6fc();
          if ((int)uVar43 == 0) {
            *(undefined4 *)((long)param_1 + 300) = 1;
            FUN_10937e740(&ppppppplStack_210,&UNK_10f575342);
            FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f500dfc,0x25f,&ppppppplStack_210);
            if ((long)pppppplStack_200 < 0) {
              __ZdlPv(ppppppplStack_210);
            }
          }
          else {
            puVar24 = (undefined8 *)param_1[0x1d];
            ppppppplStack_210 = (long *******)FUN_1095b347c;
            ppppplStack_208 = (long *****)&PTR_FUN_110afdeb8;
            pppppplStack_200 = (long ******)ppppppplVar15;
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppppplVar42,0x10);
              if (bVar11) {
                *ppppplVar42 = (long ****)((long)*ppppplVar42 + 1);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            ppppplStack_1f8 = ppppplVar30;
            FUN_1094a2b54(*puVar24,&ppppppplStack_1d0,&ppppppplStack_210);
            (*(code *)*ppppplStack_208)(&ppppplStack_208);
          }
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar30);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar30);
          func_0x0001094d6880(&ppppppplStack_1d0);
        }
        ppppppplVar15 = ppppppplStack_318;
        ppppppplStack_318 = (long *******)0x0;
        if (ppppppplVar15 != (long *******)0x0) {
          (*(code *)(*ppppppplVar15)[1])();
        }
        bVar34 = bStack_39c;
        if ((uVar43 & 1) != 0) goto LAB_1095a6118;
      }
      if (cStack_339 < '\0') {
        __ZdlPv(auStack_350[0]);
      }
      ppppppplStack_1d0 = (long *******)&ppppplStack_368;
      FUN_109378cec(&ppppppplStack_1d0);
      ppppppplStack_1d0 = (long *******)&ppppppplStack_380;
      FUN_109378cec(&ppppppplStack_1d0);
LAB_1095a6420:
      ppppppplStack_1d0 = (long *******)&ppppplStack_2f0;
      func_0x000104c607c8(&ppppppplStack_1d0);
      ppppppplStack_1d0 = &pppppplStack_2d8;
      FUN_109378cec(&ppppppplStack_1d0);
    }
    if (lStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
    if (puStack_2a0 != (undefined8 *)0x0) {
      puStack_298 = puStack_2a0;
      __ZdlPv();
    }
    if (puStack_288 != (undefined8 *)0x0) {
      puStack_280 = puStack_288;
      __ZdlPv();
    }
    if (lStack_260 < 0) {
      __ZdlPv(uStack_270);
    }
LAB_1095a6480:
    param_1 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      plVar14 = plStack_250 + 1;
      do {
        lVar26 = *plVar14;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar11) {
          *plVar14 = lVar26 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
      }
    }
    FUN_1095a02f0(auStack_248);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
LAB_1095a6500:
    iVar20 = 0x13733030;
    ___cxa_guard_acquire();
    if (iVar20 != 0) {
      func_0x000107c31940(&ppppppplStack_1d0,&UNK_10f5751ec);
      uStack_1b8 = (undefined8 *******)CONCAT44(uStack_1b8._4_4_,2);
      func_0x000107c31940(&iStack_1b0,&UNK_10f5751fc);
      pppppplStack_198 = (long ******)CONCAT44(pppppplStack_198._4_4_,2);
      func_0x000107c31940(&pppppplStack_190,&UNK_10f57520c);
      lStack_178 = CONCAT44(lStack_178._4_4_,3);
      func_0x000107c31940(auStack_170,&UNK_10f57521b);
      uStack_158 = 4;
      func_0x000107c31940(auStack_150,&DAT_10f5674c5);
      uStack_138 = 1;
      func_0x000107c31940(auStack_130,&DAT_10f5674d8);
      uStack_118 = 5;
      func_0x000107c31940(auStack_110,&DAT_10f5674ef);
      uStack_f8 = 6;
      func_0x000107c31940(auStack_f0,&DAT_10f5674f7);
      uStack_d8 = 7;
      func_0x000107c31940(auStack_d0,&DAT_10f567516);
      uStack_b8 = 8;
      func_0x000107c31940(auStack_b0,&DAT_10f56751b);
      uStack_98 = 9;
      FUN_1095b2f2c(&ppppppplStack_1d0,10);
      lVar26 = 0x140;
      do {
        lVar26 = lVar26 + -0x20;
      } while (lVar26 != 0);
      ___cxa_atexit(FUN_1095ae094,0x113733068,0x100000000);
      ___cxa_guard_release(0x113733030);
    }
  } while( true );
}



/* Entry: 1095a6adc; end: 1095a899b;  */

/* WARNING: Removing unreachable block (ram,0x0001095a76c4) */
/* WARNING: Removing unreachable block (ram,0x0001095a76c8) */
/* WARNING: Removing unreachable block (ram,0x0001095a76d0) */
/* WARNING: Removing unreachable block (ram,0x0001095a76d8) */
/* WARNING: Removing unreachable block (ram,0x0001095a76dc) */
/* WARNING: Removing unreachable block (ram,0x0001095a76fc) */
/* WARNING: Removing unreachable block (ram,0x0001095a7704) */
/* WARNING: Removing unreachable block (ram,0x0001095a7718) */
/* WARNING: Removing unreachable block (ram,0x0001095a7728) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1095a6adc(float *param_1,long param_2,short *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  code cVar5;
  code cVar6;
  code cVar7;
  code cVar8;
  code cVar9;
  char cVar10;
  bool bVar11;
  code **ppcVar12;
  undefined4 uVar13;
  float *pfVar14;
  code **ppcVar15;
  code *pcVar16;
  code cVar17;
  float *pfVar18;
  float *pfVar19;
  long *plVar20;
  ulong *puVar21;
  double *pdVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  undefined4 *puVar26;
  int iVar27;
  long lVar28;
  float *pfVar29;
  float *pfVar30;
  uint uVar31;
  code cVar32;
  float *pfVar33;
  float *pfVar34;
  code cVar35;
  float *pfVar36;
  long *plVar37;
  long *plVar38;
  long lVar39;
  undefined8 *puVar40;
  short *psVar41;
  double *pdVar42;
  int iVar43;
  ulong uVar44;
  long lVar46;
  float *pfVar47;
  code *pcVar48;
  byte bVar49;
  long lVar50;
  float *pfVar51;
  byte *pbVar52;
  ulong uVar53;
  byte *pbVar54;
  long lVar55;
  long lVar56;
  undefined8 *puVar57;
  long *plVar58;
  int iVar59;
  long *plVar60;
  long *plVar61;
  ulong uVar62;
  ulong uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  double dVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  code *pcStack_a08;
  code *pcStack_a00;
  code **ppcStack_9f8;
  code *pcStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  code *pcStack_9a8;
  code *pcStack_9a0;
  code **ppcStack_998;
  code *pcStack_990;
  undefined8 uStack_988;
  undefined4 auStack_978 [2];
  float *pfStack_970;
  undefined8 uStack_968;
  undefined4 auStack_960 [2];
  float *pfStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  float *pfStack_940;
  undefined8 uStack_938;
  double dStack_930;
  undefined8 uStack_928;
  long *plStack_920;
  long lStack_918;
  undefined4 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  long lStack_8d0;
  undefined8 *puStack_8c8;
  long *plStack_8c0;
  long lStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_8a1;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  code *pcStack_868;
  code *pcStack_860;
  code **ppcStack_858;
  code *pcStack_850;
  code *pcStack_848;
  code **ppcStack_840;
  code *pcStack_838;
  undefined **ppuStack_830;
  ulong uStack_828;
  ulong uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  long lStack_7f0;
  ulong *puStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  float fStack_798;
  float fStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  int iStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  long lStack_760;
  undefined4 *puStack_758;
  ulong *puStack_750;
  ulong uStack_748;
  undefined8 uStack_740;
  float fStack_738;
  float fStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  int iStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  long lStack_700;
  undefined4 *puStack_6f8;
  long *plStack_6f0;
  long lStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined4 uStack_6c8;
  int iStack_6c4;
  undefined4 uStack_6c0;
  int iStack_6bc;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  long lStack_6a0;
  long *plStack_698;
  ulong *puStack_690;
  ulong uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  float *pfStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  code *pcStack_628;
  code *pcStack_620;
  code **ppcStack_618;
  code *pcStack_610;
  code *pcStack_608;
  long lStack_5f8;
  undefined8 uStack_500;
  undefined8 *puStack_4f8;
  byte *pbStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  float *pfStack_4c0;
  ulong *puStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  long lStack_408;
  float *pfStack_400;
  ulong *puStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined1 auStack_2e0 [4];
  int iStack_2dc;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  undefined1 *puStack_298;
  undefined1 auStack_290 [16];
  int iStack_280;
  int iStack_27c;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_248;
  long lStack_240;
  undefined1 *puStack_238;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  float *pfStack_1e0;
  ulong *puStack_1d8;
  ulong auStack_1d0 [2];
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  float *pfStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  float *pfStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  ulong uVar45;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar50 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  __ZNSt3__15mutex4lockEv(param_2 + 0x498);
  lVar39 = param_2 + 0x528;
  FUN_1095b3a14(lVar39,param_3);
  lVar46 = 0x558;
  if (*(char *)(param_2 + 0x184) == '\0') {
    lVar46 = 0x580;
  }
  lVar46 = param_2 + lVar46;
  func_0x0001095b3af8(lVar46,param_3);
  if ((lVar39 == 0) || (lVar46 == 0)) {
    lVar39 = 0x11c;
    if (*(char *)(param_2 + 0x1b4) == '\0') {
      lVar39 = 0x10c;
    }
    uStack_150 = *(ulong *)(param_2 + lVar39);
    FUN_109a829e8(&uStack_440,&uStack_150,0);
    *param_1 = 127.5;
    param_1[0xe] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
    param_1[0xb] = 0.0;
    param_1[0xc] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    pfVar25 = param_1 + 0x14;
    pfVar25[0] = 0.0;
    pfVar25[1] = 0.0;
    *(float **)(param_1 + 0x10) = param_1 + 2;
    *(float **)(param_1 + 0x12) = pfVar25;
    param_1[0x16] = 0.0;
    param_1[0x17] = 0.0;
    pfVar23 = (float *)&uStack_440;
    pfVar25 = param_1;
    (**(code **)(*(long *)CONCAT44(uStack_440._4_4_,(float)uStack_440) + 0x18))();
    FUN_10918eb6c(&uStack_440);
    pfVar51 = (float *)(param_2 + 0x498);
    __ZNSt3__15mutex6unlockEv();
  }
  else {
    uStack_498 = *(undefined8 *)(lVar39 + 0x30);
    uStack_4a0 = *(undefined8 *)(lVar39 + 0x28);
    uStack_488 = *(undefined8 *)(lVar39 + 0x40);
    uStack_490 = *(ulong *)(lVar39 + 0x38);
    uStack_478 = *(undefined8 *)(lVar39 + 0x50);
    uStack_480 = *(undefined8 *)(lVar39 + 0x48);
    uStack_468 = *(ulong *)(lVar39 + 0x60);
    uStack_470 = *(ulong *)(lVar39 + 0x58);
    *param_1 = 127.5;
    pfVar23 = param_1 + 1;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    pfVar23[0] = 0.0;
    pfVar23[1] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[0xb] = 0.0;
    param_1[0xc] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xe] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
    pfVar25 = param_1 + 0x14;
    pfVar25[0] = 0.0;
    pfVar25[1] = 0.0;
    *(float **)(param_1 + 0x10) = param_1 + 2;
    *(float **)(param_1 + 0x12) = pfVar25;
    param_1[0x16] = 0.0;
    param_1[0x17] = 0.0;
    uStack_440._0_4_ = 9.477423e-38;
    uStack_438._0_4_ = SUB84(param_1,0);
    uStack_438._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
    uStack_430 = 0;
    uStack_42c = 0;
    FUN_109a479a0(lVar46 + 0x28,&uStack_440);
    __ZNSt3__15mutex6unlockEv(param_2 + 0x498);
    uStack_148 = *(undefined8 **)(param_1 + 2);
    uStack_150 = *(ulong *)param_1;
    uStack_138 = *(undefined8 *)(param_1 + 6);
    pbStack_140 = *(byte **)(param_1 + 4);
    pfVar51 = (float *)((ulong)&uStack_150 | 8);
    fVar72 = param_1[1];
    uStack_128 = *(undefined8 *)(param_1 + 10);
    uStack_130 = *(undefined8 *)(param_1 + 8);
    lStack_118 = *(long *)(param_1 + 0xe);
    uStack_120 = *(undefined8 *)(param_1 + 0xc);
    uStack_f8 = 0;
    uStack_100 = 0;
    if (*(long *)(param_1 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      fVar72 = *pfVar23;
    }
    pfStack_110 = pfVar51;
    puStack_108 = &uStack_100;
    if ((int)fVar72 < 3) {
      uStack_100 = **(ulong **)(param_1 + 0x12);
      uStack_f8 = (*(ulong **)(param_1 + 0x12))[1];
    }
    else {
      uStack_150 = uStack_150 & 0xffffffff;
      func_0x000109a84868(&uStack_150,param_1);
    }
    plVar58 = (long *)(param_2 + 0xb70);
    plVar20 = plVar58;
    func_0x000107c31944(plVar58,param_3);
    plVar60 = *(long **)(param_2 + 0xb78);
    if (plVar60 != (long *)0x0) {
      uVar62 = (long)plVar60 - 1;
      if (((ulong)plVar60 & uVar62) == 0) {
        plVar61 = (long *)(uVar62 & (ulong)plVar20);
      }
      else {
        plVar61 = plVar20;
        if (plVar60 <= plVar20) {
          uVar44 = 0;
          if (plVar60 != (long *)0x0) {
            uVar44 = (ulong)plVar20 / (ulong)plVar60;
          }
          plVar61 = (long *)((long)plVar20 - uVar44 * (long)plVar60);
        }
      }
      plVar37 = *(long **)(*plVar58 + (long)plVar61 * 8);
      if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
LAB_1095a6d50:
        plVar38 = (long *)plVar37[1];
        if (plVar38 == plVar20) {
          plVar38 = plVar58;
          func_0x000104c4fbc4(plVar58,plVar37 + 2,param_3);
          if (((ulong)plVar38 & 1) == 0) goto LAB_1095a6d9c;
          puVar57 = (undefined8 *)plVar37[6];
          for (puVar40 = (undefined8 *)plVar37[5]; puVar40 != puVar57; puVar40 = puVar40 + 1) {
            (**(code **)(*(long *)*puVar40 + 0x10))((long *)*puVar40,&uStack_150);
          }
        }
        else {
          if (((ulong)plVar60 & uVar62) == 0) {
            plVar38 = (long *)((ulong)plVar38 & uVar62);
          }
          else if (plVar60 <= plVar38) {
            uVar44 = 0;
            if (plVar60 != (long *)0x0) {
              uVar44 = (ulong)plVar38 / (ulong)plVar60;
            }
            plVar38 = (long *)((long)plVar38 - uVar44 * (long)plVar60);
          }
          if (plVar38 == plVar61) goto LAB_1095a6d9c;
        }
      }
    }
LAB_1095a6da4:
    if (*(char *)(param_2 + 0x124) == '\x01') {
      FUN_1095ae36c(&uStack_440,&uStack_150,1,param_2 + 0x10);
      if (lStack_118 != 0) {
        piVar1 = (int *)(lStack_118 + 0x14);
        do {
          iVar27 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar27 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
        }
      }
      if (0 < (int)uStack_150._4_4_) {
        lVar39 = 0;
        do {
          pfStack_110[lVar39] = 0.0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < (int)uStack_150._4_4_);
      }
      uStack_148 = (undefined8 *)CONCAT44(uStack_438._4_4_,(float)uStack_438);
      uStack_150 = CONCAT44(uStack_440._4_4_,(float)uStack_440);
      uStack_138 = CONCAT44(uStack_424,uStack_428);
      pbStack_140 = (byte *)CONCAT44(uStack_42c,uStack_430);
      uStack_128 = CONCAT44(uStack_414,uStack_418);
      uStack_130 = CONCAT44(uStack_41c,uStack_420);
      uStack_120 = CONCAT44(uStack_40c,uStack_410);
      lStack_118 = lStack_408;
      pfVar18 = pfStack_110;
      puVar21 = puStack_108;
      if ((puStack_108 != &uStack_100) &&
         (pfVar18 = pfVar51, puVar21 = &uStack_100, puStack_108 != (ulong *)0x0)) {
        _free(puStack_108[-1]);
      }
      puStack_108 = puVar21;
      pfStack_110 = pfVar18;
      if ((int)uStack_440._4_4_ < 3) {
        puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
        *puStack_108 = *puStack_3f8;
        puStack_108[1] = puStack_3f8[1];
        uStack_440._0_4_ = 127.5;
        puVar40[1] = 0;
        *puVar40 = 0;
        puVar40[3] = 0;
        puVar40[2] = 0;
        puVar40[5] = 0;
        puVar40[4] = 0;
        *(undefined8 *)((long)puVar40 + 0x34) = 0;
        *(undefined8 *)((long)puVar40 + 0x2c) = 0;
        if (puStack_3f8 != &uStack_3f0) {
          _free(puStack_3f8[-1]);
        }
      }
      else {
        puStack_108 = puStack_3f8;
        pfStack_110 = pfStack_400;
      }
    }
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      if (*(long *)(param_3 + 4) == 3) {
        psVar41 = *(short **)param_3;
        goto LAB_1095a6ef0;
      }
    }
    else {
      psVar41 = param_3;
      if (*(char *)((long)param_3 + 0x17) == '\x03') {
LAB_1095a6ef0:
        if ((*psVar41 == 0x6b73 && (char)psVar41[1] == 'y') && ((uStack_468 & 1) != 0)) {
          if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
            pfStack_400 = (float *)((ulong)&uStack_440 | 8);
            uStack_438._0_4_ = SUB84(uStack_148,0);
            uStack_438._4_4_ = (undefined4)((ulong)uStack_148 >> 0x20);
            uStack_428 = (undefined4)uStack_138;
            uStack_424 = (undefined4)((ulong)uStack_138 >> 0x20);
            uStack_430 = SUB84(pbStack_140,0);
            uStack_42c = (undefined4)((ulong)pbStack_140 >> 0x20);
            uStack_418 = (undefined4)uStack_128;
            uStack_414 = (undefined4)((ulong)uStack_128 >> 0x20);
            uStack_420 = (undefined4)uStack_130;
            uStack_41c = (undefined4)((ulong)uStack_130 >> 0x20);
            lStack_408 = lStack_118;
            uStack_410 = (undefined4)uStack_120;
            uStack_40c = (undefined4)((ulong)uStack_120 >> 0x20);
            puStack_3f8 = &uStack_3f0;
            uStack_3f0 = 0;
            uStack_3e8 = 0;
            if (lStack_118 != 0) {
              piVar1 = (int *)(lStack_118 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            uStack_440._0_4_ = (float)uStack_150;
            if ((int)uStack_150._4_4_ < 3) {
              uStack_3f0 = *puStack_108;
              uStack_3e8 = puStack_108[1];
              uStack_440._4_4_ = uStack_150._4_4_;
            }
            else {
              uStack_440._4_4_ = 0.0;
              func_0x000109a84868(&uStack_440,&uStack_150);
            }
          }
          else {
            fVar72 = *pfStack_110;
            fVar75 = pfStack_110[1];
            uStack_440._0_4_ = 127.5;
            pfStack_400 = (float *)((ulong)&uStack_440 | 8);
            uStack_438._4_4_ = 0;
            uStack_430 = 0;
            uStack_440._4_4_ = 0.0;
            uStack_438._0_4_ = 0.0;
            uStack_424 = 0;
            uStack_420 = 0;
            uStack_42c = 0;
            uStack_428 = 0;
            uStack_414 = 0;
            uStack_41c = 0;
            uStack_418 = 0;
            lStack_408 = 0;
            uStack_410 = 0;
            uStack_40c = 0;
            puStack_3f8 = &uStack_3f0;
            uStack_3f0 = 0;
            uStack_3e8 = 0;
            fStack_f0 = fVar72;
            fStack_ec = fVar75;
            FUN_109a83fd0(&uStack_440,2,&fStack_f0,(uint)(float)uStack_150 & 0xfff);
            fVar64 = *(float *)(param_2 + 0x14) * 0.017453292 * 0.5;
            _tanf();
            fVar65 = 1.0;
            if (*(char *)(param_2 + 0x11) == '\0') {
              fVar65 = -1.0;
            }
            if (0 < (int)uStack_148) {
              uVar62 = 0;
              fVar75 = (float)(int)fVar75 / 2.0;
              fVar76 = (float)(int)fVar72 / 2.0;
              fVar64 = fVar75 / fVar64;
              fVar72 = fVar76 * -0.0 + fVar64;
              fVar68 = fVar76 * -0.0 + 0.0;
              fVar66 = fVar64 * -0.0 + 0.0;
              fVar73 = 1.0 / (fVar68 * -0.0 + fVar72 * fVar64 + fVar66 * fVar75);
              fVar74 = fVar75 * -0.0;
              fVar71 = *(float *)(param_2 + 0x18);
              fVar78 = *(float *)(param_2 + 0x20);
              fVar80 = *(float *)(param_2 + 0x24);
              fVar83 = *(float *)(param_2 + 0x2c);
              fVar84 = *(float *)(param_2 + 0x30);
              fVar85 = *(float *)(param_2 + 0x38);
              fVar67 = *(float *)(param_2 + 0x1c) * 0.0;
              fVar79 = *(float *)(param_2 + 0x28) * 0.0;
              fVar81 = *(float *)(param_2 + 0x34) * 0.0;
              fVar82 = ((fVar80 + fVar79 + fVar83 * 0.0) * 0.0 +
                       (fVar71 + fVar67 + fVar78 * 0.0) * 0.0) - (fVar84 + fVar81 + fVar85 * 0.0);
              fVar77 = (((fVar80 * 0.0 - *(float *)(param_2 + 0x28)) + fVar83 * 0.0) * 0.0 +
                       ((fVar71 * 0.0 - *(float *)(param_2 + 0x1c)) + fVar78 * 0.0) * 0.0) -
                       ((fVar84 * 0.0 - *(float *)(param_2 + 0x34)) + fVar85 * 0.0);
              fVar65 = ((fVar79 + fVar80 * 0.0 + fVar83 * fVar65) * 0.0 +
                       (fVar67 + fVar71 * 0.0 + fVar78 * fVar65) * 0.0) -
                       (fVar81 + fVar84 * 0.0 + fVar85 * fVar65);
              fVar67 = 1.0 / SQRT(fVar65 * fVar65 + fVar77 * fVar77 + fVar82 * fVar82);
              uVar44 = (ulong)uStack_148._4_4_;
              do {
                if (0 < (int)uVar44) {
                  uVar53 = 0;
                  fVar71 = (float)(uVar62 & 0xffffffff);
                  do {
                    fVar78 = (float)(uVar53 & 0xffffffff);
                    fVar79 = (-(fVar75 * fVar64) + fVar76 * 0.0) * fVar73 +
                             -((fVar74 + 0.0) * fVar73) * fVar71 + fVar78 * fVar72 * fVar73;
                    fVar80 = ((fVar74 + fVar64) * fVar73 * fVar71 + fVar78 * -(fVar68 * fVar73)) -
                             (fVar74 + fVar76 * fVar64) * fVar73;
                    fVar78 = fVar64 * fVar64 * fVar73 +
                             fVar64 * -0.0 * fVar73 * fVar71 + fVar78 * fVar66 * fVar73;
                    fVar81 = 1.0 / SQRT(fVar78 * fVar78 + fVar79 * fVar79 + fVar80 * fVar80);
                    if (fVar65 * fVar67 * fVar78 * fVar81 +
                        fVar82 * fVar67 * fVar79 * fVar81 + fVar77 * fVar67 * fVar80 * fVar81 <= 0.0
                       ) {
                      bVar49 = pbStack_140[uVar53 + uVar62 * *puStack_108];
                    }
                    else {
                      bVar49 = 0;
                    }
                    *(byte *)(CONCAT44(uStack_42c,uStack_430) + uVar62 * *puStack_3f8 + uVar53) =
                         bVar49;
                    uVar53 = uVar53 + 1;
                    uVar44 = (ulong)(int)uStack_148._4_4_;
                  } while ((long)uVar53 < (long)uVar44);
                }
                uVar62 = uVar62 + 1;
              } while ((long)uVar62 < (long)(int)uStack_148);
            }
          }
          if (lStack_118 != 0) {
            piVar1 = (int *)(lStack_118 + 0x14);
            do {
              iVar27 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              func_0x000109a848d4(&uStack_150);
            }
          }
          if (0 < (int)uStack_150._4_4_) {
            lVar39 = 0;
            do {
              pfStack_110[lVar39] = 0.0;
              lVar39 = lVar39 + 1;
            } while (lVar39 < (int)uStack_150._4_4_);
          }
          uStack_148 = (undefined8 *)CONCAT44(uStack_438._4_4_,(float)uStack_438);
          uStack_150 = CONCAT44(uStack_440._4_4_,(float)uStack_440);
          uStack_138 = CONCAT44(uStack_424,uStack_428);
          pbStack_140 = (byte *)CONCAT44(uStack_42c,uStack_430);
          uStack_128 = CONCAT44(uStack_414,uStack_418);
          uStack_130 = CONCAT44(uStack_41c,uStack_420);
          uStack_120 = CONCAT44(uStack_40c,uStack_410);
          lStack_118 = lStack_408;
          pfVar18 = pfStack_110;
          puVar21 = puStack_108;
          if ((puStack_108 != &uStack_100) &&
             (pfVar18 = pfVar51, puVar21 = &uStack_100, puStack_108 != (ulong *)0x0)) {
            _free(puStack_108[-1]);
          }
          puStack_108 = puVar21;
          pfStack_110 = pfVar18;
          if ((int)uStack_440._4_4_ < 3) {
            puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
            *puStack_108 = *puStack_3f8;
            puStack_108[1] = puStack_3f8[1];
            uStack_440._0_4_ = 127.5;
            puVar40[1] = 0;
            *puVar40 = 0;
            puVar40[3] = 0;
            puVar40[2] = 0;
            puVar40[5] = 0;
            puVar40[4] = 0;
            *(undefined8 *)((long)puVar40 + 0x34) = 0;
            *(undefined8 *)((long)puVar40 + 0x2c) = 0;
            if (puStack_3f8 != &uStack_3f0) {
              _free(puStack_3f8[-1]);
            }
          }
          else {
            puStack_108 = puStack_3f8;
            pfStack_110 = pfStack_400;
          }
        }
      }
    }
    fVar64 = uStack_440._4_4_;
    fVar72 = (float)uStack_440;
    dVar69 = (double)CONCAT44(uStack_440._4_4_,(float)uStack_440);
    uStack_440._0_4_ = SUB84(param_3,0);
    fVar75 = (float)uStack_440;
    uStack_440._4_4_ = (float)((ulong)param_3 >> 0x20);
    uVar13 = uStack_440._4_4_;
    if ((uStack_490 & 1) == 0) {
      puVar40 = (undefined8 *)((ulong)&uStack_150 | 4);
      pfStack_4c0 = (float *)((ulong)&uStack_500 | 8);
      puStack_4f8 = uStack_148;
      uStack_500 = uStack_150;
      uStack_4e8 = uStack_138;
      pbStack_4f0 = pbStack_140;
      uStack_4d8 = uStack_128;
      uStack_4e0 = uStack_130;
      lStack_4c8 = lStack_118;
      uStack_4d0 = uStack_120;
      puStack_4b8 = &uStack_4b0;
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      if ((int)uStack_150._4_4_ < 3) {
        uStack_4b0 = *puStack_108;
        uStack_4a8 = puStack_108[1];
      }
      else {
        pfStack_4c0 = pfStack_110;
        puStack_4b8 = puStack_108;
        pfStack_110 = pfVar51;
        puStack_108 = &uStack_100;
      }
      uStack_150 = CONCAT44(uStack_150._4_4_,0x42ff0000);
      puVar40[1] = 0;
      *puVar40 = 0;
      puVar40[3] = 0;
      puVar40[2] = 0;
      puVar40[5] = 0;
      puVar40[4] = 0;
      *(undefined8 *)((long)puVar40 + 0x34) = 0;
      *(undefined8 *)((long)puVar40 + 0x2c) = 0;
    }
    else {
      uStack_440._0_4_ = fVar72;
      uStack_440._4_4_ = fVar64;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (uStack_480._4_1_ == '\x01') {
        uStack_440._0_4_ = 2.3693558e-38;
        uStack_438 = &uStack_150;
        uStack_430 = 0;
        uStack_42c = 0;
        fStack_f0 = 9.477423e-38;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_e8 = uStack_438;
        FUN_109b59078((double)(int)uStack_478,0x406fe00000000000,&uStack_440,&fStack_f0,0);
      }
      fVar72 = *(float *)(param_2 + 0x180);
      fStack_f0 = 127.5;
      pfVar51 = (float *)((ulong)&fStack_f0 | 8);
      uStack_e8._4_4_ = 0;
      uStack_e0 = 0;
      fStack_ec = 0.0;
      uStack_e8._0_4_ = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_c4 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      pfStack_b0 = pfVar51;
      puStack_a8 = &uStack_a0;
      if (uStack_478._4_1_ == '\x01') {
        __ZNSt3__16chrono12steady_clock3nowEv();
        iVar27 = (int)(fVar72 * (float)*(int *)(param_2 + 900));
        iVar59 = (int)(fVar72 * (float)*(int *)(param_2 + 0x380));
        uVar62 = (ulong)uStack_148 & 0xffffffff;
        if (0 < (int)uStack_148) {
          uVar44 = 0;
          uVar53 = *puStack_108;
          pbVar52 = pbStack_140;
          do {
            pbVar54 = pbVar52;
            uVar63 = (ulong)uStack_148._4_4_;
            if (0 < (int)uStack_148._4_4_) {
              do {
                uVar45 = uVar44;
                if ((int)uStack_470 < (int)(uint)*pbVar54) goto LAB_1095a7454;
                uVar63 = uVar63 - 1;
                pbVar54 = pbVar54 + 1;
              } while (uVar63 != 0);
            }
            uVar44 = uVar44 + 1;
            pbVar52 = pbVar52 + uVar53;
            uVar45 = uVar62;
          } while (uVar44 != uVar62);
LAB_1095a7454:
          iVar43 = (int)uVar45;
          iVar3 = iVar43;
          if ((int)uStack_148 <= iVar43) {
            iVar3 = (int)uStack_148;
          }
          pbVar52 = pbStack_140 + uVar53 * (uVar62 - 1);
          do {
            uVar63 = uVar62 - 1;
            pbVar54 = pbVar52;
            uVar44 = (ulong)uStack_148._4_4_;
            if (0 < (int)uStack_148._4_4_) {
              do {
                if ((int)uStack_470 < (int)(uint)*pbVar54) {
                  if ((iVar43 < (int)uStack_148) && (uVar63 != 0)) {
                    uStack_1b0._0_4_ = 0x42ff0000;
                    puStack_170 = &uStack_1a8;
                    uStack_1a8._4_4_ = 0;
                    uStack_1a0 = 0;
                    uStack_1b0._4_4_ = 0;
                    uStack_1a8._0_4_ = 0;
                    uStack_194 = 0;
                    uStack_190 = 0;
                    uStack_19c = 0;
                    uStack_198 = 0;
                    uStack_184 = 0;
                    uStack_18c = 0;
                    uStack_188 = 0;
                    lStack_178 = 0;
                    uStack_180 = 0;
                    uStack_17c = 0;
                    uStack_158 = 0;
                    uStack_160 = 0;
                    puVar40 = (undefined8 *)(param_2 + 0x7c8);
                    puStack_168 = &uStack_160;
                    if ((*(int *)(param_2 + 0x7d4) == iVar27) &&
                       (*(int *)(param_2 + 2000) == iVar59)) {
                      if (&uStack_1b0 != puVar40) {
                        if (*(long *)(param_2 + 0x800) != 0) {
                          piVar1 = (int *)(*(long *)(param_2 + 0x800) + 0x14);
                          do {
                            cVar10 = '\x01';
                            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar11) {
                              *piVar1 = *piVar1 + 1;
                              cVar10 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar10 != '\0');
                        }
                        lStack_178 = 0;
                        uStack_198 = 0;
                        uStack_194 = 0;
                        uStack_1a0 = 0;
                        uStack_19c = 0;
                        uStack_188 = 0;
                        uStack_184 = 0;
                        uStack_190 = 0;
                        uStack_18c = 0;
                        uStack_1b0._0_4_ = *(undefined4 *)puVar40;
                        if (*(int *)(param_2 + 0x7cc) < 3) {
                          uStack_1a8._0_4_ = (undefined4)*(undefined8 *)(param_2 + 2000);
                          uStack_1a8._4_4_ =
                               (undefined4)((ulong)*(undefined8 *)(param_2 + 2000) >> 0x20);
                          uStack_160 = **(undefined8 **)(param_2 + 0x810);
                          uStack_158 = (*(undefined8 **)(param_2 + 0x810))[1];
                          uStack_1b0._4_4_ = *(int *)(param_2 + 0x7cc);
                        }
                        else {
                          func_0x000109a84868(&uStack_1b0,puVar40);
                        }
                        uStack_198 = (undefined4)*(undefined8 *)(param_2 + 0x7e0);
                        uStack_194 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x7e0) >> 0x20);
                        uStack_1a0 = (undefined4)*(undefined8 *)(param_2 + 0x7d8);
                        uStack_19c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x7d8) >> 0x20);
                        uStack_188 = (undefined4)*(undefined8 *)(param_2 + 0x7f0);
                        uStack_184 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x7f0) >> 0x20);
                        uStack_190 = (undefined4)*(undefined8 *)(param_2 + 0x7e8);
                        uStack_18c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x7e8) >> 0x20);
                        lStack_178 = *(long *)(param_2 + 0x800);
                        uStack_180 = (undefined4)*(undefined8 *)(param_2 + 0x7f8);
                        uStack_17c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x7f8) >> 0x20);
                      }
                    }
                    else {
                      uStack_430 = 0;
                      uStack_42c = 0;
                      uStack_440._0_4_ = 2.3693558e-38;
                      uStack_220 = (short *)CONCAT44(uStack_220._4_4_,0x2010000);
                      uStack_210 = 0;
                      iStack_280 = iVar27;
                      iStack_27c = iVar59;
                      puStack_218 = &uStack_1b0;
                      uStack_438 = puVar40;
                      FUN_109b0f718(0,0,&uStack_440,&uStack_220,&iStack_280,1);
                    }
                    fVar72 = (fVar72 * (float)*(int *)(param_2 + 900)) /
                             (float)(int)uStack_148._4_4_;
                    if (iVar3 < 0x11) {
                      iVar3 = 0x10;
                    }
                    iVar43 = 0;
                    if ((int)uStack_480 != 0) {
                      iVar43 = ((int)uStack_480 + (int)(fVar72 * (float)((int)uVar63 + 0x10)) + -1)
                               / (int)uStack_480;
                    }
                    iStack_1bc = 0;
                    if ((int)uStack_480 != 0) {
                      iStack_1bc = ((int)uStack_480 + (int)(fVar72 * (float)(iVar3 - 0x10)) + -1) /
                                   (int)uStack_480;
                    }
                    iStack_1bc = iStack_1bc * (int)uStack_480;
                    iStack_1b4 = iVar43 * (int)uStack_480;
                    if (iVar59 <= iVar43 * (int)uStack_480) {
                      iStack_1b4 = iVar59;
                    }
                    iStack_1b4 = iStack_1b4 - iStack_1bc;
                    uStack_1c0 = 0;
                    iStack_1b8 = iVar27;
                    FUN_1095aed74(&uStack_440,&uStack_150,(int)pfStack_110[1] << 1,
                                  (int)*pfStack_110 << 1,1);
                    if (lStack_b8 != 0) {
                      piVar1 = (int *)(lStack_b8 + 0x14);
                      do {
                        iVar3 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar3 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar3 + -1 == 0) {
                        func_0x000109a848d4(&fStack_f0);
                      }
                    }
                    if (0 < (int)fStack_ec) {
                      lVar39 = 0;
                      do {
                        pfStack_b0[lVar39] = 0.0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < (int)fStack_ec);
                    }
                    fStack_f0 = (float)uStack_440;
                    fStack_ec = uStack_440._4_4_;
                    uStack_d8 = uStack_428;
                    uStack_d4 = uStack_424;
                    uStack_e0 = uStack_430;
                    uStack_dc = uStack_42c;
                    uStack_c8 = uStack_418;
                    uStack_c4 = uStack_414;
                    uStack_d0 = uStack_420;
                    uStack_cc = uStack_41c;
                    lStack_b8 = lStack_408;
                    uStack_c0 = uStack_410;
                    uStack_bc = uStack_40c;
                    pfVar18 = pfStack_b0;
                    puVar21 = puStack_a8;
                    uStack_e8 = uStack_438;
                    if ((puStack_a8 != &uStack_a0) &&
                       (pfVar18 = pfVar51, puVar21 = &uStack_a0, puStack_a8 != (ulong *)0x0)) {
                      _free(puStack_a8[-1]);
                    }
                    puStack_a8 = puVar21;
                    pfStack_b0 = pfVar18;
                    if ((int)uStack_440._4_4_ < 3) {
                      puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
                      *puStack_a8 = *puStack_3f8;
                      puStack_a8[1] = puStack_3f8[1];
                      uStack_440._0_4_ = 127.5;
                      puVar40[1] = 0;
                      *puVar40 = 0;
                      puVar40[3] = 0;
                      puVar40[2] = 0;
                      puVar40[5] = 0;
                      puVar40[4] = 0;
                      *(undefined8 *)((long)puVar40 + 0x34) = 0;
                      *(undefined8 *)((long)puVar40 + 0x2c) = 0;
                      if (puStack_3f8 != &uStack_3f0) {
                        _free(puStack_3f8[-1]);
                      }
                    }
                    else {
                      pfStack_b0 = pfStack_400;
                      puStack_a8 = puStack_3f8;
                    }
                    pfVar18 = (float *)&uStack_440;
                    FUN_1095aefe8(pfVar18,&fStack_f0);
                    if (lStack_b8 != 0) {
                      piVar1 = (int *)(lStack_b8 + 0x14);
                      do {
                        iVar3 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar3 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar3 + -1 == 0) {
                        pfVar18 = &fStack_f0;
                        func_0x000109a848d4();
                      }
                    }
                    if (0 < (int)fStack_ec) {
                      lVar39 = 0;
                      do {
                        pfStack_b0[lVar39] = 0.0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < (int)fStack_ec);
                    }
                    fStack_f0 = (float)uStack_440;
                    fStack_ec = uStack_440._4_4_;
                    uStack_d8 = uStack_428;
                    uStack_d4 = uStack_424;
                    uStack_e0 = uStack_430;
                    uStack_dc = uStack_42c;
                    uStack_c8 = uStack_418;
                    uStack_c4 = uStack_414;
                    uStack_d0 = uStack_420;
                    uStack_cc = uStack_41c;
                    lStack_b8 = lStack_408;
                    uStack_c0 = uStack_410;
                    uStack_bc = uStack_40c;
                    pfVar47 = pfStack_b0;
                    puVar21 = puStack_a8;
                    uStack_e8 = uStack_438;
                    if ((puStack_a8 != &uStack_a0) &&
                       (pfVar47 = pfVar51, puVar21 = &uStack_a0, puStack_a8 != (ulong *)0x0)) {
                      pfVar18 = (float *)puStack_a8[-1];
                      _free();
                    }
                    puStack_a8 = puVar21;
                    pfStack_b0 = pfVar47;
                    if ((int)uStack_440._4_4_ < 3) {
                      puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
                      *puStack_a8 = *puStack_3f8;
                      puStack_a8[1] = puStack_3f8[1];
                      uStack_440._0_4_ = 127.5;
                      puVar40[1] = 0;
                      *puVar40 = 0;
                      puVar40[3] = 0;
                      puVar40[2] = 0;
                      puVar40[5] = 0;
                      puVar40[4] = 0;
                      *(undefined8 *)((long)puVar40 + 0x34) = 0;
                      *(undefined8 *)((long)puVar40 + 0x2c) = 0;
                      if (puStack_3f8 != &uStack_3f0) {
                        pfVar18 = (float *)puStack_3f8[-1];
                        _free();
                      }
                    }
                    else {
                      pfStack_b0 = pfStack_400;
                      puStack_a8 = puStack_3f8;
                    }
                    __ZNSt3__16chrono12steady_clock3nowEv();
                    FUN_1095aed74(&uStack_440,&fStack_f0,iVar27,iVar59,1);
                    if (lStack_b8 != 0) {
                      piVar1 = (int *)(lStack_b8 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar27 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(&fStack_f0);
                      }
                    }
                    if (0 < (int)fStack_ec) {
                      lVar39 = 0;
                      do {
                        pfStack_b0[lVar39] = 0.0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < (int)fStack_ec);
                    }
                    fStack_f0 = (float)uStack_440;
                    fStack_ec = uStack_440._4_4_;
                    uStack_d8 = uStack_428;
                    uStack_d4 = uStack_424;
                    uStack_e0 = uStack_430;
                    uStack_dc = uStack_42c;
                    uStack_c8 = uStack_418;
                    uStack_c4 = uStack_414;
                    uStack_d0 = uStack_420;
                    uStack_cc = uStack_41c;
                    lStack_b8 = lStack_408;
                    uStack_c0 = uStack_410;
                    uStack_bc = uStack_40c;
                    pfVar47 = pfStack_b0;
                    puVar21 = puStack_a8;
                    uStack_e8 = uStack_438;
                    if ((puStack_a8 != &uStack_a0) &&
                       (pfVar47 = pfVar51, puVar21 = &uStack_a0, puStack_a8 != (ulong *)0x0)) {
                      _free(puStack_a8[-1]);
                    }
                    puStack_a8 = puVar21;
                    pfStack_b0 = pfVar47;
                    if ((int)uStack_440._4_4_ < 3) {
                      puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
                      *puStack_a8 = *puStack_3f8;
                      puStack_a8[1] = puStack_3f8[1];
                      uStack_440._0_4_ = 127.5;
                      puVar40[1] = 0;
                      *puVar40 = 0;
                      puVar40[3] = 0;
                      puVar40[2] = 0;
                      puVar40[5] = 0;
                      puVar40[4] = 0;
                      *(undefined8 *)((long)puVar40 + 0x34) = 0;
                      *(undefined8 *)((long)puVar40 + 0x2c) = 0;
                      if (puStack_3f8 != &uStack_3f0) {
                        _free(puStack_3f8[-1]);
                      }
                    }
                    else {
                      pfStack_b0 = pfStack_400;
                      puStack_a8 = puStack_3f8;
                    }
                    FUN_109a852c8(&uStack_220,&fStack_f0,&uStack_1c0);
                    FUN_109a852c8(&uStack_440,&uStack_1b0,&uStack_1c0);
                    FUN_1095af0fc(&iStack_280,param_2,&uStack_440,&uStack_220,&uStack_4a0);
                    if (lStack_408 != 0) {
                      piVar1 = (int *)(lStack_408 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar27 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(&uStack_440);
                      }
                    }
                    lStack_408 = 0;
                    uStack_428 = 0;
                    uStack_424 = 0;
                    uStack_430 = 0;
                    uStack_42c = 0;
                    uStack_418 = 0;
                    uStack_414 = 0;
                    uStack_420 = 0;
                    uStack_41c = 0;
                    if (0 < (int)uStack_440._4_4_) {
                      lVar39 = 0;
                      do {
                        pfStack_400[lVar39] = 0.0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < (int)uStack_440._4_4_);
                    }
                    if (puStack_3f8 != &uStack_3f0 && puStack_3f8 != (ulong *)0x0) {
                      _free(puStack_3f8[-1]);
                    }
                    lVar39 = param_2 + 0x328;
                    uStack_440._0_4_ = fVar75;
                    uStack_440._4_4_ = (float)uVar13;
                    FUN_1095b35b0(lVar39,param_3,&uStack_440);
                    lVar46 = lVar39;
                    __ZNSt3__16chrono12steady_clock3nowEv();
                    uStack_440 = (long *)((double)(lVar46 - (long)pfVar18) / 1000000000.0);
                    lVar39 = lVar39 + 0x28;
                    FUN_1095b14e0(lVar39,&uStack_440);
                    __ZNSt3__16chrono12steady_clock3nowEv();
                    FUN_1095af330(auStack_2e0,&uStack_220,&iStack_280,uStack_470 & 0xffffffff,
                                  uStack_470._4_4_);
                    uStack_458 = NEON_rev64(*(undefined8 *)pfStack_b0,4);
                    FUN_109a829e8(&uStack_440,&uStack_458,(uint)fStack_f0 & 0xfff);
                    (**(code **)(*uStack_440 + 0x18))(uStack_440,&uStack_440,&fStack_f0,0xffffffff);
                    FUN_10918eb6c(&uStack_440);
                    FUN_109a852c8(&uStack_440,&fStack_f0,&uStack_1c0);
                    uStack_458 = CONCAT44(uStack_458._4_4_,0xc2010000);
                    uStack_448 = 0;
                    puStack_450 = &uStack_440;
                    FUN_109a479a0(auStack_2e0,&uStack_458);
                    plVar58 = uStack_440;
                    if (lStack_408 != 0) {
                      piVar1 = (int *)(lStack_408 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar27 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(&uStack_440);
                        plVar58 = uStack_440;
                      }
                    }
                    uStack_440._4_4_ = (float)((ulong)plVar58 >> 0x20);
                    lStack_408 = 0;
                    uStack_428 = 0;
                    uStack_424 = 0;
                    uStack_430 = 0;
                    uStack_42c = 0;
                    uStack_418 = 0;
                    uStack_414 = 0;
                    uStack_420 = 0;
                    uStack_41c = 0;
                    if (0 < (int)uStack_440._4_4_) {
                      lVar46 = 0;
                      do {
                        pfStack_400[lVar46] = 0.0;
                        lVar46 = lVar46 + 1;
                      } while (lVar46 < (int)uStack_440._4_4_);
                    }
                    if (puStack_3f8 != &uStack_3f0 && puStack_3f8 != (ulong *)0x0) {
                      uStack_440 = plVar58;
                      _free(puStack_3f8[-1]);
                    }
                    lVar46 = param_2 + 0x350;
                    uStack_440._0_4_ = fVar75;
                    uStack_440._4_4_ = (float)uVar13;
                    FUN_1095b35b0(lVar46,param_3,&uStack_440);
                    lVar55 = lVar46;
                    __ZNSt3__16chrono12steady_clock3nowEv();
                    uStack_440 = (long *)((double)(lVar55 - lVar39) / 1000000000.0);
                    FUN_1095b14e0(lVar46 + 0x28,&uStack_440);
                    if (lStack_2a8 != 0) {
                      piVar1 = (int *)(lStack_2a8 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar27 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(auStack_2e0);
                      }
                    }
                    lStack_2a8 = 0;
                    uStack_2c8 = 0;
                    uStack_2d0 = 0;
                    uStack_2b8 = 0;
                    uStack_2c0 = 0;
                    if (0 < iStack_2dc) {
                      lVar39 = 0;
                      do {
                        *(undefined4 *)(lStack_2a0 + lVar39 * 4) = 0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < iStack_2dc);
                    }
                    if (puStack_298 != auStack_290 && puStack_298 != (undefined1 *)0x0) {
                      _free(*(undefined8 *)(puStack_298 + -8));
                    }
                    if (lStack_248 != 0) {
                      piVar1 = (int *)(lStack_248 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar27 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(&iStack_280);
                      }
                    }
                    lStack_248 = 0;
                    uStack_268 = 0;
                    uStack_270 = 0;
                    uStack_258 = 0;
                    uStack_260 = 0;
                    if (0 < iStack_27c) {
                      lVar39 = 0;
                      do {
                        *(undefined4 *)(lStack_240 + lVar39 * 4) = 0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < iStack_27c);
                    }
                    if (puStack_238 != auStack_230 && puStack_238 != (undefined1 *)0x0) {
                      _free(*(undefined8 *)(puStack_238 + -8));
                    }
                    if (lStack_1e8 != 0) {
                      piVar1 = (int *)(lStack_1e8 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar27 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(&uStack_220);
                      }
                    }
                    lStack_1e8 = 0;
                    uStack_208 = 0;
                    uStack_210 = 0;
                    uStack_1f8 = 0;
                    uStack_200 = 0;
                    if (0 < (int)uStack_220._4_4_) {
                      lVar39 = 0;
                      do {
                        pfStack_1e0[lVar39] = 0.0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < (int)uStack_220._4_4_);
                    }
                    if (puStack_1d8 != auStack_1d0 && puStack_1d8 != (ulong *)0x0) {
                      _free(puStack_1d8[-1]);
                    }
                    puStack_4f8 = uStack_e8;
                    if (lStack_178 != 0) {
                      piVar1 = (int *)(lStack_178 + 0x14);
                      do {
                        iVar27 = *piVar1;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = iVar27 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (iVar27 + -1 == 0) {
                        func_0x000109a848d4(&uStack_1b0);
                        puStack_4f8 = uStack_e8;
                      }
                    }
                    lStack_178 = 0;
                    uStack_198 = 0;
                    uStack_194 = 0;
                    uStack_1a0 = 0;
                    uStack_19c = 0;
                    uStack_188 = 0;
                    uStack_184 = 0;
                    uStack_190 = 0;
                    uStack_18c = 0;
                    if (0 < uStack_1b0._4_4_) {
                      lVar39 = 0;
                      do {
                        *(undefined4 *)((long)puStack_170 + lVar39 * 4) = 0;
                        lVar39 = lVar39 + 1;
                      } while (lVar39 < uStack_1b0._4_4_);
                    }
                    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                    if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
                      uStack_e8 = puStack_4f8;
                      _free(puStack_168[-1]);
                      puStack_4f8 = uStack_e8;
                    }
                    goto LAB_1095a7cdc;
                  }
                  goto LAB_1095a772c;
                }
                uVar44 = uVar44 - 1;
                pbVar54 = pbVar54 + 1;
              } while (uVar44 != 0);
            }
            pbVar52 = pbVar52 + -uVar53;
            bVar11 = 1 < (long)uVar62;
            uVar62 = uVar63;
          } while (bVar11);
        }
LAB_1095a772c:
        FUN_1095aed74(&uStack_500,&uStack_150,iVar27,iVar59,1);
        if (lStack_b8 != 0) {
          piVar1 = (int *)(lStack_b8 + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(&fStack_f0);
          }
        }
        lStack_b8 = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
        uStack_440 = (long *)CONCAT44(uStack_440._4_4_,(float)uStack_440);
        uStack_e8 = (undefined8 *)CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
        if (0 < (int)fStack_ec) {
          lVar39 = 0;
          do {
            pfStack_b0[lVar39] = 0.0;
            lVar39 = lVar39 + 1;
            uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            uStack_440 = (long *)CONCAT44(uStack_440._4_4_,(float)uStack_440);
            uStack_e8 = (undefined8 *)CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
          } while (lVar39 < (int)fStack_ec);
        }
      }
      else {
        FUN_1095aed74(&uStack_440,&uStack_150,(int)pfStack_110[1] << 1,(int)*pfStack_110 << 1,1);
        if (lStack_b8 != 0) {
          piVar1 = (int *)(lStack_b8 + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(&fStack_f0);
          }
        }
        if (0 < (int)fStack_ec) {
          lVar39 = 0;
          do {
            pfStack_b0[lVar39] = 0.0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)fStack_ec);
        }
        fStack_f0 = (float)uStack_440;
        fStack_ec = uStack_440._4_4_;
        uStack_d8 = uStack_428;
        uStack_d4 = uStack_424;
        uStack_e0 = uStack_430;
        uStack_dc = uStack_42c;
        uStack_c8 = uStack_418;
        uStack_c4 = uStack_414;
        uStack_d0 = uStack_420;
        uStack_cc = uStack_41c;
        lStack_b8 = lStack_408;
        uStack_c0 = uStack_410;
        uStack_bc = uStack_40c;
        pfVar18 = pfStack_b0;
        puVar21 = puStack_a8;
        uStack_e8 = uStack_438;
        if ((puStack_a8 != &uStack_a0) &&
           (pfVar18 = pfVar51, puVar21 = &uStack_a0, puStack_a8 != (ulong *)0x0)) {
          _free(puStack_a8[-1]);
        }
        puStack_a8 = puVar21;
        pfStack_b0 = pfVar18;
        if ((int)uStack_440._4_4_ < 3) {
          puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
          *puStack_a8 = *puStack_3f8;
          puStack_a8[1] = puStack_3f8[1];
          uStack_440._0_4_ = 127.5;
          puVar40[1] = 0;
          *puVar40 = 0;
          puVar40[3] = 0;
          puVar40[2] = 0;
          puVar40[5] = 0;
          puVar40[4] = 0;
          *(undefined8 *)((long)puVar40 + 0x34) = 0;
          *(undefined8 *)((long)puVar40 + 0x2c) = 0;
          if (puStack_3f8 != &uStack_3f0) {
            _free(puStack_3f8[-1]);
          }
        }
        else {
          pfStack_b0 = pfStack_400;
          puStack_a8 = puStack_3f8;
        }
        pfVar18 = (float *)&uStack_440;
        FUN_1095aefe8(pfVar18,&fStack_f0);
        if (lStack_b8 != 0) {
          piVar1 = (int *)(lStack_b8 + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            pfVar18 = &fStack_f0;
            func_0x000109a848d4();
          }
        }
        if (0 < (int)fStack_ec) {
          lVar39 = 0;
          do {
            pfStack_b0[lVar39] = 0.0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)fStack_ec);
        }
        fStack_f0 = (float)uStack_440;
        fStack_ec = uStack_440._4_4_;
        uStack_d8 = uStack_428;
        uStack_d4 = uStack_424;
        uStack_e0 = uStack_430;
        uStack_dc = uStack_42c;
        uStack_c8 = uStack_418;
        uStack_c4 = uStack_414;
        uStack_d0 = uStack_420;
        uStack_cc = uStack_41c;
        lStack_b8 = lStack_408;
        uStack_c0 = uStack_410;
        uStack_bc = uStack_40c;
        pfVar47 = pfStack_b0;
        puVar21 = puStack_a8;
        uStack_e8 = uStack_438;
        if ((puStack_a8 != &uStack_a0) &&
           (pfVar47 = pfVar51, puVar21 = &uStack_a0, puStack_a8 != (ulong *)0x0)) {
          pfVar18 = (float *)puStack_a8[-1];
          _free();
        }
        puStack_a8 = puVar21;
        pfStack_b0 = pfVar47;
        if ((int)uStack_440._4_4_ < 3) {
          puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
          *puStack_a8 = *puStack_3f8;
          puStack_a8[1] = puStack_3f8[1];
          uStack_440._0_4_ = 127.5;
          puVar40[1] = 0;
          *puVar40 = 0;
          puVar40[3] = 0;
          puVar40[2] = 0;
          puVar40[5] = 0;
          puVar40[4] = 0;
          *(undefined8 *)((long)puVar40 + 0x34) = 0;
          *(undefined8 *)((long)puVar40 + 0x2c) = 0;
          if (puStack_3f8 != &uStack_3f0) {
            pfVar18 = (float *)puStack_3f8[-1];
            _free();
          }
        }
        else {
          pfStack_b0 = pfStack_400;
          puStack_a8 = puStack_3f8;
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
        iVar27 = (int)(fVar72 * (float)*(int *)(param_2 + 900));
        iVar59 = (int)(fVar72 * (float)*(int *)(param_2 + 0x380));
        FUN_1095aed74(&uStack_440,&fStack_f0,iVar27,iVar59,1);
        if (lStack_b8 != 0) {
          piVar1 = (int *)(lStack_b8 + 0x14);
          do {
            iVar3 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar3 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&fStack_f0);
          }
        }
        if (0 < (int)fStack_ec) {
          lVar39 = 0;
          do {
            pfStack_b0[lVar39] = 0.0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)fStack_ec);
        }
        fStack_f0 = (float)uStack_440;
        fStack_ec = uStack_440._4_4_;
        uStack_d8 = uStack_428;
        uStack_d4 = uStack_424;
        uStack_e0 = uStack_430;
        uStack_dc = uStack_42c;
        uStack_c8 = uStack_418;
        uStack_c4 = uStack_414;
        uStack_d0 = uStack_420;
        uStack_cc = uStack_41c;
        lStack_b8 = lStack_408;
        uStack_c0 = uStack_410;
        uStack_bc = uStack_40c;
        pfVar47 = pfStack_b0;
        puVar21 = puStack_a8;
        uStack_e8 = uStack_438;
        if ((puStack_a8 != &uStack_a0) &&
           (pfVar47 = pfVar51, puVar21 = &uStack_a0, puStack_a8 != (ulong *)0x0)) {
          _free(puStack_a8[-1]);
        }
        puStack_a8 = puVar21;
        pfStack_b0 = pfVar47;
        if ((int)uStack_440._4_4_ < 3) {
          puVar40 = (undefined8 *)((ulong)&uStack_440 | 4);
          *puStack_a8 = *puStack_3f8;
          puStack_a8[1] = puStack_3f8[1];
          uStack_440._0_4_ = 127.5;
          puVar40[1] = 0;
          *puVar40 = 0;
          puVar40[3] = 0;
          puVar40[2] = 0;
          puVar40[5] = 0;
          puVar40[4] = 0;
          *(undefined8 *)((long)puVar40 + 0x34) = 0;
          *(undefined8 *)((long)puVar40 + 0x2c) = 0;
          if (puStack_3f8 != &uStack_3f0) {
            _free(puStack_3f8[-1]);
          }
        }
        else {
          pfStack_b0 = pfStack_400;
          puStack_a8 = puStack_3f8;
        }
        uStack_440._0_4_ = 127.5;
        puStack_218 = &uStack_440;
        uStack_438._4_4_ = 0;
        uStack_430 = 0;
        uStack_440._4_4_ = 0.0;
        uStack_438._0_4_ = 0.0;
        pfStack_400 = (float *)&uStack_438;
        uStack_424 = 0;
        uStack_420 = 0;
        uStack_42c = 0;
        uStack_428 = 0;
        uStack_414 = 0;
        uStack_41c = 0;
        uStack_418 = 0;
        lStack_408 = 0;
        uStack_410 = 0;
        uStack_40c = 0;
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        uStack_1a8 = param_2 + 0x7c8;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_1b0._0_4_ = 0x1010000;
        uStack_220 = (short *)CONCAT44(uStack_220._4_4_,0x2010000);
        uStack_210 = 0;
        puStack_3f8 = &uStack_3f0;
        iStack_280 = iVar27;
        iStack_27c = iVar59;
        FUN_109b0f718(0,0,&uStack_1b0,&uStack_220,&iStack_280,1);
        FUN_1095af0fc(&uStack_1b0,param_2,&uStack_440,&fStack_f0,&uStack_4a0);
        lVar39 = param_2 + 0x328;
        uStack_220 = param_3;
        FUN_1095b35b0(lVar39,param_3,&uStack_220);
        lVar46 = lVar39;
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_220 = (short *)((double)(lVar46 - (long)pfVar18) / 1000000000.0);
        lVar39 = lVar39 + 0x28;
        FUN_1095b14e0(lVar39,&uStack_220);
        __ZNSt3__16chrono12steady_clock3nowEv();
        FUN_1095af330(&uStack_220,&fStack_f0,&uStack_1b0,uStack_470 & 0xffffffff,uStack_470._4_4_);
        if (lStack_b8 != 0) {
          piVar1 = (int *)(lStack_b8 + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(&fStack_f0);
          }
        }
        if (0 < (int)fStack_ec) {
          lVar46 = 0;
          do {
            pfStack_b0[lVar46] = 0.0;
            lVar46 = lVar46 + 1;
          } while (lVar46 < (int)fStack_ec);
        }
        uStack_e8._0_4_ = SUB84(puStack_218,0);
        uStack_e8._4_4_ = (undefined4)((ulong)puStack_218 >> 0x20);
        fStack_f0 = SUB84(uStack_220,0);
        uStack_d8 = (undefined4)uStack_208;
        uStack_d4 = (undefined4)((ulong)uStack_208 >> 0x20);
        uStack_e0 = (undefined4)uStack_210;
        uStack_dc = (undefined4)((ulong)uStack_210 >> 0x20);
        uStack_c8 = (undefined4)uStack_1f8;
        uStack_c4 = (undefined4)((ulong)uStack_1f8 >> 0x20);
        uStack_d0 = (undefined4)uStack_200;
        uStack_cc = (undefined4)((ulong)uStack_200 >> 0x20);
        lStack_b8 = lStack_1e8;
        uStack_c0 = (undefined4)uStack_1f0;
        uStack_bc = (undefined4)((ulong)uStack_1f0 >> 0x20);
        fStack_ec = uStack_220._4_4_;
        pfVar18 = pfStack_b0;
        puVar21 = puStack_a8;
        if ((puStack_a8 != &uStack_a0) &&
           (pfVar18 = pfVar51, puVar21 = &uStack_a0, puStack_a8 != (ulong *)0x0)) {
          _free(puStack_a8[-1]);
        }
        puStack_a8 = puVar21;
        pfStack_b0 = pfVar18;
        if ((int)uStack_220._4_4_ < 3) {
          puVar40 = (undefined8 *)((ulong)&uStack_220 | 4);
          *puStack_a8 = *puStack_1d8;
          puStack_a8[1] = puStack_1d8[1];
          uStack_220 = (short *)CONCAT44(uStack_220._4_4_,0x42ff0000);
          puVar40[1] = 0;
          *puVar40 = 0;
          puVar40[3] = 0;
          puVar40[2] = 0;
          puVar40[5] = 0;
          puVar40[4] = 0;
          *(undefined8 *)((long)puVar40 + 0x34) = 0;
          *(undefined8 *)((long)puVar40 + 0x2c) = 0;
          if (puStack_1d8 != auStack_1d0) {
            _free(puStack_1d8[-1]);
          }
        }
        else {
          pfStack_b0 = pfStack_1e0;
          puStack_a8 = puStack_1d8;
        }
        lVar46 = param_2 + 0x350;
        uStack_220 = param_3;
        FUN_1095b35b0(lVar46,param_3,&uStack_220);
        lVar55 = lVar46;
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_220 = (short *)((double)(lVar55 - lVar39) / 1000000000.0);
        FUN_1095b14e0(lVar46 + 0x28,&uStack_220);
        if (lStack_178 != 0) {
          piVar1 = (int *)(lStack_178 + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(&uStack_1b0);
          }
        }
        lStack_178 = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_190 = 0;
        uStack_18c = 0;
        if (0 < uStack_1b0._4_4_) {
          lVar39 = 0;
          do {
            *(undefined4 *)((long)puStack_170 + lVar39 * 4) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < uStack_1b0._4_4_);
        }
        if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
          _free(puStack_168[-1]);
        }
        if (lStack_408 != 0) {
          piVar1 = (int *)(lStack_408 + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(&uStack_440);
          }
        }
        lStack_408 = 0;
        uStack_428 = 0;
        uStack_424 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        uStack_418 = 0;
        uStack_414 = 0;
        uStack_420 = 0;
        uStack_41c = 0;
        if (0 < (int)uStack_440._4_4_) {
          lVar39 = 0;
          do {
            pfStack_400[lVar39] = 0.0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)uStack_440._4_4_);
        }
        if (puStack_3f8 != &uStack_3f0 && puStack_3f8 != (ulong *)0x0) {
          _free(puStack_3f8[-1]);
        }
        puStack_4f8 = (undefined8 *)CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
LAB_1095a7cdc:
        puVar40 = (undefined8 *)((ulong)&fStack_f0 | 4);
        uStack_500 = CONCAT44(fStack_ec,fStack_f0);
        uStack_4e8 = CONCAT44(uStack_d4,uStack_d8);
        pbStack_4f0 = (byte *)CONCAT44(uStack_dc,uStack_e0);
        pfStack_4c0 = (float *)((ulong)&uStack_500 | 8);
        uStack_4d8 = CONCAT44(uStack_c4,uStack_c8);
        uStack_4e0 = CONCAT44(uStack_cc,uStack_d0);
        uStack_4d0 = CONCAT44(uStack_bc,uStack_c0);
        lStack_4c8 = lStack_b8;
        puStack_4b8 = &uStack_4b0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        if ((int)fStack_ec < 3) {
          uStack_4b0 = *puStack_a8;
          uStack_4a8 = puStack_a8[1];
        }
        else {
          pfStack_4c0 = pfStack_b0;
          puStack_4b8 = puStack_a8;
          pfStack_b0 = pfVar51;
          puStack_a8 = &uStack_a0;
        }
        fStack_f0 = 127.5;
        puVar40[1] = 0;
        *puVar40 = 0;
        puVar40[3] = 0;
        puVar40[2] = 0;
        puVar40[5] = 0;
        puVar40[4] = 0;
        *(undefined8 *)((long)puVar40 + 0x34) = 0;
        *(undefined8 *)((long)puVar40 + 0x2c) = 0;
        uStack_e8 = puStack_4f8;
      }
      if (puStack_a8 != &uStack_a0 && puStack_a8 != (ulong *)0x0) {
        _free(puStack_a8[-1]);
      }
      if (lStack_118 != 0) {
        piVar1 = (int *)(lStack_118 + 0x14);
        do {
          iVar27 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar27 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
        }
      }
      lStack_118 = 0;
      uStack_138 = 0;
      pbStack_140 = (byte *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      dVar69 = (double)uStack_440;
      if (0 < (int)uStack_150._4_4_) {
        lVar39 = 0;
        do {
          pfStack_110[lVar39] = 0.0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < (int)uStack_150._4_4_);
      }
    }
    uStack_440 = (long *)dVar69;
    if (puStack_108 != &uStack_100 && puStack_108 != (ulong *)0x0) {
      _free(puStack_108[-1]);
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
      do {
        iVar27 = *piVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar27 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar27 + -1 == 0) {
        func_0x000109a848d4(param_1);
      }
    }
    if (0 < (int)*pfVar23) {
      lVar39 = 0;
      lVar46 = *(long *)(param_1 + 0x10);
      do {
        *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
        lVar39 = lVar39 + 1;
      } while (lVar39 < (int)*pfVar23);
    }
    *(undefined8 **)(param_1 + 2) = puStack_4f8;
    *(ulong *)param_1 = uStack_500;
    *(undefined8 *)(param_1 + 6) = uStack_4e8;
    *(byte **)(param_1 + 4) = pbStack_4f0;
    *(undefined8 *)(param_1 + 10) = uStack_4d8;
    *(undefined8 *)(param_1 + 8) = uStack_4e0;
    *(long *)(param_1 + 0xe) = lStack_4c8;
    *(undefined8 *)(param_1 + 0xc) = uStack_4d0;
    pfVar51 = *(float **)(param_1 + 0x12);
    iVar27 = uStack_500._4_4_;
    if (pfVar51 != pfVar25) {
      if (pfVar51 != (float *)0x0) {
        _free(*(ulong *)(pfVar51 + -2));
      }
      *(float **)(param_1 + 0x10) = param_1 + 2;
      *(float **)(param_1 + 0x12) = pfVar25;
      pfVar51 = pfVar25;
      iVar27 = uStack_500._4_4_;
    }
    if (iVar27 < 3) {
      puVar40 = (undefined8 *)((ulong)&uStack_500 | 4);
      *(ulong *)pfVar51 = *puStack_4b8;
      *(ulong *)(pfVar51 + 2) = puStack_4b8[1];
      uStack_500 = CONCAT44(uStack_500._4_4_,0x42ff0000);
      puVar40[1] = 0;
      *puVar40 = 0;
      puVar40[3] = 0;
      puVar40[2] = 0;
      puVar40[5] = 0;
      puVar40[4] = 0;
      *(undefined8 *)((long)puVar40 + 0x34) = 0;
      *(undefined8 *)((long)puVar40 + 0x2c) = 0;
      if (puStack_4b8 != &uStack_4b0) {
        _free(puStack_4b8[-1]);
      }
    }
    else {
      *(float **)(param_1 + 0x10) = pfStack_4c0;
      *(ulong **)(param_1 + 0x12) = puStack_4b8;
    }
    param_2 = param_2 + 0x300;
    pfVar25 = (float *)&uStack_440;
    uStack_440._0_4_ = fVar75;
    uStack_440._4_4_ = (float)uVar13;
    FUN_1095b35b0(param_2,param_3);
    lVar39 = param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_440 = (long *)((double)(lVar39 - lVar50) / 1000000000.0);
    pfVar51 = (float *)(param_2 + 0x28);
    pfVar23 = (float *)&uStack_440;
    FUN_1095b14e0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_1b0);
  func_0x00010567aa40(&fStack_f0);
  func_0x00010567aa40(&uStack_150);
  func_0x00010567aa40(param_1);
  __Unwind_Resume();
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(code *)(pfVar51 + 0x54) == (code)0x1) {
    pfVar18 = pfVar51;
    if (*(code *)((long)pfVar51 + 0x195) == (code)0x1) {
      fStack_738 = (float)(uint)(byte)*(code *)(pfVar51 + 0x57);
      fStack_798 = (float)(uint)(byte)*(code *)(pfVar51 + 0x61);
      uStack_908._0_4_ = (float)(uint)(byte)*(code *)((long)pfVar51 + 0x185);
      FUN_10926db08(&uStack_8a0);
      uStack_660 = (double *)&uStack_650;
      uStack_658._0_4_ = 3;
      uStack_650 = &fStack_738;
      uStack_648 = 0x9389420;
      uStack_644 = 1;
      uStack_638 = &fStack_798;
      uStack_640._0_4_ = 0x9389470;
      uStack_640._4_4_ = 1;
      uStack_630 = 0x9389420;
      uStack_62c = 1;
      pcStack_628 = FUN_109389470;
      pcStack_620 = (code *)&uStack_908;
      ppcStack_618 = (code **)0x109389420;
      pcStack_610 = FUN_109389470;
      FUN_10937ad5c(&uStack_8a0,&UNK_10f5753fc,uStack_660,3);
      FUN_10926dc5c(&uStack_6d8,&uStack_898,&uStack_660);
      ppuStack_830 = &PTR_DAT_11088d708;
      uStack_8a0._0_4_ = 5.397361e-29;
      uStack_8a0._4_4_ = 1.4013e-45;
      uStack_898._0_4_ = 0x1088d7b0;
      uStack_898._4_4_ = 1;
      if ((long)pcStack_848 < 0) {
        __ZdlPv(ppcStack_858);
      }
      uStack_898 = (double *)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(&uStack_890);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&uStack_8a0,&PTR_PTR_11088d720);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(&ppuStack_830);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a2,&uStack_6d8);
      if (iStack_6c4 < 0) {
        __ZdlPv(CONCAT44(uStack_6d8._4_4_,(float)uStack_6d8));
      }
      dVar69 = *(double *)(pfVar51 + 0x9e);
      if (*(ulong *)(pfVar51 + 0x9c) != 0) {
        dVar69 = dVar69 / (double)*(ulong *)(pfVar51 + 0x9c);
      }
      uStack_660 = (double *)(dVar69 * 1000.0);
      FUN_1095b03e8(&uStack_8a0,&UNK_10f57544c,&uStack_660);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a4,&uStack_8a0);
      if (uStack_890._4_4_ < 0) {
        __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
      }
      dVar69 = *(double *)(pfVar51 + 0xae);
      if (*(ulong *)(pfVar51 + 0xac) != 0) {
        dVar69 = dVar69 / (double)*(ulong *)(pfVar51 + 0xac);
      }
      uStack_660 = (double *)(dVar69 * 1000.0);
      FUN_1095b03e8(&uStack_8a0,&UNK_10f575475,&uStack_660);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a6,&uStack_8a0);
      if (uStack_890._4_4_ < 0) {
        __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
      }
      dVar69 = *(double *)(pfVar51 + 0xbe);
      if (*(ulong *)(pfVar51 + 0xbc) != 0) {
        dVar69 = dVar69 / (double)*(ulong *)(pfVar51 + 0xbc);
      }
      uStack_660 = (double *)(dVar69 * 1000.0);
      FUN_1095b03e8(&uStack_8a0,&UNK_10f5754a3,&uStack_660);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a8,&uStack_8a0);
      if (uStack_890._4_4_ < 0) {
        __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
      }
      plVar58 = *(long **)(pfVar51 + 0x14e);
      if (plVar58 != (long *)0x0) {
        do {
          pdVar22 = (double *)(plVar58 + 2);
          pdVar42 = pdVar22;
          if (*(char *)((long)plVar58 + 0x27) < '\0') {
            pdVar42 = (double *)*pdVar22;
          }
          uStack_660._0_4_ = SUB84(pdVar42,0);
          uStack_660._4_4_ = (float)((ulong)pdVar42 >> 0x20);
          FUN_1093780e0(&uStack_8a0,&UNK_10f5754da,&uStack_660);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5aa,&uStack_8a0);
          if (uStack_890._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
          }
          pcVar4 = "enabled";
          if ((char)plVar58[7] == '\0') {
            pcVar4 = "disabled";
          }
          uStack_660._0_4_ = SUB84(pcVar4,0);
          uStack_660._4_4_ = (float)((ulong)pcVar4 >> 0x20);
          FUN_1093780e0(&uStack_8a0,&UNK_10f5754fd,&uStack_660);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5ac,&uStack_8a0);
          if (uStack_890._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
          }
          pfVar18 = pfVar51 + 0xca;
          uStack_660 = pdVar22;
          FUN_1095b35b0(pfVar18,pdVar22,&uStack_660);
          dVar69 = *(double *)(pfVar18 + 0x18);
          if (*(ulong *)(pfVar18 + 0x16) != 0) {
            dVar69 = dVar69 / (double)*(ulong *)(pfVar18 + 0x16);
          }
          uStack_6d8 = (undefined4 *)(dVar69 * 1000.0);
          FUN_1095b03e8(&uStack_8a0,&UNK_10f57552a,&uStack_6d8);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5ae,&uStack_8a0);
          if (uStack_890._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
          }
          pfVar18 = pfVar51 + 0xca;
          uStack_660 = pdVar22;
          FUN_1095b35b0(pfVar18,pdVar22,&uStack_660);
          dVar69 = *(double *)(pfVar18 + 0x18);
          if (*(ulong *)(pfVar18 + 0x16) != 0) {
            dVar69 = dVar69 / (double)*(ulong *)(pfVar18 + 0x16);
          }
          uStack_6d8 = (undefined4 *)(dVar69 * 1000.0);
          FUN_1095b03e8(&uStack_8a0,&UNK_10f57555a,&uStack_6d8);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5b0,&uStack_8a0);
          if (uStack_890._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
          }
          pfVar18 = pfVar51 + 0xc0;
          uStack_660 = pdVar22;
          FUN_1095b35b0(pfVar18,pdVar22,&uStack_660);
          dVar69 = *(double *)(pfVar18 + 0x18);
          if (*(ulong *)(pfVar18 + 0x16) != 0) {
            dVar69 = dVar69 / (double)*(ulong *)(pfVar18 + 0x16);
          }
          uStack_6d8 = (undefined4 *)(dVar69 * 1000.0);
          FUN_1095b03e8(&uStack_8a0,&UNK_10f575597,&uStack_6d8);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5b2,&uStack_8a0);
          if (uStack_890._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0));
          }
          plVar58 = (long *)*plVar58;
        } while (plVar58 != (long *)0x0);
      }
      FUN_10937e740(&uStack_8a0,&DAT_10f68f57e);
      pfVar18 = (float *)0x1;
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5b4,&uStack_8a0);
      if (uStack_890._4_4_ < 0) {
        pfVar18 = (float *)CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0);
        __ZdlPv();
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    pfVar47 = pfVar51 + 0xde;
    pfVar19 = pfVar18;
    if (pfVar47 != pfVar23) {
      if (*(long *)(pfVar23 + 0xe) != 0) {
        piVar1 = (int *)(*(long *)(pfVar23 + 0xe) + 0x14);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (*(long *)(pfVar51 + 0xec) != 0) {
        piVar1 = (int *)(*(long *)(pfVar51 + 0xec) + 0x14);
        do {
          iVar27 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar27 + -1 == 0) {
          pfVar19 = pfVar47;
          func_0x000109a848d4();
        }
      }
      pfVar51[0xec] = 0.0;
      pfVar51[0xed] = 0.0;
      pfVar29 = pfVar51 + 0xe2;
      pfVar51[0xe4] = 0.0;
      pfVar51[0xe5] = 0.0;
      pfVar29[0] = 0.0;
      pfVar29[1] = 0.0;
      pfVar51[0xe8] = 0.0;
      pfVar51[0xe9] = 0.0;
      pfVar51[0xe6] = 0.0;
      pfVar51[0xe7] = 0.0;
      if ((int)pfVar51[0xdf] < 1) {
        *pfVar47 = *pfVar23;
LAB_1095a8fac:
        if (2 < (int)pfVar23[1]) goto LAB_1095a8fe0;
        pfVar51[0xdf] = pfVar23[1];
        *(undefined8 *)(pfVar51 + 0xe0) = *(undefined8 *)(pfVar23 + 2);
        puVar40 = *(undefined8 **)(pfVar23 + 0x12);
        puVar57 = *(undefined8 **)(pfVar51 + 0xf0);
        *puVar57 = *puVar40;
        puVar57[1] = puVar40[1];
      }
      else {
        lVar39 = 0;
        lVar46 = *(long *)(pfVar51 + 0xee);
        do {
          *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar39 < (int)pfVar51[0xdf]);
        *pfVar47 = *pfVar23;
        if ((int)pfVar51[0xdf] < 3) goto LAB_1095a8fac;
LAB_1095a8fe0:
        func_0x000109a84868(pfVar47,pfVar23);
        pfVar19 = pfVar47;
      }
      uVar70 = *(undefined8 *)(pfVar23 + 4);
      *(undefined8 *)(pfVar51 + 0xe4) = *(undefined8 *)(pfVar23 + 6);
      *(undefined8 *)pfVar29 = uVar70;
      uVar70 = *(undefined8 *)(pfVar23 + 8);
      *(undefined8 *)(pfVar51 + 0xe8) = *(undefined8 *)(pfVar23 + 10);
      *(undefined8 *)(pfVar51 + 0xe6) = uVar70;
      uVar70 = *(undefined8 *)(pfVar23 + 0xc);
      *(undefined8 *)(pfVar51 + 0xec) = *(undefined8 *)(pfVar23 + 0xe);
      *(undefined8 *)(pfVar51 + 0xea) = uVar70;
    }
    *(code *)(pfVar51 + 0xf6) = (code)0x1;
    if ((((((uint)pfVar51[0x57] & 1) == 0) && (((uint)pfVar51[0x6d] & 1) == 0)) &&
        (((uint)pfVar51[0x49] & 1) == 0)) &&
       ((*(long *)(pfVar51 + 0xf8) == *(long *)(pfVar51 + 0xfa) && (*(long *)(pfVar51 + 0x150) == 1)
        ))) {
      FUN_1095b0084(pfVar51,pfVar23);
      goto LAB_1095aab84;
    }
    uStack_900 = (undefined8 *)CONCAT44(uStack_900._4_4_,(float)uStack_900);
    uStack_6d0 = (float *)CONCAT44(uStack_6d0._4_4_,(float)uStack_6d0);
    pdVar22 = uStack_660;
    if (*(code *)(pfVar51 + 0x54) == (code)0x1) {
      if (((uint)pfVar51[0x61] & 1) == 0) {
        uStack_900 = (undefined8 *)CONCAT44(uStack_900._4_4_,(float)uStack_900);
        uStack_6d0 = (float *)CONCAT44(uStack_6d0._4_4_,(float)uStack_6d0);
        if ((*(code *)(pfVar51 + 0x6d) != (code)0x1) ||
           (pfVar47 = pfVar51 + 0x1f2,
           uStack_900 = (undefined8 *)CONCAT44(uStack_900._4_4_,(float)uStack_900),
           uStack_6d0 = (float *)CONCAT44(uStack_6d0._4_4_,(float)uStack_6d0), pfVar47 == pfVar25))
        goto LAB_1095a9b74;
        if (*(long *)(pfVar25 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(pfVar25 + 0xe) + 0x14);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        if (*(long *)(pfVar51 + 0x200) != 0) {
          piVar1 = (int *)(*(long *)(pfVar51 + 0x200) + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            pfVar19 = pfVar47;
            func_0x000109a848d4();
          }
        }
        pfVar51[0x200] = 0.0;
        pfVar51[0x201] = 0.0;
        pfVar29 = pfVar51 + 0x1f6;
        pfVar51[0x1f8] = 0.0;
        pfVar51[0x1f9] = 0.0;
        pfVar29[0] = 0.0;
        pfVar29[1] = 0.0;
        pfVar51[0x1fc] = 0.0;
        pfVar51[0x1fd] = 0.0;
        pfVar51[0x1fa] = 0.0;
        pfVar51[0x1fb] = 0.0;
        if ((int)pfVar51[499] < 1) {
          *pfVar47 = *pfVar25;
LAB_1095a9b10:
          if (2 < (int)pfVar25[1]) goto LAB_1095a9b44;
          pfVar51[499] = pfVar25[1];
          *(undefined8 *)(pfVar51 + 500) = *(undefined8 *)(pfVar25 + 2);
          puVar40 = *(undefined8 **)(pfVar25 + 0x12);
          puVar57 = *(undefined8 **)(pfVar51 + 0x204);
          *puVar57 = *puVar40;
          puVar57[1] = puVar40[1];
          pdVar22 = uStack_660;
        }
        else {
          lVar39 = 0;
          lVar46 = *(long *)(pfVar51 + 0x202);
          do {
            *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)pfVar51[499]);
          *pfVar47 = *pfVar25;
          if ((int)pfVar51[499] < 3) goto LAB_1095a9b10;
LAB_1095a9b44:
          func_0x000109a84868();
          pfVar19 = pfVar47;
          pdVar22 = uStack_660;
        }
        uVar70 = *(undefined8 *)(pfVar25 + 4);
        *(undefined8 *)(pfVar51 + 0x1f8) = *(undefined8 *)(pfVar25 + 6);
        *(undefined8 *)pfVar29 = uVar70;
        uVar70 = *(undefined8 *)(pfVar25 + 8);
        *(undefined8 *)(pfVar51 + 0x1fc) = *(undefined8 *)(pfVar25 + 10);
        *(undefined8 *)(pfVar51 + 0x1fa) = uVar70;
        uVar70 = *(undefined8 *)(pfVar25 + 0xc);
        *(undefined8 *)(pfVar51 + 0x200) = *(undefined8 *)(pfVar25 + 0xe);
        *(undefined8 *)(pfVar51 + 0x1fe) = uVar70;
      }
      else {
        fVar72 = pfVar25[2];
        fVar75 = pfVar25[3];
        uStack_8a0._0_4_ = 127.5;
        pcVar16 = (code *)((ulong)&uStack_8a0 | 8);
        uStack_898._4_4_ = 0;
        uStack_890._0_4_ = 0;
        uStack_8a0._4_4_ = 0.0;
        uStack_898._0_4_ = 0;
        uStack_888._4_4_ = 0;
        uStack_880._0_4_ = 0;
        uStack_890._4_4_ = 0;
        uStack_888._0_4_ = 0.0;
        uStack_878._4_4_ = 0;
        uStack_880._4_4_ = 0;
        uStack_878._0_4_ = 0;
        pcStack_868 = (code *)0x0;
        uStack_870 = 0;
        uStack_86c = 0;
        pcStack_848 = (code *)0x0;
        pcStack_850 = (code *)0x0;
        uVar70 = NEON_rev64(*(undefined8 *)(pfVar51 + 0x47),4);
        uStack_660._0_4_ = (float)uVar70;
        uStack_660._4_4_ = (float)((ulong)uVar70 >> 0x20);
        pcStack_860 = pcVar16;
        ppcStack_858 = &pcStack_850;
        FUN_109a83fd0(&uStack_8a0,2,&uStack_660,0);
        if ((*(code *)(pfVar51 + 0x61) == (code)0x1) && (((uint)pfVar51[0x6d] & 1) == 0)) {
          pfVar19 = (float *)&uStack_660;
          FUN_1095aed74(pfVar19,pfVar25,pfVar51[0x47],pfVar51[0x48],0);
          if (pcStack_868 != (code *)0x0) {
            pcVar48 = pcStack_868 + 0x14;
            do {
              iVar27 = *(int *)pcVar48;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pcVar48,0x10);
              if (bVar11) {
                *(int *)pcVar48 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              pfVar19 = (float *)&uStack_8a0;
              func_0x000109a848d4();
            }
          }
          if (0 < (int)uStack_8a0._4_4_) {
            lVar39 = 0;
            do {
              *(undefined4 *)(pcStack_860 + lVar39 * 4) = 0;
              lVar39 = lVar39 + 1;
            } while (lVar39 < (int)uStack_8a0._4_4_);
          }
          uStack_898._0_4_ = (int)uStack_658;
          uStack_898._4_4_ = uStack_658._4_4_;
          uStack_8a0._0_4_ = (float)uStack_660;
          uStack_8a0._4_4_ = uStack_660._4_4_;
          uStack_888._0_4_ = (float)uStack_648;
          uStack_888._4_4_ = uStack_644;
          uStack_880._0_4_ = (undefined4)uStack_640;
          uStack_880._4_4_ = uStack_640._4_4_;
          pcStack_868 = pcStack_628;
          uStack_870 = uStack_630;
          uStack_86c = uStack_62c;
          pcVar48 = pcStack_860;
          ppcVar15 = ppcStack_858;
          uStack_890 = (double *)uStack_650;
          uStack_878 = uStack_638;
          if ((ppcStack_858 != &pcStack_850) &&
             (pcVar48 = pcVar16, ppcVar15 = &pcStack_850, ppcStack_858 != (code **)0x0)) {
            pfVar19 = (float *)ppcStack_858[-1];
            _free();
          }
          ppcStack_858 = ppcVar15;
          pcStack_860 = pcVar48;
          ppcVar15 = ppcStack_618;
          if ((int)uStack_660._4_4_ < 3) {
            puVar40 = (undefined8 *)((ulong)&uStack_660 | 4);
            *ppcStack_858 = *ppcStack_618;
            ppcStack_858[1] = ppcVar15[1];
            uStack_660._0_4_ = 127.5;
            puVar40[1] = 0;
            *puVar40 = 0;
            puVar40[3] = 0;
            puVar40[2] = 0;
            puVar40[5] = 0;
            puVar40[4] = 0;
            *(undefined8 *)((long)puVar40 + 0x34) = 0;
            *(undefined8 *)((long)puVar40 + 0x2c) = 0;
            if (ppcVar15 != &pcStack_610) {
              pfVar19 = (float *)ppcVar15[-1];
              _free();
            }
          }
          else {
            ppcStack_858 = ppcStack_618;
            pcStack_860 = pcStack_620;
          }
          pfVar25 = pfVar51 + 0x1da;
          if (pfVar25 != (float *)&uStack_8a0) {
            if (pcStack_868 != (code *)0x0) {
              pcVar16 = pcStack_868 + 0x14;
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                if (bVar11) {
                  *(int *)pcVar16 = *(int *)pcVar16 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(long *)(pfVar51 + 0x1e8) != 0) {
              piVar1 = (int *)(*(long *)(pfVar51 + 0x1e8) + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                pfVar19 = pfVar25;
                func_0x000109a848d4();
              }
            }
            pfVar51[0x1e8] = 0.0;
            pfVar51[0x1e9] = 0.0;
            pfVar47 = pfVar51 + 0x1de;
            pfVar51[0x1e0] = 0.0;
            pfVar51[0x1e1] = 0.0;
            pfVar47[0] = 0.0;
            pfVar47[1] = 0.0;
            pfVar51[0x1e4] = 0.0;
            pfVar51[0x1e5] = 0.0;
            pfVar51[0x1e2] = 0.0;
            pfVar51[0x1e3] = 0.0;
            if ((int)pfVar51[0x1db] < 1) {
              *pfVar25 = (float)uStack_8a0;
LAB_1095ac1d4:
              if (2 < (int)uStack_8a0._4_4_) goto LAB_1095ac208;
              pfVar51[0x1db] = uStack_8a0._4_4_;
              *(ulong *)(pfVar51 + 0x1dc) = CONCAT44(uStack_898._4_4_,(int)uStack_898);
              plVar58 = *(long **)(pfVar51 + 0x1ec);
              *plVar58 = (long)*ppcStack_858;
              plVar58[1] = (long)ppcStack_858[1];
            }
            else {
              lVar39 = 0;
              lVar46 = *(long *)(pfVar51 + 0x1ea);
              do {
                *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)pfVar51[0x1db]);
              *pfVar25 = (float)uStack_8a0;
              if ((int)pfVar51[0x1db] < 3) goto LAB_1095ac1d4;
LAB_1095ac208:
              func_0x000109a84868(pfVar25,&uStack_8a0);
              pfVar19 = pfVar25;
            }
            *(ulong *)(pfVar51 + 0x1e0) = CONCAT44(uStack_888._4_4_,(float)uStack_888);
            *(double **)pfVar47 = uStack_890;
            *(float **)(pfVar51 + 0x1e4) = uStack_878;
            *(ulong *)(pfVar51 + 0x1e2) = CONCAT44(uStack_880._4_4_,(undefined4)uStack_880);
            *(code **)(pfVar51 + 0x1e8) = pcStack_868;
            *(ulong *)(pfVar51 + 0x1e6) = CONCAT44(uStack_86c,uStack_870);
          }
        }
        else {
          fVar64 = fVar72;
          if ((int)fVar75 <= (int)fVar72) {
            fVar64 = fVar75;
          }
          if ((int)fVar64 < (int)pfVar51[0x8e]) {
            uVar44 = 0;
            uVar62 = 0;
          }
          else {
            uVar62 = 0;
            uVar44 = 0;
            fVar65 = 1.0;
            do {
              uVar31 = (uint)uVar44;
              if (pfVar51[0x60] <= fVar65) {
                uVar31 = (uint)uVar62;
              }
              uVar44 = (ulong)uVar31;
              uVar62 = (ulong)((uint)uVar62 + 1);
              fVar64 = (float)((int)fVar64 / 2);
              fVar65 = fVar65 * 0.5;
            } while ((int)pfVar51[0x8e] <= (int)fVar64);
          }
          uStack_728 = 0;
          uStack_724 = 0;
          iStack_720 = 0;
          uStack_730 = 0;
          uStack_72c = 0;
          fStack_738 = 6.9143196e-29;
          fStack_734 = 1.4013e-45;
          uStack_660._0_4_ = fVar75;
          uStack_660._4_4_ = fVar72;
          func_0x00010938e870(&fStack_738,&uStack_660);
          if (0 < (int)fVar72) {
            uVar53 = 0;
            do {
              _memcpy(CONCAT44(uStack_72c,uStack_730) + (long)iStack_720 * (long)(int)uVar53,
                      *(long *)(pfVar25 + 4) + **(long **)(pfVar25 + 0x12) * uVar53,
                      (long)(int)pfVar51[0xe1]);
              uVar53 = uVar53 + 1;
            } while ((uint)fVar72 != uVar53);
          }
          fStack_798 = 6.9143196e-29;
          fStack_794 = 1.4013e-45;
          uStack_790 = uStack_730;
          uStack_78c = uStack_72c;
          uStack_788 = uStack_728;
          uStack_784 = uStack_724;
          iStack_780 = iStack_720;
          iStack_720 = 0;
          uStack_730 = 0;
          uStack_72c = 0;
          uStack_728 = 0;
          uStack_724 = 0;
          FUN_1093fb548(&dStack_930,&fStack_798,uVar62);
          fStack_798 = 6.9143196e-29;
          fStack_794 = 1.4013e-45;
          if (CONCAT44(uStack_78c,uStack_790) != 0) {
            __ZdaPv();
          }
          uStack_790 = 0;
          uStack_78c = 0;
          uStack_788 = 0;
          uStack_784 = 0;
          iStack_780 = 0;
          lVar39 = (long)dStack_930 + uVar62 * 0x20;
          lVar46 = *(long *)(lVar39 + -0x10);
          uStack_660._0_4_ = (float)lVar46;
          uVar62 = (ulong)(int)(float)uStack_660;
          uStack_660._4_4_ = (float)((int)(float)uStack_660 >> 0x1f);
          uStack_658._0_4_ = (int)((ulong)lVar46 >> 0x20);
          uStack_658._4_4_ = (int)uStack_658 >> 0x1f;
          uStack_6d8._0_4_ = pfVar51[0x47];
          uStack_6d0._0_4_ = pfVar51[0x48];
          uStack_6d8._4_4_ = (float)((int)(float)uStack_6d8 >> 0x1f);
          uStack_6d0._4_4_ = (int)(float)uStack_6d0 >> 0x1f;
          if ((uVar62 | lVar46 >> 0x20) >> 0x20 == 0) {
            FUN_109367e44((float)uVar62 / (float)(ulong)(long)(int)(float)uStack_6d8,
                          (float)(ulong)(lVar46 >> 0x20) /
                          (float)(ulong)(long)(int)(float)uStack_6d0,&uStack_660,&uStack_6d8,
                          *(undefined8 *)(lVar39 + -0x18),uVar62,
                          CONCAT44(uStack_890._4_4_,(undefined4)uStack_890),
                          (long)(int)(float)uStack_6d8,1);
            pfVar25 = uStack_650;
            pfVar47 = uStack_638;
          }
          else {
            lVar46 = *(long *)(lVar39 + -0x18);
            uVar62 = *(ulong *)(lVar39 + -0x10);
            iVar27 = *(int *)(lVar39 + -8);
            uStack_660._0_4_ = 127.5;
            uStack_660._4_4_ = 2.8026e-45;
            pcStack_620 = (code *)&uStack_658;
            uStack_658._0_4_ = (int)(uVar62 >> 0x20);
            uStack_658._4_4_ = (int)uVar62;
            uStack_650._0_4_ = (undefined4)lVar46;
            uStack_650._4_4_ = (undefined4)((ulong)lVar46 >> 0x20);
            uStack_638._0_4_ = 0;
            uStack_638._4_4_ = 0;
            uStack_640._0_4_ = 0;
            uStack_640._4_4_ = 0;
            pcStack_628 = (code *)0x0;
            uStack_630 = 0;
            uStack_62c = 0;
            pcVar16 = (code *)(long)uStack_658._4_4_;
            pcStack_608 = (code *)0x0;
            pcStack_610 = (code *)0x0;
            uStack_648 = (undefined4)uStack_650;
            uStack_644 = uStack_650._4_4_;
            ppcStack_618 = &pcStack_610;
            if ((lVar46 == 0) && ((long)uStack_658._4_4_ * (long)(int)uStack_658 != 0)) {
              puVar26 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar26 = 1;
              uStack_6d8 = puVar26 + 1;
              uStack_6d0._0_4_ = 3.92364e-44;
              uStack_6d0._4_4_ = 0;
              *(undefined1 *)(puVar26 + 8) = 0;
              *(undefined8 *)(puVar26 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar26 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar26 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar26 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&uStack_6d8,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_1095ac340;
            }
            pcVar48 = pcVar16;
            if (uVar62 >> 0x20 != 1) {
              pcVar48 = (code *)(long)iVar27;
            }
            pcStack_610 = pcVar16;
            if (iVar27 != 0) {
              pcStack_610 = pcVar48;
            }
            uStack_660._0_4_ = 127.625;
            if (pcVar48 != pcVar16 && iVar27 != 0) {
              uStack_660._0_4_ = 127.5;
            }
            pcStack_608 = (code *)0x1;
            uStack_638 = (float *)(lVar46 + (long)pcStack_610 * ((long)uVar62 >> 0x20));
            uStack_640 = pcVar16 + ((long)uStack_638 - (long)pcStack_610);
            uStack_6c8 = 0;
            iStack_6c4 = 0;
            uStack_6d8._0_4_ = 2.3693558e-38;
            uStack_908._0_4_ = 9.477423e-38;
            uStack_900 = &uStack_8a0;
            uStack_8f8 = 0;
            uStack_8f4 = 0;
            uStack_678 = *(float **)(pfVar51 + 0x47);
            uStack_6d0 = (float *)&uStack_660;
            FUN_109b0f718(0,0,&uStack_6d8,&uStack_908,&uStack_678,1);
            dVar69 = (double)uStack_440;
            lVar39 = uStack_1a8;
            puVar40 = uStack_438;
            puVar57 = uStack_e8;
            if (pcStack_628 != (code *)0x0) {
              pcVar16 = pcStack_628 + 0x14;
              do {
                iVar27 = *(int *)pcVar16;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                if (bVar11) {
                  *(int *)pcVar16 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(&uStack_660);
                dVar69 = (double)uStack_440;
                lVar39 = uStack_1a8;
                puVar40 = uStack_438;
                puVar57 = uStack_e8;
              }
            }
            pcStack_628 = (code *)0x0;
            uStack_648 = 0;
            uStack_644 = 0;
            uStack_650._0_4_ = 0;
            uStack_650._4_4_ = 0;
            pfVar25 = (float *)0x0;
            uStack_638._0_4_ = 0;
            uStack_638._4_4_ = 0;
            pfVar47 = (float *)0x0;
            uStack_640._0_4_ = 0;
            uStack_640._4_4_ = 0;
            if (0 < (int)uStack_660._4_4_) {
              lVar46 = 0;
              do {
                *(undefined4 *)(pcStack_620 + lVar46 * 4) = 0;
                lVar46 = lVar46 + 1;
              } while (lVar46 < (int)uStack_660._4_4_);
            }
            uStack_440 = (long *)dVar69;
            uStack_1a8 = lVar39;
            uStack_438 = puVar40;
            uStack_e8 = puVar57;
            if (ppcStack_618 != &pcStack_610 && ppcStack_618 != (code **)0x0) {
              _free(ppcStack_618[-1]);
              pfVar47 = (float *)CONCAT44(uStack_638._4_4_,(undefined4)uStack_638);
              pfVar25 = (float *)CONCAT44(uStack_650._4_4_,(undefined4)uStack_650);
            }
          }
          pfVar19 = pfVar51 + 0x1da;
          if (pfVar19 != (float *)&uStack_8a0) {
            if (pcStack_868 != (code *)0x0) {
              pcVar16 = pcStack_868 + 0x14;
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                if (bVar11) {
                  *(int *)pcVar16 = *(int *)pcVar16 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            uStack_650 = pfVar25;
            uStack_638 = pfVar47;
            if (*(long *)(pfVar51 + 0x1e8) != 0) {
              piVar1 = (int *)(*(long *)(pfVar51 + 0x1e8) + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(pfVar19);
              }
            }
            pfVar51[0x1e8] = 0.0;
            pfVar51[0x1e9] = 0.0;
            pfVar29 = pfVar51 + 0x1de;
            pfVar51[0x1e0] = 0.0;
            pfVar51[0x1e1] = 0.0;
            pfVar29[0] = 0.0;
            pfVar29[1] = 0.0;
            pfVar51[0x1e4] = 0.0;
            pfVar51[0x1e5] = 0.0;
            pfVar51[0x1e2] = 0.0;
            pfVar51[0x1e3] = 0.0;
            if ((int)pfVar51[0x1db] < 1) {
              *pfVar19 = (float)uStack_8a0;
LAB_1095a9674:
              if (2 < (int)uStack_8a0._4_4_) goto LAB_1095a96ac;
              pfVar51[0x1db] = uStack_8a0._4_4_;
              *(ulong *)(pfVar51 + 0x1dc) = CONCAT44(uStack_898._4_4_,(int)uStack_898);
              plVar58 = *(long **)(pfVar51 + 0x1ec);
              *plVar58 = (long)*ppcStack_858;
              plVar58[1] = (long)ppcStack_858[1];
              pfVar25 = uStack_650;
              pfVar47 = uStack_638;
            }
            else {
              lVar39 = 0;
              lVar46 = *(long *)(pfVar51 + 0x1ea);
              do {
                *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)pfVar51[0x1db]);
              *pfVar19 = (float)uStack_8a0;
              if ((int)pfVar51[0x1db] < 3) goto LAB_1095a9674;
LAB_1095a96ac:
              func_0x000109a84868(pfVar19,&uStack_8a0);
              pfVar25 = uStack_650;
              pfVar47 = uStack_638;
            }
            *(ulong *)(pfVar51 + 0x1e0) = CONCAT44(uStack_888._4_4_,(float)uStack_888);
            *(ulong *)pfVar29 = CONCAT44(uStack_890._4_4_,(undefined4)uStack_890);
            *(ulong *)(pfVar51 + 0x1e4) = CONCAT44(uStack_878._4_4_,(undefined4)uStack_878);
            *(ulong *)(pfVar51 + 0x1e2) = CONCAT44(uStack_880._4_4_,(undefined4)uStack_880);
            *(code **)(pfVar51 + 0x1e8) = pcStack_868;
            *(ulong *)(pfVar51 + 0x1e6) = CONCAT44(uStack_86c,uStack_870);
          }
          pfVar19 = uStack_6d0;
          if (*(code *)(pfVar51 + 0x6d) == (code)0x1) {
            lVar39 = (long)dStack_930 + uVar44 * 0x20;
            lVar46 = *(long *)(lVar39 + 8);
            uVar62 = *(ulong *)(lVar39 + 0x10);
            iVar27 = *(int *)(lVar39 + 0x18);
            uStack_6d8._0_4_ = 127.5;
            uStack_6d8._4_4_ = 2.8026e-45;
            plStack_698 = &uStack_6d0;
            uStack_6d0._0_4_ = (float)(uVar62 >> 0x20);
            uStack_6d0._4_4_ = (int)uVar62;
            uStack_6c8 = (undefined4)lVar46;
            iStack_6c4 = (int)((ulong)lVar46 >> 0x20);
            uStack_6b0._0_4_ = 0;
            uStack_6b0._4_4_ = 0;
            uStack_6b8._0_4_ = 0;
            uStack_6b8._4_4_ = 0;
            lStack_6a0 = 0;
            uStack_6a8 = 0;
            uStack_6a4 = 0;
            uStack_680 = 0;
            uStack_688 = 0;
            uVar44 = (ulong)uStack_6d0._4_4_;
            uStack_6c0 = uStack_6c8;
            iStack_6bc = iStack_6c4;
            puStack_690 = &uStack_688;
            if (lVar46 == 0 && (long)uStack_6d0._4_4_ * (long)(int)(float)uStack_6d0 != 0) {
              puVar26 = (undefined4 *)0x24;
              uStack_650 = pfVar25;
              uStack_638 = pfVar47;
              func_0x000107c2ae8c();
              *puVar26 = 1;
              uStack_908 = puVar26 + 1;
              uStack_900._0_4_ = 3.92364e-44;
              uStack_900._4_4_ = 0.0;
              *(undefined1 *)(puVar26 + 8) = 0;
              *(undefined8 *)(puVar26 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar26 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar26 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar26 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&uStack_908,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_1095ac340;
            }
            uVar53 = uVar44;
            if (uVar62 >> 0x20 != 1) {
              uVar53 = (long)iVar27;
            }
            uStack_688 = uVar44;
            if (iVar27 != 0) {
              uStack_688 = uVar53;
            }
            uStack_6d8._0_4_ = 127.625;
            if (uVar53 != uVar44 && iVar27 != 0) {
              uStack_6d8._0_4_ = 127.5;
            }
            uStack_680 = 1;
            uStack_6b0 = lVar46 + uStack_688 * ((long)uVar62 >> 0x20);
            uStack_6b8 = (uStack_6b0 - uStack_688) + uVar44;
            uStack_660._0_4_ = 127.5;
            uStack_658._4_4_ = 0;
            uStack_650._0_4_ = 0;
            uStack_660._4_4_ = 0.0;
            uStack_658._0_4_ = 0;
            pcVar16 = (code *)((ulong)&uStack_660 | 8);
            uStack_644 = 0;
            uStack_640._0_4_ = 0;
            uStack_650._4_4_ = 0;
            uStack_648 = 0;
            uStack_638._4_4_ = 0;
            uStack_640._4_4_ = 0;
            uStack_638._0_4_ = 0;
            pcStack_628 = (code *)0x0;
            uStack_630 = 0;
            uStack_62c = 0;
            pcStack_608 = (code *)0x0;
            pcStack_610 = (code *)0x0;
            uStack_908._0_4_ = 9.477423e-38;
            uStack_8f8 = 0;
            uStack_8f4 = 0;
            pcStack_620 = pcVar16;
            ppcStack_618 = &pcStack_610;
            uStack_900 = &uStack_660;
            FUN_109a479a0(&uStack_6d8,&uStack_908);
            if (*(long *)(pfVar51 + 0x200) != 0) {
              piVar1 = (int *)(*(long *)(pfVar51 + 0x200) + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(pfVar51 + 0x1f2);
              }
            }
            pfVar51[0x200] = 0.0;
            pfVar51[0x201] = 0.0;
            pfVar25 = pfVar51 + 0x1f6;
            pfVar51[0x1f8] = 0.0;
            pfVar51[0x1f9] = 0.0;
            pfVar25[0] = 0.0;
            pfVar25[1] = 0.0;
            pfVar51[0x1fc] = 0.0;
            pfVar51[0x1fd] = 0.0;
            pfVar51[0x1fa] = 0.0;
            pfVar51[0x1fb] = 0.0;
            if (0 < (int)pfVar51[499]) {
              lVar39 = 0;
              lVar46 = *(long *)(pfVar51 + 0x202);
              do {
                *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)pfVar51[499]);
            }
            *(ulong *)(pfVar51 + 500) = CONCAT44(uStack_658._4_4_,(int)uStack_658);
            *(ulong *)(pfVar51 + 0x1f2) = CONCAT44(uStack_660._4_4_,(float)uStack_660);
            *(ulong *)(pfVar51 + 0x1f8) = CONCAT44(uStack_644,uStack_648);
            *(ulong *)pfVar25 = CONCAT44(uStack_650._4_4_,(undefined4)uStack_650);
            *(ulong *)(pfVar51 + 0x1fc) = CONCAT44(uStack_638._4_4_,(undefined4)uStack_638);
            *(ulong *)(pfVar51 + 0x1fa) = CONCAT44(uStack_640._4_4_,(undefined4)uStack_640);
            *(code **)(pfVar51 + 0x200) = pcStack_628;
            *(ulong *)(pfVar51 + 0x1fe) = CONCAT44(uStack_62c,uStack_630);
            pfVar47 = *(float **)(pfVar51 + 0x204);
            pfVar25 = pfVar51 + 0x206;
            if (pfVar47 != pfVar25) {
              if (pfVar47 != (float *)0x0) {
                _free(*(long *)(pfVar47 + -2));
              }
              *(float **)(pfVar51 + 0x204) = pfVar25;
              *(float **)(pfVar51 + 0x202) = pfVar51 + 500;
              pfVar47 = pfVar25;
            }
            puVar40 = (undefined8 *)((ulong)&uStack_660 | 4);
            if ((int)uStack_660._4_4_ < 3) {
              *(code **)pfVar47 = *ppcStack_618;
              *(code **)(pfVar47 + 2) = ppcStack_618[1];
              uStack_660._0_4_ = 127.5;
              puVar40[1] = 0;
              *puVar40 = 0;
              puVar40[3] = 0;
              puVar40[2] = 0;
              puVar40[5] = 0;
              puVar40[4] = 0;
              *(undefined8 *)((long)puVar40 + 0x34) = 0;
              *(undefined8 *)((long)puVar40 + 0x2c) = 0;
              if (ppcStack_618 != &pcStack_610) {
                _free(ppcStack_618[-1]);
              }
            }
            else {
              *(code ***)(pfVar51 + 0x204) = ppcStack_618;
              *(code **)(pfVar51 + 0x202) = pcStack_620;
              uStack_660._0_4_ = 127.5;
              puVar40[1] = 0;
              *puVar40 = 0;
              puVar40[3] = 0;
              puVar40[2] = 0;
              puVar40[5] = 0;
              puVar40[4] = 0;
              *(undefined8 *)((long)puVar40 + 0x34) = 0;
              *(undefined8 *)((long)puVar40 + 0x2c) = 0;
              pcStack_620 = pcVar16;
              ppcStack_618 = &pcStack_610;
            }
            if (lStack_6a0 != 0) {
              piVar1 = (int *)(lStack_6a0 + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(&uStack_6d8);
              }
            }
            pfVar47 = (float *)CONCAT44(uStack_638._4_4_,(undefined4)uStack_638);
            pfVar25 = (float *)CONCAT44(uStack_650._4_4_,(undefined4)uStack_650);
            pfVar19 = (float *)CONCAT44(uStack_6d0._4_4_,(float)uStack_6d0);
            lStack_6a0 = 0;
            uStack_6c0 = 0;
            iStack_6bc = 0;
            uStack_6c8 = 0;
            iStack_6c4 = 0;
            uStack_6b0._0_4_ = 0;
            uStack_6b0._4_4_ = 0;
            uStack_6b8._0_4_ = 0;
            uStack_6b8._4_4_ = 0;
            if (0 < (int)uStack_6d8._4_4_) {
              lVar39 = 0;
              do {
                *(undefined4 *)((long)plStack_698 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)uStack_6d8._4_4_);
            }
            if (puStack_690 != &uStack_688 && puStack_690 != (ulong *)0x0) {
              _free(puStack_690[-1]);
              pfVar47 = (float *)CONCAT44(uStack_638._4_4_,(undefined4)uStack_638);
              pfVar25 = (float *)CONCAT44(uStack_650._4_4_,(undefined4)uStack_650);
              pfVar19 = (float *)CONCAT44(uStack_6d0._4_4_,(float)uStack_6d0);
            }
          }
          uStack_660 = &dStack_930;
          uStack_6d0 = pfVar19;
          uStack_650 = pfVar25;
          uStack_638 = pfVar47;
          FUN_10939d590(&uStack_660);
          fStack_738 = 6.9143196e-29;
          fStack_734 = 1.4013e-45;
          pfVar19 = (float *)CONCAT44(uStack_72c,uStack_730);
          if (pfVar19 != (float *)0x0) {
            __ZdaPv();
          }
        }
        if (pcStack_868 != (code *)0x0) {
          pcVar16 = pcStack_868 + 0x14;
          do {
            iVar27 = *(int *)pcVar16;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
            if (bVar11) {
              *(int *)pcVar16 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            pfVar19 = (float *)&uStack_8a0;
            func_0x000109a848d4();
          }
        }
        pcStack_868 = (code *)0x0;
        uStack_888._0_4_ = 0.0;
        uStack_888._4_4_ = 0;
        uStack_890._0_4_ = 0;
        uStack_890._4_4_ = 0;
        uStack_878._0_4_ = 0;
        uStack_878._4_4_ = 0;
        uStack_880._0_4_ = 0;
        uStack_880._4_4_ = 0;
        if (0 < (int)uStack_8a0._4_4_) {
          lVar39 = 0;
          do {
            *(undefined4 *)(pcStack_860 + lVar39 * 4) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)uStack_8a0._4_4_);
        }
        pdVar22 = uStack_660;
        uStack_898 = (double *)CONCAT44(uStack_898._4_4_,(int)uStack_898);
        if (ppcStack_858 != &pcStack_850 && ppcStack_858 != (code **)0x0) {
          pfVar19 = (float *)ppcStack_858[-1];
          _free();
          pdVar22 = uStack_660;
        }
      }
    }
LAB_1095a9b74:
    uStack_660._4_4_ = (float)((ulong)pdVar22 >> 0x20);
    if (*(code *)(pfVar51 + 0x6d) == (code)0x1) {
      uStack_890._0_4_ = 0;
      uStack_890._4_4_ = 0;
      uStack_8a0._0_4_ = 2.3693558e-38;
      uStack_898._0_4_ = (int)pfVar23;
      uStack_898._4_4_ = (int)((ulong)pfVar23 >> 0x20);
      uStack_658 = pfVar51 + 0x2c4;
      uStack_660._0_4_ = 9.477423e-38;
      uStack_650._0_4_ = 0;
      uStack_650._4_4_ = 0;
      uVar70 = *(undefined8 *)(pfVar51 + 0x47);
      uStack_6d8._0_4_ = (float)uVar70;
      uStack_6d8._4_4_ = (float)((ulong)uVar70 >> 0x20);
      pfVar19 = (float *)&uStack_8a0;
      FUN_109b0f718(0,0,pfVar19,&uStack_660,&uStack_6d8,1);
      pdVar22 = (double *)CONCAT44(uStack_660._4_4_,(float)uStack_660);
    }
    else {
      pfVar25 = pfVar51 + 0x2c4;
      if (pfVar25 != pfVar23) {
        if (*(long *)(pfVar23 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(pfVar23 + 0xe) + 0x14);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        uStack_660 = pdVar22;
        if (*(long *)(pfVar51 + 0x2d2) != 0) {
          piVar1 = (int *)(*(long *)(pfVar51 + 0x2d2) + 0x14);
          do {
            iVar27 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            pfVar19 = pfVar25;
            func_0x000109a848d4();
          }
        }
        pfVar51[0x2d2] = 0.0;
        pfVar51[0x2d3] = 0.0;
        pfVar51[0x2ca] = 0.0;
        pfVar51[0x2cb] = 0.0;
        pfVar51[0x2c8] = 0.0;
        pfVar51[0x2c9] = 0.0;
        pfVar51[0x2ce] = 0.0;
        pfVar51[0x2cf] = 0.0;
        pfVar51[0x2cc] = 0.0;
        pfVar51[0x2cd] = 0.0;
        if ((int)pfVar51[0x2c5] < 1) {
          *pfVar25 = *pfVar23;
LAB_1095a9c88:
          if (2 < (int)pfVar23[1]) goto LAB_1095a9cbc;
          pfVar51[0x2c5] = pfVar23[1];
          *(undefined8 *)(pfVar51 + 0x2c6) = *(undefined8 *)(pfVar23 + 2);
          puVar40 = *(undefined8 **)(pfVar23 + 0x12);
          puVar57 = *(undefined8 **)(pfVar51 + 0x2d6);
          *puVar57 = *puVar40;
          puVar57[1] = puVar40[1];
          pdVar22 = uStack_660;
        }
        else {
          lVar39 = 0;
          lVar46 = *(long *)(pfVar51 + 0x2d4);
          do {
            *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)pfVar51[0x2c5]);
          *pfVar25 = *pfVar23;
          if ((int)pfVar51[0x2c5] < 3) goto LAB_1095a9c88;
LAB_1095a9cbc:
          func_0x000109a84868();
          pfVar19 = pfVar25;
          pdVar22 = uStack_660;
        }
        uVar70 = *(undefined8 *)(pfVar23 + 4);
        *(undefined8 *)(pfVar51 + 0x2ca) = *(undefined8 *)(pfVar23 + 6);
        *(undefined8 *)(pfVar51 + 0x2c8) = uVar70;
        uVar70 = *(undefined8 *)(pfVar23 + 8);
        *(undefined8 *)(pfVar51 + 0x2ce) = *(undefined8 *)(pfVar23 + 10);
        *(undefined8 *)(pfVar51 + 0x2cc) = uVar70;
        uVar70 = *(undefined8 *)(pfVar23 + 0xc);
        *(undefined8 *)(pfVar51 + 0x2d2) = *(undefined8 *)(pfVar23 + 0xe);
        *(undefined8 *)(pfVar51 + 0x2d0) = uVar70;
      }
    }
    if (*(code *)(pfVar51 + 0x61) == (code)0x1) {
      uStack_660 = pdVar22;
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar58 = *(long **)(pfVar51 + 0x19e);
      if (plVar58 == (long *)0x0) {
        uStack_898._0_4_ = 0xc;
        uStack_898._4_4_ = 0;
        uStack_8a0._0_4_ = 0.0;
        uStack_8a0._4_4_ = 9.80909e-45;
        uStack_890._0_4_ = CONCAT31(uStack_890._1_3_,1);
        uVar70 = 8;
        __Znwm(8);
        FUN_109530654();
        func_0x0001095ae004(pfVar51 + 0x19e,uVar70);
        plVar58 = *(long **)(pfVar51 + 0x19e);
      }
      lVar39 = *plVar58;
      fVar72 = pfVar51[0x1dd];
      if (*(float *)(lVar39 + 0xe4) == fVar72) {
        fVar75 = pfVar51[0x1dc];
        if (*(float *)(lVar39 + 0xe8) == pfVar51[0x1dc]) {
          if (*(code *)((long)pfVar51 + 0x185) == (code)0x1) {
            FUN_1095b5e00(pfVar51 + 0x194,*(undefined8 *)(pfVar51 + 0x19a));
            if (pfVar51[0x197] == 0.0) {
              FUN_1095307ac(**(undefined8 **)(pfVar51 + 0x19e),*(undefined8 *)(pfVar51 + 0x1de));
            }
          }
          else {
            FUN_1095307ac(lVar39,*(undefined8 *)(pfVar51 + 0x1de));
          }
          lVar39 = **(long **)(pfVar51 + 0x19e);
          *(long *)(pfVar51 + 0x19a) = lVar39;
          fVar72 = *(float *)(lVar39 + 8);
          fVar75 = *(float *)(lVar39 + 0xc);
          uStack_8a0._0_4_ = 127.5;
          pcStack_860 = (code *)&uStack_898;
          uStack_898._4_4_ = 0;
          uStack_890._0_4_ = 0;
          uStack_8a0._4_4_ = 0.0;
          uStack_898._0_4_ = 0;
          uStack_888._4_4_ = 0;
          uStack_880._0_4_ = 0;
          uStack_890._4_4_ = 0;
          uStack_888._0_4_ = 0.0;
          uStack_878._4_4_ = 0;
          uStack_880._4_4_ = 0;
          uStack_878._0_4_ = 0;
          pcStack_868 = (code *)0x0;
          uStack_870 = 0;
          uStack_86c = 0;
          pcStack_848 = (code *)0x0;
          pcStack_850 = (code *)0x0;
          ppcStack_858 = &pcStack_850;
          uStack_660._0_4_ = fVar72;
          uStack_660._4_4_ = fVar75;
          FUN_109a83fd0(&uStack_8a0,2,&uStack_660,5);
          uStack_660._0_4_ = 127.5;
          pcStack_620 = (code *)&uStack_658;
          uStack_658._4_4_ = 0;
          uStack_650._0_4_ = 0;
          uStack_660._4_4_ = 0.0;
          uStack_658._0_4_ = 0;
          uStack_644 = 0;
          uStack_640._0_4_ = 0;
          uStack_650._4_4_ = 0;
          uStack_648 = 0;
          uStack_638._4_4_ = 0;
          uStack_640._4_4_ = 0;
          uStack_638._0_4_ = 0;
          pcStack_628 = (code *)0x0;
          uStack_630 = 0;
          uStack_62c = 0;
          pcStack_608 = (code *)0x0;
          pcStack_610 = (code *)0x0;
          uStack_6d8._0_4_ = fVar72;
          uStack_6d8._4_4_ = fVar75;
          ppcStack_618 = &pcStack_610;
          FUN_109a83fd0(&uStack_660,2,&uStack_6d8,5);
          uStack_6d8._0_4_ = 127.5;
          plStack_698 = &uStack_6d0;
          uStack_6d0._4_4_ = 0;
          uStack_6c8 = 0;
          uStack_6d8._4_4_ = 0.0;
          uStack_6d0._0_4_ = 0.0;
          iStack_6bc = 0;
          uStack_6b8._0_4_ = 0;
          iStack_6c4 = 0;
          uStack_6c0 = 0;
          uStack_6b0._4_4_ = 0;
          uStack_6b8._4_4_ = 0;
          uStack_6b0._0_4_ = 0;
          lStack_6a0 = 0;
          uStack_6a8 = 0;
          uStack_6a4 = 0;
          uStack_680 = 0;
          uStack_688 = 0;
          fStack_738 = fVar72;
          fStack_734 = fVar75;
          puStack_690 = &uStack_688;
          FUN_109a83fd0(&uStack_6d8,2,&fStack_738,5);
          fStack_738 = 127.5;
          puStack_6f8 = &uStack_730;
          uStack_72c = 0;
          uStack_728 = 0;
          fStack_734 = 0.0;
          uStack_730 = 0;
          uStack_71c = 0;
          uStack_718 = 0;
          uStack_724 = 0;
          iStack_720 = 0;
          uStack_70c = 0;
          uStack_714 = 0;
          uStack_710 = 0;
          lStack_700 = 0;
          uStack_708 = 0;
          uStack_704 = 0;
          uStack_6e0 = 0;
          lStack_6e8 = 0;
          fStack_798 = fVar72;
          fStack_794 = fVar75;
          plStack_6f0 = &lStack_6e8;
          FUN_109a83fd0(&fStack_738,2,&fStack_798,5);
          ppcVar12 = ppcStack_618;
          plVar58 = plStack_6f0;
          ppcVar15 = ppcStack_858;
          fVar64 = (float)(int)fVar75;
          fVar65 = (float)(uint)fVar72;
          if (0 < (int)fVar72) {
            uVar62 = 0;
            lVar46 = CONCAT44(uStack_890._4_4_,(undefined4)uStack_890);
            lVar55 = CONCAT44(uStack_650._4_4_,(undefined4)uStack_650);
            fVar68 = 0.0;
            lVar50 = CONCAT44(uStack_724,uStack_728);
            do {
              puVar21 = puStack_690;
              if (0 < (int)fVar75) {
                uVar44 = 0;
                pcVar16 = *ppcVar15;
                pcVar48 = *ppcVar12;
                cVar17 = *(code *)((long)pfVar51 + 0x671);
                lVar56 = CONCAT44(iStack_6c4,uStack_6c8);
                uVar53 = (ulong)(uint)fVar75;
                pfVar25 = (float *)(lVar50 + *plVar58 * uVar62);
                do {
                  FUN_109530ca0(&fStack_798,lVar39,uVar62,uVar44,0);
                  fVar66 = fVar68;
                  if (ABS(fStack_798) <= fVar64 + fVar64) {
                    fVar66 = fStack_798;
                  }
                  fVar67 = fVar68;
                  if (ABS(fStack_794) <= fVar65 + fVar65) {
                    fVar67 = fStack_794;
                  }
                  fVar66 = fVar66 + (float)(uVar44 & 0xffffffff);
                  fVar71 = (float)(int)((int)fVar75 - 1);
                  if (fVar66 <= (float)(int)((int)fVar75 - 1)) {
                    fVar71 = fVar66;
                  }
                  if (fVar71 <= 0.0) {
                    fVar71 = fVar68;
                  }
                  fVar67 = fVar67 + (float)(uVar62 & 0xffffffff);
                  fVar66 = (float)((int)fVar72 - 1);
                  if (fVar67 <= (float)((int)fVar72 - 1)) {
                    fVar66 = fVar67;
                  }
                  if (fVar66 <= 0.0) {
                    fVar66 = fVar68;
                  }
                  *(float *)(lVar46 + (long)pcVar16 * uVar62 + uVar44 * 4) = fVar71;
                  *(float *)(lVar55 + (long)pcVar48 * uVar62 + uVar44 * 4) = fVar66;
                  if (cVar17 == (code)0x0) {
                    *(undefined4 *)(lVar56 + uVar62 * *puVar21) =
                         *(undefined4 *)
                          (*(long *)(pfVar51 + 0x1a4) +
                           **(long **)(pfVar51 + 0x1b2) * (long)(int)fVar66 + (long)(int)fVar71 * 4)
                    ;
                    fVar66 = *(float *)(*(long *)(pfVar51 + 0x1bc) +
                                        **(long **)(pfVar51 + 0x1ca) * (long)(int)fVar66 +
                                       (long)(int)fVar71 * 4);
                  }
                  else {
                    *(float *)(lVar56 + uVar62 * *puVar21) = fVar71;
                  }
                  *pfVar25 = fVar66;
                  uVar44 = uVar44 + 1;
                  lVar56 = lVar56 + 4;
                  uVar53 = uVar53 - 1;
                  pfVar25 = pfVar25 + 1;
                } while (uVar53 != 0);
              }
              uVar62 = uVar62 + 1;
            } while (uVar62 != (uint)fVar72);
          }
          pfVar25 = pfVar51 + 0x1a0;
          if (pfVar25 != (float *)&uStack_6d8) {
            if (lStack_6a0 != 0) {
              piVar1 = (int *)(lStack_6a0 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(long *)(pfVar51 + 0x1ae) != 0) {
              piVar1 = (int *)(*(long *)(pfVar51 + 0x1ae) + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(pfVar25);
              }
            }
            pfVar51[0x1ae] = 0.0;
            pfVar51[0x1af] = 0.0;
            pfVar51[0x1a6] = 0.0;
            pfVar51[0x1a7] = 0.0;
            pfVar51[0x1a4] = 0.0;
            pfVar51[0x1a5] = 0.0;
            pfVar51[0x1aa] = 0.0;
            pfVar51[0x1ab] = 0.0;
            pfVar51[0x1a8] = 0.0;
            pfVar51[0x1a9] = 0.0;
            if ((int)pfVar51[0x1a1] < 1) {
              *pfVar25 = (float)uStack_6d8;
LAB_1095aaf90:
              if (2 < (int)uStack_6d8._4_4_) goto LAB_1095aafc4;
              pfVar51[0x1a1] = uStack_6d8._4_4_;
              *(ulong *)(pfVar51 + 0x1a2) = CONCAT44(uStack_6d0._4_4_,(float)uStack_6d0);
              puVar21 = *(ulong **)(pfVar51 + 0x1b2);
              *puVar21 = *puStack_690;
              puVar21[1] = puStack_690[1];
            }
            else {
              lVar39 = 0;
              lVar46 = *(long *)(pfVar51 + 0x1b0);
              do {
                *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)pfVar51[0x1a1]);
              *pfVar25 = (float)uStack_6d8;
              if ((int)pfVar51[0x1a1] < 3) goto LAB_1095aaf90;
LAB_1095aafc4:
              func_0x000109a84868(pfVar25,&uStack_6d8);
            }
            *(ulong *)(pfVar51 + 0x1a6) = CONCAT44(iStack_6bc,uStack_6c0);
            *(ulong *)(pfVar51 + 0x1a4) = CONCAT44(iStack_6c4,uStack_6c8);
            *(ulong *)(pfVar51 + 0x1aa) = CONCAT44(uStack_6b0._4_4_,(undefined4)uStack_6b0);
            *(ulong *)(pfVar51 + 0x1a8) = CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8);
            *(long *)(pfVar51 + 0x1ae) = lStack_6a0;
            *(ulong *)(pfVar51 + 0x1ac) = CONCAT44(uStack_6a4,uStack_6a8);
          }
          pfVar25 = pfVar51 + 0x1b8;
          if (pfVar25 != &fStack_738) {
            if (lStack_700 != 0) {
              piVar1 = (int *)(lStack_700 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(long *)(pfVar51 + 0x1c6) != 0) {
              piVar1 = (int *)(*(long *)(pfVar51 + 0x1c6) + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(pfVar25);
              }
            }
            pfVar51[0x1c6] = 0.0;
            pfVar51[0x1c7] = 0.0;
            pfVar51[0x1be] = 0.0;
            pfVar51[0x1bf] = 0.0;
            pfVar51[0x1bc] = 0.0;
            pfVar51[0x1bd] = 0.0;
            pfVar51[0x1c2] = 0.0;
            pfVar51[0x1c3] = 0.0;
            pfVar51[0x1c0] = 0.0;
            pfVar51[0x1c1] = 0.0;
            if ((int)pfVar51[0x1b9] < 1) {
              *pfVar25 = fStack_738;
LAB_1095ab08c:
              if (2 < (int)fStack_734) goto LAB_1095ab0c0;
              pfVar51[0x1b9] = fStack_734;
              *(ulong *)(pfVar51 + 0x1ba) = CONCAT44(uStack_72c,uStack_730);
              plVar58 = *(long **)(pfVar51 + 0x1ca);
              *plVar58 = *plStack_6f0;
              plVar58[1] = plStack_6f0[1];
            }
            else {
              lVar39 = 0;
              lVar46 = *(long *)(pfVar51 + 0x1c8);
              do {
                *(undefined4 *)(lVar46 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)pfVar51[0x1b9]);
              *pfVar25 = fStack_738;
              if ((int)pfVar51[0x1b9] < 3) goto LAB_1095ab08c;
LAB_1095ab0c0:
              func_0x000109a84868(pfVar25,&fStack_738);
            }
            *(ulong *)(pfVar51 + 0x1be) = CONCAT44(uStack_71c,iStack_720);
            *(ulong *)(pfVar51 + 0x1bc) = CONCAT44(uStack_724,uStack_728);
            *(ulong *)(pfVar51 + 0x1c2) = CONCAT44(uStack_70c,uStack_710);
            *(ulong *)(pfVar51 + 0x1c0) = CONCAT44(uStack_714,uStack_718);
            *(long *)(pfVar51 + 0x1c6) = lStack_700;
            *(ulong *)(pfVar51 + 0x1c4) = CONCAT44(uStack_704,uStack_708);
          }
          if (*(code *)((long)pfVar51 + 0x671) == (code)0x1) {
            *(code *)((long)pfVar51 + 0x671) = (code)0x0;
          }
          fStack_798 = 127.5;
          uStack_78c = 0;
          uStack_788 = 0;
          fStack_794 = 0.0;
          uStack_790 = 0;
          puStack_758 = &uStack_790;
          uStack_77c = 0;
          uStack_778 = 0;
          uStack_784 = 0;
          iStack_780 = 0;
          uStack_76c = 0;
          uStack_774 = 0;
          uStack_770 = 0;
          lStack_760 = 0;
          uStack_768 = 0;
          uStack_764 = 0;
          uStack_740 = 0;
          uStack_748 = 0;
          uStack_908._0_4_ = 127.5;
          puStack_8c8 = &uStack_900;
          uStack_900._4_4_ = 0.0;
          uStack_8f8 = 0;
          uStack_908._4_4_ = 0.0;
          uStack_900._0_4_ = 0.0;
          uStack_8ec = 0;
          uStack_8e8 = 0;
          uStack_8f4 = 0;
          uStack_8f0 = 0;
          uStack_8dc = 0;
          uStack_8e4 = 0;
          uStack_8e0 = 0;
          lStack_8d0 = 0;
          uStack_8d8 = 0;
          uStack_8d4 = 0;
          uStack_8b0 = 0;
          lStack_8b8 = 0;
          plStack_8c0 = &lStack_8b8;
          puStack_750 = &uStack_748;
          __ZNSt3__15mutex4lockEv(pfVar51 + 0x126);
          if (*(code *)(pfVar51 + 0x19c) == (code)0x1) {
            *(code *)(pfVar51 + 0x19c) = (code)0x0;
            FUN_1095b3bdc(pfVar51 + 0x156,pfVar51 + 0x160);
            *(code *)((long)pfVar51 + 0x671) = (code)0x1;
            if (lStack_6a0 != 0) {
              piVar1 = (int *)(lStack_6a0 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_760 != 0) {
              piVar1 = (int *)(lStack_760 + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(&fStack_798);
              }
            }
            puVar21 = puStack_690;
            lStack_760 = 0;
            iStack_780 = 0;
            uStack_77c = 0;
            uStack_788 = 0;
            uStack_784 = 0;
            uStack_770 = 0;
            uStack_76c = 0;
            uStack_778 = 0;
            uStack_774 = 0;
            if ((int)fStack_794 < 1) {
              fStack_798 = (float)uStack_6d8;
LAB_1095ab2a4:
              fStack_798 = (float)uStack_6d8;
              if (2 < (int)uStack_6d8._4_4_) goto LAB_1095ab2d8;
              fStack_794 = uStack_6d8._4_4_;
              uStack_790 = (float)uStack_6d0;
              uStack_78c = uStack_6d0._4_4_;
              *puStack_750 = *puStack_690;
              puStack_750[1] = puVar21[1];
            }
            else {
              lVar39 = 0;
              do {
                puStack_758[lVar39] = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)fStack_794);
              fStack_798 = (float)uStack_6d8;
              if ((int)fStack_794 < 3) goto LAB_1095ab2a4;
LAB_1095ab2d8:
              fStack_798 = (float)uStack_6d8;
              func_0x000109a84868(&fStack_798,&uStack_6d8);
            }
            iStack_780 = uStack_6c0;
            uStack_77c = iStack_6bc;
            uStack_788 = uStack_6c8;
            uStack_784 = iStack_6c4;
            uStack_770 = (undefined4)uStack_6b0;
            uStack_76c = uStack_6b0._4_4_;
            uStack_778 = (undefined4)uStack_6b8;
            uStack_774 = uStack_6b8._4_4_;
            lStack_760 = lStack_6a0;
            uStack_768 = uStack_6a8;
            uStack_764 = uStack_6a4;
            if (lStack_700 != 0) {
              piVar1 = (int *)(lStack_700 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_8d0 != 0) {
              piVar1 = (int *)(lStack_8d0 + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(&uStack_908);
              }
            }
            lStack_8d0 = 0;
            uStack_8f0 = 0;
            uStack_8ec = 0;
            uStack_8f8 = 0;
            uStack_8f4 = 0;
            uStack_8e0 = 0;
            uStack_8dc = 0;
            uStack_8e8 = 0;
            uStack_8e4 = 0;
            if ((int)uStack_908._4_4_ < 1) {
              uStack_908._0_4_ = fStack_738;
              if ((int)fStack_734 < 3) goto LAB_1095ab4a8;
            }
            else {
              lVar39 = 0;
              do {
                *(undefined4 *)((long)puStack_8c8 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)uStack_908._4_4_);
              uStack_908._0_4_ = fStack_738;
              if ((int)uStack_908._4_4_ < 3 && (int)fStack_734 < 3) {
LAB_1095ab4a8:
                uStack_908._0_4_ = fStack_738;
                pfVar25 = &fStack_738;
                uStack_908._4_4_ = fStack_734;
                goto LAB_1095ab4c8;
              }
            }
            uStack_908._0_4_ = fStack_738;
            pfVar25 = &fStack_738;
            func_0x000109a84868(&uStack_908,&fStack_738);
          }
          else {
            if (pcStack_868 != (code *)0x0) {
              piVar1 = (int *)((long)pcStack_868 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_760 != 0) {
              piVar1 = (int *)(lStack_760 + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(&fStack_798);
              }
            }
            lStack_760 = 0;
            iStack_780 = 0;
            uStack_77c = 0;
            uStack_788 = 0;
            uStack_784 = 0;
            uStack_770 = 0;
            uStack_76c = 0;
            uStack_778 = 0;
            uStack_774 = 0;
            if ((int)fStack_794 < 1) {
              fStack_798 = (float)uStack_8a0;
LAB_1095ab3a0:
              fStack_798 = (float)uStack_8a0;
              if (2 < (int)uStack_8a0._4_4_) goto LAB_1095ab3d4;
              fStack_794 = uStack_8a0._4_4_;
              uStack_790 = (int)uStack_898;
              uStack_78c = uStack_898._4_4_;
              *puStack_750 = (ulong)*ppcStack_858;
              puStack_750[1] = (ulong)ppcStack_858[1];
            }
            else {
              lVar39 = 0;
              do {
                puStack_758[lVar39] = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)fStack_794);
              fStack_798 = (float)uStack_8a0;
              if ((int)fStack_794 < 3) goto LAB_1095ab3a0;
LAB_1095ab3d4:
              fStack_798 = (float)uStack_8a0;
              func_0x000109a84868(&fStack_798,&uStack_8a0);
            }
            iStack_780 = (int)(float)uStack_888;
            uStack_77c = uStack_888._4_4_;
            uStack_788 = (undefined4)uStack_890;
            uStack_784 = uStack_890._4_4_;
            uStack_770 = (undefined4)uStack_878;
            uStack_76c = uStack_878._4_4_;
            uStack_778 = (undefined4)uStack_880;
            uStack_774 = uStack_880._4_4_;
            lStack_760 = (long)pcStack_868;
            uStack_768 = uStack_870;
            uStack_764 = uStack_86c;
            if (pcStack_628 != (code *)0x0) {
              piVar1 = (int *)((long)pcStack_628 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_8d0 != 0) {
              piVar1 = (int *)(lStack_8d0 + 0x14);
              do {
                iVar27 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar27 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar27 + -1 == 0) {
                func_0x000109a848d4(&uStack_908);
              }
            }
            lStack_8d0 = 0;
            uStack_8f0 = 0;
            uStack_8ec = 0;
            uStack_8f8 = 0;
            uStack_8f4 = 0;
            uStack_8e0 = 0;
            uStack_8dc = 0;
            uStack_8e8 = 0;
            uStack_8e4 = 0;
            if ((int)uStack_908._4_4_ < 1) {
              uStack_908._0_4_ = (float)uStack_660;
              if (2 < (int)uStack_660._4_4_) goto LAB_1095ab480;
LAB_1095ab4c4:
              uStack_908._0_4_ = (float)uStack_660;
              pfVar25 = (float *)&uStack_660;
              uStack_908._4_4_ = uStack_660._4_4_;
LAB_1095ab4c8:
              uStack_900._0_4_ = pfVar25[2];
              uStack_900._4_4_ = pfVar25[3];
              plVar58 = *(long **)(pfVar25 + 0x12);
              *plStack_8c0 = *plVar58;
              plStack_8c0[1] = plVar58[1];
            }
            else {
              lVar39 = 0;
              do {
                *(undefined4 *)((long)puStack_8c8 + lVar39 * 4) = 0;
                lVar39 = lVar39 + 1;
              } while (lVar39 < (int)uStack_908._4_4_);
              uStack_908._0_4_ = (float)uStack_660;
              if ((int)uStack_908._4_4_ < 3 && (int)uStack_660._4_4_ < 3) goto LAB_1095ab4c4;
LAB_1095ab480:
              uStack_908._0_4_ = (float)uStack_660;
              pfVar25 = (float *)&uStack_660;
              func_0x000109a84868(&uStack_908,&uStack_660);
            }
          }
          uStack_8e8 = (undefined4)*(undefined8 *)(pfVar25 + 8);
          uStack_8e4 = (undefined4)((ulong)*(undefined8 *)(pfVar25 + 8) >> 0x20);
          uStack_8f0 = (undefined4)*(undefined8 *)(pfVar25 + 6);
          uStack_8ec = (undefined4)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20);
          uStack_8d8 = (undefined4)*(undefined8 *)(pfVar25 + 0xc);
          uStack_8d4 = (undefined4)((ulong)*(undefined8 *)(pfVar25 + 0xc) >> 0x20);
          uStack_8e0 = (undefined4)*(undefined8 *)(pfVar25 + 10);
          uStack_8dc = (undefined4)((ulong)*(undefined8 *)(pfVar25 + 10) >> 0x20);
          lStack_8d0 = *(long *)(pfVar25 + 0xe);
          uStack_8f8 = (undefined4)*(undefined8 *)(pfVar25 + 4);
          uStack_8f4 = (undefined4)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20);
          pdVar22 = (double *)(pfVar51 + 0x126);
          __ZNSt3__15mutex6unlockEv();
          if (*(long *)(pfVar51 + 0x15c) != 0) {
            uStack_928 = 0;
            dStack_930 = 0.0;
            lStack_918 = 0;
            plStack_920 = (long *)0x0;
            uStack_910 = 0x3f800000;
            for (plVar58 = *(long **)(pfVar51 + 0x15a); plVar58 != (long *)0x0;
                plVar58 = (long *)*plVar58) {
              pfVar25 = (float *)(plVar58 + 2);
              pdVar22 = &dStack_930;
              uStack_678 = pfVar25;
              FUN_1095b3c7c(pdVar22,pfVar25,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
              uStack_678 = (float *)plVar58[6];
              if ((((2 < *(int *)((long)pdVar22 + 0x2c)) ||
                   (*(int *)(pdVar22 + 6) != *(int *)(plVar58 + 6))) ||
                  (*(int *)((long)pdVar22 + 0x34) != *(int *)((long)plVar58 + 0x34))) ||
                 (((*(uint *)(pdVar22 + 5) & 0xfff) != (*(uint *)(plVar58 + 5) & 0xfff) ||
                  (pdVar22[7] == 0.0)))) {
                FUN_109a83fd0(pdVar22 + 5,2,&uStack_678);
              }
              pfVar23 = pfVar51 + 0x1d0;
              uStack_678 = pfVar25;
              FUN_1095b3c7c(pfVar23,pfVar25,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
              if (pfVar23[0xc] == 0.0) {
                pfVar23 = pfVar51 + 0x1d0;
                uStack_678 = pfVar25;
                FUN_1095b3c7c(pfVar23,pfVar25,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
                if (pfVar23[0xd] == 0.0) {
                  pfVar23 = pfVar51 + 0x1d0;
                  uStack_678 = pfVar25;
                  FUN_1095b3c7c(pfVar23,pfVar25,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
                  pdVar22 = &dStack_930;
                  uStack_678 = pfVar25;
                  FUN_1095b3c7c(pdVar22,pfVar25,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
                  fVar68 = *(float *)(pdVar22 + 6);
                  pdVar22 = &dStack_930;
                  uStack_678 = pfVar25;
                  FUN_1095b3c7c(pdVar22,pfVar25,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
                  fVar66 = *(float *)((long)pdVar22 + 0x34);
                  pdVar22 = &dStack_930;
                  uStack_678 = pfVar25;
                  FUN_1095b3c7c(pdVar22,pfVar25,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
                  if (((2 < (int)pfVar23[0xb]) || (pfVar23[0xc] != fVar68)) ||
                     ((pfVar23[0xd] != fVar66 ||
                      ((((uint)pfVar23[10] & 0xfff) != (*(uint *)(pdVar22 + 5) & 0xfff) ||
                       (*(long *)(pfVar23 + 0xe) == 0)))))) {
                    uStack_678 = (float *)CONCAT44(fVar66,fVar68);
                    FUN_109a83fd0(pfVar23 + 10,2,&uStack_678);
                  }
                }
              }
            }
            if (0 < (int)fVar72) {
              uVar62 = 0;
              do {
                if (0 < (int)fVar75) {
                  uVar44 = 0;
                  do {
                    plVar58 = *(long **)(pfVar51 + 0x15a);
                    if (plVar58 != (long *)0x0) {
                      fVar68 = *(float *)(CONCAT44(uStack_784,uStack_788) + *puStack_750 * uVar62 +
                                         uVar44 * 4);
                      fVar66 = *(float *)(CONCAT44(uStack_8f4,uStack_8f8) + *plStack_8c0 * uVar62 +
                                         uVar44 * 4);
                      fVar67 = fVar68 - (float)(int)fVar68;
                      fVar71 = fVar66 - (float)(int)fVar66;
                      iVar27 = (int)(fVar68 + 1.0);
                      fVar76 = fVar66 + 1.0;
                      do {
                        lVar46 = plVar58[7];
                        lVar50 = *(long *)plVar58[0xe];
                        lVar39 = lVar46 + lVar50 * (int)fVar66;
                        if (fVar64 <= fVar68 + 1.0) {
                          fVar73 = 0.0;
                          fVar74 = 0.0;
                          fVar77 = 0.0;
                          if (fVar76 < fVar65) goto LAB_1095ab824;
                        }
                        else {
                          fVar74 = (float)NEON_ucvtf((uint)*(byte *)(lVar39 + iVar27));
                          fVar73 = 0.0;
                          if (fVar65 <= fVar76) {
                            fVar77 = 0.0;
                          }
                          else {
                            fVar73 = (float)NEON_ucvtf((uint)*(byte *)(lVar46 + lVar50 * (int)fVar76
                                                                      + (long)iVar27));
LAB_1095ab824:
                            fVar77 = (float)NEON_ucvtf((uint)*(byte *)(lVar46 + lVar50 * (int)fVar76
                                                                      + (long)(int)fVar68));
                          }
                        }
                        uStack_678 = (float *)(plVar58 + 2);
                        bVar49 = *(byte *)(lVar39 + (int)fVar68);
                        pdVar22 = &dStack_930;
                        FUN_1095b3c7c(pdVar22,uStack_678,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
                        *(char *)((long)pdVar22[7] + *(long *)pdVar22[0xe] * uVar62 + uVar44) =
                             (char)(int)(fVar74 * (1.0 - fVar71) * fVar67 +
                                         (float)bVar49 * (1.0 - fVar67) * (1.0 - fVar71) +
                                         fVar73 * fVar67 * fVar71 + fVar77 * (1.0 - fVar67) * fVar71
                                        );
                        plVar58 = (long *)*plVar58;
                      } while (plVar58 != (long *)0x0);
                    }
                    uVar44 = uVar44 + 1;
                  } while (uVar44 != (uint)fVar75);
                }
                uVar62 = uVar62 + 1;
              } while (uVar62 != (uint)fVar72);
            }
            plVar58 = plStack_920;
            if (((byte)*(code *)((long)pfVar51 + 0x186) & 1) != 0) {
              for (; plVar58 != (long *)0x0; plVar58 = (long *)*plVar58) {
                pfStack_940 = (float *)(plVar58 + 5);
                uStack_668 = 0;
                uStack_678._4_4_ = (undefined4)((ulong)uStack_678 >> 0x20);
                uStack_678 = (float *)CONCAT44(uStack_678._4_4_,0x1010000);
                uStack_948._4_4_ = (undefined4)((ulong)uStack_948 >> 0x20);
                uStack_948 = (long *)CONCAT44(uStack_948._4_4_,0x2010000);
                uStack_938 = 0;
                pfStack_670 = pfStack_940;
                FUN_109b59078((double)(int)pfVar51[0x62],0x406fe00000000000,&uStack_678,&uStack_948,
                              3);
              }
            }
            if (*(code *)(pfVar51 + 0x65) == (code)0x1 && lStack_918 != 0) {
              lVar39 = plStack_920[6];
              iVar27 = *(int *)((long)plStack_920 + 0x34);
              FUN_109246310(&uStack_678,9);
              if (2 < (int)lVar39) {
                lVar46 = 0;
                uVar62 = 1;
                do {
                  if (2 < iVar27) {
                    lVar50 = 0;
                    uVar44 = 1;
                    plVar58 = plStack_920;
                    do {
                      for (; plVar58 != (long *)0x0; plVar58 = (long *)*plVar58) {
                        lVar55 = -1;
                        lVar24 = 0;
                        lVar56 = lVar46;
                        do {
                          lVar28 = 0;
                          do {
                            *(code *)((long)uStack_678 + lVar28 + lVar24) =
                                 *(code *)(plVar58[7] + lVar56 * *(long *)plVar58[0xe] + lVar50 +
                                          lVar28);
                            lVar28 = lVar28 + 1;
                          } while (lVar28 != 3);
                          lVar55 = lVar55 + 1;
                          lVar56 = lVar56 + 1;
                          lVar24 = lVar24 + 3;
                        } while (lVar55 != 2);
                        iVar59 = (int)pfStack_670 - (int)uStack_678;
                        if (iVar59 != 0) {
                          pfVar25 = (float *)((long)uStack_678 + (long)(iVar59 / 2));
                          pfVar47 = pfStack_670;
                          pfVar23 = uStack_678;
                          if (pfVar25 != pfStack_670) {
LAB_1095ab9f0:
                            uVar53 = (long)pfVar47 - (long)pfVar23;
                            if (1 < uVar53) {
                              if (uVar53 == 3) {
                                cVar32 = *(code *)((long)pfVar23 + 1);
                                cVar5 = *(code *)((long)pfVar47 + -1);
                                cVar17 = cVar32;
                                if ((byte)cVar5 <= (byte)cVar32) {
                                  cVar17 = cVar5;
                                }
                                if ((byte)cVar32 <= (byte)cVar5) {
                                  cVar32 = cVar5;
                                }
                                *(code *)((long)pfVar47 + -1) = cVar32;
                                *(code *)((long)pfVar23 + 1) = cVar17;
                                cVar17 = *(code *)((long)pfVar47 + -1);
                                cVar32 = *(code *)pfVar23;
                                cVar5 = cVar17;
                                if ((byte)cVar32 <= (byte)cVar17) {
                                  cVar5 = cVar32;
                                }
                                if ((byte)cVar17 <= (byte)cVar32) {
                                  cVar17 = cVar32;
                                }
                                *(code *)((long)pfVar47 + -1) = cVar17;
                                cVar17 = *(code *)((long)pfVar23 + 1);
                                if ((byte)cVar17 <= (byte)cVar5) {
                                  *(code *)pfVar23 = cVar17;
                                  cVar17 = cVar5;
                                }
                                *(code *)((long)pfVar23 + 1) = cVar17;
                              }
                              else if (uVar53 == 2) {
                                cVar17 = *(code *)pfVar23;
                                if ((byte)*(code *)((long)pfVar47 + -1) < (byte)cVar17) {
                                  *(code *)pfVar23 = *(code *)((long)pfVar47 + -1);
                                  *(code *)((long)pfVar47 + -1) = cVar17;
                                }
                              }
                              else if ((long)uVar53 < 8) {
                                while (pfVar25 = pfVar23, (float *)((long)pfVar47 + -1) != pfVar25)
                                {
                                  pfVar23 = (float *)((long)pfVar25 + 1);
                                  if ((pfVar47 != pfVar25) && (pfVar23 != pfVar47)) {
                                    cVar17 = *(code *)pfVar25;
                                    pfVar29 = pfVar25;
                                    pfVar30 = pfVar23;
                                    cVar32 = cVar17;
                                    do {
                                      pfVar34 = (float *)((long)pfVar30 + 1);
                                      pfVar33 = pfVar30;
                                      cVar5 = *(code *)pfVar30;
                                      if ((byte)cVar32 <= (byte)*(code *)pfVar30) {
                                        pfVar33 = pfVar29;
                                        cVar5 = cVar32;
                                      }
                                      cVar32 = cVar5;
                                      pfVar29 = pfVar33;
                                      pfVar30 = pfVar34;
                                    } while (pfVar34 != pfVar47);
                                    if (pfVar33 != pfVar25) {
                                      *(code *)pfVar25 = *(code *)pfVar33;
                                      *(code *)pfVar33 = cVar17;
                                    }
                                  }
                                }
                              }
                              else {
                                pfVar29 = (float *)((long)pfVar23 + (uVar53 >> 1));
                                pfVar30 = (float *)((long)pfVar47 + -1);
                                cVar32 = *(code *)pfVar30;
                                cVar5 = *(code *)pfVar29;
                                cVar17 = cVar5;
                                if ((byte)cVar32 <= (byte)cVar5) {
                                  cVar17 = cVar32;
                                }
                                cVar6 = cVar5;
                                if ((byte)cVar5 <= (byte)cVar32) {
                                  cVar6 = cVar32;
                                }
                                *(code *)pfVar30 = cVar6;
                                *(code *)pfVar29 = cVar17;
                                cVar6 = *(code *)pfVar30;
                                cVar7 = *(code *)pfVar23;
                                cVar17 = cVar6;
                                if ((byte)cVar7 <= (byte)cVar6) {
                                  cVar17 = cVar7;
                                }
                                cVar8 = cVar6;
                                if ((byte)cVar6 <= (byte)cVar7) {
                                  cVar8 = cVar7;
                                }
                                *(code *)pfVar30 = cVar8;
                                cVar8 = *(code *)pfVar29;
                                cVar35 = cVar8;
                                if ((byte)cVar8 <= (byte)cVar17) {
                                  *(code *)pfVar23 = cVar8;
                                  cVar35 = cVar17;
                                }
                                *(code *)pfVar29 = cVar35;
                                uVar31 = (uint)(((byte)cVar32 <= (byte)cVar5 ||
                                                (byte)cVar7 <= (byte)cVar6) ||
                                               (byte)cVar8 <= (byte)cVar17);
                                cVar9 = *(code *)pfVar23;
                                pfVar33 = pfVar30;
                                if ((byte)cVar35 <= (byte)cVar9) {
                                  do {
                                    pfVar33 = (float *)((long)pfVar33 + -1);
                                    if (pfVar33 == pfVar23) {
                                      pfVar29 = (float *)((long)pfVar23 + 1);
                                      pfVar33 = pfVar29;
                                      if ((byte)cVar9 < (byte)*(code *)pfVar30) goto LAB_1095abbd4;
                                      goto LAB_1095abb8c;
                                    }
                                  } while ((byte)cVar35 <= (byte)*(code *)pfVar33);
                                  *(code *)pfVar23 = *(code *)pfVar33;
                                  *(code *)pfVar33 = cVar9;
                                  uVar31 = 1;
                                  pfVar30 = pfVar33;
                                  if (((byte)cVar32 <= (byte)cVar5 || (byte)cVar7 <= (byte)cVar6) ||
                                      (byte)cVar8 <= (byte)cVar17) {
                                    uVar31 = 2;
                                  }
                                }
                                pfVar33 = (float *)((long)pfVar23 + 1);
                                pfVar14 = pfVar29;
                                pfVar34 = pfVar33;
                                pfVar36 = pfVar33;
                                if (pfVar33 < pfVar30) {
                                  while( true ) {
                                    pfVar29 = pfVar14;
                                    do {
                                      pfVar34 = pfVar36;
                                      pfVar36 = (float *)((long)pfVar34 + 1);
                                      cVar17 = *(code *)pfVar34;
                                    } while ((byte)cVar17 < (byte)*(code *)pfVar29);
                                    do {
                                      pfVar30 = (float *)((long)pfVar30 + -1);
                                    } while ((byte)*(code *)pfVar29 <= (byte)*(code *)pfVar30);
                                    if (pfVar30 <= pfVar34) break;
                                    *(code *)pfVar34 = *(code *)pfVar30;
                                    *(code *)pfVar30 = cVar17;
                                    uVar31 = uVar31 + 1;
                                    pfVar14 = pfVar30;
                                    if (pfVar34 != pfVar29) {
                                      pfVar14 = pfVar29;
                                    }
                                  }
                                }
                                if (pfVar34 != pfVar29) {
                                  cVar17 = *(code *)pfVar34;
                                  if ((byte)*(code *)pfVar29 < (byte)cVar17) {
                                    *(code *)pfVar34 = *(code *)pfVar29;
                                    *(code *)pfVar29 = cVar17;
                                    uVar31 = uVar31 + 1;
                                  }
                                }
                                if (pfVar34 != pfVar25) {
                                  if (uVar31 == 0) {
                                    pfVar29 = pfVar34;
                                    if (pfVar25 < pfVar34) {
                                      do {
                                        if (pfVar33 == pfVar34) goto LAB_1095abd0c;
                                        cVar17 = *(code *)pfVar33;
                                        pcVar16 = (code *)((long)pfVar33 + -1);
                                        pfVar33 = (float *)((long)pfVar33 + 1);
                                      } while ((byte)*pcVar16 <= (byte)cVar17);
                                    }
                                    else {
                                      do {
                                        pfVar30 = (float *)((long)pfVar29 + 1);
                                        if (pfVar30 == pfVar47) goto LAB_1095abd0c;
                                        cVar17 = *(code *)pfVar29;
                                        pfVar29 = pfVar30;
                                      } while ((byte)cVar17 <= (byte)*(code *)pfVar30);
                                    }
                                  }
                                  if (pfVar34 <= pfVar25) {
                                    pfVar23 = (float *)((long)pfVar34 + 1);
                                    pfVar34 = pfVar47;
                                  }
                                  goto LAB_1095abc1c;
                                }
                              }
                            }
                          }
LAB_1095abd0c:
                          *(code *)(plVar58[7] + *(long *)plVar58[0xe] * uVar62 + uVar44) =
                               *(code *)((long)uStack_678 +
                                        ((long)((ulong)(uint)(iVar59 - (iVar59 >> 0x1f)) << 0x20) >>
                                        0x21));
                        }
                      }
                      uVar44 = uVar44 + 1;
                      lVar50 = lVar50 + 1;
                      plVar58 = plStack_920;
                    } while (uVar44 != iVar27 - 1);
                  }
                  uVar62 = uVar62 + 1;
                  lVar46 = lVar46 + 1;
                } while (uVar62 != (int)lVar39 - 1);
              }
              if (uStack_678 != (float *)0x0) {
                pfStack_670 = uStack_678;
                __ZdlPv();
              }
            }
            if (*(code *)(pfVar51 + 99) == (code)0x1) {
              if (plStack_920 != (long *)0x0) {
                fVar72 = pfVar51[100];
                plVar58 = plStack_920;
                do {
                  plVar20 = plVar58 + 2;
                  pfStack_940 = (float *)(plVar58 + 5);
                  uStack_938 = 0;
                  uStack_948 = (long *)CONCAT44(uStack_948._4_4_,0x1010000);
                  pfVar25 = pfVar51 + 0x1d0;
                  uStack_678 = (float *)plVar20;
                  FUN_1095b3c7c(pfVar25,plVar20,&UNK_10dd5b8f9,&uStack_678,auStack_978);
                  pfStack_958 = pfVar25 + 10;
                  uStack_950 = 0;
                  auStack_960[0] = 0x1010000;
                  fVar75 = pfVar51[100];
                  pfVar25 = pfVar51 + 0x1d0;
                  uStack_678 = (float *)plVar20;
                  FUN_1095b3c7c(pfVar25,plVar20,&UNK_10dd5b8f9,&uStack_678,&uStack_8a1);
                  pfStack_670 = (float *)(double)fVar75;
                  auStack_978[0] = 0x2010000;
                  pfStack_970 = pfVar25 + 10;
                  uStack_968 = 0;
                  uStack_668 = 0;
                  uStack_678 = (float *)(double)(1.0 - fVar72);
                  FUN_109a91d90();
                  FUN_109a293c4(&uStack_948,auStack_960,auStack_978,pfVar25,0xffffffff,
                                &PTR_FUN_1132e8d50,1,&uStack_678);
                  pfVar25 = pfVar51 + 0x1d0;
                  uStack_678 = (float *)plVar20;
                  FUN_1095b3c7c(pfVar25,plVar20,&UNK_10dd5b8f9,&uStack_678,&uStack_948);
                  pfVar23 = pfVar51 + 0x156;
                  uStack_948 = plVar20;
                  FUN_1095b3c7c(pfVar23,plVar20,&UNK_10dd5b8f9,&uStack_948,auStack_960);
                  pfStack_670 = pfVar23 + 10;
                  uStack_678 = (float *)CONCAT44(uStack_678._4_4_,0x2010000);
                  uStack_668 = 0;
                  FUN_109a479a0(pfVar25 + 10,&uStack_678);
                  plVar58 = (long *)*plVar58;
                } while (plVar58 != (long *)0x0);
              }
            }
            else {
              FUN_1095b3bdc(pfVar51 + 0x156,&dStack_930);
            }
            pdVar22 = &dStack_930;
            FUN_1094c8830();
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
          dStack_930 = (double)((long)pdVar22 - (long)pfVar19) / 1000000000.0;
          pfVar19 = pfVar51 + 0xa0;
          FUN_1095b14e0(pfVar19,&dStack_930);
          dVar69 = (double)uStack_440;
          lVar39 = uStack_1a8;
          puVar40 = uStack_438;
          puVar57 = uStack_e8;
          if (lStack_8d0 != 0) {
            piVar1 = (int *)(lStack_8d0 + 0x14);
            do {
              iVar27 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              pfVar19 = (float *)&uStack_908;
              func_0x000109a848d4();
              dVar69 = (double)uStack_440;
              lVar39 = uStack_1a8;
              puVar40 = uStack_438;
              puVar57 = uStack_e8;
            }
          }
          lStack_8d0 = 0;
          uStack_8f0 = 0;
          uStack_8ec = 0;
          uStack_8f8 = 0;
          uStack_8f4 = 0;
          uStack_8e0 = 0;
          uStack_8dc = 0;
          uStack_8e8 = 0;
          uStack_8e4 = 0;
          if (0 < (int)uStack_908._4_4_) {
            lVar46 = 0;
            do {
              *(undefined4 *)((long)puStack_8c8 + lVar46 * 4) = 0;
              lVar46 = lVar46 + 1;
            } while (lVar46 < (int)uStack_908._4_4_);
          }
          uStack_440 = (long *)dVar69;
          uStack_1a8 = lVar39;
          uStack_438 = puVar40;
          uStack_e8 = puVar57;
          if (plStack_8c0 != &lStack_8b8 && plStack_8c0 != (long *)0x0) {
            pfVar19 = (float *)plStack_8c0[-1];
            _free();
          }
          if (lStack_760 != 0) {
            piVar1 = (int *)(lStack_760 + 0x14);
            do {
              iVar27 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              pfVar19 = &fStack_798;
              func_0x000109a848d4();
            }
          }
          lStack_760 = 0;
          iStack_780 = 0;
          uStack_77c = 0;
          uStack_788 = 0;
          uStack_784 = 0;
          uStack_770 = 0;
          uStack_76c = 0;
          uStack_778 = 0;
          uStack_774 = 0;
          if (0 < (int)fStack_794) {
            lVar39 = 0;
            do {
              puStack_758[lVar39] = 0;
              lVar39 = lVar39 + 1;
            } while (lVar39 < (int)fStack_794);
          }
          if (puStack_750 != &uStack_748 && puStack_750 != (ulong *)0x0) {
            pfVar19 = (float *)puStack_750[-1];
            _free();
          }
          if (lStack_700 != 0) {
            piVar1 = (int *)(lStack_700 + 0x14);
            do {
              iVar27 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              pfVar19 = &fStack_738;
              func_0x000109a848d4();
            }
          }
          lStack_700 = 0;
          iStack_720 = 0;
          uStack_71c = 0;
          uStack_728 = 0;
          uStack_724 = 0;
          uStack_710 = 0;
          uStack_70c = 0;
          uStack_718 = 0;
          uStack_714 = 0;
          if (0 < (int)fStack_734) {
            lVar39 = 0;
            do {
              puStack_6f8[lVar39] = 0;
              lVar39 = lVar39 + 1;
            } while (lVar39 < (int)fStack_734);
          }
          if (plStack_6f0 != &lStack_6e8 && plStack_6f0 != (long *)0x0) {
            pfVar19 = (float *)plStack_6f0[-1];
            _free();
          }
          if (lStack_6a0 != 0) {
            piVar1 = (int *)(lStack_6a0 + 0x14);
            do {
              iVar27 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              pfVar19 = (float *)&uStack_6d8;
              func_0x000109a848d4();
            }
          }
          lStack_6a0 = 0;
          uStack_6c0 = 0;
          iStack_6bc = 0;
          uStack_6c8 = 0;
          iStack_6c4 = 0;
          uStack_6b0._0_4_ = 0;
          uStack_6b0._4_4_ = 0;
          uStack_6b8._0_4_ = 0;
          uStack_6b8._4_4_ = 0;
          if (0 < (int)uStack_6d8._4_4_) {
            lVar39 = 0;
            do {
              *(undefined4 *)((long)plStack_698 + lVar39 * 4) = 0;
              lVar39 = lVar39 + 1;
            } while (lVar39 < (int)uStack_6d8._4_4_);
          }
          if (puStack_690 != &uStack_688 && puStack_690 != (ulong *)0x0) {
            pfVar19 = (float *)puStack_690[-1];
            _free();
          }
          if (pcStack_628 != (code *)0x0) {
            piVar1 = (int *)((long)pcStack_628 + 0x14);
            do {
              iVar27 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              pfVar19 = (float *)&uStack_660;
              func_0x000109a848d4();
            }
          }
          pcStack_628 = (code *)0x0;
          uStack_648 = 0;
          uStack_644 = 0;
          uStack_650._0_4_ = 0;
          uStack_650._4_4_ = 0;
          uStack_638._0_4_ = 0;
          uStack_638._4_4_ = 0;
          uStack_640._0_4_ = 0;
          uStack_640._4_4_ = 0;
          if (0 < (int)uStack_660._4_4_) {
            lVar39 = 0;
            do {
              *(undefined4 *)(pcStack_620 + lVar39 * 4) = 0;
              lVar39 = lVar39 + 1;
            } while (lVar39 < (int)uStack_660._4_4_);
          }
          if (ppcStack_618 != &pcStack_610 && ppcStack_618 != (code **)0x0) {
            pfVar19 = (float *)ppcStack_618[-1];
            _free();
          }
          if (pcStack_868 != (code *)0x0) {
            piVar1 = (int *)((long)pcStack_868 + 0x14);
            do {
              iVar27 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar27 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar27 + -1 == 0) {
              pfVar19 = (float *)&uStack_8a0;
              func_0x000109a848d4();
            }
          }
          pcStack_868 = (code *)0x0;
          uStack_888._0_4_ = 0.0;
          uStack_888._4_4_ = 0;
          uStack_890._0_4_ = 0;
          uStack_890._4_4_ = 0;
          uStack_878._0_4_ = 0;
          uStack_878._4_4_ = 0;
          uStack_880._0_4_ = 0;
          uStack_880._4_4_ = 0;
          if (0 < (int)uStack_8a0._4_4_) {
            lVar39 = 0;
            do {
              *(undefined4 *)(pcStack_860 + lVar39 * 4) = 0;
              lVar39 = lVar39 + 1;
            } while (lVar39 < (int)uStack_8a0._4_4_);
          }
          uStack_6d0 = (float *)CONCAT44(uStack_6d0._4_4_,(float)uStack_6d0);
          pdVar22 = (double *)CONCAT44(uStack_660._4_4_,(float)uStack_660);
          uStack_658 = (float *)CONCAT44(uStack_658._4_4_,(int)uStack_658);
          uStack_898 = (double *)CONCAT44(uStack_898._4_4_,(int)uStack_898);
          uStack_6d8 = (undefined4 *)CONCAT44(uStack_6d8._4_4_,(float)uStack_6d8);
          uStack_650 = (float *)CONCAT44(uStack_650._4_4_,(undefined4)uStack_650);
          uStack_638 = (float *)CONCAT44(uStack_638._4_4_,(undefined4)uStack_638);
          if (ppcStack_858 != &pcStack_850 && ppcStack_858 != (code **)0x0) {
            pfVar19 = (float *)ppcStack_858[-1];
            _free();
            pdVar22 = (double *)CONCAT44(uStack_660._4_4_,(float)uStack_660);
          }
          goto LAB_1095a9eac;
        }
      }
      else {
        fVar75 = pfVar51[0x1dc];
      }
      uStack_8a0._0_4_ = fVar75;
      uStack_8a0._4_4_ = fVar72;
      if ((((2 < (int)pfVar51[0x1a1]) || (pfVar51[0x1a2] != (float)uStack_8a0)) ||
          (pfVar51[0x1a3] != fVar72)) ||
         ((((uint)pfVar51[0x1a0] & 0xfff) != 5 || (*(long *)(pfVar51 + 0x1a4) == 0)))) {
        FUN_109a83fd0(pfVar51 + 0x1a0,2,&uStack_8a0,5);
        uStack_8a0._0_4_ = pfVar51[0x1dc];
        uStack_8a0._4_4_ = pfVar51[0x1dd];
      }
      if (((2 < (int)pfVar51[0x1b9]) || (pfVar51[0x1ba] != (float)uStack_8a0)) ||
         ((pfVar51[0x1bb] != uStack_8a0._4_4_ ||
          ((((uint)pfVar51[0x1b8] & 0xfff) != 5 ||
           (fVar72 = uStack_8a0._4_4_, fVar75 = (float)uStack_8a0, *(long *)(pfVar51 + 0x1bc) == 0))
          )))) {
        FUN_109a83fd0(pfVar51 + 0x1b8,2,&uStack_8a0,5);
        fVar72 = pfVar51[0x1dd];
        fVar75 = pfVar51[0x1dc];
      }
      uStack_898._0_4_ = 0;
      uStack_898._4_4_ = 0;
      uStack_8a0._0_4_ = 0.0;
      uStack_8a0._4_4_ = 0.0;
      pfVar19 = (float *)**(undefined8 **)(pfVar51 + 0x19e);
      FUN_1095306e0(pfVar19,*(undefined8 *)(pfVar51 + 0x1de),fVar72,fVar75,0,&uStack_8a0);
      pdVar22 = uStack_660;
    }
    else {
      pfVar51[0x197] = 0.0;
      *(code *)(pfVar51 + 0x198) = (code)0x1;
      pfVar51[0x19a] = 0.0;
      pfVar51[0x19b] = 0.0;
    }
LAB_1095a9eac:
    pfVar25 = pfVar51 + 0x124;
    plVar58 = *(long **)(pfVar51 + 0x124);
    uStack_660 = pdVar22;
    if (plVar58 != (long *)0x0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_8a0._0_4_ = SUB84(pfVar19,0);
      uStack_8a0._4_4_ = (float)((ulong)pfVar19 >> 0x20);
      FUN_1093f25b0(plVar58,&uStack_8a0);
      if ((int)plVar58 == 0) {
        func_0x000108820c58(pfVar25);
        plVar58 = *(long **)pfVar25;
        pfVar25[0] = 0.0;
        pfVar25[1] = 0.0;
        if (plVar58 == (long *)0x0) goto LAB_1095a9f20;
        plVar20 = plVar58 + 1;
        do {
          lVar39 = *plVar20;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = lVar39 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar39 == 0) {
          (**(code **)(*plVar58 + 0x10))();
        }
      }
      if (*(long *)pfVar25 == 0) goto LAB_1095a9f20;
LAB_1095aab58:
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_8a0 = (double *)((double)((long)plVar58 - (long)pfVar18) / 1000000000.0);
      FUN_1095b14e0(pfVar51 + 0xb0,&uStack_8a0);
      goto LAB_1095aab84;
    }
LAB_1095a9f20:
    plVar58 = *(long **)(pfVar51 + 2);
    if (plVar58 != (long *)0x0) {
      uVar70 = *(undefined8 *)pfVar51;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar58 != (long *)0x0) {
        plVar20 = plVar58 + 2;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar60 = plVar58 + 1;
        do {
          lVar39 = *plVar60;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar60,0x10);
          if (bVar11) {
            *plVar60 = lVar39 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar39 == 0) {
          (**(code **)(*plVar58 + 0x10))(plVar58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar58);
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        __ZNSt3__15mutex4lockEv(pfVar51 + 0x126);
        pfVar51[0x4b] = 5.60519e-45;
        __ZNSt3__15mutex6unlockEv(pfVar51 + 0x126);
        pdVar22 = (double *)CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0);
        if (*(long *)(pfVar51 + 0xf8) != *(long *)(pfVar51 + 0xfa)) {
          uStack_658._0_4_ = 0;
          uStack_658._4_4_ = 0;
          uStack_660._0_4_ = 0.0;
          uStack_660._4_4_ = 0.0;
          uStack_650._0_4_ = 0;
          uStack_650._4_4_ = 0;
          FUN_10955a6c4(&uStack_660,
                        (*(long *)(pfVar51 + 0xfa) - *(long *)(pfVar51 + 0xf8) >> 3) *
                        -0x5555555555555555);
          pdVar42 = (double *)CONCAT44(uStack_8a0._4_4_,(float)uStack_8a0);
          pfVar23 = (float *)CONCAT44(uStack_888._4_4_,(float)uStack_888);
          pdVar22 = (double *)CONCAT44(uStack_890._4_4_,(undefined4)uStack_890);
          puVar40 = (undefined8 *)CONCAT44(uStack_880._4_4_,(undefined4)uStack_880);
          lVar39 = *(long *)(pfVar51 + 0xf8);
          if (*(long *)(pfVar51 + 0xfa) != lVar39) {
            uVar62 = 0;
            puVar26 = uStack_6d8;
            do {
              pfVar47 = pfVar51 + 0x160;
              uStack_880 = puVar40;
              uStack_6d8 = puVar26;
              uStack_890 = pdVar22;
              uStack_888 = pfVar23;
              uStack_8a0 = pdVar42;
              FUN_1095b41e4(pfVar47,lVar39 + uVar62 * 0x18);
              if (pfVar47 == (float *)0x0) {
                FUN_1095af460(&uStack_8a0,pfVar51,*(long *)(pfVar51 + 0xf8) + uVar62 * 0x18);
                pfVar23 = (float *)CONCAT44(uStack_658._4_4_,(int)uStack_658);
                if (pfVar23 < uStack_650) {
                  FUN_10938f0d4(pfVar23,&uStack_8a0);
                  pfVar23 = pfVar23 + 0x18;
                }
                else {
                  pfVar23 = (float *)&uStack_660;
                  FUN_10938efac(pfVar23,&uStack_8a0);
                }
                uStack_658._0_4_ = (int)pfVar23;
                uStack_658._4_4_ = (int)((ulong)pfVar23 >> 0x20);
                pdVar42 = uStack_8a0;
                if (pcStack_868 != (code *)0x0) {
                  pcVar16 = pcStack_868 + 0x14;
                  do {
                    iVar27 = *(int *)pcVar16;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                    if (bVar11) {
                      *(int *)pcVar16 = iVar27 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (iVar27 + -1 == 0) {
                    func_0x000109a848d4(&uStack_8a0);
                    pdVar42 = uStack_8a0;
                  }
                }
                uStack_8a0._4_4_ = (float)((ulong)pdVar42 >> 0x20);
                pcStack_868 = (code *)0x0;
                uStack_888._0_4_ = 0.0;
                uStack_888._4_4_ = 0;
                pfVar23 = (float *)0x0;
                uStack_890._0_4_ = 0;
                uStack_890._4_4_ = 0;
                pdVar22 = (double *)0x0;
                uStack_878._0_4_ = 0;
                uStack_878._4_4_ = 0;
                uStack_880._0_4_ = 0;
                uStack_880._4_4_ = 0;
                puVar40 = (undefined8 *)0x0;
                if (0 < (int)uStack_8a0._4_4_) {
                  lVar39 = 0;
                  do {
                    *(undefined4 *)(pcStack_860 + lVar39 * 4) = 0;
                    lVar39 = lVar39 + 1;
                  } while (lVar39 < (int)uStack_8a0._4_4_);
                }
                puVar26 = uStack_6d8;
                if (ppcStack_858 != &pcStack_850 && ppcStack_858 != (code **)0x0) {
                  uStack_8a0 = pdVar42;
                  _free(ppcStack_858[-1]);
                  pfVar23 = (float *)CONCAT44(uStack_888._4_4_,(float)uStack_888);
                  pdVar22 = (double *)CONCAT44(uStack_890._4_4_,(undefined4)uStack_890);
                  puVar40 = (undefined8 *)CONCAT44(uStack_880._4_4_,(undefined4)uStack_880);
                  puVar26 = uStack_6d8;
                  pdVar42 = uStack_8a0;
                }
              }
              else {
                pfVar23 = (float *)CONCAT44(uStack_658._4_4_,(int)uStack_658);
                if (pfVar23 < uStack_650) {
                  func_0x0001095b157c(pfVar23,pfVar47 + 10);
                  pfVar23 = pfVar23 + 0x18;
                }
                else {
                  lVar39 = (long)pfVar23 - (long)uStack_660;
                  uVar44 = (lVar39 >> 5) * -0x5555555555555555 + 1;
                  if (0x2aaaaaaaaaaaaaa < uVar44) {
                    FUN_10937026c();
                    goto LAB_1095ac340;
                  }
                  lVar46 = (long)uStack_650 - (long)uStack_660 >> 5;
                  uVar53 = lVar46 * 0x5555555555555556;
                  if (uVar53 < uVar44 || uVar53 - uVar44 == 0) {
                    uVar53 = uVar44;
                  }
                  if (0x155555555555554 < (ulong)(lVar46 * -0x5555555555555555)) {
                    uVar53 = 0x2aaaaaaaaaaaaaa;
                  }
                  uStack_880 = &uStack_660;
                  if (uVar53 == 0) {
                    puVar40 = (undefined8 *)0x0;
                  }
                  else {
                    puVar40 = &uStack_660;
                    FUN_109370280();
                  }
                  lVar39 = (long)puVar40 + lVar39;
                  uStack_8a0._0_4_ = SUB84(puVar40,0);
                  uStack_8a0._4_4_ = (float)((ulong)puVar40 >> 0x20);
                  uStack_888 = (float *)(puVar40 + uVar53 * 0xc);
                  uStack_898 = (double *)lVar39;
                  uStack_890 = (double *)lVar39;
                  func_0x0001095b157c(lVar39,pfVar47 + 10);
                  uStack_890 = (double *)(lVar39 + 0x60);
                  pdVar22 = (double *)
                            ((long)uStack_660 +
                            (lVar39 - CONCAT44(uStack_658._4_4_,(int)uStack_658)));
                  FUN_10938f158(&uStack_660,uStack_660,CONCAT44(uStack_658._4_4_,(int)uStack_658),
                                pdVar22);
                  pfVar23 = (float *)uStack_890;
                  uStack_658 = (float *)uStack_890;
                  pfVar47 = uStack_888;
                  uStack_890 = uStack_660;
                  uStack_888 = uStack_650;
                  uStack_898 = uStack_660;
                  uStack_8a0 = uStack_660;
                  FUN_10919d9fc(&uStack_8a0);
                  uStack_660 = pdVar22;
                  uStack_650 = pfVar47;
                }
                uStack_658._0_4_ = (int)pfVar23;
                uStack_658._4_4_ = (int)((ulong)pfVar23 >> 0x20);
                puVar40 = uStack_880;
                puVar26 = uStack_6d8;
                pdVar22 = uStack_890;
                pfVar23 = uStack_888;
                pdVar42 = uStack_8a0;
              }
              uStack_8a0._4_4_ = (float)((ulong)pdVar42 >> 0x20);
              uStack_6d8._4_4_ = (float)((ulong)puVar26 >> 0x20);
              uVar62 = (ulong)((int)uVar62 + 1);
              lVar39 = *(long *)(pfVar51 + 0xf8);
              uVar44 = (*(long *)(pfVar51 + 0xfa) - lVar39 >> 3) * -0x5555555555555555;
            } while (uVar62 <= uVar44 && uVar44 - uVar62 != 0);
          }
          uStack_890._0_4_ = 0;
          uStack_890._4_4_ = 0;
          uStack_8a0._0_4_ = 2.4428242e-38;
          uStack_6d0 = pfVar51 + 0x28a;
          uStack_6d8._0_4_ = 9.477423e-38;
          uStack_6c8 = 0;
          iStack_6c4 = 0;
          uStack_880 = puVar40;
          uStack_898 = (double *)&uStack_660;
          uStack_888 = pfVar23;
          FUN_109a3ecac(&uStack_8a0,&uStack_6d8);
          uStack_8a0 = (double *)&uStack_660;
          FUN_1093702c4(&uStack_8a0);
          pdVar22 = uStack_8a0;
        }
        uStack_8a0._4_4_ = (float)((ulong)pdVar22 >> 0x20);
        if (*(code *)(pfVar51 + 0x57) != (code)0x1) {
          puVar40 = (undefined8 *)0x20;
          uStack_8a0 = pdVar22;
          __Znwm();
          *puVar40 = &PTR_FUN_110afdf68;
          puVar40[1] = pfVar51;
          puVar40[2] = uVar70;
          puVar40[3] = plVar58;
          uStack_6c0 = SUB84(puVar40,0);
          iStack_6bc = (int)((ulong)puVar40 >> 0x20);
          puVar40 = (undefined8 *)0x90;
          __Znwm();
          puVar40[2] = 0;
          puVar40[3] = 0x32aaaba7;
          puVar40[5] = 0;
          puVar40[4] = 0;
          puVar40[7] = 0;
          puVar40[6] = 0;
          puVar40[9] = 0;
          puVar40[8] = 0;
          puVar40[10] = 0;
          puVar40[0xb] = 0x3cb0b1bb;
          puVar40[0xd] = 0;
          puVar40[0xc] = 0;
          puVar40[0xf] = 0;
          puVar40[0xe] = 0;
          *(undefined8 *)((long)puVar40 + 0x84) = 0;
          *(undefined8 *)((long)puVar40 + 0x7c) = 0;
          *puVar40 = &PTR_DAT_110a75108;
          puVar40[1] = 0;
          uStack_6b8._0_4_ = SUB84(puVar40,0);
          uStack_6b8._4_4_ = (undefined4)((ulong)puVar40 >> 0x20);
          pcVar16 = (code *)((ulong)&uStack_9e0 | 8);
          uStack_9d8 = *(undefined8 *)(pfVar51 + 0x2c6);
          uStack_9e0 = *(ulong *)(pfVar51 + 0x2c4);
          fVar72 = pfVar51[0x2c5];
          uStack_9c8 = *(undefined8 *)(pfVar51 + 0x2ca);
          uStack_9d0 = *(undefined8 *)(pfVar51 + 0x2c8);
          uStack_9b8 = *(undefined8 *)(pfVar51 + 0x2ce);
          uStack_9c0 = *(undefined8 *)(pfVar51 + 0x2cc);
          pcStack_9a8 = *(code **)(pfVar51 + 0x2d2);
          uStack_9b0 = *(undefined8 *)(pfVar51 + 0x2d0);
          pcStack_990 = (code *)0x0;
          uStack_988 = 0;
          if (*(long *)(pfVar51 + 0x2d2) != 0) {
            piVar1 = (int *)(*(long *)(pfVar51 + 0x2d2) + 0x14);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = *piVar1 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            fVar72 = pfVar51[0x2c5];
          }
          pcStack_9a0 = pcVar16;
          ppcStack_998 = &pcStack_990;
          if ((int)fVar72 < 3) {
            pcStack_990 = (code *)**(undefined8 **)(pfVar51 + 0x2d6);
            uStack_988 = (*(undefined8 **)(pfVar51 + 0x2d6))[1];
          }
          else {
            uStack_9e0 = uStack_9e0 & 0xffffffff;
            func_0x000109a84868(&uStack_9e0,pfVar51 + 0x2c4);
          }
          uStack_a38 = *(undefined8 *)(pfVar51 + 0x28c);
          uStack_a40 = *(ulong *)(pfVar51 + 0x28a);
          pcVar48 = (code *)((ulong)&uStack_a40 | 8);
          fVar72 = pfVar51[0x28b];
          uStack_a28 = *(undefined8 *)(pfVar51 + 0x290);
          uStack_a30 = *(undefined8 *)(pfVar51 + 0x28e);
          uStack_a18 = *(undefined8 *)(pfVar51 + 0x294);
          uStack_a20 = *(undefined8 *)(pfVar51 + 0x292);
          uStack_a10 = *(undefined8 *)(pfVar51 + 0x296);
          pcStack_a08 = *(code **)(pfVar51 + 0x298);
          pcStack_9f0 = (code *)0x0;
          uStack_9e8 = 0;
          if (pcStack_a08 != (code *)0x0) {
            pcVar2 = pcStack_a08 + 0x14;
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar11) {
                *(int *)pcVar2 = *(int *)pcVar2 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            fVar72 = pfVar51[0x28b];
          }
          pcStack_a00 = pcVar48;
          ppcStack_9f8 = &pcStack_9f0;
          if ((int)fVar72 < 3) {
            pcStack_9f0 = (code *)**(undefined8 **)(pfVar51 + 0x29c);
            uStack_9e8 = (*(undefined8 **)(pfVar51 + 0x29c))[1];
          }
          else {
            uStack_a40 = uStack_a40 & 0xffffffff;
            func_0x000109a84868(&uStack_a40);
          }
          lVar39 = CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8);
          if (lVar39 == 0) {
            uVar70 = 3;
          }
          else {
            if ((*(byte *)(lVar39 + 0x88) & 1) == 0) {
              uStack_8a0._0_4_ = 0.0;
              uStack_8a0._4_4_ = 0.0;
              lVar39 = *(long *)(lVar39 + 0x10);
              __ZNSt13exception_ptrD1Ev(&uStack_8a0);
              if (lVar39 != 0) goto LAB_1095ac248;
              puVar40 = (undefined8 *)((ulong)&uStack_9e0 | 4);
              pcStack_860 = (code *)((ulong)&uStack_8a0 | 8);
              uStack_898._0_4_ = (int)uStack_9d8;
              uStack_898._4_4_ = (int)((ulong)uStack_9d8 >> 0x20);
              uStack_8a0._0_4_ = (float)uStack_9e0;
              uStack_888._0_4_ = (float)uStack_9c8;
              uStack_888._4_4_ = (int)((ulong)uStack_9c8 >> 0x20);
              uStack_890._0_4_ = (undefined4)uStack_9d0;
              uStack_890._4_4_ = (int)((ulong)uStack_9d0 >> 0x20);
              uStack_878._0_4_ = (undefined4)uStack_9b8;
              uStack_878._4_4_ = (undefined4)((ulong)uStack_9b8 >> 0x20);
              uStack_880._0_4_ = (undefined4)uStack_9c0;
              uStack_880._4_4_ = (undefined4)((ulong)uStack_9c0 >> 0x20);
              pcStack_868 = pcStack_9a8;
              uStack_870 = (undefined4)uStack_9b0;
              uStack_86c = (undefined4)((ulong)uStack_9b0 >> 0x20);
              pcStack_848 = (code *)0x0;
              pcStack_850 = (code *)0x0;
              if ((int)uStack_9e0._4_4_ < 3) {
                pcStack_850 = *ppcStack_998;
                pcStack_848 = ppcStack_998[1];
                ppcStack_858 = &pcStack_850;
              }
              else {
                ppcStack_858 = ppcStack_998;
                pcStack_860 = pcStack_9a0;
                pcStack_9a0 = pcVar16;
                ppcStack_998 = &pcStack_990;
              }
              uStack_9e0 = CONCAT44(uStack_9e0._4_4_,0x42ff0000);
              puVar57 = (undefined8 *)((ulong)&uStack_a40 | 4);
              puVar40[1] = 0;
              *puVar40 = 0;
              puVar40[3] = 0;
              puVar40[2] = 0;
              puVar40[5] = 0;
              puVar40[4] = 0;
              *(undefined8 *)((long)puVar40 + 0x34) = 0;
              *(undefined8 *)((long)puVar40 + 0x2c) = 0;
              pcStack_620 = (code *)((ulong)&uStack_660 | 8);
              uStack_658._0_4_ = (int)uStack_a38;
              uStack_658._4_4_ = (int)((ulong)uStack_a38 >> 0x20);
              uStack_660._0_4_ = (float)uStack_a40;
              uStack_648 = (undefined4)uStack_a28;
              uStack_644 = (undefined4)((ulong)uStack_a28 >> 0x20);
              uStack_650._0_4_ = (undefined4)uStack_a30;
              uStack_650._4_4_ = (undefined4)((ulong)uStack_a30 >> 0x20);
              uStack_638._0_4_ = (undefined4)uStack_a18;
              uStack_638._4_4_ = (undefined4)((ulong)uStack_a18 >> 0x20);
              uStack_640._0_4_ = (undefined4)uStack_a20;
              uStack_640._4_4_ = (undefined4)((ulong)uStack_a20 >> 0x20);
              pcStack_628 = pcStack_a08;
              uStack_630 = (undefined4)uStack_a10;
              uStack_62c = (undefined4)((ulong)uStack_a10 >> 0x20);
              pcStack_608 = (code *)0x0;
              pcStack_610 = (code *)0x0;
              if (uStack_a40._4_4_ < 3) {
                pcStack_610 = *ppcStack_9f8;
                pcStack_608 = ppcStack_9f8[1];
                ppcStack_618 = &pcStack_610;
              }
              else {
                ppcStack_618 = ppcStack_9f8;
                pcStack_620 = pcStack_a00;
                pcStack_a00 = pcVar48;
                ppcStack_9f8 = &pcStack_9f0;
              }
              uStack_a40 = CONCAT44(uStack_a40._4_4_,0x42ff0000);
              puVar57[1] = 0;
              *puVar57 = 0;
              puVar57[3] = 0;
              puVar57[2] = 0;
              puVar57[5] = 0;
              puVar57[4] = 0;
              *(undefined8 *)((long)puVar57 + 0x34) = 0;
              *(undefined8 *)((long)puVar57 + 0x2c) = 0;
              fStack_798 = 0.0;
              plVar20 = (long *)CONCAT44(iStack_6bc,uStack_6c0);
              uStack_8a0._4_4_ = uStack_9e0._4_4_;
              uStack_660._4_4_ = (float)uStack_a40._4_4_;
              (**(code **)(*plVar20 + 0x28))(plVar20,&fStack_798,&uStack_8a0,&uStack_660);
              fStack_738 = (float)CONCAT31(fStack_738._1_3_,(char)plVar20);
              if (CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8) == 0) {
                FUN_1094362d4(3);
                goto LAB_1095ac340;
              }
              func_0x000108820be4(CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8),&fStack_738);
              if (pcStack_628 != (code *)0x0) {
                pcVar16 = pcStack_628 + 0x14;
                do {
                  iVar27 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar27 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar27 + -1 == 0) {
                  func_0x000109a848d4(&uStack_660);
                }
              }
              pcStack_628 = (code *)0x0;
              uStack_648 = 0;
              uStack_644 = 0;
              uStack_650._0_4_ = 0;
              uStack_650._4_4_ = 0;
              uStack_638._0_4_ = 0;
              uStack_638._4_4_ = 0;
              uStack_640._0_4_ = 0;
              uStack_640._4_4_ = 0;
              if (0 < (int)uStack_660._4_4_) {
                lVar39 = 0;
                do {
                  *(undefined4 *)(pcStack_620 + lVar39 * 4) = 0;
                  lVar39 = lVar39 + 1;
                } while (lVar39 < (int)uStack_660._4_4_);
              }
              if (ppcStack_618 != &pcStack_610 && ppcStack_618 != (code **)0x0) {
                _free(ppcStack_618[-1]);
              }
              if (pcStack_868 != (code *)0x0) {
                pcVar16 = pcStack_868 + 0x14;
                do {
                  iVar27 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar27 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar27 + -1 == 0) {
                  func_0x000109a848d4(&uStack_8a0);
                }
              }
              pcStack_868 = (code *)0x0;
              uStack_888._0_4_ = 0.0;
              uStack_888._4_4_ = 0;
              uStack_890._0_4_ = 0;
              uStack_890._4_4_ = 0;
              uStack_878._0_4_ = 0;
              uStack_878._4_4_ = 0;
              uStack_880._0_4_ = 0;
              uStack_880._4_4_ = 0;
              if (0 < (int)uStack_8a0._4_4_) {
                lVar39 = 0;
                do {
                  *(undefined4 *)(pcStack_860 + lVar39 * 4) = 0;
                  lVar39 = lVar39 + 1;
                } while (lVar39 < (int)uStack_8a0._4_4_);
              }
              if (ppcStack_858 != &pcStack_850 && ppcStack_858 != (code **)0x0) {
                _free(ppcStack_858[-1]);
              }
              if (pcStack_a08 != (code *)0x0) {
                pcVar16 = pcStack_a08 + 0x14;
                do {
                  iVar27 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar27 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar27 + -1 == 0) {
                  func_0x000109a848d4(&uStack_a40);
                }
              }
              pcStack_a08 = (code *)0x0;
              uStack_a28 = 0;
              uStack_a30 = 0;
              uStack_a18 = 0;
              uStack_a20 = 0;
              if (0 < uStack_a40._4_4_) {
                lVar39 = 0;
                do {
                  *(undefined4 *)(pcStack_a00 + lVar39 * 4) = 0;
                  lVar39 = lVar39 + 1;
                } while (lVar39 < uStack_a40._4_4_);
              }
              if (ppcStack_9f8 != &pcStack_9f0 && ppcStack_9f8 != (code **)0x0) {
                _free(ppcStack_9f8[-1]);
              }
              if (pcStack_9a8 != (code *)0x0) {
                pcVar16 = pcStack_9a8 + 0x14;
                do {
                  iVar27 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar27 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar27 + -1 == 0) {
                  func_0x000109a848d4(&uStack_9e0);
                }
              }
              pcStack_9a8 = (code *)0x0;
              uStack_9c8 = 0;
              uStack_9d0 = 0;
              uStack_9b8 = 0;
              uStack_9c0 = 0;
              if (0 < (int)uStack_9e0._4_4_) {
                lVar39 = 0;
                do {
                  *(undefined4 *)(pcStack_9a0 + lVar39 * 4) = 0;
                  lVar39 = lVar39 + 1;
                } while (lVar39 < (int)uStack_9e0._4_4_);
              }
              if (ppcStack_998 != &pcStack_990 && ppcStack_998 != (code **)0x0) {
                _free(ppcStack_998[-1]);
              }
              lVar39 = CONCAT44(uStack_6b8._4_4_,(undefined4)uStack_6b8);
              if (lVar39 == 0) {
                FUN_1094362d4(3);
                goto LAB_1095ac340;
              }
              FUN_1094a4db4(lVar39);
              plVar20 = *(long **)pfVar25;
              *(long *)pfVar25 = lVar39;
              if (plVar20 != (long *)0x0) {
                plVar60 = plVar20 + 1;
                do {
                  lVar39 = *plVar60;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                  if (bVar11) {
                    *plVar60 = lVar39 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar39 == 0) {
                  (**(code **)(*plVar20 + 0x10))();
                }
              }
              func_0x000107c29c1c(&uStack_6b8);
              plVar20 = (long *)CONCAT44(iStack_6bc,uStack_6c0);
              if (plVar20 == &uStack_6d8) {
                lVar39 = 0x18;
LAB_1095aab44:
                (**(code **)(*plVar20 + lVar39))();
              }
              else if (plVar20 != (long *)0x0) {
                lVar39 = 0x20;
                goto LAB_1095aab44;
              }
              goto LAB_1095aab50;
            }
LAB_1095ac248:
            uVar70 = 2;
          }
          FUN_1094362d4(uVar70);
          goto LAB_1095ac340;
        }
        puVar57 = *(undefined8 **)(pfVar51 + 0x122);
        uStack_660._0_4_ = 127.5;
        pcVar16 = (code *)((ulong)&uStack_660 | 8);
        uStack_658._4_4_ = 0;
        uStack_650._0_4_ = 0;
        uStack_660._4_4_ = 0.0;
        uStack_658._0_4_ = 0;
        uStack_644 = 0;
        uStack_640._0_4_ = 0;
        uStack_650._4_4_ = 0;
        uStack_648 = 0;
        uStack_638._4_4_ = 0;
        uStack_640._4_4_ = 0;
        uStack_638._0_4_ = 0;
        pcStack_628 = (code *)0x0;
        uStack_630 = 0;
        uStack_62c = 0;
        pcStack_608 = (code *)0x0;
        pcStack_610 = (code *)0x0;
        uStack_8a0._0_4_ = 9.477423e-38;
        uStack_890._0_4_ = 0;
        uStack_890._4_4_ = 0;
        pcStack_620 = pcVar16;
        ppcStack_618 = &pcStack_610;
        uStack_898 = (double *)&uStack_660;
        FUN_109a479a0(pfVar51 + 0x2c4,&uStack_8a0);
        puVar40 = (undefined8 *)((ulong)&uStack_660 | 4);
        uStack_6d0 = (float *)&uStack_6d8;
        uStack_6d8._0_4_ = 0.0;
        uStack_6d8._4_4_ = 0.0;
        uStack_6c8 = 0x2000000;
        iStack_6c4 = 0x50;
        uStack_6c0 = 0x95b42c8;
        iStack_6bc = 1;
        uStack_6b8._0_4_ = 0x95b433c;
        uStack_6b8._4_4_ = 1;
        uStack_8a0._0_4_ = SUB84(pfVar51,0);
        uStack_8a0._4_4_ = (float)((ulong)pfVar51 >> 0x20);
        uStack_898._0_4_ = (int)uVar70;
        uStack_898._4_4_ = (int)((ulong)uVar70 >> 0x20);
        pcStack_848 = (code *)&uStack_880;
        pcStack_860 = (code *)CONCAT44(uStack_638._4_4_,(undefined4)uStack_638);
        pcStack_868 = (code *)CONCAT44(uStack_640._4_4_,(undefined4)uStack_640);
        uStack_880._0_4_ = (int)uStack_658;
        uStack_880._4_4_ = uStack_658._4_4_;
        uStack_888._0_4_ = (float)uStack_660;
        uStack_888._4_4_ = (int)uStack_660._4_4_;
        uStack_870 = uStack_648;
        uStack_86c = uStack_644;
        uStack_878._0_4_ = (undefined4)uStack_650;
        uStack_878._4_4_ = uStack_650._4_4_;
        ppcStack_858 = (code **)CONCAT44(uStack_62c,uStack_630);
        pcStack_850 = pcStack_628;
        uStack_890._0_4_ = SUB84(plVar58,0);
        uStack_890._4_4_ = (int)((ulong)plVar58 >> 0x20);
        ppcStack_840 = &pcStack_838;
        ppuStack_830 = (undefined **)0x0;
        pcStack_838 = (code *)0x0;
        if ((int)uStack_660._4_4_ < 3) {
          pcStack_838 = *ppcStack_618;
          ppuStack_830 = (undefined **)ppcStack_618[1];
        }
        else {
          ppcStack_840 = ppcStack_618;
          pcStack_848 = pcStack_620;
          pcStack_620 = pcVar16;
          ppcStack_618 = &pcStack_610;
        }
        uStack_660._0_4_ = 127.5;
        puVar40[1] = 0;
        *puVar40 = 0;
        puVar40[3] = 0;
        puVar40[2] = 0;
        puVar40[5] = 0;
        puVar40[4] = 0;
        *(undefined8 *)((long)puVar40 + 0x34) = 0;
        *(undefined8 *)((long)puVar40 + 0x2c) = 0;
        puStack_7e8 = &uStack_820;
        uStack_820 = *(ulong *)(pfVar51 + 0x28c);
        uStack_828 = *(ulong *)(pfVar51 + 0x28a);
        fVar72 = pfVar51[0x28b];
        uStack_810 = *(undefined8 *)(pfVar51 + 0x290);
        uStack_818 = *(undefined8 *)(pfVar51 + 0x28e);
        uStack_800 = *(undefined8 *)(pfVar51 + 0x294);
        uStack_808 = *(undefined8 *)(pfVar51 + 0x292);
        uStack_7f8 = *(undefined8 *)(pfVar51 + 0x296);
        lStack_7f0 = *(long *)(pfVar51 + 0x298);
        puStack_7e0 = &uStack_7d8;
        uStack_7d0 = 0;
        uStack_7d8 = 0;
        if (lStack_7f0 != 0) {
          piVar1 = (int *)(lStack_7f0 + 0x14);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          fVar72 = pfVar51[0x28b];
        }
        if ((int)fVar72 < 3) {
          uStack_7d8 = **(undefined8 **)(pfVar51 + 0x29c);
          uStack_7d0 = (*(undefined8 **)(pfVar51 + 0x29c))[1];
        }
        else {
          uStack_828 = uStack_828 & 0xffffffff;
          func_0x000109a84868(&uStack_828);
        }
        plStack_698 = (long *)0x0;
        plVar20 = (long *)0xe0;
        __Znwm();
        FUN_1095b4448();
        puVar21 = (ulong *)0x90;
        plStack_698 = plVar20;
        __Znwm();
        puVar21[2] = 0;
        puVar21[3] = 0x32aaaba7;
        puVar21[5] = 0;
        puVar21[4] = 0;
        puVar21[7] = 0;
        puVar21[6] = 0;
        puVar21[9] = 0;
        puVar21[8] = 0;
        puVar21[10] = 0;
        puVar21[0xb] = 0x3cb0b1bb;
        puVar21[0xd] = 0;
        puVar21[0xc] = 0;
        puVar21[0xf] = 0;
        puVar21[0xe] = 0;
        *(undefined8 *)((long)puVar21 + 0x84) = 0;
        *(undefined8 *)((long)puVar21 + 0x7c) = 0;
        *puVar21 = (ulong)&PTR_DAT_110a75108;
        puVar21[1] = 0;
        puStack_690 = puVar21;
        FUN_1095b598c(&uStack_888);
        if (CONCAT44(uStack_890._4_4_,(undefined4)uStack_890) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar39 = *(long *)(uStack_6d0 + 0x12);
        if (lVar39 == 0) {
          FUN_1094362d4(3);
          goto LAB_1095ac340;
        }
        FUN_1094a4db4(lVar39);
        uStack_8a0._0_4_ = SUB84(PTR___NSConcreteStackBlock_11034bd00,0);
        uStack_8a0._4_4_ = (float)((ulong)PTR___NSConcreteStackBlock_11034bd00 >> 0x20);
        uStack_898._0_4_ = 0x42000000;
        uStack_898._4_4_ = 0;
        uStack_890._0_4_ = 0x95b4398;
        uStack_890._4_4_ = 1;
        uStack_888._0_4_ = 6.9368626e-29;
        uStack_888._4_4_ = 1;
        uStack_880 = &uStack_6d8;
        func_0x000104c62d88(puVar57[1],*puVar57,&uStack_8a0);
        __Block_object_dispose(&uStack_6d8,8);
        func_0x000107c29c1c(&puStack_690);
        if (plStack_698 == &uStack_6b0) {
          lVar46 = 0x18;
LAB_1095aaa88:
          (**(code **)(*plStack_698 + lVar46))();
        }
        else if (plStack_698 != (long *)0x0) {
          lVar46 = 0x20;
          goto LAB_1095aaa88;
        }
        plVar20 = *(long **)pfVar25;
        *(long *)pfVar25 = lVar39;
        if (plVar20 != (long *)0x0) {
          plVar60 = plVar20 + 1;
          do {
            lVar39 = *plVar60;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar60,0x10);
            if (bVar11) {
              *plVar60 = lVar39 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar39 == 0) {
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        if (pcStack_628 != (code *)0x0) {
          pcVar16 = pcStack_628 + 0x14;
          do {
            iVar27 = *(int *)pcVar16;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
            if (bVar11) {
              *(int *)pcVar16 = iVar27 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar27 + -1 == 0) {
            func_0x000109a848d4(&uStack_660);
          }
        }
        pcStack_628 = (code *)0x0;
        uStack_648 = 0;
        uStack_644 = 0;
        uStack_650._0_4_ = 0;
        uStack_650._4_4_ = 0;
        uStack_638._0_4_ = 0;
        uStack_638._4_4_ = 0;
        uStack_640._0_4_ = 0;
        uStack_640._4_4_ = 0;
        if (0 < (int)uStack_660._4_4_) {
          lVar39 = 0;
          do {
            *(undefined4 *)(pcStack_620 + lVar39 * 4) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (int)uStack_660._4_4_);
        }
        if (ppcStack_618 != &pcStack_610 && ppcStack_618 != (code **)0x0) {
          _free(ppcStack_618[-1]);
        }
LAB_1095aab50:
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_1095aab58;
      }
    }
  }
  else {
LAB_1095aab84:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_1092315e8();
LAB_1095ac340:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1095ac344);
  (*pcVar16)();
LAB_1095a6d9c:
  plVar37 = (long *)*plVar37;
  if (plVar37 == (long *)0x0) goto LAB_1095a6da4;
  goto LAB_1095a6d50;
LAB_1095abb8c:
  if (pfVar33 == pfVar30) goto LAB_1095abd0c;
  cVar17 = *(code *)pfVar33;
  if ((byte)cVar9 < (byte)cVar17) goto LAB_1095abbcc;
  pfVar33 = (float *)((long)pfVar33 + 1);
  goto LAB_1095abb8c;
LAB_1095abbcc:
  pfVar29 = (float *)((long)pfVar33 + 1);
  *(code *)pfVar33 = *(code *)pfVar30;
  *(code *)pfVar30 = cVar17;
LAB_1095abbd4:
  if (pfVar29 == pfVar30) goto LAB_1095abd0c;
  while( true ) {
    do {
      pfVar33 = pfVar29;
      pfVar29 = (float *)((long)pfVar33 + 1);
      cVar17 = *(code *)pfVar33;
    } while ((byte)cVar17 <= (byte)*(code *)pfVar23);
    do {
      pfVar30 = (float *)((long)pfVar30 + -1);
    } while ((byte)*(code *)pfVar23 < (byte)*(code *)pfVar30);
    if (pfVar30 <= pfVar33) break;
    *(code *)pfVar33 = *(code *)pfVar30;
    *(code *)pfVar30 = cVar17;
  }
  pfVar34 = pfVar47;
  pfVar23 = pfVar33;
  if (pfVar25 < pfVar33) goto LAB_1095abd0c;
LAB_1095abc1c:
  pfVar47 = pfVar34;
  if (pfVar34 == pfVar25) goto LAB_1095abd0c;
  goto LAB_1095ab9f0;
}



/* Entry: 1095a899c; end: 1095ac76b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1095a899c(float *param_1,float *param_2,float *param_3)

{
  int *piVar1;
  code *pcVar2;
  char *pcVar3;
  code cVar4;
  code cVar5;
  code cVar6;
  code cVar7;
  code cVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  code **ppcVar13;
  float *pfVar14;
  code **ppcVar15;
  code *pcVar16;
  code cVar17;
  float *pfVar18;
  float *pfVar19;
  long *plVar20;
  long *plVar21;
  double *pdVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  undefined4 *puVar26;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
  uint uVar30;
  code cVar31;
  float *pfVar32;
  float *pfVar33;
  code cVar34;
  float *pfVar35;
  double *pdVar36;
  long lVar37;
  long lVar38;
  float *pfVar39;
  undefined8 *puVar40;
  code *pcVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  undefined8 *puVar46;
  ulong uVar47;
  long *plVar48;
  int iVar49;
  ulong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  double dVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  code *pcStack_4c0;
  code **ppcStack_4b8;
  code *pcStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  code *pcStack_468;
  code *pcStack_460;
  code **ppcStack_458;
  code *pcStack_450;
  undefined8 uStack_448;
  undefined4 auStack_438 [2];
  float *pfStack_430;
  undefined8 uStack_428;
  undefined4 auStack_420 [2];
  float *pfStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  float *pfStack_400;
  undefined8 uStack_3f8;
  double dStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long lStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  long lStack_390;
  undefined8 *puStack_388;
  long *plStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined1 uStack_361;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  code *pcStack_328;
  code *pcStack_320;
  code **ppcStack_318;
  code *pcStack_310;
  code *pcStack_308;
  code **ppcStack_300;
  code *pcStack_2f8;
  undefined **ppuStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  float fStack_258;
  float fStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  long lStack_220;
  undefined4 *puStack_218;
  long *plStack_210;
  long lStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long lStack_1c0;
  undefined4 *puStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  int iStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float *pfStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *pcStack_e8;
  code *pcStack_e0;
  code **ppcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(code *)(param_1 + 0x54) == (code)0x1) {
    pfVar18 = param_1;
    if (*(code *)((long)param_1 + 0x195) == (code)0x1) {
      fStack_1f8 = (float)(uint)(byte)*(code *)(param_1 + 0x57);
      fStack_258 = (float)(uint)(byte)*(code *)(param_1 + 0x61);
      uStack_3c8._0_4_ = (float)(uint)(byte)*(code *)((long)param_1 + 0x185);
      FUN_10926db08(&uStack_360);
      uStack_120 = (double *)&uStack_110;
      uStack_118._0_4_ = 3;
      uStack_110 = &fStack_1f8;
      uStack_108 = 0x9389420;
      uStack_104 = 1;
      uStack_f8 = &fStack_258;
      uStack_100._0_4_ = 0x9389470;
      uStack_100._4_4_ = 1;
      uStack_f0 = 0x9389420;
      uStack_ec = 1;
      pcStack_e8 = FUN_109389470;
      pcStack_e0 = (code *)&uStack_3c8;
      ppcStack_d8 = (code **)0x109389420;
      pcStack_d0 = FUN_109389470;
      FUN_10937ad5c(&uStack_360,&UNK_10f5753fc,uStack_120,3);
      FUN_10926dc5c(&uStack_198,&uStack_358,&uStack_120);
      ppuStack_2f0 = &PTR_DAT_11088d708;
      uStack_360._0_4_ = 5.397361e-29;
      uStack_360._4_4_ = 1.4013e-45;
      uStack_358._0_4_ = 0x1088d7b0;
      uStack_358._4_4_ = 1;
      if ((long)pcStack_308 < 0) {
        __ZdlPv(ppcStack_318);
      }
      uStack_358 = (double *)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(&uStack_350);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&uStack_360,&PTR_PTR_11088d720);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(&ppuStack_2f0);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a2,&uStack_198);
      if (iStack_184 < 0) {
        __ZdlPv(CONCAT44(uStack_198._4_4_,(float)uStack_198));
      }
      dVar57 = *(double *)(param_1 + 0x9e);
      if (*(ulong *)(param_1 + 0x9c) != 0) {
        dVar57 = dVar57 / (double)*(ulong *)(param_1 + 0x9c);
      }
      uStack_120 = (double *)(dVar57 * 1000.0);
      FUN_1095b03e8(&uStack_360,&UNK_10f57544c,&uStack_120);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a4,&uStack_360);
      if (uStack_350._4_4_ < 0) {
        __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
      }
      dVar57 = *(double *)(param_1 + 0xae);
      if (*(ulong *)(param_1 + 0xac) != 0) {
        dVar57 = dVar57 / (double)*(ulong *)(param_1 + 0xac);
      }
      uStack_120 = (double *)(dVar57 * 1000.0);
      FUN_1095b03e8(&uStack_360,&UNK_10f575475,&uStack_120);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a6,&uStack_360);
      if (uStack_350._4_4_ < 0) {
        __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
      }
      dVar57 = *(double *)(param_1 + 0xbe);
      if (*(ulong *)(param_1 + 0xbc) != 0) {
        dVar57 = dVar57 / (double)*(ulong *)(param_1 + 0xbc);
      }
      uStack_120 = (double *)(dVar57 * 1000.0);
      FUN_1095b03e8(&uStack_360,&UNK_10f5754a3,&uStack_120);
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5a8,&uStack_360);
      if (uStack_350._4_4_ < 0) {
        __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
      }
      plVar48 = *(long **)(param_1 + 0x14e);
      if (plVar48 != (long *)0x0) {
        do {
          pdVar22 = (double *)(plVar48 + 2);
          pdVar36 = pdVar22;
          if (*(char *)((long)plVar48 + 0x27) < '\0') {
            pdVar36 = (double *)*pdVar22;
          }
          uStack_120._0_4_ = SUB84(pdVar36,0);
          uStack_120._4_4_ = (float)((ulong)pdVar36 >> 0x20);
          FUN_1093780e0(&uStack_360,&UNK_10f5754da,&uStack_120);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5aa,&uStack_360);
          if (uStack_350._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
          }
          pcVar3 = "enabled";
          if ((char)plVar48[7] == '\0') {
            pcVar3 = "disabled";
          }
          uStack_120._0_4_ = SUB84(pcVar3,0);
          uStack_120._4_4_ = (float)((ulong)pcVar3 >> 0x20);
          FUN_1093780e0(&uStack_360,&UNK_10f5754fd,&uStack_120);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5ac,&uStack_360);
          if (uStack_350._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
          }
          pfVar18 = param_1 + 0xca;
          uStack_120 = pdVar22;
          FUN_1095b35b0(pfVar18,pdVar22,&uStack_120);
          dVar57 = *(double *)(pfVar18 + 0x18);
          if (*(ulong *)(pfVar18 + 0x16) != 0) {
            dVar57 = dVar57 / (double)*(ulong *)(pfVar18 + 0x16);
          }
          uStack_198 = (undefined4 *)(dVar57 * 1000.0);
          FUN_1095b03e8(&uStack_360,&UNK_10f57552a,&uStack_198);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5ae,&uStack_360);
          if (uStack_350._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
          }
          pfVar18 = param_1 + 0xca;
          uStack_120 = pdVar22;
          FUN_1095b35b0(pfVar18,pdVar22,&uStack_120);
          dVar57 = *(double *)(pfVar18 + 0x18);
          if (*(ulong *)(pfVar18 + 0x16) != 0) {
            dVar57 = dVar57 / (double)*(ulong *)(pfVar18 + 0x16);
          }
          uStack_198 = (undefined4 *)(dVar57 * 1000.0);
          FUN_1095b03e8(&uStack_360,&UNK_10f57555a,&uStack_198);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5b0,&uStack_360);
          if (uStack_350._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
          }
          pfVar18 = param_1 + 0xc0;
          uStack_120 = pdVar22;
          FUN_1095b35b0(pfVar18,pdVar22,&uStack_120);
          dVar57 = *(double *)(pfVar18 + 0x18);
          if (*(ulong *)(pfVar18 + 0x16) != 0) {
            dVar57 = dVar57 / (double)*(ulong *)(pfVar18 + 0x16);
          }
          uStack_198 = (undefined4 *)(dVar57 * 1000.0);
          FUN_1095b03e8(&uStack_360,&UNK_10f575597,&uStack_198);
          FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5b2,&uStack_360);
          if (uStack_350._4_4_ < 0) {
            __ZdlPv(CONCAT44(uStack_360._4_4_,(float)uStack_360));
          }
          plVar48 = (long *)*plVar48;
        } while (plVar48 != (long *)0x0);
      }
      FUN_10937e740(&uStack_360,&DAT_10f68f57e);
      pfVar18 = (float *)0x1;
      FUN_109388c6c(1,&UNK_10f57511f,&DAT_10f3725f0,0x5b4,&uStack_360);
      if (uStack_350._4_4_ < 0) {
        pfVar18 = (float *)CONCAT44(uStack_360._4_4_,(float)uStack_360);
        __ZdlPv();
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    pfVar19 = param_1 + 0xde;
    pfVar39 = pfVar18;
    if (pfVar19 != param_2) {
      if (*(long *)(param_2 + 0xe) != 0) {
        piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (*(long *)(param_1 + 0xec) != 0) {
        piVar1 = (int *)(*(long *)(param_1 + 0xec) + 0x14);
        do {
          iVar49 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar49 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar49 + -1 == 0) {
          pfVar39 = pfVar19;
          func_0x000109a848d4();
        }
      }
      param_1[0xec] = 0.0;
      param_1[0xed] = 0.0;
      pfVar23 = param_1 + 0xe2;
      param_1[0xe4] = 0.0;
      param_1[0xe5] = 0.0;
      pfVar23[0] = 0.0;
      pfVar23[1] = 0.0;
      param_1[0xe8] = 0.0;
      param_1[0xe9] = 0.0;
      param_1[0xe6] = 0.0;
      param_1[0xe7] = 0.0;
      if ((int)param_1[0xdf] < 1) {
        *pfVar19 = *param_2;
LAB_1095a8fac:
        if (2 < (int)param_2[1]) goto LAB_1095a8fe0;
        param_1[0xdf] = param_2[1];
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 2);
        puVar40 = *(undefined8 **)(param_2 + 0x12);
        puVar46 = *(undefined8 **)(param_1 + 0xf0);
        *puVar46 = *puVar40;
        puVar46[1] = puVar40[1];
      }
      else {
        lVar37 = 0;
        lVar38 = *(long *)(param_1 + 0xee);
        do {
          *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
          lVar37 = lVar37 + 1;
        } while (lVar37 < (int)param_1[0xdf]);
        *pfVar19 = *param_2;
        if ((int)param_1[0xdf] < 3) goto LAB_1095a8fac;
LAB_1095a8fe0:
        func_0x000109a84868(pfVar19,param_2);
        pfVar39 = pfVar19;
      }
      uVar58 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)pfVar23 = uVar58;
      uVar58 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 0xe6) = uVar58;
      uVar58 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0xea) = uVar58;
    }
    *(code *)(param_1 + 0xf6) = (code)0x1;
    if ((((((uint)param_1[0x57] & 1) == 0) && (((uint)param_1[0x6d] & 1) == 0)) &&
        (((uint)param_1[0x49] & 1) == 0)) &&
       ((*(long *)(param_1 + 0xf8) == *(long *)(param_1 + 0xfa) && (*(long *)(param_1 + 0x150) == 1)
        ))) {
      FUN_1095b0084(param_1,param_2);
      goto LAB_1095aab84;
    }
    uStack_3c0 = (undefined8 *)CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
    uStack_190 = (float *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
    pdVar22 = uStack_120;
    if (*(code *)(param_1 + 0x54) == (code)0x1) {
      if (((uint)param_1[0x61] & 1) == 0) {
        uStack_3c0 = (undefined8 *)CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
        uStack_190 = (float *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
        if ((*(code *)(param_1 + 0x6d) != (code)0x1) ||
           (pfVar19 = param_1 + 0x1f2,
           uStack_3c0 = (undefined8 *)CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0),
           uStack_190 = (float *)CONCAT44(uStack_190._4_4_,(float)uStack_190), pfVar19 == param_3))
        goto LAB_1095a9b74;
        if (*(long *)(param_3 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        if (*(long *)(param_1 + 0x200) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 0x200) + 0x14);
          do {
            iVar49 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar49 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar49 + -1 == 0) {
            pfVar39 = pfVar19;
            func_0x000109a848d4();
          }
        }
        param_1[0x200] = 0.0;
        param_1[0x201] = 0.0;
        pfVar23 = param_1 + 0x1f6;
        param_1[0x1f8] = 0.0;
        param_1[0x1f9] = 0.0;
        pfVar23[0] = 0.0;
        pfVar23[1] = 0.0;
        param_1[0x1fc] = 0.0;
        param_1[0x1fd] = 0.0;
        param_1[0x1fa] = 0.0;
        param_1[0x1fb] = 0.0;
        if ((int)param_1[499] < 1) {
          *pfVar19 = *param_3;
LAB_1095a9b10:
          if (2 < (int)param_3[1]) goto LAB_1095a9b44;
          param_1[499] = param_3[1];
          *(undefined8 *)(param_1 + 500) = *(undefined8 *)(param_3 + 2);
          puVar40 = *(undefined8 **)(param_3 + 0x12);
          puVar46 = *(undefined8 **)(param_1 + 0x204);
          *puVar46 = *puVar40;
          puVar46[1] = puVar40[1];
          pdVar22 = uStack_120;
        }
        else {
          lVar37 = 0;
          lVar38 = *(long *)(param_1 + 0x202);
          do {
            *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < (int)param_1[499]);
          *pfVar19 = *param_3;
          if ((int)param_1[499] < 3) goto LAB_1095a9b10;
LAB_1095a9b44:
          func_0x000109a84868();
          pfVar39 = pfVar19;
          pdVar22 = uStack_120;
        }
        uVar58 = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_3 + 6);
        *(undefined8 *)pfVar23 = uVar58;
        uVar58 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_1 + 0x1fc) = *(undefined8 *)(param_3 + 10);
        *(undefined8 *)(param_1 + 0x1fa) = uVar58;
        uVar58 = *(undefined8 *)(param_3 + 0xc);
        *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_3 + 0xe);
        *(undefined8 *)(param_1 + 0x1fe) = uVar58;
      }
      else {
        fVar56 = param_3[2];
        fVar62 = param_3[3];
        uStack_360._0_4_ = 127.5;
        pcVar16 = (code *)((ulong)&uStack_360 | 8);
        uStack_358._4_4_ = 0;
        uStack_350._0_4_ = 0;
        uStack_360._4_4_ = 0.0;
        uStack_358._0_4_ = 0;
        uStack_348._4_4_ = 0;
        uStack_340._0_4_ = 0;
        uStack_350._4_4_ = 0;
        uStack_348._0_4_ = 0.0;
        uStack_338._4_4_ = 0;
        uStack_340._4_4_ = 0;
        uStack_338._0_4_ = 0;
        pcStack_328 = (code *)0x0;
        uStack_330 = 0;
        uStack_32c = 0;
        pcStack_308 = (code *)0x0;
        pcStack_310 = (code *)0x0;
        uVar58 = NEON_rev64(*(undefined8 *)(param_1 + 0x47),4);
        uStack_120._0_4_ = (float)uVar58;
        uStack_120._4_4_ = (float)((ulong)uVar58 >> 0x20);
        pcStack_320 = pcVar16;
        ppcStack_318 = &pcStack_310;
        FUN_109a83fd0(&uStack_360,2,&uStack_120,0);
        if ((*(code *)(param_1 + 0x61) == (code)0x1) && (((uint)param_1[0x6d] & 1) == 0)) {
          pfVar39 = (float *)&uStack_120;
          FUN_1095aed74(pfVar39,param_3,param_1[0x47],param_1[0x48],0);
          if (pcStack_328 != (code *)0x0) {
            pcVar41 = pcStack_328 + 0x14;
            do {
              iVar49 = *(int *)pcVar41;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pcVar41,0x10);
              if (bVar11) {
                *(int *)pcVar41 = iVar49 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar49 + -1 == 0) {
              pfVar39 = (float *)&uStack_360;
              func_0x000109a848d4();
            }
          }
          if (0 < (int)uStack_360._4_4_) {
            lVar37 = 0;
            do {
              *(undefined4 *)(pcStack_320 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)uStack_360._4_4_);
          }
          uStack_358._0_4_ = (int)uStack_118;
          uStack_358._4_4_ = uStack_118._4_4_;
          uStack_360._0_4_ = (float)uStack_120;
          uStack_360._4_4_ = uStack_120._4_4_;
          uStack_348._0_4_ = (float)uStack_108;
          uStack_348._4_4_ = uStack_104;
          uStack_340._0_4_ = (undefined4)uStack_100;
          uStack_340._4_4_ = uStack_100._4_4_;
          pcStack_328 = pcStack_e8;
          uStack_330 = uStack_f0;
          uStack_32c = uStack_ec;
          pcVar41 = pcStack_320;
          ppcVar15 = ppcStack_318;
          uStack_350 = (double *)uStack_110;
          uStack_338 = uStack_f8;
          if ((ppcStack_318 != &pcStack_310) &&
             (pcVar41 = pcVar16, ppcVar15 = &pcStack_310, ppcStack_318 != (code **)0x0)) {
            pfVar39 = (float *)ppcStack_318[-1];
            _free();
          }
          ppcStack_318 = ppcVar15;
          pcStack_320 = pcVar41;
          ppcVar15 = ppcStack_d8;
          if ((int)uStack_120._4_4_ < 3) {
            puVar40 = (undefined8 *)((ulong)&uStack_120 | 4);
            *ppcStack_318 = *ppcStack_d8;
            ppcStack_318[1] = ppcVar15[1];
            uStack_120._0_4_ = 127.5;
            puVar40[1] = 0;
            *puVar40 = 0;
            puVar40[3] = 0;
            puVar40[2] = 0;
            puVar40[5] = 0;
            puVar40[4] = 0;
            *(undefined8 *)((long)puVar40 + 0x34) = 0;
            *(undefined8 *)((long)puVar40 + 0x2c) = 0;
            if (ppcVar15 != &pcStack_d0) {
              pfVar39 = (float *)ppcVar15[-1];
              _free();
            }
          }
          else {
            ppcStack_318 = ppcStack_d8;
            pcStack_320 = pcStack_e0;
          }
          pfVar19 = param_1 + 0x1da;
          if (pfVar19 != (float *)&uStack_360) {
            if (pcStack_328 != (code *)0x0) {
              pcVar16 = pcStack_328 + 0x14;
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                if (bVar11) {
                  *(int *)pcVar16 = *(int *)pcVar16 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(long *)(param_1 + 0x1e8) != 0) {
              piVar1 = (int *)(*(long *)(param_1 + 0x1e8) + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                pfVar39 = pfVar19;
                func_0x000109a848d4();
              }
            }
            param_1[0x1e8] = 0.0;
            param_1[0x1e9] = 0.0;
            pfVar23 = param_1 + 0x1de;
            param_1[0x1e0] = 0.0;
            param_1[0x1e1] = 0.0;
            pfVar23[0] = 0.0;
            pfVar23[1] = 0.0;
            param_1[0x1e4] = 0.0;
            param_1[0x1e5] = 0.0;
            param_1[0x1e2] = 0.0;
            param_1[0x1e3] = 0.0;
            if ((int)param_1[0x1db] < 1) {
              *pfVar19 = (float)uStack_360;
LAB_1095ac1d4:
              if (2 < (int)uStack_360._4_4_) goto LAB_1095ac208;
              param_1[0x1db] = uStack_360._4_4_;
              *(ulong *)(param_1 + 0x1dc) = CONCAT44(uStack_358._4_4_,(int)uStack_358);
              plVar48 = *(long **)(param_1 + 0x1ec);
              *plVar48 = (long)*ppcStack_318;
              plVar48[1] = (long)ppcStack_318[1];
            }
            else {
              lVar37 = 0;
              lVar38 = *(long *)(param_1 + 0x1ea);
              do {
                *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)param_1[0x1db]);
              *pfVar19 = (float)uStack_360;
              if ((int)param_1[0x1db] < 3) goto LAB_1095ac1d4;
LAB_1095ac208:
              func_0x000109a84868(pfVar19,&uStack_360);
              pfVar39 = pfVar19;
            }
            *(ulong *)(param_1 + 0x1e0) = CONCAT44(uStack_348._4_4_,(float)uStack_348);
            *(double **)pfVar23 = uStack_350;
            *(float **)(param_1 + 0x1e4) = uStack_338;
            *(ulong *)(param_1 + 0x1e2) = CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
            *(code **)(param_1 + 0x1e8) = pcStack_328;
            *(ulong *)(param_1 + 0x1e6) = CONCAT44(uStack_32c,uStack_330);
          }
        }
        else {
          fVar51 = fVar56;
          if ((int)fVar62 <= (int)fVar56) {
            fVar51 = fVar62;
          }
          if ((int)fVar51 < (int)param_1[0x8e]) {
            uVar50 = 0;
            uVar47 = 0;
          }
          else {
            uVar47 = 0;
            uVar50 = 0;
            fVar52 = 1.0;
            do {
              uVar30 = (uint)uVar50;
              if (param_1[0x60] <= fVar52) {
                uVar30 = (uint)uVar47;
              }
              uVar50 = (ulong)uVar30;
              uVar47 = (ulong)((uint)uVar47 + 1);
              fVar51 = (float)((int)fVar51 / 2);
              fVar52 = fVar52 * 0.5;
            } while ((int)param_1[0x8e] <= (int)fVar51);
          }
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          iStack_1e0 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          fStack_1f8 = 6.9143196e-29;
          fStack_1f4 = 1.4013e-45;
          uStack_120._0_4_ = fVar62;
          uStack_120._4_4_ = fVar56;
          func_0x00010938e870(&fStack_1f8,&uStack_120);
          if (0 < (int)fVar56) {
            uVar45 = 0;
            do {
              _memcpy(CONCAT44(uStack_1ec,uStack_1f0) + (long)iStack_1e0 * (long)(int)uVar45,
                      *(long *)(param_3 + 4) + **(long **)(param_3 + 0x12) * uVar45,
                      (long)(int)param_1[0xe1]);
              uVar45 = uVar45 + 1;
            } while ((uint)fVar56 != uVar45);
          }
          fStack_258 = 6.9143196e-29;
          fStack_254 = 1.4013e-45;
          uStack_250 = uStack_1f0;
          uStack_24c = uStack_1ec;
          uStack_248 = uStack_1e8;
          uStack_244 = uStack_1e4;
          iStack_240 = iStack_1e0;
          iStack_1e0 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          FUN_1093fb548(&dStack_3f0,&fStack_258,uVar47);
          fStack_258 = 6.9143196e-29;
          fStack_254 = 1.4013e-45;
          if (CONCAT44(uStack_24c,uStack_250) != 0) {
            __ZdaPv();
          }
          uStack_250 = 0;
          uStack_24c = 0;
          uStack_248 = 0;
          uStack_244 = 0;
          iStack_240 = 0;
          lVar37 = (long)dStack_3f0 + uVar47 * 0x20;
          lVar38 = *(long *)(lVar37 + -0x10);
          uStack_120._0_4_ = (float)lVar38;
          uVar47 = (ulong)(int)(float)uStack_120;
          uStack_120._4_4_ = (float)((int)(float)uStack_120 >> 0x1f);
          uStack_118._0_4_ = (int)((ulong)lVar38 >> 0x20);
          uStack_118._4_4_ = (int)uStack_118 >> 0x1f;
          uStack_198._0_4_ = param_1[0x47];
          uStack_190._0_4_ = param_1[0x48];
          uStack_198._4_4_ = (float)((int)(float)uStack_198 >> 0x1f);
          uStack_190._4_4_ = (int)(float)uStack_190 >> 0x1f;
          if ((uVar47 | lVar38 >> 0x20) >> 0x20 == 0) {
            FUN_109367e44((float)uVar47 / (float)(ulong)(long)(int)(float)uStack_198,
                          (float)(ulong)(lVar38 >> 0x20) /
                          (float)(ulong)(long)(int)(float)uStack_190,&uStack_120,&uStack_198,
                          *(undefined8 *)(lVar37 + -0x18),uVar47,
                          CONCAT44(uStack_350._4_4_,(undefined4)uStack_350),
                          (long)(int)(float)uStack_198,1);
            pfVar19 = uStack_110;
            pfVar39 = uStack_f8;
          }
          else {
            lVar38 = *(long *)(lVar37 + -0x18);
            uVar47 = *(ulong *)(lVar37 + -0x10);
            iVar49 = *(int *)(lVar37 + -8);
            uStack_120._0_4_ = 127.5;
            uStack_120._4_4_ = 2.8026e-45;
            pcStack_e0 = (code *)&uStack_118;
            uStack_118._0_4_ = (int)(uVar47 >> 0x20);
            uStack_118._4_4_ = (int)uVar47;
            uStack_110._0_4_ = (undefined4)lVar38;
            uStack_110._4_4_ = (undefined4)((ulong)lVar38 >> 0x20);
            uStack_f8._0_4_ = 0;
            uStack_f8._4_4_ = 0;
            uStack_100._0_4_ = 0;
            uStack_100._4_4_ = 0;
            pcStack_e8 = (code *)0x0;
            uStack_f0 = 0;
            uStack_ec = 0;
            pcVar16 = (code *)(long)uStack_118._4_4_;
            pcStack_c8 = (code *)0x0;
            pcStack_d0 = (code *)0x0;
            uStack_108 = (undefined4)uStack_110;
            uStack_104 = uStack_110._4_4_;
            ppcStack_d8 = &pcStack_d0;
            if ((lVar38 == 0) && ((long)uStack_118._4_4_ * (long)(int)uStack_118 != 0)) {
              puVar26 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar26 = 1;
              uStack_198 = puVar26 + 1;
              uStack_190._0_4_ = 3.92364e-44;
              uStack_190._4_4_ = 0;
              *(undefined1 *)(puVar26 + 8) = 0;
              *(undefined8 *)(puVar26 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar26 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar26 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar26 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&uStack_198,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_1095ac340;
            }
            pcVar41 = pcVar16;
            if (uVar47 >> 0x20 != 1) {
              pcVar41 = (code *)(long)iVar49;
            }
            pcStack_d0 = pcVar16;
            if (iVar49 != 0) {
              pcStack_d0 = pcVar41;
            }
            uStack_120._0_4_ = 127.625;
            if (pcVar41 != pcVar16 && iVar49 != 0) {
              uStack_120._0_4_ = 127.5;
            }
            pcStack_c8 = (code *)0x1;
            uStack_f8 = (float *)(lVar38 + (long)pcStack_d0 * ((long)uVar47 >> 0x20));
            uStack_100 = pcVar16 + ((long)uStack_f8 - (long)pcStack_d0);
            uStack_188 = 0;
            iStack_184 = 0;
            uStack_198._0_4_ = 2.3693558e-38;
            uStack_3c8._0_4_ = 9.477423e-38;
            uStack_3c0 = &uStack_360;
            uStack_3b8 = 0;
            uStack_3b4 = 0;
            uStack_138 = *(float **)(param_1 + 0x47);
            uStack_190 = (float *)&uStack_120;
            FUN_109b0f718(0,0,&uStack_198,&uStack_3c8,&uStack_138,1);
            if (pcStack_e8 != (code *)0x0) {
              pcVar16 = pcStack_e8 + 0x14;
              do {
                iVar49 = *(int *)pcVar16;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                if (bVar11) {
                  *(int *)pcVar16 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(&uStack_120);
              }
            }
            pcStack_e8 = (code *)0x0;
            uStack_108 = 0;
            uStack_104 = 0;
            uStack_110._0_4_ = 0;
            uStack_110._4_4_ = 0;
            pfVar19 = (float *)0x0;
            uStack_f8._0_4_ = 0;
            uStack_f8._4_4_ = 0;
            pfVar39 = (float *)0x0;
            uStack_100._0_4_ = 0;
            uStack_100._4_4_ = 0;
            if (0 < (int)uStack_120._4_4_) {
              lVar37 = 0;
              do {
                *(undefined4 *)(pcStack_e0 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)uStack_120._4_4_);
            }
            if (ppcStack_d8 != &pcStack_d0 && ppcStack_d8 != (code **)0x0) {
              _free(ppcStack_d8[-1]);
              pfVar39 = (float *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
              pfVar19 = (float *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
            }
          }
          pfVar23 = param_1 + 0x1da;
          if (pfVar23 != (float *)&uStack_360) {
            if (pcStack_328 != (code *)0x0) {
              pcVar16 = pcStack_328 + 0x14;
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                if (bVar11) {
                  *(int *)pcVar16 = *(int *)pcVar16 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            uStack_110 = pfVar19;
            uStack_f8 = pfVar39;
            if (*(long *)(param_1 + 0x1e8) != 0) {
              piVar1 = (int *)(*(long *)(param_1 + 0x1e8) + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(pfVar23);
              }
            }
            param_1[0x1e8] = 0.0;
            param_1[0x1e9] = 0.0;
            pfVar25 = param_1 + 0x1de;
            param_1[0x1e0] = 0.0;
            param_1[0x1e1] = 0.0;
            pfVar25[0] = 0.0;
            pfVar25[1] = 0.0;
            param_1[0x1e4] = 0.0;
            param_1[0x1e5] = 0.0;
            param_1[0x1e2] = 0.0;
            param_1[0x1e3] = 0.0;
            if ((int)param_1[0x1db] < 1) {
              *pfVar23 = (float)uStack_360;
LAB_1095a9674:
              if (2 < (int)uStack_360._4_4_) goto LAB_1095a96ac;
              param_1[0x1db] = uStack_360._4_4_;
              *(ulong *)(param_1 + 0x1dc) = CONCAT44(uStack_358._4_4_,(int)uStack_358);
              plVar48 = *(long **)(param_1 + 0x1ec);
              *plVar48 = (long)*ppcStack_318;
              plVar48[1] = (long)ppcStack_318[1];
              pfVar19 = uStack_110;
              pfVar39 = uStack_f8;
            }
            else {
              lVar37 = 0;
              lVar38 = *(long *)(param_1 + 0x1ea);
              do {
                *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)param_1[0x1db]);
              *pfVar23 = (float)uStack_360;
              if ((int)param_1[0x1db] < 3) goto LAB_1095a9674;
LAB_1095a96ac:
              func_0x000109a84868(pfVar23,&uStack_360);
              pfVar19 = uStack_110;
              pfVar39 = uStack_f8;
            }
            *(ulong *)(param_1 + 0x1e0) = CONCAT44(uStack_348._4_4_,(float)uStack_348);
            *(ulong *)pfVar25 = CONCAT44(uStack_350._4_4_,(undefined4)uStack_350);
            *(ulong *)(param_1 + 0x1e4) = CONCAT44(uStack_338._4_4_,(undefined4)uStack_338);
            *(ulong *)(param_1 + 0x1e2) = CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
            *(code **)(param_1 + 0x1e8) = pcStack_328;
            *(ulong *)(param_1 + 0x1e6) = CONCAT44(uStack_32c,uStack_330);
          }
          pfVar23 = uStack_190;
          if (*(code *)(param_1 + 0x6d) == (code)0x1) {
            lVar37 = (long)dStack_3f0 + uVar50 * 0x20;
            lVar38 = *(long *)(lVar37 + 8);
            uVar47 = *(ulong *)(lVar37 + 0x10);
            iVar49 = *(int *)(lVar37 + 0x18);
            uStack_198._0_4_ = 127.5;
            uStack_198._4_4_ = 2.8026e-45;
            plStack_158 = &uStack_190;
            uStack_190._0_4_ = (float)(uVar47 >> 0x20);
            uStack_190._4_4_ = (int)uVar47;
            uStack_188 = (undefined4)lVar38;
            iStack_184 = (int)((ulong)lVar38 >> 0x20);
            uStack_170._0_4_ = 0;
            uStack_170._4_4_ = 0;
            uStack_178._0_4_ = 0;
            uStack_178._4_4_ = 0;
            lStack_160 = 0;
            uStack_168 = 0;
            uStack_164 = 0;
            uStack_140 = 0;
            lStack_148 = 0;
            lVar37 = (long)uStack_190._4_4_;
            uStack_180 = uStack_188;
            iStack_17c = iStack_184;
            plStack_150 = &lStack_148;
            if (lVar38 == 0 && (long)uStack_190._4_4_ * (long)(int)(float)uStack_190 != 0) {
              puVar26 = (undefined4 *)0x24;
              uStack_110 = pfVar19;
              uStack_f8 = pfVar39;
              func_0x000107c2ae8c();
              *puVar26 = 1;
              uStack_3c8 = puVar26 + 1;
              uStack_3c0._0_4_ = 3.92364e-44;
              uStack_3c0._4_4_ = 0.0;
              *(undefined1 *)(puVar26 + 8) = 0;
              *(undefined8 *)(puVar26 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar26 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar26 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar26 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&uStack_3c8,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_1095ac340;
            }
            lVar42 = lVar37;
            if (uVar47 >> 0x20 != 1) {
              lVar42 = (long)iVar49;
            }
            lStack_148 = lVar37;
            if (iVar49 != 0) {
              lStack_148 = lVar42;
            }
            uStack_198._0_4_ = 127.625;
            if (lVar42 != lVar37 && iVar49 != 0) {
              uStack_198._0_4_ = 127.5;
            }
            uStack_140 = 1;
            uStack_170 = lVar38 + lStack_148 * ((long)uVar47 >> 0x20);
            uStack_178 = (uStack_170 - lStack_148) + lVar37;
            uStack_120._0_4_ = 127.5;
            uStack_118._4_4_ = 0;
            uStack_110._0_4_ = 0;
            uStack_120._4_4_ = 0.0;
            uStack_118._0_4_ = 0;
            pcVar16 = (code *)((ulong)&uStack_120 | 8);
            uStack_104 = 0;
            uStack_100._0_4_ = 0;
            uStack_110._4_4_ = 0;
            uStack_108 = 0;
            uStack_f8._4_4_ = 0;
            uStack_100._4_4_ = 0;
            uStack_f8._0_4_ = 0;
            pcStack_e8 = (code *)0x0;
            uStack_f0 = 0;
            uStack_ec = 0;
            pcStack_c8 = (code *)0x0;
            pcStack_d0 = (code *)0x0;
            uStack_3c8._0_4_ = 9.477423e-38;
            uStack_3b8 = 0;
            uStack_3b4 = 0;
            pcStack_e0 = pcVar16;
            ppcStack_d8 = &pcStack_d0;
            uStack_3c0 = &uStack_120;
            FUN_109a479a0(&uStack_198,&uStack_3c8);
            if (*(long *)(param_1 + 0x200) != 0) {
              piVar1 = (int *)(*(long *)(param_1 + 0x200) + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(param_1 + 0x1f2);
              }
            }
            param_1[0x200] = 0.0;
            param_1[0x201] = 0.0;
            pfVar19 = param_1 + 0x1f6;
            param_1[0x1f8] = 0.0;
            param_1[0x1f9] = 0.0;
            pfVar19[0] = 0.0;
            pfVar19[1] = 0.0;
            param_1[0x1fc] = 0.0;
            param_1[0x1fd] = 0.0;
            param_1[0x1fa] = 0.0;
            param_1[0x1fb] = 0.0;
            if (0 < (int)param_1[499]) {
              lVar37 = 0;
              lVar38 = *(long *)(param_1 + 0x202);
              do {
                *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)param_1[499]);
            }
            *(ulong *)(param_1 + 500) = CONCAT44(uStack_118._4_4_,(int)uStack_118);
            *(ulong *)(param_1 + 0x1f2) = CONCAT44(uStack_120._4_4_,(float)uStack_120);
            *(ulong *)(param_1 + 0x1f8) = CONCAT44(uStack_104,uStack_108);
            *(ulong *)pfVar19 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
            *(ulong *)(param_1 + 0x1fc) = CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
            *(ulong *)(param_1 + 0x1fa) = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
            *(code **)(param_1 + 0x200) = pcStack_e8;
            *(ulong *)(param_1 + 0x1fe) = CONCAT44(uStack_ec,uStack_f0);
            pfVar39 = *(float **)(param_1 + 0x204);
            pfVar19 = param_1 + 0x206;
            if (pfVar39 != pfVar19) {
              if (pfVar39 != (float *)0x0) {
                _free(*(long *)(pfVar39 + -2));
              }
              *(float **)(param_1 + 0x204) = pfVar19;
              *(float **)(param_1 + 0x202) = param_1 + 500;
              pfVar39 = pfVar19;
            }
            puVar40 = (undefined8 *)((ulong)&uStack_120 | 4);
            if ((int)uStack_120._4_4_ < 3) {
              *(code **)pfVar39 = *ppcStack_d8;
              *(code **)(pfVar39 + 2) = ppcStack_d8[1];
              uStack_120._0_4_ = 127.5;
              puVar40[1] = 0;
              *puVar40 = 0;
              puVar40[3] = 0;
              puVar40[2] = 0;
              puVar40[5] = 0;
              puVar40[4] = 0;
              *(undefined8 *)((long)puVar40 + 0x34) = 0;
              *(undefined8 *)((long)puVar40 + 0x2c) = 0;
              if (ppcStack_d8 != &pcStack_d0) {
                _free(ppcStack_d8[-1]);
              }
            }
            else {
              *(code ***)(param_1 + 0x204) = ppcStack_d8;
              *(code **)(param_1 + 0x202) = pcStack_e0;
              uStack_120._0_4_ = 127.5;
              puVar40[1] = 0;
              *puVar40 = 0;
              puVar40[3] = 0;
              puVar40[2] = 0;
              puVar40[5] = 0;
              puVar40[4] = 0;
              *(undefined8 *)((long)puVar40 + 0x34) = 0;
              *(undefined8 *)((long)puVar40 + 0x2c) = 0;
              pcStack_e0 = pcVar16;
              ppcStack_d8 = &pcStack_d0;
            }
            if (lStack_160 != 0) {
              piVar1 = (int *)(lStack_160 + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(&uStack_198);
              }
            }
            pfVar39 = (float *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
            pfVar19 = (float *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
            pfVar23 = (float *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
            lStack_160 = 0;
            uStack_180 = 0;
            iStack_17c = 0;
            uStack_188 = 0;
            iStack_184 = 0;
            uStack_170._0_4_ = 0;
            uStack_170._4_4_ = 0;
            uStack_178._0_4_ = 0;
            uStack_178._4_4_ = 0;
            if (0 < (int)uStack_198._4_4_) {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)plStack_158 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)uStack_198._4_4_);
            }
            if (plStack_150 != &lStack_148 && plStack_150 != (long *)0x0) {
              _free(plStack_150[-1]);
              pfVar39 = (float *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
              pfVar19 = (float *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
              pfVar23 = (float *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
            }
          }
          uStack_120 = &dStack_3f0;
          uStack_190 = pfVar23;
          uStack_110 = pfVar19;
          uStack_f8 = pfVar39;
          FUN_10939d590(&uStack_120);
          fStack_1f8 = 6.9143196e-29;
          fStack_1f4 = 1.4013e-45;
          pfVar39 = (float *)CONCAT44(uStack_1ec,uStack_1f0);
          if (pfVar39 != (float *)0x0) {
            __ZdaPv();
          }
        }
        if (pcStack_328 != (code *)0x0) {
          pcVar16 = pcStack_328 + 0x14;
          do {
            iVar49 = *(int *)pcVar16;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
            if (bVar11) {
              *(int *)pcVar16 = iVar49 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar49 + -1 == 0) {
            pfVar39 = (float *)&uStack_360;
            func_0x000109a848d4();
          }
        }
        pcStack_328 = (code *)0x0;
        uStack_348._0_4_ = 0.0;
        uStack_348._4_4_ = 0;
        uStack_350._0_4_ = 0;
        uStack_350._4_4_ = 0;
        uStack_338._0_4_ = 0;
        uStack_338._4_4_ = 0;
        uStack_340._0_4_ = 0;
        uStack_340._4_4_ = 0;
        if (0 < (int)uStack_360._4_4_) {
          lVar37 = 0;
          do {
            *(undefined4 *)(pcStack_320 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < (int)uStack_360._4_4_);
        }
        pdVar22 = uStack_120;
        uStack_358 = (double *)CONCAT44(uStack_358._4_4_,(int)uStack_358);
        if (ppcStack_318 != &pcStack_310 && ppcStack_318 != (code **)0x0) {
          pfVar39 = (float *)ppcStack_318[-1];
          _free();
          pdVar22 = uStack_120;
        }
      }
    }
LAB_1095a9b74:
    uStack_120._4_4_ = (float)((ulong)pdVar22 >> 0x20);
    if (*(code *)(param_1 + 0x6d) == (code)0x1) {
      uStack_350._0_4_ = 0;
      uStack_350._4_4_ = 0;
      uStack_360._0_4_ = 2.3693558e-38;
      uStack_358._0_4_ = (int)param_2;
      uStack_358._4_4_ = (int)((ulong)param_2 >> 0x20);
      uStack_118 = param_1 + 0x2c4;
      uStack_120._0_4_ = 9.477423e-38;
      uStack_110._0_4_ = 0;
      uStack_110._4_4_ = 0;
      uVar58 = *(undefined8 *)(param_1 + 0x47);
      uStack_198._0_4_ = (float)uVar58;
      uStack_198._4_4_ = (float)((ulong)uVar58 >> 0x20);
      pfVar39 = (float *)&uStack_360;
      FUN_109b0f718(0,0,pfVar39,&uStack_120,&uStack_198,1);
      pdVar22 = (double *)CONCAT44(uStack_120._4_4_,(float)uStack_120);
    }
    else {
      pfVar19 = param_1 + 0x2c4;
      if (pfVar19 != param_2) {
        if (*(long *)(param_2 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        uStack_120 = pdVar22;
        if (*(long *)(param_1 + 0x2d2) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 0x2d2) + 0x14);
          do {
            iVar49 = *piVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar49 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar49 + -1 == 0) {
            pfVar39 = pfVar19;
            func_0x000109a848d4();
          }
        }
        param_1[0x2d2] = 0.0;
        param_1[0x2d3] = 0.0;
        param_1[0x2ca] = 0.0;
        param_1[0x2cb] = 0.0;
        param_1[0x2c8] = 0.0;
        param_1[0x2c9] = 0.0;
        param_1[0x2ce] = 0.0;
        param_1[0x2cf] = 0.0;
        param_1[0x2cc] = 0.0;
        param_1[0x2cd] = 0.0;
        if ((int)param_1[0x2c5] < 1) {
          *pfVar19 = *param_2;
LAB_1095a9c88:
          if (2 < (int)param_2[1]) goto LAB_1095a9cbc;
          param_1[0x2c5] = param_2[1];
          *(undefined8 *)(param_1 + 0x2c6) = *(undefined8 *)(param_2 + 2);
          puVar40 = *(undefined8 **)(param_2 + 0x12);
          puVar46 = *(undefined8 **)(param_1 + 0x2d6);
          *puVar46 = *puVar40;
          puVar46[1] = puVar40[1];
          pdVar22 = uStack_120;
        }
        else {
          lVar37 = 0;
          lVar38 = *(long *)(param_1 + 0x2d4);
          do {
            *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < (int)param_1[0x2c5]);
          *pfVar19 = *param_2;
          if ((int)param_1[0x2c5] < 3) goto LAB_1095a9c88;
LAB_1095a9cbc:
          func_0x000109a84868();
          pfVar39 = pfVar19;
          pdVar22 = uStack_120;
        }
        uVar58 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 0x2ca) = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(param_1 + 0x2c8) = uVar58;
        uVar58 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0x2ce) = *(undefined8 *)(param_2 + 10);
        *(undefined8 *)(param_1 + 0x2cc) = uVar58;
        uVar58 = *(undefined8 *)(param_2 + 0xc);
        *(undefined8 *)(param_1 + 0x2d2) = *(undefined8 *)(param_2 + 0xe);
        *(undefined8 *)(param_1 + 0x2d0) = uVar58;
      }
    }
    if (*(code *)(param_1 + 0x61) == (code)0x1) {
      uStack_120 = pdVar22;
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar48 = *(long **)(param_1 + 0x19e);
      if (plVar48 == (long *)0x0) {
        uStack_358._0_4_ = 0xc;
        uStack_358._4_4_ = 0;
        uStack_360._0_4_ = 0.0;
        uStack_360._4_4_ = 9.80909e-45;
        uStack_350._0_4_ = CONCAT31(uStack_350._1_3_,1);
        uVar58 = 8;
        __Znwm(8);
        FUN_109530654();
        func_0x0001095ae004(param_1 + 0x19e,uVar58);
        plVar48 = *(long **)(param_1 + 0x19e);
      }
      lVar37 = *plVar48;
      fVar56 = param_1[0x1dd];
      if (*(float *)(lVar37 + 0xe4) == fVar56) {
        fVar62 = param_1[0x1dc];
        if (*(float *)(lVar37 + 0xe8) == param_1[0x1dc]) {
          if (*(code *)((long)param_1 + 0x185) == (code)0x1) {
            FUN_1095b5e00(param_1 + 0x194,*(undefined8 *)(param_1 + 0x19a));
            if (param_1[0x197] == 0.0) {
              FUN_1095307ac(**(undefined8 **)(param_1 + 0x19e),*(undefined8 *)(param_1 + 0x1de));
            }
          }
          else {
            FUN_1095307ac(lVar37,*(undefined8 *)(param_1 + 0x1de));
          }
          lVar37 = **(long **)(param_1 + 0x19e);
          *(long *)(param_1 + 0x19a) = lVar37;
          fVar56 = *(float *)(lVar37 + 8);
          fVar62 = *(float *)(lVar37 + 0xc);
          uStack_360._0_4_ = 127.5;
          pcStack_320 = (code *)&uStack_358;
          uStack_358._4_4_ = 0;
          uStack_350._0_4_ = 0;
          uStack_360._4_4_ = 0.0;
          uStack_358._0_4_ = 0;
          uStack_348._4_4_ = 0;
          uStack_340._0_4_ = 0;
          uStack_350._4_4_ = 0;
          uStack_348._0_4_ = 0.0;
          uStack_338._4_4_ = 0;
          uStack_340._4_4_ = 0;
          uStack_338._0_4_ = 0;
          pcStack_328 = (code *)0x0;
          uStack_330 = 0;
          uStack_32c = 0;
          pcStack_308 = (code *)0x0;
          pcStack_310 = (code *)0x0;
          ppcStack_318 = &pcStack_310;
          uStack_120._0_4_ = fVar56;
          uStack_120._4_4_ = fVar62;
          FUN_109a83fd0(&uStack_360,2,&uStack_120,5);
          uStack_120._0_4_ = 127.5;
          pcStack_e0 = (code *)&uStack_118;
          uStack_118._4_4_ = 0;
          uStack_110._0_4_ = 0;
          uStack_120._4_4_ = 0.0;
          uStack_118._0_4_ = 0;
          uStack_104 = 0;
          uStack_100._0_4_ = 0;
          uStack_110._4_4_ = 0;
          uStack_108 = 0;
          uStack_f8._4_4_ = 0;
          uStack_100._4_4_ = 0;
          uStack_f8._0_4_ = 0;
          pcStack_e8 = (code *)0x0;
          uStack_f0 = 0;
          uStack_ec = 0;
          pcStack_c8 = (code *)0x0;
          pcStack_d0 = (code *)0x0;
          uStack_198._0_4_ = fVar56;
          uStack_198._4_4_ = fVar62;
          ppcStack_d8 = &pcStack_d0;
          FUN_109a83fd0(&uStack_120,2,&uStack_198,5);
          uStack_198._0_4_ = 127.5;
          plStack_158 = &uStack_190;
          uStack_190._4_4_ = 0;
          uStack_188 = 0;
          uStack_198._4_4_ = 0.0;
          uStack_190._0_4_ = 0.0;
          iStack_17c = 0;
          uStack_178._0_4_ = 0;
          iStack_184 = 0;
          uStack_180 = 0;
          uStack_170._4_4_ = 0;
          uStack_178._4_4_ = 0;
          uStack_170._0_4_ = 0;
          lStack_160 = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_140 = 0;
          lStack_148 = 0;
          fStack_1f8 = fVar56;
          fStack_1f4 = fVar62;
          plStack_150 = &lStack_148;
          FUN_109a83fd0(&uStack_198,2,&fStack_1f8,5);
          fStack_1f8 = 127.5;
          puStack_1b8 = &uStack_1f0;
          uStack_1ec = 0;
          uStack_1e8 = 0;
          fStack_1f4 = 0.0;
          uStack_1f0 = 0;
          uStack_1dc = 0;
          uStack_1d8 = 0;
          uStack_1e4 = 0;
          iStack_1e0 = 0;
          uStack_1cc = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          lStack_1c0 = 0;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          uStack_1a0 = 0;
          lStack_1a8 = 0;
          fStack_258 = fVar56;
          fStack_254 = fVar62;
          plStack_1b0 = &lStack_1a8;
          FUN_109a83fd0(&fStack_1f8,2,&fStack_258,5);
          ppcVar13 = ppcStack_d8;
          plVar48 = plStack_1b0;
          ppcVar15 = ppcStack_318;
          fVar51 = (float)(int)fVar62;
          fVar52 = (float)(uint)fVar56;
          if (0 < (int)fVar56) {
            uVar47 = 0;
            lVar38 = CONCAT44(uStack_350._4_4_,(undefined4)uStack_350);
            lVar43 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
            fVar55 = 0.0;
            lVar42 = CONCAT44(uStack_1e4,uStack_1e8);
            do {
              plVar20 = plStack_150;
              if (0 < (int)fVar62) {
                uVar50 = 0;
                pcVar16 = *ppcVar15;
                pcVar41 = *ppcVar13;
                cVar17 = *(code *)((long)param_1 + 0x671);
                lVar44 = CONCAT44(iStack_184,uStack_188);
                uVar45 = (ulong)(uint)fVar62;
                pfVar19 = (float *)(lVar42 + *plVar48 * uVar47);
                do {
                  FUN_109530ca0(&fStack_258,lVar37,uVar47,uVar50,0);
                  fVar53 = fVar55;
                  if (ABS(fStack_258) <= fVar51 + fVar51) {
                    fVar53 = fStack_258;
                  }
                  fVar54 = fVar55;
                  if (ABS(fStack_254) <= fVar52 + fVar52) {
                    fVar54 = fStack_254;
                  }
                  fVar53 = fVar53 + (float)(uVar50 & 0xffffffff);
                  fVar59 = (float)(int)((int)fVar62 - 1);
                  if (fVar53 <= (float)(int)((int)fVar62 - 1)) {
                    fVar59 = fVar53;
                  }
                  if (fVar59 <= 0.0) {
                    fVar59 = fVar55;
                  }
                  fVar54 = fVar54 + (float)(uVar47 & 0xffffffff);
                  fVar53 = (float)((int)fVar56 - 1);
                  if (fVar54 <= (float)((int)fVar56 - 1)) {
                    fVar53 = fVar54;
                  }
                  if (fVar53 <= 0.0) {
                    fVar53 = fVar55;
                  }
                  *(float *)(lVar38 + (long)pcVar16 * uVar47 + uVar50 * 4) = fVar59;
                  *(float *)(lVar43 + (long)pcVar41 * uVar47 + uVar50 * 4) = fVar53;
                  if (cVar17 == (code)0x0) {
                    *(undefined4 *)(lVar44 + uVar47 * *plVar20) =
                         *(undefined4 *)
                          (*(long *)(param_1 + 0x1a4) +
                           **(long **)(param_1 + 0x1b2) * (long)(int)fVar53 + (long)(int)fVar59 * 4)
                    ;
                    fVar53 = *(float *)(*(long *)(param_1 + 0x1bc) +
                                        **(long **)(param_1 + 0x1ca) * (long)(int)fVar53 +
                                       (long)(int)fVar59 * 4);
                  }
                  else {
                    *(float *)(lVar44 + uVar47 * *plVar20) = fVar59;
                  }
                  *pfVar19 = fVar53;
                  uVar50 = uVar50 + 1;
                  lVar44 = lVar44 + 4;
                  uVar45 = uVar45 - 1;
                  pfVar19 = pfVar19 + 1;
                } while (uVar45 != 0);
              }
              uVar47 = uVar47 + 1;
            } while (uVar47 != (uint)fVar56);
          }
          pfVar19 = param_1 + 0x1a0;
          if (pfVar19 != (float *)&uStack_198) {
            if (lStack_160 != 0) {
              piVar1 = (int *)(lStack_160 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(long *)(param_1 + 0x1ae) != 0) {
              piVar1 = (int *)(*(long *)(param_1 + 0x1ae) + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(pfVar19);
              }
            }
            param_1[0x1ae] = 0.0;
            param_1[0x1af] = 0.0;
            param_1[0x1a6] = 0.0;
            param_1[0x1a7] = 0.0;
            param_1[0x1a4] = 0.0;
            param_1[0x1a5] = 0.0;
            param_1[0x1aa] = 0.0;
            param_1[0x1ab] = 0.0;
            param_1[0x1a8] = 0.0;
            param_1[0x1a9] = 0.0;
            if ((int)param_1[0x1a1] < 1) {
              *pfVar19 = (float)uStack_198;
LAB_1095aaf90:
              if (2 < (int)uStack_198._4_4_) goto LAB_1095aafc4;
              param_1[0x1a1] = uStack_198._4_4_;
              *(ulong *)(param_1 + 0x1a2) = CONCAT44(uStack_190._4_4_,(float)uStack_190);
              plVar48 = *(long **)(param_1 + 0x1b2);
              *plVar48 = *plStack_150;
              plVar48[1] = plStack_150[1];
            }
            else {
              lVar37 = 0;
              lVar38 = *(long *)(param_1 + 0x1b0);
              do {
                *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)param_1[0x1a1]);
              *pfVar19 = (float)uStack_198;
              if ((int)param_1[0x1a1] < 3) goto LAB_1095aaf90;
LAB_1095aafc4:
              func_0x000109a84868(pfVar19,&uStack_198);
            }
            *(ulong *)(param_1 + 0x1a6) = CONCAT44(iStack_17c,uStack_180);
            *(ulong *)(param_1 + 0x1a4) = CONCAT44(iStack_184,uStack_188);
            *(ulong *)(param_1 + 0x1aa) = CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
            *(ulong *)(param_1 + 0x1a8) = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
            *(long *)(param_1 + 0x1ae) = lStack_160;
            *(ulong *)(param_1 + 0x1ac) = CONCAT44(uStack_164,uStack_168);
          }
          pfVar19 = param_1 + 0x1b8;
          if (pfVar19 != &fStack_1f8) {
            if (lStack_1c0 != 0) {
              piVar1 = (int *)(lStack_1c0 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (*(long *)(param_1 + 0x1c6) != 0) {
              piVar1 = (int *)(*(long *)(param_1 + 0x1c6) + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(pfVar19);
              }
            }
            param_1[0x1c6] = 0.0;
            param_1[0x1c7] = 0.0;
            param_1[0x1be] = 0.0;
            param_1[0x1bf] = 0.0;
            param_1[0x1bc] = 0.0;
            param_1[0x1bd] = 0.0;
            param_1[0x1c2] = 0.0;
            param_1[0x1c3] = 0.0;
            param_1[0x1c0] = 0.0;
            param_1[0x1c1] = 0.0;
            if ((int)param_1[0x1b9] < 1) {
              *pfVar19 = fStack_1f8;
LAB_1095ab08c:
              if (2 < (int)fStack_1f4) goto LAB_1095ab0c0;
              param_1[0x1b9] = fStack_1f4;
              *(ulong *)(param_1 + 0x1ba) = CONCAT44(uStack_1ec,uStack_1f0);
              plVar48 = *(long **)(param_1 + 0x1ca);
              *plVar48 = *plStack_1b0;
              plVar48[1] = plStack_1b0[1];
            }
            else {
              lVar37 = 0;
              lVar38 = *(long *)(param_1 + 0x1c8);
              do {
                *(undefined4 *)(lVar38 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)param_1[0x1b9]);
              *pfVar19 = fStack_1f8;
              if ((int)param_1[0x1b9] < 3) goto LAB_1095ab08c;
LAB_1095ab0c0:
              func_0x000109a84868(pfVar19,&fStack_1f8);
            }
            *(ulong *)(param_1 + 0x1be) = CONCAT44(uStack_1dc,iStack_1e0);
            *(ulong *)(param_1 + 0x1bc) = CONCAT44(uStack_1e4,uStack_1e8);
            *(ulong *)(param_1 + 0x1c2) = CONCAT44(uStack_1cc,uStack_1d0);
            *(ulong *)(param_1 + 0x1c0) = CONCAT44(uStack_1d4,uStack_1d8);
            *(long *)(param_1 + 0x1c6) = lStack_1c0;
            *(ulong *)(param_1 + 0x1c4) = CONCAT44(uStack_1c4,uStack_1c8);
          }
          if (*(code *)((long)param_1 + 0x671) == (code)0x1) {
            *(code *)((long)param_1 + 0x671) = (code)0x0;
          }
          fStack_258 = 127.5;
          uStack_24c = 0;
          uStack_248 = 0;
          fStack_254 = 0.0;
          uStack_250 = 0;
          puStack_218 = &uStack_250;
          uStack_23c = 0;
          uStack_238 = 0;
          uStack_244 = 0;
          iStack_240 = 0;
          uStack_22c = 0;
          uStack_234 = 0;
          uStack_230 = 0;
          lStack_220 = 0;
          uStack_228 = 0;
          uStack_224 = 0;
          uStack_200 = 0;
          lStack_208 = 0;
          uStack_3c8._0_4_ = 127.5;
          puStack_388 = &uStack_3c0;
          uStack_3c0._4_4_ = 0.0;
          uStack_3b8 = 0;
          uStack_3c8._4_4_ = 0.0;
          uStack_3c0._0_4_ = 0.0;
          uStack_3ac = 0;
          uStack_3a8 = 0;
          uStack_3b4 = 0;
          uStack_3b0 = 0;
          uStack_39c = 0;
          uStack_3a4 = 0;
          uStack_3a0 = 0;
          lStack_390 = 0;
          uStack_398 = 0;
          uStack_394 = 0;
          uStack_370 = 0;
          lStack_378 = 0;
          plStack_380 = &lStack_378;
          plStack_210 = &lStack_208;
          __ZNSt3__15mutex4lockEv(param_1 + 0x126);
          if (*(code *)(param_1 + 0x19c) == (code)0x1) {
            *(code *)(param_1 + 0x19c) = (code)0x0;
            FUN_1095b3bdc(param_1 + 0x156,param_1 + 0x160);
            *(code *)((long)param_1 + 0x671) = (code)0x1;
            if (lStack_160 != 0) {
              piVar1 = (int *)(lStack_160 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_220 != 0) {
              piVar1 = (int *)(lStack_220 + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(&fStack_258);
              }
            }
            plVar48 = plStack_150;
            lStack_220 = 0;
            iStack_240 = 0;
            uStack_23c = 0;
            uStack_248 = 0;
            uStack_244 = 0;
            uStack_230 = 0;
            uStack_22c = 0;
            uStack_238 = 0;
            uStack_234 = 0;
            if ((int)fStack_254 < 1) {
              fStack_258 = (float)uStack_198;
LAB_1095ab2a4:
              fStack_258 = (float)uStack_198;
              if (2 < (int)uStack_198._4_4_) goto LAB_1095ab2d8;
              fStack_254 = uStack_198._4_4_;
              uStack_250 = (float)uStack_190;
              uStack_24c = uStack_190._4_4_;
              *plStack_210 = *plStack_150;
              plStack_210[1] = plVar48[1];
            }
            else {
              lVar37 = 0;
              do {
                puStack_218[lVar37] = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)fStack_254);
              fStack_258 = (float)uStack_198;
              if ((int)fStack_254 < 3) goto LAB_1095ab2a4;
LAB_1095ab2d8:
              fStack_258 = (float)uStack_198;
              func_0x000109a84868(&fStack_258,&uStack_198);
            }
            iStack_240 = uStack_180;
            uStack_23c = iStack_17c;
            uStack_248 = uStack_188;
            uStack_244 = iStack_184;
            uStack_230 = (undefined4)uStack_170;
            uStack_22c = uStack_170._4_4_;
            uStack_238 = (undefined4)uStack_178;
            uStack_234 = uStack_178._4_4_;
            lStack_220 = lStack_160;
            uStack_228 = uStack_168;
            uStack_224 = uStack_164;
            if (lStack_1c0 != 0) {
              piVar1 = (int *)(lStack_1c0 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_390 != 0) {
              piVar1 = (int *)(lStack_390 + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(&uStack_3c8);
              }
            }
            lStack_390 = 0;
            uStack_3b0 = 0;
            uStack_3ac = 0;
            uStack_3b8 = 0;
            uStack_3b4 = 0;
            uStack_3a0 = 0;
            uStack_39c = 0;
            uStack_3a8 = 0;
            uStack_3a4 = 0;
            if ((int)uStack_3c8._4_4_ < 1) {
              uStack_3c8._0_4_ = fStack_1f8;
              if ((int)fStack_1f4 < 3) goto LAB_1095ab4a8;
            }
            else {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)puStack_388 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)uStack_3c8._4_4_);
              uStack_3c8._0_4_ = fStack_1f8;
              if ((int)uStack_3c8._4_4_ < 3 && (int)fStack_1f4 < 3) {
LAB_1095ab4a8:
                uStack_3c8._0_4_ = fStack_1f8;
                pfVar19 = &fStack_1f8;
                uStack_3c8._4_4_ = fStack_1f4;
                goto LAB_1095ab4c8;
              }
            }
            uStack_3c8._0_4_ = fStack_1f8;
            pfVar19 = &fStack_1f8;
            func_0x000109a84868(&uStack_3c8,&fStack_1f8);
          }
          else {
            if (pcStack_328 != (code *)0x0) {
              piVar1 = (int *)((long)pcStack_328 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_220 != 0) {
              piVar1 = (int *)(lStack_220 + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(&fStack_258);
              }
            }
            lStack_220 = 0;
            iStack_240 = 0;
            uStack_23c = 0;
            uStack_248 = 0;
            uStack_244 = 0;
            uStack_230 = 0;
            uStack_22c = 0;
            uStack_238 = 0;
            uStack_234 = 0;
            if ((int)fStack_254 < 1) {
              fStack_258 = (float)uStack_360;
LAB_1095ab3a0:
              fStack_258 = (float)uStack_360;
              if (2 < (int)uStack_360._4_4_) goto LAB_1095ab3d4;
              fStack_254 = uStack_360._4_4_;
              uStack_250 = (int)uStack_358;
              uStack_24c = uStack_358._4_4_;
              *plStack_210 = (long)*ppcStack_318;
              plStack_210[1] = (long)ppcStack_318[1];
            }
            else {
              lVar37 = 0;
              do {
                puStack_218[lVar37] = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)fStack_254);
              fStack_258 = (float)uStack_360;
              if ((int)fStack_254 < 3) goto LAB_1095ab3a0;
LAB_1095ab3d4:
              fStack_258 = (float)uStack_360;
              func_0x000109a84868(&fStack_258,&uStack_360);
            }
            iStack_240 = (int)(float)uStack_348;
            uStack_23c = uStack_348._4_4_;
            uStack_248 = (undefined4)uStack_350;
            uStack_244 = uStack_350._4_4_;
            uStack_230 = (undefined4)uStack_338;
            uStack_22c = uStack_338._4_4_;
            uStack_238 = (undefined4)uStack_340;
            uStack_234 = uStack_340._4_4_;
            lStack_220 = (long)pcStack_328;
            uStack_228 = uStack_330;
            uStack_224 = uStack_32c;
            if (pcStack_e8 != (code *)0x0) {
              piVar1 = (int *)((long)pcStack_e8 + 0x14);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = *piVar1 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            if (lStack_390 != 0) {
              piVar1 = (int *)(lStack_390 + 0x14);
              do {
                iVar49 = *piVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar11) {
                  *piVar1 = iVar49 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar49 + -1 == 0) {
                func_0x000109a848d4(&uStack_3c8);
              }
            }
            lStack_390 = 0;
            uStack_3b0 = 0;
            uStack_3ac = 0;
            uStack_3b8 = 0;
            uStack_3b4 = 0;
            uStack_3a0 = 0;
            uStack_39c = 0;
            uStack_3a8 = 0;
            uStack_3a4 = 0;
            if ((int)uStack_3c8._4_4_ < 1) {
              uStack_3c8._0_4_ = (float)uStack_120;
              if ((int)uStack_120._4_4_ < 3) goto LAB_1095ab4c4;
LAB_1095ab480:
              uStack_3c8._0_4_ = (float)uStack_120;
              pfVar19 = (float *)&uStack_120;
              func_0x000109a84868(&uStack_3c8,&uStack_120);
            }
            else {
              lVar37 = 0;
              do {
                *(undefined4 *)((long)puStack_388 + lVar37 * 4) = 0;
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)uStack_3c8._4_4_);
              uStack_3c8._0_4_ = (float)uStack_120;
              if (2 < (int)uStack_3c8._4_4_ || 2 < (int)uStack_120._4_4_) goto LAB_1095ab480;
LAB_1095ab4c4:
              uStack_3c8._0_4_ = (float)uStack_120;
              pfVar19 = (float *)&uStack_120;
              uStack_3c8._4_4_ = uStack_120._4_4_;
LAB_1095ab4c8:
              uStack_3c0._0_4_ = pfVar19[2];
              uStack_3c0._4_4_ = pfVar19[3];
              plVar48 = *(long **)(pfVar19 + 0x12);
              *plStack_380 = *plVar48;
              plStack_380[1] = plVar48[1];
            }
          }
          uStack_3a8 = (undefined4)*(undefined8 *)(pfVar19 + 8);
          uStack_3a4 = (undefined4)((ulong)*(undefined8 *)(pfVar19 + 8) >> 0x20);
          uStack_3b0 = (undefined4)*(undefined8 *)(pfVar19 + 6);
          uStack_3ac = (undefined4)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20);
          uStack_398 = (undefined4)*(undefined8 *)(pfVar19 + 0xc);
          uStack_394 = (undefined4)((ulong)*(undefined8 *)(pfVar19 + 0xc) >> 0x20);
          uStack_3a0 = (undefined4)*(undefined8 *)(pfVar19 + 10);
          uStack_39c = (undefined4)((ulong)*(undefined8 *)(pfVar19 + 10) >> 0x20);
          lStack_390 = *(long *)(pfVar19 + 0xe);
          uStack_3b8 = (undefined4)*(undefined8 *)(pfVar19 + 4);
          uStack_3b4 = (undefined4)((ulong)*(undefined8 *)(pfVar19 + 4) >> 0x20);
          pdVar22 = (double *)(param_1 + 0x126);
          __ZNSt3__15mutex6unlockEv();
          if (*(long *)(param_1 + 0x15c) != 0) {
            uStack_3e8 = 0;
            dStack_3f0 = 0.0;
            lStack_3d8 = 0;
            plStack_3e0 = (long *)0x0;
            uStack_3d0 = 0x3f800000;
            for (plVar48 = *(long **)(param_1 + 0x15a); plVar48 != (long *)0x0;
                plVar48 = (long *)*plVar48) {
              pfVar19 = (float *)(plVar48 + 2);
              pdVar22 = &dStack_3f0;
              uStack_138 = pfVar19;
              FUN_1095b3c7c(pdVar22,pfVar19,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
              uStack_138 = (float *)plVar48[6];
              if ((((2 < *(int *)((long)pdVar22 + 0x2c)) ||
                   (*(int *)(pdVar22 + 6) != *(int *)(plVar48 + 6))) ||
                  (*(int *)((long)pdVar22 + 0x34) != *(int *)((long)plVar48 + 0x34))) ||
                 (((*(uint *)(pdVar22 + 5) & 0xfff) != (*(uint *)(plVar48 + 5) & 0xfff) ||
                  (pdVar22[7] == 0.0)))) {
                FUN_109a83fd0(pdVar22 + 5,2,&uStack_138);
              }
              pfVar23 = param_1 + 0x1d0;
              uStack_138 = pfVar19;
              FUN_1095b3c7c(pfVar23,pfVar19,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
              if (pfVar23[0xc] == 0.0) {
                pfVar23 = param_1 + 0x1d0;
                uStack_138 = pfVar19;
                FUN_1095b3c7c(pfVar23,pfVar19,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
                if (pfVar23[0xd] == 0.0) {
                  pfVar23 = param_1 + 0x1d0;
                  uStack_138 = pfVar19;
                  FUN_1095b3c7c(pfVar23,pfVar19,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
                  pdVar22 = &dStack_3f0;
                  uStack_138 = pfVar19;
                  FUN_1095b3c7c(pdVar22,pfVar19,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
                  fVar55 = *(float *)(pdVar22 + 6);
                  pdVar22 = &dStack_3f0;
                  uStack_138 = pfVar19;
                  FUN_1095b3c7c(pdVar22,pfVar19,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
                  fVar53 = *(float *)((long)pdVar22 + 0x34);
                  pdVar22 = &dStack_3f0;
                  uStack_138 = pfVar19;
                  FUN_1095b3c7c(pdVar22,pfVar19,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
                  if (((2 < (int)pfVar23[0xb]) || (pfVar23[0xc] != fVar55)) ||
                     ((pfVar23[0xd] != fVar53 ||
                      ((((uint)pfVar23[10] & 0xfff) != (*(uint *)(pdVar22 + 5) & 0xfff) ||
                       (*(long *)(pfVar23 + 0xe) == 0)))))) {
                    uStack_138 = (float *)CONCAT44(fVar53,fVar55);
                    FUN_109a83fd0(pfVar23 + 10,2,&uStack_138);
                  }
                }
              }
            }
            if (0 < (int)fVar56) {
              uVar47 = 0;
              do {
                if (0 < (int)fVar62) {
                  uVar50 = 0;
                  do {
                    plVar48 = *(long **)(param_1 + 0x15a);
                    if (plVar48 != (long *)0x0) {
                      fVar55 = *(float *)(CONCAT44(uStack_244,uStack_248) + *plStack_210 * uVar47 +
                                         uVar50 * 4);
                      fVar53 = *(float *)(CONCAT44(uStack_3b4,uStack_3b8) + *plStack_380 * uVar47 +
                                         uVar50 * 4);
                      fVar54 = fVar55 - (float)(int)fVar55;
                      fVar59 = fVar53 - (float)(int)fVar53;
                      iVar49 = (int)(fVar55 + 1.0);
                      fVar63 = fVar53 + 1.0;
                      do {
                        lVar38 = plVar48[7];
                        lVar42 = *(long *)plVar48[0xe];
                        lVar37 = lVar38 + lVar42 * (int)fVar53;
                        if (fVar51 <= fVar55 + 1.0) {
                          fVar60 = 0.0;
                          fVar61 = 0.0;
                          fVar64 = 0.0;
                          if (fVar63 < fVar52) goto LAB_1095ab824;
                        }
                        else {
                          fVar61 = (float)NEON_ucvtf((uint)*(byte *)(lVar37 + iVar49));
                          fVar60 = 0.0;
                          if (fVar52 <= fVar63) {
                            fVar64 = 0.0;
                          }
                          else {
                            fVar60 = (float)NEON_ucvtf((uint)*(byte *)(lVar38 + lVar42 * (int)fVar63
                                                                      + (long)iVar49));
LAB_1095ab824:
                            fVar64 = (float)NEON_ucvtf((uint)*(byte *)(lVar38 + lVar42 * (int)fVar63
                                                                      + (long)(int)fVar55));
                          }
                        }
                        uStack_138 = (float *)(plVar48 + 2);
                        bVar9 = *(byte *)(lVar37 + (int)fVar55);
                        pdVar22 = &dStack_3f0;
                        FUN_1095b3c7c(pdVar22,uStack_138,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
                        *(char *)((long)pdVar22[7] + *(long *)pdVar22[0xe] * uVar47 + uVar50) =
                             (char)(int)(fVar61 * (1.0 - fVar59) * fVar54 +
                                         (float)bVar9 * (1.0 - fVar54) * (1.0 - fVar59) +
                                         fVar60 * fVar54 * fVar59 + fVar64 * (1.0 - fVar54) * fVar59
                                        );
                        plVar48 = (long *)*plVar48;
                      } while (plVar48 != (long *)0x0);
                    }
                    uVar50 = uVar50 + 1;
                  } while (uVar50 != (uint)fVar62);
                }
                uVar47 = uVar47 + 1;
              } while (uVar47 != (uint)fVar56);
            }
            plVar48 = plStack_3e0;
            if (((byte)*(code *)((long)param_1 + 0x186) & 1) != 0) {
              for (; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
                pfStack_400 = (float *)(plVar48 + 5);
                uStack_128 = 0;
                uStack_138._4_4_ = (undefined4)((ulong)uStack_138 >> 0x20);
                uStack_138 = (float *)CONCAT44(uStack_138._4_4_,0x1010000);
                uStack_408._4_4_ = (undefined4)((ulong)uStack_408 >> 0x20);
                uStack_408 = (long *)CONCAT44(uStack_408._4_4_,0x2010000);
                uStack_3f8 = 0;
                pfStack_130 = pfStack_400;
                FUN_109b59078((double)(int)param_1[0x62],0x406fe00000000000,&uStack_138,&uStack_408,
                              3);
              }
            }
            if (*(code *)(param_1 + 0x65) == (code)0x1 && lStack_3d8 != 0) {
              lVar37 = plStack_3e0[6];
              iVar49 = *(int *)((long)plStack_3e0 + 0x34);
              FUN_109246310(&uStack_138,9);
              if (2 < (int)lVar37) {
                lVar38 = 0;
                uVar47 = 1;
                do {
                  if (2 < iVar49) {
                    lVar42 = 0;
                    uVar50 = 1;
                    plVar48 = plStack_3e0;
                    do {
                      for (; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
                        lVar43 = -1;
                        lVar24 = 0;
                        lVar44 = lVar38;
                        do {
                          lVar27 = 0;
                          do {
                            *(code *)((long)uStack_138 + lVar27 + lVar24) =
                                 *(code *)(plVar48[7] + lVar44 * *(long *)plVar48[0xe] + lVar42 +
                                          lVar27);
                            lVar27 = lVar27 + 1;
                          } while (lVar27 != 3);
                          lVar43 = lVar43 + 1;
                          lVar44 = lVar44 + 1;
                          lVar24 = lVar24 + 3;
                        } while (lVar43 != 2);
                        iVar12 = (int)pfStack_130 - (int)uStack_138;
                        if (iVar12 != 0) {
                          pfVar19 = (float *)((long)uStack_138 + (long)(iVar12 / 2));
                          pfVar25 = pfStack_130;
                          pfVar23 = uStack_138;
                          if (pfVar19 != pfStack_130) {
LAB_1095ab9f0:
                            uVar45 = (long)pfVar25 - (long)pfVar23;
                            if (1 < uVar45) {
                              if (uVar45 == 3) {
                                cVar31 = *(code *)((long)pfVar23 + 1);
                                cVar4 = *(code *)((long)pfVar25 - 1);
                                cVar17 = cVar31;
                                if ((byte)cVar4 <= (byte)cVar31) {
                                  cVar17 = cVar4;
                                }
                                if ((byte)cVar31 <= (byte)cVar4) {
                                  cVar31 = cVar4;
                                }
                                *(code *)((long)pfVar25 - 1) = cVar31;
                                *(code *)((long)pfVar23 + 1) = cVar17;
                                cVar17 = *(code *)((long)pfVar25 - 1);
                                cVar31 = *(code *)pfVar23;
                                cVar4 = cVar17;
                                if ((byte)cVar31 <= (byte)cVar17) {
                                  cVar4 = cVar31;
                                }
                                if ((byte)cVar17 <= (byte)cVar31) {
                                  cVar17 = cVar31;
                                }
                                *(code *)((long)pfVar25 - 1) = cVar17;
                                cVar17 = *(code *)((long)pfVar23 + 1);
                                if ((byte)cVar17 <= (byte)cVar4) {
                                  *(code *)pfVar23 = cVar17;
                                  cVar17 = cVar4;
                                }
                                *(code *)((long)pfVar23 + 1) = cVar17;
                              }
                              else if (uVar45 == 2) {
                                cVar17 = *(code *)pfVar23;
                                if ((byte)*(code *)((long)pfVar25 - 1) < (byte)cVar17) {
                                  *(code *)pfVar23 = *(code *)((long)pfVar25 - 1);
                                  *(code *)((long)pfVar25 - 1) = cVar17;
                                }
                              }
                              else if ((long)uVar45 < 8) {
                                while (pfVar19 = pfVar23, (float *)((long)pfVar25 - 1U) != pfVar19)
                                {
                                  pfVar23 = (float *)((long)pfVar19 + 1);
                                  if ((pfVar25 != pfVar19) && (pfVar23 != pfVar25)) {
                                    cVar17 = *(code *)pfVar19;
                                    pfVar28 = pfVar19;
                                    pfVar29 = pfVar23;
                                    cVar31 = cVar17;
                                    do {
                                      pfVar33 = (float *)((long)pfVar29 + 1);
                                      pfVar32 = pfVar29;
                                      cVar4 = *(code *)pfVar29;
                                      if ((byte)cVar31 <= (byte)*(code *)pfVar29) {
                                        pfVar32 = pfVar28;
                                        cVar4 = cVar31;
                                      }
                                      cVar31 = cVar4;
                                      pfVar28 = pfVar32;
                                      pfVar29 = pfVar33;
                                    } while (pfVar33 != pfVar25);
                                    if (pfVar32 != pfVar19) {
                                      *(code *)pfVar19 = *(code *)pfVar32;
                                      *(code *)pfVar32 = cVar17;
                                    }
                                  }
                                }
                              }
                              else {
                                pfVar28 = (float *)((long)pfVar23 + (uVar45 >> 1));
                                pfVar29 = (float *)((long)pfVar25 - 1);
                                cVar31 = *(code *)pfVar29;
                                cVar4 = *(code *)pfVar28;
                                cVar17 = cVar4;
                                if ((byte)cVar31 <= (byte)cVar4) {
                                  cVar17 = cVar31;
                                }
                                cVar5 = cVar4;
                                if ((byte)cVar4 <= (byte)cVar31) {
                                  cVar5 = cVar31;
                                }
                                *(code *)pfVar29 = cVar5;
                                *(code *)pfVar28 = cVar17;
                                cVar5 = *(code *)pfVar29;
                                cVar6 = *(code *)pfVar23;
                                cVar17 = cVar5;
                                if ((byte)cVar6 <= (byte)cVar5) {
                                  cVar17 = cVar6;
                                }
                                cVar7 = cVar5;
                                if ((byte)cVar5 <= (byte)cVar6) {
                                  cVar7 = cVar6;
                                }
                                *(code *)pfVar29 = cVar7;
                                cVar7 = *(code *)pfVar28;
                                cVar34 = cVar7;
                                if ((byte)cVar7 <= (byte)cVar17) {
                                  *(code *)pfVar23 = cVar7;
                                  cVar34 = cVar17;
                                }
                                *(code *)pfVar28 = cVar34;
                                uVar30 = (uint)(((byte)cVar31 <= (byte)cVar4 ||
                                                (byte)cVar6 <= (byte)cVar5) ||
                                               (byte)cVar7 <= (byte)cVar17);
                                cVar8 = *(code *)pfVar23;
                                pfVar32 = pfVar29;
                                if ((byte)cVar34 <= (byte)cVar8) {
                                  do {
                                    pfVar32 = (float *)((long)pfVar32 - 1);
                                    if (pfVar32 == pfVar23) {
                                      pfVar28 = (float *)((long)pfVar23 + 1);
                                      pfVar32 = pfVar28;
                                      if ((byte)*(code *)pfVar29 <= (byte)cVar8) goto LAB_1095abb8c;
                                      goto LAB_1095abbd4;
                                    }
                                  } while ((byte)cVar34 <= (byte)*(code *)pfVar32);
                                  *(code *)pfVar23 = *(code *)pfVar32;
                                  *(code *)pfVar32 = cVar8;
                                  uVar30 = 1;
                                  pfVar29 = pfVar32;
                                  if (((byte)cVar31 <= (byte)cVar4 || (byte)cVar6 <= (byte)cVar5) ||
                                      (byte)cVar7 <= (byte)cVar17) {
                                    uVar30 = 2;
                                  }
                                }
                                pfVar32 = (float *)((long)pfVar23 + 1);
                                pfVar14 = pfVar28;
                                pfVar33 = pfVar32;
                                pfVar35 = pfVar32;
                                if (pfVar32 < pfVar29) {
                                  while( true ) {
                                    pfVar28 = pfVar14;
                                    do {
                                      pfVar33 = pfVar35;
                                      pfVar35 = (float *)((long)pfVar33 + 1);
                                      cVar17 = *(code *)pfVar33;
                                    } while ((byte)cVar17 < (byte)*(code *)pfVar28);
                                    do {
                                      pfVar29 = (float *)((long)pfVar29 + -1);
                                    } while ((byte)*(code *)pfVar28 <= (byte)*(code *)pfVar29);
                                    if (pfVar29 <= pfVar33) break;
                                    *(code *)pfVar33 = *(code *)pfVar29;
                                    *(code *)pfVar29 = cVar17;
                                    uVar30 = uVar30 + 1;
                                    pfVar14 = pfVar29;
                                    if (pfVar33 != pfVar28) {
                                      pfVar14 = pfVar28;
                                    }
                                  }
                                }
                                if (pfVar33 != pfVar28) {
                                  cVar17 = *(code *)pfVar33;
                                  if ((byte)*(code *)pfVar28 < (byte)cVar17) {
                                    *(code *)pfVar33 = *(code *)pfVar28;
                                    *(code *)pfVar28 = cVar17;
                                    uVar30 = uVar30 + 1;
                                  }
                                }
                                if (pfVar33 != pfVar19) {
                                  if (uVar30 == 0) {
                                    pfVar28 = pfVar33;
                                    if (pfVar19 < pfVar33) {
                                      do {
                                        if (pfVar32 == pfVar33) goto LAB_1095abd0c;
                                        cVar17 = *(code *)pfVar32;
                                        pcVar16 = (code *)((long)pfVar32 - 1);
                                        pfVar32 = (float *)((long)pfVar32 + 1);
                                      } while ((byte)*pcVar16 <= (byte)cVar17);
                                    }
                                    else {
                                      do {
                                        pfVar29 = (float *)((long)pfVar28 + 1);
                                        if (pfVar29 == pfVar25) goto LAB_1095abd0c;
                                        cVar17 = *(code *)pfVar28;
                                        pfVar28 = pfVar29;
                                      } while ((byte)cVar17 <= (byte)*(code *)pfVar29);
                                    }
                                  }
                                  if (pfVar33 <= pfVar19) {
                                    pfVar23 = (float *)((long)pfVar33 + 1);
                                    pfVar33 = pfVar25;
                                  }
                                  goto LAB_1095abc1c;
                                }
                              }
                            }
                          }
LAB_1095abd0c:
                          *(code *)(plVar48[7] + *(long *)plVar48[0xe] * uVar47 + uVar50) =
                               *(code *)((long)uStack_138 +
                                        ((long)((ulong)(uint)(iVar12 - (iVar12 >> 0x1f)) << 0x20) >>
                                        0x21));
                        }
                      }
                      uVar50 = uVar50 + 1;
                      lVar42 = lVar42 + 1;
                      plVar48 = plStack_3e0;
                    } while (uVar50 != iVar49 - 1);
                  }
                  uVar47 = uVar47 + 1;
                  lVar38 = lVar38 + 1;
                } while (uVar47 != (int)lVar37 - 1);
              }
              if (uStack_138 != (float *)0x0) {
                pfStack_130 = uStack_138;
                __ZdlPv();
              }
            }
            if (*(code *)(param_1 + 99) == (code)0x1) {
              if (plStack_3e0 != (long *)0x0) {
                fVar56 = param_1[100];
                plVar48 = plStack_3e0;
                do {
                  plVar20 = plVar48 + 2;
                  pfStack_400 = (float *)(plVar48 + 5);
                  uStack_3f8 = 0;
                  uStack_408 = (long *)CONCAT44(uStack_408._4_4_,0x1010000);
                  pfVar19 = param_1 + 0x1d0;
                  uStack_138 = (float *)plVar20;
                  FUN_1095b3c7c(pfVar19,plVar20,&UNK_10dd5b8f9,&uStack_138,auStack_438);
                  pfStack_418 = pfVar19 + 10;
                  uStack_410 = 0;
                  auStack_420[0] = 0x1010000;
                  fVar62 = param_1[100];
                  pfVar19 = param_1 + 0x1d0;
                  uStack_138 = (float *)plVar20;
                  FUN_1095b3c7c(pfVar19,plVar20,&UNK_10dd5b8f9,&uStack_138,&uStack_361);
                  pfStack_130 = (float *)(double)fVar62;
                  auStack_438[0] = 0x2010000;
                  pfStack_430 = pfVar19 + 10;
                  uStack_428 = 0;
                  uStack_128 = 0;
                  uStack_138 = (float *)(double)(1.0 - fVar56);
                  FUN_109a91d90();
                  FUN_109a293c4(&uStack_408,auStack_420,auStack_438,pfVar19,0xffffffff,
                                &PTR_FUN_1132e8d50,1,&uStack_138);
                  pfVar19 = param_1 + 0x1d0;
                  uStack_138 = (float *)plVar20;
                  FUN_1095b3c7c(pfVar19,plVar20,&UNK_10dd5b8f9,&uStack_138,&uStack_408);
                  pfVar23 = param_1 + 0x156;
                  uStack_408 = plVar20;
                  FUN_1095b3c7c(pfVar23,plVar20,&UNK_10dd5b8f9,&uStack_408,auStack_420);
                  pfStack_130 = pfVar23 + 10;
                  uStack_138 = (float *)CONCAT44(uStack_138._4_4_,0x2010000);
                  uStack_128 = 0;
                  FUN_109a479a0(pfVar19 + 10,&uStack_138);
                  plVar48 = (long *)*plVar48;
                } while (plVar48 != (long *)0x0);
              }
            }
            else {
              FUN_1095b3bdc(param_1 + 0x156,&dStack_3f0);
            }
            pdVar22 = &dStack_3f0;
            FUN_1094c8830();
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
          dStack_3f0 = (double)((long)pdVar22 - (long)pfVar39) / 1000000000.0;
          pfVar39 = param_1 + 0xa0;
          FUN_1095b14e0(pfVar39,&dStack_3f0);
          if (lStack_390 != 0) {
            piVar1 = (int *)(lStack_390 + 0x14);
            do {
              iVar49 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar49 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar49 + -1 == 0) {
              pfVar39 = (float *)&uStack_3c8;
              func_0x000109a848d4();
            }
          }
          lStack_390 = 0;
          uStack_3b0 = 0;
          uStack_3ac = 0;
          uStack_3b8 = 0;
          uStack_3b4 = 0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          uStack_3a8 = 0;
          uStack_3a4 = 0;
          if (0 < (int)uStack_3c8._4_4_) {
            lVar37 = 0;
            do {
              *(undefined4 *)((long)puStack_388 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)uStack_3c8._4_4_);
          }
          if (plStack_380 != &lStack_378 && plStack_380 != (long *)0x0) {
            pfVar39 = (float *)plStack_380[-1];
            _free();
          }
          if (lStack_220 != 0) {
            piVar1 = (int *)(lStack_220 + 0x14);
            do {
              iVar49 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar49 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar49 + -1 == 0) {
              pfVar39 = &fStack_258;
              func_0x000109a848d4();
            }
          }
          lStack_220 = 0;
          iStack_240 = 0;
          uStack_23c = 0;
          uStack_248 = 0;
          uStack_244 = 0;
          uStack_230 = 0;
          uStack_22c = 0;
          uStack_238 = 0;
          uStack_234 = 0;
          if (0 < (int)fStack_254) {
            lVar37 = 0;
            do {
              puStack_218[lVar37] = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)fStack_254);
          }
          if (plStack_210 != &lStack_208 && plStack_210 != (long *)0x0) {
            pfVar39 = (float *)plStack_210[-1];
            _free();
          }
          if (lStack_1c0 != 0) {
            piVar1 = (int *)(lStack_1c0 + 0x14);
            do {
              iVar49 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar49 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar49 + -1 == 0) {
              pfVar39 = &fStack_1f8;
              func_0x000109a848d4();
            }
          }
          lStack_1c0 = 0;
          iStack_1e0 = 0;
          uStack_1dc = 0;
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0;
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          if (0 < (int)fStack_1f4) {
            lVar37 = 0;
            do {
              puStack_1b8[lVar37] = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)fStack_1f4);
          }
          if (plStack_1b0 != &lStack_1a8 && plStack_1b0 != (long *)0x0) {
            pfVar39 = (float *)plStack_1b0[-1];
            _free();
          }
          if (lStack_160 != 0) {
            piVar1 = (int *)(lStack_160 + 0x14);
            do {
              iVar49 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar49 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar49 + -1 == 0) {
              pfVar39 = (float *)&uStack_198;
              func_0x000109a848d4();
            }
          }
          lStack_160 = 0;
          uStack_180 = 0;
          iStack_17c = 0;
          uStack_188 = 0;
          iStack_184 = 0;
          uStack_170._0_4_ = 0;
          uStack_170._4_4_ = 0;
          uStack_178._0_4_ = 0;
          uStack_178._4_4_ = 0;
          if (0 < (int)uStack_198._4_4_) {
            lVar37 = 0;
            do {
              *(undefined4 *)((long)plStack_158 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)uStack_198._4_4_);
          }
          if (plStack_150 != &lStack_148 && plStack_150 != (long *)0x0) {
            pfVar39 = (float *)plStack_150[-1];
            _free();
          }
          if (pcStack_e8 != (code *)0x0) {
            piVar1 = (int *)((long)pcStack_e8 + 0x14);
            do {
              iVar49 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar49 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar49 + -1 == 0) {
              pfVar39 = (float *)&uStack_120;
              func_0x000109a848d4();
            }
          }
          pcStack_e8 = (code *)0x0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_110._0_4_ = 0;
          uStack_110._4_4_ = 0;
          uStack_f8._0_4_ = 0;
          uStack_f8._4_4_ = 0;
          uStack_100._0_4_ = 0;
          uStack_100._4_4_ = 0;
          if (0 < (int)uStack_120._4_4_) {
            lVar37 = 0;
            do {
              *(undefined4 *)(pcStack_e0 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)uStack_120._4_4_);
          }
          if (ppcStack_d8 != &pcStack_d0 && ppcStack_d8 != (code **)0x0) {
            pfVar39 = (float *)ppcStack_d8[-1];
            _free();
          }
          if (pcStack_328 != (code *)0x0) {
            piVar1 = (int *)((long)pcStack_328 + 0x14);
            do {
              iVar49 = *piVar1;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = iVar49 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar49 + -1 == 0) {
              pfVar39 = (float *)&uStack_360;
              func_0x000109a848d4();
            }
          }
          pcStack_328 = (code *)0x0;
          uStack_348._0_4_ = 0.0;
          uStack_348._4_4_ = 0;
          uStack_350._0_4_ = 0;
          uStack_350._4_4_ = 0;
          uStack_338._0_4_ = 0;
          uStack_338._4_4_ = 0;
          uStack_340._0_4_ = 0;
          uStack_340._4_4_ = 0;
          if (0 < (int)uStack_360._4_4_) {
            lVar37 = 0;
            do {
              *(undefined4 *)(pcStack_320 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < (int)uStack_360._4_4_);
          }
          uStack_190 = (float *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
          pdVar22 = (double *)CONCAT44(uStack_120._4_4_,(float)uStack_120);
          uStack_118 = (float *)CONCAT44(uStack_118._4_4_,(int)uStack_118);
          uStack_358 = (double *)CONCAT44(uStack_358._4_4_,(int)uStack_358);
          uStack_198 = (undefined4 *)CONCAT44(uStack_198._4_4_,(float)uStack_198);
          uStack_110 = (float *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
          uStack_f8 = (float *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
          if (ppcStack_318 != &pcStack_310 && ppcStack_318 != (code **)0x0) {
            pfVar39 = (float *)ppcStack_318[-1];
            _free();
            pdVar22 = (double *)CONCAT44(uStack_120._4_4_,(float)uStack_120);
          }
          goto LAB_1095a9eac;
        }
      }
      else {
        fVar62 = param_1[0x1dc];
      }
      uStack_360._0_4_ = fVar62;
      uStack_360._4_4_ = fVar56;
      if ((((2 < (int)param_1[0x1a1]) || (param_1[0x1a2] != (float)uStack_360)) ||
          (param_1[0x1a3] != fVar56)) ||
         ((((uint)param_1[0x1a0] & 0xfff) != 5 || (*(long *)(param_1 + 0x1a4) == 0)))) {
        FUN_109a83fd0(param_1 + 0x1a0,2,&uStack_360,5);
        uStack_360._0_4_ = param_1[0x1dc];
        uStack_360._4_4_ = param_1[0x1dd];
      }
      if (((2 < (int)param_1[0x1b9]) || (param_1[0x1ba] != (float)uStack_360)) ||
         ((param_1[0x1bb] != uStack_360._4_4_ ||
          ((((uint)param_1[0x1b8] & 0xfff) != 5 ||
           (fVar56 = uStack_360._4_4_, fVar62 = (float)uStack_360, *(long *)(param_1 + 0x1bc) == 0))
          )))) {
        FUN_109a83fd0(param_1 + 0x1b8,2,&uStack_360,5);
        fVar56 = param_1[0x1dd];
        fVar62 = param_1[0x1dc];
      }
      uStack_358._0_4_ = 0;
      uStack_358._4_4_ = 0;
      uStack_360._0_4_ = 0.0;
      uStack_360._4_4_ = 0.0;
      pfVar39 = (float *)**(long **)(param_1 + 0x19e);
      FUN_1095306e0(pfVar39,*(undefined8 *)(param_1 + 0x1de),fVar56,fVar62,0,&uStack_360);
      pdVar22 = uStack_120;
    }
    else {
      param_1[0x197] = 0.0;
      *(code *)(param_1 + 0x198) = (code)0x1;
      param_1[0x19a] = 0.0;
      param_1[0x19b] = 0.0;
    }
LAB_1095a9eac:
    pfVar19 = param_1 + 0x124;
    plVar48 = *(long **)(param_1 + 0x124);
    uStack_120 = pdVar22;
    if (plVar48 != (long *)0x0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_360._0_4_ = SUB84(pfVar39,0);
      uStack_360._4_4_ = (float)((ulong)pfVar39 >> 0x20);
      FUN_1093f25b0(plVar48,&uStack_360);
      if ((int)plVar48 == 0) {
        func_0x000108820c58(pfVar19);
        plVar48 = *(long **)pfVar19;
        pfVar19[0] = 0.0;
        pfVar19[1] = 0.0;
        if (plVar48 == (long *)0x0) goto LAB_1095a9f20;
        plVar20 = plVar48 + 1;
        do {
          lVar37 = *plVar20;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = lVar37 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar37 == 0) {
          (**(code **)(*plVar48 + 0x10))();
        }
      }
      if (*(long *)pfVar19 == 0) goto LAB_1095a9f20;
LAB_1095aab58:
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_360 = (double *)((double)((long)plVar48 - (long)pfVar18) / 1000000000.0);
      FUN_1095b14e0(param_1 + 0xb0,&uStack_360);
      goto LAB_1095aab84;
    }
LAB_1095a9f20:
    plVar48 = *(long **)(param_1 + 2);
    if (plVar48 != (long *)0x0) {
      uVar58 = *(undefined8 *)param_1;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar48 != (long *)0x0) {
        plVar20 = plVar48 + 2;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar21 = plVar48 + 1;
        do {
          lVar37 = *plVar21;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = lVar37 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar37 == 0) {
          (**(code **)(*plVar48 + 0x10))(plVar48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar48);
        }
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        __ZNSt3__15mutex4lockEv(param_1 + 0x126);
        param_1[0x4b] = 5.60519e-45;
        __ZNSt3__15mutex6unlockEv(param_1 + 0x126);
        pdVar22 = (double *)CONCAT44(uStack_360._4_4_,(float)uStack_360);
        if (*(long *)(param_1 + 0xf8) != *(long *)(param_1 + 0xfa)) {
          uStack_118._0_4_ = 0;
          uStack_118._4_4_ = 0;
          uStack_120._0_4_ = 0.0;
          uStack_120._4_4_ = 0.0;
          uStack_110._0_4_ = 0;
          uStack_110._4_4_ = 0;
          FUN_10955a6c4(&uStack_120,
                        (*(long *)(param_1 + 0xfa) - *(long *)(param_1 + 0xf8) >> 3) *
                        -0x5555555555555555);
          pdVar36 = (double *)CONCAT44(uStack_360._4_4_,(float)uStack_360);
          pfVar39 = (float *)CONCAT44(uStack_348._4_4_,(float)uStack_348);
          pdVar22 = (double *)CONCAT44(uStack_350._4_4_,(undefined4)uStack_350);
          puVar40 = (undefined8 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
          lVar37 = *(long *)(param_1 + 0xf8);
          if (*(long *)(param_1 + 0xfa) != lVar37) {
            uVar47 = 0;
            puVar26 = uStack_198;
            do {
              pfVar23 = param_1 + 0x160;
              uStack_340 = puVar40;
              uStack_198 = puVar26;
              uStack_350 = pdVar22;
              uStack_348 = pfVar39;
              uStack_360 = pdVar36;
              FUN_1095b41e4(pfVar23,lVar37 + uVar47 * 0x18);
              if (pfVar23 == (float *)0x0) {
                FUN_1095af460(&uStack_360,param_1,*(long *)(param_1 + 0xf8) + uVar47 * 0x18);
                pfVar39 = (float *)CONCAT44(uStack_118._4_4_,(int)uStack_118);
                if (pfVar39 < uStack_110) {
                  FUN_10938f0d4(pfVar39,&uStack_360);
                  pfVar39 = pfVar39 + 0x18;
                }
                else {
                  pfVar39 = (float *)&uStack_120;
                  FUN_10938efac(pfVar39,&uStack_360);
                }
                uStack_118._0_4_ = (int)pfVar39;
                uStack_118._4_4_ = (int)((ulong)pfVar39 >> 0x20);
                pdVar36 = uStack_360;
                if (pcStack_328 != (code *)0x0) {
                  pcVar16 = pcStack_328 + 0x14;
                  do {
                    iVar49 = *(int *)pcVar16;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                    if (bVar11) {
                      *(int *)pcVar16 = iVar49 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (iVar49 + -1 == 0) {
                    func_0x000109a848d4(&uStack_360);
                    pdVar36 = uStack_360;
                  }
                }
                uStack_360._4_4_ = (float)((ulong)pdVar36 >> 0x20);
                pcStack_328 = (code *)0x0;
                uStack_348._0_4_ = 0.0;
                uStack_348._4_4_ = 0;
                pfVar39 = (float *)0x0;
                uStack_350._0_4_ = 0;
                uStack_350._4_4_ = 0;
                pdVar22 = (double *)0x0;
                uStack_338._0_4_ = 0;
                uStack_338._4_4_ = 0;
                uStack_340._0_4_ = 0;
                uStack_340._4_4_ = 0;
                puVar40 = (undefined8 *)0x0;
                if (0 < (int)uStack_360._4_4_) {
                  lVar37 = 0;
                  do {
                    *(undefined4 *)(pcStack_320 + lVar37 * 4) = 0;
                    lVar37 = lVar37 + 1;
                  } while (lVar37 < (int)uStack_360._4_4_);
                }
                puVar26 = uStack_198;
                if (ppcStack_318 != &pcStack_310 && ppcStack_318 != (code **)0x0) {
                  uStack_360 = pdVar36;
                  _free(ppcStack_318[-1]);
                  pfVar39 = (float *)CONCAT44(uStack_348._4_4_,(float)uStack_348);
                  pdVar22 = (double *)CONCAT44(uStack_350._4_4_,(undefined4)uStack_350);
                  puVar40 = (undefined8 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
                  puVar26 = uStack_198;
                  pdVar36 = uStack_360;
                }
              }
              else {
                pfVar39 = (float *)CONCAT44(uStack_118._4_4_,(int)uStack_118);
                if (pfVar39 < uStack_110) {
                  func_0x0001095b157c(pfVar39,pfVar23 + 10);
                  pfVar39 = pfVar39 + 0x18;
                }
                else {
                  lVar37 = (long)pfVar39 - (long)uStack_120;
                  uVar50 = (lVar37 >> 5) * -0x5555555555555555 + 1;
                  if (0x2aaaaaaaaaaaaaa < uVar50) {
                    FUN_10937026c();
                    goto LAB_1095ac340;
                  }
                  lVar38 = (long)uStack_110 - (long)uStack_120 >> 5;
                  uVar45 = lVar38 * 0x5555555555555556;
                  if (uVar45 < uVar50 || uVar45 - uVar50 == 0) {
                    uVar45 = uVar50;
                  }
                  if (0x155555555555554 < (ulong)(lVar38 * -0x5555555555555555)) {
                    uVar45 = 0x2aaaaaaaaaaaaaa;
                  }
                  uStack_340 = &uStack_120;
                  if (uVar45 == 0) {
                    puVar40 = (undefined8 *)0x0;
                  }
                  else {
                    puVar40 = &uStack_120;
                    FUN_109370280();
                  }
                  lVar37 = (long)puVar40 + lVar37;
                  uStack_360._0_4_ = SUB84(puVar40,0);
                  uStack_360._4_4_ = (float)((ulong)puVar40 >> 0x20);
                  uStack_348 = (float *)(puVar40 + uVar45 * 0xc);
                  uStack_358 = (double *)lVar37;
                  uStack_350 = (double *)lVar37;
                  func_0x0001095b157c(lVar37,pfVar23 + 10);
                  uStack_350 = (double *)(lVar37 + 0x60);
                  pdVar22 = (double *)
                            ((long)uStack_120 +
                            (lVar37 - CONCAT44(uStack_118._4_4_,(int)uStack_118)));
                  FUN_10938f158(&uStack_120,uStack_120,CONCAT44(uStack_118._4_4_,(int)uStack_118),
                                pdVar22);
                  pfVar39 = (float *)uStack_350;
                  uStack_118 = (float *)uStack_350;
                  pfVar23 = uStack_348;
                  uStack_350 = uStack_120;
                  uStack_348 = uStack_110;
                  uStack_358 = uStack_120;
                  uStack_360 = uStack_120;
                  FUN_10919d9fc(&uStack_360);
                  uStack_120 = pdVar22;
                  uStack_110 = pfVar23;
                }
                uStack_118._0_4_ = (int)pfVar39;
                uStack_118._4_4_ = (int)((ulong)pfVar39 >> 0x20);
                puVar40 = uStack_340;
                puVar26 = uStack_198;
                pdVar22 = uStack_350;
                pfVar39 = uStack_348;
                pdVar36 = uStack_360;
              }
              uStack_360._4_4_ = (float)((ulong)pdVar36 >> 0x20);
              uStack_198._4_4_ = (float)((ulong)puVar26 >> 0x20);
              uVar47 = (ulong)((int)uVar47 + 1);
              lVar37 = *(long *)(param_1 + 0xf8);
              uVar50 = (*(long *)(param_1 + 0xfa) - lVar37 >> 3) * -0x5555555555555555;
            } while (uVar47 <= uVar50 && uVar50 - uVar47 != 0);
          }
          uStack_350._0_4_ = 0;
          uStack_350._4_4_ = 0;
          uStack_360._0_4_ = 2.4428242e-38;
          uStack_190 = param_1 + 0x28a;
          uStack_198._0_4_ = 9.477423e-38;
          uStack_188 = 0;
          iStack_184 = 0;
          uStack_340 = puVar40;
          uStack_358 = (double *)&uStack_120;
          uStack_348 = pfVar39;
          FUN_109a3ecac(&uStack_360,&uStack_198);
          uStack_360 = (double *)&uStack_120;
          FUN_1093702c4(&uStack_360);
          pdVar22 = uStack_360;
        }
        uStack_360._4_4_ = (float)((ulong)pdVar22 >> 0x20);
        if (*(code *)(param_1 + 0x57) != (code)0x1) {
          puVar40 = (undefined8 *)0x20;
          uStack_360 = pdVar22;
          __Znwm();
          *puVar40 = &PTR_FUN_110afdf68;
          puVar40[1] = param_1;
          puVar40[2] = uVar58;
          puVar40[3] = plVar48;
          uStack_180 = SUB84(puVar40,0);
          iStack_17c = (int)((ulong)puVar40 >> 0x20);
          puVar40 = (undefined8 *)0x90;
          __Znwm();
          puVar40[2] = 0;
          puVar40[3] = 0x32aaaba7;
          puVar40[5] = 0;
          puVar40[4] = 0;
          puVar40[7] = 0;
          puVar40[6] = 0;
          puVar40[9] = 0;
          puVar40[8] = 0;
          puVar40[10] = 0;
          puVar40[0xb] = 0x3cb0b1bb;
          puVar40[0xd] = 0;
          puVar40[0xc] = 0;
          puVar40[0xf] = 0;
          puVar40[0xe] = 0;
          *(undefined8 *)((long)puVar40 + 0x84) = 0;
          *(undefined8 *)((long)puVar40 + 0x7c) = 0;
          *puVar40 = &PTR_DAT_110a75108;
          puVar40[1] = 0;
          uStack_178._0_4_ = SUB84(puVar40,0);
          uStack_178._4_4_ = (undefined4)((ulong)puVar40 >> 0x20);
          pcVar16 = (code *)((ulong)&uStack_4a0 | 8);
          uStack_498 = *(undefined8 *)(param_1 + 0x2c6);
          uStack_4a0 = *(ulong *)(param_1 + 0x2c4);
          fVar56 = param_1[0x2c5];
          uStack_488 = *(undefined8 *)(param_1 + 0x2ca);
          uStack_490 = *(undefined8 *)(param_1 + 0x2c8);
          uStack_478 = *(undefined8 *)(param_1 + 0x2ce);
          uStack_480 = *(undefined8 *)(param_1 + 0x2cc);
          pcStack_468 = *(code **)(param_1 + 0x2d2);
          uStack_470 = *(undefined8 *)(param_1 + 0x2d0);
          pcStack_450 = (code *)0x0;
          uStack_448 = 0;
          if (*(long *)(param_1 + 0x2d2) != 0) {
            piVar1 = (int *)(*(long *)(param_1 + 0x2d2) + 0x14);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = *piVar1 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            fVar56 = param_1[0x2c5];
          }
          pcStack_460 = pcVar16;
          ppcStack_458 = &pcStack_450;
          if ((int)fVar56 < 3) {
            pcStack_450 = (code *)**(undefined8 **)(param_1 + 0x2d6);
            uStack_448 = (*(undefined8 **)(param_1 + 0x2d6))[1];
          }
          else {
            uStack_4a0 = uStack_4a0 & 0xffffffff;
            func_0x000109a84868(&uStack_4a0,param_1 + 0x2c4);
          }
          uStack_4f8 = *(undefined8 *)(param_1 + 0x28c);
          uStack_500 = *(ulong *)(param_1 + 0x28a);
          pcVar41 = (code *)((ulong)&uStack_500 | 8);
          fVar56 = param_1[0x28b];
          uStack_4e8 = *(undefined8 *)(param_1 + 0x290);
          uStack_4f0 = *(undefined8 *)(param_1 + 0x28e);
          uStack_4d8 = *(undefined8 *)(param_1 + 0x294);
          uStack_4e0 = *(undefined8 *)(param_1 + 0x292);
          uStack_4d0 = *(undefined8 *)(param_1 + 0x296);
          pcStack_4c8 = *(code **)(param_1 + 0x298);
          pcStack_4b0 = (code *)0x0;
          uStack_4a8 = 0;
          if (pcStack_4c8 != (code *)0x0) {
            pcVar2 = pcStack_4c8 + 0x14;
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar11) {
                *(int *)pcVar2 = *(int *)pcVar2 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            fVar56 = param_1[0x28b];
          }
          pcStack_4c0 = pcVar41;
          ppcStack_4b8 = &pcStack_4b0;
          if ((int)fVar56 < 3) {
            pcStack_4b0 = (code *)**(undefined8 **)(param_1 + 0x29c);
            uStack_4a8 = (*(undefined8 **)(param_1 + 0x29c))[1];
          }
          else {
            uStack_500 = uStack_500 & 0xffffffff;
            func_0x000109a84868(&uStack_500);
          }
          lVar37 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
          if (lVar37 == 0) {
            uVar58 = 3;
          }
          else {
            if ((*(byte *)(lVar37 + 0x88) & 1) == 0) {
              uStack_360._0_4_ = 0.0;
              uStack_360._4_4_ = 0.0;
              lVar37 = *(long *)(lVar37 + 0x10);
              __ZNSt13exception_ptrD1Ev(&uStack_360);
              if (lVar37 != 0) goto LAB_1095ac248;
              puVar40 = (undefined8 *)((ulong)&uStack_4a0 | 4);
              pcStack_320 = (code *)((ulong)&uStack_360 | 8);
              uStack_358._0_4_ = (int)uStack_498;
              uStack_358._4_4_ = (int)((ulong)uStack_498 >> 0x20);
              uStack_360._0_4_ = (float)uStack_4a0;
              uStack_348._0_4_ = (float)uStack_488;
              uStack_348._4_4_ = (int)((ulong)uStack_488 >> 0x20);
              uStack_350._0_4_ = (undefined4)uStack_490;
              uStack_350._4_4_ = (int)((ulong)uStack_490 >> 0x20);
              uStack_338._0_4_ = (undefined4)uStack_478;
              uStack_338._4_4_ = (undefined4)((ulong)uStack_478 >> 0x20);
              uStack_340._0_4_ = (undefined4)uStack_480;
              uStack_340._4_4_ = (undefined4)((ulong)uStack_480 >> 0x20);
              pcStack_328 = pcStack_468;
              uStack_330 = (undefined4)uStack_470;
              uStack_32c = (undefined4)((ulong)uStack_470 >> 0x20);
              pcStack_308 = (code *)0x0;
              pcStack_310 = (code *)0x0;
              if ((int)uStack_4a0._4_4_ < 3) {
                pcStack_310 = *ppcStack_458;
                pcStack_308 = ppcStack_458[1];
                ppcStack_318 = &pcStack_310;
              }
              else {
                ppcStack_318 = ppcStack_458;
                pcStack_320 = pcStack_460;
                pcStack_460 = pcVar16;
                ppcStack_458 = &pcStack_450;
              }
              uStack_4a0 = CONCAT44(uStack_4a0._4_4_,0x42ff0000);
              puVar46 = (undefined8 *)((ulong)&uStack_500 | 4);
              puVar40[1] = 0;
              *puVar40 = 0;
              puVar40[3] = 0;
              puVar40[2] = 0;
              puVar40[5] = 0;
              puVar40[4] = 0;
              *(undefined8 *)((long)puVar40 + 0x34) = 0;
              *(undefined8 *)((long)puVar40 + 0x2c) = 0;
              pcStack_e0 = (code *)((ulong)&uStack_120 | 8);
              uStack_118._0_4_ = (int)uStack_4f8;
              uStack_118._4_4_ = (int)((ulong)uStack_4f8 >> 0x20);
              uStack_120._0_4_ = (float)uStack_500;
              uStack_108 = (undefined4)uStack_4e8;
              uStack_104 = (undefined4)((ulong)uStack_4e8 >> 0x20);
              uStack_110._0_4_ = (undefined4)uStack_4f0;
              uStack_110._4_4_ = (undefined4)((ulong)uStack_4f0 >> 0x20);
              uStack_f8._0_4_ = (undefined4)uStack_4d8;
              uStack_f8._4_4_ = (undefined4)((ulong)uStack_4d8 >> 0x20);
              uStack_100._0_4_ = (undefined4)uStack_4e0;
              uStack_100._4_4_ = (undefined4)((ulong)uStack_4e0 >> 0x20);
              pcStack_e8 = pcStack_4c8;
              uStack_f0 = (undefined4)uStack_4d0;
              uStack_ec = (undefined4)((ulong)uStack_4d0 >> 0x20);
              pcStack_c8 = (code *)0x0;
              pcStack_d0 = (code *)0x0;
              if (uStack_500._4_4_ < 3) {
                pcStack_d0 = *ppcStack_4b8;
                pcStack_c8 = ppcStack_4b8[1];
                ppcStack_d8 = &pcStack_d0;
              }
              else {
                ppcStack_d8 = ppcStack_4b8;
                pcStack_e0 = pcStack_4c0;
                pcStack_4c0 = pcVar41;
                ppcStack_4b8 = &pcStack_4b0;
              }
              uStack_500 = CONCAT44(uStack_500._4_4_,0x42ff0000);
              puVar46[1] = 0;
              *puVar46 = 0;
              puVar46[3] = 0;
              puVar46[2] = 0;
              puVar46[5] = 0;
              puVar46[4] = 0;
              *(undefined8 *)((long)puVar46 + 0x34) = 0;
              *(undefined8 *)((long)puVar46 + 0x2c) = 0;
              fStack_258 = 0.0;
              plVar20 = (long *)CONCAT44(iStack_17c,uStack_180);
              uStack_360._4_4_ = uStack_4a0._4_4_;
              uStack_120._4_4_ = (float)uStack_500._4_4_;
              (**(code **)(*plVar20 + 0x28))(plVar20,&fStack_258,&uStack_360,&uStack_120);
              fStack_1f8 = (float)CONCAT31(fStack_1f8._1_3_,(char)plVar20);
              if (CONCAT44(uStack_178._4_4_,(undefined4)uStack_178) == 0) {
                FUN_1094362d4(3);
                goto LAB_1095ac340;
              }
              func_0x000108820be4(CONCAT44(uStack_178._4_4_,(undefined4)uStack_178),&fStack_1f8);
              if (pcStack_e8 != (code *)0x0) {
                pcVar16 = pcStack_e8 + 0x14;
                do {
                  iVar49 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar49 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar49 + -1 == 0) {
                  func_0x000109a848d4(&uStack_120);
                }
              }
              pcStack_e8 = (code *)0x0;
              uStack_108 = 0;
              uStack_104 = 0;
              uStack_110._0_4_ = 0;
              uStack_110._4_4_ = 0;
              uStack_f8._0_4_ = 0;
              uStack_f8._4_4_ = 0;
              uStack_100._0_4_ = 0;
              uStack_100._4_4_ = 0;
              if (0 < (int)uStack_120._4_4_) {
                lVar37 = 0;
                do {
                  *(undefined4 *)(pcStack_e0 + lVar37 * 4) = 0;
                  lVar37 = lVar37 + 1;
                } while (lVar37 < (int)uStack_120._4_4_);
              }
              if (ppcStack_d8 != &pcStack_d0 && ppcStack_d8 != (code **)0x0) {
                _free(ppcStack_d8[-1]);
              }
              if (pcStack_328 != (code *)0x0) {
                pcVar16 = pcStack_328 + 0x14;
                do {
                  iVar49 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar49 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar49 + -1 == 0) {
                  func_0x000109a848d4(&uStack_360);
                }
              }
              pcStack_328 = (code *)0x0;
              uStack_348._0_4_ = 0.0;
              uStack_348._4_4_ = 0;
              uStack_350._0_4_ = 0;
              uStack_350._4_4_ = 0;
              uStack_338._0_4_ = 0;
              uStack_338._4_4_ = 0;
              uStack_340._0_4_ = 0;
              uStack_340._4_4_ = 0;
              if (0 < (int)uStack_360._4_4_) {
                lVar37 = 0;
                do {
                  *(undefined4 *)(pcStack_320 + lVar37 * 4) = 0;
                  lVar37 = lVar37 + 1;
                } while (lVar37 < (int)uStack_360._4_4_);
              }
              if (ppcStack_318 != &pcStack_310 && ppcStack_318 != (code **)0x0) {
                _free(ppcStack_318[-1]);
              }
              if (pcStack_4c8 != (code *)0x0) {
                pcVar16 = pcStack_4c8 + 0x14;
                do {
                  iVar49 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar49 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar49 + -1 == 0) {
                  func_0x000109a848d4(&uStack_500);
                }
              }
              pcStack_4c8 = (code *)0x0;
              uStack_4e8 = 0;
              uStack_4f0 = 0;
              uStack_4d8 = 0;
              uStack_4e0 = 0;
              if (0 < uStack_500._4_4_) {
                lVar37 = 0;
                do {
                  *(undefined4 *)(pcStack_4c0 + lVar37 * 4) = 0;
                  lVar37 = lVar37 + 1;
                } while (lVar37 < uStack_500._4_4_);
              }
              if (ppcStack_4b8 != &pcStack_4b0 && ppcStack_4b8 != (code **)0x0) {
                _free(ppcStack_4b8[-1]);
              }
              if (pcStack_468 != (code *)0x0) {
                pcVar16 = pcStack_468 + 0x14;
                do {
                  iVar49 = *(int *)pcVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
                  if (bVar11) {
                    *(int *)pcVar16 = iVar49 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar49 + -1 == 0) {
                  func_0x000109a848d4(&uStack_4a0);
                }
              }
              pcStack_468 = (code *)0x0;
              uStack_488 = 0;
              uStack_490 = 0;
              uStack_478 = 0;
              uStack_480 = 0;
              if (0 < (int)uStack_4a0._4_4_) {
                lVar37 = 0;
                do {
                  *(undefined4 *)(pcStack_460 + lVar37 * 4) = 0;
                  lVar37 = lVar37 + 1;
                } while (lVar37 < (int)uStack_4a0._4_4_);
              }
              if (ppcStack_458 != &pcStack_450 && ppcStack_458 != (code **)0x0) {
                _free(ppcStack_458[-1]);
              }
              lVar37 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
              if (lVar37 == 0) {
                FUN_1094362d4(3);
                goto LAB_1095ac340;
              }
              FUN_1094a4db4(lVar37);
              plVar20 = *(long **)pfVar19;
              *(long *)pfVar19 = lVar37;
              if (plVar20 != (long *)0x0) {
                plVar21 = plVar20 + 1;
                do {
                  lVar37 = *plVar21;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar11) {
                    *plVar21 = lVar37 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar37 == 0) {
                  (**(code **)(*plVar20 + 0x10))();
                }
              }
              func_0x000107c29c1c(&uStack_178);
              plVar20 = (long *)CONCAT44(iStack_17c,uStack_180);
              if (plVar20 == &uStack_198) {
                lVar37 = 0x18;
LAB_1095aab44:
                (**(code **)(*plVar20 + lVar37))();
              }
              else if (plVar20 != (long *)0x0) {
                lVar37 = 0x20;
                goto LAB_1095aab44;
              }
              goto LAB_1095aab50;
            }
LAB_1095ac248:
            uVar58 = 2;
          }
          FUN_1094362d4(uVar58);
          goto LAB_1095ac340;
        }
        puVar46 = *(undefined8 **)(param_1 + 0x122);
        uStack_120._0_4_ = 127.5;
        pcVar16 = (code *)((ulong)&uStack_120 | 8);
        uStack_118._4_4_ = 0;
        uStack_110._0_4_ = 0;
        uStack_120._4_4_ = 0.0;
        uStack_118._0_4_ = 0;
        uStack_104 = 0;
        uStack_100._0_4_ = 0;
        uStack_110._4_4_ = 0;
        uStack_108 = 0;
        uStack_f8._4_4_ = 0;
        uStack_100._4_4_ = 0;
        uStack_f8._0_4_ = 0;
        pcStack_e8 = (code *)0x0;
        uStack_f0 = 0;
        uStack_ec = 0;
        pcStack_c8 = (code *)0x0;
        pcStack_d0 = (code *)0x0;
        uStack_360._0_4_ = 9.477423e-38;
        uStack_350._0_4_ = 0;
        uStack_350._4_4_ = 0;
        pcStack_e0 = pcVar16;
        ppcStack_d8 = &pcStack_d0;
        uStack_358 = (double *)&uStack_120;
        FUN_109a479a0(param_1 + 0x2c4,&uStack_360);
        puVar40 = (undefined8 *)((ulong)&uStack_120 | 4);
        uStack_190 = (float *)&uStack_198;
        uStack_198._0_4_ = 0.0;
        uStack_198._4_4_ = 0.0;
        uStack_188 = 0x2000000;
        iStack_184 = 0x50;
        uStack_180 = 0x95b42c8;
        iStack_17c = 1;
        uStack_178._0_4_ = 0x95b433c;
        uStack_178._4_4_ = 1;
        uStack_360._0_4_ = SUB84(param_1,0);
        uStack_360._4_4_ = (float)((ulong)param_1 >> 0x20);
        uStack_358._0_4_ = (int)uVar58;
        uStack_358._4_4_ = (int)((ulong)uVar58 >> 0x20);
        pcStack_308 = (code *)&uStack_340;
        pcStack_320 = (code *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
        pcStack_328 = (code *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
        uStack_340._0_4_ = (int)uStack_118;
        uStack_340._4_4_ = uStack_118._4_4_;
        uStack_348._0_4_ = (float)uStack_120;
        uStack_348._4_4_ = (int)uStack_120._4_4_;
        uStack_330 = uStack_108;
        uStack_32c = uStack_104;
        uStack_338._0_4_ = (undefined4)uStack_110;
        uStack_338._4_4_ = uStack_110._4_4_;
        ppcStack_318 = (code **)CONCAT44(uStack_ec,uStack_f0);
        pcStack_310 = pcStack_e8;
        uStack_350._0_4_ = SUB84(plVar48,0);
        uStack_350._4_4_ = (int)((ulong)plVar48 >> 0x20);
        ppcStack_300 = &pcStack_2f8;
        ppuStack_2f0 = (undefined **)0x0;
        pcStack_2f8 = (code *)0x0;
        if ((int)uStack_120._4_4_ < 3) {
          pcStack_2f8 = *ppcStack_d8;
          ppuStack_2f0 = (undefined **)ppcStack_d8[1];
        }
        else {
          ppcStack_300 = ppcStack_d8;
          pcStack_308 = pcStack_e0;
          pcStack_e0 = pcVar16;
          ppcStack_d8 = &pcStack_d0;
        }
        uStack_120._0_4_ = 127.5;
        puVar40[1] = 0;
        *puVar40 = 0;
        puVar40[3] = 0;
        puVar40[2] = 0;
        puVar40[5] = 0;
        puVar40[4] = 0;
        *(undefined8 *)((long)puVar40 + 0x34) = 0;
        *(undefined8 *)((long)puVar40 + 0x2c) = 0;
        puStack_2a8 = &uStack_2e0;
        uStack_2e0 = *(undefined8 *)(param_1 + 0x28c);
        uStack_2e8 = *(ulong *)(param_1 + 0x28a);
        fVar56 = param_1[0x28b];
        uStack_2d0 = *(undefined8 *)(param_1 + 0x290);
        uStack_2d8 = *(undefined8 *)(param_1 + 0x28e);
        uStack_2c0 = *(undefined8 *)(param_1 + 0x294);
        uStack_2c8 = *(undefined8 *)(param_1 + 0x292);
        uStack_2b8 = *(undefined8 *)(param_1 + 0x296);
        lStack_2b0 = *(long *)(param_1 + 0x298);
        puStack_2a0 = &uStack_298;
        uStack_290 = 0;
        uStack_298 = 0;
        if (lStack_2b0 != 0) {
          piVar1 = (int *)(lStack_2b0 + 0x14);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          fVar56 = param_1[0x28b];
        }
        if ((int)fVar56 < 3) {
          uStack_298 = **(undefined8 **)(param_1 + 0x29c);
          uStack_290 = (*(undefined8 **)(param_1 + 0x29c))[1];
        }
        else {
          uStack_2e8 = uStack_2e8 & 0xffffffff;
          func_0x000109a84868(&uStack_2e8);
        }
        plStack_158 = (long *)0x0;
        plVar20 = (long *)0xe0;
        __Znwm();
        FUN_1095b4448();
        plVar21 = (long *)0x90;
        plStack_158 = plVar20;
        __Znwm();
        plVar21[2] = 0;
        plVar21[3] = 0x32aaaba7;
        plVar21[5] = 0;
        plVar21[4] = 0;
        plVar21[7] = 0;
        plVar21[6] = 0;
        plVar21[9] = 0;
        plVar21[8] = 0;
        plVar21[10] = 0;
        plVar21[0xb] = 0x3cb0b1bb;
        plVar21[0xd] = 0;
        plVar21[0xc] = 0;
        plVar21[0xf] = 0;
        plVar21[0xe] = 0;
        *(undefined8 *)((long)plVar21 + 0x84) = 0;
        *(undefined8 *)((long)plVar21 + 0x7c) = 0;
        *plVar21 = (long)&PTR_DAT_110a75108;
        plVar21[1] = 0;
        plStack_150 = plVar21;
        FUN_1095b598c(&uStack_348);
        if (CONCAT44(uStack_350._4_4_,(undefined4)uStack_350) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar37 = *(long *)(uStack_190 + 0x12);
        if (lVar37 == 0) {
          FUN_1094362d4(3);
          goto LAB_1095ac340;
        }
        FUN_1094a4db4(lVar37);
        uStack_360._0_4_ = SUB84(PTR___NSConcreteStackBlock_11034bd00,0);
        uStack_360._4_4_ = (float)((ulong)PTR___NSConcreteStackBlock_11034bd00 >> 0x20);
        uStack_358._0_4_ = 0x42000000;
        uStack_358._4_4_ = 0;
        uStack_350._0_4_ = 0x95b4398;
        uStack_350._4_4_ = 1;
        uStack_348._0_4_ = 6.9368626e-29;
        uStack_348._4_4_ = 1;
        uStack_340 = &uStack_198;
        func_0x000104c62d88(puVar46[1],*puVar46,&uStack_360);
        __Block_object_dispose(&uStack_198,8);
        func_0x000107c29c1c(&plStack_150);
        if (plStack_158 == &uStack_170) {
          lVar38 = 0x18;
LAB_1095aaa88:
          (**(code **)(*plStack_158 + lVar38))();
        }
        else if (plStack_158 != (long *)0x0) {
          lVar38 = 0x20;
          goto LAB_1095aaa88;
        }
        plVar20 = *(long **)pfVar19;
        *(long *)pfVar19 = lVar37;
        if (plVar20 != (long *)0x0) {
          plVar21 = plVar20 + 1;
          do {
            lVar37 = *plVar21;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar11) {
              *plVar21 = lVar37 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar37 == 0) {
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        if (pcStack_e8 != (code *)0x0) {
          pcVar16 = pcStack_e8 + 0x14;
          do {
            iVar49 = *(int *)pcVar16;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
            if (bVar11) {
              *(int *)pcVar16 = iVar49 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar49 + -1 == 0) {
            func_0x000109a848d4(&uStack_120);
          }
        }
        pcStack_e8 = (code *)0x0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_110._0_4_ = 0;
        uStack_110._4_4_ = 0;
        uStack_f8._0_4_ = 0;
        uStack_f8._4_4_ = 0;
        uStack_100._0_4_ = 0;
        uStack_100._4_4_ = 0;
        if (0 < (int)uStack_120._4_4_) {
          lVar37 = 0;
          do {
            *(undefined4 *)(pcStack_e0 + lVar37 * 4) = 0;
            lVar37 = lVar37 + 1;
          } while (lVar37 < (int)uStack_120._4_4_);
        }
        if (ppcStack_d8 != &pcStack_d0 && ppcStack_d8 != (code **)0x0) {
          _free(ppcStack_d8[-1]);
        }
LAB_1095aab50:
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_1095aab58;
      }
    }
  }
  else {
LAB_1095aab84:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_1092315e8();
LAB_1095ac340:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1095ac344);
  (*pcVar16)();
LAB_1095abb8c:
  if (pfVar32 == pfVar29) goto LAB_1095abd0c;
  cVar17 = *(code *)pfVar32;
  if ((byte)cVar8 < (byte)cVar17) goto LAB_1095abbcc;
  pfVar32 = (float *)((long)pfVar32 + 1);
  goto LAB_1095abb8c;
LAB_1095abbcc:
  pfVar28 = (float *)((long)pfVar32 + 1);
  *(code *)pfVar32 = *(code *)pfVar29;
  *(code *)pfVar29 = cVar17;
LAB_1095abbd4:
  if (pfVar28 == pfVar29) goto LAB_1095abd0c;
  while( true ) {
    do {
      pfVar32 = pfVar28;
      pfVar28 = (float *)((long)pfVar32 + 1);
      cVar17 = *(code *)pfVar32;
    } while ((byte)cVar17 <= (byte)*(code *)pfVar23);
    do {
      pfVar29 = (float *)((long)pfVar29 - 1);
    } while ((byte)*(code *)pfVar23 < (byte)*(code *)pfVar29);
    if (pfVar29 <= pfVar32) break;
    *(code *)pfVar32 = *(code *)pfVar29;
    *(code *)pfVar29 = cVar17;
  }
  pfVar33 = pfVar25;
  pfVar23 = pfVar32;
  if (pfVar19 < pfVar32) goto LAB_1095abd0c;
LAB_1095abc1c:
  pfVar25 = pfVar33;
  if (pfVar33 == pfVar19) goto LAB_1095abd0c;
  goto LAB_1095ab9f0;
}



/* Entry: 1095ac76c; end: 1095ad6ff;  */

void FUN_1095ac76c(long param_1,long *param_2,long *param_3)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long ******pppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long lVar11;
  undefined8 *puVar12;
  char cVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  long ******pppppplVar20;
  long *plVar21;
  ulong uVar22;
  long ****pppplVar23;
  long *plVar24;
  long ******pppppplVar25;
  long ****pppplVar26;
  long ****pppplVar27;
  long *plVar28;
  long *plVar29;
  long ******pppppplVar30;
  long *plVar31;
  ulong uVar32;
  long *****ppppplVar33;
  long ******pppppplVar34;
  ulong uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  long *****ppppplStack_130;
  long *****ppppplStack_128;
  long *****ppppplStack_120;
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  float fStack_80;
  
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(param_1 + 300) != 1)) {
    plStack_98 = (long *)0x0;
    lStack_a0 = 0;
    lStack_88 = 0;
    plStack_90 = (long *)0x0;
    fStack_80 = 1.0;
    *(undefined1 *)(param_1 + 0x1b4) = 0;
    ppppplStack_b8 = (long *****)0x0;
    ppppplStack_b0 = (long *****)0x0;
    ppppplStack_a8 = (long *****)0x0;
    lVar11 = *param_2;
    FUN_1094a9128(&ppppplStack_b8,lVar11,param_2[1],(param_2[1] - lVar11 >> 3) * -0x5555555555555555
                 );
    lVar15 = param_3[1] - *param_3;
    if (lVar15 == 0) {
      plVar6 = (long *)0x0;
      plVar24 = (long *)0x0;
      plVar28 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(lVar15 >> 6);
      if ((ulong)plVar6 >> 0x3a != 0) {
        FUN_1095b176c();
LAB_1095ad5e0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1095ad5e4);
        (*pcVar5)();
      }
      FUN_1095b1780();
      plVar24 = plVar6 + lVar11 * 8;
      _memmove();
      plVar28 = (long *)((long)plVar6 + lVar15);
    }
    lVar15 = *(long *)(param_1 + 0x3e0);
    if (lVar15 != *(long *)(param_1 + 1000)) {
      lVar11 = 0;
      uVar35 = 0;
      plVar31 = plVar6;
      do {
        lVar7 = *param_2;
        FUN_1093ec090(lVar7,param_2[1],lVar15 + lVar11,&ppppplStack_110);
        ppppplVar9 = ppppplStack_b0;
        plVar6 = plVar31;
        if (lVar7 == param_2[1]) {
          puVar12 = (undefined8 *)(*(long *)(param_1 + 0x3e0) + lVar11);
          if (ppppplStack_b0 < ppppplStack_a8) {
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              plVar29 = (long *)(*(long *)(param_1 + 0x3e0) + lVar11);
              puVar12 = (undefined8 *)*plVar29;
              func_0x000107c3192c(ppppplStack_b0,puVar12,plVar29[1]);
            }
            else {
              ppppplVar33 = (long *****)puVar12[1];
              ppppplVar10 = (long *****)*puVar12;
              ppppplStack_b0[2] = (long ****)puVar12[2];
              ppppplStack_b0[1] = (long ****)ppppplVar33;
              *ppppplStack_b0 = (long ****)ppppplVar10;
            }
            pppppplVar8 = (long ******)(ppppplVar9 + 3);
          }
          else {
            pppppplVar8 = &ppppplStack_b8;
            func_0x000107c27d34();
          }
          ppppplStack_b0 = (long *****)pppppplVar8;
          if (plVar31 != plVar28) {
            if (plVar28 < plVar24) {
              plVar28[1] = 0x3d4ccccd3f000000;
              *plVar28 = 0x700000000;
              plVar28[3] = 0x401a028f5c28f5c3;
              plVar28[2] = 0xf00000000;
              plVar28[5] = 0x1000000a0;
              plVar28[4] = 4;
              *(undefined8 *)((long)plVar28 + 0x32) = 0x101000000800000;
              *(undefined8 *)((long)plVar28 + 0x2a) = 0x28000000010000;
              *(undefined1 *)((long)plVar28 + 0x3a) = 1;
              *(undefined4 *)((long)plVar28 + 0x3b) = 0;
              *(undefined1 *)((long)plVar28 + 0x3f) = 0;
              plVar28 = plVar28 + 8;
            }
            else {
              lVar15 = (long)plVar28 - (long)plVar31;
              uVar32 = (lVar15 >> 6) + 1;
              if (uVar32 >> 0x3a != 0) {
                FUN_1095b176c();
                goto LAB_1095ad5e0;
              }
              uVar22 = (long)plVar24 - (long)plVar31 >> 5;
              if (uVar22 <= uVar32) {
                uVar22 = uVar32;
              }
              if (0x7fffffffffffffbf < (ulong)((long)plVar24 - (long)plVar31)) {
                uVar22 = 0x3ffffffffffffff;
              }
              FUN_1095b1780();
              puVar2 = (undefined8 *)(uVar22 + lVar15);
              plVar24 = (long *)(uVar22 + (long)puVar12 * 0x40);
              puVar2[1] = 0x3d4ccccd3f000000;
              *puVar2 = 0x700000000;
              puVar2[3] = 0x401a028f5c28f5c3;
              puVar2[2] = 0xf00000000;
              puVar2[5] = 0x1000000a0;
              puVar2[4] = 4;
              *(undefined8 *)((long)puVar2 + 0x32) = 0x101000000800000;
              *(undefined8 *)((long)puVar2 + 0x2a) = 0x28000000010000;
              *(undefined1 *)((long)puVar2 + 0x3a) = 1;
              *(undefined4 *)((long)puVar2 + 0x3b) = 0;
              plVar28 = puVar2 + 8;
              plVar6 = puVar2 + (lVar15 >> 6) * -8;
              *(undefined1 *)((long)puVar2 + 0x3f) = 0;
              _memcpy(plVar6,plVar31,lVar15);
              if (plVar31 != (long *)0x0) {
                __ZdlPv(plVar31);
              }
            }
          }
        }
        uVar35 = uVar35 + 1;
        lVar15 = *(long *)(param_1 + 0x3e0);
        lVar11 = lVar11 + 0x18;
        plVar31 = plVar6;
      } while (uVar35 < (ulong)((*(long *)(param_1 + 1000) - lVar15 >> 3) * -0x5555555555555555));
    }
    if (ppppplStack_b0 != ppppplStack_b8) {
      uVar35 = 0;
      pppppplVar8 = (long ******)(param_1 + 0xb70);
      pppplVar1 = (long ****)(param_1 + 0xb80);
      do {
        plVar24 = (long *)&UNK_10dfd5c30;
        if (plVar6 != plVar28) {
          plVar24 = plVar6 + uVar35 * 8;
        }
        pppppplVar18 = (long ******)(ppppplStack_b8 + uVar35 * 3);
        if (*(char *)((long)pppppplVar18 + 0x17) < '\0') {
          func_0x000107c3192c(&ppppplStack_110,*pppppplVar18,pppppplVar18[1]);
        }
        else {
          ppppplStack_108 = pppppplVar18[1];
          ppppplStack_110 = *pppppplVar18;
          ppppplStack_100 = pppppplVar18[2];
        }
        ppppplStack_f0 = (long *****)plVar24[1];
        ppppplStack_f8 = (long *****)*plVar24;
        lStack_e0 = plVar24[3];
        lStack_e8 = plVar24[2];
        lStack_d0 = plVar24[5];
        lStack_d8 = plVar24[4];
        lStack_c0 = plVar24[7];
        lStack_c8 = plVar24[6];
        plVar21 = &lStack_a0;
        pppppplVar18 = &ppppplStack_110;
        func_0x000107c31944();
        plVar31 = plStack_98;
        plVar29 = plVar28;
        if (plStack_98 != (long *)0x0) {
          uVar32 = (long)plStack_98 - 1;
          if (((ulong)plStack_98 & uVar32) == 0) {
            plVar29 = (long *)(uVar32 & (ulong)plVar21);
          }
          else {
            plVar29 = plVar21;
            if (plStack_98 <= plVar21) {
              uVar22 = 0;
              if (plStack_98 != (long *)0x0) {
                uVar22 = (ulong)plVar21 / (ulong)plStack_98;
              }
              plVar29 = (long *)((long)plVar21 - uVar22 * (long)plStack_98);
            }
          }
          plVar16 = *(long **)(lStack_a0 + (long)plVar29 * 8);
          if (plVar16 != (long *)0x0) {
            for (plVar16 = (long *)*plVar16; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
              plVar17 = (long *)plVar16[1];
              if (plVar17 == plVar21) {
                plVar17 = &lStack_a0;
                pppppplVar18 = (long ******)(plVar16 + 2);
                func_0x000104c4fbc4(plVar17,pppppplVar18,&ppppplStack_110);
                if (((ulong)plVar17 & 1) != 0) goto LAB_1095acc7c;
              }
              else {
                if (((ulong)plVar31 & uVar32) == 0) {
                  plVar17 = (long *)((ulong)plVar17 & uVar32);
                }
                else if (plVar31 <= plVar17) {
                  uVar22 = 0;
                  if (plVar31 != (long *)0x0) {
                    uVar22 = (ulong)plVar17 / (ulong)plVar31;
                  }
                  plVar17 = (long *)((long)plVar17 - uVar22 * (long)plVar31);
                }
                if (plVar17 != plVar29) break;
              }
            }
          }
        }
        plVar16 = (long *)0x68;
        __Znwm();
        *plVar16 = 0;
        plVar16[1] = (long)plVar21;
        if ((long)ppppplStack_100 < 0) {
          pppppplVar18 = (long ******)ppppplStack_110;
          func_0x000107c3192c(plVar16 + 2,ppppplStack_110,ppppplStack_108);
        }
        else {
          plVar16[3] = (long)ppppplStack_108;
          plVar16[2] = (long)ppppplStack_110;
          plVar16[4] = (long)ppppplStack_100;
        }
        plVar16[6] = (long)ppppplStack_f0;
        plVar16[5] = (long)ppppplStack_f8;
        plVar16[8] = lStack_e0;
        plVar16[7] = lStack_e8;
        plVar16[10] = lStack_d0;
        plVar16[9] = lStack_d8;
        plVar16[0xc] = lStack_c0;
        plVar16[0xb] = lStack_c8;
        if ((plVar31 == (long *)0x0) || (fStack_80 * (float)plVar31 < (float)(lStack_88 + 1))) {
          uVar32 = 1;
          if ((long *)0x2 < plVar31) {
            uVar32 = (ulong)(((ulong)plVar31 & (long)plVar31 - 1U) != 0);
          }
          pppppplVar18 = (long ******)(uVar32 | (long)plVar31 << 1);
          pppppplVar20 = (long ******)(long)((float)(lStack_88 + 1) / fStack_80);
          if (pppppplVar18 <= pppppplVar20) {
            pppppplVar18 = pppppplVar20;
          }
          FUN_1095b5788(&lStack_a0);
          plVar31 = plStack_98;
          if (((ulong)plStack_98 & (long)plStack_98 - 1U) == 0) {
            plVar29 = (long *)((long)plStack_98 - 1U & (ulong)plVar21);
          }
          else {
            plVar29 = plVar21;
            if (plStack_98 <= plVar21) {
              uVar32 = 0;
              if (plStack_98 != (long *)0x0) {
                uVar32 = (ulong)plVar21 / (ulong)plStack_98;
              }
              plVar29 = (long *)((long)plVar21 - uVar32 * (long)plStack_98);
            }
          }
        }
        plVar21 = *(long **)(lStack_a0 + (long)plVar29 * 8);
        if (plVar21 == (long *)0x0) {
          *plVar16 = (long)plStack_90;
          *(long ***)(lStack_a0 + (long)plVar29 * 8) = &plStack_90;
          plStack_90 = plVar16;
          if (*plVar16 != 0) {
            plVar29 = *(long **)(*plVar16 + 8);
            if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
              plVar29 = (long *)((ulong)plVar29 & (long)plVar31 - 1U);
            }
            else if (plVar31 <= plVar29) {
              uVar32 = 0;
              if (plVar31 != (long *)0x0) {
                uVar32 = (ulong)plVar29 / (ulong)plVar31;
              }
              plVar29 = (long *)((long)plVar29 - uVar32 * (long)plVar31);
            }
            *(long **)(lStack_a0 + (long)plVar29 * 8) = plVar16;
          }
        }
        else {
          *plVar16 = *plVar21;
          *plVar21 = (long)plVar16;
        }
        lStack_88 = lStack_88 + 1;
LAB_1095acc7c:
        if ((long)ppppplStack_100 < 0) {
          __ZdlPv(ppppplStack_110);
        }
        if ((char)plVar24[2] == '\x01') {
          *(undefined1 *)(param_1 + 0x1b4) = 1;
        }
        ppppplStack_130 = (long *****)0x0;
        ppppplStack_128 = (long *****)0x0;
        ppppplStack_120 = (long *****)0x0;
        if ((char)*plVar24 == '\x01') {
          ppppplVar9 = (long *****)0x10;
          __Znwm();
          uVar36 = *(undefined4 *)((long)plVar24 + 0xc);
          *ppppplVar9 = (long ****)&PTR_DAT_110afddb8;
          *(undefined4 *)(ppppplVar9 + 1) = uVar36;
          ppppplStack_f0 = (long *****)&ppppplStack_130;
          pppppplVar20 = (long ******)0x8;
          __Znwm();
          pppppplVar34 = pppppplVar20 + 1;
          *pppppplVar20 = ppppplVar9;
          ppppplStack_108 = (long *****)0x0;
          ppppplStack_110 = (long *****)0x0;
          ppppplStack_f8 = (long *****)0x0;
          ppppplStack_100 = (long *****)0x0;
          ppppplStack_130 = (long *****)pppppplVar20;
          ppppplStack_128 = (long *****)pppppplVar34;
          ppppplStack_120 = (long *****)pppppplVar34;
          func_0x0001095b17fc(&ppppplStack_110);
          ppppplStack_128 = (long *****)pppppplVar34;
        }
        ppppplVar9 = ppppplStack_128;
        if ((*(char *)((long)plVar24 + 1) == '\x01') && ((*(byte *)(plVar24 + 2) & 1) == 0)) {
          iVar4 = *(int *)(param_1 + 0x128);
          ppppplVar10 = (long *****)0x10;
          __Znwm();
          piVar3 = (int *)(param_1 + 0x128);
          if (iVar4 < 1) {
            piVar3 = (int *)((long)plVar24 + 4);
          }
          iVar4 = *piVar3;
          fVar37 = *(float *)(plVar24 + 1);
          *ppppplVar10 = (long ****)&PTR_FUN_110afdd68;
          *(int *)(ppppplVar10 + 1) = iVar4;
          fVar38 = 0.0001;
          if (0.0001 <= fVar37) {
            fVar38 = fVar37;
          }
          fVar37 = 1.0;
          if (fVar38 <= 1.0) {
            fVar37 = fVar38;
          }
          *(float *)((long)ppppplVar10 + 0xc) = fVar37;
          if (ppppplVar9 < ppppplStack_120) {
            *ppppplVar9 = (long ****)ppppplVar10;
            ppppplStack_128 = ppppplVar9 + 1;
          }
          else {
            lVar15 = (long)ppppplVar9 - (long)ppppplStack_130;
            uVar32 = (lVar15 >> 3) + 1;
            if (uVar32 >> 0x3d != 0) {
              FUN_1095b17b4();
              goto LAB_1095ad5e0;
            }
            uVar22 = (long)ppppplStack_120 - (long)ppppplStack_130 >> 2;
            if (uVar22 <= uVar32) {
              uVar22 = uVar32;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppppplStack_120 - (long)ppppplStack_130)) {
              uVar22 = 0x1fffffffffffffff;
            }
            ppppplStack_f0 = (long *****)&ppppplStack_130;
            func_0x0001095b17c8();
            puVar12 = (undefined8 *)(uVar22 + lVar15);
            lVar15 = (long)pppppplVar18 * 8;
            pppppplVar20 = (long ******)
                           ((long)puVar12 - ((long)ppppplStack_128 - (long)ppppplStack_130));
            *puVar12 = ppppplVar10;
            pppppplVar18 = (long ******)ppppplStack_130;
            _memcpy(pppppplVar20);
            ppppplStack_100 = ppppplStack_130;
            ppppplStack_f8 = ppppplStack_120;
            ppppplStack_110 = ppppplStack_130;
            ppppplStack_108 = ppppplStack_130;
            ppppplStack_130 = (long *****)pppppplVar20;
            ppppplStack_128 = (long *****)(puVar12 + 1);
            ppppplStack_120 = (long *****)(uVar22 + lVar15);
            func_0x0001095b17fc(&ppppplStack_110);
            ppppplStack_128 = (long *****)(puVar12 + 1);
          }
        }
        ppppplVar9 = ppppplStack_128;
        if (*(char *)((long)plVar24 + 2) == '\x01') {
          ppppplVar10 = (long *****)0x8;
          __Znwm();
          *ppppplVar10 = (long ****)&PTR_DAT_110afddf8;
          if (ppppplVar9 < ppppplStack_120) {
            *ppppplVar9 = (long ****)ppppplVar10;
            ppppplStack_128 = ppppplVar9 + 1;
          }
          else {
            lVar15 = (long)ppppplVar9 - (long)ppppplStack_130;
            uVar32 = (lVar15 >> 3) + 1;
            if (uVar32 >> 0x3d != 0) {
              FUN_1095b17b4();
              goto LAB_1095ad5e0;
            }
            uVar22 = (long)ppppplStack_120 - (long)ppppplStack_130 >> 2;
            if (uVar22 <= uVar32) {
              uVar22 = uVar32;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppppplStack_120 - (long)ppppplStack_130)) {
              uVar22 = 0x1fffffffffffffff;
            }
            ppppplStack_f0 = (long *****)&ppppplStack_130;
            func_0x0001095b17c8();
            puVar12 = (undefined8 *)(uVar22 + lVar15);
            lVar15 = (long)pppppplVar18 * 8;
            pppppplVar20 = (long ******)
                           ((long)puVar12 - ((long)ppppplStack_128 - (long)ppppplStack_130));
            *puVar12 = ppppplVar10;
            pppppplVar18 = (long ******)ppppplStack_130;
            _memcpy(pppppplVar20);
            ppppplStack_100 = ppppplStack_130;
            ppppplStack_f8 = ppppplStack_120;
            ppppplStack_110 = ppppplStack_130;
            ppppplStack_108 = ppppplStack_130;
            ppppplStack_130 = (long *****)pppppplVar20;
            ppppplStack_128 = (long *****)(puVar12 + 1);
            ppppplStack_120 = (long *****)(uVar22 + lVar15);
            func_0x0001095b17fc(&ppppplStack_110);
            ppppplStack_128 = (long *****)(puVar12 + 1);
          }
        }
        pppppplVar20 = (long ******)ppppplStack_b8;
        ppppplVar9 = ppppplStack_128;
        if ((*(byte *)((long)plVar24 + 0x3a) & 1) == 0) {
          pppppplVar34 = (long ******)(ppppplStack_b8 + uVar35 * 3);
          if (*(char *)((long)pppppplVar34 + 0x17) < '\0') {
            if (pppppplVar34[1] == (long *****)0x3) {
              pppppplVar34 = (long ******)*pppppplVar34;
              goto LAB_1095acf0c;
            }
          }
          else if (*(char *)((long)pppppplVar34 + 0x17) == '\x03') {
LAB_1095acf0c:
            if ((*(short *)pppppplVar34 == 0x6b73 && *(char *)((long)pppppplVar34 + 2) == 'y') &&
               (*(char *)((long)plVar24 + 0x39) == '\x01')) {
              ppppplVar10 = (long *****)0x8;
              __Znwm();
              *ppppplVar10 = (long ****)&PTR_DAT_110afde38;
              if (ppppplVar9 < ppppplStack_120) {
                *ppppplVar9 = (long ****)ppppplVar10;
                ppppplStack_128 = ppppplVar9 + 1;
              }
              else {
                lVar15 = (long)ppppplVar9 - (long)ppppplStack_130;
                uVar32 = (lVar15 >> 3) + 1;
                if (uVar32 >> 0x3d != 0) {
                  FUN_1095b17b4();
                  goto LAB_1095ad5e0;
                }
                uVar22 = (long)ppppplStack_120 - (long)ppppplStack_130 >> 2;
                if (uVar22 <= uVar32) {
                  uVar22 = uVar32;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)ppppplStack_120 - (long)ppppplStack_130)) {
                  uVar22 = 0x1fffffffffffffff;
                }
                ppppplStack_f0 = (long *****)&ppppplStack_130;
                func_0x0001095b17c8();
                puVar12 = (undefined8 *)(uVar22 + lVar15);
                pppppplVar20 = (long ******)
                               ((long)puVar12 - ((long)ppppplStack_128 - (long)ppppplStack_130));
                *puVar12 = ppppplVar10;
                _memcpy(pppppplVar20,ppppplStack_130);
                ppppplStack_100 = ppppplStack_130;
                ppppplStack_f8 = ppppplStack_120;
                ppppplStack_110 = ppppplStack_130;
                ppppplStack_108 = ppppplStack_130;
                ppppplStack_130 = (long *****)pppppplVar20;
                ppppplStack_128 = (long *****)(puVar12 + 1);
                ppppplStack_120 = (long *****)(uVar22 + (long)pppppplVar18 * 8);
                func_0x0001095b17fc(&ppppplStack_110);
                pppppplVar20 = (long ******)ppppplStack_b8;
                ppppplStack_128 = (long *****)(puVar12 + 1);
              }
            }
          }
        }
        pppppplVar25 = pppppplVar20 + uVar35 * 3;
        pppppplVar18 = pppppplVar8;
        func_0x000107c31944(pppppplVar8,pppppplVar25);
        pppppplVar34 = *(long *******)(param_1 + 0xb78);
        if (pppppplVar34 != (long ******)0x0) {
          uVar32 = (long)pppppplVar34 - 1;
          if (((ulong)pppppplVar34 & uVar32) == 0) {
            pppppplVar20 = (long ******)(uVar32 & (ulong)pppppplVar18);
          }
          else {
            pppppplVar20 = pppppplVar18;
            if (pppppplVar34 <= pppppplVar18) {
              uVar22 = 0;
              if (pppppplVar34 != (long ******)0x0) {
                uVar22 = (ulong)pppppplVar18 / (ulong)pppppplVar34;
              }
              pppppplVar20 = (long ******)((long)pppppplVar18 - uVar22 * (long)pppppplVar34);
            }
          }
          if ((*pppppplVar8)[(long)pppppplVar20] != (long ****)0x0) {
            for (pppppplVar30 = (long ******)*(*pppppplVar8)[(long)pppppplVar20];
                pppppplVar30 != (long ******)0x0; pppppplVar30 = (long ******)*pppppplVar30) {
              pppppplVar19 = (long ******)pppppplVar30[1];
              if (pppppplVar19 == pppppplVar18) {
                pppppplVar19 = pppppplVar8;
                func_0x000104c4fbc4(pppppplVar8,pppppplVar30 + 2,pppppplVar25);
                if (((ulong)pppppplVar19 & 1) != 0) goto LAB_1095ad364;
              }
              else {
                if (((ulong)pppppplVar34 & uVar32) == 0) {
                  pppppplVar19 = (long ******)((ulong)pppppplVar19 & uVar32);
                }
                else if (pppppplVar34 <= pppppplVar19) {
                  uVar22 = 0;
                  if (pppppplVar34 != (long ******)0x0) {
                    uVar22 = (ulong)pppppplVar19 / (ulong)pppppplVar34;
                  }
                  pppppplVar19 = (long ******)((long)pppppplVar19 - uVar22 * (long)pppppplVar34);
                }
                if (pppppplVar19 != pppppplVar20) break;
              }
            }
          }
        }
        pppppplVar30 = (long ******)0x40;
        __Znwm();
        ppppplStack_100 = (long *****)0x0;
        *pppppplVar30 = (long *****)0x0;
        pppppplVar30[1] = (long *****)pppppplVar18;
        ppppplStack_110 = (long *****)pppppplVar30;
        ppppplStack_108 = (long *****)pppppplVar8;
        if (*(char *)((long)pppppplVar25 + 0x17) < '\0') {
          func_0x000107c3192c(pppppplVar30 + 2,*pppppplVar25,pppppplVar25[1]);
        }
        else {
          ppppplVar10 = pppppplVar25[1];
          ppppplVar9 = *pppppplVar25;
          pppppplVar30[4] = pppppplVar25[2];
          pppppplVar30[3] = ppppplVar10;
          pppppplVar30[2] = ppppplVar9;
        }
        pppppplVar30[5] = (long *****)0x0;
        pppppplVar30[6] = (long *****)0x0;
        pppppplVar30[7] = (long *****)0x0;
        ppppplStack_100 = (long *****)CONCAT71(ppppplStack_100._1_7_,1);
        fVar38 = (float)(*(long *)(param_1 + 0xb88) + 1);
        if ((pppppplVar34 == (long ******)0x0) ||
           (*(float *)(param_1 + 0xb90) * (float)pppppplVar34 < fVar38)) {
          uVar32 = 1;
          if ((long ******)0x2 < pppppplVar34) {
            uVar32 = (ulong)(((ulong)pppppplVar34 & (long)pppppplVar34 - 1U) != 0);
          }
          pppppplVar20 = (long ******)(uVar32 | (long)pppppplVar34 << 1);
          pppppplVar34 = (long ******)(long)(fVar38 / *(float *)(param_1 + 0xb90));
          if (pppppplVar20 <= pppppplVar34) {
            pppppplVar20 = pppppplVar34;
          }
          if ((long)pppppplVar20 - 1U == 0) {
            pppppplVar20 = (long ******)0x2;
          }
          else if (((ulong)pppppplVar20 & (long)pppppplVar20 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          pppppplVar34 = *(long *******)(param_1 + 0xb78);
          if (pppppplVar34 < pppppplVar20) {
LAB_1095ad174:
            if ((ulong)pppppplVar20 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_1095ad5e0;
            }
            ppppplVar9 = (long *****)((long)pppppplVar20 << 3);
            __Znwm();
            ppppplVar10 = *pppppplVar8;
            *pppppplVar8 = ppppplVar9;
            if (ppppplVar10 != (long *****)0x0) {
              __ZdlPv();
            }
            pppppplVar34 = (long ******)0x0;
            *(long *******)(param_1 + 0xb78) = pppppplVar20;
            do {
              (*pppppplVar8)[(long)pppppplVar34] = (long ****)0x0;
              pppppplVar34 = (long ******)((long)pppppplVar34 + 1);
            } while (pppppplVar20 != pppppplVar34);
            pppplVar23 = (long ****)*pppplVar1;
            pppppplVar34 = pppppplVar20;
            if (pppplVar23 != (long ****)0x0) {
              pppppplVar25 = (long ******)pppplVar23[1];
              uVar32 = (long)pppppplVar20 - 1;
              if (((ulong)pppppplVar20 & uVar32) == 0) {
                pppppplVar25 = (long ******)((ulong)pppppplVar25 & uVar32);
              }
              else if (pppppplVar20 <= pppppplVar25) {
                uVar22 = 0;
                if (pppppplVar20 != (long ******)0x0) {
                  uVar22 = (ulong)pppppplVar25 / (ulong)pppppplVar20;
                }
                pppppplVar25 = (long ******)((long)pppppplVar25 - uVar22 * (long)pppppplVar20);
              }
              (*pppppplVar8)[(long)pppppplVar25] = pppplVar1;
              pppplVar26 = (long ****)*pppplVar23;
              while (pppplVar26 != (long ****)0x0) {
                pppppplVar19 = (long ******)pppplVar26[1];
                if (((ulong)pppppplVar20 & uVar32) == 0) {
                  pppppplVar19 = (long ******)((ulong)pppppplVar19 & uVar32);
                }
                else if (pppppplVar20 <= pppppplVar19) {
                  uVar22 = 0;
                  if (pppppplVar20 != (long ******)0x0) {
                    uVar22 = (ulong)pppppplVar19 / (ulong)pppppplVar20;
                  }
                  pppppplVar19 = (long ******)((long)pppppplVar19 - uVar22 * (long)pppppplVar20);
                }
                pppplVar27 = pppplVar26;
                if (pppppplVar19 != pppppplVar25) {
                  ppppplVar9 = *pppppplVar8;
                  if (ppppplVar9[(long)pppppplVar19] == (long ****)0x0) {
                    ppppplVar9[(long)pppppplVar19] = pppplVar23;
                    pppppplVar25 = pppppplVar19;
                  }
                  else {
                    *pppplVar23 = *pppplVar26;
                    *pppplVar26 = *ppppplVar9[(long)pppppplVar19];
                    *ppppplVar9[(long)pppppplVar19] = (long ***)pppplVar26;
                    pppplVar27 = pppplVar23;
                  }
                }
                pppplVar23 = pppplVar27;
                pppplVar26 = (long ****)*pppplVar27;
              }
            }
          }
          else if (pppppplVar20 < pppppplVar34) {
            pppppplVar25 = (long ******)
                           (long)((float)*(ulong *)(param_1 + 0xb88) / *(float *)(param_1 + 0xb90));
            if ((pppppplVar34 < (long ******)0x3) ||
               (((ulong)pppppplVar34 & (long)pppppplVar34 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ******)0x1 < pppppplVar25) {
              pppppplVar25 = (long ******)(1L << (-LZCOUNT((long)pppppplVar25 + -1) & 0x3fU));
            }
            if (pppppplVar20 <= pppppplVar25) {
              pppppplVar20 = pppppplVar25;
            }
            if (pppppplVar20 < pppppplVar34) {
              if (pppppplVar20 != (long ******)0x0) goto LAB_1095ad174;
              ppppplVar9 = *pppppplVar8;
              *pppppplVar8 = (long *****)0x0;
              if (ppppplVar9 != (long *****)0x0) {
                __ZdlPv();
              }
              *(undefined8 *)(param_1 + 0xb78) = 0;
              pppppplVar34 = (long ******)0x0;
            }
            else {
              pppppplVar34 = *(long *******)(param_1 + 0xb78);
            }
          }
          if (((ulong)pppppplVar34 & (long)pppppplVar34 - 1U) == 0) {
            pppppplVar20 = (long ******)((long)pppppplVar34 - 1U & (ulong)pppppplVar18);
          }
          else {
            pppppplVar20 = pppppplVar18;
            if (pppppplVar34 <= pppppplVar18) {
              uVar32 = 0;
              if (pppppplVar34 != (long ******)0x0) {
                uVar32 = (ulong)pppppplVar18 / (ulong)pppppplVar34;
              }
              pppppplVar20 = (long ******)((long)pppppplVar18 - uVar32 * (long)pppppplVar34);
            }
          }
        }
        ppppplVar9 = *pppppplVar8;
        pppplVar23 = ppppplVar9[(long)pppppplVar20];
        if (pppplVar23 == (long ****)0x0) {
          *pppppplVar30 = (long *****)*pppplVar1;
          *pppplVar1 = (long ***)pppppplVar30;
          ppppplVar9[(long)pppppplVar20] = pppplVar1;
          if (*pppppplVar30 != (long *****)0x0) {
            pppppplVar18 = (long ******)(*pppppplVar30)[1];
            if (((ulong)pppppplVar34 & (long)pppppplVar34 - 1U) == 0) {
              pppppplVar18 = (long ******)((ulong)pppppplVar18 & (long)pppppplVar34 - 1U);
            }
            else if (pppppplVar34 <= pppppplVar18) {
              uVar32 = 0;
              if (pppppplVar34 != (long ******)0x0) {
                uVar32 = (ulong)pppppplVar18 / (ulong)pppppplVar34;
              }
              pppppplVar18 = (long ******)((long)pppppplVar18 - uVar32 * (long)pppppplVar34);
            }
            (*pppppplVar8)[(long)pppppplVar18] = (long ****)pppppplVar30;
          }
        }
        else {
          *pppppplVar30 = (long *****)*pppplVar23;
          *pppplVar23 = (long ***)pppppplVar30;
        }
        *(long *)(param_1 + 0xb88) = *(long *)(param_1 + 0xb88) + 1;
LAB_1095ad364:
        pppppplVar18 = pppppplVar30 + 5;
        ppppplVar9 = *pppppplVar18;
        if (ppppplVar9 != (long *****)0x0) {
          ppppplVar33 = pppppplVar30[6];
          ppppplVar10 = ppppplVar9;
          if (ppppplVar33 != ppppplVar9) {
            do {
              ppppplVar33 = ppppplVar33 + -1;
              pppplVar23 = *ppppplVar33;
              *ppppplVar33 = (long ****)0x0;
              if (pppplVar23 != (long ****)0x0) {
                (*(code *)(*pppplVar23)[1])();
              }
            } while (ppppplVar33 != ppppplVar9);
            ppppplVar10 = *pppppplVar18;
          }
          pppppplVar30[6] = ppppplVar9;
          __ZdlPv(ppppplVar10);
          *pppppplVar18 = (long *****)0x0;
          pppppplVar30[6] = (long *****)0x0;
          pppppplVar30[7] = (long *****)0x0;
        }
        pppppplVar30[6] = ppppplStack_128;
        pppppplVar30[5] = ppppplStack_130;
        pppppplVar30[7] = ppppplStack_120;
        ppppplStack_128 = (long *****)0x0;
        ppppplStack_120 = (long *****)0x0;
        ppppplStack_130 = (long *****)0x0;
        FUN_1095b1858(&ppppplStack_130);
        uVar35 = uVar35 + 1;
      } while (uVar35 < (ulong)(((long)ppppplStack_b0 - (long)ppppplStack_b8 >> 3) *
                               -0x5555555555555555));
    }
    __ZNSt3__15mutex4lockEv(param_1 + 0x498);
    if (*(long *)(param_1 + 0x540) != 0) {
      func_0x0001095b2444(*(undefined8 *)(param_1 + 0x538));
      *(undefined8 *)(param_1 + 0x538) = 0;
      lVar15 = *(long *)(param_1 + 0x530);
      if (lVar15 != 0) {
        lVar11 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x528) + lVar11 * 8) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar15 != lVar11);
      }
      *(undefined8 *)(param_1 + 0x540) = 0;
    }
    lVar15 = lStack_a0;
    lStack_a0 = 0;
    lVar11 = *(long *)(param_1 + 0x528);
    *(long *)(param_1 + 0x528) = lVar15;
    if (lVar11 != 0) {
      __ZdlPv();
    }
    plVar28 = plStack_98;
    *(long **)(param_1 + 0x530) = plStack_98;
    plStack_98 = (long *)0x0;
    *(long *)(param_1 + 0x540) = lStack_88;
    *(float *)(param_1 + 0x548) = fStack_80;
    *(long **)(param_1 + 0x538) = plStack_90;
    plVar24 = plStack_90;
    if (lStack_88 != 0) {
      plVar24 = (long *)plStack_90[1];
      if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
        plVar24 = (long *)((ulong)plVar24 & (long)plVar28 - 1U);
      }
      else if (plVar28 <= plVar24) {
        uVar35 = 0;
        if (plVar28 != (long *)0x0) {
          uVar35 = (ulong)plVar24 / (ulong)plVar28;
        }
        plVar24 = (long *)((long)plVar24 - uVar35 * (long)plVar28);
      }
      *(long *)(*(long *)(param_1 + 0x528) + (long)plVar24 * 8) = param_1 + 0x538;
      plStack_90 = (long *)0x0;
      lStack_88 = 0;
      plVar24 = *(long **)(param_1 + 0x538);
    }
    if (plVar24 == (long *)0x0) {
      cVar13 = '\x01';
    }
    else {
      do {
        cVar13 = *(char *)((long)plVar24 + 0x62);
        if (cVar13 != '\x01') break;
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
    *(char *)(param_1 + 0x550) = cVar13;
    *(int *)(param_1 + 300) = 3;
    if (*(int *)(param_1 + 0x238) == -1) {
      bVar14 = false;
    }
    else {
      bVar14 = 2 < *(int *)(param_1 + 300);
    }
    *(bool *)(param_1 + 0x150) = bVar14;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x498);
    if (plVar6 != (long *)0x0) {
      __ZdlPv(plVar6);
    }
    ppppplStack_110 = (long *****)&ppppplStack_b8;
    func_0x000104c607c8(&ppppplStack_110);
    func_0x0001095b2444(plStack_90);
    lVar15 = lStack_a0;
    lStack_a0 = 0;
    if (lVar15 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1095ad700; end: 1095ad8ef;  */

float FUN_1095ad700(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  float fVar10;
  undefined4 auStack_e0 [2];
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x498);
  lVar9 = 0x558;
  if (*(char *)(param_1 + 0x184) == '\0') {
    lVar9 = 0x580;
  }
  lVar9 = param_1 + lVar9;
  func_0x0001095b3af8(lVar9,param_2);
  lVar7 = param_1 + 0x528;
  func_0x0001095b3a14(lVar7,param_2);
  if ((lVar7 == 0) || (lVar9 == 0)) {
    __ZNSt3__15mutex6unlockEv(param_1 + 0x498);
    fVar10 = -1.0;
  }
  else {
    uStack_c8 = 0x42ff0000;
    iStack_bc = 0;
    uStack_b8 = 0;
    uStack_c4 = 0;
    lStack_88 = (long)&uStack_c4 + 4;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_9c = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    lStack_90 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    auStack_68[0] = 0x2010000;
    uStack_58 = 0;
    puStack_80 = &uStack_78;
    puStack_60 = &uStack_c8;
    FUN_109a479a0(lVar9 + 0x28,auStack_68);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x498);
    uStack_58 = 0;
    auStack_68[0] = 0x1010000;
    auStack_e0[0] = 0x2010000;
    uStack_d0 = 0;
    puStack_d8 = &uStack_c8;
    puStack_60 = &uStack_c8;
    FUN_109b59078((double)*(int *)(param_1 + 0x178),0x406fe00000000000,auStack_68,auStack_e0,0);
    auStack_68[0] = 0x1010000;
    puStack_60 = &uStack_c8;
    uStack_58 = 0;
    puVar8 = auStack_68;
    FUN_109ab7930(puVar8);
    iVar6 = iStack_bc;
    iVar5 = uStack_c4._4_4_;
    if (lStack_90 != 0) {
      piVar1 = (int *)(lStack_90 + 0x14);
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
        func_0x000109a848d4(&uStack_c8);
      }
    }
    lStack_90 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    if (0 < (int)uStack_c4) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lStack_88 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_c4);
    }
    if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
      _free(puStack_80[-1]);
    }
    fVar10 = ((float)(int)puVar8 / (float)iVar5) / (float)iVar6;
  }
  return fVar10;
}



/* Entry: 1095ad8f0; end: 1095adfb3;  */

undefined8 * FUN_1095ad8f0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x42ff0000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x1d] = 0;
  param_1[0x11] = param_1 + 10;
  param_1[0x12] = param_1 + 0x13;
  param_1[0x1f] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x149) = 0;
  uVar1 = *param_2;
  *(undefined1 *)((long)param_1 + 0x15c) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x2b) = uVar1;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 0x2c,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    param_1[0x2e] = *(undefined8 *)(param_2 + 6);
    param_1[0x2d] = uVar5;
    param_1[0x2c] = uVar4;
  }
  uVar5 = *(undefined8 *)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x2e);
  *(undefined8 *)((long)param_1 + 0x18e) = *(undefined8 *)((long)param_2 + 0x36);
  *(undefined8 *)((long)param_1 + 0x186) = uVar6;
  param_1[0x30] = uVar5;
  param_1[0x2f] = uVar4;
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    func_0x000107c3192c(param_1 + 0x33,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(param_2 + 0x12));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x12);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    param_1[0x35] = *(undefined8 *)(param_2 + 0x14);
    param_1[0x34] = uVar5;
    param_1[0x33] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  param_1[0x37] = *(undefined8 *)(param_2 + 0x18);
  param_1[0x36] = uVar4;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x1dc) = 0;
  *(undefined1 *)((long)param_1 + 0x1de) = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 0x200;
  *(undefined4 *)((long)param_1 + 0x1fa) = 0;
  *(undefined1 *)((long)param_1 + 0x1fe) = 0;
  *(undefined2 *)(param_1 + 0x40) = 1;
  *(undefined4 *)((long)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x20c) = 0x100;
  *(undefined1 *)((long)param_1 + 0x20e) = 1;
  *(undefined4 *)(param_1 + 0x42) = 0x1000000;
  *(undefined2 *)((long)param_1 + 0x214) = 1;
  *(undefined4 *)(param_1 + 0x43) = 0x100;
  param_1[0x44] = 100000;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x22c) = 1;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0x1ffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x32;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x32;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x32;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6f) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = param_1 + 0x70;
  param_1[0x78] = param_1 + 0x79;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0x7fffffff;
  *(undefined4 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x85) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  *(undefined8 *)((long)param_1 + 0x44c) = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = param_1 + 0x86;
  param_1[0x8e] = param_1 + 0x8f;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[2] = 0x32aaaba7;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((long)puVar2 + 0x49) = 0;
  *(undefined8 *)((long)puVar2 + 0x41) = 0;
  puVar3 = &UNK_10f573308;
  _dispatch_queue_create(&UNK_10f573308,0);
  *puVar2 = puVar3;
  _dispatch_group_create();
  puVar2[1] = puVar3;
  param_1[0x91] = puVar2;
  param_1[0x92] = 0;
  param_1[0x93] = 0x32aaaba7;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0x3f800000;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0x3f800000;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x3f800000;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0x3f800000;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0x3f800000;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0x1400000640;
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)((long)param_1 + 0x664) = 1;
  *(undefined2 *)(param_1 + 0xce) = 0x100;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x42ff0000;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  *(undefined8 *)((long)param_1 + 0x69c) = 0;
  *(undefined8 *)((long)param_1 + 0x694) = 0;
  *(undefined8 *)((long)param_1 + 0x6ac) = 0;
  *(undefined8 *)((long)param_1 + 0x6a4) = 0;
  *(undefined8 *)((long)param_1 + 0x68c) = 0;
  *(undefined8 *)((long)param_1 + 0x684) = 0;
  param_1[0xd8] = param_1 + 0xd1;
  param_1[0xd9] = param_1 + 0xda;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x42ff0000;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  *(undefined8 *)((long)param_1 + 0x6fc) = 0;
  *(undefined8 *)((long)param_1 + 0x6f4) = 0;
  *(undefined8 *)((long)param_1 + 0x70c) = 0;
  *(undefined8 *)((long)param_1 + 0x704) = 0;
  *(undefined8 *)((long)param_1 + 0x6ec) = 0;
  *(undefined8 *)((long)param_1 + 0x6e4) = 0;
  param_1[0xe4] = param_1 + 0xdd;
  param_1[0xe5] = param_1 + 0xe6;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xed) = 0x42ff0000;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  *(undefined8 *)((long)param_1 + 0x784) = 0;
  *(undefined8 *)((long)param_1 + 0x77c) = 0;
  *(undefined8 *)((long)param_1 + 0x794) = 0;
  *(undefined8 *)((long)param_1 + 0x78c) = 0;
  *(undefined8 *)((long)param_1 + 0x774) = 0;
  *(undefined8 *)((long)param_1 + 0x76c) = 0;
  param_1[0xf5] = param_1 + 0xee;
  param_1[0xf6] = param_1 + 0xf7;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0x42ff0000;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  *(undefined8 *)((long)param_1 + 0x7e4) = 0;
  *(undefined8 *)((long)param_1 + 0x7dc) = 0;
  *(undefined8 *)((long)param_1 + 0x7f4) = 0;
  *(undefined8 *)((long)param_1 + 0x7ec) = 0;
  *(undefined8 *)((long)param_1 + 0x7d4) = 0;
  *(undefined8 *)((long)param_1 + 0x7cc) = 0;
  param_1[0x101] = param_1 + 0xfa;
  param_1[0x102] = param_1 + 0x103;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x105] = &PTR_DAT_1108a5c28;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[0x108] = 0x100000001;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0x42ff0000;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  *(undefined8 *)((long)param_1 + 0x894) = 0;
  *(undefined8 *)((long)param_1 + 0x88c) = 0;
  *(undefined8 *)((long)param_1 + 0x8a4) = 0;
  *(undefined8 *)((long)param_1 + 0x89c) = 0;
  *(undefined8 *)((long)param_1 + 0x884) = 0;
  *(undefined8 *)((long)param_1 + 0x87c) = 0;
  param_1[0x117] = param_1 + 0x110;
  param_1[0x118] = param_1 + 0x119;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11b) = 0x42ff0000;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  *(undefined8 *)((long)param_1 + 0x8f4) = 0;
  *(undefined8 *)((long)param_1 + 0x8ec) = 0;
  *(undefined8 *)((long)param_1 + 0x904) = 0;
  *(undefined8 *)((long)param_1 + 0x8fc) = 0;
  *(undefined8 *)((long)param_1 + 0x8e4) = 0;
  *(undefined8 *)((long)param_1 + 0x8dc) = 0;
  param_1[0x123] = param_1 + 0x11c;
  param_1[0x124] = param_1 + 0x125;
  param_1[0x128] = 0;
  param_1[0x127] = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  param_1[0x126] = 0;
  param_1[0x125] = 0;
  *(undefined8 *)((long)param_1 + 0x964) = 0x42ff000000000002;
  *(undefined8 *)((long)param_1 + 0x95c) = 0;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  *(undefined8 *)((long)param_1 + 0x984) = 0;
  *(undefined8 *)((long)param_1 + 0x97c) = 0;
  *(undefined8 *)((long)param_1 + 0x994) = 0;
  *(undefined8 *)((long)param_1 + 0x98c) = 0;
  *(undefined8 *)((long)param_1 + 0x974) = 0;
  *(undefined8 *)((long)param_1 + 0x96c) = 0;
  param_1[0x135] = param_1 + 0x12e;
  param_1[0x136] = param_1 + 0x137;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  *(undefined4 *)(param_1 + 0x139) = 0x42ff0000;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  *(undefined8 *)((long)param_1 + 0x9e4) = 0;
  *(undefined8 *)((long)param_1 + 0x9dc) = 0;
  *(undefined8 *)((long)param_1 + 0x9f4) = 0;
  *(undefined8 *)((long)param_1 + 0x9ec) = 0;
  *(undefined8 *)((long)param_1 + 0x9d4) = 0;
  *(undefined8 *)((long)param_1 + 0x9cc) = 0;
  param_1[0x141] = param_1 + 0x13a;
  param_1[0x142] = param_1 + 0x143;
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  *(undefined4 *)(param_1 + 0x145) = 0x42ff0000;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  *(undefined8 *)((long)param_1 + 0xa44) = 0;
  *(undefined8 *)((long)param_1 + 0xa3c) = 0;
  *(undefined8 *)((long)param_1 + 0xa54) = 0;
  *(undefined8 *)((long)param_1 + 0xa4c) = 0;
  *(undefined8 *)((long)param_1 + 0xa34) = 0;
  *(undefined8 *)((long)param_1 + 0xa2c) = 0;
  param_1[0x14d] = param_1 + 0x146;
  param_1[0x14e] = param_1 + 0x14f;
  param_1[0x152] = 0;
  param_1[0x151] = 0;
  param_1[0x154] = 0;
  param_1[0x153] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = 0;
  *(undefined4 *)(param_1 + 0x155) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x156) = 0x42ff0000;
  param_1[0x15d] = 0;
  param_1[0x15c] = 0;
  *(undefined8 *)((long)param_1 + 0xacc) = 0;
  *(undefined8 *)((long)param_1 + 0xac4) = 0;
  *(undefined8 *)((long)param_1 + 0xadc) = 0;
  *(undefined8 *)((long)param_1 + 0xad4) = 0;
  *(undefined8 *)((long)param_1 + 0xabc) = 0;
  *(undefined8 *)((long)param_1 + 0xab4) = 0;
  param_1[0x15e] = param_1 + 0x157;
  param_1[0x15f] = param_1 + 0x160;
  param_1[0x161] = 0;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0x42ff0000;
  param_1[0x169] = 0;
  param_1[0x168] = 0;
  *(undefined8 *)((long)param_1 + 0xb2c) = 0;
  *(undefined8 *)((long)param_1 + 0xb24) = 0;
  *(undefined8 *)((long)param_1 + 0xb3c) = 0;
  *(undefined8 *)((long)param_1 + 0xb34) = 0;
  *(undefined8 *)((long)param_1 + 0xb1c) = 0;
  *(undefined8 *)((long)param_1 + 0xb14) = 0;
  param_1[0x16a] = param_1 + 0x163;
  param_1[0x16b] = param_1 + 0x16c;
  param_1[0x171] = 0;
  param_1[0x170] = 0;
  param_1[0x16f] = 0;
  param_1[0x16e] = 0;
  param_1[0x16d] = 0;
  param_1[0x16c] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0x3f800000;
  param_1[0xcd] = 0;
  return param_1;
}



/* Entry: 1095adfb4; end: 1095ae093;  */

long FUN_1095adfb4(long param_1)

{
  FUN_1095b10e8(param_1 + 0x110);
  FUN_1095b10e8(param_1 + 0xe8);
  FUN_1095b10e8(param_1 + 0xc0);
  FUN_1095b1050(param_1 + 0x88);
  FUN_1095b1050(param_1 + 0x48);
  FUN_1095b1050(param_1 + 8);
  return param_1;
}



/* Entry: 1095ae094; end: 1095ae097;  */

long * FUN_1095ae094(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1095ae098; end: 1095ae11b;  */

void FUN_1095ae098(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1095b1198();
    lVar2 = uVar1 + 0x58;
  }
  else {
    lVar2 = param_1;
    func_0x00010567529c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1095ae11c; end: 1095ae36b;  */

void FUN_1095ae11c(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint *unaff_x21;
  ulong uVar20;
  float *unaff_x23;
  ulong unaff_x24;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  float fVar37;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fStack_254;
  ulong uStack_250;
  float fStack_248;
  float fStack_244;
  undefined2 uStack_23f;
  undefined1 uStack_23d;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined1 auStack_1fc [64];
  float afStack_1bc [2];
  float fStack_1b4;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float afStack_17c [5];
  ulong uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined1 auStack_13c [2];
  undefined1 uStack_13a;
  long lStack_130;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1;
  if ((param_1[0x38] != param_1[0x42]) && (*(long *)(param_1 + 0x3a) != 0)) {
    bVar11 = (byte)param_1[0x40];
    unaff_x21 = (uint *)(ulong)bVar11;
    if (bVar11 != 0) {
      puVar19 = *(uint **)(param_1 + 0x3c);
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      if (puVar19 != (uint *)0x0) {
        puVar1 = puVar19 + 2;
        do {
          lVar17 = *(long *)puVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *(long *)puVar1 = lVar17 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)puVar19 + 0x10))(puVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          puVar14 = puVar19;
        }
      }
      if (bVar11 == 2) {
        if (*(long *)(param_1 + 0x2a) == 0) {
          uVar24 = 0x80;
          __Znwm(0x80);
          func_0x000109cda3ec();
          FUN_10938cda4(param_1 + 0x2a,uVar24);
          uVar24 = *(undefined8 *)(param_1 + 0x2a);
          (**(code **)(**(long **)(param_1 + 0x52) + 0x20))(&puStack_60);
          unaff_x21 = puStack_60;
          if (*(char *)((long)param_1 + 0xdf) < '\0') {
            func_0x000107c3192c(&uStack_50,*(undefined8 *)(param_1 + 0x32),
                                *(undefined8 *)(param_1 + 0x34));
          }
          else {
            uStack_48 = *(undefined8 *)(param_1 + 0x34);
            uStack_50 = *(undefined8 *)(param_1 + 0x32);
            lStack_40 = *(long *)(param_1 + 0x36);
          }
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          func_0x000107c2ac94(&uStack_78,&uStack_50,&lStack_38,1);
          param_4 = param_1 + 0x2c;
          param_3 = (uint *)0x1;
          param_2 = unaff_x21;
          func_0x000109cdacb8(uVar24);
          puStack_58 = &uStack_78;
          func_0x000104c607c8(&puStack_58);
          if (lStack_40 < 0) {
            __ZdlPv(uStack_50);
          }
          puVar14 = puStack_60;
          puStack_60 = (uint *)0x0;
          if (puVar14 != (uint *)0x0) {
            (**(code **)(*(long *)puVar14 + 8))();
          }
        }
      }
      else if (bVar11 == 3) {
        param_1[0x38] = param_1[0x42];
        param_2 = *(uint **)(param_1 + 0x3e);
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
          lVar17 = *(long *)(param_1 + 0x2a);
          *(uint **)(param_1 + 0x2a) = param_2;
          if (lVar17 == 0) {
            return;
          }
          func_0x000109cda590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          return;
        }
        goto LAB_1095ae300;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
LAB_1095ae300:
  ___stack_chk_fail();
  puVar19 = puStack_60;
  puStack_60 = (uint *)0x0;
  if (puVar19 != (uint *)0x0) {
    (**(code **)(*(long *)puVar19 + 8))();
  }
  __Unwind_Resume();
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_4 & 1) == 0) {
    uVar24 = *(undefined8 *)param_2;
    uVar27 = *(undefined8 *)(param_2 + 6);
    uVar25 = *(undefined8 *)(param_2 + 4);
    uVar15 = param_2[1];
    *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)puVar14 = uVar24;
    *(undefined8 *)(puVar14 + 6) = uVar27;
    *(undefined8 *)(puVar14 + 4) = uVar25;
    lVar17 = *(long *)(param_2 + 0xe);
    uVar27 = *(undefined8 *)(param_2 + 8);
    uVar25 = *(undefined8 *)(param_2 + 0xe);
    uVar24 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(puVar14 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(puVar14 + 8) = uVar27;
    *(undefined8 *)(puVar14 + 0xe) = uVar25;
    *(undefined8 *)(puVar14 + 0xc) = uVar24;
    puVar19 = puVar14 + 0x14;
    puVar19[0] = 0;
    puVar19[1] = 0;
    *(uint **)(puVar14 + 0x10) = puVar14 + 2;
    *(uint **)(puVar14 + 0x12) = puVar19;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    if (lVar17 != 0) {
      piVar2 = (int *)(lVar17 + 0x14);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      uVar15 = param_2[1];
    }
    if (2 < (int)uVar15) {
      puVar14[1] = 0;
      param_3 = unaff_x21;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) goto LAB_1095aed2c;
      FUN_109a844cc(puVar14,param_2[1],0,0,0);
      if (0 < (int)puVar14[1]) {
        lVar17 = 0;
        lVar5 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)(param_2 + 0x12);
        lVar6 = *(long *)(puVar14 + 0x10);
        lVar8 = *(long *)(puVar14 + 0x12);
        do {
          *(undefined4 *)(lVar6 + lVar17 * 4) = *(undefined4 *)(lVar5 + lVar17 * 4);
          *(undefined8 *)(lVar8 + lVar17 * 8) = *(undefined8 *)(lVar7 + lVar17 * 8);
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)puVar14[1]);
      }
      return;
    }
    puVar16 = *(undefined8 **)(param_2 + 0x12);
    puVar18 = *(undefined8 **)(puVar14 + 0x12);
    *puVar18 = *puVar16;
    puVar18[1] = puVar16[1];
    goto LAB_1095aece4;
  }
  unaff_x23 = afStack_1bc;
  uVar15 = **(uint **)(param_2 + 0x10);
  uStack_250 = (ulong)uVar15;
  uVar4 = (*(uint **)(param_2 + 0x10))[1];
  unaff_x24 = (ulong)uVar4;
  fStack_244 = (float)(int)uVar4;
  fStack_248 = (float)(int)uVar15;
  fVar22 = ((float)param_4[1] * 0.017453292 * 0.5) / (fStack_244 / fStack_248);
  _tanf();
  _atanf();
  fStack_254 = (fVar22 + fVar22) * 0.5;
  fVar22 = fStack_254;
  _tanf();
  fVar26 = (fStack_244 / fStack_248) * fVar22;
  afStack_17c[0] = 2.0 / (fVar26 + fVar26);
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  afStack_17c[3] = 0.0;
  afStack_17c[4] = 0.0;
  afStack_17c[1] = 0.0;
  afStack_17c[2] = 0.0;
  uStack_168 = (ulong)(uint)(2.0 / (fVar22 + fVar22));
  uVar24 = NEON_fmov(0xbf800000,4);
  uStack_154 = (undefined4)uVar24;
  uStack_150 = (undefined4)((ulong)uVar24 >> 0x20);
  uStack_144 = 0xc0000000;
  fVar22 = (float)param_4[2];
  fVar37 = (float)param_4[6];
  fVar38 = (float)param_4[10];
  fVar39 = (fVar22 - fVar37) - fVar38;
  fVar26 = (fVar37 - fVar22) - fVar38;
  fVar44 = (fVar38 - fVar22) - fVar37;
  fVar38 = fVar22 + fVar37 + fVar38;
  fVar22 = fVar39;
  if (fVar39 <= fVar38) {
    fVar22 = fVar38;
  }
  bVar11 = 2;
  if (fVar26 <= fVar22) {
    fVar26 = fVar22;
    bVar11 = fVar38 < fVar39;
  }
  bVar12 = 3;
  if (fVar44 <= fVar26) {
    fVar44 = fVar26;
    bVar12 = bVar11;
  }
  fVar23 = SQRT(fVar44 + 1.0) * 0.5;
  fVar37 = 0.25 / fVar23;
  fVar38 = ((float)param_4[8] - (float)param_4[4]) * fVar37;
  fVar40 = ((float)param_4[3] + (float)param_4[5]) * fVar37;
  fVar42 = ((float)param_4[7] + (float)param_4[9]) * fVar37;
  fVar44 = ((float)param_4[3] - (float)param_4[5]) * fVar37;
  fVar28 = ((float)param_4[4] + (float)param_4[8]) * fVar37;
  uVar29 = SUB41(fVar40,0);
  uVar31 = (undefined1)((uint)fVar40 >> 8);
  uVar33 = (undefined1)((uint)fVar40 >> 0x10);
  uVar35 = (undefined1)((uint)fVar40 >> 0x18);
  fVar39 = fVar38;
  fVar22 = fVar42;
  fVar26 = fVar23;
  if (bVar12 != 2) {
    uVar29 = SUB41(fVar28,0);
    uVar31 = (undefined1)((uint)fVar28 >> 8);
    uVar33 = (undefined1)((uint)fVar28 >> 0x10);
    uVar35 = (undefined1)((uint)fVar28 >> 0x18);
    fVar39 = fVar44;
    fVar22 = fVar23;
    fVar26 = fVar42;
  }
  fVar37 = ((float)param_4[7] - (float)param_4[9]) * fVar37;
  fVar42 = fVar23;
  if (bVar12 != 0) {
    fVar42 = fVar37;
    fVar44 = fVar28;
    fVar38 = fVar40;
    fVar37 = fVar23;
  }
  uVar36 = (undefined1)((uint)fVar39 >> 0x18);
  uVar34 = (undefined1)((uint)fVar39 >> 0x10);
  uVar32 = (undefined1)((uint)fVar39 >> 8);
  uVar30 = SUB41(fVar39,0);
  fVar39 = (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29)));
  if (bVar12 < 2) {
    uVar30 = SUB41(fVar42,0);
    uVar32 = (undefined1)((uint)fVar42 >> 8);
    uVar34 = (undefined1)((uint)fVar42 >> 0x10);
    uVar36 = (undefined1)((uint)fVar42 >> 0x18);
    fVar22 = fVar44;
    fVar26 = fVar38;
    fVar39 = fVar37;
  }
  unaff_s9 = 0.0;
  unaff_s10 = ((fVar39 * -0.70710677 +
               (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar30))) * 0.70710677) -
              fVar26 * 0.0) - fVar22 * 0.0;
  unaff_s11 = (fVar39 * 0.70710677 +
               (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar30))) * 0.70710677 +
              fVar26 * 0.0) - fVar22 * 0.0;
  unaff_s12 = (fVar26 * 0.70710677 +
               (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar30))) * 0.0 +
              fVar22 * 0.70710677) - fVar39 * 0.0;
  unaff_s13 = fVar22 * 0.70710677 +
              (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar30))) * 0.0 + fVar39 * 0.0
              + fVar26 * -0.70710677;
  if (*(char *)((long)param_4 + 1) == '\0') goto LAB_1095ae8b8;
  unaff_s9 = 0.0;
  if ((bRam0000000113733038 & 1) == 0) goto LAB_1095aed30;
  do {
    fVar23 = (unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13) * -2.0 + 1.0;
    fVar28 = unaff_s11 * unaff_s12 + unaff_s13 * unaff_s10;
    fVar28 = fVar28 + fVar28;
    fVar40 = unaff_s11 * unaff_s13 - unaff_s12 * unaff_s10;
    fVar40 = fVar40 + fVar40;
    fVar38 = unaff_s11 * unaff_s12 - unaff_s13 * unaff_s10;
    fVar38 = fVar38 + fVar38;
    fVar22 = (unaff_s11 * unaff_s11 + unaff_s13 * unaff_s13) * -2.0 + 1.0;
    fVar39 = unaff_s12 * unaff_s13 + unaff_s11 * unaff_s10;
    fVar39 = fVar39 + fVar39;
    fVar44 = unaff_s11 * unaff_s13 + unaff_s12 * unaff_s10;
    fVar44 = fVar44 + fVar44;
    fVar37 = unaff_s12 * unaff_s13 - unaff_s11 * unaff_s10;
    fVar37 = fVar37 + fVar37;
    fVar26 = (unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12) * -2.0 + 1.0;
    fVar45 = fVar28 * uRam0000000113733048._4_4_ + fVar23 * (float)uRam0000000113733040 +
             fVar40 * (float)uRam0000000113733058;
    fVar46 = fVar28 * (float)uRam0000000113733050 + fVar23 * uRam0000000113733040._4_4_ +
             fVar40 * uRam0000000113733058._4_4_;
    fVar43 = fVar28 * uRam0000000113733050._4_4_ + fVar23 * (float)uRam0000000113733048 +
             fVar40 * fRam0000000113733060;
    fVar28 = fVar22 * uRam0000000113733048._4_4_ + fVar38 * (float)uRam0000000113733040 +
             fVar39 * (float)uRam0000000113733058;
    fVar40 = fVar22 * (float)uRam0000000113733050 + fVar38 * uRam0000000113733040._4_4_ +
             fVar39 * uRam0000000113733058._4_4_;
    fVar41 = fVar22 * uRam0000000113733050._4_4_ + fVar38 * (float)uRam0000000113733048 +
             fVar39 * fRam0000000113733060;
    fVar38 = fVar37 * uRam0000000113733048._4_4_ + fVar44 * (float)uRam0000000113733040 +
             fVar26 * (float)uRam0000000113733058;
    fVar47 = fVar37 * (float)uRam0000000113733050 + fVar44 * uRam0000000113733040._4_4_ +
             fVar26 * uRam0000000113733058._4_4_;
    fVar26 = fVar37 * uRam0000000113733050._4_4_ + fVar44 * (float)uRam0000000113733048 +
             fVar26 * fRam0000000113733060;
    fVar48 = uRam0000000113733040._4_4_ * fVar28 + (float)uRam0000000113733040 * fVar45 +
             (float)uRam0000000113733048 * fVar38;
    fVar37 = uRam0000000113733040._4_4_ * fVar40 + (float)uRam0000000113733040 * fVar46 +
             (float)uRam0000000113733048 * fVar47;
    fVar39 = uRam0000000113733040._4_4_ * fVar41 + (float)uRam0000000113733040 * fVar43 +
             (float)uRam0000000113733048 * fVar26;
    fVar22 = (float)uRam0000000113733050 * fVar28 + uRam0000000113733048._4_4_ * fVar45 +
             uRam0000000113733050._4_4_ * fVar38;
    fVar42 = (float)uRam0000000113733050 * fVar40 + uRam0000000113733048._4_4_ * fVar46 +
             uRam0000000113733050._4_4_ * fVar47;
    fVar23 = (float)uRam0000000113733050 * fVar41 + uRam0000000113733048._4_4_ * fVar43 +
             uRam0000000113733050._4_4_ * fVar26;
    fVar28 = fVar28 * uRam0000000113733058._4_4_ + (float)uRam0000000113733058 * fVar45 +
             fRam0000000113733060 * fVar38;
    fVar40 = uRam0000000113733058._4_4_ * fVar40 + (float)uRam0000000113733058 * fVar46 +
             fRam0000000113733060 * fVar47;
    fVar41 = uRam0000000113733058._4_4_ * fVar41 + (float)uRam0000000113733058 * fVar43 +
             fRam0000000113733060 * fVar26;
    fVar43 = (fVar48 - fVar42) - fVar41;
    fVar44 = (fVar42 - fVar48) - fVar41;
    fVar26 = (fVar41 - fVar48) - fVar42;
    fVar41 = fVar48 + fVar42 + fVar41;
    fVar38 = fVar43;
    if (fVar43 <= fVar41) {
      fVar38 = fVar41;
    }
    bVar11 = 2;
    if (fVar44 <= fVar38) {
      fVar44 = fVar38;
      bVar11 = fVar41 < fVar43;
    }
    bVar12 = 3;
    if (fVar26 <= fVar44) {
      fVar26 = fVar44;
      bVar12 = bVar11;
    }
    unaff_s13 = SQRT(fVar26 + 1.0) * 0.5;
    fVar26 = 0.25 / unaff_s13;
    if (bVar12 < 2) {
      if (bVar12 == 0) {
        fVar44 = fVar37 - fVar22;
        unaff_s10 = unaff_s13;
        unaff_s11 = (fVar23 - fVar40) * fVar26;
        unaff_s12 = (fVar28 - fVar39) * fVar26;
      }
      else {
        unaff_s10 = (fVar23 - fVar40) * fVar26;
        fVar44 = fVar28 + fVar39;
        unaff_s11 = unaff_s13;
        unaff_s12 = (fVar22 + fVar37) * fVar26;
      }
LAB_1095ae894:
      unaff_s13 = fVar44 * fVar26;
    }
    else {
      if (bVar12 == 2) {
        unaff_s10 = (fVar28 - fVar39) * fVar26;
        unaff_s11 = (fVar22 + fVar37) * fVar26;
        fVar44 = fVar40 + fVar23;
        unaff_s12 = unaff_s13;
        goto LAB_1095ae894;
      }
      unaff_s10 = (fVar37 - fVar22) * fVar26;
      unaff_s11 = (fVar28 + fVar39) * fVar26;
      unaff_s12 = (fVar40 + fVar23) * fVar26;
    }
LAB_1095ae8b8:
    fVar22 = unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13 +
             unaff_s11 * unaff_s11 + unaff_s10 * unaff_s10;
    if (fVar22 == 0.0) {
      fVar26 = 0.0;
      uVar29 = 0;
      uVar31 = 0;
      uVar33 = 0;
      uVar35 = 0;
      fVar22 = 1.0;
    }
    else {
      fVar44 = 1.0 / SQRT(fVar22);
      fVar22 = unaff_s10 * fVar44;
      unaff_s9 = -(unaff_s11 * fVar44);
      fVar26 = -(unaff_s12 * fVar44);
      fVar44 = -(unaff_s13 * fVar44);
      uVar29 = SUB41(fVar44,0);
      uVar31 = (undefined1)((uint)fVar44 >> 8);
      uVar33 = (undefined1)((uint)fVar44 >> 0x10);
      uVar35 = (undefined1)((uint)fVar44 >> 0x18);
    }
    fVar37 = (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29))) *
             (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29)));
    fVar38 = unaff_s9 * (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29)));
    fVar39 = fVar26 * (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29)));
    fVar44 = (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29))) * fVar22;
    fVar28 = unaff_s9 * fVar26 + fVar44;
    fVar40 = fVar38 - fVar26 * fVar22;
    fVar44 = unaff_s9 * fVar26 - fVar44;
    fVar23 = fVar39 + unaff_s9 * fVar22;
    fVar38 = fVar38 + fVar26 * fVar22;
    fVar39 = fVar39 - unaff_s9 * fVar22;
    *unaff_x23 = (fVar26 * fVar26 + fVar37) * -2.0 + 1.0;
    unaff_x23[1] = fVar28 + fVar28;
    unaff_x23[2] = fVar40 + fVar40;
    unaff_x23[3] = 0.0;
    unaff_x23[4] = fVar44 + fVar44;
    unaff_x23[5] = (unaff_s9 * unaff_s9 + fVar37) * -2.0 + 1.0;
    unaff_x23[6] = fVar23 + fVar23;
    unaff_x23[7] = 0.0;
    unaff_x23[8] = fVar38 + fVar38;
    unaff_x23[9] = fVar39 + fVar39;
    unaff_x23[10] = (unaff_s9 * unaff_s9 + fVar26 * fVar26) * -2.0 + 1.0;
    unaff_x23[0xd] = 0.0;
    unaff_x23[0xe] = 0.0;
    unaff_x23[0xb] = 0.0;
    unaff_x23[0xc] = 0.0;
    unaff_x23[0xf] = 1.0;
    FUN_1094f5708(&uStack_23c,afStack_1bc);
    FUN_109519fd0(auStack_1fc,afStack_17c,&uStack_23c);
    fVar44 = fStack_194;
    fVar26 = fStack_19c;
    fVar22 = fStack_1b4;
    fVar37 = -fStack_19c;
    fVar39 = -fStack_194;
    fVar23 = *unaff_x23;
    fVar38 = fStack_198;
    _acosf();
    fStack_230 = -fStack_248;
    uStack_23c = 0;
    fStack_238 = fStack_248;
    fStack_234 = fStack_244;
    fVar37 = fVar37 - fVar23;
    fVar39 = fVar39 - fVar22;
    unaff_x23[0x20] = fVar37;
    unaff_x23[0x21] = 0.0;
    unaff_x23[0x22] = fVar39;
    FUN_1095b1264(auStack_1fc,auStack_13c,&uStack_23c);
    unaff_x23[0x20] = fVar23 - fVar26;
    fVar22 = fVar22 - fVar44;
    unaff_x23[0x21] = 0.0;
    unaff_x23[0x22] = fVar22;
    fVar26 = fVar39;
    FUN_1095b1264(auStack_1fc,auStack_13c,&uStack_23c);
    fVar22 = fVar22 - fVar37;
    fVar26 = fVar26 - fVar39;
    unaff_s12 = 1.0;
    fVar44 = 1.0 / SQRT(fVar22 * fVar22 + fVar26 * fVar26);
    fVar22 = fVar22 * fVar44;
    fVar26 = fVar26 * fVar44;
    fVar23 = fVar39 + ((fStack_244 - fVar37) / fVar22) * fVar26;
    fVar44 = 0.0;
    unaff_s13 = 0.0;
    fVar39 = fVar39 + ((0.0 - fVar37) / fVar22) * fVar26;
    fVar22 = fVar44;
    if (fVar39 <= fStack_248) {
      fVar22 = fVar39;
    }
    fVar26 = 0.0;
    if (fVar23 <= fStack_248) {
      fVar26 = fVar23;
    }
    fVar37 = fVar44;
    if (0.0 <= fVar22) {
      fVar37 = fVar22;
    }
    unaff_s10 = fStack_248;
    if (fVar37 <= fStack_248) {
      unaff_s10 = fVar37;
    }
    if (0.0 <= fVar26) {
      fVar44 = fVar26;
    }
    unaff_s11 = fStack_248;
    if (fVar44 <= fStack_248) {
      unaff_s11 = fVar44;
    }
    fVar26 = (fVar38 - (1.5707964 - fStack_254)) / (0.0 - (1.5707964 - fStack_254));
    fVar22 = 0.0;
    if (0.0 <= fVar26) {
      fVar22 = fVar26;
    }
    uVar15 = *param_2;
    *puVar14 = 0x42ff0000;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[0xb] = 0;
    puVar14[0xc] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar19 = puVar14 + 0x14;
    puVar19[0] = 0;
    puVar19[1] = 0;
    *(uint **)(puVar14 + 0x10) = puVar14 + 2;
    *(uint **)(puVar14 + 0x12) = puVar19;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    fVar26 = 1.0;
    if (fVar22 <= 1.0) {
      fVar26 = fVar22;
    }
    unaff_x23[0x20] = (float)uStack_250;
    unaff_x23[0x21] = (float)unaff_x24;
    FUN_109a83fd0(puVar14,2,auStack_13c,uVar15 & 0xfff);
    unaff_x21 = param_3;
    unaff_s9 = fStack_248;
    if (0 < (int)(float)uStack_250) {
      uVar21 = 0;
      fVar22 = fVar26 * 0.0 + (1.0 - fVar26) * fStack_248 * 0.5;
      fStack_254 = fStack_248 - fVar22;
      unaff_s9 = 0.5;
      do {
        if (0 < (int)(float)unaff_x24) {
          lVar17 = 0;
          uVar20 = 0;
          unaff_s13 = (float)(uVar21 & 0xffffffff);
          fVar44 = (unaff_s13 - fVar22) / fStack_254;
          fVar26 = 0.0;
          if (0.0 <= fVar44) {
            fVar26 = fVar44;
          }
          fVar44 = 1.0;
          if (fVar26 <= 1.0) {
            fVar44 = fVar26;
          }
          unaff_s12 = fVar44 * fStack_248;
          do {
            fVar26 = ((float)(uVar20 & 0xffffffff) + 0.5) / fStack_244;
            fVar26 = unaff_s11 * fVar26 + (1.0 - fVar26) * unaff_s10;
            if (((ulong)param_3 & 1) == 0) {
              if (unaff_s13 <= fVar22) {
                fVar26 = (fVar26 + unaff_s13) - fVar22;
              }
              else {
                fVar26 = unaff_s12 + (1.0 - fVar44) * fVar26;
              }
              uStack_23d = 0xff;
              uStack_23f = 0xffff;
              FUN_1095b1314(fVar26,auStack_13c,param_2,uVar20,&uStack_23f);
              puVar3 = (undefined2 *)
                       (*(long *)(puVar14 + 4) + uVar21 * **(long **)(puVar14 + 0x12) + lVar17);
              *puVar3 = *(undefined2 *)(unaff_x23 + 0x20);
              *(undefined1 *)(puVar3 + 1) = uStack_13a;
            }
            else {
              if (unaff_s13 <= fVar26) {
                fVar26 = fVar22 + (unaff_s13 - fVar26);
              }
              else {
                fVar38 = (unaff_s13 - fVar26) / (fStack_248 - fVar26);
                fVar26 = 0.0;
                if (0.0 <= fVar38) {
                  fVar26 = fVar38;
                }
                fVar38 = 1.0;
                if (fVar26 <= 1.0) {
                  fVar38 = fVar26;
                }
                fVar26 = fVar38 * fStack_248 + (1.0 - fVar38) * fVar22;
              }
              puVar19 = param_2;
              FUN_1095b1458(fVar26,param_2,uVar20);
              *(char *)(*(long *)(puVar14 + 4) + uVar21 * **(long **)(puVar14 + 0x12) + uVar20) =
                   (char)puVar19;
            }
            uVar20 = uVar20 + 1;
            lVar17 = lVar17 + 3;
          } while (unaff_x24 != uVar20);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uStack_250);
    }
LAB_1095aece4:
    param_3 = unaff_x21;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
      return;
    }
LAB_1095aed2c:
    ___stack_chk_fail();
LAB_1095aed30:
    iVar13 = 0x13733038;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      uRam0000000113733048 = 0;
      uRam0000000113733040 = 0x3f800000;
      uRam0000000113733058 = 0x8000000080000000;
      uRam0000000113733050 = 0x3f800000;
      fRam0000000113733060 = -1.0;
      ___cxa_guard_release(0x113733038);
    }
  } while( true );
}



/* Entry: 1095ae36c; end: 1095aed73;  */

void FUN_1095ae36c(undefined8 *param_1,uint *param_2,ulong param_3,byte *param_4)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong unaff_x21;
  ulong uVar17;
  float *unaff_x23;
  ulong unaff_x24;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fStack_1d4;
  ulong uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  undefined2 uStack_1bf;
  undefined1 uStack_1bd;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined1 auStack_17c [64];
  float afStack_13c [2];
  float fStack_134;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float afStack_fc [5];
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined1 auStack_bc [2];
  undefined1 uStack_ba;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_4 & 1) == 0) {
    uVar22 = *(undefined8 *)param_2;
    uVar25 = *(undefined8 *)(param_2 + 6);
    uVar23 = *(undefined8 *)(param_2 + 4);
    uVar14 = param_2[1];
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar22;
    param_1[3] = uVar25;
    param_1[2] = uVar23;
    lVar18 = *(long *)(param_2 + 0xe);
    uVar25 = *(undefined8 *)(param_2 + 8);
    uVar23 = *(undefined8 *)(param_2 + 0xe);
    uVar22 = *(undefined8 *)(param_2 + 0xc);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar25;
    param_1[7] = uVar23;
    param_1[6] = uVar22;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (lVar18 != 0) {
      piVar1 = (int *)(lVar18 + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar14 = param_2[1];
    }
    if (2 < (int)uVar14) {
      *(undefined4 *)((long)param_1 + 4) = 0;
      param_3 = unaff_x21;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) goto LAB_1095aed2c;
      FUN_109a844cc(param_1,param_2[1],0,0,0);
      if (0 < *(int *)((long)param_1 + 4)) {
        lVar18 = 0;
        lVar4 = *(long *)(param_2 + 0x10);
        lVar6 = *(long *)(param_2 + 0x12);
        lVar5 = param_1[8];
        lVar7 = param_1[9];
        do {
          *(undefined4 *)(lVar5 + lVar18 * 4) = *(undefined4 *)(lVar4 + lVar18 * 4);
          *(undefined8 *)(lVar7 + lVar18 * 8) = *(undefined8 *)(lVar6 + lVar18 * 8);
          lVar18 = lVar18 + 1;
        } while (lVar18 < *(int *)((long)param_1 + 4));
      }
      return;
    }
    puVar15 = *(undefined8 **)(param_2 + 0x12);
    puVar16 = (undefined8 *)param_1[9];
    *puVar16 = *puVar15;
    puVar16[1] = puVar15[1];
    goto LAB_1095aece4;
  }
  unaff_x23 = afStack_13c;
  uVar14 = **(uint **)(param_2 + 0x10);
  uStack_1d0 = (ulong)uVar14;
  uVar3 = (*(uint **)(param_2 + 0x10))[1];
  unaff_x24 = (ulong)uVar3;
  fStack_1c4 = (float)(int)uVar3;
  fStack_1c8 = (float)(int)uVar14;
  fVar20 = (*(float *)(param_4 + 4) * 0.017453292 * 0.5) / (fStack_1c4 / fStack_1c8);
  _tanf();
  _atanf();
  fStack_1d4 = (fVar20 + fVar20) * 0.5;
  fVar20 = fStack_1d4;
  _tanf();
  fVar24 = (fStack_1c4 / fStack_1c8) * fVar20;
  afStack_fc[0] = 2.0 / (fVar24 + fVar24);
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  afStack_fc[3] = 0.0;
  afStack_fc[4] = 0.0;
  afStack_fc[1] = 0.0;
  afStack_fc[2] = 0.0;
  uStack_e8 = (ulong)(uint)(2.0 / (fVar20 + fVar20));
  uVar22 = NEON_fmov(0xbf800000,4);
  uStack_d4 = (undefined4)uVar22;
  uStack_d0 = (undefined4)((ulong)uVar22 >> 0x20);
  uStack_c4 = 0xc0000000;
  fVar20 = *(float *)(param_4 + 8);
  fVar35 = *(float *)(param_4 + 0x18);
  fVar36 = *(float *)(param_4 + 0x28);
  fVar37 = (fVar20 - fVar35) - fVar36;
  fVar24 = (fVar35 - fVar20) - fVar36;
  fVar42 = (fVar36 - fVar20) - fVar35;
  fVar36 = fVar20 + fVar35 + fVar36;
  fVar20 = fVar37;
  if (fVar37 <= fVar36) {
    fVar20 = fVar36;
  }
  bVar10 = 2;
  if (fVar24 <= fVar20) {
    fVar24 = fVar20;
    bVar10 = fVar36 < fVar37;
  }
  bVar11 = 3;
  if (fVar42 <= fVar24) {
    fVar42 = fVar24;
    bVar11 = bVar10;
  }
  fVar21 = SQRT(fVar42 + 1.0) * 0.5;
  fVar35 = 0.25 / fVar21;
  fVar36 = (*(float *)(param_4 + 0x20) - *(float *)(param_4 + 0x10)) * fVar35;
  fVar38 = (*(float *)(param_4 + 0xc) + *(float *)(param_4 + 0x14)) * fVar35;
  fVar40 = (*(float *)(param_4 + 0x1c) + *(float *)(param_4 + 0x24)) * fVar35;
  fVar42 = (*(float *)(param_4 + 0xc) - *(float *)(param_4 + 0x14)) * fVar35;
  fVar26 = (*(float *)(param_4 + 0x10) + *(float *)(param_4 + 0x20)) * fVar35;
  uVar27 = SUB41(fVar38,0);
  uVar29 = (undefined1)((uint)fVar38 >> 8);
  uVar31 = (undefined1)((uint)fVar38 >> 0x10);
  uVar33 = (undefined1)((uint)fVar38 >> 0x18);
  fVar37 = fVar36;
  fVar20 = fVar40;
  fVar24 = fVar21;
  if (bVar11 != 2) {
    uVar27 = SUB41(fVar26,0);
    uVar29 = (undefined1)((uint)fVar26 >> 8);
    uVar31 = (undefined1)((uint)fVar26 >> 0x10);
    uVar33 = (undefined1)((uint)fVar26 >> 0x18);
    fVar37 = fVar42;
    fVar20 = fVar21;
    fVar24 = fVar40;
  }
  fVar35 = (*(float *)(param_4 + 0x1c) - *(float *)(param_4 + 0x24)) * fVar35;
  fVar40 = fVar21;
  if (bVar11 != 0) {
    fVar40 = fVar35;
    fVar42 = fVar26;
    fVar36 = fVar38;
    fVar35 = fVar21;
  }
  uVar34 = (undefined1)((uint)fVar37 >> 0x18);
  uVar32 = (undefined1)((uint)fVar37 >> 0x10);
  uVar30 = (undefined1)((uint)fVar37 >> 8);
  uVar28 = SUB41(fVar37,0);
  fVar37 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
  if (bVar11 < 2) {
    uVar28 = SUB41(fVar40,0);
    uVar30 = (undefined1)((uint)fVar40 >> 8);
    uVar32 = (undefined1)((uint)fVar40 >> 0x10);
    uVar34 = (undefined1)((uint)fVar40 >> 0x18);
    fVar20 = fVar42;
    fVar24 = fVar36;
    fVar37 = fVar35;
  }
  unaff_s9 = 0.0;
  unaff_s10 = ((fVar37 * -0.70710677 +
               (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar28))) * 0.70710677) -
              fVar24 * 0.0) - fVar20 * 0.0;
  unaff_s11 = (fVar37 * 0.70710677 +
               (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar28))) * 0.70710677 +
              fVar24 * 0.0) - fVar20 * 0.0;
  unaff_s12 = (fVar24 * 0.70710677 +
               (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar28))) * 0.0 +
              fVar20 * 0.70710677) - fVar37 * 0.0;
  unaff_s13 = fVar20 * 0.70710677 +
              (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar28))) * 0.0 + fVar37 * 0.0
              + fVar24 * -0.70710677;
  if (param_4[1] == 0) goto LAB_1095ae8b8;
  unaff_s9 = 0.0;
  if ((bRam0000000113733038 & 1) == 0) goto LAB_1095aed30;
  do {
    fVar21 = (unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13) * -2.0 + 1.0;
    fVar26 = unaff_s11 * unaff_s12 + unaff_s13 * unaff_s10;
    fVar26 = fVar26 + fVar26;
    fVar38 = unaff_s11 * unaff_s13 - unaff_s12 * unaff_s10;
    fVar38 = fVar38 + fVar38;
    fVar36 = unaff_s11 * unaff_s12 - unaff_s13 * unaff_s10;
    fVar36 = fVar36 + fVar36;
    fVar20 = (unaff_s11 * unaff_s11 + unaff_s13 * unaff_s13) * -2.0 + 1.0;
    fVar37 = unaff_s12 * unaff_s13 + unaff_s11 * unaff_s10;
    fVar37 = fVar37 + fVar37;
    fVar42 = unaff_s11 * unaff_s13 + unaff_s12 * unaff_s10;
    fVar42 = fVar42 + fVar42;
    fVar35 = unaff_s12 * unaff_s13 - unaff_s11 * unaff_s10;
    fVar35 = fVar35 + fVar35;
    fVar24 = (unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12) * -2.0 + 1.0;
    fVar43 = fVar26 * uRam0000000113733048._4_4_ + fVar21 * (float)uRam0000000113733040 +
             fVar38 * (float)uRam0000000113733058;
    fVar44 = fVar26 * (float)uRam0000000113733050 + fVar21 * uRam0000000113733040._4_4_ +
             fVar38 * uRam0000000113733058._4_4_;
    fVar41 = fVar26 * uRam0000000113733050._4_4_ + fVar21 * (float)uRam0000000113733048 +
             fVar38 * fRam0000000113733060;
    fVar26 = fVar20 * uRam0000000113733048._4_4_ + fVar36 * (float)uRam0000000113733040 +
             fVar37 * (float)uRam0000000113733058;
    fVar38 = fVar20 * (float)uRam0000000113733050 + fVar36 * uRam0000000113733040._4_4_ +
             fVar37 * uRam0000000113733058._4_4_;
    fVar39 = fVar20 * uRam0000000113733050._4_4_ + fVar36 * (float)uRam0000000113733048 +
             fVar37 * fRam0000000113733060;
    fVar36 = fVar35 * uRam0000000113733048._4_4_ + fVar42 * (float)uRam0000000113733040 +
             fVar24 * (float)uRam0000000113733058;
    fVar45 = fVar35 * (float)uRam0000000113733050 + fVar42 * uRam0000000113733040._4_4_ +
             fVar24 * uRam0000000113733058._4_4_;
    fVar24 = fVar35 * uRam0000000113733050._4_4_ + fVar42 * (float)uRam0000000113733048 +
             fVar24 * fRam0000000113733060;
    fVar46 = uRam0000000113733040._4_4_ * fVar26 + (float)uRam0000000113733040 * fVar43 +
             (float)uRam0000000113733048 * fVar36;
    fVar35 = uRam0000000113733040._4_4_ * fVar38 + (float)uRam0000000113733040 * fVar44 +
             (float)uRam0000000113733048 * fVar45;
    fVar37 = uRam0000000113733040._4_4_ * fVar39 + (float)uRam0000000113733040 * fVar41 +
             (float)uRam0000000113733048 * fVar24;
    fVar20 = (float)uRam0000000113733050 * fVar26 + uRam0000000113733048._4_4_ * fVar43 +
             uRam0000000113733050._4_4_ * fVar36;
    fVar40 = (float)uRam0000000113733050 * fVar38 + uRam0000000113733048._4_4_ * fVar44 +
             uRam0000000113733050._4_4_ * fVar45;
    fVar21 = (float)uRam0000000113733050 * fVar39 + uRam0000000113733048._4_4_ * fVar41 +
             uRam0000000113733050._4_4_ * fVar24;
    fVar26 = fVar26 * uRam0000000113733058._4_4_ + (float)uRam0000000113733058 * fVar43 +
             fRam0000000113733060 * fVar36;
    fVar38 = uRam0000000113733058._4_4_ * fVar38 + (float)uRam0000000113733058 * fVar44 +
             fRam0000000113733060 * fVar45;
    fVar39 = uRam0000000113733058._4_4_ * fVar39 + (float)uRam0000000113733058 * fVar41 +
             fRam0000000113733060 * fVar24;
    fVar41 = (fVar46 - fVar40) - fVar39;
    fVar42 = (fVar40 - fVar46) - fVar39;
    fVar24 = (fVar39 - fVar46) - fVar40;
    fVar39 = fVar46 + fVar40 + fVar39;
    fVar36 = fVar41;
    if (fVar41 <= fVar39) {
      fVar36 = fVar39;
    }
    bVar10 = 2;
    if (fVar42 <= fVar36) {
      fVar42 = fVar36;
      bVar10 = fVar39 < fVar41;
    }
    bVar11 = 3;
    if (fVar24 <= fVar42) {
      fVar24 = fVar42;
      bVar11 = bVar10;
    }
    unaff_s13 = SQRT(fVar24 + 1.0) * 0.5;
    fVar24 = 0.25 / unaff_s13;
    if (bVar11 < 2) {
      if (bVar11 == 0) {
        fVar42 = fVar35 - fVar20;
        unaff_s10 = unaff_s13;
        unaff_s11 = (fVar21 - fVar38) * fVar24;
        unaff_s12 = (fVar26 - fVar37) * fVar24;
      }
      else {
        unaff_s10 = (fVar21 - fVar38) * fVar24;
        fVar42 = fVar26 + fVar37;
        unaff_s11 = unaff_s13;
        unaff_s12 = (fVar20 + fVar35) * fVar24;
      }
LAB_1095ae894:
      unaff_s13 = fVar42 * fVar24;
    }
    else {
      if (bVar11 == 2) {
        unaff_s10 = (fVar26 - fVar37) * fVar24;
        unaff_s11 = (fVar20 + fVar35) * fVar24;
        fVar42 = fVar38 + fVar21;
        unaff_s12 = unaff_s13;
        goto LAB_1095ae894;
      }
      unaff_s10 = (fVar35 - fVar20) * fVar24;
      unaff_s11 = (fVar26 + fVar37) * fVar24;
      unaff_s12 = (fVar38 + fVar21) * fVar24;
    }
LAB_1095ae8b8:
    fVar20 = unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13 +
             unaff_s11 * unaff_s11 + unaff_s10 * unaff_s10;
    if (fVar20 == 0.0) {
      fVar24 = 0.0;
      uVar27 = 0;
      uVar29 = 0;
      uVar31 = 0;
      uVar33 = 0;
      fVar20 = 1.0;
    }
    else {
      fVar42 = 1.0 / SQRT(fVar20);
      fVar20 = unaff_s10 * fVar42;
      unaff_s9 = -(unaff_s11 * fVar42);
      fVar24 = -(unaff_s12 * fVar42);
      fVar42 = -(unaff_s13 * fVar42);
      uVar27 = SUB41(fVar42,0);
      uVar29 = (undefined1)((uint)fVar42 >> 8);
      uVar31 = (undefined1)((uint)fVar42 >> 0x10);
      uVar33 = (undefined1)((uint)fVar42 >> 0x18);
    }
    fVar35 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27))) *
             (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
    fVar36 = unaff_s9 * (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
    fVar37 = fVar24 * (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
    fVar42 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27))) * fVar20;
    fVar26 = unaff_s9 * fVar24 + fVar42;
    fVar38 = fVar36 - fVar24 * fVar20;
    fVar42 = unaff_s9 * fVar24 - fVar42;
    fVar21 = fVar37 + unaff_s9 * fVar20;
    fVar36 = fVar36 + fVar24 * fVar20;
    fVar37 = fVar37 - unaff_s9 * fVar20;
    *unaff_x23 = (fVar24 * fVar24 + fVar35) * -2.0 + 1.0;
    unaff_x23[1] = fVar26 + fVar26;
    unaff_x23[2] = fVar38 + fVar38;
    unaff_x23[3] = 0.0;
    unaff_x23[4] = fVar42 + fVar42;
    unaff_x23[5] = (unaff_s9 * unaff_s9 + fVar35) * -2.0 + 1.0;
    unaff_x23[6] = fVar21 + fVar21;
    unaff_x23[7] = 0.0;
    unaff_x23[8] = fVar36 + fVar36;
    unaff_x23[9] = fVar37 + fVar37;
    unaff_x23[10] = (unaff_s9 * unaff_s9 + fVar24 * fVar24) * -2.0 + 1.0;
    unaff_x23[0xd] = 0.0;
    unaff_x23[0xe] = 0.0;
    unaff_x23[0xb] = 0.0;
    unaff_x23[0xc] = 0.0;
    unaff_x23[0xf] = 1.0;
    FUN_1094f5708(&uStack_1bc,afStack_13c);
    FUN_109519fd0(auStack_17c,afStack_fc,&uStack_1bc);
    fVar42 = fStack_114;
    fVar24 = fStack_11c;
    fVar20 = fStack_134;
    fVar35 = -fStack_11c;
    fVar37 = -fStack_114;
    fVar21 = *unaff_x23;
    fVar36 = fStack_118;
    _acosf();
    fStack_1b0 = -fStack_1c8;
    uStack_1bc = 0;
    fStack_1b8 = fStack_1c8;
    fStack_1b4 = fStack_1c4;
    fVar35 = fVar35 - fVar21;
    fVar37 = fVar37 - fVar20;
    unaff_x23[0x20] = fVar35;
    unaff_x23[0x21] = 0.0;
    unaff_x23[0x22] = fVar37;
    FUN_1095b1264(auStack_17c,auStack_bc,&uStack_1bc);
    unaff_x23[0x20] = fVar21 - fVar24;
    fVar20 = fVar20 - fVar42;
    unaff_x23[0x21] = 0.0;
    unaff_x23[0x22] = fVar20;
    fVar24 = fVar37;
    FUN_1095b1264(auStack_17c,auStack_bc,&uStack_1bc);
    fVar20 = fVar20 - fVar35;
    fVar24 = fVar24 - fVar37;
    unaff_s12 = 1.0;
    fVar42 = 1.0 / SQRT(fVar20 * fVar20 + fVar24 * fVar24);
    fVar20 = fVar20 * fVar42;
    fVar24 = fVar24 * fVar42;
    fVar21 = fVar37 + ((fStack_1c4 - fVar35) / fVar20) * fVar24;
    fVar42 = 0.0;
    unaff_s13 = 0.0;
    fVar37 = fVar37 + ((0.0 - fVar35) / fVar20) * fVar24;
    fVar20 = fVar42;
    if (fVar37 <= fStack_1c8) {
      fVar20 = fVar37;
    }
    fVar24 = 0.0;
    if (fVar21 <= fStack_1c8) {
      fVar24 = fVar21;
    }
    fVar35 = fVar42;
    if (0.0 <= fVar20) {
      fVar35 = fVar20;
    }
    unaff_s10 = fStack_1c8;
    if (fVar35 <= fStack_1c8) {
      unaff_s10 = fVar35;
    }
    if (0.0 <= fVar24) {
      fVar42 = fVar24;
    }
    unaff_s11 = fStack_1c8;
    if (fVar42 <= fStack_1c8) {
      unaff_s11 = fVar42;
    }
    fVar24 = (fVar36 - (1.5707964 - fStack_1d4)) / (0.0 - (1.5707964 - fStack_1d4));
    fVar20 = 0.0;
    if (0.0 <= fVar24) {
      fVar20 = fVar24;
    }
    uVar14 = *param_2;
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    fVar24 = 1.0;
    if (fVar20 <= 1.0) {
      fVar24 = fVar20;
    }
    unaff_x23[0x20] = (float)uStack_1d0;
    unaff_x23[0x21] = (float)unaff_x24;
    FUN_109a83fd0(param_1,2,auStack_bc,uVar14 & 0xfff);
    unaff_x21 = param_3;
    unaff_s9 = fStack_1c8;
    if (0 < (int)(float)uStack_1d0) {
      uVar19 = 0;
      fVar20 = fVar24 * 0.0 + (1.0 - fVar24) * fStack_1c8 * 0.5;
      fStack_1d4 = fStack_1c8 - fVar20;
      unaff_s9 = 0.5;
      do {
        if (0 < (int)(float)unaff_x24) {
          lVar18 = 0;
          uVar17 = 0;
          unaff_s13 = (float)(uVar19 & 0xffffffff);
          fVar42 = (unaff_s13 - fVar20) / fStack_1d4;
          fVar24 = 0.0;
          if (0.0 <= fVar42) {
            fVar24 = fVar42;
          }
          fVar42 = 1.0;
          if (fVar24 <= 1.0) {
            fVar42 = fVar24;
          }
          unaff_s12 = fVar42 * fStack_1c8;
          do {
            fVar24 = ((float)(uVar17 & 0xffffffff) + 0.5) / fStack_1c4;
            fVar24 = unaff_s11 * fVar24 + (1.0 - fVar24) * unaff_s10;
            if ((param_3 & 1) == 0) {
              if (unaff_s13 <= fVar20) {
                fVar24 = (fVar24 + unaff_s13) - fVar20;
              }
              else {
                fVar24 = unaff_s12 + (1.0 - fVar42) * fVar24;
              }
              uStack_1bd = 0xff;
              uStack_1bf = 0xffff;
              FUN_1095b1314(fVar24,auStack_bc,param_2,uVar17,&uStack_1bf);
              puVar2 = (undefined2 *)(param_1[2] + uVar19 * *(long *)param_1[9] + lVar18);
              *puVar2 = *(undefined2 *)(unaff_x23 + 0x20);
              *(undefined1 *)(puVar2 + 1) = uStack_ba;
            }
            else {
              if (unaff_s13 <= fVar24) {
                fVar24 = fVar20 + (unaff_s13 - fVar24);
              }
              else {
                fVar36 = (unaff_s13 - fVar24) / (fStack_1c8 - fVar24);
                fVar24 = 0.0;
                if (0.0 <= fVar36) {
                  fVar24 = fVar36;
                }
                fVar36 = 1.0;
                if (fVar24 <= 1.0) {
                  fVar36 = fVar24;
                }
                fVar24 = fVar36 * fStack_1c8 + (1.0 - fVar36) * fVar20;
              }
              puVar13 = param_2;
              FUN_1095b1458(fVar24,param_2,uVar17);
              *(char *)(param_1[2] + uVar19 * *(long *)param_1[9] + uVar17) = (char)puVar13;
            }
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 3;
          } while (unaff_x24 != uVar17);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uStack_1d0);
    }
LAB_1095aece4:
    param_3 = unaff_x21;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
LAB_1095aed2c:
    ___stack_chk_fail();
LAB_1095aed30:
    iVar12 = 0x13733038;
    ___cxa_guard_acquire();
    if (iVar12 != 0) {
      uRam0000000113733048 = 0;
      uRam0000000113733040 = 0x3f800000;
      uRam0000000113733058 = 0x8000000080000000;
      uRam0000000113733050 = 0x3f800000;
      fRam0000000113733060 = -1.0;
      ___cxa_guard_release(0x113733038);
    }
  } while( true );
}



/* Entry: 1095aed74; end: 1095aefe7;  */

/* WARNING: Possible PIC construction at 0x0001095af2a8: Changing call to branch */

void FUN_1095aed74(undefined4 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint **ppuVar11;
  uint **ppuVar12;
  ulong *puVar13;
  long lVar14;
  uint **ppuVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  uint *puVar21;
  undefined1 uVar22;
  long lVar23;
  uint uVar24;
  long *plVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  int iVar30;
  undefined8 uVar31;
  int iVar32;
  uint *puVar33;
  uint *puVar34;
  uint *puVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  uint *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  uint **ppuStack_190;
  ulong *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong *puStack_f0;
  undefined4 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  int iStack_d0;
  int iStack_cc;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  int iStack_90;
  int iStack_8c;
  uint *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_2;
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  lVar20 = ((ulong)(uVar2 >> 3) & 0x1ff) + 1;
  iVar26 = (int)lVar20;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  uVar6 = iVar26 * 8 - 8;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar32 = (int)param_4;
  iVar30 = (int)param_3;
  iStack_90 = iVar32;
  iStack_8c = iVar30;
  FUN_109a83fd0(param_1,2,&iStack_90,iVar26 * 8 - 8U | uVar2 & 7);
  uStack_98 = (ulong)(int)param_2[2];
  uVar24 = param_2[3];
  uStack_a0 = (ulong)(int)uVar24;
  uStack_b0 = (ulong)iVar30;
  uStack_a8 = (ulong)iVar32;
  fVar36 = (float)uStack_a0 / (float)uStack_b0;
  lVar28 = (long)(int)uVar24 * (long)iVar26;
  lVar27 = (long)iVar26 * (long)iVar30;
  fVar37 = (float)uStack_98 / (float)uStack_a8;
  if ((param_5 & 1) == 0) {
    uVar4 = (uVar6 >> 3) + 1 << (ulong)(0xfa50U >> (ulong)((uVar2 & 7) << 1) & 3);
    if ((((uVar4 & 0xfffffffd) == 1 || uVar4 == 4) && (-1 < (int)uVar24)) && (-1 < (int)param_2[2]))
    {
      puVar9 = &uStack_a0;
      puVar13 = &uStack_b0;
      FUN_109367e44(fVar36,fVar37,puVar9,puVar13,*(undefined8 *)(param_2 + 4),lVar28,
                    *(undefined8 *)(param_1 + 4),lVar27);
      goto LAB_1095aef88;
    }
  }
  else {
    puVar9 = &uStack_a0;
    func_0x000109367dd4(puVar9,&uStack_b0,lVar20);
    if ((int)puVar9 != 0) {
      puVar9 = &uStack_a0;
      puVar13 = &uStack_b0;
      FUN_1093695d8(fVar36,fVar37,puVar9,puVar13,*(undefined8 *)(param_2 + 4),lVar28,
                    *(undefined8 *)(param_1 + 4),lVar27,lVar20);
      goto LAB_1095aef88;
    }
  }
  lVar14 = lVar20;
  func_0x000109367d84(fVar36,fVar37);
  if ((int)lVar14 == 0) {
LAB_1095aef24:
    uStack_80 = 0;
    iStack_90 = 0x1010000;
    auStack_c8[0] = 0x2010000;
    uStack_b8 = 0;
    puVar9 = (ulong *)&iStack_90;
    puVar13 = (ulong *)auStack_c8;
    iStack_d0 = iVar30;
    iStack_cc = iVar32;
    puStack_c0 = param_1;
    puStack_88 = param_2;
    FUN_109b0f718((double)param_5,0,puVar9,puVar13,&iStack_d0,1);
  }
  else {
    bVar7 = false;
    if ((fVar36 == 2.0) && (bVar7 = false, !NAN(fVar37))) {
      bVar7 = fVar37 == 2.0;
    }
    if (!bVar7) {
      bVar7 = false;
      if ((fVar36 == 0.5) && (bVar7 = false, !NAN(fVar37))) {
        bVar7 = fVar37 == 0.5;
      }
      if (!bVar7) goto LAB_1095aef24;
    }
    puVar9 = &uStack_a0;
    puVar13 = &uStack_b0;
    FUN_109368138(fVar36,fVar37,puVar9,puVar13,*(undefined8 *)(param_2 + 4),lVar28,
                  *(undefined8 *)(param_1 + 4),lVar27,lVar20);
  }
LAB_1095aef88:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(param_1);
  puVar10 = puVar9;
  __Unwind_Resume();
  uStack_100 = param_3;
  uStack_f8 = param_4;
  puStack_f0 = puVar9;
  puStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  pcStack_d8 = FUN_1095aefe8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_130 = *(undefined8 *)puVar13[8];
  *(undefined4 *)puVar10 = 0x42ff0000;
  *(undefined8 *)((long)puVar10 + 0xc) = 0;
  *(undefined8 *)((long)puVar10 + 4) = 0;
  *(undefined8 *)((long)puVar10 + 0x1c) = 0;
  *(undefined8 *)((long)puVar10 + 0x14) = 0;
  *(undefined8 *)((long)puVar10 + 0x2c) = 0;
  *(undefined8 *)((long)puVar10 + 0x24) = 0;
  puVar10[7] = 0;
  puVar10[6] = 0;
  puVar10[10] = 0;
  puVar10[8] = (ulong)(puVar10 + 1);
  puVar10[9] = (ulong)(puVar10 + 10);
  puVar10[0xb] = 0;
  FUN_109a83fd0();
  puVar21 = (uint *)(long)*(int *)((long)puVar13 + 0xc);
  lStack_138 = (long)(int)puVar13[1];
  uStack_148 = 3;
  uStack_150 = 3;
  uVar16 = puVar13[2];
  uVar18 = puVar10[2];
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_160 = 0;
  uStack_170 = 1;
  uStack_168 = 0x200000002;
  ppuVar15 = &puStack_140;
  lVar14 = 1;
  puStack_158 = &uStack_130;
  puStack_140 = puVar21;
  FUN_1093665ec(ppuVar15,1,uVar16,puVar21,uVar18,puVar21,&uStack_150,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(puVar10);
  ppuVar11 = ppuVar15;
  __Unwind_Resume();
  pcStack_178 = FUN_1095af0fc;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25 = (long *)(lVar14 + 0x40);
  puVar17 = puVar21;
  uStack_1d0 = (ulong)uVar6;
  uStack_1c8 = (ulong)uVar2;
  lStack_1c0 = lVar28;
  lStack_1b8 = lVar27;
  lStack_1b0 = lVar20;
  puStack_1a8 = param_2;
  uStack_1a0 = param_3;
  puStack_198 = &uStack_130;
  ppuStack_190 = ppuVar15;
  puStack_188 = puVar10;
  ppuStack_180 = &puStack_e0;
  if (*plVar25 == 0) {
    uVar31 = NEON_scvtf(*(undefined8 *)(lVar14 + 0x380),4);
    iVar30 = (int)((float)uVar31 * *(float *)(lVar14 + 0x180));
    iVar32 = (int)((float)((ulong)uVar31 >> 0x20) * *(float *)(lVar14 + 0x180));
    lVar28 = 8;
    __Znwm(8);
    puVar19 = (undefined8 *)(uVar18 + 0x18);
    uVar18 = (ulong)*(uint *)(uVar18 + 0x20);
    FUN_10936fd88(*puVar19);
    func_0x0001095ae04c(plVar25,lVar28);
    puVar17 = (uint *)(ulong)(*puVar21 & 7);
    if ((((2 < *(int *)(lVar14 + 0x4c)) || (*(int *)(lVar14 + 0x50) != iVar30)) ||
        (*(int *)(lVar14 + 0x54) != iVar32)) ||
       (((*(uint *)(lVar14 + 0x48) & 0xfff) != (*puVar21 & 7) || (*(long *)(lVar14 + 0x58) == 0))))
    {
      uStack_1e0 = CONCAT44(iVar32,iVar30);
      FUN_109a83fd0(lVar14 + 0x48,2,&uStack_1e0);
    }
  }
  iVar26 = (int)uVar18;
  iVar32 = (int)puVar17;
  (**(code **)(*(long *)**(undefined8 **)(lVar14 + 0x40) + 0x10))
            ((long *)**(undefined8 **)(lVar14 + 0x40),uVar16);
  ppuVar15 = (uint **)(lVar14 + 0x48);
  puVar17 = *ppuVar15;
  iVar30 = *(int *)(lVar14 + 0x4c);
  puVar33 = *(uint **)(lVar14 + 0x60);
  puVar29 = *(uint **)(lVar14 + 0x58);
  puVar35 = *(uint **)(lVar14 + 0x70);
  puVar34 = *(uint **)(lVar14 + 0x68);
  ppuVar11[1] = *(uint **)(lVar14 + 0x50);
  *ppuVar11 = puVar17;
  ppuVar11[3] = puVar33;
  ppuVar11[2] = puVar29;
  lVar20 = *(long *)(lVar14 + 0x80);
  puVar29 = *(uint **)(lVar14 + 0x80);
  puVar17 = *(uint **)(lVar14 + 0x78);
  ppuVar11[5] = puVar35;
  ppuVar11[4] = puVar34;
  ppuVar11[7] = puVar29;
  ppuVar11[6] = puVar17;
  ppuVar11[10] = (uint *)0x0;
  ppuVar11[8] = (uint *)(ppuVar11 + 1);
  ppuVar11[9] = (uint *)(ppuVar11 + 10);
  ppuVar11[0xb] = (uint *)0x0;
  if (lVar20 != 0) {
    piVar1 = (int *)(lVar20 + 0x14);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    iVar30 = *(int *)(lVar14 + 0x4c);
  }
  if (iVar30 < 3) {
    puVar19 = *(undefined8 **)(lVar14 + 0x90);
    puVar17 = ppuVar11[9];
    *(undefined8 *)puVar17 = *puVar19;
    *(undefined8 *)(puVar17 + 2) = puVar19[1];
    ppuVar12 = *(uint ***)*plVar25;
    (**(code **)(*ppuVar12 + 6))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
      return;
    }
    ___stack_chk_fail();
    __ZdlPv(lVar28);
    ppuVar15 = ppuVar11;
    __Unwind_Resume();
    uVar24 = puVar21[2];
    if (0 < (int)uVar24) {
      lVar20 = 0;
      uVar16 = (ulong)puVar21[3];
      do {
        if (0 < (int)uVar16) {
          lVar28 = 0;
          lVar27 = *(long *)(puVar21 + 4);
          lVar14 = **(long **)(puVar21 + 0x12);
          puVar17 = ppuVar15[2];
          lVar23 = *(long *)ppuVar15[9];
          do {
            bVar3 = *(byte *)((long)puVar17 + lVar28 + lVar23 * lVar20);
            if ((int)(uint)bVar3 < iVar32) {
              uVar22 = 0;
            }
            else {
              bVar7 = true;
              bVar8 = false;
              if ((int)(uint)bVar3 <= iVar26) {
                uVar24 = (uint)*(byte *)(lVar27 + lVar14 * lVar20 + lVar28);
                bVar8 = SBORROW4(iVar26,uVar24);
                bVar7 = (int)(iVar26 - uVar24) < 0;
              }
              if (bVar7 == bVar8) {
                fVar37 = ((float)(int)((uint)bVar3 - iVar32) / (float)(iVar26 - iVar32)) * 255.0;
                fVar36 = 255.0;
                if (fVar37 <= 255.0) {
                  fVar36 = fVar37;
                }
                uVar22 = (undefined1)(int)fVar36;
              }
              else {
                uVar22 = 0xff;
              }
            }
            *(undefined1 *)((long)puVar17 + lVar28 + lVar23 * lVar20) = uVar22;
            lVar28 = lVar28 + 1;
            uVar16 = (ulong)(int)puVar21[3];
          } while (lVar28 < (long)uVar16);
          uVar24 = puVar21[2];
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)uVar24);
    }
    puVar21 = *ppuVar15;
    puVar29 = ppuVar15[3];
    puVar17 = ppuVar15[2];
    iVar30 = *(int *)((long)ppuVar15 + 4);
    ppuVar12[1] = ppuVar15[1];
    *ppuVar12 = puVar21;
    ppuVar12[3] = puVar29;
    ppuVar12[2] = puVar17;
    puVar21 = ppuVar15[7];
    puVar33 = ppuVar15[4];
    puVar29 = ppuVar15[7];
    puVar17 = ppuVar15[6];
    ppuVar12[5] = ppuVar15[5];
    ppuVar12[4] = puVar33;
    ppuVar12[7] = puVar29;
    ppuVar12[6] = puVar17;
    ppuVar12[10] = (uint *)0x0;
    ppuVar12[8] = (uint *)(ppuVar12 + 1);
    ppuVar12[9] = (uint *)(ppuVar12 + 10);
    ppuVar12[0xb] = (uint *)0x0;
    if (puVar21 != (uint *)0x0) {
      puVar21 = puVar21 + 5;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar21,0x10);
        if (bVar7) {
          *puVar21 = *puVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar30 = *(int *)((long)ppuVar15 + 4);
    }
    if (iVar30 < 3) {
      puVar21 = ppuVar15[9];
      puVar17 = ppuVar12[9];
      *(undefined8 *)puVar17 = *(undefined8 *)puVar21;
      *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar21 + 2);
      return;
    }
    *(undefined4 *)((long)ppuVar12 + 4) = 0;
    ppuVar11 = ppuVar12;
  }
  else {
    *(undefined4 *)((long)ppuVar11 + 4) = 0;
  }
  FUN_109a844cc();
  if (0 < *(int *)((long)ppuVar11 + 4)) {
    lVar20 = 0;
    puVar21 = ppuVar15[8];
    puVar29 = ppuVar15[9];
    puVar17 = ppuVar11[8];
    puVar33 = ppuVar11[9];
    do {
      puVar17[lVar20] = puVar21[lVar20];
      *(undefined8 *)(puVar33 + lVar20 * 2) = *(undefined8 *)(puVar29 + lVar20 * 2);
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)((long)ppuVar11 + 4));
  }
  return;
}



/* Entry: 1095aefe8; end: 1095af0fb;  */

/* WARNING: Possible PIC construction at 0x0001095af2a8: Changing call to branch */

void FUN_1095aefe8(undefined4 *param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  uint **ppuVar6;
  uint **ppuVar7;
  long lVar8;
  uint **ppuVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  undefined1 uVar19;
  long lVar20;
  uint uVar21;
  long *plVar22;
  undefined8 unaff_x26;
  uint *puVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  int iVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = **(undefined8 **)(param_2 + 0x40);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  FUN_109a83fd0(param_1,2,&uStack_60,0);
  lStack_68 = (long)*(int *)(param_2 + 8);
  puVar16 = (uint *)(long)*(int *)(param_2 + 0xc);
  uStack_78 = 3;
  uStack_80 = 3;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(ulong *)(param_1 + 4);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  ppuVar6 = &puStack_70;
  lVar8 = 1;
  puStack_70 = puVar16;
  FUN_1093665ec(ppuVar6,1,uVar10,puVar16,uVar13,puVar16,&uStack_80,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(param_1);
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = (long *)(lVar8 + 0x40);
  puVar11 = puVar16;
  if (*plVar22 == 0) {
    uVar27 = NEON_scvtf(*(undefined8 *)(lVar8 + 0x380),4);
    iVar24 = (int)((float)uVar27 * *(float *)(lVar8 + 0x180));
    iVar28 = (int)((float)((ulong)uVar27 >> 0x20) * *(float *)(lVar8 + 0x180));
    unaff_x26 = 8;
    __Znwm(8);
    puVar14 = (undefined8 *)(uVar13 + 0x18);
    uVar13 = (ulong)*(uint *)(uVar13 + 0x20);
    FUN_10936fd88(*puVar14);
    func_0x0001095ae04c(plVar22,unaff_x26);
    puVar11 = (uint *)(ulong)(*puVar16 & 7);
    if ((((2 < *(int *)(lVar8 + 0x4c)) || (*(int *)(lVar8 + 0x50) != iVar24)) ||
        (*(int *)(lVar8 + 0x54) != iVar28)) ||
       (((*(uint *)(lVar8 + 0x48) & 0xfff) != (*puVar16 & 7) || (*(long *)(lVar8 + 0x58) == 0)))) {
      uStack_110 = CONCAT44(iVar28,iVar24);
      FUN_109a83fd0(lVar8 + 0x48,2,&uStack_110);
    }
  }
  iVar12 = (int)uVar13;
  iVar28 = (int)puVar11;
  (**(code **)(*(long *)**(undefined8 **)(lVar8 + 0x40) + 0x10))
            ((long *)**(undefined8 **)(lVar8 + 0x40),uVar10);
  ppuVar9 = (uint **)(lVar8 + 0x48);
  puVar11 = *ppuVar9;
  iVar24 = *(int *)(lVar8 + 0x4c);
  puVar29 = *(uint **)(lVar8 + 0x60);
  puVar23 = *(uint **)(lVar8 + 0x58);
  puVar31 = *(uint **)(lVar8 + 0x70);
  puVar30 = *(uint **)(lVar8 + 0x68);
  ppuVar6[1] = *(uint **)(lVar8 + 0x50);
  *ppuVar6 = puVar11;
  ppuVar6[3] = puVar29;
  ppuVar6[2] = puVar23;
  lVar15 = *(long *)(lVar8 + 0x80);
  puVar23 = *(uint **)(lVar8 + 0x80);
  puVar11 = *(uint **)(lVar8 + 0x78);
  ppuVar6[5] = puVar31;
  ppuVar6[4] = puVar30;
  ppuVar6[7] = puVar23;
  ppuVar6[6] = puVar11;
  ppuVar6[10] = (uint *)0x0;
  ppuVar6[8] = (uint *)(ppuVar6 + 1);
  ppuVar6[9] = (uint *)(ppuVar6 + 10);
  ppuVar6[0xb] = (uint *)0x0;
  if (lVar15 != 0) {
    piVar1 = (int *)(lVar15 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar24 = *(int *)(lVar8 + 0x4c);
  }
  if (iVar24 < 3) {
    puVar14 = *(undefined8 **)(lVar8 + 0x90);
    puVar11 = ppuVar6[9];
    *(undefined8 *)puVar11 = *puVar14;
    *(undefined8 *)(puVar11 + 2) = puVar14[1];
    ppuVar7 = *(uint ***)*plVar22;
    (**(code **)(*ppuVar7 + 6))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
    ___stack_chk_fail();
    __ZdlPv(unaff_x26);
    ppuVar9 = ppuVar6;
    __Unwind_Resume();
    uVar21 = puVar16[2];
    if (0 < (int)uVar21) {
      lVar8 = 0;
      uVar13 = (ulong)puVar16[3];
      do {
        if (0 < (int)uVar13) {
          lVar15 = 0;
          lVar17 = *(long *)(puVar16 + 4);
          lVar18 = **(long **)(puVar16 + 0x12);
          puVar11 = ppuVar9[2];
          lVar20 = *(long *)ppuVar9[9];
          do {
            bVar2 = *(byte *)((long)puVar11 + lVar15 + lVar20 * lVar8);
            if ((int)(uint)bVar2 < iVar28) {
              uVar19 = 0;
            }
            else {
              bVar4 = true;
              bVar5 = false;
              if ((int)(uint)bVar2 <= iVar12) {
                uVar21 = (uint)*(byte *)(lVar17 + lVar18 * lVar8 + lVar15);
                bVar5 = SBORROW4(iVar12,uVar21);
                bVar4 = (int)(iVar12 - uVar21) < 0;
              }
              if (bVar4 == bVar5) {
                fVar25 = ((float)(int)((uint)bVar2 - iVar28) / (float)(iVar12 - iVar28)) * 255.0;
                fVar26 = 255.0;
                if (fVar25 <= 255.0) {
                  fVar26 = fVar25;
                }
                uVar19 = (undefined1)(int)fVar26;
              }
              else {
                uVar19 = 0xff;
              }
            }
            *(undefined1 *)((long)puVar11 + lVar15 + lVar20 * lVar8) = uVar19;
            lVar15 = lVar15 + 1;
            uVar13 = (ulong)(int)puVar16[3];
          } while (lVar15 < (long)uVar13);
          uVar21 = puVar16[2];
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar21);
    }
    puVar16 = *ppuVar9;
    puVar23 = ppuVar9[3];
    puVar11 = ppuVar9[2];
    iVar24 = *(int *)((long)ppuVar9 + 4);
    ppuVar7[1] = ppuVar9[1];
    *ppuVar7 = puVar16;
    ppuVar7[3] = puVar23;
    ppuVar7[2] = puVar11;
    puVar16 = ppuVar9[7];
    puVar29 = ppuVar9[4];
    puVar23 = ppuVar9[7];
    puVar11 = ppuVar9[6];
    ppuVar7[5] = ppuVar9[5];
    ppuVar7[4] = puVar29;
    ppuVar7[7] = puVar23;
    ppuVar7[6] = puVar11;
    ppuVar7[10] = (uint *)0x0;
    ppuVar7[8] = (uint *)(ppuVar7 + 1);
    ppuVar7[9] = (uint *)(ppuVar7 + 10);
    ppuVar7[0xb] = (uint *)0x0;
    if (puVar16 != (uint *)0x0) {
      puVar16 = puVar16 + 5;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar16,0x10);
        if (bVar4) {
          *puVar16 = *puVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      iVar24 = *(int *)((long)ppuVar9 + 4);
    }
    if (iVar24 < 3) {
      puVar16 = ppuVar9[9];
      puVar11 = ppuVar7[9];
      *(undefined8 *)puVar11 = *(undefined8 *)puVar16;
      *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar16 + 2);
      return;
    }
    *(undefined4 *)((long)ppuVar7 + 4) = 0;
    ppuVar6 = ppuVar7;
  }
  else {
    *(undefined4 *)((long)ppuVar6 + 4) = 0;
  }
  FUN_109a844cc();
  if (0 < *(int *)((long)ppuVar6 + 4)) {
    lVar8 = 0;
    puVar16 = ppuVar9[8];
    puVar23 = ppuVar9[9];
    puVar11 = ppuVar6[8];
    puVar29 = ppuVar6[9];
    do {
      puVar11[lVar8] = puVar16[lVar8];
      *(undefined8 *)(puVar29 + lVar8 * 2) = *(undefined8 *)(puVar23 + lVar8 * 2);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)ppuVar6 + 4));
  }
  return;
}



/* Entry: 1095af0fc; end: 1095af32f;  */

/* WARNING: Possible PIC construction at 0x0001095af2a8: Changing call to branch */

void FUN_1095af0fc(long *param_1,long param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  uint *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  undefined8 unaff_x26;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = (long *)(param_2 + 0x40);
  puVar7 = param_4;
  if (*plVar19 == 0) {
    uVar23 = NEON_scvtf(*(undefined8 *)(param_2 + 0x380),4);
    iVar20 = (int)((float)uVar23 * *(float *)(param_2 + 0x180));
    iVar24 = (int)((float)((ulong)uVar23 >> 0x20) * *(float *)(param_2 + 0x180));
    unaff_x26 = 8;
    __Znwm(8);
    puVar9 = (undefined8 *)(param_5 + 0x18);
    param_5 = (ulong)*(uint *)(param_5 + 0x20);
    FUN_10936fd88(*puVar9);
    func_0x0001095ae04c(plVar19,unaff_x26);
    puVar7 = (uint *)(ulong)(*param_4 & 7);
    if ((((2 < *(int *)(param_2 + 0x4c)) || (*(int *)(param_2 + 0x50) != iVar20)) ||
        (*(int *)(param_2 + 0x54) != iVar24)) ||
       (((*(uint *)(param_2 + 0x48) & 0xfff) != (*param_4 & 7) || (*(long *)(param_2 + 0x58) == 0)))
       ) {
      uStack_70 = CONCAT44(iVar24,iVar20);
      FUN_109a83fd0(param_2 + 0x48,2,&uStack_70);
    }
  }
  iVar8 = (int)param_5;
  iVar24 = (int)puVar7;
  (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x40) + 0x10))
            ((long *)**(undefined8 **)(param_2 + 0x40),param_3);
  plVar6 = (long *)(param_2 + 0x48);
  lVar10 = *plVar6;
  iVar20 = *(int *)(param_2 + 0x4c);
  lVar13 = *(long *)(param_2 + 0x60);
  lVar12 = *(long *)(param_2 + 0x58);
  lVar15 = *(long *)(param_2 + 0x70);
  lVar14 = *(long *)(param_2 + 0x68);
  param_1[1] = *(long *)(param_2 + 0x50);
  *param_1 = lVar10;
  param_1[3] = lVar13;
  param_1[2] = lVar12;
  lVar10 = *(long *)(param_2 + 0x80);
  lVar13 = *(long *)(param_2 + 0x80);
  lVar12 = *(long *)(param_2 + 0x78);
  param_1[5] = lVar15;
  param_1[4] = lVar14;
  param_1[7] = lVar13;
  param_1[6] = lVar12;
  param_1[10] = 0;
  param_1[8] = (long)(param_1 + 1);
  param_1[9] = (long)(param_1 + 10);
  param_1[0xb] = 0;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar20 = *(int *)(param_2 + 0x4c);
  }
  if (iVar20 < 3) {
    puVar9 = *(undefined8 **)(param_2 + 0x90);
    puVar11 = (undefined8 *)param_1[9];
    *puVar11 = *puVar9;
    puVar11[1] = puVar9[1];
    plVar19 = *(long **)*plVar19;
    (**(code **)(*plVar19 + 0x18))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    __ZdlPv(unaff_x26);
    plVar6 = param_1;
    __Unwind_Resume();
    uVar18 = param_4[2];
    if (0 < (int)uVar18) {
      lVar10 = 0;
      uVar17 = (ulong)param_4[3];
      do {
        if (0 < (int)uVar17) {
          lVar12 = 0;
          lVar13 = *(long *)(param_4 + 4);
          lVar14 = **(long **)(param_4 + 0x12);
          lVar15 = plVar6[2] + *(long *)plVar6[9] * lVar10;
          do {
            bVar2 = *(byte *)(lVar15 + lVar12);
            if ((int)(uint)bVar2 < iVar24) {
              uVar16 = 0;
            }
            else {
              bVar4 = true;
              bVar5 = false;
              if ((int)(uint)bVar2 <= iVar8) {
                uVar18 = (uint)*(byte *)(lVar13 + lVar14 * lVar10 + lVar12);
                bVar5 = SBORROW4(iVar8,uVar18);
                bVar4 = (int)(iVar8 - uVar18) < 0;
              }
              if (bVar4 == bVar5) {
                fVar21 = ((float)(int)((uint)bVar2 - iVar24) / (float)(iVar8 - iVar24)) * 255.0;
                fVar22 = 255.0;
                if (fVar21 <= 255.0) {
                  fVar22 = fVar21;
                }
                uVar16 = (undefined1)(int)fVar22;
              }
              else {
                uVar16 = 0xff;
              }
            }
            *(undefined1 *)(lVar15 + lVar12) = uVar16;
            lVar12 = lVar12 + 1;
            uVar17 = (ulong)(int)param_4[3];
          } while (lVar12 < (long)uVar17);
          uVar18 = param_4[2];
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar18);
    }
    lVar10 = *plVar6;
    lVar13 = plVar6[3];
    lVar12 = plVar6[2];
    iVar20 = *(int *)((long)plVar6 + 4);
    plVar19[1] = plVar6[1];
    *plVar19 = lVar10;
    plVar19[3] = lVar13;
    plVar19[2] = lVar12;
    lVar10 = plVar6[7];
    lVar14 = plVar6[4];
    lVar13 = plVar6[7];
    lVar12 = plVar6[6];
    plVar19[5] = plVar6[5];
    plVar19[4] = lVar14;
    plVar19[7] = lVar13;
    plVar19[6] = lVar12;
    plVar19[10] = 0;
    plVar19[8] = (long)(plVar19 + 1);
    plVar19[9] = (long)(plVar19 + 10);
    plVar19[0xb] = 0;
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      iVar20 = *(int *)((long)plVar6 + 4);
    }
    if (iVar20 < 3) {
      puVar9 = (undefined8 *)plVar6[9];
      puVar11 = (undefined8 *)plVar19[9];
      *puVar11 = *puVar9;
      puVar11[1] = puVar9[1];
      return;
    }
    *(undefined4 *)((long)plVar19 + 4) = 0;
    param_1 = plVar19;
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
  }
  FUN_109a844cc();
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar10 = 0;
    lVar12 = plVar6[8];
    lVar14 = plVar6[9];
    lVar13 = param_1[8];
    lVar15 = param_1[9];
    do {
      *(undefined4 *)(lVar13 + lVar10 * 4) = *(undefined4 *)(lVar12 + lVar10 * 4);
      *(undefined8 *)(lVar15 + lVar10 * 8) = *(undefined8 *)(lVar14 + lVar10 * 8);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((long)param_1 + 4));
  }
  return;
}



/* Entry: 1095af330; end: 1095af45f;  */

void FUN_1095af330(undefined8 *param_1,long param_2,undefined8 *param_3,int param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  
  iVar8 = *(int *)(param_2 + 8);
  if (0 < iVar8) {
    lVar6 = 0;
    uVar15 = (ulong)*(uint *)(param_2 + 0xc);
    do {
      if (0 < (int)uVar15) {
        lVar9 = 0;
        lVar11 = *(long *)(param_2 + 0x10);
        lVar12 = **(long **)(param_2 + 0x48);
        lVar13 = param_3[2] + *(long *)param_3[9] * lVar6;
        do {
          bVar2 = *(byte *)(lVar13 + lVar9);
          if ((int)(uint)bVar2 < param_4) {
            uVar14 = 0;
          }
          else {
            bVar4 = true;
            bVar5 = false;
            if ((int)(uint)bVar2 <= param_5) {
              uVar16 = (uint)*(byte *)(lVar11 + lVar12 * lVar6 + lVar9);
              bVar5 = SBORROW4(param_5,uVar16);
              bVar4 = (int)(param_5 - uVar16) < 0;
            }
            if (bVar4 == bVar5) {
              fVar19 = ((float)(int)((uint)bVar2 - param_4) / (float)(param_5 - param_4)) * 255.0;
              fVar20 = 255.0;
              if (fVar19 <= 255.0) {
                fVar20 = fVar19;
              }
              uVar14 = (undefined1)(int)fVar20;
            }
            else {
              uVar14 = 0xff;
            }
          }
          *(undefined1 *)(lVar13 + lVar9) = uVar14;
          lVar9 = lVar9 + 1;
          uVar15 = (ulong)*(int *)(param_2 + 0xc);
        } while (lVar9 < (long)uVar15);
        iVar8 = *(int *)(param_2 + 8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  uVar17 = *param_3;
  uVar21 = param_3[3];
  uVar18 = param_3[2];
  iVar8 = *(int *)((long)param_3 + 4);
  param_1[1] = param_3[1];
  *param_1 = uVar17;
  param_1[3] = uVar21;
  param_1[2] = uVar18;
  lVar6 = param_3[7];
  uVar21 = param_3[4];
  uVar18 = param_3[7];
  uVar17 = param_3[6];
  param_1[5] = param_3[5];
  param_1[4] = uVar21;
  param_1[7] = uVar18;
  param_1[6] = uVar17;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar8 = *(int *)((long)param_3 + 4);
  }
  if (iVar8 < 3) {
    puVar7 = (undefined8 *)param_3[9];
    puVar10 = (undefined8 *)param_1[9];
    *puVar10 = *puVar7;
    puVar10[1] = puVar7[1];
    return;
  }
  *(undefined4 *)((long)param_1 + 4) = 0;
  FUN_109a844cc(param_1,*(undefined4 *)((long)param_3 + 4),0,0,0);
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar6 = 0;
    lVar9 = param_3[8];
    lVar12 = param_3[9];
    lVar11 = param_1[8];
    lVar13 = param_1[9];
    do {
      *(undefined4 *)(lVar11 + lVar6 * 4) = *(undefined4 *)(lVar9 + lVar6 * 4);
      *(undefined8 *)(lVar13 + lVar6 * 8) = *(undefined8 *)(lVar12 + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 4));
  }
  return;
}



/* Entry: 1095af460; end: 1095b0027;  */

void FUN_1095af460(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  uint *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  uint *puVar21;
  int *piVar22;
  uint *puVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uStack_320;
  uint *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined4 *puStack_2c0;
  ulong *puStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  uint *puStack_2a0;
  uint *puStack_298;
  undefined8 uStack_290;
  long lStack_140;
  byte bStack_138;
  uint *puStack_130;
  uint *puStack_128;
  undefined8 uStack_120;
  uint uStack_110;
  uint uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 auStack_a8 [2];
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *apcStack_78 [3];
  
  uStack_110 = 0x42ff0000;
  iStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_e4 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  lStack_d8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_128 = (uint *)0x0;
  puStack_130 = (uint *)0x0;
  uStack_120 = 0;
  lVar16 = 0x11c;
  if (*(char *)(param_2 + 0x1b4) == '\0') {
    lVar16 = 0x10c;
  }
  puVar17 = (undefined8 *)(param_2 + lVar16);
  uVar10 = *puVar17;
  uVar9 = *puVar17;
  uVar8 = *puVar17;
  uVar7 = *puVar17;
  lStack_140 = param_2 + 0x498;
  bStack_138 = 1;
  piStack_d0 = (int *)((ulong)&uStack_110 | 8);
  puStack_c8 = &uStack_c0;
  __ZNSt3__15mutex4lockEv();
  lVar16 = param_2 + 0x528;
  FUN_1095b3a14(lVar16,param_3);
  if (lVar16 == 0) {
    uStack_300 = uVar7;
    FUN_109a829e8(&puStack_2a0,&uStack_300,0);
    *(undefined4 *)param_1 = 0x42ff0000;
    param_1[7] = 0;
    param_1[6] = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    (**(code **)(*(long *)puStack_2a0 + 0x18))(puStack_2a0,&puStack_2a0,param_1,0xffffffff);
  }
  else {
    if (*(long *)(param_2 + 0x888) != 0) {
      uVar15 = (ulong)*(uint *)(param_2 + 0x87c);
      if ((int)*(uint *)(param_2 + 0x87c) < 3) {
        lVar20 = (long)*(int *)(param_2 + 0x884) * (long)*(int *)(param_2 + 0x880);
      }
      else {
        lVar20 = 1;
        piVar22 = *(int **)(param_2 + 0x8b8);
        do {
          lVar20 = lVar20 * *piVar22;
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 1;
        } while (uVar15 != 0);
      }
      if (lVar20 != 0) {
        if ((bStack_138 & 1) == 0) {
          __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
          goto LAB_1095afef4;
        }
        cVar4 = *(char *)(lVar16 + 0x62);
        __ZNSt3__15mutex6unlockEv(lStack_140);
        bStack_138 = 0;
        lVar16 = param_2 + 0x5d0;
        FUN_1092b09c4(lVar16,param_3);
        if (lVar16 != 0) {
          FUN_1092cd11c(&puStack_2a0,1,lVar16 + 0x28);
joined_r0x0001095af5ec:
          if (puStack_130 != (uint *)0x0) {
            puStack_128 = puStack_130;
            __ZdlPv();
          }
          puStack_128 = puStack_298;
          puStack_130 = puStack_2a0;
          uStack_120 = uStack_290;
LAB_1095af608:
          if (cVar4 != '\0') {
            FUN_1095b0028(&lStack_140);
            if ((bStack_138 & 1) != 0) {
              iVar2 = (*(uint *)(param_2 + 0x878) >> 3 & 0x1ff) + 1;
              __ZNSt3__15mutex6unlockEv(lStack_140);
              bStack_138 = 0;
              puVar21 = puStack_130;
joined_r0x0001095af648:
              if (puVar21 != puStack_128) goto LAB_1095af64c;
              puStack_2a0 = (uint *)((ulong)puStack_2a0 & 0xffffffff00000000);
              FUN_1092ef208(&uStack_90,iVar2,&puStack_2a0);
              lStack_2f0 = CONCAT44(uStack_8c,uStack_90);
              if ((long)puStack_128 - (long)puStack_130 != 0) {
                lVar20 = (long)puStack_128 - (long)puStack_130 >> 2;
                puVar21 = puStack_130;
                do {
                  *(undefined4 *)(lStack_2f0 + (long)(int)*puVar21 * 4) = 0x3f800000;
                  lVar20 = lVar20 + -1;
                  puVar21 = puVar21 + 1;
                } while (lVar20 != 0);
              }
              uVar15 = (long)puStack_88 - lStack_2f0;
              uStack_300 = 0x242ff0005;
              puStack_2c0 = &uStack_2f8;
              uStack_2f4 = (undefined4)(uVar15 >> 2);
              uStack_2f8 = 1;
              lStack_2d8 = 0;
              lStack_2e0 = 0;
              lStack_2c8 = 0;
              uStack_2d0 = 0;
              uStack_2b0 = 0;
              uStack_2a8 = 0;
              lStack_2e8 = lStack_2f0;
              puStack_2b8 = &uStack_2b0;
              if ((lStack_2f0 == 0) && ((uVar15 & 0x3ffffffff) >> 2 != 0)) {
                puVar14 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar14 = 1;
                puStack_2a0 = puVar14 + 1;
                puStack_298 = (uint *)0x1c;
                *(undefined1 *)(puVar14 + 8) = 0;
                *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
                *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
                *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
                *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
                FUN_109ac3188(0xffffff29,&puStack_2a0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                goto LAB_1095afef4;
              }
              uStack_300 = 0x242ff4005;
              uStack_2b0 = (long)(uVar15 * 0x40000000) >> 0x1e & 0xfffffffffffffffc;
              uStack_2a8 = 4;
              lStack_2e0 = lStack_2f0 + uStack_2b0;
              lStack_2d8 = lStack_2e0;
              FUN_1095b0028(&lStack_140);
              uStack_290 = 0;
              puStack_2a0 = (uint *)CONCAT44(puStack_2a0._4_4_,0x1010000);
              uStack_320 = CONCAT44(uStack_320._4_4_,0x2010000);
              puStack_318 = &uStack_110;
              uStack_310 = 0;
              uStack_98 = 0;
              auStack_a8[0] = 0x81010005;
              puStack_a0 = (uint *)&uStack_300;
              puStack_298 = (uint *)(param_2 + 0x878);
              FUN_109a6b6dc(&puStack_2a0,&uStack_320,auStack_a8);
              if ((bStack_138 & 1) == 0) {
                __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
                goto LAB_1095afef4;
              }
              __ZNSt3__15mutex6unlockEv(lStack_140);
              bStack_138 = 0;
              puStack_2a0 = (uint *)CONCAT44(puStack_2a0._4_4_,0x2010000);
              puStack_298 = &uStack_110;
              uStack_290 = 0;
              FUN_109a41858(0x406fe00000000000,0,&uStack_110,&puStack_2a0,uStack_110 & 0xff8);
              if (lVar16 != 0) {
                uStack_320 = 0x406fe00000000000;
                puStack_318 = (uint *)0x0;
                uStack_310 = 0;
                uStack_308 = 0;
                FUN_109a7cf94(&puStack_2a0,&uStack_320,&uStack_110);
                (**(code **)(*(long *)puStack_2a0 + 0x18))
                          (puStack_2a0,&puStack_2a0,&uStack_110,0xffffffff);
                FUN_10918eb6c(&puStack_2a0);
              }
              if (lStack_2c8 != 0) {
                piVar22 = (int *)(lStack_2c8 + 0x14);
                do {
                  iVar2 = *piVar22;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
                  if (bVar5) {
                    *piVar22 = iVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&uStack_300);
                }
              }
              lStack_2c8 = 0;
              lStack_2e8 = 0;
              lStack_2f0 = 0;
              lStack_2d8 = 0;
              lStack_2e0 = 0;
              if (0 < uStack_300._4_4_) {
                lVar16 = 0;
                do {
                  puStack_2c0[lVar16] = 0;
                  lVar16 = lVar16 + 1;
                } while (lVar16 < uStack_300._4_4_);
              }
              if (puStack_2b8 != &uStack_2b0 && puStack_2b8 != (ulong *)0x0) {
                _free(puStack_2b8[-1]);
              }
              if ((undefined8 *)CONCAT44(uStack_8c,uStack_90) != (undefined8 *)0x0) {
                puStack_88 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
                __ZdlPv();
              }
              goto LAB_1095afbcc;
            }
            __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
LAB_1095afef4:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1095afef8);
            (*pcVar11)();
          }
          FUN_1095b0028(&lStack_140);
          puVar21 = puStack_128;
          if (puStack_130 != puStack_128) {
            puVar17 = (undefined8 *)((ulong)&uStack_300 | 4);
            puVar23 = puStack_130;
            do {
              if (CONCAT44(uStack_fc,uStack_100) == 0) {
LAB_1095afb34:
                FUN_109a7e87c(&puStack_2a0,(double)(int)*puVar23,param_2 + 0x8d8);
                (**(code **)(*(long *)puStack_2a0 + 0x18))
                          (puStack_2a0,&puStack_2a0,&uStack_110,0xffffffff);
              }
              else {
                uVar15 = (ulong)uStack_10c;
                if ((int)uStack_10c < 3) {
                  lVar20 = (long)iStack_104 * (long)iStack_108;
                }
                else {
                  lVar20 = 1;
                  piVar22 = piStack_d0;
                  do {
                    lVar20 = lVar20 * *piVar22;
                    uVar15 = uVar15 - 1;
                    piVar22 = piVar22 + 1;
                  } while (uVar15 != 0);
                }
                if (lVar20 == 0) goto LAB_1095afb34;
                FUN_109a7e87c(&puStack_2a0,(double)(int)*puVar23,param_2 + 0x8d8);
                uStack_300 = CONCAT44(uStack_300._4_4_,0x42ff0000);
                *(undefined8 *)((long)puVar17 + 0x34) = 0;
                *(undefined8 *)((long)puVar17 + 0x2c) = 0;
                puVar17[3] = 0;
                puVar17[2] = 0;
                puVar17[5] = 0;
                puVar17[4] = 0;
                puVar17[1] = 0;
                *puVar17 = 0;
                uStack_2b0 = 0;
                uStack_2a8 = 0;
                puVar12 = puStack_2a0;
                puStack_2c0 = &uStack_2f8;
                puStack_2b8 = &uStack_2b0;
                (**(code **)(*(long *)puStack_2a0 + 0x18))
                          (puStack_2a0,&puStack_2a0,&uStack_300,0xffffffff);
                uStack_310 = 0;
                uStack_320 = CONCAT44(uStack_320._4_4_,0x1010000);
                puStack_318 = &uStack_110;
                uStack_80 = 0;
                uStack_90 = 0x1010000;
                auStack_a8[0] = 0x2010000;
                uStack_98 = 0;
                puStack_a0 = puStack_318;
                puStack_88 = &uStack_300;
                FUN_109a91d90();
                apcStack_78[0] = FUN_109a28f7c;
                FUN_109a279fc(&uStack_320,&uStack_90,auStack_a8,puVar12,apcStack_78,1,10);
                if (lStack_2c8 != 0) {
                  piVar22 = (int *)(lStack_2c8 + 0x14);
                  do {
                    iVar2 = *piVar22;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
                    if (bVar5) {
                      *piVar22 = iVar2 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_300);
                  }
                }
                lStack_2c8 = 0;
                lStack_2e8 = 0;
                lStack_2f0 = 0;
                lStack_2d8 = 0;
                lStack_2e0 = 0;
                if (0 < uStack_300._4_4_) {
                  lVar20 = 0;
                  do {
                    puStack_2c0[lVar20] = 0;
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < uStack_300._4_4_);
                }
                if (puStack_2b8 != &uStack_2b0 && puStack_2b8 != (ulong *)0x0) {
                  _free(puStack_2b8[-1]);
                }
              }
              FUN_10918eb6c(&puStack_2a0);
              puVar23 = puVar23 + 1;
            } while (puVar23 != puVar21);
          }
          if ((bStack_138 & 1) == 0) {
            __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
            goto LAB_1095afef4;
          }
          __ZNSt3__15mutex6unlockEv(lStack_140);
          bStack_138 = 0;
          if (lVar16 != 0) {
            FUN_109a7f188(&puStack_2a0,&uStack_110);
            (**(code **)(*(long *)puStack_2a0 + 0x18))
                      (puStack_2a0,&puStack_2a0,&uStack_110,0xffffffff);
            FUN_10918eb6c(&puStack_2a0);
          }
LAB_1095afbcc:
          puVar17 = (undefined8 *)((ulong)&uStack_110 | 4);
          param_1[1] = CONCAT44(iStack_104,iStack_108);
          *param_1 = CONCAT44(uStack_10c,uStack_110);
          param_1[3] = CONCAT44(uStack_f4,uStack_f8);
          param_1[2] = CONCAT44(uStack_fc,uStack_100);
          param_1[10] = 0;
          param_1[5] = CONCAT44(uStack_e4,uStack_e8);
          param_1[4] = CONCAT44(uStack_ec,uStack_f0);
          param_1[7] = lStack_d8;
          param_1[6] = CONCAT44(uStack_dc,uStack_e0);
          param_1[8] = param_1 + 1;
          param_1[9] = param_1 + 10;
          param_1[0xb] = 0;
          if ((int)uStack_10c < 3) {
            param_1[10] = *puStack_c8;
            param_1[0xb] = puStack_c8[1];
          }
          else {
            param_1[8] = piStack_d0;
            param_1[9] = puStack_c8;
            piStack_d0 = (int *)((ulong)&uStack_110 | 8);
            puStack_c8 = &uStack_c0;
          }
          uStack_110 = 0x42ff0000;
          puVar17[1] = 0;
          *puVar17 = 0;
          puVar17[3] = 0;
          puVar17[2] = 0;
          puVar17[5] = 0;
          puVar17[4] = 0;
          *(undefined8 *)((long)puVar17 + 0x34) = 0;
          *(undefined8 *)((long)puVar17 + 0x2c) = 0;
          goto LAB_1095af8e4;
        }
        plVar1 = (long *)(param_2 + 0x5f8);
        plVar13 = plVar1;
        func_0x000107c31944(plVar1,param_3);
        plVar25 = *(long **)(param_2 + 0x600);
        if (plVar25 != (long *)0x0) {
          uVar15 = (long)plVar25 - 1;
          if (((ulong)plVar25 & uVar15) == 0) {
            plVar24 = (long *)(uVar15 & (ulong)plVar13);
          }
          else {
            plVar24 = plVar13;
            if (plVar25 <= plVar13) {
              uVar6 = 0;
              if (plVar25 != (long *)0x0) {
                uVar6 = (ulong)plVar13 / (ulong)plVar25;
              }
              plVar24 = (long *)((long)plVar13 - uVar6 * (long)plVar25);
            }
          }
          plVar18 = *(long **)(*plVar1 + (long)plVar24 * 8);
          if (plVar18 != (long *)0x0) {
            for (plVar18 = (long *)*plVar18; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
              plVar19 = (long *)plVar18[1];
              if (plVar19 == plVar13) {
                plVar19 = plVar1;
                func_0x000104c4fbc4(plVar1,plVar18 + 2,param_3);
                if (((ulong)plVar19 & 1) != 0) {
                  if (&puStack_130 != (uint **)(plVar18 + 5)) {
                    FUN_10928555c(&puStack_130,plVar18[5],plVar18[6],plVar18[6] - plVar18[5] >> 2);
                  }
                  goto LAB_1095af608;
                }
              }
              else {
                if (((ulong)plVar25 & uVar15) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar15);
                }
                else if (plVar25 <= plVar19) {
                  uVar6 = 0;
                  if (plVar25 != (long *)0x0) {
                    uVar6 = (ulong)plVar19 / (ulong)plVar25;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar6 * (long)plVar25);
                }
                if (plVar19 != plVar24) break;
              }
            }
          }
        }
        lVar20 = param_2 + 0x5a8;
        FUN_1092b09c4(lVar20,param_3);
        if (lVar20 == 0) {
          uStack_320 = CONCAT44(uStack_320._4_4_,0xffffffff);
        }
        else {
          uStack_320 = CONCAT44(uStack_320._4_4_,*(int *)(lVar20 + 0x28));
          if (*(int *)(lVar20 + 0x28) != -1) {
            FUN_1092cd11c(&puStack_2a0,1,&uStack_320);
            goto joined_r0x0001095af5ec;
          }
        }
        uStack_300 = uVar10;
        FUN_109a829e8(&puStack_2a0,&uStack_300,0);
        *(undefined4 *)param_1 = 0x42ff0000;
        param_1[7] = 0;
        param_1[6] = 0;
        *(undefined8 *)((long)param_1 + 0x2c) = 0;
        *(undefined8 *)((long)param_1 + 0x24) = 0;
        *(undefined8 *)((long)param_1 + 0x1c) = 0;
        *(undefined8 *)((long)param_1 + 0x14) = 0;
        *(undefined8 *)((long)param_1 + 0xc) = 0;
        *(undefined8 *)((long)param_1 + 4) = 0;
        param_1[10] = 0;
        param_1[8] = param_1 + 1;
        param_1[9] = param_1 + 10;
        param_1[0xb] = 0;
        (**(code **)(*(long *)puStack_2a0 + 0x18))(puStack_2a0,&puStack_2a0,param_1,0xffffffff);
        goto LAB_1095af8dc;
      }
    }
    uStack_300 = uVar8;
    FUN_109a829e8(&puStack_2a0,&uStack_300,0);
    *(undefined4 *)param_1 = 0x42ff0000;
    param_1[7] = 0;
    param_1[6] = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    (**(code **)(*(long *)puStack_2a0 + 0x18))(puStack_2a0,&puStack_2a0,param_1,0xffffffff);
  }
LAB_1095af8dc:
  FUN_10918eb6c(&puStack_2a0);
LAB_1095af8e4:
  if (bStack_138 == 1) {
    __ZNSt3__15mutex6unlockEv(lStack_140);
  }
  if (puStack_130 != (uint *)0x0) {
    puStack_128 = puStack_130;
    __ZdlPv();
  }
  if (lStack_d8 != 0) {
    piVar22 = (int *)(lStack_d8 + 0x14);
    do {
      iVar2 = *piVar22;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar5) {
        *piVar22 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (0 < (int)uStack_10c) {
    lVar16 = 0;
    do {
      piStack_d0[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_10c);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  return;
LAB_1095af64c:
  uVar3 = *puVar21;
  puVar21 = puVar21 + 1;
  if (iVar2 < (int)uVar3) goto LAB_1095afc88;
  goto joined_r0x0001095af648;
LAB_1095afc88:
  uStack_300 = uVar9;
  FUN_109a829e8(&puStack_2a0,&uStack_300,0);
  *(undefined4 *)param_1 = 0x42ff0000;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  (**(code **)(*(long *)puStack_2a0 + 0x18))(puStack_2a0,&puStack_2a0,param_1,0xffffffff);
  goto LAB_1095af8dc;
}



/* Entry: 1095b0028; end: 1095b0083;  */

void FUN_1095b0028(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uStack_1e0;
  int iStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 auStack_190 [34];
  undefined1 uStack_79;
  long alStack_78 [2];
  long lStack_68;
  
  if (*param_1 == 0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f2e1659);
  }
  else if ((char)param_1[1] != '\x01') {
    __ZNSt3__15mutex4lockEv();
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  puVar6 = &UNK_10f2e1682;
  lVar5 = 0xb;
  __ZNSt3__120__throw_system_errorEiPKc();
  if (*(int *)(lVar5 + 0xe0) != *(int *)(lVar5 + 0x108)) {
    FUN_1095ae11c(lVar5);
  }
  lVar7 = *(long *)(lVar5 + 0x538) + 0x10;
  if (*(long *)(lVar5 + 0xa8) == 0) {
    lStack_68 = NEON_rev64(**(undefined8 **)(puVar6 + 0x40),4);
    FUN_109a829e8(&uStack_1e0,&lStack_68,0);
    lVar5 = lVar5 + 0x580;
    lStack_68 = lVar7;
    FUN_1095b3c7c(lVar5,lVar7,&UNK_10dd5b8f9,&lStack_68,alStack_78);
    (**(code **)(*(long *)CONCAT44(iStack_1dc,uStack_1e0) + 0x18))
              ((long *)CONCAT44(iStack_1dc,uStack_1e0),&uStack_1e0,lVar5 + 0x28,0xffffffff);
    FUN_10918eb6c(&uStack_1e0);
  }
  else {
    FUN_1095b04fc(lVar5,puVar6);
    FUN_1095b05d8(lVar5,lVar5 + 0x968);
    FUN_1095af460(&uStack_1e0,lVar5,lVar7);
    lVar5 = lVar5 + 0x580;
    alStack_78[0] = lVar7;
    FUN_1095b3c7c(lVar5,lVar7,&UNK_10dd5b8f9,alStack_78,&uStack_79);
    if (*(long *)(lVar5 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(lVar5 + 0x60) + 0x14);
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
        func_0x000109a848d4(lVar5 + 0x28);
      }
    }
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    if (0 < *(int *)(lVar5 + 0x2c)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar5 + 0x68);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar5 + 0x2c));
    }
    *(undefined8 *)(lVar5 + 0x30) = uStack_1d8;
    *(ulong *)(lVar5 + 0x28) = CONCAT44(iStack_1dc,uStack_1e0);
    *(undefined8 *)(lVar5 + 0x40) = uStack_1c8;
    *(undefined8 *)(lVar5 + 0x38) = uStack_1d0;
    *(undefined8 *)(lVar5 + 0x50) = uStack_1b8;
    *(undefined8 *)(lVar5 + 0x48) = uStack_1c0;
    *(undefined8 *)(lVar5 + 0x60) = uStack_1a8;
    *(undefined8 *)(lVar5 + 0x58) = uStack_1b0;
    puVar10 = *(undefined8 **)(lVar5 + 0x70);
    puVar8 = (undefined8 *)(lVar5 + 0x78);
    if (puVar10 != puVar8) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      *(long *)(lVar5 + 0x68) = lVar5 + 0x30;
      *(undefined8 **)(lVar5 + 0x70) = puVar8;
      puVar10 = puVar8;
    }
    if (iStack_1dc < 3) {
      puVar8 = (undefined8 *)((ulong)&uStack_1e0 | 4);
      *puVar10 = *puStack_198;
      puVar10[1] = puStack_198[1];
      uStack_1e0 = 0x42ff0000;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      *(undefined8 *)((long)puVar8 + 0x34) = 0;
      *(undefined8 *)((long)puVar8 + 0x2c) = 0;
      if (puStack_198 != auStack_190) {
        _free(puStack_198[-1]);
      }
    }
    else {
      *(undefined8 *)(lVar5 + 0x68) = uStack_1a0;
      *(undefined8 **)(lVar5 + 0x70) = puStack_198;
    }
  }
  return;
}



/* Entry: 1095b0084; end: 1095b03e7;  */

void FUN_1095b0084(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 auStack_170 [34];
  undefined1 uStack_59;
  long alStack_58 [2];
  long lStack_48;
  
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x108)) {
    FUN_1095ae11c(param_1);
  }
  lVar5 = *(long *)(param_1 + 0x538) + 0x10;
  if (*(long *)(param_1 + 0xa8) == 0) {
    lStack_48 = NEON_rev64(**(undefined8 **)(param_2 + 0x40),4);
    FUN_109a829e8(&uStack_1c0,&lStack_48,0);
    param_1 = param_1 + 0x580;
    lStack_48 = lVar5;
    FUN_1095b3c7c(param_1,lVar5,&UNK_10dd5b8f9,&lStack_48,alStack_58);
    (**(code **)(*(long *)CONCAT44(iStack_1bc,uStack_1c0) + 0x18))
              ((long *)CONCAT44(iStack_1bc,uStack_1c0),&uStack_1c0,param_1 + 0x28,0xffffffff);
    FUN_10918eb6c(&uStack_1c0);
  }
  else {
    FUN_1095b04fc(param_1,param_2);
    FUN_1095b05d8(param_1,param_1 + 0x968);
    FUN_1095af460(&uStack_1c0,param_1,lVar5);
    param_1 = param_1 + 0x580;
    alStack_58[0] = lVar5;
    FUN_1095b3c7c(param_1,lVar5,&UNK_10dd5b8f9,alStack_58,&uStack_59);
    if (*(long *)(param_1 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x60) + 0x14);
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
        func_0x000109a848d4(param_1 + 0x28);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      lVar5 = 0;
      lVar7 = *(long *)(param_1 + 0x68);
      do {
        *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x2c));
    }
    *(undefined8 *)(param_1 + 0x30) = uStack_1b8;
    *(ulong *)(param_1 + 0x28) = CONCAT44(iStack_1bc,uStack_1c0);
    *(undefined8 *)(param_1 + 0x40) = uStack_1a8;
    *(undefined8 *)(param_1 + 0x38) = uStack_1b0;
    *(undefined8 *)(param_1 + 0x50) = uStack_198;
    *(undefined8 *)(param_1 + 0x48) = uStack_1a0;
    *(undefined8 *)(param_1 + 0x60) = uStack_188;
    *(undefined8 *)(param_1 + 0x58) = uStack_190;
    puVar8 = *(undefined8 **)(param_1 + 0x70);
    puVar6 = (undefined8 *)(param_1 + 0x78);
    if (puVar8 != puVar6) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
      }
      *(long *)(param_1 + 0x68) = param_1 + 0x30;
      *(undefined8 **)(param_1 + 0x70) = puVar6;
      puVar8 = puVar6;
    }
    if (iStack_1bc < 3) {
      puVar6 = (undefined8 *)((ulong)&uStack_1c0 | 4);
      *puVar8 = *puStack_178;
      puVar8[1] = puStack_178[1];
      uStack_1c0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      if (puStack_178 != auStack_170) {
        _free(puStack_178[-1]);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = uStack_180;
      *(undefined8 **)(param_1 + 0x70) = puStack_178;
    }
  }
  return;
}



/* Entry: 1095b03e8; end: 1095b04fb;  */

void FUN_1095b03e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  FUN_10926db08(&ppuStack_170);
  puStack_68 = &uStack_58;
  uStack_60 = 1;
  pcStack_50 = FUN_109460c3c;
  pcStack_48 = FUN_109460c90;
  uStack_58 = param_3;
  FUN_10937ad5c(&ppuStack_170,param_2,puStack_68,1);
  FUN_10926dc5c(param_1,&ppuStack_168,&puStack_68);
  appuStack_100[0] = &PTR_DAT_11088d708;
  ppuStack_170 = &PTR_SUB_11088d6e0;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_170,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 1095b04fc; end: 1095b05d7;  */

void FUN_1095b04fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 auStack_78 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  auStack_48[0] = 0x2010000;
  lVar1 = param_1 + 0x968;
  uStack_38 = 0;
  lStack_40 = lVar1;
  FUN_109a41858(0x3ff0000000000000,0,param_2,auStack_48,5);
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  lStack_58 = param_1 + 0x938;
  auStack_60[0] = 0xc1020006;
  uStack_50 = 0x400000001;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  lStack_70 = lVar1;
  lStack_40 = lVar1;
  FUN_109a91d90();
  FUN_109a293c4(auStack_48,auStack_60,auStack_78,param_2,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  lStack_40 = lVar1;
  FUN_109a41858((double)*(float *)(param_1 + 0x958),0,lVar1,auStack_48,0xffffffff);
  return;
}



/* Entry: 1095b05d8; end: 1095b104f;  */

/* WARNING: Removing unreachable block (ram,0x0001095b08f8) */
/* WARNING: Removing unreachable block (ram,0x0001095b0768) */
/* WARNING: Removing unreachable block (ram,0x0001095b06e8) */
/* WARNING: Removing unreachable block (ram,0x0001095b0778) */
/* WARNING: Removing unreachable block (ram,0x0001095b0908) */
/* WARNING: Removing unreachable block (ram,0x0001095b0824) */
/* WARNING: Removing unreachable block (ram,0x0001095b0834) */

long * FUN_1095b05d8(long param_1,long param_2)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  code *pcVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float *pfVar23;
  ulong uVar24;
  float *pfVar25;
  float *pfVar26;
  long *plVar27;
  float fVar28;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  long lStack_1d8;
  uint *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int iStack_178;
  undefined4 uStack_174;
  uint *puStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  uint uStack_15c;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long lStack_110;
  ulong uStack_108;
  uint uStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int *piStack_a0;
  int *piStack_98;
  byte bStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = 0;
  uStack_160 = 0x1010000;
  lStack_1d8._0_4_ = 0x2010000;
  uStack_1c8 = 0;
  uStack_f8._0_4_ = 0;
  uStack_f8._4_4_ = 0;
  uStack_100 = 0;
  iStack_fc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  puStack_1d0 = (uint *)(param_1 + 0x9c8);
  uStack_158 = param_2;
  FUN_109a4a0a4(&uStack_160,&lStack_1d8,0,*(int *)(param_1 + 0x118) - *(int *)(param_2 + 8),0,
                *(int *)(param_1 + 0x114) - *(int *)(param_2 + 0xc),4,&uStack_100);
  iStack_178 = (*(uint *)(param_1 + 0x9c8) >> 3 & 0x1ff) + 1;
  uStack_180 = NEON_rev64(*(undefined8 *)(param_1 + 0x9d0),4);
  uStack_174 = 1;
  uStack_188 = 0x100000001;
  func_0x000109d0f600(&lStack_1d8,&uStack_180,&uStack_188,*(undefined8 *)(param_1 + 0x9d8));
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3f800000;
  if (*(long *)(param_1 + 0x418) == 0) {
    func_0x000109cdb2c4(&uStack_100,*(undefined8 *)(param_1 + 0xa8),&lStack_1d8,1);
    func_0x0001093f2488(&uStack_200,&uStack_100);
    puVar11 = &uStack_100;
  }
  else {
    FUN_1094c8428(&uStack_100,param_1 + 0xb0,&lStack_1d8);
    FUN_1094c8958(&uStack_160,&uStack_100,1);
    func_0x000105675c90(&uStack_e8);
    plVar27 = *(long **)(param_1 + 0xa98);
    if (plVar27 != (long *)0x0) {
      do {
        FUN_1095b1664(&uStack_100,plVar27 + 5);
        puVar11 = &uStack_160;
        puStack_170 = &uStack_100;
        FUN_10937a098(puVar11,&uStack_100,&UNK_10dd5b8f9,&puStack_170,&uStack_210);
        uVar18 = uStack_c0;
        uVar8 = uStack_c8;
        *(undefined8 **)(puVar11 + 0x10) = puStack_b8;
        *(ulong *)(puVar11 + 0xe) = uVar18;
        *(undefined8 *)(puVar11 + 0xc) = uVar8;
        func_0x0001093783c0(puVar11 + 0x12,&uStack_b0);
        func_0x00010937843c(puVar11 + 0x16,&piStack_a0);
        func_0x000105675c90(&uStack_d0);
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
    func_0x000109cdb3f0(&uStack_100,*(undefined8 *)(param_1 + 0xa8),&uStack_160,1);
    func_0x0001093f2488(&uStack_200,&uStack_100);
    func_0x000109379fe8(&uStack_100);
    plVar27 = *(long **)(param_1 + 0xa98);
    if (*(int *)(param_1 + 0x3fc) < *(int *)(param_1 + 0x3f8)) {
      for (; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        FUN_1095b1664(&uStack_100,plVar27 + 5);
        puVar12 = &uStack_200;
        FUN_10938e710(puVar12,&uStack_e8);
        if (puVar12 == (undefined8 *)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1095b0f44;
        }
        uStack_c0 = puVar12[7];
        uStack_c8 = puVar12[6];
        puStack_b8 = (undefined8 *)puVar12[8];
        func_0x0001093783c0(&uStack_b0,puVar12 + 9);
        func_0x00010937843c(&piStack_a0,puVar12 + 0xb);
        func_0x000105675c90(&uStack_d0);
      }
    }
    else {
      for (; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        FUN_1095b1664(&uStack_100,plVar27 + 5);
        if ((bStack_88 & 1) == 0) {
          iVar16 = (int)uStack_c0 * uStack_c0._4_4_ * uStack_c8._4_4_ * (int)uStack_c8;
        }
        else {
          iVar16 = 1;
          for (piVar19 = piStack_a0; piVar19 != piStack_98; piVar19 = piVar19 + 1) {
            iVar16 = *piVar19 * iVar16;
          }
        }
        if (0xe < (uint)puStack_b8) {
          FUN_10952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
          goto LAB_1095b0f44;
        }
        if (*(int *)(&UNK_10dfd5e38 + ((ulong)puStack_b8 & 0xffffffff) * 4) * iVar16 != 0) {
          _bzero(uStack_b0);
        }
        *(undefined4 *)(param_1 + 0x3fc) = 0;
        func_0x000105675c90(&uStack_d0);
      }
    }
    *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) + 1;
    puVar11 = &uStack_160;
  }
  func_0x000109379fe8(puVar11);
  __ZNSt3__15mutex4lockEv(param_1 + 0x498);
  puVar12 = &uStack_200;
  FUN_10938e710(puVar12,param_1 + 200);
  if (puVar12 == (undefined8 *)0x0) {
    FUN_109262df8(&UNK_10f639994);
LAB_1095b0f44:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1095b0f48);
    (*pcVar10)();
  }
  func_0x000109d0e828(&uStack_100,puVar12 + 5,&uStack_188,0);
  *(ulong *)(param_1 + 0x838) = CONCAT44(uStack_ec,uStack_f0);
  *(ulong *)(param_1 + 0x830) = CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
  *(ulong *)(param_1 + 0x840) = CONCAT44(uStack_e4,uStack_e8);
  func_0x0001093783c0(param_1 + 0x848,&uStack_e0);
  func_0x00010937843c(param_1 + 0x858,&uStack_d0);
  puVar12 = (undefined8 *)(param_1 + 0x878);
  func_0x000105675c90(&uStack_100);
  iVar16 = *(int *)(param_1 + 0x834);
  iVar4 = *(int *)(param_1 + 0x830);
  uVar3 = *(uint *)(param_1 + 0x838);
  uStack_210 = *(undefined8 *)(param_1 + 0x95c);
  uStack_208 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  uVar7 = uVar3 * 8 - 3;
  lStack_150 = *(long *)(param_1 + 0x848);
  uVar1 = uVar7 & 0xfff;
  uStack_160 = uVar1 | 0x42ff0000;
  uStack_15c = 2;
  puStack_120 = &uStack_158;
  uStack_158 = CONCAT44(iVar4,iVar16);
  lStack_138 = 0;
  lStack_140 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_148 = lStack_150;
  plStack_118 = &lStack_110;
  if (((long)iVar4 * (long)iVar16 != 0) && (lStack_150 == 0)) {
    puVar14 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar14 = 1;
    puStack_170 = puVar14 + 1;
    uStack_168 = 0x1c;
    *(undefined1 *)(puVar14 + 8) = 0;
    *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_170,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    goto LAB_1095b0f44;
  }
  uVar7 = (uVar7 >> 1 & 0x7fc) + 4;
  uStack_108 = (ulong)uVar7;
  lStack_110 = (long)(int)uVar7 * (long)iVar4;
  uStack_160 = uVar1 | 0x42ff4000;
  lStack_140 = lStack_150 + lStack_110 * iVar16;
  lStack_138 = lStack_140;
  FUN_109a852c8();
  if (*(long *)(param_1 + 0x8b0) != 0) {
    piVar19 = (int *)(*(long *)(param_1 + 0x8b0) + 0x14);
    do {
      iVar16 = *piVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar6) {
        *piVar19 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(puVar12);
    }
  }
  *(undefined8 *)(param_1 + 0x8b0) = 0;
  *(undefined8 *)(param_1 + 0x890) = 0;
  *(undefined8 *)(param_1 + 0x888) = 0;
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  *(undefined8 *)(param_1 + 0x898) = 0;
  if (0 < *(int *)(param_1 + 0x87c)) {
    lVar17 = 0;
    lVar20 = *(long *)(param_1 + 0x8b8);
    do {
      *(undefined4 *)(lVar20 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x87c));
  }
  *(ulong *)(param_1 + 0x880) = CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
  *puVar12 = CONCAT44(iStack_fc,uStack_100);
  *(ulong *)(param_1 + 0x890) = CONCAT44(uStack_e4,uStack_e8);
  *(ulong *)(param_1 + 0x888) = CONCAT44(uStack_ec,uStack_f0);
  *(ulong *)(param_1 + 0x8a0) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(param_1 + 0x898) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined8 *)(param_1 + 0x8b0) = uStack_c8;
  *(ulong *)(param_1 + 0x8a8) = CONCAT44(uStack_cc,uStack_d0);
  puVar21 = *(undefined8 **)(param_1 + 0x8c0);
  puVar22 = (undefined8 *)(param_1 + 0x8c8);
  if (puVar21 != puVar22) {
    if (puVar21 != (undefined8 *)0x0) {
      _free(puVar21[-1]);
    }
    *(undefined8 **)(param_1 + 0x8c0) = puVar22;
    *(long *)(param_1 + 0x8b8) = param_1 + 0x880;
    puVar21 = puVar22;
  }
  puVar22 = (undefined8 *)((ulong)&uStack_100 | 4);
  if (iStack_fc < 3) {
    *puVar21 = *puStack_b8;
    puVar21[1] = puStack_b8[1];
    uStack_100 = 0x42ff0000;
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    if (puStack_b8 != &uStack_b0) {
      _free(puStack_b8[-1]);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0x8c0) = puStack_b8;
    *(ulong *)(param_1 + 0x8b8) = uStack_c0;
    puStack_b8 = &uStack_b0;
    uStack_100 = 0x42ff0000;
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    uStack_c0 = (ulong)&uStack_100 | 8;
  }
  if (lStack_128 != 0) {
    piVar19 = (int *)(lStack_128 + 0x14);
    do {
      iVar16 = *piVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar6) {
        *piVar19 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_160);
    }
  }
  lStack_128 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  if (0 < (int)uStack_15c) {
    lVar17 = 0;
    do {
      *(undefined4 *)((long)puStack_120 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_15c);
  }
  if (plStack_118 != &lStack_110 && plStack_118 != (long *)0x0) {
    _free(plStack_118[-1]);
  }
  uStack_f8 = (undefined8 *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
  if ((*(byte *)(param_1 + 0x550) & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x880);
    uVar7 = *(uint *)(param_1 + 0x884);
    if (*(long *)(param_1 + 0x8e8) == 0) {
LAB_1095b0c34:
      uStack_100 = 0x42ff0000;
      uStack_f8._4_4_ = 0;
      uStack_f0 = 0;
      iStack_fc = 0;
      uStack_f8._0_4_ = 0;
      uStack_c0 = (ulong)&uStack_100 | 8;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_d4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_160 = uVar1;
      uStack_15c = uVar7;
      puStack_b8 = &uStack_b0;
      FUN_109a83fd0(&uStack_100,2,&uStack_160,0);
      if (*(long *)(param_1 + 0x910) != 0) {
        piVar19 = (int *)(*(long *)(param_1 + 0x910) + 0x14);
        do {
          iVar16 = *piVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = iVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 + -1 == 0) {
          func_0x000109a848d4(param_1 + 0x8d8);
        }
      }
      *(undefined8 *)(param_1 + 0x910) = 0;
      *(undefined8 *)(param_1 + 0x8f0) = 0;
      *(undefined8 *)(param_1 + 0x8e8) = 0;
      *(undefined8 *)(param_1 + 0x900) = 0;
      *(undefined8 *)(param_1 + 0x8f8) = 0;
      if (0 < *(int *)(param_1 + 0x8dc)) {
        lVar17 = 0;
        lVar20 = *(long *)(param_1 + 0x918);
        do {
          *(undefined4 *)(lVar20 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(param_1 + 0x8dc));
      }
      *(ulong *)(param_1 + 0x8e0) = CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
      *(ulong *)(param_1 + 0x8d8) = CONCAT44(iStack_fc,uStack_100);
      *(ulong *)(param_1 + 0x8f0) = CONCAT44(uStack_e4,uStack_e8);
      *(ulong *)(param_1 + 0x8e8) = CONCAT44(uStack_ec,uStack_f0);
      *(ulong *)(param_1 + 0x900) = CONCAT44(uStack_d4,uStack_d8);
      *(ulong *)(param_1 + 0x8f8) = CONCAT44(uStack_dc,uStack_e0);
      *(undefined8 *)(param_1 + 0x910) = uStack_c8;
      *(ulong *)(param_1 + 0x908) = CONCAT44(uStack_cc,uStack_d0);
      puVar21 = *(undefined8 **)(param_1 + 0x920);
      puVar22 = (undefined8 *)(param_1 + 0x928);
      if (puVar21 != puVar22) {
        if (puVar21 != (undefined8 *)0x0) {
          _free(puVar21[-1]);
        }
        *(undefined8 **)(param_1 + 0x920) = puVar22;
        *(long *)(param_1 + 0x918) = param_1 + 0x8e0;
        puVar21 = puVar22;
      }
      if (iStack_fc < 3) {
        puVar22 = (undefined8 *)((ulong)&uStack_100 | 4);
        *puVar21 = *puStack_b8;
        puVar21[1] = puStack_b8[1];
        uStack_100 = 0x42ff0000;
        puVar22[1] = 0;
        *puVar22 = 0;
        puVar22[3] = 0;
        puVar22[2] = 0;
        puVar22[5] = 0;
        puVar22[4] = 0;
        *(undefined8 *)((long)puVar22 + 0x34) = 0;
        *(undefined8 *)((long)puVar22 + 0x2c) = 0;
        if (puStack_b8 != &uStack_b0) {
          _free(puStack_b8[-1]);
        }
      }
      else {
        *(undefined8 **)(param_1 + 0x920) = puStack_b8;
        *(ulong *)(param_1 + 0x918) = uStack_c0;
      }
    }
    else {
      uVar18 = (ulong)*(uint *)(param_1 + 0x8dc);
      if ((int)*(uint *)(param_1 + 0x8dc) < 3) {
        lVar17 = (long)*(int *)(param_1 + 0x8e4) * (long)*(int *)(param_1 + 0x8e0);
      }
      else {
        lVar17 = 1;
        piVar19 = *(int **)(param_1 + 0x918);
        do {
          lVar17 = lVar17 * *piVar19;
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 1;
        } while (uVar18 != 0);
      }
      if (lVar17 == 0) goto LAB_1095b0c34;
    }
    if ((int)uVar3 < 2) {
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_100 = 0x1010000;
      uStack_160 = 0x2010000;
      lStack_150 = 0;
      uStack_158 = param_1 + 0x8d8;
      uStack_f8 = puVar12;
      FUN_109b59078(0x3fe0000000000000,0x3ff0000000000000,&uStack_100,&uStack_160,1);
    }
    else {
      uStack_f8 = (undefined8 *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
      if (0 < (int)uVar1) {
        uVar18 = 0;
        pfVar23 = *(float **)(param_1 + 0x888);
        do {
          if (0 < (int)uVar7) {
            uVar24 = 0;
            lVar17 = *(long *)(param_1 + 0x8e8);
            lVar20 = **(long **)(param_1 + 0x920);
            pfVar25 = pfVar23;
            do {
              fVar28 = *pfVar25;
              lVar13 = (ulong)uVar3 * 4 + -4;
              pfVar26 = pfVar25;
              pfVar15 = pfVar25;
              do {
                pfVar15 = pfVar15 + 1;
                pfVar2 = pfVar15;
                fVar9 = *pfVar15;
                if (*pfVar15 <= fVar28) {
                  pfVar2 = pfVar26;
                  fVar9 = fVar28;
                }
                fVar28 = fVar9;
                lVar13 = lVar13 + -4;
                pfVar26 = pfVar2;
              } while (lVar13 != 0);
              *(char *)(lVar17 + lVar20 * uVar18 + uVar24) =
                   (char)((uint)((int)pfVar2 - (int)pfVar25) >> 2);
              uVar24 = uVar24 + 1;
              pfVar25 = pfVar25 + uVar3;
            } while (uVar24 != uVar7);
          }
          uVar18 = uVar18 + 1;
          pfVar23 = pfVar23 + (int)(uVar7 * uVar3);
          uStack_f8 = (undefined8 *)CONCAT44(uStack_f8._4_4_,(undefined4)uStack_f8);
        } while (uVar18 != uVar1);
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x498);
  func_0x000109379fe8(&uStack_200);
  plVar27 = &lStack_1d8;
  func_0x000105675c90();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar27;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_100);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x498);
  func_0x000109379fe8(&uStack_200);
  func_0x000105675c90(&lStack_1d8);
  __Unwind_Resume();
  puVar12 = (undefined8 *)plVar27[1];
  puVar22 = (undefined8 *)plVar27[2];
  plVar27[5] = 0;
  lVar17 = (long)puVar22 - (long)puVar12;
  while (uVar18 = lVar17 >> 3, 2 < uVar18) {
    __ZdlPv(*puVar12);
    puVar22 = (undefined8 *)plVar27[2];
    puVar12 = (undefined8 *)(plVar27[1] + 8);
    plVar27[1] = (long)puVar12;
    lVar17 = (long)puVar22 - (long)puVar12;
  }
  if (uVar18 == 1) {
    lVar17 = 0x100;
  }
  else {
    if (uVar18 != 2) goto LAB_1095b10cc;
    lVar17 = 0x200;
  }
  plVar27[4] = lVar17;
LAB_1095b10cc:
  for (; puVar12 != puVar22; puVar12 = puVar12 + 1) {
    __ZdlPv(*puVar12);
  }
  func_0x000108a9fa1c();
  if (*plVar27 != 0) {
    __ZdlPv();
  }
  return plVar27;
}



/* Entry: 1095b1050; end: 1095b10e7;  */

long * FUN_1095b1050(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_1095b10cc;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_1095b10cc:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  func_0x000108a9fa1c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095b10e8; end: 1095b1197;  */

long * FUN_1095b10e8(long *param_1)

{
  long lVar1;
  
  func_0x0001095b1120(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095b1198; end: 1095b120f;  */

void FUN_1095b1198(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  uVar4 = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)puVar1 + 0x21) = uVar4;
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    uVar2 = param_2[7];
    puVar1[8] = param_2[8];
    puVar1[7] = uVar2;
    puVar1[9] = param_2[9];
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 0xb;
  return;
}



/* Entry: 1095b1210; end: 1095b1263;  */

void FUN_1095b1210(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x0001095b1120(param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1095b1264; end: 1095b1313;  */

float FUN_1095b1264(float *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  
  fVar1 = (float)*param_2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  uVar2 = NEON_rev64(CONCAT44(fVar3 * (float)*(undefined8 *)(param_1 + 7),fVar1 * *param_1),4);
  return *param_3 +
         param_3[2] *
         (((fVar3 * (float)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) +
            (float)((ulong)uVar2 >> 0x20) +
           (float)((ulong)*(undefined8 *)(param_1 + 0xb) >> 0x20) * 0.0 +
           (float)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20) * *(float *)(param_2 + 1)) /
          (fVar1 * (float)*(undefined8 *)(param_1 + 3) + (float)uVar2 +
          (float)*(undefined8 *)(param_1 + 0xb) * *(float *)(param_2 + 1) + param_1[0xf] * 0.0)) *
          0.5 + 0.5);
}



/* Entry: 1095b1314; end: 1095b1457;  */

void FUN_1095b1314(float param_1,undefined2 *param_2,long param_3,uint param_4,undefined2 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  byte abStack_6 [6];
  
  if (((-1 < (int)param_4) && (0.0 <= param_1 && (int)param_4 < (*(int **)(param_3 + 0x40))[1])) &&
     (param_1 < (float)(**(int **)(param_3 + 0x40) + -1))) {
    lVar1 = 0;
    lVar2 = *(long *)(param_3 + 0x10);
    lVar3 = **(long **)(param_3 + 0x48);
    do {
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + lVar3 * (int)param_1 +
                                                (ulong)param_4 * 2 + (ulong)param_4 + lVar1));
      uVar4 = (uint)(long)(float)(int)((1.0 - (param_1 - (float)(int)param_1)) * fVar5);
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar4) {
        uVar4 = 0xff;
      }
      abStack_6[lVar1 + 3] = (byte)uVar4;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    lVar1 = 0;
    do {
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(lVar2 + lVar3 * ((int)param_1 + 1) +
                                                (ulong)param_4 * 3 + lVar1));
      uVar4 = (uint)(long)(float)(int)((param_1 - (float)(int)param_1) * fVar5);
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar4) {
        uVar4 = 0xff;
      }
      abStack_6[lVar1] = (byte)uVar4;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    lVar1 = 0;
    do {
      uVar4 = (uint)abStack_6[lVar1] + (uint)abStack_6[lVar1 + 3];
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      *(char *)((long)param_2 + lVar1) = (char)uVar4;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    return;
  }
  *param_2 = *param_5;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_5 + 1);
  return;
}



/* Entry: 1095b1458; end: 1095b14df;  */

int FUN_1095b1458(float param_1,long param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  
  if (((-1 < (int)param_3) && (0.0 <= param_1 && (int)param_3 < (*(int **)(param_2 + 0x40))[1])) &&
     (param_1 < (float)(**(int **)(param_2 + 0x40) + -1))) {
    fVar1 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(param_2 + 0x10) +
                                              **(long **)(param_2 + 0x48) * (long)(int)param_1 +
                                             (ulong)param_3));
    fVar2 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(param_2 + 0x10) +
                                              **(long **)(param_2 + 0x48) * (long)((int)param_1 + 1)
                                             + (ulong)param_3));
    return (int)((param_1 - (float)(int)param_1) * fVar2 +
                fVar1 * (1.0 - (param_1 - (float)(int)param_1)));
  }
  return 0;
}



/* Entry: 1095b14e0; end: 1095b1617;  */

void FUN_1095b14e0(int *param_1,double *param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  func_0x000108a9e40c(param_1 + 2);
  dVar2 = *param_2;
  dVar3 = *(double *)(param_1 + 0xe);
  *(double *)(param_1 + 0xe) = dVar2 + dVar3;
  if (*param_1 < (int)*(long *)(param_1 + 0xc)) {
    uVar1 = *(ulong *)(param_1 + 10);
    *(double *)(param_1 + 0xe) =
         (dVar2 + dVar3) -
         *(double *)((*(undefined8 **)(param_1 + 4))[uVar1 >> 9] + (uVar1 & 0x1ff) * 8);
    *(ulong *)(param_1 + 10) = uVar1 + 1;
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + -1;
    if (0x3ff < uVar1 + 1) {
      __ZdlPv(**(undefined8 **)(param_1 + 4));
      *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 8;
      *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + -0x200;
    }
  }
  return;
}



/* Entry: 1095b1618; end: 1095b1663;  */

long * FUN_1095b1618(long *param_1)

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



/* Entry: 1095b1664; end: 1095b176b;  */

undefined8 * FUN_1095b1664(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    param_1[3] = uVar5;
  }
  param_1[6] = &PTR_DAT_1108a5c28;
  uVar6 = param_2[8];
  uVar5 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar6;
  param_1[7] = uVar5;
  lVar4 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
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
  FUN_109407928(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



/* Entry: 1095b176c; end: 1095b177f;  */

undefined1  [16] FUN_1095b176c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3a == 0) {
    lVar3 = (long)puVar2 << 6;
    __Znwm(lVar3);
    auVar7._8_8_ = puVar2;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  func_0x000104c4f740();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar4 >> 0x3d == 0) {
    lVar3 = (long)plVar4 << 3;
    __Znwm(lVar3);
    auVar8._8_8_ = plVar4;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar4[1];
  plVar6 = (long *)plVar4[2];
  while (plVar6 != plVar1) {
    plVar6 = plVar6 + -1;
    plVar5 = (long *)*plVar6;
    plVar4[2] = (long)plVar6;
    *plVar6 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar6 = (long *)plVar4[2];
    }
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = plVar4;
  return auVar9;
}



/* Entry: 1095b1780; end: 1095b17b3;  */

undefined1  [16] FUN_1095b1780(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 >> 0x3a == 0) {
    lVar2 = param_1 << 6;
    __Znwm(lVar2);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar3 >> 0x3d == 0) {
    lVar2 = (long)plVar3 << 3;
    __Znwm(lVar2);
    auVar7._8_8_ = plVar3;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar3[1];
  plVar5 = (long *)plVar3[2];
  while (plVar5 != plVar1) {
    plVar5 = plVar5 + -1;
    plVar4 = (long *)*plVar5;
    plVar3[2] = (long)plVar5;
    *plVar5 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      plVar5 = (long *)plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = plVar3;
  return auVar8;
}



/* Entry: 1095b17b4; end: 1095b17c7;  */

undefined1  [16] FUN_1095b17b4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar2 >> 0x3d == 0) {
    lVar3 = (long)plVar2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = plVar2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar2[1];
  plVar5 = (long *)plVar2[2];
  while (plVar5 != plVar1) {
    plVar5 = plVar5 + -1;
    plVar4 = (long *)*plVar5;
    plVar2[2] = (long)plVar5;
    *plVar5 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      plVar5 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar2;
  return auVar7;
}



/* Entry: 1095b17c8; end: 1095b1857;  */

undefined1  [16] FUN_1095b17c8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar2 = (long)param_1 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    plVar3 = (long *)*plVar4;
    param_1[2] = (long)plVar4;
    *plVar4 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar4 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1095b1858; end: 1095b18cb;  */

void FUN_1095b1858(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 1095b18cc; end: 1095b192b;  */

void FUN_1095b18cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0xbb0;
  __Znwm();
  FUN_1095b192c();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 1095b192c; end: 1095b1973;  */

undefined8 * FUN_1095b192c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110afde78;
  FUN_1095ad8f0(param_1 + 3);
  return param_1;
}



/* Entry: 1095b1974; end: 1095b1983;  */

void FUN_1095b1974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afde78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095b1984; end: 1095b19a3;  */

void FUN_1095b1984(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afde78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095b19a4; end: 1095b22ff;  */

void FUN_1095b19a4(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lStack_38;
  
  FUN_1094a310c(param_1 + 0x4a0);
  plVar6 = (long *)*(long *)(param_1 + 0xb98);
  while (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    func_0x0001095b24e4(plVar6 + 2);
    __ZdlPv(plVar6);
    plVar6 = (long *)lVar8;
  }
  lVar8 = *(long *)(param_1 + 0xb88);
  *(undefined8 *)(param_1 + 0xb88) = 0;
  if (lVar8 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb60) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb60) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xb28);
    }
  }
  *(undefined8 *)(param_1 + 0xb60) = 0;
  *(undefined8 *)(param_1 + 0xb40) = 0;
  *(undefined8 *)(param_1 + 0xb38) = 0;
  *(undefined8 *)(param_1 + 0xb50) = 0;
  *(undefined8 *)(param_1 + 0xb48) = 0;
  if (0 < *(int *)(param_1 + 0xb2c)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0xb68);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xb2c));
  }
  lVar8 = *(long *)(param_1 + 0xb70);
  if (lVar8 != param_1 + 0xb78 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  if (*(long *)(param_1 + 0xb00) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb00) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xac8);
    }
  }
  *(undefined8 *)(param_1 + 0xb00) = 0;
  *(undefined8 *)(param_1 + 0xae0) = 0;
  *(undefined8 *)(param_1 + 0xad8) = 0;
  *(undefined8 *)(param_1 + 0xaf0) = 0;
  *(undefined8 *)(param_1 + 0xae8) = 0;
  if (0 < *(int *)(param_1 + 0xacc)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0xb08);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xacc));
  }
  lVar8 = *(long *)(param_1 + 0xb10);
  if (lVar8 != param_1 + 0xb18 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  plVar6 = (long *)*(long *)(param_1 + 0xab0);
  while (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    func_0x0001095b2488(plVar6 + 2);
    __ZdlPv(plVar6);
    plVar6 = (long *)lVar8;
  }
  lVar8 = *(long *)(param_1 + 0xaa0);
  *(undefined8 *)(param_1 + 0xaa0) = 0;
  if (lVar8 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa78) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xa78) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xa40);
    }
  }
  *(undefined8 *)(param_1 + 0xa78) = 0;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa68) = 0;
  *(undefined8 *)(param_1 + 0xa60) = 0;
  if (0 < *(int *)(param_1 + 0xa44)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0xa80);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xa44));
  }
  lVar8 = *(long *)(param_1 + 0xa88);
  if (lVar8 != param_1 + 0xa90 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  if (*(long *)(param_1 + 0xa18) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xa18) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x9e0);
    }
  }
  *(undefined8 *)(param_1 + 0xa18) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa00) = 0;
  if (0 < *(int *)(param_1 + 0x9e4)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0xa20);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x9e4));
  }
  lVar8 = *(long *)(param_1 + 0xa28);
  if (lVar8 != param_1 + 0xa30 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  if (*(long *)(param_1 + 0x9b8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x9b8) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x980);
    }
  }
  *(undefined8 *)(param_1 + 0x9b8) = 0;
  *(undefined8 *)(param_1 + 0x998) = 0;
  *(undefined8 *)(param_1 + 0x990) = 0;
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  if (0 < *(int *)(param_1 + 0x984)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x9c0);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x984));
  }
  lVar8 = *(long *)(param_1 + 0x9c8);
  if (lVar8 != param_1 + 0x9d0 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  if (*(long *)(param_1 + 0x928) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x928) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x8f0);
    }
  }
  *(undefined8 *)(param_1 + 0x928) = 0;
  *(undefined8 *)(param_1 + 0x908) = 0;
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined8 *)(param_1 + 0x910) = 0;
  if (0 < *(int *)(param_1 + 0x8f4)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x930);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x8f4));
  }
  lVar8 = *(long *)(param_1 + 0x938);
  if (lVar8 != param_1 + 0x940 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  if (*(long *)(param_1 + 0x8c8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x8c8) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x890);
    }
  }
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  *(undefined8 *)(param_1 + 0x8b8) = 0;
  *(undefined8 *)(param_1 + 0x8b0) = 0;
  if (0 < *(int *)(param_1 + 0x894)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x8d0);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x894));
  }
  lVar8 = *(long *)(param_1 + 0x8d8);
  if (lVar8 != param_1 + 0x8e0 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  func_0x000105675c90(param_1 + 0x840);
  if (*(long *)(param_1 + 0x818) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x818) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x7e0);
    }
  }
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined8 *)(param_1 + 0x7f0) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x800) = 0;
  if (0 < *(int *)(param_1 + 0x7e4)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x820);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x7e4));
  }
  lVar8 = *(long *)(param_1 + 0x828);
  if (lVar8 != param_1 + 0x830 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  if (*(long *)(param_1 + 0x7b8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x7b8) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x780);
    }
  }
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  if (0 < *(int *)(param_1 + 0x784)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x7c0);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x784));
  }
  lVar8 = *(long *)(param_1 + 0x7c8);
  if (lVar8 != param_1 + 2000 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  FUN_1094c8830(param_1 + 0x758);
  if (*(long *)(param_1 + 0x730) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x730) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x6f8);
    }
  }
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  if (0 < *(int *)(param_1 + 0x6fc)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x738);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x6fc));
  }
  lVar8 = *(long *)(param_1 + 0x740);
  if (lVar8 != param_1 + 0x748 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  if (*(long *)(param_1 + 0x6d0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x6d0) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x698);
    }
  }
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  if (0 < *(int *)(param_1 + 0x69c)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x6d8);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x69c));
  }
  lVar8 = *(long *)(param_1 + 0x6e0);
  if (lVar8 != param_1 + 0x6e8 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  func_0x0001095ae004(param_1 + 0x690,0);
  if (*(long *)(param_1 + 0x650) != 0) {
    *(long *)(param_1 + 0x658) = *(long *)(param_1 + 0x650);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x638) != 0) {
    *(long *)(param_1 + 0x640) = *(long *)(param_1 + 0x638);
    __ZdlPv();
  }
  FUN_1095a2b68(param_1 + 0x610);
  func_0x0001092b0b8c(param_1 + 0x5e8);
  func_0x0001092b0b8c(param_1 + 0x5c0);
  FUN_1094c8830(param_1 + 0x598);
  FUN_1094c8830(param_1 + 0x570);
  func_0x0001095b240c(param_1 + 0x540);
  func_0x000107c2826c(param_1 + 0x518);
  func_0x000107c2826c(param_1 + 0x4f0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x4b0);
  plVar6 = *(long **)(param_1 + 0x4a8);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_109476864(param_1 + 0x4a0,0);
  if (*(long *)(param_1 + 0x478) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x478) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x440);
    }
  }
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  if (0 < *(int *)(param_1 + 0x444)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x480);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x444));
  }
  lVar8 = *(long *)(param_1 + 0x488);
  if (lVar8 != param_1 + 0x490 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  func_0x0001095a2e38(param_1 + 0x418);
  lStack_38 = param_1 + 0x3f8;
  func_0x000104c607c8(&lStack_38);
  if (*(long *)(param_1 + 0x3c8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x3c8) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x390);
    }
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (0 < *(int *)(param_1 + 0x394)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x3d0);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x394));
  }
  lVar8 = *(long *)(param_1 + 0x3d8);
  if (lVar8 != param_1 + 0x3e0 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  FUN_1095b10e8(param_1 + 0x368);
  FUN_1095b10e8(param_1 + 0x340);
  FUN_1095b10e8(param_1 + 0x318);
  FUN_1095b1050(param_1 + 0x2e0);
  FUN_1095b1050(param_1 + 0x2a0);
  FUN_1095b1050(param_1 + 0x260);
  if (*(char *)(param_1 + 0x20f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1f8));
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1d8);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x1c7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(char *)(param_1 + 399) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x178));
  }
  plVar6 = *(long **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (*(char *)(param_1 + 0x15f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x148));
  }
  FUN_10938cda4(param_1 + 0x110,0);
  func_0x0001094d9450(param_1 + 0x100);
  if (*(char *)(param_1 + 0xf7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  FUN_10938cda4(param_1 + 0xc0,0);
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar8 = 0;
    lVar7 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 100));
  }
  lVar8 = *(long *)(param_1 + 0xa8);
  if (lVar8 != param_1 + 0xb0 && lVar8 != 0) {
    _free(*(undefined8 *)(lVar8 + -8));
  }
  func_0x0001095ae04c(param_1 + 0x58,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1095b2300; end: 1095b2303;  */

void FUN_1095b2300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095b2304; end: 1095b251f;  */

void FUN_1095b2304(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
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
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 1095b2520; end: 1095b26bb;  */

void FUN_1095b2520(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    plVar5 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar2 = plVar5;
    if (plVar5 != (long *)0x0 && param_2 != (long *)0x0) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar2 + 2,param_2 + 2);
        *(int *)(plVar2 + 5) = (int)param_2[5];
        plVar5 = (long *)*plVar2;
        FUN_1095b26bc(param_1,plVar2);
        param_2 = (long *)*param_2;
        plVar2 = plVar5;
      } while (plVar5 != (long *)0x0 && param_2 != (long *)0x0);
    }
    func_0x0001092b0bc4(param_1,plVar5);
  }
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
    *puVar1 = 0;
    puVar1[1] = 0;
    if (*(char *)((long)param_2 + 0x27) < '\0') {
      func_0x000107c3192c(puVar1 + 2,param_2[2],param_2[3]);
    }
    else {
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      puVar1[4] = param_2[4];
      puVar1[3] = uVar7;
      puVar1[2] = uVar6;
    }
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 5);
    plVar2 = param_1;
    func_0x000107c31944(param_1,puVar1 + 2);
    puVar1[1] = plVar2;
    FUN_1095b26bc(param_1,puVar1);
  }
  return;
}



/* Entry: 1095b26bc; end: 1095b2f2b;  */

void FUN_1095b26bc(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  byte bVar20;
  
  plVar9 = param_2 + 2;
  plVar14 = param_1;
  func_0x000107c31944();
  param_2[1] = (long)plVar14;
  plVar16 = (long *)param_1[1];
  if ((plVar16 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar16 < (float)(param_1[3] + 1))) {
    uVar17 = 1;
    if ((long *)0x2 < plVar16) {
      uVar17 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar8 = (long *)(uVar17 | (long)plVar16 << 1);
    plVar12 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar8 <= plVar12) {
      plVar8 = plVar12;
    }
    plVar12 = plVar14;
    if ((long)plVar8 - 1U == 0) {
      plVar8 = (long *)0x2;
    }
    else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar16 = (long *)param_1[1];
      plVar12 = plVar8;
    }
    if (plVar16 < plVar8) {
LAB_1095b2778:
      if ((ulong)plVar8 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar14 = plVar9 + 2;
        plVar16 = plVar12;
        func_0x000107c31944();
        plVar9[1] = (long)plVar16;
        plVar8 = (long *)plVar12[1];
        if ((plVar8 == (long *)0x0) ||
           (*(float *)(plVar12 + 4) * (float)plVar8 < (float)(plVar12[3] + 1))) {
          uVar17 = 1;
          if ((long *)0x2 < plVar8) {
            uVar17 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
          }
          plVar19 = (long *)(uVar17 | (long)plVar8 << 1);
          plVar13 = (long *)(long)((float)(plVar12[3] + 1) / *(float *)(plVar12 + 4));
          if (plVar19 <= plVar13) {
            plVar19 = plVar13;
          }
          plVar13 = plVar16;
          if ((long)plVar19 - 1U == 0) {
            plVar19 = (long *)0x2;
          }
          else if (((ulong)plVar19 & (long)plVar19 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar8 = (long *)plVar12[1];
            plVar13 = plVar19;
          }
          if (plVar8 < plVar19) {
LAB_1095b2bb0:
            if ((ulong)plVar19 >> 0x3d != 0) {
              func_0x000104c4f740();
              plRam0000000113733070 = (long *)0x0;
              lRam0000000113733068 = 0;
              uRam0000000113733080 = 0;
              plRam0000000113733078 = (long *)0x0;
              fRam0000000113733088 = 1.0;
              if (plVar14 != (long *)0x0) {
                plVar9 = plVar13 + (long)plVar14 * 4;
                do {
                  plVar16 = (long *)0x113733068;
                  func_0x000107c31944(0x113733068,plVar13);
                  plVar14 = plRam0000000113733070;
                  if (plRam0000000113733070 != (long *)0x0) {
                    uVar17 = (long)plRam0000000113733070 - 1;
                    if (((ulong)plRam0000000113733070 & uVar17) == 0) {
                      plVar8 = (long *)(uVar17 & (ulong)plVar16);
                    }
                    else {
                      plVar8 = plVar16;
                      if (plRam0000000113733070 <= plVar16) {
                        uVar1 = 0;
                        if (plRam0000000113733070 != (long *)0x0) {
                          uVar1 = (ulong)plVar16 / (ulong)plRam0000000113733070;
                        }
                        plVar8 = (long *)((long)plVar16 - uVar1 * (long)plRam0000000113733070);
                      }
                    }
                    plVar12 = *(long **)(lRam0000000113733068 + (long)plVar8 * 8);
                    if (plVar12 != (long *)0x0) {
                      for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0;
                          plVar12 = (long *)*plVar12) {
                        plVar19 = (long *)plVar12[1];
                        if (plVar19 == plVar16) {
                          plVar19 = (long *)0x113733068;
                          func_0x000104c4fbc4(0x113733068,plVar12 + 2,plVar13);
                          if (((ulong)plVar19 & 1) != 0) goto LAB_1095b32e4;
                        }
                        else {
                          if (((ulong)plVar14 & uVar17) == 0) {
                            plVar19 = (long *)((ulong)plVar19 & uVar17);
                          }
                          else if (plVar14 <= plVar19) {
                            uVar1 = 0;
                            if (plVar14 != (long *)0x0) {
                              uVar1 = (ulong)plVar19 / (ulong)plVar14;
                            }
                            plVar19 = (long *)((long)plVar19 - uVar1 * (long)plVar14);
                          }
                          if (plVar19 != plVar8) break;
                        }
                      }
                    }
                  }
                  plVar12 = (long *)0x30;
                  __Znwm();
                  *plVar12 = 0;
                  plVar12[1] = (long)plVar16;
                  if (*(char *)((long)plVar13 + 0x17) < '\0') {
                    func_0x000107c3192c(plVar12 + 2,*plVar13,plVar13[1]);
                  }
                  else {
                    lVar6 = plVar13[1];
                    lVar5 = *plVar13;
                    plVar12[4] = plVar13[2];
                    plVar12[3] = lVar6;
                    plVar12[2] = lVar5;
                  }
                  *(int *)(plVar12 + 5) = (int)plVar13[3];
                  if ((plVar14 == (long *)0x0) ||
                     (fRam0000000113733088 * (float)plVar14 < (float)(uRam0000000113733080 + 1))) {
                    uVar17 = 1;
                    if ((long *)0x2 < plVar14) {
                      uVar17 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
                    }
                    plVar8 = (long *)(uVar17 | (long)plVar14 << 1);
                    plVar14 = (long *)(long)((float)(uRam0000000113733080 + 1) /
                                            fRam0000000113733088);
                    if (plVar8 <= plVar14) {
                      plVar8 = plVar14;
                    }
                    if ((long)plVar8 - 1U == 0) {
                      plVar8 = (long *)0x2;
                    }
                    else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                    }
                    plVar19 = plRam0000000113733070;
                    if (plRam0000000113733070 < plVar8) {
LAB_1095b30e8:
                      if ((ulong)plVar8 >> 0x3d != 0) {
                        func_0x000104c4f740();
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x1095b335c);
                        (*pcVar2)();
                      }
                      lVar5 = (long)plVar8 << 3;
                      __Znwm();
                      bVar3 = lRam0000000113733068 != 0;
                      lRam0000000113733068 = lVar5;
                      if (bVar3) {
                        __ZdlPv();
                      }
                      plVar14 = (long *)0x0;
                      plRam0000000113733070 = plVar8;
                      do {
                        *(undefined8 *)(lRam0000000113733068 + (long)plVar14 * 8) = 0;
                        plVar19 = plRam0000000113733078;
                        plVar14 = (long *)((long)plVar14 + 1);
                      } while (plVar8 != plVar14);
                      plVar14 = plVar8;
                      if (plRam0000000113733078 != (long *)0x0) {
                        plVar10 = (long *)plRam0000000113733078[1];
                        uVar17 = (long)plVar8 - 1;
                        if (((ulong)plVar8 & uVar17) == 0) {
                          plVar10 = (long *)((ulong)plVar10 & uVar17);
                        }
                        else if (plVar8 <= plVar10) {
                          uVar1 = 0;
                          if (plVar8 != (long *)0x0) {
                            uVar1 = (ulong)plVar10 / (ulong)plVar8;
                          }
                          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar8);
                        }
                        *(undefined8 *)(lRam0000000113733068 + (long)plVar10 * 8) = 0x113733078;
                        plVar15 = (long *)*plVar19;
                        lVar5 = lRam0000000113733068;
                        while (lRam0000000113733068 = lVar5, plVar15 != (long *)0x0) {
                          plVar11 = (long *)plVar15[1];
                          if (((ulong)plVar8 & uVar17) == 0) {
                            plVar11 = (long *)((ulong)plVar11 & uVar17);
                          }
                          else if (plVar8 <= plVar11) {
                            uVar1 = 0;
                            if (plVar8 != (long *)0x0) {
                              uVar1 = (ulong)plVar11 / (ulong)plVar8;
                            }
                            plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar8);
                          }
                          plVar7 = plVar15;
                          if (plVar11 != plVar10) {
                            if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
                              *(long **)(lVar5 + (long)plVar11 * 8) = plVar19;
                              plVar10 = plVar11;
                            }
                            else {
                              *plVar19 = *plVar15;
                              *plVar15 = **(long **)(lVar5 + (long)plVar11 * 8);
                              **(undefined8 **)(lVar5 + (long)plVar11 * 8) = plVar15;
                              plVar7 = plVar19;
                            }
                          }
                          lVar5 = lRam0000000113733068;
                          plVar19 = plVar7;
                          plVar15 = (long *)*plVar7;
                        }
                      }
                    }
                    else {
                      plVar14 = plRam0000000113733070;
                      if (plVar8 < plRam0000000113733070) {
                        plVar14 = (long *)(long)((float)uRam0000000113733080 / fRam0000000113733088)
                        ;
                        if ((plRam0000000113733070 < (long *)0x3) ||
                           (((ulong)plRam0000000113733070 & (long)plRam0000000113733070 - 1U) != 0))
                        {
                          __ZNSt3__112__next_primeEm();
                        }
                        else if ((long *)0x1 < plVar14) {
                          plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
                        }
                        lVar5 = lRam0000000113733068;
                        if (plVar8 <= plVar14) {
                          plVar8 = plVar14;
                        }
                        plVar14 = plRam0000000113733070;
                        if (plVar8 < plVar19) {
                          if (plVar8 != (long *)0x0) goto LAB_1095b30e8;
                          lRam0000000113733068 = 0;
                          if (lVar5 != 0) {
                            __ZdlPv();
                          }
                          plRam0000000113733070 = (long *)0x0;
                          plVar14 = (long *)0x0;
                        }
                      }
                    }
                    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
                      plVar8 = (long *)((long)plVar14 - 1U & (ulong)plVar16);
                    }
                    else {
                      plVar8 = plVar16;
                      if (plVar14 <= plVar16) {
                        uVar17 = 0;
                        if (plVar14 != (long *)0x0) {
                          uVar17 = (ulong)plVar16 / (ulong)plVar14;
                        }
                        plVar8 = (long *)((long)plVar16 - uVar17 * (long)plVar14);
                      }
                    }
                  }
                  lVar5 = lRam0000000113733068;
                  plVar16 = *(long **)(lRam0000000113733068 + (long)plVar8 * 8);
                  if (plVar16 == (long *)0x0) {
                    *plVar12 = (long)plRam0000000113733078;
                    plRam0000000113733078 = plVar12;
                    *(undefined8 *)(lVar5 + (long)plVar8 * 8) = 0x113733078;
                    if (*plVar12 != 0) {
                      plVar16 = *(long **)(*plVar12 + 8);
                      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
                        plVar16 = (long *)((ulong)plVar16 & (long)plVar14 - 1U);
                      }
                      else if (plVar14 <= plVar16) {
                        uVar17 = 0;
                        if (plVar14 != (long *)0x0) {
                          uVar17 = (ulong)plVar16 / (ulong)plVar14;
                        }
                        plVar16 = (long *)((long)plVar16 - uVar17 * (long)plVar14);
                      }
                      *(long **)(lRam0000000113733068 + (long)plVar16 * 8) = plVar12;
                    }
                  }
                  else {
                    *plVar12 = *plVar16;
                    *plVar16 = (long)plVar12;
                  }
                  uRam0000000113733080 = uRam0000000113733080 + 1;
LAB_1095b32e4:
                  plVar13 = plVar13 + 4;
                } while (plVar13 != plVar9);
              }
              return;
            }
            lVar5 = (long)plVar19 << 3;
            __Znwm();
            lVar6 = *plVar12;
            *plVar12 = lVar5;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            plVar14 = (long *)0x0;
            plVar12[1] = (long)plVar19;
            do {
              *(undefined8 *)(*plVar12 + (long)plVar14 * 8) = 0;
              plVar14 = (long *)((long)plVar14 + 1);
            } while (plVar19 != plVar14);
            plVar14 = (long *)plVar12[2];
            if (plVar14 != (long *)0x0) {
              plVar8 = (long *)plVar14[1];
              uVar17 = (long)plVar19 - 1;
              if (((ulong)plVar19 & uVar17) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar17);
              }
              else if (plVar19 <= plVar8) {
                uVar1 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar1 = (ulong)plVar8 / (ulong)plVar19;
                }
                plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar19);
              }
              *(long **)(*plVar12 + (long)plVar8 * 8) = plVar12 + 2;
              while (plVar13 = plVar14, plVar14 = (long *)*plVar13, plVar14 != (long *)0x0) {
                plVar10 = (long *)plVar14[1];
                if (((ulong)plVar19 & uVar17) == 0) {
                  plVar10 = (long *)((ulong)plVar10 & uVar17);
                }
                else if (plVar19 <= plVar10) {
                  uVar1 = 0;
                  if (plVar19 != (long *)0x0) {
                    uVar1 = (ulong)plVar10 / (ulong)plVar19;
                  }
                  plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar19);
                }
                if (plVar10 != plVar8) {
                  lVar5 = *plVar12;
                  if (*(long *)(lVar5 + (long)plVar10 * 8) == 0) {
                    *(long **)(lVar5 + (long)plVar10 * 8) = plVar13;
                    plVar8 = plVar10;
                  }
                  else {
                    lVar6 = *plVar14;
                    plVar15 = plVar14;
                    if (lVar6 == 0) {
                      plVar11 = (long *)0x0;
                    }
                    else {
                      do {
                        plVar7 = plVar12;
                        func_0x000104c4fbc4(plVar12,plVar14 + 2,lVar6 + 0x10);
                        plVar11 = (long *)*plVar15;
                        if ((int)plVar7 == 0) goto LAB_1095b2d14;
                        lVar6 = *plVar11;
                        plVar15 = plVar11;
                      } while (lVar6 != 0);
                      plVar11 = (long *)0x0;
LAB_1095b2d14:
                      lVar5 = *plVar12;
                    }
                    *plVar13 = (long)plVar11;
                    *plVar15 = **(long **)(lVar5 + (long)plVar10 * 8);
                    **(undefined8 **)(lVar5 + (long)plVar10 * 8) = plVar14;
                    plVar14 = plVar13;
                  }
                }
              }
            }
          }
          else if (plVar19 < plVar8) {
            plVar13 = (long *)(long)((float)(ulong)plVar12[3] / *(float *)(plVar12 + 4));
            if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar13) {
              plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
            }
            if (plVar19 <= plVar13) {
              plVar19 = plVar13;
            }
            if (plVar19 < plVar8) {
              if (plVar19 != (long *)0x0) goto LAB_1095b2bb0;
              lVar5 = *plVar12;
              *plVar12 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              plVar12[1] = 0;
            }
          }
          plVar8 = (long *)plVar12[1];
        }
        bVar20 = POPCOUNT((char)plVar8) + POPCOUNT((char)((ulong)plVar8 >> 8)) +
                 POPCOUNT((char)((ulong)plVar8 >> 0x10)) + POPCOUNT((char)((ulong)plVar8 >> 0x18)) +
                 POPCOUNT((char)((ulong)plVar8 >> 0x20)) + POPCOUNT((char)((ulong)plVar8 >> 0x28)) +
                 POPCOUNT((char)((ulong)plVar8 >> 0x30)) + POPCOUNT((char)((ulong)plVar8 >> 0x38));
        uVar17 = (long)plVar8 - 1;
        if (((ulong)plVar8 & uVar17) == 0) {
          plVar14 = (long *)(uVar17 & (ulong)plVar16);
        }
        else {
          plVar14 = plVar16;
          if (plVar8 <= plVar16) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar16 / (ulong)plVar8;
            }
            plVar14 = (long *)((long)plVar16 - uVar1 * (long)plVar8);
          }
        }
        plVar19 = *(long **)(*plVar12 + (long)plVar14 * 8);
        if ((plVar19 != (long *)0x0) && (lVar5 = *plVar19, lVar5 != 0)) {
          uVar18 = 0;
          bVar20 = 0;
          do {
            plVar13 = *(long **)(lVar5 + 8);
            if (((ulong)plVar8 & uVar17) == 0) {
              plVar10 = (long *)((ulong)plVar13 & uVar17);
            }
            else {
              plVar10 = plVar13;
              if (plVar8 <= plVar13) {
                uVar1 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar1 = (ulong)plVar13 / (ulong)plVar8;
                }
                plVar10 = (long *)((long)plVar13 - uVar1 * (long)plVar8);
              }
            }
            if (plVar10 != plVar14) break;
            if (plVar13 == plVar16) {
              plVar13 = plVar12;
              func_0x000104c4fbc4(plVar12,lVar5 + 0x10,plVar9 + 2);
              uVar4 = (uint)plVar13;
            }
            else {
              uVar4 = 0;
            }
            bVar3 = uVar4 != uVar18;
            if ((bool)(bVar20 & bVar3)) break;
            uVar18 = uVar18 | bVar3;
            bVar20 = bVar20 | bVar3;
            plVar19 = (long *)*plVar19;
            lVar5 = *plVar19;
          } while (lVar5 != 0);
          plVar8 = (long *)plVar12[1];
          bVar20 = POPCOUNT((char)plVar8) + POPCOUNT((char)((ulong)plVar8 >> 8)) +
                   POPCOUNT((char)((ulong)plVar8 >> 0x10)) + POPCOUNT((char)((ulong)plVar8 >> 0x18))
                   + POPCOUNT((char)((ulong)plVar8 >> 0x20)) +
                   POPCOUNT((char)((ulong)plVar8 >> 0x28)) + POPCOUNT((char)((ulong)plVar8 >> 0x30))
                   + POPCOUNT((char)((ulong)plVar8 >> 0x38));
        }
        plVar14 = (long *)plVar9[1];
        if (bVar20 < 2) {
          plVar14 = (long *)((long)plVar8 - 1U & (ulong)plVar14);
        }
        else if (plVar8 <= plVar14) {
          uVar17 = 0;
          if (plVar8 != (long *)0x0) {
            uVar17 = (ulong)plVar14 / (ulong)plVar8;
          }
          plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar8);
        }
        if (plVar19 == (long *)0x0) {
          plVar16 = plVar12 + 2;
          *plVar9 = *plVar16;
          *plVar16 = (long)plVar9;
          *(long **)(*plVar12 + (long)plVar14 * 8) = plVar16;
          if (*plVar9 == 0) goto LAB_1095b2f00;
          plVar16 = *(long **)(*plVar9 + 8);
          if (bVar20 < 2) {
            plVar16 = (long *)((ulong)plVar16 & (long)plVar8 - 1U);
          }
          else if (plVar8 <= plVar16) {
            uVar17 = 0;
            if (plVar8 != (long *)0x0) {
              uVar17 = (ulong)plVar16 / (ulong)plVar8;
            }
            plVar16 = (long *)((long)plVar16 - uVar17 * (long)plVar8);
          }
        }
        else {
          *plVar9 = *plVar19;
          *plVar19 = (long)plVar9;
          if (*plVar9 == 0) goto LAB_1095b2f00;
          plVar16 = *(long **)(*plVar9 + 8);
          if (bVar20 < 2) {
            plVar16 = (long *)((ulong)plVar16 & (long)plVar8 - 1U);
          }
          else if (plVar8 <= plVar16) {
            uVar17 = 0;
            if (plVar8 != (long *)0x0) {
              uVar17 = (ulong)plVar16 / (ulong)plVar8;
            }
            plVar16 = (long *)((long)plVar16 - uVar17 * (long)plVar8);
          }
          if (plVar16 == plVar14) goto LAB_1095b2f00;
        }
        *(long **)(*plVar12 + (long)plVar16 * 8) = plVar9;
LAB_1095b2f00:
        plVar12[3] = plVar12[3] + 1;
        return;
      }
      lVar5 = (long)plVar8 << 3;
      __Znwm();
      lVar6 = *param_1;
      *param_1 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      plVar9 = (long *)0x0;
      param_1[1] = (long)plVar8;
      do {
        *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
        plVar9 = (long *)((long)plVar9 + 1);
      } while (plVar8 != plVar9);
      plVar9 = (long *)param_1[2];
      if (plVar9 != (long *)0x0) {
        plVar16 = (long *)plVar9[1];
        uVar17 = (long)plVar8 - 1;
        if (((ulong)plVar8 & uVar17) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar17);
        }
        else if (plVar8 <= plVar16) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar16 / (ulong)plVar8;
          }
          plVar16 = (long *)((long)plVar16 - uVar1 * (long)plVar8);
        }
        *(long **)(*param_1 + (long)plVar16 * 8) = param_1 + 2;
        while (plVar12 = plVar9, plVar9 = (long *)*plVar12, plVar9 != (long *)0x0) {
          plVar19 = (long *)plVar9[1];
          if (((ulong)plVar8 & uVar17) == 0) {
            plVar19 = (long *)((ulong)plVar19 & uVar17);
          }
          else if (plVar8 <= plVar19) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar19 / (ulong)plVar8;
            }
            plVar19 = (long *)((long)plVar19 - uVar1 * (long)plVar8);
          }
          if (plVar19 != plVar16) {
            lVar5 = *param_1;
            if (*(long *)(lVar5 + (long)plVar19 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar19 * 8) = plVar12;
              plVar16 = plVar19;
            }
            else {
              lVar6 = *plVar9;
              plVar13 = plVar9;
              if (lVar6 == 0) {
                plVar10 = (long *)0x0;
              }
              else {
                do {
                  plVar15 = param_1;
                  func_0x000104c4fbc4(param_1,plVar9 + 2,lVar6 + 0x10);
                  plVar10 = (long *)*plVar13;
                  if ((int)plVar15 == 0) goto LAB_1095b28dc;
                  lVar6 = *plVar10;
                  plVar13 = plVar10;
                } while (lVar6 != 0);
                plVar10 = (long *)0x0;
LAB_1095b28dc:
                lVar5 = *param_1;
              }
              *plVar12 = (long)plVar10;
              *plVar13 = **(long **)(lVar5 + (long)plVar19 * 8);
              **(undefined8 **)(lVar5 + (long)plVar19 * 8) = plVar9;
              plVar9 = plVar12;
            }
          }
        }
      }
    }
    else if (plVar8 < plVar16) {
      plVar12 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
      }
      if (plVar8 <= plVar12) {
        plVar8 = plVar12;
      }
      if (plVar8 < plVar16) {
        if (plVar8 != (long *)0x0) goto LAB_1095b2778;
        lVar5 = *param_1;
        *param_1 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
      }
    }
    plVar16 = (long *)param_1[1];
  }
  bVar20 = POPCOUNT((char)plVar16) + POPCOUNT((char)((ulong)plVar16 >> 8)) +
           POPCOUNT((char)((ulong)plVar16 >> 0x10)) + POPCOUNT((char)((ulong)plVar16 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar16 >> 0x20)) + POPCOUNT((char)((ulong)plVar16 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar16 >> 0x30)) + POPCOUNT((char)((ulong)plVar16 >> 0x38));
  uVar17 = (long)plVar16 - 1;
  if (((ulong)plVar16 & uVar17) == 0) {
    plVar9 = (long *)(uVar17 & (ulong)plVar14);
  }
  else {
    plVar9 = plVar14;
    if (plVar16 <= plVar14) {
      uVar1 = 0;
      if (plVar16 != (long *)0x0) {
        uVar1 = (ulong)plVar14 / (ulong)plVar16;
      }
      plVar9 = (long *)((long)plVar14 - uVar1 * (long)plVar16);
    }
  }
  plVar8 = *(long **)(*param_1 + (long)plVar9 * 8);
  if ((plVar8 != (long *)0x0) && (lVar5 = *plVar8, lVar5 != 0)) {
    uVar18 = 0;
    bVar20 = 0;
    do {
      plVar12 = *(long **)(lVar5 + 8);
      if (((ulong)plVar16 & uVar17) == 0) {
        plVar19 = (long *)((ulong)plVar12 & uVar17);
      }
      else {
        plVar19 = plVar12;
        if (plVar16 <= plVar12) {
          uVar1 = 0;
          if (plVar16 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar16;
          }
          plVar19 = (long *)((long)plVar12 - uVar1 * (long)plVar16);
        }
      }
      if (plVar19 != plVar9) break;
      if (plVar12 == plVar14) {
        plVar12 = param_1;
        func_0x000104c4fbc4(param_1,lVar5 + 0x10,param_2 + 2);
        uVar4 = (uint)plVar12;
      }
      else {
        uVar4 = 0;
      }
      bVar3 = uVar4 != uVar18;
      if ((bool)(bVar20 & bVar3)) break;
      uVar18 = uVar18 | bVar3;
      bVar20 = bVar20 | bVar3;
      plVar8 = (long *)*plVar8;
      lVar5 = *plVar8;
    } while (lVar5 != 0);
    plVar16 = (long *)param_1[1];
    bVar20 = POPCOUNT((char)plVar16) + POPCOUNT((char)((ulong)plVar16 >> 8)) +
             POPCOUNT((char)((ulong)plVar16 >> 0x10)) + POPCOUNT((char)((ulong)plVar16 >> 0x18)) +
             POPCOUNT((char)((ulong)plVar16 >> 0x20)) + POPCOUNT((char)((ulong)plVar16 >> 0x28)) +
             POPCOUNT((char)((ulong)plVar16 >> 0x30)) + POPCOUNT((char)((ulong)plVar16 >> 0x38));
  }
  plVar9 = (long *)param_2[1];
  if (bVar20 < 2) {
    plVar9 = (long *)((long)plVar16 - 1U & (ulong)plVar9);
  }
  else if (plVar16 <= plVar9) {
    uVar17 = 0;
    if (plVar16 != (long *)0x0) {
      uVar17 = (ulong)plVar9 / (ulong)plVar16;
    }
    plVar9 = (long *)((long)plVar9 - uVar17 * (long)plVar16);
  }
  if (plVar8 == (long *)0x0) {
    plVar14 = param_1 + 2;
    *param_2 = *plVar14;
    *plVar14 = (long)param_2;
    *(long **)(*param_1 + (long)plVar9 * 8) = plVar14;
    if (*param_2 == 0) goto LAB_1095b2ac8;
    plVar14 = *(long **)(*param_2 + 8);
    if (bVar20 < 2) {
      plVar14 = (long *)((ulong)plVar14 & (long)plVar16 - 1U);
    }
    else if (plVar16 <= plVar14) {
      uVar17 = 0;
      if (plVar16 != (long *)0x0) {
        uVar17 = (ulong)plVar14 / (ulong)plVar16;
      }
      plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar16);
    }
  }
  else {
    *param_2 = *plVar8;
    *plVar8 = (long)param_2;
    if (*param_2 == 0) goto LAB_1095b2ac8;
    plVar14 = *(long **)(*param_2 + 8);
    if (bVar20 < 2) {
      plVar14 = (long *)((ulong)plVar14 & (long)plVar16 - 1U);
    }
    else if (plVar16 <= plVar14) {
      uVar17 = 0;
      if (plVar16 != (long *)0x0) {
        uVar17 = (ulong)plVar14 / (ulong)plVar16;
      }
      plVar14 = (long *)((long)plVar14 - uVar17 * (long)plVar16);
    }
    if (plVar14 == plVar9) goto LAB_1095b2ac8;
  }
  *(long **)(*param_1 + (long)plVar14 * 8) = param_2;
LAB_1095b2ac8:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1095b2f2c; end: 1095b339b;  */

void FUN_1095b2f2c(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  long lVar16;
  
  uRam0000000113733070 = 0;
  lRam0000000113733068 = 0;
  uRam0000000113733080 = 0;
  plRam0000000113733078 = (long *)0x0;
  fRam0000000113733088 = 1.0;
  if (param_2 != 0) {
    plVar1 = param_1 + param_2 * 4;
    do {
      uVar9 = 0x113733068;
      func_0x000107c31944(0x113733068,param_1);
      uVar10 = uRam0000000113733070;
      if (uRam0000000113733070 != 0) {
        uVar15 = uRam0000000113733070 - 1;
        if ((uRam0000000113733070 & uVar15) == 0) {
          unaff_x23 = uVar15 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uRam0000000113733070 <= uVar9) {
            uVar7 = 0;
            if (uRam0000000113733070 != 0) {
              uVar7 = uVar9 / uRam0000000113733070;
            }
            unaff_x23 = uVar9 - uVar7 * uRam0000000113733070;
          }
        }
        plVar6 = *(long **)(lRam0000000113733068 + unaff_x23 * 8);
        if (plVar6 != (long *)0x0) {
          for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            uVar7 = plVar6[1];
            if (uVar7 == uVar9) {
              uVar7 = 0x113733068;
              func_0x000104c4fbc4(0x113733068,plVar6 + 2,param_1);
              if ((uVar7 & 1) != 0) goto LAB_1095b32e4;
            }
            else {
              if ((uVar10 & uVar15) == 0) {
                uVar7 = uVar7 & uVar15;
              }
              else if (uVar10 <= uVar7) {
                uVar8 = 0;
                if (uVar10 != 0) {
                  uVar8 = uVar7 / uVar10;
                }
                uVar7 = uVar7 - uVar8 * uVar10;
              }
              if (uVar7 != unaff_x23) break;
            }
          }
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      *plVar6 = 0;
      plVar6[1] = uVar9;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar6 + 2,*param_1,param_1[1]);
      }
      else {
        lVar16 = param_1[1];
        lVar5 = *param_1;
        plVar6[4] = param_1[2];
        plVar6[3] = lVar16;
        plVar6[2] = lVar5;
      }
      *(int *)(plVar6 + 5) = (int)param_1[3];
      if ((uVar10 == 0) ||
         (fRam0000000113733088 * (float)uVar10 < (float)(uRam0000000113733080 + 1))) {
        uVar15 = 1;
        if (2 < uVar10) {
          uVar15 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar15 = uVar15 | uVar10 << 1;
        uVar10 = (ulong)((float)(uRam0000000113733080 + 1) / fRam0000000113733088);
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
        if (uVar15 - 1 == 0) {
          uVar15 = 2;
        }
        else if ((uVar15 & uVar15 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar7 = uRam0000000113733070;
        if (uRam0000000113733070 < uVar15) {
LAB_1095b30e8:
          if (uVar15 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1095b335c);
            (*pcVar4)();
          }
          lVar5 = uVar15 << 3;
          __Znwm();
          bVar2 = lRam0000000113733068 != 0;
          lRam0000000113733068 = lVar5;
          if (bVar2) {
            __ZdlPv();
          }
          uVar10 = 0;
          uRam0000000113733070 = uVar15;
          do {
            *(undefined8 *)(lRam0000000113733068 + uVar10 * 8) = 0;
            plVar11 = plRam0000000113733078;
            uVar10 = uVar10 + 1;
          } while (uVar15 != uVar10);
          uVar10 = uVar15;
          if (plRam0000000113733078 != (long *)0x0) {
            uVar7 = plRam0000000113733078[1];
            uVar8 = uVar15 - 1;
            if ((uVar15 & uVar8) == 0) {
              uVar7 = uVar7 & uVar8;
            }
            else if (uVar15 <= uVar7) {
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar14 * uVar15;
            }
            *(undefined8 *)(lRam0000000113733068 + uVar7 * 8) = 0x113733078;
            plVar12 = (long *)*plVar11;
            lVar5 = lRam0000000113733068;
            while (lRam0000000113733068 = lVar5, plVar12 != (long *)0x0) {
              uVar14 = plVar12[1];
              if ((uVar15 & uVar8) == 0) {
                uVar14 = uVar14 & uVar8;
              }
              else if (uVar15 <= uVar14) {
                uVar3 = 0;
                if (uVar15 != 0) {
                  uVar3 = uVar14 / uVar15;
                }
                uVar14 = uVar14 - uVar3 * uVar15;
              }
              plVar13 = plVar12;
              if (uVar14 != uVar7) {
                if (*(long *)(lVar5 + uVar14 * 8) == 0) {
                  *(long **)(lVar5 + uVar14 * 8) = plVar11;
                  uVar7 = uVar14;
                }
                else {
                  *plVar11 = *plVar12;
                  *plVar12 = **(long **)(lVar5 + uVar14 * 8);
                  **(undefined8 **)(lVar5 + uVar14 * 8) = plVar12;
                  plVar13 = plVar11;
                }
              }
              lVar5 = lRam0000000113733068;
              plVar11 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else {
          uVar10 = uRam0000000113733070;
          if (uVar15 < uRam0000000113733070) {
            uVar10 = (ulong)((float)uRam0000000113733080 / fRam0000000113733088);
            if ((uRam0000000113733070 < 3) ||
               ((uRam0000000113733070 & uRam0000000113733070 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar10) {
              uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
            }
            lVar5 = lRam0000000113733068;
            if (uVar15 <= uVar10) {
              uVar15 = uVar10;
            }
            uVar10 = uRam0000000113733070;
            if (uVar15 < uVar7) {
              if (uVar15 != 0) goto LAB_1095b30e8;
              lRam0000000113733068 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam0000000113733070 = 0;
              uVar10 = 0;
            }
          }
        }
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x23 = uVar10 - 1 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            unaff_x23 = uVar9 - uVar15 * uVar10;
          }
        }
      }
      lVar5 = lRam0000000113733068;
      plVar11 = *(long **)(lRam0000000113733068 + unaff_x23 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar6 = (long)plRam0000000113733078;
        plRam0000000113733078 = plVar6;
        *(undefined8 *)(lVar5 + unaff_x23 * 8) = 0x113733078;
        if (*plVar6 != 0) {
          uVar9 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar9 = uVar9 & uVar10 - 1;
          }
          else if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar15 * uVar10;
          }
          *(long **)(lRam0000000113733068 + uVar9 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar11;
        *plVar11 = (long)plVar6;
      }
      uRam0000000113733080 = uRam0000000113733080 + 1;
LAB_1095b32e4:
      param_1 = param_1 + 4;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 1095b339c; end: 1095b33cf;  */

void FUN_1095b339c(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1095b33d0; end: 1095b3433;  */

long * FUN_1095b33d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1095b3434; end: 1095b347b;  */

void FUN_1095b3434(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001095b2488(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095b347c; end: 1095b352f;  */

void FUN_1095b347c(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_2;
  *param_2 = 0;
  plVar4 = *(long **)(param_5 + 0x18);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *(long *)(param_5 + 0x10);
    if (lVar6 != 0) {
      FUN_10938cda4(lVar6 + 0xf8,lVar5);
      lVar5 = 0;
      *(undefined1 *)(lVar6 + 0x100) = param_4;
    }
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (lVar5 == 0) {
    return;
  }
  func_0x000109cda590(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095b3530; end: 1095b355b;  */

void FUN_1095b3530(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1095b355c; end: 1095b35af;  */

void FUN_1095b355c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x0001094c8868(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1095b35b0; end: 1095b39cb;  */

long * FUN_1095b35b0(long *param_1,undefined8 param_2,undefined8 *param_3)

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
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
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
  plVar6 = (long *)*param_3;
  plVar5 = (long *)0x68;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*plVar6,plVar6[1]);
  }
  else {
    lVar4 = plVar6[1];
    lVar3 = *plVar6;
    plVar5[4] = plVar6[2];
    plVar5[3] = lVar4;
    plVar5[2] = lVar3;
  }
  *(undefined4 *)(plVar5 + 5) = 0x32;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xc] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1095b38dc;
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
LAB_1095b3764:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1095b39b4);
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
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
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
      plVar10 = (long *)*plVar7;
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
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1095b3764;
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
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1095b38dc:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1095b39cc; end: 1095b3a13;  */

void FUN_1095b39cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001095b115c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095b3a14; end: 1095b3bdb;  */

long FUN_1095b3a14(long *param_1,undefined8 param_2)

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



/* Entry: 1095b3bdc; end: 1095b3c7b;  */

void FUN_1095b3bdc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_1095b355c();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1095b3c7c; end: 1095b3ec7;  */

undefined1  [16]
FUN_1095b3c7c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1095b3e84;
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
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_1095b3ec8(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
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
    FUN_1095b3f90(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
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
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_1095b3e84:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1095b3ec8; end: 1095b3f8f;  */

void FUN_1095b3ec8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = puVar1 + 6;
  puVar1[0xe] = puVar1 + 0xf;
  puVar1[0x10] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1095b3f90; end: 1095b405f;  */

void FUN_1095b3f90(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_1095b3fd8:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            FUN_1094c88a4(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_1095b3fd8;
  }
  return;
}



/* Entry: 1095b4060; end: 1095b41e3;  */

void FUN_1095b4060(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          FUN_1094c88a4(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 1095b41e4; end: 1095b42c7;  */

long FUN_1095b41e4(long *param_1,undefined8 param_2)

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



/* Entry: 1095b42c8; end: 1095b433b;  */

void FUN_1095b42c8(long param_1,long param_2)

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



/* Entry: 1095b433c; end: 1095b4397;  */

long * FUN_1095b433c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  func_0x000107c29c1c(param_1 + 0x48);
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



/* Entry: 1095b4398; end: 1095b43ab;  */

void FUN_1095b4398(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_48 [15];
  undefined1 uStack_39;
  ulong uStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  plVar4 = (long *)(lVar3 + 0x48);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar2 == 0) {
        uStack_38 = uStack_38 & 0xffffffff00000000;
        plVar1 = *(long **)(lVar3 + 0x40);
        (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_38);
        uStack_39 = SUB81(plVar1,0);
        func_0x000108820bcc(plVar4,&uStack_39);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_48);
  FUN_10951a968(plVar4,auStack_48);
  __ZNSt13exception_ptrD1Ev(auStack_48);
  ___cxa_end_catch();
  return;
}



/* Entry: 1095b43ac; end: 1095b4447;  */

long FUN_1095b43ac(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
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



/* Entry: 1095b4448; end: 1095b457b;  */

void FUN_1095b4448(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_110afdf10;
  uVar4 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar4;
  param_1[3] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uVar5 = param_2[4];
  uVar4 = param_2[3];
  uVar6 = param_2[5];
  param_1[7] = param_2[6];
  param_1[6] = uVar6;
  uVar6 = param_2[7];
  param_1[9] = param_2[8];
  param_1[8] = uVar6;
  uVar7 = param_2[10];
  uVar6 = param_2[9];
  param_1[0xe] = 0;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[0xf] = 0;
  piVar2 = (int *)((long)param_2 + 0x1c);
  iVar1 = *piVar2;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[0xc] = param_1 + 5;
  param_1[0xd] = param_1 + 0xe;
  puVar3 = (undefined8 *)param_2[0xc];
  if (iVar1 < 3) {
    param_1[0xe] = *puVar3;
    param_1[0xf] = puVar3[1];
  }
  else {
    param_1[0xc] = param_2[0xb];
    param_1[0xd] = puVar3;
    param_2[0xb] = param_2 + 4;
    param_2[0xc] = param_2 + 0xd;
  }
  *(undefined4 *)(param_2 + 3) = 0x42ff0000;
  param_2[10] = 0;
  param_2[9] = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x44) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  uVar5 = param_2[0x10];
  uVar4 = param_2[0xf];
  uVar6 = param_2[0x11];
  param_1[0x13] = param_2[0x12];
  param_1[0x12] = uVar6;
  uVar6 = param_2[0x13];
  param_1[0x15] = param_2[0x14];
  param_1[0x14] = uVar6;
  uVar7 = param_2[0x16];
  uVar6 = param_2[0x15];
  param_1[0x1a] = 0;
  param_1[0x11] = uVar5;
  param_1[0x10] = uVar4;
  param_1[0x1b] = 0;
  piVar2 = (int *)((long)param_2 + 0x7c);
  iVar1 = *piVar2;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x18] = param_1 + 0x11;
  param_1[0x19] = param_1 + 0x1a;
  puVar3 = (undefined8 *)param_2[0x18];
  if (iVar1 < 3) {
    param_1[0x1a] = *puVar3;
    param_1[0x1b] = puVar3[1];
  }
  else {
    param_1[0x18] = param_2[0x17];
    param_1[0x19] = puVar3;
    param_2[0x17] = param_2 + 0x10;
    param_2[0x18] = param_2 + 0x19;
  }
  *(undefined4 *)(param_2 + 0xf) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x94) = 0;
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  *(undefined8 *)((long)param_2 + 0xa4) = 0;
  *(undefined8 *)((long)param_2 + 0x9c) = 0;
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  return;
}



/* Entry: 1095b457c; end: 1095b45f3;  */

undefined8 * FUN_1095b457c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afdf10;
  FUN_1095b598c(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1095b45f4; end: 1095b4603;  */

void FUN_1095b45f4(long param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_FUN_110afdf10;
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar4;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  param_2[7] = *(undefined8 *)(param_1 + 0x38);
  param_2[6] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  param_2[9] = *(undefined8 *)(param_1 + 0x48);
  param_2[8] = uVar6;
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  param_2[0xe] = 0;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[0xf] = 0;
  piVar2 = (int *)(param_1 + 0x24);
  iVar1 = *piVar2;
  param_2[0xb] = uVar7;
  param_2[10] = uVar6;
  param_2[0xc] = param_2 + 5;
  param_2[0xd] = param_2 + 0xe;
  puVar3 = *(undefined8 **)(param_1 + 0x68);
  if (iVar1 < 3) {
    param_2[0xe] = *puVar3;
    param_2[0xf] = puVar3[1];
  }
  else {
    param_2[0xc] = *(undefined8 *)(param_1 + 0x60);
    param_2[0xd] = puVar3;
    *(long *)(param_1 + 0x60) = param_1 + 0x28;
    *(long *)(param_1 + 0x68) = param_1 + 0x70;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  param_2[0x13] = *(undefined8 *)(param_1 + 0x98);
  param_2[0x12] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  param_2[0x15] = *(undefined8 *)(param_1 + 0xa8);
  param_2[0x14] = uVar6;
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  param_2[0x1a] = 0;
  param_2[0x11] = uVar5;
  param_2[0x10] = uVar4;
  param_2[0x1b] = 0;
  piVar2 = (int *)(param_1 + 0x84);
  iVar1 = *piVar2;
  param_2[0x17] = uVar7;
  param_2[0x16] = uVar6;
  param_2[0x18] = param_2 + 0x11;
  param_2[0x19] = param_2 + 0x1a;
  puVar3 = *(undefined8 **)(param_1 + 200);
  if (iVar1 < 3) {
    param_2[0x1a] = *puVar3;
    param_2[0x1b] = puVar3[1];
  }
  else {
    param_2[0x18] = *(undefined8 *)(param_1 + 0xc0);
    param_2[0x19] = puVar3;
    *(long *)(param_1 + 0xc0) = param_1 + 0x88;
    *(long *)(param_1 + 200) = param_1 + 0xd0;
  }
  *(undefined4 *)(param_1 + 0x80) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 1095b4604; end: 1095b466f;  */

void FUN_1095b4604(long param_1)

{
  FUN_1095b598c(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1095b4670; end: 1095b48d7;  */

long FUN_1095b4670(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_a8 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = *(ulong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  uStack_70 = (ulong)&uStack_b0 | 8;
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = *(undefined8 *)(param_1 + 0x40);
  lStack_78 = *(long *)(param_1 + 0x58);
  uStack_80 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x58) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)(param_1 + 0x24);
  }
  puStack_68 = &uStack_60;
  if (iVar2 < 3) {
    uStack_60 = **(undefined8 **)(param_1 + 0x68);
    uStack_58 = (*(undefined8 **)(param_1 + 0x68))[1];
  }
  else {
    uStack_b0 = uStack_b0 & 0xffffffff;
    func_0x000109a84868(&uStack_b0,(ulong *)(param_1 + 0x20));
  }
  uStack_108 = *(undefined8 *)(param_1 + 0x88);
  uStack_110 = *(ulong *)(param_1 + 0x80);
  uStack_f8 = *(undefined8 *)(param_1 + 0x98);
  uStack_100 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = (ulong)&uStack_110 | 8;
  iVar2 = *(int *)(param_1 + 0x84);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa0);
  lStack_d8 = *(long *)(param_1 + 0xb8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb8) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)(param_1 + 0x84);
  }
  puStack_c8 = &uStack_c0;
  if (iVar2 < 3) {
    uStack_c0 = **(undefined8 **)(param_1 + 200);
    uStack_b8 = (*(undefined8 **)(param_1 + 200))[1];
  }
  else {
    uStack_110 = uStack_110 & 0xffffffff;
    func_0x000109a84868(&uStack_110,param_1 + 0x80);
  }
  param_1 = param_1 + 8;
  FUN_1095b48d8(param_1,&uStack_b0,&uStack_110);
  if (lStack_d8 != 0) {
    piVar1 = (int *)(lStack_d8 + 0x14);
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
      func_0x000109a848d4(&uStack_110);
    }
  }
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (0 < uStack_110._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_d0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_110._4_4_);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
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
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return param_1;
}



/* Entry: 1095b48d8; end: 1095b5787;  */

undefined8 FUN_1095b48d8(undefined8 *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  code *pcVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  long *plVar23;
  int *piVar24;
  uint *puVar25;
  undefined8 uVar26;
  long *plVar27;
  uint *unaff_x27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  long lStack_2a0;
  uint *puStack_298;
  undefined1 uStack_289;
  long *aplStack_288 [3];
  long lStack_270;
  long lStack_268;
  long lStack_260;
  uint uStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  float fStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 auStack_130 [20];
  uint *puStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (uint *)param_1[2];
  if (puVar10 == (uint *)0x0) {
LAB_1095b4a24:
    uVar26 = 0;
  }
  else {
    puVar25 = (uint *)*param_1;
    __ZNSt3__119__shared_weak_count4lockEv();
    puStack_298 = puVar10;
    if (puVar10 == (uint *)0x0) goto LAB_1095b4a24;
    lStack_2a0 = param_1[1];
    if (lStack_2a0 == 0) {
LAB_1095b4a48:
      uVar26 = 0;
LAB_1095b4a4c:
      puVar25 = puVar10 + 2;
      do {
        lVar14 = *(long *)puVar25;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar25,0x10);
        if (bVar4) {
          *(long *)puVar25 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)puVar10 + 0x10))(puVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar10);
      }
    }
    else {
      puVar11 = puVar10;
      if (puVar25[0x38] != puVar25[0x42]) {
        puVar11 = puVar25;
        FUN_1095ae11c();
      }
      if (*(long *)(puVar25 + 0x2a) == 0) goto LAB_1095b4a48;
      if ((char)puVar25[0xf6] != '\x01') {
        __ZNSt3__15mutex4lockEv(puVar25 + 0x126);
        puVar25[0x4b] = 5;
        __ZNSt3__15mutex6unlockEv(puVar25 + 0x126);
        goto LAB_1095b4a48;
      }
      if ((char)puVar25[0x49] == '\x01') {
        puVar11 = (uint *)&uStack_1f0;
        FUN_1095ae36c(puVar11,param_2,0,puVar25 + 4);
        if (*(long *)(param_2 + 0xe) != 0) {
          piVar24 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
          do {
            iVar13 = *piVar24;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar4) {
              *piVar24 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            puVar11 = param_2;
            func_0x000109a848d4();
          }
        }
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        if (0 < (int)param_2[1]) {
          lVar14 = 0;
          lVar19 = *(long *)(param_2 + 0x10);
          do {
            *(undefined4 *)(lVar19 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < (int)param_2[1]);
        }
        *(ulong *)(param_2 + 2) = CONCAT44(uStack_1e8._4_4_,(undefined4)uStack_1e8);
        *(ulong *)param_2 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
        *(ulong *)(param_2 + 6) = CONCAT44(uStack_1d4,uStack_1d8);
        *(ulong *)(param_2 + 4) = CONCAT44(uStack_1dc,uStack_1e0);
        *(ulong *)(param_2 + 10) = CONCAT44(uStack_1c4,uStack_1c8);
        *(ulong *)(param_2 + 8) = CONCAT44(uStack_1cc,uStack_1d0);
        *(long *)(param_2 + 0xe) = lStack_1b8;
        *(ulong *)(param_2 + 0xc) = CONCAT44(uStack_1bc,uStack_1c0);
        puVar20 = *(uint **)(param_2 + 0x12);
        puVar10 = param_2 + 0x14;
        if (puVar20 != puVar10) {
          if (puVar20 != (uint *)0x0) {
            puVar11 = *(uint **)(puVar20 + -2);
            _free();
          }
          *(uint **)(param_2 + 0x10) = param_2 + 2;
          *(uint **)(param_2 + 0x12) = puVar10;
          puVar20 = puVar10;
        }
        if (uStack_1f0._4_4_ < 3) {
          puVar15 = (undefined8 *)((ulong)&uStack_1f0 | 4);
          *(long *)puVar20 = *plStack_1a8;
          *(long *)(puVar20 + 2) = plStack_1a8[1];
          uStack_1f0._0_4_ = 0x42ff0000;
          puVar15[1] = 0;
          *puVar15 = 0;
          puVar15[3] = 0;
          puVar15[2] = 0;
          puVar15[5] = 0;
          puVar15[4] = 0;
          *(undefined8 *)((long)puVar15 + 0x34) = 0;
          *(undefined8 *)((long)puVar15 + 0x2c) = 0;
          if (plStack_1a8 != &lStack_1a0) {
            puVar11 = (uint *)plStack_1a8[-1];
            _free();
          }
        }
        else {
          *(ulong *)(param_2 + 0x10) = uStack_1b0;
          *(long **)(param_2 + 0x12) = plStack_1a8;
        }
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (*(long *)(puVar25 + 0xf8) == *(long *)(puVar25 + 0xfa)) {
        FUN_1095b04fc(puVar25,param_2);
        puVar10 = puVar25;
        FUN_1095b05d8(puVar25,puVar25 + 0x25a);
      }
      else {
        FUN_1095b04fc(puVar25,param_2);
        uStack_250 = 0x42ff0000;
        uStack_244 = 0;
        uStack_240 = 0;
        iStack_24c = 0;
        uStack_248 = 0;
        uStack_1e8 = &uStack_250;
        uStack_210 = (ulong)uStack_1e8 | 8;
        uStack_238._4_4_ = 0;
        fStack_230 = 0.0;
        uStack_23c = 0;
        uStack_238._0_4_ = 0;
        uStack_224 = 0;
        uStack_22c = 0;
        uStack_228 = 0;
        lStack_218 = 0;
        uStack_220 = 0;
        uStack_21c = 0;
        uStack_1f0._0_4_ = 0x2010000;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        puStack_208 = &uStack_200;
        FUN_109a41858(0x3f70101010101010,0,param_3,&uStack_1f0,*param_3 & 0xff8 | 5);
        puVar10 = puVar25 + 0x25a;
        uStack_1b0 = (ulong)&uStack_1f0 | 8;
        uVar2 = puVar25[0x25b];
        uStack_1e8._0_4_ = (undefined4)*(undefined8 *)(puVar25 + 0x25c);
        uStack_1e8._4_4_ = (undefined4)((ulong)*(undefined8 *)(puVar25 + 0x25c) >> 0x20);
        uStack_1f0._0_4_ = (uint)*(undefined8 *)puVar10;
        uStack_1f0._4_4_ = (int)((ulong)*(undefined8 *)puVar10 >> 0x20);
        uStack_1d8 = (undefined4)*(undefined8 *)(puVar25 + 0x260);
        uStack_1d4 = (undefined4)((ulong)*(undefined8 *)(puVar25 + 0x260) >> 0x20);
        uStack_1e0 = (undefined4)*(undefined8 *)(puVar25 + 0x25e);
        uStack_1dc = (undefined4)((ulong)*(undefined8 *)(puVar25 + 0x25e) >> 0x20);
        uStack_1c8 = (undefined4)*(undefined8 *)(puVar25 + 0x264);
        uStack_1c4 = (undefined4)((ulong)*(undefined8 *)(puVar25 + 0x264) >> 0x20);
        uStack_1d0 = (undefined4)*(undefined8 *)(puVar25 + 0x262);
        uStack_1cc = (undefined4)((ulong)*(undefined8 *)(puVar25 + 0x262) >> 0x20);
        lStack_1b8 = *(long *)(puVar25 + 0x268);
        uStack_1c0 = (undefined4)*(undefined8 *)(puVar25 + 0x266);
        uStack_1bc = (undefined4)((ulong)*(undefined8 *)(puVar25 + 0x266) >> 0x20);
        plStack_1a8 = &lStack_1a0;
        lStack_1a0 = 0;
        lStack_198 = 0;
        if (lStack_1b8 != 0) {
          piVar24 = (int *)(lStack_1b8 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar4) {
              *piVar24 = *piVar24 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar2 = puVar25[0x25b];
        }
        if ((int)uVar2 < 3) {
          lStack_1a0 = **(long **)(puVar25 + 0x26c);
          lStack_198 = (*(long **)(puVar25 + 0x26c))[1];
        }
        else {
          uStack_1f0._4_4_ = 0;
          func_0x000109a84868(&uStack_1f0,puVar10);
        }
        uStack_188 = CONCAT44(uStack_244,uStack_248);
        uStack_190 = CONCAT44(iStack_24c,uStack_250);
        uStack_178 = CONCAT44(uStack_238._4_4_,(undefined4)uStack_238);
        uStack_180 = CONCAT44(uStack_23c,uStack_240);
        puStack_150 = &uStack_188;
        uStack_168 = CONCAT44(uStack_224,uStack_228);
        uStack_170 = CONCAT44(uStack_22c,fStack_230);
        uStack_160 = CONCAT44(uStack_21c,uStack_220);
        lStack_158 = lStack_218;
        puStack_148 = &uStack_140;
        uStack_140 = 0;
        uStack_138 = 0;
        if (lStack_218 != 0) {
          piVar24 = (int *)(lStack_218 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar4) {
              *piVar24 = *piVar24 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iStack_24c < 3) {
          uStack_140 = *puStack_208;
          uStack_138 = puStack_208[1];
        }
        else {
          uStack_190 = (ulong)uStack_250;
          func_0x000109a84868(&uStack_190,&uStack_250);
        }
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        uStack_2c0 = 0;
        FUN_10957c490(&uStack_2d0,&uStack_1f0,auStack_130,2);
        puVar15 = auStack_130;
        do {
          puVar12 = puVar15 + -0xc;
          if (puVar15[-5] != 0) {
            piVar24 = (int *)(puVar15[-5] + 0x14);
            do {
              iVar13 = *piVar24;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar4) {
                *piVar24 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              func_0x000109a848d4(puVar12);
            }
          }
          puVar15[-5] = 0;
          puVar15[-9] = 0;
          puVar15[-10] = 0;
          puVar15[-7] = 0;
          puVar15[-8] = 0;
          if (0 < *(int *)((long)puVar15 + -0x5c)) {
            lVar14 = 0;
            lVar19 = puVar15[-4];
            do {
              *(undefined4 *)(lVar19 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)((long)puVar15 + -0x5c));
          }
          puVar16 = (undefined8 *)puVar15[-3];
          if (puVar16 != puVar15 + -2 && puVar16 != (undefined8 *)0x0) {
            _free(puVar16[-1]);
          }
          puVar15 = puVar12;
        } while (puVar12 != &uStack_1f0);
        iVar1 = (uStack_250 >> 3 & 0x1ff) + (*puVar10 >> 3 & 0x1ff);
        iVar13 = iVar1 + 2;
        FUN_10925b8c4(&lStack_270,iVar13 * 2);
        uVar17 = 0;
        do {
          *(uint *)(lStack_270 + uVar17 * 4) = (uint)(uVar17 >> 1) & 0x7fffffff;
          uVar17 = uVar17 + 1;
        } while (iVar1 * 2 + 4 != uVar17);
        puVar10 = puVar25 + 0x2ac;
        if (*(long *)(puVar25 + 0x2b0) == 0) {
LAB_1095b4e20:
          uStack_1f0._0_4_ = 0x42ff0000;
          uStack_1b0 = (ulong)&uStack_1f0 | 8;
          uStack_1e8._4_4_ = 0;
          uStack_1e0 = 0;
          uStack_1f0._4_4_ = 0;
          uStack_1e8._0_4_ = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1dc = 0;
          uStack_1d8 = 0;
          uStack_1c4 = 0;
          uStack_1cc = 0;
          uStack_1c8 = 0;
          lStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          lStack_1a0 = 0;
          lStack_198 = 0;
          puStack_90 = *(uint **)(puVar25 + 0x25c);
          plStack_1a8 = &lStack_1a0;
          FUN_109a83fd0(&uStack_1f0,2,&puStack_90,iVar13 * 8 + 0xffdU & 0xfff);
          if (*(long *)(puVar25 + 0x2ba) != 0) {
            piVar24 = (int *)(*(long *)(puVar25 + 0x2ba) + 0x14);
            do {
              iVar1 = *piVar24;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar4) {
                *piVar24 = iVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(puVar10);
            }
          }
          puVar25[0x2ba] = 0;
          puVar25[699] = 0;
          puVar25[0x2b2] = 0;
          puVar25[0x2b3] = 0;
          puVar25[0x2b0] = 0;
          puVar25[0x2b1] = 0;
          puVar25[0x2b6] = 0;
          puVar25[0x2b7] = 0;
          puVar25[0x2b4] = 0;
          puVar25[0x2b5] = 0;
          if (0 < (int)puVar25[0x2ad]) {
            lVar14 = 0;
            lVar19 = *(long *)(puVar25 + 700);
            do {
              *(undefined4 *)(lVar19 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < (int)puVar25[0x2ad]);
          }
          *(ulong *)(puVar25 + 0x2ae) = CONCAT44(uStack_1e8._4_4_,(undefined4)uStack_1e8);
          *(ulong *)(puVar25 + 0x2ac) = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
          *(ulong *)(puVar25 + 0x2b2) = CONCAT44(uStack_1d4,uStack_1d8);
          *(ulong *)(puVar25 + 0x2b0) = CONCAT44(uStack_1dc,uStack_1e0);
          *(ulong *)(puVar25 + 0x2b6) = CONCAT44(uStack_1c4,uStack_1c8);
          *(ulong *)(puVar25 + 0x2b4) = CONCAT44(uStack_1cc,uStack_1d0);
          *(long *)(puVar25 + 0x2ba) = lStack_1b8;
          *(ulong *)(puVar25 + 0x2b8) = CONCAT44(uStack_1bc,uStack_1c0);
          puVar21 = *(uint **)(puVar25 + 0x2be);
          puVar20 = puVar25 + 0x2c0;
          if (puVar21 != puVar20) {
            if (puVar21 != (uint *)0x0) {
              _free(*(long *)(puVar21 + -2));
            }
            *(uint **)(puVar25 + 0x2be) = puVar20;
            *(uint **)(puVar25 + 700) = puVar25 + 0x2ae;
            puVar21 = puVar20;
          }
          if (uStack_1f0._4_4_ < 3) {
            puVar15 = (undefined8 *)((ulong)&uStack_1f0 | 4);
            *(long *)puVar21 = *plStack_1a8;
            *(long *)(puVar21 + 2) = plStack_1a8[1];
            uStack_1f0._0_4_ = 0x42ff0000;
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0;
            *(undefined8 *)((long)puVar15 + 0x34) = 0;
            *(undefined8 *)((long)puVar15 + 0x2c) = 0;
            if (plStack_1a8 != &lStack_1a0) {
              _free(plStack_1a8[-1]);
            }
          }
          else {
            *(long **)(puVar25 + 0x2be) = plStack_1a8;
            *(ulong *)(puVar25 + 700) = uStack_1b0;
          }
        }
        else {
          uVar17 = (ulong)puVar25[0x2ad];
          if ((int)puVar25[0x2ad] < 3) {
            lVar14 = (long)(int)puVar25[0x2af] * (long)(int)puVar25[0x2ae];
          }
          else {
            lVar14 = 1;
            piVar24 = *(int **)(puVar25 + 700);
            do {
              lVar14 = lVar14 * *piVar24;
              uVar17 = uVar17 - 1;
              piVar24 = piVar24 + 1;
            } while (uVar17 != 0);
          }
          if ((lVar14 == 0) || ((*puVar10 >> 3 & 0x1ff) != iVar1 + 1U)) goto LAB_1095b4e20;
        }
        unaff_x27 = (uint *)&uStack_1f0;
        uStack_1f0._0_4_ = 0x1050000;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        puStack_90 = (uint *)CONCAT44(puStack_90._4_4_,0x3010000);
        uStack_80 = 0;
        puStack_88 = puVar10;
        uStack_1e8 = (uint *)&uStack_2d0;
        FUN_109a3ed30(&uStack_1f0,&puStack_90,lStack_270,iVar13);
        FUN_1095b05d8(puVar25,puVar10);
        if (lStack_270 != 0) {
          lStack_268 = lStack_270;
          __ZdlPv();
        }
        puVar10 = (uint *)&uStack_1f0;
        uStack_1f0 = &uStack_2d0;
        FUN_1093702c4();
        if (lStack_218 != 0) {
          piVar24 = (int *)(lStack_218 + 0x14);
          do {
            iVar13 = *piVar24;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar4) {
              *piVar24 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            puVar10 = &uStack_250;
            func_0x000109a848d4();
          }
        }
        lStack_218 = 0;
        uStack_238._0_4_ = 0;
        uStack_238._4_4_ = 0;
        uStack_240 = 0;
        uStack_23c = 0;
        uStack_228 = 0;
        uStack_224 = 0;
        fStack_230 = 0.0;
        uStack_22c = 0;
        if (0 < iStack_24c) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_210 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_24c);
        }
        if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
          puVar10 = (uint *)puStack_208[-1];
          _free();
        }
      }
      *(undefined1 *)(puVar25 + 0xf6) = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_1f0 = (undefined8 *)((double)((long)puVar10 - (long)puVar11) / 1000000000.0);
      FUN_1095b14e0(puVar25 + 0x90,&uStack_1f0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar10 = puVar25 + 0x126;
      puStack_88 = (uint *)CONCAT71(puStack_88._1_7_,1);
      puStack_90 = puVar10;
      __ZNSt3__15mutex4lockEv(puVar10);
      uStack_248 = 0;
      uStack_244 = 0;
      uStack_250 = 0;
      iStack_24c = 0;
      uStack_238._0_4_ = 0;
      uStack_238._4_4_ = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      fStack_230 = (float)puVar25[0x152];
      FUN_1095b5788(&uStack_250,*(undefined8 *)(puVar25 + 0x14c));
      plVar27 = *(long **)(puVar25 + 0x14e);
      if (plVar27 != (long *)0x0) {
        do {
          puVar11 = &uStack_250;
          func_0x000107c31944(puVar11,plVar27 + 2);
          puVar20 = (uint *)CONCAT44(uStack_244,uStack_248);
          if (puVar20 != (uint *)0x0) {
            uVar17 = (long)puVar20 - 1;
            if (((ulong)puVar20 & uVar17) == 0) {
              unaff_x27 = (uint *)(uVar17 & (ulong)puVar11);
            }
            else {
              unaff_x27 = puVar11;
              if (puVar20 <= puVar11) {
                uVar22 = 0;
                if (puVar20 != (uint *)0x0) {
                  uVar22 = (ulong)puVar11 / (ulong)puVar20;
                }
                unaff_x27 = (uint *)((long)puVar11 - uVar22 * (long)puVar20);
              }
            }
            plVar18 = *(long **)(CONCAT44(iStack_24c,uStack_250) + (long)unaff_x27 * 8);
            if (plVar18 != (long *)0x0) {
              for (plVar18 = (long *)*plVar18; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
                puVar21 = (uint *)plVar18[1];
                if (puVar21 == puVar11) {
                  puVar21 = &uStack_250;
                  func_0x000104c4fbc4(puVar21,plVar18 + 2,plVar27 + 2);
                  if (((ulong)puVar21 & 1) != 0) goto LAB_1095b52c0;
                }
                else {
                  if (((ulong)puVar20 & uVar17) == 0) {
                    puVar21 = (uint *)((ulong)puVar21 & uVar17);
                  }
                  else if (puVar20 <= puVar21) {
                    uVar22 = 0;
                    if (puVar20 != (uint *)0x0) {
                      uVar22 = (ulong)puVar21 / (ulong)puVar20;
                    }
                    puVar21 = (uint *)((long)puVar21 - uVar22 * (long)puVar20);
                  }
                  if (puVar21 != unaff_x27) break;
                }
              }
            }
          }
          plVar18 = (long *)0x68;
          __Znwm();
          *plVar18 = 0;
          plVar18[1] = (long)puVar11;
          if (*(char *)((long)plVar27 + 0x27) < '\0') {
            func_0x000107c3192c(plVar18 + 2,plVar27[2],plVar27[3]);
          }
          else {
            lVar19 = plVar27[3];
            lVar14 = plVar27[2];
            plVar18[4] = plVar27[4];
            plVar18[3] = lVar19;
            plVar18[2] = lVar14;
          }
          lVar19 = plVar27[6];
          lVar14 = plVar27[5];
          lVar29 = plVar27[8];
          lVar28 = plVar27[7];
          lVar31 = plVar27[10];
          lVar30 = plVar27[9];
          lVar32 = plVar27[0xb];
          plVar18[0xc] = plVar27[0xc];
          plVar18[0xb] = lVar32;
          plVar18[10] = lVar31;
          plVar18[9] = lVar30;
          plVar18[8] = lVar29;
          plVar18[7] = lVar28;
          plVar18[6] = lVar19;
          plVar18[5] = lVar14;
          if ((puVar20 == (uint *)0x0) || (fStack_230 * (float)puVar20 < (float)(uStack_238 + 1))) {
            uVar17 = 1;
            if ((uint *)0x2 < puVar20) {
              uVar17 = (ulong)(((ulong)puVar20 & (long)puVar20 - 1U) != 0);
            }
            uVar17 = uVar17 | (long)puVar20 << 1;
            uVar22 = (ulong)((float)(uStack_238 + 1) / fStack_230);
            if (uVar17 <= uVar22) {
              uVar17 = uVar22;
            }
            FUN_1095b5788(&uStack_250,uVar17);
            puVar20 = (uint *)CONCAT44(uStack_244,uStack_248);
            if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
              unaff_x27 = (uint *)((long)puVar20 - 1U & (ulong)puVar11);
            }
            else {
              unaff_x27 = puVar11;
              if (puVar20 <= puVar11) {
                uVar17 = 0;
                if (puVar20 != (uint *)0x0) {
                  uVar17 = (ulong)puVar11 / (ulong)puVar20;
                }
                unaff_x27 = (uint *)((long)puVar11 - uVar17 * (long)puVar20);
              }
            }
          }
          plVar23 = *(long **)(CONCAT44(iStack_24c,uStack_250) + (long)unaff_x27 * 8);
          if (plVar23 == (long *)0x0) {
            *plVar18 = CONCAT44(uStack_23c,uStack_240);
            uStack_240 = SUB84(plVar18,0);
            uStack_23c = (undefined4)((ulong)plVar18 >> 0x20);
            *(undefined4 **)(CONCAT44(iStack_24c,uStack_250) + (long)unaff_x27 * 8) = &uStack_240;
            if (*plVar18 != 0) {
              puVar11 = *(uint **)(*plVar18 + 8);
              if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
                puVar11 = (uint *)((ulong)puVar11 & (long)puVar20 - 1U);
              }
              else if (puVar20 <= puVar11) {
                uVar17 = 0;
                if (puVar20 != (uint *)0x0) {
                  uVar17 = (ulong)puVar11 / (ulong)puVar20;
                }
                puVar11 = (uint *)((long)puVar11 - uVar17 * (long)puVar20);
              }
              *(long **)(CONCAT44(iStack_24c,uStack_250) + (long)puVar11 * 8) = plVar18;
            }
          }
          else {
            *plVar18 = *plVar23;
            *plVar23 = (long)plVar18;
          }
          uStack_238 = uStack_238 + 1;
LAB_1095b52c0:
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      __ZNSt3__15mutex6unlockEv(puVar10);
      puStack_88 = (uint *)((ulong)puStack_88 & 0xffffffffffffff00);
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2b0 = 0x3f800000;
      plVar27 = (long *)CONCAT44(uStack_23c,uStack_240);
      if (plVar27 != (long *)0x0) {
        puVar15 = (undefined8 *)((ulong)&uStack_1f0 | 4);
        do {
          if (*(char *)((long)plVar27 + 0x27) < '\0') {
            func_0x000107c3192c(&lStack_270,plVar27[2],plVar27[3]);
          }
          else {
            lStack_268 = plVar27[3];
            lStack_270 = plVar27[2];
            lStack_260 = plVar27[4];
          }
          FUN_1095af460(&uStack_1f0,puVar25,&lStack_270);
          puVar12 = &uStack_2d0;
          aplStack_288[0] = &lStack_270;
          FUN_1095b3c7c(&uStack_2d0,&lStack_270,&UNK_10dd5b8f9,aplStack_288,&uStack_289);
          if (*(long *)((long)puVar12 + 0x60) != 0) {
            piVar24 = (int *)(*(long *)((long)puVar12 + 0x60) + 0x14);
            do {
              iVar13 = *piVar24;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar4) {
                *piVar24 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              func_0x000109a848d4((undefined1 *)((long)puVar12 + 0x28));
            }
          }
          *(undefined8 *)((long)puVar12 + 0x60) = 0;
          *(undefined8 *)((long)puVar12 + 0x40) = 0;
          *(undefined8 *)((long)puVar12 + 0x38) = 0;
          *(undefined8 *)((long)puVar12 + 0x50) = 0;
          *(undefined8 *)((long)puVar12 + 0x48) = 0;
          dVar8 = (double)uStack_1f0;
          iVar13 = uStack_1f0._4_4_;
          if (0 < *(int *)((long)puVar12 + 0x2c)) {
            lVar14 = 0;
            lVar19 = *(long *)((long)puVar12 + 0x68);
            do {
              *(undefined4 *)(lVar19 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)((long)puVar12 + 0x2c));
          }
          uVar5 = CONCAT44(uStack_1d4,uStack_1d8);
          uVar26 = CONCAT44(uStack_1dc,uStack_1e0);
          *(uint **)((long)puVar12 + 0x30) = uStack_1e8;
          *(double *)((long)puVar12 + 0x28) = dVar8;
          uVar7 = CONCAT44(uStack_1c4,uStack_1c8);
          uVar6 = CONCAT44(uStack_1cc,uStack_1d0);
          *(undefined8 *)((long)puVar12 + 0x40) = uVar5;
          *(undefined8 *)((long)puVar12 + 0x38) = uVar26;
          *(undefined8 *)((long)puVar12 + 0x50) = uVar7;
          *(undefined8 *)((long)puVar12 + 0x48) = uVar6;
          uVar26 = CONCAT44(uStack_1bc,uStack_1c0);
          *(long *)((long)puVar12 + 0x60) = lStack_1b8;
          *(undefined8 *)((long)puVar12 + 0x58) = uVar26;
          plVar23 = *(long **)((long)puVar12 + 0x70);
          plVar18 = (long *)((long)puVar12 + 0x78);
          dVar8 = (double)uStack_1f0;
          if (plVar23 != plVar18) {
            if (plVar23 != (long *)0x0) {
              _free(plVar23[-1]);
              iVar13 = uStack_1f0._4_4_;
            }
            *(undefined1 **)((long)puVar12 + 0x68) = (undefined1 *)((long)puVar12 + 0x30);
            *(long **)((long)puVar12 + 0x70) = plVar18;
            plVar23 = plVar18;
            dVar8 = (double)uStack_1f0;
          }
          plVar18 = plStack_1a8;
          uStack_1f0._4_4_ = (int)((ulong)dVar8 >> 0x20);
          if (iVar13 < 3) {
            *plVar23 = *plStack_1a8;
            plVar23[1] = plVar18[1];
            uStack_1f0._0_4_ = 0x42ff0000;
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0;
            *(undefined8 *)((long)puVar15 + 0x34) = 0;
            *(undefined8 *)((long)puVar15 + 0x2c) = 0;
            dVar8 = (double)CONCAT44(uStack_1f0._4_4_,0x42ff0000);
            if (plVar18 != &lStack_1a0) {
              _free(plVar18[-1]);
              dVar8 = (double)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            }
          }
          else {
            uStack_1f0 = (undefined8 *)dVar8;
            *(ulong *)((long)puVar12 + 0x68) = uStack_1b0;
            *(long **)((long)puVar12 + 0x70) = plVar18;
            dVar8 = (double)uStack_1f0;
          }
          uStack_1f0 = (undefined8 *)dVar8;
          if (lStack_260 < 0) {
            __ZdlPv(lStack_270);
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      FUN_1095b0028(&puStack_90);
      FUN_1095b3bdc(puVar25 + 0x160,&uStack_2d0);
      *(undefined1 *)(puVar25 + 0x19c) = 1;
      puVar25[0x4b] = 5;
      if (((ulong)puStack_88 & 1) == 0) goto LAB_1095b55e8;
      __ZNSt3__15mutex6unlockEv(puStack_90);
      puStack_88 = (uint *)((ulong)puStack_88 & 0xffffffffffffff00);
      FUN_1094c8830(&uStack_2d0);
      func_0x0001095b2444(CONCAT44(uStack_23c,uStack_240));
      lVar14 = CONCAT44(iStack_24c,uStack_250);
      uStack_250 = 0;
      iStack_24c = 0;
      if (lVar14 != 0) {
        __ZdlPv();
      }
      if ((char)puStack_88 == '\x01') {
        __ZNSt3__15mutex6unlockEv(puStack_90);
      }
      uVar26 = 1;
      puVar10 = puStack_298;
      if (puStack_298 != (uint *)0x0) goto LAB_1095b4a4c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar26;
  }
  ___stack_chk_fail();
LAB_1095b55e8:
  __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1095b55fc);
  (*pcVar9)();
}



/* Entry: 1095b5788; end: 1095b5957;  */

void FUN_1095b5788(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
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
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  if ((((ulong)plVar4 & 1) != 0) && (*(char *)((long)plVar6 + 0x27) < '\0')) {
    __ZdlPv(plVar6[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 1095b5958; end: 1095b598b;  */

void FUN_1095b5958(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1095b598c; end: 1095b5aa3;  */

long FUN_1095b598c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
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



/* Entry: 1095b5aa4; end: 1095b5b13;  */

undefined8 * FUN_1095b5aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afdf68;
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1095b5b14; end: 1095b5b47;  */

void FUN_1095b5b14(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110afdf68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1095b5b48; end: 1095b5b73;  */

void FUN_1095b5b48(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1095b5b74; end: 1095b5db7;  */

long FUN_1095b5b74(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  piVar4 = (int *)((long)param_3 + 4);
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uStack_60 = (ulong)&uStack_a0 | 8;
  uStack_78 = param_3[5];
  uStack_80 = param_3[4];
  lStack_68 = param_3[7];
  uStack_70 = param_3[6];
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_58 = (undefined8 *)param_3[9];
  if (*piVar4 < 3) {
    uStack_50 = *puStack_58;
    uStack_48 = puStack_58[1];
    puStack_58 = &uStack_50;
  }
  else {
    uStack_60 = param_3[8];
    param_3[8] = param_3 + 1;
    param_3[9] = param_3 + 10;
  }
  *(undefined8 *)((long)param_3 + 0xc) = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)((long)param_3 + 0x1c) = 0;
  *(undefined8 *)((long)param_3 + 0x14) = 0;
  *(undefined8 *)((long)param_3 + 0x2c) = 0;
  *(undefined8 *)((long)param_3 + 0x24) = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  piVar4 = (int *)((long)param_4 + 4);
  iVar1 = *piVar4;
  *(undefined4 *)param_3 = 0x42ff0000;
  uStack_c0 = (ulong)&uStack_100 | 8;
  uStack_f8 = param_4[1];
  uStack_100 = *param_4;
  uStack_e8 = param_4[3];
  uStack_f0 = param_4[2];
  uStack_d8 = param_4[5];
  uStack_e0 = param_4[4];
  lStack_c8 = param_4[7];
  uStack_d0 = param_4[6];
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_b8 = (undefined8 *)param_4[9];
  if (iVar1 < 3) {
    uStack_b0 = *puStack_b8;
    uStack_a8 = puStack_b8[1];
    puStack_b8 = &uStack_b0;
  }
  else {
    uStack_c0 = param_4[8];
    param_4[8] = param_4 + 1;
    param_4[9] = param_4 + 10;
  }
  *(undefined4 *)param_4 = 0x42ff0000;
  *(undefined8 *)((long)param_4 + 0xc) = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)((long)param_4 + 0x1c) = 0;
  *(undefined8 *)((long)param_4 + 0x14) = 0;
  *(undefined8 *)((long)param_4 + 0x2c) = 0;
  *(undefined8 *)((long)param_4 + 0x24) = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_1 = param_1 + 8;
  FUN_1095b48d8(param_1,&uStack_a0,&uStack_100);
  if (lStack_c8 != 0) {
    piVar4 = (int *)(lStack_c8 + 0x14);
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < uStack_100._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_c0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_100._4_4_);
  }
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
  if (lStack_68 != 0) {
    piVar4 = (int *)(lStack_68 + 0x14);
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < uStack_a0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_60 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_a0._4_4_);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  return param_1;
}



/* Entry: 1095b5db8; end: 1095b5dff;  */

void FUN_1095b5db8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001095b24e4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095b5e00; end: 1095b5f1b;  */

void FUN_1095b5e00(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  
  if ((param_2 == 0) || ((char)param_1[4] == '\x01')) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    uVar9 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar19 = 0;
    uVar21 = 0;
    uVar23 = 0;
    uStack_48 = 0;
    auStack_58[0] = 0x1010000;
    piVar5 = param_1;
    lStack_50 = param_2;
    FUN_109a91d90();
    iVar8 = 4;
    puVar6 = auStack_58;
    FUN_109ab9654(puVar6,4,piVar5);
    uVar10 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar22 = 0;
    uVar24 = 0;
    uStack_48 = 0;
    lStack_50 = param_2 + 0x60;
    auStack_58[0] = 0x1010000;
    FUN_109a91d90();
    FUN_109ab9654(auStack_58,4,puVar6);
    iVar7 = (int)((float)(double)CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,
                                                  CONCAT13(uVar15,CONCAT12(uVar13,CONCAT11(uVar11,
                                                  uVar9))))))) +
                 (float)(double)CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,
                                                  CONCAT13(uVar16,CONCAT12(uVar14,CONCAT11(uVar12,
                                                  uVar10))))))));
    iVar4 = *param_1;
    if (*param_1 <= iVar7) {
      iVar4 = iVar7;
    }
    iVar2 = param_1[1];
    if (iVar7 <= param_1[1]) {
      iVar2 = iVar7;
    }
    *param_1 = iVar4;
    param_1[1] = iVar2;
    param_1[2] = iVar7;
    iVar1 = iVar2 + iVar4;
    iVar3 = iVar1 + 0xf;
    if (iVar1 < 0 == SCARRY4(iVar2,iVar4)) {
      iVar3 = iVar1;
    }
    if (iVar3 >> 4 <= iVar7) {
      iVar4 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar7 < iVar4 >> 3) {
        iVar8 = 2;
      }
      else {
        iVar8 = 1;
      }
    }
    param_1[5] = iVar8;
    iVar4 = 0;
    if (iVar8 != 0) {
      iVar4 = (param_1[3] + 1) / iVar8;
    }
    param_1[3] = (param_1[3] + 1) - iVar4 * iVar8;
  }
  return;
}



/* Entry: 1095b5f1c; end: 1095b60af;  */

void FUN_1095b5f1c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  double dVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  code *pcVar16;
  long lVar17;
  undefined8 **ppuVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  long *plVar22;
  long *extraout_x8;
  double *pdVar23;
  int iVar24;
  int iVar25;
  double dVar26;
  long *plVar27;
  long *plVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined **ppuStack_508;
  long lStack_500;
  undefined8 uStack_4f8;
  int iStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 uStack_4d0;
  double adStack_4c8 [6];
  long lStack_498;
  double dStack_490;
  double *pdStack_488;
  double dStack_480;
  undefined8 uStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 auStack_448 [2];
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined4 auStack_430 [2];
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined4 auStack_418 [2];
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  double dStack_3c8;
  undefined4 *puStack_3c0;
  long *plStack_3b8;
  long alStack_3b0 [2];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  double dStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  double dStack_348;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long lStack_320;
  long lStack_318;
  double dStack_310;
  long lStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  double adStack_2d0 [5];
  long lStack_2a8;
  undefined8 *puStack_2a0;
  double *pdStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  undefined8 *puStack_270;
  double *pdStack_268;
  double dStack_260;
  uint uStack_250;
  long lStack_248;
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = 1;
  uStack_c8 = 0x3fe8000000000000;
  uStack_d0 = 0x3fe6666666666666;
  uStack_c0 = 1;
  uStack_a0 = 0x3fd0000000000000;
  uStack_a8 = 0x4004000000000000;
  uStack_98 = 0x3fe0000000000000;
  uStack_b4 = 0x500000014;
  uStack_bc = 0x6400000032;
  lVar17 = 0x300;
  __Znwm();
  FUN_1095b6c40();
  lStack_e0 = lVar17;
  FUN_1094a0010(lVar17 + 0x10,param_3,param_4);
  FUN_1094a09f0(lVar17 + 0x10,param_3);
  lVar17 = lStack_e0;
  if (*(int *)(lStack_e0 + 0x60) == 2) {
    uStack_e8 = 0;
    lStack_e0 = 0;
    pppuStack_70 = appuStack_88;
    lStack_90 = lVar17;
    appuStack_88[0] = &PTR_FUN_110afdfd0;
    pppuStack_50 = appuStack_68;
    appuStack_68[0] = &PTR_DAT_110afe060;
    FUN_1095b6bec(param_1,&lStack_90);
    FUN_1095b6cec(&lStack_90);
    FUN_1095b6cac(&uStack_e8,0);
  }
  else {
    *param_1 = 0;
    param_1[0x48] = 0;
  }
  plVar27 = &lStack_e0;
  FUN_1095b6cac(plVar27,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1095b6cec(&lStack_90);
  FUN_1095b6cac(&uStack_e8,0);
  plVar22 = (long *)0x0;
  FUN_1095b6cac(&lStack_e0);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar28 = (long *)*plVar22;
  FUN_1094a09f0(plVar28 + 2,plVar27);
  iVar29 = (int)plVar28[0xc];
  if (iVar29 == 0) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 0x1c) = 0;
  }
  else {
    lStack_320 = plVar28[0xe];
    lStack_318 = plVar28[0xf];
    lStack_308 = plVar28[0x11];
    dStack_310 = (double)plVar28[0x10];
    dVar44 = (double)plVar28[0x12];
    dVar37 = (double)plVar28[0x14];
    dVar7 = (double)plVar28[0x13];
    puVar9 = (undefined8 *)plVar28[0x16];
    pdVar10 = (double *)plVar28[0x17];
    dVar32 = (double)plVar28[0x18];
    dVar38 = (double)plVar28[0x1a];
    dVar8 = (double)plVar28[0x19];
    dVar33 = (double)plVar28[0x1b];
    puVar11 = (undefined8 *)plVar28[0x1c];
    pdVar12 = (double *)plVar28[0x1d];
    dVar34 = (double)plVar28[0x1e];
    if ((char)plVar28[0x5e] == '\x01') {
      iVar24 = (int)plVar28 + 0x10;
      FUN_1094a1730();
      if (iVar24 != 0) {
        lVar17 = 0;
        dVar41 = *(double *)(*plVar28 + 0x30) * *(double *)(*plVar28 + 0x28) * 1.75;
        lVar30 = plVar27[0x22];
        dVar35 = (double)plVar27[6];
        dVar26 = (double)plVar27[7];
        uStack_400._0_4_ = SUB84(dVar35,0);
        uStack_400._4_4_ = (int)((ulong)dVar35 >> 0x20);
        uStack_3e0 = SUB84(dVar26,0);
        uStack_3dc = (undefined4)((ulong)dVar26 >> 0x20);
        dVar3 = (double)plVar27[4];
        dStack_3c8 = (double)plVar27[5];
        uStack_3d0 = SUB84(dVar3,0);
        uStack_3cc = (undefined4)((ulong)dVar3 >> 0x20);
        puStack_3c0 = (undefined4 *)0x3ff0000000000000;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3f0 = 0;
        uStack_3ec = 0;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f8 = 0;
        uStack_3f4 = 0;
        auVar36 = NEON_fmov(0x3fe0000000000000,8);
        dVar39 = auVar36._0_8_;
        dVar40 = auVar36._8_8_;
        dStack_480 = dVar39 * 0.0 * dVar41;
        auVar36 = NEON_fmov(0x3ff0000000000000,8);
        uStack_478 = auVar36._0_8_;
        adStack_4c8[0] = dVar41 * 0.5;
        uStack_4d0 = dVar41 * -0.5;
        adStack_4c8[1] = dVar39 * 0.0 * dVar41;
        adStack_4c8[5] = dVar39 * 0.0 * dVar41;
        adStack_4c8[2] = (double)auVar36._0_8_;
        lStack_498 = 0x3ff0000000000000;
        adStack_4c8[4] = dVar40 * 1.0 * dVar41;
        adStack_4c8[3] = auVar36._8_8_ * dVar39 * dVar41;
        pdStack_488 = (double *)(dVar40 * -1.0 * dVar41);
        dStack_490 = dVar39 * -1.0 * dVar41;
        dStack_468 = dVar40 * -1.0 * dVar41;
        dStack_470 = auVar36._8_8_ * dVar39 * dVar41;
        dStack_460 = dVar39 * 0.0 * dVar41;
        uStack_458 = 0x3ff0000000000000;
        dStack_300 = dVar44;
        dStack_2f0 = dVar37;
        dStack_2f8 = dVar7;
        pdVar23 = adStack_4c8 + 1;
        do {
          dVar39 = pdVar23[-2];
          dVar40 = pdVar23[-1];
          dVar42 = *pdVar23;
          dVar43 = pdVar23[1];
          *(double *)((long)adStack_2d0 + lVar17 + 8) =
               (double)pdVar10 * dVar39 + dVar38 * dVar40 + (double)pdVar12 * dVar42 +
               dVar7 * dVar43;
          *(double *)((long)adStack_2d0 + lVar17) =
               (double)puVar9 * dVar39 + dVar8 * dVar40 + (double)puVar11 * dVar42 + dVar44 * dVar43
          ;
          *(double *)((long)adStack_2d0 + lVar17 + 0x10) =
               dVar32 * dVar39 + dVar33 * dVar40 + dVar34 * dVar42 + dVar37 * dVar43;
          lVar17 = lVar17 + 0x18;
          pdVar23 = pdVar23 + 4;
        } while (lVar17 != 0x60);
        lVar17 = 0;
        puStack_270 = &uStack_400;
        pdStack_268 = adStack_2d0;
        dStack_260 = 1.48219693752374e-323;
        do {
          dVar39 = *(double *)((long)adStack_2d0 + lVar17);
          dVar40 = *(double *)((long)adStack_2d0 + lVar17 + 8);
          dVar42 = *(double *)((long)adStack_2d0 + lVar17 + 0x10);
          *(double *)((long)&uStack_398 + lVar17) =
               dVar39 * 0.0 + dVar26 * dVar40 + dStack_3c8 * dVar42;
          *(double *)((long)&uStack_3a0 + lVar17) = dVar35 * dVar39 + dVar40 * 0.0 + dVar3 * dVar42;
          *(double *)((long)&uStack_390 + lVar17) = dVar39 * 0.0 + dVar40 * 0.0 + dVar42;
          lVar17 = lVar17 + 0x18;
        } while (lVar17 != 0x60);
        FUN_10941066c(&puStack_4e8,4);
        auVar36._4_4_ = uStack_38c;
        auVar36._0_4_ = uStack_390;
        auVar36._8_4_ = uStack_388;
        auVar36._12_4_ = uStack_384;
        auVar13._4_4_ = uStack_37c;
        auVar13._0_4_ = uStack_380;
        auVar13._8_4_ = uStack_378;
        auVar13._12_4_ = uStack_374;
        auVar36 = NEON_ext(auVar36,auVar13,8,1);
        puStack_4e8[1] =
             CONCAT44((float)(auVar36._8_8_ / auVar13._8_8_),(float)(auVar36._0_8_ / auVar13._8_8_))
        ;
        *puStack_4e8 = CONCAT44((float)((double)CONCAT44(uStack_398._4_4_,(undefined4)uStack_398) /
                                       (double)CONCAT44(uStack_38c,uStack_390)),
                                (float)((double)CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0) /
                                       (double)CONCAT44(uStack_38c,uStack_390)));
        auVar14._8_8_ = puStack_358;
        auVar14._0_8_ = puStack_360;
        auVar15._8_8_ = dStack_348;
        auVar15._0_8_ = uStack_350;
        auVar36 = NEON_ext(auVar14,auVar15,8,1);
        puStack_4e8[3] =
             CONCAT44((float)(auVar36._8_8_ / dStack_348),(float)(auVar36._0_8_ / dStack_348));
        puStack_4e8[2] =
             CONCAT44((float)(dStack_368 / (double)puStack_360),
                      (float)((double)CONCAT44(uStack_36c,uStack_370) / (double)puStack_360));
        ppuVar18 = &puStack_338;
        FUN_10941066c(ppuVar18,4);
        puStack_338[1] = 0x43a00000;
        *puStack_338 = 0;
        puStack_338[3] = 0x43a0000043a00000;
        puStack_338[2] = 0x43a0000000000000;
        adStack_2d0[0] = 0.0;
        uStack_2e0 = (long *)CONCAT44(uStack_2e0._4_4_,0x8103000d);
        uStack_2d8 = &puStack_4e8;
        uStack_390 = 0;
        uStack_38c = 0;
        uStack_3a0._0_4_ = 0x8103000d;
        uStack_398 = &puStack_338;
        FUN_109a91d90();
        FUN_109b93554(&uStack_4d0,0x4008000000000000,0x3d70a3d7,&uStack_2e0,&uStack_3a0,0,ppuVar18,
                      2000);
        FUN_109a822d8(&uStack_2e0,&uStack_4d0,0);
        uStack_3a0._0_4_ = 0x42ff0000;
        puStack_360 = &uStack_398;
        uStack_398._4_4_ = 0;
        uStack_390 = 0;
        uStack_3a0._4_4_ = 0;
        uStack_398._0_4_ = 0;
        dStack_368 = 0.0;
        uStack_36c = 0;
        uStack_374 = 0;
        uStack_370 = 0;
        uStack_37c = 0;
        uStack_378 = 0;
        uStack_384 = 0;
        uStack_380 = 0;
        uStack_38c = 0;
        uStack_388 = 0;
        dStack_348 = 0.0;
        uStack_350 = 0;
        puStack_358 = &uStack_350;
        (**(code **)(*uStack_2e0 + 0x18))(uStack_2e0,&uStack_2e0,&uStack_3a0,0xffffffff);
        FUN_10918eb6c(&uStack_2e0);
        adStack_2d0[0] = *(double *)(lVar30 + 8);
        uVar31 = *(ulong *)(lVar30 + 0x10);
        iVar29 = *(int *)(lVar30 + 0x18);
        uStack_2e0 = (long *)0x242ff0000;
        puStack_2a0 = &uStack_2d8;
        iVar24 = (int)(uVar31 >> 0x20);
        iVar25 = (int)uVar31;
        uStack_2d8 = (undefined8 **)CONCAT44(iVar25,iVar24);
        adStack_2d0[3] = 0.0;
        adStack_2d0[2] = 0.0;
        lStack_2a8 = 0;
        adStack_2d0[4] = 0.0;
        dVar26 = (double)(long)iVar25;
        dStack_288 = 0.0;
        dStack_290 = 0.0;
        pdStack_298 = &dStack_290;
        if (adStack_2d0[0] == 0.0) {
          adStack_2d0[1] = 0.0;
          dVar3 = 0.0;
          if ((long)iVar25 * (long)iVar24 != 0) goto LAB_1095b6a70;
        }
        dVar3 = dVar26;
        if (uVar31 >> 0x20 != 1) {
          dVar3 = (double)(long)iVar29;
        }
        dStack_290 = dVar26;
        if (iVar29 != 0) {
          dStack_290 = dVar3;
        }
        uVar4 = 0x42ff4000;
        if (dVar3 != dVar26 && iVar29 != 0) {
          uVar4 = 0x42ff0000;
        }
        uStack_2e0 = (long *)CONCAT44(2,uVar4);
        dStack_288 = 4.94065645841247e-324;
        adStack_2d0[3] = (double)((long)adStack_2d0[0] + (long)dStack_290 * ((long)uVar31 >> 0x20));
        adStack_2d0[2] = (double)(((long)adStack_2d0[3] - (long)dStack_290) + (long)dVar26);
        uVar31 = *(ulong *)(lVar30 + 0x10);
        uStack_400._0_4_ = 0x42ff0000;
        uStack_3f4 = 0;
        uStack_3f0 = 0;
        uStack_400._4_4_ = 0;
        uStack_3f8 = 0;
        puStack_3c0 = &uStack_3f8;
        uStack_3e4 = 0;
        uStack_3e0 = 0;
        uStack_3ec = 0;
        uStack_3e8 = 0;
        uStack_3d4 = 0;
        uStack_3dc = 0;
        uStack_3d8 = 0;
        dStack_3c8 = 0.0;
        uStack_3d0 = 0;
        uStack_3cc = 0;
        alStack_3b0[0] = 0;
        alStack_3b0[1] = 0;
        dStack_300 = (double)(uVar31 >> 0x20 | uVar31 << 0x20);
        plStack_3b8 = alStack_3b0;
        adStack_2d0[1] = adStack_2d0[0];
        FUN_109a83fd0(&uStack_400,2,&dStack_300,0);
        uStack_408 = 0;
        auStack_418[0] = 0x1010000;
        puStack_410 = &uStack_2e0;
        auStack_430[0] = 0x2010000;
        uStack_420 = 0;
        uStack_438 = 0;
        auStack_448[0] = 0x1010000;
        puStack_440 = &uStack_4d0;
        uStack_450 = (undefined4)uVar31;
        uStack_44c = (undefined4)(uVar31 >> 0x20);
        dStack_2f8 = 0.0;
        dStack_300 = 0.0;
        uStack_2e8 = 0;
        dStack_2f0 = 0.0;
        puStack_428 = &uStack_400;
        FUN_109b1eb58(auStack_418,auStack_430,auStack_448,&uStack_450,1,0,&dStack_300);
        dStack_300 = 6.79038653266988e-312;
        lStack_500 = 0;
        uStack_4f8 = 0;
        iStack_4f0 = 0;
        ppuStack_508 = &PTR_FUN_110af4c80;
        func_0x00010938e870(&ppuStack_508,&dStack_300);
        lVar17 = 0;
        do {
          lVar30 = 0;
          do {
            *(undefined1 *)(lStack_500 + (long)iStack_4f0 * (long)(int)lVar17 + lVar30) =
                 *(undefined1 *)(CONCAT44(uStack_3ec,uStack_3f0) + lVar17 * *plStack_3b8 + lVar30);
            lVar30 = lVar30 + 1;
          } while (lVar30 != 0x140);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x140);
        if (dStack_3c8 != 0.0) {
          piVar1 = (int *)((long)dStack_3c8 + 0x14);
          do {
            iVar29 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_400);
          }
        }
        dStack_3c8 = 0.0;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f0 = 0;
        uStack_3ec = 0;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        if (0 < uStack_400._4_4_) {
          lVar17 = 0;
          do {
            puStack_3c0[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_400._4_4_);
        }
        if (plStack_3b8 != alStack_3b0 && plStack_3b8 != (long *)0x0) {
          _free(plStack_3b8[-1]);
        }
        if (lStack_2a8 != 0) {
          piVar1 = (int *)(lStack_2a8 + 0x14);
          do {
            iVar29 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_2e0);
          }
        }
        lStack_2a8 = 0;
        adStack_2d0[1] = 0.0;
        adStack_2d0[0] = 0.0;
        adStack_2d0[3] = 0.0;
        adStack_2d0[2] = 0.0;
        if (0 < uStack_2e0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_2a0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_2e0._4_4_);
        }
        if (pdStack_298 != &dStack_290 && pdStack_298 != (double *)0x0) {
          _free(pdStack_298[-1]);
        }
        if (dStack_368 != 0.0) {
          piVar1 = (int *)((long)dStack_368 + 0x14);
          do {
            iVar29 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_3a0);
          }
        }
        dStack_368 = 0.0;
        uStack_388 = 0;
        uStack_384 = 0;
        uStack_390 = 0;
        uStack_38c = 0;
        uStack_378 = 0;
        uStack_374 = 0;
        uStack_380 = 0;
        uStack_37c = 0;
        if (0 < uStack_3a0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_360 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_3a0._4_4_);
        }
        if (puStack_358 != &uStack_350 && puStack_358 != (undefined8 *)0x0) {
          _free(puStack_358[-1]);
        }
        if (lStack_498 != 0) {
          piVar1 = (int *)(lStack_498 + 0x14);
          do {
            iVar29 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_4d0);
          }
        }
        lStack_498 = 0;
        adStack_4c8[2] = 0.0;
        adStack_4c8[1] = 0.0;
        adStack_4c8[4] = 0.0;
        adStack_4c8[3] = 0.0;
        if (0 < uStack_4d0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)dStack_490 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_4d0._4_4_);
        }
        if (pdStack_488 != &dStack_480 && pdStack_488 != (double *)0x0) {
          _free(pdStack_488[-1]);
        }
        if (puStack_338 != (undefined8 *)0x0) {
          puStack_330 = puStack_338;
          __ZdlPv();
        }
        if (puStack_4e8 != (undefined8 *)0x0) {
          puStack_4e0 = puStack_4e8;
          __ZdlPv();
        }
        puVar19 = (undefined8 *)0x40;
        __Znwm();
        FUN_1094737f8();
        *puVar19 = &PTR_FUN_110af6758;
        puVar19[4] = (double)(int)uStack_4f8;
        puVar19[5] = (double)uStack_4f8._4_4_;
        puVar19[6] = dVar41 / (double)uStack_4f8._4_4_;
        *(undefined1 *)((long)puVar19 + 0x15) = *(undefined1 *)(*plVar28 + 0x15);
        FUN_1094a0de0(plVar28 + 2,puVar19);
        FUN_1094a09f0(plVar28 + 2,plVar27);
        puVar20 = (undefined8 *)0x20;
        __Znwm();
        *puVar20 = &PTR_FUN_110af6c40;
        puVar20[1] = 0;
        puVar20[2] = 0;
        puVar20[3] = puVar19;
        plVar27 = (long *)plVar28[1];
        *plVar28 = (long)puVar19;
        plVar28[1] = (long)puVar20;
        if (plVar27 != (long *)0x0) {
          plVar2 = plVar27 + 1;
          do {
            lVar17 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
          }
        }
        *(undefined1 *)(plVar28 + 0x5e) = 0;
        ppuStack_508 = &PTR_FUN_110af4c80;
        if (lStack_500 != 0) {
          __ZdaPv();
        }
        iVar29 = (int)plVar28[0xc];
      }
    }
    uStack_2d8 = (undefined8 **)lStack_318;
    uStack_2e0 = (long *)lStack_320;
    adStack_2d0[1] = (double)lStack_308;
    adStack_2d0[0] = dStack_310;
    uStack_250 = (uint)(iVar29 != 2);
    uStack_208 = 0;
    lStack_248 = *plVar22;
    uStack_228 = 0;
    *plVar22 = 0;
    adStack_2d0[2] = dVar44;
    adStack_2d0[3] = dVar7;
    adStack_2d0[4] = dVar37;
    puStack_2a0 = puVar9;
    pdStack_298 = pdVar10;
    dStack_290 = dVar32;
    dStack_288 = dVar8;
    dStack_280 = dVar38;
    dStack_278 = dVar33;
    puStack_270 = puVar11;
    pdStack_268 = pdVar12;
    dStack_260 = dVar34;
    FUN_1095b6f60(auStack_220,plVar22 + 5);
    FUN_1095b70cc(auStack_240,plVar22 + 1);
    extraout_x8[6] = (long)adStack_2d0[4];
    extraout_x8[1] = (long)uStack_2d8;
    *extraout_x8 = (long)uStack_2e0;
    extraout_x8[3] = (long)adStack_2d0[1];
    extraout_x8[2] = (long)adStack_2d0[0];
    extraout_x8[5] = (long)adStack_2d0[3];
    extraout_x8[4] = (long)adStack_2d0[2];
    extraout_x8[0xd] = (long)dStack_278;
    extraout_x8[0xc] = (long)dStack_280;
    extraout_x8[0xf] = (long)pdStack_268;
    extraout_x8[0xe] = (long)puStack_270;
    extraout_x8[0x10] = (long)dStack_260;
    extraout_x8[9] = (long)pdStack_298;
    extraout_x8[8] = (long)puStack_2a0;
    extraout_x8[0xb] = (long)dStack_288;
    extraout_x8[10] = (long)dStack_290;
    *(uint *)(extraout_x8 + 0x12) = uStack_250;
    extraout_x8[0x17] = 0;
    extraout_x8[0x1b] = 0;
    extraout_x8[0x13] = lStack_248;
    lStack_248 = 0;
    FUN_1095b6f60(extraout_x8 + 0x18,auStack_220);
    FUN_1095b70cc(extraout_x8 + 0x14,auStack_240);
    *(undefined1 *)(extraout_x8 + 0x1c) = 1;
    FUN_1095b6cec(&lStack_248);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  dVar3 = adStack_2d0[0];
LAB_1095b6a70:
  adStack_2d0[0] = dVar3;
  puVar21 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar21 = 1;
  uStack_400 = puVar21 + 1;
  uStack_3f8 = 0x1c;
  uStack_3f4 = 0;
  *(undefined1 *)(puVar21 + 8) = 0;
  *(undefined8 *)(puVar21 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar21 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar21 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar21 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&uStack_400,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1095b6ad0);
  (*pcVar16)();
}



/* Entry: 1095b60b0; end: 1095b6beb;  */

void FUN_1095b60b0(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  double dVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  code *pcVar16;
  undefined8 **ppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  long lVar21;
  double *pdVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  long *plVar26;
  long *plVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined **ppuStack_418;
  long lStack_410;
  undefined8 uStack_408;
  int iStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e0;
  double adStack_3d8 [6];
  long lStack_3a8;
  double dStack_3a0;
  double *pdStack_398;
  double dStack_390;
  undefined8 uStack_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 auStack_358 [2];
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined4 auStack_340 [2];
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined4 auStack_328 [2];
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double dStack_2d8;
  undefined4 *puStack_2d0;
  long *plStack_2c8;
  long alStack_2c0 [2];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double dStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  double dStack_258;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  long lStack_230;
  long lStack_228;
  double dStack_220;
  long lStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double adStack_1e0 [5];
  long lStack_1b8;
  undefined8 *puStack_1b0;
  double *pdStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  undefined8 *puStack_180;
  double *pdStack_178;
  double dStack_170;
  uint uStack_160;
  long lStack_158;
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = (long *)*param_3;
  FUN_1094a09f0(plVar27 + 2,param_2);
  iVar28 = (int)plVar27[0xc];
  if (iVar28 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  else {
    lStack_230 = plVar27[0xe];
    lStack_228 = plVar27[0xf];
    lStack_218 = plVar27[0x11];
    dStack_220 = (double)plVar27[0x10];
    dVar43 = (double)plVar27[0x12];
    dVar36 = (double)plVar27[0x14];
    dVar7 = (double)plVar27[0x13];
    puVar9 = (undefined8 *)plVar27[0x16];
    pdVar10 = (double *)plVar27[0x17];
    dVar31 = (double)plVar27[0x18];
    dVar37 = (double)plVar27[0x1a];
    dVar8 = (double)plVar27[0x19];
    dVar32 = (double)plVar27[0x1b];
    puVar11 = (undefined8 *)plVar27[0x1c];
    pdVar12 = (double *)plVar27[0x1d];
    dVar33 = (double)plVar27[0x1e];
    if ((char)plVar27[0x5e] == '\x01') {
      iVar23 = (int)plVar27 + 0x10;
      FUN_1094a1730();
      if (iVar23 != 0) {
        lVar21 = 0;
        dVar40 = *(double *)(*plVar27 + 0x30) * *(double *)(*plVar27 + 0x28) * 1.75;
        lVar29 = *(long *)(param_2 + 0x110);
        dVar34 = *(double *)(param_2 + 0x30);
        dVar25 = *(double *)(param_2 + 0x38);
        uStack_310._0_4_ = SUB84(dVar34,0);
        uStack_310._4_4_ = (int)((ulong)dVar34 >> 0x20);
        uStack_2f0 = SUB84(dVar25,0);
        uStack_2ec = (undefined4)((ulong)dVar25 >> 0x20);
        dVar3 = *(double *)(param_2 + 0x20);
        dStack_2d8 = *(double *)(param_2 + 0x28);
        uStack_2e0 = SUB84(dVar3,0);
        uStack_2dc = (undefined4)((ulong)dVar3 >> 0x20);
        puStack_2d0 = (undefined4 *)0x3ff0000000000000;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        uStack_300 = 0;
        uStack_2fc = 0;
        uStack_2f8 = 0;
        uStack_2f4 = 0;
        uStack_308 = 0;
        uStack_304 = 0;
        auVar35 = NEON_fmov(0x3fe0000000000000,8);
        dVar38 = auVar35._0_8_;
        dVar39 = auVar35._8_8_;
        dStack_390 = dVar38 * 0.0 * dVar40;
        auVar35 = NEON_fmov(0x3ff0000000000000,8);
        uStack_388 = auVar35._0_8_;
        adStack_3d8[0] = dVar40 * 0.5;
        uStack_3e0 = dVar40 * -0.5;
        adStack_3d8[1] = dVar38 * 0.0 * dVar40;
        adStack_3d8[5] = dVar38 * 0.0 * dVar40;
        adStack_3d8[2] = (double)auVar35._0_8_;
        lStack_3a8 = 0x3ff0000000000000;
        adStack_3d8[4] = dVar39 * 1.0 * dVar40;
        adStack_3d8[3] = auVar35._8_8_ * dVar38 * dVar40;
        pdStack_398 = (double *)(dVar39 * -1.0 * dVar40);
        dStack_3a0 = dVar38 * -1.0 * dVar40;
        dStack_378 = dVar39 * -1.0 * dVar40;
        dStack_380 = auVar35._8_8_ * dVar38 * dVar40;
        dStack_370 = dVar38 * 0.0 * dVar40;
        uStack_368 = 0x3ff0000000000000;
        dStack_210 = dVar43;
        dStack_200 = dVar36;
        dStack_208 = dVar7;
        pdVar22 = adStack_3d8 + 1;
        do {
          dVar38 = pdVar22[-2];
          dVar39 = pdVar22[-1];
          dVar41 = *pdVar22;
          dVar42 = pdVar22[1];
          *(double *)((long)adStack_1e0 + lVar21 + 8) =
               (double)pdVar10 * dVar38 + dVar37 * dVar39 + (double)pdVar12 * dVar41 +
               dVar7 * dVar42;
          *(double *)((long)adStack_1e0 + lVar21) =
               (double)puVar9 * dVar38 + dVar8 * dVar39 + (double)puVar11 * dVar41 + dVar43 * dVar42
          ;
          *(double *)((long)adStack_1e0 + lVar21 + 0x10) =
               dVar31 * dVar38 + dVar32 * dVar39 + dVar33 * dVar41 + dVar36 * dVar42;
          lVar21 = lVar21 + 0x18;
          pdVar22 = pdVar22 + 4;
        } while (lVar21 != 0x60);
        lVar21 = 0;
        puStack_180 = &uStack_310;
        pdStack_178 = adStack_1e0;
        dStack_170 = 1.48219693752374e-323;
        do {
          dVar38 = *(double *)((long)adStack_1e0 + lVar21);
          dVar39 = *(double *)((long)adStack_1e0 + lVar21 + 8);
          dVar41 = *(double *)((long)adStack_1e0 + lVar21 + 0x10);
          *(double *)((long)&uStack_2a8 + lVar21) =
               dVar38 * 0.0 + dVar25 * dVar39 + dStack_2d8 * dVar41;
          *(double *)((long)&uStack_2b0 + lVar21) = dVar34 * dVar38 + dVar39 * 0.0 + dVar3 * dVar41;
          *(double *)((long)&uStack_2a0 + lVar21) = dVar38 * 0.0 + dVar39 * 0.0 + dVar41;
          lVar21 = lVar21 + 0x18;
        } while (lVar21 != 0x60);
        FUN_10941066c(&puStack_3f8,4);
        auVar35._4_4_ = uStack_29c;
        auVar35._0_4_ = uStack_2a0;
        auVar35._8_4_ = uStack_298;
        auVar35._12_4_ = uStack_294;
        auVar13._4_4_ = uStack_28c;
        auVar13._0_4_ = uStack_290;
        auVar13._8_4_ = uStack_288;
        auVar13._12_4_ = uStack_284;
        auVar35 = NEON_ext(auVar35,auVar13,8,1);
        puStack_3f8[1] =
             CONCAT44((float)(auVar35._8_8_ / auVar13._8_8_),(float)(auVar35._0_8_ / auVar13._8_8_))
        ;
        *puStack_3f8 = CONCAT44((float)((double)CONCAT44(uStack_2a8._4_4_,(undefined4)uStack_2a8) /
                                       (double)CONCAT44(uStack_29c,uStack_2a0)),
                                (float)((double)CONCAT44(uStack_2b0._4_4_,(undefined4)uStack_2b0) /
                                       (double)CONCAT44(uStack_29c,uStack_2a0)));
        auVar14._8_8_ = puStack_268;
        auVar14._0_8_ = puStack_270;
        auVar15._8_8_ = dStack_258;
        auVar15._0_8_ = uStack_260;
        auVar35 = NEON_ext(auVar14,auVar15,8,1);
        puStack_3f8[3] =
             CONCAT44((float)(auVar35._8_8_ / dStack_258),(float)(auVar35._0_8_ / dStack_258));
        puStack_3f8[2] =
             CONCAT44((float)(dStack_278 / (double)puStack_270),
                      (float)((double)CONCAT44(uStack_27c,uStack_280) / (double)puStack_270));
        ppuVar17 = &puStack_248;
        FUN_10941066c(ppuVar17,4);
        puStack_248[1] = 0x43a00000;
        *puStack_248 = 0;
        puStack_248[3] = 0x43a0000043a00000;
        puStack_248[2] = 0x43a0000000000000;
        adStack_1e0[0] = 0.0;
        uStack_1f0 = (long *)CONCAT44(uStack_1f0._4_4_,0x8103000d);
        uStack_1e8 = &puStack_3f8;
        uStack_2a0 = 0;
        uStack_29c = 0;
        uStack_2b0._0_4_ = 0x8103000d;
        uStack_2a8 = &puStack_248;
        FUN_109a91d90();
        FUN_109b93554(&uStack_3e0,0x4008000000000000,0x3d70a3d7,&uStack_1f0,&uStack_2b0,0,ppuVar17,
                      2000);
        FUN_109a822d8(&uStack_1f0,&uStack_3e0,0);
        uStack_2b0._0_4_ = 0x42ff0000;
        puStack_270 = &uStack_2a8;
        uStack_2a8._4_4_ = 0;
        uStack_2a0 = 0;
        uStack_2b0._4_4_ = 0;
        uStack_2a8._0_4_ = 0;
        dStack_278 = 0.0;
        uStack_27c = 0;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_28c = 0;
        uStack_288 = 0;
        uStack_294 = 0;
        uStack_290 = 0;
        uStack_29c = 0;
        uStack_298 = 0;
        dStack_258 = 0.0;
        uStack_260 = 0;
        puStack_268 = &uStack_260;
        (**(code **)(*uStack_1f0 + 0x18))(uStack_1f0,&uStack_1f0,&uStack_2b0,0xffffffff);
        FUN_10918eb6c(&uStack_1f0);
        adStack_1e0[0] = *(double *)(lVar29 + 8);
        uVar30 = *(ulong *)(lVar29 + 0x10);
        iVar28 = *(int *)(lVar29 + 0x18);
        uStack_1f0 = (long *)0x242ff0000;
        puStack_1b0 = &uStack_1e8;
        iVar23 = (int)(uVar30 >> 0x20);
        iVar24 = (int)uVar30;
        uStack_1e8 = (undefined8 **)CONCAT44(iVar24,iVar23);
        adStack_1e0[3] = 0.0;
        adStack_1e0[2] = 0.0;
        lStack_1b8 = 0;
        adStack_1e0[4] = 0.0;
        dVar25 = (double)(long)iVar24;
        dStack_198 = 0.0;
        dStack_1a0 = 0.0;
        pdStack_1a8 = &dStack_1a0;
        if (adStack_1e0[0] == 0.0) {
          adStack_1e0[1] = 0.0;
          dVar3 = 0.0;
          if ((long)iVar24 * (long)iVar23 != 0) goto LAB_1095b6a70;
        }
        dVar3 = dVar25;
        if (uVar30 >> 0x20 != 1) {
          dVar3 = (double)(long)iVar28;
        }
        dStack_1a0 = dVar25;
        if (iVar28 != 0) {
          dStack_1a0 = dVar3;
        }
        uVar4 = 0x42ff4000;
        if (dVar3 != dVar25 && iVar28 != 0) {
          uVar4 = 0x42ff0000;
        }
        uStack_1f0 = (long *)CONCAT44(2,uVar4);
        dStack_198 = 4.94065645841247e-324;
        adStack_1e0[3] = (double)((long)adStack_1e0[0] + (long)dStack_1a0 * ((long)uVar30 >> 0x20));
        adStack_1e0[2] = (double)(((long)adStack_1e0[3] - (long)dStack_1a0) + (long)dVar25);
        uVar30 = *(ulong *)(lVar29 + 0x10);
        uStack_310._0_4_ = 0x42ff0000;
        uStack_304 = 0;
        uStack_300 = 0;
        uStack_310._4_4_ = 0;
        uStack_308 = 0;
        puStack_2d0 = &uStack_308;
        uStack_2f4 = 0;
        uStack_2f0 = 0;
        uStack_2fc = 0;
        uStack_2f8 = 0;
        uStack_2e4 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        dStack_2d8 = 0.0;
        uStack_2e0 = 0;
        uStack_2dc = 0;
        alStack_2c0[0] = 0;
        alStack_2c0[1] = 0;
        dStack_210 = (double)(uVar30 >> 0x20 | uVar30 << 0x20);
        plStack_2c8 = alStack_2c0;
        adStack_1e0[1] = adStack_1e0[0];
        FUN_109a83fd0(&uStack_310,2,&dStack_210,0);
        uStack_318 = 0;
        auStack_328[0] = 0x1010000;
        puStack_320 = &uStack_1f0;
        auStack_340[0] = 0x2010000;
        uStack_330 = 0;
        uStack_348 = 0;
        auStack_358[0] = 0x1010000;
        puStack_350 = &uStack_3e0;
        uStack_360 = (undefined4)uVar30;
        uStack_35c = (undefined4)(uVar30 >> 0x20);
        dStack_208 = 0.0;
        dStack_210 = 0.0;
        uStack_1f8 = 0;
        dStack_200 = 0.0;
        puStack_338 = &uStack_310;
        FUN_109b1eb58(auStack_328,auStack_340,auStack_358,&uStack_360,1,0,&dStack_210);
        dStack_210 = 6.79038653266988e-312;
        lStack_410 = 0;
        uStack_408 = 0;
        iStack_400 = 0;
        ppuStack_418 = &PTR_FUN_110af4c80;
        func_0x00010938e870(&ppuStack_418,&dStack_210);
        lVar21 = 0;
        do {
          lVar29 = 0;
          do {
            *(undefined1 *)(lStack_410 + (long)iStack_400 * (long)(int)lVar21 + lVar29) =
                 *(undefined1 *)(CONCAT44(uStack_2fc,uStack_300) + lVar21 * *plStack_2c8 + lVar29);
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0x140);
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0x140);
        if (dStack_2d8 != 0.0) {
          piVar1 = (int *)((long)dStack_2d8 + 0x14);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_310);
          }
        }
        dStack_2d8 = 0.0;
        uStack_2f8 = 0;
        uStack_2f4 = 0;
        uStack_300 = 0;
        uStack_2fc = 0;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        uStack_2f0 = 0;
        uStack_2ec = 0;
        if (0 < uStack_310._4_4_) {
          lVar21 = 0;
          do {
            puStack_2d0[lVar21] = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_310._4_4_);
        }
        if (plStack_2c8 != alStack_2c0 && plStack_2c8 != (long *)0x0) {
          _free(plStack_2c8[-1]);
        }
        if (lStack_1b8 != 0) {
          piVar1 = (int *)(lStack_1b8 + 0x14);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_1f0);
          }
        }
        lStack_1b8 = 0;
        adStack_1e0[1] = 0.0;
        adStack_1e0[0] = 0.0;
        adStack_1e0[3] = 0.0;
        adStack_1e0[2] = 0.0;
        if (0 < uStack_1f0._4_4_) {
          lVar21 = 0;
          do {
            *(undefined4 *)((long)puStack_1b0 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_1f0._4_4_);
        }
        if (pdStack_1a8 != &dStack_1a0 && pdStack_1a8 != (double *)0x0) {
          _free(pdStack_1a8[-1]);
        }
        if (dStack_278 != 0.0) {
          piVar1 = (int *)((long)dStack_278 + 0x14);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_2b0);
          }
        }
        dStack_278 = 0.0;
        uStack_298 = 0;
        uStack_294 = 0;
        uStack_2a0 = 0;
        uStack_29c = 0;
        uStack_288 = 0;
        uStack_284 = 0;
        uStack_290 = 0;
        uStack_28c = 0;
        if (0 < uStack_2b0._4_4_) {
          lVar21 = 0;
          do {
            *(undefined4 *)((long)puStack_270 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_2b0._4_4_);
        }
        if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
          _free(puStack_268[-1]);
        }
        if (lStack_3a8 != 0) {
          piVar1 = (int *)(lStack_3a8 + 0x14);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_3e0);
          }
        }
        lStack_3a8 = 0;
        adStack_3d8[2] = 0.0;
        adStack_3d8[1] = 0.0;
        adStack_3d8[4] = 0.0;
        adStack_3d8[3] = 0.0;
        if (0 < uStack_3e0._4_4_) {
          lVar21 = 0;
          do {
            *(undefined4 *)((long)dStack_3a0 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_3e0._4_4_);
        }
        if (pdStack_398 != &dStack_390 && pdStack_398 != (double *)0x0) {
          _free(pdStack_398[-1]);
        }
        if (puStack_248 != (undefined8 *)0x0) {
          puStack_240 = puStack_248;
          __ZdlPv();
        }
        if (puStack_3f8 != (undefined8 *)0x0) {
          puStack_3f0 = puStack_3f8;
          __ZdlPv();
        }
        puVar18 = (undefined8 *)0x40;
        __Znwm();
        FUN_1094737f8();
        *puVar18 = &PTR_FUN_110af6758;
        puVar18[4] = (double)(int)uStack_408;
        puVar18[5] = (double)uStack_408._4_4_;
        puVar18[6] = dVar40 / (double)uStack_408._4_4_;
        *(undefined1 *)((long)puVar18 + 0x15) = *(undefined1 *)(*plVar27 + 0x15);
        FUN_1094a0de0(plVar27 + 2,puVar18);
        FUN_1094a09f0(plVar27 + 2,param_2);
        puVar19 = (undefined8 *)0x20;
        __Znwm();
        *puVar19 = &PTR_FUN_110af6c40;
        puVar19[1] = 0;
        puVar19[2] = 0;
        puVar19[3] = puVar18;
        plVar26 = (long *)plVar27[1];
        *plVar27 = (long)puVar18;
        plVar27[1] = (long)puVar19;
        if (plVar26 != (long *)0x0) {
          plVar2 = plVar26 + 1;
          do {
            lVar21 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
          }
        }
        *(undefined1 *)(plVar27 + 0x5e) = 0;
        ppuStack_418 = &PTR_FUN_110af4c80;
        if (lStack_410 != 0) {
          __ZdaPv();
        }
        iVar28 = (int)plVar27[0xc];
      }
    }
    uStack_1e8 = (undefined8 **)lStack_228;
    uStack_1f0 = (long *)lStack_230;
    adStack_1e0[1] = (double)lStack_218;
    adStack_1e0[0] = dStack_220;
    uStack_160 = (uint)(iVar28 != 2);
    uStack_118 = 0;
    lStack_158 = *param_3;
    uStack_138 = 0;
    *param_3 = 0;
    adStack_1e0[2] = dVar43;
    adStack_1e0[3] = dVar7;
    adStack_1e0[4] = dVar36;
    puStack_1b0 = puVar9;
    pdStack_1a8 = pdVar10;
    dStack_1a0 = dVar31;
    dStack_198 = dVar8;
    dStack_190 = dVar37;
    dStack_188 = dVar32;
    puStack_180 = puVar11;
    pdStack_178 = pdVar12;
    dStack_170 = dVar33;
    FUN_1095b6f60(auStack_130,param_3 + 5);
    FUN_1095b70cc(auStack_150,param_3 + 1);
    param_1[6] = (long)adStack_1e0[4];
    param_1[1] = (long)uStack_1e8;
    *param_1 = (long)uStack_1f0;
    param_1[3] = (long)adStack_1e0[1];
    param_1[2] = (long)adStack_1e0[0];
    param_1[5] = (long)adStack_1e0[3];
    param_1[4] = (long)adStack_1e0[2];
    param_1[0xd] = (long)dStack_188;
    param_1[0xc] = (long)dStack_190;
    param_1[0xf] = (long)pdStack_178;
    param_1[0xe] = (long)puStack_180;
    param_1[0x10] = (long)dStack_170;
    param_1[9] = (long)pdStack_1a8;
    param_1[8] = (long)puStack_1b0;
    param_1[0xb] = (long)dStack_198;
    param_1[10] = (long)dStack_1a0;
    *(uint *)(param_1 + 0x12) = uStack_160;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    param_1[0x13] = lStack_158;
    lStack_158 = 0;
    FUN_1095b6f60(param_1 + 0x18,auStack_130);
    FUN_1095b70cc(param_1 + 0x14,auStack_150);
    *(undefined1 *)(param_1 + 0x1c) = 1;
    FUN_1095b6cec(&lStack_158);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  dVar3 = adStack_1e0[0];
LAB_1095b6a70:
  adStack_1e0[0] = dVar3;
  puVar20 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar20 = 1;
  uStack_310 = puVar20 + 1;
  uStack_308 = 0x1c;
  uStack_304 = 0;
  *(undefined1 *)(puVar20 + 8) = 0;
  *(undefined8 *)(puVar20 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar20 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar20 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar20 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&uStack_310,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1095b6ad0);
  (*pcVar16)();
}



/* Entry: 1095b6bec; end: 1095b6c3f;  */

undefined8 * FUN_1095b6bec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_1095b6f60(param_1 + 5,param_2 + 5);
  FUN_1095b70cc(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



/* Entry: 1095b6c40; end: 1095b6cab;  */

undefined8 * FUN_1095b6c40(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  lVar2 = param_2[1];
  *param_1 = uVar5;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar5 = *param_2;
  }
  FUN_10949ef00(param_1 + 2,uVar5);
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return param_1;
}



/* Entry: 1095b6cac; end: 1095b6ceb;  */

void FUN_1095b6cac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109472658(lVar1 + 0x10);
    func_0x0001094725c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095b6cec; end: 1095b6d8f;  */

undefined8 * FUN_1095b6cec(undefined8 *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_1095b6d50;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1095b6d50:
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



/* Entry: 1095b6d90; end: 1095b6d97;  */

void FUN_1095b6d90(void)

{
  return;
}



/* Entry: 1095b6d98; end: 1095b6dbb;  */

void FUN_1095b6d98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110afdfd0;
  return;
}



/* Entry: 1095b6dbc; end: 1095b6dd3;  */

void FUN_1095b6dbc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110afdfd0;
  return;
}



/* Entry: 1095b6dd4; end: 1095b6e4b;  */

void FUN_1095b6dd4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_109472658(lVar1 + 0x10);
    func_0x0001094725c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095b6e4c; end: 1095b6e5f;  */

undefined ** FUN_1095b6e4c(void)

{
  return &PTR_DAT_110afe040;
}



/* Entry: 1095b6e60; end: 1095b6e83;  */

void FUN_1095b6e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110afe060;
  return;
}



/* Entry: 1095b6e84; end: 1095b6e9b;  */

void FUN_1095b6e84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110afe060;
  return;
}



/* Entry: 1095b6e9c; end: 1095b6f17;  */

undefined8 * FUN_1095b6e9c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x300;
  __Znwm();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10949f52c(puVar4 + 2,param_2 + 2);
  *(undefined1 *)(puVar4 + 0x5e) = *(undefined1 *)(param_2 + 0x5e);
  return puVar4;
}



/* Entry: 1095b6f18; end: 1095b6f53;  */

long FUN_1095b6f18(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe0d0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095b6f54; end: 1095b6f5f;  */

undefined ** FUN_1095b6f54(void)

{
  return &PTR_DAT_110afe0d0;
}



/* Entry: 1095b6f60; end: 1095b70cb;  */

void FUN_1095b6f60(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_b8;
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
  plVar5 = param_2;
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
      plVar5 = param_1;
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
  if ((int)plVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar6 = alStack_80;
  pcStack_48 = FUN_1095b70cc;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar5;
  plStack_60 = unaff_x20;
  plStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  if (plVar5 != plVar1) {
    plVar3 = (long *)plVar1[3];
    plVar7 = (long *)plVar5[3];
    if (plVar3 == plVar1) {
      if (plVar7 == plVar5) {
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_80);
        (**(code **)(*(long *)plVar1[3] + 0x20))();
        plVar1[3] = 0;
        (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],plVar1);
        (**(code **)(*(long *)plVar5[3] + 0x20))();
        plVar5[3] = 0;
        plVar1[3] = (long)plVar1;
        (**(code **)(alStack_80[0] + 0x18))(alStack_80);
        (**(code **)(alStack_80[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        plVar6 = (long *)plVar1[3];
        (**(code **)(*plVar6 + 0x20))();
        plVar1[3] = plVar5[3];
      }
      plVar5[3] = (long)plVar5;
      plVar1 = plVar6;
    }
    else if (plVar7 == plVar5) {
      plVar2 = plVar1;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar6 = (long *)plVar5[3];
      (**(code **)(*plVar6 + 0x20))();
      plVar5[3] = plVar1[3];
      plVar1[3] = (long)plVar1;
      plVar1 = plVar6;
    }
    else {
      plVar1[3] = (long)plVar7;
      plVar5[3] = (long)plVar3;
      plVar1 = plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  __ZNSt3__15mutex4lockEv(plVar1 + 6);
  uStack_b8 = *param_3;
  puVar4 = (undefined1 *)plVar1[5];
  FUN_1095b7584(puVar4,plVar2);
  *puVar4 = 7;
  uVar8 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar4 + 8) = uStack_b8;
  uStack_b8 = uVar8;
  FUN_109380ffc(&uStack_b8);
  __ZNSt3__15mutex6unlockEv(plVar1 + 6);
  return;
}


