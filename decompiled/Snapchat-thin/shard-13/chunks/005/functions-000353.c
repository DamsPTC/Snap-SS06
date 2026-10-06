/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a789020; end: 10a789103;  */

long FUN_10a789020(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xe8;
  FUN_10a044868(&lStack_28);
  func_0x00010a7b1c58(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010a7b1c58(*(undefined8 *)(param_1 + 0xc0));
  func_0x00010a363354(param_1 + 0xa0,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010a363354(param_1 + 0x88,*(undefined8 *)(param_1 + 0x90));
  lStack_28 = param_1 + 0x60;
  FUN_10a044868(&lStack_28);
  func_0x00010a7a3ed4(param_1 + 0x48);
  FUN_10a7a3f50(param_1 + 0x30);
  return param_1;
}



/* Entry: 10a789104; end: 10a7892ff;  */

long * FUN_10a789104(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  undefined1 uStack_4d;
  char cStack_49;
  undefined8 *puStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0xf0) == 0) {
    cStack_49 = '\x13';
    uStack_58 = 0x2e646568637461;
    uStack_51 = 0x6c736c67;
    uStack_60 = 0x424f425574786574;
    uStack_4d = 0;
    puVar5 = (undefined8 *)0x168;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110bc7ee0;
    puVar1 = puVar5 + 3;
    FUN_10ac5c330(puVar1,0,&uStack_60,1);
    puStack_40 = puVar1;
    plStack_38 = puVar5;
    FUN_10a363034(&puStack_40,puVar5 + 0xb,puVar1);
    plVar2 = plStack_38;
    puVar1 = puStack_40;
    puStack_40 = (undefined8 *)0x0;
    plStack_38 = (long *)0x0;
    plVar7 = *(long **)(param_1 + 0xf8);
    *(long **)(param_1 + 0xf8) = plVar2;
    *(undefined8 **)(param_1 + 0xf0) = puVar1;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar7 = plStack_38 + 1;
      do {
        lVar6 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
  }
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x100) = 1;
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x68))(*(long **)(param_1 + 0xf0),2);
  }
  return (long *)(param_1 + 0xf0);
}



/* Entry: 10a789300; end: 10a789927;  */

void FUN_10a789300(long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *****pppppuVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  long lVar24;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  ppppuStack_78 = (undefined8 *****)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar19 = (undefined8 *)param_3[4];
  puVar4 = (undefined8 *)param_3[5];
  if (puVar19 == puVar4) goto LAB_10a789880;
  uVar22 = 1;
  do {
    lVar10 = *param_4;
    if (lVar10 != param_4[1]) {
      do {
        if (*(long *)(lVar10 + 0x18) == puVar19[3]) {
          uVar5 = *(ushort *)(puVar19 + 4);
          uVar6 = *(ushort *)(lVar10 + 0x20);
          if (((uVar5 != uVar6) && (uVar5 != 8 || uVar6 != 9)) &&
             (((6 < uVar5 || (1 << (ulong)(uVar5 & 0x1f) & 0x4eU) == 0) || 6 < uVar6) ||
              (1 << (ulong)(uVar6 & 0x1f) & 0x4eU) == 0)) {
            uVar20 = uStack_70;
            if (-1 < (long)uStack_68) {
              uVar20 = uStack_68 >> 0x38;
            }
            puVar1 = &UNK_10f674def;
            if (uVar20 != 0) {
              puVar1 = &DAT_10f68f19e;
            }
            uVar2 = 0;
            if (uVar20 != 0) {
              uVar2 = 2;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppuStack_78,puVar1,uVar2);
            uVar20 = puVar19[1];
            puVar8 = (undefined8 *)*puVar19;
            if (-1 < (char)*(byte *)((long)puVar19 + 0x17)) {
              uVar20 = (ulong)*(byte *)((long)puVar19 + 0x17);
              puVar8 = puVar19;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppuStack_78,puVar8,uVar20);
          }
          break;
        }
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != param_4[1]);
    }
    puVar19 = puVar19 + 0xd;
  } while (puVar19 != puVar4);
  uVar20 = uStack_70;
  if (-1 < (long)uStack_68) {
    uVar20 = uStack_68 >> 0x38;
  }
  if (uVar20 == 0) goto LAB_10a789880;
  uVar20 = (*param_2 + 0x2853a3c667U ^ 0x9e3779b9) + 0x9e3779b9;
  uVar20 = (param_2[1] + uVar20 * 0x40 + (uVar20 >> 2) + 0x9e3779b9 ^ uVar20) + 0x9e3779b9;
  uVar20 = (param_2[2] + uVar20 * 0x40 + (uVar20 >> 2) + 0x9e3779b9 ^ uVar20) + 0x9e3779b9;
  uVar20 = ((ulong)*(uint *)(param_2 + 3) + uVar20 * 0x40 + (uVar20 >> 2) + 0x9e3779b9 ^ uVar20) +
           0x9e3779b9;
  uVar20 = (param_2[4] + uVar20 * 0x40 + (uVar20 >> 2) + 0x9e3779b9 ^ uVar20) + 0x9e3779b9;
  uVar20 = param_2[5] + uVar20 * 0x40 + (uVar20 >> 2) + 0x9e3779b9 ^ uVar20;
  uVar21 = *(ulong *)(param_1 + 0x110);
  if (uVar21 != 0) {
    uVar16 = uVar21 - 1;
    if ((uVar21 & uVar16) == 0) {
      uVar22 = uVar20 & uVar16;
    }
    else {
      uVar22 = uVar20;
      if (uVar21 <= uVar20) {
        uVar22 = 0;
        if (uVar21 != 0) {
          uVar22 = uVar20 / uVar21;
        }
        uVar22 = uVar20 - uVar22 * uVar21;
      }
    }
    plVar17 = *(long **)(*(long *)(param_1 + 0x108) + uVar22 * 8);
    if (plVar17 != (long *)0x0) {
      do {
        while( true ) {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_10a789594;
          uVar18 = plVar17[1];
          if (uVar18 != uVar20) break;
          if ((((*param_2 == plVar17[2]) && (*(uint *)(param_2 + 3) == *(uint *)(plVar17 + 5))) &&
              ((param_2[1] == plVar17[3] &&
               ((param_2[2] == plVar17[4] && (param_2[4] == plVar17[6])))))) &&
             (param_2[5] == plVar17[7])) goto LAB_10a789880;
        }
        if ((uVar21 & uVar16) == 0) {
          uVar18 = uVar18 & uVar16;
        }
        else if (uVar21 <= uVar18) {
          uVar15 = 0;
          if (uVar21 != 0) {
            uVar15 = uVar18 / uVar21;
          }
          uVar18 = uVar18 - uVar15 * uVar21;
        }
      } while (uVar18 == uVar22);
    }
  }
LAB_10a789594:
  plVar17 = (long *)0x40;
  __Znwm();
  *plVar17 = 0;
  plVar17[1] = uVar20;
  lVar10 = *param_2;
  lVar24 = param_2[3];
  lVar11 = param_2[2];
  plVar17[3] = param_2[1];
  plVar17[2] = lVar10;
  plVar17[5] = lVar24;
  plVar17[4] = lVar11;
  lVar10 = param_2[4];
  plVar17[7] = param_2[5];
  plVar17[6] = lVar10;
  fVar23 = (float)(*(long *)(param_1 + 0x120) + 1);
  if ((uVar21 == 0) || (*(float *)(param_1 + 0x128) * (float)uVar21 < fVar23)) {
    uVar22 = 1;
    if (2 < uVar21) {
      uVar22 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar22 = uVar22 | uVar21 << 1;
    uVar16 = (ulong)(fVar23 / *(float *)(param_1 + 0x128));
    if (uVar22 <= uVar16) {
      uVar22 = uVar16;
    }
    if (uVar22 - 1 == 0) {
      uVar22 = 2;
    }
    else if ((uVar22 & uVar22 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar21 = *(ulong *)(param_1 + 0x110);
    }
    if (uVar21 < uVar22) {
LAB_10a789638:
      if (uVar22 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10a7898f4);
        (*pcVar9)();
      }
      lVar10 = uVar22 << 3;
      __Znwm();
      lVar11 = *(long *)(param_1 + 0x108);
      *(long *)(param_1 + 0x108) = lVar10;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      uVar21 = 0;
      *(ulong *)(param_1 + 0x110) = uVar22;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x108) + uVar21 * 8) = 0;
        uVar21 = uVar21 + 1;
      } while (uVar22 != uVar21);
      plVar12 = *(long **)(param_1 + 0x118);
      uVar21 = uVar22;
      if (plVar12 != (long *)0x0) {
        uVar16 = plVar12[1];
        uVar18 = uVar22 - 1;
        if ((uVar22 & uVar18) == 0) {
          uVar16 = uVar16 & uVar18;
        }
        else if (uVar22 <= uVar16) {
          uVar15 = 0;
          if (uVar22 != 0) {
            uVar15 = uVar16 / uVar22;
          }
          uVar16 = uVar16 - uVar15 * uVar22;
        }
        *(long *)(*(long *)(param_1 + 0x108) + uVar16 * 8) = param_1 + 0x118;
        plVar13 = (long *)*plVar12;
        while (plVar13 != (long *)0x0) {
          uVar15 = plVar13[1];
          if ((uVar22 & uVar18) == 0) {
            uVar15 = uVar15 & uVar18;
          }
          else if (uVar22 <= uVar15) {
            uVar7 = 0;
            if (uVar22 != 0) {
              uVar7 = uVar15 / uVar22;
            }
            uVar15 = uVar15 - uVar7 * uVar22;
          }
          plVar14 = plVar13;
          if (uVar15 != uVar16) {
            lVar10 = *(long *)(param_1 + 0x108);
            if (*(long *)(lVar10 + uVar15 * 8) == 0) {
              *(long **)(lVar10 + uVar15 * 8) = plVar12;
              uVar16 = uVar15;
            }
            else {
              *plVar12 = *plVar13;
              *plVar13 = **(undefined8 **)(lVar10 + uVar15 * 8);
              **(long **)(lVar10 + uVar15 * 8) = (long)plVar13;
              plVar14 = plVar12;
            }
          }
          plVar12 = plVar14;
          plVar13 = (long *)*plVar14;
        }
      }
    }
    else if (uVar22 < uVar21) {
      uVar16 = (ulong)((float)*(ulong *)(param_1 + 0x120) / *(float *)(param_1 + 0x128));
      if ((uVar21 < 3) || ((uVar21 & uVar21 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar16) {
        uVar16 = 1L << (-LZCOUNT(uVar16 - 1) & 0x3fU);
      }
      if (uVar22 <= uVar16) {
        uVar22 = uVar16;
      }
      if (uVar22 < uVar21) {
        if (uVar22 != 0) goto LAB_10a789638;
        lVar10 = *(long *)(param_1 + 0x108);
        *(undefined8 *)(param_1 + 0x108) = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x110) = 0;
        uVar21 = 0;
      }
      else {
        uVar21 = *(ulong *)(param_1 + 0x110);
      }
    }
    if ((uVar21 & uVar21 - 1) == 0) {
      uVar22 = uVar21 - 1 & uVar20;
    }
    else {
      uVar22 = uVar20;
      if (uVar21 <= uVar20) {
        uVar22 = 0;
        if (uVar21 != 0) {
          uVar22 = uVar20 / uVar21;
        }
        uVar22 = uVar20 - uVar22 * uVar21;
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0x108);
  plVar12 = *(long **)(lVar10 + uVar22 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar17 = *(long *)(param_1 + 0x118);
    *(long **)(param_1 + 0x118) = plVar17;
    *(long *)(lVar10 + uVar22 * 8) = param_1 + 0x118;
    if (*plVar17 != 0) {
      uVar22 = *(ulong *)(*plVar17 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar22 = uVar22 & uVar21 - 1;
      }
      else if (uVar21 <= uVar22) {
        uVar20 = 0;
        if (uVar21 != 0) {
          uVar20 = uVar22 / uVar21;
        }
        uVar22 = uVar22 - uVar20 * uVar21;
      }
      plVar12 = (long *)(*(long *)(param_1 + 0x108) + uVar22 * 8);
      goto LAB_10a789814;
    }
  }
  else {
    *plVar17 = *plVar12;
LAB_10a789814:
    *plVar12 = (long)plVar17;
  }
  *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    plVar17 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar17 = param_3;
    }
    pppppuVar3 = (undefined8 *****)ppppuStack_78;
    if (-1 < (long)uStack_68) {
      pppppuVar3 = &ppppuStack_78;
    }
    func_0x00010ae06f08(1,2,&UNK_10f675470,&UNK_10f6757cb,0x323,&UNK_10f675886,param_7,param_8,
                        plVar17,pppppuVar3);
  }
LAB_10a789880:
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppppuStack_78);
  }
  return;
}



/* Entry: 10a789928; end: 10a78c403;  */

/* WARNING: Removing unreachable block (ram,0x00010a78acf0) */
/* WARNING: Removing unreachable block (ram,0x00010a78a530) */
/* WARNING: Removing unreachable block (ram,0x00010a789d98) */
/* WARNING: Removing unreachable block (ram,0x00010a78a900) */
/* WARNING: Removing unreachable block (ram,0x00010a78b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010a78ad00) */
/* WARNING: Removing unreachable block (ram,0x00010a78ad10) */
/* WARNING: Removing unreachable block (ram,0x00010a78b964) */

undefined8
FUN_10a789928(long ******param_1,long *param_2,uint param_3,long *******param_4,long *param_5,
             long param_6)

{
  bool bVar1;
  long ****pppplVar2;
  long *plVar3;
  long *******ppppppplVar4;
  long *****ppppplVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  long *******ppppppplVar14;
  long *****ppppplVar15;
  code *pcVar16;
  bool bVar17;
  ulong uVar18;
  long ****pppplVar19;
  long *******ppppppplVar20;
  long *plVar21;
  undefined7 *puVar22;
  long *******ppppppplVar23;
  long ******pppppplVar24;
  long *******ppppppplVar25;
  uint uVar26;
  long *plVar27;
  int *piVar28;
  long ***ppplVar29;
  undefined *puVar30;
  long *******ppppppplVar31;
  long *plVar32;
  long ******pppppplVar33;
  undefined4 uVar34;
  undefined8 *puVar35;
  long ******pppppplVar36;
  long *******ppppppplVar37;
  long *******ppppppplVar38;
  long *******ppppppplVar39;
  long *******ppppppplVar40;
  long *******ppppppplVar41;
  ulong uVar42;
  long lVar43;
  uint uVar44;
  undefined4 uVar45;
  long lVar46;
  uint uVar47;
  long lVar48;
  long *****ppppplVar49;
  long *******ppppppplVar50;
  undefined **ppuVar51;
  long *******unaff_x25;
  long *******ppppppplVar52;
  uint uVar53;
  long ******pppppplVar54;
  int iVar55;
  undefined8 uVar56;
  long ******pppppplVar57;
  uint uStack_66c;
  long ******pppppplStack_668;
  ulong uStack_660;
  long ******pppppplStack_658;
  long ******pppppplStack_610;
  long *****ppppplStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  byte bStack_5f0;
  undefined8 uStack_5d0;
  long ******pppppplStack_5c8;
  long *****ppppplStack_5b8;
  undefined1 uStack_5ad;
  undefined1 auStack_5ac [2];
  undefined1 uStack_5aa;
  undefined1 uStack_5a9;
  long ****pppplStack_5a8;
  long *****ppppplStack_5a0;
  long *****ppppplStack_598;
  long *****ppppplStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *****ppppplStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined1 uStack_554;
  long lStack_550;
  long ******pppppplStack_548;
  long *****ppppplStack_540;
  ulong uStack_538;
  long lStack_530;
  long ****pppplStack_528;
  long *****ppppplStack_520;
  long lStack_518;
  undefined8 uStack_510;
  uint uStack_508;
  undefined1 uStack_504;
  undefined8 uStack_500;
  long ******pppppplStack_4f8;
  long ******apppppplStack_4f0 [2];
  undefined1 auStack_4e0 [8];
  long lStack_4d8;
  long *****ppppplStack_4d0;
  long *****ppppplStack_4c8;
  long *****ppppplStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  long ******pppppplStack_470;
  long ***ppplStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  long *****ppppplStack_440;
  long *****ppppplStack_438;
  long *****ppppplStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long *****ppppplStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long ******pppppplStack_3e8;
  long *****ppppplStack_3e0;
  long ******pppppplStack_3d8;
  long *****ppppplStack_3d0;
  long ******pppppplStack_3c8;
  long *plStack_3c0;
  long lStack_3b8;
  undefined2 uStack_380;
  undefined1 uStack_37e;
  byte bStack_378;
  undefined8 uStack_370;
  long ******pppppplStack_368;
  long *****ppppplStack_360;
  byte bStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  char *pcStack_340;
  undefined1 *puStack_338;
  uint *puStack_330;
  undefined1 *puStack_328;
  undefined1 auStack_320 [24];
  long ****pppplStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined5 uStack_2f0;
  undefined3 uStack_2eb;
  uint uStack_2e8;
  undefined1 uStack_2e4;
  long lStack_2e0;
  long lStack_2d8;
  undefined5 uStack_2d0;
  undefined3 uStack_2cb;
  uint uStack_2c8;
  char cStack_2c4;
  ulong uStack_2c0;
  long ******pppppplStack_2b8;
  undefined8 uStack_2b0;
  char cStack_2a1;
  long ******pppppplStack_2a0;
  long lStack_298;
  undefined5 uStack_290;
  undefined3 uStack_28b;
  uint uStack_288;
  char cStack_284;
  uint uStack_274;
  long *****ppppplStack_270;
  long *****ppppplStack_268;
  undefined5 uStack_260;
  undefined3 uStack_25b;
  uint uStack_258;
  undefined1 uStack_254;
  long *****ppppplStack_250;
  long lStack_248;
  undefined5 uStack_240;
  undefined3 uStack_23b;
  uint uStack_238;
  undefined1 uStack_234;
  long *plStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  long ****pppplStack_1e0;
  long ******pppppplStack_1d8;
  long ******pppppplStack_1d0;
  undefined8 uStack_1c8;
  long *****ppppplStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  long ****pppplStack_1a8;
  long ******pppppplStack_1a0;
  long ******pppppplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_184 [4];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  long lStack_150;
  long *****ppppplStack_148;
  long ******pppppplStack_140;
  ulong uStack_138;
  float fStack_130;
  long ******pppppplStack_120;
  long ******pppppplStack_118;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  byte bStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x1e8))(&pppppplStack_120,param_2);
  uStack_138 = 0;
  pppppplStack_140 = (long ******)0x0;
  ppppplStack_148 = (long *****)0x0;
  lStack_150 = 0;
  fStack_130 = 1.0;
  FUN_10a7b1cdc(&lStack_150,
                (long)(float)(ulong)(((long)pppppplStack_118 - (long)pppppplStack_120 >> 4) *
                                    0x6db6db6db6db6db7));
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_160 = 0x3f800000;
  func_0x00010787b6c0(&uStack_180,
                      (long)(float)(ulong)(((long)pppppplStack_118 - (long)pppppplStack_120 >> 4) *
                                          0x6db6db6db6db6db7));
  ppuVar51 = (undefined **)pppppplStack_118;
  if (pppppplStack_120 != pppppplStack_118) {
    ppppppplVar52 = (long *******)&uStack_e0;
    ppppppplVar20 = (long *******)pppppplStack_120;
    ppppppplVar50 = param_4;
    do {
      pppppplVar24 = (long ******)(long)*(char *)((long)ppppppplVar20 + 0x17);
      if ((long)pppppplVar24 < 0) {
        pppppplVar24 = ppppppplVar20[1];
      }
      if (pppppplVar24 == (long ******)0x0) {
LAB_10a78a214:
        uVar56 = 3;
        goto LAB_10a78a5d8;
      }
      pppppplVar24 = (long ******)(long)*(char *)((long)ppppppplVar20 + 0x37);
      if ((long)pppppplVar24 < 0) {
        pppppplVar24 = ppppppplVar20[5];
      }
      if (pppppplVar24 == (long ******)0x0) goto LAB_10a78a214;
      pppppplVar24 = (long ******)(long)*(char *)((long)ppppppplVar20 + 0x57);
      if ((long)pppppplVar24 < 0) {
        pppppplVar24 = ppppppplVar20[9];
      }
      if (((pppppplVar24 == (long ******)0x0) ||
          (uVar53 = *(uint *)(ppppppplVar20 + 0xb), uVar53 - 0x4001 < 0xffffc000)) ||
         ((long ******)0x4000 < ppppppplVar20[0xd])) goto LAB_10a78a214;
      uVar47 = 0;
      uVar26 = (uint)ppppppplVar20[0xd];
      if (uVar53 != 0) {
        uVar47 = uVar26 / uVar53;
      }
      if (uVar26 != uVar47 * uVar53) goto LAB_10a78a214;
      uStack_e0 = (long *******)ppppppplVar20[3];
      puVar35 = &uStack_e0;
      func_0x000107912f84(&uStack_180,puVar35,&uStack_e0);
      if (((ulong)puVar35 & 1) == 0) goto LAB_10a78a214;
      FUN_10a776c90();
      pppppplVar24 = ppppppplVar20[7];
      if (pppppplVar24 == pppppplRam0000000113835540) goto LAB_10a78a214;
      ppppppplVar25 = ppppppplVar20 + 8;
      unaff_x25 = (long *******)ppppppplVar20[0xd];
      uVar53 = *(uint *)(ppppppplVar20 + 0xb);
      pppppplVar54 = (long ******)0x0;
      if ((ulong)uVar53 != 0) {
        pppppplVar54 = (long ******)((ulong)unaff_x25 / (ulong)uVar53);
      }
      if ((long ******)ppppplStack_148 != (long ******)0x0) {
        puVar30 = (undefined *)((long)ppppplStack_148 + -1);
        if (((ulong)ppppplStack_148 & (ulong)puVar30) == 0) {
          pppppplVar33 = (long ******)((ulong)puVar30 & (ulong)pppppplVar24);
        }
        else {
          pppppplVar33 = pppppplVar24;
          if (ppppplStack_148 <= pppppplVar24) {
            uVar18 = 0;
            if ((long ******)ppppplStack_148 != (long ******)0x0) {
              uVar18 = (ulong)pppppplVar24 / (ulong)ppppplStack_148;
            }
            pppppplVar33 = (long ******)((long)pppppplVar24 - uVar18 * (long)ppppplStack_148);
          }
        }
        puVar35 = *(undefined8 **)(lStack_150 + (long)pppppplVar33 * 8);
        if (puVar35 != (undefined8 *)0x0) {
          for (ppppppplVar50 = (long *******)*puVar35; ppppppplVar50 != (long *******)0x0;
              ppppppplVar50 = (long *******)*ppppppplVar50) {
            pppppplVar36 = ppppppplVar50[1];
            if (pppppplVar36 == pppppplVar24) {
              if (ppppppplVar50[5] == pppppplVar24) {
                if (*(uint *)(ppppppplVar50 + 6) != uVar53) goto LAB_10a78a214;
                bVar8 = *(byte *)((long)ppppppplVar50 + 0x57);
                pppppplVar24 = ppppppplVar50[9];
                if (-1 < (char)bVar8) {
                  pppppplVar24 = (long ******)(ulong)bVar8;
                }
                bVar9 = *(byte *)((long)ppppppplVar20 + 0x57);
                pppppplVar33 = ppppppplVar20[9];
                if (-1 < (char)bVar9) {
                  pppppplVar33 = (long ******)(ulong)bVar9;
                }
                if (pppppplVar24 != pppppplVar33) goto LAB_10a78a214;
                ppppppplVar38 = (long *******)ppppppplVar50[8];
                if (-1 < (char)bVar8) {
                  ppppppplVar38 = ppppppplVar50 + 8;
                }
                ppppppplVar31 = (long *******)*ppppppplVar25;
                if (-1 < (char)bVar9) {
                  ppppppplVar31 = ppppppplVar25;
                }
                _memcmp(ppppppplVar38,ppppppplVar31);
                if (((int)ppppppplVar38 != 0) ||
                   ((long ******)(0x4000 - (long)unaff_x25) < ppppppplVar50[7])) goto LAB_10a78a214;
                ppppppplVar50[7] = (long ******)((long)ppppppplVar50[7] + (long)unaff_x25);
                *(int *)((long)ppppppplVar50 + 0x34) =
                     *(int *)((long)ppppppplVar50 + 0x34) + (int)pppppplVar54;
                goto LAB_10a789da0;
              }
            }
            else {
              if (((ulong)ppppplStack_148 & (ulong)puVar30) == 0) {
                pppppplVar36 = (long ******)((ulong)pppppplVar36 & (ulong)puVar30);
              }
              else if (ppppplStack_148 <= pppppplVar36) {
                uVar18 = 0;
                if ((long ******)ppppplStack_148 != (long ******)0x0) {
                  uVar18 = (ulong)pppppplVar36 / (ulong)ppppplStack_148;
                }
                pppppplVar36 = (long ******)((long)pppppplVar36 - uVar18 * (long)ppppplStack_148);
              }
              if (pppppplVar36 != pppppplVar33) break;
            }
          }
        }
      }
      uStack_e0 = (long *******)CONCAT44((int)pppppplVar54,uVar53);
      uStack_d8 = SUB87(unaff_x25,0);
      uStack_d1 = (undefined1)((ulong)unaff_x25 >> 0x38);
      if (*(char *)((long)ppppppplVar20 + 0x57) < '\0') {
        func_0x000107c3192c(&uStack_d0,ppppppplVar20[8],ppppppplVar20[9]);
        pppppplVar24 = ppppppplVar20[7];
        pppppplVar33 = (long ******)ppppplStack_148;
      }
      else {
        uStack_c8 = ppppppplVar20[9];
        uStack_d0 = SUB87(*ppppppplVar25,0);
        uStack_c9 = (undefined1)((ulong)*ppppppplVar25 >> 0x38);
        auStack_c0 = (undefined1  [8])ppppppplVar20[10];
        pppppplVar33 = (long ******)ppppplStack_148;
      }
      ppppplStack_148 = (long *****)pppppplVar33;
      if (pppppplVar33 != (long ******)0x0) {
        puVar30 = (undefined *)((long)pppppplVar33 + -1);
        if (((ulong)pppppplVar33 & (ulong)puVar30) == 0) {
          pppppplVar54 = (long ******)((ulong)puVar30 & (ulong)pppppplVar24);
        }
        else {
          pppppplVar54 = pppppplVar24;
          if (pppppplVar33 <= pppppplVar24) {
            uVar18 = 0;
            if (pppppplVar33 != (long ******)0x0) {
              uVar18 = (ulong)pppppplVar24 / (ulong)pppppplVar33;
            }
            pppppplVar54 = (long ******)((long)pppppplVar24 - uVar18 * (long)pppppplVar33);
          }
        }
        plVar27 = *(long **)(lStack_150 + (long)pppppplVar54 * 8);
        if (plVar27 != (long *)0x0) {
          do {
            while( true ) {
              plVar27 = (long *)*plVar27;
              if (plVar27 == (long *)0x0) goto LAB_10a789c18;
              pppppplVar36 = (long ******)plVar27[1];
              if (pppppplVar36 != pppppplVar24) break;
              if ((long ******)plVar27[5] == pppppplVar24) goto LAB_10a789da0;
            }
            if (((ulong)pppppplVar33 & (ulong)puVar30) == 0) {
              pppppplVar36 = (long ******)((ulong)pppppplVar36 & (ulong)puVar30);
            }
            else if (pppppplVar33 <= pppppplVar36) {
              uVar18 = 0;
              if (pppppplVar33 != (long ******)0x0) {
                uVar18 = (ulong)pppppplVar36 / (ulong)pppppplVar33;
              }
              pppppplVar36 = (long ******)((long)pppppplVar36 - uVar18 * (long)pppppplVar33);
            }
          } while (pppppplVar36 == pppppplVar54);
        }
      }
LAB_10a789c18:
      unaff_x25 = (long *******)0x58;
      __Znwm();
      lStack_3b8 = 0;
      *unaff_x25 = (long ******)0x0;
      unaff_x25[1] = pppppplVar24;
      pppppplStack_3c8 = (long ******)unaff_x25;
      plStack_3c0 = &lStack_150;
      if (*(char *)((long)ppppppplVar20 + 0x37) < '\0') {
        func_0x000107c3192c(unaff_x25 + 2,ppppppplVar20[4],ppppppplVar20[5]);
        pppppplVar36 = ppppppplVar20[7];
      }
      else {
        pppppplVar57 = ppppppplVar20[5];
        pppppplVar36 = ppppppplVar20[4];
        unaff_x25[4] = ppppppplVar20[6];
        unaff_x25[3] = pppppplVar57;
        unaff_x25[2] = pppppplVar36;
        pppppplVar36 = pppppplVar24;
      }
      unaff_x25[5] = pppppplVar36;
      unaff_x25[7] = (long ******)CONCAT17(uStack_d1,uStack_d8);
      unaff_x25[6] = (long ******)uStack_e0;
      unaff_x25[9] = uStack_c8;
      unaff_x25[8] = (long ******)CONCAT17(uStack_c9,uStack_d0);
      unaff_x25[10] = (long ******)auStack_c0;
      uStack_d0 = 0;
      uStack_c9 = 0;
      uStack_c8 = (long ******)0x0;
      auStack_c0 = (undefined1  [8])0x0;
      lStack_3b8 = CONCAT71(lStack_3b8._1_7_,1);
      if ((pppppplVar33 == (long ******)0x0) ||
         (fStack_130 * (float)pppppplVar33 < (float)(uStack_138 + 1))) {
        uVar18 = 1;
        if ((long ******)0x2 < pppppplVar33) {
          uVar18 = (ulong)(((ulong)pppppplVar33 & (ulong)((long)pppppplVar33 + -1)) != 0);
        }
        uVar18 = uVar18 | (long)pppppplVar33 << 1;
        uVar42 = (ulong)((float)(uStack_138 + 1) / fStack_130);
        if (uVar18 <= uVar42) {
          uVar18 = uVar42;
        }
        FUN_10a7b1cdc(&lStack_150,uVar18);
        pppppplVar33 = (long ******)ppppplStack_148;
        if (((ulong)ppppplStack_148 & (ulong)((long)ppppplStack_148 + -1)) == 0) {
          pppppplVar54 = (long ******)((ulong)((long)ppppplStack_148 + -1) & (ulong)pppppplVar24);
        }
        else {
          pppppplVar54 = pppppplVar24;
          if (ppppplStack_148 <= pppppplVar24) {
            uVar18 = 0;
            if ((long ******)ppppplStack_148 != (long ******)0x0) {
              uVar18 = (ulong)pppppplVar24 / (ulong)ppppplStack_148;
            }
            pppppplVar54 = (long ******)((long)pppppplVar24 - uVar18 * (long)ppppplStack_148);
          }
        }
      }
      plVar27 = *(long **)(lStack_150 + (long)pppppplVar54 * 8);
      if (plVar27 == (long *)0x0) {
        *unaff_x25 = pppppplStack_140;
        *(long ********)(lStack_150 + (long)pppppplVar54 * 8) = &pppppplStack_140;
        pppppplStack_140 = (long ******)unaff_x25;
        if (*unaff_x25 != (long ******)0x0) {
          pppppplVar24 = (long ******)(*unaff_x25)[1];
          if (((ulong)pppppplVar33 & (ulong)((long)pppppplVar33 + -1)) == 0) {
            pppppplVar24 = (long ******)((ulong)pppppplVar24 & (ulong)((long)pppppplVar33 + -1));
          }
          else if (pppppplVar33 <= pppppplVar24) {
            uVar18 = 0;
            if (pppppplVar33 != (long ******)0x0) {
              uVar18 = (ulong)pppppplVar24 / (ulong)pppppplVar33;
            }
            pppppplVar24 = (long ******)((long)pppppplVar24 - uVar18 * (long)pppppplVar33);
          }
          *(long ********)(lStack_150 + (long)pppppplVar24 * 8) = unaff_x25;
        }
      }
      else {
        *unaff_x25 = (long ******)*plVar27;
        *plVar27 = (long)unaff_x25;
      }
      pppppplStack_3c8 = (long ******)0x0;
      uStack_138 = uStack_138 + 1;
      FUN_10a7b1eac(&pppppplStack_3c8);
LAB_10a789da0:
      pppppplVar24 = pppppplStack_120;
      ppppppplVar20 = ppppppplVar20 + 0xe;
    } while (ppppppplVar20 != (long *******)ppuVar51);
    if ((long)pppppplStack_118 - (long)pppppplStack_120 != 0) {
      uVar42 = ((long)pppppplStack_118 - (long)pppppplStack_120 >> 4) * 0x6db6db6db6db6db7;
      uVar18 = 0;
      do {
        uStack_660 = uVar18 + 1;
        if (uStack_660 < uVar42) {
          uVar53 = 0;
          if (*(uint *)(pppppplVar24 + uVar18 * 0xe + 0xb) != 0) {
            uVar53 = 0x4000 / *(uint *)(pppppplVar24 + uVar18 * 0xe + 0xb);
          }
          ppppppplVar52 = (long *******)(pppppplVar24 + uVar18 * 0xe + 8);
          bVar8 = *(byte *)((long)pppppplVar24 + uVar18 * 0x70 + 0x57);
          unaff_x25 = (long *******)(ulong)bVar8;
          pppppplStack_658 = (long ******)pppppplVar24[uVar18 * 0xe + 9];
          ppppppplVar20 = (long *******)pppppplStack_658;
          if (-1 < (char)bVar8) {
            ppppppplVar20 = unaff_x25;
          }
          pppppplStack_668 = (long ******)((long)ppppppplVar20 + -1);
          uVar18 = uStack_660;
          do {
            ppppppplVar50 = (long *******)(pppppplVar24 + uVar18 * 0xe + 8);
            bVar9 = *(byte *)((long)pppppplVar24 + uVar18 * 0x70 + 0x57);
            uVar47 = (uint)(char)bVar9;
            ppuVar51 = (undefined **)(ulong)uVar47;
            ppppppplVar25 = (long *******)pppppplVar24[uVar18 * 0xe + 9];
            if (-1 < (int)uVar47) {
              ppppppplVar25 = (long *******)(ulong)bVar9;
            }
            if (ppppppplVar20 == ppppppplVar25) {
              ppppppplVar38 = (long *******)*ppppppplVar52;
              if (-1 < (char)bVar8) {
                ppppppplVar38 = ppppppplVar52;
              }
              ppppppplVar31 = (long *******)*ppppppplVar50;
              if (-1 < (int)uVar47) {
                ppppppplVar31 = ppppppplVar50;
              }
              _memcmp(ppppppplVar38,ppppppplVar31,ppppppplVar20);
              bVar17 = (int)ppppppplVar38 == 0;
            }
            else {
              bVar17 = false;
            }
            ppppppplVar31 = ppppppplVar52;
            ppppppplVar38 = unaff_x25;
            if ((char)bVar8 < '\0') {
              ppppppplVar31 = (long *******)*ppppppplVar52;
              ppppppplVar38 = (long *******)pppppplStack_658;
            }
            ppppppplVar4 = (long *******)*ppppppplVar50;
            if (-1 < (int)uVar47) {
              ppppppplVar4 = ppppppplVar50;
            }
            if (ppppppplVar25 <= ppppppplVar38) {
              ppppppplVar38 = ppppppplVar25;
            }
            ppppppplVar37 = (long *******)((long)ppppppplVar31 + (long)ppppppplVar38);
            ppppppplVar39 = ppppppplVar37;
            if (ppppppplVar38 != (long *******)0x0) {
              ppppppplVar38 = ppppppplVar31;
              ppppppplVar40 = ppppppplVar31;
              ppppppplVar41 = ppppppplVar37;
              do {
                while (ppppppplVar40 = (long *******)((long)ppppppplVar40 + 1),
                      ppppppplVar23 = ppppppplVar4, ppppppplVar14 = ppppppplVar25,
                      *(char *)ppppppplVar38 == *(char *)ppppppplVar4) {
                  do {
                    ppppppplVar23 = (long *******)((long)ppppppplVar23 + 1);
                    ppppppplVar39 = ppppppplVar38;
                    if ((long *******)((long)ppppppplVar14 + -1) == (long *******)0x0) break;
                    ppppppplVar39 = ppppppplVar41;
                    if (ppppppplVar40 == ppppppplVar37) goto LAB_10a789ffc;
                    cVar11 = *(char *)ppppppplVar40;
                    ppppppplVar40 = (long *******)((long)ppppppplVar40 + 1);
                    ppppppplVar14 = (long *******)((long)ppppppplVar14 + -1);
                  } while (cVar11 == *(char *)ppppppplVar23);
                  ppppppplVar38 = (long *******)((long)ppppppplVar38 + 1);
                  ppppppplVar40 = ppppppplVar38;
                  ppppppplVar41 = ppppppplVar39;
                  if (ppppppplVar38 == ppppppplVar37) goto LAB_10a789ffc;
                }
                ppppppplVar38 = (long *******)((long)ppppppplVar38 + 1);
                ppppppplVar39 = ppppppplVar41;
              } while (ppppppplVar38 != ppppppplVar37);
            }
LAB_10a789ffc:
            if ((ppppppplVar39 == ppppppplVar37 && ppppppplVar25 != (long *******)0x0) ||
               (ppppppplVar39 != ppppppplVar31)) {
              ppppppplVar38 = (long *******)*ppppppplVar52;
              if (-1 < (char)bVar8) {
                ppppppplVar38 = ppppppplVar52;
              }
              if (ppppppplVar20 <= ppppppplVar25) {
                ppppppplVar25 = ppppppplVar20;
              }
              ppppppplVar31 = (long *******)((long)ppppppplVar4 + (long)ppppppplVar25);
              ppppppplVar37 = ppppppplVar31;
              if (ppppppplVar25 != (long *******)0x0) {
                ppppppplVar25 = ppppppplVar4;
                ppppppplVar39 = ppppppplVar4;
                ppppppplVar40 = ppppppplVar31;
                do {
                  while (ppppppplVar39 = (long *******)((long)ppppppplVar39 + 1),
                        ppppppplVar23 = (long *******)pppppplStack_668,
                        ppppppplVar41 = ppppppplVar38,
                        *(char *)ppppppplVar25 == *(char *)ppppppplVar38) {
                    do {
                      ppppppplVar41 = (long *******)((long)ppppppplVar41 + 1);
                      ppppppplVar37 = ppppppplVar25;
                      if (ppppppplVar23 == (long *******)0x0) break;
                      ppppppplVar37 = ppppppplVar40;
                      if (ppppppplVar39 == ppppppplVar31) goto LAB_10a78a0ac;
                      cVar11 = *(char *)ppppppplVar39;
                      ppppppplVar39 = (long *******)((long)ppppppplVar39 + 1);
                      ppppppplVar23 = (long *******)((long)ppppppplVar23 + -1);
                    } while (cVar11 == *(char *)ppppppplVar41);
                    ppppppplVar25 = (long *******)((long)ppppppplVar25 + 1);
                    ppppppplVar39 = ppppppplVar25;
                    ppppppplVar40 = ppppppplVar37;
                    if (ppppppplVar25 == ppppppplVar31) goto LAB_10a78a0ac;
                  }
                  ppppppplVar25 = (long *******)((long)ppppppplVar25 + 1);
                  ppppppplVar37 = ppppppplVar40;
                } while (ppppppplVar25 != ppppppplVar31);
              }
LAB_10a78a0ac:
              bVar1 = ppppppplVar20 != (long *******)0x0 && ppppppplVar37 == ppppppplVar31 ||
                      ppppppplVar37 != ppppppplVar4;
            }
            else {
              bVar1 = false;
            }
            if (!(bool)(bVar17 | bVar1)) goto LAB_10a78a214;
            uVar47 = 0;
            if (*(uint *)(pppppplVar24 + uVar18 * 0xe + 0xb) != 0) {
              uVar47 = 0x4000 / *(uint *)(pppppplVar24 + uVar18 * 0xe + 0xb);
            }
            bVar1 = false;
            if (uVar53 != uVar47) {
              bVar1 = bVar17;
            }
            if (bVar1) goto LAB_10a78a214;
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar42);
        }
        uVar18 = uStack_660;
      } while (uStack_660 != uVar42);
    }
  }
  plVar27 = param_2;
  func_0x00010a777f8c();
  auStack_184 = SUB84(plVar27,0);
  func_0x000107c2b07c(&ppppplStack_1c0,&UNK_10f674def);
  pppppplStack_198 = (long ******)0x0;
  pppppplStack_1a0 = (long ******)0x0;
  uStack_190 = 0;
  uVar18 = (ulong)(uint)auStack_184;
  FUN_10a778078();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppppplStack_1c0,uVar18);
  pppplStack_1a8 = *(long *****)(uVar18 + 0x18);
  func_0x000107c2b07c(auStack_1f8,&UNK_10f674def);
  pppppplStack_1d0 = (long ******)0x0;
  pppppplStack_1d8 = (long ******)0x0;
  uStack_1c8 = 0;
  FUN_10a778124();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_1f8,0x113835500);
  pppplStack_1e0 = (long ****)ppppplRam0000000113835518;
  (**(code **)(*param_2 + 0x1f0))(&pppppplStack_3c8,param_2);
  FUN_10a77c4d0(&uStack_e0,param_4,&pppppplStack_120,&pppppplStack_3c8,
                auStack_184 != (undefined1  [4])0x1);
  pppppplStack_610 = (long ******)&pppppplStack_3c8;
  FUN_10a044868(&pppppplStack_610);
  plVar27 = param_2;
  func_0x00010a777f8c();
  unaff_x25 = &pppppplStack_1a0;
  ppppppplVar52 = &pppppplStack_1d8;
  if (((int)plVar27 == 1) &&
     (plVar27 = param_2, (**(code **)(*param_2 + 0x1d8))(), (int)plVar27 != 0)) {
    FUN_10a7a483c(unaff_x25);
    pppppplStack_198 = (long ******)CONCAT17(uStack_d1,uStack_d8);
    pppppplStack_1a0 = (long ******)uStack_e0;
    uStack_190 = CONCAT17(uStack_c9,uStack_d0);
    uStack_d8 = 0;
    uStack_d1 = 0;
    uStack_d0 = 0;
    uStack_c9 = 0;
    uStack_e0 = (long *******)0x0;
  }
  else {
    ppppppplVar20 = (long *******)CONCAT17(uStack_d1,uStack_d8);
    if (uStack_e0 != ppppppplVar20) {
      ppppppplVar50 = uStack_e0;
      do {
        ppppppplVar25 = ppppppplVar52;
        if (auStack_184 == (undefined1  [4])0x1) {
          ppppppplVar38 = (long *******)*ppppppplVar50;
          pppppplVar24 = ppppppplVar50[1];
          if (-1 < (char)*(byte *)((long)ppppppplVar50 + 0x17)) {
            ppppppplVar38 = ppppppplVar50;
            pppppplVar24 = (long ******)(ulong)*(byte *)((long)ppppppplVar50 + 0x17);
          }
          lVar46 = 0x50;
          puVar35 = (undefined8 *)&UNK_110c18378;
          do {
            if ((long ******)*puVar35 == pppppplVar24) {
              uVar56 = puVar35[-1];
              _memcmp(uVar56,ppppppplVar38,pppppplVar24);
              ppppppplVar25 = unaff_x25;
              if ((int)uVar56 == 0) break;
            }
            puVar35 = puVar35 + 2;
            lVar46 = lVar46 + -0x10;
            ppppppplVar25 = ppppppplVar52;
          } while (lVar46 != 0);
        }
        FUN_10a777d70(ppppppplVar25,ppppppplVar50);
        ppppppplVar50 = ppppppplVar50 + 0xd;
      } while (ppppppplVar50 != ppppppplVar20);
    }
  }
  FUN_10a7a31fc(&uStack_e0);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_200 = 0x3f800000;
  func_0x00010787b6c0(&uStack_220,
                      (long)(float)(ulong)(((long)pppppplStack_198 - (long)pppppplStack_1a0 >> 3) *
                                           0x4ec4ec4ec4ec4ec5 +
                                          ((long)pppppplStack_1d0 - (long)pppppplStack_1d8 >> 3) *
                                          0x4ec4ec4ec4ec4ec5));
  lVar46 = 0;
  ppppppplVar20 = &pppppplStack_2a0;
  uStack_e0 = (long *******)&ppppplStack_1c0;
  uStack_d8 = SUB87(auStack_1f8,0);
  uStack_d1 = (undefined1)((ulong)auStack_1f8 >> 0x38);
  do {
    lVar48 = *(long *)((long)&uStack_e0 + lVar46);
    ppppppplVar50 = *(long ********)(lVar48 + 0x20);
    ppppppplVar25 = *(long ********)(lVar48 + 0x28);
    ppuVar51 = (undefined **)ppppppplVar20;
    if (ppppppplVar50 != ppppppplVar25) {
      do {
        pppppplVar24 = (long ******)(long)*(char *)((long)ppppppplVar50 + 0x17);
        if ((long)pppppplVar24 < 0) {
          pppppplVar24 = ppppppplVar50[1];
        }
        if (pppppplVar24 == (long ******)0x0) goto LAB_10a78a59c;
        pppppplStack_3c8 = ppppppplVar50[3];
        ppppppplVar38 = &pppppplStack_3c8;
        func_0x000107912f84(&uStack_220,ppppppplVar38,&pppppplStack_3c8);
        if (((ulong)ppppppplVar38 & 1) == 0) goto LAB_10a78a59c;
        uVar18 = (ulong)*(ushort *)(ppppppplVar50 + 4);
        FUN_10a78c404(uVar18,*(undefined *)((long)ppppppplVar50 + 100));
        if ((uVar18 & 1) == 0) goto LAB_10a78a59c;
        ppppppplVar50 = ppppppplVar50 + 0xd;
      } while (ppppppplVar50 != ppppppplVar25);
      if (*(long *)(lVar48 + 0x20) != *(long *)(lVar48 + 0x28)) {
        FUN_10a776c90();
        if (*(long *******)(lVar48 + 0x18) == pppppplRam0000000113835540) goto LAB_10a78a59c;
        ppppppplVar50 = (long *******)pppppplStack_120;
        if (*(long *)(lVar48 + 0x20) != *(long *)(lVar48 + 0x28)) {
          for (; ppppppplVar50 != (long *******)pppppplStack_118;
              ppppppplVar50 = ppppppplVar50 + 0xe) {
            if (ppppppplVar50[7] == *(long *******)(lVar48 + 0x18)) goto LAB_10a78a59c;
          }
        }
      }
    }
    pppppplVar24 = pppppplStack_118;
    lVar46 = lVar46 + 8;
  } while (lVar46 != 0x10);
  if (pppppplStack_120 != pppppplStack_118) {
    ppppppplVar25 = (long *******)&UNK_10f675465;
    ppppppplVar50 = (long *******)pppppplStack_120;
    do {
      pppppplVar54 = ppppppplVar50[1];
      if (-1 < (char)*(byte *)((long)ppppppplVar50 + 0x17)) {
        pppppplVar54 = (long ******)(ulong)*(byte *)((long)ppppppplVar50 + 0x17);
      }
      FUN_10a003c90(&pppppplStack_3c8,(undefined *)((long)pppppplVar54 + 10),&pppppplStack_610);
      ppppppplVar38 = (long *******)pppppplStack_3c8;
      if (-1 < lStack_3b8) {
        ppppppplVar38 = &pppppplStack_3c8;
      }
      if (pppppplVar54 != (long ******)0x0) {
        ppppppplVar31 = (long *******)*ppppppplVar50;
        if (-1 < *(char *)((long)ppppppplVar50 + 0x17)) {
          ppppppplVar31 = ppppppplVar50;
        }
        _memmove(ppppppplVar38,ppppppplVar31,pppppplVar54);
      }
      puVar35 = (undefined8 *)((long)ppppppplVar38 + (long)pppppplVar54);
      *puVar35 = 0x646e49657361625f;
      *(undefined2 *)(puVar35 + 1) = 0x7865;
      *(undefined1 *)((long)puVar35 + 10) = 0;
      lVar46 = lStack_3b8;
      uStack_d8 = SUB87(plStack_3c0,0);
      uStack_d1 = (undefined1)((ulong)plStack_3c0 >> 0x38);
      uStack_e0 = (long *******)pppppplStack_3c8;
      plStack_3c0 = (long *)0x0;
      pppppplStack_3c8 = (long ******)0x0;
      lStack_3b8 = 0;
      uStack_d0 = (undefined7)lVar46;
      uStack_c9 = (undefined1)((ulong)lVar46 >> 0x38);
      uStack_c8 = (long ******)0x0;
      func_0x000107c2b080(&uStack_e0);
      if (lStack_3b8 < 0) {
        __ZdlPv(pppppplStack_3c8);
      }
      if (pppppplStack_1a0 == pppppplStack_198) {
        lVar46 = 0;
      }
      else {
        lVar46 = 0;
        ppppppplVar38 = (long *******)pppppplStack_1a0;
        do {
          if (ppppppplVar38[3] == uStack_c8 && *(short *)(ppppppplVar38 + 4) == 6) {
            lVar46 = lVar46 + 1;
          }
          ppppppplVar38 = ppppppplVar38 + 0xd;
        } while (ppppppplVar38 != (long *******)pppppplStack_198);
      }
      if (pppppplStack_1d8 == pppppplStack_1d0) {
        lVar48 = 0;
      }
      else {
        lVar48 = 0;
        ppppppplVar38 = (long *******)pppppplStack_1d8;
        do {
          if (ppppppplVar38[3] == uStack_c8 && *(short *)(ppppppplVar38 + 4) == 6) {
            lVar48 = lVar48 + 1;
          }
          ppppppplVar38 = ppppppplVar38 + 0xd;
        } while (ppppppplVar38 != (long *******)pppppplStack_1d0);
      }
      if (lVar48 + lVar46 != 1) {
LAB_10a78a59c:
        uVar56 = 3;
        goto LAB_10a78a5a0;
      }
      ppppppplVar50 = ppppppplVar50 + 0xe;
    } while (ppppppplVar50 != (long *******)pppppplVar24);
  }
  pppppplVar33 = pppppplStack_198;
  pppppplVar54 = pppppplStack_1a0;
  ppppppplVar25 = (long *******)pppppplStack_1d0;
  pppppplVar24 = pppppplStack_1d8;
  pppppplVar36 = param_1;
  func_0x00010a7890a0(param_1,param_2);
  uVar53 = (uint)pppppplVar36;
  if (((pppppplVar54 == pppppplVar33) && ((long *******)pppppplVar24 == ppppppplVar25)) &&
     (uVar53 < 2)) {
    plStack_228 = (long *)0x0;
    plStack_230 = (long *)0x0;
  }
  else {
    FUN_10a788f8c(&plStack_230,param_1,param_2,param_4);
  }
  lStack_248 = 0;
  ppppplStack_250 = (long *****)0x0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23b = 0;
  if (pppppplVar54 != pppppplVar33) {
    if (plStack_230 != (long *)0x0) {
      if ((long ******)*plStack_230 != (long ******)plStack_230[1]) {
        pppppplVar54 = (long ******)*plStack_230 + 4;
        do {
          if (pppppplVar54[-1] == (long *****)pppplStack_1a8) {
            uVar47 = *(uint *)(pppppplVar54 + 4);
            if (uVar47 == 0) break;
            if (uVar47 != 1) {
              uVar26 = *(uint *)(pppppplVar54 + 3);
              if (uVar26 < 2) {
                uVar26 = 1;
              }
              uVar44 = 0;
              if (uVar26 != 0) {
                uVar44 = 0x4000 / uVar26;
              }
              if (0xff < uVar44) {
                uVar44 = 0x100;
              }
              if (uVar47 != uVar44) break;
            }
            if (pppppplVar54 != &ppppplStack_250) {
              FUN_10a7a48fc(&ppppplStack_250,*pppppplVar54,pppppplVar54[1],
                            ((long)pppppplVar54[1] - (long)*pppppplVar54 >> 4) * -0x5555555555555555
                           );
            }
            uStack_238 = *(uint *)(pppppplVar54 + 3);
            uStack_234 = *(undefined1 *)((long)pppppplVar54 + 0x1c);
            FUN_10a789300(param_1,param_5,&ppppplStack_1c0,&ppppplStack_250);
            goto LAB_10a78a724;
          }
          pppppplVar33 = pppppplVar54 + 5;
          pppppplVar54 = pppppplVar54 + 9;
        } while (pppppplVar33 != (long ******)plStack_230[1]);
      }
    }
    uVar56 = 3;
    goto LAB_10a78b1d8;
  }
LAB_10a78a724:
  pppppplVar54 = pppppplStack_1d8;
  ppppplStack_268 = (long *****)0x0;
  ppppplStack_270 = (long *****)0x0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_260 = 0;
  uStack_25b = 0;
  if ((long *******)pppppplVar24 == ppppppplVar25) {
    uVar47 = 0;
  }
  else {
    ppppppplVar50 = (long *******)pppppplStack_1d0;
    if (plStack_230 != (long *)0x0) {
      if ((long ******)*plStack_230 != (long ******)plStack_230[1]) {
        pppppplVar33 = (long ******)*plStack_230 + 4;
        do {
          if (pppppplVar33[-1] == (long *****)pppplStack_1e0) {
            uVar47 = *(uint *)(pppppplVar33 + 4);
            ppppppplVar50 = ppppppplVar25;
            if (uVar47 == 0) goto LAB_10a78aac8;
            if (uVar47 != 1) {
              uVar26 = *(uint *)(pppppplVar33 + 3);
              if (uVar26 < 2) {
                uVar26 = 1;
              }
              uVar44 = 0;
              if (uVar26 != 0) {
                uVar44 = 0x4000 / uVar26;
              }
              if (0xff < uVar44) {
                uVar44 = 0x100;
              }
              if (uVar47 != uVar44) goto LAB_10a78aac8;
            }
            if (pppppplVar33 != &ppppplStack_270) {
              FUN_10a7a48fc(&ppppplStack_270,*pppppplVar33,pppppplVar33[1],
                            ((long)pppppplVar33[1] - (long)*pppppplVar33 >> 4) * -0x5555555555555555
                           );
              uVar47 = *(uint *)(pppppplVar33 + 4);
            }
            uStack_258 = *(uint *)(pppppplVar33 + 3);
            uStack_254 = *(undefined1 *)((long)pppppplVar33 + 0x1c);
            FUN_10a789300(param_1,param_5,auStack_1f8,&ppppplStack_270);
            ppppplVar49 = ppppplStack_268;
            pppppplVar54 = (long ******)ppppplStack_270;
            goto LAB_10a78aaa8;
          }
          pppppplVar57 = pppppplVar33 + 5;
          pppppplVar33 = pppppplVar33 + 9;
        } while (pppppplVar57 != (long ******)plStack_230[1]);
      }
    }
    while (ppppppplVar50 != (long *******)pppppplVar54) {
      FUN_10a7a3158(ppppppplVar50 + -0xd);
      ppppppplVar50 = ppppppplVar50 + -0xd;
    }
    uVar47 = 0;
    pppppplStack_1d0 = pppppplVar54;
  }
LAB_10a78a7ac:
  uStack_274 = uStack_238;
  if (uStack_238 == 0) {
    ppppppplVar38 = (long *******)(param_4[0x37] + 1);
    ppppppplVar50 = (long *******)*param_4[0x37];
    if (ppppppplVar50 == ppppppplVar38) {
      bVar17 = false;
    }
    else {
      pppppplStack_668 = pppppplVar24;
      pppppplStack_658 = (long ******)(ulong)uVar47;
      uStack_660 = (ulong)pppppplVar36 & 0xffffffff;
      ppppppplVar31 = (long *******)(auStack_c0 + 4);
      do {
        pppppplVar54 = ppppppplVar50[8];
        if (pppppplVar54 != (long ******)0x0) {
          if (*(char *)((long)ppppppplVar50 + 0x37) < '\0') {
            func_0x000107c3192c(&uStack_e0,ppppppplVar50[4],ppppppplVar50[5]);
            pppppplVar54 = ppppppplVar50[8];
          }
          else {
            uStack_e0 = (long *******)ppppppplVar50[4];
            uStack_d8 = SUB87(ppppppplVar50[5],0);
            uStack_d1 = (undefined1)((ulong)ppppppplVar50[5] >> 0x38);
            uStack_d0 = SUB87(ppppppplVar50[6],0);
            uStack_c9 = (undefined1)((ulong)ppppppplVar50[6] >> 0x38);
          }
          uStack_c8 = ppppppplVar50[7];
          uVar10 = *(ushort *)(pppppplVar54 + 4);
          uVar26 = (uint)uVar10;
          auStack_c0._0_2_ = uVar10;
          bStack_7c = 0x10;
          pppppplStack_3c8 = (long ******)ppppppplVar31;
          if (*(char *)((long)pppppplVar54 + 100) == '\0') {
            auStack_c0._4_4_ = *(undefined4 *)((long)pppppplVar54 + 0x24);
            bStack_7c = 0;
            FUN_10a78c404(uVar10,0);
            uVar18 = 0;
          }
          else {
            FUN_10a3652d8(&pppppplStack_3c8);
            bVar8 = *(byte *)((long)pppppplVar54 + 100);
            uVar18 = (ulong)bVar8;
            uVar26 = (uint)((ulong)auStack_c0 & 0xffff);
            bStack_7c = bVar8;
            FUN_10a78c404((ulong)auStack_c0 & 0xffff,uVar18);
            if (0x10 < bVar8) goto LAB_10a78c06c;
          }
          (*(code *)(&PTR_FUN_110ba1f88)[uVar18])(ppppppplVar31);
          if (uVar26 == 0) {
LAB_10a78aac8:
            uVar56 = 3;
            goto LAB_10a78b1c8;
          }
        }
        ppppppplVar4 = (long *******)ppppppplVar50[1];
        ppppppplVar37 = ppppppplVar50;
        if ((long *******)ppppppplVar50[1] == (long *******)0x0) {
          do {
            ppppppplVar50 = (long *******)ppppppplVar37[2];
            bVar17 = (long *******)*ppppppplVar50 != ppppppplVar37;
            ppppppplVar37 = ppppppplVar50;
          } while (bVar17);
        }
        else {
          do {
            ppppppplVar50 = ppppppplVar4;
            ppppppplVar4 = (long *******)*ppppppplVar50;
          } while ((long *******)*ppppppplVar50 != (long *******)0x0);
        }
      } while (ppppppplVar50 != ppppppplVar38);
      bVar17 = uStack_274 != 0;
    }
    ppuVar51 = (undefined **)(ulong)uStack_258;
    if ((!bVar17) && (uStack_258 == 0)) {
      if ((uVar53 < 2 && (long *******)pppppplVar24 == ppppppplVar25) ||
         (plStack_230 == (long *)0x0)) {
        lStack_298 = 0;
        pppppplStack_2a0 = (long ******)0x0;
        uStack_288 = 0;
        cStack_284 = 0;
        uStack_290 = 0;
        uStack_28b = 0;
        FUN_10a778d94(&uStack_e0,param_4);
        FUN_10a7a42a0(&pppppplStack_2a0);
        lStack_298 = CONCAT17(uStack_d1,uStack_d8);
        pppppplStack_2a0 = (long ******)uStack_e0;
        uStack_290 = (undefined5)uStack_d0;
        uStack_28b = (undefined3)(CONCAT17(uStack_c9,uStack_d0) >> 0x28);
        uStack_d8 = 0;
        uStack_d1 = 0;
        uStack_d0 = 0;
        uStack_c9 = 0;
        uStack_e0 = (long *******)0x0;
        uStack_288 = (uint)uStack_c8;
        cStack_284 = uStack_c8._4_1_;
        pppppplStack_3c8 = (long ******)&uStack_e0;
        func_0x00010a1f4614(&pppppplStack_3c8);
        ppuVar51 = (undefined **)0x0;
        uVar53 = 1;
        goto LAB_10a78ab38;
      }
      ppuVar51 = (undefined **)0x0;
    }
  }
  else {
    ppuVar51 = (undefined **)(ulong)uStack_258;
  }
  plVar21 = plStack_230;
  ppppppplVar50 = (long *******)&uStack_258;
  lStack_298 = 0;
  pppppplStack_2a0 = (long ******)0x0;
  uStack_288 = 0;
  cStack_284 = '\0';
  uStack_290 = 0;
  uStack_28b = 0;
  FUN_10a776c90();
  plVar27 = (long *)*plVar21;
  plVar21 = (long *)plVar21[1];
  if (plVar27 != plVar21) {
    plVar27 = plVar27 + 4;
    do {
      if ((long ******)plVar27[-1] == pppppplRam0000000113835540) {
        uVar26 = *(uint *)(plVar27 + 4);
        if (uVar26 == 0) break;
        if (uVar26 != 1) {
          uVar44 = *(uint *)(plVar27 + 3);
          if (uVar44 < 2) {
            uVar44 = 1;
          }
          uVar12 = 0;
          if (uVar44 != 0) {
            uVar12 = 0x4000 / uVar44;
          }
          if (0xff < uVar12) {
            uVar12 = 0x100;
          }
          if (uVar26 != uVar12) break;
        }
        lVar46 = *plVar27;
        goto joined_r0x00010a78a9a0;
      }
      plVar32 = plVar27 + 5;
      plVar27 = plVar27 + 9;
    } while (plVar32 != plVar21);
  }
LAB_10a78b1b4:
  uVar56 = 3;
LAB_10a78b1b8:
  do {
    uStack_e0 = &pppppplStack_2a0;
    func_0x00010a1f4614(&uStack_e0);
LAB_10a78b1c8:
    uStack_e0 = (long *******)&ppppplStack_270;
    func_0x00010a1f4614(&uStack_e0);
    ppppppplVar25 = ppppppplVar50;
    ppuVar51 = (undefined **)ppppppplVar20;
LAB_10a78b1d8:
    uStack_e0 = (long *******)&ppppplStack_250;
    func_0x00010a1f4614(&uStack_e0);
    plVar27 = plStack_228;
    if (plStack_228 != (long *)0x0) {
      plVar21 = plStack_228 + 1;
      do {
        lVar46 = *plVar21;
        cVar11 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *plVar21 = lVar46 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar46 == 0) {
        (**(code **)(*plStack_228 + 0x10))(plStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
LAB_10a78a5a0:
    func_0x00010787ad88(&uStack_220);
    FUN_10a7a31fc(ppppppplVar52);
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
    FUN_10a7a31fc(unaff_x25);
    ppppppplVar50 = ppppppplVar25;
    if ((char)bStack_1a9 < '\0') {
      __ZdlPv(ppppplStack_1c0);
    }
LAB_10a78a5d8:
    func_0x00010787ad88(&uStack_180);
    FUN_10a78dd94(&lStack_150);
    uStack_e0 = &pppppplStack_120;
    FUN_10a66db40(&uStack_e0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return uVar56;
    }
    ___stack_chk_fail();
LAB_10a78c000:
    func_0x00010a43731c(&plStack_350,&pppppplStack_470);
    if ((bStack_5f0 & 1) == 0) goto LAB_10a78c06c;
    func_0x00010a78ceac(&uStack_370,&pppppplStack_610);
    ppppplStack_360 = (long *****)uStack_600;
    bStack_358 = (byte)uStack_5f8;
    func_0x00010a78cd90(&pppppplStack_3c8,&uStack_e0);
    func_0x00010a78ce1c(&uStack_e0);
    if (bStack_5f0 == 1) {
      FUN_10a7ad3c4(&pppppplStack_610);
    }
    func_0x00010a4369b0(&pppppplStack_470);
LAB_10a78b228:
    plVar27 = plStack_350;
    if (plStack_350 == (long *)0x0) {
      FUN_10a7b21f0(&pppppplStack_470,&lStack_2e0);
      FUN_10a7b1ef4(&uStack_e0,pppppplStack_668);
      func_0x00010a78ceac(pppppplStack_470 + 0xb,&uStack_e0);
      FUN_10a7ad3c4(&uStack_e0);
      if ((int)ppuVar51 != 0) {
        FUN_10a7b1ef4();
        func_0x00010a78ceac(pppppplStack_470 + 0xd,&uStack_e0);
        FUN_10a7ad3c4(&uStack_e0);
        pppppplVar24 = pppppplStack_470;
        if (pppppplStack_470 + 0xf != &ppppplStack_270) {
          FUN_10a7a48fc();
        }
        uVar7 = *(undefined4 *)ppppppplVar50;
        *(undefined *)((long)pppppplVar24 + 0x94) = *(undefined *)((long)ppppppplVar50 + 4);
        *(undefined4 *)(pppppplVar24 + 0x12) = uVar7;
        *(undefined4 *)(pppppplStack_470 + 0x13) = pppppplStack_658._0_4_;
      }
      FUN_10a78cb7c(&pppppplStack_610,&pcStack_340,pppppplStack_470);
      pppppplVar24 = (long ******)pppppplStack_470[0xb];
      uVar7 = *(undefined4 *)(pppppplVar24 + 10);
      func_0x00010a77e910();
      uVar53 = (uint)pppppplVar24;
      pppppplVar54 = (long ******)pppppplStack_470[0xd];
      if (pppppplVar54 == (long ******)0x0) {
        uVar45 = 0;
        uVar47 = 0xffffffff;
      }
      else {
        uVar45 = *(undefined4 *)(pppppplVar54 + 10);
        func_0x00010a77e910();
        uVar47 = (uint)pppppplVar54;
      }
      pppppplVar33 = uStack_98;
      uStack_e0 = (long *******)pppppplStack_470[0xb];
      pppppplVar54 = (long ******)pppppplStack_470[0xc];
      if (pppppplVar54 != (long ******)0x0) {
        pppppplVar36 = pppppplVar54 + 1;
        do {
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(pppppplVar36,0x10);
          if (bVar17) {
            *pppppplVar36 = (long *****)((long)*pppppplVar36 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      if (bStack_5f0 == 1) {
        ppppplStack_410 = ppppplStack_608;
        ppppppplVar20 = (long *******)pppppplStack_610;
        uVar26 = (uint)uStack_600;
        uVar34 = uStack_600._4_4_;
        if ((long ******)ppppplStack_608 != (long ******)0x0) {
          pppppplVar36 = (long ******)(ppppplStack_608 + 1);
          do {
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(pppppplVar36,0x10);
            if (bVar17) {
              *pppppplVar36 = (long *****)((long)*pppppplVar36 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
      }
      else {
        ppppplStack_410 = (long *****)0x0;
        ppppppplVar20 = (long *******)0x0;
        uVar26 = 0xffffffff;
        uVar34 = 0;
      }
      auStack_c0 = (undefined1  [8])pppppplStack_470[0xd];
      ppppplStack_b8 = pppppplStack_470[0xe];
      if ((long ******)ppppplStack_b8 != (long ******)0x0) {
        pppppplVar36 = (long ******)(ppppplStack_b8 + 1);
        do {
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(pppppplVar36,0x10);
          if (bVar17) {
            *pppppplVar36 = (long *****)((long)*pppppplVar36 + 1);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      uStack_d8 = SUB87(pppppplVar54,0);
      uStack_d1 = (undefined1)((ulong)pppppplVar54 >> 0x38);
      uStack_400 = 0;
      uStack_408 = 0;
      uStack_d0 = SUB87(ppppppplVar20,0);
      uStack_c9 = (undefined1)((ulong)ppppppplVar20 >> 0x38);
      uStack_c8 = (long ******)ppppplStack_410;
      ppppplStack_410 = (long *****)0x0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_428 = 0;
      ppppplStack_b0 = (long *****)CONCAT44(uVar26,uVar53);
      uStack_a8 = (long ******)CONCAT44(uVar7,uVar47);
      uStack_a0 = (long ******)CONCAT44(uVar45,uVar34);
      uStack_98._0_2_ =
           CONCAT11(uVar26 < 0x80000000 && ppppppplVar20 != (long *******)0x0,
                    (byte)~(byte)((ulong)pppppplVar24 >> 0x18) >> 7);
      uStack_98._3_5_ = SUB85(pppppplVar33,3);
      uStack_98._0_3_ =
           CONCAT12(uVar47 < 0x80000000 && auStack_c0 != (undefined1  [8])0x0,(undefined2)uStack_98)
      ;
      FUN_10a7ad3c4(&uStack_428);
      FUN_10a7ad3c4(&uStack_418);
      FUN_10a7ad3c4(&uStack_408);
      if (((bStack_5f0 == 1) && (-1 < (int)uVar53)) &&
         ((cStack_2a1 != '\x01' || (-1 < (int)(uint)uStack_600)))) {
        if (((int)ppuVar51 != 0) && (0x7fffffff < uVar47 || uVar47 != uVar53)) goto LAB_10a78ba88;
        func_0x00010a78ceac(&uStack_370,&pppppplStack_610);
        ppppplStack_360 = (long *****)uStack_600;
        bStack_358 = (byte)uStack_5f8;
        func_0x00010a43731c(&plStack_350,&pppppplStack_470);
        func_0x00010a78cd90(&pppppplStack_3c8,&uStack_e0);
        bVar17 = true;
      }
      else {
LAB_10a78ba88:
        bVar17 = false;
        uVar53 = uStack_66c;
      }
      func_0x00010a78ce1c(&uStack_e0);
      if (bStack_5f0 == 1) {
        FUN_10a7ad3c4(&pppppplStack_610);
      }
      func_0x00010a4369b0(&pppppplStack_470);
      if (((bVar17) && (plStack_350 != (long *)0x0)) && ((bStack_378 & 1) != 0)) {
        uStack_66c = uVar53;
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f675470,&UNK_10f6758d1,0x4fc,&UNK_10f675a17);
        }
        goto LAB_10a78b23c;
      }
      uVar56 = 3;
      if (bStack_378 == 0) goto LAB_10a78beec;
LAB_10a78bee4:
      func_0x00010a78ce1c(&pppppplStack_3c8);
    }
    else if ((bStack_378 & 1) == 0) {
      uVar56 = 3;
    }
    else {
LAB_10a78b23c:
      ppppplStack_438 = (long *****)0x0;
      ppppplStack_440 = (long *****)0x0;
      ppppplStack_430 = (long *****)0x0;
      FUN_10a777ca8(&ppppplStack_440,
                    ((long)pppppplStack_118 - (long)pppppplStack_120 >> 4) * 0x6db6db6db6db6db7);
      ppplStack_468 = (long ***)0x0;
      pppppplStack_470 = (long ******)0x0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_450 = 0x3f800000;
      FUN_10a7ad824(&pppppplStack_470,(long)(float)uStack_138);
      pppppplVar24 = pppppplStack_118;
      if (pppppplStack_120 != pppppplStack_118) {
        ppppppplVar50 = (long *******)0x9;
        ppuVar51 = &PTR_FUN_110ba1f88;
        ppppppplVar20 = (long *******)pppppplStack_120;
        do {
          pppppplVar54 = ppppppplVar20[7];
          plVar21 = plStack_350 + 0x17;
          FUN_10a7b2500(plVar21,pppppplVar54);
          if (plVar21 == (long *)0x0) {
            iVar55 = 0;
          }
          else {
            iVar55 = *(int *)(plVar21[6] + 0x18);
          }
          ppppppplVar25 = (long *******)pppppplStack_470;
          func_0x00010a7b259c(pppppplStack_470,ppplStack_468,pppppplVar54);
          if (ppppppplVar25 == (long *******)0x0) {
            ppppppplVar25 = &pppppplStack_470;
            FUN_10a7b2630(ppppppplVar25,pppppplVar54,ppppppplVar20 + 4,0);
          }
          iVar6 = *(int *)(ppppppplVar25 + 6);
          iVar13 = 0;
          if ((ulong)*(uint *)(ppppppplVar20 + 0xb) != 0) {
            iVar13 = (int)((ulong)ppppppplVar20[0xd] / (ulong)*(uint *)(ppppppplVar20 + 0xb));
          }
          *(int *)(ppppppplVar25 + 6) = iVar6 + iVar13;
          if (*(char *)((long)ppppppplVar20 + 0x17) < '\0') {
            func_0x000107c3192c(&pppppplStack_610,*ppppppplVar20,ppppppplVar20[1]);
          }
          else {
            ppppplStack_608 = (long *****)ppppppplVar20[1];
            pppppplStack_610 = *ppppppplVar20;
            uStack_600 = ppppppplVar20[2];
          }
          ppppppplVar25 = &pppppplStack_610;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar25,&UNK_10f675465,10);
          uStack_e0 = (long *******)*ppppppplVar25;
          uStack_108 = SUB87(ppppppplVar25[1],0);
          uStack_101 = (undefined1)*(undefined8 *)((long)ppppppplVar25 + 0xf);
          uStack_100 = (undefined7)((ulong)*(undefined8 *)((long)ppppppplVar25 + 0xf) >> 8);
          uStack_c9 = *(undefined1 *)((long)ppppppplVar25 + 0x17);
          ppppppplVar25[1] = (long ******)0x0;
          ppppppplVar25[2] = (long ******)0x0;
          *ppppppplVar25 = (long ******)0x0;
          uStack_d0 = uStack_100;
          uStack_d8 = uStack_108;
          uStack_d1 = uStack_101;
          uStack_c8 = (long ******)0x0;
          func_0x000107c2b080(&uStack_e0);
          auStack_c0._0_2_ = 6;
          auStack_c0._4_4_ = iVar6 + iVar55;
          bStack_7c = 9;
          FUN_10a777d70(&ppppplStack_440,&uStack_e0);
          if (0x10 < (ulong)bStack_7c) goto LAB_10a78c06c;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_7c])(auStack_c0 + 4);
          if ((long)uStack_600 < 0) {
            __ZdlPv(pppppplStack_610);
          }
          ppppppplVar20 = ppppppplVar20 + 0xe;
        } while (ppppppplVar20 != (long *******)pppppplVar24);
      }
      FUN_10a7b2874(&uStack_108,plStack_350 + 0x17);
      plStack_480 = (long *)0x0;
      plStack_488 = (long *)0x0;
      uStack_478 = 0;
      func_0x00010a78cf10(&plStack_488,uStack_138);
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_490 = 0x3f800000;
      FUN_10a04884c(&uStack_4b0,(long)(float)uStack_138);
      ppppplStack_4d0 = (long *****)0x0;
      ppppplStack_4c8 = (long *****)0x0;
      ppppplStack_4c0 = (long *****)0x0;
      FUN_10a78cfa8(&ppppplStack_4d0,
                    ((long)pppppplStack_118 - (long)pppppplStack_120 >> 4) * 0x6db6db6db6db6db7);
      pppppplVar24 = pppppplStack_118;
      if (pppppplStack_120 != pppppplStack_118) {
        ppppppplVar50 = (long *******)0xaaaaaaaaaaaaaaab;
        ppuVar51 = (undefined **)0x30;
        ppppppplVar20 = (long *******)pppppplStack_120;
        do {
          puVar35 = &uStack_4b0;
          FUN_10a048b24(puVar35,ppppppplVar20 + 4);
          if (puVar35 == (undefined8 *)0x0) {
            puVar22 = &uStack_108;
            FUN_10a7b2500(puVar22,ppppppplVar20[7]);
            if (puVar22 == (undefined7 *)0x0) {
              puVar35 = (undefined8 *)0x38;
              __Znwm();
              puVar35[1] = 0;
              puVar35[2] = 0;
              *puVar35 = &PTR_FUN_110c186a0;
              uStack_e0 = (long *******)(puVar35 + 3);
              puVar35[4] = 0;
              *uStack_e0 = (long ******)0x0;
              puVar35[6] = 0;
              puVar35[5] = 0;
              uStack_d8 = SUB87(puVar35,0);
              uStack_d1 = (undefined1)((ulong)puVar35 >> 0x38);
              *(undefined4 *)((long)puVar35 + 0x34) = *(undefined4 *)(ppppppplVar20 + 0xb);
              puVar22 = &uStack_108;
              FUN_10a7b2d6c(puVar22,ppppppplVar20[7],ppppppplVar20 + 4,&uStack_e0);
              func_0x00010a7ad50c(&uStack_e0);
            }
            plVar32 = plStack_480;
            plVar21 = plStack_488;
            ppppppplVar25 = *(long ********)(puVar22 + 6);
            if ((ppppppplVar25 == (long *******)0x0) ||
               (*(int *)((long)ppppppplVar25 + 0x1c) != *(int *)(ppppppplVar20 + 0xb))) {
              uVar56 = 3;
              goto LAB_10a78bea4;
            }
            lVar46 = *(long *)(puVar22 + 7);
            uStack_e0 = ppppppplVar25;
            uStack_d8 = (undefined7)lVar46;
            uStack_d1 = (undefined1)((ulong)lVar46 >> 0x38);
            if (lVar46 != 0) {
              plVar3 = (long *)(lVar46 + 8);
              do {
                cVar11 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar17) {
                  *plVar3 = *plVar3 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              ppppppplVar25 = *(long ********)(puVar22 + 6);
            }
            uStack_d0 = 0;
            uStack_c9 = 0;
            uStack_c8 = (long ******)0x0;
            auStack_c0 = (undefined1  [8])0x0;
            FUN_10a05151c(&uStack_d0,*ppppppplVar25,ppppppplVar25[1],
                          (long)ppppppplVar25[1] - (long)*ppppppplVar25);
            ppppplStack_b8 =
                 (long *****)
                 CONCAT44(ppppplStack_b8._4_4_,*(undefined4 *)(*(long *)(puVar22 + 6) + 0x18));
            FUN_10a78d08c(&plStack_488,&uStack_e0);
            func_0x00010a78d1bc(&uStack_e0);
            puVar35 = &uStack_4b0;
            FUN_10a7b2fc0(puVar35,ppppppplVar20[7],ppppppplVar20 + 4,
                          ((long)plVar32 - (long)plVar21 >> 4) * -0x5555555555555555);
          }
          uVar18 = puVar35[6];
          uVar42 = ((long)plStack_480 - (long)plStack_488 >> 4) * -0x5555555555555555;
          if (uVar42 < uVar18 || uVar42 - uVar18 == 0) goto LAB_10a78c06c;
          plVar21 = plStack_488 + uVar18 * 6;
          lVar46 = plVar21[2];
          lVar48 = plVar21[3];
          pppppplVar54 = ppppppplVar20[0xd];
          if (pppppplVar54 != (long ******)0x0) {
            FUN_10a131458(plVar21 + 2,lVar48,ppppppplVar20[0xc],
                          (undefined *)((long)ppppppplVar20[0xc] + (long)pppppplVar54),pppppplVar54)
            ;
          }
          uVar53 = 0;
          if (*(uint *)(ppppppplVar20 + 0xb) != 0) {
            uVar53 = (uint)pppppplVar54 / *(uint *)(ppppppplVar20 + 0xb);
          }
          *(uint *)(plVar21 + 5) = (int)plVar21[5] + uVar53;
          func_0x00010a777ee4(&uStack_e0,ppppppplVar20);
          func_0x00010a777ee4(auStack_c0,ppppppplVar20 + 4);
          uStack_98 = (long ******)plVar21[1];
          uStack_a0 = (long ******)*plVar21;
          if (plVar21[1] != 0) {
            plVar21 = (long *)(plVar21[1] + 8);
            do {
              cVar11 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar17) {
                *plVar21 = *plVar21 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          uStack_90 = (long ******)CONCAT44((uint)pppppplVar54,(int)lVar48 - (int)lVar46);
          FUN_10a78d1ec(&ppppplStack_4d0,&uStack_e0);
          FUN_10a78d3cc(&uStack_e0);
          ppppppplVar20 = ppppppplVar20 + 0xe;
        } while (ppppppplVar20 != (long *******)pppppplVar24);
      }
      FUN_10a329a58(auStack_4e0,param_2[0x2d]);
      plVar21 = plStack_350;
      if ((ulong)(param_2[0x55] - param_2[0x54] >> 4) <= (ulong)param_3) {
LAB_10a78c06c:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10a78c070);
        (*pcVar16)();
      }
      lVar46 = *(long *)(param_2[0x54] + (ulong)param_3 * 0x10);
      if (lVar46 != 0) {
        lVar48 = *(long *)(lVar46 + 0x230) - (long)*(undefined8 **)(lVar46 + 0x228);
        if (lVar48 != 0) {
          lVar43 = 0;
          puVar35 = *(undefined8 **)(lVar46 + 0x228);
          do {
            if ((long *******)*puVar35 == param_4) goto LAB_10a78b6f8;
            lVar43 = lVar43 + 1;
            puVar35 = puVar35 + 2;
          } while (lVar48 >> 4 != lVar43);
        }
      }
      lVar43 = 0;
LAB_10a78b6f8:
      FUN_10a421a80(&uStack_e0,param_2);
      FUN_10a7b3234(apppppplStack_4f0,plVar21[0xb],plVar21[0xc],uStack_66c,param_4,auStack_4e0,
                    &pppppplStack_2a0,&uStack_e0,param_3,(int)lVar43,1);
      if (CONCAT17(uStack_d1,uStack_d8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(undefined4 *)(apppppplStack_4f0[0] + 0x1c) = (undefined4)uStack_660;
      pppppplVar24 = param_4[0x31];
      if (pppppplVar24 != (long ******)0x0) {
        (*(code *)(*pppppplVar24)[0x13])();
        iVar55 = (int)pppppplVar24;
        FUN_10a1e6584();
        if (iVar55 != 0) {
          *(undefined1 *)((long)apppppplStack_4f0[0] + 0xe4) = 1;
        }
      }
      pppppplVar54 = pppppplStack_368;
      pppppplVar24 = apppppplStack_4f0[0];
      if (cStack_2a1 == '\x01') {
        pppppplStack_4f8 = pppppplStack_368;
        uStack_500 = uStack_370;
        if ((long *******)pppppplStack_368 != (long *******)0x0) {
          ppppppplVar20 = (long *******)(pppppplStack_368 + 2);
          do {
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
            if (bVar17) {
              *ppppppplVar20 = (long ******)((long)*ppppppplVar20 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        lStack_518 = lStack_248;
        ppppplStack_520 = ppppplStack_250;
        uStack_510 = CONCAT35(uStack_23b,uStack_240);
        uStack_240 = 0;
        uStack_23b = 0;
        lStack_248 = 0;
        ppppplStack_250 = (long *****)0x0;
        uStack_508 = uStack_238;
        uStack_504 = uStack_234;
        if ((char)bStack_1a9 < '\0') {
          func_0x000107c3192c(&ppppplStack_540,ppppplStack_1c0,uStack_1b8);
        }
        else {
          uStack_538 = uStack_1b8;
          ppppplStack_540 = ppppplStack_1c0;
          lStack_530 = (ulong)bStack_1a9 << 0x38;
        }
        pppplStack_528 = pppplStack_1a8;
        FUN_10a78d414(pppppplVar24,&uStack_500,&ppppplStack_520,&ppppplStack_540,
                      (ulong)ppppplStack_360 & 0xffffffff);
        if (lStack_530 < 0) {
          __ZdlPv(ppppplStack_540);
        }
        uStack_e0 = (long *******)&ppppplStack_520;
        func_0x00010a1f4614(&uStack_e0);
        ppppppplVar50 = (long *******)pppppplVar24;
        ppuVar51 = (undefined **)pppppplVar54;
        if ((long *******)pppppplStack_4f8 != (long *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      plVar21 = plStack_350;
      pppppplVar24 = apppppplStack_4f0[0];
      lVar46 = plStack_350[0xd];
      if (lVar46 != 0) {
        ppuVar51 = (undefined **)plStack_350[0xe];
        if ((long *******)ppuVar51 != (long *******)0x0) {
          ppppppplVar20 = (long *******)(ppuVar51 + 2);
          do {
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
            if (bVar17) {
              *ppppppplVar20 = (long ******)((long)*ppppppplVar20 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        ppppplStack_570 = (long *****)0x0;
        uStack_568 = 0;
        uStack_560 = 0;
        lStack_550 = lVar46;
        pppppplStack_548 = (long ******)ppuVar51;
        FUN_10a7a5130(&ppppplStack_570,plStack_350[0xf],plStack_350[0x10],
                      (plStack_350[0x10] - plStack_350[0xf] >> 4) * -0x5555555555555555);
        uStack_558 = (undefined4)plVar21[0x12];
        uStack_554 = *(undefined1 *)((long)plVar21 + 0x94);
        FUN_10a78d4e4(pppppplVar24,&lStack_550,&ppppplStack_570);
        uStack_e0 = (long *******)&ppppplStack_570;
        func_0x00010a1f4614(&uStack_e0);
        ppppppplVar50 = (long *******)pppppplVar24;
        if ((long *******)pppppplStack_548 != (long *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      ppppplVar15 = ppppplStack_430;
      ppppplVar5 = ppppplStack_438;
      ppppplVar49 = ppppplStack_440;
      pppppplVar24 = apppppplStack_4f0[0];
      ppppppplVar20 = (long *******)(apppppplStack_4f0[0] + 0x3d);
      ppppplStack_430 = (long *****)0x0;
      ppppplStack_440 = (long *****)0x0;
      ppppplStack_438 = (long *****)0x0;
      FUN_10a7a483c(ppppppplVar20);
      pppppplVar24[0x3e] = ppppplVar5;
      *ppppppplVar20 = (long ******)ppppplVar49;
      pppppplVar24[0x3f] = ppppplVar15;
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_588 = 0;
      FUN_10a7a31fc(&uStack_588);
      pppppplVar24 = apppppplStack_4f0[0];
      ppppplStack_598 = ppppplStack_4c8;
      ppppplStack_5a0 = ppppplStack_4d0;
      ppppplStack_590 = ppppplStack_4c0;
      ppppplStack_4c8 = (long *****)0x0;
      ppppplStack_4c0 = (long *****)0x0;
      ppppplStack_4d0 = (long *****)0x0;
      FUN_10a7a51b4(apppppplStack_4f0[0] + 0x40);
      pppppplVar24[0x41] = ppppplStack_598;
      pppppplVar24[0x40] = ppppplStack_5a0;
      pppppplVar24[0x42] = ppppplStack_590;
      ppppplStack_598 = (long *****)0x0;
      ppppplStack_590 = (long *****)0x0;
      ppppplStack_5a0 = (long *****)0x0;
      uStack_e0 = (long *******)&ppppplStack_5a0;
      FUN_10a7a3320(&uStack_e0);
      FUN_10a77972c(apppppplStack_4f0[0]);
      FUN_10a77b3e4(apppppplStack_4f0[0]);
      pppplStack_5a8 = (long ****)param_1[0xe];
      _auStack_5ac = 0;
      uStack_5ad = 0;
      ppppplStack_5b8 = (long *****)0x0;
      uStack_e0 = (long *******)&uStack_5ad;
      uStack_d8 = SUB87(auStack_5ac,0);
      uStack_d1 = (undefined1)((ulong)auStack_5ac >> 0x38);
      uStack_c8 = (long ******)auStack_184;
      uStack_d0 = SUB87(&plStack_350,0);
      uStack_c9 = (undefined1)((ulong)&plStack_350 >> 0x38);
      auStack_c0 = (undefined1  [8])(auStack_5ac + 1);
      ppppplStack_b8 = (long *****)&ppppplStack_5b8;
      uStack_a8 = (long ******)(auStack_5ac + 2);
      uStack_a0 = (long ******)(auStack_5ac + 3);
      uStack_98 = (long ******)&pppplStack_5a8;
      ppppplStack_b0 = (long *****)param_1;
      if (plVar27 == (long *)0x0) {
        if ((long *****)0x1 < (long *****)((long)pppplStack_5a8 + 1U)) {
          param_1[0xe] = (long *****)((long)pppplStack_5a8 + 1U);
          _auStack_5ac = 0x1000000;
          plStack_350[7] = (long)pppplStack_5a8;
          ppppplStack_608 = (long *****)param_5[1];
          pppppplStack_610 = (long ******)*param_5;
          uStack_600 = (long ******)param_5[2];
          uStack_5f8 = (undefined4)param_5[3];
          pppppplVar24 = param_1 + 0x14;
          ppppppplVar20 = &pppppplStack_610;
          FUN_10a7b36c8(pppppplVar24,ppppppplVar20,&pppppplStack_610);
          _auStack_5ac = CONCAT12((char)ppppppplVar20,auStack_5ac);
          ppppplStack_5b8 = (long *****)pppppplVar24;
          FUN_10a78d56c(pppppplVar24 + 6,plStack_350,uStack_348);
          auStack_5ac = (undefined1  [2])CONCAT11(1,auStack_5ac[0]);
          goto LAB_10a78bccc;
        }
        uVar56 = 3;
      }
      else {
LAB_10a78bccc:
        plVar27 = plStack_350;
        if ((cStack_2a1 == '\x01') && ((bStack_358 & 1) != 0)) {
          FUN_10a78d688(&pppppplStack_610,auStack_320);
          pppppplStack_5c8 = pppppplStack_368;
          uStack_5d0 = uStack_370;
          if ((long *******)pppppplStack_368 != (long *******)0x0) {
            ppppppplVar20 = (long *******)(pppppplStack_368 + 1);
            do {
              cVar11 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
              if (bVar17) {
                *ppppppplVar20 = (long ******)((long)*ppppppplVar20 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          FUN_10a7b3ad8(plVar27 + 0x14,auStack_184,auStack_184,&pppppplStack_610);
          FUN_10a78d730(&pppppplStack_610);
          _auStack_5ac = CONCAT31(stack0xfffffffffffffa55,1);
        }
        FUN_10a7b3be8(plStack_350 + 0x17,&uStack_108);
        ppppppplVar50 = (long *******)pppppplStack_2b8;
        uVar18 = uStack_2c0;
        plVar27 = plStack_350;
        for (plVar21 = plStack_488; plVar21 != plStack_480; plVar21 = plVar21 + 6) {
          plVar32 = (long *)*plVar21;
          lVar46 = *plVar32;
          *plVar32 = plVar21[2];
          plVar21[2] = lVar46;
          lVar46 = plVar32[1];
          plVar32[1] = plVar21[3];
          plVar21[3] = lVar46;
          lVar46 = plVar32[2];
          plVar32[2] = plVar21[4];
          plVar21[4] = lVar46;
          *(int *)(*plVar21 + 0x18) = (int)plVar21[5];
        }
        if (*(char *)(apppppplStack_4f0[0] + 0x4c) == '\x01') {
          *(undefined2 *)(apppppplStack_4f0[0] + 0x4c) = 0x100;
          *(undefined *)((long)apppppplStack_4f0[0] + 0x263) =
               *(undefined *)((long)apppppplStack_4f0[0] + 0x262);
          *(undefined *)((long)apppppplStack_4f0[0] + 0x265) =
               *(undefined *)((long)apppppplStack_4f0[0] + 0x264);
        }
        if ((bStack_378 & 1) == 0) goto LAB_10a78c06c;
        uStack_380 = 0;
        uStack_37e = 0;
        uStack_5ad = 1;
        plVar21 = plStack_350 + 4;
        uVar42 = uStack_2c0;
        FUN_10a78d780(uStack_2c0,pppppplStack_2b8,*plVar21,plStack_350[5]);
        if ((uVar42 & 1) != 0) {
          if (plVar27 != &lStack_2e0) {
            FUN_10a7a522c(plVar21,uVar18,ppppppplVar50,
                          ((long)((long)ppppppplVar50 - uVar18) >> 5) * -0x5555555555555555);
            plVar27 = plStack_350;
          }
          FUN_10a78d7d0(param_1,plVar27 + 8,param_2);
        }
        FUN_10a78d90c(param_6 + 0x10);
        func_0x00010a78d968(param_6,plStack_350,uStack_348);
        func_0x00010a437380(param_6 + 0x10,apppppplStack_4f0);
        uVar56 = 1;
      }
      FUN_10a78d9dc(&uStack_e0);
      func_0x00010a436958(apppppplStack_4f0);
      if (lStack_4d8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
LAB_10a78bea4:
      uStack_e0 = (long *******)&ppppplStack_4d0;
      FUN_10a7a3320(&uStack_e0);
      func_0x00010a048aa8(&uStack_4b0);
      func_0x00010a78dc78(&plStack_488);
      FUN_10a7ad41c(&uStack_108);
      FUN_10a7ad5ac(&pppppplStack_470);
      FUN_10a7a31fc(&ppppplStack_440);
      if ((bStack_378 & 1) != 0) goto LAB_10a78bee4;
    }
LAB_10a78beec:
    FUN_10a7ad3c4(&uStack_370);
    func_0x00010a4369b0(&plStack_350);
    FUN_10a78dcd8(auStack_320);
    func_0x00010a78dd20(&lStack_2e0);
    ppppppplVar20 = (long *******)ppuVar51;
  } while( true );
LAB_10a78aaa8:
  if (pppppplVar54 == (long ******)ppppplVar49) goto LAB_10a78a7ac;
  pppppplVar33 = pppppplVar54;
  FUN_10a776db4(pppppplVar54,param_4);
  if (((ulong)pppppplVar33 & 1) == 0) goto LAB_10a78aac8;
  pppppplVar54 = pppppplVar54 + 6;
  goto LAB_10a78aaa8;
joined_r0x00010a78a9a0:
  if (lVar46 == plVar27[1]) goto LAB_10a78a9c4;
  if (*(long *)(lVar46 + 0x18) == lRam00000001137ebac0) {
    if (uVar53 < 2) goto LAB_10a78b1b4;
    goto LAB_10a78a9cc;
  }
  lVar46 = lVar46 + 0x30;
  goto joined_r0x00010a78a9a0;
LAB_10a78a9c4:
  if (uVar53 < 2) {
LAB_10a78a9cc:
    FUN_10a78c4f4(&pppppplStack_2a0);
LAB_10a78ab38:
    uVar26 = uStack_288;
    ppppppplVar50 = (long *******)&uStack_258;
    ppppppplVar38 = (long *******)(ulong)uStack_288;
    uVar56 = 3;
    if ((0xffffbfff < uStack_288 - 0x4001) && (uStack_274 < 0x4001)) {
      if (uStack_274 != 0) {
        uVar18 = uStack_1b8;
        if (-1 < (char)bStack_1a9) {
          uVar18 = (ulong)bStack_1a9;
        }
        if (uVar18 == 0) goto LAB_10a78b1b8;
      }
      uVar44 = (uint)ppuVar51;
      if ((uVar44 < 0x4001) &&
         ((pppppplStack_658 = (long ******)(ulong)uVar47,
          pppppplStack_668 = (long ******)ppppppplVar38, (long *******)pppppplVar24 == ppppppplVar25
          || (ppppppplVar20 = (long *******)ppuVar51, uVar53 == 3)))) {
        uStack_660 = (ulong)uVar53;
        cStack_2a1 = uStack_274 != 0;
        lStack_2d8 = 0;
        lStack_2e0 = 0;
        uStack_2c8 = 0;
        cStack_2c4 = 0;
        uStack_2d0 = 0;
        uStack_2cb = 0;
        uStack_2c0 = 0;
        uStack_2b0 = 0;
        pppppplStack_2b8 = (long ******)0x0;
        FUN_10a7a48fc(&lStack_2e0,pppppplStack_2a0,lStack_298,
                      (lStack_298 - (long)pppppplStack_2a0 >> 4) * -0x5555555555555555);
        uStack_2c8 = uStack_288;
        cStack_2c4 = cStack_284;
        FUN_10a78c550(&uStack_2c0,
                      ((long)pppppplStack_118 - (long)pppppplStack_120 >> 4) * 0x6db6db6db6db6db7);
        pppppplVar24 = pppppplStack_118;
        for (ppppppplVar20 = (long *******)pppppplStack_120;
            ppppppplVar20 != (long *******)pppppplVar24; ppppppplVar20 = ppppppplVar20 + 0xe) {
          if (*(char *)((long)ppppppplVar20 + 0x17) < '\0') {
            func_0x000107c3192c(&uStack_e0,*ppppppplVar20,ppppppplVar20[1]);
          }
          else {
            uStack_e0 = (long *******)*ppppppplVar20;
            uStack_d0 = SUB87(ppppppplVar20[2],0);
            uStack_c9 = (undefined1)((ulong)ppppppplVar20[2] >> 0x38);
            uStack_d8 = SUB87(ppppppplVar20[1],0);
            uStack_d1 = (undefined1)((ulong)ppppppplVar20[1] >> 0x38);
          }
          uStack_c8 = ppppppplVar20[3];
          if (*(char *)((long)ppppppplVar20 + 0x37) < '\0') {
            func_0x000107c3192c(auStack_c0,ppppppplVar20[4],ppppppplVar20[5]);
          }
          else {
            ppppplStack_b8 = (long *****)ppppppplVar20[5];
            auStack_c0 = (undefined1  [8])ppppppplVar20[4];
            ppppplStack_b0 = (long *****)ppppppplVar20[6];
          }
          uStack_a8 = ppppppplVar20[7];
          if (*(char *)((long)ppppppplVar20 + 0x57) < '\0') {
            func_0x000107c3192c(&uStack_a0,ppppppplVar20[8],ppppppplVar20[9]);
          }
          else {
            uStack_98 = ppppppplVar20[9];
            uStack_a0 = ppppppplVar20[8];
            uStack_90 = ppppppplVar20[10];
          }
          uStack_88 = *(undefined4 *)(ppppppplVar20 + 0xb);
          func_0x00010a78c60c(&uStack_2c0,&uStack_e0);
        }
        func_0x000107c2b07c(auStack_320,&UNK_10f674def);
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        uStack_2f0 = 0;
        uStack_2eb = 0;
        if (cStack_2a1 == '\x01') {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (auStack_320,&ppppplStack_1c0);
          pppplStack_308 = pppplStack_1a8;
          FUN_10a7a48fc(&uStack_300,ppppplStack_250,lStack_248,
                        (lStack_248 - (long)ppppplStack_250 >> 4) * -0x5555555555555555);
          uStack_2e8 = uStack_238;
          uStack_2e4 = uStack_234;
        }
        pcStack_340 = &cStack_2a1;
        puStack_338 = auStack_184;
        puStack_330 = &uStack_274;
        puStack_328 = auStack_320;
        uStack_348 = 0;
        plStack_350 = (long *)0x0;
        pppppplStack_368 = (long ******)0x0;
        uStack_370 = 0;
        ppppplStack_360 = (long *****)0xffffffff;
        bStack_358 = 0;
        pppppplStack_3c8 = (long ******)((ulong)pppppplStack_3c8 & 0xffffffffffffff00);
        bStack_378 = 0;
        uStack_e0 = (long *******)*param_5;
        uStack_d8 = (undefined7)param_5[1];
        uStack_d1 = (undefined1)((ulong)param_5[1] >> 0x38);
        uStack_d0 = (undefined7)param_5[2];
        uStack_c9 = (undefined1)((ulong)param_5[2] >> 0x38);
        uStack_c8 = (long ******)CONCAT44(uStack_c8._4_4_,(int)param_5[3]);
        pppppplVar24 = param_1 + 0x14;
        FUN_10a7b20fc(pppppplVar24,&uStack_e0);
        if (pppppplVar24 != (long ******)0x0) {
          FUN_10a78c808(pppppplVar24 + 6);
          ppppplVar49 = pppppplVar24[6];
          ppppplVar5 = pppppplVar24[7];
          if (ppppplVar49 != ppppplVar5) {
            do {
              pppppplStack_470 = (long ******)0x0;
              pppplVar19 = ppppplVar49[1];
              if (pppplVar19 != (long ****)0x0) {
                __ZNSt3__119__shared_weak_count4lockEv();
                if (pppplVar19 != (long ****)0x0) {
                  pppppplStack_470 = (long ******)*ppppplVar49;
                }
                pppppplVar24 = pppppplStack_470;
                ppplStack_468 = (long ***)pppplVar19;
                if (((((long *******)pppppplStack_470 != (long *******)0x0) &&
                     ((long ******)pppppplStack_470[7] != (long ******)0x0)) &&
                    (*(char *)((long)pppppplStack_470 + 0x1c) == cStack_2c4)) &&
                   (*(uint *)(pppppplStack_470 + 3) == uStack_2c8)) {
                  pppppplVar54 = (long ******)*pppppplStack_470;
                  lVar46 = (long)pppppplStack_470[1] - (long)pppppplVar54;
                  if (lVar46 == lStack_2d8 - lStack_2e0) {
                    if ((long ******)pppppplStack_470[1] != pppppplVar54) {
                      lVar46 = (lVar46 >> 4) * -0x5555555555555555;
                      piVar28 = (int *)(lStack_2e0 + 0x28);
                      pppppplVar54 = pppppplVar54 + 5;
                      do {
                        if (((pppppplVar54[-2] != *(long ******)(piVar28 + -4)) ||
                            (*(short *)(pppppplVar54 + -1) != (short)piVar28[-2])) ||
                           (*(int *)((long)pppppplVar54 + -4) != piVar28[-1])) goto LAB_10a78aff4;
                        if (*(int *)pppppplVar54 != *piVar28) goto LAB_10a78aff4;
                        lVar46 = lVar46 + -1;
                        piVar28 = piVar28 + 0xc;
                        pppppplVar54 = pppppplVar54 + 6;
                      } while (lVar46 != 0);
                    }
                    uVar18 = uStack_2c0;
                    FUN_10a78ca04(uStack_2c0,pppppplStack_2b8,pppppplStack_470[4],
                                  pppppplStack_470[5]);
                    if ((((int)uVar18 != 0) &&
                        (pppppplVar54 = (long ******)pppppplVar24[0xb],
                        pppppplVar54 != (long ******)0x0)) &&
                       (((*(uint *)pppppplVar54 == uVar26 &&
                         ((((uint)(*(int *)(pppppplVar54 + 10) -
                                  (int)((ulong)((long)pppppplVar54[5] - (long)pppppplVar54[4]) >> 2)
                                  ) < *(uint *)((long)pppppplVar54 + 4) &&
                           (ppppppplVar20 = (long *******)pppppplStack_140,
                           FUN_10a78ca70(pppppplStack_140,pppppplVar24[0x17],pppppplVar24[0x18]),
                           (int)ppppppplVar20 != 0)) &&
                          ((uVar44 != 0) != ((long ******)pppppplVar24[0xd] == (long ******)0x0)))))
                        && ((uVar44 == 0 || (*(uint *)pppppplVar24[0xd] == uVar44)))))) {
                      FUN_10a78cb7c(&pppppplStack_610,&pcStack_340,pppppplVar24);
                      if ((bStack_5f0 & 1) != 0) {
                        pppppplVar24 = (long ******)pppppplStack_470[0xb];
                        uVar7 = *(undefined4 *)(pppppplVar24 + 10);
                        func_0x00010a77e910();
                        uStack_66c = (uint)pppppplVar24;
                        pppppplVar54 = (long ******)pppppplStack_470[0xd];
                        if (pppppplVar54 == (long ******)0x0) {
                          uVar45 = 0;
                          uVar53 = 0xffffffff;
                        }
                        else {
                          uVar45 = *(undefined4 *)(pppppplVar54 + 10);
                          func_0x00010a77e910();
                          uVar53 = (uint)pppppplVar54;
                        }
                        pppppplVar54 = uStack_98;
                        ppppppplVar20 = (long *******)pppppplStack_470[0xb];
                        ppppplStack_3d0 = pppppplStack_470[0xc];
                        if ((long ******)ppppplStack_3d0 != (long ******)0x0) {
                          pppppplVar33 = (long ******)(ppppplStack_3d0 + 1);
                          do {
                            cVar11 = '\x01';
                            bVar17 = (bool)ExclusiveMonitorPass(pppppplVar33,0x10);
                            if (bVar17) {
                              *pppppplVar33 = (long *****)((long)*pppppplVar33 + 1);
                              cVar11 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar11 != '\0');
                        }
                        pppppplStack_3d8 = (long ******)ppppppplVar20;
                        if ((bStack_5f0 & 1) == 0) goto LAB_10a78c06c;
                        pppppplStack_3e8 = pppppplStack_610;
                        ppppplStack_3e0 = ppppplStack_608;
                        if ((long ******)ppppplStack_608 != (long ******)0x0) {
                          pppppplVar33 = (long ******)(ppppplStack_608 + 1);
                          do {
                            cVar11 = '\x01';
                            bVar17 = (bool)ExclusiveMonitorPass(pppppplVar33,0x10);
                            if (bVar17) {
                              *pppppplVar33 = (long *****)((long)*pppppplVar33 + 1);
                              cVar11 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar11 != '\0');
                          if ((bStack_5f0 & 1) == 0) goto LAB_10a78c06c;
                        }
                        auStack_c0 = (undefined1  [8])pppppplStack_470[0xd];
                        ppppplStack_b8 = pppppplStack_470[0xe];
                        if ((long ******)ppppplStack_b8 != (long ******)0x0) {
                          pppppplVar33 = (long ******)(ppppplStack_b8 + 1);
                          do {
                            cVar11 = '\x01';
                            bVar17 = (bool)ExclusiveMonitorPass(pppppplVar33,0x10);
                            if (bVar17) {
                              *pppppplVar33 = (long *****)((long)*pppppplVar33 + 1);
                              cVar11 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar11 != '\0');
                        }
                        uStack_d8 = SUB87(ppppplStack_3d0,0);
                        uStack_d1 = (undefined1)((ulong)ppppplStack_3d0 >> 0x38);
                        ppppplStack_3d0 = (long *****)0x0;
                        pppppplStack_3d8 = (long ******)0x0;
                        uStack_d0 = SUB87(pppppplStack_610,0);
                        uStack_c9 = (undefined1)((ulong)pppppplStack_610 >> 0x38);
                        uStack_c8 = (long ******)ppppplStack_608;
                        ppppplStack_3e0 = (long *****)0x0;
                        pppppplStack_3e8 = (long ******)0x0;
                        uStack_3f0 = 0;
                        uStack_3f8 = 0;
                        ppppplStack_b0 = (long *****)CONCAT44((uint)uStack_600,uStack_66c);
                        uStack_a8 = (long ******)CONCAT44(uVar7,uVar53);
                        uStack_a0 = (long ******)CONCAT44(uVar45,uStack_600._4_4_);
                        uStack_98._0_2_ =
                             CONCAT11(((long *******)pppppplStack_610 != (long *******)0x0 &&
                                      (uint)uStack_600 != -1) &&
                                      ((long *******)pppppplStack_610 == (long *******)0x0 ||
                                      -2 < (int)(uint)uStack_600),
                                      (byte)~(byte)((ulong)pppppplVar24 >> 0x18) >> 7);
                        uStack_98._3_5_ = SUB85(pppppplVar54,3);
                        uStack_98._0_3_ =
                             CONCAT12(uVar53 < 0x80000000 && auStack_c0 != (undefined1  [8])0x0,
                                      (undefined2)uStack_98);
                        uStack_e0 = ppppppplVar20;
                        FUN_10a7ad3c4(&uStack_3f8);
                        FUN_10a7ad3c4(&pppppplStack_3e8);
                        FUN_10a7ad3c4(&pppppplStack_3d8);
                        if (-1 < (int)uStack_66c) {
                          if (cStack_2a1 == '\x01') {
                            if ((bStack_5f0 & 1) == 0) goto LAB_10a78c06c;
                            if ((int)(uint)uStack_600 < 0) goto LAB_10a78b184;
                          }
                          if (uVar53 < 0x80000000 && uVar53 == uStack_66c || uVar44 == 0)
                          goto LAB_10a78c000;
                        }
LAB_10a78b184:
                        func_0x00010a78ce1c(&uStack_e0);
                        if (bStack_5f0 == 1) {
                          FUN_10a7ad3c4(&pppppplStack_610);
                        }
                      }
                      func_0x00010a4369b0(&pppppplStack_470);
                      goto LAB_10a78b028;
                    }
                  }
                }
LAB_10a78aff4:
                if (pppplVar19 != (long ****)0x0) {
                  pppplVar2 = pppplVar19 + 1;
                  do {
                    ppplVar29 = *pppplVar2;
                    cVar11 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
                    if (bVar17) {
                      *pppplVar2 = (long ***)((long)ppplVar29 + -1);
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (ppplVar29 == (long ***)0x0) {
                    (*(code *)(*pppplVar19)[2])(pppplVar19);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar19);
                  }
                }
              }
LAB_10a78b028:
              ppppplVar49 = ppppplVar49 + 2;
            } while (ppppplVar49 != ppppplVar5);
          }
        }
        uStack_66c = 0;
        goto LAB_10a78b228;
      }
    }
    goto LAB_10a78b1b8;
  }
  goto LAB_10a78b1b4;
}



/* Entry: 10a78c404; end: 10a78c4f3;  */

bool FUN_10a78c404(undefined2 param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = false;
  switch(param_1) {
  case 1:
    bVar1 = param_2 == '\x02';
    break;
  case 2:
    bVar1 = param_2 == '\x01';
    break;
  case 3:
    bVar1 = param_2 == '\0';
    break;
  case 6:
    bVar1 = param_2 == '\t';
    break;
  case 7:
    bVar1 = param_2 == '\x03';
    break;
  case 8:
    bVar1 = param_2 == '\x04';
    break;
  case 9:
    bVar1 = param_2 == '\x05';
    break;
  case 10:
    bVar1 = param_2 == '\a';
    break;
  case 0xb:
    bVar1 = param_2 == '\b';
    break;
  case 0x16:
    bVar1 = param_2 == '\x06';
    break;
  case 0x1f:
    bVar1 = param_2 == '\n';
    break;
  case 0x22:
    bVar1 = param_2 == '\v';
    break;
  case 0x23:
    bVar1 = param_2 == '\f';
    break;
  case 0x24:
    bVar1 = param_2 == '\r';
    break;
  case 0x25:
    bVar1 = param_2 == '\x0e';
    break;
  case 0x26:
    bVar1 = param_2 == '\x0f';
  }
  return bVar1;
}



/* Entry: 10a78c4f4; end: 10a78c54f;  */

long * FUN_10a78c4f4(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    FUN_10a7a48fc(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 4) * -0x5555555555555555);
  }
  lVar1 = param_2[3];
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(int *)(param_1 + 3) = (int)lVar1;
  return param_1;
}



/* Entry: 10a78c550; end: 10a78c7b7;  */

long * FUN_10a78c550(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
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
  
  lVar5 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar5 >> 5) * -0x5555555555555555) < param_2) {
    if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_2) {
      FUN_10a7a4be0();
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        uVar10 = param_2[1];
        uVar8 = *param_2;
        puVar3[2] = param_2[2];
        puVar3[1] = uVar10;
        *puVar3 = uVar8;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        puVar3[3] = param_2[3];
        uVar10 = param_2[5];
        uVar8 = param_2[4];
        puVar3[6] = param_2[6];
        puVar3[5] = uVar10;
        puVar3[4] = uVar8;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[4] = 0;
        puVar3[7] = param_2[7];
        uVar10 = param_2[9];
        uVar8 = param_2[8];
        puVar3[10] = param_2[10];
        puVar3[9] = uVar10;
        puVar3[8] = uVar8;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[8] = 0;
        *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(param_2 + 0xb);
        puVar3 = puVar3 + 0xc;
        plVar2 = param_1;
      }
      else {
        lVar5 = (long)puVar3 - *param_1;
        uVar6 = (lVar5 >> 5) * -0x5555555555555555 + 1;
        if (0x2aaaaaaaaaaaaaa < uVar6) {
          FUN_10a7a4be0();
          if (*(char *)((long)param_1 + 0x57) < '\0') {
            __ZdlPv(param_1[8]);
          }
          if (*(char *)((long)param_1 + 0x37) < '\0') {
            __ZdlPv(param_1[4]);
          }
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            __ZdlPv(*param_1);
          }
          return param_1;
        }
        lVar7 = param_1[2] - *param_1 >> 5;
        uVar9 = lVar7 * 0x5555555555555556;
        if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
          uVar9 = uVar6;
        }
        if (0x155555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
          uVar9 = 0x2aaaaaaaaaaaaaa;
        }
        puVar4 = param_2;
        plStack_98 = param_1;
        FUN_10a7a4bf4();
        puVar1 = (undefined8 *)(uVar9 + lVar5);
        uVar8 = param_2[2];
        uVar10 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar10;
        puVar1[2] = uVar8;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        puVar1[3] = param_2[3];
        uVar10 = param_2[5];
        uVar8 = param_2[4];
        puVar1[6] = param_2[6];
        puVar1[5] = uVar10;
        puVar1[4] = uVar8;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[4] = 0;
        puVar1[7] = param_2[7];
        uVar10 = param_2[9];
        uVar8 = param_2[8];
        puVar1[10] = param_2[10];
        puVar1[9] = uVar10;
        puVar1[8] = uVar8;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[8] = 0;
        *(undefined4 *)(puVar1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
        puVar3 = puVar1 + 0xc;
        lVar5 = (long)puVar1 + (*param_1 - param_1[1]);
        func_0x00010a7a4c38(*param_1,param_1[1],lVar5);
        lStack_b8 = *param_1;
        *param_1 = lVar5;
        param_1[1] = (long)puVar3;
        lStack_a0 = param_1[2];
        param_1[2] = uVar9 + (long)puVar4 * 0x60;
        plVar2 = &lStack_b8;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a7a4d3c(plVar2);
      }
      param_1[1] = (long)puVar3;
      return plVar2;
    }
    lVar7 = param_1[1];
    puVar3 = param_2;
    plStack_38 = param_1;
    FUN_10a7a4bf4();
    lVar5 = (long)param_2 + (lVar7 - lVar5);
    lVar7 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010a7a4c38(*param_1,param_1[1],lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar5;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)puVar3 * 0xc);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a7a4d3c(param_1);
  }
  return param_1;
}



/* Entry: 10a78c7b8; end: 10a78c807;  */

undefined8 * FUN_10a78c7b8(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a78c808; end: 10a78ca03;  */

/* WARNING: Removing unreachable block (ram,0x00010a78c980) */
/* WARNING: Removing unreachable block (ram,0x00010a78c990) */
/* WARNING: Removing unreachable block (ram,0x00010a78c9ac) */
/* WARNING: Removing unreachable block (ram,0x00010a78c9b0) */
/* WARNING: Removing unreachable block (ram,0x00010a78c9c4) */

void FUN_10a78c808(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  plVar11 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  do {
    plVar9 = plVar3;
    if (plVar11 == plVar3) {
LAB_10a78c968:
      plVar11 = (long *)param_1[1];
      if (plVar11 < plVar9) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a78ca04);
        (*pcVar7)();
      }
      if (plVar9 != plVar11) {
        for (; plVar11 != plVar9; plVar11 = plVar11 + -2) {
          if (plVar11[-1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        param_1[1] = plVar9;
      }
      return;
    }
    plVar9 = (long *)plVar11[1];
    if ((plVar9 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0)
       ) {
LAB_10a78c8a8:
      plVar9 = plVar11;
      plVar1 = plVar11;
      if (plVar11 != plVar3) {
        while (plVar6 = plVar1 + 2, plVar9 = plVar11, plVar6 != plVar3) {
          plVar9 = (long *)plVar1[3];
          plVar1 = plVar6;
          if ((plVar9 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
            lVar10 = *plVar6;
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0x38) == 0)) {
              bVar8 = true;
            }
            else {
              bVar8 = *(long *)(lVar10 + 0x58) == 0;
            }
            plVar2 = plVar9 + 1;
            do {
              lVar10 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
            if (!bVar8) {
              lVar13 = plVar6[1];
              lVar12 = *plVar6;
              *plVar6 = 0;
              plVar6[1] = 0;
              lVar10 = plVar11[1];
              plVar11[1] = lVar13;
              *plVar11 = lVar12;
              if (lVar10 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              plVar11 = plVar11 + 2;
            }
          }
        }
      }
      goto LAB_10a78c968;
    }
    lVar10 = *plVar11;
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x38) == 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = *(long *)(lVar10 + 0x58) == 0;
    }
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    if (bVar8) goto LAB_10a78c8a8;
    plVar11 = plVar11 + 2;
  } while( true );
}



/* Entry: 10a78ca04; end: 10a78ca6f;  */

undefined8 FUN_10a78ca04(long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = param_3;
  FUN_10a790984(param_3,param_4,param_1,param_2);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if (param_3 == param_4) {
    return 1;
  }
  if (param_1 == param_2) {
    return 0;
  }
LAB_10a7909bc:
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = param_1;
  do {
    if ((*(long *)(lVar8 + 0x18) == lVar7) && (*(long *)(lVar8 + 0x38) == *(long *)(param_3 + 0x38))
       ) {
      bVar3 = *(byte *)(lVar8 + 0x57);
      uVar5 = *(ulong *)(lVar8 + 0x48);
      if (-1 < (char)bVar3) {
        uVar5 = (ulong)bVar3;
      }
      bVar4 = *(byte *)(param_3 + 0x57);
      uVar1 = *(ulong *)(param_3 + 0x48);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar5 == uVar1) {
        plVar6 = (long *)*(long *)(lVar8 + 0x40);
        if (-1 < (char)bVar3) {
          plVar6 = (long *)(lVar8 + 0x40);
        }
        plVar2 = (long *)*(long *)(param_3 + 0x40);
        if (-1 < (char)bVar4) {
          plVar2 = (long *)(param_3 + 0x40);
        }
        _memcmp(plVar6,plVar2);
        if (((int)plVar6 == 0) && (*(int *)(lVar8 + 0x58) == *(int *)(param_3 + 0x58))) break;
      }
    }
    lVar8 = lVar8 + 0x60;
    if (lVar8 == param_2) {
      return 0;
    }
  } while( true );
  param_3 = param_3 + 0x60;
  if (param_3 == param_4) {
    return 1;
  }
  goto LAB_10a7909bc;
}



/* Entry: 10a78ca70; end: 10a78cb7b;  */

undefined8 FUN_10a78ca70(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_1 != (long *)0x0) {
    uVar5 = param_3 - 1;
    do {
      if (param_3 != 0) {
        uVar4 = param_1[5];
        if ((param_3 & uVar5) == 0) {
          uVar6 = uVar4 & uVar5;
        }
        else {
          uVar6 = uVar4;
          if (param_3 <= uVar4) {
            uVar6 = 0;
            if (param_3 != 0) {
              uVar6 = uVar4 / param_3;
            }
            uVar6 = uVar4 - uVar6 * param_3;
          }
        }
        plVar7 = *(long **)(param_2 + uVar6 * 8);
        if (plVar7 != (long *)0x0) {
          do {
            while( true ) {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_10a78cb60;
              uVar8 = plVar7[1];
              if (uVar4 != uVar8) break;
              if (plVar7[5] == uVar4) {
                plVar7 = (long *)plVar7[6];
                if (plVar7 != (long *)0x0) {
                  uVar1 = *(uint *)(param_1 + 6);
                  uVar4 = (ulong)uVar1;
                  if (*(uint *)((long)plVar7 + 0x1c) == uVar1) {
                    uVar8 = plVar7[1] - *plVar7;
                    uVar6 = 0;
                    if (uVar4 != 0) {
                      uVar6 = uVar8 / uVar4;
                    }
                    if (uVar8 == uVar6 * uVar4) {
                      uVar2 = 0;
                      if (uVar1 != 0) {
                        uVar2 = 0x4000 / uVar1;
                      }
                      uVar1 = *(uint *)(plVar7 + 3);
                      if (uVar2 < uVar1) {
                        return 0;
                      }
                      if (uVar6 != uVar1) {
                        return 0;
                      }
                      if ((*(uint *)((long)param_1 + 0x34) <= uVar2 - uVar1) &&
                         (uVar8 <= 0x4000U - param_1[7])) goto LAB_10a78cb60;
                    }
                  }
                }
                return 0;
              }
            }
            if ((param_3 & uVar5) == 0) {
              uVar8 = uVar8 & uVar5;
            }
            else if (param_3 <= uVar8) {
              uVar3 = 0;
              if (param_3 != 0) {
                uVar3 = uVar8 / param_3;
              }
              uVar8 = uVar8 - uVar3 * param_3;
            }
          } while (uVar8 == uVar6);
        }
      }
LAB_10a78cb60:
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  return 1;
}



/* Entry: 10a78cb7c; end: 10a78cd8f;  */

void FUN_10a78cb7c(long *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  lStack_38 = 0;
  lStack_40 = 0;
  uStack_30 = 0xffffffff;
  uStack_28 = 0;
  if ((*(byte *)*param_2 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar2 = (long *)(param_3 + 0xa8);
    plVar7 = (long *)*plVar2;
    if (plVar7 == (long *)0x0) {
LAB_10a78cc00:
      FUN_10a7b1ef4(&lStack_50,*(undefined4 *)param_2[2]);
      uStack_28 = 1;
      lVar4 = lStack_50;
      lVar10 = lStack_48;
    }
    else {
      plVar5 = plVar2;
      do {
        lVar4 = 8;
        if (*(uint *)param_2[1] <= *(uint *)(plVar7 + 4)) {
          lVar4 = 0;
          plVar5 = plVar7;
        }
        plVar7 = *(long **)((long)plVar7 + lVar4);
      } while (plVar7 != (long *)0x0);
      if ((plVar5 == plVar2) || (*(uint *)param_2[1] < *(uint *)(plVar5 + 4))) goto LAB_10a78cc00;
      piVar1 = (int *)plVar5[0xd];
      if ((((piVar1 == (int *)0x0) || (*piVar1 != *(int *)param_2[2])) ||
          (lVar4 = param_2[3], plVar5[8] != *(long *)(lVar4 + 0x18))) ||
         ((*(char *)((long)plVar5 + 100) != *(char *)(lVar4 + 0x3c) ||
          ((int)plVar5[0xc] != *(int *)(lVar4 + 0x38))))) {
LAB_10a78cd70:
        uVar3 = 0;
        *(undefined1 *)param_1 = 0;
        goto LAB_10a78cc58;
      }
      lVar10 = plVar5[9];
      lVar9 = plVar5[10] - lVar10;
      if (lVar9 != *(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20)) goto LAB_10a78cd70;
      if (plVar5[10] != lVar10) {
        lVar9 = (lVar9 >> 4) * -0x5555555555555555;
        piVar6 = (int *)(*(long *)(lVar4 + 0x20) + 0x28);
        piVar8 = (int *)(lVar10 + 0x28);
        do {
          if (((*(long *)(piVar8 + -4) != *(long *)(piVar6 + -4)) ||
              ((short)piVar8[-2] != (short)piVar6[-2])) || (piVar8[-1] != piVar6[-1]))
          goto LAB_10a78cd70;
          if (*piVar8 != *piVar6) goto LAB_10a78cd70;
          lVar9 = lVar9 + -1;
          piVar6 = piVar6 + 0xc;
          piVar8 = piVar8 + 0xc;
        } while (lVar9 != 0);
      }
      if ((uint)piVar1[1] <=
          (uint)(piVar1[0x14] - (int)((ulong)(*(long *)(piVar1 + 10) - *(long *)(piVar1 + 8)) >> 2))
         ) goto LAB_10a78cd70;
      func_0x00010a7a4d88(&lStack_40,piVar1,plVar5[0xe]);
      lVar4 = lStack_40;
      lVar10 = lStack_38;
    }
    lVar9 = lVar4;
    uStack_30._4_4_ = *(undefined4 *)(lVar4 + 0x50);
    func_0x00010a77e910();
    uStack_30 = CONCAT44(uStack_30._4_4_,(int)lVar9);
    param_1[1] = lVar10;
    *param_1 = lVar4;
  }
  param_1[2] = uStack_30;
  *(undefined1 *)(param_1 + 3) = uStack_28;
  uVar3 = 1;
LAB_10a78cc58:
  *(undefined1 *)(param_1 + 4) = uVar3;
  return;
}



/* Entry: 10a78cd90; end: 10a78cfa7;  */

void FUN_10a78cd90(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 10) == '\x01') {
    func_0x00010a78ce1c();
    *(undefined1 *)(param_1 + 10) = 0;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[8] = param_2[8];
  uVar1 = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 9) = 0;
  *(undefined1 *)(param_1 + 9) = uVar1;
  uVar1 = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_2 + 0x49) = 0;
  *(undefined1 *)((long)param_1 + 0x49) = uVar1;
  uVar1 = *(undefined1 *)((long)param_2 + 0x4a);
  *(undefined1 *)((long)param_2 + 0x4a) = 0;
  *(undefined1 *)((long)param_1 + 0x4a) = uVar1;
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



/* Entry: 10a78cfa8; end: 10a78d08b;  */

long ***** FUN_10a78cfa8(long *****param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *****ppppplVar4;
  long lVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ***ppplVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long ***appplStack_a8 [2];
  undefined8 *puStack_98;
  long ****pppplStack_58;
  long ***ppplStack_50;
  long ***ppplStack_48;
  long ****pppplStack_40;
  long ****pppplStack_38;
  
  pppplVar6 = *param_1;
  if ((undefined8 *)(((long)param_1[2] - (long)pppplVar6 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
    if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
      FUN_10a7a4fe4();
      func_0x00010a7a50e4(&pppplStack_58);
      __Unwind_Resume();
      pppplVar6 = param_1[1];
      if (pppplVar6 < param_1[2]) {
        ppplVar8 = (long ***)*param_2;
        pppplVar6[1] = (long ***)param_2[1];
        *pppplVar6 = ppplVar8;
        *param_2 = 0;
        param_2[1] = 0;
        pppplVar6[2] = (long ***)0x0;
        pppplVar6[3] = (long ***)0x0;
        pppplVar6[4] = (long ***)0x0;
        ppplVar8 = (long ***)param_2[2];
        pppplVar6[3] = (long ***)param_2[3];
        pppplVar6[2] = ppplVar8;
        pppplVar6[4] = (long ***)param_2[4];
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        *(undefined4 *)(pppplVar6 + 5) = *(undefined4 *)(param_2 + 5);
        pppplVar6 = pppplVar6 + 6;
        ppppplVar4 = param_1;
      }
      else {
        lVar5 = ((long)pppplVar6 - (long)*param_1 >> 4) * -0x5555555555555555;
        uVar1 = lVar5 + 1;
        if (0x555555555555555 < uVar1) {
          FUN_10a7a4dfc();
          if (param_1[2] != (long ****)0x0) {
            param_1[3] = param_1[2];
            __ZdlPv();
          }
          pppplVar6 = param_1[1];
          if (pppplVar6 != (long ****)0x0) {
            pppplVar7 = pppplVar6 + 1;
            do {
              ppplVar8 = *pppplVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
              if (bVar3) {
                *pppplVar7 = (long ***)((long)ppplVar8 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppplVar8 == (long ***)0x0) {
              (*(code *)(*pppplVar6)[2])(pppplVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar6);
            }
          }
          return param_1;
        }
        lVar9 = (long)param_1[2] - (long)*param_1 >> 4;
        uVar10 = lVar9 * 0x5555555555555556;
        if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
          uVar10 = uVar1;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar10 = 0x555555555555555;
        }
        FUN_10a7a4e10(appplStack_a8,uVar10,lVar5,param_1);
        uVar11 = *param_2;
        puStack_98[1] = param_2[1];
        *puStack_98 = uVar11;
        *param_2 = 0;
        param_2[1] = 0;
        puStack_98[3] = 0;
        puStack_98[4] = 0;
        puStack_98[2] = 0;
        uVar11 = param_2[2];
        puStack_98[3] = param_2[3];
        puStack_98[2] = uVar11;
        puStack_98[4] = param_2[4];
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        *(undefined4 *)(puStack_98 + 5) = *(undefined4 *)(param_2 + 5);
        puStack_98 = puStack_98 + 6;
        FUN_10a7a4e88(param_1,appplStack_a8);
        pppplVar6 = param_1[1];
        ppppplVar4 = (long *****)appplStack_a8;
        FUN_10a7a4f68(ppppplVar4);
      }
      param_1[1] = pppplVar6;
      return ppppplVar4;
    }
    pppplVar7 = param_1[1];
    ppppplVar4 = param_1;
    pppplStack_38 = (long ****)param_1;
    FUN_10a7a4ff8();
    pppplVar6 = (long ****)((long)ppppplVar4 + ((long)pppplVar7 - (long)pppplVar6));
    pppplVar7 = (long ****)((long)pppplVar6 + ((long)*param_1 - (long)param_1[1]));
    pppplStack_58 = (long ****)ppppplVar4;
    ppplStack_50 = (long ***)pppplVar6;
    ppplStack_48 = (long ***)pppplVar6;
    pppplStack_40 = (long ****)(ppppplVar4 + (long)param_2 * 0xb);
    func_0x00010a7a5040(param_1,*param_1,param_1[1],pppplVar7);
    pppplStack_58 = *param_1;
    *param_1 = pppplVar7;
    param_1[1] = pppplVar6;
    pppplStack_40 = param_1[2];
    param_1[2] = (long ****)(ppppplVar4 + (long)param_2 * 0xb);
    param_1 = &pppplStack_58;
    ppplStack_50 = (long ***)pppplStack_58;
    ppplStack_48 = (long ***)pppplStack_58;
    func_0x00010a7a50e4(param_1);
  }
  return param_1;
}



/* Entry: 10a78d08c; end: 10a78d1eb;  */

long * FUN_10a78d08c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long alStack_48 [2];
  undefined8 *puStack_38;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar10;
    *param_2 = 0;
    param_2[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    uVar10 = param_2[2];
    puVar8[3] = param_2[3];
    puVar8[2] = uVar10;
    puVar8[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(param_2 + 5);
    puVar8 = puVar8 + 6;
    plVar9 = param_1;
  }
  else {
    lVar5 = ((long)puVar8 - *param_1 >> 4) * -0x5555555555555555;
    uVar1 = lVar5 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_10a7a4dfc();
      if (param_1[2] != 0) {
        param_1[3] = param_1[2];
        __ZdlPv();
      }
      plVar9 = (long *)param_1[1];
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      return param_1;
    }
    lVar6 = param_1[2] - *param_1 >> 4;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar7 = 0x555555555555555;
    }
    FUN_10a7a4e10(alStack_48,uVar7,lVar5,param_1);
    uVar10 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar10;
    *param_2 = 0;
    param_2[1] = 0;
    puStack_38[3] = 0;
    puStack_38[4] = 0;
    puStack_38[2] = 0;
    uVar10 = param_2[2];
    puStack_38[3] = param_2[3];
    puStack_38[2] = uVar10;
    puStack_38[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined4 *)(puStack_38 + 5) = *(undefined4 *)(param_2 + 5);
    puStack_38 = puStack_38 + 6;
    FUN_10a7a4e88(param_1,alStack_48);
    puVar8 = (undefined8 *)param_1[1];
    plVar9 = alStack_48;
    FUN_10a7a4f68(plVar9);
  }
  param_1[1] = (long)puVar8;
  return plVar9;
}



/* Entry: 10a78d1ec; end: 10a78d3cb;  */

long *** FUN_10a78d1ec(long ***param_1,undefined8 *param_2)

{
  long **pplVar1;
  long ***ppplVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long **pplVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long **pplStack_58;
  long *plStack_50;
  long *plStack_48;
  long **pplStack_40;
  long **pplStack_38;
  
  pplVar7 = param_1[1];
  if (pplVar7 < param_1[2]) {
    plVar10 = (long *)param_2[1];
    plVar8 = (long *)*param_2;
    pplVar7[2] = (long *)param_2[2];
    pplVar7[1] = plVar10;
    *pplVar7 = plVar8;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    pplVar7[3] = (long *)param_2[3];
    plVar10 = (long *)param_2[5];
    plVar8 = (long *)param_2[4];
    pplVar7[6] = (long *)param_2[6];
    pplVar7[5] = plVar10;
    pplVar7[4] = plVar8;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    pplVar7[7] = (long *)param_2[7];
    plVar8 = (long *)param_2[8];
    pplVar7[9] = (long *)param_2[9];
    pplVar7[8] = plVar8;
    param_2[8] = 0;
    param_2[9] = 0;
    pplVar7[10] = (long *)param_2[10];
    pplVar7 = pplVar7 + 0xb;
    ppplVar2 = param_1;
  }
  else {
    lVar6 = (long)pplVar7 - (long)*param_1;
    uVar3 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar3) {
      FUN_10a7a4fe4();
      func_0x00010a7a50e4(&pplStack_58);
      __Unwind_Resume();
      func_0x00010a7ad50c(param_1 + 8);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    lVar4 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar5 = lVar4 * 0x5d1745d1745d1746;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    pplStack_38 = (long **)param_1;
    if (uVar5 == 0) {
      ppplVar2 = (long ***)0x0;
    }
    else {
      ppplVar2 = param_1;
      FUN_10a7a4ff8();
    }
    plStack_50 = (long *)((long)ppplVar2 + lVar6);
    uVar11 = param_2[1];
    uVar9 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar11;
    *plStack_50 = uVar9;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plStack_50[3] = param_2[3];
    uVar11 = param_2[5];
    uVar9 = param_2[4];
    plStack_50[6] = param_2[6];
    plStack_50[5] = uVar11;
    plStack_50[4] = uVar9;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    plStack_50[7] = param_2[7];
    uVar9 = param_2[8];
    plStack_50[9] = param_2[9];
    plStack_50[8] = uVar9;
    param_2[8] = 0;
    param_2[9] = 0;
    plStack_50[10] = param_2[10];
    pplVar7 = (long **)(plStack_50 + 0xb);
    pplVar1 = (long **)((long)plStack_50 + ((long)*param_1 - (long)param_1[1]));
    pplStack_58 = (long **)ppplVar2;
    plStack_48 = (long *)pplVar7;
    pplStack_40 = (long **)(ppplVar2 + uVar5 * 0xb);
    func_0x00010a7a5040(param_1,*param_1,param_1[1],pplVar1);
    pplStack_58 = *param_1;
    *param_1 = pplVar1;
    param_1[1] = pplVar7;
    pplStack_40 = param_1[2];
    param_1[2] = (long **)(ppplVar2 + uVar5 * 0xb);
    ppplVar2 = &pplStack_58;
    plStack_50 = (long *)pplStack_58;
    plStack_48 = (long *)pplStack_58;
    func_0x00010a7a50e4(ppplVar2);
  }
  param_1[1] = pplVar7;
  return ppplVar2;
}



/* Entry: 10a78d3cc; end: 10a78d413;  */

undefined8 * FUN_10a78d3cc(undefined8 *param_1)

{
  func_0x00010a7ad50c(param_1 + 8);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a78d414; end: 10a78d4e3;  */

void FUN_10a78d414(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a7a42a0((undefined8 *)(param_1 + 0x188));
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 400) = param_3[1];
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  *(undefined8 *)(param_1 + 0x198) = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar1 = *(undefined4 *)(param_3 + 3);
  *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)((long)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  if (*(char *)(param_1 + 0x1df) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1c8));
  }
  uVar4 = param_4[1];
  uVar3 = *param_4;
  *(undefined8 *)(param_1 + 0x1d8) = param_4[2];
  *(undefined8 *)(param_1 + 0x1d0) = uVar4;
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  *(undefined8 *)(param_1 + 0x1e0) = param_4[3];
  *(undefined4 *)(param_1 + 0xdc) = param_5;
  *(undefined1 *)(param_1 + 0x262) = 1;
  *(byte *)(param_1 + 0x263) = *(byte *)(param_1 + 0x260) ^ 1;
  return;
}



/* Entry: 10a78d4e4; end: 10a78d56b;  */

void FUN_10a78d4e4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = uVar4;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a7a42a0((undefined8 *)(param_1 + 0x1a8));
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x1b0) = param_3[1];
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b8) = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar1 = *(undefined1 *)((long)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_3 + 3);
  *(undefined1 *)(param_1 + 0x1c4) = uVar1;
  *(undefined1 *)(param_1 + 0x264) = 1;
  *(byte *)(param_1 + 0x265) = *(byte *)(param_1 + 0x260) ^ 1;
  return;
}



/* Entry: 10a78d56c; end: 10a78d687;  */

long * FUN_10a78d56c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    *puVar12 = param_2;
    puVar12[1] = param_3;
    if (param_3 != 0) {
      plVar9 = (long *)(param_3 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar12 = puVar12 + 2;
    plVar6 = param_1;
LAB_10a78d664:
    param_1[1] = (long)puVar12;
    return plVar6;
  }
  plVar9 = (long *)*param_1;
  lVar10 = (long)puVar12 - (long)plVar9;
  lVar13 = lVar10 >> 4;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = param_1[2] - (long)plVar9;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 >> 0x3c == 0) {
      lVar5 = uVar8 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + lVar10);
      *puVar2 = param_2;
      puVar2[1] = param_3;
      if (param_3 != 0) {
        plVar9 = (long *)(param_3 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar9 = (long *)*param_1;
        lVar10 = param_1[1] - (long)plVar9;
        lVar13 = lVar10 >> 4;
      }
      puVar12 = puVar2 + 2;
      plVar11 = puVar2 + lVar13 * -2;
      plVar6 = plVar11;
      _memcpy(plVar11,plVar9,lVar10);
      *param_1 = (long)plVar11;
      param_1[1] = (long)puVar12;
      param_1[2] = lVar5 + uVar8 * 0x10;
      if (plVar9 != (long *)0x0) {
        __ZdlPv(plVar9);
        plVar6 = plVar9;
      }
      goto LAB_10a78d664;
    }
  }
  else {
    FUN_10a7a5218();
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar13 = param_2[1];
    lVar10 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar13;
    *param_1 = lVar10;
  }
  lVar10 = param_2[3];
  param_1[4] = 0;
  param_1[3] = lVar10;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10a7a5130();
  lVar10 = param_2[7];
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(int *)(param_1 + 7) = (int)lVar10;
  return param_1;
}



/* Entry: 10a78d688; end: 10a78d72f;  */

undefined8 * FUN_10a78d688(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  uVar2 = param_2[3];
  param_1[4] = 0;
  param_1[3] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10a7a5130();
  uVar1 = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



/* Entry: 10a78d730; end: 10a78d77f;  */

undefined8 * FUN_10a78d730(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  FUN_10a7ad3c4(param_1 + 8);
  puStack_28 = param_1 + 4;
  func_0x00010a1f4614(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a78d780; end: 10a78d7cf;  */

void FUN_10a78d780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10a790984();
  if ((int)uVar1 != 0) {
    FUN_10a790984(param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 10a78d7d0; end: 10a78d90b;  */

void FUN_10a78d7d0(undefined8 param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 uStack_51;
  
  plVar7 = (long *)*param_2;
  if (plVar7 != (long *)param_2[1]) {
    do {
      plVar4 = (long *)plVar7[1];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
LAB_10a78d850:
        if ((long *)param_2[1] == plVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a78d8f4);
          (*pcVar3)();
        }
        plVar5 = plVar7 + 2;
        FUN_10a60f9bc(&uStack_51,plVar5,(long *)param_2[1],plVar7);
        for (plVar8 = (long *)param_2[1]; plVar8 != plVar5; plVar8 = plVar8 + -2) {
          if (plVar8[-1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        param_2[1] = (long)plVar5;
        if (plVar4 != (long *)0x0) goto LAB_10a78d898;
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        if ((plVar4 == (long *)0x0) || (*plVar7 == 0)) goto LAB_10a78d850;
        if (*plVar7 != param_3) {
          FUN_10a7887b0(param_1,plVar7,0);
        }
        plVar7 = plVar7 + 2;
LAB_10a78d898:
        plVar5 = plVar4 + 1;
        do {
          lVar6 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    } while (plVar7 != (long *)param_2[1]);
  }
  return;
}



/* Entry: 10a78d90c; end: 10a78d9db;  */

void FUN_10a78d90c(undefined8 *param_1)

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



/* Entry: 10a78d9dc; end: 10a78dcd7;  */

undefined8 * FUN_10a78d9dc(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  
  if ((*(byte *)*param_1 & 1) != 0) {
    return param_1;
  }
  lVar14 = param_1[6];
  if (*(char *)param_1[1] == '\x01') {
    lVar4 = *(long *)param_1[2];
    plVar5 = (long *)(lVar4 + 0xa8);
    plVar3 = (long *)*plVar5;
    if (plVar3 != (long *)0x0) {
      plVar9 = plVar3;
      plVar13 = plVar5;
      do {
        lVar1 = 8;
        if (*(uint *)param_1[3] <= *(uint *)(plVar9 + 4)) {
          lVar1 = 0;
          plVar13 = plVar9;
        }
        plVar9 = *(long **)((long)plVar9 + lVar1);
      } while (plVar9 != (long *)0x0);
      if ((plVar13 != plVar5) && (*(uint *)(plVar13 + 4) <= *(uint *)param_1[3])) {
        plVar5 = plVar13;
        plVar9 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar5[2];
            bVar2 = (long *)*plVar6 != plVar5;
            plVar5 = plVar6;
          } while (bVar2);
        }
        else {
          do {
            plVar6 = plVar9;
            plVar9 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(long **)(lVar4 + 0xa0) == plVar13) {
          *(long **)(lVar4 + 0xa0) = plVar6;
        }
        *(long *)(lVar4 + 0xb0) = *(long *)(lVar4 + 0xb0) + -1;
        FUN_10a04815c(plVar3,plVar13);
        func_0x00010a7b24b4(plVar13 + 4);
        __ZdlPv(plVar13);
      }
    }
  }
  if (((*(char *)param_1[4] == '\x01') && (lVar4 = *(long *)param_1[5], lVar4 != 0)) &&
     (lVar1 = *(long *)(lVar4 + 0x38), *(long *)(lVar4 + 0x30) != lVar1)) {
    if (*(long *)(lVar1 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(long *)(lVar4 + 0x38) = lVar1 + -0x10;
  }
  if ((*(char *)param_1[7] != '\x01') || (plVar3 = *(long **)param_1[5], plVar3 == (long *)0x0))
  goto LAB_10a78dc3c;
  uVar8 = *(ulong *)(lVar14 + 0xa8);
  lVar4 = *plVar3;
  uVar7 = plVar3[1];
  uVar10 = uVar8 - 1;
  if ((uVar8 & uVar10) == 0) {
    uVar7 = uVar10 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar5 = *(long **)(*(long *)(lVar14 + 0xa0) + uVar7 * 8);
  do {
    plVar13 = plVar5;
    plVar5 = (long *)*plVar13;
  } while ((long *)*plVar13 != plVar3);
  if (plVar13 == (long *)(lVar14 + 0xb0)) {
LAB_10a78dba0:
    if (lVar4 == 0) {
LAB_10a78dbd4:
      *(undefined8 *)(*(long *)(lVar14 + 0xa0) + uVar7 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10a78dbdc;
    }
    uVar11 = *(ulong *)(lVar4 + 8);
    if ((uVar8 & uVar10) == 0) {
      uVar12 = uVar11 & uVar10;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a78dbd4;
LAB_10a78dbe4:
    if ((uVar8 & uVar10) == 0) {
      uVar11 = uVar11 & uVar10;
    }
    else if (uVar8 <= uVar11) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar10 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar14 + 0xa0) + uVar11 * 8) = plVar13;
      lVar4 = *plVar3;
    }
  }
  else {
    uVar11 = plVar13[1];
    if ((uVar8 & uVar10) == 0) {
      uVar11 = uVar11 & uVar10;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a78dba0;
LAB_10a78dbdc:
    if (lVar4 != 0) {
      uVar11 = *(ulong *)(lVar4 + 8);
      goto LAB_10a78dbe4;
    }
  }
  *plVar13 = lVar4;
  *plVar3 = 0;
  *(long *)(lVar14 + 0xb8) = *(long *)(lVar14 + 0xb8) + -1;
  func_0x00010a7b162c(plVar3 + 6);
  __ZdlPv(plVar3);
LAB_10a78dc3c:
  if (*(char *)param_1[8] == '\x01') {
    *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)param_1[9];
    *(undefined8 *)(*(long *)param_1[2] + 0x38) = 0;
  }
  return param_1;
}



/* Entry: 10a78dcd8; end: 10a78dd93;  */

undefined8 * FUN_10a78dcd8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x00010a1f4614(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a78dd94; end: 10a78ddef;  */

long * FUN_10a78dd94(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a7b1c98(plVar1 + 2);
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



/* Entry: 10a78ddf0; end: 10a78df57;  */

void FUN_10a78ddf0(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (long *)0x0) {
    plVar7 = param_2;
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x38))();
    iVar3 = (int)plVar7;
    if (plVar5 == (long *)0x24) {
      plVar5 = (long *)&UNK_10f64131a;
      _memcmp();
      if (iVar3 == 0) {
        puVar4 = (undefined8 *)param_2[0x78];
        puVar9 = (undefined8 *)param_2[0x79];
        if (puVar4 == puVar9) {
          return;
        }
        puVar11 = (undefined8 *)0x0;
        puVar12 = (undefined8 *)0x0;
        do {
          uVar10 = *puVar4;
          if (puVar12 < puVar11) {
            puVar13 = puVar12 + 1;
            *puVar12 = uVar10;
          }
          else {
            plVar7 = (long *)*param_1;
            lVar8 = (long)puVar12 - (long)plVar7;
            uVar1 = (lVar8 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
              FUN_10a7a5614();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a78df38);
              (*pcVar2)();
            }
            uVar6 = (long)puVar11 - (long)plVar7 >> 2;
            if (uVar6 <= uVar1) {
              uVar6 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puVar11 - (long)plVar7)) {
              uVar6 = 0x1fffffffffffffff;
            }
            FUN_10a7a5628();
            puVar12 = (undefined8 *)(uVar6 + lVar8);
            puVar11 = (undefined8 *)(uVar6 + (long)plVar5 * 8);
            puVar13 = puVar12 + 1;
            *puVar12 = uVar10;
            plVar5 = plVar7;
            _memcpy(puVar12 + -(lVar8 >> 3),plVar7,lVar8);
            *param_1 = (long)(puVar12 + -(lVar8 >> 3));
            param_1[2] = (long)puVar11;
            if (plVar7 != (long *)0x0) {
              __ZdlPv(plVar7);
            }
          }
          param_1[1] = (long)puVar13;
          puVar4 = puVar4 + 2;
          puVar12 = puVar13;
        } while (puVar4 != puVar9);
        return;
      }
    }
    puVar4 = (undefined8 *)0x1;
    FUN_10a7a5628();
    *param_1 = (long)puVar4;
    *puVar4 = param_2;
    param_1[1] = (long)(puVar4 + 1);
    param_1[2] = (long)(puVar4 + (long)plVar5);
  }
  return;
}



/* Entry: 10a78df58; end: 10a78e02f;  */

void FUN_10a78df58(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uStack_60;
  ulong *puStack_58;
  ulong *puStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a78ddf0(&puStack_58);
  for (puVar1 = puStack_58; puVar1 != puStack_50; puVar1 = puVar1 + 1) {
    plVar3 = (long *)*puVar1;
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3;
      (**(code **)(*plVar3 + 0xb0))();
      (**(code **)(*plVar3 + 0xb8))();
      uStack_60 = (ulong)plVar2 & 0xffffffff | (long)plVar3 << 0x20;
      FUN_10a7a565c(param_1,&uStack_60);
    }
  }
  if (puStack_58 != (ulong *)0x0) {
    __ZdlPv(puStack_58);
  }
  return;
}



/* Entry: 10a78e030; end: 10a78e953;  */

void FUN_10a78e030(long *param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  ulong *puVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  ulong unaff_x27;
  long *plVar23;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  float fStack_90;
  long **pplStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar19 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110bb3788,&PTR_DAT_110c5ef68,0);
    if (lVar19 == 0) {
      plStack_d8 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      plStack_c8 = (long *)0x0;
      FUN_10a20e8c4(&lStack_b0,param_2 + 0x240);
      plVar20 = plStack_a0;
      if (plStack_a0 == (long *)0x0) {
        func_0x00010a042c64(&lStack_b0);
      }
      else {
        do {
          plVar8 = plVar20 + 2;
          plVar5 = (long *)*plVar8;
          if ((((plVar5 != (long *)0x0) && (plVar6 = (long *)plVar5[1], plVar6 != (long *)0x0)) &&
              (plVar6[1] != -1)) &&
             ((plVar5[3] != 0 &&
              (__ZNSt3__119__shared_weak_count4lockEv(), plVar11 = plStack_d8, plVar6 != (long *)0x0
              )))) {
            lVar19 = *plVar5;
            if (lVar19 != 0) {
              if (*param_4 != 0) {
                lVar7 = *(long *)(*param_4 + 8);
                if (lVar7 == 0) goto LAB_10a78e7f4;
                plVar5 = (long *)(lVar7 + 0x20);
                do {
                  plVar5 = (long *)*plVar5;
                  if (plVar5 == (long *)0x0) goto LAB_10a78e7f0;
                } while (plVar5[6] != lVar19);
              }
              plVar5 = plStack_d8;
              if (plStack_d8 == plStack_d0) {
LAB_10a78e658:
                if (plVar5 == plStack_d0) goto LAB_10a78e660;
              }
              else {
                do {
                  if (*plVar5 == lVar19) goto LAB_10a78e658;
                  plVar5 = plVar5 + 5;
                } while (plVar5 != plStack_d0);
LAB_10a78e660:
                plStack_80 = (long *)0x0;
                plStack_78 = (long *)0x0;
                lStack_70 = 0;
                if (plStack_d0 < plStack_c8) {
                  *plStack_d0 = lVar19;
                  plStack_d0[1] = (long)plVar6;
                  plVar5 = plVar6 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                    if (bVar2) {
                      *plVar5 = *plVar5 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  plStack_d0[2] = 0;
                  plStack_d0[3] = 0;
                  plStack_d0[4] = 0;
                  plStack_d0[4] = 0;
                  plStack_d0[3] = 0;
                  plStack_78 = (long *)0x0;
                  lStack_70 = 0;
                  plStack_80 = (long *)0x0;
                  plVar5 = plStack_d0;
                }
                else {
                  lVar7 = (long)plStack_d0 - (long)plStack_d8;
                  uVar10 = (lVar7 >> 3) * -0x3333333333333333 + 1;
                  if (0x666666666666666 < uVar10) {
                    FUN_10a7a580c();
                    goto LAB_10a78e8c8;
                  }
                  lVar13 = (long)plStack_c8 - (long)plStack_d8 >> 3;
                  uVar21 = lVar13 * -0x6666666666666666;
                  if (uVar21 < uVar10 || uVar21 - uVar10 == 0) {
                    uVar21 = uVar10;
                  }
                  if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
                    uVar21 = 0x666666666666666;
                  }
                  if (0x666666666666666 < uVar21) {
                    func_0x000109ffded8();
                    goto LAB_10a78e8c8;
                  }
                  lVar13 = uVar21 * 0x28;
                  __Znwm();
                  plVar5 = (long *)(lVar13 + lVar7);
                  *plVar5 = lVar19;
                  plVar5[1] = (long)plVar6;
                  plVar22 = plVar6 + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar2) {
                      *plVar22 = *plVar22 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  plVar5[2] = 0;
                  plVar23 = (long *)(lVar13 + uVar21 * 0x28);
                  plVar5[4] = lStack_70;
                  plVar5[3] = (long)plStack_78;
                  plStack_78 = (long *)0x0;
                  lStack_70 = 0;
                  plStack_80 = (long *)0x0;
                  plVar22 = (long *)((long)plVar5 - lVar7);
                  _memcpy(plVar22,plVar11,lVar7);
                  plStack_d8 = plVar22;
                  plStack_c8 = plVar23;
                  if (plVar11 != (long *)0x0) {
                    __ZdlPv(plVar11);
                  }
                }
                plStack_d0 = plVar5 + 5;
                pplStack_88 = &plStack_80;
                FUN_10a436ac0(&pplStack_88);
              }
              plVar11 = (long *)plVar5[2];
              if (plVar11 != (long *)plVar5[3]) {
                piVar15 = *(int **)(*plVar8 + 0x18);
                do {
                  piVar17 = *(int **)(*plVar11 + 0x18);
                  if ((*piVar17 == *piVar15 && piVar17[1] == piVar15[1]) &&
                     (piVar17[2] == piVar15[2] && piVar17[3] == piVar15[3])) goto LAB_10a78e7f0;
                  plVar11 = plVar11 + 2;
                } while (plVar11 != (long *)plVar5[3]);
              }
              FUN_10a78f61c(plVar5 + 2,plVar8);
LAB_10a78e7f0:
              if (plVar6 == (long *)0x0) goto LAB_10a78e824;
            }
LAB_10a78e7f4:
            plVar5 = plVar6 + 1;
            do {
              lVar19 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar19 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
LAB_10a78e824:
          plVar8 = plStack_d0;
          plVar5 = plStack_d8;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        func_0x00010a042c64(&lStack_b0);
        if (plVar5 != plVar8) {
          plVar5 = plVar5 + 2;
          do {
            lVar19 = plVar5[1];
            if (param_3 == lVar19 - *plVar5 >> 4) {
              *param_1 = *plVar5;
              param_1[1] = lVar19;
              param_1[2] = plVar5[2];
              param_1 = plVar5;
              break;
            }
            plVar20 = plVar5 + 3;
            plVar5 = plVar5 + 5;
          } while (plVar20 != plVar8);
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_10a7a5820(&plStack_d8);
    }
    else {
      uStack_a8 = 0;
      lStack_b0 = 0;
      uStack_98 = 0;
      plStack_a0 = (long *)0x0;
      fStack_90 = 1.0;
      FUN_10a20e8c4(&plStack_d8,param_2 + 0x240);
      if (plStack_c8 != (long *)0x0) {
        plVar20 = plStack_c8;
        do {
          puVar18 = (ulong *)plVar20[2];
          if ((((puVar18 != (ulong *)0x0) && (plVar5 = (long *)puVar18[1], plVar5 != (long *)0x0))
              && (plVar5[1] != -1)) &&
             ((puVar18[3] != 0 &&
              (__ZNSt3__119__shared_weak_count4lockEv(), uVar10 = uStack_a8, plVar5 != (long *)0x0))
             )) {
            uVar21 = *puVar18;
            if (uVar21 == 0) {
LAB_10a78e278:
              plVar8 = plVar5 + 1;
              do {
                lVar7 = *plVar8;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar2) {
                  *plVar8 = lVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
            else {
              if (*param_4 != 0) {
                lVar7 = *(long *)(*param_4 + 8);
                if (lVar7 == 0) goto LAB_10a78e278;
                plVar8 = (long *)(lVar7 + 0x20);
                do {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_10a78e278;
                } while (plVar8[6] != uVar21);
              }
              uVar12 = ((ulong)(uint)((int)uVar21 << 3) + 8 ^ uVar21 >> 0x20) * -0x622015f714c7d297;
              uVar12 = (uVar21 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
              uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
              if (uStack_a8 != 0) {
                uVar9 = uStack_a8 - 1;
                if ((uStack_a8 & uVar9) == 0) {
                  unaff_x27 = uVar12 & uVar9;
                }
                else {
                  unaff_x27 = uVar12;
                  if (uStack_a8 <= uVar12) {
                    uVar14 = 0;
                    if (uStack_a8 != 0) {
                      uVar14 = uVar12 / uStack_a8;
                    }
                    unaff_x27 = uVar12 - uVar14 * uStack_a8;
                  }
                }
                plVar8 = *(long **)(lStack_b0 + unaff_x27 * 8);
                if (plVar8 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar8 = (long *)*plVar8;
                      if (plVar8 == (long *)0x0) goto LAB_10a78e1ec;
                      uVar14 = plVar8[1];
                      if (uVar14 != uVar12) break;
                      if (plVar8[2] == uVar21) goto LAB_10a78e278;
                    }
                    if ((uStack_a8 & uVar9) == 0) {
                      uVar14 = uVar14 & uVar9;
                    }
                    else if (uStack_a8 <= uVar14) {
                      uVar16 = 0;
                      if (uStack_a8 != 0) {
                        uVar16 = uVar14 / uStack_a8;
                      }
                      uVar14 = uVar14 - uVar16 * uStack_a8;
                    }
                  } while (uVar14 == unaff_x27);
                }
              }
LAB_10a78e1ec:
              plVar8 = (long *)0x20;
              __Znwm();
              plStack_78 = &lStack_b0;
              lStack_70 = 1;
              *plVar8 = 0;
              plVar8[1] = uVar12;
              plVar8[2] = uVar21;
              plVar8[3] = (long)plVar5;
              plStack_80 = plVar8;
              if ((uVar10 == 0) || (fStack_90 * (float)uVar10 < (float)(uStack_98 + 1))) {
                uVar21 = 1;
                if (2 < uVar10) {
                  uVar21 = (ulong)((uVar10 & uVar10 - 1) != 0);
                }
                uVar21 = uVar21 | uVar10 << 1;
                uVar9 = (ulong)((float)(uStack_98 + 1) / fStack_90);
                if (uVar21 <= uVar9) {
                  uVar21 = uVar9;
                }
                uVar9 = uVar10;
                if (uVar21 - 1 == 0) {
                  uVar21 = 2;
                }
                else if ((uVar21 & uVar21 - 1) != 0) {
                  __ZNSt3__112__next_primeEm();
                  uVar9 = uStack_a8;
                }
                if (uVar9 < uVar21) {
LAB_10a78e2cc:
                  if (uVar21 >> 0x3d != 0) {
                    func_0x000109ffded8();
LAB_10a78e8c8:
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a78e8cc);
                    (*pcVar4)();
                  }
                  lVar7 = uVar21 << 3;
                  __Znwm();
                  bVar2 = lStack_b0 != 0;
                  lStack_b0 = lVar7;
                  if (bVar2) {
                    __ZdlPv();
                  }
                  uVar10 = 0;
                  do {
                    *(undefined8 *)(lStack_b0 + uVar10 * 8) = 0;
                    uVar10 = uVar10 + 1;
                  } while (uVar21 != uVar10);
                  uVar10 = uVar21;
                  uStack_a8 = uVar21;
                  if (plStack_a0 != (long *)0x0) {
                    uVar9 = plStack_a0[1];
                    uVar14 = uVar21 - 1;
                    if ((uVar21 & uVar14) == 0) {
                      uVar9 = uVar9 & uVar14;
                    }
                    else if (uVar21 <= uVar9) {
                      uVar16 = 0;
                      if (uVar21 != 0) {
                        uVar16 = uVar9 / uVar21;
                      }
                      uVar9 = uVar9 - uVar16 * uVar21;
                    }
                    *(long ***)(lStack_b0 + uVar9 * 8) = &plStack_a0;
                    plVar5 = (long *)*plStack_a0;
                    plVar6 = plStack_a0;
                    while (plVar5 != (long *)0x0) {
                      uVar16 = plVar5[1];
                      if ((uVar21 & uVar14) == 0) {
                        uVar16 = uVar16 & uVar14;
                      }
                      else if (uVar21 <= uVar16) {
                        uVar3 = 0;
                        if (uVar21 != 0) {
                          uVar3 = uVar16 / uVar21;
                        }
                        uVar16 = uVar16 - uVar3 * uVar21;
                      }
                      plVar11 = plVar5;
                      if (uVar16 != uVar9) {
                        if (*(long *)(lStack_b0 + uVar16 * 8) == 0) {
                          *(long **)(lStack_b0 + uVar16 * 8) = plVar6;
                          uVar9 = uVar16;
                        }
                        else {
                          *plVar6 = *plVar5;
                          *plVar5 = **(long **)(lStack_b0 + uVar16 * 8);
                          **(undefined8 **)(lStack_b0 + uVar16 * 8) = plVar5;
                          plVar11 = plVar6;
                        }
                      }
                      plVar6 = plVar11;
                      plVar5 = (long *)*plVar11;
                    }
                  }
                }
                else {
                  uVar10 = uVar9;
                  if (uVar21 < uVar9) {
                    uVar10 = (ulong)((float)uStack_98 / fStack_90);
                    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if (1 < uVar10) {
                      uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
                    }
                    lVar7 = lStack_b0;
                    if (uVar21 <= uVar10) {
                      uVar21 = uVar10;
                    }
                    uVar10 = uStack_a8;
                    if (uVar21 < uVar9) {
                      if (uVar21 != 0) goto LAB_10a78e2cc;
                      lStack_b0 = 0;
                      if (lVar7 != 0) {
                        __ZdlPv();
                      }
                      uStack_a8 = 0;
                      uVar10 = 0;
                    }
                  }
                }
                if ((uVar10 & uVar10 - 1) == 0) {
                  unaff_x27 = uVar10 - 1 & uVar12;
                }
                else {
                  unaff_x27 = uVar12;
                  if (uVar10 <= uVar12) {
                    uVar21 = 0;
                    if (uVar10 != 0) {
                      uVar21 = uVar12 / uVar10;
                    }
                    unaff_x27 = uVar12 - uVar21 * uVar10;
                  }
                }
              }
              plVar5 = *(long **)(lStack_b0 + unaff_x27 * 8);
              if (plVar5 == (long *)0x0) {
                *plVar8 = (long)plStack_a0;
                *(long ***)(lStack_b0 + unaff_x27 * 8) = &plStack_a0;
                plStack_a0 = plVar8;
                if (*plVar8 != 0) {
                  uVar21 = *(ulong *)(*plVar8 + 8);
                  if ((uVar10 & uVar10 - 1) == 0) {
                    uVar21 = uVar21 & uVar10 - 1;
                  }
                  else if (uVar10 <= uVar21) {
                    uVar12 = 0;
                    if (uVar10 != 0) {
                      uVar12 = uVar21 / uVar10;
                    }
                    uVar21 = uVar21 - uVar12 * uVar10;
                  }
                  plVar5 = (long *)(lStack_b0 + uVar21 * 8);
                  goto LAB_10a78e4a8;
                }
              }
              else {
                *plVar8 = *plVar5;
LAB_10a78e4a8:
                *plVar5 = (long)plVar8;
              }
              uStack_98 = uStack_98 + 1;
            }
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      func_0x00010a042c64(&plStack_d8);
      for (plVar20 = plStack_a0; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        FUN_10ac18e80(param_1,lVar19,plVar20 + 2);
        plVar5 = (long *)*param_1;
        if (param_3 == param_1[1] - *param_1 >> 4) {
          do {
            if (plVar5 == (long *)param_1[1]) goto LAB_10a78e588;
            lVar7 = *plVar5;
          } while ((((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) &&
                   (*(long *)(*(long *)(lVar7 + 8) + 8) != -1)) &&
                  (plVar5 = plVar5 + 2, *(long *)(lVar7 + 0x18) != 0));
        }
        plStack_d8 = param_1;
        FUN_10a436ac0(&plStack_d8);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
LAB_10a78e588:
      FUN_10a7a57b0(&lStack_b0);
    }
  }
  return;
}



/* Entry: 10a78e954; end: 10a78ea27;  */

ulong FUN_10a78e954(ulong param_1)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  if (param_1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = param_1;
    FUN_10a1ed730();
    if (((uVar3 & 1) != 0) || (uVar3 = param_1, FUN_10a1ed914(), (int)uVar3 != 0)) {
      uVar3 = param_1;
      FUN_10a1ed9f4();
      uVar4 = uVar3 >> 0x20;
      if ((uVar4 != 0) || ((int)uVar3 != 0)) goto LAB_10a78e9f8;
    }
    FUN_10a20e8c4(auStack_58,param_1 + 0x240);
    for (; lStack_48 != 0; lStack_48 = *(long *)lStack_48) {
      lVar1 = *(long *)(lStack_48 + 0x10);
      if ((((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) &&
          (*(long *)(*(long *)(lVar1 + 8) + 8) != -1)) &&
         (piVar2 = *(int **)(lVar1 + 0x18), piVar2 != (int *)0x0)) {
        uVar3 = (ulong)(uint)(piVar2[2] - *piVar2);
        uVar4 = (ulong)(uint)(piVar2[3] - piVar2[1]);
        goto LAB_10a78e9e4;
      }
    }
    uVar3 = 0;
    uVar4 = 0;
LAB_10a78e9e4:
    func_0x00010a042c64(auStack_58);
  }
LAB_10a78e9f8:
  return uVar3 & 0xffffffff | uVar4 << 0x20;
}



/* Entry: 10a78ea28; end: 10a78ebef;  */

undefined8 FUN_10a78ea28(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  if ((*param_3 == 0) || (*(long *)(*param_3 + 8) == 0)) {
LAB_10a78ebbc:
    uVar4 = 0;
  }
  else {
    plVar8 = (long *)*param_1;
    if (plVar8 != param_1 + 1) {
      plVar1 = (long *)(param_2 + 0xd8);
      do {
        plVar5 = (long *)*plVar1;
        if (plVar5 == (long *)0x0) goto LAB_10a78ebbc;
        plVar9 = plVar1;
        do {
          lVar6 = 8;
          if ((ulong)plVar8[7] <= (ulong)plVar5[7]) {
            lVar6 = 0;
            plVar9 = plVar5;
          }
          plVar5 = *(long **)((long)plVar5 + lVar6);
        } while (plVar5 != (long *)0x0);
        if ((plVar9 == plVar1) || ((ulong)plVar8[7] < (ulong)plVar9[7])) goto LAB_10a78ebbc;
        lVar7 = *(long *)(*param_3 + 8);
        lVar6 = lVar7 + 0x10;
        FUN_10a7c59a4();
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x30) == 0)) {
          if (plVar9[8] == 0) {
            lStack_78 = 0;
            lStack_70 = 0;
            uStack_68 = 0;
          }
          else {
            FUN_10a797ac0(&lStack_60,lVar7,plVar9 + 8);
            if (lStack_60 == 0) {
              lStack_78 = 0;
              lStack_70 = 0;
              uStack_68 = 0;
            }
            else {
              FUN_10a774ca8(&lStack_78,lStack_60,plVar8 + 8);
            }
            plVar5 = plStack_58;
            if (plStack_58 != (long *)0x0) {
              plVar9 = plStack_58 + 1;
              do {
                lVar6 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *plVar9 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_58 + 0x10))(plStack_58);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
          }
        }
        else {
          FUN_10a774ca8(&lStack_78,*(long *)(lVar6 + 0x30),plVar8 + 8);
        }
        if (lStack_78 == lStack_70) {
          FUN_10a7a2f38(&lStack_78);
          goto LAB_10a78ebbc;
        }
        cVar2 = *(char *)(lStack_70 + -0x30);
        FUN_10a7a2f38(&lStack_78);
        if (cVar2 != '\x01') goto LAB_10a78ebbc;
        plVar5 = (long *)plVar8[1];
        plVar9 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar9[2];
            bVar3 = (long *)*plVar8 != plVar9;
            plVar9 = plVar8;
          } while (bVar3);
        }
        else {
          do {
            plVar8 = plVar5;
            plVar5 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      } while (plVar8 != param_1 + 1);
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10a78ebf0; end: 10a78ecdb;  */

undefined8 * FUN_10a78ebf0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a78ecdc; end: 10a78edbf;  */

ulong * FUN_10a78ecdc(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  
  puVar2 = (ulong *)param_1[1];
  if (puVar2 < (ulong *)param_1[2]) {
    uVar8 = *param_2;
    puVar9 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    puVar2 = param_1;
LAB_10a78eda0:
    param_1[1] = (ulong)puVar9;
    return puVar2;
  }
  lVar6 = (long)puVar2 - *param_1;
  uVar8 = (lVar6 >> 4) + 1;
  if (uVar8 >> 0x3c == 0) {
    uVar4 = (long)param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 >> 0x3c == 0) {
      lVar1 = uVar5 << 4;
      __Znwm();
      puVar2 = (ulong *)(lVar1 + lVar6);
      uVar4 = param_2[1];
      uVar8 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      puVar3 = (ulong *)*param_1;
      puVar7 = (ulong *)((long)puVar2 - (param_1[1] - (long)puVar3));
      puVar9 = puVar2 + 2;
      puVar2[1] = uVar4;
      *puVar2 = uVar8;
      puVar2 = puVar7;
      _memcpy(puVar7,puVar3);
      *param_1 = (ulong)puVar7;
      param_1[1] = (ulong)puVar9;
      param_1[2] = lVar1 + uVar5 * 0x10;
      if (puVar3 != (ulong *)0x0) {
        __ZdlPv(puVar3);
        puVar2 = puVar3;
      }
      goto LAB_10a78eda0;
    }
  }
  else {
    FUN_10a7a6110();
  }
  func_0x000109ffded8();
  if (param_1 == param_2) {
    return (ulong *)0x1;
  }
  while ((uVar8 = *param_1, uVar8 == 0 ||
         ((uVar5 = uVar8, FUN_10a1ed730(), (uVar5 & 1) == 0 && (FUN_10a1ed914(), (uVar8 & 1) == 0)))
         )) {
    param_1 = param_1 + 1;
    if (param_1 == param_2) {
      return (ulong *)0x1;
    }
  }
  return (ulong *)0x0;
}



/* Entry: 10a78edc0; end: 10a78ee2f;  */

undefined8 FUN_10a78edc0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == param_2) {
    return 1;
  }
  while ((uVar2 = *param_1, uVar2 == 0 ||
         ((uVar1 = uVar2, FUN_10a1ed730(), (uVar1 & 1) == 0 && (FUN_10a1ed914(), (uVar2 & 1) == 0)))
         )) {
    param_1 = param_1 + 1;
    if (param_1 == param_2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10a78ee30; end: 10a78eeef;  */

undefined8 * FUN_10a78ee30(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a78eef0; end: 10a78f06f;  */

void FUN_10a78eef0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10a775628(&uStack_70,param_2[1] - *param_2 >> 4);
  plVar2 = (long *)param_2[1];
  for (param_2 = (long *)*param_2; param_2 != plVar2; param_2 = param_2 + 2) {
    lVar6 = *param_2;
    if ((((lVar6 == 0) || (*(long *)(lVar6 + 8) == 0)) ||
        (*(long *)(*(long *)(lVar6 + 8) + 8) == -1)) || (*(long *)(lVar6 + 0x18) == 0))
    goto LAB_10a78f01c;
    uStack_98 = 0;
    uStack_90 = 0;
    plVar5 = (long *)0x68;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110c183d0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    plVar5[0xc] = 0;
    plVar5[0xb] = 0;
    plStack_88 = plVar5 + 3;
    plVar5[4] = 0;
    *plStack_88 = 0;
    uStack_78 = 0;
    auStack_a0[0] = 1;
    plStack_80 = plVar5;
    func_0x00010a3509f0(&plStack_88,(long *)(lVar6 + 0x18));
    func_0x00010a7756e4(&uStack_70,auStack_a0);
    plVar5 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
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
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[2] = uStack_60;
  param_1 = &uStack_70;
LAB_10a78f01c:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a7a2f38(&uStack_70);
  return;
}



/* Entry: 10a78f070; end: 10a78f17f;  */

void FUN_10a78f070(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  if (param_2 == (long *)0x0) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    bVar1 = false;
    do {
      if (param_2[6] != 0) {
        FUN_10a774ca8(param_1,param_2[6],param_3);
        if (*param_1 == param_1[1]) goto LAB_10a78f148;
        bVar2 = *(char *)(param_1[1] + -0x30) != '\x01';
        if (bVar2 || bVar1) {
          if (bVar2) goto LAB_10a78f148;
        }
        else {
          FUN_10a7a6408(&lStack_70);
          lStack_68 = param_1[1];
          lVar5 = *param_1;
          lVar4 = param_1[1];
          lVar3 = param_1[2];
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          bVar1 = true;
          lStack_70 = lVar5;
          lStack_60 = lVar3;
        }
        FUN_10a7a2f38(param_1);
      }
      param_2 = (long *)*param_2;
    } while (param_2 != (long *)0x0);
  }
  *param_1 = lVar5;
  param_1[1] = lVar4;
  param_1[2] = lVar3;
  lStack_68 = 0;
  lStack_60 = 0;
  lStack_70 = 0;
LAB_10a78f148:
  FUN_10a7a2f38(&lStack_70);
  return;
}



/* Entry: 10a78f180; end: 10a78f1f3;  */

undefined8 * FUN_10a78f180(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a78f1f4; end: 10a78f28b;  */

void FUN_10a78f1f4(long *param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_10a7a6324();
      lVar4 = param_2 + 0x10;
      FUN_10a7c59a4(lVar4,param_3[3]);
      if ((lVar4 == 0) || (plVar3 = *(long **)(lVar4 + 0x30), plVar3 == (long *)0x0)) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          plVar3 = (long *)*param_3;
          if (-1 < *(char *)((long)param_3 + 0x17)) {
            plVar3 = param_3;
          }
          func_0x00010ae06f08(0,1,&UNK_10f675bab,&UNK_10f676109,0xdb,&UNK_10f675da7,param_7,param_8,
                              plVar3);
        }
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x40))
                  (auStack_b0,plVar3,param_4,param_5,(int)param_3[5],1,param_3 + 4);
        FUN_10a797518(param_1,param_2,param_3,auStack_b0);
        if (plStack_a8 != (long *)0x0) {
          plVar3 = plStack_a8 + 1;
          do {
            lVar4 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
          }
        }
      }
      return;
    }
    lVar5 = param_1[1];
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_10a7a6338();
    lVar4 = (long)plVar3 + (lVar5 - lVar4);
    lVar5 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar5);
    lStack_58 = *param_1;
    *param_1 = lVar5;
    param_1[1] = lVar4;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + param_2 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a7a6470(&lStack_58);
  }
  return;
}



/* Entry: 10a78f28c; end: 10a78f3bb;  */

void FUN_10a78f28c(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2 + 0x10;
  FUN_10a7c59a4(lVar4,param_3[3]);
  if ((lVar4 == 0) || (plVar3 = *(long **)(lVar4 + 0x30), plVar3 == (long *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar3 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar3 = param_3;
      }
      func_0x00010ae06f08(0,1,&UNK_10f675bab,&UNK_10f676109,0xdb,&UNK_10f675da7,param_7,param_8,
                          plVar3);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x40))(auStack_50,plVar3,param_4,param_5,(int)param_3[5],1,param_3 + 4);
    FUN_10a797518(param_1,param_2,param_3,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  return;
}



/* Entry: 10a78f3bc; end: 10a78f4eb;  */

void FUN_10a78f3bc(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2 + 0x10;
  FUN_10a7c59a4(lVar4,param_3[3]);
  if ((lVar4 == 0) || (plVar3 = *(long **)(lVar4 + 0x30), plVar3 == (long *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar3 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar3 = param_3;
      }
      func_0x00010ae06f08(0,1,&UNK_10f675bab,&UNK_10f675dd9,0x95,&UNK_10f675da7,param_7,param_8,
                          plVar3);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(auStack_50,plVar3,param_4,param_5,(int)param_3[5],1,param_3 + 4);
    FUN_10a797518(param_1,param_2,param_3,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  return;
}



/* Entry: 10a78f4ec; end: 10a78f61b;  */

void FUN_10a78f4ec(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2 + 0x10;
  FUN_10a7c59a4(lVar4,param_3[3]);
  if ((lVar4 == 0) || (plVar3 = *(long **)(lVar4 + 0x30), plVar3 == (long *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      plVar3 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar3 = param_3;
      }
      func_0x00010ae06f08(0,1,&UNK_10f675bab,&UNK_10f676029,0xc9,&UNK_10f675da7,param_7,param_8,
                          plVar3);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x38))(auStack_50,plVar3,param_4,param_5,(int)param_3[5],1,param_3 + 4);
    FUN_10a797518(param_1,param_2,param_3,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  return;
}



/* Entry: 10a78f61c; end: 10a78f733;  */

void FUN_10a78f61c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar15 = (undefined8 *)param_1[1];
  if (puVar15 < (undefined8 *)param_1[2]) {
    lVar9 = param_2[1];
    uVar16 = *param_2;
    puVar15[1] = param_2[1];
    *puVar15 = uVar16;
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar15 = puVar15 + 2;
  }
  else {
    lVar9 = (long)puVar15 - *param_1;
    uVar7 = (lVar9 >> 4) + 1;
    if (uVar7 >> 0x3c != 0) {
      FUN_10a7a6324();
      pcStack_68 = FUN_10a78f734;
      puVar15 = (undefined8 *)param_1[1];
      if (puVar15 < (undefined8 *)param_1[2]) {
        uVar16 = *param_2;
        puVar15[1] = param_2[1];
        *puVar15 = uVar16;
        *param_2 = 0;
        param_2[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        uVar16 = param_2[2];
        puVar15[3] = param_2[3];
        puVar15[2] = uVar16;
        puVar15[4] = param_2[4];
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        puVar15 = puVar15 + 5;
LAB_10a78f8b4:
        param_1[1] = (long)puVar15;
        return;
      }
      lVar9 = (long)puVar15 - *param_1;
      uVar7 = (lVar9 >> 3) * -0x3333333333333333 + 1;
      plVar6 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      if (uVar7 < 0x666666666666667) {
        lVar13 = param_1[2] - *param_1 >> 3;
        uVar12 = lVar13 * -0x6666666666666666;
        if (uVar12 < uVar7 || uVar12 - uVar7 == 0) {
          uVar12 = uVar7;
        }
        if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
          uVar12 = 0x666666666666666;
        }
        if (uVar12 < 0x666666666666667) {
          lVar13 = uVar12 * 0x28;
          __Znwm();
          puVar2 = (undefined8 *)(lVar13 + lVar9);
          uVar17 = param_2[1];
          uVar16 = *param_2;
          uVar19 = param_2[3];
          uVar18 = param_2[2];
          *param_2 = 0;
          param_2[1] = 0;
          puVar2[1] = uVar17;
          *puVar2 = uVar16;
          puVar2[3] = uVar19;
          puVar2[2] = uVar18;
          puVar2[4] = param_2[4];
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          puVar15 = puVar2 + 5;
          puVar14 = (undefined8 *)*param_1;
          puVar3 = (undefined8 *)param_1[1];
          puVar2 = (undefined8 *)((long)puVar2 + ((long)puVar14 - (long)puVar3));
          puVar8 = puVar2;
          puVar11 = puVar14;
          if ((long)puVar14 - (long)puVar3 != 0) {
            do {
              uVar16 = *puVar11;
              puVar8[1] = puVar11[1];
              *puVar8 = uVar16;
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar8[2] = 0;
              puVar8[3] = 0;
              puVar8[4] = 0;
              uVar16 = puVar11[2];
              puVar8[3] = puVar11[3];
              puVar8[2] = uVar16;
              puVar8[4] = puVar11[4];
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11[4] = 0;
              puVar11 = puVar11 + 5;
              puVar8 = puVar8 + 5;
            } while (puVar11 != puVar3);
            do {
              puStack_a8 = puVar14 + 2;
              FUN_10a436ac0(&puStack_a8);
              FUN_10a05b1b0(puVar14);
              puVar14 = puVar14 + 5;
            } while (puVar14 != puVar3);
            puVar14 = (undefined8 *)*param_1;
          }
          *param_1 = (long)puVar2;
          param_1[1] = (long)puVar15;
          param_1[2] = lVar13 + uVar12 * 0x28;
          if (puVar14 != (undefined8 *)0x0) {
            __ZdlPv(puVar14);
          }
          goto LAB_10a78f8b4;
        }
      }
      else {
        FUN_10a7a670c();
      }
      func_0x000109ffded8();
      pcStack_b8 = FUN_10a78f8d8;
      plStack_d8 = plVar6 + 2;
      puStack_d0 = param_2;
      plStack_c8 = param_1;
      ppuStack_c0 = &puStack_70;
      FUN_10a436ac0(&plStack_d8);
      FUN_10a05b1b0(plVar6);
      return;
    }
    uVar10 = param_1[2] - *param_1;
    uVar12 = (long)uVar10 >> 3;
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar12 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a7a6338();
    puVar11 = (undefined8 *)((long)plVar6 + lVar9);
    lVar9 = param_2[1];
    uVar16 = *param_2;
    puVar11[1] = param_2[1];
    *puVar11 = uVar16;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar15 = puVar11 + 2;
    lVar9 = (long)puVar11 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar15;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar12 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a7a6470(&lStack_58);
  }
  param_1[1] = (long)puVar15;
  return;
}



/* Entry: 10a78f734; end: 10a78f8d7;  */

void FUN_10a78f734(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 *puStack_48;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar12 = *param_2;
    puVar11[1] = param_2[1];
    *puVar11 = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    uVar12 = param_2[2];
    puVar11[3] = param_2[3];
    puVar11[2] = uVar12;
    puVar11[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar11 = puVar11 + 5;
LAB_10a78f8b4:
    param_1[1] = (long)puVar11;
    return;
  }
  lVar10 = (long)puVar11 - *param_1;
  uVar4 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  plVar3 = param_1;
  if (uVar4 < 0x666666666666667) {
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * -0x6666666666666666;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    if (uVar8 < 0x666666666666667) {
      lVar7 = uVar8 * 0x28;
      __Znwm();
      puVar1 = (undefined8 *)(lVar7 + lVar10);
      uVar13 = param_2[1];
      uVar12 = *param_2;
      uVar15 = param_2[3];
      uVar14 = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      puVar1[1] = uVar13;
      *puVar1 = uVar12;
      puVar1[3] = uVar15;
      puVar1[2] = uVar14;
      puVar1[4] = param_2[4];
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      puVar11 = puVar1 + 5;
      puVar9 = (undefined8 *)*param_1;
      puVar2 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar9 - (long)puVar2));
      puVar5 = puVar1;
      puVar6 = puVar9;
      if ((long)puVar9 - (long)puVar2 != 0) {
        do {
          uVar12 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar12;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          uVar12 = puVar6[2];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar12;
          puVar5[4] = puVar6[4];
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6 = puVar6 + 5;
          puVar5 = puVar5 + 5;
        } while (puVar6 != puVar2);
        do {
          puStack_48 = puVar9 + 2;
          FUN_10a436ac0(&puStack_48);
          FUN_10a05b1b0(puVar9);
          puVar9 = puVar9 + 5;
        } while (puVar9 != puVar2);
        puVar9 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar11;
      param_1[2] = lVar7 + uVar8 * 0x28;
      if (puVar9 != (undefined8 *)0x0) {
        __ZdlPv(puVar9);
      }
      goto LAB_10a78f8b4;
    }
  }
  else {
    FUN_10a7a670c();
  }
  func_0x000109ffded8();
  pcStack_58 = FUN_10a78f8d8;
  plStack_78 = plVar3 + 2;
  puStack_70 = param_2;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a436ac0(&plStack_78);
  FUN_10a05b1b0(plVar3);
  return;
}



/* Entry: 10a78f8d8; end: 10a78f977;  */

void FUN_10a78f8d8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x10;
  FUN_10a436ac0(&lStack_28);
  FUN_10a05b1b0(param_1);
  return;
}



/* Entry: 10a78f978; end: 10a78fa5f;  */

long * FUN_10a78f978(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    lVar1 = param_1[1];
    if (param_1[1] != lVar3) {
      do {
        lVar2 = lVar1 + -0x28;
        lStack_38 = lVar1 + -0x18;
        FUN_10a436ac0(&lStack_38);
        FUN_10a05b1b0(lVar2);
        lVar1 = lVar2;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 10a78fa60; end: 10a78fcef;  */

/* WARNING: Removing unreachable block (ram,0x00010a78fc00) */
/* WARNING: Removing unreachable block (ram,0x00010a78fc04) */
/* WARNING: Removing unreachable block (ram,0x00010a78fc0c) */
/* WARNING: Removing unreachable block (ram,0x00010a78fc14) */
/* WARNING: Removing unreachable block (ram,0x00010a78fc18) */

undefined *** FUN_10a78fa60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined **ppuVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  byte bStack_f9;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x2c0;
  uVar8 = param_2;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110b9fda0;
  plVar15 = plVar4 + 3;
  plVar14 = (long *)param_3[1];
  ppuStack_88 = (undefined **)param_3[1];
  puStack_90 = (undefined *)*param_3;
  *param_3 = 0;
  param_3[1] = 0;
  plVar5 = plVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(plVar15,param_2,&puStack_90,plVar5,uVar8);
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar9 = plVar4 + 8;
  plVar10 = plVar15;
  plStack_b0 = plVar15;
  plStack_a8 = plVar4;
  FUN_10a05b2a8(&plStack_b0);
  FUN_10a05b04c(&uStack_a0,&plStack_b0);
  plVar4 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (pppuStack_98 == (undefined ***)0x0) {
    *param_1 = uStack_a0;
    param_1[1] = 0;
  }
  else {
    pppuVar6 = pppuStack_98 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
      if (bVar3) {
        *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_a0;
    param_1[1] = pppuStack_98;
    if (pppuStack_98 != (undefined ***)0x0) {
      pppuVar6 = pppuStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar3) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  param_1[2] = FUN_10a7b573c;
  param_1[3] = &PTR_DAT_110c187d0;
  param_1[4] = uStack_a0;
  param_1[5] = pppuStack_98;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_90 = &UNK_1053a6a3c;
  ppuStack_88 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_90);
  pppuVar6 = &ppuStack_88;
  (*(code *)*ppuStack_88)();
  if (pppuStack_98 != (undefined ***)0x0) {
    pppuVar7 = pppuStack_98 + 1;
    do {
      ppuVar12 = *pppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar3) {
        *pppuVar7 = (undefined **)((long)ppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_98)[2])(pppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar6 = pppuStack_98;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&plStack_b0);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a78fcf0;
  bStack_f9 = 0;
  lVar11 = plVar10[1];
  plVar4 = (long *)0x30;
  plStack_f8 = plVar5;
  uStack_f0 = param_2;
  puStack_e8 = param_3;
  plStack_e0 = plVar14;
  plStack_d8 = plVar15;
  pppuStack_d0 = &ppuStack_88;
  pppuStack_c8 = pppuVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  __Znwm();
  ppuVar12 = &PTR_FUN_110c187f8;
  *plVar4 = (long)&PTR_FUN_110c187f8;
  plVar4[1] = (long)&bStack_f9;
  plVar4[2] = (long)&plStack_f8;
  plVar4[3] = (long)plVar10;
  plVar4[4] = (long)pppuVar7;
  plVar4[5] = (long)plVar9;
  plVar15 = *(long **)(lVar11 + 0x20);
  if (plVar15 != (long *)0x0) {
    do {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar15 + 2,plVar15 + 6);
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
    ppuVar12 = (undefined **)*plVar4;
  }
  (*(code *)ppuVar12[5])(plVar4);
  uVar13 = (uint)bStack_f9;
  if ((bStack_f9 & 1) == 0) {
    plVar15 = (long *)plVar10[0x17];
    if (plVar15 != plVar10 + 0x18) {
      plVar5 = plVar9 + 0x3e;
      do {
        plVar4 = (long *)*plVar5;
        if (plVar4 == (long *)0x0) {
LAB_10a78fddc:
          if (plVar15[8] != 0) {
            FUN_10a3368d0(plVar9,plVar15 + 4,plVar15 + 8,plVar15 + 10,(long)(short)plVar15[0xf]);
          }
        }
        else {
          plVar14 = plVar5;
          do {
            lVar11 = 8;
            if ((ulong)plVar15[7] <= (ulong)plVar4[7]) {
              lVar11 = 0;
              plVar14 = plVar4;
            }
            plVar4 = *(long **)((long)plVar4 + lVar11);
          } while (plVar4 != (long *)0x0);
          if ((plVar14 == plVar5) || ((ulong)plVar15[7] < (ulong)plVar14[7])) goto LAB_10a78fddc;
        }
        plVar4 = (long *)plVar15[1];
        plVar14 = plVar15;
        if ((long *)plVar15[1] == (long *)0x0) {
          do {
            plVar15 = (long *)plVar14[2];
            bVar3 = (long *)*plVar15 != plVar14;
            plVar14 = plVar15;
          } while (bVar3);
        }
        else {
          do {
            plVar15 = plVar4;
            plVar4 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
      } while (plVar15 != plVar10 + 0x18);
    }
  }
  return (undefined ***)(ulong)(uVar13 ^ 1);
}



/* Entry: 10a78fcf0; end: 10a78fe6b;  */

byte FUN_10a78fcf0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte bStack_49;
  undefined8 uStack_48;
  
  bStack_49 = 0;
  lVar8 = *(long *)(param_3 + 8);
  plVar3 = (long *)0x30;
  uStack_48 = param_4;
  __Znwm();
  ppuVar4 = &PTR_FUN_110c187f8;
  *plVar3 = (long)&PTR_FUN_110c187f8;
  plVar3[1] = (long)&bStack_49;
  plVar3[2] = (long)&uStack_48;
  plVar3[3] = param_3;
  plVar3[4] = param_1;
  plVar3[5] = param_2;
  plVar7 = *(long **)(lVar8 + 0x20);
  if (plVar7 != (long *)0x0) {
    do {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar7 + 2,plVar7 + 6);
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    ppuVar4 = (undefined **)*plVar3;
  }
  (*(code *)ppuVar4[5])(plVar3);
  bVar1 = bStack_49;
  if ((bStack_49 & 1) == 0) {
    plVar3 = *(long **)(param_3 + 0xb8);
    if (plVar3 != (long *)(param_3 + 0xc0)) {
      plVar7 = (long *)(param_2 + 0x1f0);
      do {
        plVar5 = (long *)*plVar7;
        if (plVar5 == (long *)0x0) {
LAB_10a78fddc:
          if (plVar3[8] != 0) {
            FUN_10a3368d0(param_2,plVar3 + 4,plVar3 + 8,plVar3 + 10,(long)(short)plVar3[0xf]);
          }
        }
        else {
          plVar6 = plVar7;
          do {
            lVar8 = 8;
            if ((ulong)plVar3[7] <= (ulong)plVar5[7]) {
              lVar8 = 0;
              plVar6 = plVar5;
            }
            plVar5 = *(long **)((long)plVar5 + lVar8);
          } while (plVar5 != (long *)0x0);
          if ((plVar6 == plVar7) || ((ulong)plVar3[7] < (ulong)plVar6[7])) goto LAB_10a78fddc;
        }
        plVar5 = (long *)plVar3[1];
        plVar6 = plVar3;
        if ((long *)plVar3[1] == (long *)0x0) {
          do {
            plVar3 = (long *)plVar6[2];
            bVar2 = (long *)*plVar3 != plVar6;
            plVar6 = plVar3;
          } while (bVar2);
        }
        else {
          do {
            plVar3 = plVar5;
            plVar5 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
      } while (plVar3 != (long *)(param_3 + 0xc0));
    }
  }
  return bVar1 ^ 1;
}



/* Entry: 10a78fe6c; end: 10a78ff3f;  */

void FUN_10a78fe6c(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  uStack_38 = *(undefined4 *)(param_3 + 3);
  param_2 = param_2 + 0x20;
  func_0x00010a7b3fe8(param_2,&uStack_50);
  if (param_2 != 0) {
    plVar4 = *(long **)(param_2 + 0x38);
    while (plVar4 != *(long **)(param_2 + 0x30)) {
      *param_1 = 0;
      param_1[1] = 0;
      lVar1 = plVar4[-1];
      plVar4 = plVar4 + -2;
      if (lVar1 != 0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        param_1[1] = lVar1;
        if (lVar1 == 0) {
          plVar3 = (long *)*param_1;
        }
        else {
          plVar3 = (long *)*plVar4;
          *param_1 = (long)plVar3;
        }
        if (((plVar3 != (long *)0x0) && (*plVar3 != 0)) && (plVar3[1] != 0)) {
          puVar2 = param_3 + 6;
          FUN_10a77db68(puVar2,plVar3 + 6,1);
          if (((ulong)puVar2 & 1) != 0) {
            return;
          }
        }
      }
      FUN_10a436b30(param_1);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a78ff40; end: 10a790983;  */

/* WARNING: Removing unreachable block (ram,0x00010a79066c) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10a78ff40(code *******param_1,code *******param_2,code *******param_3,code *******param_4)

{
  char *pcVar1;
  code *******pppppppcVar2;
  code *******pppppppcVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  code *******pppppppcVar11;
  long *plVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  code *******pppppppcVar15;
  code *******pppppppcVar16;
  code *******pppppppcVar17;
  code ******ppppppcVar18;
  code *******pppppppcVar19;
  long lVar20;
  code *******pppppppcVar21;
  code *******pppppppcVar22;
  undefined8 uVar23;
  code *******pppppppcVar24;
  code ******ppppppcVar25;
  code *******unaff_x23;
  code ******ppppppcVar26;
  code *****pppppcVar27;
  code *****pppppcVar28;
  code ******ppppppcStack_150;
  code ******ppppppcStack_148;
  code *****pppppcStack_140;
  code *******pppppppcStack_138;
  long lStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  char cStack_119;
  code *****pppppcStack_118;
  code *******pppppppcStack_110;
  undefined8 uStack_108;
  undefined7 uStack_100;
  char cStack_f9;
  code ****ppppcStack_f8;
  code *******pppppppcStack_f0;
  code ****ppppcStack_e8;
  code ****ppppcStack_e0;
  code ****ppppcStack_d8;
  code *******pppppppcStack_d0;
  code ******ppppppcStack_c8;
  code ****ppppcStack_c0;
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  pppppppcVar14 = &ppppppcStack_150;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar18 = *param_4;
  pppppppcVar11 = param_1;
  pppppppcVar15 = param_2;
  pppppppcVar16 = param_3;
  pppppppcVar17 = param_4;
  if ((((ppppppcVar18 == (code ******)0x0) ||
       (ppppppcVar26 = param_4[2], ppppppcVar26 == (code ******)0x0)) ||
      (ppppppcVar18[7] == (code *****)0x0)) ||
     ((ppppppcVar18[0xb] == (code *****)0x0 ||
      (pppppppcVar11 = (code *******)ppppppcVar26[0x15], pppppppcVar11 == (code *******)0x0)))) {
LAB_10a78fff8:
    pppppppcVar14 = pppppppcVar15;
    uVar23 = 0;
    goto LAB_10a78fffc;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  unaff_x23 = param_3;
  if (pppppppcVar11 == (code *******)0x0) {
    if ((*param_4)[0xb] != (code *****)0x0) goto LAB_10a78fff8;
  }
  else {
    pppppcVar27 = ppppppcVar26[0x14];
    pppppcVar28 = (*param_4)[0xb];
    pppppppcVar24 = pppppppcVar11 + 1;
    do {
      ppppppcVar18 = *pppppppcVar24;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
      if (bVar10) {
        *pppppppcVar24 = (code ******)((long)ppppppcVar18 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppppcVar18 == (code ******)0x0) {
      (*(code *)(*pppppppcVar11)[2])(pppppppcVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (pppppcVar27 != pppppcVar28) goto LAB_10a78fff8;
  }
  ppppppcVar25 = *param_4;
  pppppppcVar11 = param_3;
  func_0x00010a777f8c();
  ppppppcVar25 = ppppppcVar25 + 0x15;
  ppppppcVar26 = (code ******)*ppppppcVar25;
  ppppppcVar18 = ppppppcVar25;
  if (ppppppcVar26 == (code ******)0x0) {
LAB_10a790088:
    pppppcStack_140 = (code *****)0x0;
    pppppppcStack_138 = (code *******)0x0;
  }
  else {
    do {
      lVar20 = 8;
      if ((uint)pppppppcVar11 <= *(uint *)(ppppppcVar26 + 4)) {
        lVar20 = 0;
        ppppppcVar18 = ppppppcVar26;
      }
      ppppppcVar26 = *(code *******)((long)ppppppcVar26 + lVar20);
    } while (ppppppcVar26 != (code ******)0x0);
    if ((ppppppcVar18 == ppppppcVar25) || ((uint)pppppppcVar11 < *(uint *)(ppppppcVar18 + 4)))
    goto LAB_10a790088;
    pppppcStack_140 = ppppppcVar18[0xd];
    pppppppcStack_138 = (code *******)ppppppcVar18[0xe];
    if (pppppppcStack_138 != (code *******)0x0) {
      pppppppcVar11 = pppppppcStack_138 + 1;
      do {
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppppcVar11,0x10);
        if (bVar10) {
          *pppppppcVar11 = (code ******)((long)*pppppppcVar11 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
  }
  pppppcVar27 = pppppcStack_140;
  ppppppcVar18 = param_4[2];
  unaff_x23 = (code *******)ppppppcVar18[0x17];
  if ((unaff_x23 == (code *******)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x23 == (code *******)0x0)) {
    if (pppppcVar27 == (code *****)0x0) goto LAB_10a7900ec;
LAB_10a790838:
    uVar23 = 0;
    pppppppcVar11 = unaff_x23;
    pppppppcVar14 = pppppppcVar15;
    unaff_x23 = param_3;
  }
  else {
    pppppcVar28 = ppppppcVar18[0x16];
    pppppppcVar11 = unaff_x23 + 1;
    do {
      ppppppcVar18 = *pppppppcVar11;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pppppppcVar11,0x10);
      if (bVar10) {
        *pppppppcVar11 = (code ******)((long)ppppppcVar18 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppppcVar18 == (code ******)0x0) {
      (*(code *)(*unaff_x23)[2])(unaff_x23);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (pppppcVar28 != pppppcVar27) goto LAB_10a790838;
LAB_10a7900ec:
    if ((param_2[0x45] == param_2[0x46]) ||
       (pppppppcVar24 = (code *******)*param_2[0x45], pppppppcVar24 == (code *******)0x0))
    goto LAB_10a790838;
    uVar4 = *(uint *)((long)(*param_4)[0xb] + 4);
    uVar9 = uVar4;
    if ((pppppcStack_140 != (code *****)0x0) &&
       (uVar9 = *(uint *)((long)pppppcStack_140 + 4), uVar4 <= *(uint *)((long)pppppcStack_140 + 4))
       ) {
      uVar9 = uVar4;
    }
    pppppppcVar3 = pppppppcVar24 + 0x40;
    pppppppcVar11 = (code *******)pppppppcVar24[0x40];
    pppppppcVar2 = pppppppcVar24 + 0x41;
    while (pppppppcVar11 != pppppppcVar2) {
      ppppppcVar18 = (code ******)(long)*(char *)((long)pppppppcVar11 + 0x37);
      if ((long)ppppppcVar18 < 0) {
        pppppppcVar16 = (code *******)pppppppcVar11[4];
        ppppppcVar18 = pppppppcVar11[5];
      }
      else {
        pppppppcVar16 = pppppppcVar11 + 4;
      }
      ppppppcVar26 = ppppppcVar18;
      if ((code ******)0xe < ppppppcVar18) {
        ppppppcVar26 = (code ******)0xf;
      }
      if (ppppppcVar18 == (code ******)0x0) {
LAB_10a7901e0:
        pppppppcVar16 = pppppppcVar11;
        pppppppcVar17 = (code *******)pppppppcVar11[1];
        if ((code *******)pppppppcVar11[1] == (code *******)0x0) {
          do {
            pppppppcVar11 = (code *******)pppppppcVar16[2];
            bVar10 = (code *******)*pppppppcVar11 != pppppppcVar16;
            pppppppcVar16 = pppppppcVar11;
          } while (bVar10);
        }
        else {
          do {
            pppppppcVar11 = pppppppcVar17;
            pppppppcVar17 = (code *******)*pppppppcVar11;
          } while ((code *******)*pppppppcVar11 != (code *******)0x0);
        }
      }
      else {
        pppppppcVar15 = (code *******)((long)pppppppcVar16 + (long)ppppppcVar26);
        pppppppcVar19 = pppppppcVar15;
        pppppppcVar17 = pppppppcVar16;
        do {
          pppppppcVar22 = pppppppcVar19;
          if (*(char *)pppppppcVar17 == 'M') {
            lVar20 = 1;
            do {
              pppppppcVar22 = pppppppcVar17;
              if (lVar20 == 0xf) break;
              pppppppcVar21 = (code *******)((long)pppppppcVar17 + lVar20);
              pppppppcVar22 = pppppppcVar19;
              if (pppppppcVar21 == pppppppcVar15) goto LAB_10a7901c4;
              pcVar1 = &UNK_10f675b82 + lVar20;
              lVar20 = lVar20 + 1;
            } while (*(char *)pppppppcVar21 == *pcVar1);
          }
          pppppppcVar17 = (code *******)((long)pppppppcVar17 + 1);
          pppppppcVar19 = pppppppcVar22;
        } while (pppppppcVar17 != pppppppcVar15);
LAB_10a7901c4:
        if ((pppppppcVar22 == pppppppcVar15) || (pppppppcVar22 != pppppppcVar16))
        goto LAB_10a7901e0;
        pppppppcVar11 = pppppppcVar3;
        FUN_10a0480ac();
      }
    }
    __ZNSt3__19to_stringEj(&lStack_130,uVar9);
    plVar12 = &lStack_130;
    pppppppcVar17 = (code *******)0xf;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar12,0,&UNK_10f675b82);
    pppppppcStack_110 = (code *******)*plVar12;
    uStack_a0._0_7_ = (undefined7)plVar12[1];
    uStack_a0._7_1_ = (undefined1)*(undefined8 *)((long)plVar12 + 0xf);
    uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)plVar12 + 0xf) >> 8);
    cStack_f9 = *(char *)((long)plVar12 + 0x17);
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    uStack_100 = uStack_98;
    uStack_108._0_7_ = (undefined7)uStack_a0;
    uStack_108._7_1_ = uStack_a0._7_1_;
    ppppcStack_f8 = (code ****)0x0;
    func_0x000107c2b080(&pppppppcStack_110);
    pppppppcVar16 = (code *******)&pppppppcStack_110;
    FUN_10a20e230(pppppppcVar3,&pppppppcStack_110);
    if (cStack_f9 < '\0') {
      __ZdlPv(pppppppcStack_110);
    }
    if (cStack_119 < '\0') {
      __ZdlPv(lStack_130);
    }
    pppppppcVar11 = param_3;
    func_0x00010a777f8c();
    if (((int)pppppppcVar11 == 1) &&
       (pppppppcVar11 = param_3, (*(code *)(*param_3)[0x3b])(), (int)pppppppcVar11 != 0)) {
      uVar7 = *(ushort *)((long)pppppppcVar24 + 0x129);
      *(ushort *)((long)pppppppcVar24 + 0x129) = uVar7 & 0xff80 | uVar7 + 1 & 0x7f;
      *(ushort *)(pppppppcVar24 + 0xe) =
           *(ushort *)(pppppppcVar24 + 0xe) & 0xff80 | *(ushort *)(pppppppcVar24 + 0xe) + 1 & 0x7f;
      uStack_100 = SUB87(pppppppcVar24 + 8,0);
      cStack_f9 = (char)((ulong)(pppppppcVar24 + 8) >> 0x38);
      ppppcStack_f8 = (code ****)CONCAT71(ppppcStack_f8._1_7_,1);
      pppppppcStack_110 = (code *******)FUN_10a1d3648;
      uStack_108._0_7_ = 0x110bad818;
      uStack_108._7_1_ = 0;
      FUN_10a789104();
      ppppppcStack_148 = param_1[1];
      ppppppcStack_150 = *param_1;
      if (param_1[1] != (code ******)0x0) {
        ppppppcVar18 = param_1[1] + 1;
        do {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppcVar18,0x10);
          if (bVar10) {
            *ppppppcVar18 = (code *****)((long)*ppppppcVar18 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_10a334f0c(pppppppcVar24);
      ppppppcVar18 = ppppppcStack_148;
      if (ppppppcStack_148 != (code ******)0x0) {
        ppppppcVar26 = ppppppcStack_148 + 1;
        do {
          pppppcVar27 = *ppppppcVar26;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppcVar26,0x10);
          if (bVar10) {
            *ppppppcVar26 = (code *****)((long)pppppcVar27 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppcVar27 == (code *****)0x0) {
          (*(code *)(*ppppppcStack_148)[2])(ppppppcStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar18);
        }
      }
      FUN_10a044790(&pppppppcStack_110);
      pppppppcVar11 = (code *******)&uStack_108;
      (**(code **)CONCAT17(uStack_108._7_1_,(undefined7)uStack_108))();
      unaff_x23 = (code *******)&pppppppcStack_110;
    }
    else {
      unaff_x23 = (code *******)param_1[0x31];
      pppppppcVar16 = (code *******)pppppppcVar24[0x31];
      pppppppcVar15 = param_3;
      FUN_10a778638();
      if ((int)unaff_x23 == 0) goto LAB_10a790838;
      pppppppcVar11 = (code *******)*pppppppcVar3;
      if (pppppppcVar11 != pppppppcVar2) {
        param_3 = (code *******)&UNK_10f675b92;
        do {
          ppppppcVar18 = (code ******)(long)*(char *)((long)pppppppcVar11 + 0x37);
          if ((long)ppppppcVar18 < 0) {
            pppppppcVar14 = (code *******)pppppppcVar11[4];
            ppppppcVar18 = pppppppcVar11[5];
          }
          else {
            pppppppcVar14 = pppppppcVar11 + 4;
          }
          ppppppcVar26 = ppppppcVar18;
          if ((code ******)0xa < ppppppcVar18) {
            ppppppcVar26 = (code ******)0xb;
          }
          if (ppppppcVar18 == (code ******)0x0) {
LAB_10a790494:
            pppppppcVar14 = pppppppcVar11;
            pppppppcVar16 = (code *******)pppppppcVar11[1];
            if ((code *******)pppppppcVar11[1] == (code *******)0x0) {
              do {
                pppppppcVar11 = (code *******)pppppppcVar14[2];
                bVar10 = (code *******)*pppppppcVar11 != pppppppcVar14;
                pppppppcVar14 = pppppppcVar11;
              } while (bVar10);
            }
            else {
              do {
                pppppppcVar11 = pppppppcVar16;
                pppppppcVar16 = (code *******)*pppppppcVar11;
              } while ((code *******)*pppppppcVar11 != (code *******)0x0);
            }
          }
          else {
            pppppppcVar15 = (code *******)((long)pppppppcVar14 + (long)ppppppcVar26);
            pppppppcVar19 = pppppppcVar15;
            pppppppcVar16 = pppppppcVar14;
            do {
              pppppppcVar22 = pppppppcVar19;
              if (*(char *)pppppppcVar16 == 'I') {
                lVar20 = 1;
                do {
                  pppppppcVar22 = pppppppcVar16;
                  if (lVar20 == 0xb) break;
                  pppppppcVar21 = (code *******)((long)pppppppcVar16 + lVar20);
                  pppppppcVar22 = pppppppcVar19;
                  if (pppppppcVar21 == pppppppcVar15) goto LAB_10a790478;
                  pcVar1 = &UNK_10f675b92 + lVar20;
                  lVar20 = lVar20 + 1;
                } while (*(char *)pppppppcVar21 == *pcVar1);
              }
              pppppppcVar16 = (code *******)((long)pppppppcVar16 + 1);
              pppppppcVar19 = pppppppcVar22;
            } while (pppppppcVar16 != pppppppcVar15);
LAB_10a790478:
            if ((pppppppcVar22 == pppppppcVar15) || (pppppppcVar22 != pppppppcVar14))
            goto LAB_10a790494;
            pppppppcVar11 = pppppppcVar3;
            FUN_10a0480ac();
          }
        } while (pppppppcVar11 != pppppppcVar2);
      }
      func_0x000107c2b07c(&pppppppcStack_110,&UNK_10f675b9e);
      pppppppcVar14 = (code *******)&pppppppcStack_110;
      pppppppcVar16 = (code *******)&pppppppcStack_110;
      pppppppcVar11 = pppppppcVar3;
      FUN_10a20e230();
      unaff_x23 = param_3;
      if (cStack_f9 < '\0') {
        pppppppcVar11 = pppppppcStack_110;
        __ZdlPv();
      }
    }
    pppppcVar27 = (*param_4)[4];
    pppppcVar28 = (*param_4)[5];
    if (pppppcVar27 != pppppcVar28) {
      param_3 = unaff_x23;
      do {
        pppppppcVar15 = (code *******)pppppcVar27[7];
        unaff_x23 = (code *******)(*param_4 + 0x17);
        FUN_10a7b2500();
        if ((unaff_x23 == (code *******)0x0) ||
           (param_3 = unaff_x23, unaff_x23[6] == (code ******)0x0)) goto LAB_10a790838;
        if (*(char *)((long)pppppcVar27 + 0x17) < '\0') {
          func_0x000107c3192c(&pppppppcStack_110,*pppppcVar27,pppppcVar27[1]);
        }
        else {
          pppppppcStack_110 = (code *******)*pppppcVar27;
          uStack_100 = SUB87(pppppcVar27[2],0);
          cStack_f9 = (char)((ulong)pppppcVar27[2] >> 0x38);
          uStack_108._0_7_ = SUB87(pppppcVar27[1],0);
          uStack_108._7_1_ = (undefined1)((ulong)pppppcVar27[1] >> 0x38);
        }
        ppppcStack_f8 = pppppcVar27[3];
        if (*(char *)((long)pppppcVar27 + 0x37) < '\0') {
          func_0x000107c3192c(&pppppppcStack_f0,pppppcVar27[4],pppppcVar27[5]);
        }
        else {
          ppppcStack_e8 = pppppcVar27[5];
          pppppppcStack_f0 = (code *******)pppppcVar27[4];
          ppppcStack_e0 = pppppcVar27[6];
        }
        ppppcStack_d8 = pppppcVar27[7];
        if (*(char *)((long)pppppcVar27 + 0x57) < '\0') {
          func_0x000107c3192c(&pppppppcStack_d0,pppppcVar27[8],pppppcVar27[9]);
        }
        else {
          ppppppcStack_c8 = (code ******)pppppcVar27[9];
          pppppppcStack_d0 = (code *******)pppppcVar27[8];
          ppppcStack_c0 = pppppcVar27[10];
        }
        uStack_b8 = *(uint *)(pppppcVar27 + 0xb);
        uStack_b0 = 0;
        uStack_a8 = 0;
        lStack_130 = 0;
        uStack_128 = 0;
        uStack_121 = 0;
        FUN_10a33ef1c(pppppppcVar24,&pppppppcStack_f0,0,0,&lStack_130);
        uVar4 = 0;
        if (uStack_b8 != 0) {
          uVar4 = 0x4000 / uStack_b8;
        }
        __ZNSt3__19to_stringEj(&uStack_a0,uVar4);
        ppppppcVar18 = ppppppcStack_c8;
        pppppppcVar11 = pppppppcStack_d0;
        if (-1 < (long)ppppcStack_c0) {
          ppppppcVar18 = (code ******)((ulong)ppppcStack_c0 >> 0x38);
          pppppppcVar11 = (code *******)&pppppppcStack_d0;
        }
        plVar12 = &uStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar12,0,pppppppcVar11,ppppppcVar18);
        lStack_130 = *plVar12;
        uStack_88 = (undefined7)plVar12[1];
        uStack_81 = (undefined1)*(undefined8 *)((long)plVar12 + 0xf);
        uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)plVar12 + 0xf) >> 8);
        cStack_119 = *(char *)((long)plVar12 + 0x17);
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = 0;
        uStack_120 = uStack_80;
        uStack_128 = uStack_88;
        uStack_121 = uStack_81;
        pppppcStack_118 = (code *****)0x0;
        func_0x000107c2b080(&lStack_130);
        for (ppppppcVar18 = *pppppppcVar2; ppppppcVar18 != (code ******)0x0;
            ppppppcVar18 = (code ******)*ppppppcVar18) {
          if (ppppppcVar18[7] <= pppppcStack_118) {
            if (pppppcStack_118 <= ppppppcVar18[7]) goto LAB_10a7907c8;
            ppppppcVar18 = ppppppcVar18 + 1;
          }
        }
        pppppppcVar11 = (code *******)*pppppppcVar3;
        while (pppppppcVar11 != pppppppcVar2) {
          ppppppcVar18 = (code ******)(long)*(char *)((long)pppppppcVar11 + 0x37);
          if ((long)ppppppcVar18 < 0) {
            pppppppcVar14 = (code *******)pppppppcVar11[4];
            ppppppcVar18 = pppppppcVar11[5];
          }
          else {
            pppppppcVar14 = pppppppcVar11 + 4;
          }
          ppppppcVar26 = ppppppcStack_c8;
          pppppppcVar16 = pppppppcStack_d0;
          if (-1 < (long)ppppcStack_c0) {
            ppppppcVar26 = (code ******)((ulong)ppppcStack_c0 >> 0x38);
            pppppppcVar16 = (code *******)&pppppppcStack_d0;
          }
          if (ppppppcVar26 <= ppppppcVar18) {
            ppppppcVar18 = ppppppcVar26;
          }
          pppppppcVar17 = (code *******)((long)pppppppcVar14 + (long)ppppppcVar18);
          pppppppcVar15 = pppppppcVar17;
          if (ppppppcVar18 != (code ******)0x0) {
            pppppppcVar19 = pppppppcVar14;
            pppppppcVar22 = pppppppcVar14;
            pppppppcVar21 = pppppppcVar17;
            do {
              while (pppppppcVar22 = (code *******)((long)pppppppcVar22 + 1),
                    pppppppcVar13 = pppppppcVar16, ppppppcVar18 = ppppppcVar26,
                    *(char *)pppppppcVar19 == *(char *)pppppppcVar16) {
                do {
                  pppppppcVar13 = (code *******)((long)pppppppcVar13 + 1);
                  pppppppcVar15 = pppppppcVar19;
                  if ((code ******)((long)ppppppcVar18 - 1U) == (code ******)0x0) break;
                  pppppppcVar15 = pppppppcVar21;
                  if (pppppppcVar22 == pppppppcVar17) goto LAB_10a790760;
                  cVar8 = *(char *)pppppppcVar22;
                  pppppppcVar22 = (code *******)((long)pppppppcVar22 + 1);
                  ppppppcVar18 = (code ******)((long)ppppppcVar18 - 1U);
                } while (cVar8 == *(char *)pppppppcVar13);
                pppppppcVar19 = (code *******)((long)pppppppcVar19 + 1);
                pppppppcVar22 = pppppppcVar19;
                pppppppcVar21 = pppppppcVar15;
                if (pppppppcVar19 == pppppppcVar17) goto LAB_10a790760;
              }
              pppppppcVar19 = (code *******)((long)pppppppcVar19 + 1);
              pppppppcVar15 = pppppppcVar21;
            } while (pppppppcVar19 != pppppppcVar17);
          }
LAB_10a790760:
          if ((pppppppcVar15 == pppppppcVar17 && ppppppcVar26 != (code ******)0x0) ||
             (pppppppcVar15 != pppppppcVar14)) {
            pppppppcVar14 = pppppppcVar11;
            pppppppcVar16 = (code *******)pppppppcVar11[1];
            if ((code *******)pppppppcVar11[1] == (code *******)0x0) {
              do {
                pppppppcVar11 = (code *******)pppppppcVar14[2];
                bVar10 = (code *******)*pppppppcVar11 != pppppppcVar14;
                pppppppcVar14 = pppppppcVar11;
              } while (bVar10);
            }
            else {
              do {
                pppppppcVar11 = pppppppcVar16;
                pppppppcVar16 = (code *******)*pppppppcVar11;
              } while ((code *******)*pppppppcVar11 != (code *******)0x0);
            }
          }
          else {
            pppppppcVar11 = pppppppcVar3;
            FUN_10a0480ac();
          }
        }
        FUN_10a047898(pppppppcVar3,&lStack_130,&lStack_130);
LAB_10a7907c8:
        if (cStack_119 < '\0') {
          __ZdlPv(lStack_130);
        }
        pppppppcVar16 = (code *******)(ulong)*(uint *)(pppppcVar27 + 0xb);
        pppppppcVar17 = (code *******)*unaff_x23[6];
        pppppppcVar14 = (code *******)(pppppcVar27 + 4);
        pppppppcVar11 = pppppppcVar24;
        FUN_10a77b894();
        if ((long)ppppcStack_c0 < 0) {
          pppppppcVar11 = pppppppcStack_d0;
          __ZdlPv();
        }
        if ((long)ppppcStack_e0 < 0) {
          pppppppcVar11 = pppppppcStack_f0;
          __ZdlPv();
        }
        if (cStack_f9 < '\0') {
          pppppppcVar11 = pppppppcStack_110;
          __ZdlPv();
        }
        pppppcVar27 = pppppcVar27 + 0xc;
      } while (pppppcVar27 != pppppcVar28);
    }
    uVar23 = 1;
  }
  pppppppcVar15 = pppppppcStack_138;
  if (pppppppcStack_138 != (code *******)0x0) {
    pppppppcVar24 = pppppppcStack_138 + 1;
    do {
      ppppppcVar18 = *pppppppcVar24;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
      if (bVar10) {
        *pppppppcVar24 = (code ******)((long)ppppppcVar18 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppppcVar18 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_138)[2])(pppppppcStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppcVar11 = pppppppcVar15;
    }
  }
LAB_10a78fffc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar23;
  }
  ___stack_chk_fail();
  func_0x00010a36313c(&ppppppcStack_150);
  FUN_10a044790(&pppppppcStack_110);
  (**(code **)CONCAT17(uStack_108._7_1_,(undefined7)uStack_108))(unaff_x23 + 1);
  FUN_10a7ad3c4(&pppppcStack_140);
  __Unwind_Resume();
  if (pppppppcVar16 == pppppppcVar17) {
    return 1;
  }
  if (pppppppcVar11 == pppppppcVar14) {
    return 0;
  }
LAB_10a7909bc:
  ppppppcVar18 = pppppppcVar16[3];
  pppppppcVar15 = pppppppcVar11;
  do {
    if ((pppppppcVar15[3] == ppppppcVar18) && (pppppppcVar15[7] == pppppppcVar16[7])) {
      bVar5 = *(byte *)((long)pppppppcVar15 + 0x57);
      ppppppcVar26 = pppppppcVar15[9];
      if (-1 < (char)bVar5) {
        ppppppcVar26 = (code ******)(ulong)bVar5;
      }
      bVar6 = *(byte *)((long)pppppppcVar16 + 0x57);
      ppppppcVar25 = pppppppcVar16[9];
      if (-1 < (char)bVar6) {
        ppppppcVar25 = (code ******)(ulong)bVar6;
      }
      if (ppppppcVar26 == ppppppcVar25) {
        pppppppcVar24 = (code *******)pppppppcVar15[8];
        if (-1 < (char)bVar5) {
          pppppppcVar24 = pppppppcVar15 + 8;
        }
        pppppppcVar3 = (code *******)pppppppcVar16[8];
        if (-1 < (char)bVar6) {
          pppppppcVar3 = pppppppcVar16 + 8;
        }
        _memcmp(pppppppcVar24,pppppppcVar3);
        if (((int)pppppppcVar24 == 0) &&
           (*(int *)(pppppppcVar15 + 0xb) == *(int *)(pppppppcVar16 + 0xb))) break;
      }
    }
    pppppppcVar15 = pppppppcVar15 + 0xc;
    if (pppppppcVar15 == pppppppcVar14) {
      return 0;
    }
  } while( true );
  pppppppcVar16 = pppppppcVar16 + 0xc;
  if (pppppppcVar16 == pppppppcVar17) {
    return 1;
  }
  goto LAB_10a7909bc;
}



/* Entry: 10a790984; end: 10a790a8f;  */

undefined8 FUN_10a790984(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 == param_4) {
    return 1;
  }
  if (param_1 == param_2) {
    return 0;
  }
LAB_10a7909bc:
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = param_1;
  do {
    if ((*(long *)(lVar8 + 0x18) == lVar7) && (*(long *)(lVar8 + 0x38) == *(long *)(param_3 + 0x38))
       ) {
      bVar4 = *(byte *)(lVar8 + 0x57);
      uVar1 = *(ulong *)(lVar8 + 0x48);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)(param_3 + 0x57);
      uVar2 = *(ulong *)(param_3 + 0x48);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        plVar6 = (long *)*(long *)(lVar8 + 0x40);
        if (-1 < (char)bVar4) {
          plVar6 = (long *)(lVar8 + 0x40);
        }
        plVar3 = (long *)*(long *)(param_3 + 0x40);
        if (-1 < (char)bVar5) {
          plVar3 = (long *)(param_3 + 0x40);
        }
        _memcmp(plVar6,plVar3);
        if (((int)plVar6 == 0) && (*(int *)(lVar8 + 0x58) == *(int *)(param_3 + 0x58))) break;
      }
    }
    lVar8 = lVar8 + 0x60;
    if (lVar8 == param_2) {
      return 0;
    }
  } while( true );
  param_3 = param_3 + 0x60;
  if (param_3 == param_4) {
    return 1;
  }
  goto LAB_10a7909bc;
}



/* Entry: 10a790a90; end: 10a790c0b;  */

undefined8 * FUN_10a790a90(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a790c0c; end: 10a790da3;  */

void FUN_10a790c0c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_68;
  long *plStack_60;
  undefined1 uStack_51;
  
  lStack_68 = *param_2;
  if (lStack_68 != 0) {
    plVar8 = (long *)*param_1;
    if (plVar8 != (long *)param_1[1]) {
      do {
        lStack_68 = 0;
        plStack_60 = (long *)0x0;
        plVar5 = (long *)plVar8[1];
        if (((plVar5 == (long *)0x0) ||
            (__ZNSt3__119__shared_weak_count4lockEv(), plStack_60 = plVar5, plVar5 == (long *)0x0))
           || (lStack_68 = *plVar8, lStack_68 == 0)) {
          plVar5 = plStack_60;
          if ((long *)param_1[1] == plVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a790d7c);
            (*pcVar3)();
          }
          plVar6 = plVar8 + 2;
          FUN_10a60f9bc(&uStack_51,plVar6,(long *)param_1[1],plVar8);
          for (plVar9 = (long *)param_1[1]; plVar9 != plVar6; plVar9 = plVar9 + -2) {
            if (plVar9[-1] != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          param_1[1] = (long)plVar6;
          if (plVar5 != (long *)0x0) {
            cVar4 = '\x03';
            goto LAB_10a790cd8;
          }
        }
        else {
          cVar4 = lStack_68 == *param_2;
          lVar7 = 0;
          if (!(bool)cVar4) {
            lVar7 = 0x10;
          }
          plVar8 = (long *)((long)plVar8 + lVar7);
LAB_10a790cd8:
          plVar6 = plVar5 + 1;
          do {
            lVar7 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
          if ((cVar4 != '\x03') && (cVar4 != '\0')) {
            return;
          }
        }
      } while (plVar8 != (long *)param_1[1]);
      lStack_68 = *param_2;
    }
    plStack_60 = (long *)param_2[1];
    if (plStack_60 != (long *)0x0) {
      plVar8 = (long *)((long)plStack_60 + 0x10);
      do {
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a637a40(param_1,&lStack_68);
    if (plStack_60 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return;
}



/* Entry: 10a790da4; end: 10a790e03;  */

long FUN_10a790da4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_10a436958(param_1 + 0x70);
    func_0x00010a4369b0(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010a436a08(param_1 + 0x30);
    FUN_10a436b30(param_1 + 0x20);
  }
  func_0x00010a436ff0(param_1 + 0x10);
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



/* Entry: 10a790e04; end: 10a790fe7;  */

void FUN_10a790e04(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (*(long *)(param_1 + 0x2e0) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x2e0) + 0x2c) == -1) {
    return;
  }
  lStack_50 = 0;
  lVar9 = param_1 + 0x2b8;
  FUN_10a5e7d1c(lVar9,&lStack_50);
  if (lVar9 == 0) {
    return;
  }
  if (*(char *)(lVar9 + 0x98) != '\x01') {
    return;
  }
  lVar10 = *(long *)(lVar9 + 0x88);
  if (lVar10 == 0) {
    return;
  }
  plVar8 = *(long **)(lVar10 + 0xa8);
  if (plVar8 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0xa0);
  lStack_50 = lVar10;
  plStack_48 = plVar8;
  if (lVar10 != 0) {
    if ((*(byte *)(lVar9 + 0x98) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a790fcc);
      (*pcVar7)();
    }
    iVar1 = *(int *)(*(long *)(lVar9 + 0x88) + 0xd8);
    lVar11 = *(long *)(param_1 + 0x2e0);
    lStack_60 = 0;
    lStack_58 = 0;
    lVar9 = *(long *)(lVar11 + 0x38);
    if ((lVar9 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_58 = lVar9, lVar9 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar11 + 0x30);
      lStack_60 = lVar9;
    }
    if (lVar9 == lVar10) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x2e0) + 0x40);
      FUN_10a7ad3c4(&lStack_60);
      if (iVar2 == iVar1) goto LAB_10a790f80;
    }
    else {
      FUN_10a7ad3c4(&lStack_60);
    }
    plVar12 = *(long **)(param_1 + 0x2e0);
    lStack_60 = 0;
    lStack_58 = 0;
    lVar9 = plVar12[1];
    if (((lVar9 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_58 = lVar9, lVar9 != 0))
       && (lStack_60 = *plVar12, lStack_60 != 0)) {
      lVar9 = *(long *)(param_1 + 0x2e0);
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (uVar3 != 0) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = *(uint *)(lVar9 + 0x14) / uVar3;
        }
        if ((*(uint *)(lVar9 + 0x14) == uVar6 * uVar3) &&
           ((ulong)*(uint *)(lVar9 + 0x2c) + 4 <= (ulong)uVar6)) {
          FUN_10a79637c(lVar9,iVar1);
          lVar9 = *(long *)(param_1 + 0x2e0);
          plVar12 = plVar8 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar11 = *(long *)(lVar9 + 0x38);
          *(long *)(lVar9 + 0x30) = lVar10;
          *(long **)(lVar9 + 0x38) = plVar8;
          if (lVar11 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(int *)(*(long *)(param_1 + 0x2e0) + 0x40) = iVar1;
        }
      }
    }
    FUN_10a7b5fb0(&lStack_60);
  }
LAB_10a790f80:
  plVar12 = plVar8 + 1;
  do {
    lVar9 = *plVar12;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  return;
}



/* Entry: 10a790fe8; end: 10a7910ff;  */

undefined8 * FUN_10a790fe8(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uStack_bc;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  uStack_bc = param_2;
  if (param_2 != 0) {
    uVar7 = (ulong)param_2;
    lVar9 = param_1[0x12];
    if (((uVar7 < (ulong)(param_1[0x13] - lVar9 >> 2)) &&
        (iVar3 = *(int *)(lVar9 + uVar7 * 4), iVar3 != 0)) &&
       (iVar3 = iVar3 + -1, *(int *)(lVar9 + uVar7 * 4) = iVar3, iVar3 == 0)) {
      if (param_2 < *(uint *)((long)param_1 + 0x4c)) {
        uVar2 = *(uint *)(param_1 + 8);
        uVar11 = (ulong)uVar2;
        if (uVar2 != 0) {
          lVar8 = param_1[10];
          lVar9 = 0;
          if (uVar2 < 0x80) {
            lVar9 = 0x80 - uVar11;
          }
          _bzero(auStack_b8 + uVar11,lVar9);
          _memcpy(auStack_b8,lVar8 + uVar2 * uVar7,uVar11);
          puVar10 = param_1 + 0xd;
          func_0x00010a7c5b6c(puVar10,auStack_b8);
          if ((puVar10 != (undefined8 *)0x0) && (*(uint *)(puVar10 + 0x12) == param_2)) {
            FUN_10a7c5c44(param_1 + 0xd,puVar10);
          }
        }
      }
      puVar10 = param_1 + 0x15;
      FUN_10a0e6678(puVar10,&uStack_bc);
      *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar10;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar6 = (long *)puVar10[1];
  if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0))
  {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)*puVar10;
    plVar1 = plVar6 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar10;
}



/* Entry: 10a791100; end: 10a7911df;  */

undefined8 FUN_10a791100(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)param_1[1];
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = *param_1;
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
  return uVar6;
}



/* Entry: 10a7911e0; end: 10a791307;  */

undefined8 * FUN_10a7911e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10a03c0d0();
  *puVar1 = &PTR_FUN_110c17a50;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  puVar1[9] = &UNK_10e52b660;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = puVar1 + 0xd;
  puVar1[0xe] = puVar1 + 0xd;
  puVar1[0xf] = 0;
  puVar1[0x10] = &UNK_10e52b660;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x17] = param_2;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[1],&PTR_DAT_110b9f988,param_2,param_1);
  }
  return param_1;
}



/* Entry: 10a791308; end: 10a791397;  */

undefined8 * FUN_10a791308(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c17a50;
  puStack_28 = param_1 + 0x14;
  FUN_10a7a7144(&puStack_28);
  if (param_1[0x12] != 0) {
    __ZdlPv(param_1[0x10] + -8);
  }
  func_0x00010a7a71b4(param_1 + 0xd);
  func_0x00010a7a7224(param_1 + 9);
  func_0x00010a7b6060(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a791398; end: 10a79139b;  */

undefined8 * FUN_10a791398(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c17a50;
  puStack_28 = param_1 + 0x14;
  FUN_10a7a7144(&puStack_28);
  if (param_1[0x12] != 0) {
    __ZdlPv(param_1[0x10] + -8);
  }
  func_0x00010a7a71b4(param_1 + 0xd);
  func_0x00010a7a7224(param_1 + 9);
  func_0x00010a7b6060(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a79139c; end: 10a7913af;  */

void FUN_10a79139c(void)

{
  FUN_10a791308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7913b0; end: 10a792077;  */

void FUN_10a7913b0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  long *plVar29;
  undefined8 *puVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  undefined8 *puVar35;
  ulong unaff_x28;
  float fVar36;
  long *plStack_c8;
  long *plStack_c0;
  uint auStack_b8 [2];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  int iStack_70;
  int iStack_6c;
  
  uVar4 = *(uint *)(param_3 + 0xf0);
  if (uVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar14 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(param_3 + 0x18);
  lVar32 = *(long *)(param_3 + 0x28);
  lVar12 = *(long *)(param_3 + 0x30);
  uVar19 = 4;
  if (*(int *)(param_3 + 0xe8) != 2) {
    uVar19 = 0;
  }
  uVar3 = 2;
  if (*(int *)(param_3 + 0xe8) != 1) {
    uVar3 = uVar19;
  }
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  auStack_b8[0] = uVar4;
  FUN_10a269e90();
  lStack_90 = *(long *)(param_3 + 0x118);
  lStack_98 = *(long *)(param_3 + 0x110);
  lStack_80 = *(long *)(param_3 + 0x128);
  lStack_88 = *(long *)(param_3 + 0x120);
  lStack_78 = *(long *)(param_3 + 0x130);
  iStack_70 = *(int *)(param_3 + 0xe8);
  iStack_6c = *(int *)(param_3 + 0xec);
  lVar22 = (lStack_a8 - lStack_b0 >> 3) * 0x6db6db6db6db6db7;
  uVar25 = ((ulong)auStack_b8[0] + 0x2853a3c667 ^ 0x9e3779b9) + 0x9e3779b9;
  uVar25 = lVar22 + uVar25 * 0x40 + (uVar25 >> 2) + 0x9e3779b9 ^ uVar25;
  if (lStack_a8 - lStack_b0 != 0) {
    puVar24 = (uint *)(lStack_b0 + 0x30);
    do {
      if (lStack_b0 != 0) {
        uVar25 = uVar25 + 0x9e3779b9;
        uVar25 = (uVar25 * 0x40 + 0x9e3779b9 + (uVar25 >> 2) + *(long *)(puVar24 + -6) ^ uVar25) +
                 0x9e3779b9;
        uVar25 = ((long)(int)puVar24[-3] + 0x9e3779b9 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25) +
                 0x9e3779b9;
        uVar25 = ((ulong)puVar24[-2] + 0x9e3779b9 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25) +
                 0x9e3779b9;
        uVar25 = ((ulong)(byte)puVar24[-1] + 0x9e3779b9 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25) +
                 0x9e3779b9;
        uVar25 = (ulong)*puVar24 + 0x9e3779b9 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25;
      }
      puVar24 = puVar24 + 0xe;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  uVar25 = uVar25 + 0x9e3779b9;
  uVar25 = ((long)iStack_70 + 0x9e3779b9 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25) + 0x9e3779b9;
  uVar25 = (long)iStack_6c + 0x9e3779b9 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25;
  uVar26 = *(ulong *)(param_2 + 0x28);
  if (uVar26 != 0) {
    uVar28 = uVar26 - 1;
    if ((uVar26 & uVar28) == 0) {
      unaff_x28 = uVar25 & uVar28;
    }
    else {
      unaff_x28 = uVar25;
      if (uVar26 <= uVar25) {
        uVar18 = 0;
        if (uVar26 != 0) {
          uVar18 = uVar25 / uVar26;
        }
        unaff_x28 = uVar25 - uVar18 * uVar26;
      }
    }
    puVar17 = *(undefined8 **)(*(long *)(param_2 + 0x20) + unaff_x28 * 8);
    if (puVar17 != (undefined8 *)0x0) {
      for (plVar29 = (long *)*puVar17; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
        uVar18 = plVar29[1];
        if (uVar18 == uVar25) {
          plVar11 = plVar29 + 2;
          FUN_10ab70a18(plVar11,auStack_b8);
          if ((((int)plVar11 != 0) && ((int)plVar29[0xb] == iStack_70)) &&
             (*(int *)((long)plVar29 + 0x5c) == iStack_6c)) goto LAB_10a791908;
        }
        else {
          if ((uVar26 & uVar28) == 0) {
            uVar18 = uVar18 & uVar28;
          }
          else if (uVar26 <= uVar18) {
            uVar21 = 0;
            if (uVar26 != 0) {
              uVar21 = uVar18 / uVar26;
            }
            uVar18 = uVar18 - uVar21 * uVar26;
          }
          if (uVar18 != unaff_x28) break;
        }
      }
    }
  }
  plVar29 = (long *)0x78;
  __Znwm();
  *plVar29 = 0;
  plVar29[1] = uVar25;
  *(uint *)(plVar29 + 2) = auStack_b8[0];
  plVar29[3] = 0;
  plVar29[4] = 0;
  plVar29[5] = 0;
  FUN_10a269e90();
  plVar29[7] = lStack_90;
  plVar29[6] = lStack_98;
  plVar29[9] = lStack_80;
  plVar29[8] = lStack_88;
  plVar29[10] = lStack_78;
  plVar29[0xb] = CONCAT44(iStack_6c,iStack_70);
  plVar29[0xd] = 0;
  plVar29[0xe] = 0;
  plVar29[0xc] = 0;
  fVar36 = (float)(*(long *)(param_2 + 0x38) + 1);
  if ((uVar26 != 0) && (fVar36 <= *(float *)(param_2 + 0x40) * (float)uVar26)) goto LAB_10a79187c;
  uVar28 = 1;
  if (2 < uVar26) {
    uVar28 = (ulong)((uVar26 & uVar26 - 1) != 0);
  }
  uVar28 = uVar28 | uVar26 << 1;
  uVar26 = (ulong)(fVar36 / *(float *)(param_2 + 0x40));
  if (uVar28 <= uVar26) {
    uVar28 = uVar26;
  }
  if (uVar28 - 1 == 0) {
    uVar28 = 2;
  }
  else if ((uVar28 & uVar28 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar26 = *(ulong *)(param_2 + 0x28);
  if (uVar26 < uVar28) {
LAB_10a791704:
    uVar26 = uVar28;
    if (uVar26 >> 0x3d != 0) {
      func_0x000109ffded8();
LAB_10a791fcc:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a791fd0);
      (*pcVar8)();
    }
    lVar22 = uVar26 << 3;
    __Znwm();
    lVar9 = *(long *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar22;
    if (lVar9 != 0) {
      __ZdlPv();
    }
    uVar28 = 0;
    *(ulong *)(param_2 + 0x28) = uVar26;
    do {
      *(undefined8 *)(*(long *)(param_2 + 0x20) + uVar28 * 8) = 0;
      uVar28 = uVar28 + 1;
    } while (uVar26 != uVar28);
    plVar11 = *(long **)(param_2 + 0x30);
    if (plVar11 != (long *)0x0) {
      uVar28 = plVar11[1];
      uVar18 = uVar26 - 1;
      if ((uVar26 & uVar18) == 0) {
        uVar28 = uVar28 & uVar18;
      }
      else if (uVar26 <= uVar28) {
        uVar21 = 0;
        if (uVar26 != 0) {
          uVar21 = uVar28 / uVar26;
        }
        uVar28 = uVar28 - uVar21 * uVar26;
      }
      *(undefined8 **)(*(long *)(param_2 + 0x20) + uVar28 * 8) = (undefined8 *)(param_2 + 0x30);
      plVar23 = (long *)*plVar11;
      while (plVar23 != (long *)0x0) {
        uVar21 = plVar23[1];
        if ((uVar26 & uVar18) == 0) {
          uVar21 = uVar21 & uVar18;
        }
        else if (uVar26 <= uVar21) {
          uVar20 = 0;
          if (uVar26 != 0) {
            uVar20 = uVar21 / uVar26;
          }
          uVar21 = uVar21 - uVar20 * uVar26;
        }
        plVar10 = plVar23;
        if (uVar21 != uVar28) {
          lVar22 = *(long *)(param_2 + 0x20);
          if (*(long *)(lVar22 + uVar21 * 8) == 0) {
            *(long **)(lVar22 + uVar21 * 8) = plVar11;
            uVar28 = uVar21;
          }
          else {
            *plVar11 = *plVar23;
            *plVar23 = **(undefined8 **)(lVar22 + uVar21 * 8);
            **(long **)(lVar22 + uVar21 * 8) = (long)plVar23;
            plVar10 = plVar11;
          }
        }
        plVar11 = plVar10;
        plVar23 = (long *)*plVar10;
      }
    }
  }
  else if (uVar28 < uVar26) {
    uVar18 = (ulong)((float)*(ulong *)(param_2 + 0x38) / *(float *)(param_2 + 0x40));
    if ((uVar26 < 3) || ((uVar26 & uVar26 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar18) {
      uVar18 = 1L << (-LZCOUNT(uVar18 - 1) & 0x3fU);
    }
    if (uVar28 <= uVar18) {
      uVar28 = uVar18;
    }
    if (uVar28 < uVar26) {
      if (uVar28 != 0) goto LAB_10a791704;
      lVar22 = *(long *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = 0;
      if (lVar22 != 0) {
        __ZdlPv();
      }
      uVar26 = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
    else {
      uVar26 = *(ulong *)(param_2 + 0x28);
    }
  }
  if ((uVar26 & uVar26 - 1) == 0) {
    unaff_x28 = uVar26 - 1 & uVar25;
  }
  else {
    unaff_x28 = uVar25;
    if (uVar26 <= uVar25) {
      uVar28 = 0;
      if (uVar26 != 0) {
        uVar28 = uVar25 / uVar26;
      }
      unaff_x28 = uVar25 - uVar28 * uVar26;
    }
  }
LAB_10a79187c:
  lVar22 = *(long *)(param_2 + 0x20);
  plVar11 = *(long **)(lVar22 + unaff_x28 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(param_2 + 0x30);
    *plVar29 = *plVar11;
    *plVar11 = (long)plVar29;
    *(long **)(lVar22 + unaff_x28 * 8) = plVar11;
    if (*plVar29 != 0) {
      uVar25 = *(ulong *)(*plVar29 + 8);
      if ((uVar26 & uVar26 - 1) == 0) {
        uVar25 = uVar25 & uVar26 - 1;
      }
      else if (uVar26 <= uVar25) {
        uVar28 = 0;
        if (uVar26 != 0) {
          uVar28 = uVar25 / uVar26;
        }
        uVar25 = uVar25 - uVar28 * uVar26;
      }
      *(long **)(*(long *)(param_2 + 0x20) + uVar25 * 8) = plVar29;
    }
  }
  else {
    *plVar29 = *plVar11;
    *plVar11 = (long)plVar29;
  }
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
LAB_10a791908:
  uVar26 = lVar15 - lVar14;
  uVar25 = lVar12 - lVar32;
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar11 = (long *)plVar29[0xc];
  plVar23 = (long *)plVar29[0xd];
  while( true ) {
    if (plVar11 == plVar23) goto LAB_10a791974;
    plVar10 = (long *)(*plVar11 + 0x28);
    uVar28 = uVar26;
    FUN_10a778bd0(plVar10,uVar26,uVar25);
    if (((ulong)plVar10 & 1) != 0) break;
    plVar11 = plVar11 + 2;
  }
  plVar23 = (long *)*plVar11;
  plStack_c0 = (long *)plVar11[1];
  if (plStack_c0 != (long *)0x0) {
    plVar11 = plStack_c0 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_c8 = plVar23;
  if (plVar23 == (long *)0x0) {
LAB_10a791974:
    plVar11 = (long *)0x148;
    __Znwm();
    plVar10 = plVar11 + 1;
    plVar11[2] = 0;
    *plVar10 = 0;
    *plVar11 = (long)&PTR_FUN_110c188d8;
    plVar23 = plVar11 + 3;
    plVar11[4] = 0;
    *plVar23 = 0;
    plVar11[6] = 0;
    plVar11[5] = 0;
    plVar11[0xc] = 0;
    plVar11[0xb] = 0;
    plVar11[8] = 0;
    plVar11[7] = 0;
    plVar11[10] = 0;
    plVar11[9] = 0;
    plVar11[0xe] = 0;
    plVar11[0xd] = 0;
    *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
    *(undefined8 *)((long)plVar11 + 0x84) = 0;
    *(undefined8 *)((long)plVar11 + 0x7c) = 0;
    *(undefined8 *)((long)plVar11 + 0x94) = 0;
    *(undefined8 *)((long)plVar11 + 0x8c) = 0;
    *(undefined8 *)((long)plVar11 + 0xa4) = 0;
    *(undefined8 *)((long)plVar11 + 0x9c) = 0;
    plVar11[0x16] = 0;
    plVar11[0x15] = 0;
    plVar11[0x17] = 0xffffffff;
    *(uint *)(plVar11 + 0x18) = uVar4;
    *(undefined4 *)(plVar11 + 0xb) = 0x100000;
    func_0x000107c27d58(plVar11 + 8,0x100000);
    *(undefined4 *)(plVar11 + 0x13) = 0x10000;
    uVar28 = plVar11[0x11] - plVar11[0x10];
    if (uVar28 >> 0x10 == 0) {
      func_0x000107c27d58(plVar11 + 0x10,0x10000 - uVar28);
    }
    else if (uVar28 != 0x10000) {
      plVar11[0x11] = plVar11[0x10] + 0x10000;
    }
    plVar11[0x1b] = 0;
    plVar11[0x1a] = 0;
    *(undefined4 *)(plVar11 + 0x19) = 0;
    plVar11[0x1d] = 0;
    plVar11[0x1c] = 0;
    plVar11[0x1f] = 0;
    plVar11[0x1e] = 0;
    plVar11[0x21] = 0;
    plVar11[0x20] = 0;
    FUN_10a19079c(plVar11 + 0x1a);
    *(undefined4 *)(plVar11 + 0x21) = 0xffffffff;
    plVar11[0x20] = -1;
    plVar11[0x1f] = -1;
    plVar11[0x1e] = -1;
    plVar11[0x1d] = -1;
    *(undefined4 *)(plVar11 + 0x19) = 0;
    plVar11[0x27] = 0;
    plVar11[0x28] = 0;
    plVar11[0x26] = 0;
    *(undefined8 *)((long)plVar11 + 0x114) = 0;
    *(undefined8 *)((long)plVar11 + 0x10c) = 0;
    *(undefined8 *)((long)plVar11 + 0x124) = 0;
    *(undefined8 *)((long)plVar11 + 0x11c) = 0;
    *(undefined1 *)((long)plVar11 + 300) = 0;
    if (plVar11[4] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
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
      plVar11[3] = (long)(plVar11 + 3);
      plVar11[4] = (long)plVar11;
LAB_10a791af8:
      do {
        lVar14 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    else if (*(long *)(plVar11[4] + 8) == -1) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
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
      plVar11[3] = (long)(plVar11 + 3);
      plVar11[4] = (long)plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_10a791af8;
    }
    plVar10 = plStack_c0;
    plStack_c8 = plVar23;
    if (plStack_c0 != (long *)0x0) {
      plVar23 = plStack_c0 + 1;
      do {
        lVar14 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        lVar14 = *plStack_c0;
        plStack_c0 = plVar11;
        (**(code **)(lVar14 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        plVar11 = plStack_c0;
      }
    }
    plStack_c0 = plVar11;
    plVar23 = plStack_c8;
    plVar10 = plStack_c8 + 5;
    uVar28 = uVar26;
    FUN_10a778bd0(plVar10,uVar26,uVar25);
    plVar11 = plStack_c0;
    if (((ulong)plVar10 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      plVar29 = plStack_c0;
      goto joined_r0x00010a791bc0;
    }
    puVar17 = (undefined8 *)plVar29[0xd];
    if (puVar17 < (undefined8 *)plVar29[0xe]) {
      *puVar17 = plVar23;
      puVar17[1] = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar11 = plStack_c0 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar17 = puVar17 + 2;
    }
    else {
      lVar14 = plVar29[0xc];
      lVar32 = (long)puVar17 - lVar14;
      lVar15 = lVar32 >> 4;
      uVar18 = lVar15 + 1;
      if (uVar18 >> 0x3c != 0) {
        func_0x00010a7a72e4();
        goto LAB_10a791fcc;
      }
      uVar20 = plVar29[0xe] - lVar14;
      uVar21 = (long)uVar20 >> 3;
      if (uVar21 <= uVar18) {
        uVar21 = uVar18;
      }
      if (0x7fffffffffffffef < uVar20) {
        uVar21 = 0xfffffffffffffff;
      }
      if (uVar21 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10a791fcc;
      }
      lVar12 = uVar21 << 4;
      __Znwm();
      puVar35 = (undefined8 *)(lVar12 + lVar32);
      *puVar35 = plVar23;
      puVar35[1] = plVar11;
      if (plVar11 != (long *)0x0) {
        plVar11 = plVar11 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar14 = plVar29[0xc];
        lVar32 = plVar29[0xd] - lVar14;
        lVar15 = lVar32 >> 4;
      }
      puVar17 = puVar35 + 2;
      _memcpy(puVar35 + lVar15 * -2,lVar14,lVar32);
      plVar29[0xc] = (long)(puVar35 + lVar15 * -2);
      plVar29[0xd] = (long)puVar17;
      plVar29[0xe] = lVar12 + uVar21 * 0x10;
      if (lVar14 != 0) {
        __ZdlPv(lVar14);
      }
    }
    plVar29[0xd] = (long)puVar17;
  }
  FUN_10a177570(plVar23 + 0x16,(uint *)(param_3 + 0xf0));
  plVar11 = plStack_c8;
  plStack_c8[0x1f] = *(long *)(param_3 + 0xe8);
  uVar33 = (uint)uVar26;
  uVar19 = (uint)((ulong)plVar10 >> 0x20);
  if (((uVar33 != 0) && (*(long *)(param_3 + 0x10) != 0)) &&
     (uVar19 <= *(uint *)(plStack_c8 + 8) && uVar33 <= *(uint *)(plStack_c8 + 8) - uVar19)) {
    _memcpy(plStack_c8[5] + ((ulong)plVar10 >> 0x20),*(long *)(param_3 + 0x10),uVar26 & 0xffffffff);
    uVar31 = *(uint *)(plVar11 + 0xc);
    if (uVar19 <= *(uint *)(plVar11 + 0xc)) {
      uVar31 = uVar19;
    }
    uVar34 = *(uint *)((long)plVar11 + 100);
    if (*(uint *)((long)plVar11 + 100) <= uVar19 + uVar33) {
      uVar34 = uVar19 + uVar33;
    }
    *(uint *)(plVar11 + 0xc) = uVar31;
    *(uint *)((long)plVar11 + 100) = uVar34;
  }
  uVar31 = (uint)uVar25;
  uVar34 = (uint)uVar28;
  iVar27 = (int)(uVar28 >> 0x20);
  if (((uVar31 != 0) && (piVar16 = *(int **)(param_3 + 0x28), piVar16 != (int *)0x0)) &&
     (uVar34 <= *(uint *)(plVar11 + 0x10) && uVar31 <= *(uint *)(plVar11 + 0x10) - uVar34)) {
    piVar13 = (int *)(plVar11[0xd] + (uVar28 & 0xffffffff));
    if (uVar28 >> 0x20 == 0) {
LAB_10a791d54:
      _memcpy(piVar13,piVar16,uVar25 & 0xffffffff);
    }
    else if (*(int *)(param_3 + 0xe8) == 2) {
      if (3 < uVar31) {
        uVar25 = (ulong)(uVar31 >> 2);
        do {
          *piVar13 = *piVar16 + iVar27;
          uVar25 = uVar25 - 1;
          piVar13 = piVar13 + 1;
          piVar16 = piVar16 + 1;
        } while (uVar25 != 0);
      }
    }
    else {
      if (*(int *)(param_3 + 0xe8) != 1) goto LAB_10a791d54;
      if (uVar31 != 1) {
        uVar25 = (ulong)(uVar31 >> 1);
        do {
          *(short *)piVar13 = (short)*piVar16 + (short)(uVar28 >> 0x20);
          uVar25 = uVar25 - 1;
          piVar13 = (int *)((long)piVar13 + 2);
          piVar16 = (int *)((long)piVar16 + 2);
        } while (uVar25 != 0);
      }
    }
  }
  puVar17 = (undefined8 *)0x88;
  __Znwm();
  plVar29 = plStack_c0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &PTR_FUN_110c18928;
  puVar35 = puVar17 + 3;
  puVar17[4] = 0;
  *puVar35 = 0;
  puVar17[8] = 0;
  puVar17[7] = 0;
  puVar17[10] = 0;
  puVar17[9] = 0;
  puVar17[10] = 0;
  puVar17[0xb] = 0;
  puVar17[6] = 0;
  puVar17[5] = 0;
  *(undefined4 *)((long)puVar17 + 0x44) = 0xffffffff;
  puVar17[9] = 0;
  *(undefined4 *)(puVar17 + 0xb) = 0xffffffff;
  puVar17[0xd] = 0;
  puVar17[0xc] = 0;
  puVar17[0xf] = 0;
  puVar17[0xe] = 0;
  puVar17[0x10] = 0;
  *param_1 = puVar35;
  param_1[1] = puVar17;
  if (plStack_c0 == (long *)0x0) {
    puVar17[3] = plVar11;
    puVar17[4] = 0;
  }
  else {
    plVar23 = plStack_c0 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar14 = puVar17[4];
    puVar17[3] = plVar11;
    puVar17[4] = plStack_c0;
    if (lVar14 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar7 = uVar33 / uVar4;
  }
  *(uint *)(puVar17 + 5) = uVar19;
  *(uint *)((long)puVar17 + 0x2c) = uVar33;
  *(uint *)(puVar17 + 6) = uVar7;
  *(uint *)((long)puVar17 + 0x34) = uVar34;
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar31 >> (ulong)((uint)LZCOUNT(((uVar3 & 0x55555555) >> 1 |
                                            ((uVar3 & 0xaaaaaaaa) >> 1) << 2) << 0x1c) & 0x1f);
  }
  *(uint *)(puVar17 + 7) = uVar31;
  *(uint *)((long)puVar17 + 0x3c) = uVar4;
  *(int *)(puVar17 + 8) = iVar27;
  FUN_10a7920dc(plVar11);
  plVar23 = puVar17 + 2;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar6) {
      *plVar23 = *plVar23 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar30 = (undefined8 *)plVar11[3];
  if (puVar30 < (undefined8 *)plVar11[4]) {
    *puVar30 = puVar35;
    puVar30[1] = puVar17;
    puVar30 = puVar30 + 2;
  }
  else {
    lVar14 = plVar11[2];
    lVar32 = (long)puVar30 - lVar14;
    uVar25 = (lVar32 >> 4) + 1;
    if (uVar25 >> 0x3c != 0) {
      func_0x00010a7a72f8();
      goto LAB_10a791fcc;
    }
    uVar28 = plVar11[4] - lVar14;
    uVar26 = (long)uVar28 >> 3;
    if (uVar26 <= uVar25) {
      uVar26 = uVar25;
    }
    if (0x7fffffffffffffef < uVar28) {
      uVar26 = 0xfffffffffffffff;
    }
    if (uVar26 >> 0x3c != 0) {
      func_0x000109ffded8();
      goto LAB_10a791fcc;
    }
    lVar15 = uVar26 << 4;
    __Znwm();
    puVar2 = (undefined8 *)(lVar15 + lVar32);
    *puVar2 = puVar35;
    puVar2[1] = puVar17;
    puVar30 = puVar2 + 2;
    _memcpy(puVar2 + (lVar32 >> 4) * -2,lVar14,lVar32);
    plVar11[2] = (long)(puVar2 + (lVar32 >> 4) * -2);
    plVar11[3] = (long)puVar30;
    plVar11[4] = lVar15 + uVar26 * 0x10;
    if (lVar14 != 0) {
      __ZdlPv(lVar14);
    }
  }
  plVar11[3] = (long)puVar30;
joined_r0x00010a791bc0:
  if (plVar29 != (long *)0x0) {
    plVar11 = plVar29 + 1;
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
      (**(code **)(*plVar29 + 0x10))(plVar29);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
    }
  }
  plStack_c8 = &lStack_b0;
  func_0x00010a190844(&plStack_c8);
  return;
}



/* Entry: 10a792078; end: 10a7920db;  */

undefined8 * FUN_10a792078(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a7920dc; end: 10a792217;  */

/* WARNING: Removing unreachable block (ram,0x00010a792190) */
/* WARNING: Removing unreachable block (ram,0x00010a7921a0) */
/* WARNING: Removing unreachable block (ram,0x00010a7921bc) */
/* WARNING: Removing unreachable block (ram,0x00010a7921c0) */
/* WARNING: Removing unreachable block (ram,0x00010a7921d4) */

void FUN_10a7920dc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  if (puVar6 == puVar5) {
LAB_10a79217c:
    if (puVar5 < puVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a792218);
      (*pcVar1)();
    }
    if (puVar6 != puVar5) {
      for (; puVar5 != puVar6; puVar5 = puVar5 + -2) {
        if (puVar5[-1] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *(undefined8 **)(param_1 + 0x18) = puVar6;
    }
  }
  else {
    do {
      puVar7 = puVar6 + 2;
      if ((puVar6[1] == 0) || (*(long *)(puVar6[1] + 8) == -1)) {
        if ((puVar6 != puVar5) && (puVar7 != puVar5)) {
          do {
            lVar3 = puVar7[1];
            if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != -1)) {
              uVar4 = *puVar7;
              *puVar7 = 0;
              puVar7[1] = 0;
              lVar2 = puVar6[1];
              *puVar6 = uVar4;
              puVar6[1] = lVar3;
              if (lVar2 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              puVar6 = puVar6 + 2;
            }
            puVar7 = puVar7 + 2;
          } while (puVar7 != puVar5);
          puVar5 = *(undefined8 **)(param_1 + 0x18);
        }
        goto LAB_10a79217c;
      }
      puVar6 = puVar7;
    } while (puVar7 != puVar5);
  }
  *(undefined1 *)(param_1 + 0x114) = 0;
  return;
}



/* Entry: 10a792218; end: 10a7931fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a792ef0) */
/* WARNING: Removing unreachable block (ram,0x00010a792ef4) */
/* WARNING: Removing unreachable block (ram,0x00010a792f10) */

void FUN_10a792218(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint7 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  undefined4 *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  uint *puVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  undefined8 *puVar33;
  bool bVar34;
  uint *puVar35;
  undefined4 uVar36;
  long *plVar37;
  char cVar38;
  byte bVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  uint3 uVar43;
  long *plStack_370;
  char cStack_368;
  undefined7 uStack_367;
  long lStack_360;
  undefined7 uStack_358;
  char cStack_351;
  long lStack_348;
  long lStack_340;
  undefined1 auStack_330 [16];
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  long lStack_210;
  long lStack_208;
  uint auStack_158 [2];
  undefined1 auStack_150 [64];
  undefined4 *puStack_110;
  undefined4 *puStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  long alStack_c8 [8];
  long lStack_88;
  long *plStack_80;
  undefined7 uVar44;
  
  lVar18 = *(long *)(param_1 + 0xb8);
  if (lVar18 != 0) {
    lVar12 = *(long *)(param_1 + 0xa8);
    lVar30 = *(long *)(param_1 + 0xa0);
    if (lVar12 != lVar30) {
      do {
        lVar12 = lVar12 + -0x10;
        func_0x00010a4477a4();
      } while (lVar12 != lVar30);
      lVar18 = *(long *)(param_1 + 0xb8);
    }
    *(long *)(param_1 + 0xa8) = lVar30;
    plVar32 = (long *)(param_1 + 0x68);
    plVar31 = *(long **)(param_1 + 0x70);
    if (plVar31 != plVar32) {
      iVar5 = *(int *)(*(long *)(lVar18 + 0x850) + 0x2c);
      do {
        if ((uint)(iVar5 - *(int *)((long)plVar31 + 0x24)) < 0x1e) {
          plVar31 = (long *)plVar31[1];
        }
        else {
          plStack_370 = (long *)0x0;
          plVar13 = (long *)plVar31[3];
          if ((((plVar13 == (long *)0x0) ||
               (__ZNSt3__119__shared_weak_count4lockEv(), plStack_370 = plVar13,
               plVar13 == (long *)0x0)) || (plVar13 = (long *)plVar31[2], plVar13 == (long *)0x0))
             || (plVar37 = plVar13, (**(code **)(*plVar13 + 0x1d0))(), (int)plVar37 == 0))
          goto LAB_10a79246c;
          lVar18 = *(long *)(param_1 + 0xb8);
          if (lVar18 != 0) {
            puVar14 = (undefined4 *)0x113835028;
            FUN_10a1c6264();
            func_0x00010a7786bc(lVar18,plVar13,*puVar14);
            if ((int)lVar18 == 0) goto LAB_10a79246c;
          }
          plVar37 = plVar13;
          (**(code **)(*plVar13 + 0x1f8))();
          if (plVar37 == (long *)0x0) {
LAB_10a792504:
            bVar39 = (char)plVar31[4] + 1;
            *(byte *)(plVar31 + 4) = bVar39;
            if (4 < bVar39) goto LAB_10a79246c;
            *(int *)((long)plVar31 + 0x24) = iVar5;
            plVar13 = (long *)plVar31[1];
          }
          else {
            puVar35 = (uint *)(plVar37 + 0x1e);
            uVar21 = *puVar35;
            if (uVar21 == 0) goto LAB_10a792504;
            iVar20 = 0;
            if ((ulong)uVar21 != 0) {
              iVar20 = (int)((ulong)(plVar37[3] - plVar37[2]) / (ulong)uVar21);
            }
            if (iVar20 == 0) goto LAB_10a792504;
            plVar15 = plVar13;
            (**(code **)(*plVar13 + 0x1c8))();
            lVar12 = plVar37[0x1a];
            lVar30 = plVar37[0x1b];
            lVar18 = lVar12;
            if (lVar12 != lVar30) {
              do {
                cVar38 = -((float)*(undefined8 *)(lVar18 + 0x28) == 1.0);
                cVar40 = -((float)((ulong)*(undefined8 *)(lVar18 + 0x28) >> 0x20) == 0.0);
                cVar41 = -((float)*(undefined8 *)(lVar18 + 0x30) == 0.0);
                cVar42 = -((float)((ulong)*(undefined8 *)(lVar18 + 0x30) >> 0x20) == 0.0);
                uVar43 = CONCAT12(cVar40,CONCAT11(cVar40,cVar38)) & 0xff00ff;
                uVar44 = CONCAT16(cVar42,(uint6)CONCAT14(cVar41,(uint)uVar43));
                uVar7 = CONCAT16(cVar42,CONCAT15(cVar41,(int5)CONCAT34((int3)((uint7)uVar44 >> 0x20)
                                                                       ,CONCAT13(cVar40,(int3)
                                                  CONCAT52((int5)((uint7)uVar44 >> 0x10),
                                                           CONCAT11(cVar38,(char)uVar43)))))) &
                        CONCAT16(-((float)((ulong)*(undefined8 *)(lVar18 + 0x50) >> 0x20) == 0.0),
                                 (uint6)CONCAT14(-((float)*(undefined8 *)(lVar18 + 0x50) == 1.0),
                                                 (uint)CONCAT12(-((float)((ulong)*(undefined8 *)
                                                                                  (lVar18 + 0x48) >>
                                                                         0x20) == 0.0),
                                                                (ushort)(byte)-((float)*(undefined8
                                                                                         *)(lVar18 +
                                                                                           0x48) ==
                                                                               0.0))));
                bVar39 = NEON_uminv(CONCAT17(-((char)(((float)((ulong)*(undefined8 *)(lVar18 + 0x40)
                                                              >> 0x20) == 0.0) * -0x80) < '\0'),
                                             CONCAT16(-((char)(((float)*(undefined8 *)
                                                                        (lVar18 + 0x40) == 0.0) *
                                                              -0x80) < '\0'),
                                                      CONCAT15(-((char)(((float)((ulong)*(undefined8
                                                                                          *)(lVar18 
                                                  + 0x38) >> 0x20) == 1.0) * -0x80) < '\0'),
                                                  CONCAT14(-((char)(((float)*(undefined8 *)
                                                                             (lVar18 + 0x38) == 0.0)
                                                                   * -0x80) < '\0'),
                                                           CONCAT13(-((char)((char)(uVar7 >> 0x30)
                                                                            << 7) < '\0'),
                                                                    CONCAT12(-((char)((char)(uVar7 
                                                  >> 0x20) << 7) < '\0'),
                                                  CONCAT11(-((char)((char)(uVar7 >> 0x10) << 7) <
                                                            '\0'),-((char)((char)uVar7 << 7) < '\0')
                                                          ))))))),1);
                if ((((bVar39 & *(float *)(lVar18 + 0x58) == 0.0) != 1) ||
                    (*(float *)(lVar18 + 0x5c) != 0.0)) ||
                   ((*(float *)(lVar18 + 0x60) != 0.0 || (*(float *)(lVar18 + 100) != 1.0)))) {
                  if ((int)plVar15 == 0) goto LAB_10a79246c;
                  uVar21 = *(uint *)(plVar37 + 0x22);
                  if (uVar21 == 0xffffffff) goto LAB_10a79246c;
                  lVar18 = plVar37[0x1f];
                  uVar19 = (plVar37[0x20] - lVar18 >> 3) * 0x6db6db6db6db6db7;
                  if (uVar21 <= uVar19 && uVar19 - uVar21 != 0) {
                    if (((lVar18 == 0) ||
                        (lVar24 = lVar18 + (ulong)uVar21 * 0x38, *(int *)(lVar24 + 0x24) != 5)) ||
                       (((*(uint *)(lVar24 + 0x28) & 0xfffffffe) != 2 ||
                        ((*(byte *)(lVar24 + 0x2c) & 1) != 0)))) goto LAB_10a79246c;
                    uVar21 = *(uint *)((long)plVar37 + 0x114);
                    if (uVar21 != 0xffffffff) {
                      if (uVar19 < uVar21 || uVar19 - uVar21 == 0) goto LAB_10a7930f0;
                      lVar24 = lVar18 + (ulong)uVar21 * 0x38;
                      if (((*(int *)(lVar24 + 0x24) != 5) || (*(int *)(lVar24 + 0x28) != 3)) ||
                         ((*(byte *)(lVar24 + 0x2c) & 1) != 0)) goto LAB_10a79246c;
                    }
                    uVar21 = *(uint *)(plVar37 + 0x23);
                    if (uVar21 == 0xffffffff) break;
                    if (uVar21 <= uVar19 && uVar19 - uVar21 != 0) {
                      lVar18 = lVar18 + (ulong)uVar21 * 0x38;
                      if (((*(int *)(lVar18 + 0x24) != 5) ||
                          (*(int *)(lVar18 + 0x28) - 5U < 0xfffffffe)) ||
                         ((*(byte *)(lVar18 + 0x2c) & 1) != 0)) goto LAB_10a79246c;
                      break;
                    }
                  }
LAB_10a7930f0:
                  FUN_10ab725fc();
                  goto LAB_10a7930f4;
                }
                lVar18 = lVar18 + 0x68;
              } while (lVar18 != lVar30);
              uVar21 = 4;
              if ((int)plVar37[0x1d] != 2) {
                uVar21 = 0;
              }
              uVar1 = 2;
              if ((int)plVar37[0x1d] != 1) {
                uVar1 = uVar21;
              }
              if (uVar1 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = (ulong)(plVar37[6] - plVar37[5]) >>
                         LZCOUNT(((uVar1 & 0x55555555) >> 1 | ((uVar1 & 0xaaaaaaaa) >> 1) << 2) <<
                                 0x1c);
              }
              do {
                iVar20 = *(int *)(lVar12 + 8);
                if (iVar20 != 0) {
                  plStack_308 = (long *)0x0;
                  plStack_300 = (long *)0x0;
                  uStack_2f8 = 0;
                  uStack_d0 = 0xffffffff;
                  func_0x00010742638c(&plStack_308,uVar19,&uStack_d0);
                  goto LAB_10a792658;
                }
                lVar12 = lVar12 + 0x68;
              } while (lVar12 != lVar30);
              plStack_308 = (long *)0x0;
              plStack_300 = (long *)0x0;
              uStack_2f8 = 0;
LAB_10a792658:
              uVar21 = *puVar35;
              if (uVar21 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = 0;
                if ((ulong)uVar21 != 0) {
                  uVar19 = (ulong)(plVar37[3] - plVar37[2]) / (ulong)uVar21;
                }
                uVar19 = uVar19 & 0xffffffff;
              }
              auStack_158[0] = 0xffffffff;
              FUN_10a4094c0(&uStack_d0,uVar19,auStack_158);
              lVar18 = plVar37[0x1a];
              if (plVar37[0x1b] - lVar18 == 0) {
LAB_10a792934:
                bVar11 = true;
              }
              else {
                iVar6 = (int)plVar37[0x1d];
                uVar21 = 4;
                if (iVar6 != 2) {
                  uVar21 = 0;
                }
                uVar1 = 2;
                if (iVar6 != 1) {
                  uVar1 = uVar21;
                }
                if (uVar1 != 0) {
                  uVar19 = 0;
                  uVar22 = (plVar37[0x1b] - lVar18 >> 3) * 0x4ec4ec4ec4ec4ec5;
                  lVar12 = plVar37[5];
                  lVar30 = plVar37[6];
                  do {
                    puVar29 = (uint *)(lVar18 + uVar19 * 0x68);
                    uVar23 = (ulong)puVar29[1];
                    uVar26 = (uVar23 + *puVar29) * (ulong)uVar1;
                    if ((ulong)(lVar30 - lVar12) <= uVar26 && uVar26 - (lVar30 - lVar12) != 0)
                    goto LAB_10a79293c;
                    uVar21 = *puVar35;
                    if (uVar21 == 0) {
                      uVar26 = 0;
                    }
                    else {
                      uVar26 = 0;
                      if ((ulong)uVar21 != 0) {
                        uVar26 = (ulong)(plVar37[3] - plVar37[2]) / (ulong)uVar21;
                      }
                      uVar26 = uVar26 & 0xffffffff;
                    }
                    if (uVar23 != 0) {
                      bVar11 = false;
                      uVar28 = 0;
                      lVar24 = CONCAT44(uStack_cc,uStack_d0);
LAB_10a79273c:
                      do {
                        lVar17 = (uVar28 + *puVar29) * (ulong)uVar1;
                        if (iVar6 == 1) {
                          uVar16 = (ulong)*(ushort *)(lVar12 + lVar17) + (ulong)puVar29[2];
                          if (uVar26 <= uVar16 || uVar16 >> 0x10 != 0) goto LAB_10a79293c;
                        }
                        else {
                          uVar16 = (ulong)*(uint *)(lVar12 + lVar17) + (ulong)puVar29[2];
                          if (uVar26 <= uVar16) goto LAB_10a79293c;
                        }
                        if ((ulong)(alStack_c8[0] - lVar24 >> 2) <= uVar16) goto LAB_10a7930f4;
                        uVar21 = *(uint *)(lVar24 + uVar16 * 4);
                        if ((int)uVar21 < 0) {
                          *(int *)(lVar24 + uVar16 * 4) = (int)uVar19;
                          uVar23 = (ulong)puVar29[1];
                        }
                        else {
                          if (uVar22 < uVar21 || uVar22 - uVar21 == 0) goto LAB_10a7930f4;
                          lVar17 = lVar18 + (ulong)uVar21 * 0x68;
                          if (((*(float *)(lVar17 + 0x28) != (float)puVar29[10]) ||
                              (*(float *)(lVar17 + 0x2c) != (float)puVar29[0xb])) ||
                             (((((*(float *)(lVar17 + 0x30) != (float)puVar29[0xc] ||
                                 (((*(float *)(lVar17 + 0x34) != (float)puVar29[0xd] ||
                                   (*(float *)(lVar17 + 0x38) != (float)puVar29[0xe])) ||
                                  (*(float *)(lVar17 + 0x3c) != (float)puVar29[0xf])))) ||
                                ((*(float *)(lVar17 + 0x40) != (float)puVar29[0x10] ||
                                 (*(float *)(lVar17 + 0x44) != (float)puVar29[0x11])))) ||
                               (*(float *)(lVar17 + 0x48) != (float)puVar29[0x12])) ||
                              (((*(float *)(lVar17 + 0x4c) != (float)puVar29[0x13] ||
                                (*(float *)(lVar17 + 0x50) != (float)puVar29[0x14])) ||
                               ((*(float *)(lVar17 + 0x54) != (float)puVar29[0x15] ||
                                ((((*(float *)(lVar17 + 0x58) != (float)puVar29[0x16] ||
                                   (*(float *)(lVar17 + 0x5c) != (float)puVar29[0x17])) ||
                                  (*(float *)(lVar17 + 0x60) != (float)puVar29[0x18])) ||
                                 (*(float *)(lVar17 + 100) != (float)puVar29[0x19])))))))))) {
                            uVar28 = uVar28 + 1;
                            bVar11 = true;
                            if (uVar23 <= uVar28) goto LAB_10a79293c;
                            goto LAB_10a79273c;
                          }
                        }
                        uVar28 = uVar28 + 1;
                      } while (uVar28 < uVar23);
                      if (bVar11) goto LAB_10a79293c;
                      if ((iVar20 != 0) && (uVar23 != 0)) {
                        uVar26 = 0;
                        do {
                          uVar28 = uVar26 + *puVar29;
                          if ((ulong)((long)plStack_300 - (long)plStack_308 >> 2) <= uVar28)
                          goto LAB_10a7930f4;
                          uVar21 = *(uint *)((long)plStack_308 + uVar28 * 4);
                          if ((int)uVar21 < 0) {
                            *(int *)((long)plStack_308 + uVar28 * 4) = (int)uVar19;
                            uVar23 = (ulong)puVar29[1];
                          }
                          else {
                            if (uVar22 < uVar21 || uVar22 - uVar21 == 0) goto LAB_10a7930f4;
                            if (*(uint *)(lVar18 + (ulong)uVar21 * 0x68 + 8) != puVar29[2])
                            goto LAB_10a79293c;
                          }
                          uVar26 = uVar26 + 1;
                        } while (uVar26 < uVar23);
                      }
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar19 != uVar22);
                  goto LAB_10a792934;
                }
LAB_10a79293c:
                bVar11 = false;
              }
              if (CONCAT44(uStack_cc,uStack_d0) != 0) {
                alStack_c8[0] = CONCAT44(uStack_cc,uStack_d0);
                __ZdlPv();
              }
              if (plStack_308 != (long *)0x0) {
                plStack_300 = plStack_308;
                __ZdlPv();
              }
              if (!bVar11) goto LAB_10a79246c;
            }
            uVar21 = *(uint *)((long)plVar37 + 0xec);
            if ((uVar21 < 6) && ((1 << (ulong)(uVar21 & 0x1f) & 0x26U) != 0)) {
              if ((uVar21 < 3) && ((int)plVar37[0x1d] == 0)) {
LAB_10a792998:
                lStack_88 = 0;
                plStack_80 = (long *)0x0;
                plVar15 = plVar13;
                (**(code **)(*plVar13 + 0x1c8))();
                if (((int)plVar15 == 0) ||
                   ((((*(long *)(param_1 + 0xb8) == 0 ||
                      ((long *)plVar13[0x55] == (long *)plVar13[0x54])) ||
                     (lVar18 = *(long *)plVar13[0x54], lVar18 == 0)) ||
                    ((*(long **)(lVar18 + 0x228) == *(long **)(lVar18 + 0x230) ||
                     (**(long **)(lVar18 + 0x228) == 0)))))) {
                  lVar18 = 0;
LAB_10a792a48:
                  bVar11 = false;
                }
                else {
                  FUN_10a788f8c(&plStack_308,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0xc50),
                                plVar13);
                  FUN_10a795af4(&lStack_88,&plStack_308);
                  func_0x00010a275b1c(&plStack_308);
                  lVar18 = lStack_88;
                  if (lStack_88 == 0) goto LAB_10a792a48;
                  FUN_10ab6ec58();
                  plStack_308 = plRam00000001138357d8;
                  lVar12 = lVar18 + 0x18;
                  func_0x00010787a7d4(lVar12,&plStack_308);
                  bVar11 = lVar12 != 0;
                }
                FUN_10a799364(&uStack_d0);
                if (bVar11) {
                  FUN_10ab6ec58();
                  FUN_10ab6f7f8(&uStack_d0,0x1138357c0,5,4,0);
                }
                plVar15 = plVar13;
                (**(code **)(*plVar13 + 0x1c8))();
                puVar29 = &uStack_d0;
                if ((int)plVar15 == 0) {
                  puVar29 = puVar35;
                }
                uVar21 = *puVar35;
                iVar20 = 0;
                if (uVar21 != 0) {
                  iVar20 = 0;
                  if ((ulong)uVar21 != 0) {
                    iVar20 = (int)((ulong)(plVar37[3] - plVar37[2]) / (ulong)uVar21);
                  }
                }
                if ((iVar20 * *puVar29 < 0x100001) && ((ulong)(plVar37[6] - plVar37[5]) < 0x10001))
                {
                  lStack_e0 = 0;
                  uStack_d8 = 0;
                  lStack_f0 = 0;
                  lStack_e8 = 0;
                  puStack_110 = (undefined4 *)0x0;
                  puStack_108 = (undefined4 *)0x0;
                  uStack_100 = 0;
                  plVar15 = plVar13;
                  (**(code **)(*plVar13 + 0x1c8))();
                  if ((int)plVar15 == 0) {
                    FUN_10a7913b0(&plStack_308,param_1,plVar37);
                    func_0x00010a7962d0(&lStack_e0,&plStack_308);
                    func_0x00010a4477a4(&plStack_308);
                    bVar11 = false;
                    uVar36 = 0;
LAB_10a792c54:
                    puVar14 = puStack_108;
                    if (lStack_e0 == 0) {
                      puVar9 = puStack_110;
                      if (lStack_f0 != 0) {
                        for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                          FUN_10a790fe8(lStack_f0,*puVar9);
                        }
                      }
                    }
                    else {
                      if (lStack_f0 != 0) {
                        if (lStack_e8 != 0) {
                          plVar37 = (long *)(lStack_e8 + 0x10);
                          do {
                            cVar38 = '\x01';
                            bVar34 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                            if (bVar34) {
                              *plVar37 = *plVar37 + 1;
                              cVar38 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar38 != '\0');
                        }
                        lVar18 = *(long *)(lStack_e0 + 0x50);
                        *(long *)(lStack_e0 + 0x48) = lStack_f0;
                        *(long *)(lStack_e0 + 0x50) = lStack_e8;
                        if (lVar18 != 0) {
                          __ZNSt3__119__shared_weak_count14__release_weakEv();
                        }
                        lVar18 = lStack_e0;
                        plVar37 = (long *)(lStack_e0 + 0x58);
                        lVar12 = *plVar37;
                        if (lVar12 != 0) {
                          *(long *)(lStack_e0 + 0x60) = lVar12;
                          __ZdlPv();
                          *plVar37 = 0;
                          *(undefined8 *)(lVar18 + 0x60) = 0;
                          *(undefined8 *)(lVar18 + 0x68) = 0;
                        }
                        *(undefined4 **)(lVar18 + 0x60) = puStack_108;
                        *(undefined4 **)(lVar18 + 0x58) = puStack_110;
                        *(undefined8 *)(lVar18 + 0x68) = uStack_100;
                        puStack_108 = (undefined4 *)0x0;
                        uStack_100 = 0;
                        puStack_110 = (undefined4 *)0x0;
                      }
                      if (bVar11) {
                        *(undefined4 *)(lStack_e0 + 0x2c) = uVar36;
                      }
                      func_0x00010a7a7588(plVar13 + 0x5c,lStack_e0,uStack_d8);
                      FUN_10a790e04(plVar13);
                    }
                  }
                  else {
                    plVar15 = plVar13;
                    func_0x00010a777f8c(plVar13);
                    FUN_10a795b58(auStack_158,lVar18,plVar15,puVar35);
                    cVar38 = (char)auStack_158[0];
                    uVar21 = auStack_158[0] & 0xff;
                    if (uVar21 < 2) {
                      FUN_10ab46d7c(&plStack_308);
                      lStack_320 = 0;
                      lStack_318 = 0;
                      uStack_310 = 0;
                      puVar2 = auStack_150;
                      if (uVar21 != 1) {
                        puVar2 = (undefined1 *)0x0;
                      }
                      FUN_10a793634(plVar37,&uStack_d0,puVar2,&plStack_308,&lStack_320);
                      if (((ulong)plVar37 & 1) == 0) {
LAB_10a792c00:
                        bVar11 = false;
                        uVar36 = 0;
                        bVar34 = false;
                      }
                      else {
                        if ((cVar38 == '\x01') && (lStack_320 != lStack_318)) {
                          plVar37 = plVar13;
                          func_0x00010a777f8c();
                          puVar3 = &UNK_10f67632c;
                          if ((int)plVar37 != 0) {
                            puVar3 = &UNK_10f674def;
                          }
                          puVar4 = &UNK_10f676343;
                          if ((int)plVar37 != 1) {
                            puVar4 = puVar3;
                          }
                          func_0x000107c2b07c(&cStack_368,puVar4);
                          FUN_10a7952e8(auStack_330,param_1,&cStack_368,auStack_150,lStack_320,
                                        lStack_318 - lStack_320);
                          FUN_10a796020(&lStack_f0,auStack_330);
                          func_0x00010a7b6008(auStack_330);
                          if (cStack_351 < '\0') {
                            __ZdlPv(CONCAT71(uStack_367,cStack_368));
                          }
                          if (lStack_f0 != 0) {
                            FUN_10a796084(&cStack_368,lStack_f0,lStack_320,lStack_318 - lStack_320);
                            if (cStack_368 == '\0') {
                              FUN_10a795a00(&plStack_308,lStack_360,
                                            CONCAT17(cStack_351,uStack_358) - lStack_360 >> 2);
                              FUN_10a131e2c(&puStack_110,lStack_348,lStack_340,
                                            lStack_340 - lStack_348 >> 2);
                              FUN_10a796290(&cStack_368);
                              goto LAB_10a792d60;
                            }
                            FUN_10a796290(&cStack_368);
                          }
                          goto LAB_10a792c00;
                        }
LAB_10a792d60:
                        lVar18 = lStack_210;
                        if (lStack_210 == lStack_208) {
LAB_10a792d98:
                          bVar11 = false;
                          uVar36 = 0;
                          if ((lVar18 != lStack_208) && (lVar18 != 0)) {
                            uVar36 = *(undefined4 *)(lVar18 + 0x30);
                            bVar11 = true;
                          }
                        }
                        else {
                          do {
                            if (*(long *)(lVar18 + 0x18) == lRam00000001137ebae0)
                            goto LAB_10a792d98;
                            lVar18 = lVar18 + 0x38;
                          } while (lVar18 != lStack_208);
                          bVar11 = false;
                          uVar36 = 0;
                        }
                        FUN_10a7913b0(&cStack_368,param_1,&plStack_308);
                        func_0x00010a7962d0(&lStack_e0,&cStack_368);
                        func_0x00010a4477a4(&cStack_368);
                        bVar34 = true;
                      }
                      if (lStack_320 != 0) {
                        lStack_318 = lStack_320;
                        __ZdlPv();
                      }
                      func_0x00010ab46e34(&plStack_308);
                      func_0x00010a796334(auStack_158);
                      if (bVar34) goto LAB_10a792c54;
                    }
                    else {
                      func_0x00010a796334(auStack_158);
                    }
                  }
                  if (puStack_110 != (undefined4 *)0x0) {
                    puStack_108 = puStack_110;
                    __ZdlPv(puStack_110);
                  }
                  func_0x00010a7b6008(&lStack_f0);
                  func_0x00010a4477a4(&lStack_e0);
                }
                plStack_308 = alStack_c8;
                func_0x00010a190844(&plStack_308);
                plVar13 = plStack_80;
                if (plStack_80 != (long *)0x0) {
                  plVar37 = plStack_80 + 1;
                  do {
                    lVar18 = *plVar37;
                    cVar38 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                    if (bVar11) {
                      *plVar37 = lVar18 + -1;
                      cVar38 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar38 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plStack_80 + 0x10))(plStack_80);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
              }
            }
            else if ((uVar21 < 3) || ((int)plVar37[0x1d] != 0)) goto LAB_10a792998;
LAB_10a79246c:
            lVar18 = param_1 + 0x80;
            FUN_10a793484(lVar18,plVar31[5]);
            if (lVar18 != 0) {
              FUN_10ae6cb48(param_1 + 0x80,lVar18,0x10);
            }
            if (plVar32 == plVar31) goto LAB_10a7930f4;
            lVar18 = *plVar31;
            plVar13 = (long *)plVar31[1];
            *(long **)(lVar18 + 8) = plVar13;
            *plVar13 = lVar18;
            *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
            if (plVar31[3] != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            __ZdlPv(plVar31);
            plVar31 = plVar13;
            if (plStack_370 == (long *)0x0) goto LAB_10a7924f4;
          }
          plVar31 = plStack_370 + 1;
          do {
            lVar18 = *plVar31;
            cVar38 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar11) {
              *plVar31 = lVar18 + -1;
              cVar38 = ExclusiveMonitorsStatus();
            }
          } while (cVar38 != '\0');
          plVar31 = plVar13;
          if (lVar18 == 0) {
            (**(code **)(*plStack_370 + 0x10))(plStack_370);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_370);
          }
        }
LAB_10a7924f4:
      } while (plVar31 != plVar32);
    }
    puVar33 = *(undefined8 **)(param_1 + 0x30);
    while (puVar8 = puVar33, puVar8 != (undefined8 *)0x0) {
      plVar31 = (long *)puVar8[0xd];
      plVar32 = (long *)puVar8[0xc];
      plVar13 = plVar32;
      for (; plVar32 != plVar31; plVar32 = plVar32 + 2) {
        lVar18 = *plVar32;
        if (*(char *)(lVar18 + 0x114) == '\x01') {
          FUN_10a7920dc();
          lVar18 = *plVar32;
        }
        if (*(long *)(lVar18 + 0x10) == *(long *)(lVar18 + 0x18)) {
          uVar21 = *(int *)(lVar18 + 0x110) + 1;
          *(uint *)(lVar18 + 0x110) = uVar21;
          if (2 < uVar21) {
            plVar13 = plVar32;
            plVar37 = plVar32;
            if (plVar32 != plVar31) goto LAB_10a792f74;
            break;
          }
        }
        else {
          *(undefined4 *)(lVar18 + 0x110) = 0;
        }
        plVar13 = plVar31;
      }
LAB_10a792ed8:
      plVar32 = (long *)puVar8[0xd];
      if (plVar32 < plVar13) {
LAB_10a7930f4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10a7930f8);
        (*pcVar10)();
      }
      if (plVar13 != plVar32) {
        while (plVar32 != plVar13) {
          plVar32 = plVar32 + -2;
          FUN_10a7b5fb0(plVar32);
        }
        puVar8[0xd] = plVar13;
      }
      puVar33 = (undefined8 *)*puVar8;
      if ((long *)puVar8[0xc] == plVar13) {
        uVar22 = *(ulong *)(param_1 + 0x28);
        uVar19 = puVar8[1];
        uVar23 = uVar22 - 1;
        if ((uVar22 & uVar23) == 0) {
          uVar19 = uVar23 & uVar19;
        }
        else if (uVar22 <= uVar19) {
          uVar26 = 0;
          if (uVar22 != 0) {
            uVar26 = uVar19 / uVar22;
          }
          uVar19 = uVar19 - uVar26 * uVar22;
        }
        puVar27 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar19 * 8);
        do {
          puVar25 = puVar27;
          puVar27 = (undefined8 *)*puVar25;
        } while ((undefined8 *)*puVar25 != puVar8);
        puVar27 = puVar33;
        if (puVar25 == (undefined8 *)(param_1 + 0x30)) {
LAB_10a793028:
          if (puVar33 == (undefined8 *)0x0) {
LAB_10a793060:
            *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar19 * 8) = 0;
            puVar27 = (undefined8 *)*puVar8;
            goto LAB_10a793068;
          }
          uVar26 = puVar33[1];
          if ((uVar22 & uVar23) == 0) {
            uVar28 = uVar26 & uVar23;
          }
          else {
            uVar28 = uVar26;
            if (uVar22 <= uVar26) {
              uVar28 = 0;
              if (uVar22 != 0) {
                uVar28 = uVar26 / uVar22;
              }
              uVar28 = uVar26 - uVar28 * uVar22;
            }
          }
          if (uVar28 != uVar19) goto LAB_10a793060;
LAB_10a793070:
          if ((uVar22 & uVar23) == 0) {
            uVar26 = uVar26 & uVar23;
          }
          else if (uVar22 <= uVar26) {
            uVar23 = 0;
            if (uVar22 != 0) {
              uVar23 = uVar26 / uVar22;
            }
            uVar26 = uVar26 - uVar23 * uVar22;
          }
          if (uVar26 != uVar19) {
            *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar26 * 8) = puVar25;
            puVar27 = (undefined8 *)*puVar8;
          }
        }
        else {
          uVar26 = puVar25[1];
          if ((uVar22 & uVar23) == 0) {
            uVar26 = uVar26 & uVar23;
          }
          else if (uVar22 <= uVar26) {
            uVar28 = 0;
            if (uVar22 != 0) {
              uVar28 = uVar26 / uVar22;
            }
            uVar26 = uVar26 - uVar28 * uVar22;
          }
          if (uVar26 != uVar19) goto LAB_10a793028;
LAB_10a793068:
          if (puVar27 != (undefined8 *)0x0) {
            uVar26 = puVar27[1];
            goto LAB_10a793070;
          }
        }
        *puVar25 = puVar27;
        *puVar8 = 0;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
        FUN_10a7b616c(1,puVar8);
      }
    }
  }
  return;
LAB_10a792f74:
  plVar37 = plVar37 + 2;
  plVar13 = plVar32;
  if (plVar37 != plVar31) {
    lVar18 = *plVar37;
    if (*(char *)(lVar18 + 0x114) == '\x01') {
      FUN_10a7920dc();
      lVar18 = *plVar37;
    }
    if (*(long *)(lVar18 + 0x10) == *(long *)(lVar18 + 0x18)) goto LAB_10a792fa8;
    *(undefined4 *)(lVar18 + 0x110) = 0;
    goto LAB_10a792fbc;
  }
  goto LAB_10a792ed8;
LAB_10a792fa8:
  uVar21 = *(int *)(lVar18 + 0x110) + 1;
  *(uint *)(lVar18 + 0x110) = uVar21;
  if (uVar21 < 3) {
LAB_10a792fbc:
    FUN_10a792078(plVar32,plVar37);
    plVar32 = plVar32 + 2;
  }
  goto LAB_10a792f74;
}



/* Entry: 10a7931fc; end: 10a793483;  */

void FUN_10a7931fc(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint6 uVar18;
  long lVar19;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  byte bVar26;
  undefined8 uVar20;
  byte bVar27;
  
  plVar9 = (long *)param_2[1];
  if (plVar9 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar9 != (long *)0x0) {
      lVar16 = *param_2;
      if ((lVar16 != 0) && (uVar17 = *(ulong *)(param_1 + 0xb8), uVar17 != 0)) {
        puVar10 = (undefined4 *)0x113835028;
        FUN_10a1c6264();
        func_0x00010a7786bc(uVar17,lVar16,*puVar10);
        if ((uVar17 & 1) != 0) {
          uVar3 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x850) + 0x2c);
          lVar14 = param_1 + 0x80;
          lVar19 = lVar16;
          FUN_10a793484();
          if (lVar14 == 0) {
            lVar19 = param_2[1];
            lVar14 = *param_2;
            if (param_2[1] != 0) {
              plVar12 = (long *)(param_2[1] + 0x10);
              do {
                cVar21 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar5) {
                  *plVar12 = *plVar12 + 1;
                  cVar21 = ExclusiveMonitorsStatus();
                }
              } while (cVar21 != '\0');
            }
            plVar12 = (long *)0x30;
            __Znwm();
            lVar13 = 0;
            plVar12[3] = lVar19;
            plVar12[2] = lVar14;
            *(undefined1 *)(plVar12 + 4) = 0;
            *(undefined4 *)((long)plVar12 + 0x24) = uVar3;
            plVar12[5] = lVar16;
            lVar14 = *(long *)(param_1 + 0x68);
            *plVar12 = lVar14;
            plVar12[1] = param_1 + 0x68;
            *(long **)(lVar14 + 8) = plVar12;
            *(long **)(param_1 + 0x68) = plVar12;
            uVar2 = *(ulong *)(param_1 + 0x80);
            *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
            Hint_Prefetch(uVar2,0,2,0);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar16;
            uVar17 = (SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)&PTR_LOOP_110c8acd8 + lVar16) * -0x622015f714c7d297) + lVar16;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar17;
            uVar17 = SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar17 * -0x622015f714c7d297;
            bVar8 = (byte)uVar17;
            uVar18 = CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8,CONCAT11(bVar8,
                                                  bVar8))))) & 0x7f7f7f7f7f7f;
            uVar17 = uVar2 >> 0xc ^ uVar17 >> 7;
            while( true ) {
              uVar17 = uVar17 & *(ulong *)(param_1 + 0x90);
              uVar20 = *(undefined8 *)(uVar2 + uVar17);
              cVar21 = (char)((ulong)uVar20 >> 8);
              cVar22 = (char)((ulong)uVar20 >> 0x10);
              cVar23 = (char)((ulong)uVar20 >> 0x18);
              cVar24 = (char)((ulong)uVar20 >> 0x20);
              cVar25 = (char)((ulong)uVar20 >> 0x28);
              bVar26 = (byte)((ulong)uVar20 >> 0x30);
              bVar27 = (byte)((ulong)uVar20 >> 0x38);
              uVar15 = CONCAT17(-(bVar27 == (bVar8 & 0x7f)),
                                CONCAT16(-(bVar26 == (bVar8 & 0x7f)),
                                         CONCAT15(-(cVar25 == (char)(uVar18 >> 0x28)),
                                                  CONCAT14(-(cVar24 == (char)(uVar18 >> 0x20)),
                                                           CONCAT13(-(cVar23 ==
                                                                     (char)(uVar18 >> 0x18)),
                                                                    CONCAT12(-(cVar22 ==
                                                                              (char)(uVar18 >> 0x10)
                                                                              ),CONCAT11(-(cVar21 ==
                                                                                          (char)(
                                                  uVar18 >> 8)),-((char)uVar20 == (char)uVar18))))))
                                        )) & 0x8080808080808080;
              if (uVar15 != 0) {
                do {
                  uVar4 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                          (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
                  if (*(long *)(*(long *)(param_1 + 0x88) +
                               (uVar17 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) &
                               *(ulong *)(param_1 + 0x90)) * 0x10) == lVar16) goto LAB_10a7932c8;
                  uVar15 = uVar15 - 1 & uVar15;
                } while (uVar15 != 0);
              }
              if (CONCAT17(-(bVar27 == 0x80),
                           CONCAT16(-(bVar26 == 0x80),
                                    CONCAT15(-(cVar25 == -0x80),
                                             CONCAT14(-(cVar24 == -0x80),
                                                      CONCAT13(-(cVar23 == -0x80),
                                                               CONCAT12(-(cVar22 == -0x80),
                                                                        CONCAT11(-(cVar21 == -0x80),
                                                                                 -((char)uVar20 ==
                                                                                  -0x80)))))))) != 0
                 ) break;
              lVar13 = lVar13 + 8;
              uVar17 = lVar13 + uVar17;
            }
            lVar14 = param_1 + 0x80;
            FUN_10a7b6484();
            plVar1 = (long *)(*(long *)(param_1 + 0x88) + lVar14 * 0x10);
            *plVar1 = lVar16;
            plVar1[1] = (long)plVar12;
          }
          else {
            lVar16 = *(long *)(lVar19 + 8);
            lVar13 = param_2[1];
            lVar14 = *param_2;
            if (param_2[1] != 0) {
              plVar12 = (long *)(param_2[1] + 0x10);
              do {
                cVar21 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar5) {
                  *plVar12 = *plVar12 + 1;
                  cVar21 = ExclusiveMonitorsStatus();
                }
              } while (cVar21 != '\0');
            }
            lVar11 = *(long *)(lVar16 + 0x18);
            *(long *)(lVar16 + 0x18) = lVar13;
            *(long *)(lVar16 + 0x10) = lVar14;
            if (lVar11 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            lVar16 = *(long *)(lVar19 + 8);
            *(undefined1 *)(lVar16 + 0x20) = 0;
            *(undefined4 *)(lVar16 + 0x24) = uVar3;
          }
        }
      }
LAB_10a7932c8:
      plVar12 = plVar9 + 1;
      do {
        lVar16 = *plVar12;
        cVar21 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar16 + -1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a793484; end: 10a79354f;  */

undefined1  [16] FUN_10a793484(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  undefined1 auVar18 [16];
  
  lVar4 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
  uVar8 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297) + param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar5 = *param_1;
  Hint_Prefetch(uVar5,0,2,0);
  uVar7 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
  uVar8 = uVar5 >> 0xc ^ uVar7 >> 7;
  bVar6 = (byte)uVar7 & 0x7f;
  while( true ) {
    uVar8 = uVar8 & param_1[2];
    uVar10 = *(undefined8 *)(uVar5 + uVar8);
    bVar11 = (byte)((ulong)uVar10 >> 8);
    bVar12 = (byte)((ulong)uVar10 >> 0x10);
    bVar13 = (byte)((ulong)uVar10 >> 0x18);
    bVar14 = (byte)((ulong)uVar10 >> 0x20);
    bVar15 = (byte)((ulong)uVar10 >> 0x28);
    bVar16 = (byte)((ulong)uVar10 >> 0x30);
    bVar17 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar17 == bVar6),
                          CONCAT16(-(bVar16 == bVar6),
                                   CONCAT15(-(bVar15 == bVar6),
                                            CONCAT14(-(bVar14 == bVar6),
                                                     CONCAT13(-(bVar13 == bVar6),
                                                              CONCAT12(-(bVar12 == bVar6),
                                                                       CONCAT11(-(bVar11 == bVar6),
                                                                                -((byte)uVar10 ==
                                                                                 bVar6)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar9 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar8 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_1[2];
      if (*(ulong *)(param_1[1] + uVar9 * 0x10) == param_2) {
        auVar18._8_8_ = param_1[1] + uVar9 * 0x10;
        auVar18._0_8_ = uVar5 + uVar9;
        return auVar18;
      }
    }
    if (CONCAT17(-(bVar17 == 0x80),
                 CONCAT16(-(bVar16 == 0x80),
                          CONCAT15(-(bVar15 == 0x80),
                                   CONCAT14(-(bVar14 == 0x80),
                                            CONCAT13(-(bVar13 == 0x80),
                                                     CONCAT12(-(bVar12 == 0x80),
                                                              CONCAT11(-(bVar11 == 0x80),
                                                                       -((byte)uVar10 == 0x80)))))))
                ) != 0) break;
    lVar4 = lVar4 + 8;
    uVar8 = lVar4 + uVar8;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 10a793550; end: 10a793633;  */

/* WARNING: Removing unreachable block (ram,0x00010a793a5c) */

ulong * FUN_10a793550(ulong *param_1,undefined8 *param_2,long *param_3,ulong *param_4,long *param_5)

{
  float *pfVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint *puVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  code *pcVar14;
  bool bVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  long *plVar19;
  float fVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  ulong *puVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  float fVar57;
  long *plStack_350;
  float fStack_320;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  uint uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 uStack_188;
  undefined4 uStack_184;
  undefined1 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined4 uStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float afStack_10c [3];
  long lStack_100;
  long lStack_f8;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar32 = puVar3 + 2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar9;
    *param_2 = 0;
    param_2[1] = 0;
    puVar17 = param_1;
LAB_10a793614:
    param_1[1] = (ulong)puVar32;
    return puVar17;
  }
  lVar29 = (long)puVar3 - *param_1;
  uVar18 = (lVar29 >> 4) + 1;
  if (uVar18 >> 0x3c == 0) {
    uVar22 = (long)param_1[2] - *param_1;
    uVar26 = (long)uVar22 >> 3;
    if (uVar26 <= uVar18) {
      uVar26 = uVar18;
    }
    if (0x7fffffffffffffef < uVar22) {
      uVar26 = 0xfffffffffffffff;
    }
    if (uVar26 >> 0x3c == 0) {
      lVar16 = uVar26 << 4;
      __Znwm();
      puVar3 = (undefined8 *)(lVar16 + lVar29);
      uVar9 = *param_2;
      uVar10 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      puVar31 = (ulong *)*param_1;
      puVar30 = (ulong *)((long)puVar3 - (param_1[1] - (long)puVar31));
      puVar32 = puVar3 + 2;
      puVar3[1] = uVar10;
      *puVar3 = uVar9;
      puVar17 = puVar30;
      _memcpy(puVar30,puVar31);
      *param_1 = (ulong)puVar30;
      param_1[1] = (ulong)puVar32;
      param_1[2] = lVar16 + uVar26 * 0x10;
      if (puVar31 != (ulong *)0x0) {
        __ZdlPv(puVar31);
        puVar17 = puVar31;
      }
      goto LAB_10a793614;
    }
  }
  else {
    func_0x00010a7a730c();
  }
  func_0x000109ffded8();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ab46d7c(&uStack_2f0);
  uVar18 = param_4[2];
  *(undefined1 *)(param_4 + 1) = (undefined1)uStack_2e8;
  if (uVar18 != 0) {
    param_4[3] = uVar18;
    __ZdlPv();
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
  }
  puVar17 = param_4 + 5;
  param_4[3] = uStack_2d8;
  param_4[2] = uStack_2e0;
  param_4[4] = uStack_2d0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2e0 = 0;
  if (*puVar17 != 0) {
    param_4[6] = *puVar17;
    __ZdlPv();
    *puVar17 = 0;
    param_4[6] = 0;
    param_4[7] = 0;
  }
  param_4[6] = uStack_2c0;
  param_4[5] = uStack_2c8;
  param_4[7] = uStack_2b8;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2c8 = 0;
  FUN_10a3aa594(param_4 + 8);
  param_4[9] = uStack_2a8;
  param_4[8] = uStack_2b0;
  param_4[10] = uStack_2a0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b0 = 0;
  FUN_10a0d8804(param_4 + 0xb);
  param_4[0xc] = uStack_290;
  param_4[0xb] = uStack_298;
  uVar18 = param_4[0xe];
  param_4[0xd] = uStack_288;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_298 = 0;
  if (uVar18 != 0) {
    param_4[0xf] = uVar18;
    __ZdlPv();
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
  }
  param_4[0xf] = uStack_278;
  param_4[0xe] = uStack_280;
  param_4[0x10] = uStack_270;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_280 = 0;
  FUN_10a4af174(param_4 + 0x11);
  param_4[0x12] = uStack_260;
  param_4[0x11] = uStack_268;
  param_4[0x13] = uStack_258;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_268 = 0;
  FUN_10a559184(param_4 + 0x14);
  param_4[0x15] = uStack_248;
  param_4[0x14] = uStack_250;
  uVar18 = param_4[0x17];
  param_4[0x16] = uStack_240;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_250 = 0;
  if (uVar18 != 0) {
    param_4[0x18] = uVar18;
    __ZdlPv();
    param_4[0x17] = 0;
    param_4[0x18] = 0;
    param_4[0x19] = 0;
  }
  uVar18 = param_4[0x1a];
  param_4[0x18] = uStack_230;
  param_4[0x17] = uStack_238;
  param_4[0x19] = uStack_228;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_238 = 0;
  if (uVar18 != 0) {
    param_4[0x1b] = uVar18;
    __ZdlPv();
    param_4[0x1a] = 0;
    param_4[0x1b] = 0;
    param_4[0x1c] = 0;
  }
  uVar22 = uStack_210;
  uVar26 = uStack_218;
  uVar18 = uStack_220;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_220 = 0;
  param_4[0x1c] = uVar22;
  param_4[0x1d] = uStack_208;
  puVar31 = param_4 + 0x1e;
  *(uint *)puVar31 = uStack_200;
  param_4[0x1b] = uVar26;
  param_4[0x1a] = uVar18;
  if (param_4 != &uStack_2f0) {
    FUN_10a1903c4(param_4 + 0x1f,lStack_1f8,lStack_1f0,
                  (lStack_1f0 - lStack_1f8 >> 3) * 0x6db6db6db6db6db7);
  }
  param_4[0x23] = uStack_1d8;
  param_4[0x22] = uStack_1e0;
  param_4[0x25] = uStack_1c8;
  param_4[0x24] = uStack_1d0;
  param_4[0x26] = uStack_1c0;
  param_4[0x27] = uStack_1b8;
  *(undefined4 *)(param_4 + 0x28) = uStack_1b0;
  *(undefined4 *)((long)param_4 + 0x14c) = uStack_1a4;
  *(undefined8 *)((long)param_4 + 0x144) = uStack_1ac;
  param_4[0x2b] = uStack_198;
  param_4[0x2a] = uStack_1a0;
  *(undefined1 *)(param_4 + 0x2d) = uStack_188;
  *(undefined4 *)((long)param_4 + 0x16c) = uStack_184;
  *(undefined1 *)(param_4 + 0x2e) = uStack_180;
  if (param_4[0x2f] != 0) {
    param_4[0x30] = param_4[0x2f];
    __ZdlPv();
    param_4[0x2f] = 0;
    param_4[0x30] = 0;
    param_4[0x31] = 0;
  }
  uVar18 = uStack_160;
  param_4[0x2f] = uStack_178;
  param_4[0x31] = uStack_168;
  param_4[0x30] = uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  plVar19 = (long *)param_4[0x32];
  param_4[0x32] = uVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 8))();
  }
  *(undefined4 *)(param_4 + 0x35) = uStack_148;
  param_4[0x34] = uStack_150;
  param_4[0x33] = uStack_158;
  func_0x00010ab46e34(&uStack_2f0);
  param_5[1] = *param_5;
  uVar25 = (uint)param_1[0x1e];
  if (uVar25 == 0) {
    puVar31 = (ulong *)0x0;
  }
  else {
    uVar18 = param_1[2];
    uVar26 = param_1[3];
    FUN_10a177570(puVar31,param_2);
    uVar22 = 0;
    if ((ulong)uVar25 != 0) {
      uVar22 = (uVar26 - uVar18) / (ulong)uVar25;
    }
    param_4[0x1d] = param_1[0x1d];
    uVar34 = uVar22 & 0xffffffff;
    FUN_10ab4a154(param_4,uVar34);
    lStack_308 = 0;
    lStack_300 = 0;
    uStack_2f8 = 0;
    uVar18 = param_4[0x1f];
    uVar26 = param_4[0x20];
    if (uVar26 - uVar18 != 0) {
      uVar28 = 0;
      auVar37 = NEON_fmov(0x3f800000,4);
      do {
        uVar27 = param_4[0x1f];
        uVar23 = ((long)(param_4[0x20] - uVar27) >> 3) * 0x6db6db6db6db6db7;
        if (uVar23 < uVar28 || uVar23 - uVar28 == 0) {
          FUN_10ab725fc();
          goto LAB_10a794af4;
        }
        if (uVar27 == 0) goto LAB_10a7940b8;
        func_0x000107c2b07c(&uStack_2f0,&UNK_10f67630b);
        lVar29 = uVar27 + uVar28 * 0x38;
        if (*(long *)(lVar29 + 0x18) == uStack_2d8) {
          bVar15 = true;
        }
        else {
          func_0x000107c2b07c(&fStack_118,&UNK_10f67631b);
          bVar15 = *(long *)(lVar29 + 0x18) == lStack_100;
        }
        if ((long)uStack_2e0 < 0) {
          __ZdlPv(uStack_2f0);
        }
        if (!bVar15) {
          FUN_10ab6e9d8();
          auVar38 = ZEXT816(0x3f800000) << 0x40;
          if (*(long *)(lVar29 + 0x18) != lRam0000000113835758) {
            FUN_10ab6eb18();
            auVar38._8_8_ = 0x3f80000000000000;
            auVar38._0_8_ = 0x3f800000;
            if (*(long *)(lVar29 + 0x18) != lRam0000000113835798) {
              FUN_10ab6ec58();
              lVar16 = -(ulong)(*(long *)(lVar29 + 0x18) == lRam00000001138357d8);
              auVar38[0] = (byte)lVar16 & auVar37[0];
              bVar39 = (byte)((ulong)lVar16 >> 8);
              auVar38[1] = bVar39 & auVar37[1];
              bVar40 = (byte)((ulong)lVar16 >> 0x10);
              auVar38[2] = bVar40 & auVar37[2];
              bVar41 = (byte)((ulong)lVar16 >> 0x18);
              auVar38[3] = bVar41 & auVar37[3];
              bVar42 = (byte)((ulong)lVar16 >> 0x20);
              auVar38[4] = bVar42 & auVar37[4];
              bVar43 = (byte)((ulong)lVar16 >> 0x28);
              auVar38[5] = bVar43 & auVar37[5];
              bVar44 = (byte)((ulong)lVar16 >> 0x30);
              auVar38[6] = bVar44 & auVar37[6];
              bVar45 = (byte)((ulong)lVar16 >> 0x38);
              auVar38[7] = bVar45 & auVar37[7];
              auVar38[8] = (byte)lVar16 & auVar37[8];
              auVar38[9] = bVar39 & auVar37[9];
              auVar38[10] = bVar40 & auVar37[10];
              auVar38[0xb] = bVar41 & auVar37[0xb];
              auVar38[0xc] = bVar42 & auVar37[0xc];
              auVar38[0xd] = bVar43 & auVar37[0xd];
              auVar38[0xe] = bVar44 & auVar37[0xe];
              auVar38[0xf] = bVar45 & auVar37[0xf];
            }
          }
          uStack_2e8 = auVar38._8_8_;
          uStack_2f0 = auVar38._0_8_;
          uVar27 = param_1[0x1f];
          uVar23 = param_1[0x20];
          if (uVar27 == uVar23) {
LAB_10a793b08:
            if ((uVar27 == uVar23) || (uVar27 == 0)) goto LAB_10a793b2c;
            puVar30 = param_1;
            FUN_10a794d70(param_1,uVar27,&uStack_2f0,&lStack_308);
            if ((int)puVar30 == 0) goto LAB_10a7940b8;
          }
          else {
            do {
              if (*(long *)(uVar27 + 0x18) == *(long *)(lVar29 + 0x18)) goto LAB_10a793b08;
              uVar27 = uVar27 + 0x38;
            } while (uVar27 != uVar23);
LAB_10a793b2c:
            FUN_10a794c60(&lStack_308,uVar34,&uStack_2f0);
          }
          uVar24 = (uint)*puVar31;
          uVar25 = 0;
          if (uVar24 != 0) {
            uVar25 = 0;
            if ((ulong)uVar24 != 0) {
              uVar25 = (uint)((param_4[3] - param_4[2]) / (ulong)uVar24);
            }
          }
          uVar24 = (uint)((ulong)(lStack_300 - lStack_308) >> 4);
          if (uVar24 <= uVar25) {
            uVar25 = uVar24;
          }
          uVar27 = (ulong)uVar25;
          iVar21 = *(int *)(lVar29 + 0x28);
          if (iVar21 < 3) {
            if (iVar21 == 1) {
              func_0x00010ab507d0(&fStack_118,param_4,lVar29);
              plVar19 = (long *)CONCAT44(fStack_114,fStack_118);
              if (plVar19 == (long *)0x0) goto LAB_10a7940b8;
              if (uVar25 != 0) {
                uVar23 = 0;
                do {
                  if ((ulong)(lStack_300 - lStack_308 >> 4) <= uVar23) goto LAB_10a794af4;
                  uStack_120 = (long *)CONCAT44(uStack_120._4_4_,
                                                *(undefined4 *)(lStack_308 + uVar23 * 0x10));
                  (**(code **)(*plVar19 + 0x18))(plVar19,uVar23,&uStack_120);
                  uVar23 = uVar23 + 1;
                } while (uVar23 != uVar27);
              }
            }
            else {
              if (iVar21 != 2) goto LAB_10a7940b8;
              func_0x00010ab50ad8(&fStack_118,param_4,lVar29);
              plVar19 = (long *)CONCAT44(fStack_114,fStack_118);
              if (plVar19 == (long *)0x0) goto LAB_10a7940b8;
              if (uVar25 != 0) {
                uVar23 = 0;
                lVar29 = 4;
                do {
                  if ((ulong)(lStack_300 - lStack_308 >> 4) <= uVar23) goto LAB_10a794af4;
                  uStack_120 = (long *)CONCAT44(*(undefined4 *)(lStack_308 + lVar29),
                                                ((undefined4 *)(lStack_308 + lVar29))[-1]);
                  (**(code **)(*plVar19 + 0x18))(plVar19,uVar23,&uStack_120);
                  uVar23 = uVar23 + 1;
                  lVar29 = lVar29 + 0x10;
                } while (uVar27 != uVar23);
              }
            }
          }
          else if (iVar21 == 3) {
            FUN_10ab4c544(&uStack_120,param_4,lVar29);
            plVar19 = uStack_120;
            if (uStack_120 == (long *)0x0) goto LAB_10a7940b8;
            if (uVar25 != 0) {
              uVar23 = 0;
              lVar29 = 4;
              do {
                if ((ulong)(lStack_300 - lStack_308 >> 4) <= uVar23) goto LAB_10a794af4;
                pfVar1 = (float *)(lStack_308 + lVar29);
                fStack_118 = pfVar1[-1];
                fStack_114 = *pfVar1;
                fStack_110 = pfVar1[1];
                (**(code **)(*plVar19 + 0x18))(plVar19,uVar23,&fStack_118);
                uVar23 = uVar23 + 1;
                lVar29 = lVar29 + 0x10;
              } while (uVar27 != uVar23);
            }
          }
          else {
            if (iVar21 != 4) goto LAB_10a7940b8;
            func_0x00010ab4c84c(&fStack_118,param_4,lVar29);
            plVar19 = (long *)CONCAT44(fStack_114,fStack_118);
            if (plVar19 == (long *)0x0) goto LAB_10a7940b8;
            if (uVar25 != 0) {
              uVar23 = 0;
              do {
                if ((ulong)(lStack_300 - lStack_308 >> 4) <= uVar23) goto LAB_10a794af4;
                (**(code **)(*plVar19 + 0x18))(plVar19,uVar23,lStack_308 + uVar23 * 0x10);
                uVar23 = uVar23 + 1;
              } while (uVar23 != uVar27);
            }
          }
          (**(code **)(*plVar19 + 8))(plVar19);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != ((long)(uVar26 - uVar18) >> 3) * 0x6db6db6db6db6db7);
    }
    fVar20 = (float)uVar22;
    if ((param_3 == (long *)0x0) || (*(char *)((long)param_3 + 0x1c) != '\x01')) {
LAB_10a793f80:
      if (param_4 != param_1) {
        FUN_10a0cf2cc(puVar17,param_1[5],param_1[6],param_1[6] - param_1[5]);
      }
      uVar25 = 4;
      if ((int)param_4[0x1d] != 2) {
        uVar25 = 0;
      }
      uVar24 = 2;
      if ((int)param_4[0x1d] != 1) {
        uVar24 = uVar25;
      }
      uVar22 = (ulong)uVar24;
      uVar18 = param_1[0x1a];
      uVar26 = param_1[0x1b];
      if ((uVar18 != uVar26) && (uVar24 != 0)) {
        uVar18 = param_4[6] - param_4[5] >>
                 (LZCOUNT(((uVar22 & 0x5555555555555555) >> 1 |
                          ((uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1) << 2) << 0x3c) & 0x3fU);
        fStack_118 = (float)((uint)fStack_118 & 0xffffff00);
        func_0x0001074b2d2c(&uStack_2f0,uVar18,&fStack_118);
        puVar5 = (uint *)param_1[0x1b];
        for (puVar4 = (uint *)param_1[0x1a]; puVar4 != puVar5; puVar4 = puVar4 + 0x1a) {
          if ((puVar4[2] != 0) && (puVar4[1] != 0)) {
            uVar26 = 0;
            do {
              uVar34 = uVar26 + *puVar4;
              if (uVar34 < uVar18) {
                if (uStack_2e8 <= uVar34) goto LAB_10a794af4;
                uVar28 = 1L << (uVar34 & 0x3f);
                uVar27 = *(ulong *)(uStack_2f0 + (uVar34 >> 6) * 8);
                if ((uVar27 & uVar28) == 0) {
                  *(ulong *)(uStack_2f0 + (uVar34 >> 6) * 8) = uVar27 | uVar28;
                  lVar29 = uVar34 * uVar22;
                  uVar34 = param_4[5];
                  if ((int)param_4[0x1d] == 1) {
                    *(short *)(uVar34 + lVar29) = *(short *)(uVar34 + lVar29) + (short)puVar4[2];
                  }
                  else {
                    *(uint *)(uVar34 + lVar29) = *(int *)(uVar34 + lVar29) + puVar4[2];
                  }
                }
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 < puVar4[1]);
          }
        }
        if (uStack_2f0 != 0) {
          __ZdlPv();
        }
        uVar18 = param_1[0x1a];
        uVar26 = param_1[0x1b];
      }
      if (uVar18 != uVar26) {
        uVar25 = (uint)param_4[0x22];
        if (uVar25 == 0xffffffff) {
          lVar29 = 0;
        }
        else {
          uVar18 = ((long)(param_4[0x20] - param_4[0x1f]) >> 3) * 0x6db6db6db6db6db7;
          if (uVar18 < uVar25 || uVar18 - uVar25 == 0) goto LAB_10a794af0;
          lVar29 = param_4[0x1f] + (ulong)uVar25 * 0x38;
        }
        uVar25 = *(uint *)((long)param_4 + 0x114);
        if (uVar25 == 0xffffffff) {
          lVar16 = 0;
        }
        else {
          uVar18 = ((long)(param_4[0x20] - param_4[0x1f]) >> 3) * 0x6db6db6db6db6db7;
          if (uVar18 < uVar25 || uVar18 - uVar25 == 0) goto LAB_10a794af0;
          lVar16 = param_4[0x1f] + (ulong)uVar25 * 0x38;
        }
        uVar25 = (uint)param_4[0x23];
        if (uVar25 == 0xffffffff) {
          lVar33 = 0;
        }
        else {
          uVar18 = ((long)(param_4[0x20] - param_4[0x1f]) >> 3) * 0x6db6db6db6db6db7;
          if (uVar18 < uVar25 || uVar18 - uVar25 == 0) goto LAB_10a794af0;
          lVar33 = param_4[0x1f] + (ulong)uVar25 * 0x38;
        }
        uVar25 = (uint)*puVar31;
        if (uVar25 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((ulong)uVar25 != 0) {
            uVar18 = (param_4[3] - param_4[2]) / (ulong)uVar25;
          }
          uVar18 = uVar18 & 0xffffffff;
        }
        fStack_118 = (float)((uint)fStack_118 & 0xffffff00);
        func_0x0001074b2d2c(&uStack_2f0,uVar18,&fStack_118);
        if (lVar29 == 0) {
          uStack_120 = (long *)0x0;
LAB_10a794228:
          plStack_128 = (long *)0x0;
          if (lVar16 != 0) goto LAB_10a7941f0;
LAB_10a794230:
          plStack_130 = (long *)0x0;
          if (lVar33 == 0) goto LAB_10a794238;
LAB_10a794204:
          iVar21 = *(int *)(lVar33 + 0x28);
          if (iVar21 == 4) {
            func_0x00010ab4c84c(&plStack_138,param_4,lVar33);
            iVar21 = *(int *)(lVar33 + 0x28);
          }
          else {
            plStack_138 = (long *)0x0;
          }
          if (iVar21 == 3) {
            FUN_10ab4c544(&plStack_140,param_4,lVar33);
            plStack_350 = plStack_140;
          }
          else {
            plStack_350 = (long *)0x0;
          }
        }
        else {
          iVar21 = *(int *)(lVar29 + 0x28);
          if (iVar21 == 3) {
            FUN_10ab4c544(&uStack_120,param_4,lVar29);
            iVar21 = *(int *)(lVar29 + 0x28);
          }
          else {
            uStack_120 = (long *)0x0;
          }
          if (iVar21 != 2) goto LAB_10a794228;
          func_0x00010ab50ad8(&plStack_128,param_4,lVar29);
          if (lVar16 == 0) goto LAB_10a794230;
LAB_10a7941f0:
          FUN_10ab4c544(&plStack_130,param_4,lVar16);
          if (lVar33 != 0) goto LAB_10a794204;
LAB_10a794238:
          plStack_350 = (long *)0x0;
          plStack_138 = (long *)0x0;
        }
        plVar13 = uStack_120;
        plVar12 = plStack_128;
        plVar11 = plStack_130;
        plVar19 = plStack_138;
        puVar5 = (uint *)param_1[0x1b];
        for (puVar4 = (uint *)param_1[0x1a]; puVar4 != puVar5; puVar4 = puVar4 + 0x1a) {
          fVar36 = (float)puVar4[10];
          fVar46 = (float)puVar4[0xb];
          fVar47 = (float)puVar4[0xc];
          if ((((((fVar36 != 1.0) || (fVar46 != 0.0)) || (fVar47 != 0.0)) ||
               (((float)puVar4[0xd] != 0.0 || ((float)puVar4[0xe] != 0.0)))) ||
              ((((float)puVar4[0xf] != 1.0 ||
                (((float)puVar4[0x10] != 0.0 || ((float)puVar4[0x11] != 0.0)))) ||
               ((float)puVar4[0x12] != 0.0)))) ||
             (((((float)puVar4[0x13] != 0.0 || ((float)puVar4[0x14] != 1.0)) ||
               ((float)puVar4[0x15] != 0.0)) ||
              ((((float)puVar4[0x16] != 0.0 || ((float)puVar4[0x17] != 0.0)) ||
               (((float)puVar4[0x18] != 0.0 || ((float)puVar4[0x19] != 1.0)))))))) {
            fVar54 = (float)puVar4[0xe];
            fVar48 = (float)puVar4[0xf];
            fVar49 = (float)puVar4[0x10];
            fVar51 = (float)puVar4[0x12];
            fVar53 = (float)puVar4[0x13];
            fVar55 = (float)puVar4[0x14];
            fStack_320 = -(fVar53 * fVar49) + fVar55 * fVar48;
            fVar56 = -(fVar53 * fVar47) + fVar55 * fVar46;
            fVar50 = -(fVar48 * fVar47) + fVar49 * fVar46;
            if (ABS(-(fVar54 * fVar56) + fStack_320 * fVar36 + fVar50 * fVar51) <= 1e-06) {
              fVar53 = 0.0;
              fVar57 = 1.0;
              fVar50 = 0.0;
              fVar55 = 0.0;
              fVar51 = 1.0;
              fVar54 = 0.0;
              fVar49 = 0.0;
              fVar52 = 0.0;
              fStack_320 = 1.0;
            }
            else {
              fVar57 = -(fVar46 * (-(fVar49 * fVar51) + fVar55 * fVar54)) +
                       (-(fVar49 * fVar53) + fVar55 * fVar48) * fVar36 +
                       (fVar51 * -fVar48 + fVar53 * fVar54) * fVar47;
              fVar7 = fVar51 * fVar47;
              fVar8 = fVar51 * fVar46;
              fStack_320 = fStack_320 / fVar57;
              fVar47 = -(fVar36 * fVar49) - fVar47 * -fVar54;
              fVar46 = fVar46 * -fVar54;
              fVar52 = (-(fVar54 * fVar55) - -(fVar51 * fVar49)) / fVar57;
              fVar49 = (-(fVar51 * fVar48) + fVar53 * fVar54) / fVar57;
              fVar54 = -fVar56 / fVar57;
              fVar51 = (-fVar7 + fVar55 * fVar36) / fVar57;
              fVar55 = (-(fVar36 * fVar53) - -fVar8) / fVar57;
              fVar50 = fVar50 / fVar57;
              fVar53 = fVar47 / fVar57;
              fVar57 = (fVar46 + fVar48 * fVar36) / fVar57;
            }
            uVar26 = (ulong)(uint)fVar47;
            uVar18 = (ulong)(uint)fVar46;
            uVar25 = 4;
            if ((int)param_1[0x1d] != 2) {
              uVar25 = 0;
            }
            uVar24 = 2;
            if ((int)param_1[0x1d] != 1) {
              uVar24 = uVar25;
            }
            if ((uVar24 != 0) &&
               (uVar22 = ((ulong)puVar4[1] + (ulong)*puVar4) * (ulong)uVar24,
               uVar22 < param_1[6] - param_1[5] || uVar22 - (param_1[6] - param_1[5]) == 0)) {
              uVar25 = (uint)param_1[0x1e];
              if (uVar25 == 0) {
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                if ((ulong)uVar25 != 0) {
                  uVar22 = (param_1[3] - param_1[2]) / (ulong)uVar25;
                }
                uVar22 = uVar22 & 0xffffffff;
              }
              if (puVar4[1] != 0) {
                uVar34 = 0;
                do {
                  fVar46 = (float)uVar26;
                  fVar36 = (float)uVar18;
                  lVar29 = (uVar34 + *puVar4) * (ulong)uVar24;
                  if ((int)param_1[0x1d] == 1) {
                    uVar28 = (ulong)*(ushort *)(param_1[5] + lVar29) + (ulong)puVar4[2];
                    if (uVar22 <= uVar28 || uVar28 >> 0x10 != 0) break;
                  }
                  else {
                    uVar28 = (ulong)*(uint *)(param_1[5] + lVar29) + (ulong)puVar4[2];
                    if (uVar22 <= uVar28) break;
                  }
                  if (uStack_2e8 <= uVar28) goto LAB_10a794af4;
                  uVar27 = 1L << (uVar28 & 0x3f);
                  uVar23 = *(ulong *)(uStack_2f0 + (uVar28 >> 6) * 8);
                  if ((uVar23 & uVar27) == 0) {
                    *(ulong *)(uStack_2f0 + (uVar28 >> 6) * 8) = uVar23 | uVar27;
                    if (plVar13 == (long *)0x0) {
                      if (plVar12 != (long *)0x0) {
                        fVar46 = (float)(**(code **)(*plVar12 + 0x10))(plVar12,uVar28);
                        uVar26 = *(ulong *)(puVar4 + 0x16);
                        fStack_118 = (float)*(undefined8 *)(puVar4 + 0x12) * 0.0 + (float)uVar26;
                        fStack_114 = (float)((ulong)*(undefined8 *)(puVar4 + 0x12) >> 0x20) * 0.0 +
                                     (float)(uVar26 >> 0x20);
                        uVar18 = CONCAT44(fStack_114,fStack_118);
                        fStack_118 = (float)*(undefined8 *)(puVar4 + 10) * fVar46 +
                                     (float)*(undefined8 *)(puVar4 + 0xe) * fVar36 + fStack_118;
                        fStack_114 = (float)((ulong)*(undefined8 *)(puVar4 + 10) >> 0x20) * fVar46 +
                                     (float)((ulong)*(undefined8 *)(puVar4 + 0xe) >> 0x20) * fVar36
                                     + fStack_114;
                        (**(code **)(*plVar12 + 0x18))(plVar12,uVar28,&fStack_118);
                      }
                    }
                    else {
                      fVar47 = (float)(**(code **)(*plVar13 + 0x10))(plVar13,uVar28);
                      fVar48 = fVar47 * (float)puVar4[0xc] + fVar36 * (float)puVar4[0x10] +
                               fVar46 * (float)puVar4[0x14] + (float)puVar4[0x18];
                      uVar26 = *(ulong *)(puVar4 + 0x16);
                      fStack_118 = (float)*(undefined8 *)(puVar4 + 0x12) * fVar46 + (float)uVar26;
                      fStack_114 = (float)((ulong)*(undefined8 *)(puVar4 + 0x12) >> 0x20) * fVar46 +
                                   (float)(uVar26 >> 0x20);
                      uVar18 = CONCAT44(fStack_114,fStack_118);
                      fStack_118 = (float)*(undefined8 *)(puVar4 + 10) * fVar47 +
                                   (float)*(undefined8 *)(puVar4 + 0xe) * fVar36 + fStack_118;
                      fStack_114 = (float)((ulong)*(undefined8 *)(puVar4 + 10) >> 0x20) * fVar47 +
                                   (float)((ulong)*(undefined8 *)(puVar4 + 0xe) >> 0x20) * fVar36 +
                                   fStack_114;
                      fStack_110 = fVar48;
                      (**(code **)(*plVar13 + 0x18))(plVar13,uVar28,&fStack_118);
                    }
                    fVar46 = (float)uVar26;
                    fVar36 = (float)uVar18;
                    if (plVar11 != (long *)0x0) {
                      fVar47 = (float)(**(code **)(*plVar11 + 0x10))(plVar11,uVar28);
                      fStack_118 = fVar54 * fVar36 + fVar47 * fStack_320 + fVar46 * fVar50;
                      fVar48 = fVar51 * fVar36 + fVar47 * fVar52 + fVar46 * fVar53;
                      fStack_110 = fVar55 * fVar36 + fVar47 * fVar49 + fVar46 * fVar57;
                      fVar36 = 1.0 / SQRT(fStack_110 * fStack_110 +
                                          fStack_118 * fStack_118 + fVar48 * fVar48);
                      uVar18 = (ulong)(uint)fVar36;
                      fStack_118 = fStack_118 * fVar36;
                      uVar26 = (ulong)(uint)fStack_118;
                      fVar48 = fVar48 * fVar36;
                      fStack_110 = fStack_110 * fVar36;
                      fStack_114 = fVar48;
                      (**(code **)(*plVar11 + 0x18))(plVar11,uVar28,&fStack_118);
                    }
                    fVar46 = (float)uVar26;
                    fVar36 = (float)uVar18;
                    if (plVar19 == (long *)0x0) {
                      if (plStack_350 != (long *)0x0) {
                        fVar47 = (float)(**(code **)(*plStack_350 + 0x10))(plStack_350,uVar28);
                        fStack_118 = fVar54 * fVar36 + fVar47 * fStack_320 + fVar46 * fVar50;
                        fVar48 = fVar51 * fVar36 + fVar47 * fVar52 + fVar46 * fVar53;
                        fStack_110 = fVar55 * fVar36 + fVar47 * fVar49 + fVar46 * fVar57;
                        fVar36 = 1.0 / SQRT(fStack_110 * fStack_110 +
                                            fStack_118 * fStack_118 + fVar48 * fVar48);
                        uVar18 = (ulong)(uint)fVar36;
                        fStack_118 = fStack_118 * fVar36;
                        uVar26 = (ulong)(uint)fStack_118;
                        fVar48 = fVar48 * fVar36;
                        fStack_110 = fStack_110 * fVar36;
                        fStack_114 = fVar48;
                        (**(code **)(*plStack_350 + 0x18))(plStack_350,uVar28,&fStack_118);
                      }
                    }
                    else {
                      fVar47 = (float)(**(code **)(*plVar19 + 0x10))(plVar19,uVar28);
                      fStack_118 = fVar54 * fVar36 + fVar47 * fStack_320 + fVar46 * fVar50;
                      fStack_114 = fVar51 * fVar36 + fVar47 * fVar52 + fVar46 * fVar53;
                      fStack_110 = fVar55 * fVar36 + fVar47 * fVar49 + fVar46 * fVar57;
                      fVar36 = 1.0 / SQRT(fStack_110 * fStack_110 +
                                          fStack_118 * fStack_118 + fStack_114 * fStack_114);
                      uVar18 = (ulong)(uint)fVar36;
                      fStack_118 = fStack_118 * fVar36;
                      uVar26 = (ulong)(uint)fStack_118;
                      fStack_114 = fStack_114 * fVar36;
                      fStack_110 = fStack_110 * fVar36;
                      afStack_10c[0] = fVar48;
                      (**(code **)(*plVar19 + 0x18))(plVar19,uVar28,&fStack_118);
                    }
                  }
                  uVar34 = uVar34 + 1;
                } while (uVar34 < puVar4[1]);
              }
            }
          }
        }
        if (plStack_350 != (long *)0x0) {
          (**(code **)(*plStack_350 + 8))();
        }
        if (plStack_138 != (long *)0x0) {
          (**(code **)(*plStack_138 + 8))();
        }
        if (plStack_130 != (long *)0x0) {
          (**(code **)(*plStack_130 + 8))();
        }
        if (plStack_128 != (long *)0x0) {
          (**(code **)(*plStack_128 + 8))();
        }
        if (uStack_120 != (long *)0x0) {
          (**(code **)(*uStack_120 + 8))();
        }
        if (uStack_2f0 != 0) {
          __ZdlPv();
        }
      }
      puVar31 = (ulong *)0x1;
      if ((2 < (uint)fVar20) && ((int)param_4[0x1d] == 0)) {
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        iVar21 = *(int *)((long)param_4 + 0xec);
        if (iVar21 == 0) {
          fVar36 = 0.0;
          do {
            fStack_114 = (float)((int)fVar36 + 1);
            fStack_110 = (float)((int)fVar36 + 2);
            fStack_118 = fVar36;
            FUN_10a7a7320(&uStack_2f0,uStack_2e8,&fStack_118,afStack_10c);
            fVar46 = (float)((int)fVar36 + 5);
            fVar36 = (float)((int)fVar36 + 3);
          } while ((uint)fVar46 < (uint)fVar20);
LAB_10a7949a0:
          if (uStack_2f0 != uStack_2e8) {
            uVar18 = uStack_2e8 - uStack_2f0;
            if ((uint)fVar20 >> 0x10 == 0) {
              *(undefined4 *)(param_4 + 0x1d) = 1;
              uVar22 = (long)uVar18 >> 1;
              uVar26 = param_4[5];
              uVar34 = param_4[6] - uVar26;
              if (uVar22 < uVar34 || uVar22 - uVar34 == 0) {
                if (uVar22 < uVar34) {
                  param_4[6] = uVar26 + uVar22;
                }
              }
              else {
                func_0x000107c27d58(puVar17,uVar22 - uVar34);
                uVar26 = *puVar17;
                uVar18 = uStack_2e8 - uStack_2f0;
              }
              if (uStack_2e8 != uStack_2f0) {
                uVar22 = 0;
                uVar18 = (long)uVar18 >> 2;
                if (uVar18 < 2) {
                  uVar18 = 1;
                }
                do {
                  *(short *)(uVar26 + uVar22 * 2) = (short)*(undefined4 *)(uStack_2f0 + uVar22 * 4);
                  uVar22 = uVar22 + 1;
                } while (uVar18 != uVar22);
              }
            }
            else {
              *(undefined4 *)(param_4 + 0x1d) = 2;
              uVar22 = param_4[5];
              uVar26 = param_4[6];
              uVar34 = uVar26 - uVar22;
              if (uVar18 < uVar34 || uVar18 - uVar34 == 0) {
                if (uVar18 < uVar34) {
                  uVar26 = uVar22 + uVar18;
                  param_4[6] = uVar26;
                }
              }
              else {
                func_0x000107c27d58(puVar17,uVar18 - uVar34);
                uVar22 = param_4[5];
                uVar26 = param_4[6];
              }
              _memcpy(uVar22,uStack_2f0,uVar26 - uVar22);
            }
            *(undefined4 *)((long)param_4 + 0xec) = 0;
          }
          if (uStack_2f0 != 0) {
            uStack_2e8 = uStack_2f0;
            __ZdlPv(uStack_2f0);
          }
        }
        else {
          if (iVar21 == 1) {
            fVar36 = 0.0;
            do {
              fStack_110 = (float)((int)fVar36 + 2);
              if (((uint)fVar36 & 1) == 0) {
                fStack_118 = fVar36;
                fStack_114 = (float)((uint)fVar36 | 1);
                FUN_10a7a7320(&uStack_2f0,uStack_2e8,&fStack_118,afStack_10c);
                fVar36 = (float)((uint)fVar36 | 1);
              }
              else {
                fStack_118 = (float)((int)fVar36 + 1U);
                fStack_114 = fVar36;
                FUN_10a7a7320(&uStack_2f0,uStack_2e8,&fStack_118,afStack_10c);
                fVar36 = (float)((int)fVar36 + 1U);
              }
            } while (fVar36 != (float)((int)fVar20 - 2U));
            goto LAB_10a7949a0;
          }
          if (iVar21 == 2) {
            fVar36 = 2.8026e-45;
            do {
              fStack_114 = (float)((int)fVar36 - 1);
              fStack_118 = 0.0;
              fStack_110 = fVar36;
              FUN_10a7a7320(&uStack_2f0,uStack_2e8,&fStack_118,afStack_10c);
              fVar36 = (float)((int)fVar36 + 1);
            } while (fVar20 != fVar36);
            goto LAB_10a7949a0;
          }
        }
        puVar31 = (ulong *)0x1;
      }
    }
    else {
      uVar25 = *(uint *)(param_3 + 3);
      if ((uVar25 == 0) || (fVar20 == 0.0)) goto LAB_10a793f80;
      FUN_10a79503c(&uStack_2f0,param_3);
      uVar18 = uStack_2e8 - uStack_2f0;
      if (uVar18 == uVar25) {
        uVar26 = uVar18 * uVar34;
        uVar22 = param_5[1] - *param_5;
        if (uVar26 < uVar22 || uVar26 - uVar22 == 0) {
          if (uVar26 < uVar22) {
            param_5[1] = *param_5 + uVar26;
          }
        }
        else {
          func_0x0001092bf294(param_5,uVar26 - uVar22);
        }
        lVar29 = 0;
        uVar26 = uVar34;
        do {
          _memcpy(*param_5 + lVar29,uStack_2f0,uVar18);
          lVar29 = lVar29 + uVar18;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
        lVar29 = *param_3;
        lVar16 = param_3[1];
        if (lVar29 == lVar16) {
          bVar15 = true;
        }
        else {
          do {
            uVar26 = param_1[0x1f];
            uVar22 = param_1[0x20];
            if (uVar26 == uVar22) {
LAB_10a793e58:
              if (uVar26 != uVar22 && uVar26 != 0) {
                uVar6 = *(ushort *)(lVar29 + 0x20);
                if (uVar6 - 7 < 3 || uVar6 == 3) {
                  uVar22 = (ulong)(uint)(int)(short)uVar6;
                  FUN_10a0f7058();
                  uVar24 = (uint)(uVar22 >> 2);
                  if ((uVar24 != 0) &&
                     ((uint)(*(int *)(lVar29 + 0x28) + *(int *)(lVar29 + 0x24)) <= uVar25)) {
                    fStack_118 = 0.0;
                    fStack_114 = 0.0;
                    fStack_110 = 0.0;
                    afStack_10c[0] = 0.0;
                    puVar30 = param_1;
                    FUN_10a794d70(param_1,uVar26,&fStack_118,&lStack_308);
                    if (((ulong)puVar30 & 1) != 0) {
                      lVar33 = 0;
                      lVar35 = 0;
                      uVar22 = 0;
                      uVar2 = *(uint *)(uVar26 + 0x28);
                      if (uVar24 <= *(uint *)(uVar26 + 0x28)) {
                        uVar2 = uVar24;
                      }
                      do {
                        if ((ulong)(lStack_300 - lStack_308 >> 4) <= uVar22) goto LAB_10a794af4;
                        _memcpy(*param_5 + (ulong)*(uint *)(lVar29 + 0x24) + lVar35,
                                lStack_308 + lVar33,(ulong)uVar2 << 2);
                        uVar22 = uVar22 + 1;
                        lVar35 = lVar35 + uVar18;
                        lVar33 = lVar33 + 0x10;
                      } while (uVar34 != uVar22);
                      goto LAB_10a793f28;
                    }
                  }
                }
                bVar15 = false;
                goto LAB_10a793f6c;
              }
            }
            else {
              do {
                if (*(long *)(uVar26 + 0x18) == *(long *)(lVar29 + 0x18)) goto LAB_10a793e58;
                uVar26 = uVar26 + 0x38;
              } while (uVar26 != uVar22);
            }
LAB_10a793f28:
            lVar29 = lVar29 + 0x30;
          } while (lVar29 != lVar16);
          bVar15 = true;
        }
LAB_10a793f6c:
        if (uStack_2f0 != 0) {
          uStack_2e8 = uStack_2f0;
          __ZdlPv();
        }
        if (bVar15) goto LAB_10a793f80;
      }
      else if (uStack_2f0 != 0) {
        uStack_2e8 = uStack_2f0;
        __ZdlPv();
      }
LAB_10a7940b8:
      puVar31 = (ulong *)0x0;
    }
    if (lStack_308 != 0) {
      lStack_300 = lStack_308;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar31;
  }
  ___stack_chk_fail();
LAB_10a794af0:
  FUN_10ab725fc();
LAB_10a794af4:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a794af8);
  (*pcVar14)();
}



/* Entry: 10a793634; end: 10a794c5f;  */

/* WARNING: Removing unreachable block (ram,0x00010a793a5c) */

undefined8
FUN_10a793634(ulong *param_1,undefined8 param_2,long *param_3,ulong *param_4,long *param_5)

{
  float *pfVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  float fVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong *puVar26;
  long lVar27;
  ulong *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  long *plStack_310;
  float fStack_2e0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  uint uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined4 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [3];
  long lStack_c0;
  long lStack_b8;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ab46d7c(&uStack_2b0);
  uVar13 = param_4[2];
  *(undefined1 *)(param_4 + 1) = (undefined1)uStack_2a8;
  if (uVar13 != 0) {
    param_4[3] = uVar13;
    __ZdlPv();
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
  }
  puVar28 = param_4 + 5;
  param_4[3] = uStack_298;
  param_4[2] = uStack_2a0;
  param_4[4] = uStack_290;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_2a0 = 0;
  if (*puVar28 != 0) {
    param_4[6] = *puVar28;
    __ZdlPv();
    *puVar28 = 0;
    param_4[6] = 0;
    param_4[7] = 0;
  }
  param_4[6] = uStack_280;
  param_4[5] = uStack_288;
  param_4[7] = uStack_278;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_288 = 0;
  FUN_10a3aa594(param_4 + 8);
  param_4[9] = uStack_268;
  param_4[8] = uStack_270;
  param_4[10] = uStack_260;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_270 = 0;
  FUN_10a0d8804(param_4 + 0xb);
  param_4[0xc] = uStack_250;
  param_4[0xb] = uStack_258;
  uVar13 = param_4[0xe];
  param_4[0xd] = uStack_248;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_258 = 0;
  if (uVar13 != 0) {
    param_4[0xf] = uVar13;
    __ZdlPv();
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
  }
  param_4[0xf] = uStack_238;
  param_4[0xe] = uStack_240;
  param_4[0x10] = uStack_230;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  FUN_10a4af174(param_4 + 0x11);
  param_4[0x12] = uStack_220;
  param_4[0x11] = uStack_228;
  param_4[0x13] = uStack_218;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_228 = 0;
  FUN_10a559184(param_4 + 0x14);
  param_4[0x15] = uStack_208;
  param_4[0x14] = uStack_210;
  uVar13 = param_4[0x17];
  param_4[0x16] = uStack_200;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_210 = 0;
  if (uVar13 != 0) {
    param_4[0x18] = uVar13;
    __ZdlPv();
    param_4[0x17] = 0;
    param_4[0x18] = 0;
    param_4[0x19] = 0;
  }
  uVar13 = param_4[0x1a];
  param_4[0x18] = uStack_1f0;
  param_4[0x17] = uStack_1f8;
  param_4[0x19] = uStack_1e8;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1f8 = 0;
  if (uVar13 != 0) {
    param_4[0x1b] = uVar13;
    __ZdlPv();
    param_4[0x1a] = 0;
    param_4[0x1b] = 0;
    param_4[0x1c] = 0;
  }
  uVar22 = uStack_1d0;
  uVar19 = uStack_1d8;
  uVar13 = uStack_1e0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1e0 = 0;
  param_4[0x1c] = uVar22;
  param_4[0x1d] = uStack_1c8;
  puVar26 = param_4 + 0x1e;
  *(uint *)puVar26 = uStack_1c0;
  param_4[0x1b] = uVar19;
  param_4[0x1a] = uVar13;
  if (param_4 != &uStack_2b0) {
    FUN_10a1903c4(param_4 + 0x1f,lStack_1b8,lStack_1b0,
                  (lStack_1b0 - lStack_1b8 >> 3) * 0x6db6db6db6db6db7);
  }
  param_4[0x23] = uStack_198;
  param_4[0x22] = uStack_1a0;
  param_4[0x25] = uStack_188;
  param_4[0x24] = uStack_190;
  param_4[0x26] = uStack_180;
  param_4[0x27] = uStack_178;
  *(undefined4 *)(param_4 + 0x28) = uStack_170;
  *(undefined4 *)((long)param_4 + 0x14c) = uStack_164;
  *(undefined8 *)((long)param_4 + 0x144) = uStack_16c;
  param_4[0x2b] = uStack_158;
  param_4[0x2a] = uStack_160;
  *(undefined1 *)(param_4 + 0x2d) = uStack_148;
  *(undefined4 *)((long)param_4 + 0x16c) = uStack_144;
  *(undefined1 *)(param_4 + 0x2e) = uStack_140;
  if (param_4[0x2f] != 0) {
    param_4[0x30] = param_4[0x2f];
    __ZdlPv();
    param_4[0x2f] = 0;
    param_4[0x30] = 0;
    param_4[0x31] = 0;
  }
  uVar13 = uStack_120;
  param_4[0x2f] = uStack_138;
  param_4[0x31] = uStack_128;
  param_4[0x30] = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  plVar14 = (long *)param_4[0x32];
  param_4[0x32] = uVar13;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  *(undefined4 *)(param_4 + 0x35) = uStack_108;
  param_4[0x34] = uStack_110;
  param_4[0x33] = uStack_118;
  func_0x00010ab46e34(&uStack_2b0);
  param_5[1] = *param_5;
  uVar21 = (uint)param_1[0x1e];
  if (uVar21 == 0) {
    uVar25 = 0;
  }
  else {
    uVar13 = param_1[2];
    uVar19 = param_1[3];
    FUN_10a177570(puVar26,param_2);
    uVar22 = 0;
    if ((ulong)uVar21 != 0) {
      uVar22 = (uVar19 - uVar13) / (ulong)uVar21;
    }
    param_4[0x1d] = param_1[0x1d];
    uVar29 = uVar22 & 0xffffffff;
    FUN_10ab4a154(param_4,uVar29);
    lStack_2c8 = 0;
    lStack_2c0 = 0;
    uStack_2b8 = 0;
    uVar13 = param_4[0x1f];
    uVar19 = param_4[0x20];
    if (uVar19 - uVar13 != 0) {
      uVar24 = 0;
      auVar34 = NEON_fmov(0x3f800000,4);
      do {
        uVar23 = param_4[0x1f];
        uVar18 = ((long)(param_4[0x20] - uVar23) >> 3) * 0x6db6db6db6db6db7;
        if (uVar18 < uVar24 || uVar18 - uVar24 == 0) {
          FUN_10ab725fc();
          goto LAB_10a794af4;
        }
        if (uVar23 == 0) goto LAB_10a7940b8;
        func_0x000107c2b07c(&uStack_2b0,&UNK_10f67630b);
        lVar31 = uVar23 + uVar24 * 0x38;
        if (*(long *)(lVar31 + 0x18) == uStack_298) {
          bVar12 = true;
        }
        else {
          func_0x000107c2b07c(&fStack_d8,&UNK_10f67631b);
          bVar12 = *(long *)(lVar31 + 0x18) == lStack_c0;
        }
        if ((long)uStack_2a0 < 0) {
          __ZdlPv(uStack_2b0);
        }
        if (!bVar12) {
          FUN_10ab6e9d8();
          auVar35 = ZEXT816(0x3f800000) << 0x40;
          if (*(long *)(lVar31 + 0x18) != lRam0000000113835758) {
            FUN_10ab6eb18();
            auVar35._8_8_ = 0x3f80000000000000;
            auVar35._0_8_ = 0x3f800000;
            if (*(long *)(lVar31 + 0x18) != lRam0000000113835798) {
              FUN_10ab6ec58();
              lVar30 = -(ulong)(*(long *)(lVar31 + 0x18) == lRam00000001138357d8);
              auVar35[0] = (byte)lVar30 & auVar34[0];
              bVar36 = (byte)((ulong)lVar30 >> 8);
              auVar35[1] = bVar36 & auVar34[1];
              bVar37 = (byte)((ulong)lVar30 >> 0x10);
              auVar35[2] = bVar37 & auVar34[2];
              bVar38 = (byte)((ulong)lVar30 >> 0x18);
              auVar35[3] = bVar38 & auVar34[3];
              bVar39 = (byte)((ulong)lVar30 >> 0x20);
              auVar35[4] = bVar39 & auVar34[4];
              bVar40 = (byte)((ulong)lVar30 >> 0x28);
              auVar35[5] = bVar40 & auVar34[5];
              bVar41 = (byte)((ulong)lVar30 >> 0x30);
              auVar35[6] = bVar41 & auVar34[6];
              bVar42 = (byte)((ulong)lVar30 >> 0x38);
              auVar35[7] = bVar42 & auVar34[7];
              auVar35[8] = (byte)lVar30 & auVar34[8];
              auVar35[9] = bVar36 & auVar34[9];
              auVar35[10] = bVar37 & auVar34[10];
              auVar35[0xb] = bVar38 & auVar34[0xb];
              auVar35[0xc] = bVar39 & auVar34[0xc];
              auVar35[0xd] = bVar40 & auVar34[0xd];
              auVar35[0xe] = bVar41 & auVar34[0xe];
              auVar35[0xf] = bVar42 & auVar34[0xf];
            }
          }
          uStack_2a8 = auVar35._8_8_;
          uStack_2b0 = auVar35._0_8_;
          uVar23 = param_1[0x1f];
          uVar18 = param_1[0x20];
          if (uVar23 == uVar18) {
LAB_10a793b08:
            if ((uVar23 == uVar18) || (uVar23 == 0)) goto LAB_10a793b2c;
            puVar15 = param_1;
            FUN_10a794d70(param_1,uVar23,&uStack_2b0,&lStack_2c8);
            if ((int)puVar15 == 0) goto LAB_10a7940b8;
          }
          else {
            do {
              if (*(long *)(uVar23 + 0x18) == *(long *)(lVar31 + 0x18)) goto LAB_10a793b08;
              uVar23 = uVar23 + 0x38;
            } while (uVar23 != uVar18);
LAB_10a793b2c:
            FUN_10a794c60(&lStack_2c8,uVar29,&uStack_2b0);
          }
          uVar20 = (uint)*puVar26;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = 0;
            if ((ulong)uVar20 != 0) {
              uVar21 = (uint)((param_4[3] - param_4[2]) / (ulong)uVar20);
            }
          }
          uVar20 = (uint)((ulong)(lStack_2c0 - lStack_2c8) >> 4);
          if (uVar20 <= uVar21) {
            uVar21 = uVar20;
          }
          uVar23 = (ulong)uVar21;
          iVar17 = *(int *)(lVar31 + 0x28);
          if (iVar17 < 3) {
            if (iVar17 == 1) {
              func_0x00010ab507d0(&fStack_d8,param_4,lVar31);
              plVar14 = (long *)CONCAT44(fStack_d4,fStack_d8);
              if (plVar14 == (long *)0x0) goto LAB_10a7940b8;
              if (uVar21 != 0) {
                uVar18 = 0;
                do {
                  if ((ulong)(lStack_2c0 - lStack_2c8 >> 4) <= uVar18) goto LAB_10a794af4;
                  uStack_e0 = (long *)CONCAT44(uStack_e0._4_4_,
                                               *(undefined4 *)(lStack_2c8 + uVar18 * 0x10));
                  (**(code **)(*plVar14 + 0x18))(plVar14,uVar18,&uStack_e0);
                  uVar18 = uVar18 + 1;
                } while (uVar18 != uVar23);
              }
            }
            else {
              if (iVar17 != 2) goto LAB_10a7940b8;
              func_0x00010ab50ad8(&fStack_d8,param_4,lVar31);
              plVar14 = (long *)CONCAT44(fStack_d4,fStack_d8);
              if (plVar14 == (long *)0x0) goto LAB_10a7940b8;
              if (uVar21 != 0) {
                uVar18 = 0;
                lVar31 = 4;
                do {
                  if ((ulong)(lStack_2c0 - lStack_2c8 >> 4) <= uVar18) goto LAB_10a794af4;
                  uStack_e0 = (long *)CONCAT44(*(undefined4 *)(lStack_2c8 + lVar31),
                                               ((undefined4 *)(lStack_2c8 + lVar31))[-1]);
                  (**(code **)(*plVar14 + 0x18))(plVar14,uVar18,&uStack_e0);
                  uVar18 = uVar18 + 1;
                  lVar31 = lVar31 + 0x10;
                } while (uVar23 != uVar18);
              }
            }
          }
          else if (iVar17 == 3) {
            FUN_10ab4c544(&uStack_e0,param_4,lVar31);
            plVar14 = uStack_e0;
            if (uStack_e0 == (long *)0x0) goto LAB_10a7940b8;
            if (uVar21 != 0) {
              uVar18 = 0;
              lVar31 = 4;
              do {
                if ((ulong)(lStack_2c0 - lStack_2c8 >> 4) <= uVar18) goto LAB_10a794af4;
                pfVar1 = (float *)(lStack_2c8 + lVar31);
                fStack_d8 = pfVar1[-1];
                fStack_d4 = *pfVar1;
                fStack_d0 = pfVar1[1];
                (**(code **)(*plVar14 + 0x18))(plVar14,uVar18,&fStack_d8);
                uVar18 = uVar18 + 1;
                lVar31 = lVar31 + 0x10;
              } while (uVar23 != uVar18);
            }
          }
          else {
            if (iVar17 != 4) goto LAB_10a7940b8;
            func_0x00010ab4c84c(&fStack_d8,param_4,lVar31);
            plVar14 = (long *)CONCAT44(fStack_d4,fStack_d8);
            if (plVar14 == (long *)0x0) goto LAB_10a7940b8;
            if (uVar21 != 0) {
              uVar18 = 0;
              do {
                if ((ulong)(lStack_2c0 - lStack_2c8 >> 4) <= uVar18) goto LAB_10a794af4;
                (**(code **)(*plVar14 + 0x18))(plVar14,uVar18,lStack_2c8 + uVar18 * 0x10);
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar23);
            }
          }
          (**(code **)(*plVar14 + 8))(plVar14);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != ((long)(uVar19 - uVar13) >> 3) * 0x6db6db6db6db6db7);
    }
    fVar16 = (float)uVar22;
    if ((param_3 == (long *)0x0) || (*(char *)((long)param_3 + 0x1c) != '\x01')) {
LAB_10a793f80:
      if (param_4 != param_1) {
        FUN_10a0cf2cc(puVar28,param_1[5],param_1[6],param_1[6] - param_1[5]);
      }
      uVar21 = 4;
      if ((int)param_4[0x1d] != 2) {
        uVar21 = 0;
      }
      uVar20 = 2;
      if ((int)param_4[0x1d] != 1) {
        uVar20 = uVar21;
      }
      uVar22 = (ulong)uVar20;
      uVar13 = param_1[0x1a];
      uVar19 = param_1[0x1b];
      if ((uVar13 != uVar19) && (uVar20 != 0)) {
        uVar13 = param_4[6] - param_4[5] >>
                 (LZCOUNT(((uVar22 & 0x5555555555555555) >> 1 |
                          ((uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1) << 2) << 0x3c) & 0x3fU);
        fStack_d8 = (float)((uint)fStack_d8 & 0xffffff00);
        func_0x0001074b2d2c(&uStack_2b0,uVar13,&fStack_d8);
        puVar4 = (uint *)param_1[0x1b];
        for (puVar3 = (uint *)param_1[0x1a]; puVar3 != puVar4; puVar3 = puVar3 + 0x1a) {
          if ((puVar3[2] != 0) && (puVar3[1] != 0)) {
            uVar19 = 0;
            do {
              uVar29 = uVar19 + *puVar3;
              if (uVar29 < uVar13) {
                if (uStack_2a8 <= uVar29) goto LAB_10a794af4;
                uVar24 = 1L << (uVar29 & 0x3f);
                uVar23 = *(ulong *)(uStack_2b0 + (uVar29 >> 6) * 8);
                if ((uVar23 & uVar24) == 0) {
                  *(ulong *)(uStack_2b0 + (uVar29 >> 6) * 8) = uVar23 | uVar24;
                  lVar31 = uVar29 * uVar22;
                  uVar29 = param_4[5];
                  if ((int)param_4[0x1d] == 1) {
                    *(short *)(uVar29 + lVar31) = *(short *)(uVar29 + lVar31) + (short)puVar3[2];
                  }
                  else {
                    *(uint *)(uVar29 + lVar31) = *(int *)(uVar29 + lVar31) + puVar3[2];
                  }
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < puVar3[1]);
          }
        }
        if (uStack_2b0 != 0) {
          __ZdlPv();
        }
        uVar13 = param_1[0x1a];
        uVar19 = param_1[0x1b];
      }
      if (uVar13 != uVar19) {
        uVar21 = (uint)param_4[0x22];
        if (uVar21 == 0xffffffff) {
          lVar31 = 0;
        }
        else {
          uVar13 = ((long)(param_4[0x20] - param_4[0x1f]) >> 3) * 0x6db6db6db6db6db7;
          if (uVar13 < uVar21 || uVar13 - uVar21 == 0) goto LAB_10a794af0;
          lVar31 = param_4[0x1f] + (ulong)uVar21 * 0x38;
        }
        uVar21 = *(uint *)((long)param_4 + 0x114);
        if (uVar21 == 0xffffffff) {
          lVar30 = 0;
        }
        else {
          uVar13 = ((long)(param_4[0x20] - param_4[0x1f]) >> 3) * 0x6db6db6db6db6db7;
          if (uVar13 < uVar21 || uVar13 - uVar21 == 0) goto LAB_10a794af0;
          lVar30 = param_4[0x1f] + (ulong)uVar21 * 0x38;
        }
        uVar21 = (uint)param_4[0x23];
        if (uVar21 == 0xffffffff) {
          lVar27 = 0;
        }
        else {
          uVar13 = ((long)(param_4[0x20] - param_4[0x1f]) >> 3) * 0x6db6db6db6db6db7;
          if (uVar13 < uVar21 || uVar13 - uVar21 == 0) goto LAB_10a794af0;
          lVar27 = param_4[0x1f] + (ulong)uVar21 * 0x38;
        }
        uVar21 = (uint)*puVar26;
        if (uVar21 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          if ((ulong)uVar21 != 0) {
            uVar13 = (param_4[3] - param_4[2]) / (ulong)uVar21;
          }
          uVar13 = uVar13 & 0xffffffff;
        }
        fStack_d8 = (float)((uint)fStack_d8 & 0xffffff00);
        func_0x0001074b2d2c(&uStack_2b0,uVar13,&fStack_d8);
        if (lVar31 == 0) {
          uStack_e0 = (long *)0x0;
LAB_10a794228:
          plStack_e8 = (long *)0x0;
          if (lVar30 != 0) goto LAB_10a7941f0;
LAB_10a794230:
          plStack_f0 = (long *)0x0;
          if (lVar27 == 0) goto LAB_10a794238;
LAB_10a794204:
          iVar17 = *(int *)(lVar27 + 0x28);
          if (iVar17 == 4) {
            func_0x00010ab4c84c(&plStack_f8,param_4,lVar27);
            iVar17 = *(int *)(lVar27 + 0x28);
          }
          else {
            plStack_f8 = (long *)0x0;
          }
          if (iVar17 == 3) {
            FUN_10ab4c544(&plStack_100,param_4,lVar27);
            plStack_310 = plStack_100;
          }
          else {
            plStack_310 = (long *)0x0;
          }
        }
        else {
          iVar17 = *(int *)(lVar31 + 0x28);
          if (iVar17 == 3) {
            FUN_10ab4c544(&uStack_e0,param_4,lVar31);
            iVar17 = *(int *)(lVar31 + 0x28);
          }
          else {
            uStack_e0 = (long *)0x0;
          }
          if (iVar17 != 2) goto LAB_10a794228;
          func_0x00010ab50ad8(&plStack_e8,param_4,lVar31);
          if (lVar30 == 0) goto LAB_10a794230;
LAB_10a7941f0:
          FUN_10ab4c544(&plStack_f0,param_4,lVar30);
          if (lVar27 != 0) goto LAB_10a794204;
LAB_10a794238:
          plStack_310 = (long *)0x0;
          plStack_f8 = (long *)0x0;
        }
        plVar10 = uStack_e0;
        plVar9 = plStack_e8;
        plVar8 = plStack_f0;
        plVar14 = plStack_f8;
        puVar4 = (uint *)param_1[0x1b];
        for (puVar3 = (uint *)param_1[0x1a]; puVar3 != puVar4; puVar3 = puVar3 + 0x1a) {
          fVar33 = (float)puVar3[10];
          fVar43 = (float)puVar3[0xb];
          fVar44 = (float)puVar3[0xc];
          if ((((((fVar33 != 1.0) || (fVar43 != 0.0)) || (fVar44 != 0.0)) ||
               (((float)puVar3[0xd] != 0.0 || ((float)puVar3[0xe] != 0.0)))) ||
              ((((float)puVar3[0xf] != 1.0 ||
                (((float)puVar3[0x10] != 0.0 || ((float)puVar3[0x11] != 0.0)))) ||
               ((float)puVar3[0x12] != 0.0)))) ||
             (((((float)puVar3[0x13] != 0.0 || ((float)puVar3[0x14] != 1.0)) ||
               ((float)puVar3[0x15] != 0.0)) ||
              ((((float)puVar3[0x16] != 0.0 || ((float)puVar3[0x17] != 0.0)) ||
               (((float)puVar3[0x18] != 0.0 || ((float)puVar3[0x19] != 1.0)))))))) {
            fVar51 = (float)puVar3[0xe];
            fVar45 = (float)puVar3[0xf];
            fVar46 = (float)puVar3[0x10];
            fVar48 = (float)puVar3[0x12];
            fVar50 = (float)puVar3[0x13];
            fVar52 = (float)puVar3[0x14];
            fStack_2e0 = -(fVar50 * fVar46) + fVar52 * fVar45;
            fVar53 = -(fVar50 * fVar44) + fVar52 * fVar43;
            fVar47 = -(fVar45 * fVar44) + fVar46 * fVar43;
            if (ABS(-(fVar51 * fVar53) + fStack_2e0 * fVar33 + fVar47 * fVar48) <= 1e-06) {
              fVar50 = 0.0;
              fVar54 = 1.0;
              fVar47 = 0.0;
              fVar52 = 0.0;
              fVar48 = 1.0;
              fVar51 = 0.0;
              fVar46 = 0.0;
              fVar49 = 0.0;
              fStack_2e0 = 1.0;
            }
            else {
              fVar54 = -(fVar43 * (-(fVar46 * fVar48) + fVar52 * fVar51)) +
                       (-(fVar46 * fVar50) + fVar52 * fVar45) * fVar33 +
                       (fVar48 * -fVar45 + fVar50 * fVar51) * fVar44;
              fVar6 = fVar48 * fVar44;
              fVar7 = fVar48 * fVar43;
              fStack_2e0 = fStack_2e0 / fVar54;
              fVar44 = -(fVar33 * fVar46) - fVar44 * -fVar51;
              fVar43 = fVar43 * -fVar51;
              fVar49 = (-(fVar51 * fVar52) - -(fVar48 * fVar46)) / fVar54;
              fVar46 = (-(fVar48 * fVar45) + fVar50 * fVar51) / fVar54;
              fVar51 = -fVar53 / fVar54;
              fVar48 = (-fVar6 + fVar52 * fVar33) / fVar54;
              fVar52 = (-(fVar33 * fVar50) - -fVar7) / fVar54;
              fVar47 = fVar47 / fVar54;
              fVar50 = fVar44 / fVar54;
              fVar54 = (fVar43 + fVar45 * fVar33) / fVar54;
            }
            uVar19 = (ulong)(uint)fVar44;
            uVar13 = (ulong)(uint)fVar43;
            uVar21 = 4;
            if ((int)param_1[0x1d] != 2) {
              uVar21 = 0;
            }
            uVar20 = 2;
            if ((int)param_1[0x1d] != 1) {
              uVar20 = uVar21;
            }
            if ((uVar20 != 0) &&
               (uVar22 = ((ulong)puVar3[1] + (ulong)*puVar3) * (ulong)uVar20,
               uVar22 < param_1[6] - param_1[5] || uVar22 - (param_1[6] - param_1[5]) == 0)) {
              uVar21 = (uint)param_1[0x1e];
              if (uVar21 == 0) {
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                if ((ulong)uVar21 != 0) {
                  uVar22 = (param_1[3] - param_1[2]) / (ulong)uVar21;
                }
                uVar22 = uVar22 & 0xffffffff;
              }
              if (puVar3[1] != 0) {
                uVar29 = 0;
                do {
                  fVar43 = (float)uVar19;
                  fVar33 = (float)uVar13;
                  lVar31 = (uVar29 + *puVar3) * (ulong)uVar20;
                  if ((int)param_1[0x1d] == 1) {
                    uVar24 = (ulong)*(ushort *)(param_1[5] + lVar31) + (ulong)puVar3[2];
                    if (uVar22 <= uVar24 || uVar24 >> 0x10 != 0) break;
                  }
                  else {
                    uVar24 = (ulong)*(uint *)(param_1[5] + lVar31) + (ulong)puVar3[2];
                    if (uVar22 <= uVar24) break;
                  }
                  if (uStack_2a8 <= uVar24) goto LAB_10a794af4;
                  uVar23 = 1L << (uVar24 & 0x3f);
                  uVar18 = *(ulong *)(uStack_2b0 + (uVar24 >> 6) * 8);
                  if ((uVar18 & uVar23) == 0) {
                    *(ulong *)(uStack_2b0 + (uVar24 >> 6) * 8) = uVar18 | uVar23;
                    if (plVar10 == (long *)0x0) {
                      if (plVar9 != (long *)0x0) {
                        fVar43 = (float)(**(code **)(*plVar9 + 0x10))(plVar9,uVar24);
                        uVar19 = *(ulong *)(puVar3 + 0x16);
                        fStack_d8 = (float)*(undefined8 *)(puVar3 + 0x12) * 0.0 + (float)uVar19;
                        fStack_d4 = (float)((ulong)*(undefined8 *)(puVar3 + 0x12) >> 0x20) * 0.0 +
                                    (float)(uVar19 >> 0x20);
                        uVar13 = CONCAT44(fStack_d4,fStack_d8);
                        fStack_d8 = (float)*(undefined8 *)(puVar3 + 10) * fVar43 +
                                    (float)*(undefined8 *)(puVar3 + 0xe) * fVar33 + fStack_d8;
                        fStack_d4 = (float)((ulong)*(undefined8 *)(puVar3 + 10) >> 0x20) * fVar43 +
                                    (float)((ulong)*(undefined8 *)(puVar3 + 0xe) >> 0x20) * fVar33 +
                                    fStack_d4;
                        (**(code **)(*plVar9 + 0x18))(plVar9,uVar24,&fStack_d8);
                      }
                    }
                    else {
                      fVar44 = (float)(**(code **)(*plVar10 + 0x10))(plVar10,uVar24);
                      fVar45 = fVar44 * (float)puVar3[0xc] + fVar33 * (float)puVar3[0x10] +
                               fVar43 * (float)puVar3[0x14] + (float)puVar3[0x18];
                      uVar19 = *(ulong *)(puVar3 + 0x16);
                      fStack_d8 = (float)*(undefined8 *)(puVar3 + 0x12) * fVar43 + (float)uVar19;
                      fStack_d4 = (float)((ulong)*(undefined8 *)(puVar3 + 0x12) >> 0x20) * fVar43 +
                                  (float)(uVar19 >> 0x20);
                      uVar13 = CONCAT44(fStack_d4,fStack_d8);
                      fStack_d8 = (float)*(undefined8 *)(puVar3 + 10) * fVar44 +
                                  (float)*(undefined8 *)(puVar3 + 0xe) * fVar33 + fStack_d8;
                      fStack_d4 = (float)((ulong)*(undefined8 *)(puVar3 + 10) >> 0x20) * fVar44 +
                                  (float)((ulong)*(undefined8 *)(puVar3 + 0xe) >> 0x20) * fVar33 +
                                  fStack_d4;
                      fStack_d0 = fVar45;
                      (**(code **)(*plVar10 + 0x18))(plVar10,uVar24,&fStack_d8);
                    }
                    fVar43 = (float)uVar19;
                    fVar33 = (float)uVar13;
                    if (plVar8 != (long *)0x0) {
                      fVar44 = (float)(**(code **)(*plVar8 + 0x10))(plVar8,uVar24);
                      fStack_d8 = fVar51 * fVar33 + fVar44 * fStack_2e0 + fVar43 * fVar47;
                      fVar45 = fVar48 * fVar33 + fVar44 * fVar49 + fVar43 * fVar50;
                      fStack_d0 = fVar52 * fVar33 + fVar44 * fVar46 + fVar43 * fVar54;
                      fVar33 = 1.0 / SQRT(fStack_d0 * fStack_d0 +
                                          fStack_d8 * fStack_d8 + fVar45 * fVar45);
                      uVar13 = (ulong)(uint)fVar33;
                      fStack_d8 = fStack_d8 * fVar33;
                      uVar19 = (ulong)(uint)fStack_d8;
                      fVar45 = fVar45 * fVar33;
                      fStack_d0 = fStack_d0 * fVar33;
                      fStack_d4 = fVar45;
                      (**(code **)(*plVar8 + 0x18))(plVar8,uVar24,&fStack_d8);
                    }
                    fVar43 = (float)uVar19;
                    fVar33 = (float)uVar13;
                    if (plVar14 == (long *)0x0) {
                      if (plStack_310 != (long *)0x0) {
                        fVar44 = (float)(**(code **)(*plStack_310 + 0x10))(plStack_310,uVar24);
                        fStack_d8 = fVar51 * fVar33 + fVar44 * fStack_2e0 + fVar43 * fVar47;
                        fVar45 = fVar48 * fVar33 + fVar44 * fVar49 + fVar43 * fVar50;
                        fStack_d0 = fVar52 * fVar33 + fVar44 * fVar46 + fVar43 * fVar54;
                        fVar33 = 1.0 / SQRT(fStack_d0 * fStack_d0 +
                                            fStack_d8 * fStack_d8 + fVar45 * fVar45);
                        uVar13 = (ulong)(uint)fVar33;
                        fStack_d8 = fStack_d8 * fVar33;
                        uVar19 = (ulong)(uint)fStack_d8;
                        fVar45 = fVar45 * fVar33;
                        fStack_d0 = fStack_d0 * fVar33;
                        fStack_d4 = fVar45;
                        (**(code **)(*plStack_310 + 0x18))(plStack_310,uVar24,&fStack_d8);
                      }
                    }
                    else {
                      fVar44 = (float)(**(code **)(*plVar14 + 0x10))(plVar14,uVar24);
                      fStack_d8 = fVar51 * fVar33 + fVar44 * fStack_2e0 + fVar43 * fVar47;
                      fStack_d4 = fVar48 * fVar33 + fVar44 * fVar49 + fVar43 * fVar50;
                      fStack_d0 = fVar52 * fVar33 + fVar44 * fVar46 + fVar43 * fVar54;
                      fVar33 = 1.0 / SQRT(fStack_d0 * fStack_d0 +
                                          fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
                      uVar13 = (ulong)(uint)fVar33;
                      fStack_d8 = fStack_d8 * fVar33;
                      uVar19 = (ulong)(uint)fStack_d8;
                      fStack_d4 = fStack_d4 * fVar33;
                      fStack_d0 = fStack_d0 * fVar33;
                      afStack_cc[0] = fVar45;
                      (**(code **)(*plVar14 + 0x18))(plVar14,uVar24,&fStack_d8);
                    }
                  }
                  uVar29 = uVar29 + 1;
                } while (uVar29 < puVar3[1]);
              }
            }
          }
        }
        if (plStack_310 != (long *)0x0) {
          (**(code **)(*plStack_310 + 8))();
        }
        if (plStack_f8 != (long *)0x0) {
          (**(code **)(*plStack_f8 + 8))();
        }
        if (plStack_f0 != (long *)0x0) {
          (**(code **)(*plStack_f0 + 8))();
        }
        if (plStack_e8 != (long *)0x0) {
          (**(code **)(*plStack_e8 + 8))();
        }
        if (uStack_e0 != (long *)0x0) {
          (**(code **)(*uStack_e0 + 8))();
        }
        if (uStack_2b0 != 0) {
          __ZdlPv();
        }
      }
      uVar25 = 1;
      if ((2 < (uint)fVar16) && ((int)param_4[0x1d] == 0)) {
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        iVar17 = *(int *)((long)param_4 + 0xec);
        if (iVar17 == 0) {
          fVar33 = 0.0;
          do {
            fStack_d4 = (float)((int)fVar33 + 1);
            fStack_d0 = (float)((int)fVar33 + 2);
            fStack_d8 = fVar33;
            FUN_10a7a7320(&uStack_2b0,uStack_2a8,&fStack_d8,afStack_cc);
            fVar43 = (float)((int)fVar33 + 5);
            fVar33 = (float)((int)fVar33 + 3);
          } while ((uint)fVar43 < (uint)fVar16);
LAB_10a7949a0:
          if (uStack_2b0 != uStack_2a8) {
            uVar13 = uStack_2a8 - uStack_2b0;
            if ((uint)fVar16 >> 0x10 == 0) {
              *(undefined4 *)(param_4 + 0x1d) = 1;
              uVar22 = (long)uVar13 >> 1;
              uVar19 = param_4[5];
              uVar29 = param_4[6] - uVar19;
              if (uVar22 < uVar29 || uVar22 - uVar29 == 0) {
                if (uVar22 < uVar29) {
                  param_4[6] = uVar19 + uVar22;
                }
              }
              else {
                func_0x000107c27d58(puVar28,uVar22 - uVar29);
                uVar19 = *puVar28;
                uVar13 = uStack_2a8 - uStack_2b0;
              }
              if (uStack_2a8 != uStack_2b0) {
                uVar22 = 0;
                uVar13 = (long)uVar13 >> 2;
                if (uVar13 < 2) {
                  uVar13 = 1;
                }
                do {
                  *(short *)(uVar19 + uVar22 * 2) = (short)*(undefined4 *)(uStack_2b0 + uVar22 * 4);
                  uVar22 = uVar22 + 1;
                } while (uVar13 != uVar22);
              }
            }
            else {
              *(undefined4 *)(param_4 + 0x1d) = 2;
              uVar22 = param_4[5];
              uVar19 = param_4[6];
              uVar29 = uVar19 - uVar22;
              if (uVar13 < uVar29 || uVar13 - uVar29 == 0) {
                if (uVar13 < uVar29) {
                  uVar19 = uVar22 + uVar13;
                  param_4[6] = uVar19;
                }
              }
              else {
                func_0x000107c27d58(puVar28,uVar13 - uVar29);
                uVar22 = param_4[5];
                uVar19 = param_4[6];
              }
              _memcpy(uVar22,uStack_2b0,uVar19 - uVar22);
            }
            *(undefined4 *)((long)param_4 + 0xec) = 0;
          }
          if (uStack_2b0 != 0) {
            uStack_2a8 = uStack_2b0;
            __ZdlPv(uStack_2b0);
          }
        }
        else {
          if (iVar17 == 1) {
            fVar33 = 0.0;
            do {
              fStack_d0 = (float)((int)fVar33 + 2);
              if (((uint)fVar33 & 1) == 0) {
                fStack_d8 = fVar33;
                fStack_d4 = (float)((uint)fVar33 | 1);
                FUN_10a7a7320(&uStack_2b0,uStack_2a8,&fStack_d8,afStack_cc);
                fVar33 = (float)((uint)fVar33 | 1);
              }
              else {
                fStack_d8 = (float)((int)fVar33 + 1U);
                fStack_d4 = fVar33;
                FUN_10a7a7320(&uStack_2b0,uStack_2a8,&fStack_d8,afStack_cc);
                fVar33 = (float)((int)fVar33 + 1U);
              }
            } while (fVar33 != (float)((int)fVar16 - 2U));
            goto LAB_10a7949a0;
          }
          if (iVar17 == 2) {
            fVar33 = 2.8026e-45;
            do {
              fStack_d4 = (float)((int)fVar33 - 1);
              fStack_d8 = 0.0;
              fStack_d0 = fVar33;
              FUN_10a7a7320(&uStack_2b0,uStack_2a8,&fStack_d8,afStack_cc);
              fVar33 = (float)((int)fVar33 + 1);
            } while (fVar16 != fVar33);
            goto LAB_10a7949a0;
          }
        }
        uVar25 = 1;
      }
    }
    else {
      uVar21 = *(uint *)(param_3 + 3);
      if ((uVar21 == 0) || (fVar16 == 0.0)) goto LAB_10a793f80;
      FUN_10a79503c(&uStack_2b0,param_3);
      uVar13 = uStack_2a8 - uStack_2b0;
      if (uVar13 == uVar21) {
        uVar19 = uVar13 * uVar29;
        uVar22 = param_5[1] - *param_5;
        if (uVar19 < uVar22 || uVar19 - uVar22 == 0) {
          if (uVar19 < uVar22) {
            param_5[1] = *param_5 + uVar19;
          }
        }
        else {
          func_0x0001092bf294(param_5,uVar19 - uVar22);
        }
        lVar31 = 0;
        uVar19 = uVar29;
        do {
          _memcpy(*param_5 + lVar31,uStack_2b0,uVar13);
          lVar31 = lVar31 + uVar13;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        lVar31 = *param_3;
        lVar30 = param_3[1];
        if (lVar31 == lVar30) {
          bVar12 = true;
        }
        else {
          do {
            uVar19 = param_1[0x1f];
            uVar22 = param_1[0x20];
            if (uVar19 == uVar22) {
LAB_10a793e58:
              if (uVar19 != uVar22 && uVar19 != 0) {
                uVar5 = *(ushort *)(lVar31 + 0x20);
                if (uVar5 - 7 < 3 || uVar5 == 3) {
                  uVar22 = (ulong)(uint)(int)(short)uVar5;
                  FUN_10a0f7058();
                  uVar20 = (uint)(uVar22 >> 2);
                  if ((uVar20 != 0) &&
                     ((uint)(*(int *)(lVar31 + 0x28) + *(int *)(lVar31 + 0x24)) <= uVar21)) {
                    fStack_d8 = 0.0;
                    fStack_d4 = 0.0;
                    fStack_d0 = 0.0;
                    afStack_cc[0] = 0.0;
                    puVar15 = param_1;
                    FUN_10a794d70(param_1,uVar19,&fStack_d8,&lStack_2c8);
                    if (((ulong)puVar15 & 1) != 0) {
                      lVar27 = 0;
                      lVar32 = 0;
                      uVar22 = 0;
                      uVar2 = *(uint *)(uVar19 + 0x28);
                      if (uVar20 <= *(uint *)(uVar19 + 0x28)) {
                        uVar2 = uVar20;
                      }
                      do {
                        if ((ulong)(lStack_2c0 - lStack_2c8 >> 4) <= uVar22) goto LAB_10a794af4;
                        _memcpy(*param_5 + (ulong)*(uint *)(lVar31 + 0x24) + lVar32,
                                lStack_2c8 + lVar27,(ulong)uVar2 << 2);
                        uVar22 = uVar22 + 1;
                        lVar32 = lVar32 + uVar13;
                        lVar27 = lVar27 + 0x10;
                      } while (uVar29 != uVar22);
                      goto LAB_10a793f28;
                    }
                  }
                }
                bVar12 = false;
                goto LAB_10a793f6c;
              }
            }
            else {
              do {
                if (*(long *)(uVar19 + 0x18) == *(long *)(lVar31 + 0x18)) goto LAB_10a793e58;
                uVar19 = uVar19 + 0x38;
              } while (uVar19 != uVar22);
            }
LAB_10a793f28:
            lVar31 = lVar31 + 0x30;
          } while (lVar31 != lVar30);
          bVar12 = true;
        }
LAB_10a793f6c:
        if (uStack_2b0 != 0) {
          uStack_2a8 = uStack_2b0;
          __ZdlPv();
        }
        if (bVar12) goto LAB_10a793f80;
      }
      else if (uStack_2b0 != 0) {
        uStack_2a8 = uStack_2b0;
        __ZdlPv();
      }
LAB_10a7940b8:
      uVar25 = 0;
    }
    if (lStack_2c8 != 0) {
      lStack_2c0 = lStack_2c8;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return uVar25;
  }
  ___stack_chk_fail();
LAB_10a794af0:
  FUN_10ab725fc();
LAB_10a794af4:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a794af8);
  (*pcVar11)();
}



/* Entry: 10a794c60; end: 10a794d6f;  */

long * FUN_10a794c60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,ulong param_6,long *param_7,long *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plStack_78;
  
  uVar5 = param_5[2];
  plVar4 = (long *)*param_5;
  if (param_6 <= (ulong)((long)(uVar5 - (long)plVar4) >> 4)) {
    uVar8 = param_5[1] - (long)plVar4 >> 4;
    uVar5 = uVar8;
    if (param_6 <= uVar8) {
      uVar5 = param_6;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      lVar10 = *param_7;
      plVar4[1] = param_7[1];
      *plVar4 = lVar10;
      plVar4 = plVar4 + 2;
    }
    if (param_6 < uVar8 || param_6 - uVar8 == 0) {
      param_5[1] = *param_5 + param_6 * 0x10;
    }
    else {
      plVar6 = (long *)param_5[1];
      lVar10 = param_6 * 0x10 + uVar8 * -0x10;
      plVar7 = plVar6;
      do {
        lVar12 = *param_7;
        plVar7[1] = param_7[1];
        *plVar7 = lVar12;
        lVar10 = lVar10 + -0x10;
        plVar7 = plVar7 + 2;
      } while (lVar10 != 0);
      param_5[1] = (long)(plVar6 + (param_6 - uVar8) * 2);
    }
    return plVar4;
  }
  uVar8 = param_6;
  if (plVar4 != (long *)0x0) {
    param_5[1] = (long)plVar4;
    __ZdlPv();
    uVar5 = 0;
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  if (param_6 >> 0x3c == 0) {
    uVar8 = (long)uVar5 >> 3;
    if ((ulong)((long)uVar5 >> 3) <= param_6) {
      uVar8 = param_6;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar8 = 0xfffffffffffffff;
    }
    plVar4 = param_5;
    FUN_10a4953dc(param_5,uVar8);
    plVar6 = (long *)param_5[1];
    lVar10 = param_6 << 4;
    plVar7 = plVar6;
    do {
      lVar12 = *param_7;
      plVar7[1] = param_7[1];
      *plVar7 = lVar12;
      lVar10 = lVar10 + -0x10;
      plVar7 = plVar7 + 2;
    } while (lVar10 != 0);
    param_5[1] = (long)(plVar6 + param_6 * 2);
    return plVar4;
  }
  FUN_10a132338();
  uVar9 = (ulong)*(uint *)(plVar4 + 0x1e);
  uVar5 = uVar9;
  if (*(uint *)(plVar4 + 0x1e) != 0) {
    uVar5 = 0;
    if (uVar9 != 0) {
      uVar5 = (ulong)(plVar4[3] - plVar4[2]) / uVar9;
    }
  }
  uVar9 = uVar5 & 0xffffffff;
  FUN_10a794c60(param_8,uVar9);
  iVar2 = *(int *)(uVar8 + 0x28);
  iVar11 = (int)uVar5;
  if (iVar2 < 3) {
    if (iVar2 == 1) {
      func_0x00010ab4d1c8(&plStack_78,plVar4,uVar8);
      plVar4 = (long *)(ulong)(plStack_78 != (long *)0x0);
      if (plStack_78 == (long *)0x0) {
        return (long *)0x0;
      }
      if (iVar11 != 0) {
        lVar10 = 0;
        uVar5 = 0;
        do {
          (**(code **)(*plStack_78 + 0x10))(plStack_78,uVar5);
          if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar5) goto LAB_10a795010;
          *(int *)(*param_8 + lVar10) = (int)param_1;
          uVar5 = uVar5 + 1;
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 - lVar10 != 0);
      }
    }
    else {
      if (iVar2 != 2) {
        return (long *)0x0;
      }
      func_0x00010ab4d4d0(&plStack_78,plVar4,uVar8);
      plVar4 = (long *)(ulong)(plStack_78 != (long *)0x0);
      if (plStack_78 == (long *)0x0) {
        return (long *)0x0;
      }
      if (iVar11 != 0) {
        lVar10 = 0;
        uVar5 = 0;
        do {
          (**(code **)(*plStack_78 + 0x10))(plStack_78,uVar5);
          if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar5) {
LAB_10a795010:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a795014);
            (*pcVar3)();
          }
          *(int *)(*param_8 + lVar10) = (int)param_1;
          if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar5) goto LAB_10a795010;
          *(undefined4 *)(*param_8 + lVar10 + 4) = param_2;
          uVar5 = uVar5 + 1;
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 - lVar10 != 0);
      }
    }
  }
  else if (iVar2 == 3) {
    func_0x00010ab4d7d8(&plStack_78,plVar4,uVar8);
    plVar4 = (long *)(ulong)(plStack_78 != (long *)0x0);
    if (plStack_78 == (long *)0x0) {
      return (long *)0x0;
    }
    if (iVar11 != 0) {
      lVar10 = 0;
      uVar5 = 0;
      do {
        (**(code **)(*plStack_78 + 0x10))(plStack_78,uVar5);
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar5) goto LAB_10a795010;
        *(int *)(*param_8 + lVar10) = (int)param_1;
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar5) goto LAB_10a795010;
        *(undefined4 *)(*param_8 + lVar10 + 4) = param_2;
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar5) goto LAB_10a795010;
        *(undefined4 *)(*param_8 + lVar10 + 8) = param_3;
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 - lVar10 != 0);
    }
  }
  else {
    if (iVar2 != 4) {
      return (long *)0x0;
    }
    func_0x00010ab4dae0(&plStack_78,plVar4,uVar8);
    plVar4 = (long *)(ulong)(plStack_78 != (long *)0x0);
    if (plStack_78 == (long *)0x0) {
      return (long *)0x0;
    }
    if (iVar11 != 0) {
      lVar10 = 0;
      uVar5 = 0;
      do {
        (**(code **)(*plStack_78 + 0x10))(plStack_78,uVar5);
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar5) goto LAB_10a795010;
        puVar1 = (undefined4 *)(*param_8 + lVar10);
        *puVar1 = (int)param_1;
        puVar1[1] = param_2;
        puVar1[2] = param_3;
        puVar1[3] = param_4;
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 - lVar10 != 0);
    }
  }
  (**(code **)(*plStack_78 + 8))(plStack_78);
  return plVar4;
}



/* Entry: 10a794d70; end: 10a79503b;  */

bool FUN_10a794d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7,long *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plStack_48;
  
  uVar5 = (ulong)*(uint *)(param_5 + 0xf0);
  uVar7 = uVar5;
  if (*(uint *)(param_5 + 0xf0) != 0) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = (ulong)(*(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10)) / uVar5;
    }
  }
  uVar5 = uVar7 & 0xffffffff;
  FUN_10a794c60(param_8,uVar5);
  iVar2 = *(int *)(param_6 + 0x28);
  iVar6 = (int)uVar7;
  if (iVar2 < 3) {
    if (iVar2 == 1) {
      func_0x00010ab4d1c8(&plStack_48,param_5,param_6);
      bVar4 = plStack_48 != (long *)0x0;
      if (plStack_48 == (long *)0x0) {
        return false;
      }
      if (iVar6 != 0) {
        lVar8 = 0;
        uVar7 = 0;
        do {
          (**(code **)(*plStack_48 + 0x10))(plStack_48,uVar7);
          if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar7) goto LAB_10a795010;
          *(undefined4 *)(*param_8 + lVar8) = param_1;
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (uVar5 * 0x10 - lVar8 != 0);
      }
    }
    else {
      if (iVar2 != 2) {
        return false;
      }
      func_0x00010ab4d4d0(&plStack_48,param_5,param_6);
      bVar4 = plStack_48 != (long *)0x0;
      if (plStack_48 == (long *)0x0) {
        return false;
      }
      if (iVar6 != 0) {
        lVar8 = 0;
        uVar7 = 0;
        do {
          (**(code **)(*plStack_48 + 0x10))(plStack_48,uVar7);
          if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar7) {
LAB_10a795010:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a795014);
            (*pcVar3)();
          }
          *(undefined4 *)(*param_8 + lVar8) = param_1;
          if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar7) goto LAB_10a795010;
          *(undefined4 *)(*param_8 + lVar8 + 4) = param_2;
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (uVar5 * 0x10 - lVar8 != 0);
      }
    }
  }
  else if (iVar2 == 3) {
    func_0x00010ab4d7d8(&plStack_48,param_5,param_6);
    bVar4 = plStack_48 != (long *)0x0;
    if (plStack_48 == (long *)0x0) {
      return false;
    }
    if (iVar6 != 0) {
      lVar8 = 0;
      uVar7 = 0;
      do {
        (**(code **)(*plStack_48 + 0x10))(plStack_48,uVar7);
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar7) goto LAB_10a795010;
        *(undefined4 *)(*param_8 + lVar8) = param_1;
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar7) goto LAB_10a795010;
        *(undefined4 *)(*param_8 + lVar8 + 4) = param_2;
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar7) goto LAB_10a795010;
        *(undefined4 *)(*param_8 + lVar8 + 8) = param_3;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar5 * 0x10 - lVar8 != 0);
    }
  }
  else {
    if (iVar2 != 4) {
      return false;
    }
    func_0x00010ab4dae0(&plStack_48,param_5,param_6);
    bVar4 = plStack_48 != (long *)0x0;
    if (plStack_48 == (long *)0x0) {
      return false;
    }
    if (iVar6 != 0) {
      lVar8 = 0;
      uVar7 = 0;
      do {
        (**(code **)(*plStack_48 + 0x10))(plStack_48,uVar7);
        if ((ulong)(param_8[1] - *param_8 >> 4) <= uVar7) goto LAB_10a795010;
        puVar1 = (undefined4 *)(*param_8 + lVar8);
        *puVar1 = param_1;
        puVar1[1] = param_2;
        puVar1[2] = param_3;
        puVar1[3] = param_4;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar5 * 0x10 - lVar8 != 0);
    }
  }
  (**(code **)(*plStack_48 + 8))(plStack_48);
  return bVar4;
}



/* Entry: 10a79503c; end: 10a7952e7;  */

void FUN_10a79503c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar8 = *(uint *)(param_2 + 3);
  uVar9 = (ulong)uVar8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (uVar8 != 0) {
    FUN_10a044fac(param_1,uVar9);
    lVar10 = param_1[1];
    _bzero(lVar10,uVar9);
    param_1[1] = lVar10 + uVar9;
  }
  puVar11 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  if (puVar11 == puVar1) {
    return;
  }
LAB_10a7950cc:
  uVar3 = *(ushort *)(puVar11 + 4);
  if (uVar3 < 10 && (1 << (ulong)(uVar3 & 0x1f) & 0x388U) != 0) {
    uVar9 = (ulong)(uint)(int)(short)uVar3;
    FUN_10a0f7058();
    uVar8 = (uint)(uVar9 >> 2);
  }
  else {
    uVar8 = 0;
  }
  lVar10 = 0;
  puVar6 = (undefined4 *)&UNK_110c17aa4;
  do {
    if (*(long *)(&UNK_110c17a98 + lVar10) == puVar11[3]) {
      if ((uVar8 != 0) && (lVar10 != 0xf0)) {
        uVar2 = *(uint *)(&UNK_110c17aa0 + lVar10);
        if (uVar2 == 0) goto LAB_10a795234;
        lVar10 = 0;
        if (uVar8 <= uVar2) {
          uVar2 = uVar8;
        }
        goto LAB_10a79514c;
      }
      break;
    }
    lVar10 = lVar10 + 0x30;
    puVar6 = puVar6 + 0xc;
  } while (lVar10 != 0xf0);
  if (((bRam00000001137eb980 & 1) == 0) && (iVar5 = 0x137eb980, ___cxa_guard_acquire(), iVar5 != 0))
  {
    uRam00000001137ebb40 = 0;
    uRam00000001137ebb38 = 0;
    uRam00000001137ebb50 = 0;
    uRam00000001137ebb48 = 0;
    uRam00000001137ebb58 = 0x3f800000;
    ___cxa_atexit(0x10a0f5100,0x1137ebb38,0x100000000);
    ___cxa_guard_release(0x1137eb980);
  }
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*puVar11,puVar11[1]);
  }
  else {
    uStack_78 = puVar11[1];
    uStack_80 = *puVar11;
    lStack_70 = puVar11[2];
  }
  puVar7 = &uStack_80;
  func_0x00010726db4c(0x1137ebb38,puVar7,&uStack_80);
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  if ((((ulong)puVar7 & 1) != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    puVar7 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      puVar7 = (undefined8 *)*puVar11;
    }
    func_0x00010ae06f08(1,2,&UNK_10f6761eb,&UNK_10f676231,0x44,&UNK_10f6762ba,in_x6,in_x7,puVar7);
  }
  goto LAB_10a795234;
  while( true ) {
    if (lVar10 == 0x10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7952a8);
      (*pcVar4)();
    }
    *(undefined4 *)(*param_1 + (ulong)*(uint *)((long)puVar11 + 0x24) + lVar10) = *puVar6;
    lVar10 = lVar10 + 4;
    puVar6 = puVar6 + 1;
    if ((ulong)uVar2 << 2 == lVar10) break;
LAB_10a79514c:
    if ((ulong)(param_1[1] - *param_1) < lVar10 + (ulong)*(uint *)((long)puVar11 + 0x24) + 4) break;
  }
LAB_10a795234:
  puVar11 = puVar11 + 6;
  if (puVar11 == puVar1) {
    return;
  }
  goto LAB_10a7950cc;
}



/* Entry: 10a7952e8; end: 10a795823;  */

void FUN_10a7952e8(ulong *param_1,long param_2,undefined8 *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  code *pcVar6;
  long *plVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  char unaff_w27;
  uint6 uVar18;
  undefined8 uVar19;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  byte bVar26;
  undefined8 uVar20;
  byte bVar27;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined1 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  ulong *puStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  long *plStack_140;
  long *plStack_138;
  undefined1 auStack_130 [68];
  int iStack_ec;
  int iStack_e8;
  byte bStack_70;
  
  lVar11 = 0;
  puVar16 = (ulong *)(param_2 + 0x48);
  uVar12 = *puVar16;
  Hint_Prefetch(uVar12,0,2,0);
  uVar14 = (long)&PTR_LOOP_110c8acd8 + param_3[3];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar14;
  uVar13 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297;
  uVar14 = uVar13 >> 7 ^ uVar12 >> 0xc;
  bVar5 = (byte)uVar13;
  uVar18 = CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))) &
           0x7f7f7f7f7f7f;
  do {
    uVar14 = uVar14 & *(ulong *)(param_2 + 0x58);
    uVar20 = *(undefined8 *)(uVar12 + uVar14);
    cVar21 = (char)((ulong)uVar20 >> 8);
    cVar22 = (char)((ulong)uVar20 >> 0x10);
    cVar23 = (char)((ulong)uVar20 >> 0x18);
    cVar24 = (char)((ulong)uVar20 >> 0x20);
    cVar25 = (char)((ulong)uVar20 >> 0x28);
    bVar26 = (byte)((ulong)uVar20 >> 0x30);
    bVar27 = (byte)((ulong)uVar20 >> 0x38);
    for (uVar13 = CONCAT17(-(bVar27 == (bVar5 & 0x7f)),
                           CONCAT16(-(bVar26 == (bVar5 & 0x7f)),
                                    CONCAT15(-(cVar25 == (char)(uVar18 >> 0x28)),
                                             CONCAT14(-(cVar24 == (char)(uVar18 >> 0x20)),
                                                      CONCAT13(-(cVar23 == (char)(uVar18 >> 0x18)),
                                                               CONCAT12(-(cVar22 ==
                                                                         (char)(uVar18 >> 0x10)),
                                                                        CONCAT11(-(cVar21 ==
                                                                                  (char)(uVar18 >> 8
                                                                                        )),
                                                                                 -((char)uVar20 ==
                                                                                  (char)uVar18))))))
                                   )) & 0x8080808080808080; uVar13 != 0;
        uVar13 = uVar13 - 1 & uVar13) {
      uVar1 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar15 = *(long *)(param_2 + 0x50) +
               (uVar14 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
               *(ulong *)(param_2 + 0x58)) * 0x78;
      if (*(long *)(lVar15 + 0x18) == param_3[3]) {
        if (uVar12 != 0) {
          uVar14 = lVar15 + 0x20;
          FUN_10a77be40(uVar14,param_4);
          if ((uVar14 & 1) == 0) {
            *param_1 = 0;
            param_1[1] = 0;
            return;
          }
          puVar8 = *(ulong **)(lVar15 + 0x68);
          for (puVar16 = *(ulong **)(lVar15 + 0x60); puVar16 != puVar8; puVar16 = puVar16 + 2) {
            uVar14 = *puVar16;
            FUN_10a798c70(uVar14,param_5,param_6);
            if (uVar14 >> 0x20 == 0) {
              *param_1 = 0;
              param_1[1] = 0;
              return;
            }
            uVar12 = *puVar16;
            if ((uint)uVar14 <= (uint)(*(int *)(uVar12 + 0x44) - *(int *)(uVar12 + 0x48))) {
              uVar14 = puVar16[1];
              *param_1 = uVar12;
              param_1[1] = uVar14;
              if (uVar14 == 0) {
                return;
              }
              plVar7 = (long *)(uVar14 + 8);
              do {
                cVar21 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar2) {
                  *plVar7 = *plVar7 + 1;
                  cVar21 = ExclusiveMonitorsStatus();
                }
              } while (cVar21 != '\0');
              return;
            }
          }
          FUN_10a7980f8(auStack_130,lVar15 + 0x20,lVar15 + 0x40);
          if (unaff_w27 == '\x01') {
            puVar9 = auStack_130;
            FUN_10a798c70(puVar9,param_5,param_6);
            if (((ulong)puVar9 >> 0x20 != 0) && ((uint)puVar9 <= (uint)(iStack_ec - iStack_e8))) {
              plVar7 = (long *)0xf0;
              __Znwm();
              plVar7[1] = 0;
              plVar7[2] = 0;
              plVar10 = plVar7 + 3;
              *plVar7 = (long)&PTR_FUN_110c18c88;
              FUN_10a7c5e54(plVar10,auStack_130);
              plStack_140 = plVar10;
              plStack_138 = plVar7;
              FUN_10a79922c((undefined8 *)(lVar15 + 0x60),&plStack_140);
              plVar7 = plStack_138;
              if (plStack_138 != (long *)0x0) {
                plVar10 = plStack_138 + 1;
                do {
                  lVar11 = *plVar10;
                  cVar21 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar2) {
                    *plVar10 = lVar11 + -1;
                    cVar21 = ExclusiveMonitorsStatus();
                  }
                } while (cVar21 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*plStack_138 + 0x10))(plStack_138);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              lVar11 = *(long *)(lVar15 + 0x68);
              if (*(long *)(lVar15 + 0x60) == lVar11) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7959d8);
                (*pcVar6)();
              }
              lVar15 = *(long *)(lVar11 + -8);
              uVar14 = *(ulong *)(lVar11 + -0x10);
              param_1[1] = *(ulong *)(lVar11 + -8);
              *param_1 = uVar14;
              if (lVar15 != 0) {
                plVar7 = (long *)(lVar15 + 8);
                do {
                  cVar21 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar2) {
                    *plVar7 = *plVar7 + 1;
                    cVar21 = ExclusiveMonitorsStatus();
                  }
                } while (cVar21 != '\0');
              }
              goto LAB_10a7958e4;
            }
          }
          *param_1 = 0;
          param_1[1] = 0;
LAB_10a7958e4:
          FUN_10a7a7714(auStack_130);
          return;
        }
        goto LAB_10a795418;
      }
    }
    if (CONCAT17(-(bVar27 == 0x80),
                 CONCAT16(-(bVar26 == 0x80),
                          CONCAT15(-(cVar25 == -0x80),
                                   CONCAT14(-(cVar24 == -0x80),
                                            CONCAT13(-(cVar23 == -0x80),
                                                     CONCAT12(-(cVar22 == -0x80),
                                                              CONCAT11(-(cVar21 == -0x80),
                                                                       -((char)uVar20 == -0x80))))))
                         )) != 0) {
LAB_10a795418:
      FUN_10a7980f8(auStack_148,param_4,param_3);
      if (bStack_70 == 1) {
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1c0 = 0;
        FUN_10a7a5130(&uStack_1c0,*param_4,param_4[1],
                      (param_4[1] - *param_4 >> 4) * -0x5555555555555555);
        uStack_1a8 = (undefined4)param_4[3];
        uStack_1a4 = *(undefined1 *)((long)param_4 + 0x1c);
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_1e0,*param_3,param_3[1]);
        }
        else {
          uStack_1d8 = param_3[1];
          uStack_1e0 = *param_3;
          uStack_1d0 = param_3[2];
        }
        lStack_170 = uStack_1d0;
        uStack_1c8 = param_3[3];
        uStack_198 = uStack_1b8;
        uStack_1a0 = uStack_1c0;
        uStack_190 = uStack_1b0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_188 = uStack_1a8;
        uStack_184 = uStack_1a4;
        uStack_178 = uStack_1d8;
        uStack_180 = uStack_1e0;
        uStack_1d0 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        puStack_1f0 = &uStack_1c0;
        uStack_168 = uStack_1c8;
        func_0x00010a1f4614(&puStack_1f0);
        if ((bStack_70 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7957c4);
          (*pcVar6)();
        }
        plVar7 = (long *)0xf0;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        puVar8 = (ulong *)(plVar7 + 3);
        *plVar7 = (long)&PTR_FUN_110c18c88;
        FUN_10a7c5e54(puVar8,auStack_148);
        puStack_1f0 = puVar8;
        plStack_1e8 = plVar7;
        FUN_10a79922c(&uStack_160,&puStack_1f0);
        plVar7 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar10 = plStack_1e8 + 1;
          do {
            lVar11 = *plVar10;
            cVar21 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *plVar10 = lVar11 + -1;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        uStack_220 = lStack_170;
        uStack_228 = uStack_178;
        uStack_230 = uStack_180;
        uStack_248 = uStack_198;
        uStack_250 = uStack_1a0;
        uStack_240 = uStack_190;
        uStack_238 = uStack_188;
        uStack_234 = uStack_184;
        uStack_180 = 0;
        uStack_178 = 0;
        lStack_170 = 0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        uStack_218 = uStack_168;
        uStack_208 = uStack_158;
        uStack_210 = uStack_160;
        uStack_200 = uStack_150;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_1f8 = 1;
        puStack_1f0 = &uStack_160;
        FUN_10a7a76a4(&puStack_1f0);
        if (lStack_170 < 0) {
          __ZdlPv(uStack_180);
        }
        puStack_1f0 = &uStack_1a0;
        func_0x00010a1f4614(&puStack_1f0);
        FUN_10a7a7714(auStack_148);
        lVar11 = 0;
        uVar13 = *(ulong *)(param_2 + 0x48);
        Hint_Prefetch(uVar13,0,2,0);
        uVar14 = (long)&PTR_LOOP_110c8acd8 + param_3[3];
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        uVar12 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar14 * -0x622015f714c7d297;
        uVar14 = uVar12 >> 7 ^ uVar13 >> 0xc;
        bVar5 = (byte)uVar12;
        uVar18 = CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5)))
                                        )) & 0x7f7f7f7f7f7f;
        while( true ) {
          uVar14 = uVar14 & *(ulong *)(param_2 + 0x58);
          uVar20 = *(undefined8 *)(uVar13 + uVar14);
          cVar21 = (char)((ulong)uVar20 >> 8);
          cVar22 = (char)((ulong)uVar20 >> 0x10);
          cVar23 = (char)((ulong)uVar20 >> 0x18);
          cVar24 = (char)((ulong)uVar20 >> 0x20);
          cVar25 = (char)((ulong)uVar20 >> 0x28);
          bVar26 = (byte)((ulong)uVar20 >> 0x30);
          bVar27 = (byte)((ulong)uVar20 >> 0x38);
          uVar12 = CONCAT17(-(bVar27 == (bVar5 & 0x7f)),
                            CONCAT16(-(bVar26 == (bVar5 & 0x7f)),
                                     CONCAT15(-(cVar25 == (char)(uVar18 >> 0x28)),
                                              CONCAT14(-(cVar24 == (char)(uVar18 >> 0x20)),
                                                       CONCAT13(-(cVar23 == (char)(uVar18 >> 0x18)),
                                                                CONCAT12(-(cVar22 ==
                                                                          (char)(uVar18 >> 0x10)),
                                                                         CONCAT11(-(cVar21 ==
                                                                                   (char)(uVar18 >>
                                                                                         8)),
                                                                                  -((char)uVar20 ==
                                                                                   (char)uVar18)))))
                                             ))) & 0x8080808080808080;
          if (uVar12 != 0) {
            do {
              uVar1 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
              if (*(long *)(*(long *)(param_2 + 0x50) +
                            (uVar14 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                            *(ulong *)(param_2 + 0x58)) * 0x78 + 0x18) == param_3[3])
              goto LAB_10a79549c;
              uVar12 = uVar12 - 1 & uVar12;
            } while (uVar12 != 0);
          }
          if (CONCAT17(-(bVar27 == 0x80),
                       CONCAT16(-(bVar26 == 0x80),
                                CONCAT15(-(cVar25 == -0x80),
                                         CONCAT14(-(cVar24 == -0x80),
                                                  CONCAT13(-(cVar23 == -0x80),
                                                           CONCAT12(-(cVar22 == -0x80),
                                                                    CONCAT11(-(cVar21 == -0x80),
                                                                             -((char)uVar20 == -0x80
                                                                              )))))))) != 0) break;
          lVar11 = lVar11 + 8;
          uVar14 = lVar11 + uVar14;
        }
        FUN_10a7b6784();
        puVar17 = (undefined8 *)(*(long *)(param_2 + 0x50) + (long)puVar16 * 0x78);
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(puVar17,*param_3,param_3[1]);
        }
        else {
          uVar19 = param_3[1];
          uVar20 = *param_3;
          puVar17[2] = param_3[2];
          puVar17[1] = uVar19;
          *puVar17 = uVar20;
        }
        puVar17[3] = param_3[3];
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[5] = uStack_248;
        puVar17[4] = uStack_250;
        puVar17[6] = uStack_240;
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_240 = 0;
        *(undefined1 *)((long)puVar17 + 0x3c) = uStack_234;
        *(undefined4 *)(puVar17 + 7) = uStack_238;
        puVar17[10] = uStack_220;
        puVar17[9] = uStack_228;
        puVar17[8] = uStack_230;
        uStack_228 = 0;
        uStack_220 = 0;
        uStack_230 = 0;
        puVar17[0xb] = uStack_218;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0;
        puVar17[0xe] = 0;
        puVar17[0xd] = uStack_208;
        puVar17[0xc] = uStack_210;
        puVar17[0xe] = uStack_200;
        uStack_210 = 0;
        uStack_208 = 0;
        uStack_200 = 0;
        FUN_10a795824(param_1,*(long *)(param_2 + 0x50) + (long)puVar16 * 0x78 + 0x20,param_5,
                      param_6);
      }
      else {
        uStack_250 = uStack_250 & 0xffffffffffffff00;
        uStack_1f8 = 0;
        FUN_10a7a7714(auStack_148);
LAB_10a79549c:
        *param_1 = 0;
        param_1[1] = 0;
      }
      FUN_10a7a7528(&uStack_250);
      return;
    }
    lVar11 = lVar11 + 8;
    uVar14 = lVar11 + uVar14;
  } while( true );
}



/* Entry: 10a795824; end: 10a7959ff;  */

void FUN_10a795824(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long *plStack_140;
  long *plStack_138;
  undefined1 auStack_130 [68];
  int iStack_ec;
  int iStack_e8;
  byte bStack_58;
  
  puVar1 = *(ulong **)(param_2 + 0x48);
  for (puVar12 = *(ulong **)(param_2 + 0x40); puVar12 != puVar1; puVar12 = puVar12 + 2) {
    uVar5 = *puVar12;
    FUN_10a798c70(uVar5,param_3,param_4);
    if (uVar5 >> 0x20 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    uVar9 = *puVar12;
    if ((uint)uVar5 <= (uint)(*(int *)(uVar9 + 0x44) - *(int *)(uVar9 + 0x48))) {
      uVar5 = puVar12[1];
      *param_1 = uVar9;
      param_1[1] = uVar5;
      if (uVar5 == 0) {
        return;
      }
      plVar7 = (long *)(uVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
  }
  FUN_10a7980f8(auStack_130,param_2,param_2 + 0x20);
  if (bStack_58 == 1) {
    puVar6 = auStack_130;
    FUN_10a798c70(puVar6,param_3,param_4);
    if ((ulong)puVar6 >> 0x20 != 0) {
      if ((bStack_58 & 1) == 0) {
LAB_10a7959d4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7959d8);
        (*pcVar4)();
      }
      if ((uint)puVar6 <= (uint)(iStack_ec - iStack_e8)) {
        plVar7 = (long *)0xf0;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        plVar8 = plVar7 + 3;
        *plVar7 = (long)&PTR_FUN_110c18c88;
        FUN_10a7c5e54(plVar8,auStack_130);
        plStack_140 = plVar8;
        plStack_138 = plVar7;
        FUN_10a79922c((undefined8 *)(param_2 + 0x40),&plStack_140);
        plVar7 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar8 = plStack_138 + 1;
          do {
            lVar10 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        lVar10 = *(long *)(param_2 + 0x48);
        if (*(long *)(param_2 + 0x40) == lVar10) goto LAB_10a7959d4;
        lVar11 = *(long *)(lVar10 + -8);
        uVar5 = *(ulong *)(lVar10 + -0x10);
        param_1[1] = *(ulong *)(lVar10 + -8);
        *param_1 = uVar5;
        if (lVar11 != 0) {
          plVar7 = (long *)(lVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_10a7958e4;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10a7958e4:
  FUN_10a7a7714(auStack_130);
  return;
}



/* Entry: 10a795a00; end: 10a795af3;  */

void FUN_10a795a00(long param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 auStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  func_0x000107c2b07c(auStack_50,&UNK_10f67631b);
  lVar7 = *(long *)(param_1 + 0x100);
  lVar2 = *(long *)(param_1 + 0xf8);
  lVar4 = lVar2;
  for (; (lVar2 != lVar7 && (lVar4 = lVar2, *(long *)(lVar2 + 0x18) != lStack_38));
      lVar2 = lVar2 + 0x38) {
    lVar4 = lVar7;
  }
  lVar2 = 0;
  if (lVar4 != lVar7) {
    lVar2 = lVar4;
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if ((lVar2 != 0) &&
     (uVar5 = (ulong)*(uint *)(param_1 + 0xf0), (ulong)*(uint *)(lVar2 + 0x30) + 4 <= uVar5)) {
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = (uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) / uVar5);
    }
    if ((uint)param_3 <= uVar1) {
      uVar1 = (uint)param_3;
    }
    uVar6 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar7 = 0;
      do {
        if (param_3 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a795af4);
          (*pcVar3)();
        }
        uVar8 = NEON_ucvtf(*param_2);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(lVar2 + 0x30) + lVar7) = uVar8;
        lVar7 = lVar7 + uVar5;
        param_3 = param_3 + -1;
        uVar6 = uVar6 - 1;
        param_2 = param_2 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



/* Entry: 10a795af4; end: 10a795b57;  */

undefined8 * FUN_10a795af4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a795b58; end: 10a79601f;  */

/* WARNING: Removing unreachable block (ram,0x00010a795cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a795e38) */

void FUN_10a795b58(undefined1 *param_1,long *param_2,int param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  byte bStack_71;
  long lStack_70;
  
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  func_0x000107c2b07c(param_1 + 0x28,&UNK_10f674def);
  FUN_10a799364(auStack_f0);
  lVar11 = *(long *)(param_4 + 0x10) - *(long *)(param_4 + 8);
  if (lVar11 == 0) {
    plStack_f8 = (long *)0x0;
  }
  else {
    plStack_f8 = (long *)0x0;
    plVar16 = (long *)0x0;
    plVar17 = (long *)0x0;
    uVar15 = 0;
    do {
      lVar18 = *(long *)(param_4 + 8);
      uVar12 = (*(long *)(param_4 + 0x10) - lVar18 >> 3) * 0x6db6db6db6db6db7;
      if (uVar12 < uVar15 || uVar12 - uVar15 == 0) {
        FUN_10ab725fc();
        goto LAB_10a795f9c;
      }
      plVar14 = plStack_f8;
      if (lVar18 != 0) {
        lVar18 = lVar18 + uVar15 * 0x38;
        lVar19 = lStack_e8;
        if (lStack_e8 == lStack_e0) {
LAB_10a795c50:
          if ((lVar19 != lStack_e0) && (lVar19 != 0)) goto LAB_10a795d74;
        }
        else {
          do {
            if (*(long *)(lVar19 + 0x18) == *(long *)(lVar18 + 0x18)) goto LAB_10a795c50;
            lVar19 = lVar19 + 0x38;
          } while (lVar19 != lStack_e0);
        }
        func_0x000107c2b07c(&plStack_88,&UNK_10f67630b);
        if (*(long *)(lVar18 + 0x18) == lStack_70) {
          bVar9 = true;
        }
        else {
          func_0x000107c2b07c(auStack_a8,&UNK_10f67631b);
          bVar9 = *(long *)(lVar18 + 0x18) == lStack_90;
          if (cStack_91 < '\0') {
            __ZdlPv(auStack_a8[0]);
          }
        }
        if ((!bVar9) && (FUN_10ab6ec58(), *(long *)(lVar18 + 0x18) != lRam00000001138357d8)) {
          if (plVar16 < plVar17) {
            *plVar16 = lVar18;
            plVar16 = plVar16 + 1;
          }
          else {
            lVar19 = (long)plVar16 - (long)plStack_f8;
            uVar12 = (lVar19 >> 3) + 1;
            if (uVar12 >> 0x3d != 0) {
              func_0x00010a7a7610();
LAB_10a795f9c:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a795fa0);
              (*pcVar8)();
            }
            uVar13 = (long)plVar17 - (long)plStack_f8 >> 2;
            if (uVar13 <= uVar12) {
              uVar13 = uVar12;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plVar17 - (long)plStack_f8)) {
              uVar13 = 0x1fffffffffffffff;
            }
            if (uVar13 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a795f9c;
            }
            lVar10 = uVar13 << 3;
            __Znwm();
            plVar1 = (long *)(lVar10 + lVar19);
            plVar17 = (long *)(lVar10 + uVar13 * 8);
            plVar14 = plVar1 + -(lVar19 >> 3);
            plVar16 = plVar1 + 1;
            *plVar1 = lVar18;
            _memcpy(plVar14,plStack_f8,lVar19);
            if (plStack_f8 != (long *)0x0) {
              __ZdlPv(plStack_f8);
            }
          }
        }
      }
LAB_10a795d74:
      plStack_f8 = plVar14;
      uVar15 = uVar15 + 1;
    } while (uVar15 != (lVar11 >> 3) * 0x6db6db6db6db6db7);
    if (plStack_f8 != plVar16) {
      puVar3 = &UNK_10f67632c;
      if (param_3 != 0) {
        puVar3 = &UNK_10f674def;
      }
      puVar4 = &UNK_10f676343;
      if (param_3 != 1) {
        puVar4 = puVar3;
      }
      func_0x000107c2b07c(&plStack_88,puVar4);
      if (param_2 != (long *)0x0) {
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
        }
        if (uStack_80 != 0) {
          if ((long *)*param_2 != (long *)param_2[1]) {
            plVar17 = (long *)*param_2 + 4;
            do {
              if (plVar17[-1] == lStack_70) {
                if (((*(char *)((long)plVar17 + 0x1c) == '\x01') &&
                    (0xffffff7f < *(uint *)(plVar17 + 3) - 0x81)) &&
                   (uVar5 = *(uint *)(plVar17 + 4), uVar5 != 0)) {
                  plVar14 = plStack_f8;
                  if (uVar5 == 1) goto LAB_10a795ee4;
                  uVar2 = *(uint *)(plVar17 + 3) & 0xffff;
                  uVar7 = 0;
                  if (uVar2 != 0) {
                    uVar7 = 0x4000 / uVar2;
                  }
                  if (0xff < uVar7) {
                    uVar7 = 0x100;
                  }
                  if (uVar5 == uVar7) goto LAB_10a795ee4;
                }
                *param_1 = 3;
                goto LAB_10a795e58;
              }
              plVar14 = plVar17 + 5;
              plVar17 = plVar17 + 9;
            } while (plVar14 != (long *)param_2[1]);
          }
        }
      }
      *param_1 = 2;
      lVar18 = *plStack_f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x28,lVar18);
LAB_10a795e28:
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar18 + 0x18);
      goto LAB_10a795e58;
    }
  }
  *param_1 = 0;
  goto LAB_10a795e58;
  while( true ) {
    while (*(long *)(lVar11 + 0x18) != *(long *)(lVar18 + 0x18)) {
      lVar11 = lVar11 + 0x30;
      if (lVar11 == plVar17[1]) goto LAB_10a795f70;
    }
    uVar6 = *(ushort *)(lVar11 + 0x20);
    if (2 < uVar6 - 7 && uVar6 != 3) goto LAB_10a795f70;
    uVar5 = *(uint *)(lVar18 + 0x28);
    uVar15 = (ulong)(uint)(int)(short)uVar6;
    FUN_10a0f7058();
    if ((uint)(uVar15 >> 2) < uVar5) goto LAB_10a795f70;
    plVar14 = plVar14 + 1;
    if (plVar14 == plVar16) break;
LAB_10a795ee4:
    lVar18 = *plVar14;
    lVar11 = *plVar17;
    if (lVar11 == plVar17[1]) {
LAB_10a795f70:
      *param_1 = 4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 0x28,lVar18);
      goto LAB_10a795e28;
    }
  }
  *param_1 = 1;
  FUN_10a78c4f4(param_1 + 8,plVar17);
LAB_10a795e58:
  plStack_88 = &lStack_e8;
  func_0x00010a190844(&plStack_88);
  if (plStack_f8 != (long *)0x0) {
    __ZdlPv(plStack_f8);
  }
  return;
}



/* Entry: 10a796020; end: 10a796083;  */

undefined8 * FUN_10a796020(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a796084; end: 10a79628f;  */

void FUN_10a796084(undefined1 *param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined4 *puVar8;
  
  uStack_98 = 2;
  lStack_88 = 0;
  lStack_90 = 0;
  puStack_78 = (undefined4 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined4 *)0x0;
  uVar9 = (ulong)*(uint *)(param_2 + 0x40);
  if (*(uint *)(param_2 + 0x40) != 0 && param_4 != 0) {
    uVar1 = 0;
    if (uVar9 != 0) {
      uVar1 = param_4 / uVar9;
    }
    if (param_4 == uVar1 * uVar9) {
      func_0x0001056c5718(&lStack_90,uVar1);
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0x3f800000;
      if (uVar9 <= param_4) {
        uVar9 = 0;
        do {
          uVar6 = uVar9 * *(uint *)(param_2 + 0x40);
          if ((param_4 < uVar6) || (param_4 - uVar6 < (ulong)*(uint *)(param_2 + 0x40))) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a796264);
            (*pcVar3)();
          }
          uVar4 = param_2;
          FUN_10a7984d4(param_2,uVar6 + param_3);
          puVar2 = puStack_70;
          uStack_c8 = uVar4;
          if ((uVar4 & 0xff) != 0) {
            puVar7 = puStack_78;
            uVar5 = (char)uVar4;
            if (puStack_78 != puStack_70) {
              do {
                puVar8 = puVar7 + 1;
                FUN_10a790fe8(param_2,*puVar7);
                puVar7 = puVar8;
              } while (puVar8 != puVar2);
              uVar5 = (undefined1)uStack_c8;
            }
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *param_1 = uVar5;
            goto LAB_10a796234;
          }
          uVar6 = (ulong)&uStack_c8 | 4;
          func_0x000107270fb0(&uStack_c0,uVar6,(ulong)&uStack_c8 | 4);
          if ((uVar6 & 1) == 0) {
            FUN_10a790fe8(param_2,uStack_c8._4_4_);
          }
          else {
            FUN_10a0e6678(&puStack_78,(ulong)&uStack_c8 | 4);
          }
          FUN_10a0e6678(&lStack_90,(ulong)&uStack_c8 | 4);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
      }
      uStack_98 = 0;
      *param_1 = 0;
      *(long *)(param_1 + 0x10) = lStack_88;
      *(long *)(param_1 + 8) = lStack_90;
      *(undefined8 *)(param_1 + 0x18) = uStack_80;
      lStack_88 = 0;
      uStack_80 = 0;
      lStack_90 = 0;
      *(undefined4 **)(param_1 + 0x28) = puStack_70;
      *(undefined4 **)(param_1 + 0x20) = puStack_78;
      *(undefined8 *)(param_1 + 0x30) = uStack_68;
      puStack_78 = (undefined4 *)0x0;
      puStack_70 = (undefined4 *)0x0;
      uStack_68 = 0;
LAB_10a796234:
      func_0x00010726f2e4(&uStack_c0);
      if (puStack_78 != (undefined4 *)0x0) {
        puStack_70 = puStack_78;
        __ZdlPv();
      }
      if (lStack_90 == 0) {
        return;
      }
      lStack_88 = lStack_90;
      __ZdlPv();
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10a796290; end: 10a79637b;  */

long FUN_10a796290(long param_1)

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



/* Entry: 10a79637c; end: 10a796477;  */

void FUN_10a79637c(long *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  plVar7 = (long *)param_1[1];
  if ((plVar7 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0))
  {
    lVar8 = *param_1;
    if ((lVar8 != 0) && (uVar10 = *(uint *)(param_1 + 3), uVar10 != 0)) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = *(uint *)((long)param_1 + 0x14) / uVar10;
      }
      if ((ulong)param_3 + 4 <= (ulong)uVar6) {
        uVar9 = 0;
        do {
          uVar2 = param_3 + uVar9 * uVar6 + (int)param_1[2];
          if (uVar2 <= *(uint *)(lVar8 + 0x40) && 3 < *(uint *)(lVar8 + 0x40) - uVar2) {
            *(float *)(*(long *)(lVar8 + 0x28) + (ulong)uVar2) = (float)param_2;
            uVar10 = *(uint *)(lVar8 + 0x60);
            if (uVar2 <= *(uint *)(lVar8 + 0x60)) {
              uVar10 = uVar2;
            }
            uVar3 = *(uint *)(lVar8 + 100);
            if (*(uint *)(lVar8 + 100) <= uVar2 + 4) {
              uVar3 = uVar2 + 4;
            }
            *(uint *)(lVar8 + 0x60) = uVar10;
            *(uint *)(lVar8 + 100) = uVar3;
            uVar10 = *(uint *)(param_1 + 3);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
    }
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a796478; end: 10a7965a3;  */

bool FUN_10a796478(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = true;
    if ((((param_2 != 0) && (*(int *)(param_1 + 0x2c) != -1)) &&
        (plVar5 = *(long **)(param_2 + 0xa8), plVar5 != (long *)0x0)) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
      lVar8 = *(long *)(param_2 + 0xa0);
      if (lVar8 == 0) {
        bVar4 = true;
      }
      else {
        plVar6 = *(long **)(param_1 + 0x38);
        if (plVar6 == (long *)0x0) {
          lVar7 = 0;
          plVar6 = (long *)0x0;
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          if (plVar6 == (long *)0x0) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(param_1 + 0x30);
          }
        }
        if (lVar7 == lVar8) {
          bVar4 = *(int *)(param_1 + 0x40) == *(int *)(param_2 + 0xd8);
        }
        else {
          bVar4 = false;
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
      }
      plVar6 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return bVar4;
}



/* Entry: 10a7965a4; end: 10a79668b;  */

undefined8 FUN_10a7965a4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  
  uVar4 = 4;
  if (*(int *)(param_1 + 0xf8) != 2) {
    uVar4 = 0;
  }
  uVar3 = 2;
  if (*(int *)(param_1 + 0xf8) != 1) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uVar6 = (uint)LZCOUNT(((uVar3 & 0x55555555) >> 1 | ((uVar3 & 0xaaaaaaaa) >> 1) << 2) << 0x1c);
  uVar4 = (uint)(*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x118)) >> (ulong)(uVar6 & 0x1f);
  plVar7 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  uVar3 = uVar4;
  if (plVar7 != plVar1) {
    lVar8 = *(long *)(param_1 + 0x68);
    do {
      lVar5 = *plVar7;
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x20) != 0)) &&
         (lVar2 = lVar5, FUN_10a791100(), lVar2 == param_1)) {
        lVar2 = lVar8 + (ulong)*(uint *)(lVar5 + 0x1c);
        FUN_10a107700(param_1 + 0x118,*(undefined8 *)(param_1 + 0x120),lVar2,
                      lVar2 + (ulong)*(uint *)(lVar5 + 0x20));
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    uVar3 = (uint)(*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x118)) >> (ulong)(uVar6 & 0x1f);
  }
  return CONCAT44(uVar3 - uVar4,uVar4);
}



/* Entry: 10a79668c; end: 10a797397;  */

void FUN_10a79668c(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  uint uStack_ec;
  long *plStack_e8;
  long *plStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  uVar16 = (int)param_2 - 8;
  uVar16 = uVar16 >> 3 & 0x1f | uVar16 * 0x20 & 0xff;
  if (uVar16 < 3) {
    if (uVar16 == 0) {
      FUN_10a797398(&uStack_d0,&UNK_10e4d977c,param_3,1,1,param_4,4,param_5,0,1);
    }
    else {
      if (uVar16 != 1) goto LAB_10a7967cc;
      FUN_10a797458(&uStack_d0,&UNK_10e4d977c,param_3,1,1,param_4,4,param_5,0,1);
    }
    param_1[1] = CONCAT44(uStack_c4,uStack_c8);
    *param_1 = CONCAT44(uStack_cc,uStack_d0);
    return;
  }
  uVar14 = (uint)param_3;
  uVar13 = (uint)param_5;
  if (uVar16 == 3) {
    puVar6 = (undefined8 *)0xc8;
    __Znwm();
    FUN_10a773774();
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *puVar6 = &PTR_FUN_110c189b8;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(char *)((long)puVar6 + 0xa9) = (char)param_6;
    *(undefined1 *)((long)puVar6 + 0xaa) = 0;
    puVar15 = puVar6 + 0x16;
    *puVar15 = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    if (param_6 == 0) {
LAB_10a7968d8:
      bVar10 = false;
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      if ((*(char *)((long)puVar6 + 0x21) == '\x01') &&
         ((1 < *(int *)(puVar6 + 3) || (1 < *(int *)((long)puVar6 + 0x1c))))) {
        *(undefined1 *)((long)puVar6 + 0xa9) = 0;
        goto LAB_10a7968d8;
      }
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar6 + 1) * 4;
      if (0x56 < *(uint *)(puVar6 + 1)) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      uStack_d0 = 0;
      func_0x0001098425e8(&lStack_90,
                          (long)*(int *)((long)puVar6 + 0x84) * (long)*(int *)(puVar6 + 0x10) *
                          (ulong)*(byte *)((long)ppuVar2 + 0x1b),&uStack_d0);
      bVar10 = true;
    }
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    uStack_d0 = 0;
    uStack_cc = (undefined4)puVar6[0x10];
    uStack_c8 = (undefined4)((ulong)puVar6[0x10] >> 0x20);
    uStack_c4 = 1;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b4 = 1;
    uStack_b0 = param_4 & 0xffffffff;
    if (bVar10) {
      uVar11 = 0x20;
    }
    else {
      uStack_b8 = 4;
      uVar11 = 0x24;
    }
    if (*(char *)((long)puVar6 + 0xa9) == '\x01') {
      uStack_b8 = uVar11;
    }
    lVar7 = 0;
    lStack_a0 = lStack_90;
    FUN_10a2421c8();
    plVar8 = *(long **)(lVar7 + 0x228);
    (**(code **)(*plVar8 + 0x20))(plVar8,&uStack_d0);
    FUN_10a0a25e4(&plStack_e8,plVar8);
    FUN_10a00e5c4(puVar6 + 5,&plStack_e8);
    plVar8 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      plVar9 = plStack_e0 + 1;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((((*(char *)((long)puVar6 + 0xa9) == '\x01') && (*(char *)((long)puVar6 + 0x21) == '\x01'))
        && (uVar16 = *(uint *)((long)puVar6 + 0x24), uVar16 != 0)) && (puVar6[5] != 0)) {
      if ((*(int *)(puVar6 + 3) < 2) && (*(int *)((long)puVar6 + 0x1c) < 2)) {
        bVar10 = false;
        plVar8 = (long *)0x0;
      }
      else {
        iVar19 = *(int *)(puVar6 + 1);
        func_0x00010ab79cdc();
        if (iVar19 == -1) {
          plVar8 = (long *)0x0;
        }
        else {
          FUN_10a1b70c8(&plStack_e8);
          uVar16 = *(uint *)((long)puVar6 + 0x24);
          plVar8 = plStack_e8;
        }
        bVar10 = true;
      }
      if (1 < uVar16) {
        uVar17 = NEON_smax(CONCAT44((int)((ulong)puVar6[0x10] >> 0x20) / 2,(int)puVar6[0x10] / 2),
                           0x100000001,4);
        uVar16 = 1;
        do {
          uVar18 = (uint)((ulong)uVar17 >> 0x20);
          uVar4 = (uint)uVar17;
          if (bVar10) {
            if ((plVar8 != (long *)0x0) &&
               (plVar9 = plVar8, (**(code **)(*plVar8 + 0x18))(plVar8,uVar4,uVar18), 0 < (int)plVar9
               )) {
              uStack_ec = uStack_ec & 0xffffff00;
              FUN_10a0cf3f0(&plStack_e8,(ulong)plVar9 & 0xffffffff,&uStack_ec);
              (**(code **)(*(long *)puVar6[5] + 0xa0))
                        ((long *)puVar6[5],0,0,0,uVar4,uVar18,0,plStack_e8,uVar16);
              goto LAB_10a796ff8;
            }
          }
          else {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar6 + 1) * 4;
            if (0x56 < *(uint *)(puVar6 + 1)) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            uStack_ec = 0;
            FUN_10a7bf804(&plStack_e8,
                          (ulong)*(byte *)((long)ppuVar2 + 0x1b) * (ulong)(uVar4 * uVar18),
                          &uStack_ec);
            (**(code **)(*(long *)puVar6[5] + 0xa0))
                      ((long *)puVar6[5],0,0,0,uVar4,uVar18,0,plStack_e8,uVar16);
LAB_10a796ff8:
            if (plStack_e8 != (long *)0x0) {
              plStack_e0 = plStack_e8;
              __ZdlPv();
            }
          }
          uVar17 = NEON_umax(CONCAT44(uVar18 >> 1,uVar4 >> 1),0x100000001,4);
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)((long)puVar6 + 0x24));
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8);
      }
    }
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    if ((*(byte *)((long)puVar6 + 0xa9) & 1) == 0) {
      if ((uVar13 == 0) || ((*(byte *)((long)puVar6 + 0x21) & 1) == 0)) {
        func_0x00010986e3dc(puVar15,1);
        if (puVar6[0x17] == puVar6[0x16]) {
LAB_10a797228:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79722c);
          (*pcVar5)();
        }
        ppuVar2 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        uStack_d0 = 0;
        func_0x000108a395f8(puVar6[0x16],
                            (long)*(int *)((long)puVar6 + 0x8c) * (long)*(int *)(puVar6 + 0x11) *
                            (ulong)*(byte *)((long)ppuVar2 + 0x1b),&uStack_d0);
      }
      else {
        func_0x00010986e3dc(puVar15,uVar13 + 1);
        uVar16 = 0;
        uVar17 = puVar6[0x10];
        ppuVar2 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        do {
          uVar12 = ((long)(puVar6[0x17] - puVar6[0x16]) >> 3) * -0x5555555555555555;
          if (uVar12 < (byte)uVar16 || uVar12 - (byte)uVar16 == 0) goto LAB_10a797228;
          iVar19 = (int)((ulong)uVar17 >> 0x20);
          uStack_d0 = 0;
          func_0x000108a395f8(puVar6[0x16] + (ulong)(uVar16 & 0xff) * 0x18,
                              (long)(int)(uint)*(byte *)((long)ppuVar2 + 0x1b) *
                              (long)((int)uVar17 * iVar19),&uStack_d0);
          uVar17 = NEON_smax(CONCAT44(iVar19 / 2,(int)uVar17 / 2),0x100000001,4);
          uVar16 = (uVar16 & 0xff) + 1;
        } while ((uVar16 & 0xff) < uVar13);
      }
    }
    plVar8 = (long *)0x20;
    __Znwm();
    plVar9 = plVar8 + 1;
    *plVar9 = 0;
    *plVar8 = (long)&PTR_FUN_110c18aa8;
    plVar8[2] = 0;
    plVar8[3] = (long)puVar6;
    if (puVar6[0x14] == 0) {
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6[0x13] = puVar6;
      puVar6[0x14] = plVar8;
    }
    else {
      if (*(long *)(puVar6[0x14] + 8) != -1) goto LAB_10a797200;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6[0x13] = puVar6;
      puVar6[0x14] = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (uVar16 != 7) {
LAB_10a7967cc:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f675bab,&UNK_10f675bf6,0x4b,&UNK_10f675cc9,param_7,param_8,
                            param_2);
      }
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    puVar6 = (undefined8 *)0xc8;
    __Znwm();
    FUN_10a773774();
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *puVar6 = &PTR_FUN_110c18b20;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *(char *)((long)puVar6 + 0xa9) = (char)param_6;
    *(undefined1 *)((long)puVar6 + 0xaa) = 0;
    puVar15 = puVar6 + 0x16;
    *puVar15 = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    if (param_6 == 0) {
LAB_10a7967b8:
      bVar10 = false;
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      if ((*(char *)((long)puVar6 + 0x21) == '\x01') &&
         ((1 < *(int *)(puVar6 + 3) || (1 < *(int *)((long)puVar6 + 0x1c))))) {
        *(undefined1 *)((long)puVar6 + 0xa9) = 0;
        goto LAB_10a7967b8;
      }
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar6 + 1) * 4;
      if (0x56 < *(uint *)(puVar6 + 1)) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      uStack_d0 = 0;
      uStack_cc = 0;
      func_0x000108a39cc8(&lStack_90,
                          (long)*(int *)((long)puVar6 + 0x84) * (long)*(int *)(puVar6 + 0x10) *
                          (ulong)*(byte *)((long)ppuVar2 + 0x1b),&uStack_d0);
      bVar10 = true;
    }
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    uStack_d0 = 0;
    uStack_cc = (undefined4)puVar6[0x10];
    uStack_c8 = (undefined4)((ulong)puVar6[0x10] >> 0x20);
    uStack_c4 = 1;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b4 = 1;
    uStack_b0 = param_4 & 0xffffffff;
    if (bVar10) {
      uVar11 = 0x20;
    }
    else {
      uStack_b8 = 4;
      uVar11 = 0x24;
    }
    if (*(char *)((long)puVar6 + 0xa9) == '\x01') {
      uStack_b8 = uVar11;
    }
    lVar7 = 0;
    lStack_a0 = lStack_90;
    FUN_10a2421c8();
    plVar8 = *(long **)(lVar7 + 0x228);
    (**(code **)(*plVar8 + 0x20))(plVar8,&uStack_d0);
    FUN_10a0a25e4(&plStack_e8,plVar8);
    FUN_10a00e5c4(puVar6 + 5,&plStack_e8);
    plVar8 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      plVar9 = plStack_e0 + 1;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((((*(char *)((long)puVar6 + 0xa9) == '\x01') && (*(char *)((long)puVar6 + 0x21) == '\x01'))
        && (uVar16 = *(uint *)((long)puVar6 + 0x24), uVar16 != 0)) && (puVar6[5] != 0)) {
      if ((*(int *)(puVar6 + 3) < 2) && (*(int *)((long)puVar6 + 0x1c) < 2)) {
        bVar10 = false;
        plVar8 = (long *)0x0;
      }
      else {
        iVar19 = *(int *)(puVar6 + 1);
        func_0x00010ab79cdc();
        if (iVar19 == -1) {
          plVar8 = (long *)0x0;
        }
        else {
          FUN_10a1b70c8(&plStack_e8);
          uVar16 = *(uint *)((long)puVar6 + 0x24);
          plVar8 = plStack_e8;
        }
        bVar10 = true;
      }
      if (1 < uVar16) {
        uVar17 = NEON_smax(CONCAT44((int)((ulong)puVar6[0x10] >> 0x20) / 2,(int)puVar6[0x10] / 2),
                           0x100000001,4);
        uVar16 = 1;
        do {
          uVar18 = (uint)((ulong)uVar17 >> 0x20);
          uVar4 = (uint)uVar17;
          if (bVar10) {
            if ((plVar8 != (long *)0x0) &&
               (plVar9 = plVar8, (**(code **)(*plVar8 + 0x18))(plVar8,uVar4,uVar18), 0 < (int)plVar9
               )) {
              uStack_ec = uStack_ec & 0xffffff00;
              FUN_10a0cf3f0(&plStack_e8,(ulong)plVar9 & 0xffffffff,&uStack_ec);
              (**(code **)(*(long *)puVar6[5] + 0xa0))
                        ((long *)puVar6[5],0,0,0,uVar4,uVar18,0,plStack_e8,uVar16);
              goto LAB_10a796cf8;
            }
          }
          else {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar6 + 1) * 4;
            if (0x56 < *(uint *)(puVar6 + 1)) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            FUN_10a7c2e4c(&plStack_e8,
                          (ulong)*(byte *)((long)ppuVar2 + 0x1b) * (ulong)(uVar4 * uVar18),0);
            (**(code **)(*(long *)puVar6[5] + 0xa0))
                      ((long *)puVar6[5],0,0,0,uVar4,uVar18,0,plStack_e8,uVar16);
LAB_10a796cf8:
            if (plStack_e8 != (long *)0x0) {
              plStack_e0 = plStack_e8;
              __ZdlPv();
            }
          }
          uVar17 = NEON_umax(CONCAT44(uVar18 >> 1,uVar4 >> 1),0x100000001,4);
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)((long)puVar6 + 0x24));
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8);
      }
    }
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    if ((*(byte *)((long)puVar6 + 0xa9) & 1) == 0) {
      if ((uVar13 == 0) || ((*(byte *)((long)puVar6 + 0x21) & 1) == 0)) {
        FUN_10a7c1e54(puVar15,1);
        if (puVar6[0x17] == puVar6[0x16]) goto LAB_10a797228;
        ppuVar2 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        FUN_10a7c1ff4(puVar6[0x16],
                      (long)*(int *)((long)puVar6 + 0x8c) * (long)*(int *)(puVar6 + 0x11) *
                      (ulong)*(byte *)((long)ppuVar2 + 0x1b),0);
      }
      else {
        FUN_10a7c1e54(puVar15,uVar13 + 1);
        uVar16 = 0;
        uVar17 = puVar6[0x10];
        ppuVar2 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        do {
          uVar12 = ((long)(puVar6[0x17] - puVar6[0x16]) >> 3) * -0x5555555555555555;
          if (uVar12 < (byte)uVar16 || uVar12 - (byte)uVar16 == 0) goto LAB_10a797228;
          iVar19 = (int)((ulong)uVar17 >> 0x20);
          FUN_10a7c1ff4(puVar6[0x16] + (ulong)(uVar16 & 0xff) * 0x18,
                        (long)(int)(uint)*(byte *)((long)ppuVar2 + 0x1b) *
                        (long)((int)uVar17 * iVar19),0);
          uVar17 = NEON_smax(CONCAT44(iVar19 / 2,(int)uVar17 / 2),0x100000001,4);
          uVar16 = (uVar16 & 0xff) + 1;
        } while ((uVar16 & 0xff) < uVar13);
      }
    }
    plVar8 = (long *)0x20;
    __Znwm();
    plVar9 = plVar8 + 1;
    *plVar9 = 0;
    *plVar8 = (long)&PTR_FUN_110c18c10;
    plVar8[2] = 0;
    plVar8[3] = (long)puVar6;
    if (puVar6[0x14] == 0) {
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6[0x13] = puVar6;
      puVar6[0x14] = plVar8;
    }
    else {
      if (*(long *)(puVar6[0x14] + 8) != -1) goto LAB_10a797200;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6[0x13] = puVar6;
      puVar6[0x14] = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10a797200:
  *param_1 = puVar6;
  param_1[1] = plVar8;
  return;
}



/* Entry: 10a797398; end: 10a797457;  */

long * FUN_10a797398(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 200;
  __Znwm();
  FUN_10a7b6b48();
  *param_1 = lVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_FUN_110c19098;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = lVar2;
  param_1[1] = (long)puVar3;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x98;
  }
  FUN_10a7ba894(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 10a797458; end: 10a797517;  */

long * FUN_10a797458(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 200;
  __Znwm();
  FUN_10a7ba9b0();
  *param_1 = lVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_FUN_110c19200;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = lVar2;
  param_1[1] = (long)puVar3;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x98;
  }
  FUN_10a7be9b8(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 10a797518; end: 10a797abf;  */

void FUN_10a797518(long *param_1,long param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong unaff_x27;
  float fVar25;
  
  lVar5 = 0;
  if (*param_4 == 0) goto LAB_10a797a14;
  plVar18 = (long *)(param_2 + 0x38);
  uVar23 = param_3[3];
  uVar24 = *(ulong *)(param_2 + 0x40);
  if (uVar24 != 0) {
    uVar8 = uVar24 - 1;
    if ((uVar24 & uVar8) == 0) {
      unaff_x27 = uVar8 & uVar23;
    }
    else {
      unaff_x27 = uVar23;
      if (uVar24 <= uVar23) {
        uVar11 = 0;
        if (uVar24 != 0) {
          uVar11 = uVar23 / uVar24;
        }
        unaff_x27 = uVar23 - uVar11 * uVar24;
      }
    }
    puVar10 = *(undefined8 **)(*plVar18 + unaff_x27 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar17 = (long *)*puVar10; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
        uVar11 = plVar17[1];
        if (uVar11 == uVar23) {
          if (plVar17[5] == uVar23) goto LAB_10a7978b4;
        }
        else {
          if ((uVar24 & uVar8) == 0) {
            uVar11 = uVar11 & uVar8;
          }
          else if (uVar24 <= uVar11) {
            uVar9 = 0;
            if (uVar24 != 0) {
              uVar9 = uVar11 / uVar24;
            }
            uVar11 = uVar11 - uVar9 * uVar24;
          }
          if (uVar11 != unaff_x27) break;
        }
      }
    }
  }
  plVar17 = (long *)0x48;
  __Znwm();
  *plVar17 = 0;
  plVar17[1] = uVar23;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar17 + 2,*param_3,param_3[1]);
    uVar8 = param_3[3];
  }
  else {
    lVar5 = *param_3;
    plVar17[3] = param_3[1];
    plVar17[2] = lVar5;
    plVar17[4] = param_3[2];
    uVar8 = uVar23;
  }
  plVar17[5] = uVar8;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  fVar25 = (float)(*(long *)(param_2 + 0x50) + 1);
  if ((uVar24 == 0) || (*(float *)(param_2 + 0x58) * (float)uVar24 < fVar25)) {
    uVar8 = 1;
    if (2 < uVar24) {
      uVar8 = (ulong)((uVar24 & uVar24 - 1) != 0);
    }
    uVar8 = uVar8 | uVar24 << 1;
    uVar24 = (ulong)(fVar25 / *(float *)(param_2 + 0x58));
    if (uVar8 <= uVar24) {
      uVar8 = uVar24;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar24 = *(ulong *)(param_2 + 0x40);
    if (uVar24 < uVar8) {
LAB_10a7976c8:
      if (uVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a797a90;
      }
      lVar5 = uVar8 << 3;
      __Znwm();
      lVar6 = *plVar18;
      *plVar18 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      uVar24 = 0;
      *(ulong *)(param_2 + 0x40) = uVar8;
      do {
        *(undefined8 *)(*plVar18 + uVar24 * 8) = 0;
        uVar24 = uVar24 + 1;
      } while (uVar8 != uVar24);
      plVar12 = *(long **)(param_2 + 0x48);
      uVar24 = uVar8;
      if (plVar12 != (long *)0x0) {
        uVar11 = plVar12[1];
        uVar9 = uVar8 - 1;
        if ((uVar8 & uVar9) == 0) {
          uVar11 = uVar11 & uVar9;
        }
        else if (uVar8 <= uVar11) {
          uVar16 = 0;
          if (uVar8 != 0) {
            uVar16 = uVar11 / uVar8;
          }
          uVar11 = uVar11 - uVar16 * uVar8;
        }
        *(undefined8 **)(*plVar18 + uVar11 * 8) = (undefined8 *)(param_2 + 0x48);
        plVar14 = (long *)*plVar12;
        while (plVar14 != (long *)0x0) {
          uVar16 = plVar14[1];
          if ((uVar8 & uVar9) == 0) {
            uVar16 = uVar16 & uVar9;
          }
          else if (uVar8 <= uVar16) {
            uVar3 = 0;
            if (uVar8 != 0) {
              uVar3 = uVar16 / uVar8;
            }
            uVar16 = uVar16 - uVar3 * uVar8;
          }
          plVar15 = plVar14;
          if (uVar16 != uVar11) {
            lVar5 = *plVar18;
            if (*(long *)(lVar5 + uVar16 * 8) == 0) {
              *(long **)(lVar5 + uVar16 * 8) = plVar12;
              uVar11 = uVar16;
            }
            else {
              *plVar12 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar5 + uVar16 * 8);
              **(long **)(lVar5 + uVar16 * 8) = (long)plVar14;
              plVar15 = plVar12;
            }
          }
          plVar12 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
    }
    else if (uVar8 < uVar24) {
      uVar11 = (ulong)((float)*(ulong *)(param_2 + 0x50) / *(float *)(param_2 + 0x58));
      if ((uVar24 < 3) || ((uVar24 & uVar24 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 < uVar24) {
        if (uVar8 != 0) goto LAB_10a7976c8;
        lVar5 = *plVar18;
        *plVar18 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_2 + 0x40) = 0;
        uVar24 = 0;
      }
      else {
        uVar24 = *(ulong *)(param_2 + 0x40);
      }
    }
    if ((uVar24 & uVar24 - 1) == 0) {
      unaff_x27 = uVar24 - 1 & uVar23;
    }
    else {
      unaff_x27 = uVar23;
      if (uVar24 <= uVar23) {
        uVar8 = 0;
        if (uVar24 != 0) {
          uVar8 = uVar23 / uVar24;
        }
        unaff_x27 = uVar23 - uVar8 * uVar24;
      }
    }
  }
  lVar5 = *plVar18;
  plVar12 = *(long **)(lVar5 + unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(param_2 + 0x48);
    *plVar17 = *plVar12;
    *plVar12 = (long)plVar17;
    *(long **)(lVar5 + unaff_x27 * 8) = plVar12;
    if (*plVar17 != 0) {
      uVar23 = *(ulong *)(*plVar17 + 8);
      if ((uVar24 & uVar24 - 1) == 0) {
        uVar23 = uVar23 & uVar24 - 1;
      }
      else if (uVar24 <= uVar23) {
        uVar8 = 0;
        if (uVar24 != 0) {
          uVar8 = uVar23 / uVar24;
        }
        uVar23 = uVar23 - uVar8 * uVar24;
      }
      *(long **)(*plVar18 + uVar23 * 8) = plVar17;
    }
  }
  else {
    *plVar17 = *plVar12;
    *plVar12 = (long)plVar17;
  }
  *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
LAB_10a7978b4:
  plVar18 = plVar17 + 6;
  puVar20 = (undefined8 *)plVar17[7];
  puVar22 = (undefined8 *)*plVar18;
  puVar10 = (undefined8 *)*plVar18;
  do {
    puVar21 = puVar10;
    if (puVar21 == puVar20) goto LAB_10a797944;
    puVar10 = puVar21 + 2;
  } while ((puVar21[1] != 0) && (puVar22 = puVar20, *(long *)(puVar21[1] + 8) != -1));
  puVar22 = puVar21;
  if ((puVar21 != puVar20) && (puVar10 != puVar20)) {
    do {
      lVar5 = puVar10[1];
      if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != -1)) {
        uVar13 = *puVar10;
        *puVar10 = 0;
        puVar10[1] = 0;
        lVar6 = puVar21[1];
        *puVar21 = uVar13;
        puVar21[1] = lVar5;
        if (lVar6 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        puVar21 = puVar21 + 2;
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar20);
    puVar20 = (undefined8 *)plVar17[7];
    puVar22 = puVar21;
  }
LAB_10a797944:
  func_0x00010a797fa8(plVar18,puVar22,puVar20);
  lVar5 = *param_4;
  lVar6 = param_4[1];
  if (lVar6 != 0) {
    plVar12 = (long *)(lVar6 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar12 = (long *)plVar17[7];
  if (plVar12 < (long *)plVar17[8]) {
    *plVar12 = lVar5;
    plVar12[1] = lVar6;
    plVar12 = plVar12 + 2;
  }
  else {
    lVar19 = (long)plVar12 - *plVar18;
    uVar24 = (lVar19 >> 4) + 1;
    if (uVar24 >> 0x3c != 0) {
      FUN_10a7a75fc();
LAB_10a797a90:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a797a94);
      (*pcVar4)();
    }
    uVar8 = plVar17[8] - *plVar18;
    uVar23 = (long)uVar8 >> 3;
    if (uVar23 <= uVar24) {
      uVar23 = uVar24;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar23 = 0xfffffffffffffff;
    }
    if (uVar23 >> 0x3c != 0) {
      func_0x000109ffded8();
      goto LAB_10a797a90;
    }
    lVar7 = uVar23 << 4;
    __Znwm();
    plVar18 = (long *)(lVar7 + lVar19);
    *plVar18 = lVar5;
    plVar18[1] = lVar6;
    plVar12 = plVar18 + 2;
    lVar5 = plVar17[6];
    lVar6 = (long)plVar18 - (plVar17[7] - lVar5);
    _memcpy(lVar6,lVar5);
    plVar17[6] = lVar6;
    plVar17[7] = (long)plVar12;
    plVar17[8] = lVar7 + uVar23 * 0x10;
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
    }
  }
  plVar17[7] = (long)plVar12;
  lVar5 = *param_4;
LAB_10a797a14:
  lVar6 = param_4[1];
  *param_1 = lVar5;
  param_1[1] = lVar6;
  *param_4 = 0;
  param_4[1] = 0;
  return;
}



/* Entry: 10a797ac0; end: 10a797b93;  */

void FUN_10a797ac0(undefined8 *param_1,long param_2,ulong *param_3)

{
  undefined **ppuVar1;
  char cVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  uint uStack_ec;
  long *plStack_e8;
  long *plStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  plVar7 = (long *)*param_3;
  if (plVar7 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar5 = param_2;
  (**(code **)(*plVar7 + 0x50))();
  uVar10 = (uint)((ulong)lVar5 >> 0x20);
  plVar8 = (long *)*param_3;
  (**(code **)(*plVar8 + 0x68))();
  uVar16 = 0;
  if ((uint)plVar8 != 2) {
    uVar16 = (uint)plVar8;
  }
  uVar9 = *param_3;
  FUN_10a094ad8();
  FUN_10a0962c8(plVar7);
  if ((*(long *)(param_2 + 0x28) == 0) ||
     (plVar8 = *(long **)(*(long *)(param_2 + 0x20) + 0x30), plVar8 == (long *)0x0)) {
    iVar19 = 0;
  }
  else {
    (**(code **)(*plVar8 + 0x58))();
    iVar19 = (int)plVar8;
  }
  uVar10 = (uVar10 & 0xff) - 8;
  uVar10 = uVar10 >> 3 & 0x1f | uVar10 * 0x20 & 0xff;
  if (uVar10 < 3) {
    if (uVar10 == 0) {
      FUN_10a797398(&uStack_d0,&UNK_10e4d977c,plVar7,1,1,uVar16,4,uVar9,0,1);
    }
    else {
      if (uVar10 != 1) goto LAB_10a7967cc;
      FUN_10a797458(&uStack_d0,&UNK_10e4d977c,plVar7,1,1,uVar16,4,uVar9,0,1);
    }
    param_1[1] = CONCAT44(uStack_c4,uStack_c8);
    *param_1 = CONCAT44(uStack_cc,uStack_d0);
    return;
  }
  uVar14 = (uint)plVar7;
  uVar13 = (uint)uVar9;
  if (uVar10 == 3) {
    puVar4 = (undefined8 *)0xc8;
    __Znwm();
    FUN_10a773774();
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    *puVar4 = &PTR_FUN_110c189b8;
    *(undefined1 *)(puVar4 + 0x15) = 1;
    *(char *)((long)puVar4 + 0xa9) = (char)iVar19;
    *(undefined1 *)((long)puVar4 + 0xaa) = 0;
    puVar15 = puVar4 + 0x16;
    *puVar15 = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    if (iVar19 == 0) {
LAB_10a7968d8:
      bVar11 = false;
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      if ((*(char *)((long)puVar4 + 0x21) == '\x01') &&
         ((1 < *(int *)(puVar4 + 3) || (1 < *(int *)((long)puVar4 + 0x1c))))) {
        *(undefined1 *)((long)puVar4 + 0xa9) = 0;
        goto LAB_10a7968d8;
      }
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar4 + 1) * 4;
      if (0x56 < *(uint *)(puVar4 + 1)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uStack_d0 = 0;
      func_0x0001098425e8(&lStack_90,
                          (long)*(int *)((long)puVar4 + 0x84) * (long)*(int *)(puVar4 + 0x10) *
                          (ulong)*(byte *)((long)ppuVar1 + 0x1b),&uStack_d0);
      bVar11 = true;
    }
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_d0 = 0;
    uStack_cc = (undefined4)puVar4[0x10];
    uStack_c8 = (undefined4)((ulong)puVar4[0x10] >> 0x20);
    uStack_c4 = 1;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b4 = 1;
    uStack_b0 = (ulong)uVar16;
    if (bVar11) {
      uVar12 = 0x20;
    }
    else {
      uStack_b8 = 4;
      uVar12 = 0x24;
    }
    if (*(char *)((long)puVar4 + 0xa9) == '\x01') {
      uStack_b8 = uVar12;
    }
    lVar5 = 0;
    lStack_a0 = lStack_90;
    FUN_10a2421c8();
    plVar8 = *(long **)(lVar5 + 0x228);
    (**(code **)(*plVar8 + 0x20))(plVar8,&uStack_d0);
    FUN_10a0a25e4(&plStack_e8,plVar8);
    FUN_10a00e5c4(puVar4 + 5,&plStack_e8);
    plVar8 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      plVar6 = plStack_e0 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((((*(char *)((long)puVar4 + 0xa9) == '\x01') && (*(char *)((long)puVar4 + 0x21) == '\x01'))
        && (uVar16 = *(uint *)((long)puVar4 + 0x24), uVar16 != 0)) && (puVar4[5] != 0)) {
      if ((*(int *)(puVar4 + 3) < 2) && (*(int *)((long)puVar4 + 0x1c) < 2)) {
        bVar11 = false;
        plVar8 = (long *)0x0;
      }
      else {
        iVar19 = *(int *)(puVar4 + 1);
        func_0x00010ab79cdc();
        if (iVar19 == -1) {
          plVar8 = (long *)0x0;
        }
        else {
          FUN_10a1b70c8(&plStack_e8);
          uVar16 = *(uint *)((long)puVar4 + 0x24);
          plVar8 = plStack_e8;
        }
        bVar11 = true;
      }
      if (1 < uVar16) {
        uVar17 = NEON_smax(CONCAT44((int)((ulong)puVar4[0x10] >> 0x20) / 2,(int)puVar4[0x10] / 2),
                           0x100000001,4);
        uVar16 = 1;
        do {
          uVar18 = (uint)((ulong)uVar17 >> 0x20);
          uVar10 = (uint)uVar17;
          if (bVar11) {
            if ((plVar8 != (long *)0x0) &&
               (plVar6 = plVar8, (**(code **)(*plVar8 + 0x18))(plVar8,uVar10,uVar18),
               0 < (int)plVar6)) {
              uStack_ec = uStack_ec & 0xffffff00;
              FUN_10a0cf3f0(&plStack_e8,(ulong)plVar6 & 0xffffffff,&uStack_ec);
              (**(code **)(*(long *)puVar4[5] + 0xa0))
                        ((long *)puVar4[5],0,0,0,uVar10,uVar18,0,plStack_e8,uVar16);
              goto LAB_10a796ff8;
            }
          }
          else {
            ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar4 + 1) * 4;
            if (0x56 < *(uint *)(puVar4 + 1)) {
              ppuVar1 = &PTR_DAT_110ae4700;
            }
            uStack_ec = 0;
            FUN_10a7bf804(&plStack_e8,
                          (ulong)*(byte *)((long)ppuVar1 + 0x1b) * (ulong)(uVar10 * uVar18),
                          &uStack_ec);
            (**(code **)(*(long *)puVar4[5] + 0xa0))
                      ((long *)puVar4[5],0,0,0,uVar10,uVar18,0,plStack_e8,uVar16);
LAB_10a796ff8:
            if (plStack_e8 != (long *)0x0) {
              plStack_e0 = plStack_e8;
              __ZdlPv();
            }
          }
          uVar17 = NEON_umax(CONCAT44(uVar18 >> 1,uVar10 >> 1),0x100000001,4);
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)((long)puVar4 + 0x24));
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8);
      }
    }
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    if ((*(byte *)((long)puVar4 + 0xa9) & 1) == 0) {
      if ((uVar13 == 0) || ((*(byte *)((long)puVar4 + 0x21) & 1) == 0)) {
        func_0x00010986e3dc(puVar15,1);
        if (puVar4[0x17] == puVar4[0x16]) {
LAB_10a797228:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a79722c);
          (*pcVar3)();
        }
        ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar7 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uStack_d0 = 0;
        func_0x000108a395f8(puVar4[0x16],
                            (long)*(int *)((long)puVar4 + 0x8c) * (long)*(int *)(puVar4 + 0x11) *
                            (ulong)*(byte *)((long)ppuVar1 + 0x1b),&uStack_d0);
      }
      else {
        func_0x00010986e3dc(puVar15,uVar13 + 1);
        uVar16 = 0;
        uVar17 = puVar4[0x10];
        ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar7 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        do {
          uVar9 = ((long)(puVar4[0x17] - puVar4[0x16]) >> 3) * -0x5555555555555555;
          if (uVar9 < (byte)uVar16 || uVar9 - (byte)uVar16 == 0) goto LAB_10a797228;
          iVar19 = (int)((ulong)uVar17 >> 0x20);
          uStack_d0 = 0;
          func_0x000108a395f8(puVar4[0x16] + (ulong)(uVar16 & 0xff) * 0x18,
                              (long)(int)(uint)*(byte *)((long)ppuVar1 + 0x1b) *
                              (long)((int)uVar17 * iVar19),&uStack_d0);
          uVar17 = NEON_smax(CONCAT44(iVar19 / 2,(int)uVar17 / 2),0x100000001,4);
          uVar16 = (uVar16 & 0xff) + 1;
        } while ((uVar16 & 0xff) < uVar13);
      }
    }
    plVar7 = (long *)0x20;
    __Znwm();
    plVar8 = plVar7 + 1;
    *plVar8 = 0;
    *plVar7 = (long)&PTR_FUN_110c18aa8;
    plVar7[2] = 0;
    plVar7[3] = (long)puVar4;
    if (puVar4[0x14] == 0) {
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4[0x13] = puVar4;
      puVar4[0x14] = plVar7;
    }
    else {
      if (*(long *)(puVar4[0x14] + 8) != -1) goto LAB_10a797200;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4[0x13] = puVar4;
      puVar4[0x14] = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (uVar10 != 7) {
LAB_10a7967cc:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f675bab,&UNK_10f675bf6,0x4b,&UNK_10f675cc9);
      }
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    puVar4 = (undefined8 *)0xc8;
    __Znwm();
    FUN_10a773774();
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    *puVar4 = &PTR_FUN_110c18b20;
    *(undefined1 *)(puVar4 + 0x15) = 1;
    *(char *)((long)puVar4 + 0xa9) = (char)iVar19;
    *(undefined1 *)((long)puVar4 + 0xaa) = 0;
    puVar15 = puVar4 + 0x16;
    *puVar15 = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    if (iVar19 == 0) {
LAB_10a7967b8:
      bVar11 = false;
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      if ((*(char *)((long)puVar4 + 0x21) == '\x01') &&
         ((1 < *(int *)(puVar4 + 3) || (1 < *(int *)((long)puVar4 + 0x1c))))) {
        *(undefined1 *)((long)puVar4 + 0xa9) = 0;
        goto LAB_10a7967b8;
      }
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar4 + 1) * 4;
      if (0x56 < *(uint *)(puVar4 + 1)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uStack_d0 = 0;
      uStack_cc = 0;
      func_0x000108a39cc8(&lStack_90,
                          (long)*(int *)((long)puVar4 + 0x84) * (long)*(int *)(puVar4 + 0x10) *
                          (ulong)*(byte *)((long)ppuVar1 + 0x1b),&uStack_d0);
      bVar11 = true;
    }
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_d0 = 0;
    uStack_cc = (undefined4)puVar4[0x10];
    uStack_c8 = (undefined4)((ulong)puVar4[0x10] >> 0x20);
    uStack_c4 = 1;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b4 = 1;
    uStack_b0 = (ulong)uVar16;
    if (bVar11) {
      uVar12 = 0x20;
    }
    else {
      uStack_b8 = 4;
      uVar12 = 0x24;
    }
    if (*(char *)((long)puVar4 + 0xa9) == '\x01') {
      uStack_b8 = uVar12;
    }
    lVar5 = 0;
    lStack_a0 = lStack_90;
    FUN_10a2421c8();
    plVar8 = *(long **)(lVar5 + 0x228);
    (**(code **)(*plVar8 + 0x20))(plVar8,&uStack_d0);
    FUN_10a0a25e4(&plStack_e8,plVar8);
    FUN_10a00e5c4(puVar4 + 5,&plStack_e8);
    plVar8 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      plVar6 = plStack_e0 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((((*(char *)((long)puVar4 + 0xa9) == '\x01') && (*(char *)((long)puVar4 + 0x21) == '\x01'))
        && (uVar16 = *(uint *)((long)puVar4 + 0x24), uVar16 != 0)) && (puVar4[5] != 0)) {
      if ((*(int *)(puVar4 + 3) < 2) && (*(int *)((long)puVar4 + 0x1c) < 2)) {
        bVar11 = false;
        plVar8 = (long *)0x0;
      }
      else {
        iVar19 = *(int *)(puVar4 + 1);
        func_0x00010ab79cdc();
        if (iVar19 == -1) {
          plVar8 = (long *)0x0;
        }
        else {
          FUN_10a1b70c8(&plStack_e8);
          uVar16 = *(uint *)((long)puVar4 + 0x24);
          plVar8 = plStack_e8;
        }
        bVar11 = true;
      }
      if (1 < uVar16) {
        uVar17 = NEON_smax(CONCAT44((int)((ulong)puVar4[0x10] >> 0x20) / 2,(int)puVar4[0x10] / 2),
                           0x100000001,4);
        uVar16 = 1;
        do {
          uVar18 = (uint)((ulong)uVar17 >> 0x20);
          uVar10 = (uint)uVar17;
          if (bVar11) {
            if ((plVar8 != (long *)0x0) &&
               (plVar6 = plVar8, (**(code **)(*plVar8 + 0x18))(plVar8,uVar10,uVar18),
               0 < (int)plVar6)) {
              uStack_ec = uStack_ec & 0xffffff00;
              FUN_10a0cf3f0(&plStack_e8,(ulong)plVar6 & 0xffffffff,&uStack_ec);
              (**(code **)(*(long *)puVar4[5] + 0xa0))
                        ((long *)puVar4[5],0,0,0,uVar10,uVar18,0,plStack_e8,uVar16);
              goto LAB_10a796cf8;
            }
          }
          else {
            ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(puVar4 + 1) * 4;
            if (0x56 < *(uint *)(puVar4 + 1)) {
              ppuVar1 = &PTR_DAT_110ae4700;
            }
            FUN_10a7c2e4c(&plStack_e8,
                          (ulong)*(byte *)((long)ppuVar1 + 0x1b) * (ulong)(uVar10 * uVar18),0);
            (**(code **)(*(long *)puVar4[5] + 0xa0))
                      ((long *)puVar4[5],0,0,0,uVar10,uVar18,0,plStack_e8,uVar16);
LAB_10a796cf8:
            if (plStack_e8 != (long *)0x0) {
              plStack_e0 = plStack_e8;
              __ZdlPv();
            }
          }
          uVar17 = NEON_umax(CONCAT44(uVar18 >> 1,uVar10 >> 1),0x100000001,4);
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)((long)puVar4 + 0x24));
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8);
      }
    }
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    if ((*(byte *)((long)puVar4 + 0xa9) & 1) == 0) {
      if ((uVar13 == 0) || ((*(byte *)((long)puVar4 + 0x21) & 1) == 0)) {
        FUN_10a7c1e54(puVar15,1);
        if (puVar4[0x17] == puVar4[0x16]) goto LAB_10a797228;
        ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar7 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        FUN_10a7c1ff4(puVar4[0x16],
                      (long)*(int *)((long)puVar4 + 0x8c) * (long)*(int *)(puVar4 + 0x11) *
                      (ulong)*(byte *)((long)ppuVar1 + 0x1b),0);
      }
      else {
        FUN_10a7c1e54(puVar15,uVar13 + 1);
        uVar16 = 0;
        uVar17 = puVar4[0x10];
        ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar7 & 0xffffffff) * 4;
        if (0x56 < uVar14) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        do {
          uVar9 = ((long)(puVar4[0x17] - puVar4[0x16]) >> 3) * -0x5555555555555555;
          if (uVar9 < (byte)uVar16 || uVar9 - (byte)uVar16 == 0) goto LAB_10a797228;
          iVar19 = (int)((ulong)uVar17 >> 0x20);
          FUN_10a7c1ff4(puVar4[0x16] + (ulong)(uVar16 & 0xff) * 0x18,
                        (long)(int)(uint)*(byte *)((long)ppuVar1 + 0x1b) *
                        (long)((int)uVar17 * iVar19),0);
          uVar17 = NEON_smax(CONCAT44(iVar19 / 2,(int)uVar17 / 2),0x100000001,4);
          uVar16 = (uVar16 & 0xff) + 1;
        } while ((uVar16 & 0xff) < uVar13);
      }
    }
    plVar7 = (long *)0x20;
    __Znwm();
    plVar8 = plVar7 + 1;
    *plVar8 = 0;
    *plVar7 = (long)&PTR_FUN_110c18c10;
    plVar7[2] = 0;
    plVar7[3] = (long)puVar4;
    if (puVar4[0x14] == 0) {
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4[0x13] = puVar4;
      puVar4[0x14] = plVar7;
    }
    else {
      if (*(long *)(puVar4[0x14] + 8) != -1) goto LAB_10a797200;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4[0x13] = puVar4;
      puVar4[0x14] = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a797200:
  *param_1 = puVar4;
  param_1[1] = plVar7;
  return;
}



/* Entry: 10a797b94; end: 10a798073;  */

void FUN_10a797b94(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  uVar14 = *(ulong *)(param_2 + 0x18);
  plVar2 = (long *)(param_1 + 0x10);
  FUN_10a7c59a4(plVar2,uVar14);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (plVar2[6] == 0) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x40);
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar6 & uVar14;
    }
    else {
      uVar8 = uVar14;
      if (uVar4 <= uVar14) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar14 / uVar4;
        }
        uVar8 = uVar14 - uVar8 * uVar4;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x38) + uVar8 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar9; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        uVar10 = plVar13[1];
        if (uVar10 == uVar14) {
          if (plVar13[5] == uVar14) {
            puVar17 = (undefined8 *)plVar13[6];
            puVar15 = (undefined8 *)plVar13[7];
            puVar9 = puVar17;
            goto joined_r0x00010a797dec;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
      }
    }
  }
  goto LAB_10a797c64;
  while( true ) {
    puVar9 = puVar16 + 2;
    if ((puVar16[1] == 0) || (puVar17 = puVar15, *(long *)(puVar16[1] + 8) == -1)) break;
joined_r0x00010a797dec:
    puVar16 = puVar9;
    if (puVar16 == puVar15) goto LAB_10a797e70;
  }
  puVar17 = puVar16;
  if ((puVar16 != puVar15) && (puVar9 != puVar15)) {
    do {
      lVar5 = puVar9[1];
      if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != -1)) {
        uVar7 = *puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        lVar3 = puVar16[1];
        *puVar16 = uVar7;
        puVar16[1] = lVar5;
        if (lVar3 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        puVar16 = puVar16 + 2;
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar15);
    puVar15 = (undefined8 *)plVar13[7];
    puVar17 = puVar16;
  }
LAB_10a797e70:
  func_0x00010a797fa8(plVar13 + 6,puVar17,puVar15);
  if (plVar13[6] != plVar13[7]) {
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x40);
  lVar5 = *plVar13;
  uVar14 = plVar13[1];
  uVar6 = uVar4 - 1;
  if ((uVar4 & uVar6) == 0) {
    uVar14 = uVar6 & uVar14;
  }
  else if (uVar4 <= uVar14) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar14 / uVar4;
    }
    uVar14 = uVar14 - uVar8 * uVar4;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x38) + uVar14 * 8);
  do {
    plVar11 = plVar12;
    plVar12 = (long *)*plVar11;
  } while ((long *)*plVar11 != plVar13);
  if (plVar11 == (long *)(param_1 + 0x48)) {
LAB_10a797f08:
    if (lVar5 == 0) {
LAB_10a797f3c:
      *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar14 * 8) = 0;
      lVar5 = *plVar13;
      goto LAB_10a797f44;
    }
    uVar8 = *(ulong *)(lVar5 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar10 = uVar8 & uVar6;
    }
    else {
      uVar10 = uVar8;
      if (uVar4 <= uVar8) {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = uVar8 / uVar4;
        }
        uVar10 = uVar8 - uVar10 * uVar4;
      }
    }
    if (uVar10 != uVar14) goto LAB_10a797f3c;
LAB_10a797f4c:
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar6 * uVar4;
    }
    if (uVar8 != uVar14) {
      *(long **)(*(long *)(param_1 + 0x38) + uVar8 * 8) = plVar11;
      lVar5 = *plVar13;
    }
  }
  else {
    uVar8 = plVar11[1];
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar10 * uVar4;
    }
    if (uVar8 != uVar14) goto LAB_10a797f08;
LAB_10a797f44:
    if (lVar5 != 0) {
      uVar8 = *(ulong *)(lVar5 + 8);
      goto LAB_10a797f4c;
    }
  }
  *plVar11 = lVar5;
  *plVar13 = 0;
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
  func_0x00010a7c54ec(plVar13 + 2);
  __ZdlPv(plVar13);
LAB_10a797c64:
  plVar13 = *(long **)(param_1 + 0x20);
  if (plVar13 != (long *)0x0) {
    do {
      if ((plVar13[5] != *(long *)(param_2 + 0x18)) && (plVar13[6] == plVar2[6]))
      goto LAB_10a797cb0;
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (0.0 < *(float *)(plVar2[6] + 0x90)) {
    return;
  }
LAB_10a797cb0:
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar5 = *plVar2;
  uVar14 = plVar2[1];
  uVar6 = uVar4 - 1;
  if ((uVar4 & uVar6) == 0) {
    uVar14 = uVar6 & uVar14;
  }
  else if (uVar4 <= uVar14) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar14 / uVar4;
    }
    uVar14 = uVar14 - uVar8 * uVar4;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x10) + uVar14 * 8);
  do {
    plVar12 = plVar13;
    plVar13 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar2);
  if (plVar12 == (long *)(param_1 + 0x20)) {
LAB_10a797d28:
    if (lVar5 == 0) {
LAB_10a797d5c:
      *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar14 * 8) = 0;
      lVar5 = *plVar2;
      goto LAB_10a797d64;
    }
    uVar8 = *(ulong *)(lVar5 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar10 = uVar8 & uVar6;
    }
    else {
      uVar10 = uVar8;
      if (uVar4 <= uVar8) {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = uVar8 / uVar4;
        }
        uVar10 = uVar8 - uVar10 * uVar4;
      }
    }
    if (uVar10 != uVar14) goto LAB_10a797d5c;
  }
  else {
    uVar8 = plVar12[1];
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar10 * uVar4;
    }
    if (uVar8 != uVar14) goto LAB_10a797d28;
LAB_10a797d64:
    if (lVar5 == 0) goto LAB_10a797da0;
    uVar8 = *(ulong *)(lVar5 + 8);
  }
  if ((uVar4 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar4 <= uVar8) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar8 / uVar4;
    }
    uVar8 = uVar8 - uVar6 * uVar4;
  }
  if (uVar8 != uVar14) {
    *(long **)(*(long *)(param_1 + 0x10) + uVar8 * 8) = plVar12;
    lVar5 = *plVar2;
  }
LAB_10a797da0:
  *plVar12 = lVar5;
  *plVar2 = 0;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  FUN_10a7c5454(plVar2 + 2);
  __ZdlPv(plVar2);
  return;
}



/* Entry: 10a798074; end: 10a7980f7;  */

ulong FUN_10a798074(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_1 & 7) == 0) {
    lVar2 = 0;
    uVar1 = 0;
    do {
      uVar1 = uVar1 * 0x40 + 0x9e3779b9 + (uVar1 >> 2) + *(long *)(param_1 + lVar2) ^ uVar1;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x80);
  }
  else {
    lVar2 = 0;
    uVar1 = 0;
    do {
      uVar1 = uVar1 * 0x40 + 0x9e3779b9 + (uVar1 >> 2) + *(long *)(param_1 + lVar2) ^ uVar1;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x80);
  }
  uVar1 = uVar1 * 0x40 + 0x9e3779b9 + (uVar1 >> 2) ^ uVar1;
  return uVar1 * 0x40 + (uVar1 >> 2) + 0x9e377a39 ^ uVar1;
}



/* Entry: 10a7980f8; end: 10a7984d3;  */

void FUN_10a7980f8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint uStack_128;
  undefined1 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint uStack_108;
  undefined1 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  
  if ((*(char *)((long)param_2 + 0x1c) == '\x01') && (*(uint *)(param_2 + 3) - 1 < 0x80)) {
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    FUN_10a7a5130(&uStack_140,*param_2,param_2[1],(param_2[1] - *param_2 >> 4) * -0x5555555555555555
                 );
    uStack_128 = *(uint *)(param_2 + 3);
    uStack_124 = *(undefined1 *)((long)param_2 + 0x1c);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_160,*param_3,param_3[1]);
    }
    else {
      uStack_158 = param_3[1];
      uStack_160 = *param_3;
      lStack_150 = param_3[2];
    }
    lStack_f0 = lStack_150;
    uStack_148 = param_3[3];
    uStack_118 = uStack_138;
    uStack_120 = uStack_140;
    uStack_110 = uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_108 = uStack_128;
    uStack_104 = uStack_124;
    uStack_f8 = uStack_158;
    uStack_100 = uStack_160;
    lStack_150 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uVar1 = uStack_128;
    if (uStack_128 < 2) {
      uVar1 = 1;
    }
    uStack_dc = 0;
    if (uVar1 != 0) {
      uStack_dc = 0x4000 / uVar1;
    }
    if (0xff < uStack_dc) {
      uStack_dc = 0x100;
    }
    uStack_e0 = uStack_128;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_c8 = 0;
    lStack_d0 = 0;
    uStack_d8 = 0;
    uStack_98 = 0x3f800000;
    lStack_58 = 0;
    lStack_50 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    lStack_90 = 0;
    puStack_178 = (undefined8 *)((ulong)puStack_178 & 0xffffffffffffff00);
    uStack_e8 = uStack_148;
    plStack_60 = &lStack_58;
    func_0x000108a39c34(&lStack_d0,(ulong)uStack_128 * (ulong)uStack_dc,&puStack_178);
    if (lStack_150 < 0) {
      __ZdlPv(uStack_160);
    }
    puStack_178 = &uStack_140;
    func_0x00010a1f4614(&puStack_178);
    FUN_10a79503c(&puStack_178,param_2);
    puVar4 = &uStack_120;
    FUN_10a7984d4(puVar4,puStack_178,(long)puStack_170 - (long)puStack_178);
    lVar2 = lStack_f0;
    if (((ulong)puVar4 & 0xffffffff000000ff) == 0) {
      param_1[1] = uStack_118;
      *param_1 = uStack_120;
      param_1[2] = uStack_110;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      *(uint *)(param_1 + 3) = uStack_108;
      *(undefined1 *)((long)param_1 + 0x1c) = uStack_104;
      param_1[5] = uStack_f8;
      param_1[4] = uStack_100;
      uStack_f8 = 0;
      lStack_f0 = 0;
      uStack_100 = 0;
      param_1[6] = lVar2;
      param_1[7] = uStack_e8;
      param_1[9] = uStack_d8;
      param_1[8] = CONCAT44(uStack_dc,uStack_e0);
      param_1[0xb] = lStack_c8;
      param_1[10] = lStack_d0;
      param_1[0xc] = uStack_c0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      uStack_c0 = 0;
      FUN_10a7a7624(param_1 + 0xd,&uStack_b8);
      uVar3 = uStack_68;
      plVar6 = param_1 + 0x19;
      *plVar6 = lStack_58;
      param_1[0x14] = uStack_80;
      param_1[0x13] = lStack_88;
      param_1[0x12] = lStack_90;
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      param_1[0x16] = lStack_70;
      param_1[0x15] = lStack_78;
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      param_1[0x17] = uVar3;
      param_1[0x18] = plStack_60;
      param_1[0x1a] = lStack_50;
      if (lStack_50 == 0) {
        param_1[0x18] = plVar6;
        uVar5 = 1;
      }
      else {
        *(long **)(lStack_58 + 0x10) = plVar6;
        uVar5 = 1;
        lStack_58 = 0;
        lStack_50 = 0;
        plStack_60 = &lStack_58;
      }
    }
    else {
      uVar5 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 0x1b) = uVar5;
    if (puStack_178 != (undefined8 *)0x0) {
      puStack_170 = puStack_178;
      __ZdlPv();
    }
    func_0x000107c28478(&plStack_60,lStack_58);
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    FUN_10a7c5b24(&uStack_b8);
    if (lStack_d0 != 0) {
      lStack_c8 = lStack_d0;
      __ZdlPv();
    }
    if (lStack_f0 < 0) {
      __ZdlPv(uStack_100);
    }
    puStack_178 = &uStack_120;
    func_0x00010a1f4614(&puStack_178);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}



/* Entry: 10a7984d4; end: 10a798a53;  */

void FUN_10a7984d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *unaff_x22;
  uint uVar18;
  long *plVar19;
  float fVar20;
  undefined4 uStack_e4;
  uint uStack_e0;
  long lStack_d9;
  long lStack_d1;
  long lStack_c9;
  long lStack_c1;
  long lStack_b9;
  long lStack_b1;
  long lStack_a9;
  long lStack_a1;
  long lStack_99;
  long lStack_91;
  long lStack_89;
  long lStack_81;
  long lStack_79;
  long lStack_71;
  long lStack_69;
  long lStack_61;
  byte bStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a798adc(&lStack_d9,param_1,param_2,param_3);
  if (bStack_59 == 1) {
    lVar16 = param_1 + 0x68;
    func_0x00010a7c5b6c(lVar16,&lStack_d9);
    if (lVar16 != 0) {
      uVar8 = (ulong)*(uint *)(lVar16 + 0x90);
      if (*(uint *)(lVar16 + 0x90) == 0) {
        uVar6 = 0;
        uVar8 = 0;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x90);
        if ((ulong)(*(long *)(param_1 + 0x98) - lVar5 >> 2) <= uVar8) goto LAB_10a798a34;
        uVar6 = 0;
        *(int *)(lVar5 + uVar8 * 4) = *(int *)(lVar5 + uVar8 * 4) + 1;
        uVar8 = (ulong)*(uint *)(lVar16 + 0x90);
      }
LAB_10a7989b8:
      uVar6 = uVar6 | uVar8 << 0x20;
      goto LAB_10a7989bc;
    }
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x48)) {
      uVar8 = 0xffffffff;
      uVar6 = 1;
      goto LAB_10a7989b8;
    }
    if (*(long *)(param_1 + 0xa8) == *(long *)(param_1 + 0xb0)) {
      uVar18 = *(uint *)(param_1 + 0x4c);
      *(uint *)(param_1 + 0x4c) = uVar18 + 1;
      uStack_e4 = 0;
      uStack_e0 = uVar18;
      func_0x000108a395f8(param_1 + 0x90,uVar18 + 1,&uStack_e4);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      if ((bStack_59 & 1) == 0) goto LAB_10a798a34;
    }
    else {
      puVar9 = (uint *)(*(long *)(param_1 + 0xb0) + -4);
      uVar18 = *puVar9;
      *(uint **)(param_1 + 0xb0) = puVar9;
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) + 1;
      uStack_e0 = uVar18;
    }
    _memcpy(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x40) * (ulong)uVar18,&lStack_d9)
    ;
    if ((bStack_59 & 1) == 0) goto LAB_10a798a34;
    plVar7 = &lStack_d9;
    FUN_10a798074();
    plVar19 = *(long **)(param_1 + 0x70);
    if (plVar19 != (long *)0x0) {
      uVar6 = (long)plVar19 - 1;
      if (((ulong)plVar19 & uVar6) == 0) {
        unaff_x22 = (long *)(uVar6 & (ulong)plVar7);
      }
      else {
        unaff_x22 = plVar7;
        if (plVar19 <= plVar7) {
          uVar8 = 0;
          if (plVar19 != (long *)0x0) {
            uVar8 = (ulong)plVar7 / (ulong)plVar19;
          }
          unaff_x22 = (long *)((long)plVar7 - uVar8 * (long)plVar19);
        }
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x68) + (long)unaff_x22 * 8);
      if (plVar10 != (long *)0x0) {
        for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          plVar13 = (long *)plVar10[1];
          if (plVar13 == plVar7) {
            lVar16 = 0;
            do {
              cVar2 = *(char *)((long)plVar10 + lVar16 + 0x10);
              pcVar1 = (char *)((long)&lStack_d9 + lVar16);
              if (cVar2 != *pcVar1) break;
              bVar4 = lVar16 != 0x7f;
              lVar16 = lVar16 + 1;
            } while (bVar4);
            if (cVar2 == *pcVar1) goto LAB_10a798984;
          }
          else {
            if (((ulong)plVar19 & uVar6) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar6);
            }
            else if (plVar19 <= plVar13) {
              uVar8 = 0;
              if (plVar19 != (long *)0x0) {
                uVar8 = (ulong)plVar13 / (ulong)plVar19;
              }
              plVar13 = (long *)((long)plVar13 - uVar8 * (long)plVar19);
            }
            if (plVar13 != unaff_x22) break;
          }
        }
      }
    }
    plVar10 = (long *)0x98;
    __Znwm();
    *plVar10 = 0;
    plVar10[1] = (long)plVar7;
    plVar10[0xb] = lStack_91;
    plVar10[10] = lStack_99;
    plVar10[0xd] = lStack_81;
    plVar10[0xc] = lStack_89;
    plVar10[0xf] = lStack_71;
    plVar10[0xe] = lStack_79;
    plVar10[0x11] = lStack_61;
    plVar10[0x10] = lStack_69;
    plVar10[3] = lStack_d1;
    plVar10[2] = lStack_d9;
    plVar10[5] = lStack_c1;
    plVar10[4] = lStack_c9;
    plVar10[7] = lStack_b1;
    plVar10[6] = lStack_b9;
    plVar10[9] = lStack_a1;
    plVar10[8] = lStack_a9;
    fVar20 = (float)(*(long *)(param_1 + 0x80) + 1);
    *(uint *)(plVar10 + 0x12) = uVar18;
    if (fVar20 <= *(float *)(param_1 + 0x88) * (float)plVar19 && plVar19 != (long *)0x0) {
LAB_10a798910:
      lVar16 = *(long *)(param_1 + 0x68);
      plVar7 = *(long **)(lVar16 + (long)unaff_x22 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(param_1 + 0x78);
        *plVar10 = *plVar7;
        *plVar7 = (long)plVar10;
        *(long **)(lVar16 + (long)unaff_x22 * 8) = plVar7;
        if (*plVar10 != 0) {
          plVar7 = *(long **)(*plVar10 + 8);
          if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
            plVar7 = (long *)((ulong)plVar7 & (long)plVar19 - 1U);
          }
          else if (plVar19 <= plVar7) {
            uVar6 = 0;
            if (plVar19 != (long *)0x0) {
              uVar6 = (ulong)plVar7 / (ulong)plVar19;
            }
            plVar7 = (long *)((long)plVar7 - uVar6 * (long)plVar19);
          }
          plVar7 = (long *)(*(long *)(param_1 + 0x68) + (long)plVar7 * 8);
          goto LAB_10a798974;
        }
      }
      else {
        *plVar10 = *plVar7;
LAB_10a798974:
        *plVar7 = (long)plVar10;
      }
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
LAB_10a798984:
      if ((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 2) <= (ulong)uVar18)
      goto LAB_10a798a34;
      *(undefined4 *)(*(long *)(param_1 + 0x90) + (ulong)uVar18 * 4) = 1;
      func_0x000107426fd8(param_1 + 0xc0,&uStack_e0,&uStack_e0);
      uVar6 = 0;
      uVar8 = (ulong)uStack_e0;
      goto LAB_10a7989b8;
    }
    uVar6 = 1;
    if ((long *)0x2 < plVar19) {
      uVar6 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
    }
    plVar13 = (long *)(uVar6 | (long)plVar19 << 1);
    plVar11 = (long *)(long)(fVar20 / *(float *)(param_1 + 0x88));
    if (plVar13 <= plVar11) {
      plVar13 = plVar11;
    }
    if ((long)plVar13 - 1U == 0) {
      plVar13 = (long *)0x2;
    }
    else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar19 = *(long **)(param_1 + 0x70);
    }
    if (plVar13 <= plVar19) {
      if (plVar13 < plVar19) {
        plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x80) / *(float *)(param_1 + 0x88));
        if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar11) {
          plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
        }
        if (plVar13 <= plVar11) {
          plVar13 = plVar11;
        }
        if (plVar13 < plVar19) {
          if (plVar13 != (long *)0x0) goto LAB_10a798798;
          lVar16 = *(long *)(param_1 + 0x68);
          *(undefined8 *)(param_1 + 0x68) = 0;
          if (lVar16 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0x70) = 0;
          plVar19 = (long *)0x0;
        }
        else {
          plVar19 = *(long **)(param_1 + 0x70);
        }
      }
LAB_10a7988e4:
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        unaff_x22 = (long *)((long)plVar19 - 1U & (ulong)plVar7);
      }
      else {
        unaff_x22 = plVar7;
        if (plVar19 <= plVar7) {
          uVar6 = 0;
          if (plVar19 != (long *)0x0) {
            uVar6 = (ulong)plVar7 / (ulong)plVar19;
          }
          unaff_x22 = (long *)((long)plVar7 - uVar6 * (long)plVar19);
        }
      }
      goto LAB_10a798910;
    }
LAB_10a798798:
    if ((ulong)plVar13 >> 0x3d == 0) {
      lVar16 = (long)plVar13 << 3;
      __Znwm();
      lVar5 = *(long *)(param_1 + 0x68);
      *(long *)(param_1 + 0x68) = lVar16;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      plVar19 = (long *)0x0;
      *(long **)(param_1 + 0x70) = plVar13;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)plVar19 * 8) = 0;
        plVar19 = (long *)((long)plVar19 + 1);
      } while (plVar13 != plVar19);
      plVar11 = *(long **)(param_1 + 0x78);
      plVar19 = plVar13;
      if (plVar11 != (long *)0x0) {
        plVar12 = (long *)plVar11[1];
        uVar6 = (long)plVar13 - 1;
        if (((ulong)plVar13 & uVar6) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar6);
        }
        else if (plVar13 <= plVar12) {
          uVar8 = 0;
          if (plVar13 != (long *)0x0) {
            uVar8 = (ulong)plVar12 / (ulong)plVar13;
          }
          plVar12 = (long *)((long)plVar12 - uVar8 * (long)plVar13);
        }
        *(undefined8 **)(*(long *)(param_1 + 0x68) + (long)plVar12 * 8) =
             (undefined8 *)(param_1 + 0x78);
        plVar14 = (long *)*plVar11;
        while (plVar14 != (long *)0x0) {
          plVar17 = (long *)plVar14[1];
          if (((ulong)plVar13 & uVar6) == 0) {
            plVar17 = (long *)((ulong)plVar17 & uVar6);
          }
          else if (plVar13 <= plVar17) {
            uVar8 = 0;
            if (plVar13 != (long *)0x0) {
              uVar8 = (ulong)plVar17 / (ulong)plVar13;
            }
            plVar17 = (long *)((long)plVar17 - uVar8 * (long)plVar13);
          }
          plVar15 = plVar14;
          if (plVar17 != plVar12) {
            lVar16 = *(long *)(param_1 + 0x68);
            if (*(long *)(lVar16 + (long)plVar17 * 8) == 0) {
              *(long **)(lVar16 + (long)plVar17 * 8) = plVar11;
              plVar12 = plVar17;
            }
            else {
              *plVar11 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar16 + (long)plVar17 * 8);
              **(long **)(lVar16 + (long)plVar17 * 8) = (long)plVar14;
              plVar15 = plVar11;
            }
          }
          plVar11 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
      goto LAB_10a7988e4;
    }
  }
  else {
    uVar6 = 0xffffffff00000002;
LAB_10a7989bc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail(uVar6);
  }
  func_0x000109ffded8();
LAB_10a798a34:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a798a38);
  (*pcVar3)();
}



/* Entry: 10a798a54; end: 10a798adb;  */

long FUN_10a798a54(long param_1)

{
  long lStack_28;
  
  func_0x000107c28478(param_1 + 0xc0,*(undefined8 *)(param_1 + 200));
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  FUN_10a7c5b24(param_1 + 0x68);
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  lStack_28 = param_1;
  func_0x00010a1f4614(&lStack_28);
  return param_1;
}



/* Entry: 10a798adc; end: 10a798c6f;  */

undefined8 * FUN_10a798adc(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  uint *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long *unaff_x24;
  long lStack_220;
  long *plStack_218;
  long *plStack_210;
  ulong uStack_208;
  float fStack_200;
  long lStack_1e9;
  long lStack_1e1;
  long lStack_1d9;
  long lStack_1d1;
  long lStack_1c9;
  long lStack_1c1;
  long lStack_1b9;
  long lStack_1b1;
  long lStack_1a9;
  long lStack_1a1;
  long lStack_199;
  long lStack_191;
  long lStack_189;
  long lStack_181;
  long lStack_179;
  long lStack_171;
  byte bStack_169;
  long lStack_168;
  undefined8 auStack_f0 [17];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  plVar11 = param_2;
  uVar27 = param_3;
  if (*(uint *)(param_2 + 8) - 1 < 0x80 && param_4 == *(uint *)(param_2 + 8)) {
    auStack_f0[0xd] = 0;
    auStack_f0[0xc] = 0;
    auStack_f0[0xf] = 0;
    auStack_f0[0xe] = 0;
    auStack_f0[9] = 0;
    auStack_f0[8] = 0;
    auStack_f0[0xb] = 0;
    auStack_f0[10] = 0;
    auStack_f0[5] = 0;
    auStack_f0[4] = 0;
    auStack_f0[7] = 0;
    auStack_f0[6] = 0;
    auStack_f0[1] = 0;
    auStack_f0[0] = 0;
    auStack_f0[3] = 0;
    auStack_f0[2] = 0;
    lVar26 = *param_2;
    lVar3 = param_2[1];
    if (lVar26 != lVar3) {
      unaff_x24 = (long *)0x1;
      do {
        uVar14 = (ulong)*(uint *)(lVar26 + 0x24);
        uVar19 = *(uint *)(lVar26 + 0x28);
        if (*(uint *)(param_2 + 8) < uVar19 + *(uint *)(lVar26 + 0x24)) {
LAB_10a798c28:
          uVar12 = 0;
          *(undefined1 *)param_1 = 0;
          goto LAB_10a798c30;
        }
        uVar5 = *(ushort *)(lVar26 + 0x20);
        if (uVar5 < 10 && (1 << (ulong)(uVar5 & 0x1f) & 0x388U) != 0) {
          puVar10 = (undefined8 *)(ulong)(uint)(int)(short)uVar5;
          FUN_10a0f7058();
          uVar14 = (ulong)*(uint *)(lVar26 + 0x24);
          if (((ulong)puVar10 & 0x3fffffffc) == 0) {
            uVar19 = *(uint *)(lVar26 + 0x28);
            goto LAB_10a798be4;
          }
          uVar28 = (ulong)puVar10 >> 2 & 0xffffffff;
          puVar13 = (uint *)(param_3 + uVar14);
          puVar20 = (uint *)((long)auStack_f0 + uVar14);
          do {
            uVar19 = *puVar13 & 0x7fffffff;
            if (0x7f800000 < uVar19) goto LAB_10a798c28;
            uVar2 = 0;
            if (uVar19 != 0) {
              uVar2 = *puVar13;
            }
            *puVar20 = uVar2;
            uVar28 = uVar28 - 1;
            puVar13 = puVar13 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar28 != 0);
        }
        else {
LAB_10a798be4:
          puVar10 = (undefined8 *)((long)auStack_f0 + uVar14);
          plVar11 = (long *)(param_3 + uVar14);
          uVar27 = (ulong)uVar19;
          _memcpy(puVar10,plVar11);
        }
        lVar26 = lVar26 + 0x30;
      } while (lVar26 != lVar3);
    }
    param_1[9] = auStack_f0[9];
    param_1[8] = auStack_f0[8];
    param_1[0xb] = auStack_f0[0xb];
    param_1[10] = auStack_f0[10];
    param_1[0xd] = auStack_f0[0xd];
    param_1[0xc] = auStack_f0[0xc];
    param_1[0xf] = auStack_f0[0xf];
    param_1[0xe] = auStack_f0[0xe];
    param_1[1] = auStack_f0[1];
    *param_1 = auStack_f0[0];
    param_1[3] = auStack_f0[3];
    param_1[2] = auStack_f0[2];
    uVar12 = 1;
    param_1[5] = auStack_f0[5];
    param_1[4] = auStack_f0[4];
    param_1[7] = auStack_f0[7];
    param_1[6] = auStack_f0[6];
LAB_10a798c30:
    *(undefined1 *)(param_1 + 0x10) = uVar12;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar10;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = (ulong)*(uint *)(puVar10 + 8);
  if (*(uint *)(puVar10 + 8) != 0 && uVar27 != 0) {
    uVar28 = 0;
    if (uVar14 != 0) {
      uVar28 = uVar27 / uVar14;
    }
    if (uVar27 == uVar28 * uVar14) {
      plStack_218 = (long *)0x0;
      lStack_220 = 0;
      uStack_208 = 0;
      plStack_210 = (long *)0x0;
      fStack_200 = 1.0;
      if (uVar14 <= uVar27) {
        uVar14 = 0;
        do {
          uVar15 = uVar14 * *(uint *)(puVar10 + 8);
          if ((uVar27 < uVar15) || (uVar27 - uVar15 < (ulong)*(uint *)(puVar10 + 8)))
          goto LAB_10a799200;
          FUN_10a798adc(&lStack_1e9,puVar10,(long *)(uVar15 + (long)plVar11));
          if ((bStack_169 & 1) == 0) {
            uVar27 = 0;
            uVar14 = 0;
            uVar28 = 0;
            goto LAB_10a7991ec;
          }
          plVar18 = &lStack_1e9;
          FUN_10a798074();
          plVar17 = plStack_218;
          plVar16 = (long *)puVar10[0xe];
          if (plVar16 != (long *)0x0) {
            uVar15 = (long)plVar16 - 1;
            if (((ulong)plVar16 & uVar15) == 0) {
              plVar21 = (long *)(uVar15 & (ulong)plVar18);
            }
            else {
              plVar21 = plVar18;
              if (plVar16 <= plVar18) {
                uVar6 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar6 = (ulong)plVar18 / (ulong)plVar16;
                }
                plVar21 = (long *)((long)plVar18 - uVar6 * (long)plVar16);
              }
            }
            plVar22 = *(long **)(puVar10[0xd] + (long)plVar21 * 8);
            if (plVar22 != (long *)0x0) {
              do {
                while( true ) {
                  plVar22 = (long *)*plVar22;
                  if (plVar22 == (long *)0x0) goto LAB_10a798e2c;
                  plVar24 = (long *)plVar22[1];
                  if (plVar18 != plVar24) break;
                  lVar26 = 0;
                  do {
                    cVar4 = *(char *)((long)plVar22 + lVar26 + 0x10);
                    pcVar1 = (char *)((long)&lStack_1e9 + lVar26);
                    if (cVar4 != *pcVar1) break;
                    bVar9 = lVar26 != 0x7f;
                    lVar26 = lVar26 + 1;
                  } while (bVar9);
                  if (cVar4 == *pcVar1) goto LAB_10a799180;
                }
                if (((ulong)plVar16 & uVar15) == 0) {
                  plVar24 = (long *)((ulong)plVar24 & uVar15);
                }
                else if (plVar16 <= plVar24) {
                  uVar6 = 0;
                  if (plVar16 != (long *)0x0) {
                    uVar6 = (ulong)plVar24 / (ulong)plVar16;
                  }
                  plVar24 = (long *)((long)plVar24 - uVar6 * (long)plVar16);
                }
              } while (plVar24 == plVar21);
            }
          }
LAB_10a798e2c:
          if (plStack_218 != (long *)0x0) {
            uVar15 = (long)plStack_218 - 1;
            if (((ulong)plStack_218 & uVar15) == 0) {
              unaff_x24 = (long *)(uVar15 & (ulong)plVar18);
            }
            else {
              unaff_x24 = plVar18;
              if (plStack_218 <= plVar18) {
                uVar6 = 0;
                if (plStack_218 != (long *)0x0) {
                  uVar6 = (ulong)plVar18 / (ulong)plStack_218;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar6 * (long)plStack_218);
              }
            }
            plVar16 = *(long **)(lStack_220 + (long)unaff_x24 * 8);
            if (plVar16 != (long *)0x0) {
              do {
                while( true ) {
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_10a798ed4;
                  plVar21 = (long *)plVar16[1];
                  if (plVar21 != plVar18) break;
                  lVar26 = 0;
                  do {
                    cVar4 = *(char *)((long)plVar16 + lVar26 + 0x10);
                    pcVar1 = (char *)((long)&lStack_1e9 + lVar26);
                    if (cVar4 != *pcVar1) break;
                    bVar9 = lVar26 != 0x7f;
                    lVar26 = lVar26 + 1;
                  } while (bVar9);
                  if (cVar4 == *pcVar1) goto LAB_10a799180;
                }
                if (((ulong)plStack_218 & uVar15) == 0) {
                  plVar21 = (long *)((ulong)plVar21 & uVar15);
                }
                else if (plStack_218 <= plVar21) {
                  uVar6 = 0;
                  if (plStack_218 != (long *)0x0) {
                    uVar6 = (ulong)plVar21 / (ulong)plStack_218;
                  }
                  plVar21 = (long *)((long)plVar21 - uVar6 * (long)plStack_218);
                }
              } while (plVar21 == unaff_x24);
            }
          }
LAB_10a798ed4:
          plVar16 = (long *)0x90;
          __Znwm();
          *plVar16 = 0;
          plVar16[1] = (long)plVar18;
          plVar16[0xb] = lStack_1a1;
          plVar16[10] = lStack_1a9;
          plVar16[0xd] = lStack_191;
          plVar16[0xc] = lStack_199;
          plVar16[0xf] = lStack_181;
          plVar16[0xe] = lStack_189;
          plVar16[0x11] = lStack_171;
          plVar16[0x10] = lStack_179;
          plVar16[3] = lStack_1e1;
          plVar16[2] = lStack_1e9;
          plVar16[5] = lStack_1d1;
          plVar16[4] = lStack_1d9;
          plVar16[7] = lStack_1c1;
          plVar16[6] = lStack_1c9;
          plVar16[9] = lStack_1b1;
          plVar16[8] = lStack_1b9;
          if ((plVar17 == (long *)0x0) || (fStack_200 * (float)plVar17 < (float)(uStack_208 + 1))) {
            uVar15 = 1;
            if ((long *)0x2 < plVar17) {
              uVar15 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
            }
            plVar21 = (long *)(uVar15 | (long)plVar17 << 1);
            plVar22 = (long *)(long)((float)(uStack_208 + 1) / fStack_200);
            if (plVar21 <= plVar22) {
              plVar21 = plVar22;
            }
            plVar22 = plVar17;
            if ((long)plVar21 - 1U == 0) {
              plVar21 = (long *)0x2;
            }
            else if (((ulong)plVar21 & (long)plVar21 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
              plVar22 = plStack_218;
            }
            if (plVar22 < plVar21) {
LAB_10a798f98:
              if ((ulong)plVar21 >> 0x3d != 0) goto LAB_10a7991fc;
              lVar26 = (long)plVar21 << 3;
              __Znwm();
              bVar9 = lStack_220 != 0;
              lStack_220 = lVar26;
              if (bVar9) {
                __ZdlPv();
              }
              plVar17 = (long *)0x0;
              do {
                *(undefined8 *)(lStack_220 + (long)plVar17 * 8) = 0;
                plVar17 = (long *)((long)plVar17 + 1);
              } while (plVar21 != plVar17);
              plVar17 = plVar21;
              plStack_218 = plVar21;
              if (plStack_210 != (long *)0x0) {
                plVar22 = (long *)plStack_210[1];
                uVar15 = (long)plVar21 - 1;
                if (((ulong)plVar21 & uVar15) == 0) {
                  plVar22 = (long *)((ulong)plVar22 & uVar15);
                }
                else if (plVar21 <= plVar22) {
                  uVar6 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar6 = (ulong)plVar22 / (ulong)plVar21;
                  }
                  plVar22 = (long *)((long)plVar22 - uVar6 * (long)plVar21);
                }
                *(long ***)(lStack_220 + (long)plVar22 * 8) = &plStack_210;
                plVar24 = (long *)*plStack_210;
                plVar7 = plStack_210;
                while (plVar24 != (long *)0x0) {
                  plVar25 = (long *)plVar24[1];
                  if (((ulong)plVar21 & uVar15) == 0) {
                    plVar25 = (long *)((ulong)plVar25 & uVar15);
                  }
                  else if (plVar21 <= plVar25) {
                    uVar6 = 0;
                    if (plVar21 != (long *)0x0) {
                      uVar6 = (ulong)plVar25 / (ulong)plVar21;
                    }
                    plVar25 = (long *)((long)plVar25 - uVar6 * (long)plVar21);
                  }
                  plVar23 = plVar24;
                  if (plVar25 != plVar22) {
                    if (*(long *)(lStack_220 + (long)plVar25 * 8) == 0) {
                      *(long **)(lStack_220 + (long)plVar25 * 8) = plVar7;
                      plVar22 = plVar25;
                    }
                    else {
                      *plVar7 = *plVar24;
                      *plVar24 = **(long **)(lStack_220 + (long)plVar25 * 8);
                      **(undefined8 **)(lStack_220 + (long)plVar25 * 8) = plVar24;
                      plVar23 = plVar7;
                    }
                  }
                  plVar7 = plVar23;
                  plVar24 = (long *)*plVar23;
                }
              }
            }
            else {
              plVar17 = plVar22;
              if (plVar21 < plVar22) {
                plVar17 = (long *)(long)((float)uStack_208 / fStack_200);
                if ((plVar22 < (long *)0x3) || (((ulong)plVar22 & (long)plVar22 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar17) {
                  plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 + -1) & 0x3fU));
                }
                lVar26 = lStack_220;
                if (plVar21 <= plVar17) {
                  plVar21 = plVar17;
                }
                plVar17 = plStack_218;
                if (plVar21 < plVar22) {
                  if (plVar21 != (long *)0x0) goto LAB_10a798f98;
                  lStack_220 = 0;
                  if (lVar26 != 0) {
                    __ZdlPv();
                  }
                  plStack_218 = (long *)0x0;
                  plVar17 = (long *)0x0;
                }
              }
            }
            if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
              unaff_x24 = (long *)((long)plVar17 - 1U & (ulong)plVar18);
            }
            else {
              unaff_x24 = plVar18;
              if (plVar17 <= plVar18) {
                uVar15 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar15 = (ulong)plVar18 / (ulong)plVar17;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar15 * (long)plVar17);
              }
            }
          }
          plVar18 = *(long **)(lStack_220 + (long)unaff_x24 * 8);
          if (plVar18 == (long *)0x0) {
            *plVar16 = (long)plStack_210;
            *(long ***)(lStack_220 + (long)unaff_x24 * 8) = &plStack_210;
            plStack_210 = plVar16;
            if (*plVar16 != 0) {
              plVar18 = *(long **)(*plVar16 + 8);
              if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
                plVar18 = (long *)((ulong)plVar18 & (long)plVar17 - 1U);
              }
              else if (plVar17 <= plVar18) {
                uVar15 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar15 = (ulong)plVar18 / (ulong)plVar17;
                }
                plVar18 = (long *)((long)plVar18 - uVar15 * (long)plVar17);
              }
              plVar18 = (long *)(lStack_220 + (long)plVar18 * 8);
              goto LAB_10a799170;
            }
          }
          else {
            *plVar16 = *plVar18;
LAB_10a799170:
            *plVar18 = (long)plVar16;
          }
          uStack_208 = uStack_208 + 1;
LAB_10a799180:
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar28);
      }
      uVar28 = uStack_208 & 0xffffff00;
      uVar14 = uStack_208 & 0xff;
      uVar27 = 0x100000000;
LAB_10a7991ec:
      FUN_10a7c5d50(&lStack_220);
      goto LAB_10a798ccc;
    }
  }
  uVar27 = 0;
  uVar14 = 0;
  uVar28 = 0;
LAB_10a798ccc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return (undefined8 *)(uVar14 | uVar27 | uVar28);
  }
  ___stack_chk_fail();
LAB_10a7991fc:
  func_0x000109ffded8();
LAB_10a799200:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a799204);
  (*pcVar8)();
}



/* Entry: 10a798c70; end: 10a79922b;  */

ulong FUN_10a798c70(long param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x24;
  long lStack_130;
  long *plStack_128;
  long *plStack_120;
  ulong uStack_118;
  float fStack_110;
  long lStack_f9;
  long lStack_f1;
  long lStack_e9;
  long lStack_e1;
  long lStack_d9;
  long lStack_d1;
  long lStack_c9;
  long lStack_c1;
  long lStack_b9;
  long lStack_b1;
  long lStack_a9;
  long lStack_a1;
  long lStack_99;
  long lStack_91;
  long lStack_89;
  long lStack_81;
  byte bStack_79;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)*(uint *)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x40) != 0 && param_3 != 0) {
    uVar17 = 0;
    if (uVar7 != 0) {
      uVar17 = param_3 / uVar7;
    }
    if (param_3 == uVar17 * uVar7) {
      plStack_128 = (long *)0x0;
      lStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      fStack_110 = 1.0;
      if (uVar7 <= param_3) {
        uVar7 = 0;
        do {
          uVar18 = uVar7 * *(uint *)(param_1 + 0x40);
          if ((param_3 < uVar18) || (param_3 - uVar18 < (ulong)*(uint *)(param_1 + 0x40)))
          goto LAB_10a799200;
          FUN_10a798adc(&lStack_f9,param_1,uVar18 + param_2);
          if ((bStack_79 & 1) == 0) {
            uVar7 = 0;
            uVar17 = 0;
            uVar18 = 0;
            goto LAB_10a7991ec;
          }
          plVar10 = &lStack_f9;
          FUN_10a798074();
          plVar9 = plStack_128;
          plVar8 = *(long **)(param_1 + 0x70);
          if (plVar8 != (long *)0x0) {
            uVar18 = (long)plVar8 - 1;
            if (((ulong)plVar8 & uVar18) == 0) {
              plVar11 = (long *)(uVar18 & (ulong)plVar10);
            }
            else {
              plVar11 = plVar10;
              if (plVar8 <= plVar10) {
                uVar3 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar3 = (ulong)plVar10 / (ulong)plVar8;
                }
                plVar11 = (long *)((long)plVar10 - uVar3 * (long)plVar8);
              }
            }
            plVar12 = *(long **)(*(long *)(param_1 + 0x68) + (long)plVar11 * 8);
            if (plVar12 != (long *)0x0) {
              do {
                while( true ) {
                  plVar12 = (long *)*plVar12;
                  if (plVar12 == (long *)0x0) goto LAB_10a798e2c;
                  plVar14 = (long *)plVar12[1];
                  if (plVar10 != plVar14) break;
                  lVar16 = 0;
                  do {
                    cVar2 = *(char *)((long)plVar12 + lVar16 + 0x10);
                    pcVar1 = (char *)((long)&lStack_f9 + lVar16);
                    if (cVar2 != *pcVar1) break;
                    bVar6 = lVar16 != 0x7f;
                    lVar16 = lVar16 + 1;
                  } while (bVar6);
                  if (cVar2 == *pcVar1) goto LAB_10a799180;
                }
                if (((ulong)plVar8 & uVar18) == 0) {
                  plVar14 = (long *)((ulong)plVar14 & uVar18);
                }
                else if (plVar8 <= plVar14) {
                  uVar3 = 0;
                  if (plVar8 != (long *)0x0) {
                    uVar3 = (ulong)plVar14 / (ulong)plVar8;
                  }
                  plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar8);
                }
              } while (plVar14 == plVar11);
            }
          }
LAB_10a798e2c:
          if (plStack_128 != (long *)0x0) {
            uVar18 = (long)plStack_128 - 1;
            if (((ulong)plStack_128 & uVar18) == 0) {
              unaff_x24 = (long *)(uVar18 & (ulong)plVar10);
            }
            else {
              unaff_x24 = plVar10;
              if (plStack_128 <= plVar10) {
                uVar3 = 0;
                if (plStack_128 != (long *)0x0) {
                  uVar3 = (ulong)plVar10 / (ulong)plStack_128;
                }
                unaff_x24 = (long *)((long)plVar10 - uVar3 * (long)plStack_128);
              }
            }
            plVar8 = *(long **)(lStack_130 + (long)unaff_x24 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_10a798ed4;
                  plVar11 = (long *)plVar8[1];
                  if (plVar11 != plVar10) break;
                  lVar16 = 0;
                  do {
                    cVar2 = *(char *)((long)plVar8 + lVar16 + 0x10);
                    pcVar1 = (char *)((long)&lStack_f9 + lVar16);
                    if (cVar2 != *pcVar1) break;
                    bVar6 = lVar16 != 0x7f;
                    lVar16 = lVar16 + 1;
                  } while (bVar6);
                  if (cVar2 == *pcVar1) goto LAB_10a799180;
                }
                if (((ulong)plStack_128 & uVar18) == 0) {
                  plVar11 = (long *)((ulong)plVar11 & uVar18);
                }
                else if (plStack_128 <= plVar11) {
                  uVar3 = 0;
                  if (plStack_128 != (long *)0x0) {
                    uVar3 = (ulong)plVar11 / (ulong)plStack_128;
                  }
                  plVar11 = (long *)((long)plVar11 - uVar3 * (long)plStack_128);
                }
              } while (plVar11 == unaff_x24);
            }
          }
LAB_10a798ed4:
          plVar8 = (long *)0x90;
          __Znwm();
          *plVar8 = 0;
          plVar8[1] = (long)plVar10;
          plVar8[0xb] = lStack_b1;
          plVar8[10] = lStack_b9;
          plVar8[0xd] = lStack_a1;
          plVar8[0xc] = lStack_a9;
          plVar8[0xf] = lStack_91;
          plVar8[0xe] = lStack_99;
          plVar8[0x11] = lStack_81;
          plVar8[0x10] = lStack_89;
          plVar8[3] = lStack_f1;
          plVar8[2] = lStack_f9;
          plVar8[5] = lStack_e1;
          plVar8[4] = lStack_e9;
          plVar8[7] = lStack_d1;
          plVar8[6] = lStack_d9;
          plVar8[9] = lStack_c1;
          plVar8[8] = lStack_c9;
          if ((plVar9 == (long *)0x0) || (fStack_110 * (float)plVar9 < (float)(uStack_118 + 1))) {
            uVar18 = 1;
            if ((long *)0x2 < plVar9) {
              uVar18 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
            }
            plVar11 = (long *)(uVar18 | (long)plVar9 << 1);
            plVar12 = (long *)(long)((float)(uStack_118 + 1) / fStack_110);
            if (plVar11 <= plVar12) {
              plVar11 = plVar12;
            }
            plVar12 = plVar9;
            if ((long)plVar11 - 1U == 0) {
              plVar11 = (long *)0x2;
            }
            else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
              plVar12 = plStack_128;
            }
            if (plVar12 < plVar11) {
LAB_10a798f98:
              if ((ulong)plVar11 >> 0x3d != 0) goto LAB_10a7991fc;
              lVar16 = (long)plVar11 << 3;
              __Znwm();
              bVar6 = lStack_130 != 0;
              lStack_130 = lVar16;
              if (bVar6) {
                __ZdlPv();
              }
              plVar9 = (long *)0x0;
              do {
                *(undefined8 *)(lStack_130 + (long)plVar9 * 8) = 0;
                plVar9 = (long *)((long)plVar9 + 1);
              } while (plVar11 != plVar9);
              plVar9 = plVar11;
              plStack_128 = plVar11;
              if (plStack_120 != (long *)0x0) {
                plVar12 = (long *)plStack_120[1];
                uVar18 = (long)plVar11 - 1;
                if (((ulong)plVar11 & uVar18) == 0) {
                  plVar12 = (long *)((ulong)plVar12 & uVar18);
                }
                else if (plVar11 <= plVar12) {
                  uVar3 = 0;
                  if (plVar11 != (long *)0x0) {
                    uVar3 = (ulong)plVar12 / (ulong)plVar11;
                  }
                  plVar12 = (long *)((long)plVar12 - uVar3 * (long)plVar11);
                }
                *(long ***)(lStack_130 + (long)plVar12 * 8) = &plStack_120;
                plVar14 = (long *)*plStack_120;
                plVar4 = plStack_120;
                while (plVar14 != (long *)0x0) {
                  plVar15 = (long *)plVar14[1];
                  if (((ulong)plVar11 & uVar18) == 0) {
                    plVar15 = (long *)((ulong)plVar15 & uVar18);
                  }
                  else if (plVar11 <= plVar15) {
                    uVar3 = 0;
                    if (plVar11 != (long *)0x0) {
                      uVar3 = (ulong)plVar15 / (ulong)plVar11;
                    }
                    plVar15 = (long *)((long)plVar15 - uVar3 * (long)plVar11);
                  }
                  plVar13 = plVar14;
                  if (plVar15 != plVar12) {
                    if (*(long *)(lStack_130 + (long)plVar15 * 8) == 0) {
                      *(long **)(lStack_130 + (long)plVar15 * 8) = plVar4;
                      plVar12 = plVar15;
                    }
                    else {
                      *plVar4 = *plVar14;
                      *plVar14 = **(long **)(lStack_130 + (long)plVar15 * 8);
                      **(undefined8 **)(lStack_130 + (long)plVar15 * 8) = plVar14;
                      plVar13 = plVar4;
                    }
                  }
                  plVar4 = plVar13;
                  plVar14 = (long *)*plVar13;
                }
              }
            }
            else {
              plVar9 = plVar12;
              if (plVar11 < plVar12) {
                plVar9 = (long *)(long)((float)uStack_118 / fStack_110);
                if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar9) {
                  plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
                }
                lVar16 = lStack_130;
                if (plVar11 <= plVar9) {
                  plVar11 = plVar9;
                }
                plVar9 = plStack_128;
                if (plVar11 < plVar12) {
                  if (plVar11 != (long *)0x0) goto LAB_10a798f98;
                  lStack_130 = 0;
                  if (lVar16 != 0) {
                    __ZdlPv();
                  }
                  plStack_128 = (long *)0x0;
                  plVar9 = (long *)0x0;
                }
              }
            }
            if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
              unaff_x24 = (long *)((long)plVar9 - 1U & (ulong)plVar10);
            }
            else {
              unaff_x24 = plVar10;
              if (plVar9 <= plVar10) {
                uVar18 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar18 = (ulong)plVar10 / (ulong)plVar9;
                }
                unaff_x24 = (long *)((long)plVar10 - uVar18 * (long)plVar9);
              }
            }
          }
          plVar10 = *(long **)(lStack_130 + (long)unaff_x24 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar8 = (long)plStack_120;
            *(long ***)(lStack_130 + (long)unaff_x24 * 8) = &plStack_120;
            plStack_120 = plVar8;
            if (*plVar8 != 0) {
              plVar10 = *(long **)(*plVar8 + 8);
              if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
                plVar10 = (long *)((ulong)plVar10 & (long)plVar9 - 1U);
              }
              else if (plVar9 <= plVar10) {
                uVar18 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar18 = (ulong)plVar10 / (ulong)plVar9;
                }
                plVar10 = (long *)((long)plVar10 - uVar18 * (long)plVar9);
              }
              plVar10 = (long *)(lStack_130 + (long)plVar10 * 8);
              goto LAB_10a799170;
            }
          }
          else {
            *plVar8 = *plVar10;
LAB_10a799170:
            *plVar10 = (long)plVar8;
          }
          uStack_118 = uStack_118 + 1;
LAB_10a799180:
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar17);
      }
      uVar18 = uStack_118 & 0xffffff00;
      uVar17 = uStack_118 & 0xff;
      uVar7 = 0x100000000;
LAB_10a7991ec:
      FUN_10a7c5d50(&lStack_130);
      goto LAB_10a798ccc;
    }
  }
  uVar7 = 0;
  uVar17 = 0;
  uVar18 = 0;
LAB_10a798ccc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar17 | uVar7 | uVar18;
  }
  ___stack_chk_fail();
LAB_10a7991fc:
  func_0x000109ffded8();
LAB_10a799200:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a799204);
  (*pcVar5)();
}



/* Entry: 10a79922c; end: 10a79930f;  */

long * FUN_10a79922c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar10 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    plVar4 = param_1;
LAB_10a7992f0:
    param_1[1] = (long)puVar10;
    return plVar4;
  }
  lVar8 = (long)puVar2 - *param_1;
  uVar1 = (lVar8 >> 4) + 1;
  plVar5 = param_1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 >> 0x3c == 0) {
      lVar3 = uVar7 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar8);
      uVar12 = param_2[1];
      uVar11 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      plVar5 = (long *)*param_1;
      plVar9 = (long *)((long)puVar2 - (param_1[1] - (long)plVar5));
      puVar10 = puVar2 + 2;
      puVar2[1] = uVar12;
      *puVar2 = uVar11;
      plVar4 = plVar9;
      _memcpy(plVar9,plVar5);
      *param_1 = (long)plVar9;
      param_1[1] = (long)puVar10;
      param_1[2] = lVar3 + uVar7 * 0x10;
      if (plVar5 != (long *)0x0) {
        __ZdlPv(plVar5);
        plVar4 = plVar5;
      }
      goto LAB_10a7992f0;
    }
  }
  else {
    FUN_10a7a7690();
  }
  func_0x000109ffded8();
  pcStack_48 = FUN_10a799310;
  plStack_68 = plVar5 + 8;
  puStack_60 = param_2;
  plStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a7a76a4(&plStack_68);
  if (*(char *)((long)plVar5 + 0x37) < '\0') {
    __ZdlPv(plVar5[4]);
  }
  plStack_68 = plVar5;
  func_0x00010a1f4614(&plStack_68);
  return plVar5;
}



/* Entry: 10a799310; end: 10a799363;  */

long FUN_10a799310(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x40;
  FUN_10a7a76a4(&lStack_28);
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  lStack_28 = param_1;
  func_0x00010a1f4614(&lStack_28);
  return param_1;
}



/* Entry: 10a799364; end: 10a79950b;  */

void FUN_10a799364(undefined4 *param_1)

{
  undefined8 auStack_40 [2];
  char cStack_29;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_10a19079c(param_1 + 2);
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = 0;
  FUN_10ab6eb18();
  FUN_10ab6f7f8(param_1,0x113835780,5,4,0);
  FUN_10ab6e9d8();
  FUN_10ab6f7f8(param_1,0x113835740,5,3,0);
  FUN_10ab6e728();
  FUN_10ab6f7f8(param_1,0x1138356c0,5,3,0);
  FUN_10ab6f020();
  FUN_10ab6f7f8(param_1,0x113835880,5,2,0);
  FUN_10ab6f160();
  FUN_10ab6f7f8(param_1,0x1138358c0,5,2,0);
  func_0x000107c2b07c(auStack_40,&UNK_10f67630b);
  FUN_10ab6f7f8(param_1,auStack_40,5,1,0);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b07c(auStack_40,&UNK_10f67631b);
  FUN_10ab6f7f8(param_1,auStack_40,5,1,0);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return;
}


