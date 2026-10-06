/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109e779c4; end: 109e77a3b;  */

undefined8 FUN_109e779c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20) & 0x1fffff;
  if ((((uVar1 != 0x200) && (uVar1 != 0x80)) || (*(long *)(param_1 + 0x88) == 0)) ||
     ((*(uint *)(*(long *)(param_1 + 0x88) + 4) & 0xc00000) == 0x800000)) {
    for (lVar2 = *(long *)(param_1 + 0x10); *(char *)(lVar2 + 4) == '\x13';
        lVar2 = *(long *)(lVar2 + 0x30)) {
    }
    if ((*(char *)(lVar2 + 4) != '\x15') &&
       ((*(long *)(param_1 + 0x78) == 0 || ((*(ulong *)(param_1 + 0x2c) & 0x6000) == 0x4000)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109e77a3c; end: 109e77c1f;  */

void FUN_109e77a3c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (*(char *)(lVar1 + 4) != '\x13') {
    return;
  }
  if (*(char *)(*(long *)(param_3 + 0x10) + 4) != '\x13') {
    return;
  }
  func_0x000109eca118();
  lVar2 = *(long *)(param_3 + 0x10);
  func_0x000109eca118();
  if (param_5 == 0) {
    FUN_109ec7a0c();
    if ((int)lVar1 == 0) {
      return;
    }
  }
  else if (lVar1 != lVar2) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  if ((*(char *)(lVar1 + 4) == '\x13') && (*(int *)(lVar1 + 0x10) == 0)) {
    lVar2 = *(long *)(param_3 + 0x10);
    cVar3 = *(char *)(lVar2 + 4);
LAB_109e77b14:
    if (cVar3 == '\x13') {
      iVar4 = *(int *)(lVar2 + 0x10);
      if (iVar4 == 0) {
        return;
      }
    }
    else {
      iVar4 = -1;
    }
    if ((iVar4 <= *(int *)(param_2 + 0x28)) && ((*(byte *)(param_3 + 0x2d) >> 2 & 1) == 0)) {
      FUN_109e7636c();
      if ((*(byte *)(lVar2 + 0xc) >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      func_0x000109eb844c(param_1,&UNK_10f60edf4);
    }
  }
  else {
    lVar2 = *(long *)(param_3 + 0x10);
    if (*(char *)(lVar2 + 4) != '\x13') {
      return;
    }
    if (*(int *)(lVar2 + 0x10) != 0) {
      return;
    }
    if (*(char *)(lVar1 + 4) == '\x13') {
      iVar4 = *(int *)(lVar1 + 0x10);
      cVar3 = '\x13';
      if (iVar4 == 0) goto LAB_109e77b14;
    }
    else {
      iVar4 = -1;
    }
    if (iVar4 <= *(int *)(param_3 + 0x28)) {
      FUN_109e7636c();
      if ((*(byte *)(lVar1 + 0xc) >> 1 & 1) == 0) {
        func_0x000109eca058();
      }
      func_0x000109eb844c(param_1,&UNK_10f60edf4);
      lVar1 = *(long *)(param_2 + 0x10);
    }
    *(long *)(param_3 + 0x10) = lVar1;
    FUN_109efa06c(param_4,FUN_109efa234);
  }
  return;
}



/* Entry: 109e77c20; end: 109e7a1db;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_109e77c20(code *param_1,code **param_2,code *param_3,code **param_4)

{
  code **ppcVar1;
  code **ppcVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  code cVar6;
  code cVar7;
  char cVar8;
  short sVar9;
  ushort uVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  code **ppcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  code cVar18;
  code cVar19;
  undefined4 uVar20;
  uint uVar21;
  code **ppcVar22;
  code *pcVar23;
  long lVar24;
  long *plVar25;
  short sVar26;
  short sVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  byte bVar34;
  code **ppcVar35;
  int *piVar36;
  long *plVar37;
  ulong uVar38;
  long *plVar39;
  code *pcVar40;
  code *pcVar41;
  long *plVar42;
  long lVar43;
  byte bVar44;
  int iVar45;
  long lVar46;
  code **ppcVar47;
  byte bVar48;
  code *pcVar49;
  byte bVar50;
  ulong uVar51;
  code **ppcVar52;
  code **ppcVar53;
  long lVar54;
  code **ppcVar55;
  long lVar56;
  int iVar57;
  code *pcVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  code **ppcStack_8b8;
  undefined8 *puStack_8a0;
  byte bStack_871;
  code *pcStack_870;
  long alStack_868 [6];
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  ulong auStack_820 [6];
  code *pcStack_7f0;
  byte *pbStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined3 uStack_778;
  undefined5 uStack_775;
  undefined3 uStack_770;
  undefined8 uStack_76d;
  undefined1 uStack_760;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar30 = *(uint *)(param_2 + 3);
  uVar51 = (ulong)uVar30;
  if (uVar30 == 0) {
    uVar51 = 1;
    goto LAB_109e77dc8;
  }
  uVar4 = *(uint *)(param_1 + 0xc);
  puStack_8a0 = (undefined8 *)0x30;
  _malloc();
  if (puStack_8a0 == (undefined8 *)0x0) {
    puStack_8a0 = (undefined8 *)0x0;
  }
  else {
    puStack_8a0[4] = 0;
    puStack_8a0[1] = 0;
    *puStack_8a0 = 0;
    puStack_8a0[3] = 0;
    puStack_8a0[2] = 0;
    puStack_8a0 = puStack_8a0 + 6;
  }
  lVar46 = 0;
  uStack_838 = 0;
  uStack_830 = 0;
  uStack_828 = 0;
  do {
    uVar38 = uVar51;
    _calloc(uVar51,8);
    *(ulong *)((long)auStack_820 + lVar46) = uVar38;
    lVar46 = lVar46 + 8;
  } while (lVar46 != 0x30);
  uVar38 = 0;
  uVar28 = 0;
  cVar6 = param_1[0x1a4b7];
  uVar21 = 0xffffffff;
  do {
    lVar46 = *(long *)(param_2[4] + uVar38 * 8);
    uVar5 = *(uint *)(lVar46 + 0xb0);
    if (uVar5 <= uVar21) {
      uVar21 = uVar5;
    }
    if (uVar28 <= uVar5) {
      uVar28 = uVar5;
    }
    if ((cVar6 == (code)0x0) && (*(char *)(lVar46 + 0x19) != *(char *)(*(long *)param_2[4] + 0x19)))
    goto LAB_109e77d6c;
    lVar43 = (long)*(int *)(lVar46 + 4);
    uVar5 = *(uint *)((long)&uStack_838 + lVar43 * 4);
    *(long *)(auStack_820[lVar43] + (ulong)uVar5 * 8) = lVar46;
    *(uint *)((long)&uStack_838 + lVar43 * 4) = uVar5 + 1;
    uVar38 = uVar38 + 1;
  } while (uVar51 != uVar38);
  cVar7 = *(code *)(*(long *)param_2[4] + 0x19);
  if ((cVar6 == (code)0x0) && (cVar7 != (code)0x0 && uVar21 != uVar28)) {
LAB_109e77d6c:
    pcVar58 = (code *)&UNK_10f60ee40;
  }
  else {
    *(uint *)(param_2 + 0x1b) = uVar28;
    *(code *)((long)param_2 + 0xa5) = cVar7;
    if (*(code *)((long)param_2 + 0x17) != (code)0x0) {
LAB_109e77e14:
      if ((uStack_828._4_4_ != 0) && (uStack_828._4_4_ != uVar30)) {
        func_0x000109eb844c(param_2,&UNK_10f60f002);
      }
      lVar46 = 0;
      ppcVar1 = param_2 + 0x15;
LAB_109e77e44:
      uVar30 = *(uint *)((long)&uStack_838 + lVar46 * 4);
      ppcVar52 = (code **)(ulong)uVar30;
      if (uVar30 != 0) {
        ppcVar55 = (code **)auStack_820[lVar46];
        pcVar58 = FUN_109f65518;
        param_3 = FUN_109f65668;
        puVar15 = puStack_8a0;
        FUN_109f64c74(puStack_8a0,FUN_109f65518);
        lVar43 = 0;
        bVar34 = 0;
        bVar48 = 0;
        do {
          if (*(long *)((long)ppcVar55 + lVar43) != 0) {
            param_4 = *(code ***)(*(long *)((long)ppcVar55 + lVar43) + 0xb8);
            pcVar58 = param_1 + 0x1a070;
            param_3 = (code *)param_2;
            func_0x000109e7af18(puStack_8a0,pcVar58,param_2,param_4,puVar15,0);
            bVar34 = *(byte *)(*(long *)((long)ppcVar55 + lVar43) + 0xd1) | bVar34;
            bVar48 = *(byte *)(*(long *)((long)ppcVar55 + lVar43) + 0xd2) | bVar48;
          }
          lVar43 = lVar43 + 8;
        } while ((long)ppcVar52 * 8 - lVar43 != 0);
        uVar20 = 1;
        if ((bVar48 & 1) != 0) {
          uVar20 = 2;
        }
        if ((*(int *)(param_2[0xd] + 0x114) == 0) ||
           (pcVar58 = (code *)ppcVar55, param_3 = (code *)ppcVar52, FUN_109e698d4(param_2,ppcVar55),
           *(int *)(param_2[0xd] + 0x114) == 0)) goto LAB_109e78df0;
        if (uVar30 != 1) {
          lVar43 = 0;
          ppcVar22 = (code **)0x1;
          do {
            plVar25 = *(long **)(*(long *)(ppcVar55[lVar43] + 0xb8) + 0x178);
            while (plVar32 = (long *)*plVar25, plVar32 != (long *)0x0) {
              lVar56 = plVar25[6];
              plVar25 = plVar32;
              if (lVar56 != 0) {
                do {
                  if ((code **)(lVar43 + 1) < ppcVar52) {
                    lVar56 = *(long *)(lVar56 + 0x20);
                    uVar13 = *(undefined8 *)(lVar56 + 0x10);
                    ppcVar35 = ppcVar22;
                    do {
                      plVar25 = *(long **)(*(long *)(ppcVar55[(long)ppcVar35] + 0xb8) + 0x178);
                      for (plVar33 = (long *)**(long **)(*(long *)(ppcVar55[(long)ppcVar35] + 0xb8)
                                                        + 0x178); plVar33 != (long *)0x0;
                          plVar33 = (long *)*plVar33) {
                        lVar24 = plVar25[2];
                        if ((lVar24 != 0) && (_strcmp(lVar24,uVar13), (int)lVar24 == 0)) {
                          if (plVar25[6] != 0) {
                            uVar21 = *(uint *)(plVar25 + 4);
                            uVar51 = (ulong)uVar21;
                            if (uVar21 == *(uint *)(lVar56 + 0x20)) {
                              if (uVar21 == 0) goto LAB_109e780a8;
                              plVar33 = (long *)(*(long *)(lVar56 + 0x28) + 8);
                              plVar25 = (long *)(plVar25[5] + 8);
                              goto LAB_109e78044;
                            }
                          }
                          break;
                        }
                        plVar25 = plVar33;
                      }
LAB_109e78004:
                      ppcVar35 = (code **)((long)ppcVar35 + 1);
                    } while (uVar30 != (uint)ppcVar35);
                  }
                  plVar33 = (long *)*plVar32;
                  plVar25 = plVar32;
                  while( true ) {
                    plVar32 = plVar33;
                    if (plVar32 == (long *)0x0) goto LAB_109e7808c;
                    lVar56 = plVar25[6];
                    if (lVar56 != 0) break;
                    plVar33 = (long *)*plVar32;
                    plVar25 = plVar32;
                  }
                } while( true );
              }
            }
LAB_109e7808c:
            lVar43 = lVar43 + 1;
            ppcVar22 = (code **)((long)ppcVar22 + 1);
          } while (ppcVar22 != ppcVar52);
        }
        ppcVar22 = (code **)0x0;
        do {
          pcVar58 = ppcVar55[(long)ppcVar22];
          plVar25 = (long *)**(long **)(*(long *)(pcVar58 + 0xb8) + 0x178);
          if (plVar25 != (long *)0x0) {
            plVar32 = *(long **)(*(long *)(pcVar58 + 0xb8) + 0x178);
            plVar33 = (long *)0x0;
            do {
              plVar37 = plVar32;
              if ((char)plVar32[7] == '\0') {
                plVar37 = plVar33;
              }
              plVar42 = (long *)*plVar25;
              plVar32 = plVar25;
              plVar33 = plVar37;
              plVar25 = plVar42;
            } while (plVar42 != (long *)0x0);
            if ((plVar37 != (long *)0x0) && (plVar37[6] != 0)) {
              puVar15 = (undefined8 *)0x80;
              _malloc();
              if (puVar15 == (undefined8 *)0x0) {
                ppcVar22 = (code **)0x0;
              }
              else {
                puVar15[4] = 0;
                puVar15[1] = 0;
                *puVar15 = 0;
                puVar15[3] = 0;
                puVar15[2] = 0;
                ppcVar22 = (code **)(puVar15 + 6);
                puVar15[7] = 0;
                *ppcVar22 = (code *)0x0;
                puVar15[9] = 0;
                puVar15[8] = 0;
                puVar15[0xb] = 0;
                puVar15[10] = 0;
                puVar15[0xd] = 0;
                puVar15[0xc] = 0;
                puVar15[0xe] = 0;
              }
              *(undefined4 *)ppcVar22 = *(undefined4 *)(*ppcVar55 + 4);
              param_3 = (code *)(ulong)*(uint *)((long)param_2 + 4);
              param_4 = (code **)0x0;
              pcVar23 = param_1;
              (**(code **)(param_1 + 0x1a028))();
              if (pcVar23 == (code *)0x0) {
                *(undefined4 *)(param_2[0xd] + 0x114) = 0;
                func_0x000109ec5c3c(param_1,ppcVar22);
                pcVar58 = (code *)ppcVar22;
                goto LAB_109e780cc;
              }
              *(code **)(pcVar23 + 0x5b0) = param_2[0xd];
              ppcVar22[5] = pcVar23;
              uVar13 = 0;
              FUN_109ed0574(0,*(undefined8 *)(pcVar58 + 0xb8));
              *(undefined8 *)(ppcVar22[5] + 0x160) = uVar13;
              if ((*(int *)ppcVar22 != 4) ||
                 ((*(uint *)(param_2 + 0x1b) < 0x96 & (bVar34 ^ 0xff)) != 0)) goto LAB_109e783b8;
              bVar11 = false;
              cVar7 = (code)0x0;
              cVar6 = (code)0x0;
              bVar34 = 0;
              ppcVar35 = ppcVar52;
              ppcVar47 = ppcVar55;
              goto LAB_109e78194;
            }
          }
          ppcVar22 = (code **)((long)ppcVar22 + 1);
        } while (ppcVar22 != ppcVar52);
        func_0x000109f47670();
        pcVar58 = (code *)&UNK_10f60f092;
        func_0x000109eb844c(param_2,&UNK_10f60f092);
        goto LAB_109e780cc;
      }
      goto LAB_109e78e20;
    }
    if ((uStack_830._4_4_ == 0) || ((int)uStack_838 != 0)) {
      if (((int)uStack_830 == 0) || ((int)uStack_838 != 0)) {
        if ((uStack_838._4_4_ == 0) || ((int)uStack_838 != 0)) {
          if (((int)uStack_830 == 0) && (uStack_838._4_4_ != 0)) {
            pcVar58 = (code *)&UNK_10f60ef28;
          }
          else {
            if ((((int)uStack_830 == 0) || (uStack_838._4_4_ != 0)) || (cVar7 == (code)0x0))
            goto LAB_109e77e14;
            pcVar58 = (code *)&UNK_10f60ef78;
          }
        }
        else {
          pcVar58 = (code *)&UNK_10f60eee9;
        }
      }
      else {
        pcVar58 = (code *)&UNK_10f60eea7;
      }
    }
    else {
      pcVar58 = (code *)&UNK_10f60ee74;
    }
  }
  func_0x000109eb844c(param_2,pcVar58);
  goto LAB_109e77d7c;
LAB_109e78044:
  if (*plVar25 != *plVar33) goto LAB_109e78004;
  uVar51 = uVar51 - 1;
  plVar33 = plVar33 + 2;
  plVar25 = plVar25 + 2;
  if (uVar51 == 0) goto LAB_109e780a8;
  goto LAB_109e78044;
LAB_109e780a8:
  pcVar58 = (code *)&UNK_10f60f06f;
  func_0x000109eb844c(param_2,&UNK_10f60f06f);
  goto LAB_109e780cc;
LAB_109e78194:
  do {
    pcVar49 = *ppcVar47;
    cVar19 = pcVar49[0xd3];
    if (bVar11) {
      if (((byte)cVar19 & 1) != 0) {
LAB_109e781a4:
        if ((pcVar49[0xdb] != (code)((byte)cVar6 & 1)) || (pcVar49[0xdc] != (code)((byte)cVar7 & 1))
           ) goto LAB_109e781dc;
        cVar18 = pcVar49[0xd4];
        goto LAB_109e781f4;
      }
      if (pcVar49[0xd4] == (code)0x1) {
        func_0x000109eb844c(param_2,&UNK_10f60f526);
        if (((byte)pcVar49[0xd3] & 1) != 0) goto LAB_109e781a4;
        bVar11 = true;
        cVar18 = (code)((byte)pcVar49[0xd4] & 1);
        goto joined_r0x000109e781fc;
      }
      bVar11 = true;
    }
    else {
      if (((byte)cVar19 & bVar34 & 1) != 0) {
LAB_109e781dc:
        func_0x000109eb844c(param_2,&UNK_10f60f526);
        cVar19 = pcVar49[0xd3];
      }
      cVar18 = pcVar49[0xd4];
      if (((byte)cVar19 & 1) == 0) {
joined_r0x000109e781fc:
        if (cVar18 == (code)0x0) goto LAB_109e7821c;
        bVar11 = false;
        cVar18 = (code)0x1;
      }
      else {
LAB_109e781f4:
        bVar11 = true;
      }
      bVar34 = (byte)cVar18 | bVar34 & 1;
      cVar6 = pcVar49[0xdb];
      cVar7 = pcVar49[0xdc];
    }
LAB_109e7821c:
    if (((byte)pcVar49[0xd0] & 1) == 0) {
      cVar19 = pcVar49[0xd5];
    }
    else {
      cVar19 = (code)0x1;
    }
    uVar28 = *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158);
    uVar21 = 0;
    if ((uVar28 >> 9 & 1) != 0 || cVar19 != (code)0x0) {
      uVar21 = 0x200;
    }
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) = uVar21 | uVar28 & 0xfffffdff;
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
         *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) | (uint)(byte)pcVar49[0xda] << 10;
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
         *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) | (uint)(byte)pcVar49[0xd5] << 0xb;
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
         *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) | (uint)(byte)pcVar49[0xd6] << 0xe;
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
         *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) | (uint)(byte)pcVar49[0xd7] << 0xf;
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
         *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) | (uint)(byte)pcVar49[0xd8] << 0x10;
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
         *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) | (uint)(byte)pcVar49[0xd9] << 0x11;
    *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x15c) =
         *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x15c) | *(uint *)(pcVar49 + 0xb4);
    ppcVar35 = (code **)((long)ppcVar35 + -1);
    ppcVar47 = ppcVar47 + 1;
  } while (ppcVar35 != (code **)0x0);
  uVar21 = 0x1000;
  if (((byte)cVar7 & 1) == 0) {
    uVar21 = 0;
  }
  uVar28 = 0x2000;
  if (((byte)cVar6 & 1) == 0) {
    uVar28 = 0;
  }
  *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
       *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) & 0xffffefff | uVar21;
  *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) =
       *(uint *)(*(long *)(ppcVar22[5] + 0x160) + 0x158) & 0xffffdfff | uVar28;
LAB_109e783b8:
  if (pcVar23[0x31] == (code)0x1) {
    *(undefined1 *)(*(long *)(pcVar23 + 0x160) + 0x15c) = 0;
    ppcVar47 = ppcVar55;
    ppcVar35 = ppcVar52;
    do {
      uVar21 = *(uint *)(*ppcVar47 + 0xf4);
      if (uVar21 != 0) {
        uVar28 = (uint)*(byte *)(*(long *)(pcVar23 + 0x160) + 0x15c);
        if (uVar28 != 0 && uVar21 != uVar28) {
          puVar17 = &UNK_10f60f573;
          goto LAB_109e7842c;
        }
        *(char *)(*(long *)(pcVar23 + 0x160) + 0x15c) = (char)uVar21;
      }
      ppcVar35 = (code **)((long)ppcVar35 + -1);
      ppcVar47 = ppcVar47 + 1;
    } while (ppcVar35 != (code **)0x0);
    if (*(char *)(*(long *)(pcVar23 + 0x160) + 0x15c) == '\0') {
      puVar17 = &UNK_10f60f5c9;
LAB_109e7842c:
      func_0x000109eb844c(param_2,puVar17);
    }
  }
  if (pcVar23[0x31] == (code)0x2) {
    *(undefined4 *)(*(long *)(pcVar23 + 0x160) + 0x158) = 0;
    *(byte *)(*(long *)(pcVar23 + 0x160) + 0x15d) =
         *(byte *)(*(long *)(pcVar23 + 0x160) + 0x15d) & 0xfc;
    ppcVar47 = ppcVar55;
    ppcVar35 = ppcVar52;
    iVar29 = -1;
    sVar26 = 0;
    do {
      pcVar49 = *ppcVar47;
      iVar12 = *(int *)(pcVar49 + 0xf8);
      if (iVar12 != 0) {
        iVar45 = *(int *)(*(long *)(pcVar23 + 0x160) + 0x158);
        if (iVar45 != 0 && iVar45 != iVar12) {
          puVar17 = &UNK_10f60f613;
          goto LAB_109e7858c;
        }
        *(int *)(*(long *)(pcVar23 + 0x160) + 0x158) = iVar12;
      }
      uVar21 = *(uint *)(pcVar49 + 0xfc);
      if (uVar21 != 0) {
        bVar34 = *(byte *)(*(long *)(pcVar23 + 0x160) + 0x15d);
        if ((bVar34 & 3) != 0 && uVar21 != (bVar34 & 3)) {
          puVar17 = &UNK_10f60f663;
          goto LAB_109e7858c;
        }
        *(byte *)(*(long *)(pcVar23 + 0x160) + 0x15d) = bVar34 & 0xfc | (byte)uVar21 & 3;
      }
      sVar9 = *(short *)(pcVar49 + 0x100);
      sVar27 = sVar26;
      if (((sVar9 != 0) && (sVar27 = sVar9, sVar26 != 0)) && (sVar26 != sVar9)) {
        puVar17 = &UNK_10f60f6ac;
        goto LAB_109e7858c;
      }
      iVar12 = *(int *)(pcVar49 + 0x104);
      iVar45 = iVar29;
      if (((iVar12 != -1) && (iVar45 = iVar12, iVar29 != -1)) && (iVar29 != iVar12)) {
        puVar17 = &UNK_10f60f6ef;
        goto LAB_109e7858c;
      }
      ppcVar35 = (code **)((long)ppcVar35 + -1);
      ppcVar47 = ppcVar47 + 1;
      iVar29 = iVar45;
      sVar26 = sVar27;
    } while (ppcVar35 != (code **)0x0);
    lVar43 = *(long *)(pcVar23 + 0x160);
    if (*(int *)(lVar43 + 0x158) == 0) {
      puVar17 = &UNK_10f60f735;
LAB_109e7858c:
      func_0x000109eb844c(param_2,puVar17);
    }
    else {
      if ((*(byte *)(lVar43 + 0x15d) & 3) == 0) {
        *(byte *)(lVar43 + 0x15d) = *(byte *)(lVar43 + 0x15d) | 1;
      }
      if ((sVar27 == 0x901) || (sVar27 == 0)) {
        lVar43 = *(long *)(pcVar23 + 0x160);
        bVar34 = *(byte *)(lVar43 + 0x15d) | 4;
      }
      else {
        lVar43 = *(long *)(pcVar23 + 0x160);
        bVar34 = *(byte *)(lVar43 + 0x15d) & 0xfb;
      }
      *(byte *)(lVar43 + 0x15d) = bVar34;
      bVar34 = *(byte *)(*(long *)(pcVar23 + 0x160) + 0x15d);
      if (iVar45 + 1U < 2) {
        bVar34 = bVar34 & 0xf7;
      }
      else {
        bVar34 = bVar34 | 8;
      }
      *(byte *)(*(long *)(pcVar23 + 0x160) + 0x15d) = bVar34;
    }
  }
  if ((pcVar23[0x31] == (code)0x3) && (0x95 < *(uint *)(param_2 + 0x1b))) {
    *(undefined1 *)(*(long *)(pcVar23 + 0x160) + 0x162) = 0;
    *(undefined4 *)(*(long *)(pcVar23 + 0x160) + 0x15c) = 0x1c;
    *(undefined4 *)(*(long *)(pcVar23 + 0x160) + 0x158) = 0x1c;
    ppcVar47 = ppcVar55;
    ppcVar35 = ppcVar52;
    iVar29 = -1;
    do {
      pcVar49 = *ppcVar47;
      iVar12 = *(int *)(pcVar49 + 0x110);
      if (iVar12 != 0x1c) {
        iVar45 = *(int *)(*(long *)(pcVar23 + 0x160) + 0x15c);
        if (iVar45 != 0x1c && iVar45 != iVar12) {
          puVar17 = &UNK_10f60f77b;
          goto LAB_109e78758;
        }
        *(int *)(*(long *)(pcVar23 + 0x160) + 0x15c) = iVar12;
      }
      iVar12 = *(int *)(pcVar49 + 0x114);
      if (iVar12 != 0x1c) {
        iVar45 = *(int *)(*(long *)(pcVar23 + 0x160) + 0x158);
        if (iVar45 != 0x1c && iVar45 != iVar12) {
          puVar17 = &UNK_10f60f7b1;
          goto LAB_109e78758;
        }
        *(int *)(*(long *)(pcVar23 + 0x160) + 0x158) = iVar12;
      }
      iVar12 = *(int *)(pcVar49 + 0x108);
      iVar45 = iVar29;
      if (((iVar12 != -1) && (iVar45 = iVar12, iVar29 != -1)) && (iVar29 != iVar12)) {
        puVar17 = &UNK_10f60f7e8;
        goto LAB_109e78758;
      }
      uVar21 = *(uint *)(pcVar49 + 0x10c);
      if (uVar21 != 0) {
        uVar28 = (uint)*(byte *)(*(long *)(pcVar23 + 0x160) + 0x162);
        if (uVar28 != 0 && uVar21 != uVar28) {
          puVar17 = &UNK_10f60f832;
          goto LAB_109e78758;
        }
        *(char *)(*(long *)(pcVar23 + 0x160) + 0x162) = (char)uVar21;
      }
      ppcVar35 = (code **)((long)ppcVar35 + -1);
      ppcVar47 = ppcVar47 + 1;
      iVar29 = iVar45;
    } while (ppcVar35 != (code **)0x0);
    lVar43 = *(long *)(pcVar23 + 0x160);
    if (*(int *)(lVar43 + 0x15c) == 0x1c) {
      puVar17 = &UNK_10f60f879;
    }
    else if (*(int *)(lVar43 + 0x158) == 0x1c) {
      puVar17 = &UNK_10f60f8ae;
    }
    else {
      if (iVar45 != -1) {
        *(short *)(lVar43 + 0x160) = (short)iVar45;
        if (*(char *)(*(long *)(pcVar23 + 0x160) + 0x162) == '\0') {
          *(undefined1 *)(*(long *)(pcVar23 + 0x160) + 0x162) = 1;
        }
        goto LAB_109e7875c;
      }
      puVar17 = &UNK_10f60f8e4;
    }
LAB_109e78758:
    func_0x000109eb844c(param_2,puVar17);
  }
LAB_109e7875c:
  if (pcVar23[0x31] == (code)0x5) {
    ppcVar35 = (code **)0x0;
    lVar43 = *(long *)(pcVar23 + 0x160);
    *(undefined2 *)(lVar43 + 0x138) = 0;
    *(undefined4 *)(lVar43 + 0x134) = 0;
    *(ushort *)(lVar43 + 0x152) = *(ushort *)(lVar43 + 0x152) & 0xdfff;
    *(byte *)(*(long *)(pcVar23 + 0x160) + 0x156) =
         *(byte *)(*(long *)(pcVar23 + 0x160) + 0x156) & 0xfc;
    do {
      pcVar49 = ppcVar55[(long)ppcVar35];
      if (*(int *)(pcVar49 + 0x118) == 0) {
        if (pcVar49[0x124] == (code)0x1) {
          lVar43 = *(long *)(pcVar23 + 0x160);
          if (*(short *)(lVar43 + 0x134) != 0) {
            puVar17 = &UNK_10f60f946;
            goto LAB_109e788a4;
          }
          *(ushort *)(lVar43 + 0x152) = *(ushort *)(lVar43 + 0x152) | 0x2000;
        }
      }
      else {
        lVar43 = *(long *)(pcVar23 + 0x160) + 0x134;
        if (*(short *)(*(long *)(pcVar23 + 0x160) + 0x134) != 0) {
          lVar56 = 0;
          do {
            if (*(uint *)(pcVar49 + lVar56 * 4 + 0x118) != (uint)*(ushort *)(lVar43 + lVar56 * 2)) {
              puVar17 = &UNK_10f60f911;
              goto LAB_109e788a4;
            }
            lVar56 = lVar56 + 1;
          } while (lVar56 != 3);
        }
        lVar56 = 0;
        do {
          *(short *)(lVar43 + lVar56 * 2) = (short)*(undefined4 *)(pcVar49 + lVar56 * 4 + 0x118);
          lVar56 = lVar56 + 1;
        } while (lVar56 != 3);
      }
      uVar21 = *(uint *)(pcVar49 + 0x128);
      if (uVar21 != 0) {
        bVar34 = *(byte *)(*(long *)(pcVar23 + 0x160) + 0x156);
        if ((bVar34 & 3) != 0 && uVar21 != (bVar34 & 3)) {
          puVar17 = &UNK_10f60f98c;
          goto LAB_109e788a4;
        }
        *(byte *)(*(long *)(pcVar23 + 0x160) + 0x156) = bVar34 & 0xfc | (byte)uVar21 & 3;
      }
      ppcVar35 = (code **)((long)ppcVar35 + 1);
    } while (ppcVar35 != ppcVar52);
    lVar43 = *(long *)(pcVar23 + 0x160);
    uVar10 = *(ushort *)(lVar43 + 0x134);
    if ((uVar10 != 0) || (puVar17 = &UNK_10f60f9c7, (*(ushort *)(lVar43 + 0x152) >> 0xd & 1) != 0))
    {
      bVar34 = *(byte *)(lVar43 + 0x156) & 3;
      if (bVar34 == 2) {
        puVar17 = &UNK_10f60fadb;
        uVar10 = *(short *)(lVar43 + 0x136) * uVar10 * *(short *)(lVar43 + 0x138) & 3;
      }
      else {
        if (bVar34 != 1) goto LAB_109e788ac;
        puVar17 = &UNK_10f60fa0b;
        if ((uVar10 & 1) != 0) goto LAB_109e788a4;
        puVar17 = &UNK_10f60fa73;
        uVar10 = *(ushort *)(lVar43 + 0x136) & 1;
      }
      if (uVar10 == 0) goto LAB_109e788ac;
    }
LAB_109e788a4:
    func_0x000109eb844c(param_2,puVar17);
  }
LAB_109e788ac:
  if (*(int *)ppcVar22 != 4) {
    ppcVar35 = (code **)0x0;
    *(undefined8 *)((long)param_2 + 0x4c) = 0;
    *(undefined8 *)((long)param_2 + 0x44) = 0;
    do {
      lVar43 = 0;
      pcVar49 = ppcVar55[(long)ppcVar35];
      do {
        uVar21 = *(uint *)(pcVar49 + lVar43 * 4 + 0xe4);
        if (uVar21 != 0) {
          uVar28 = *(uint *)((long)param_2 + lVar43 * 4 + 0x44);
          if (uVar28 == 0) {
            *(uint *)((long)param_2 + lVar43 * 4 + 0x44) = uVar21;
            if ((uVar21 & 3) == 0) {
              if (uVar21 >> 2 <= *(uint *)(param_1 + 0x1a4f0)) goto LAB_109e7890c;
              puVar17 = &UNK_10f60ec54;
            }
            else {
              puVar17 = &UNK_10f60fba2;
            }
          }
          else {
            if (uVar28 == uVar21) goto LAB_109e7890c;
            puVar17 = &UNK_10f60fb50;
          }
          func_0x000109eb844c(param_2,puVar17);
          goto LAB_109e78964;
        }
LAB_109e7890c:
        lVar43 = lVar43 + 1;
      } while (lVar43 != 4);
      ppcVar35 = (code **)((long)ppcVar35 + 1);
    } while (ppcVar35 != ppcVar52);
  }
LAB_109e78964:
  ppcVar35 = (code **)0x0;
  bVar34 = 0;
  bVar50 = 0;
  bVar44 = 0;
  bVar48 = 0;
  do {
    pcVar49 = ppcVar55[(long)ppcVar35];
    bVar34 = bVar34 | (byte)pcVar49[0xdd];
    bVar48 = (byte)pcVar49[0xde] | bVar48;
    bVar44 = (byte)pcVar49[0xdf] | bVar44;
    bVar50 = (byte)pcVar49[0xe0] | bVar50;
    if (((bVar34 & bVar44 & 1) != 0) || ((bVar48 & bVar50 & 1) != 0)) {
      func_0x000109eb844c(param_2,&UNK_10f60fc24);
    }
    ppcVar35 = (code **)((long)ppcVar35 + 1);
  } while (ppcVar52 != ppcVar35);
  uVar21 = 0;
  ppcVar35 = (code **)0x0;
  ppcVar47 = ppcVar52;
  do {
    if (ppcVar55[(long)ppcVar35][0xe1] == (code)0x1) {
      *(ushort *)(*(long *)(pcVar23 + 0x160) + 0x152) =
           *(ushort *)(*(long *)(pcVar23 + 0x160) + 0x152) & 0xff7f |
           ((byte)ppcVar55[(long)ppcVar35][0xe2] & 1) << 7;
      if ((uint)ppcVar35 < uVar30) {
        ppcVar35 = ppcVar55 + uVar21;
        do {
          if (((*ppcVar35)[0xe1] == (code)0x1) &&
             ((*(ushort *)(*(long *)(pcVar23 + 0x160) + 0x152) >> 7 & 1) !=
              (ushort)(byte)(*ppcVar35)[0xe2])) {
            func_0x000109eb844c(param_2,&UNK_10f60fc92);
          }
          uVar21 = (int)ppcVar47 - 1;
          ppcVar47 = (code **)(ulong)uVar21;
          ppcVar35 = ppcVar35 + 1;
        } while (uVar21 != 0);
      }
      break;
    }
    ppcVar35 = (code **)((long)ppcVar35 + 1);
    ppcVar47 = (code **)(ulong)((int)ppcVar47 - 1);
    uVar21 = uVar21 + 1;
  } while (ppcVar52 != ppcVar35);
  *(undefined4 *)(*(long *)(pcVar23 + 0x160) + 0x13c) = uVar20;
  ppcVar35 = param_2;
  param_3 = (code *)ppcVar22;
  param_4 = ppcVar55;
  func_0x000109e689dc(param_2,pcVar58,ppcVar22,ppcVar55,ppcVar52);
  if (((ulong)ppcVar35 & 1) != 0) {
    lVar43 = *(long *)(ppcVar22[5] + 0x160);
    plVar25 = *(long **)(lVar43 + 0x178);
    plVar32 = (long *)*plVar25;
    if (plVar32 == (long *)0x0) {
      ppcStack_8b8 = *(code ***)(lRam0000000000000020 + 0x18);
    }
    else {
      plVar33 = (long *)0x0;
      plVar37 = plVar25;
      plVar42 = plVar32;
      do {
        plVar3 = plVar37;
        if ((char)plVar37[7] == '\0') {
          plVar3 = plVar33;
        }
        plVar39 = (long *)*plVar42;
        plVar33 = plVar3;
        plVar37 = plVar42;
        plVar42 = plVar39;
      } while (plVar39 != (long *)0x0);
      if (plVar3 == (long *)0x0) {
        lVar56 = 0;
      }
      else {
        lVar56 = plVar3[6];
      }
      ppcStack_8b8 = *(code ***)(*(long *)(lVar56 + 0x20) + 0x18);
      do {
        plVar33 = plVar32;
        lVar24 = plVar25[6];
        if (lVar24 != 0) {
          do {
            lVar43 = *(long *)(lVar24 + 0x20);
            uVar13 = *(undefined8 *)(lVar43 + 0x10);
            param_3 = (code *)0xb;
            _strncmp(uVar13,&UNK_10f60f0aa);
            if ((int)uVar13 == 0) {
              param_3 = *(code **)(ppcVar22[5] + 0x160);
              func_0x000109ecb114(param_3,lVar43);
              FUN_109ecb4f0(0,*(undefined8 *)(lVar56 + 0x30));
              plVar33 = (long *)*plVar25;
            }
            plVar32 = (long *)*plVar33;
            plVar25 = plVar33;
            while( true ) {
              plVar33 = plVar32;
              if (plVar33 == (long *)0x0) {
                lVar43 = *(long *)(ppcVar22[5] + 0x160);
                goto LAB_109e78bc4;
              }
              lVar24 = plVar25[6];
              if (lVar24 != 0) break;
              plVar32 = (long *)*plVar33;
              plVar25 = plVar33;
            }
          } while( true );
        }
        plVar32 = (long *)*plVar33;
        plVar25 = plVar33;
      } while ((long *)*plVar33 != (long *)0x0);
    }
LAB_109e78bc4:
    FUN_109e6948c(lVar43);
    pcVar58 = FUN_109efa234;
    FUN_109efa06c(*(undefined8 *)(ppcVar22[5] + 0x160),FUN_109efa234);
    plVar25 = *(long **)(*(long *)(ppcVar22[5] + 0x160) + 0x178);
    for (plVar32 = (long *)**(long **)(*(long *)(ppcVar22[5] + 0x160) + 0x178);
        plVar32 != (long *)0x0; plVar32 = (long *)*plVar32) {
      lVar43 = plVar25[6];
      if (lVar43 != 0) {
        do {
          lVar56 = *(long *)(lVar43 + 0x30);
          if (lVar56 != 0) {
            puVar15 = *(undefined8 **)(*(long *)(lVar43 + 0x20) + 0x18);
            do {
              ppcVar47 = *(code ***)(lVar56 + 0x20);
              ppcVar35 = (code **)*ppcVar47;
              if (ppcVar35 != (code **)0x0) {
                do {
                  ppcVar14 = (code **)0x0;
                  ppcVar53 = ppcVar47;
                  if (*ppcVar35 != (code *)0x0) {
                    ppcVar14 = ppcVar35;
                  }
                  do {
                    ppcVar47 = ppcVar14;
                    if ((*(int *)(ppcVar53 + 3) == 4) && (*(int *)(ppcVar53 + 5) == 0x65)) {
                      uVar51 = *(ulong *)(*(long *)(*(long *)ppcVar53[0x13] + 0x38) + 0x10);
                      FUN_109eca23c();
                      ppcVar35 = (code **)*puVar15;
                      FUN_109f6600c(ppcVar35,0x50,8);
                      if (ppcVar35 != (code **)0x0) {
                        ppcVar35[7] = (code *)0x0;
                        ppcVar35[6] = (code *)0x0;
                        ppcVar35[9] = (code *)0x0;
                        ppcVar35[8] = (code *)0x0;
                        ppcVar35[3] = (code *)0x0;
                        ppcVar35[2] = (code *)0x0;
                        ppcVar35[5] = (code *)0x0;
                        ppcVar35[4] = (code *)0x0;
                        ppcVar35[1] = (code *)0x0;
                        *ppcVar35 = (code *)0x0;
                      }
                      *(undefined4 *)(ppcVar35 + 3) = 5;
                      ppcVar35[1] = (code *)0x0;
                      ppcVar35[2] = (code *)0x0;
                      *ppcVar35 = (code *)0x0;
                      param_4 = (code **)0x20;
                      FUN_109ecb048(ppcVar35,ppcVar35 + 5,1);
                      ppcVar35[9] = (code *)(uVar51 & 0xffffffff);
                      pcVar58 = (code *)ppcVar53;
                      param_3 = (code *)ppcVar35;
                      FUN_109ecb4f0(2,ppcVar53);
                      if ((code **)(ppcVar53[8] + -8) != ppcVar53 + 6) {
                        ppcVar14 = ppcVar35 + 6;
                        pcVar23 = ppcVar53[8];
                        do {
                          lVar43 = *(long *)pcVar23;
                          pcVar49 = *(code **)(pcVar23 + 8);
                          *(code **)(lVar43 + 8) = pcVar49;
                          *(long *)pcVar49 = lVar43;
                          *(code ***)(pcVar23 + 8) = ppcVar14;
                          *(code ***)(pcVar23 + 0x10) = ppcVar35 + 5;
                          *(long *)pcVar23 = 0;
                          pcVar40 = *ppcVar14;
                          *(code **)pcVar23 = pcVar40;
                          *(code **)(pcVar40 + 8) = pcVar23;
                          *ppcVar14 = pcVar23;
                          pcVar23 = pcVar49;
                        } while ((code **)(pcVar49 + -8) != ppcVar53 + 6);
                      }
                      FUN_109ecb9c0(ppcVar53);
                    }
                    if (ppcVar47 == (code **)0x0) goto LAB_109e78db4;
                    ppcVar35 = (code **)*ppcVar47;
                    ppcVar14 = (code **)0x0;
                    ppcVar53 = ppcVar47;
                  } while (ppcVar35 == (code **)0x0);
                } while( true );
              }
LAB_109e78db4:
              FUN_109ecc434();
            } while (lVar56 != 0);
            plVar32 = (long *)*plVar25;
          }
          plVar33 = (long *)*plVar32;
          plVar25 = plVar32;
          while( true ) {
            plVar32 = plVar33;
            if (plVar32 == (long *)0x0) goto LAB_109e78c08;
            lVar43 = plVar25[6];
            if (lVar43 != 0) break;
            plVar33 = (long *)*plVar32;
            plVar25 = plVar32;
          }
        } while( true );
      }
      plVar25 = plVar32;
    }
LAB_109e78c08:
    if (*(int *)(param_2[0xd] + 0x114) == 0) {
      func_0x000109ec5c3c(param_1,ppcVar22);
      pcVar58 = (code *)ppcVar22;
LAB_109e78df0:
      ppcVar22 = (code **)0x0;
    }
    else {
      if ((*(code *)((long)ppcStack_8b8 + 0x61) == (code)0x5) &&
         (((byte)*(code *)((long)ppcStack_8b8 + 0x156) & 3) == 0)) {
        pcVar23 = ppcStack_8b8[0x2f];
        for (pcVar49 = *(code **)ppcStack_8b8[0x2f]; pcVar49 != (code *)0x0;
            pcVar49 = *(code **)pcVar49) {
          lVar43 = *(long *)(pcVar23 + 0x30);
          if (lVar43 != 0) {
            do {
              lVar43 = *(long *)(lVar43 + 0x30);
              if (lVar43 != 0) {
                do {
                  ppcVar47 = *(code ***)(lVar43 + 0x20);
                  ppcVar35 = (code **)*ppcVar47;
                  if (ppcVar35 != (code **)0x0) {
                    do {
                      ppcVar14 = (code **)0x0;
                      ppcVar53 = ppcVar47;
                      if (*ppcVar35 != (code *)0x0) {
                        ppcVar14 = ppcVar35;
                      }
                      do {
                        ppcVar47 = ppcVar14;
                        if ((*(int *)(ppcVar53 + 3) == 4) && (*(int *)(ppcVar53 + 5) - 0x59U < 6)) {
                          ppcVar35 = ppcVar53 + 6;
                          ppcVar14 = ppcStack_8b8;
                          FUN_109ecafe4(ppcStack_8b8,*(code *)((long)ppcVar53 + 0x4c),
                                        *(code *)((long)ppcVar53 + 0x4d));
                          pcVar58 = (code *)ppcVar53;
                          param_3 = (code *)ppcVar14;
                          FUN_109ecb4f0(2,ppcVar53);
                          if ((code **)(ppcVar53[8] + -8) != ppcVar35) {
                            ppcVar2 = ppcVar14 + 6;
                            pcVar49 = ppcVar53[8];
                            do {
                              lVar56 = *(long *)pcVar49;
                              pcVar40 = *(code **)(pcVar49 + 8);
                              *(code **)(lVar56 + 8) = pcVar40;
                              *(long *)pcVar40 = lVar56;
                              *(code ***)(pcVar49 + 8) = ppcVar2;
                              *(code ***)(pcVar49 + 0x10) = ppcVar14 + 5;
                              *(long *)pcVar49 = 0;
                              pcVar41 = *ppcVar2;
                              *(code **)pcVar49 = pcVar41;
                              *(code **)(pcVar41 + 8) = pcVar49;
                              *ppcVar2 = pcVar49;
                              pcVar49 = pcVar40;
                            } while ((code **)(pcVar40 + -8) != ppcVar35);
                          }
                          FUN_109ecb9c0(*ppcVar35);
                        }
                        if (ppcVar47 == (code **)0x0) goto LAB_109e78fc4;
                        ppcVar35 = (code **)*ppcVar47;
                        ppcVar14 = (code **)0x0;
                        ppcVar53 = ppcVar47;
                      } while (ppcVar35 == (code **)0x0);
                    } while( true );
                  }
LAB_109e78fc4:
                  FUN_109ecc434();
                } while (lVar43 != 0);
                pcVar49 = *(code **)pcVar23;
              }
              pcVar40 = *(code **)pcVar49;
              pcVar23 = pcVar49;
              while( true ) {
                pcVar49 = pcVar40;
                if (pcVar49 == (code *)0x0) goto LAB_109e78c34;
                lVar43 = *(long *)(pcVar23 + 0x30);
                if (lVar43 != 0) break;
                pcVar40 = *(code **)pcVar49;
                pcVar23 = pcVar49;
              }
            } while( true );
          }
          pcVar23 = pcVar49;
        }
      }
LAB_109e78c34:
      if (uVar30 == 1) {
        pcVar23 = *ppcVar55;
        uVar59 = *(undefined8 *)(pcVar23 + 0x7c);
        uVar13 = *(undefined8 *)(pcVar23 + 0x74);
        uVar60 = *(undefined8 *)(pcVar23 + 0x84);
        *(undefined8 *)((long)ppcVar22 + 0x1c) = *(undefined8 *)(pcVar23 + 0x8c);
        *(undefined8 *)((long)ppcVar22 + 0x14) = uVar60;
        *(undefined8 *)((long)ppcVar22 + 0xc) = uVar59;
        *(undefined8 *)((long)ppcVar22 + 4) = uVar13;
      }
      else {
        pbStack_7e8 = (byte *)0xa54ff53a3c6ef372;
        pcStack_7f0 = (code *)0xbb67ae856a09e667;
        uStack_7d8 = 0x5be0cd191f83d9ab;
        uStack_7e0 = 0x9b05688c510e527f;
        uStack_7c8 = 0xa54ff53a3c6ef372;
        uStack_7d0 = 0xbb67ae856a09e667;
        uStack_7b8 = 0x5be0cd191f83d9ab;
        uStack_7c0 = 0x9b05688c510e527f;
        uStack_760 = 0;
        uStack_7a8 = 0;
        uStack_7b0 = 0;
        uStack_798 = 0;
        uStack_7a0 = 0;
        uStack_788 = 0;
        uStack_790 = 0;
        uStack_778 = 0;
        uStack_780 = 0;
        uStack_76d = 0;
        uStack_775 = 0;
        uStack_770 = 0;
        do {
          if (*ppcVar55 != (code *)0x0) {
            FUN_109f61aa0(&pcStack_7f0,*ppcVar55 + 0x74,0x20);
          }
          ppcVar52 = (code **)((long)ppcVar52 + -1);
          ppcVar55 = ppcVar55 + 1;
        } while (ppcVar52 != (code **)0x0);
        param_3 = (code *)((long)ppcVar22 + 4);
        pcVar58 = (code *)0x0;
        param_4 = (code **)0x20;
        func_0x000109f625b0(&pcStack_7f0,0);
      }
    }
    goto LAB_109e78df4;
  }
  func_0x000109ec5c3c(param_1,ppcVar22);
  pcVar58 = (code *)ppcVar22;
LAB_109e780cc:
  ppcVar22 = (code **)0x0;
LAB_109e78df4:
  pcVar23 = param_2[0xd];
  if (*(int *)(pcVar23 + 0x114) == 0) {
    if (ppcVar22 != (code **)0x0) {
      func_0x000109ec5c3c(param_1,ppcVar22);
      pcVar58 = (code *)ppcVar22;
    }
    goto LAB_109e77d7c;
  }
  ppcVar1[lVar46] = (code *)ppcVar22;
  *(uint *)(pcVar23 + 0x120) = *(uint *)(pcVar23 + 0x120) | 1 << (ulong)((uint)lVar46 & 0x1f);
LAB_109e78e20:
  lVar46 = lVar46 + 1;
  if (lVar46 == 6) goto LAB_109e79030;
  goto LAB_109e77e44;
LAB_109e79648:
  pcVar58 = (code *)&UNK_10f60fe18;
LAB_109e7965c:
  func_0x000109eb844c(param_2,pcVar58);
LAB_109e79660:
  func_0x000109ec6344(plVar25);
  __ZdlPv();
LAB_109e796a8:
  if (*(uint *)(param_2[0xd] + 0x120) != 0) {
    pcVar58 = FUN_109f65518;
    param_3 = FUN_109f65668;
    uVar30 = *(uint *)(param_2[0xd] + 0x120);
    do {
      uVar21 = (uVar30 & 0xaaaaaaaa) >> 1 | (uVar30 & 0x55555555) << 1;
      uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
      uVar21 = (uVar21 & 0xf0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f) << 4;
      uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
      lVar43 = LZCOUNT(uVar21 >> 0x10 | uVar21 << 0x10);
      lVar56 = *(long *)(ppcVar1[lVar43] + 0x28);
      lVar46 = 0;
      FUN_109f6695c(0,FUN_109f65518);
      *(undefined4 *)(lVar56 + 0x5e4) = 0;
      for (plVar25 = *(long **)(*(long *)(lVar56 + 0x160) + 0x178); *plVar25 != 0;
          plVar25 = (long *)*plVar25) {
        lVar54 = plVar25[2];
        lVar24 = lVar54;
        (**(code **)(lVar46 + 0x10))(lVar54);
        lVar31 = lVar46;
        FUN_109f66ba8(lVar46,lVar24,lVar54);
        if (lVar31 == 0) {
          ppcVar22 = (code **)plVar25[2];
          ppcVar52 = ppcVar22;
          (**(code **)(lVar46 + 0x10))(ppcVar22);
          param_4 = (code **)0x0;
          lVar24 = lVar46;
          ppcVar55 = ppcVar22;
          FUN_109f66e48(lVar46,ppcVar52);
          if (lVar24 != 0) {
            *(code ***)(lVar24 + 8) = ppcVar22;
          }
          if (*(char *)((long)plVar25 + 0x3d) == '\x01') {
            *(int *)(lVar56 + 0x5c8) = *(int *)(lVar56 + 0x5c8) + 1;
          }
          if ((int)plVar25[8] != 0) {
            uVar21 = *(int *)(lVar56 + 0x5e0) + 1;
            param_4 = (code **)(ulong)uVar21;
            if (0x100 < uVar21) {
              pcVar58 = (code *)&UNK_10f60fe5d;
              param_3 = (code *)ppcVar55;
LAB_109e798d8:
              func_0x000109eb844c(param_2,pcVar58);
              goto LAB_109e798e4;
            }
            ppcVar52 = (code **)0x28;
            lVar24 = lVar56;
            FUN_109f65a40(lVar56,*(undefined8 *)(lVar56 + 0x5e8));
            *(long *)(lVar56 + 0x5e8) = lVar24;
            lVar24 = lVar56;
            FUN_109f65c2c(lVar56,plVar25[2]);
            *(long *)(*(long *)(lVar56 + 0x5e8) + (ulong)*(uint *)(lVar56 + 0x5e0) * 0x28) = lVar24;
            FUN_109eb8d70(*(long *)(lVar56 + 0x5e8) + (ulong)*(uint *)(lVar56 + 0x5e0) * 0x28);
            uVar21 = *(uint *)(plVar25 + 8);
            *(uint *)(*(long *)(lVar56 + 0x5e8) + (ulong)*(uint *)(lVar56 + 0x5e0) * 0x28 + 0x1c) =
                 uVar21;
            lVar24 = lVar56;
            FUN_109f658b0(lVar56,(ulong)uVar21 << 3);
            *(long *)(*(long *)(lVar56 + 0x5e8) + (ulong)*(uint *)(lVar56 + 0x5e0) * 0x28 + 0x20) =
                 lVar24;
            uVar51 = (ulong)*(uint *)(lVar56 + 0x5e0);
            if (*(uint *)(lVar56 + 0x5e0) == 0) {
              uVar51 = 0;
            }
            else {
              piVar36 = (int *)(*(long *)(lVar56 + 0x5e8) + 0x18);
              uVar38 = uVar51;
              do {
                if ((*piVar36 != -1) && (*piVar36 == (int)plVar25[10])) {
                  pcVar58 = (code *)&UNK_10f60fe86;
                  param_3 = (code *)ppcVar52;
                  goto LAB_109e798d8;
                }
                uVar38 = uVar38 - 1;
                piVar36 = piVar36 + 10;
              } while (uVar38 != 0);
            }
            iVar29 = (int)plVar25[10];
            *(int *)(*(long *)(lVar56 + 0x5e8) + uVar51 * 0x28 + 0x18) = iVar29;
            if (*(int *)(lVar56 + 0x5e4) < iVar29) {
              *(int *)(lVar56 + 0x5e4) = iVar29;
            }
            uVar21 = *(uint *)(plVar25 + 8);
            if (0 < (int)uVar21) {
              lVar24 = 0;
              do {
                *(undefined8 *)
                 (*(long *)(*(long *)(lVar56 + 0x5e8) + (ulong)*(uint *)(lVar56 + 0x5e0) * 0x28 +
                           0x20) + lVar24) = *(undefined8 *)(plVar25[9] + lVar24);
                lVar24 = lVar24 + 8;
              } while ((ulong)uVar21 * 8 - lVar24 != 0);
            }
            *(int *)(lVar56 + 0x5e0) = *(int *)(lVar56 + 0x5e0) + 1;
          }
        }
      }
      uVar21 = 1 << (ulong)((uint)lVar43 & 0x1f);
      func_0x000109f66a2c(lVar46,0);
      bVar11 = uVar21 != uVar30;
      uVar30 = uVar21 ^ uVar30;
    } while (bVar11);
  }
LAB_109e798e4:
  pcVar23 = param_2[0xd];
  uVar30 = *(uint *)(pcVar23 + 0x120);
  if (uVar30 != 0) {
    do {
      uVar21 = (uVar30 & 0xaaaaaaaa) >> 1 | (uVar30 & 0x55555555) << 1;
      uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
      uVar21 = (uVar21 & 0xf0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f) << 4;
      uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
      lVar43 = LZCOUNT(uVar21 >> 0x10 | uVar21 << 0x10);
      lVar46 = *(long *)(ppcVar1[lVar43] + 0x28);
      uVar21 = *(uint *)(lVar46 + 0x5e0);
      if (uVar21 != 0) {
        uVar51 = 0;
        lVar56 = *(long *)(lVar46 + 0x5e8);
        plVar25 = *(long **)(*(long *)(lVar46 + 0x160) + 0x178);
        lVar46 = *plVar25;
        do {
          if (lVar46 != 0) {
            bVar11 = false;
            ppcVar52 = *(code ***)(lVar56 + uVar51 * 0x28);
            plVar32 = plVar25;
            do {
              if (plVar32[6] == 0) {
                lVar24 = plVar32[2];
                pcVar58 = (code *)ppcVar52;
                _strcmp(lVar24,ppcVar52);
                if ((int)lVar24 == 0) {
                  if (bVar11) {
                    func_0x000109f47670();
                    pcVar58 = (code *)&UNK_10f609835;
                    func_0x000109eb844c(param_2,&UNK_10f609835);
                    pcVar23 = param_2[0xd];
                    goto LAB_109e799c0;
                  }
                  bVar11 = true;
                }
              }
              plVar32 = (long *)*plVar32;
            } while (*plVar32 != 0);
          }
          uVar51 = uVar51 + 1;
        } while (uVar51 != uVar21);
      }
      uVar21 = 1 << (ulong)((uint)lVar43 & 0x1f);
      bVar11 = uVar21 != uVar30;
      uVar30 = uVar21 ^ uVar30;
    } while (bVar11);
  }
LAB_109e799c0:
  if (*(int *)(pcVar23 + 0x114) != 0) {
    lVar46 = 0;
    do {
      if (ppcVar1[lVar46] != (code *)0x0) {
        pcVar58 = *(code **)(*(long *)(ppcVar1[lVar46] + 0x28) + 0x160);
        FUN_109e67a80(param_2,pcVar58);
        if (*(int *)(param_2[0xd] + 0x114) == 0) goto LAB_109e77d7c;
        lVar56 = *(long *)(*(long *)(ppcVar1[lVar46] + 0x28) + 0x160);
        func_0x000109f1e38c(lVar56,0x1fffff);
        FUN_109f1d600(lVar56);
        FUN_109eff568(lVar56);
        FUN_109efb7d0(lVar56);
        FUN_109ecdd2c(lVar56);
        lVar43 = 0;
        plVar25 = *(long **)(lVar56 + 0x178);
        plVar32 = (long *)**(long **)(lVar56 + 0x178);
        do {
          plVar33 = plVar25;
          if (*(char *)(plVar25 + 7) == '\0') {
            plVar33 = (long *)lVar43;
          }
          plVar37 = (long *)*plVar32;
          lVar43 = (long)plVar33;
          plVar25 = plVar32;
          plVar32 = plVar37;
        } while (plVar37 != (long *)0x0);
        lVar43 = *(long *)(*(long *)((long)plVar33 + 0x30) + 0x30);
        if (lVar43 != 0) {
          ppcVar52 = *(code ***)(*(long *)(*(long *)((long)plVar33 + 0x30) + 0x20) + 0x18);
          do {
            plVar32 = *(long **)(lVar43 + 0x20);
            plVar25 = (long *)*plVar32;
            if (plVar25 != (long *)0x0) {
              do {
                plVar33 = (long *)0x0;
                plVar37 = plVar32;
                if (*plVar25 != 0) {
                  plVar33 = plVar25;
                }
                do {
                  plVar32 = plVar33;
                  if (((int)plVar37[3] == 3) &&
                     (puVar15 = (undefined8 *)plVar37[0xb], *(int *)(puVar15 + 4) == 0x11)) {
                    lVar56 = *(long *)puVar15[3];
                    lVar24 = **(long **)(lVar56 + 0x98);
                    if (*(int *)(lVar24 + 0x2c) == 2) {
                      iVar29 = *(int *)(lVar24 + 0x28);
                      lVar31 = lVar24;
                      while (iVar29 != 0) {
                        lVar31 = **(long **)(lVar31 + 0x50);
                        iVar29 = *(int *)(lVar31 + 0x28);
                      }
                      if ((*(byte *)(*(long *)(lVar31 + 0x38) + 0x25) & 1) != 0) goto LAB_109e79b38;
                      pcVar58 = (code *)(puVar15 + 1);
                      *(undefined8 *)pcVar58 = 0;
                      ppcVar55 = (code **)(lVar24 + 0x80);
                      puVar15[3] = ppcVar55;
                      *(undefined4 *)(puVar15 + 4) = 0xb;
                      *puVar15 = plVar37;
                      ppcVar22 = (code **)(lVar24 + 0x88);
                      pcVar23 = *ppcVar22;
                      puVar15[2] = ppcVar22;
                      *(code **)pcVar58 = pcVar23;
                      *(code **)(pcVar23 + 8) = pcVar58;
                      *ppcVar22 = pcVar58;
                      uVar20 = 0xc;
                    }
                    else {
LAB_109e79b38:
                      cVar6 = *(code *)(*(long *)(lVar24 + 0x30) + 0xd);
                      param_4 = (code **)(ulong)*(uint *)(&UNK_10e061b98 +
                                                         (ulong)*(byte *)(*(long *)(lVar24 + 0x30) +
                                                                         4) * 4);
                      ppcVar22 = ppcVar52;
                      FUN_109ecb0a8(ppcVar52,0x112);
                      *(code *)(ppcVar22 + 10) = cVar6;
                      ppcVar55 = ppcVar22 + 6;
                      FUN_109ecb048();
                      ppcVar22[0x10] = (code *)0x0;
                      ppcVar22[0x11] = (code *)0x0;
                      ppcVar22[0x12] = (code *)0x0;
                      ppcVar22[0x13] = (code *)(lVar24 + 0x80);
                      *(undefined4 *)
                       ((long)ppcVar22 +
                       (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(ppcVar22 + 5) * 0x68] * 4 +
                       0x50) = 0;
                      param_3 = (code *)ppcVar22;
                      FUN_109ecb4f0(2,plVar37);
                      puVar15 = (undefined8 *)plVar37[0xb];
                      pcVar58 = (code *)(puVar15 + 1);
                      *(undefined8 *)pcVar58 = 0;
                      puVar15[3] = ppcVar55;
                      *(undefined4 *)(puVar15 + 4) = 0xf;
                      *puVar15 = plVar37;
                      ppcVar22 = ppcVar22 + 7;
                      pcVar23 = *ppcVar22;
                      puVar15[2] = ppcVar22;
                      *(code **)pcVar58 = pcVar23;
                      *(code **)(pcVar23 + 8) = pcVar58;
                      *ppcVar22 = pcVar58;
                      uVar20 = 0x10;
                    }
                    lVar24 = plVar37[0xb];
                    pcVar23 = (code *)(lVar24 + 0x30);
                    *(undefined8 *)pcVar23 = 0;
                    *(undefined4 *)(lVar24 + 0x48) = uVar20;
                    *(long **)(lVar24 + 0x28) = plVar37;
                    *(code ***)(lVar24 + 0x38) = ppcVar22;
                    *(code ***)(lVar24 + 0x40) = ppcVar55;
                    pcVar58 = *ppcVar22;
                    *(code **)pcVar23 = pcVar58;
                    *(code **)(pcVar58 + 8) = pcVar23;
                    *ppcVar22 = pcVar23;
                    FUN_109ecb9c0(lVar56);
                  }
                  if (plVar32 == (long *)0x0) goto LAB_109e79c38;
                  plVar25 = (long *)*plVar32;
                  plVar33 = (long *)0x0;
                  plVar37 = plVar32;
                } while (plVar25 == (long *)0x0);
              } while( true );
            }
LAB_109e79c38:
            FUN_109ecc434();
          } while (lVar43 != 0);
        }
        FUN_109f467b8(*(undefined8 *)(*(long *)(ppcVar1[lVar46] + 0x28) + 0x160));
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 != 6);
    FUN_109e7000c(param_1 + 0x1a070,param_2);
    FUN_109e70240(param_2);
    uVar51 = 0;
    uVar38 = 6;
    do {
      param_3 = param_2[uVar51 + 0x15];
      if ((code **)param_3 != (code **)0x0) {
        if (uVar38 == 6) {
          uVar38 = uVar51 & 0xffffffff;
        }
        else {
          pcVar58 = ppcVar1[uVar38];
          func_0x000109e69f54(param_2,pcVar58);
          if (*(int *)(param_2[0xd] + 0x114) == 0) goto LAB_109e77d7c;
          uVar38 = uVar51 & 0xffffffff;
        }
      }
      uVar51 = uVar51 + 1;
    } while (uVar51 != 5);
    pcVar58 = (code *)ppcVar1;
    FUN_109e6a504(param_2,ppcVar1);
    if (*(int *)(param_2[0xd] + 0x114) != 0) {
      if ((*(code *)((long)param_2 + 0xa5) == (code)0x1) && (*(int *)(param_2 + 0x1b) == 100)) {
        param_3 = param_2[0x15];
        param_4 = (code **)param_2[0x19];
        iVar29 = (int)param_1 + 0x1a070;
        pcVar58 = (code *)param_2;
        FUN_109e7a1dc();
        if (iVar29 == 0) goto LAB_109e77d7c;
      }
      FUN_109e7a3c0(param_1 + 0x1a070,param_2);
      param_2[0xc] = (code *)0x0;
      lVar46 = 0xc0;
      do {
        if (*(long *)((long)param_2 + lVar46) != 0) {
          param_2[0xc] = *(code **)(*(long *)((long)param_2 + lVar46) + 0x28);
          break;
        }
        lVar46 = lVar46 + -8;
      } while (lVar46 != 0xa0);
      lVar46 = 0;
      ppcVar55 = (code **)0x0;
      ppcVar52 = (code **)0x6;
      do {
        uVar21 = (uint)ppcVar52;
        uVar30 = (uint)lVar46;
        if (uVar21 != 6) {
          uVar30 = uVar21;
        }
        if (param_2[lVar46 + 0x15] != (code *)0x0) {
          uVar21 = uVar30;
        }
        ppcVar52 = (code **)(ulong)uVar21;
        uVar30 = (uint)ppcVar55;
        if (param_2[lVar46 + 0x15] != (code *)0x0) {
          uVar30 = (uint)lVar46;
        }
        ppcVar55 = (code **)(ulong)uVar30;
        lVar46 = lVar46 + 1;
      } while (lVar46 != 6);
      uVar30 = 300;
      if (*(code *)((long)param_2 + 0xa5) == (code)0x0) {
        uVar30 = 0x82;
      }
      if ((uVar30 <= *(uint *)(param_2 + 0x1b)) && (param_2[0x19] != (code *)0x0)) {
        FUN_109e7fdf0(*(undefined8 *)(*(long *)(param_2[0x19] + 0x28) + 0x160));
      }
      FUN_109e80a88(param_2);
      ppcVar22 = (code **)(ulong)(uVar21 + 1);
      ppcVar35 = ppcVar52;
      if (uVar21 + 1 < 5) {
        do {
          param_4 = (code **)param_2[(long)((long)ppcVar22 + 0x15)];
          if (param_4 != (code **)0x0) {
            param_3 = ppcVar1[(ulong)ppcVar35 & 0xffffffff];
            pcVar58 = (code *)param_2;
            func_0x000109e705a8(param_1 + 0x1a070,param_2);
            ppcVar35 = ppcVar22;
            if (*(int *)(param_2[0xd] + 0x114) == 0) goto LAB_109e77d7c;
          }
          ppcVar22 = (code **)((long)ppcVar22 + 1);
        } while ((int)ppcVar22 != 5);
      }
      func_0x000109e70280(param_1 + 0x1a070,param_2);
      param_3 = (code *)ppcVar52;
      param_4 = ppcVar55;
      if (*(code *)((long)param_2 + 0x17) != (code)0x0) {
        FUN_109e7a5d0(param_2);
        param_3 = (code *)ppcVar52;
        param_4 = ppcVar55;
      }
      alStack_868[2] = 0;
      alStack_868[1] = 0;
      alStack_868[4] = 0;
      alStack_868[3] = 0;
      alStack_868[0] = 0;
      pcStack_870 = (code *)0x0;
      lVar46 = 0xa8;
      uVar51 = 0;
      do {
        pcVar58 = *(code **)((long)param_2 + lVar46);
        uVar38 = uVar51;
        if (pcVar58 != (code *)0x0) {
          uVar38 = (ulong)((int)uVar51 + 1);
          (&pcStack_870)[uVar51] = pcVar58;
          if (((*(code *)((long)param_2 + 0xa5) != (code)0x1) || (lVar46 != 0xa8)) ||
             (*(uint *)(param_2 + 0x1b) < 300)) {
            bStack_871 = *(byte *)(*(long *)(*(long *)(pcVar58 + 0x28) + 0x160) + 0x152) >> 1 & 1;
            pcStack_7f0 = FUN_109e7a988;
            param_3 = (code *)&pcStack_7f0;
            pbStack_7e8 = &bStack_871;
            FUN_109f43ecc(*(long *)(*(long *)(pcVar58 + 0x28) + 0x160),0xc);
          }
        }
        lVar46 = lVar46 + 8;
        uVar51 = uVar38;
      } while (lVar46 != 0xd8);
      pcVar23 = param_1 + 0x1a070;
      pcVar58 = (code *)param_2;
      FUN_109e70ef8(pcVar23,param_2);
      if (((ulong)pcVar23 & 1) != 0) {
        pcVar23 = param_1 + 0x1a070;
        pcVar58 = param_1 + 0x1b578;
        param_4 = &pcStack_870;
        param_3 = (code *)param_2;
        func_0x000109e76cf0(pcVar23,pcVar58,param_2,param_4,uVar38);
        if ((int)pcVar23 != 0) {
          pcVar23 = param_1 + 0x1a070;
          pcVar58 = param_1 + 0x1b578;
          param_3 = (code *)(ulong)uVar4;
          param_4 = param_2;
          func_0x000109e7188c(pcVar23,pcVar58);
          if ((int)pcVar23 != 0) {
            if (((byte)*(code *)((long)param_2 + 0xa5) & 1) == 0) {
              if (*(uint *)(param_2 + 0x1b) < 0x82) goto LAB_109e79f98;
            }
            else if (*(uint *)(param_2 + 0x1b) < 300) {
LAB_109e79f98:
              pcVar23 = param_1 + 0x1a070;
              pcVar58 = (code *)param_2;
              FUN_109e7a6c8(pcVar23,param_2);
              if ((int)pcVar23 == 0) goto LAB_109e77d7c;
            }
            if (*(int *)(param_2[0xd] + 0x114) != 0) {
              if ((*(ushort *)(*(long *)(*(long *)(pcStack_870 + 0x28) + 0x160) + 0x152) >> 4 & 1)
                  == 0) {
                uVar30 = (int)uVar38 - 2;
                if ((int)uVar30 < 0) goto LAB_109e7a014;
                uVar51 = ~(ulong)uVar30;
                plVar25 = alStack_868 + uVar30;
                do {
                  FUN_109e778d0(*(undefined8 *)(*(long *)(plVar25[-1] + 0x28) + 0x160),
                                *(undefined8 *)(*(long *)(*plVar25 + 0x28) + 0x160));
                  bVar11 = uVar51 != 0xffffffffffffffff;
                  uVar51 = uVar51 + 1;
                  plVar25 = plVar25 + -1;
                } while (bVar11);
              }
              else {
LAB_109e7a014:
                if ((int)uVar38 == 1) {
                  FUN_109e760cc();
                }
              }
              lVar46 = 0;
              do {
                pcVar58 = ppcVar1[lVar46];
                if (pcVar58 != (code *)0x0) {
                  if (param_1[0x1a519] == (code)0x1) {
                    func_0x000109f0d384(*(undefined8 *)(*(long *)(pcVar58 + 0x28) + 0x160),
                                        *(undefined4 *)(param_1 + lVar46 * 0x80 + 0x1a134));
                  }
                  pbStack_7e8 = (byte *)0x0;
                  pcStack_7f0 = FUN_109e779c4;
                  param_3 = (code *)&pcStack_7f0;
                  FUN_109f43ecc(*(undefined8 *)(*(long *)(pcVar58 + 0x28) + 0x160),0x293);
                  if (*(char *)(*(long *)(pcVar58 + 0x28) + 0x31) == '\x04') {
                    lVar43 = *(long *)(*(long *)(pcVar58 + 0x28) + 0x160);
                    for (plVar25 = *(long **)(lVar43 + 8); *plVar25 != 0; plVar25 = (long *)*plVar25
                        ) {
                      uVar51 = plVar25[4];
                      if (((uVar51 & 0x1fffff) == 1) &&
                         ((*(uint *)((long)plVar25 + 0x3c) & 0xfffffffe) == 0x18)) {
                        *(uint *)(lVar43 + 0x158) = *(uint *)(lVar43 + 0x158) | 0x100;
                        uVar51 = plVar25[4];
                      }
                      if ((uVar51 & 0x9fffff) == 0x800004) {
                        *(uint *)(lVar43 + 0x158) = *(uint *)(lVar43 + 0x158) | 0x100;
                        uVar51 = plVar25[4];
                      }
                      if ((uVar51 & 0x80001fffff) == 0x8000000008) {
                        *(uint *)(lVar43 + 0x158) = *(uint *)(lVar43 + 0x158) | 0x100;
                      }
                    }
                  }
                }
                lVar46 = lVar46 + 1;
              } while (lVar46 != 6);
              pcVar23 = param_1 + 0x1a070;
              pcVar58 = (code *)param_2;
              FUN_109e6a894(pcVar23,param_2);
              if (((ulong)pcVar23 & 1) != 0) {
                pcVar23 = param_1 + 0x1a070;
                param_3 = (code *)0x1;
                pcVar58 = (code *)param_2;
                FUN_109e6cf88(pcVar23,param_2);
                if ((int)pcVar23 != 0) {
                  func_0x000109eb8acc(param_2);
                  func_0x000109eb88a4(param_1 + 0x1a070,param_2);
                  func_0x000109eb8810(param_2);
                  param_3 = (code *)param_2;
                  FUN_109e7a89c(param_1 + 0x1a070,param_1[0x1b5bb]);
                  FUN_109e67fe4(param_1 + 0x1a070,param_2);
                  pcVar58 = (code *)param_2;
                  FUN_109e68418(param_1 + 0x1a070,param_2);
                  lVar46 = 0;
                  do {
                    if (*(long *)((long)ppcVar1 + lVar46) != 0) {
                      FUN_109f467b8(*(undefined8 *)
                                     (*(long *)(*(long *)((long)ppcVar1 + lVar46) + 0x28) + 0x160));
                    }
                    lVar46 = lVar46 + 8;
                  } while (lVar46 != 0x30);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_109e77d7c;
joined_r0x000109e7a268:
  if (plVar37 == (long *)0x0) goto LAB_109e7a294;
  if ((((uint)plVar33[4] >> 3 & 1) != 0) && (*(int *)((long)plVar33 + 0x3c) == 0)) {
    if (((uint)plVar33[4] >> 0x19 & 1) == 0) goto LAB_109e7a328;
    goto LAB_109e7a294;
  }
  plVar33 = plVar37;
  plVar37 = (long *)*plVar37;
  goto joined_r0x000109e7a268;
joined_r0x000109e7a2f8:
  if (plVar37 == (long *)0x0) goto LAB_109e7a340;
  if ((((uint)plVar33[4] >> 3 & 1) != 0) && (*(int *)((long)plVar33 + 0x3c) == 0xc)) {
    if (((uint)plVar33[4] >> 0x19 & 1) == 0) goto LAB_109e7a328;
    goto LAB_109e7a340;
  }
  plVar33 = plVar37;
  plVar37 = (long *)*plVar37;
  goto joined_r0x000109e7a2f8;
LAB_109e7a328:
  puVar17 = &UNK_10f60fec4;
LAB_109e7a3ac:
  func_0x000109eb844c(param_2,puVar17);
  return 0;
LAB_109e79030:
  lVar46 = 0;
  do {
    pcVar58 = ppcVar1[lVar46];
    if ((code **)pcVar58 != (code **)0x0) {
      pcVar23 = *(code **)((long)pcVar58 + 0x28);
      lVar56 = *(long *)(pcVar23 + 0x160);
      lVar43 = 1;
      _calloc(1,0x38);
      if (lVar43 != 0) {
        *(undefined4 *)(lVar43 + 0x2c) = 0x7fffffff;
      }
      *(long *)(pcVar23 + 0x330) = lVar43;
      *(code ***)(pcVar23 + 0x5a0) = param_2;
      uVar10 = 0;
      if (*(code *)((long)param_2 + 0x17) != (code)0x0) {
        uVar10 = 2;
      }
      *(ushort *)(lVar56 + 0x152) = *(ushort *)(lVar56 + 0x152) & 0xfffd | uVar10;
      uVar30 = (uint)lVar46;
      if ((int)uVar30 < 3) {
        if (uVar30 == 0) {
          uVar21 = 300;
          if (*(code *)((long)param_2 + 0xa5) == (code)0x0) {
            uVar21 = 0x8c;
          }
          if (*(uint *)(param_2 + 0x1b) < uVar21) {
            plVar25 = *(long **)(lVar56 + 8);
            for (plVar32 = (long *)**(long **)(lVar56 + 8); plVar32 != (long *)0x0;
                plVar32 = (long *)*plVar32) {
              if (((*(byte *)(plVar25 + 4) >> 3 & 1) != 0) && (*(int *)((long)plVar25 + 0x3c) == 0))
              goto LAB_109e7917c;
              plVar25 = plVar32;
            }
            plVar25 = (long *)0x0;
LAB_109e7917c:
            pcStack_7f0 = (code *)((ulong)pcStack_7f0._1_7_ << 8);
            param_3 = (code *)0x0;
            param_4 = (code **)0x0;
            func_0x000109e7b670(*(undefined8 *)(lVar56 + 0x178),plVar25,0,0,&pcStack_7f0,0,0);
            if (((ulong)pcStack_7f0 & 1) == 0) {
              if (*(code *)((long)param_2 + 0xa5) != (code)0x1) {
                puVar17 = &UNK_10f60fd26;
                goto LAB_109e79264;
              }
              func_0x000109eb84b0(param_2,&UNK_10f60fcdd);
              goto LAB_109e79200;
            }
          }
          cVar6 = param_1[0x1a4bd];
LAB_109e791f8:
          param_4 = (code **)(lVar56 + 0x30);
          param_3 = (code *)(ulong)(byte)cVar6;
          func_0x000109e7b79c(param_2,lVar56);
        }
        else if (uVar30 == 2) goto LAB_109e791e8;
      }
      else {
        if (uVar30 == 3) {
          if (*(uint *)(lVar56 + 0x15c) < 0xe) {
            bVar34 = (&UNK_10e061b88)[*(uint *)(lVar56 + 0x15c)];
          }
          else {
            bVar34 = 3;
          }
          *(byte *)(lVar56 + 0x163) = *(byte *)(lVar56 + 0x163) & 0xf8 | bVar34;
LAB_109e791e8:
          cVar6 = param_1[0x1a4bd];
          goto LAB_109e791f8;
        }
        if (uVar30 == 4) {
          param_3 = *(code **)(lVar56 + 8);
          ppcVar55 = *(code ***)param_3;
          ppcVar52 = (code **)param_3;
          ppcVar22 = ppcVar55;
          if (ppcVar55 == (code **)0x0) {
            ppcVar52 = (code **)0x0;
          }
          else {
            do {
              if ((((byte)*(code *)(ppcVar52 + 4) >> 3 & 1) != 0) &&
                 (*(int *)((long)ppcVar52 + 0x3c) == 2)) goto LAB_109e79108;
              ppcVar35 = (code **)*ppcVar22;
              ppcVar52 = ppcVar22;
              ppcVar22 = ppcVar35;
            } while (ppcVar35 != (code **)0x0);
            ppcVar52 = (code **)0x0;
LAB_109e79108:
            do {
              if ((((byte)*(code *)((long)param_3 + 0x20) >> 3 & 1) != 0) &&
                 (*(int *)((long)param_3 + 0x3c) == 4)) goto LAB_109e79228;
              ppcVar22 = (code **)*ppcVar55;
              param_3 = (code *)ppcVar55;
              ppcVar55 = ppcVar22;
            } while (ppcVar22 != (code **)0x0);
          }
          param_3 = (code *)0x0;
LAB_109e79228:
          pcStack_7f0 = (code *)((ulong)pcStack_7f0._1_7_ << 8);
          bStack_871 = 0;
          param_4 = (code **)0x0;
          func_0x000109e7b670(*(undefined8 *)(lVar56 + 0x178),ppcVar52,param_3,0,&pcStack_7f0,
                              &bStack_871,0);
          if (((char)pcStack_7f0 == '\x01') && (puVar17 = &UNK_10f60fdd7, (bStack_871 & 1) != 0)) {
LAB_109e79264:
            func_0x000109eb844c(param_2,puVar17);
          }
        }
      }
LAB_109e79200:
      if (*(int *)(param_2[0xd] + 0x114) == 0) {
        func_0x000109ec5c3c(param_1,pcVar58);
        ppcVar1[lVar46] = (code *)0x0;
        *(uint *)(param_2[0xd] + 0x120) =
             *(uint *)(param_2[0xd] + 0x120) ^ 1 << (ulong)(uVar30 & 0x1f);
        goto LAB_109e77d7c;
      }
    }
    lVar46 = lVar46 + 1;
  } while (lVar46 != 6);
  puVar15 = (undefined8 *)0x30;
  _malloc();
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar15[4] = 0;
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15 = puVar15 + 6;
  }
  pcVar58 = FUN_109f65518;
  param_3 = FUN_109f65668;
  puVar16 = puVar15;
  FUN_109f64c74(puVar15,FUN_109f65518);
  lVar46 = 0xa8;
  do {
    if (*(long *)((long)param_2 + lVar46) != 0) {
      param_4 = *(code ***)(*(long *)(*(long *)((long)param_2 + lVar46) + 0x28) + 0x160);
      pcVar58 = param_1 + 0x1a070;
      param_3 = (code *)param_2;
      func_0x000109e7af18(puVar15,pcVar58,param_2,param_4,puVar16,1);
    }
    lVar46 = lVar46 + 8;
  } while (lVar46 != 0xd8);
  if (puVar15 != (undefined8 *)0x0) {
    FUN_109f65aa4(puVar15 + -6);
    FUN_109f65ae0(puVar15 + -6);
  }
  if (*(int *)(param_2[0xd] + 0x114) != 0) {
    cVar6 = param_1[0x1b59f];
    *(undefined4 *)(param_2 + 0x14) = 0;
    if (cVar6 != (code)0x0) {
      plVar25 = (long *)0x8;
      __Znwm();
      pcVar58 = FUN_109f65518;
      param_3 = FUN_109f65668;
      lVar46 = 0;
      FUN_109f64c74(0,FUN_109f65518);
      *plVar25 = lVar46;
      uVar30 = *(uint *)(param_2[0xd] + 0x120);
      if (uVar30 == 0) {
        iVar29 = 0;
      }
      else {
        iVar29 = 0;
        do {
          uVar21 = (uVar30 & 0xaaaaaaaa) >> 1 | (uVar30 & 0x55555555) << 1;
          uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
          lVar43 = LZCOUNT(uVar21 >> 0x10 | uVar21 << 0x10);
          lVar56 = *(long *)(ppcVar1[lVar43] + 0x28);
          plVar32 = *(long **)(*(long *)(lVar56 + 0x160) + 8);
          lVar46 = *plVar32;
          while (lVar46 != 0) {
            if ((plVar32[4] & 0x92U) != 0 && (plVar32[4] & 0x40000000000U) != 0) {
              uVar51 = plVar32[2];
              cVar8 = *(char *)(uVar51 + 4);
              uVar38 = uVar51;
              while (cVar8 == '\x13') {
                uVar38 = *(ulong *)(uVar38 + 0x30);
                cVar8 = *(char *)(uVar38 + 4);
              }
              FUN_109ec88d8();
              iVar12 = (int)uVar51;
              uVar21 = *(int *)((long)plVar32 + 0x3c) + iVar12;
              ppcVar52 = (code **)(ulong)uVar21;
              if (cVar8 == '\x15') {
                if (*(uint *)(lVar56 + 0x5d0) < uVar21) {
                  pcVar58 = *(code **)(lVar56 + 0x5d8);
                  param_3 = (code *)0x8;
                  lVar46 = lVar56;
                  param_4 = ppcVar52;
                  FUN_109f65a40(lVar56,pcVar58);
                  *(long *)(lVar56 + 0x5d8) = lVar46;
                  if (lVar46 == 0) {
                    pcVar58 = (code *)&UNK_10f60de2c;
                    goto LAB_109e7965c;
                  }
                  ppcVar55 = (code **)(ulong)*(uint *)(lVar56 + 0x5d0);
                  if (*(uint *)(lVar56 + 0x5d0) < uVar21) {
                    do {
                      *(undefined8 *)(*(long *)(lVar56 + 0x5d8) + (long)ppcVar55 * 8) = 0;
                      ppcVar55 = (code **)((long)ppcVar55 + 1);
                    } while (ppcVar52 != ppcVar55);
                  }
                  *(uint *)(lVar56 + 0x5d0) = uVar21;
                }
                if (iVar12 != 0) {
                  uVar21 = *(uint *)((long)plVar32 + 0x3c);
                  uVar51 = uVar51 & 0xffffffff;
                  do {
                    if (*(long *)(*(long *)(lVar56 + 0x5d8) + (ulong)uVar21 * 8) == -1)
                    goto LAB_109e79648;
                    *(undefined8 *)(*(long *)(lVar56 + 0x5d8) + (ulong)uVar21 * 8) =
                         0xffffffffffffffff;
                    uVar21 = uVar21 + 1;
                    uVar51 = uVar51 - 1;
                  } while (uVar51 != 0);
                }
                goto LAB_109e79620;
              }
              if (*(uint *)(param_2 + 0xe) < uVar21) {
                param_3 = (code *)0x8;
                ppcVar55 = param_2;
                param_4 = ppcVar52;
                FUN_109f65a40(param_2,param_2[0xf]);
                param_2[0xf] = (code *)ppcVar55;
                if (ppcVar55 != (code **)0x0) {
                  ppcVar55 = (code **)(ulong)*(uint *)(param_2 + 0xe);
                  if (*(uint *)(param_2 + 0xe) < uVar21) {
                    do {
                      *(undefined8 *)(param_2[0xf] + (long)ppcVar55 * 8) = 0;
                      ppcVar55 = (code **)((long)ppcVar55 + 1);
                    } while (ppcVar52 != ppcVar55);
                  }
                  *(uint *)(param_2 + 0xe) = uVar21;
                  goto LAB_109e79570;
                }
                pcVar58 = (code *)&UNK_10f60de2c;
                goto LAB_109e7965c;
              }
LAB_109e79570:
              if (iVar12 == 0) {
                iVar45 = 0;
              }
              else {
                iVar57 = 0;
                do {
                  iVar45 = *(int *)((long)plVar32 + 0x3c);
                  uVar38 = (ulong)(uint)(iVar57 + iVar45);
                  if (*(long *)(param_2[0xf] + uVar38 * 8) == -1) {
                    param_3 = (code *)plVar32[3];
                    lVar46 = *plVar25;
                    ppcVar52 = (code **)param_3;
                    (**(code **)(lVar46 + 8))(param_3);
                    FUN_109f64fdc(lVar46,ppcVar52);
                    if ((lVar46 == 0) || (*(int *)(lVar46 + 0x10) + -1 != iVar45))
                    goto LAB_109e79648;
                    uVar51 = 0;
                  }
                  else {
                    *(undefined8 *)(param_2[0xf] + uVar38 * 8) = 0xffffffffffffffff;
                  }
                  iVar45 = (int)uVar51;
                  iVar57 = iVar57 + 1;
                } while (iVar12 != iVar57);
              }
              pcVar58 = (code *)(ulong)*(uint *)((long)plVar32 + 0x3c);
              param_3 = (code *)plVar32[3];
              func_0x000109ec6420(plVar25,pcVar58);
              if (iVar45 != -1) {
                iVar29 = iVar45 + iVar29;
                goto LAB_109e79620;
              }
              goto LAB_109e79660;
            }
LAB_109e79620:
            plVar32 = (long *)*plVar32;
            lVar46 = *plVar32;
          }
          uVar21 = 1 << (ulong)((uint)lVar43 & 0x1f);
          bVar11 = uVar21 != uVar30;
          uVar30 = uVar21 ^ uVar30;
        } while (bVar11);
      }
      FUN_109eb8750(param_2);
      func_0x000109ec6344(plVar25);
      __ZdlPv();
      *(int *)(param_2 + 0x14) = iVar29;
    }
    goto LAB_109e796a8;
  }
LAB_109e77d7c:
  lVar46 = 0;
  do {
    _free(*(undefined8 *)((long)auStack_820 + lVar46));
    lVar46 = lVar46 + 8;
  } while (lVar46 != 0x30);
  if (puStack_8a0 != (undefined8 *)0x0) {
    FUN_109f65aa4(puStack_8a0 + -6);
    FUN_109f65ae0(puStack_8a0 + -6);
  }
  uVar51 = (ulong)(*(int *)(param_2[0xd] + 0x114) != 0);
  param_2 = (code **)pcVar58;
LAB_109e77dc8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar51;
  }
  ___stack_chk_fail();
  if (((code **)param_3 != (code **)0x0) && (param_4 != (code **)0x0)) {
    bVar11 = *(char *)(uVar51 + 0x4a6) == '\0';
    iVar29 = 0x13;
    if (bVar11) {
      iVar29 = 0;
    }
    uVar30 = 4;
    if (!bVar11) {
      uVar30 = 1;
    }
    plVar25 = *(long **)(*(long *)(param_4[5] + 0x160) + 8);
    plVar32 = (long *)*plVar25;
    plVar33 = plVar25;
    plVar37 = plVar32;
    if (plVar32 != (long *)0x0) {
      do {
        if (((uVar30 & (uint)plVar33[4]) != 0) && (*(int *)((long)plVar33 + 0x3c) == iVar29)) {
          if (((uint)plVar33[4] >> 0x19 & 1) != 0) {
            plVar33 = *(long **)(*(long *)(*(code **)((long)param_3 + 0x28) + 0x160) + 8);
            plVar37 = (long *)**(long **)(*(long *)(*(code **)((long)param_3 + 0x28) + 0x160) + 8);
            goto joined_r0x000109e7a268;
          }
          break;
        }
        plVar42 = (long *)*plVar37;
        plVar33 = plVar37;
        plVar37 = plVar42;
      } while (plVar42 != (long *)0x0);
LAB_109e7a294:
      bVar11 = *(char *)(uVar51 + 0x4a7) == '\0';
      iVar29 = 0x15;
      if (bVar11) {
        iVar29 = 0x19;
      }
      uVar30 = 4;
      plVar33 = plVar25;
      plVar37 = plVar32;
      if (!bVar11) {
        uVar30 = 1;
      }
      do {
        if (((uVar30 & (uint)plVar33[4]) != 0) && (*(int *)((long)plVar33 + 0x3c) == iVar29)) {
          if (((uint)plVar33[4] >> 0x19 & 1) != 0) {
            plVar33 = *(long **)(*(long *)(*(code **)((long)param_3 + 0x28) + 0x160) + 8);
            plVar37 = (long *)**(long **)(*(long *)(*(code **)((long)param_3 + 0x28) + 0x160) + 8);
            goto joined_r0x000109e7a2f8;
          }
          break;
        }
        plVar42 = (long *)*plVar37;
        plVar33 = plVar37;
        plVar37 = plVar42;
      } while (plVar42 != (long *)0x0);
LAB_109e7a340:
      bVar11 = *(char *)(uVar51 + 0x4a8) == '\0';
      iVar29 = 0x17;
      if (bVar11) {
        iVar29 = 0x18;
      }
      uVar30 = 4;
      if (!bVar11) {
        uVar30 = 1;
      }
      do {
        if (((uVar30 & (uint)plVar25[4]) != 0) && (*(int *)((long)plVar25 + 0x3c) == iVar29)) {
          if (((uint)plVar25[4] >> 0x19 & 1) == 0) {
            return 1;
          }
          puVar17 = &UNK_10f60ff36;
          goto LAB_109e7a3ac;
        }
        plVar33 = (long *)*plVar32;
        plVar25 = plVar32;
        plVar32 = plVar33;
      } while (plVar33 != (long *)0x0);
    }
  }
  return 1;
}



/* Entry: 109e7a1dc; end: 109e7a3bf;  */

undefined8 FUN_109e7a1dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    bVar1 = *(char *)(param_1 + 0x4a6) == '\0';
    iVar4 = 0x13;
    if (bVar1) {
      iVar4 = 0;
    }
    uVar5 = 4;
    if (!bVar1) {
      uVar5 = 1;
    }
    plVar2 = *(long **)(*(long *)(*(long *)(param_4 + 0x28) + 0x160) + 8);
    plVar6 = (long *)*plVar2;
    plVar7 = plVar2;
    plVar9 = plVar6;
    if (plVar6 != (long *)0x0) {
      do {
        if (((uVar5 & (uint)plVar7[4]) != 0) && (*(int *)((long)plVar7 + 0x3c) == iVar4)) {
          if (((uint)plVar7[4] >> 0x19 & 1) != 0) {
            plVar7 = *(long **)(*(long *)(*(long *)(param_3 + 0x28) + 0x160) + 8);
            plVar9 = (long *)*plVar7;
            goto joined_r0x000109e7a268;
          }
          break;
        }
        plVar8 = (long *)*plVar9;
        plVar7 = plVar9;
        plVar9 = plVar8;
      } while (plVar8 != (long *)0x0);
LAB_109e7a294:
      bVar1 = *(char *)(param_1 + 0x4a7) == '\0';
      iVar4 = 0x15;
      if (bVar1) {
        iVar4 = 0x19;
      }
      uVar5 = 4;
      plVar7 = plVar2;
      plVar9 = plVar6;
      if (!bVar1) {
        uVar5 = 1;
      }
      do {
        if (((uVar5 & (uint)plVar7[4]) != 0) && (*(int *)((long)plVar7 + 0x3c) == iVar4)) {
          if (((uint)plVar7[4] >> 0x19 & 1) != 0) {
            plVar7 = *(long **)(*(long *)(*(long *)(param_3 + 0x28) + 0x160) + 8);
            plVar9 = (long *)*plVar7;
            goto joined_r0x000109e7a2f8;
          }
          break;
        }
        plVar8 = (long *)*plVar9;
        plVar7 = plVar9;
        plVar9 = plVar8;
      } while (plVar8 != (long *)0x0);
LAB_109e7a340:
      bVar1 = *(char *)(param_1 + 0x4a8) == '\0';
      iVar4 = 0x17;
      if (bVar1) {
        iVar4 = 0x18;
      }
      uVar5 = 4;
      if (!bVar1) {
        uVar5 = 1;
      }
      do {
        if (((uVar5 & (uint)plVar2[4]) != 0) && (*(int *)((long)plVar2 + 0x3c) == iVar4)) {
          if (((uint)plVar2[4] >> 0x19 & 1) == 0) {
            return 1;
          }
          puVar3 = &UNK_10f60ff36;
          goto LAB_109e7a3ac;
        }
        plVar7 = (long *)*plVar6;
        plVar2 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return 1;
joined_r0x000109e7a268:
  if (plVar9 == (long *)0x0) goto LAB_109e7a294;
  if ((((uint)plVar7[4] >> 3 & 1) != 0) && (*(int *)((long)plVar7 + 0x3c) == 0)) {
    if (((uint)plVar7[4] >> 0x19 & 1) == 0) goto LAB_109e7a328;
    goto LAB_109e7a294;
  }
  plVar7 = plVar9;
  plVar9 = (long *)*plVar9;
  goto joined_r0x000109e7a268;
joined_r0x000109e7a2f8:
  if (plVar9 == (long *)0x0) goto LAB_109e7a340;
  if ((((uint)plVar7[4] >> 3 & 1) != 0) && (*(int *)((long)plVar7 + 0x3c) == 0xc)) {
    if (((uint)plVar7[4] >> 0x19 & 1) == 0) goto LAB_109e7a328;
    goto LAB_109e7a340;
  }
  plVar7 = plVar9;
  plVar9 = (long *)*plVar9;
  goto joined_r0x000109e7a2f8;
LAB_109e7a328:
  puVar3 = &UNK_10f60fec4;
LAB_109e7a3ac:
  func_0x000109eb844c(param_2,puVar3);
  return 0;
}



/* Entry: 109e7a3c0; end: 109e7a5cf;  */

/* WARNING: Possible PIC construction at 0x000109e7a530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e7a534) */

void FUN_109e7a3c0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  uint uVar16;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  undefined8 unaff_x30;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  ppuVar4 = &puStack_80;
  puVar17 = &stack0xfffffffffffffff0;
  lVar13 = *(long *)(param_2 + 0xc0);
  if (lVar13 != 0) {
    lVar14 = *(long *)(*(long *)(lVar13 + 0x28) + 0x160);
    lVar12 = 0;
    plVar7 = *(long **)(lVar14 + 0x178);
    plVar8 = (long *)**(long **)(lVar14 + 0x178);
    do {
      plVar9 = plVar7;
      if (*(char *)(plVar7 + 7) == '\0') {
        plVar9 = (long *)lVar12;
      }
      plVar10 = (long *)*plVar8;
      lVar12 = (long)plVar9;
      plVar7 = plVar8;
      plVar8 = plVar10;
    } while (plVar10 != (long *)0x0);
    lVar12 = *(long *)(*(long *)((long)plVar9 + 0x30) + 0x30);
    if (lVar12 == 0) {
      uVar16 = 0;
      bVar15 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x484) - 1;
      lVar5 = lVar12;
      lStack_68 = param_2;
      FUN_109ecc434();
      bVar15 = 0;
      uVar16 = 0;
      do {
        lVar11 = lVar5;
        plVar7 = *(long **)(lVar12 + 0x20);
        plVar8 = (long *)*plVar7;
        if (plVar8 != (long *)0x0) {
          do {
            plVar9 = plVar7;
            plVar10 = (long *)0x0;
            if (*plVar8 != 0) {
              plVar10 = plVar8;
            }
            do {
              plVar7 = plVar10;
              if (((int)plVar9[3] == 4) &&
                 ((uVar1 = *(uint *)(plVar9 + 5), uVar1 == 0x72 || (uVar1 == 0x6e)))) {
                uVar2 = *(uint *)((long)plVar9 +
                                 (ulong)(byte)(&UNK_110b671ab)[(ulong)uVar1 * 0x68] * 4 + 0x50);
                bVar15 = bVar15 | uVar1 == 0x72;
                param_2 = lStack_68;
                if (-1 < (int)uVar2) {
                  if ((int)uVar2 <= (int)uVar3) {
                    uVar16 = 1 << (ulong)(uVar2 & 0x1f) | uVar16;
                    goto LAB_109e7a4c4;
                  }
                  if (uVar2 == 0) goto LAB_109e7a544;
                }
                puStack_80 = &UNK_10f60b13d;
                if (uVar1 != 0x6e) {
                  puStack_80 = &UNK_10f60b14e;
                }
                puVar6 = &UNK_10f60ff76;
                unaff_x30 = 0x109e7a534;
                unaff_x19 = lStack_68;
                uStack_78 = (ulong)uVar2;
                uStack_70 = (ulong)uVar3;
                goto SUB_109eb844c;
              }
LAB_109e7a4c4:
              if (plVar7 == (long *)0x0) goto LAB_109e7a4dc;
              plVar8 = (long *)*plVar7;
              plVar9 = plVar7;
              plVar10 = (long *)0x0;
            } while (plVar8 == (long *)0x0);
          } while( true );
        }
LAB_109e7a4dc:
        lVar5 = lVar11;
        FUN_109ecc434();
        param_2 = lStack_68;
        lVar12 = lVar11;
      } while (lVar11 != 0);
    }
LAB_109e7a544:
    *(byte *)(lVar14 + 0x163) = *(byte *)(lVar14 + 0x163) & 0xf | (byte)(uVar16 << 4);
    lVar12 = *(long *)(*(long *)(lVar13 + 0x28) + 0x160);
    *(byte *)(lVar12 + 0x163) = (*(byte *)(lVar12 + 0x163) & 0xf7) + bVar15 * '\b';
    lVar13 = *(long *)(*(long *)(lVar13 + 0x28) + 0x160);
    if ((0x1f < *(byte *)(lVar13 + 0x163)) && (*(int *)(lVar13 + 0x158) != 0)) {
      puVar6 = &UNK_10f60ffcf;
      ppuVar4 = (undefined **)register0x00000008;
      lVar11 = unaff_x20;
      puVar17 = unaff_x29;
SUB_109eb844c:
      *(long *)((long)ppuVar4 + -0x20) = lVar11;
      *(long *)((long)ppuVar4 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar4 + -0x10) = puVar17;
      *(undefined8 *)((long)ppuVar4 + -8) = unaff_x30;
      FUN_109f65cf8(*(long *)(param_2 + 0x68) + 0x118,&UNK_10f615370,7);
      *(undefined ***)((long)ppuVar4 + -0x28) = ppuVar4;
      FUN_109f65e44(*(long *)(param_2 + 0x68) + 0x118,puVar6,ppuVar4);
      *(undefined4 *)(*(long *)(param_2 + 0x68) + 0x114) = 0;
      return;
    }
  }
  return;
}



/* Entry: 109e7a5d0; end: 109e7a6c7;  */

void FUN_109e7a5d0(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  lVar6 = 0;
  uVar3 = 0;
  param_1 = param_1 + 0xa8;
  uVar5 = 6;
  do {
    uVar4 = (uint)uVar5;
    uVar1 = (uint)lVar6;
    if (uVar4 != 6) {
      uVar1 = uVar4;
    }
    bVar2 = *(long *)(param_1 + lVar6 * 8) != 0;
    if (bVar2) {
      uVar4 = uVar1;
    }
    uVar5 = (ulong)uVar4;
    uVar1 = (uint)uVar3;
    if (bVar2) {
      uVar1 = (uint)lVar6;
    }
    uVar3 = (ulong)uVar1;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 5);
  if (uVar4 != 6) {
    uVar7 = 0;
    do {
      lVar6 = *(long *)(param_1 + uVar7 * 8);
      if (lVar6 != 0) {
        if ((uVar7 == uVar5) && (uVar7 != 0)) {
          plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x160) + 8);
          while (plVar8 = plVar9, plVar9 = (long *)*plVar8, plVar9 != (long *)0x0) {
            if ((((uint)plVar8[4] >> 2 & 1) != 0) &&
               ((*(ulong *)((long)plVar8 + 0x2c) & 0x6000) != 0x2000)) {
              plVar8[4] = plVar8[4] | 0x100000000;
            }
          }
        }
        if ((uVar7 == uVar3) && (uVar7 != 4)) {
          plVar9 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + uVar7 * 8) + 0x28) + 0x160) +
                             8);
          while (plVar8 = plVar9, plVar9 = (long *)*plVar8, plVar9 != (long *)0x0) {
            if ((((uint)plVar8[4] >> 3 & 1) != 0) &&
               ((*(ulong *)((long)plVar8 + 0x2c) & 0x6000) != 0x2000)) {
              plVar8[4] = plVar8[4] | 0x100000000;
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 6);
  }
  return;
}



/* Entry: 109e7a6c8; end: 109e7a89b;  */

bool FUN_109e7a6c8(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  
  bVar9 = false;
  uVar10 = 0;
  do {
    lVar2 = *(long *)(param_2 + 0xa8 + uVar10 * 8);
    if (lVar2 != 0) {
      plVar8 = *(long **)(*(long *)(*(long *)(lVar2 + 0x28) + 0x160) + 0x178);
      plVar3 = (long *)*plVar8;
      if (plVar3 != (long *)0x0) {
        cVar1 = *(char *)(*(long *)(param_1 + 0x758 + uVar10 * 0x28) + 0xa2);
        do {
          plVar4 = plVar3;
          lVar2 = plVar8[6];
          if (lVar2 != 0) {
            do {
              lVar2 = *(long *)(lVar2 + 0x30);
              while (plVar3 = plVar4, lVar2 != 0) {
                plVar3 = *(long **)(lVar2 + 0x20);
LAB_109e7a75c:
                plVar8 = plVar3;
                plVar3 = (long *)*plVar8;
                if (plVar3 != (long *)0x0) {
                  if (((int)plVar8[3] == 3) && (*(uint *)(plVar8 + 0xc) != 0)) {
                    uVar6 = 0;
                    piVar7 = (int *)(plVar8[0xb] + 0x20);
                    do {
                      if (*piVar7 == 0xc) {
                        if ((-1 < (int)uVar6) &&
                           (lVar5 = **(long **)(plVar8[0xb] + (uVar6 & 0x7fffffff) * 0x28 + 0x18),
                           lVar5 != 0)) goto LAB_109e7a7c0;
                        break;
                      }
                      uVar6 = uVar6 + 1;
                      piVar7 = piVar7 + 10;
                    } while (*(uint *)(plVar8 + 0xc) != uVar6);
                  }
                  goto LAB_109e7a75c;
                }
                FUN_109ecc434();
              }
              do {
                plVar4 = (long *)*plVar3;
                if (plVar4 == (long *)0x0) goto LAB_109e7a848;
                lVar2 = plVar3[6];
                plVar3 = plVar4;
              } while (lVar2 == 0);
            } while( true );
          }
          plVar3 = (long *)*plVar4;
          plVar8 = plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
LAB_109e7a848:
    uVar6 = uVar10 + 1;
    bVar9 = 4 < uVar10;
    uVar10 = uVar6;
    if (uVar6 == 6) {
      return true;
    }
  } while( true );
LAB_109e7a7c0:
  do {
    if (*(int *)(lVar5 + 0x28) == 1) {
      if (*(int *)(**(long **)(lVar5 + 0x70) + 0x18) != 5) {
        if (cVar1 != '\0') {
          func_0x000109eb844c(param_2,&UNK_10f61001d);
          return bVar9;
        }
        func_0x000109eb84b0(param_2,&UNK_10f61001d);
        goto LAB_109e7a848;
      }
    }
    else if (*(int *)(lVar5 + 0x28) == 0) break;
    lVar5 = **(long **)(lVar5 + 0x50);
  } while (*(int *)(lVar5 + 0x18) == 1);
  goto LAB_109e7a75c;
}



/* Entry: 109e7a89c; end: 109e7a987;  */

/* WARNING: Possible PIC construction at 0x000109e7a908: Changing call to branch */

void FUN_109e7a89c(long param_1,char param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  int iVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_2 == '\0') {
    return;
  }
  uVar8 = 0;
  iVar9 = 0;
  lVar4 = 0xa8;
  do {
    if (*(long *)(param_3 + lVar4) != 0) {
      lVar6 = *(long *)(*(long *)(param_3 + lVar4) + 0x28);
      uVar8 = uVar8 + *(byte *)(lVar6 + 0x37);
      iVar9 = iVar9 + (uint)*(byte *)(lVar6 + 0x36);
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0xd8);
  if (*(uint *)(param_1 + 0x6f4) < uVar8) {
    puVar2 = &UNK_10f61006d;
    unaff_x30 = 0x109e7a90c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    iVar3 = 0;
    if (*(long *)(param_3 + 200) != 0) {
      uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 200) + 0x28) + 0x48);
      uVar7 = uVar5 & 0xffffffff;
      iVar3 = (uint)(byte)(POPCOUNT((char)(uVar5 >> 0x20)) + POPCOUNT((char)(uVar5 >> 0x28)) +
                           POPCOUNT((char)(uVar5 >> 0x30)) + POPCOUNT((char)(uVar5 >> 0x38))) +
              (uint)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                           POPCOUNT((char)(uVar7 >> 0x10)) + POPCOUNT((char)(uVar7 >> 0x18)));
    }
    if (uVar8 + iVar9 + iVar3 <= *(uint *)(param_1 + 0x6ec)) {
      return;
    }
    puVar2 = &UNK_10f61008f;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  FUN_109f65cf8(*(long *)(param_3 + 0x68) + 0x118,&UNK_10f615370,7);
  *(BADSPACEBASE **)((long)register0x00000008 + -0x28) = register0x00000008;
  FUN_109f65e44(*(long *)(param_3 + 0x68) + 0x118,puVar2,register0x00000008);
  *(undefined4 *)(*(long *)(param_3 + 0x68) + 0x114) = 0;
  return;
}



/* Entry: 109e7a988; end: 109e7a9eb;  */

bool FUN_109e7a988(long param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    return *(uint *)(param_1 + 0x3c) < 0x20;
  }
  return true;
}



/* Entry: 109e7a9ec; end: 109e7b5e7;  */

void FUN_109e7a9ec(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uStack_110;
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
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar7,0xa0,8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
  }
  *(undefined4 *)(puVar7 + 3) = 1;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 5) = 0;
  *(uint *)((long)puVar7 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
  puVar7[6] = *(undefined8 *)(param_2 + 0x10);
  puVar7[7] = param_2;
  if (*(char *)(param_1[3] + 0x61) == '\x0e') {
    uVar15 = *(undefined4 *)(param_1[3] + 0x160);
  }
  else {
    uVar15 = 0x20;
  }
  FUN_109ecb048(puVar7,puVar7 + 0x10,1,uVar15);
  FUN_109ecb4f0(*param_1,param_1[1],puVar7);
  *param_1 = 3;
  param_1[1] = (long)puVar7;
  puVar8 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar8,0x68,8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0xc] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
  }
  *(undefined4 *)(puVar8 + 3) = 5;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar1 = puVar8 + 5;
  uVar16 = 0x20;
  FUN_109ecb048(puVar8,puVar1,4);
  puVar9 = (ulong *)*param_1;
  lVar11 = param_1[1];
  puVar10 = puVar8;
  FUN_109ecb4f0();
  uVar23 = 0;
  *param_1 = 3;
  param_1[1] = (long)puVar8;
  while( true ) {
    iVar17 = (int)param_6;
    if (*(char *)(*(long *)(param_2 + 0x10) + 4) == '\x13') {
      lVar21 = (long)*(int *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    else {
      lVar21 = -1;
    }
    if (lVar21 <= (long)uVar23) break;
    bVar3 = *(byte *)((long)puVar7 + 0x9d);
    uVar18 = (bVar3 & 0xaaaaaaaa) >> 1 | (bVar3 & 0x55555555) << 1;
    uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
    uVar18 = (uint)LZCOUNT((uVar18 >> 4 | (uVar18 & 0xf0f0f0f) << 4) << 0x18);
    uVar16 = uVar23;
    uVar27 = uVar23;
    if (uVar18 < 5) {
      if (uVar18 == 0) {
        uVar25 = 0;
        uVar16 = 0;
        uVar27 = (ulong)(uVar23 != 0);
      }
      else if (uVar18 == 3) {
        uVar25 = 0;
        uVar16 = 0;
      }
      else {
        uVar25 = 0;
      }
    }
    else {
      uVar25 = uVar23 & 0x7fff0000;
    }
    puVar10 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar10,0x50,8);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    *(undefined4 *)(puVar10 + 3) = 5;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    FUN_109ecb048(puVar10,puVar10 + 5,1,bVar3);
    puVar10[9] = uVar16 & 0xff00 | uVar25 | uVar27 & 0xff;
    FUN_109ecb4f0(*param_1,param_1[1],puVar10);
    *param_1 = 3;
    param_1[1] = (long)puVar10;
    lVar11 = param_1[3];
    func_0x000109ecaf70(lVar11,1);
    *(undefined4 *)(lVar11 + 0x2c) = *(undefined4 *)((long)puVar7 + 0x2c);
    uVar12 = puVar7[6];
    func_0x000109eca118();
    *(undefined8 *)(lVar11 + 0x30) = uVar12;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined8 *)(lVar11 + 0x40) = 0;
    *(undefined8 *)(lVar11 + 0x48) = 0;
    *(undefined8 **)(lVar11 + 0x50) = puVar7 + 0x10;
    *(undefined8 *)(lVar11 + 0x58) = 0;
    *(undefined8 *)(lVar11 + 0x60) = 0;
    *(undefined8 *)(lVar11 + 0x68) = 0;
    *(undefined8 **)(lVar11 + 0x70) = puVar10 + 5;
    uVar16 = (ulong)*(byte *)((long)puVar7 + 0x9d);
    FUN_109ecb048(lVar11,lVar11 + 0x80,*(undefined1 *)((long)puVar7 + 0x9c));
    FUN_109ecb4f0(*param_1,param_1[1],lVar11);
    uVar18 = 0;
    uVar27 = 0;
    *param_1 = 3;
    param_1[1] = lVar11;
    uVar19 = (uint)*(byte *)(*(long *)(lVar11 + 0x30) + 0xd);
    uVar24 = 0xffffffff;
    if (uVar19 != 0x20) {
      uVar24 = ~(-1 << (ulong)(uVar19 & 0x1f));
    }
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    do {
      if (((uVar24 & 0xffff) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
        *(uint *)((long)&uStack_110 + uVar27 * 4) = uVar18;
        uVar27 = (ulong)((int)uVar27 + 1);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x10);
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    puStack_88 = puVar1;
    uVar18 = (uint)uVar27;
    if (uVar18 == 0) {
      bVar6 = true;
    }
    else {
      uVar25 = 0;
      uVar19 = uVar18;
      if (0xf < uVar18) {
        uVar19 = 0x10;
      }
      bVar6 = true;
      do {
        uVar2 = *(uint *)((long)&uStack_110 + uVar25 * 4);
        bVar6 = (bool)(uVar25 == uVar2 & bVar6);
        *(char *)((long)&uStack_80 + uVar25) = (char)uVar2;
        uVar25 = uVar25 + 1;
      } while (uVar19 != uVar25);
    }
    puVar10 = puVar1;
    if ((uVar18 != *(byte *)((long)puVar8 + 0x44)) || (!bVar6)) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      puStack_b8 = puVar1;
      uStack_c0 = 0;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      if (uVar18 == *(byte *)((long)puVar8 + 0x44)) {
        if (uVar18 != 0) {
          uVar25 = 0;
          bVar6 = false;
          do {
            bVar6 = (bool)(uVar25 != *(byte *)((long)&uStack_b0 + uVar25) | bVar6);
            uVar25 = uVar25 + 1;
          } while (uVar27 != uVar25);
          if (bVar6) goto LAB_109e7adbc;
        }
      }
      else {
LAB_109e7adbc:
        lVar21 = param_1[3];
        func_0x000109ecaef8(lVar21,0x154);
        puVar10 = (undefined8 *)(lVar21 + 0x30);
        uVar16 = (ulong)*(byte *)((long)puVar8 + 0x45);
        FUN_109ecb048();
        uVar5 = *(ushort *)(lVar21 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
        *(ushort *)(lVar21 + 0x2c) = uVar5;
        *(ushort *)(lVar21 + 0x2c) =
             (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
        *(undefined8 *)(lVar21 + 0x58) = uStack_98;
        *(undefined8 *)(lVar21 + 0x50) = uStack_a0;
        *(undefined8 **)(lVar21 + 0x68) = puStack_88;
        *(undefined8 *)(lVar21 + 0x60) = uStack_90;
        *(undefined8 *)(lVar21 + 0x78) = uStack_78;
        *(undefined8 *)(lVar21 + 0x70) = uStack_80;
        FUN_109ecb4f0(*param_1,param_1[1],lVar21);
        *param_1 = 3;
        param_1[1] = lVar21;
      }
    }
    uVar24 = uVar24 & (-1 << (ulong)(*(byte *)((long)puVar10 + 0x1c) & 0x1f) ^ 0xffffffffU);
    puVar13 = (undefined8 *)param_1[3];
    FUN_109ecb0a8(puVar13,0x26f);
    bVar3 = *(byte *)((long)puVar10 + 0x1c);
    *(byte *)(puVar13 + 10) = bVar3;
    puVar13[0x10] = 0;
    puVar13[0x11] = 0;
    puVar13[0x12] = 0;
    puVar13[0x13] = lVar11 + 0x80;
    puVar13[0x14] = 0;
    puVar13[0x15] = 0;
    puVar13[0x16] = 0;
    puVar13[0x17] = puVar10;
    uVar18 = 0xffffffff;
    if (bVar3 != 0x20) {
      uVar18 = ~(-1 << (ulong)(bVar3 & 0x1f));
    }
    if (uVar24 == 0) {
      uVar24 = uVar18;
    }
    uVar18 = *(uint *)(puVar13 + 5);
    *(uint *)((long)puVar13 + (ulong)(byte)(&UNK_110b671aa)[(ulong)uVar18 * 0x68] * 4 + 0x50) =
         uVar24;
    *(undefined4 *)((long)puVar13 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar18 * 0x68] * 4 + 0x50)
         = 0;
    puVar9 = (ulong *)*param_1;
    lVar11 = param_1[1];
    puVar10 = puVar13;
    FUN_109ecb4f0();
    *param_1 = 3;
    param_1[1] = (long)puVar13;
    uVar23 = uVar23 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  plVar26 = *(long **)(uVar16 + 8);
  lVar21 = *plVar26;
  do {
    if (lVar21 == 0) {
      return;
    }
    if (iVar17 == 0) {
LAB_109e7af8c:
      puVar14 = (ulong *)(plVar26 + 2);
      uVar27 = *puVar14;
      uVar23 = uVar27;
      func_0x000109ec6720();
      if ((uVar23 & 1) == 0) {
        for (; *(char *)(uVar27 + 4) == '\x13'; uVar27 = *(ulong *)(uVar27 + 0x30)) {
        }
        if ((uVar27 != plVar26[0x11]) &&
           (((plVar26[4] & 0x1fffffU) != 0x20000 ||
            ((*(ulong *)((long)plVar26 + 0x2c) & 0x6000) != 0x4000)))) {
          uVar28 = plVar26[3];
          uVar12 = uVar28;
          (**(code **)(param_5 + 8))(uVar28);
          lVar21 = param_5;
          FUN_109f64fdc(param_5,uVar12,uVar28);
          if (lVar21 == 0) {
            puVar14 = puVar9;
            FUN_109f658b0(puVar9,0x10);
            *puVar14 = uVar16;
            puVar14[1] = (ulong)plVar26;
            uVar28 = plVar26[3];
            uVar12 = uVar28;
            (**(code **)(param_5 + 8))(uVar28);
            func_0x000109f650c0(param_5,uVar12,uVar28,puVar14);
          }
          else {
            lVar29 = (*(undefined8 **)(lVar21 + 0x10))[1];
            if (*puVar14 == *(ulong *)(lVar29 + 0x10)) {
              uVar23 = plVar26[4];
            }
            else {
              puVar7 = puVar10;
              FUN_109e77a3c(puVar10,plVar26,lVar29,**(undefined8 **)(lVar21 + 0x10),1);
              uVar23 = plVar26[4];
              if ((((ulong)puVar7 & 1) == 0) &&
                 (((((uVar23 & 0x1fffff) != 0x200 ||
                    ((*(byte *)((long)plVar26 + 0x2d) >> 2 & 1) == 0)) ||
                   ((*(ulong *)(lVar29 + 0x20) & 0x1fffff) != 0x200)) ||
                  (((*(byte *)(lVar29 + 0x2d) >> 2 & 1) == 0 ||
                   (*(int *)*puVar14 != **(int **)(lVar29 + 0x10))))))) {
                FUN_109e7636c();
                if ((*(byte *)(plVar26[2] + 0xc) >> 1 & 1) == 0) {
                  func_0x000109eca058();
                }
                if ((*(byte *)(*(long *)(lVar29 + 0x10) + 0xc) >> 1 & 1) == 0) {
                  func_0x000109eca058();
                }
                puVar31 = &UNK_10f60f0b6;
                goto LAB_109e7b5c0;
              }
            }
            uVar27 = *(ulong *)(lVar29 + 0x20);
            if ((uVar23 >> 0x2a & 1) == 0) {
              if ((uVar27 >> 0x2a & 1) != 0) {
                *(undefined4 *)((long)plVar26 + 0x3c) = *(undefined4 *)(lVar29 + 0x3c);
                uVar23 = uVar23 | 0x40000000000;
                plVar26[4] = uVar23;
              }
            }
            else {
              if (((uVar27 >> 0x2a & 1) != 0) &&
                 (*(int *)((long)plVar26 + 0x3c) != *(int *)(lVar29 + 0x3c))) {
                FUN_109e7636c();
                puVar31 = &UNK_10f60f0e3;
                goto LAB_109e7b5c0;
              }
              if (((uVar27 ^ uVar23) & 0x3000000000) != 0) {
                FUN_109e7636c();
                puVar31 = &UNK_10f60f119;
                goto LAB_109e7b5c0;
              }
              *(undefined4 *)(lVar29 + 0x3c) = *(undefined4 *)((long)plVar26 + 0x3c);
              *(ulong *)(lVar29 + 0x20) = uVar27 | 0x40000000000;
              uVar23 = plVar26[4];
            }
            if ((uVar23 >> 0x29 & 1) != 0) {
              if (((*(ulong *)(lVar29 + 0x20) >> 0x29 & 1) != 0) &&
                 (*(int *)(plVar26 + 7) != *(int *)(lVar29 + 0x38))) {
                FUN_109e7636c();
                puVar31 = &UNK_10f60f150;
                goto LAB_109e7b5c0;
              }
              *(int *)(lVar29 + 0x38) = *(int *)(plVar26 + 7);
              *(ulong *)(lVar29 + 0x20) = *(ulong *)(lVar29 + 0x20) | 0x20000000000;
            }
            iVar20 = 1;
            while( true ) {
              uVar23 = *puVar14;
              if (*(char *)(uVar23 + 4) != '\x13') break;
              puVar14 = (ulong *)(uVar23 + 0x30);
              iVar20 = *(int *)(uVar23 + 0x10) * iVar20;
            }
            if (*(char *)(uVar23 + 4) == '\x10') {
              iVar22 = 4;
            }
            else {
              iVar22 = 0;
            }
            if ((iVar22 * iVar20 != 0) && (*(int *)(plVar26 + 9) != *(int *)(lVar29 + 0x48))) {
              FUN_109e7636c();
              puVar31 = &UNK_10f60f185;
LAB_109e7b5c0:
              func_0x000109eb844c(puVar10,puVar31);
              return;
            }
            uVar12 = plVar26[3];
            _strcmp(uVar12,&UNK_10f607c49);
            if ((int)uVar12 == 0) {
              uVar19 = (uint)*(undefined8 *)((long)plVar26 + 0x2c);
              uVar18 = uVar19 >> 0x12 & 7;
              uVar24 = *(uint *)(lVar29 + 0x2c) >> 0x12 & 7;
              if ((uVar18 != 0) && (uVar18 != uVar24)) {
                func_0x000109eb844c(puVar10,&UNK_10f60f1be);
                uVar19 = (uint)*(undefined8 *)((long)plVar26 + 0x2c);
              }
              if (((uVar19 >> 0xc & 1) != 0) && (uVar18 != uVar24)) {
                func_0x000109eb844c(puVar10,&UNK_10f60f234);
              }
            }
            uVar23 = plVar26[0xf];
            if (uVar23 != 0) {
              if (((*(long *)(lVar29 + 0x78) == 0) || ((*(byte *)(lVar29 + 0x2c) >> 1 & 1) != 0)) ||
                 ((*(byte *)((long)plVar26 + 0x2c) >> 1 & 1) != 0)) {
                if ((*(byte *)((long)plVar26 + 0x2c) >> 1 & 1) == 0) {
                  uVar28 = *(undefined8 *)(lVar29 + 0x18);
                  uVar12 = uVar28;
                  (**(code **)(param_5 + 8))(uVar28);
                  func_0x000109f650c0(param_5,uVar12,uVar28,plVar26);
                }
              }
              else {
                FUN_109e7b5e8();
                if ((uVar23 & 1) == 0) {
                  FUN_109e7636c();
                  puVar31 = &UNK_10f60f2f6;
                  goto LAB_109e7b5c0;
                }
              }
            }
            if ((((*(ulong *)((long)plVar26 + 0x2c) & 1) != 0) &&
                ((*(byte *)(lVar29 + 0x2c) & 1) != 0)) &&
               ((plVar26[0xf] == 0 || (*(long *)(lVar29 + 0x78) == 0)))) {
              puVar31 = &UNK_10f60f326;
              goto LAB_109e7b5c0;
            }
            uVar23 = plVar26[4] ^ *(ulong *)(lVar29 + 0x20);
            uVar18 = (uint)uVar23;
            if ((uVar18 >> 0x1a & 1) != 0) {
              FUN_109e7636c();
              puVar31 = &UNK_10f60f36b;
              goto LAB_109e7b5c0;
            }
            if ((uVar18 >> 0x16 & 1) != 0) {
              FUN_109e7636c();
              puVar31 = &UNK_10f60f3ab;
              goto LAB_109e7b5c0;
            }
            if ((uVar18 >> 0x17 & 1) != 0) {
              FUN_109e7636c();
              puVar31 = &UNK_10f60f3ea;
              goto LAB_109e7b5c0;
            }
            if (*(int *)(lVar29 + 0x4c) != *(int *)((long)plVar26 + 0x4c)) {
              FUN_109e7636c();
              puVar31 = &UNK_10f60f427;
              goto LAB_109e7b5c0;
            }
            if (((*(char *)(lVar11 + 0x447) == '\0') && (*(char *)((long)puVar10 + 0xa5) == '\x01'))
               && (((uVar23 & 0x30000000) != 0 && (plVar26[0x11] == 0)))) {
              if (((((uint)*(ulong *)((long)plVar26 + 0x2c) & *(uint *)(lVar29 + 0x2c)) >> 0xc & 1)
                   != 0) || (299 < *(uint *)(puVar10 + 0x1b))) {
                FUN_109e7636c();
                puVar31 = &UNK_10f60f46a;
                goto LAB_109e7b5c0;
              }
              FUN_109e7636c();
              func_0x000109eb84b0(puVar10,&UNK_10f60f46a);
            }
            puVar31 = (undefined *)plVar26[0x11];
            puVar30 = *(undefined **)(lVar29 + 0x88);
            if (puVar31 != puVar30) {
              if ((puVar31 == (undefined *)0x0) || (puVar30 == (undefined *)0x0)) {
                FUN_109e7636c();
                if (puVar31 == (undefined *)0x0) {
                  puVar31 = puVar30;
                }
                if (((byte)puVar31[0xc] >> 1 & 1) == 0) {
                  func_0x000109eca058();
                }
                puVar31 = &UNK_10f60f4aa;
                goto LAB_109e7b5c0;
              }
              bVar3 = puVar31[0xc];
              if ((bVar3 >> 1 & 1) == 0) {
                func_0x000109eca058();
              }
              else {
                puVar31 = &UNK_10e05bf38 + *(long *)(puVar31 + 0x18);
              }
              bVar4 = puVar30[0xc];
              if ((bVar4 >> 1 & 1) == 0) {
                func_0x000109eca058(puVar30);
              }
              else {
                puVar30 = &UNK_10e05bf38 + *(long *)(puVar30 + 0x18);
              }
              _strcmp(puVar31,puVar30);
              if ((int)puVar31 != 0) {
                FUN_109e7636c();
                if ((bVar4 >> 1 & 1) == 0) {
                  func_0x000109eca058();
                }
                if ((bVar3 >> 1 & 1) == 0) {
                  func_0x000109eca058();
                }
                puVar31 = &UNK_10f60f4ed;
                goto LAB_109e7b5c0;
              }
            }
          }
        }
      }
    }
    else {
      uVar18 = *(uint *)(plVar26 + 4) & 0x1fffff;
      if (uVar18 < 0x80) {
        if (uVar18 == 2 || uVar18 == 0x10) goto LAB_109e7af8c;
      }
      else if ((uVar18 == 0x200) || (uVar18 == 0x80)) goto LAB_109e7af8c;
    }
    plVar26 = (long *)*plVar26;
    lVar21 = *plVar26;
  } while( true );
}



/* Entry: 109e7b5e8; end: 109e7b66f;  */

uint FUN_109e7b5e8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar2 = param_1;
  _memcmp(param_1,param_2,0x80);
  uVar4 = 0;
  if ((int)lVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x84);
    uVar7 = (ulong)uVar1;
    if (*(char *)(param_1 + 0x80) == *(char *)(param_2 + 0x80) && uVar1 == *(uint *)(param_2 + 0x84)
       ) {
      if (uVar1 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 1;
        puVar5 = *(undefined8 **)(param_2 + 0x88);
        puVar6 = *(undefined8 **)(param_1 + 0x88);
        do {
          uVar3 = *puVar6;
          FUN_109e7b5e8(uVar3,*puVar5);
          uVar4 = uVar4 & (uint)uVar3;
          uVar7 = uVar7 - 1;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != 0);
      }
    }
  }
  return uVar4;
}



/* Entry: 109e7b670; end: 109e7bb63;  */

void FUN_109e7b670(long *param_1,long param_2,long param_3,long param_4,undefined1 *param_5,
                  undefined1 *param_6,undefined1 *param_7)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  
  plVar5 = (long *)*param_1;
  while( true ) {
    plVar4 = plVar5;
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar1 = param_1[6];
    if (lVar1 != 0) break;
    plVar5 = (long *)*plVar4;
    param_1 = plVar4;
  }
  do {
    lVar1 = *(long *)(lVar1 + 0x30);
    while (plVar5 = plVar4, lVar1 != 0) {
      plVar5 = *(long **)(lVar1 + 0x20);
LAB_109e7b6e8:
      plVar2 = plVar5;
      plVar5 = (long *)*plVar2;
      if (plVar5 != (long *)0x0) {
        if (((int)plVar2[3] == 4) && (((int)plVar2[5] == 0x26f || ((int)plVar2[5] == 0x54)))) {
          plVar2 = plVar2 + 0x13;
          while( true ) {
            lVar3 = *(long *)*plVar2;
            if (*(int *)(lVar3 + 0x28) == 0) break;
            if (*(int *)(lVar3 + 0x28) == 5) goto LAB_109e7b6e8;
            if (*(int *)(lVar3 + 0x18) != 1) {
              lVar3 = 0;
            }
            plVar2 = (long *)(lVar3 + 0x50);
          }
          lVar3 = *(long *)(lVar3 + 0x38);
          if ((lVar3 != 0) &&
             (((puVar6 = param_5, lVar3 == param_2 || (puVar6 = param_6, lVar3 == param_3)) ||
              (puVar6 = param_7, lVar3 == param_4)))) {
            *puVar6 = 1;
          }
        }
        goto LAB_109e7b6e8;
      }
      FUN_109ecc434();
    }
    do {
      plVar4 = (long *)*plVar5;
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar1 = plVar5[6];
      plVar5 = plVar4;
    } while (lVar1 == 0);
  } while( true );
}



/* Entry: 109e7bb64; end: 109e7c237;  */

undefined8 * FUN_109e7bb64(long *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 auStack_c0 [4];
  long alStack_a0 [6];
  
  alStack_a0[4] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = *(long **)param_1[0x2f];
  if (plVar13 == (long *)0x0) {
LAB_109e7bbd4:
    lVar19 = 0;
  }
  else {
    plVar12 = (long *)param_1[0x2f];
    plVar15 = (long *)0x0;
    do {
      plVar16 = plVar12;
      if ((char)plVar12[7] == '\0') {
        plVar16 = plVar15;
      }
      plVar14 = (long *)*plVar13;
      plVar12 = plVar13;
      plVar15 = plVar16;
      plVar13 = plVar14;
    } while (plVar14 != (long *)0x0);
    if (plVar16 == (long *)0x0) goto LAB_109e7bbd4;
    lVar19 = plVar16[6];
  }
  iVar1 = *(int *)((long)param_1 + 0x15c);
  if (iVar1 == 0) {
    *(uint *)(lVar19 + 0x84) = *(uint *)(lVar19 + 0x84) & 0xfffffff7;
    goto LAB_109e7c1f0;
  }
  *(uint *)(param_1 + 0x2b) = *(uint *)(param_1 + 0x2b) | 0x100;
  if (*(long *)(lVar19 + 0x30) == lVar19 + 0x40) {
    plStack_d0 = (long *)0x0;
  }
  else {
    plStack_d0 = *(long **)(lVar19 + 0x48);
  }
  if ((int)plStack_d0[2] == 0) {
    lStack_f0 = 1;
    plStack_e8 = plStack_d0;
    goto LAB_109e7bc50;
  }
  lStack_f0 = 0;
  plVar13 = (long *)*plStack_d0;
  plStack_d0 = (long *)0x0;
  if (*plVar13 != 0) {
    plStack_d0 = plVar13;
  }
  iVar5 = (int)plVar13[2];
  plStack_e8 = plStack_d0;
  while (iVar5 != 3) {
LAB_109e7bc50:
    plStack_d0 = (long *)plStack_d0[3];
    iVar5 = (int)plStack_d0[2];
  }
  plStack_d8 = *(long **)(plStack_d0[4] + 0x18);
  uStack_e0 = 0;
  plVar13 = param_1;
  FUN_109eca7c8(param_1,8,&DAT_10e05dce0,&UNK_10f6100df);
  *(undefined4 *)((long)plVar13 + 0x3c) = 0xffffffff;
  plVar13[4] = plVar13[4] | 0x8000200000;
  uVar18 = *(ulong *)((long)plVar13 + 0x2c) & 0xfffffe00ffff9fff | 0x100000000;
  if ((int)param_2 == 0) {
    uVar18 = *(ulong *)((long)plVar13 + 0x2c) & 0xffffffffffff9fff;
  }
  *(ulong *)((long)plVar13 + 0x2c) = uVar18 | 0x4000;
  param_2 = param_1;
  FUN_109eca7c8(param_1,2,&DAT_10e05dab0,&UNK_10f6100f0);
  *(ulong *)((long)param_2 + 0x2c) = *(ulong *)((long)param_2 + 0x2c) & 0xffffffffffff9fff | 0x4000;
  plVar12 = param_2;
  FUN_109f658b0();
  if (plVar12 != (long *)0x0) {
    *plVar12 = 0;
  }
  param_2[0xe] = (long)plVar12;
  *(undefined2 *)(param_2 + 0xd) = 1;
  *(undefined2 *)plVar12 = 0x43;
  alStack_a0[1] = 0;
  alStack_a0[0] = 0;
  alStack_a0[3] = 0;
  alStack_a0[2] = 0;
  plVar12 = (long *)param_1[1];
  plVar15 = (long *)*plVar12;
  if (plVar15 == (long *)0x0) {
LAB_109e7bdf4:
    lVar17 = 0;
    do {
      lVar8 = alStack_a0[lVar17];
      if (lVar8 == 0) {
        uVar21 = 0x80;
        uVar22 = 0x3f;
        if (lVar17 != 3) {
          uVar21 = 0;
          uVar22 = 0;
        }
        lStack_c8 = (ulong)CONCAT11(uVar22,uVar21) << 0x10;
        lVar8 = lStack_c8;
        plVar12 = (long *)*plStack_d8;
        FUN_109f6600c(plVar12,0x50,8);
        if (plVar12 != (long *)0x0) {
          plVar12[7] = 0;
          plVar12[6] = 0;
          plVar12[9] = 0;
          plVar12[8] = 0;
          plVar12[3] = 0;
          plVar12[2] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[1] = 0;
          *plVar12 = 0;
        }
        *(undefined4 *)(plVar12 + 3) = 5;
        plVar12[1] = 0;
        plVar12[2] = 0;
        plVar15 = plVar12 + 5;
        *plVar12 = 0;
        FUN_109ecb048(plVar12,plVar15,1,0x20);
        plVar12[9] = lVar8;
        FUN_109ecb4f0(lStack_f0,plStack_e8,plVar12);
        lStack_f0 = 3;
        plStack_e8 = plVar12;
      }
      else {
        plVar12 = &lStack_f0;
        FUN_109e7c238(plVar12,lVar8);
        plVar15 = &lStack_f0;
        FUN_109e7c484(plVar15,plVar12,
                      (int)lVar17 - ((uint)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x24) & 3),1);
      }
      auStack_c0[lVar17] = plVar15;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 4);
    plVar12 = &lStack_f0;
    FUN_109ece300(plVar12,0x1c7,auStack_c0);
  }
  else {
    do {
      if ((((uint)plVar12[4] >> 3 & 1) != 0) &&
         (*(int *)((long)plVar12 + 0x3c) == 4 || *(int *)((long)plVar12 + 0x3c) == 2)) {
        for (lVar17 = plVar12[2]; *(char *)(lVar17 + 4) == '\x13'; lVar17 = *(long *)(lVar17 + 0x30)
            ) {
        }
        uVar18 = (ulong)*(byte *)(lVar17 + 0xd);
        if (uVar18 != 0) {
          plVar16 = alStack_a0 + ((ulong)plVar12[4] >> 0x24 & 3);
          do {
            plVar14 = plVar12;
            if ((long *)*plVar16 != (long *)0x0) {
              plVar14 = (long *)*plVar16;
            }
            *plVar16 = (long)plVar14;
            uVar18 = uVar18 - 1;
            plVar16 = plVar16 + 1;
          } while (uVar18 != 0);
        }
      }
      plVar16 = (long *)*plVar15;
      plVar12 = plVar15;
      plVar15 = plVar16;
    } while (plVar16 != (long *)0x0);
    if (alStack_a0[0] == 0) goto LAB_109e7bdf4;
    for (lVar17 = *(long *)(alStack_a0[0] + 0x10); *(char *)(lVar17 + 4) == '\x13';
        lVar17 = *(long *)(lVar17 + 0x30)) {
    }
    if (*(char *)(lVar17 + 0xd) != '\x04') goto LAB_109e7bdf4;
    plVar12 = &lStack_f0;
    FUN_109e7c238(plVar12);
  }
  plVar15 = &lStack_f0;
  FUN_109e7c63c(plVar15,param_2,plVar13,plVar12,*(undefined4 *)((long)param_1 + 0x15c));
  lVar17 = 0;
  do {
    plVar13 = (long *)alStack_a0[lVar17];
    if (plVar13 != (long *)0x0) {
      cVar2 = *(char *)(plVar13[2] + 4);
      plVar12 = &lStack_f0;
      FUN_109e7ec24(plVar12,plVar15);
      if (cVar2 == '\x13') {
        puVar6 = (undefined8 *)*plStack_d8;
        FUN_109f6600c(puVar6,0xa0,8);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[0x11] = 0;
          puVar6[0x10] = 0;
          puVar6[0x13] = 0;
          puVar6[0x12] = 0;
          puVar6[0xd] = 0;
          puVar6[0xc] = 0;
          puVar6[0xf] = 0;
          puVar6[0xe] = 0;
          puVar6[9] = 0;
          puVar6[8] = 0;
          puVar6[0xb] = 0;
          puVar6[10] = 0;
          puVar6[5] = 0;
          puVar6[4] = 0;
          puVar6[7] = 0;
          puVar6[6] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
        }
        *(undefined4 *)(puVar6 + 3) = 1;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 5) = 0;
        *(uint *)((long)puVar6 + 0x2c) = *(uint *)(plVar13 + 4) & 0x1fffff;
        puVar6[6] = plVar13[2];
        puVar6[7] = plVar13;
        if (*(char *)((long)plStack_d8 + 0x61) == '\x0e') {
          uVar11 = (undefined4)plStack_d8[0x2c];
        }
        else {
          uVar11 = 0x20;
        }
        FUN_109ecb048(puVar6,puVar6 + 0x10,1,uVar11);
        FUN_109ecb4f0(lStack_f0,plStack_e8,puVar6);
        lStack_f0 = 3;
        uVar21 = *(undefined1 *)((long)puVar6 + 0x9d);
        puVar7 = (undefined8 *)*plStack_d8;
        plStack_e8 = puVar6;
        FUN_109f6600c(puVar7,0x50,8);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
        }
        *(undefined4 *)(puVar7 + 3) = 5;
        uVar20 = 1 << (ulong)((uint)lVar17 & 0x1f);
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_109ecb048(puVar7,puVar7 + 5,1,uVar21);
        puVar7[9] = 0;
        FUN_109ecb4f0(lStack_f0,plStack_e8,puVar7);
        lStack_f0 = 3;
        plVar13 = plStack_d8;
        plStack_e8 = puVar7;
        func_0x000109ecaf70(plStack_d8,1);
        *(undefined4 *)((long)plVar13 + 0x2c) = *(undefined4 *)((long)puVar6 + 0x2c);
        lVar8 = puVar6[6];
        func_0x000109eca118();
        plVar13[6] = lVar8;
        plVar13[7] = 0;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[10] = (long)(puVar6 + 0x10);
        plVar13[0xb] = 0;
        plVar13[0xc] = 0;
        plVar13[0xd] = 0;
        plVar13[0xe] = (long)(puVar7 + 5);
        FUN_109ecb048(plVar13,plVar13 + 0x10,*(undefined1 *)((long)puVar6 + 0x9c),
                      *(undefined1 *)((long)puVar6 + 0x9d));
        FUN_109ecb4f0(lStack_f0,plStack_e8,plVar13);
        lStack_f0 = 3;
        uVar4 = -1 << (ulong)(*(byte *)((long)plVar12 + 0x1c) & 0x1f);
        plVar16 = plStack_d8;
        plStack_e8 = plVar13;
        FUN_109ecb0a8(plStack_d8,0x26f);
        bVar3 = *(byte *)((long)plVar12 + 0x1c);
        *(byte *)(plVar16 + 10) = bVar3;
        plVar16[0x10] = 0;
        plVar16[0x11] = 0;
        plVar16[0x12] = 0;
        plVar16[0x13] = (long)(plVar13 + 0x10);
        plVar16[0x14] = 0;
        plVar16[0x15] = 0;
        plVar16[0x16] = 0;
        plVar16[0x17] = (long)plVar12;
        if ((uVar4 & uVar20) == 0) {
          uVar20 = uVar20 & (uVar4 ^ 0xffffffff);
        }
        else {
          uVar20 = 0xffffffff;
          if (bVar3 != 0x20) {
            uVar20 = ~(-1 << (ulong)(bVar3 & 0x1f));
          }
        }
        uVar4 = *(uint *)(plVar16 + 5);
        *(uint *)((long)plVar16 + (ulong)(byte)(&UNK_110b671aa)[(ulong)uVar4 * 0x68] * 4 + 0x50) =
             uVar20;
        *(undefined4 *)
         ((long)plVar16 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar4 * 0x68] * 4 + 0x50) = 0;
        FUN_109ecb4f0(lStack_f0,plStack_e8,plVar16);
        lStack_f0 = 3;
        param_2 = plStack_e8;
        plStack_e8 = plVar16;
      }
      else {
        plVar16 = &lStack_f0;
        FUN_109e7c484(plVar16,plVar12,lVar17,1);
        plVar12 = &lStack_f0;
        FUN_109ece27c(plVar12,0x1c7,plVar16,plVar16,plVar16,plVar16);
        func_0x000109e7ed6c(&lStack_f0,plVar13,plVar12,1 << (ulong)((uint)lVar17 & 0x1f));
        param_2 = plVar13;
      }
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 4);
  *(undefined4 *)(lVar19 + 0x84) = 0;
  FUN_109f46234(param_1);
  FUN_109f29aac(param_1);
  plVar13 = *(long **)param_1[1];
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)param_1[1];
    do {
      plVar15 = plVar13;
      if ((*(byte *)(plVar12 + 4) >> 3 & 1) != 0) {
        iVar5 = (int)plVar12[3];
        param_2 = (long *)&UNK_10f6100df;
        _strcmp();
        if (iVar5 == 0) {
          *(undefined4 *)((long)plVar12 + 0x3c) = 4;
          break;
        }
      }
      plVar13 = (long *)*plVar15;
      plVar12 = plVar15;
    } while (plVar13 != (long *)0x0);
  }
LAB_109e7c1f0:
  puVar6 = (undefined8 *)(ulong)(iVar1 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_a0[4]) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (*(char *)(param_2[2] + 4) != '\x13') {
    puVar7 = *(undefined8 **)puVar6[3];
    FUN_109f6600c(puVar7,0xa0,8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
    }
    *(undefined4 *)(puVar7 + 3) = 1;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *(uint *)((long)puVar7 + 0x2c) = *(uint *)(param_2 + 4) & 0x1fffff;
    puVar7[6] = param_2[2];
    puVar7[7] = param_2;
    if (*(char *)(puVar6[3] + 0x61) == '\x0e') {
      uVar11 = *(undefined4 *)(puVar6[3] + 0x160);
    }
    else {
      uVar11 = 0x20;
    }
    FUN_109ecb048(puVar7,puVar7 + 0x10,1,uVar11);
    FUN_109ecb4f0(*puVar6,puVar6[1],puVar7);
    *puVar6 = 3;
    puVar6[1] = puVar7;
    uVar21 = *(undefined1 *)(puVar7[6] + 0xd);
    lVar19 = puVar6[3];
    FUN_109ecb0a8(lVar19,0x112);
    *(undefined1 *)(lVar19 + 0x50) = uVar21;
    FUN_109ecb048();
    *(undefined8 *)(lVar19 + 0x80) = 0;
    *(undefined8 *)(lVar19 + 0x88) = 0;
    *(undefined8 *)(lVar19 + 0x90) = 0;
    *(undefined8 **)(lVar19 + 0x98) = puVar7 + 0x10;
    *(undefined4 *)
     (lVar19 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar19 + 0x28) * 0x68] * 4 + 0x50) = 0
    ;
    FUN_109ecb4f0(*puVar6,puVar6[1],lVar19);
    *puVar6 = 3;
    puVar6[1] = lVar19;
    return (undefined8 *)(lVar19 + 0x30);
  }
  puVar7 = *(undefined8 **)puVar6[3];
  FUN_109f6600c(puVar7,0xa0,8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
  }
  *(undefined4 *)(puVar7 + 3) = 1;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 5) = 0;
  *(uint *)((long)puVar7 + 0x2c) = *(uint *)(param_2 + 4) & 0x1fffff;
  puVar7[6] = param_2[2];
  puVar7[7] = param_2;
  if (*(char *)(puVar6[3] + 0x61) == '\x0e') {
    uVar11 = *(undefined4 *)(puVar6[3] + 0x160);
  }
  else {
    uVar11 = 0x20;
  }
  FUN_109ecb048(puVar7,puVar7 + 0x10,1,uVar11);
  FUN_109ecb4f0(*puVar6,puVar6[1],puVar7);
  *puVar6 = 3;
  puVar6[1] = puVar7;
  uVar21 = *(undefined1 *)((long)puVar7 + 0x9d);
  puVar9 = *(undefined8 **)puVar6[3];
  FUN_109f6600c(puVar9,0x50,8);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
  }
  *(undefined4 *)(puVar9 + 3) = 5;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  FUN_109ecb048(puVar9,puVar9 + 5,1,uVar21);
  puVar9[9] = 0;
  FUN_109ecb4f0(*puVar6,puVar6[1],puVar9);
  *puVar6 = 3;
  puVar6[1] = puVar9;
  lVar19 = puVar6[3];
  func_0x000109ecaf70(lVar19,1);
  *(undefined4 *)(lVar19 + 0x2c) = *(undefined4 *)((long)puVar7 + 0x2c);
  uVar10 = puVar7[6];
  func_0x000109eca118();
  *(undefined8 *)(lVar19 + 0x30) = uVar10;
  *(undefined8 *)(lVar19 + 0x38) = 0;
  *(undefined8 *)(lVar19 + 0x40) = 0;
  *(undefined8 *)(lVar19 + 0x48) = 0;
  *(undefined8 **)(lVar19 + 0x50) = puVar7 + 0x10;
  *(undefined8 *)(lVar19 + 0x58) = 0;
  *(undefined8 *)(lVar19 + 0x60) = 0;
  *(undefined8 *)(lVar19 + 0x68) = 0;
  *(undefined8 **)(lVar19 + 0x70) = puVar9 + 5;
  FUN_109ecb048(lVar19,lVar19 + 0x80,*(undefined1 *)((long)puVar7 + 0x9c),
                *(undefined1 *)((long)puVar7 + 0x9d));
  FUN_109ecb4f0(*puVar6,puVar6[1],lVar19);
  *puVar6 = 3;
  puVar6[1] = lVar19;
  uVar21 = *(undefined1 *)(*(long *)(lVar19 + 0x30) + 0xd);
  lVar17 = puVar6[3];
  FUN_109ecb0a8(lVar17,0x112);
  *(undefined1 *)(lVar17 + 0x50) = uVar21;
  FUN_109ecb048();
  *(undefined8 *)(lVar17 + 0x80) = 0;
  *(undefined8 *)(lVar17 + 0x88) = 0;
  *(undefined8 *)(lVar17 + 0x90) = 0;
  *(long *)(lVar17 + 0x98) = lVar19 + 0x80;
  *(undefined4 *)
   (lVar17 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar17 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*puVar6,puVar6[1],lVar17);
  *puVar6 = 3;
  puVar6[1] = lVar17;
  return (undefined8 *)(lVar17 + 0x30);
}



/* Entry: 109e7c238; end: 109e7c483;  */

long FUN_109e7c238(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if (*(char *)(*(long *)(param_2 + 0x10) + 4) == '\x13') {
    puVar2 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar2,0xa0,8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
    }
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(uint *)((long)puVar2 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
    puVar2[6] = *(undefined8 *)(param_2 + 0x10);
    puVar2[7] = param_2;
    if (*(char *)(param_1[3] + 0x61) == '\x0e') {
      uVar7 = *(undefined4 *)(param_1[3] + 0x160);
    }
    else {
      uVar7 = 0x20;
    }
    FUN_109ecb048(puVar2,puVar2 + 0x10,1,uVar7);
    FUN_109ecb4f0(*param_1,param_1[1],puVar2);
    *param_1 = 3;
    param_1[1] = puVar2;
    uVar1 = *(undefined1 *)((long)puVar2 + 0x9d);
    puVar3 = *(undefined8 **)param_1[3];
    FUN_109f6600c(puVar3,0x50,8);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    *(undefined4 *)(puVar3 + 3) = 5;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109ecb048(puVar3,puVar3 + 5,1,uVar1);
    puVar3[9] = 0;
    FUN_109ecb4f0(*param_1,param_1[1],puVar3);
    *param_1 = 3;
    param_1[1] = puVar3;
    lVar4 = param_1[3];
    func_0x000109ecaf70(lVar4,1);
    *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)((long)puVar2 + 0x2c);
    uVar5 = puVar2[6];
    func_0x000109eca118();
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 **)(lVar4 + 0x50) = puVar2 + 0x10;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 **)(lVar4 + 0x70) = puVar3 + 5;
    FUN_109ecb048(lVar4,lVar4 + 0x80,*(undefined1 *)((long)puVar2 + 0x9c),
                  *(undefined1 *)((long)puVar2 + 0x9d));
    FUN_109ecb4f0(*param_1,param_1[1],lVar4);
    *param_1 = 3;
    param_1[1] = lVar4;
    uVar1 = *(undefined1 *)(*(long *)(lVar4 + 0x30) + 0xd);
    lVar6 = param_1[3];
    FUN_109ecb0a8(lVar6,0x112);
    *(undefined1 *)(lVar6 + 0x50) = uVar1;
    FUN_109ecb048();
    *(undefined8 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(long *)(lVar6 + 0x98) = lVar4 + 0x80;
    *(undefined4 *)
     (lVar6 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar6 + 0x28) * 0x68] * 4 + 0x50) = 0;
    FUN_109ecb4f0(*param_1,param_1[1],lVar6);
    *param_1 = 3;
    param_1[1] = lVar6;
    return lVar6 + 0x30;
  }
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0xa0,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(uint *)((long)puVar2 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
  puVar2[6] = *(undefined8 *)(param_2 + 0x10);
  puVar2[7] = param_2;
  if (*(char *)(param_1[3] + 0x61) == '\x0e') {
    uVar7 = *(undefined4 *)(param_1[3] + 0x160);
  }
  else {
    uVar7 = 0x20;
  }
  FUN_109ecb048(puVar2,puVar2 + 0x10,1,uVar7);
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = puVar2;
  uVar1 = *(undefined1 *)(puVar2[6] + 0xd);
  lVar4 = param_1[3];
  FUN_109ecb0a8(lVar4,0x112);
  *(undefined1 *)(lVar4 + 0x50) = uVar1;
  FUN_109ecb048();
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 **)(lVar4 + 0x98) = puVar2 + 0x10;
  *(undefined4 *)
   (lVar4 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar4 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar4);
  *param_1 = 3;
  param_1[1] = lVar4;
  return lVar4 + 0x30;
}



/* Entry: 109e7c484; end: 109e7c63b;  */

/* WARNING: Possible PIC construction at 0x000109e7c760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7c790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7ca34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7ccd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7e980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7e9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7e9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7ea0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7eb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7eb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e7eb24) */
/* WARNING: Removing unreachable block (ram,0x000109e7ea10) */
/* WARNING: Removing unreachable block (ram,0x000109e7ea50) */
/* WARNING: Removing unreachable block (ram,0x000109e7eaa8) */
/* WARNING: Removing unreachable block (ram,0x000109e7eab4) */
/* WARNING: Removing unreachable block (ram,0x000109e7eac8) */
/* WARNING: Removing unreachable block (ram,0x000109e7ead0) */
/* WARNING: Removing unreachable block (ram,0x000109e7eae0) */
/* WARNING: Removing unreachable block (ram,0x000109e7eaf0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ea48) */
/* WARNING: Removing unreachable block (ram,0x000109e7eb04) */
/* WARNING: Removing unreachable block (ram,0x000109e7e9d8) */
/* WARNING: Removing unreachable block (ram,0x000109e7e9a4) */
/* WARNING: Removing unreachable block (ram,0x000109e7e984) */
/* WARNING: Removing unreachable block (ram,0x000109e7ccd4) */
/* WARNING: Removing unreachable block (ram,0x000109e7ccec) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd04) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd38) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd54) */
/* WARNING: Removing unreachable block (ram,0x000109e7db20) */
/* WARNING: Removing unreachable block (ram,0x000109e7db30) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd8c) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd68) */
/* WARNING: Removing unreachable block (ram,0x000109e7cda0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e000) */
/* WARNING: Removing unreachable block (ram,0x000109e7e04c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e05c) */
/* WARNING: Removing unreachable block (ram,0x000109e7cda8) */
/* WARNING: Removing unreachable block (ram,0x000109e7e108) */
/* WARNING: Removing unreachable block (ram,0x000109e7e150) */
/* WARNING: Removing unreachable block (ram,0x000109e7e160) */
/* WARNING: Removing unreachable block (ram,0x000109e7e210) */
/* WARNING: Removing unreachable block (ram,0x000109e7e220) */
/* WARNING: Removing unreachable block (ram,0x000109e7e2bc) */
/* WARNING: Removing unreachable block (ram,0x000109e7e2cc) */
/* WARNING: Removing unreachable block (ram,0x000109e7e37c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e38c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e464) */
/* WARNING: Removing unreachable block (ram,0x000109e7e474) */
/* WARNING: Removing unreachable block (ram,0x000109e7e510) */
/* WARNING: Removing unreachable block (ram,0x000109e7e520) */
/* WARNING: Removing unreachable block (ram,0x000109e7e5f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e600) */
/* WARNING: Removing unreachable block (ram,0x000109e7e69c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e6ac) */
/* WARNING: Removing unreachable block (ram,0x000109e7d258) */
/* WARNING: Removing unreachable block (ram,0x000109e7d2a0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d2b0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d360) */
/* WARNING: Removing unreachable block (ram,0x000109e7d370) */
/* WARNING: Removing unreachable block (ram,0x000109e7d3f8) */
/* WARNING: Removing unreachable block (ram,0x000109e7d408) */
/* WARNING: Removing unreachable block (ram,0x000109e7d48c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d49c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d538) */
/* WARNING: Removing unreachable block (ram,0x000109e7d548) */
/* WARNING: Removing unreachable block (ram,0x000109e7d620) */
/* WARNING: Removing unreachable block (ram,0x000109e7d630) */
/* WARNING: Removing unreachable block (ram,0x000109e7db38) */
/* WARNING: Removing unreachable block (ram,0x000109e7db80) */
/* WARNING: Removing unreachable block (ram,0x000109e7db90) */
/* WARNING: Removing unreachable block (ram,0x000109e7dc2c) */
/* WARNING: Removing unreachable block (ram,0x000109e7dc3c) */
/* WARNING: Removing unreachable block (ram,0x000109e7dcbc) */
/* WARNING: Removing unreachable block (ram,0x000109e7dccc) */
/* WARNING: Removing unreachable block (ram,0x000109e7dd64) */
/* WARNING: Removing unreachable block (ram,0x000109e7dd74) */
/* WARNING: Removing unreachable block (ram,0x000109e7ddf8) */
/* WARNING: Removing unreachable block (ram,0x000109e7de08) */
/* WARNING: Removing unreachable block (ram,0x000109e7de90) */
/* WARNING: Removing unreachable block (ram,0x000109e7dea0) */
/* WARNING: Removing unreachable block (ram,0x000109e7df24) */
/* WARNING: Removing unreachable block (ram,0x000109e7df34) */
/* WARNING: Removing unreachable block (ram,0x000109e7d71c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d760) */
/* WARNING: Removing unreachable block (ram,0x000109e7d770) */
/* WARNING: Removing unreachable block (ram,0x000109e7d808) */
/* WARNING: Removing unreachable block (ram,0x000109e7d818) */
/* WARNING: Removing unreachable block (ram,0x000109e7d89c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d8ac) */
/* WARNING: Removing unreachable block (ram,0x000109e7d948) */
/* WARNING: Removing unreachable block (ram,0x000109e7d958) */
/* WARNING: Removing unreachable block (ram,0x000109e7d9e0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d9f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7da74) */
/* WARNING: Removing unreachable block (ram,0x000109e7da84) */
/* WARNING: Removing unreachable block (ram,0x000109e7dfe0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e72c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e734) */
/* WARNING: Removing unreachable block (ram,0x000109e7e744) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd80) */
/* WARNING: Removing unreachable block (ram,0x000109e7d244) */
/* WARNING: Removing unreachable block (ram,0x000109e7cdd0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ce30) */
/* WARNING: Removing unreachable block (ram,0x000109e7ce40) */
/* WARNING: Removing unreachable block (ram,0x000109e7cedc) */
/* WARNING: Removing unreachable block (ram,0x000109e7ceec) */
/* WARNING: Removing unreachable block (ram,0x000109e7cf74) */
/* WARNING: Removing unreachable block (ram,0x000109e7cf84) */
/* WARNING: Removing unreachable block (ram,0x000109e7d020) */
/* WARNING: Removing unreachable block (ram,0x000109e7d030) */
/* WARNING: Removing unreachable block (ram,0x000109e7d0e0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d0f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d1a4) */
/* WARNING: Removing unreachable block (ram,0x000109e7d1b4) */
/* WARNING: Removing unreachable block (ram,0x000109e7d240) */
/* WARNING: Removing unreachable block (ram,0x000109e7d6ac) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd48) */
/* WARNING: Removing unreachable block (ram,0x000109e7d24c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d70c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d710) */
/* WARNING: Removing unreachable block (ram,0x000109e7d718) */
/* WARNING: Removing unreachable block (ram,0x000109e7e74c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e75c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e77c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e798) */
/* WARNING: Removing unreachable block (ram,0x000109e7e790) */
/* WARNING: Removing unreachable block (ram,0x000109e7e79c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e840) */
/* WARNING: Removing unreachable block (ram,0x000109e7e850) */
/* WARNING: Removing unreachable block (ram,0x000109e7e8f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e900) */
/* WARNING: Removing unreachable block (ram,0x000109e7ca38) */
/* WARNING: Removing unreachable block (ram,0x000109e7ca64) */
/* WARNING: Removing unreachable block (ram,0x000109e7ca74) */
/* WARNING: Removing unreachable block (ram,0x000109e7cb14) */
/* WARNING: Removing unreachable block (ram,0x000109e7cb24) */
/* WARNING: Removing unreachable block (ram,0x000109e7cc04) */
/* WARNING: Removing unreachable block (ram,0x000109e7cc14) */
/* WARNING: Removing unreachable block (ram,0x000109e7c794) */
/* WARNING: Removing unreachable block (ram,0x000109e7c7c0) */
/* WARNING: Removing unreachable block (ram,0x000109e7c7d0) */
/* WARNING: Removing unreachable block (ram,0x000109e7c870) */
/* WARNING: Removing unreachable block (ram,0x000109e7c880) */
/* WARNING: Removing unreachable block (ram,0x000109e7c95c) */
/* WARNING: Removing unreachable block (ram,0x000109e7c96c) */
/* WARNING: Removing unreachable block (ram,0x000109e7c764) */
/* WARNING: Removing unreachable block (ram,0x000109e7eb58) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebb8) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebb0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebbc) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebdc) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebc4) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebd4) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebe0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ec20) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebfc) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109e7c484(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined1 auVar13 [13];
  undefined1 auVar14 [16];
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar12 = 0;
  uVar11 = (undefined4)param_3;
  auVar14._4_4_ = uVar11;
  auVar14._0_4_ = uVar11;
  auVar14._8_4_ = uVar11;
  auVar14._12_4_ = uVar11;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar14 = NEON_ushl(auVar14,_UNK_10e061c50,4);
  auVar13._0_8_ = CONCAT35(0,CONCAT14((char)(param_3 >> 3),(uint)((byte)param_3 & 7)) & 0x7ffffffff)
  ;
  auVar13[8] = auVar14[0] & 7;
  auVar13._9_3_ = 0;
  auVar13[0xc] = auVar14[4] & 7;
  uStack_b8 = (ulong)auVar13._8_5_;
  uStack_c0 = auVar13._0_8_;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = param_2;
  bVar1 = 1;
  do {
    uVar2 = *(uint *)((long)&uStack_c0 + uVar12 * 4);
    bVar1 = uVar12 == uVar2 & bVar1;
    *(char *)((long)&uStack_60 + uVar12) = (char)uVar2;
    uVar12 = uVar12 + 1;
  } while ((param_4 & 0xffffffff) != uVar12);
  puVar6 = param_1;
  lVar10 = param_2;
  if (!(bool)((uint)param_4 == (uint)*(byte *)(param_2 + 0x1c) & bVar1)) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = param_2;
    uStack_a0 = 0;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    if ((uint)param_4 == (uint)*(byte *)(param_2 + 0x1c)) {
      uVar12 = 0;
      bVar4 = false;
      do {
        bVar4 = (bool)(uVar12 != *(byte *)((long)&uStack_90 + uVar12) | bVar4);
        uVar12 = uVar12 + 1;
      } while ((param_4 & 0xffffffff) != uVar12);
      lVar10 = lStack_68;
      if (!bVar4) goto LAB_109e7c604;
    }
    uVar12 = param_1[3];
    FUN_109ecaef8(uVar12,0x154);
    lVar10 = uVar12 + 0x30;
    param_4 = (ulong)*(byte *)(param_2 + 0x1d);
    FUN_109ecb048();
    uVar5 = *(ushort *)(uVar12 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
    *(ushort *)(uVar12 + 0x2c) = uVar5;
    *(ushort *)(uVar12 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
    *(undefined8 *)(uVar12 + 0x58) = uStack_78;
    *(undefined8 *)(uVar12 + 0x50) = uStack_80;
    *(long *)(uVar12 + 0x68) = lStack_68;
    *(undefined8 *)(uVar12 + 0x60) = uStack_70;
    *(undefined8 *)(uVar12 + 0x78) = uStack_58;
    *(undefined8 *)(uVar12 + 0x70) = uStack_60;
    puVar6 = (undefined8 *)*param_1;
    param_2 = param_1[1];
    param_3 = uVar12;
    FUN_109ecb4f0();
    *param_1 = 3;
    param_1[1] = uVar12;
  }
LAB_109e7c604:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar10;
  }
  ___stack_chk_fail();
  puVar9 = puVar6;
  FUN_109e7eed0();
  puVar7 = puVar6;
  FUN_109e7ef68(puVar6,param_2,0);
  puVar8 = puVar6;
  FUN_109ece6c4(puVar6,puVar7);
  func_0x000109e7ed6c(puVar6,puVar9,param_4,0xffffffff);
  FUN_109ece73c(puVar6,puVar8);
  FUN_109e7eed0(puVar6,&UNK_10f610118,&DAT_10e05dca8);
  FUN_109e7eed0(puVar6,&UNK_10f610128,&DAT_10e05dc38);
  FUN_109e7eed0(puVar6,&UNK_10f610136,&DAT_10e05dca8);
  FUN_109e7eed0(puVar6,&UNK_10f610146,&DAT_10e05dc38);
  puVar9 = *(undefined8 **)puVar6[3];
  FUN_109f6600c(puVar9,0xa0,8);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
  }
  *(undefined4 *)(puVar9 + 3) = 1;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  *(undefined4 *)(puVar9 + 5) = 0;
  *(uint *)((long)puVar9 + 0x2c) = *(uint *)(param_3 + 0x20) & 0x1fffff;
  puVar9[6] = *(undefined8 *)(param_3 + 0x10);
  puVar9[7] = param_3;
  if (*(char *)(puVar6[3] + 0x61) == '\x0e') {
    uVar11 = *(undefined4 *)(puVar6[3] + 0x160);
  }
  else {
    uVar11 = 0x20;
  }
  FUN_109ecb048(puVar9,puVar9 + 0x10,1,uVar11);
  FUN_109ecb4f0(*puVar6,puVar6[1],puVar9);
  *puVar6 = 3;
  puVar6[1] = puVar9;
  uVar3 = *(undefined1 *)(puVar9[6] + 0xd);
  lVar10 = puVar6[3];
  FUN_109ecb0a8(lVar10,0x112);
  *(undefined1 *)(lVar10 + 0x50) = uVar3;
  FUN_109ecb048();
  *(undefined8 *)(lVar10 + 0x80) = 0;
  *(undefined8 *)(lVar10 + 0x88) = 0;
  *(undefined8 *)(lVar10 + 0x90) = 0;
  *(undefined8 **)(lVar10 + 0x98) = puVar9 + 0x10;
  *(undefined4 *)
   (lVar10 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar10 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*puVar6,puVar6[1],lVar10);
  *puVar6 = 3;
  puVar6[1] = lVar10;
  return lVar10 + 0x30;
}



/* Entry: 109e7c63c; end: 109e7ec23;  */

/* WARNING: Possible PIC construction at 0x000109e7c760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7c790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7ca34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7ccd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7e980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7e9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7e9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7ea0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7eb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7eb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e7eb24) */
/* WARNING: Removing unreachable block (ram,0x000109e7ea10) */
/* WARNING: Removing unreachable block (ram,0x000109e7ea50) */
/* WARNING: Removing unreachable block (ram,0x000109e7eaa8) */
/* WARNING: Removing unreachable block (ram,0x000109e7eab4) */
/* WARNING: Removing unreachable block (ram,0x000109e7eac8) */
/* WARNING: Removing unreachable block (ram,0x000109e7ead0) */
/* WARNING: Removing unreachable block (ram,0x000109e7eae0) */
/* WARNING: Removing unreachable block (ram,0x000109e7eaf0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ea48) */
/* WARNING: Removing unreachable block (ram,0x000109e7eb04) */
/* WARNING: Removing unreachable block (ram,0x000109e7e9d8) */
/* WARNING: Removing unreachable block (ram,0x000109e7e9a4) */
/* WARNING: Removing unreachable block (ram,0x000109e7e984) */
/* WARNING: Removing unreachable block (ram,0x000109e7ccd4) */
/* WARNING: Removing unreachable block (ram,0x000109e7ccec) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd04) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd38) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd54) */
/* WARNING: Removing unreachable block (ram,0x000109e7db20) */
/* WARNING: Removing unreachable block (ram,0x000109e7db30) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd8c) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd68) */
/* WARNING: Removing unreachable block (ram,0x000109e7cda0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e000) */
/* WARNING: Removing unreachable block (ram,0x000109e7e04c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e05c) */
/* WARNING: Removing unreachable block (ram,0x000109e7cda8) */
/* WARNING: Removing unreachable block (ram,0x000109e7e108) */
/* WARNING: Removing unreachable block (ram,0x000109e7e150) */
/* WARNING: Removing unreachable block (ram,0x000109e7e160) */
/* WARNING: Removing unreachable block (ram,0x000109e7e210) */
/* WARNING: Removing unreachable block (ram,0x000109e7e220) */
/* WARNING: Removing unreachable block (ram,0x000109e7e2bc) */
/* WARNING: Removing unreachable block (ram,0x000109e7e2cc) */
/* WARNING: Removing unreachable block (ram,0x000109e7e37c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e38c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e464) */
/* WARNING: Removing unreachable block (ram,0x000109e7e474) */
/* WARNING: Removing unreachable block (ram,0x000109e7e510) */
/* WARNING: Removing unreachable block (ram,0x000109e7e520) */
/* WARNING: Removing unreachable block (ram,0x000109e7e5f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e600) */
/* WARNING: Removing unreachable block (ram,0x000109e7e69c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e6ac) */
/* WARNING: Removing unreachable block (ram,0x000109e7d258) */
/* WARNING: Removing unreachable block (ram,0x000109e7d2a0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d2b0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d360) */
/* WARNING: Removing unreachable block (ram,0x000109e7d370) */
/* WARNING: Removing unreachable block (ram,0x000109e7d3f8) */
/* WARNING: Removing unreachable block (ram,0x000109e7d408) */
/* WARNING: Removing unreachable block (ram,0x000109e7d48c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d49c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d538) */
/* WARNING: Removing unreachable block (ram,0x000109e7d548) */
/* WARNING: Removing unreachable block (ram,0x000109e7d620) */
/* WARNING: Removing unreachable block (ram,0x000109e7d630) */
/* WARNING: Removing unreachable block (ram,0x000109e7db38) */
/* WARNING: Removing unreachable block (ram,0x000109e7db80) */
/* WARNING: Removing unreachable block (ram,0x000109e7db90) */
/* WARNING: Removing unreachable block (ram,0x000109e7dc2c) */
/* WARNING: Removing unreachable block (ram,0x000109e7dc3c) */
/* WARNING: Removing unreachable block (ram,0x000109e7dcbc) */
/* WARNING: Removing unreachable block (ram,0x000109e7dccc) */
/* WARNING: Removing unreachable block (ram,0x000109e7dd64) */
/* WARNING: Removing unreachable block (ram,0x000109e7dd74) */
/* WARNING: Removing unreachable block (ram,0x000109e7ddf8) */
/* WARNING: Removing unreachable block (ram,0x000109e7de08) */
/* WARNING: Removing unreachable block (ram,0x000109e7de90) */
/* WARNING: Removing unreachable block (ram,0x000109e7dea0) */
/* WARNING: Removing unreachable block (ram,0x000109e7df24) */
/* WARNING: Removing unreachable block (ram,0x000109e7df34) */
/* WARNING: Removing unreachable block (ram,0x000109e7d71c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d760) */
/* WARNING: Removing unreachable block (ram,0x000109e7d770) */
/* WARNING: Removing unreachable block (ram,0x000109e7d808) */
/* WARNING: Removing unreachable block (ram,0x000109e7d818) */
/* WARNING: Removing unreachable block (ram,0x000109e7d89c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d8ac) */
/* WARNING: Removing unreachable block (ram,0x000109e7d948) */
/* WARNING: Removing unreachable block (ram,0x000109e7d958) */
/* WARNING: Removing unreachable block (ram,0x000109e7d9e0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d9f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7da74) */
/* WARNING: Removing unreachable block (ram,0x000109e7da84) */
/* WARNING: Removing unreachable block (ram,0x000109e7dfe0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e72c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e734) */
/* WARNING: Removing unreachable block (ram,0x000109e7e744) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd80) */
/* WARNING: Removing unreachable block (ram,0x000109e7d244) */
/* WARNING: Removing unreachable block (ram,0x000109e7cdd0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ce30) */
/* WARNING: Removing unreachable block (ram,0x000109e7ce40) */
/* WARNING: Removing unreachable block (ram,0x000109e7cedc) */
/* WARNING: Removing unreachable block (ram,0x000109e7ceec) */
/* WARNING: Removing unreachable block (ram,0x000109e7cf74) */
/* WARNING: Removing unreachable block (ram,0x000109e7cf84) */
/* WARNING: Removing unreachable block (ram,0x000109e7d020) */
/* WARNING: Removing unreachable block (ram,0x000109e7d030) */
/* WARNING: Removing unreachable block (ram,0x000109e7d0e0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d0f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7d1a4) */
/* WARNING: Removing unreachable block (ram,0x000109e7d1b4) */
/* WARNING: Removing unreachable block (ram,0x000109e7d240) */
/* WARNING: Removing unreachable block (ram,0x000109e7d6ac) */
/* WARNING: Removing unreachable block (ram,0x000109e7cd48) */
/* WARNING: Removing unreachable block (ram,0x000109e7d24c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d70c) */
/* WARNING: Removing unreachable block (ram,0x000109e7d710) */
/* WARNING: Removing unreachable block (ram,0x000109e7d718) */
/* WARNING: Removing unreachable block (ram,0x000109e7e74c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e75c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e77c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e798) */
/* WARNING: Removing unreachable block (ram,0x000109e7e790) */
/* WARNING: Removing unreachable block (ram,0x000109e7e79c) */
/* WARNING: Removing unreachable block (ram,0x000109e7e840) */
/* WARNING: Removing unreachable block (ram,0x000109e7e850) */
/* WARNING: Removing unreachable block (ram,0x000109e7e8f0) */
/* WARNING: Removing unreachable block (ram,0x000109e7e900) */
/* WARNING: Removing unreachable block (ram,0x000109e7ca38) */
/* WARNING: Removing unreachable block (ram,0x000109e7ca64) */
/* WARNING: Removing unreachable block (ram,0x000109e7ca74) */
/* WARNING: Removing unreachable block (ram,0x000109e7cb14) */
/* WARNING: Removing unreachable block (ram,0x000109e7cb24) */
/* WARNING: Removing unreachable block (ram,0x000109e7cc04) */
/* WARNING: Removing unreachable block (ram,0x000109e7cc14) */
/* WARNING: Removing unreachable block (ram,0x000109e7c794) */
/* WARNING: Removing unreachable block (ram,0x000109e7c7c0) */
/* WARNING: Removing unreachable block (ram,0x000109e7c7d0) */
/* WARNING: Removing unreachable block (ram,0x000109e7c870) */
/* WARNING: Removing unreachable block (ram,0x000109e7c880) */
/* WARNING: Removing unreachable block (ram,0x000109e7c95c) */
/* WARNING: Removing unreachable block (ram,0x000109e7c96c) */
/* WARNING: Removing unreachable block (ram,0x000109e7c764) */
/* WARNING: Removing unreachable block (ram,0x000109e7eb58) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebb8) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebb0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebbc) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebdc) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebc4) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebd4) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebe0) */
/* WARNING: Removing unreachable block (ram,0x000109e7ec20) */
/* WARNING: Removing unreachable block (ram,0x000109e7ebfc) */
/* WARNING: Recovered jumptable eliminated as dead code */

long FUN_109e7c63c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar4 = param_1;
  FUN_109e7eed0(param_1,&UNK_10f610109,&DAT_10e05dce0);
  puVar2 = param_1;
  FUN_109e7ef68(param_1,param_2,0);
  puVar3 = param_1;
  FUN_109ece6c4(param_1,puVar2);
  func_0x000109e7ed6c(param_1,puVar4,param_4,0xffffffff);
  FUN_109ece73c(param_1,puVar3);
  FUN_109e7eed0(param_1,&UNK_10f610118,&DAT_10e05dca8);
  FUN_109e7eed0(param_1,&UNK_10f610128,&DAT_10e05dc38);
  FUN_109e7eed0(param_1,&UNK_10f610136,&DAT_10e05dca8);
  FUN_109e7eed0(param_1,&UNK_10f610146,&DAT_10e05dc38);
  puVar4 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar4,0xa0,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  *(uint *)((long)puVar4 + 0x2c) = *(uint *)(param_3 + 0x20) & 0x1fffff;
  puVar4[6] = *(undefined8 *)(param_3 + 0x10);
  puVar4[7] = param_3;
  if (*(char *)(param_1[3] + 0x61) == '\x0e') {
    uVar6 = *(undefined4 *)(param_1[3] + 0x160);
  }
  else {
    uVar6 = 0x20;
  }
  FUN_109ecb048(puVar4,puVar4 + 0x10,1,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],puVar4);
  *param_1 = 3;
  param_1[1] = puVar4;
  uVar1 = *(undefined1 *)(puVar4[6] + 0xd);
  lVar5 = param_1[3];
  FUN_109ecb0a8(lVar5,0x112);
  *(undefined1 *)(lVar5 + 0x50) = uVar1;
  FUN_109ecb048();
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 **)(lVar5 + 0x98) = puVar4 + 0x10;
  *(undefined4 *)
   (lVar5 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar5 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar5);
  *param_1 = 3;
  param_1[1] = lVar5;
  return lVar5 + 0x30;
}



/* Entry: 109e7ec24; end: 109e7eecf;  */

long FUN_109e7ec24(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0xa0,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(uint *)((long)puVar2 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
  puVar2[6] = *(undefined8 *)(param_2 + 0x10);
  puVar2[7] = param_2;
  if (*(char *)(param_1[3] + 0x61) == '\x0e') {
    uVar4 = *(undefined4 *)(param_1[3] + 0x160);
  }
  else {
    uVar4 = 0x20;
  }
  FUN_109ecb048(puVar2,puVar2 + 0x10,1,uVar4);
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = puVar2;
  uVar1 = *(undefined1 *)(puVar2[6] + 0xd);
  lVar3 = param_1[3];
  FUN_109ecb0a8(lVar3,0x112);
  *(undefined1 *)(lVar3 + 0x50) = uVar1;
  FUN_109ecb048();
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 **)(lVar3 + 0x98) = puVar2 + 0x10;
  *(undefined4 *)
   (lVar3 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar3 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return lVar3 + 0x30;
}



/* Entry: 109e7eed0; end: 109e7ef67;  */

long * FUN_109e7eed0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_109f658b0(plVar1,0x98);
  if (plVar1 != (long *)0x0) {
    plVar1[0x12] = 0;
    plVar1[0xf] = 0;
    plVar1[0xe] = 0;
    plVar1[0x11] = 0;
    plVar1[0x10] = 0;
    plVar1[0xb] = 0;
    plVar1[10] = 0;
    plVar1[0xd] = 0;
    plVar1[0xc] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[9] = 0;
    plVar1[8] = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
  }
  plVar1[2] = param_3;
  plVar2 = plVar1;
  FUN_109f65c2c(plVar1,param_2);
  plVar1[3] = (long)plVar2;
  plVar1[4] = plVar1[4] & 0xffffffffffe00000U | 0x40000;
  lVar3 = *(long *)(param_1 + 0x20);
  puVar4 = *(undefined8 **)(lVar3 + 0x70);
  *plVar1 = lVar3 + 0x68;
  plVar1[1] = (long)puVar4;
  *puVar4 = plVar1;
  *(long **)(lVar3 + 0x70) = plVar1;
  return plVar1;
}



/* Entry: 109e7ef68; end: 109e7f02f;  */

long FUN_109e7ef68(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar2 = param_1;
  FUN_109e7ec24();
  bVar5 = *(byte *)((long)puVar2 + 0x1d);
  puVar3 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar3,0x50,8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  *(undefined4 *)(puVar3 + 3) = 5;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar8 = (ulong)param_3;
  if ((bVar5 & 1) != 0) {
    uVar8 = (ulong)(param_3 != 0);
  }
  *puVar3 = 0;
  FUN_109ecb048(puVar3,puVar3 + 5,1,bVar5);
  puVar3[9] = uVar8;
  FUN_109ecb4f0(*param_1,param_1[1],puVar3);
  *param_1 = 3;
  param_1[1] = puVar3;
  lVar4 = param_1[3];
  FUN_109ecaef8(lVar4,0x124);
  if (lVar4 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 **)(lVar4 + 0x68) = puVar2;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 **)(lVar4 + 0x98) = puVar3 + 5;
  lVar13 = (ulong)*(uint *)(lVar4 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar4 + 0x2c) = uVar1;
  *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar5 = (&UNK_110b78541)[lVar13];
  if (bVar5 == 0) {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
    if ((&UNK_110b78540)[lVar13] == 0) {
      bVar5 = 0;
      uVar6 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar13) & 0x79) != 0) {
        uVar6 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar5 = 0;
    plVar9 = (long *)(lVar4 + 0x68);
    pcVar11 = &UNK_110b78548 + lVar13;
    uVar10 = uVar8;
    do {
      if ((*pcVar11 == '\0') && (bVar5 <= *(byte *)(*plVar9 + 0x1c))) {
        bVar5 = *(byte *)(*plVar9 + 0x1c);
      }
      plVar9 = plVar9 + 6;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar11 + 1;
    } while (uVar10 != 0);
  }
  else {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
  }
  uVar7 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
  if (uVar7 == 0) {
    if ((int)uVar8 == 0) {
      uVar6 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar9 = (long *)(lVar4 + 0x68);
    puVar12 = (uint *)(&UNK_110b78558 + lVar13);
    uVar10 = uVar8;
    uVar6 = 0;
    do {
      uVar7 = (uint)*(byte *)(*plVar9 + 0x1d);
      if ((*puVar12 & 0x79) != 0 || uVar6 != 0) {
        uVar7 = uVar6;
      }
      uVar10 = uVar10 - 1;
      plVar9 = plVar9 + 6;
      puVar12 = puVar12 + 1;
      uVar6 = uVar7;
    } while (uVar10 != 0);
  }
  else {
    uVar6 = uVar7;
    if ((int)uVar8 == 0) goto LAB_109ece0a8;
  }
  uVar10 = 0;
  lVar13 = lVar4 + 0x70;
  do {
    lVar14 = *(long *)(lVar4 + uVar10 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar13 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar10 = uVar10 + 1;
    lVar13 = lVar13 + 0x30;
  } while (uVar10 != uVar8);
  uVar6 = 0x20;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar4,lVar4 + 0x30,bVar5,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],lVar4);
  *param_1 = 3;
  param_1[1] = lVar4;
  return lVar4 + 0x30;
}



/* Entry: 109e7f030; end: 109e7f0cb;  */

long FUN_109e7f030(undefined8 *param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  FUN_109ecaef8(lVar2,0x154);
  FUN_109ecb048();
  uVar1 = *(ushort *)(lVar2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar2 + 0x2c) = uVar1;
  *(ushort *)(lVar2 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = param_2;
  *(undefined1 *)(lVar2 + 0x70) = 3;
  *(undefined8 *)(lVar2 + 0x71) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109e7f0cc; end: 109e7f2a7;  */

/* WARNING: Possible PIC construction at 0x000109e7f4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7f9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e7f4fc) */
/* WARNING: Removing unreachable block (ram,0x000109e7f52c) */
/* WARNING: Removing unreachable block (ram,0x000109e7f6cc) */
/* WARNING: Removing unreachable block (ram,0x000109e7f6dc) */
/* WARNING: Removing unreachable block (ram,0x000109e7f808) */
/* WARNING: Removing unreachable block (ram,0x000109e7f818) */
/* WARNING: Removing unreachable block (ram,0x000109e7f8d0) */
/* WARNING: Removing unreachable block (ram,0x000109e7f8e0) */
/* WARNING: Removing unreachable block (ram,0x000109e7f9a8) */

ulong * FUN_109e7f0cc(ulong *param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint auStack_f0 [22];
  ulong *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((long)param_2 + 0x1c);
  puVar4 = param_1;
  puVar5 = param_2;
  if (bVar1 != 3) {
    uVar14 = 0;
    uVar15 = 0;
    auStack_f0[10] = 0;
    auStack_f0[0xb] = 0;
    auStack_f0[8] = 0;
    auStack_f0[9] = 0;
    auStack_f0[0xe] = 0;
    auStack_f0[0xf] = 0;
    auStack_f0[0xc] = 0;
    auStack_f0[0xd] = 0;
    auStack_f0[2] = 0;
    auStack_f0[3] = 0;
    auStack_f0[0] = 0;
    auStack_f0[1] = 0;
    auStack_f0[6] = 0;
    auStack_f0[7] = 0;
    auStack_f0[4] = 0;
    auStack_f0[5] = 0;
    do {
      if (uVar14 < 3) {
        auStack_f0[uVar15] = uVar14;
        uVar15 = (ulong)((int)uVar15 + 1);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x10);
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    puStack_68 = param_2;
    uVar14 = (uint)uVar15;
    if (uVar14 == 0) {
      bVar3 = true;
    }
    else {
      uVar13 = 0;
      uVar12 = uVar14;
      if (0xf < uVar14) {
        uVar12 = 0x10;
      }
      bVar3 = true;
      do {
        bVar3 = (bool)(uVar13 == auStack_f0[uVar13] & bVar3);
        *(char *)((long)&uStack_60 + uVar13) = (char)auStack_f0[uVar13];
        uVar13 = uVar13 + 1;
      } while (uVar12 != uVar13);
    }
    if ((uVar14 != bVar1) || (!bVar3)) {
      auStack_f0[0x12] = 0;
      auStack_f0[0x13] = 0;
      auStack_f0[0x10] = 0;
      auStack_f0[0x11] = 0;
      puStack_98 = param_2;
      auStack_f0[0x14] = 0;
      auStack_f0[0x15] = 0;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      if (uVar14 == *(byte *)((long)param_2 + 0x1c)) {
        if (uVar14 == 0) goto LAB_109e7f270;
        uVar13 = 0;
        bVar3 = false;
        do {
          bVar3 = (bool)(uVar13 != *(byte *)((long)&uStack_90 + uVar13) | bVar3);
          uVar13 = uVar13 + 1;
        } while (uVar15 != uVar13);
        if (!bVar3) goto LAB_109e7f270;
      }
      uVar15 = param_1[3];
      FUN_109ecaef8(uVar15,0x154);
      puVar5 = (ulong *)(uVar15 + 0x30);
      param_4 = (ulong)*(byte *)((long)param_2 + 0x1d);
      FUN_109ecb048();
      uVar2 = *(ushort *)(uVar15 + 0x2c) & 0xfffe | (ushort)(byte)param_1[2];
      *(ushort *)(uVar15 + 0x2c) = uVar2;
      *(ushort *)(uVar15 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007
      ;
      *(undefined8 *)(uVar15 + 0x58) = uStack_78;
      *(undefined8 *)(uVar15 + 0x50) = uStack_80;
      *(ulong **)(uVar15 + 0x68) = puStack_68;
      *(undefined8 *)(uVar15 + 0x60) = uStack_70;
      *(undefined8 *)(uVar15 + 0x78) = uStack_58;
      *(undefined8 *)(uVar15 + 0x70) = uStack_60;
      puVar4 = (ulong *)*param_1;
      param_2 = (ulong *)param_1[1];
      FUN_109ecb4f0(puVar4,param_2,uVar15);
      *param_1 = 3;
      param_1[1] = uVar15;
    }
  }
LAB_109e7f270:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar5 = puVar4;
    FUN_109e7ec24();
    puVar6 = puVar4;
    FUN_109e7ec24(puVar4,param_4);
    puVar7 = puVar4;
    FUN_109e7eed0(puVar4,&UNK_10f610184,&DAT_10e05dc38);
    puVar8 = puVar4;
    FUN_109e7f9d0(puVar4,puVar5);
    func_0x000109e7ed6c(puVar4,puVar7,puVar8,0xffffffff);
    puVar8 = puVar4;
    FUN_109e7ec24(puVar4,puVar7);
    puVar9 = *(undefined8 **)puVar4[3];
    FUN_109f6600c(puVar9,0x50,8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    *(undefined4 *)(puVar9 + 3) = 5;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    FUN_109ecb048(puVar9,puVar9 + 5,1,0x20);
    puVar9[9] = 0;
    FUN_109ecb4f0(*puVar4,puVar4[1],puVar9);
    *puVar4 = 3;
    puVar4[1] = (ulong)puVar9;
    puVar7 = puVar4;
    FUN_109ece1b0(puVar4,0xdb,puVar9 + 5,puVar8);
    puVar11 = puVar4;
    FUN_109ece6c4(puVar4,puVar7);
    puVar7 = puVar4;
    FUN_109e7f9d0(puVar4,puVar6);
    puVar6 = puVar4;
    func_0x000109e7fa1c(puVar4,puVar5);
    puVar10 = puVar4;
    FUN_109ece1b0(puVar4,0x107,puVar5,puVar6);
    puVar5 = puVar4;
    FUN_109ece1b0(puVar4,0xe8,puVar10,puVar7);
    puVar6 = puVar4;
    FUN_109ece1b0(puVar4,0xb1,puVar5,puVar8);
    func_0x000109e7ed6c(puVar4,param_2,puVar6,0xffffffff);
    FUN_109ece73c(puVar4,puVar11);
    puVar9 = *(undefined8 **)puVar4[3];
    FUN_109f6600c(puVar9,0x60,8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
    }
    *(undefined4 *)(puVar9 + 3) = 5;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    FUN_109ecb048(puVar9,puVar9 + 5,3,0x20);
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    FUN_109ecb4f0(*puVar4,puVar4[1],puVar9);
    *puVar4 = 3;
    puVar4[1] = (ulong)puVar9;
    func_0x000109e7ed6c(puVar4,param_2,puVar9 + 5,0xffffffff);
    if (puVar11 == (ulong *)0x0) {
      uVar15 = puVar4[1];
      if ((*puVar4 & 0xfffffffe) == 2) {
        uVar15 = *(ulong *)(uVar15 + 0x10);
      }
      puVar11 = *(ulong **)(uVar15 + 0x18);
    }
    if ((int)puVar11[2] == 0) {
      uVar15 = 1;
      puVar5 = puVar11;
    }
    else {
      uVar15 = 0;
      puVar5 = (ulong *)0x0;
      if (*(ulong *)*puVar11 != 0) {
        puVar5 = (ulong *)*puVar11;
      }
    }
    *puVar4 = uVar15;
    puVar4[1] = (ulong)puVar5;
    return puVar4;
  }
  return puVar5;
}



/* Entry: 109e7f2a8; end: 109e7f9cf;  */

/* WARNING: Possible PIC construction at 0x000109e7f4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e7f9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e7f4fc) */
/* WARNING: Removing unreachable block (ram,0x000109e7f52c) */
/* WARNING: Removing unreachable block (ram,0x000109e7f6cc) */
/* WARNING: Removing unreachable block (ram,0x000109e7f6dc) */
/* WARNING: Removing unreachable block (ram,0x000109e7f808) */
/* WARNING: Removing unreachable block (ram,0x000109e7f818) */
/* WARNING: Removing unreachable block (ram,0x000109e7f8d0) */
/* WARNING: Removing unreachable block (ram,0x000109e7f8e0) */
/* WARNING: Removing unreachable block (ram,0x000109e7f9a8) */

void FUN_109e7f2a8(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  
  puVar1 = param_1;
  FUN_109e7ec24(param_1,param_3);
  puVar2 = param_1;
  FUN_109e7ec24(param_1,param_4);
  puVar3 = param_1;
  FUN_109e7eed0(param_1,&UNK_10f610184,&DAT_10e05dc38);
  puVar4 = param_1;
  FUN_109e7f9d0(param_1,puVar1);
  func_0x000109e7ed6c(param_1,puVar3,puVar4,0xffffffff);
  puVar4 = param_1;
  FUN_109e7ec24(param_1,puVar3);
  puVar5 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar5,0x50,8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  *(undefined4 *)(puVar5 + 3) = 5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_109ecb048(puVar5,puVar5 + 5,1,0x20);
  puVar5[9] = 0;
  FUN_109ecb4f0(*param_1,param_1[1],puVar5);
  *param_1 = 3;
  param_1[1] = (ulong)puVar5;
  puVar3 = param_1;
  FUN_109ece1b0(param_1,0xdb,puVar5 + 5,puVar4);
  puVar7 = param_1;
  FUN_109ece6c4(param_1,puVar3);
  puVar3 = param_1;
  FUN_109e7f9d0(param_1,puVar2);
  puVar2 = param_1;
  func_0x000109e7fa1c(param_1,puVar1);
  puVar6 = param_1;
  FUN_109ece1b0(param_1,0x107,puVar1,puVar2);
  puVar1 = param_1;
  FUN_109ece1b0(param_1,0xe8,puVar6,puVar3);
  puVar2 = param_1;
  FUN_109ece1b0(param_1,0xb1,puVar1,puVar4);
  func_0x000109e7ed6c(param_1,param_2,puVar2,0xffffffff);
  FUN_109ece73c(param_1,puVar7);
  puVar5 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar5,0x60,8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
  }
  *(undefined4 *)(puVar5 + 3) = 5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_109ecb048(puVar5,puVar5 + 5,3,0x20);
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  FUN_109ecb4f0(*param_1,param_1[1],puVar5);
  *param_1 = 3;
  param_1[1] = (ulong)puVar5;
  func_0x000109e7ed6c(param_1,param_2,puVar5 + 5,0xffffffff);
  if (puVar7 == (ulong *)0x0) {
    uVar8 = param_1[1];
    if ((*param_1 & 0xfffffffe) == 2) {
      uVar8 = *(ulong *)(uVar8 + 0x10);
    }
    puVar7 = *(ulong **)(uVar8 + 0x18);
  }
  if ((int)puVar7[2] == 0) {
    uVar8 = 1;
    puVar1 = puVar7;
  }
  else {
    uVar8 = 0;
    puVar1 = (ulong *)0x0;
    if (*(ulong *)*puVar7 != 0) {
      puVar1 = (ulong *)*puVar7;
    }
  }
  *param_1 = uVar8;
  param_1[1] = (ulong)puVar1;
  return;
}



/* Entry: 109e7f9d0; end: 109e7fce3;  */

long FUN_109e7f9d0(undefined8 *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar2 = param_1;
  func_0x000109e7fa8c();
  puVar3 = param_1;
  func_0x000109e7fa1c(param_1,param_2);
  lVar4 = param_1[3];
  FUN_109ecaef8(lVar4,0x107);
  if (lVar4 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 **)(lVar4 + 0x68) = puVar2;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 **)(lVar4 + 0x98) = puVar3;
  lVar13 = (ulong)*(uint *)(lVar4 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar4 + 0x2c) = uVar1;
  *(ushort *)(lVar4 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar5 = (&UNK_110b78541)[lVar13];
  if (bVar5 == 0) {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
    if ((&UNK_110b78540)[lVar13] == 0) {
      bVar5 = 0;
      uVar6 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar13) & 0x79) != 0) {
        uVar6 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar5 = 0;
    plVar9 = (long *)(lVar4 + 0x68);
    pcVar11 = &UNK_110b78548 + lVar13;
    uVar10 = uVar8;
    do {
      if ((*pcVar11 == '\0') && (bVar5 <= *(byte *)(*plVar9 + 0x1c))) {
        bVar5 = *(byte *)(*plVar9 + 0x1c);
      }
      plVar9 = plVar9 + 6;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar11 + 1;
    } while (uVar10 != 0);
  }
  else {
    uVar8 = (ulong)(byte)(&UNK_110b78540)[lVar13];
  }
  uVar7 = *(uint *)(&UNK_110b78544 + lVar13) & 0x79;
  if (uVar7 == 0) {
    if ((int)uVar8 == 0) {
      uVar6 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar9 = (long *)(lVar4 + 0x68);
    puVar12 = (uint *)(&UNK_110b78558 + lVar13);
    uVar10 = uVar8;
    uVar6 = 0;
    do {
      uVar7 = (uint)*(byte *)(*plVar9 + 0x1d);
      if ((*puVar12 & 0x79) != 0 || uVar6 != 0) {
        uVar7 = uVar6;
      }
      uVar10 = uVar10 - 1;
      plVar9 = plVar9 + 6;
      puVar12 = puVar12 + 1;
      uVar6 = uVar7;
    } while (uVar10 != 0);
  }
  else {
    uVar6 = uVar7;
    if ((int)uVar8 == 0) goto LAB_109ece0a8;
  }
  uVar10 = 0;
  lVar13 = lVar4 + 0x70;
  do {
    lVar14 = *(long *)(lVar4 + uVar10 * 0x30 + 0x68);
    uVar15 = (ulong)*(byte *)(lVar14 + 0x1c);
    if (uVar15 < 0x10) {
      do {
        *(char *)(lVar13 + uVar15) = *(char *)(lVar14 + 0x1c) + -1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x10);
    }
    uVar10 = uVar10 + 1;
    lVar13 = lVar13 + 0x30;
  } while (uVar10 != uVar8);
  uVar6 = 0x20;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar4,lVar4 + 0x30,bVar5,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],lVar4);
  *param_1 = 3;
  param_1[1] = lVar4;
  return lVar4 + 0x30;
}



/* Entry: 109e7fce4; end: 109e7fdef;  */

long FUN_109e7fce4(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0x60,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 5;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_109ecb048(puVar2,puVar2 + 5,3,0x20);
  puVar2[9] = 0x3e99999a;
  puVar2[10] = 0x3f170a3d;
  puVar2[0xb] = 0x3de147ae;
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = puVar2;
  lVar3 = param_1[3];
  FUN_109ecaef8(lVar3,*(undefined4 *)
                       (&UNK_10e061cd8 + ((ulong)(*(byte *)(param_2 + 0x1c) - 1) & 0xff) * 4));
  if (lVar3 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(long *)(lVar3 + 0x68) = param_2;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 **)(lVar3 + 0x98) = puVar2 + 5;
  lVar12 = (ulong)*(uint *)(lVar3 + 0x28) * 0x68;
  uVar1 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
  *(ushort *)(lVar3 + 0x2c) = uVar1;
  *(ushort *)(lVar3 + 0x2c) = (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar1 & 0xf007;
  bVar4 = (&UNK_110b78541)[lVar12];
  if (bVar4 == 0) {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
    if ((&UNK_110b78540)[lVar12] == 0) {
      bVar4 = 0;
      uVar5 = 0x20;
      if ((*(uint *)(&UNK_110b78544 + lVar12) & 0x79) != 0) {
        uVar5 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
      }
      goto LAB_109ece0a8;
    }
    bVar4 = 0;
    plVar8 = (long *)(lVar3 + 0x68);
    pcVar10 = &UNK_110b78548 + lVar12;
    uVar9 = uVar7;
    do {
      if ((*pcVar10 == '\0') && (bVar4 <= *(byte *)(*plVar8 + 0x1c))) {
        bVar4 = *(byte *)(*plVar8 + 0x1c);
      }
      plVar8 = plVar8 + 6;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar10 + 1;
    } while (uVar9 != 0);
  }
  else {
    uVar7 = (ulong)(byte)(&UNK_110b78540)[lVar12];
  }
  uVar6 = *(uint *)(&UNK_110b78544 + lVar12) & 0x79;
  if (uVar6 == 0) {
    if ((int)uVar7 == 0) {
      uVar5 = 0x20;
      goto LAB_109ece0a8;
    }
    plVar8 = (long *)(lVar3 + 0x68);
    puVar11 = (uint *)(&UNK_110b78558 + lVar12);
    uVar9 = uVar7;
    uVar5 = 0;
    do {
      uVar6 = (uint)*(byte *)(*plVar8 + 0x1d);
      if ((*puVar11 & 0x79) != 0 || uVar5 != 0) {
        uVar6 = uVar5;
      }
      uVar9 = uVar9 - 1;
      plVar8 = plVar8 + 6;
      puVar11 = puVar11 + 1;
      uVar5 = uVar6;
    } while (uVar9 != 0);
  }
  else {
    uVar5 = uVar6;
    if ((int)uVar7 == 0) goto LAB_109ece0a8;
  }
  uVar9 = 0;
  lVar12 = lVar3 + 0x70;
  do {
    lVar13 = *(long *)(lVar3 + uVar9 * 0x30 + 0x68);
    uVar14 = (ulong)*(byte *)(lVar13 + 0x1c);
    if (uVar14 < 0x10) {
      do {
        *(char *)(lVar12 + uVar14) = *(char *)(lVar13 + 0x1c) + -1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x10);
    }
    uVar9 = uVar9 + 1;
    lVar12 = lVar12 + 0x30;
  } while (uVar9 != uVar7);
  uVar5 = 0x20;
  if (uVar6 != 0) {
    uVar5 = uVar6;
  }
LAB_109ece0a8:
  FUN_109ecb048(lVar3,lVar3 + 0x30,bVar4,uVar5);
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return lVar3 + 0x30;
}



/* Entry: 109e7fdf0; end: 109e804bb;  */

void FUN_109e7fdf0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar12 = *(long **)param_1[0x2f];
  if (plVar12 != (long *)0x0) {
    plVar14 = (long *)param_1[0x2f];
    plVar10 = (long *)0x0;
    do {
      plVar1 = plVar14;
      if ((char)plVar14[7] == '\0') {
        plVar1 = plVar10;
      }
      plVar13 = (long *)*plVar12;
      plVar14 = plVar12;
      plVar10 = plVar1;
      plVar12 = plVar13;
    } while (plVar13 != (long *)0x0);
    if (plVar1 != (long *)0x0) {
      lVar15 = plVar1[6];
      goto LAB_109e7fe4c;
    }
  }
  lVar15 = 0;
LAB_109e7fe4c:
  puVar6 = param_1;
  FUN_109f658b0(param_1,0x98);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0x12] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  puVar7 = puVar6;
  FUN_109f65c2c(puVar6,&DAT_10f567465);
  puVar6[2] = &DAT_10e05d7a0;
  puVar6[3] = puVar7;
  puVar6[4] = puVar6[4] & 0xffffffffffe00000 | 0x20000;
  FUN_109eca704(param_1,puVar6);
  plVar12 = (long *)param_1[0x2f];
  plVar14 = *(long **)param_1[0x2f];
  while( true ) {
    if (plVar14 == (long *)0x0) {
      return;
    }
    lVar16 = plVar12[6];
    if (lVar16 != 0) break;
    plVar12 = plVar14;
    plVar14 = (long *)*plVar14;
  }
  do {
    plVar14 = *(long **)(lVar16 + 0x30);
    if ((int)plVar14[2] == 0) {
      uStack_88 = 0;
      plStack_68 = plVar14;
      plStack_80 = plVar14;
      goto LAB_109e7ff2c;
    }
    plVar10 = (long *)plVar14[1];
    plStack_68 = (long *)0x0;
    if (plVar10[1] != 0) {
      plStack_68 = plVar10;
    }
    uStack_88 = 1;
    iVar2 = (int)plVar10[2];
    plStack_80 = plStack_68;
    while (iVar2 != 3) {
LAB_109e7ff2c:
      plStack_68 = (long *)plStack_68[3];
      iVar2 = (int)plStack_68[2];
    }
    plStack_70 = *(long **)(plStack_68[4] + 0x18);
    uStack_78 = 0;
    if (lVar16 == lVar15) {
      puVar7 = (undefined8 *)*plStack_70;
      FUN_109f6600c(puVar7,0xa0,8);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[0x11] = 0;
        puVar7[0x10] = 0;
        puVar7[0x13] = 0;
        puVar7[0x12] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
      }
      *(undefined4 *)(puVar7 + 3) = 1;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 5) = 0;
      *(uint *)((long)puVar7 + 0x2c) = *(uint *)(puVar6 + 4) & 0x1fffff;
      puVar7[6] = puVar6[2];
      puVar7[7] = puVar6;
      if (*(char *)((long)plStack_70 + 0x61) == '\x0e') {
        uVar9 = (undefined4)plStack_70[0x2c];
      }
      else {
        uVar9 = 0x20;
      }
      FUN_109ecb048(puVar7,puVar7 + 0x10,1,uVar9);
      FUN_109ecb4f0(uStack_88,plStack_80,puVar7);
      uStack_88 = 3;
      puVar8 = (undefined8 *)*plStack_70;
      plStack_80 = puVar7;
      FUN_109f6600c(puVar8,0x50,8);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
      }
      *(undefined4 *)(puVar8 + 3) = 5;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_109ecb048(puVar8,puVar8 + 5,1,1);
      puVar8[9] = 0;
      FUN_109ecb4f0(uStack_88,plStack_80,puVar8);
      uStack_88 = 3;
      bVar4 = *(byte *)((long)puVar8 + 0x44);
      plVar10 = plStack_70;
      plStack_80 = puVar8;
      FUN_109ecb0a8(plStack_70,0x26f);
      bVar5 = *(byte *)((long)puVar8 + 0x44);
      *(byte *)(plVar10 + 10) = bVar5;
      plVar10[0x10] = 0;
      plVar10[0x11] = 0;
      plVar10[0x12] = 0;
      plVar10[0x13] = (long)(puVar7 + 0x10);
      plVar10[0x14] = 0;
      plVar10[0x15] = 0;
      plVar10[0x16] = 0;
      plVar10[0x17] = (long)(puVar8 + 5);
      if (bVar4 == 0) {
        uVar11 = 0xffffffff;
        if (bVar5 != 0x20) {
          uVar11 = ~(-1 << (ulong)(bVar5 & 0x1f));
        }
      }
      else {
        uVar11 = ~(-1 << (ulong)(bVar4 & 0x1f));
      }
      uVar3 = *(uint *)(plVar10 + 5);
      *(uint *)((long)plVar10 + (ulong)(byte)(&UNK_110b671aa)[(ulong)uVar3 * 0x68] * 4 + 0x50) =
           uVar11;
      *(undefined4 *)((long)plVar10 + (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar3 * 0x68] * 4 + 0x50)
           = 0;
      FUN_109ecb4f0(uStack_88,plStack_80,plVar10);
      uStack_88 = 3;
      plVar14 = *(long **)(lVar16 + 0x30);
      plStack_80 = plVar10;
    }
    for (; *plVar14 != 0; plVar14 = (long *)*plVar14) {
      func_0x000109e80154(&uStack_88,plVar14,puVar6);
    }
    plVar12 = (long *)*plVar12;
    plVar14 = (long *)*plVar12;
    while( true ) {
      if (plVar14 == (long *)0x0) {
        return;
      }
      lVar16 = plVar12[6];
      if (lVar16 != 0) break;
      plVar12 = plVar14;
      plVar14 = (long *)*plVar14;
    }
  } while( true );
}



/* Entry: 109e804bc; end: 109e8065f;  */

void FUN_109e804bc(ulong *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined4 uVar6;
  
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0xa0,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  *(undefined4 *)(puVar2 + 3) = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(uint *)((long)puVar2 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
  puVar2[6] = *(undefined8 *)(param_2 + 0x10);
  puVar2[7] = param_2;
  if (*(char *)(param_1[3] + 0x61) == '\x0e') {
    uVar6 = *(undefined4 *)(param_1[3] + 0x160);
  }
  else {
    uVar6 = 0x20;
  }
  FUN_109ecb048(puVar2,puVar2 + 0x10,1,uVar6);
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = (ulong)puVar2;
  uVar1 = *(undefined1 *)(puVar2[6] + 0xd);
  uVar3 = param_1[3];
  FUN_109ecb0a8(uVar3,0x112);
  *(undefined1 *)(uVar3 + 0x50) = uVar1;
  FUN_109ecb048();
  *(undefined8 *)(uVar3 + 0x80) = 0;
  *(undefined8 *)(uVar3 + 0x88) = 0;
  *(undefined8 *)(uVar3 + 0x90) = 0;
  *(undefined8 **)(uVar3 + 0x98) = puVar2 + 0x10;
  *(undefined4 *)
   (uVar3 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(uVar3 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],uVar3);
  *param_1 = 3;
  param_1[1] = uVar3;
  puVar4 = param_1;
  FUN_109ece6c4(param_1,uVar3 + 0x30);
  puVar2 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar2,0x60,8);
  *(undefined4 *)(puVar2 + 3) = 6;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 5) = 2;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[9] = 0;
  FUN_109ecb4f0(*param_1,param_1[1],puVar2);
  *param_1 = 3;
  param_1[1] = (ulong)puVar2;
  if (puVar4 == (ulong *)0x0) {
    uVar3 = param_1[1];
    if ((*param_1 & 0xfffffffe) == 2) {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    puVar4 = *(ulong **)(uVar3 + 0x18);
  }
  if ((int)puVar4[2] == 0) {
    uVar3 = 1;
    puVar5 = puVar4;
  }
  else {
    uVar3 = 0;
    puVar5 = (ulong *)0x0;
    if (*(ulong *)*puVar4 != 0) {
      puVar5 = (ulong *)*puVar4;
    }
  }
  *param_1 = uVar3;
  param_1[1] = (ulong)puVar5;
  return;
}



/* Entry: 109e80660; end: 109e80a47;  */

uint FUN_109e80660(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  
  plVar24 = *(long **)(param_1 + 0x178);
  plVar13 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar13 == (long *)0x0) {
      return 0;
    }
    lVar21 = plVar24[6];
    if (lVar21 != 0) break;
    plVar24 = plVar13;
    plVar13 = (long *)*plVar13;
  }
  uVar19 = 0;
  do {
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    plStack_70 = *(long **)(*(long *)(lVar21 + 0x20) + 0x18);
    uStack_78 = 0;
    lVar20 = *(long *)(lVar21 + 0x30);
    if (lVar20 == 0) {
LAB_109e809e8:
      uVar15 = 0;
      uVar23 = 0xfffffff7;
    }
    else {
      lVar14 = lVar20;
      lStack_68 = lVar21;
      FUN_109ecc434();
      bVar7 = false;
      do {
        lVar10 = lVar14;
        plVar25 = *(long **)(lVar20 + 0x20);
        plVar13 = (long *)*plVar25;
        if (plVar13 != (long *)0x0) {
          do {
            plVar9 = (long *)0x0;
            plVar22 = plVar25;
            if (*plVar13 != 0) {
              plVar9 = plVar13;
            }
            do {
              plVar25 = plVar9;
              if (((int)plVar22[3] == 4) &&
                 (uVar15 = (int)plVar22[5] - 0x97,
                 uVar15 < 0xf && (1 << (ulong)(uVar15 & 0x1f) & 0x5c47U) != 0)) {
                lVar14 = *(long *)plVar22[0x13];
                lVar20 = lVar14;
                if (*(int *)(lVar14 + 0x18) != 1) {
                  lVar20 = 0;
                }
                iVar3 = *(int *)(lVar14 + 0x28);
                lVar16 = lVar14;
                while (iVar3 != 0) {
                  lVar16 = **(long **)(lVar16 + 0x50);
                  iVar3 = *(int *)(lVar16 + 0x28);
                }
                lVar16 = *(long *)(lVar16 + 0x38);
                uVar17 = *(ulong *)(lVar16 + 0x20) & 0x100001fffff;
                if ((param_2 != 0) && (uVar17 == 0x10)) goto LAB_109e80790;
                uStack_88 = 2;
                plStack_80 = plVar22;
                if (uVar17 == 0x10) {
                  bVar4 = *(byte *)(plStack_70[5] + 0xbb);
                  puVar11 = &uStack_88;
                  FUN_109ef9a50(puVar11,lVar20,FUN_109e80a48);
                  uVar15 = *(uint *)(lVar16 + 0x44);
                  puVar12 = puVar11;
                  if ((bVar4 & 1) == 0) {
                    bVar4 = *(byte *)((long)puVar11 + 0x1d);
                    uVar23 = (uint)bVar4;
                    uVar17 = 0xffffffff;
                    if (uVar23 != 0x40) {
                      uVar17 = (ulong)~(uint)(-1L << ((ulong)bVar4 & 0x3f));
                    }
                    uVar17 = uVar17 & uVar15;
                    if (uVar17 != 0) {
                      uVar15 = (uVar23 & 0xaaaaaaaa) >> 1 | (uVar23 & 0x55555555) << 1;
                      uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
                      uVar18 = LZCOUNT((uVar15 >> 4 | (uVar15 & 0xf0f0f0f) << 4) << 0x18);
                      uVar15 = (uint)uVar18;
                      uVar2 = 0;
                      if (uVar15 != 3) {
                        uVar2 = uVar17;
                      }
                      uVar1 = uVar18;
                      if (uVar15 != 0) {
                        uVar18 = 0;
                        uVar1 = uVar2;
                      }
                      uVar2 = 1;
                      if (uVar15 != 0) {
                        uVar2 = uVar17;
                      }
                      uVar6 = uVar17;
                      uVar8 = uVar17 & 0xffff0000;
                      if (uVar15 < 5) {
                        uVar17 = uVar2;
                        uVar6 = uVar1;
                        uVar8 = uVar18;
                      }
                      plVar13 = (long *)*plStack_70;
                      FUN_109f6600c(plVar13,0x50,8);
                      if (plVar13 != (long *)0x0) {
                        plVar13[7] = 0;
                        plVar13[6] = 0;
                        plVar13[9] = 0;
                        plVar13[8] = 0;
                        plVar13[3] = 0;
                        plVar13[2] = 0;
                        plVar13[5] = 0;
                        plVar13[4] = 0;
                        plVar13[1] = 0;
                        *plVar13 = 0;
                      }
                      *(undefined4 *)(plVar13 + 3) = 5;
                      plVar13[1] = 0;
                      plVar13[2] = 0;
                      *plVar13 = 0;
                      FUN_109ecb048(plVar13,plVar13 + 5,1,(ulong)bVar4);
                      plVar13[9] = uVar6 & 0xff00 | uVar8 | uVar17 & 0xff;
                      FUN_109ecb4f0(uStack_88,plStack_80,plVar13);
                      uStack_88 = 3;
                      puVar12 = &uStack_88;
                      plStack_80 = plVar13;
                      FUN_109ece1b0(puVar12,0x11d,puVar11,plVar13 + 5);
                    }
                    uVar15 = 0;
                  }
                  func_0x000109ecd0dc(plVar22,puVar12,0);
                  *(uint *)((long)plVar22 +
                           (ulong)(byte)(&UNK_110b671ad)[(ulong)*(uint *)(plVar22 + 5) * 0x68] * 4 +
                           0x50) = uVar15;
                }
                else {
                  uVar5 = *(undefined1 *)(*(long *)(lVar14 + 0x30) + 0xd);
                  plVar13 = plStack_70;
                  FUN_109ecb0a8(plStack_70,0x112);
                  *(undefined1 *)(plVar13 + 10) = uVar5;
                  FUN_109ecb048();
                  plVar13[0x10] = 0;
                  plVar13[0x11] = 0;
                  plVar13[0x12] = 0;
                  plVar13[0x13] = lVar20 + 0x80;
                  *(undefined4 *)
                   ((long)plVar13 +
                   (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(plVar13 + 5) * 0x68] * 4 + 0x50) =
                       0;
                  FUN_109ecb4f0(uStack_88,plStack_80,plVar13);
                  uStack_88 = 3;
                  plStack_80 = plVar13;
                  func_0x000109ecd0dc(plVar22,plVar13 + 6,1);
                }
                bVar4 = 1;
              }
              else {
LAB_109e80790:
                bVar4 = 0;
              }
              bVar7 = (bool)(bVar7 | bVar4);
              if (plVar25 == (long *)0x0) goto LAB_109e809c8;
              plVar13 = (long *)*plVar25;
              plVar9 = (long *)0x0;
              plVar22 = plVar25;
            } while (plVar13 == (long *)0x0);
          } while( true );
        }
LAB_109e809c8:
        lVar14 = lVar10;
        FUN_109ecc434();
        lVar20 = lVar10;
      } while (lVar10 != 0);
      if (!bVar7) goto LAB_109e809e8;
      uVar15 = 1;
      uVar23 = 3;
    }
    *(uint *)(lVar21 + 0x84) = *(uint *)(lVar21 + 0x84) & uVar23;
    uVar19 = uVar19 | uVar15;
    plVar24 = (long *)*plVar24;
    plVar13 = (long *)*plVar24;
    while( true ) {
      if (plVar13 == (long *)0x0) {
        return uVar19;
      }
      lVar21 = plVar24[6];
      if (lVar21 != 0) break;
      plVar24 = plVar13;
      plVar13 = (long *)*plVar13;
    }
  } while( true );
}



/* Entry: 109e80a48; end: 109e80a87;  */

void FUN_109e80a48(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x13') {
    FUN_109ec88a0();
    uVar1 = (undefined4)param_1;
  }
  else {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  *param_3 = uVar1;
  return;
}



/* Entry: 109e80a88; end: 109e8117f;  */

void FUN_109e80a88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char cVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  ulong uVar30;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar24 = 0;
  do {
    lVar12 = *(long *)(param_1 + 0xa8 + lVar24 * 8);
    if (lVar12 != 0) {
      FUN_109f46234(*(undefined8 *)(*(long *)(lVar12 + 0x28) + 0x160));
      lVar12 = *(long *)(param_1 + 0xa8 + lVar24 * 8);
      puVar7 = (undefined8 *)0x30;
      _malloc();
      if (puVar7 == (undefined8 *)0x0) {
        puVar26 = (undefined8 *)0x0;
      }
      else {
        puVar7[4] = 0;
        puVar26 = puVar7 + 6;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
      }
      puVar7 = puVar26;
      FUN_109f64c74(puVar26,FUN_109f65518,FUN_109f65668);
      lVar13 = *(long *)(*(long *)(lVar12 + 0x28) + 0x160);
      plVar28 = *(long **)(lVar13 + 8);
      plVar14 = (long *)*plVar28;
      if (plVar14 != (long *)0x0) {
        plVar17 = (long *)0x0;
        if (*plVar14 != 0) {
          plVar17 = plVar14;
        }
        while( true ) {
          plVar14 = plVar17;
          if ((*(byte *)(plVar28 + 4) & 0xc) != 0) {
            for (lVar13 = plVar28[2]; *(char *)(lVar13 + 4) == '\x13';
                lVar13 = *(long *)(lVar13 + 0x30)) {
            }
            if ((lVar13 == plVar28[0x11]) && (*(int *)(lVar13 + 0x10) != 0)) {
              lVar25 = 0;
              uVar30 = 0;
              do {
                uVar22 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + lVar25 + 8);
                puVar8 = puVar26;
                FUN_109e81180(puVar26,plVar28,lVar13,uVar30);
                puVar10 = puVar8;
                (*(code *)puVar7[1])();
                puVar9 = puVar7;
                FUN_109f64fdc(puVar7,puVar10,puVar8);
                if ((puVar9 == (undefined8 *)0x0) || (puVar9[2] == 0)) {
                  lVar27 = *(long *)(lVar13 + 0x30);
                  puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x160);
                  FUN_109f658b0(puVar10,0x98);
                  if (puVar10 != (undefined8 *)0x0) {
                    puVar10[0x12] = 0;
                    puVar10[0xf] = 0;
                    puVar10[0xe] = 0;
                    puVar10[0x11] = 0;
                    puVar10[0x10] = 0;
                    puVar10[0xb] = 0;
                    puVar10[10] = 0;
                    puVar10[0xd] = 0;
                    puVar10[0xc] = 0;
                    puVar10[7] = 0;
                    puVar10[6] = 0;
                    puVar10[9] = 0;
                    puVar10[8] = 0;
                    puVar10[3] = 0;
                    puVar10[2] = 0;
                    puVar10[5] = 0;
                    puVar10[4] = 0;
                    puVar10[1] = 0;
                    *puVar10 = 0;
                  }
                  puVar9 = puVar10;
                  FUN_109f65c2c(puVar10,uVar22);
                  puVar10[3] = puVar9;
                  lVar11 = plVar28[2];
                  if (*(char *)(lVar11 + 4) == '\x13') {
                    FUN_109e81230(lVar11,uVar30);
                  }
                  else {
                    lVar11 = *(long *)(*(long *)(lVar13 + 0x30) + lVar25);
                  }
                  puVar10[2] = lVar11;
                  uVar15 = puVar10[4];
                  uVar3 = plVar28[4] & 0x1fffff;
                  puVar10[4] = uVar15 & 0xffffffffffe00000 | uVar3;
                  lVar27 = lVar27 + lVar25;
                  uVar23 = *(uint *)(lVar27 + 0x10);
                  uVar21 = *(uint *)(lVar27 + 0x14);
                  *(uint *)((long)puVar10 + 0x3c) = uVar23;
                  uVar20 = (ulong)(uVar21 & 3) << 0x24;
                  if (0x7fffffff < uVar21) {
                    uVar20 = 0;
                  }
                  uVar4 = 0x40000000000;
                  if (0x7fffffff < uVar23) {
                    uVar4 = 0;
                  }
                  puVar10[4] = uVar4 | uVar20 | uVar15 & 0xfffffbcfffe00000 | uVar3;
                  uVar23 = *(uint *)(lVar27 + 0x18);
                  *(uint *)(puVar10 + 9) = uVar23;
                  uVar19 = *(ulong *)((long)puVar10 + 0x2c);
                  uVar5 = 0x40;
                  if (0x7fffffff < uVar23) {
                    uVar5 = 0;
                  }
                  *(ulong *)((long)puVar10 + 0x2c) = uVar19 & 0xffffffffffffffbf | uVar5;
                  *(byte *)((long)puVar10 + 0x4c) =
                       *(byte *)((long)puVar10 + 0x4c) & 0xfc | *(byte *)(lVar27 + 0x1c) & 3;
                  uVar2 = uVar19 & 0xf | ((ulong)(*(uint *)(lVar27 + 0x28) >> 0xf) & 1) << 4;
                  *(ulong *)((long)puVar10 + 0x2c) = uVar19 & 0xffffffffffffffa0 | uVar5 | uVar2;
                  uVar1 = (ulong)(*(uint *)(lVar27 + 0x28) & 7) << 0x21;
                  uVar20 = uVar4 | uVar20 | uVar15 & 0xfffffbc000000000;
                  puVar10[4] = uVar20 | uVar15 & 0x1ffe00000 | uVar3 | uVar1;
                  uVar3 = uVar15 & 0x200000 | uVar3 |
                          ((ulong)(*(uint *)(lVar27 + 0x28) >> 3) & 1) << 0x16;
                  puVar10[4] = uVar20 | uVar15 & 0x1ff800000 | uVar1 | uVar3;
                  uVar3 = uVar3 | ((ulong)(*(uint *)(lVar27 + 0x28) >> 4) & 1) << 0x17;
                  puVar10[4] = uVar20 | uVar15 & 0x1ff000000 | uVar1 | uVar3;
                  puVar10[4] = uVar20 | uVar15 & 0x1fe000000 | uVar1 |
                               uVar3 | ((ulong)(*(uint *)(lVar27 + 0x28) >> 7) & 1) << 0x18;
                  uVar3 = (*(ulong *)((long)plVar28 + 0x2c) >> 0x15 & 0x1ff) << 0x15;
                  *(ulong *)((long)puVar10 + 0x2c) =
                       uVar19 & 0xffffffffc0000000 | uVar19 & 0x1fffa0 | uVar5 | uVar2 | uVar3;
                  *(ulong *)((long)puVar10 + 0x2c) =
                       *(ulong *)((long)plVar28 + 0x2c) & 0x6000 |
                       uVar19 & 0xffffffffc0000000 | uVar19 & 0x1f9fa0 | uVar5 | uVar2 | uVar3 |
                       0x200;
                  puVar10[0x11] = plVar28[2];
                  puVar9 = puVar8;
                  (*(code *)puVar7[1])(puVar8);
                  func_0x000109f650c0(puVar7,puVar9,puVar8,puVar10);
                  FUN_109eca704(*(undefined8 *)(*(long *)(lVar12 + 0x28) + 0x160),puVar10);
                }
                uVar30 = uVar30 + 1;
                lVar25 = lVar25 + 0x30;
              } while (uVar30 < *(uint *)(lVar13 + 0x10));
            }
          }
          if (plVar14 == (long *)0x0) break;
          plVar16 = (long *)*plVar14;
          plVar17 = (long *)0x0;
          plVar28 = plVar14;
          if ((plVar16 != (long *)0x0) && (plVar17 = (long *)0x0, *plVar16 != 0)) {
            plVar17 = plVar16;
          }
        }
        lVar13 = *(long *)(*(long *)(lVar12 + 0x28) + 0x160);
      }
      plVar28 = *(long **)(lVar13 + 0x178);
      for (plVar14 = (long *)**(long **)(lVar13 + 0x178); plVar14 != (long *)0x0;
          plVar14 = (long *)*plVar14) {
        lVar13 = plVar28[6];
        if (lVar13 != 0) goto LAB_109e80fd8;
        plVar28 = plVar14;
      }
LAB_109e80de4:
      lVar13 = *(long *)(*(long *)(lVar12 + 0x28) + 0x160);
      plVar28 = *(long **)(lVar13 + 8);
      plVar14 = (long *)*plVar28;
      if (plVar14 != (long *)0x0) {
        do {
          uVar30 = plVar28[4];
          if ((uVar30 & 0xc) != 0) {
            cVar18 = *(char *)(*(long *)(*(long *)(lVar12 + 0x28) + 0x160) + 0x61);
            if ((uVar30 & 0x1fffff) == 4) {
              if (cVar18 == '\x02') {
                uVar23 = *(uint *)((long)plVar28 + 0x3c);
                if ((uVar23 & 0xfffffffe) != 0x1a) goto joined_r0x000109e80f38;
                for (lVar13 = plVar28[2]; (*(uint *)(lVar13 + 4) & 0xff) == 0x13;
                    lVar13 = *(long *)(lVar13 + 0x30)) {
                }
                uVar3 = 0x4000000000;
                if ((*(uint *)(lVar13 + 4) & 0xf0) != 0 || *(char *)(lVar13 + 0xd) != '\x01') {
                  uVar3 = 0;
                }
                uVar30 = uVar3 | uVar30 & 0xffffffbfffe00004;
                plVar28[4] = uVar30;
                cVar18 = *(char *)(*(long *)(*(long *)(lVar12 + 0x28) + 0x160) + 0x61);
              }
              if ('\0' < cVar18) {
                uVar23 = *(uint *)((long)plVar28 + 0x3c);
joined_r0x000109e80f38:
                if (uVar23 - 0x11 < 4) {
                  for (lVar13 = plVar28[2]; (*(uint *)(lVar13 + 4) & 0xff) == 0x13;
                      lVar13 = *(long *)(lVar13 + 0x30)) {
                  }
                  uVar3 = 0x4000000000;
                  if ((*(uint *)(lVar13 + 4) & 0xf0) != 0 || *(char *)(lVar13 + 0xd) != '\x01') {
                    uVar3 = 0;
                  }
                  uVar30 = uVar30 & 0xffffffbfffffffff | uVar3;
                  plVar28[4] = uVar30;
                }
              }
            }
            else {
              if (cVar18 == '\x01') {
                uVar23 = *(uint *)((long)plVar28 + 0x3c);
                if ((uVar23 & 0xfffffffe) != 0x1a) goto joined_r0x000109e80f38;
                for (lVar13 = plVar28[2]; (*(uint *)(lVar13 + 4) & 0xff) == 0x13;
                    lVar13 = *(long *)(lVar13 + 0x30)) {
                }
                uVar3 = 0x4000000000;
                if ((*(uint *)(lVar13 + 4) & 0xf0) != 0 || *(char *)(lVar13 + 0xd) != '\x01') {
                  uVar3 = 0;
                }
                uVar30 = uVar3 | uVar30 & 0xffffffbfffffffff;
                plVar28[4] = uVar30;
                cVar18 = *(char *)(*(long *)(*(long *)(lVar12 + 0x28) + 0x160) + 0x61);
              }
              if (cVar18 < '\x04') {
                uVar23 = *(uint *)((long)plVar28 + 0x3c);
                goto joined_r0x000109e80f38;
              }
            }
            for (lVar13 = plVar28[2]; *(char *)(lVar13 + 4) == '\x13';
                lVar13 = *(long *)(lVar13 + 0x30)) {
            }
            if (lVar13 == plVar28[0x11]) {
              plVar28[4] = uVar30 & 0xffffffffffe00000 | 0x20000;
            }
          }
          plVar17 = (long *)*plVar14;
          plVar28 = plVar14;
          plVar14 = plVar17;
        } while (plVar17 != (long *)0x0);
        lVar13 = *(long *)(*(long *)(lVar12 + 0x28) + 0x160);
      }
      FUN_109efa06c(lVar13,FUN_109efa1c4);
      if (puVar26 != (undefined8 *)0x0) {
        FUN_109f65aa4(puVar26 + -6);
        FUN_109f65ae0(puVar26 + -6);
      }
    }
    lVar24 = lVar24 + 1;
    if (lVar24 == 6) {
      return;
    }
  } while( true );
LAB_109e80fd8:
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_70 = *(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x18);
  uStack_78 = 0;
  lVar25 = *(long *)(lVar13 + 0x30);
  lStack_68 = lVar13;
  if (lVar25 == 0) {
LAB_109e8110c:
    uVar23 = 0xfffffff7;
  }
  else {
    lVar27 = lVar25;
    FUN_109ecc434();
    uVar23 = 0;
    do {
      lVar11 = lVar27;
      plVar17 = *(long **)(lVar25 + 0x20);
      plVar14 = (long *)*plVar17;
      if (plVar14 != (long *)0x0) {
        do {
          plVar16 = (long *)0x0;
          plVar29 = plVar17;
          if (*plVar14 != 0) {
            plVar16 = plVar14;
          }
          do {
            plVar17 = plVar16;
            if ((int)plVar29[3] == 4) {
              uVar21 = 0;
              iVar6 = (int)plVar29[5];
              if (iVar6 < 0x112) {
                if ((iVar6 - 0xbbU < 4) || (iVar6 == 0x54)) {
LAB_109e8104c:
                  lVar25 = *(long *)plVar29[0x13];
                  if (*(int *)(lVar25 + 0x18) != 1) {
                    lVar25 = 0;
                  }
                  puVar8 = puVar26;
                  FUN_109e812a0(puVar26,&uStack_88,lVar25,plVar29,puVar7,1);
                  uVar21 = (uint)puVar8;
                  if ((int)plVar29[5] == 0x54) {
                    lVar25 = *(long *)plVar29[0x17];
                    if (*(int *)(lVar25 + 0x18) != 1) {
                      lVar25 = 0;
                    }
                    puVar8 = puVar26;
                    FUN_109e812a0(puVar26,&uStack_88,lVar25,plVar29,puVar7,0);
                    uVar21 = uVar21 | (uint)puVar8;
                  }
                }
              }
              else if ((iVar6 == 0x26f) || (iVar6 == 0x112)) goto LAB_109e8104c;
              uVar23 = uVar23 | uVar21;
            }
            if (plVar17 == (long *)0x0) goto LAB_109e810f4;
            plVar14 = (long *)*plVar17;
            plVar16 = (long *)0x0;
            plVar29 = plVar17;
          } while (plVar14 == (long *)0x0);
        } while( true );
      }
LAB_109e810f4:
      lVar27 = lVar11;
      FUN_109ecc434();
      lVar25 = lVar11;
    } while (lVar11 != 0);
    if ((uVar23 & 1) == 0) goto LAB_109e8110c;
    uVar23 = 3;
  }
  *(uint *)(lVar13 + 0x84) = *(uint *)(lVar13 + 0x84) & uVar23;
  plVar28 = (long *)*plVar28;
  plVar14 = (long *)*plVar28;
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_109e80de4;
    lVar13 = plVar28[6];
    if (lVar13 != 0) break;
    plVar28 = plVar14;
    plVar14 = (long *)*plVar14;
  }
  goto LAB_109e80fd8;
}



/* Entry: 109e81180; end: 109e8122f;  */

void FUN_109e81180(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0xc) >> 1 & 1) == 0) {
    FUN_109eca058();
  }
  FUN_109f65d74(param_1,&UNK_10f6101bc);
  return;
}



/* Entry: 109e81230; end: 109e8129f;  */

undefined8 FUN_109e81230(undefined4 *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  puVar2 = param_1;
  func_0x000109eca118();
  FUN_109eca23c();
  if (*(char *)(puVar2 + 1) == '\x13') {
    FUN_109e81230(puVar2,param_2);
  }
  else {
    puVar2 = *(undefined4 **)(*(long *)(puVar2 + 0xc) + (param_2 & 0xffffffff) * 0x30);
  }
  uStack_70 = (ulong)param_1 & 0xffffffff;
  uStack_68 = 0;
  ppuVar3 = &puStack_78;
  puStack_78 = puVar2;
  FUN_109f65414(ppuVar3,0x18);
  ppuVar4 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar4 = (undefined *)0x1132ff008;
    ppuVar4[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (lRam0000000113834750 == 0) {
    lVar5 = lRam0000000113834730;
    FUN_109f64c74(lRam0000000113834730,0x109ec7790,0x109eca4cc);
    lRam0000000113834750 = lVar5;
  }
  lVar5 = lRam0000000113834750;
  lVar6 = lRam0000000113834750;
  FUN_109f64fdc(lRam0000000113834750,ppuVar3,&puStack_78);
  puVar11 = puRam0000000113834738;
  if (lVar6 != 0) goto LAB_109ec6c30;
  puVar7 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  *(undefined2 *)((long)puVar7 + 4) = 0x1413;
  iVar15 = (int)param_1;
  *(int *)(puVar7 + 2) = iVar15;
  uVar1 = puVar2[0xb];
  *(undefined4 *)(puVar7 + 5) = 0;
  *(undefined4 *)((long)puVar7 + 0x2c) = uVar1;
  puVar7[6] = puVar2;
  *(undefined4 *)puVar7 = *puVar2;
  if ((*(byte *)(puVar2 + 3) >> 1 & 1) == 0) {
    func_0x000109eca058();
    if (iVar15 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar12 = &UNK_10f6157f2;
  }
  else {
    puVar2 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(puVar2 + 6));
    if (iVar15 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar12 = &UNK_10f6157f7;
  }
  puVar8 = puVar11;
  FUN_109f666b0(puVar11,puVar12);
  puVar9 = puVar2;
  _strchr(puVar2,0x5b);
  if (puVar9 != (undefined4 *)0x0) {
    lVar6 = (long)puVar8 + ((long)puVar9 - (long)puVar2);
    puVar2 = puVar9;
    _strlen();
    lVar10 = lVar6;
    _strlen(lVar6);
    uVar13 = (ulong)(uint)((int)lVar10 - (int)puVar2);
    _memmove(lVar6,lVar6 + ((ulong)puVar2 & 0xffffffff),uVar13);
    _memcpy(lVar6 + uVar13,puVar9,(ulong)puVar2 & 0xffffffff);
  }
  puVar7[3] = puVar8;
  FUN_109f6650c(puVar11,0x18);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
  }
  puVar11[2] = uStack_68;
  puVar11[1] = uStack_70;
  *puVar11 = puStack_78;
  func_0x000109f650c0(lVar5,ppuVar3,puVar11,puVar7);
  lVar6 = lVar5;
LAB_109ec6c30:
  ppuVar4 = &PTR___tlv_bootstrap_11340ddb0;
  uVar14 = *(undefined8 *)(lVar6 + 0x10);
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar4 = (undefined *)0x1132ff008;
    ppuVar4[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return uVar14;
}



/* Entry: 109e812a0; end: 109e816eb;  */

undefined8
FUN_109e812a0(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
             int param_6)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_a0 [56];
  long *plStack_68;
  
  if ((*(byte *)(param_3 + 0x2c) & 0xc) == 0) {
    return 0;
  }
  lVar9 = param_3;
  while (*(int *)(lVar9 + 0x28) != 0) {
    if (*(int *)(lVar9 + 0x28) == 5) {
      lVar9 = 0;
      goto LAB_109e81324;
    }
    lVar9 = **(long **)(lVar9 + 0x50);
    if (*(int *)(lVar9 + 0x18) != 1) {
      lVar9 = 0;
    }
  }
  lVar9 = *(long *)(lVar9 + 0x38);
LAB_109e81324:
  for (lVar13 = *(long *)(lVar9 + 0x10); *(char *)(lVar13 + 4) == '\x13';
      lVar13 = *(long *)(lVar13 + 0x30)) {
  }
  if (lVar13 == *(long *)(lVar9 + 0x88)) {
    FUN_109ef9548(auStack_a0,param_3,0);
    plVar12 = plStack_68;
    do {
      plVar12 = plVar12 + 1;
      lVar10 = *plVar12;
      if (lVar10 == 0) {
        param_1 = 0;
        goto LAB_109e8139c;
      }
    } while (*(int *)(lVar10 + 0x28) != 4);
    FUN_109e81180(param_1,lVar9,lVar13,*(undefined4 *)(lVar10 + 0x58));
LAB_109e8139c:
    uVar4 = param_1;
    (**(code **)(param_5 + 8))(param_1);
    FUN_109f64fdc(param_5,uVar4,param_1);
    lVar9 = *(long *)(param_5 + 0x10);
    if ((*(int *)(param_4 + 0x28) == 0x26f) || (*(int *)(param_4 + 0x28) == 0x54 && param_6 != 0)) {
      *(ulong *)(lVar9 + 0x20) = *(ulong *)(lVar9 + 0x20) | 0x40000000;
    }
    *param_2 = 2;
    param_2[1] = param_4;
    puVar5 = *(undefined8 **)param_2[3];
    FUN_109f6600c(puVar5,0xa0,8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
    }
    *(undefined4 *)(puVar5 + 3) = 1;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(uint *)((long)puVar5 + 0x2c) = *(uint *)(lVar9 + 0x20) & 0x1fffff;
    puVar5[6] = *(undefined8 *)(lVar9 + 0x10);
    puVar5[7] = lVar9;
    if (*(char *)(param_2[3] + 0x61) == '\x0e') {
      uVar7 = *(undefined4 *)(param_2[3] + 0x160);
    }
    else {
      uVar7 = 0x20;
    }
    FUN_109ecb048(puVar5,puVar5 + 0x10,1,uVar7);
    FUN_109ecb4f0(*param_2,param_2[1],puVar5);
    *param_2 = 3;
    param_2[1] = puVar5;
    uVar8 = (uint)*(byte *)(*(long *)(lVar9 + 0x10) + 4);
    if ((((uVar8 | 2) == 0x13) ||
        ((1 < *(byte *)(*(long *)(lVar9 + 0x10) + 0xe) && (uVar8 - 2 < 3)))) &&
       (lVar13 = plStack_68[1], lVar13 != 0)) {
      bVar3 = false;
      plVar12 = plStack_68 + 2;
      do {
        iVar2 = *(int *)(lVar13 + 0x28);
        if (iVar2 == 4) {
          if (bVar3) {
            uVar8 = *(uint *)(lVar13 + 0x58);
            puVar6 = *(undefined8 **)param_2[3];
            FUN_109f6600c(puVar6,0xa0,8);
            if (puVar6 != (undefined8 *)0x0) {
              puVar6[0x11] = 0;
              puVar6[0x10] = 0;
              puVar6[0x13] = 0;
              puVar6[0x12] = 0;
              puVar6[0xd] = 0;
              puVar6[0xc] = 0;
              puVar6[0xf] = 0;
              puVar6[0xe] = 0;
              puVar6[9] = 0;
              puVar6[8] = 0;
              puVar6[0xb] = 0;
              puVar6[10] = 0;
              puVar6[5] = 0;
              puVar6[4] = 0;
              puVar6[7] = 0;
              puVar6[6] = 0;
              puVar6[1] = 0;
              *puVar6 = 0;
              puVar6[3] = 0;
              puVar6[2] = 0;
            }
            bVar3 = true;
            *(undefined4 *)(puVar6 + 3) = 1;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            puVar6[10] = 0;
            uVar7 = *(undefined4 *)((long)puVar5 + 0x2c);
            *(undefined4 *)(puVar6 + 5) = 4;
            *(undefined4 *)((long)puVar6 + 0x2c) = uVar7;
            puVar6[6] = *(undefined8 *)(*(long *)(puVar5[6] + 0x30) + (ulong)uVar8 * 0x30);
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = puVar5 + 0x10;
            *(uint *)(puVar6 + 0xb) = uVar8;
            goto LAB_109e81600;
          }
          bVar3 = true;
        }
        else {
          if (iVar2 == 2) {
            puVar6 = *(undefined8 **)param_2[3];
            FUN_109f6600c(puVar6,0xa0,8);
            if (puVar6 != (undefined8 *)0x0) {
              puVar6[0x11] = 0;
              puVar6[0x10] = 0;
              puVar6[0x13] = 0;
              puVar6[0x12] = 0;
              puVar6[0xd] = 0;
              puVar6[0xc] = 0;
              puVar6[0xf] = 0;
              puVar6[0xe] = 0;
              puVar6[9] = 0;
              puVar6[8] = 0;
              puVar6[0xb] = 0;
              puVar6[10] = 0;
              puVar6[5] = 0;
              puVar6[4] = 0;
              puVar6[7] = 0;
              puVar6[6] = 0;
              puVar6[1] = 0;
              *puVar6 = 0;
              puVar6[3] = 0;
              puVar6[2] = 0;
            }
            *(undefined4 *)(puVar6 + 3) = 1;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            puVar6[10] = 0;
            uVar7 = *(undefined4 *)((long)puVar5 + 0x2c);
            *(undefined4 *)(puVar6 + 5) = 2;
            *(undefined4 *)((long)puVar6 + 0x2c) = uVar7;
            uVar4 = puVar5[6];
            func_0x000109eca118();
            puVar6[6] = uVar4;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = puVar5 + 0x10;
          }
          else {
            if (iVar2 != 1) goto LAB_109e81628;
            uVar14 = *(undefined8 *)(lVar13 + 0x70);
            puVar6 = (undefined8 *)param_2[3];
            func_0x000109ecaf70(puVar6,1);
            *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)((long)puVar5 + 0x2c);
            uVar4 = puVar5[6];
            func_0x000109eca118();
            puVar6[6] = uVar4;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = puVar5 + 0x10;
            puVar6[0xb] = 0;
            puVar6[0xc] = 0;
            puVar6[0xd] = 0;
            puVar6[0xe] = uVar14;
          }
LAB_109e81600:
          FUN_109ecb048(puVar6,puVar6 + 0x10,*(undefined1 *)((long)puVar5 + 0x9c),
                        *(undefined1 *)((long)puVar5 + 0x9d));
          FUN_109ecb4f0(*param_2,param_2[1],puVar6);
          *param_2 = 3;
          param_2[1] = puVar6;
          puVar5 = puVar6;
        }
LAB_109e81628:
        lVar13 = *plVar12;
        plVar12 = plVar12 + 1;
      } while (lVar13 != 0);
    }
    if (*(int *)(param_4 + 0x28) - 0xbbU < 3) {
      *(ulong *)(lVar9 + 0x2c) = *(ulong *)(lVar9 + 0x2c) | 0x800;
    }
    FUN_109ef9640(auStack_a0);
    if (*(long **)(param_3 + 0x90) + -1 != (long *)(param_3 + 0x80)) {
      plVar12 = puVar5 + 0x11;
      plVar11 = *(long **)(param_3 + 0x90);
      do {
        lVar9 = *plVar11;
        plVar1 = (long *)plVar11[1];
        *(long **)(lVar9 + 8) = plVar1;
        *plVar1 = lVar9;
        plVar11[1] = (long)plVar12;
        plVar11[2] = (long)(puVar5 + 0x10);
        *plVar11 = 0;
        lVar9 = *plVar12;
        *plVar11 = lVar9;
        *(long **)(lVar9 + 8) = plVar11;
        *plVar12 = (long)plVar11;
        plVar11 = plVar1;
      } while (plVar1 + -1 != (long *)(param_3 + 0x80));
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 109e816ec; end: 109e81833;  */

uint FUN_109e816ec(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if ((*(byte *)(param_2 + 0x25) >> 2 & 1) != 0) {
    uVar3 = 0;
    goto LAB_109e8182c;
  }
  uVar3 = (uint)*(undefined8 *)(param_2 + 0x2c);
  if ((uVar3 >> 0xb & 1) != 0) goto LAB_109e81800;
  lVar2 = *(long *)(param_2 + 0x10);
  lVar1 = param_2;
  func_0x000109f0f5ac(param_2,(long)*(char *)(param_1 + 0x61));
  if (((uVar3 >> 0xf & 1) != 0) || ((int)lVar1 != 0)) {
    func_0x000109eca118();
  }
  if (((param_4 != 0) && ((*(byte *)(param_2 + 0x2c) >> 2 & 1) != 0)) &&
     ((*(byte *)(lVar2 + 4) | 2) != 0x13)) {
    if ((param_3 != 0) && (*(byte *)(lVar2 + 0xe) < 2 || *(byte *)(lVar2 + 4) - 5 < 0xfffffffd))
    goto LAB_109e81800;
  }
  if ((param_5 == 0) || ((*(byte *)(param_2 + 0x2c) >> 3 & 1) != 0)) {
LAB_109e817dc:
    for (; uVar3 = *(uint *)(lVar2 + 4), (uVar3 & 0xff) == 0x13; lVar2 = *(long *)(lVar2 + 0x30)) {
    }
    if (*(char *)(lVar2 + 0xd) != '\x04') {
      uVar3 = 1;
      goto LAB_109e8182c;
    }
    if ((uVar3 & 0xf0) == 0) {
      uVar3 = 0xe610 >> (ulong)(uVar3 & 0xf);
      goto LAB_109e8182c;
    }
  }
  else if ((*(byte *)(lVar2 + 4) | 2) == 0x13) {
    if (param_3 != 0) goto LAB_109e817dc;
  }
  else if (1 < *(byte *)(lVar2 + 0xe)) {
    uVar3 = 0;
    if ((param_3 == 0) || (2 < *(byte *)(lVar2 + 4) - 2)) goto LAB_109e8182c;
    goto LAB_109e817dc;
  }
LAB_109e81800:
  uVar3 = 0;
LAB_109e8182c:
  return uVar3 & 1;
}



/* Entry: 109e81834; end: 109e83217;  */

/* WARNING: Possible PIC construction at 0x000109e81d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e824d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e83188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e831dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e82374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109e820a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109e82378) */
/* WARNING: Removing unreachable block (ram,0x000109e831e0) */
/* WARNING: Removing unreachable block (ram,0x000109e8318c) */
/* WARNING: Removing unreachable block (ram,0x000109e831e4) */
/* WARNING: Removing unreachable block (ram,0x000109e824d8) */
/* WARNING: Removing unreachable block (ram,0x000109e820a8) */
/* WARNING: Removing unreachable block (ram,0x000109e820c0) */

code * FUN_109e81834(undefined8 param_1,code *param_2,code *param_3,code *param_4,code *param_5,
                    code *param_6,code *param_7,code *param_8,undefined4 param_9)

{
  byte *pbVar1;
  long *plVar2;
  code cVar3;
  undefined1 uVar4;
  uint uVar5;
  ushort uVar6;
  bool *pbVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  bool bVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  code *pcVar22;
  int *piVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  code *pcVar27;
  uint *puVar28;
  undefined1 *puVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  uint uVar35;
  uint uVar36;
  code *pcVar37;
  code *pcVar38;
  code *pcVar39;
  uint uVar40;
  code *pcVar41;
  code *unaff_x24;
  ulong uVar42;
  code *pcVar43;
  uint uVar44;
  code *unaff_x25;
  code *unaff_x26;
  code *unaff_x27;
  uint uVar45;
  code *unaff_x28;
  code *pcVar46;
  byte *pbVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  bool abStack_120 [4];
  undefined4 uStack_11c;
  undefined8 uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  undefined4 uStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  uint uStack_a8;
  int iStack_a4;
  byte bStack_a0;
  byte bStack_9f;
  byte bStack_9e;
  byte bStack_9d;
  code *apcStack_98 [6];
  long lStack_68;
  
  pbVar47 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar37 = *(code **)(*(long *)(param_8 + 0x28) + 0x160);
  plVar33 = (long *)**(long **)(pcVar37 + 0x178);
  if (plVar33 != (long *)0x0) {
    plVar31 = *(long **)(pcVar37 + 0x178);
    plVar32 = (long *)0x0;
    do {
      plVar2 = plVar31;
      if ((char)plVar31[7] == '\0') {
        plVar2 = plVar32;
      }
      plVar34 = (long *)*plVar33;
      plVar31 = plVar33;
      plVar32 = plVar2;
      plVar33 = plVar34;
    } while (plVar34 != (long *)0x0);
    if (plVar2 != (long *)0x0) {
      pcVar41 = (code *)plVar2[6];
      goto LAB_109e818bc;
    }
  }
  pcVar41 = (code *)0x0;
LAB_109e818bc:
  puStack_b8 = *(undefined8 **)(*(long *)(pcVar41 + 0x20) + 0x18);
  pcStack_c8 = (code *)0x0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_f8 = SUB84(param_4,0);
  iStack_a4 = (int)param_7;
  bStack_a0 = (byte)param_9;
  bStack_9f = param_9._1_1_;
  bStack_9e = param_9._2_1_;
  pcVar13 = param_3;
  pcVar38 = param_6;
  pcVar27 = param_8;
  uStack_110 = param_1;
  pcStack_108 = param_2;
  pcStack_100 = param_3;
  pcStack_f0 = param_5;
  pcStack_e0 = pcVar37;
  pcStack_d8 = pcVar41;
  pcStack_b0 = pcVar41;
  uStack_a8 = (uint)param_6;
  func_0x000109f6590c(param_3,((ulong)param_4 & 0xffffffff) << 3);
  lVar26 = 0;
  uVar20 = 0;
  pcStack_e8 = param_3;
  do {
    if (*(code **)(param_2 + lVar26 + 0xa8) != (code *)0x0) {
      apcStack_98[uVar20] = *(code **)(param_2 + lVar26 + 0xa8);
      uVar20 = (ulong)((int)uVar20 + 1);
    }
    lVar26 = lVar26 + 8;
  } while (lVar26 != 0x30);
  if ((uint)param_6 == 4) {
    bStack_9d = apcStack_98[0] == param_8;
    pcStack_c8 = *(code **)(pcVar41 + 0x30);
    if (*(int *)(pcStack_c8 + 0x10) == 0) {
      uStack_d0 = 0;
    }
    else {
      pcVar22 = pcStack_c8 + 8;
      pcStack_c8 = (code *)0x0;
      if (*(long *)(*(code **)pcVar22 + 8) != 0) {
        pcStack_c8 = *(code **)pcVar22;
      }
      uStack_d0 = 1;
    }
    unaff_x25 = *(code **)(pcVar37 + 8);
    pcVar22 = *(code **)unaff_x25;
    if (pcVar22 != (code *)0x0) {
      param_8 = (code *)&UNK_10f6101c8;
      param_6 = (code *)0x109f65648;
      unaff_x26 = (code *)0x1;
      unaff_x27 = (code *)0x3;
      param_2 = FUN_109f65684;
      do {
        pcVar41 = (code *)0x0;
        pcVar17 = unaff_x25;
        if (*(long *)pcVar22 != 0) {
          pcVar41 = pcVar22;
        }
        do {
          unaff_x25 = pcVar41;
          pcVar41 = pcVar17;
          if ((((*(uint *)(pcVar17 + 0x20) >> 2 & 1) != 0) &&
              ((*(uint *)(pcVar17 + 0x20) & 0x1fffff) == uStack_a8)) &&
             (0x1f < *(int *)(pcVar17 + 0x3c))) {
            pcVar13 = (code *)(ulong)bStack_9e;
            param_4 = (code *)(ulong)bStack_9f;
            param_5 = (code *)(ulong)bStack_a0;
            pcVar22 = pcStack_e0;
            FUN_109e816ec(pcStack_e0,pcVar17);
            if ((int)pcVar22 != 0) {
              pcVar13 = (code *)0x7;
              pcVar22 = param_8;
              _strncmp(&UNK_10f6101c8,*(undefined8 *)(pcVar17 + 0x18));
              if ((int)pcVar22 != 0) {
                if ((pcStack_108[0x17] != (code)0x0) && ((bStack_9d & 1) != 0)) {
                  uVar8 = 0;
                  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
                  FUN_109e76450(uStack_110,pcStack_108,uVar8,pcVar17,(long)(char)pcStack_e0[0x61],
                                0x92e3);
                  func_0x000109f66a2c(uVar8,0);
                }
                *(ulong *)(pcVar17 + 0x20) =
                     *(ulong *)(pcVar17 + 0x20) & 0xffffffffffe00000 | 0x20000;
                param_7 = (code *)*puStack_b8;
                FUN_109f6600c(param_7,0xa0,8);
                if (param_7 != (code *)0x0) {
                  *(undefined8 *)(param_7 + 0x88) = 0;
                  *(undefined8 *)(param_7 + 0x80) = 0;
                  *(undefined8 *)(param_7 + 0x98) = 0;
                  *(undefined8 *)(param_7 + 0x90) = 0;
                  *(undefined8 *)(param_7 + 0x68) = 0;
                  *(undefined8 *)(param_7 + 0x60) = 0;
                  *(undefined8 *)(param_7 + 0x78) = 0;
                  *(undefined8 *)(param_7 + 0x70) = 0;
                  *(undefined8 *)(param_7 + 0x48) = 0;
                  *(undefined8 *)(param_7 + 0x40) = 0;
                  *(undefined8 *)(param_7 + 0x58) = 0;
                  *(undefined8 *)(param_7 + 0x50) = 0;
                  *(undefined8 *)(param_7 + 0x28) = 0;
                  *(undefined8 *)(param_7 + 0x20) = 0;
                  *(undefined8 *)(param_7 + 0x38) = 0;
                  *(undefined8 *)(param_7 + 0x30) = 0;
                  *(undefined8 *)(param_7 + 8) = 0;
                  *(undefined8 *)param_7 = 0;
                  *(undefined8 *)(param_7 + 0x18) = 0;
                  *(undefined8 *)(param_7 + 0x10) = 0;
                }
                *(undefined4 *)(param_7 + 0x18) = 1;
                *(undefined8 *)(param_7 + 8) = 0;
                *(undefined8 *)(param_7 + 0x10) = 0;
                *(undefined8 *)param_7 = 0;
                *(undefined4 *)(param_7 + 0x28) = 0;
                *(uint *)(param_7 + 0x2c) = *(uint *)(pcVar17 + 0x20) & 0x1fffff;
                *(undefined8 *)(param_7 + 0x30) = *(undefined8 *)(pcVar17 + 0x10);
                *(code **)(param_7 + 0x38) = pcVar17;
                if (*(char *)((long)puStack_b8 + 0x61) == '\x0e') {
                  uVar12 = *(undefined4 *)(puStack_b8 + 0x2c);
                }
                else {
                  uVar12 = 0x20;
                }
                FUN_109ecb048(param_7,param_7 + 0x80,1,uVar12);
                FUN_109ecb4f0(uStack_d0,pcStack_c8,param_7);
                uStack_d0 = 3;
                pcStack_c8 = param_7;
                uStack_11c = 0;
                abStack_120[0] = iStack_a4 != 0;
                pcVar38 = (code *)&uStack_110;
                pcVar13 = (code *)0xffffffff;
                uVar8 = 0x109e81d4c;
                pbVar7 = abStack_120;
                pcVar22 = (code *)0x0;
                param_4 = *(code **)(pcVar17 + 0x10);
                param_5 = (code *)(ulong)((uint)((ulong)*(undefined8 *)(pcVar17 + 0x20) >> 0x24) & 3
                                         | *(int *)(pcVar17 + 0x3c) << 2);
                pcVar27 = *(code **)(pcVar17 + 0x18);
                unaff_x24 = param_7;
                goto SUB_109e81db8;
              }
            }
          }
          if (unaff_x25 == (code *)0x0) goto LAB_109e81d64;
          pcVar22 = *(code **)unaff_x25;
          pcVar41 = (code *)0x0;
          pcVar17 = unaff_x25;
        } while (pcVar22 == (code *)0x0);
      } while( true );
    }
  }
  else {
    bStack_9d = apcStack_98[(int)uVar20 - 1] == param_8;
    pcVar41 = *(code **)(pcVar37 + 8);
    pcVar22 = *(code **)pcVar41;
    if (pcVar22 != (code *)0x0) {
      param_8 = (code *)&UNK_10f6101c8;
      pcVar17 = (code *)0x0;
      if (*(long *)pcVar22 != 0) {
        pcVar17 = pcVar22;
      }
      param_6 = (code *)0x109f65648;
      param_2 = FUN_109f65684;
      unaff_x25 = (code *)0x2;
LAB_109e819b8:
      pcVar22 = pcVar17;
      if ((((*(uint *)(pcVar41 + 0x20) >> 3 & 1) != 0) &&
          ((*(uint *)(pcVar41 + 0x20) & 0x1fffff) == uStack_a8)) &&
         (0x1f < *(int *)(pcVar41 + 0x3c))) {
        pcVar13 = (code *)(ulong)bStack_9e;
        param_4 = (code *)(ulong)bStack_9f;
        param_5 = (code *)(ulong)bStack_a0;
        pcVar17 = pcStack_e0;
        FUN_109e816ec(pcStack_e0,pcVar41);
        if ((int)pcVar17 != 0) {
          pcVar13 = (code *)0x7;
          iVar25 = 0xf6101c8;
          _strncmp(&UNK_10f6101c8,*(undefined8 *)(pcVar41 + 0x18));
          if (iVar25 != 0) {
            if ((pcStack_108[0x17] != (code)0x0) && ((bStack_9d & 1) != 0)) {
              pcVar17 = (code *)0x0;
              FUN_109f6695c(0,0x109f65648,FUN_109f65684);
              param_5 = (code *)(long)(char)pcStack_e0[0x61];
              pcVar38 = (code *)0x92e4;
              pcVar13 = pcVar17;
              param_4 = pcVar41;
              FUN_109e76450(uStack_110,pcStack_108);
              func_0x000109f66a2c(pcVar17,0);
            }
            *(ulong *)(pcVar41 + 0x20) = *(ulong *)(pcVar41 + 0x20) & 0xffffffffffe00000 | 0x20000;
            unaff_x24 = *(code **)(pcStack_d8 + 0x30);
            while (unaff_x24 != (code *)0x0) {
              unaff_x27 = *(code **)(unaff_x24 + 0x20);
              if (pcStack_e0[0x61] == (code)0x3) {
                pcVar21 = *(code **)unaff_x27;
                pcVar17 = unaff_x27;
                if (pcVar21 != (code *)0x0) {
                  do {
                    pcVar43 = pcVar17;
                    pcVar46 = (code *)0x0;
                    if (*(long *)pcVar21 != 0) {
                      pcVar46 = pcVar21;
                    }
                    do {
                      pcVar17 = pcVar46;
                      if ((*(int *)(pcVar43 + 0x18) == 4) && (*(int *)(pcVar43 + 0x28) == 0x6e)) {
                        uStack_d0 = 2;
                        pcStack_c8 = pcVar43;
                        FUN_109e83710(&uStack_110,pcVar41);
                      }
                      unaff_x27 = (code *)0x0;
                      if (pcVar17 == (code *)0x0) goto LAB_109e81b44;
                      pcVar21 = *(code **)pcVar17;
                      pcVar43 = pcVar17;
                      pcVar46 = (code *)0x0;
                    } while (pcVar21 == (code *)0x0);
                  } while( true );
                }
              }
              else {
                if (((unaff_x27 == unaff_x24 + 0x30) ||
                    (pcVar17 = *(code **)(unaff_x24 + 0x38), *(int *)(pcVar17 + 0x18) != 6)) ||
                   (1 < *(uint *)(pcVar17 + 0x28))) {
                  if (unaff_x24 != *(code **)(pcStack_d8 + 0x48)) goto LAB_109e81b44;
                  uStack_d0 = 1;
                  pcStack_c8 = unaff_x24;
                }
                else {
                  uStack_d0 = 2;
                  pcStack_c8 = pcVar17;
                }
                FUN_109e83710(&uStack_110,pcVar41);
              }
LAB_109e81b44:
              FUN_109ecc434();
            }
          }
        }
      }
      unaff_x26 = (code *)0x0;
      if (pcVar22 != (code *)0x0) {
        pcVar21 = *(code **)pcVar22;
        pcVar17 = (code *)0x0;
        pcVar41 = pcVar22;
        if ((pcVar21 != (code *)0x0) && (pcVar17 = (code *)0x0, *(long *)pcVar21 != 0)) {
          pcVar17 = pcVar21;
        }
        goto LAB_109e819b8;
      }
    }
  }
LAB_109e81d64:
  pcVar17 = pcVar38;
  FUN_109f0f144(pcVar37);
  pcVar22 = FUN_109efa1c4;
  pcVar38 = pcVar37;
  FUN_109efa06c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pcVar38;
  }
  uVar8 = 0x109e81db8;
  ___stack_chk_fail();
  pbVar7 = abStack_120;
SUB_109e81db8:
  do {
    pcVar43 = param_4;
    pcVar21 = pcVar22;
    *(code **)(pbVar7 + -0x60) = unaff_x28;
    *(code **)(pbVar7 + -0x58) = unaff_x27;
    *(code **)(pbVar7 + -0x50) = unaff_x26;
    *(code **)(pbVar7 + -0x48) = unaff_x25;
    *(code **)(pbVar7 + -0x40) = unaff_x24;
    *(code **)(pbVar7 + -0x38) = pcVar41;
    *(code **)(pbVar7 + -0x30) = param_2;
    *(code **)(pbVar7 + -0x28) = param_6;
    *(code **)(pbVar7 + -0x20) = param_8;
    *(code **)(pbVar7 + -0x18) = pcVar37;
    *(byte **)(pbVar7 + -0x10) = pbVar47;
    *(undefined8 *)(pbVar7 + -8) = uVar8;
    pbVar47 = pbVar7 + -0x10;
    *(code **)(pbVar7 + -0x100) = param_7;
    uVar12 = SUB84(pcVar13,0);
    *(undefined4 *)(pbVar7 + -0xf8) = uVar12;
    *(undefined4 *)(pbVar7 + -0x104) = *(undefined4 *)(pbVar7 + 4);
    *(undefined8 *)(pbVar7 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar19 = *(uint *)(pcVar43 + 4);
    uVar45 = uVar19 & 0xff;
    uVar20 = (ulong)(uVar19 - 4) & 0xff;
    *(code **)(pbVar7 + -0xf0) = pcVar38;
    *(code **)(pbVar7 + -0x110) = pcVar27;
    pcVar37 = pcVar38;
    pcVar13 = param_5;
LAB_109e81e48:
    param_8 = pcVar13;
    if ((uint)uVar20 < 0xc) {
      uVar35 = *(uint *)(&UNK_10e061dc8 + uVar20 * 4);
      uVar36 = *(uint *)(&UNK_10e061df8 + uVar20 * 4);
      iVar25 = *(int *)(&UNK_10e061e28 + uVar20 * 4);
    }
    else {
      uVar36 = 0;
      iVar25 = 1;
      uVar35 = 0xffffffff;
    }
    pcVar39 = pcVar17;
    pcVar13 = pcVar38;
    pcVar22 = pcVar43;
    pcVar10 = pcVar21;
    pcVar46 = param_5;
    if (uVar45 == 0x13) {
      *(undefined4 *)(pbVar7 + 4) = *(undefined4 *)(pbVar7 + -0x104);
      *pbVar7 = *pbVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(pbVar7 + -0x70))
      goto LAB_109e82fa4;
      uVar12 = *(undefined4 *)(pbVar7 + -0xf8);
LAB_109e820fc:
      pcVar16 = *(code **)(pbVar7 + -0x100);
      pbVar47 = *(byte **)(pbVar7 + -0x10);
      uVar8 = *(undefined8 *)(pbVar7 + -8);
      param_8 = *(code **)(pbVar7 + -0x20);
      pcVar39 = *(code **)(pbVar7 + -0x18);
      pcVar13 = *(code **)(pbVar7 + -0x30);
      param_6 = *(code **)(pbVar7 + -0x28);
      pcVar22 = *(code **)(pbVar7 + -0x40);
      pcVar41 = *(code **)(pbVar7 + -0x38);
      unaff_x26 = *(code **)(pbVar7 + -0x50);
      unaff_x25 = *(code **)(pbVar7 + -0x48);
      pcVar46 = *(code **)(pbVar7 + -0x60);
      pcVar10 = *(code **)(pbVar7 + -0x58);
      unaff_x24 = pcVar27;
      goto LAB_109e82fa8;
    }
    pcVar16 = pcVar17;
    if (uVar45 == 0x11) {
      pcVar37 = pcVar43;
      pcVar13 = pcVar21;
      pcVar14 = pcVar43;
      pcVar15 = param_5;
      FUN_109eca23c();
      if ((int)pcVar37 == 0) goto LAB_109e82f68;
      *(code **)(pbVar7 + -0x120) = pcVar17;
      *(code **)(pbVar7 + -0x118) = pcVar21;
      unaff_x26 = (code *)0x0;
      param_8 = (code *)0x0;
      param_6 = (code *)(*(long *)(pbVar7 + -0x100) + 0x80);
      unaff_x27 = (code *)(((ulong)pcVar37 & 0xffffffff) * 0x30);
      if (*(long *)(pbVar7 + -0x110) == 0) {
        pcVar27 = (code *)0x0;
        lVar26 = *(long *)(pbVar7 + -0xf0);
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(pcVar43 + 0x30) + 8);
        lVar26 = *(long *)(pbVar7 + -0xf0);
        pcVar27 = *(code **)(lVar26 + 0x10);
        *(long *)(pbVar7 + -0x140) = *(long *)(pbVar7 + -0x110);
        *(undefined8 *)(pbVar7 + -0x138) = uVar8;
        FUN_109f65d74(pcVar27,&UNK_10f518dd3);
      }
      unaff_x24 = (code *)**(undefined8 **)(pcVar43 + 0x30);
      param_7 = (code *)**(undefined8 **)(lVar26 + 0x58);
      FUN_109f6600c(param_7,0xa0,8);
      if (param_7 != (code *)0x0) {
        *(undefined8 *)(param_7 + 0x88) = 0;
        *(undefined8 *)(param_7 + 0x80) = 0;
        *(undefined8 *)(param_7 + 0x98) = 0;
        *(undefined8 *)(param_7 + 0x90) = 0;
        *(undefined8 *)(param_7 + 0x68) = 0;
        *(undefined8 *)(param_7 + 0x60) = 0;
        *(undefined8 *)(param_7 + 0x78) = 0;
        *(undefined8 *)(param_7 + 0x70) = 0;
        *(undefined8 *)(param_7 + 0x48) = 0;
        *(undefined8 *)(param_7 + 0x40) = 0;
        *(undefined8 *)(param_7 + 0x58) = 0;
        *(undefined8 *)(param_7 + 0x50) = 0;
        *(undefined8 *)(param_7 + 0x28) = 0;
        *(undefined8 *)(param_7 + 0x20) = 0;
        *(undefined8 *)(param_7 + 0x38) = 0;
        *(undefined8 *)(param_7 + 0x30) = 0;
        *(undefined8 *)(param_7 + 8) = 0;
        *(undefined8 *)param_7 = 0;
        *(undefined8 *)(param_7 + 0x18) = 0;
        *(undefined8 *)(param_7 + 0x10) = 0;
      }
      *(undefined4 *)(param_7 + 0x18) = 1;
      *(undefined8 *)(param_7 + 8) = 0;
      *(undefined8 *)(param_7 + 0x10) = 0;
      *(undefined8 *)param_7 = 0;
      *(undefined4 *)(param_7 + 0x28) = 4;
      *(undefined8 *)(param_7 + 0x50) = 0;
      lVar26 = *(long *)(pbVar7 + -0x100);
      *(undefined4 *)(param_7 + 0x2c) = *(undefined4 *)(lVar26 + 0x2c);
      *(undefined8 *)(param_7 + 0x30) = **(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x30);
      *(undefined8 *)(param_7 + 0x38) = 0;
      *(undefined8 *)(param_7 + 0x40) = 0;
      *(undefined8 *)(param_7 + 0x48) = 0;
      *(code **)(param_7 + 0x50) = param_6;
      *(undefined4 *)(param_7 + 0x58) = 0;
      FUN_109ecb048(param_7,param_7 + 0x80,*(undefined1 *)(lVar26 + 0x9c),
                    *(undefined1 *)(lVar26 + 0x9d));
      pcVar38 = *(code **)(pbVar7 + -0xf0);
      FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),param_7);
      *(undefined8 *)(pcVar38 + 0x40) = 3;
      *(code **)(pcVar38 + 0x48) = param_7;
      *(undefined4 *)(pbVar7 + -0x13c) = *(undefined4 *)(pbVar7 + -0x104);
      pbVar7[-0x140] = false;
      pcVar17 = *(code **)(pbVar7 + -0x120);
      puVar11 = (undefined8 *)(pbVar7 + -0x118);
      pcVar13 = (code *)(ulong)*(uint *)(pbVar7 + -0xf8);
      uVar8 = 0x109e820a8;
      pbVar7 = pbVar7 + -0x140;
      pcVar22 = (code *)*puVar11;
      param_4 = unaff_x24;
      pcVar37 = pcVar43;
      param_2 = pcVar38;
      pcVar41 = pcVar27;
      unaff_x25 = param_7;
      unaff_x28 = param_5;
      goto SUB_109e81db8;
    }
    pcVar37 = (code *)(ulong)(byte)pcVar43[0xe];
    if (1 < (byte)pcVar43[0xe] && 0xfffffffc < uVar45 - 5) {
      *(undefined4 *)(pbVar7 + 4) = *(undefined4 *)(pbVar7 + -0x104);
      *pbVar7 = false;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pbVar7 + -0x70)) {
        uVar12 = *(undefined4 *)(pbVar7 + -0xf8);
        param_5 = param_8;
        goto LAB_109e820fc;
      }
      goto LAB_109e82fa4;
    }
    cVar3 = pcVar43[0xd];
    unaff_x25 = (code *)(ulong)(byte)cVar3;
    uVar5 = (uint)(byte)cVar3 << (ulong)(uVar36 & 0x1f);
    pcVar41 = (code *)(ulong)uVar5;
    uVar40 = (uint)param_8;
    uVar36 = uVar40 & 3;
    unaff_x26 = (code *)(ulong)uVar36;
    uVar44 = (uint)(byte)cVar3;
    if (4 < uVar5 + uVar36) {
      uVar35 = (uVar40 + iVar25) - 1 & uVar35;
      pcVar13 = (code *)(ulong)uVar35;
      if (uVar35 == uVar40) break;
      goto LAB_109e81e48;
    }
    uVar45 = (uVar40 >> 2) - 0x20;
    lVar26 = *(long *)(*(long *)(pcVar38 + 0x28) + (ulong)uVar45 * 8);
    *(code **)(pbVar7 + -0x118) = pcVar21;
    if (lVar26 == 0) {
      *(uint *)(pbVar7 + -0x128) = uVar40 >> 2;
      puVar11 = *(undefined8 **)(pcVar38 + 0x30);
      func_0x000109f658b0(puVar11,0x98);
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[0x12] = 0;
        puVar11[0xf] = 0;
        puVar11[0xe] = 0;
        puVar11[0x11] = 0;
        puVar11[0x10] = 0;
        puVar11[0xb] = 0;
        puVar11[10] = 0;
        puVar11[0xd] = 0;
        puVar11[0xc] = 0;
        puVar11[7] = 0;
        puVar11[6] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
      }
      *(code **)(pbVar7 + -0x120) = pcVar43;
      *(undefined8 *)(pbVar7 + -0x140) = *(undefined8 *)(pbVar7 + -0x110);
      puVar9 = puVar11;
      FUN_109f65d74(puVar11,&UNK_10f6101d5);
      puVar11[3] = puVar9;
      puVar11[4] = puVar11[4] & 0xffffffffffe00000 | (ulong)*(uint *)(pcVar38 + 0x68) & 0x1fffff;
      if ((*(ulong *)(pcVar17 + 0x20) & 0xe00000000) == 0x400000000) {
LAB_109e822b8:
        uVar20 = 1;
        uVar42 = 1;
      }
      else {
        uVar42 = *(ulong *)(pcVar17 + 0x10);
        uVar20 = uVar42;
        func_0x000109ec6594();
        if ((uVar20 & 1) != 0) goto LAB_109e822b8;
        func_0x000109ec661c();
        uVar19 = 1;
        if ((int)uVar42 == 0) {
          uVar19 = 2;
        }
        uVar20 = (ulong)uVar19;
      }
      pcVar16 = (code *)0x0;
      func_0x000109ec6c94(uVar20,*(undefined1 *)(*(long *)(pcVar38 + 0x20) + (ulong)uVar45),1,0,0);
      if (*(int *)(pcVar38 + 0x6c) != 0) {
        func_0x000109ec69f4();
      }
      uVar12 = *(undefined4 *)(pbVar7 + -0x128);
      puVar11[2] = uVar20;
      uVar24 = puVar11[4];
      uVar20 = uVar24 & 0x3fffff | (*(ulong *)(pcVar17 + 0x20) >> 0x16 & 1) << 0x16;
      puVar11[4] = uVar24 & 0xffffffffff800000 | uVar20;
      uVar20 = uVar20 | (*(ulong *)(pcVar17 + 0x20) >> 0x17 & 1) << 0x17;
      puVar11[4] = uVar24 & 0xffffffffff000000 | uVar20;
      uVar20 = uVar20 | (*(ulong *)(pcVar17 + 0x20) >> 0x18 & 1) << 0x18;
      puVar11[4] = uVar24 & 0xfffffffffe000000 | uVar20;
      if ((uVar42 & 1) == 0) {
        uVar42 = *(ulong *)(pcVar17 + 0x20) & 0xe00000000;
      }
      else {
        uVar42 = 0x400000000;
      }
      puVar11[4] = uVar42 | uVar24 & 0xfffffff1fe000000 | uVar20;
      *(undefined4 *)((long)puVar11 + 0x3c) = uVar12;
      uVar20 = uVar24 & 0xe000000 | uVar20 | (*(ulong *)(pcVar17 + 0x20) >> 0x1c & 3) << 0x1c;
      puVar11[4] = uVar42 | uVar24 & 0xfffffff1c0000000 | uVar20;
      puVar11[4] = uVar42 | uVar24 & 0xfffffff000000000 |
                   uVar24 & 0xc0000000 | uVar20 | (*(ulong *)(pcVar17 + 0x20) >> 0x20 & 1) << 0x20;
      *(ulong *)((long)puVar11 + 0x2c) =
           *(ulong *)((long)puVar11 + 0x2c) & 0xffffffffc01fffff | 0x20000000;
      FUN_109eca704(*(undefined8 *)(pcVar38 + 0x30),puVar11);
      *(undefined8 **)(*(long *)(pcVar38 + 0x28) + (ulong)uVar45 * 8) = puVar11;
      pcVar43 = *(code **)(pbVar7 + -0x120);
    }
    else {
      *(ulong *)(lVar26 + 0x20) =
           *(ulong *)(pcVar17 + 0x20) & 0x100000000 | *(ulong *)(lVar26 + 0x20);
      if ((*(int *)(pbVar7 + -0x104) == 0) || (*(int *)(pcVar38 + 0x6c) == 0)) {
        *(code **)(pbVar7 + -0x140) = pcVar27;
        FUN_109f65e1c(lVar26 + 0x18,&UNK_10f6101df);
      }
    }
    lVar26 = *(long *)(*(long *)(pcVar38 + 0x28) + (ulong)uVar45 * 8);
    pcVar37 = (code *)**(undefined8 **)(pcVar38 + 0x58);
    FUN_109f6600c(pcVar37,0xa0,8);
    if (pcVar37 != (code *)0x0) {
      *(undefined8 *)(pcVar37 + 0x88) = 0;
      *(undefined8 *)(pcVar37 + 0x80) = 0;
      *(undefined8 *)(pcVar37 + 0x98) = 0;
      *(undefined8 *)(pcVar37 + 0x90) = 0;
      *(undefined8 *)(pcVar37 + 0x68) = 0;
      *(undefined8 *)(pcVar37 + 0x60) = 0;
      *(undefined8 *)(pcVar37 + 0x78) = 0;
      *(undefined8 *)(pcVar37 + 0x70) = 0;
      *(undefined8 *)(pcVar37 + 0x48) = 0;
      *(undefined8 *)(pcVar37 + 0x40) = 0;
      *(undefined8 *)(pcVar37 + 0x58) = 0;
      *(undefined8 *)(pcVar37 + 0x50) = 0;
      *(undefined8 *)(pcVar37 + 0x28) = 0;
      *(undefined8 *)(pcVar37 + 0x20) = 0;
      *(undefined8 *)(pcVar37 + 0x38) = 0;
      *(undefined8 *)(pcVar37 + 0x30) = 0;
      *(undefined8 *)(pcVar37 + 8) = 0;
      *(undefined8 *)pcVar37 = 0;
      *(undefined8 *)(pcVar37 + 0x18) = 0;
      *(undefined8 *)(pcVar37 + 0x10) = 0;
    }
    *(undefined4 *)(pcVar37 + 0x18) = 1;
    *(undefined8 *)(pcVar37 + 8) = 0;
    *(undefined8 *)(pcVar37 + 0x10) = 0;
    *(undefined8 *)pcVar37 = 0;
    *(undefined4 *)(pcVar37 + 0x28) = 0;
    *(uint *)(pcVar37 + 0x2c) = *(uint *)(lVar26 + 0x20) & 0x1fffff;
    *(undefined8 *)(pcVar37 + 0x30) = *(undefined8 *)(lVar26 + 0x10);
    *(long *)(pcVar37 + 0x38) = lVar26;
    if (*(char *)(*(long *)(pcVar38 + 0x58) + 0x61) == '\x0e') {
      uVar12 = *(undefined4 *)(*(long *)(pcVar38 + 0x58) + 0x160);
    }
    else {
      uVar12 = 0x20;
    }
    FUN_109ecb048(pcVar37,pcVar37 + 0x80,1,uVar12);
    FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),pcVar37);
    *(undefined8 *)(pcVar38 + 0x40) = 3;
    *(code **)(pcVar38 + 0x48) = pcVar37;
    pcVar10 = pcVar37;
    if (*(int *)(pcVar38 + 0x6c) != 0) {
      *(code **)(pbVar7 + -0x128) = pcVar37 + 0x80;
      *(code **)(pbVar7 + -0x120) = pcVar17;
      *(uint *)(pbVar7 + -0x110) = uVar45;
      puVar11 = (undefined8 *)**(undefined8 **)(pcVar38 + 0x58);
      FUN_109f6600c(puVar11,0x50,8);
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[7] = 0;
        puVar11[6] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
      }
      *(undefined4 *)(puVar11 + 3) = 5;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      FUN_109ecb048(puVar11,puVar11 + 5,1,0x20);
      *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(pbVar7 + -0x104);
      pcVar38 = *(code **)(pbVar7 + -0xf0);
      FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),puVar11);
      *(undefined8 *)(pcVar38 + 0x40) = 3;
      *(undefined8 **)(pcVar38 + 0x48) = puVar11;
      pcVar10 = *(code **)(pcVar38 + 0x58);
      func_0x000109ecaf70(pcVar10,1);
      *(undefined4 *)(pcVar10 + 0x2c) = *(undefined4 *)(pcVar37 + 0x2c);
      uVar8 = *(undefined8 *)(pcVar37 + 0x30);
      func_0x000109eca118();
      *(undefined8 *)(pcVar10 + 0x30) = uVar8;
      *(undefined8 *)(pcVar10 + 0x38) = 0;
      *(undefined8 *)(pcVar10 + 0x40) = 0;
      *(undefined8 *)(pcVar10 + 0x48) = 0;
      *(undefined8 *)(pcVar10 + 0x50) = *(undefined8 *)(pbVar7 + -0x128);
      *(undefined8 *)(pcVar10 + 0x58) = 0;
      *(undefined8 *)(pcVar10 + 0x60) = 0;
      *(undefined8 *)(pcVar10 + 0x68) = 0;
      *(undefined8 **)(pcVar10 + 0x70) = puVar11 + 5;
      FUN_109ecb048(pcVar10,pcVar10 + 0x80,pcVar37[0x9c],pcVar37[0x9d]);
      FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),pcVar10);
      *(undefined8 *)(pcVar38 + 0x40) = 3;
      *(code **)(pcVar38 + 0x48) = pcVar10;
      pcVar17 = *(code **)(pbVar7 + -0x120);
      uVar45 = *(uint *)(pbVar7 + -0x110);
    }
    if (((byte)cVar3 != 0) && ((*(ulong *)(pcVar17 + 0x2c) & 0x3fe00000) != 0)) {
      lVar26 = *(long *)(*(long *)(pcVar38 + 0x28) + (ulong)uVar45 * 8);
      uVar20 = *(ulong *)(lVar26 + 0x2c);
      uVar45 = (uVar40 & 3) << 1;
      pcVar37 = pcVar41;
      do {
        uVar20 = uVar20 & 0xffffffffc01fffff |
                 (ulong)(((uint)uVar20 |
                         ((*(uint *)(pcVar17 + 0x2c) >> 0x15) << (ulong)(uVar45 & 0x1f)) << 0x15) &
                        0x3fe00000);
        *(ulong *)(lVar26 + 0x2c) = uVar20;
        uVar45 = uVar45 + 2;
        uVar19 = (int)pcVar37 - 1;
        pcVar37 = (code *)(ulong)uVar19;
      } while (uVar19 != 0);
    }
    if (*(int *)(pcVar38 + 0x68) == 8) {
      if (*(long *)(pbVar7 + -0x118) == 0) {
        lVar30 = *(long *)(pbVar7 + -0x100);
        uVar4 = *(undefined1 *)(*(long *)(lVar30 + 0x30) + 0xd);
        lVar26 = *(long *)(pcVar38 + 0x58);
        FUN_109ecb0a8(lVar26,0x112);
        *(undefined1 *)(lVar26 + 0x50) = uVar4;
        *(long *)(pbVar7 + -0x118) = lVar26 + 0x30;
        FUN_109ecb048();
        *(undefined8 *)(lVar26 + 0x80) = 0;
        *(undefined8 *)(lVar26 + 0x88) = 0;
        *(undefined8 *)(lVar26 + 0x90) = 0;
        *(long *)(lVar26 + 0x98) = lVar30 + 0x80;
        *(undefined4 *)
         (lVar26 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar26 + 0x28) * 0x68] * 4 + 0x50)
             = 0;
        FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),lVar26);
        *(undefined8 *)(pcVar38 + 0x40) = 3;
        *(long *)(pcVar38 + 0x48) = lVar26;
      }
      iVar25 = *(int *)(pcVar10 + 0x28);
      pcVar37 = pcVar10;
      while (iVar25 != 0) {
        pcVar37 = (code *)**(undefined8 **)(pcVar37 + 0x50);
        iVar25 = *(int *)(pcVar37 + 0x28);
      }
      uVar45 = *(uint *)(*(long *)(*(long *)(pcVar37 + 0x38) + 0x10) + 4);
      unaff_x25 = (code *)(ulong)uVar45;
      uVar19 = *(uint *)(pcVar43 + 4);
      param_6 = (code *)0x1;
      pcVar22 = (code *)0x1;
      _calloc(1,0x28);
      if (((uVar19 ^ uVar45) & 0xff) == 0 || 0xf < (uVar19 & 0xff)) {
LAB_109e82ebc:
        iVar25 = ~(-1 << (ulong)(uVar5 & 0x1f)) << (ulong)uVar36;
        *(code **)(pcVar22 + 0x20) = pcVar10;
        lVar26 = 4;
        lVar30 = 0x10;
        pcVar37 = *(code **)(pbVar7 + -0x118);
      }
      else {
        if ((1 << (ulong)(uVar19 & 0x1f) & 0x610U) == 0) {
          uVar45 = 1 << (ulong)(uVar19 & 0x1f);
          if ((uVar45 & 5) != 0) {
            uVar8 = 0x154;
            goto LAB_109e82eac;
          }
          if ((uVar45 & 0xa000) != 0) goto LAB_109e82cf0;
          goto LAB_109e82ebc;
        }
        if (pcVar43[0xd] != (code)0x2) {
LAB_109e82cf0:
          uVar8 = 0x1b0;
LAB_109e82eac:
          pcVar37 = pcVar38 + 0x40;
          FUN_109ece168(pcVar37,uVar8,*(undefined8 *)(pbVar7 + -0x118));
          *(code **)(pbVar7 + -0x118) = pcVar37;
          goto LAB_109e82ebc;
        }
        unaff_x26 = *(code **)(pbVar7 + -0x118);
        pcVar37 = unaff_x26;
        if (unaff_x26[0x1c] != (code)0x1) {
          lVar26 = *(long *)(pcVar38 + 0x58);
          func_0x000109ecaef8(lVar26,0x154);
          pcVar37 = (code *)(lVar26 + 0x30);
          FUN_109ecb048();
          uVar6 = *(ushort *)(lVar26 + 0x2c) & 0xfffe |
                  (ushort)*(byte *)(*(long *)(pbVar7 + -0xf0) + 0x50);
          *(ushort *)(lVar26 + 0x2c) = uVar6;
          *(ushort *)(lVar26 + 0x2c) =
               (*(ushort *)(*(long *)(pbVar7 + -0xf0) + 0x54) & 0x1ff) << 3 | uVar6 & 0xf007;
          *(undefined8 *)(lVar26 + 0x50) = 0;
          *(undefined8 *)(lVar26 + 0x58) = 0;
          *(undefined8 *)(lVar26 + 0x60) = 0;
          *(code **)(lVar26 + 0x68) = unaff_x26;
          *(undefined8 *)(lVar26 + 0x70) = 0;
          *(undefined8 *)(lVar26 + 0x78) = 0;
          FUN_109ecb4f0(*(undefined8 *)(*(long *)(pbVar7 + -0xf0) + 0x40),
                        *(undefined8 *)(*(long *)(pbVar7 + -0xf0) + 0x48),lVar26);
          *(undefined8 *)(*(long *)(pbVar7 + -0xf0) + 0x40) = 3;
          *(long *)(*(long *)(pbVar7 + -0xf0) + 0x48) = lVar26;
        }
        *pcVar22 = (code)0x1;
        lVar26 = *(long *)(pbVar7 + -0xf0) + 0x40;
        FUN_109ece168(lVar26,0x1b0,pcVar37);
        *(long *)(pcVar22 + 0x10) = lVar26;
        unaff_x25 = (code *)0x3;
        *(undefined4 *)(pcVar22 + 4) = 3;
        param_6 = *(code **)(*(long *)(pbVar7 + -0xf0) + 0x58);
        func_0x000109ecaef8(param_6,0x154);
        FUN_109ecb048();
        uVar6 = *(ushort *)(param_6 + 0x2c) & 0xfffe |
                (ushort)*(byte *)(*(long *)(pbVar7 + -0xf0) + 0x50);
        *(ushort *)(param_6 + 0x2c) = uVar6;
        *(ushort *)(param_6 + 0x2c) =
             (*(ushort *)(*(long *)(pbVar7 + -0xf0) + 0x54) & 0x1ff) << 3 | uVar6 & 0xf007;
        *(undefined8 *)(param_6 + 0x50) = 0;
        *(undefined8 *)(param_6 + 0x58) = 0;
        *(undefined8 *)(param_6 + 0x60) = 0;
        *(code **)(param_6 + 0x68) = unaff_x26;
        param_6[0x70] = (code)0x1;
        pcVar38 = *(code **)(pbVar7 + -0xf0);
        *(undefined8 *)(param_6 + 0x71) = 0;
        *(undefined8 *)(param_6 + 0x78) = 0;
        FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),param_6);
        *(undefined8 *)(pcVar38 + 0x40) = 3;
        *(code **)(pcVar38 + 0x48) = param_6;
        *(code **)(pcVar22 + 0x20) = pcVar10;
        pcVar37 = pcVar38 + 0x40;
        FUN_109ece168(pcVar37,0x1b0,param_6 + 0x30);
        iVar25 = 0xc;
        lVar26 = 8;
        lVar30 = 0x18;
      }
      *(code **)(pcVar22 + lVar30) = pcVar37;
      *(int *)(pcVar22 + lVar26) = iVar25;
      pcVar39 = pcVar43;
    }
    else {
      *(undefined8 *)(pbVar7 + -0xe0) = 0;
      *(undefined8 *)(pbVar7 + -0xd8) = 0;
      if (uVar44 != 0) {
        uVar45 = uVar40 & 3;
        puVar28 = (uint *)(pbVar7 + -0xe0);
        pcVar37 = pcVar41;
        do {
          *puVar28 = uVar45;
          uVar45 = uVar45 + 1;
          pcVar37 = pcVar37 + -1;
          puVar28 = puVar28 + 1;
        } while (pcVar37 != (code *)0x0);
      }
      uVar4 = *(undefined1 *)(*(long *)(pcVar10 + 0x30) + 0xd);
      pcVar39 = *(code **)(pbVar7 + -0xf0);
      lVar26 = *(long *)(pcVar39 + 0x58);
      FUN_109ecb0a8(lVar26,0x112);
      *(undefined1 *)(lVar26 + 0x50) = uVar4;
      pcVar37 = (code *)(lVar26 + 0x30);
      FUN_109ecb048();
      *(undefined8 *)(lVar26 + 0x80) = 0;
      *(undefined8 *)(lVar26 + 0x88) = 0;
      *(undefined8 *)(lVar26 + 0x90) = 0;
      *(code **)(lVar26 + 0x98) = pcVar10 + 0x80;
      *(undefined4 *)
       (lVar26 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar26 + 0x28) * 0x68] * 4 + 0x50) =
           0;
      FUN_109ecb4f0(*(undefined8 *)(pcVar39 + 0x40),*(undefined8 *)(pcVar39 + 0x48),lVar26);
      *(undefined8 *)(pcVar39 + 0x40) = 3;
      *(long *)(pcVar39 + 0x48) = lVar26;
      *(undefined8 *)(pbVar7 + -0x88) = 0;
      *(undefined8 *)(pbVar7 + -0x90) = 0;
      *(undefined8 *)(pbVar7 + -0x78) = 0;
      *(undefined8 *)(pbVar7 + -0x80) = 0;
      *(undefined8 *)(pbVar7 + -0x98) = 0;
      *(undefined8 *)(pbVar7 + -0xa0) = 0;
      *(code **)(pbVar7 + -0x88) = pcVar37;
      if (uVar44 == 0) {
        bVar18 = true;
      }
      else {
        pcVar13 = (code *)0x0;
        bVar18 = true;
        do {
          bVar18 = (bool)(pcVar13 == (code *)(ulong)*(uint *)(pbVar7 + (long)pcVar13 * 4 + -0xe0) &
                         bVar18);
          (pbVar7 + -0x80)[(long)pcVar13] =
               (bool)(char)*(uint *)(pbVar7 + (long)pcVar13 * 4 + -0xe0);
          pcVar13 = pcVar13 + 1;
        } while (pcVar41 != pcVar13);
      }
      if ((uVar5 != *(byte *)(lVar26 + 0x4c)) || (!bVar18)) {
        *(undefined8 *)(pbVar7 + -200) = *(undefined8 *)(pbVar7 + -0x98);
        *(undefined8 *)(pbVar7 + -0xd0) = *(undefined8 *)(pbVar7 + -0xa0);
        *(undefined8 *)(pbVar7 + -0xb8) = *(undefined8 *)(pbVar7 + -0x88);
        *(undefined8 *)(pbVar7 + -0xc0) = *(undefined8 *)(pbVar7 + -0x90);
        *(undefined8 *)(pbVar7 + -0xa8) = *(undefined8 *)(pbVar7 + -0x78);
        *(undefined8 *)(pbVar7 + -0xb0) = *(undefined8 *)(pbVar7 + -0x80);
        pcVar37 = *(code **)(pbVar7 + -0xb8);
        if (uVar5 == (byte)pcVar37[0x1c]) {
          if ((byte)cVar3 != 0) {
            pcVar13 = (code *)0x0;
            bVar18 = false;
            do {
              bVar18 = (bool)(pcVar13 != (code *)(ulong)(pbVar7 + -0xb0)[(long)pcVar13] | bVar18);
              pcVar13 = pcVar13 + 1;
            } while (pcVar41 != pcVar13);
            if (bVar18) goto LAB_109e82a5c;
          }
        }
        else {
LAB_109e82a5c:
          pcVar39 = *(code **)(pbVar7 + -0xf0);
          lVar26 = *(long *)(pcVar39 + 0x58);
          func_0x000109ecaef8(lVar26,0x154);
          pcVar37 = (code *)(lVar26 + 0x30);
          FUN_109ecb048();
          uVar6 = *(ushort *)(lVar26 + 0x2c) & 0xfffe | (ushort)(byte)pcVar39[0x50];
          *(ushort *)(lVar26 + 0x2c) = uVar6;
          *(ushort *)(lVar26 + 0x2c) = (*(ushort *)(pcVar39 + 0x54) & 0x1ff) << 3 | uVar6 & 0xf007;
          uVar8 = *(undefined8 *)(pbVar7 + -0xa0);
          uVar49 = *(undefined8 *)(pbVar7 + -0x88);
          uVar48 = *(undefined8 *)(pbVar7 + -0x90);
          *(undefined8 *)(lVar26 + 0x58) = *(undefined8 *)(pbVar7 + -0x98);
          *(undefined8 *)(lVar26 + 0x50) = uVar8;
          *(undefined8 *)(lVar26 + 0x68) = uVar49;
          *(undefined8 *)(lVar26 + 0x60) = uVar48;
          uVar8 = *(undefined8 *)(pbVar7 + -0x80);
          *(undefined8 *)(lVar26 + 0x78) = *(undefined8 *)(pbVar7 + -0x78);
          *(undefined8 *)(lVar26 + 0x70) = uVar8;
          FUN_109ecb4f0(*(undefined8 *)(pcVar39 + 0x40),*(undefined8 *)(pcVar39 + 0x48),lVar26);
          *(undefined8 *)(pcVar39 + 0x40) = 3;
          *(long *)(pcVar39 + 0x48) = lVar26;
        }
      }
      for (; *(int *)(pcVar10 + 0x28) != 0; pcVar10 = (code *)**(undefined8 **)(pcVar10 + 0x50)) {
      }
      lVar26 = *(long *)(*(long *)(pcVar10 + 0x38) + 0x10);
      while( true ) {
        uVar45 = *(uint *)(lVar26 + 4);
        param_6 = (code *)(ulong)uVar45;
        if ((uVar45 & 0xff) != 0x13) break;
        lVar26 = *(long *)(lVar26 + 0x30);
      }
      uVar19 = *(uint *)(pcVar43 + 4);
      unaff_x26 = (code *)(ulong)uVar19;
      unaff_x25 = (code *)0x1;
      pcVar22 = (code *)0x1;
      _calloc(1,0x28);
      if (((uVar19 ^ uVar45) & 0xff) == 0 || 0xf < (uVar19 & 0xff)) {
        pcVar38 = *(code **)(pbVar7 + -0xf0);
LAB_109e82f08:
        *(undefined8 *)(pcVar22 + 0x20) = *(undefined8 *)(pbVar7 + -0x100);
        lVar26 = 4;
        lVar30 = 0x10;
      }
      else {
        if ((1 << (ulong)(uVar19 & 0x1f) & 0x610U) == 0) {
          uVar45 = 1 << (ulong)(uVar19 & 0x1f);
          if ((uVar45 & 5) != 0) {
            uVar8 = 0x154;
            goto LAB_109e82ef4;
          }
          pcVar38 = *(code **)(pbVar7 + -0xf0);
          if ((uVar45 & 0xa000) == 0) goto LAB_109e82f08;
          uVar8 = 0x162;
LAB_109e82ef8:
          pcVar13 = pcVar38 + 0x40;
          FUN_109ece168(pcVar13,uVar8,pcVar37);
          pcVar37 = pcVar13;
          goto LAB_109e82f08;
        }
        if (pcVar43[0xd] != (code)0x2) {
          uVar8 = 0x162;
LAB_109e82ef4:
          pcVar38 = *(code **)(pbVar7 + -0xf0);
          goto LAB_109e82ef8;
        }
        *pcVar22 = (code)0x1;
        *(undefined8 *)(pbVar7 + -0x98) = 0;
        *(undefined8 *)(pbVar7 + -0x90) = 0;
        *(undefined8 *)(pbVar7 + -0xa0) = 0;
        *(undefined8 *)(pbVar7 + -0xd0) = 0;
        *(undefined8 *)(pbVar7 + -0xca) = 0;
        uVar45 = *(uint *)(pbVar7 + -0xf8) & -*(uint *)(pbVar7 + -0xf8);
        pcVar13 = pcVar37;
        if (pcVar37[0x1c] != (code)0x2) {
          pcVar39 = *(code **)(pbVar7 + -0xf0);
          unaff_x25 = *(code **)(pcVar39 + 0x58);
          func_0x000109ecaef8(unaff_x25,0x154);
          pcVar13 = unaff_x25 + 0x30;
          FUN_109ecb048();
          uVar6 = *(ushort *)(unaff_x25 + 0x2c) & 0xfffe | (ushort)(byte)pcVar39[0x50];
          *(ushort *)(unaff_x25 + 0x2c) = uVar6;
          *(ushort *)(unaff_x25 + 0x2c) =
               (*(ushort *)(pcVar39 + 0x54) & 0x1ff) << 3 | uVar6 & 0xf007;
          uVar8 = *(undefined8 *)(pbVar7 + -0xa0);
          *(undefined8 *)(unaff_x25 + 0x58) = *(undefined8 *)(pbVar7 + -0x98);
          *(undefined8 *)(unaff_x25 + 0x50) = uVar8;
          *(undefined8 *)(unaff_x25 + 0x60) = *(undefined8 *)(pbVar7 + -0x90);
          *(code **)(unaff_x25 + 0x68) = pcVar37;
          *(undefined2 *)(unaff_x25 + 0x70) = 0x100;
          *(undefined8 *)(unaff_x25 + 0x72) = *(undefined8 *)(pbVar7 + -0xd0);
          *(undefined8 *)(unaff_x25 + 0x78) = *(undefined8 *)(pbVar7 + -0xca);
          FUN_109ecb4f0(*(undefined8 *)(pcVar39 + 0x40),*(undefined8 *)(pcVar39 + 0x48),unaff_x25);
          *(undefined8 *)(pcVar39 + 0x40) = 3;
          *(code **)(pcVar39 + 0x48) = unaff_x25;
        }
        pcVar38 = *(code **)(pbVar7 + -0xf0);
        pcVar17 = pcVar38 + 0x40;
        FUN_109ece168(pcVar17,0x162,pcVar13);
        *(code **)(pcVar22 + 0x10) = pcVar17;
        *(uint *)(pcVar22 + 4) = uVar45;
        *(undefined8 *)(pcVar22 + 0x20) = *(undefined8 *)(pbVar7 + -0x100);
        *(undefined8 *)(pbVar7 + -0x98) = 0;
        *(undefined8 *)(pbVar7 + -0x90) = 0;
        *(undefined8 *)(pbVar7 + -0xa0) = 0;
        *(undefined8 *)(pbVar7 + -0xd0) = 0;
        *(undefined8 *)(pbVar7 + -0xca) = 0;
        *(uint *)(pbVar7 + -0xf8) = uVar45 << 1;
        param_6 = *(code **)(pcVar38 + 0x58);
        func_0x000109ecaef8(param_6,0x154);
        FUN_109ecb048();
        uVar6 = *(ushort *)(param_6 + 0x2c) & 0xfffe | (ushort)(byte)pcVar38[0x50];
        *(ushort *)(param_6 + 0x2c) = uVar6;
        *(ushort *)(param_6 + 0x2c) = (*(ushort *)(pcVar38 + 0x54) & 0x1ff) << 3 | uVar6 & 0xf007;
        uVar8 = *(undefined8 *)(pbVar7 + -0xa0);
        *(undefined8 *)(param_6 + 0x58) = *(undefined8 *)(pbVar7 + -0x98);
        *(undefined8 *)(param_6 + 0x50) = uVar8;
        *(undefined8 *)(param_6 + 0x60) = *(undefined8 *)(pbVar7 + -0x90);
        *(code **)(param_6 + 0x68) = pcVar37;
        *(undefined2 *)(param_6 + 0x70) = 0x302;
        *(undefined8 *)(param_6 + 0x72) = *(undefined8 *)(pbVar7 + -0xd0);
        *(undefined8 *)(param_6 + 0x78) = *(undefined8 *)(pbVar7 + -0xca);
        FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),param_6);
        *(undefined8 *)(pcVar38 + 0x40) = 3;
        *(code **)(pcVar38 + 0x48) = param_6;
        pcVar37 = pcVar38 + 0x40;
        FUN_109ece168(pcVar37,0x162,param_6 + 0x30);
        lVar26 = 8;
        lVar30 = 0x18;
      }
      *(code **)(pcVar22 + lVar30) = pcVar37;
      *(undefined4 *)(pcVar22 + lVar26) = *(undefined4 *)(pbVar7 + -0xf8);
    }
    pcVar13 = *(code **)(pcVar22 + 0x20);
    uVar12 = (undefined4)*(undefined8 *)(pcVar22 + 0x10);
    pcVar14 = (code *)(ulong)*(uint *)(pcVar22 + 4);
    pcVar15 = (code *)(ulong)(byte)*pcVar22;
    FUN_109e83464(pcVar38);
    if (*pcVar22 == (code)0x1) {
      uVar12 = (undefined4)*(undefined8 *)(pcVar22 + 0x18);
      pcVar13 = *(code **)(pcVar22 + 0x20);
      pcVar14 = (code *)(ulong)*(uint *)(pcVar22 + 8);
      pcVar15 = (code *)0x1;
      FUN_109e83464(pcVar38);
    }
    pcVar37 = pcVar22;
    _free();
    pcVar46 = (code *)(ulong)(uVar5 + uVar40);
LAB_109e82f68:
    pcVar21 = pcVar13;
    pcVar43 = pcVar14;
    param_5 = pcVar15;
    pcVar17 = pcVar16;
    pcVar13 = pcVar38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pbVar7 + -0x70)) {
      return pcVar46;
    }
LAB_109e82fa4:
    uVar8 = 0x109e82fa8;
    ___stack_chk_fail();
    pbVar7 = pbVar7 + -0x140;
    pcVar38 = pcVar37;
    pcVar16 = param_7;
    unaff_x24 = pcVar27;
LAB_109e82fa8:
    *(code **)(pbVar7 + -0x60) = pcVar46;
    *(code **)(pbVar7 + -0x58) = pcVar10;
    *(code **)(pbVar7 + -0x50) = unaff_x26;
    *(code **)(pbVar7 + -0x48) = unaff_x25;
    *(code **)(pbVar7 + -0x40) = pcVar22;
    *(code **)(pbVar7 + -0x38) = pcVar41;
    *(code **)(pbVar7 + -0x30) = pcVar13;
    *(code **)(pbVar7 + -0x28) = param_6;
    *(code **)(pbVar7 + -0x20) = param_8;
    *(code **)(pbVar7 + -0x18) = pcVar39;
    *(byte **)(pbVar7 + -0x10) = pbVar47;
    *(undefined8 *)(pbVar7 + -8) = uVar8;
    pbVar47 = pbVar7 + -0x10;
    *(code **)(pbVar7 + -0x70) = pcVar17;
    *(undefined4 *)(pbVar7 + -0x74) = uVar12;
    *(code **)(pbVar7 + -0x80) = pcVar21;
    pcVar37 = pcVar43;
    FUN_109eca23c();
    *(int *)(pbVar7 + -100) = (int)pcVar37;
    uVar45 = *(uint *)(pcVar43 + 4);
    pcVar37 = pcVar43;
    while ((uVar45 & 0xff) == 0x13) {
      pcVar37 = *(code **)(pcVar37 + 0x30);
      uVar45 = *(uint *)(pcVar37 + 4);
    }
    uVar45 = (uint)((uVar45 & 0xf0) == 0) & 0xe610U >> (ulong)(uVar45 & 0x1f);
    if (4 < (*(int *)(pbVar7 + -100) << (ulong)uVar45) + ((uint)param_5 & 3)) {
      uVar19 = 0xfffffffe;
      if (uVar45 == 0) {
        uVar19 = 0xffffffff;
      }
      iVar25 = 1;
      if (uVar45 != 0) {
        iVar25 = 2;
      }
      param_5 = (code *)(ulong)(((uint)param_5 + iVar25) - 1 & uVar19);
    }
    func_0x000109eca118();
    if (*(int *)(pbVar7 + -100) == 0) {
      return param_5;
    }
    *(undefined4 *)(pbVar7 + -0x88) = *(undefined4 *)(pbVar7 + 4);
    *(uint *)(pbVar7 + -0x84) = (uint)*pbVar7;
    unaff_x26 = pcVar16 + 0x80;
    puVar11 = (undefined8 *)**(undefined8 **)(pcVar38 + 0x58);
    FUN_109f6600c(puVar11,0x50,8);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    *(undefined4 *)(puVar11 + 3) = 5;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_6 = (code *)(puVar11 + 5);
    *puVar11 = 0;
    FUN_109ecb048(puVar11,param_6,1,0x20);
    *(undefined4 *)(puVar11 + 9) = 0;
    FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),puVar11);
    *(undefined8 *)(pcVar38 + 0x40) = 3;
    *(undefined8 **)(pcVar38 + 0x48) = puVar11;
    param_7 = *(code **)(pcVar38 + 0x58);
    func_0x000109ecaf70(param_7,1);
    *(undefined4 *)(param_7 + 0x2c) = *(undefined4 *)(pcVar16 + 0x2c);
    uVar8 = *(undefined8 *)(pcVar16 + 0x30);
    func_0x000109eca118();
    *(undefined8 *)(param_7 + 0x30) = uVar8;
    *(undefined8 *)(param_7 + 0x38) = 0;
    *(undefined8 *)(param_7 + 0x40) = 0;
    *(undefined8 *)(param_7 + 0x48) = 0;
    *(code **)(param_7 + 0x50) = unaff_x26;
    *(undefined8 *)(param_7 + 0x58) = 0;
    *(undefined8 *)(param_7 + 0x60) = 0;
    *(undefined8 *)(param_7 + 0x68) = 0;
    *(code **)(param_7 + 0x70) = param_6;
    FUN_109ecb048(param_7,param_7 + 0x80,pcVar16[0x9c],pcVar16[0x9d]);
    FUN_109ecb4f0(*(undefined8 *)(pcVar38 + 0x40),*(undefined8 *)(pcVar38 + 0x48),param_7);
    *(undefined8 *)(pcVar38 + 0x40) = 3;
    *(code **)(pcVar38 + 0x48) = param_7;
    param_4 = pcVar43;
    pcVar37 = (code *)0x3;
    param_8 = pcVar16;
    param_2 = (code *)0x0;
    pcVar41 = param_5;
    unaff_x25 = pcVar38;
    unaff_x27 = pcVar43;
    unaff_x28 = param_7;
    if (*(int *)(pbVar7 + -0x84) == 0) {
      if (unaff_x24 == (code *)0x0) {
        pcVar27 = (code *)0x0;
      }
      else {
        pcVar27 = *(code **)(pcVar38 + 0x10);
        *(code **)(pbVar7 + -0xa0) = unaff_x24;
        pbVar7[-0x98] = false;
        pbVar7[-0x97] = false;
        pbVar7[-0x96] = false;
        pbVar7[-0x95] = false;
        pbVar7[-0x94] = false;
        pbVar7[-0x93] = false;
        pbVar7[-0x92] = false;
        pbVar7[-0x91] = false;
        FUN_109f65d74(pcVar27,&UNK_10f60f043);
      }
      *(undefined4 *)(pbVar7 + -0x9c) = *(undefined4 *)(pbVar7 + -0x88);
      pbVar7[-0xa0] = false;
      pbVar1 = pbVar7 + -0x80;
      pcVar13 = (code *)(ulong)*(uint *)(pbVar7 + -0x74);
      pcVar17 = *(code **)(pbVar7 + -0x70);
      uVar8 = 0x109e831e0;
      pbVar7 = pbVar7 + -0xa0;
      pcVar22 = *(code **)pbVar1;
    }
    else {
      pbVar7[-0x9c] = false;
      pbVar7[-0x9b] = false;
      pbVar7[-0x9a] = false;
      pbVar7[-0x99] = false;
      pbVar7[-0xa0] = false;
      pbVar1 = pbVar7 + -0x80;
      pcVar13 = (code *)(ulong)*(uint *)(pbVar7 + -0x74);
      pcVar17 = *(code **)(pbVar7 + -0x70);
      uVar8 = 0x109e8318c;
      pbVar7 = pbVar7 + -0xa0;
      pcVar22 = *(code **)pbVar1;
      pcVar27 = unaff_x24;
    }
  } while( true );
  pcVar41 = (code *)0x0;
  *(undefined8 *)(pbVar7 + -0xa0) = 0;
  *(undefined8 *)(pbVar7 + -0x98) = 0;
  *(undefined8 *)(pbVar7 + -0xd0) = 0;
  *(undefined8 *)(pbVar7 + -200) = 0;
  *(undefined4 *)(pbVar7 + -0xe4) = 0;
  *(undefined4 *)(pbVar7 + -0xe0) = 0;
  uVar36 = 4 - uVar36;
  uVar35 = uVar36 >> 1;
  if ((1 << (ulong)(uVar19 & 0x1f) & 0xe610U) == 0) {
    uVar35 = uVar36;
  }
  if (uVar45 < 0x10) {
    uVar36 = uVar35;
  }
  unaff_x28 = (code *)(ulong)uVar36;
  if ((*(int *)(pbVar7 + -0xf8) == 0) || (uVar36 == 0)) {
LAB_109e82178:
    pcVar37 = pcVar41;
    if (uVar36 == 0) {
      bVar18 = true;
      goto LAB_109e8223c;
    }
  }
  else {
    pcVar41 = (code *)0x0;
    do {
      if ((*(uint *)(pbVar7 + -0xf8) >> (ulong)((uint)pcVar41 & 0x1f) & 1) != 0) goto LAB_109e82178;
      uVar45 = (uint)pcVar41 + 1;
      pcVar41 = (code *)(ulong)uVar45;
      pcVar37 = unaff_x28;
    } while (uVar36 != uVar45);
  }
  _memcpy(pbVar7 + -0xe0,pcVar37 + 0x10f6101d0,unaff_x28);
  piVar23 = (int *)(pbVar7 + -0xa0);
  pcVar27 = pcVar37;
  pcVar41 = unaff_x28;
  do {
    *piVar23 = (int)pcVar27;
    pcVar27 = (code *)(ulong)((int)pcVar27 + 1);
    pcVar41 = pcVar41 + -1;
    piVar23 = piVar23 + 1;
  } while (pcVar41 != (code *)0x0);
  bVar18 = false;
  pcVar27 = *(code **)(pbVar7 + -0x110);
  pcVar41 = pcVar37;
LAB_109e8223c:
  uVar45 = (byte)cVar3 - uVar36;
  unaff_x26 = (code *)(ulong)uVar45;
  uVar19 = (uint)pcVar41;
  if (uVar44 != uVar36) {
    uVar35 = uVar19 + uVar36;
    puVar29 = pbVar7 + -0xe4;
    puVar28 = (uint *)(pbVar7 + -0xd0);
    pcVar37 = unaff_x26;
    do {
      *puVar28 = uVar35;
      *puVar29 = (&UNK_10f6101d0)[uVar35];
      uVar35 = uVar35 + 1;
      pcVar37 = pcVar37 + -1;
      puVar29 = puVar29 + 1;
      puVar28 = puVar28 + 1;
    } while (pcVar37 != (code *)0x0);
  }
  param_6 = pcVar17;
  param_2 = pcVar43;
  if (bVar18) {
    if (pcVar27 == (code *)0x0) {
      unaff_x25 = (code *)0x0;
      lVar26 = *(long *)(pbVar7 + -0xf0);
    }
    else {
      lVar26 = *(long *)(pbVar7 + -0xf0);
      unaff_x25 = *(code **)(lVar26 + 0x10);
      *(code **)(pbVar7 + -0x140) = pcVar27;
      *(bool **)(pbVar7 + -0x138) = pbVar7 + -0xe4;
      FUN_109f65d74(unaff_x25,&UNK_10f518dd3);
    }
    if (*(int *)(lVar26 + 0x68) == 8) {
      if (pcVar21 == (code *)0x0) {
        cVar3 = *(code *)(*(long *)(*(long *)(pbVar7 + -0x100) + 0x30) + 0xd);
        pcVar41 = (code *)(*(long *)(pbVar7 + -0x100) + 0x80);
        lVar26 = *(long *)(pbVar7 + -0xf0);
        unaff_x28 = *(code **)(lVar26 + 0x58);
        FUN_109ecb0a8(unaff_x28,0x112);
        unaff_x28[0x50] = cVar3;
        pcVar21 = unaff_x28 + 0x30;
        FUN_109ecb048();
        *(undefined8 *)(unaff_x28 + 0x80) = 0;
        *(undefined8 *)(unaff_x28 + 0x88) = 0;
        *(undefined8 *)(unaff_x28 + 0x90) = 0;
        *(code **)(unaff_x28 + 0x98) = pcVar41;
        *(undefined4 *)
         (unaff_x28 +
         (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(unaff_x28 + 0x28) * 0x68] * 4 + 0x50) = 0;
        FUN_109ecb4f0(*(undefined8 *)(lVar26 + 0x40),*(undefined8 *)(lVar26 + 0x48),unaff_x28);
        *(undefined8 *)(lVar26 + 0x40) = 3;
        *(code **)(lVar26 + 0x48) = unaff_x28;
      }
      pcVar38 = *(code **)(pbVar7 + -0xf0);
      unaff_x24 = pcVar38 + 0x40;
      func_0x000109e832c4(unaff_x24,pcVar21,pbVar7 + -0xd0,unaff_x26);
      pcVar13 = (code *)0xffffffff;
    }
    else {
      unaff_x24 = (code *)0x0;
      pcVar13 = (code *)(ulong)(uint)(~(-1 << (ulong)(uVar45 & 0x1f)) <<
                                     (ulong)(uVar19 + uVar36 & 0x1f));
      pcVar38 = *(code **)(pbVar7 + -0xf0);
    }
    param_4 = (code *)(ulong)(byte)pcVar43[4];
    func_0x000109ec6c94(param_4,unaff_x26,1,0,0,0);
    *(undefined4 *)(pbVar7 + -0x13c) = *(undefined4 *)(pbVar7 + -0x104);
    pbVar7[-0x140] = false;
    param_7 = *(code **)(pbVar7 + -0x100);
    uVar8 = 0x109e824d8;
    pbVar7 = pbVar7 + -0x140;
    pcVar22 = unaff_x24;
    param_5 = (code *)(ulong)(uVar40 + 1);
    pcVar27 = unaff_x25;
    pcVar37 = pcVar38;
    param_8 = (code *)(ulong)(uVar40 + 1);
    unaff_x27 = pcVar13;
  }
  else {
    if (pcVar27 == (code *)0x0) {
      *(undefined8 *)(pbVar7 + -0xf8) = 0;
    }
    else {
      uVar8 = *(undefined8 *)(pcVar38 + 0x10);
      *(code **)(pbVar7 + -0x140) = pcVar27;
      *(bool **)(pbVar7 + -0x138) = pbVar7 + -0xe0;
      FUN_109f65d74(uVar8,&UNK_10f518dd3);
      *(undefined8 *)(pbVar7 + -0xf8) = uVar8;
    }
    if (*(int *)(pcVar38 + 0x68) == 8) {
      pcVar37 = pcVar21;
      if (pcVar21 == (code *)0x0) {
        pcVar37 = (code *)(*(long *)(pbVar7 + -0xf0) + 0x40);
        func_0x000109e83218(pcVar37,*(undefined8 *)(pbVar7 + -0x100));
      }
      pcVar38 = *(code **)(pbVar7 + -0xf0);
      unaff_x24 = pcVar38 + 0x40;
      func_0x000109e832c4(unaff_x24,pcVar37,pbVar7 + -0xa0,unaff_x28);
      pcVar13 = (code *)0xffffffff;
    }
    else {
      unaff_x24 = (code *)0x0;
      pcVar13 = (code *)(ulong)(uint)(~(-1 << (ulong)(uVar36 & 0x1f)) << (ulong)(uVar19 & 0x1f));
      pcVar38 = *(code **)(pbVar7 + -0xf0);
    }
    param_4 = (code *)(ulong)(byte)pcVar43[4];
    func_0x000109ec6c94(param_4,unaff_x28,1,0,0,0);
    *(undefined4 *)(pbVar7 + -0x13c) = *(undefined4 *)(pbVar7 + -0x104);
    pbVar7[-0x140] = false;
    param_7 = *(code **)(pbVar7 + -0x100);
    pcVar27 = *(code **)(pbVar7 + -0xf8);
    uVar8 = 0x109e82378;
    pbVar7 = pbVar7 + -0x140;
    pcVar22 = unaff_x24;
    param_5 = param_8;
    pcVar37 = pcVar17;
    unaff_x25 = pcVar13;
    unaff_x27 = pcVar21;
  }
  goto SUB_109e81db8;
}



/* Entry: 109e83218; end: 109e83463;  */

long FUN_109e83218(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  uVar1 = *(undefined1 *)(*(long *)(param_2 + 0x30) + 0xd);
  lVar2 = param_1[3];
  FUN_109ecb0a8(lVar2,0x112);
  *(undefined1 *)(lVar2 + 0x50) = uVar1;
  FUN_109ecb048();
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(long *)(lVar2 + 0x98) = param_2 + 0x80;
  *(undefined4 *)
   (lVar2 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar2 + 0x28) * 0x68] * 4 + 0x50) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar2);
  *param_1 = 3;
  param_1[1] = lVar2;
  return lVar2 + 0x30;
}



/* Entry: 109e83464; end: 109e8370f;  */

void FUN_109e83464(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  long alStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  for (lVar11 = *(long *)(param_2 + 0x30); *(char *)(lVar11 + 4) == '\x13';
      lVar11 = *(long *)(lVar11 + 0x30)) {
  }
  bVar1 = *(byte *)(lVar11 + 0xd);
  uVar10 = (ulong)bVar1;
  if (bVar1 != *(byte *)(param_3 + 0x1c)) {
    if (bVar1 != 0) {
      uVar8 = 0;
      cVar9 = '\0';
      do {
        if ((param_4 >> (ulong)((uint)uVar8 & 0x1f) & 1) == 0) {
          puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x58);
          FUN_109f6600c(puVar4,0x48,8);
          *(undefined4 *)(puVar4 + 3) = 7;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          FUN_109ecb048();
          FUN_109ece5ec(param_1 + 0x40,puVar4);
          alStack_88[uVar8] = (long)(puVar4 + 5);
        }
        else {
          lVar11 = param_3;
          if (((param_5 == 0) || (*(int *)(param_1 + 0x68) != 4)) &&
             (*(char *)(param_3 + 0x1c) != '\x01' || cVar9 != '\0')) {
            lVar3 = *(long *)(param_1 + 0x58);
            FUN_109ecaef8(lVar3,0x154);
            lVar11 = lVar3 + 0x30;
            FUN_109ecb048();
            uVar2 = *(ushort *)(lVar3 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 0x50);
            *(ushort *)(lVar3 + 0x2c) = uVar2;
            *(ushort *)(lVar3 + 0x2c) = (*(ushort *)(param_1 + 0x54) & 0x1ff) << 3 | uVar2 & 0xf007;
            *(undefined8 *)(lVar3 + 0x50) = 0;
            *(undefined8 *)(lVar3 + 0x58) = 0;
            *(undefined8 *)(lVar3 + 0x60) = 0;
            *(long *)(lVar3 + 0x68) = param_3;
            *(char *)(lVar3 + 0x70) = cVar9;
            *(undefined8 *)(lVar3 + 0x71) = 0;
            *(undefined8 *)(lVar3 + 0x78) = 0;
            FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar3);
            *(undefined8 *)(param_1 + 0x40) = 3;
            *(long *)(param_1 + 0x48) = lVar3;
          }
          alStack_88[uVar8] = lVar11;
          cVar9 = cVar9 + '\x01';
        }
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
    }
    func_0x000109ecd728(uVar10);
    param_3 = param_1 + 0x40;
    FUN_109ece300(param_3,uVar10,alStack_88);
    uVar10 = (ulong)*(byte *)(param_3 + 0x1c);
  }
  param_4 = param_4 & (-1 << (ulong)((uint)uVar10 & 0x1f) ^ 0xffffffffU);
  lVar11 = *(long *)(param_1 + 0x58);
  FUN_109ecb0a8(lVar11,0x26f);
  bVar1 = *(byte *)(param_3 + 0x1c);
  *(byte *)(lVar11 + 0x50) = bVar1;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(undefined8 *)(lVar11 + 0x88) = 0;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  *(long *)(lVar11 + 0x98) = param_2 + 0x80;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  *(undefined8 *)(lVar11 + 0xb0) = 0;
  *(long *)(lVar11 + 0xb8) = param_3;
  uVar7 = 0xffffffff;
  if (bVar1 != 0x20) {
    uVar7 = ~(-1 << (ulong)(bVar1 & 0x1f));
  }
  if (param_4 == 0) {
    param_4 = uVar7;
  }
  lVar3 = (ulong)*(uint *)(lVar11 + 0x28) * 0x68;
  *(uint *)(lVar11 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar3] * 4 + -4) = param_4;
  *(undefined4 *)(lVar11 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar3] * 4 + -4) = 0;
  lVar3 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  FUN_109ecb4f0(lVar3,lVar5,lVar11);
  *(undefined8 *)(param_1 + 0x40) = 3;
  *(long *)(param_1 + 0x48) = lVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = (undefined8 *)**(undefined8 **)(lVar3 + 0x58);
  FUN_109f6600c(puVar4,0xa0,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
  }
  *(undefined4 *)(puVar4 + 3) = 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  *(uint *)((long)puVar4 + 0x2c) = *(uint *)(lVar5 + 0x20) & 0x1fffff;
  puVar4[6] = *(undefined8 *)(lVar5 + 0x10);
  puVar4[7] = lVar5;
  if (*(char *)(*(long *)(lVar3 + 0x58) + 0x61) == '\x0e') {
    uVar6 = *(undefined4 *)(*(long *)(lVar3 + 0x58) + 0x160);
  }
  else {
    uVar6 = 0x20;
  }
  FUN_109ecb048(puVar4,puVar4 + 0x10,1,uVar6);
  FUN_109ecb4f0(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x48),puVar4);
  *(undefined8 *)(lVar3 + 0x40) = 3;
  *(undefined8 **)(lVar3 + 0x48) = puVar4;
  func_0x000109e81db8(lVar3,0,0xffffffff,*(undefined8 *)(lVar5 + 0x10),
                      (uint)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x24) & 3 |
                      *(int *)(lVar5 + 0x3c) << 2,lVar5,puVar4,*(undefined8 *)(lVar5 + 0x18),
                      *(int *)(lVar3 + 0x6c) != 0,0);
  return;
}



/* Entry: 109e83710; end: 109e8381b;  */

void FUN_109e83710(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x58);
  FUN_109f6600c(puVar1,0xa0,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  *(undefined4 *)(puVar1 + 3) = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(uint *)((long)puVar1 + 0x2c) = *(uint *)(param_2 + 0x20) & 0x1fffff;
  puVar1[6] = *(undefined8 *)(param_2 + 0x10);
  puVar1[7] = param_2;
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x61) == '\x0e') {
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x160);
  }
  else {
    uVar2 = 0x20;
  }
  FUN_109ecb048(puVar1,puVar1 + 0x10,1,uVar2);
  FUN_109ecb4f0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),puVar1);
  *(undefined8 *)(param_1 + 0x40) = 3;
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  func_0x000109e81db8(param_1,0,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                      (uint)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x24) & 3 |
                      *(int *)(param_2 + 0x3c) << 2,param_2,puVar1,*(undefined8 *)(param_2 + 0x18),
                      *(int *)(param_1 + 0x6c) != 0,0);
  return;
}



/* Entry: 109e8381c; end: 109e842bb;  */

undefined8 * FUN_109e8381c(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 **ppuVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined1 uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  plVar18 = *(long **)param_1[0x2f];
  if (plVar18 != (long *)0x0) {
    plVar11 = (long *)param_1[0x2f];
    plVar23 = (long *)0x0;
    do {
      plVar15 = plVar11;
      if ((char)plVar11[7] == '\0') {
        plVar15 = plVar23;
      }
      plVar19 = (long *)*plVar18;
      plVar11 = plVar18;
      plVar23 = plVar15;
      plVar18 = plVar19;
    } while (plVar19 != (long *)0x0);
    if (plVar15 != (long *)0x0) {
      lVar12 = plVar15[6];
      goto LAB_109e8387c;
    }
  }
  lVar12 = 0;
LAB_109e8387c:
  puStack_70 = *(undefined8 **)(lVar12 + 0x30);
  if (*(int *)(puStack_70 + 2) == 0) {
    uVar24 = 0;
    puVar13 = puStack_70;
    goto LAB_109e838bc;
  }
  puVar13 = (undefined8 *)puStack_70[1];
  puStack_70 = (undefined8 *)0x0;
  if (puVar13[1] != 0) {
    puStack_70 = puVar13;
  }
  uVar24 = 1;
  iVar1 = *(int *)(puVar13 + 2);
  puVar13 = puStack_70;
  while (iVar1 != 3) {
LAB_109e838bc:
    puStack_70 = (undefined8 *)puStack_70[3];
    iVar1 = *(int *)(puStack_70 + 2);
  }
  uVar20 = 0;
  puVar22 = *(undefined8 **)(puStack_70[4] + 0x18);
  uStack_80 = 0;
  puVar4 = (undefined8 *)0x0;
  pcVar5 = param_2;
  uStack_90 = uVar24;
  plStack_88 = puVar13;
  puStack_78 = puVar22;
  while( true ) {
    while( true ) {
      for (; cVar2 = *pcVar5, cVar2 == '.'; pcVar5 = pcVar5 + (long)pcVar8 + 1) {
        pcVar7 = pcVar5 + 1;
        FUN_109e842bc();
        uVar17 = uVar20;
        FUN_109ec85e4(uVar20,pcVar7);
        puVar6 = (undefined8 *)*puVar22;
        FUN_109f6600c(puVar6,0xa0,8);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[0x11] = 0;
          puVar6[0x10] = 0;
          puVar6[0x13] = 0;
          puVar6[0x12] = 0;
          puVar6[0xd] = 0;
          puVar6[0xc] = 0;
          puVar6[0xf] = 0;
          puVar6[0xe] = 0;
          puVar6[9] = 0;
          puVar6[8] = 0;
          puVar6[0xb] = 0;
          puVar6[10] = 0;
          puVar6[5] = 0;
          puVar6[4] = 0;
          puVar6[7] = 0;
          puVar6[6] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
        }
        *(undefined4 *)(puVar6 + 3) = 1;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 5) = 4;
        puVar6[10] = 0;
        *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)((long)puVar4 + 0x2c);
        lVar21 = (uVar17 & 0xffffffff) * 0x30;
        puVar6[6] = *(undefined8 *)(*(long *)(puVar4[6] + 0x30) + lVar21);
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = puVar4 + 0x10;
        *(int *)(puVar6 + 0xb) = (int)uVar17;
        FUN_109ecb048(puVar6,puVar6 + 0x10,*(undefined1 *)((long)puVar4 + 0x9c),
                      *(undefined1 *)((long)puVar4 + 0x9d));
        FUN_109ecb4f0(uVar24,puVar13,puVar6);
        uStack_90 = 3;
        uVar20 = *(ulong *)(*(long *)(uVar20 + 0x30) + lVar21);
        pcVar8 = pcVar7;
        plStack_88 = puVar6;
        _strlen();
        _free(pcVar7);
        param_3 = 0;
        uVar24 = 3;
        puVar4 = puVar6;
        puVar13 = puVar6;
      }
      if (cVar2 != '[') break;
      puStack_68 = (undefined8 *)0x0;
      pcVar5 = pcVar5 + 1;
      _strtol(pcVar5,&puStack_68,10);
      puVar6 = (undefined8 *)*puVar22;
      FUN_109f6600c(puVar6,0x50,8);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[7] = 0;
        puVar6[6] = 0;
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
      }
      *(undefined4 *)(puVar6 + 3) = 5;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      FUN_109ecb048(puVar6,puVar6 + 5,1,0x20);
      *(int *)(puVar6 + 9) = (int)pcVar5;
      FUN_109ecb4f0(uVar24,puVar13,puVar6);
      puVar13 = puVar22;
      func_0x000109ecaf70(puVar22,1);
      *(undefined4 *)((long)puVar13 + 0x2c) = *(undefined4 *)((long)puVar4 + 0x2c);
      uVar24 = puVar4[6];
      func_0x000109eca118();
      puVar13[6] = uVar24;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = puVar4 + 0x10;
      puVar13[0xb] = 0;
      puVar13[0xc] = 0;
      puVar13[0xd] = 0;
      puVar13[0xe] = puVar6 + 5;
      FUN_109ecb048(puVar13,puVar13 + 0x10,*(undefined1 *)((long)puVar4 + 0x9c),
                    *(undefined1 *)((long)puVar4 + 0x9d));
      FUN_109ecb4f0(3,puVar6,puVar13);
      uStack_90 = 3;
      for (; *(char *)(uVar20 + 4) == '\x13'; uVar20 = *(ulong *)(uVar20 + 0x30)) {
      }
      param_3 = 0;
      pcVar5 = (char *)((long)puStack_68 + 1);
      uVar24 = 3;
      puVar4 = puVar13;
      plStack_88 = puVar13;
    }
    if (cVar2 == '\0') break;
    pcVar7 = pcVar5;
    FUN_109e842bc();
    pcVar8 = pcVar7;
    _strlen();
    _free(pcVar7);
    if (param_3 == 0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)*puVar22;
    FUN_109f6600c(puVar4,0xa0,8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
    }
    *(undefined4 *)(puVar4 + 3) = 1;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(uint *)((long)puVar4 + 0x2c) = *(uint *)(param_3 + 0x20) & 0x1fffff;
    puVar4[6] = *(undefined8 *)(param_3 + 0x10);
    puVar4[7] = param_3;
    if (*(char *)((long)puVar22 + 0x61) == '\x0e') {
      uVar10 = *(undefined4 *)(puVar22 + 0x2c);
    }
    else {
      uVar10 = 0x20;
    }
    pcVar5 = pcVar5 + (long)pcVar8;
    FUN_109ecb048(puVar4,puVar4 + 0x10,1,uVar10);
    FUN_109ecb4f0(uVar24,puVar13,puVar4);
    uStack_90 = 3;
    uVar24 = 3;
    uVar20 = *(ulong *)(param_3 + 0x10);
    param_3 = 0;
    puVar13 = puVar4;
    plStack_88 = puVar4;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6 = param_1;
  FUN_109f658b0(param_1,0x98);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0x12] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  puVar14 = puVar6;
  FUN_109f65c2c(puVar6,param_2);
  uVar17 = 0;
  do {
    bVar3 = *(byte *)((long)puVar14 + uVar17);
    if (bVar3 < 0x5b) {
      if (bVar3 == 0x2e) {
        uVar16 = 0x5f;
        goto LAB_109e83c5c;
      }
      if (bVar3 == 0) break;
    }
    else if ((bVar3 == 0x5d) || (bVar3 == 0x5b)) {
      uVar16 = 0x40;
LAB_109e83c5c:
      *(undefined1 *)((long)puVar14 + uVar17) = uVar16;
    }
    uVar17 = (ulong)((int)uVar17 + 1);
  } while( true );
  ppuVar9 = &puStack_68;
  puStack_68 = puVar14;
  FUN_109f65cf8(ppuVar9,&UNK_10f6101e3,4);
  puVar14 = puStack_68;
  if ((((ulong)ppuVar9 & 1) == 0) && (puStack_68 != (undefined8 *)0x0)) {
    puVar14 = puStack_68 + -6;
    FUN_109f65aa4(puVar14);
    FUN_109f65ae0(puVar14);
    puVar14 = (undefined8 *)0x0;
  }
  puVar6[2] = uVar20;
  puVar6[3] = puVar14;
  *(undefined4 *)((long)puVar6 + 0x3c) = 0xffffffff;
  *(byte *)((long)puVar6 + 0x4c) = *(byte *)((long)puVar6 + 0x4c) | 3;
  *(undefined2 *)((long)puVar6 + 0x4e) = 0xffff;
  puVar6[4] = puVar6[4] & 0xffffffffffe00000 | 0x40000008;
  FUN_109eca704(param_1,puVar6);
  plVar18 = (long *)*puVar22;
  FUN_109f6600c(plVar18,0xa0,8);
  if (plVar18 != (long *)0x0) {
    plVar18[0x11] = 0;
    plVar18[0x10] = 0;
    plVar18[0x13] = 0;
    plVar18[0x12] = 0;
    plVar18[0xd] = 0;
    plVar18[0xc] = 0;
    plVar18[0xf] = 0;
    plVar18[0xe] = 0;
    plVar18[9] = 0;
    plVar18[8] = 0;
    plVar18[0xb] = 0;
    plVar18[10] = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[7] = 0;
    plVar18[6] = 0;
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[3] = 0;
    plVar18[2] = 0;
  }
  *(undefined4 *)(plVar18 + 3) = 1;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = 0;
  *(undefined4 *)(plVar18 + 5) = 0;
  *(uint *)((long)plVar18 + 0x2c) = *(uint *)(puVar6 + 4) & 0x1fffff;
  plVar18[6] = puVar6[2];
  plVar18[7] = (long)puVar6;
  if (*(char *)((long)puVar22 + 0x61) == '\x0e') {
    uVar10 = *(undefined4 *)(puVar22 + 0x2c);
  }
  else {
    uVar10 = 0x20;
  }
  FUN_109ecb048(plVar18,plVar18 + 0x10,1,uVar10);
  FUN_109ecb4f0(uVar24,puVar13,plVar18);
  uStack_90 = 3;
  lVar21 = *(long *)(lVar12 + 0x30);
  plVar11 = plVar18;
  do {
    if (lVar21 == 0) {
      return puVar6;
    }
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(char *)((long)param_1 + 0x61) == '\x03') {
      plVar15 = (long *)*plVar23;
      plStack_88 = plVar11;
      if (plVar15 != (long *)0x0) {
        do {
          plVar11 = plVar23;
          plVar19 = (long *)0x0;
          if (*plVar15 != 0) {
            plVar19 = plVar15;
          }
          do {
            plVar23 = plVar19;
            if (((int)plVar11[3] == 4) && ((int)plVar11[5] == 0x6e)) {
              uStack_90 = 2;
              plStack_88 = plVar11;
              func_0x000109e83eac(&uStack_90,puVar4,plVar18,uVar20);
            }
            plVar11 = plStack_88;
            if (plVar23 == (long *)0x0) goto LAB_109e83e78;
            plVar15 = (long *)*plVar23;
            plVar11 = plVar23;
            plVar19 = (long *)0x0;
          } while (plVar15 == (long *)0x0);
        } while( true );
      }
    }
    else if (plVar23 == (long *)(lVar21 + 0x30)) {
      if (lVar21 == *(long *)(lVar12 + 0x48)) {
        plStack_88 = (long *)0x0;
LAB_109e83e5c:
        uStack_90 = 3;
        goto LAB_109e83e60;
      }
    }
    else {
      plStack_88 = *(long **)(lVar21 + 0x38);
      if (((int)plStack_88[3] == 6) && (*(uint *)(plStack_88 + 5) < 2)) {
        uStack_90 = 2;
LAB_109e83e60:
        func_0x000109e83eac(&uStack_90,puVar4,plVar18,uVar20);
        plVar11 = plStack_88;
      }
      else if (lVar21 == *(long *)(lVar12 + 0x48)) goto LAB_109e83e5c;
    }
LAB_109e83e78:
    plStack_88 = plVar11;
    FUN_109ecc434();
    plVar11 = plStack_88;
  } while( true );
}



/* Entry: 109e842bc; end: 109e8432b;  */

void FUN_109e842bc(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  _strchr(param_1,0x2e);
  uVar3 = param_1;
  _strchr(param_1,0x5b);
  if (uVar3 == 0 && uVar2 == 0) {
    uVar2 = param_1;
    _strlen(param_1);
    iVar1 = (int)uVar2;
  }
  else if ((uVar3 == 0) || (uVar2 != 0 && uVar2 < uVar3)) {
    iVar1 = (int)uVar2 - (int)param_1;
  }
  else {
    iVar1 = (int)uVar3 - (int)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strndup_11034cc10)(param_1,(long)iVar1);
  return;
}



/* Entry: 109e8432c; end: 109e84847;  */

void FUN_109e8432c(undefined8 param_1,uint param_2,undefined8 param_3,int *param_4,int *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  int iVar2;
  byte abStack_d0 [8];
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ushort uStack_88;
  undefined4 uStack_84;
  byte abStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ushort uStack_38;
  undefined4 uStack_34;
  
  if ((param_2 & 0xfffffffe) == 2) {
LAB_109e844ec:
    if (param_4 != (int *)0x0) goto LAB_109e844f0;
  }
  else {
    uStack_6c = 0;
    abStack_80[0] = 1;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_34 = 8;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_bc = 0;
    abStack_d0[0] = 1;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_84 = 4;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    if (param_4 == (int *)0x0) {
      if (param_5 != (int *)0x0) goto LAB_109e84410;
      uStack_88._0_1_ = 0;
      uVar1 = 0;
LAB_109e84498:
      FUN_109e84848(param_4,abStack_80,uStack_c0,uVar1,(byte)uStack_88 & 1);
      iVar2 = *param_5;
LAB_109e844ac:
      if (iVar2 == 4) {
        uStack_70 = 0xff;
      }
      if ((((abStack_d0[0] & 1) != 0) || ((int)uStack_98 != 0)) || ((uStack_88 & 1) != 0)) {
        FUN_109e84848(param_5,abStack_d0,uStack_70,uStack_48 & 0xffffffff,(undefined1)uStack_38);
      }
      goto LAB_109e844ec;
    }
    func_0x000109e84530(abStack_80,*(undefined8 *)(*(long *)(param_4 + 10) + 0x160),param_6,param_7)
    ;
    if (*param_4 == 1) {
      abStack_80[0] = 0;
    }
    if (param_5 != (int *)0x0) {
LAB_109e84410:
      func_0x000109e84530(abStack_d0,*(undefined8 *)(*(long *)(param_5 + 10) + 0x160),param_6,
                          param_7);
      iVar2 = *param_5;
      if (iVar2 != 4) {
        abStack_d0[0] = 0;
      }
      if (param_4 == (int *)0x0) {
        if (abStack_d0[0] == 1) {
          FUN_109e84848(param_5,abStack_d0,0xff,3,1);
        }
        goto LAB_109e84508;
      }
      if ((((abStack_80[0] & 1) != 0) || ((int)uStack_48 != 0)) || ((uStack_38 & 1) != 0)) {
        uVar1 = uStack_98 & 0xffffffff;
        goto LAB_109e84498;
      }
      goto LAB_109e844ac;
    }
    if (abStack_80[0] == 1) {
      FUN_109e84848(param_4,abStack_80,0xff,3,1);
    }
LAB_109e844f0:
    FUN_109efa06c(*(undefined8 *)(*(long *)(param_4 + 10) + 0x160),FUN_109efa1c4);
  }
  if (param_5 == (int *)0x0) {
    return;
  }
LAB_109e84508:
  FUN_109efa06c(*(undefined8 *)(*(long *)(param_5 + 10) + 0x160),FUN_109efa1c4);
  return;
}



/* Entry: 109e84848; end: 109e84e37;  */

undefined8 *
FUN_109e84848(undefined8 *param_1,byte *param_2,undefined8 *param_3,undefined *param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  long alStack_f8 [12];
  undefined8 *puStack_98;
  byte abStack_90 [32];
  long lStack_70;
  
  uVar8 = (uint)param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_f8[1] = 0;
  alStack_f8[0] = 0;
  alStack_f8[3] = 0;
  alStack_f8[2] = 0;
  alStack_f8[5] = 0;
  alStack_f8[4] = 0;
  alStack_f8[7] = 0;
  alStack_f8[6] = 0;
  alStack_f8[9] = 0;
  alStack_f8[8] = 0;
  alStack_f8[0xb] = 0;
  alStack_f8[10] = 0;
  puStack_98 = (undefined8 *)0x0;
  puVar5 = param_1;
  pbVar6 = param_2;
  puVar7 = param_3;
  if (*param_2 == 1) {
    lVar19 = 0;
    puVar20 = *(undefined8 **)(param_1[5] + 0x160);
    uVar2 = *(uint *)(param_2 + 0x10);
    do {
      uVar3 = 1 << (ulong)((int)lVar19 + 7U & 0x1f);
      if ((uVar3 & uVar2) != 0) {
        puVar5 = puVar20;
        param_4 = &DAT_10e05dce0;
        if ((uVar3 & (uint)param_3) == 0) {
          _snprintf(abStack_90,0x20,&UNK_10f61023b);
          pbVar6 = abStack_90;
          puVar7 = (undefined8 *)0x20000;
          FUN_109e84e38(puVar20,pbVar6);
        }
        else {
          _snprintf(abStack_90,0x20,&UNK_10f61024c);
          puVar7 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x4c);
          pbVar6 = abStack_90;
          FUN_109e84e38(puVar20,pbVar6);
          *(int *)((long)puVar5 + 0x3c) = (int)lVar19 + 0xb;
          puVar5[4] = puVar5[4] | 0x40000000000;
        }
        alStack_f8[lVar19 + 7] = (long)puVar5;
      }
      lVar19 = lVar19 + -1;
    } while (lVar19 != -8);
  }
  lVar19 = 0;
  uVar2 = *(uint *)(param_2 + 0x3c);
  bVar4 = true;
  do {
    bVar18 = bVar4;
    if (((uVar2 | uVar8) >> lVar19 & 1) == 0) {
      if (*(long *)(param_2 + lVar19 * 8 + 0x18) != 0) {
        _snprintf(abStack_90,0x20,&UNK_10f6101f1);
        puVar5 = *(undefined8 **)(param_1[5] + 0x160);
        pbVar6 = abStack_90;
        puVar7 = (undefined8 *)0x20000;
        param_4 = &DAT_10e05dce0;
        FUN_109e84e38(puVar5,pbVar6);
        alStack_f8[lVar19 + 8] = (long)puVar5;
      }
      if (*(long *)(param_2 + lVar19 * 8 + 0x28) != 0) {
        _snprintf(abStack_90,0x20,&UNK_10f61020a);
        puVar5 = *(undefined8 **)(param_1[5] + 0x160);
        pbVar6 = abStack_90;
        puVar7 = (undefined8 *)0x20000;
        param_4 = &DAT_10e05dce0;
        FUN_109e84e38(puVar5,pbVar6);
        alStack_f8[lVar19 + 10] = (long)puVar5;
      }
    }
    lVar19 = 1;
    bVar4 = false;
  } while (bVar18);
  if ((((param_5 & 1) == 0) && ((param_2[0x49] & 1) == 0)) && (*(long *)(param_2 + 0x40) != 0)) {
    _snprintf(abStack_90,0x20,&UNK_10f610222);
    puVar5 = *(undefined8 **)(param_1[5] + 0x160);
    param_4 = &DAT_10e05dc38;
    pbVar6 = abStack_90;
    puVar7 = (undefined8 *)0x20000;
    FUN_109e84e38(puVar5,pbVar6);
    puStack_98 = puVar5;
  }
  uVar8 = (uint)puVar7;
  lVar19 = *(long *)(param_1[5] + 0x160);
  plVar16 = *(long **)(lVar19 + 8);
  plVar9 = (long *)*plVar16;
  if (plVar9 != (long *)0x0) {
    plVar13 = (long *)0x0;
    if (*plVar9 != 0) {
      plVar13 = plVar9;
    }
    while( true ) {
      uVar17 = plVar16[4];
      if ((*(uint *)(param_2 + 0x4c) & (uint)uVar17 & 0x1fffff) != 0) {
        if (((*param_2 & 1) != 0) && (*(long **)(param_2 + 8) == plVar16)) {
          uVar17 = uVar17 & 0xffffffffffe00000 | 0x20000;
          plVar16[4] = uVar17;
        }
        lVar19 = 0;
        bVar4 = true;
        do {
          bVar18 = bVar4;
          if ((*(long **)(param_2 + lVar19 * 8 + 0x18) == plVar16) && (alStack_f8[lVar19 + 8] != 0))
          {
            uVar17 = uVar17 & 0xffffffffffe00000 | 0x20000;
            plVar16[4] = uVar17;
          }
          if ((*(long **)(param_2 + lVar19 * 8 + 0x28) == plVar16) && (alStack_f8[lVar19 + 10] != 0)
             ) {
            uVar17 = uVar17 & 0xffffffffffe00000 | 0x20000;
            plVar16[4] = uVar17;
          }
          lVar19 = 1;
          bVar4 = false;
        } while (bVar18);
        if (*(long **)(param_2 + 0x40) == plVar16 && puStack_98 != (undefined8 *)0x0) {
          plVar16[4] = uVar17 & 0xffffffffffe00000 | 0x20000;
        }
      }
      if (plVar13 == (long *)0x0) break;
      plVar9 = (long *)*plVar13;
      plVar16 = plVar13;
      plVar13 = (long *)0x0;
      if ((plVar9 != (long *)0x0) && (plVar13 = (long *)0x0, *plVar9 != 0)) {
        plVar13 = plVar9;
      }
    }
    lVar19 = *(long *)(param_1[5] + 0x160);
  }
  lVar12 = 0;
  plVar16 = *(long **)(lVar19 + 0x178);
  plVar9 = (long *)**(long **)(lVar19 + 0x178);
  do {
    plVar13 = plVar16;
    if (*(char *)(plVar16 + 7) == '\0') {
      plVar13 = (long *)lVar12;
    }
    plVar15 = (long *)*plVar9;
    lVar12 = (long)plVar13;
    plVar16 = plVar9;
    plVar9 = plVar15;
  } while (plVar15 != (long *)0x0);
  lVar19 = *(long *)(*(long *)((long)plVar13 + 0x30) + 0x30);
  if (lVar19 != 0) {
    puVar20 = *(undefined8 **)(*(long *)(*(long *)((long)plVar13 + 0x30) + 0x20) + 0x18);
    do {
      for (plVar16 = *(long **)(lVar19 + 0x20); *plVar16 != 0; plVar16 = (long *)*plVar16) {
        if (((int)plVar16[3] == 4) &&
           (((((int)plVar16[5] == 0x26f || ((int)plVar16[5] == 0x112)) &&
             (pbVar21 = *(byte **)plVar16[0x13],
             *(int *)(pbVar21 + 0x2c) == *(int *)(param_2 + 0x4c))) &&
            (*(int *)(pbVar21 + 0x28) == 1)))) {
          iVar14 = 1;
          pbVar11 = pbVar21;
          do {
            if (iVar14 == 5) {
              lVar12 = 0;
              goto LAB_109e84ca4;
            }
            pbVar11 = (byte *)**(undefined8 **)(pbVar11 + 0x50);
            iVar14 = *(int *)(pbVar11 + 0x28);
          } while (iVar14 != 0);
          lVar12 = *(long *)(pbVar11 + 0x38);
LAB_109e84ca4:
          pbVar11 = pbVar21;
          if (*(int *)(pbVar21 + 0x18) != 1) {
            pbVar11 = (byte *)0x0;
          }
          if ((*param_2 == 1) && (*(long *)(param_2 + 8) == lVar12)) {
            uVar10 = (ulong)*(uint *)(**(long **)(pbVar21 + 0x70) + 0x48);
            uVar8 = (uint)*(byte *)(**(long **)(pbVar21 + 0x70) + 0x45);
            uVar8 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
            uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
            uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
            uVar17 = uVar10 & 0xff;
            if (uVar8 != 3) {
              uVar17 = uVar10 & 0xffff;
            }
            uVar1 = uVar10 & 1;
            if (uVar8 != 0) {
              uVar1 = uVar17;
            }
            if (uVar8 < 5) {
              uVar10 = uVar1;
            }
            lVar12 = alStack_f8[uVar10];
            puVar5 = (undefined8 *)*puVar20;
            FUN_109f6600c(puVar5,0xa0,8);
            if (puVar5 != (undefined8 *)0x0) {
              puVar5[0x11] = 0;
              puVar5[0x10] = 0;
              puVar5[0x13] = 0;
              puVar5[0x12] = 0;
              puVar5[0xd] = 0;
              puVar5[0xc] = 0;
              puVar5[0xf] = 0;
              puVar5[0xe] = 0;
              puVar5[9] = 0;
              puVar5[8] = 0;
              puVar5[0xb] = 0;
              puVar5[10] = 0;
              puVar5[5] = 0;
              puVar5[4] = 0;
              puVar5[7] = 0;
              puVar5[6] = 0;
              puVar5[1] = 0;
              *puVar5 = 0;
              puVar5[3] = 0;
              puVar5[2] = 0;
            }
            *(undefined4 *)(puVar5 + 3) = 1;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            *(undefined4 *)(puVar5 + 5) = 0;
            *(uint *)((long)puVar5 + 0x2c) = *(uint *)(lVar12 + 0x20) & 0x1fffff;
            puVar5[6] = *(undefined8 *)(lVar12 + 0x10);
            puVar5[7] = lVar12;
            if (*(char *)((long)puVar20 + 0x61) == '\x0e') {
              param_4 = (undefined *)(ulong)*(uint *)(puVar20 + 0x2c);
            }
            else {
              param_4 = (undefined *)0x20;
            }
            FUN_109ecb048(puVar5,puVar5 + 0x10,1);
            puVar7 = puVar5;
            FUN_109ecb4f0(2);
            pbVar6 = pbVar11;
            if ((byte *)(*(long **)(pbVar21 + 0x90) + -1) != pbVar21 + 0x80) {
              plVar9 = puVar5 + 0x11;
              plVar13 = *(long **)(pbVar21 + 0x90);
              do {
                lVar12 = *plVar13;
                plVar15 = (long *)plVar13[1];
                *(long **)(lVar12 + 8) = plVar15;
                *plVar15 = lVar12;
                plVar13[1] = (long)plVar9;
                plVar13[2] = (long)(puVar5 + 0x10);
                *plVar13 = 0;
                lVar12 = *plVar9;
                *plVar13 = lVar12;
                *(long **)(lVar12 + 8) = plVar13;
                *plVar9 = (long)plVar13;
                plVar13 = plVar15;
              } while ((byte *)(plVar15 + -1) != pbVar21 + 0x80);
            }
          }
        }
      }
      FUN_109ecc434();
      uVar8 = (uint)puVar7;
      puVar5 = (undefined8 *)0x0;
    } while (lVar19 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar7 = puVar5;
  FUN_109f658b0();
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x12] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  puVar20 = puVar7;
  FUN_109f65c2c(puVar7,pbVar6);
  puVar7[3] = puVar20;
  puVar7[4] = puVar7[4] & 0xffffffffffe00000 | (ulong)(uVar8 & 0x1fffff);
  puVar7[2] = param_4;
  FUN_109eca704(puVar5,puVar7);
  return puVar7;
}



/* Entry: 109e84e38; end: 109e84ecf;  */

undefined8 * FUN_109e84e38(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1;
  FUN_109f658b0(param_1,0x98);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x12] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  puVar2 = puVar1;
  FUN_109f65c2c(puVar1,param_2);
  puVar1[3] = puVar2;
  puVar1[4] = puVar1[4] & 0xffffffffffe00000 | (ulong)(param_3 & 0x1fffff);
  puVar1[2] = param_4;
  FUN_109eca704(param_1,puVar1);
  return puVar1;
}



/* Entry: 109e84ed0; end: 109e879a7;  */

undefined8 * FUN_109e84ed0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  undefined4 *puVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 *puVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  byte *pbStack_68;
  
  param_3[0x13] = param_1;
  param_3[0x14] = (long)param_2;
  if ((int)param_3[10] == 0) {
    lVar15 = param_3[5];
    lVar12 = param_3[3];
    lVar21 = *(long *)(lVar15 + lVar12 * 8);
    *(int *)(param_3 + 10) = 1;
    *(undefined8 *)(lVar21 + 0x34) = 1;
    *(int *)(param_2 + 2) = 0;
    if (*(int *)((long)param_3 + 0x54) == 0) {
      *(int *)((long)param_3 + 0x54) = 1;
    }
    if (param_3[1] == 0) {
      param_3[1] = *(long *)PTR____stdinp_11034bdd0;
    }
    if (param_3[2] == 0) {
      param_3[2] = *(long *)PTR____stdoutp_11034bdd8;
    }
    lVar21 = *(long *)(lVar15 + lVar12 * 8);
    if (lVar21 == 0) {
      FUN_109e879a8(param_3);
      lVar15 = param_3[1];
      param_2 = param_3;
      FUN_109e87a38();
      lVar12 = param_3[3];
      *(long *)(param_3[5] + lVar12 * 8) = lVar15;
      lVar15 = param_3[5];
      lVar21 = *(long *)(lVar15 + lVar12 * 8);
    }
    param_3[7] = *(long *)(lVar21 + 0x20);
    puVar18 = *(undefined1 **)(lVar21 + 0x10);
    param_3[9] = (long)puVar18;
    param_3[0x11] = (long)puVar18;
    param_3[1] = **(long **)(lVar15 + lVar12 * 8);
    *(undefined1 *)(param_3 + 6) = *puVar18;
  }
  lVar12 = *param_3;
  if (*(int *)((long)param_3 + 0x54) - 0xbU < 2) {
    if ((*(int *)(lVar12 + 0x48) == 0) ||
       (iVar10 = *(int *)(lVar12 + 0x48) + -1, *(int *)(lVar12 + 0x48) = iVar10, iVar10 == 0)) {
      *(int *)((long)param_3 + 0x54) = 1;
    }
code_r0x000109e84fec:
    *(undefined4 *)(lVar12 + 0x34) = 1;
code_r0x000109e84ff0:
    *(undefined8 *)(lVar12 + 0x2c) = 1;
    return (undefined8 *)0x119;
  }
  if (((*(int **)(lVar12 + 0x50) == (int *)0x0) || (**(int **)(lVar12 + 0x50) == 0)) ||
     (*(int *)(lVar12 + 0x20) != 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  plVar1 = param_3 + 9;
  *(undefined4 *)(lVar12 + 0x58) = uVar9;
code_r0x000109e8506c:
  pbVar16 = (byte *)param_3[9];
  *pbVar16 = *(byte *)(param_3 + 6);
  plVar4 = (long *)(ulong)*(uint *)((long)param_3 + 0x54);
  pbStack_68 = pbVar16;
LAB_109e85084:
  do {
    uVar17 = (ulong)(byte)(&UNK_10e061fb6)[*pbVar16];
    iVar10 = (int)plVar4;
    if (*(short *)(&UNK_10e0620b6 + (long)iVar10 * 2) != 0) {
      *(int *)(param_3 + 0xe) = iVar10;
      param_3[0xf] = (long)pbVar16;
    }
    lVar21 = (long)iVar10;
    lVar15 = (long)*(short *)(&UNK_10e0626c8 + lVar21 * 2) + uVar17;
    if (iVar10 != *(short *)(&UNK_10e062230 + lVar15 * 2)) {
      do {
        lVar25 = lVar21 * 2;
        lVar21 = (long)*(short *)(&UNK_10e062868 + lVar25);
        if (0xbc < lVar21) {
          uVar17 = (ulong)(byte)(&UNK_10e062a08)[uVar17];
        }
        lVar15 = (long)*(short *)(&UNK_10e0626c8 + lVar21 * 2) + uVar17;
      } while (*(short *)(&UNK_10e062230 + lVar15 * 2) != *(short *)(&UNK_10e062868 + lVar25));
    }
    plVar4 = (long *)(long)*(short *)(&UNK_10e062a3a + lVar15 * 2);
    pbVar16 = pbVar16 + 1;
  } while (*(short *)(&UNK_10e062a3a + lVar15 * 2) != 0xbc);
code_r0x000109e850e8:
  plVar4 = (long *)(ulong)*(uint *)(param_3 + 0xe);
  plVar30 = param_3 + 0xf;
code_r0x000109e850f0:
  puVar18 = (undefined1 *)*plVar30;
  iVar10 = (int)*(short *)(&UNK_10e0620b6 + (long)(int)plVar4 * 2);
  param_3[0x11] = (long)pbStack_68;
  param_3[8] = (long)puVar18 - (long)pbStack_68;
  *(undefined1 *)(param_3 + 6) = *puVar18;
  *puVar18 = 0;
  param_3[9] = (long)puVar18;
code_r0x000109e85118:
  lVar15 = lVar12;
  switch(iVar10) {
  case 0:
    *puVar18 = (char)param_3[6];
    goto code_r0x000109e850e8;
  case 1:
  case 3:
  case 5:
  case 0x18:
  case 0x1c:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    goto code_r0x000109e8506c;
  case 2:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    iVar10 = *(int *)((long)param_3 + 0x5c);
    if ((int)param_3[0xc] <= iVar10) {
      uVar26 = (int)param_3[0xc] + 0x19;
      *(uint *)(param_3 + 0xc) = uVar26;
      plVar4 = (long *)(-(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar26 << 2);
      plVar30 = (long *)param_3[0xd];
      param_2 = plVar4;
      if (plVar30 == (long *)0x0) {
        _malloc();
      }
      else {
        _realloc();
        plVar4 = plVar30;
      }
      param_3[0xd] = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        iVar10 = *(int *)((long)param_3 + 0x5c);
        goto code_r0x000109e86d50;
      }
      goto code_r0x000109e87990;
    }
    plVar4 = (long *)param_3[0xd];
code_r0x000109e86d50:
    *(int *)((long)param_3 + 0x5c) = iVar10 + 1;
    *(int *)((long)plVar4 + (long)iVar10 * 4) = (*(int *)((long)param_3 + 0x54) + -1) / 2;
    *(int *)((long)param_3 + 0x54) = 3;
    goto code_r0x000109e8506c;
  case 4:
  case 6:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    piVar13 = (int *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      piVar13[4] = *(int *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    iVar2 = *(int *)(lVar21 + 0x34);
    iVar10 = *(int *)(lVar21 + 0x38) + 1;
    *piVar13 = iVar2;
    piVar13[1] = iVar10;
    lVar15 = param_3[8];
    piVar13[2] = iVar2;
    piVar13[3] = iVar10 + (int)lVar15;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)(lVar21 + 0x34) = iVar2 + 1;
    *(undefined4 *)(lVar21 + 0x38) = 0;
    *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
    goto code_r0x000109e8506c;
  case 7:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    iVar10 = *(int *)((long)param_3 + 0x5c);
    uVar26 = iVar10 - 1;
    *(uint *)((long)param_3 + 0x5c) = uVar26;
    if (iVar10 < 1) goto code_r0x000109e87984;
    iVar10 = *(int *)(param_3[0xd] + (ulong)uVar26 * 4);
    *(uint *)((long)param_3 + 0x54) = iVar10 << 1 | 1;
    if ((*(int *)(*param_3 + 0x28) != 0) && (iVar10 != 4)) goto code_r0x000109e86a14;
    goto code_r0x000109e8506c;
  case 8:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x34) != 0) {
      *(int *)((long)param_3 + 0x54) = 9;
      *(undefined1 *)(*param_3 + 0x40) = 0;
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x104;
    break;
  case 9:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    puVar7 = (undefined8 *)*param_3;
    *(undefined8 *)((long)puVar7 + 0x24) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *puVar7;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x112;
    break;
  case 10:
    *puVar18 = (char)param_3[6];
    puVar24 = puVar18 + -1;
    param_3[0x11] = (long)pbStack_68;
    param_3[8] = (long)puVar24 - (long)pbStack_68;
    param_3[9] = (long)puVar24;
    *(undefined1 *)(param_3 + 6) = puVar18[-1];
    puVar18[-1] = 0;
    param_3[9] = (long)puVar24;
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    goto code_r0x000109e8506c;
  case 0xb:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x110;
    break;
  case 0xc:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x120;
    break;
  case 0xd:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x10f;
    break;
  case 0xe:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    piVar13 = (int *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      piVar13[4] = *(int *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    iVar2 = *(int *)(lVar21 + 0x34);
    iVar10 = *(int *)(lVar21 + 0x38) + 1;
    *piVar13 = iVar2;
    piVar13[1] = iVar10;
    lVar15 = param_3[8];
    piVar13[2] = iVar2;
    piVar13[3] = iVar10 + (int)lVar15;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(*param_3 + 0x28) = 0;
    *(int *)(lVar21 + 0x34) = iVar2 + 1;
    *(undefined4 *)(lVar21 + 0x38) = 0;
    goto code_r0x000109e84fec;
  case 0xf:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    lVar15 = *param_3;
    if ((*(byte *)(lVar15 + 0x40) & 1) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(lVar15 + 0x20) = 1;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x10d;
    break;
  case 0x10:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    lVar15 = *param_3;
    if ((*(byte *)(lVar15 + 0x40) & 1) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(lVar15 + 0x20) = 1;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x10e;
    break;
  case 0x11:
    *puVar18 = (char)param_3[6];
    param_3[0x11] = (long)pbStack_68;
    param_3[8] = 2;
    param_3[9] = (long)(pbStack_68 + 2);
    *(byte *)(param_3 + 6) = pbStack_68[2];
    pbStack_68[2] = 0;
    param_3[9] = (long)(pbStack_68 + 2);
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    lVar15 = *param_3;
    if ((*(byte *)(lVar15 + 0x40) & 1) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(lVar15 + 0x20) = 1;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x10c;
    break;
  case 0x12:
    *puVar18 = (char)param_3[6];
    param_3[0x11] = (long)pbStack_68;
    param_3[8] = 4;
    param_3[9] = (long)(pbStack_68 + 4);
    *(byte *)(param_3 + 6) = pbStack_68[4];
    pbStack_68[4] = 0;
    param_3[9] = (long)(pbStack_68 + 4);
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    lVar15 = *param_3;
    if ((*(byte *)(lVar15 + 0x40) & 1) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(lVar15 + 0x20) = 1;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x108;
    break;
  case 0x13:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if ((*(byte *)(*param_3 + 0x40) & 1) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(*param_3 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x109;
    break;
  case 0x14:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if ((*(byte *)(*param_3 + 0x40) & 1) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(*param_3 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x10a;
    break;
  case 0x15:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x10b;
    break;
  case 0x16:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    lVar15 = *param_3;
    *(undefined1 *)(lVar15 + 0x40) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 5;
    *(undefined4 *)(lVar15 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x105;
    break;
  case 0x17:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    *(undefined4 *)(*param_3 + 0x28) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x111;
    break;
  case 0x19:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    *(int *)((long)param_3 + 0x54) = 1;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x113;
    break;
  case 0x1a:
    *puVar18 = (char)param_3[6];
    puVar24 = puVar18 + -1;
    param_3[0x11] = (long)pbStack_68;
    param_3[8] = (long)puVar24 - (long)pbStack_68;
    param_3[9] = (long)puVar24;
    *(undefined1 *)(param_3 + 6) = puVar18[-1];
    puVar18[-1] = 0;
    param_3[9] = (long)puVar24;
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x106;
    break;
  case 0x1b:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x107;
    break;
  case 0x1d:
  case 0x1e:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    *(int *)((long)param_3 + 0x54) = 1;
    param_2 = (long *)*param_3;
    FUN_109e8ba00(puVar14,param_2,&UNK_10f610257);
    if (*(int *)(lVar12 + 0x58) == 0) {
      uVar5 = *(undefined8 *)*param_3;
      iVar3 = (int)param_3[8];
      goto code_r0x000109e86f70;
    }
    goto code_r0x000109e8506c;
  case 0x1f:
  case 0x20:
  case 0x21:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar3 = (int)param_3[8];
    iVar10 = iVar2 + iVar3;
    *(int *)(lVar15 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
code_r0x000109e86f70:
    FUN_109f6650c(uVar5,iVar3 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x117;
    break;
  case 0x22:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x129;
    break;
  case 0x23:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x128;
    break;
  case 0x24:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x127;
    break;
  case 0x25:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x126;
    break;
  case 0x26:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x125;
    break;
  case 0x27:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x124;
    break;
  case 0x28:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x123;
    break;
  case 0x29:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x122;
    break;
  case 0x2a:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x11d;
    break;
  case 0x2b:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x11e;
    break;
  case 0x2c:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(char *)(lVar12 + 0xc4) == '\x01') {
      param_2 = (long *)*param_3;
      FUN_109e8ba00(puVar14,param_2,&UNK_10f610280);
      if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    }
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x121;
    break;
  case 0x2d:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x102;
    break;
  case 0x2e:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x114;
    break;
  case 0x2f:
  case 0x31:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x11a;
    break;
  case 0x30:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) == 0) {
      FUN_109e87ab0(lVar12);
      return (undefined8 *)(long)*(char *)param_3[0x11];
    }
    goto code_r0x000109e8506c;
  case 0x32:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(*param_3 + 0x28) != 0) {
code_r0x000109e86a14:
      if ((*(int *)(lVar12 + 0x58) == 0) &&
         (*(undefined8 *)(lVar12 + 0x2c) = 0x100000000, *(int *)(lVar12 + 0x30) == 0)) {
        return (undefined8 *)0x11c;
      }
    }
    goto code_r0x000109e8506c;
  case 0x33:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar21 + 0x34);
    iVar2 = *(int *)(lVar21 + 0x38);
    lVar15 = param_3[8];
    iVar10 = iVar2 + (int)lVar15;
    *(int *)(lVar21 + 0x38) = iVar10;
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    if (*(int *)(lVar12 + 0x58) != 0) goto code_r0x000109e8506c;
    uVar5 = *(undefined8 *)*param_3;
    FUN_109f6650c(uVar5,(int)lVar15 + 1);
    *(undefined8 *)param_3[0x13] = uVar5;
    _memcpy(*(undefined8 *)param_3[0x13],param_3[0x11],param_3[8] + 1);
    if (*(int *)(lVar12 + 0x24) == 0) {
      uVar5 = 100;
      if (*(int *)(lVar12 + 0xa0) != 2) {
        uVar5 = 0x6e;
      }
      FUN_109e8a0bc(lVar12,uVar5,0,0);
    }
    *(undefined4 *)(lVar12 + 0x34) = 0;
    puVar7 = (undefined8 *)0x11f;
    break;
  case 0x34:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    piVar13 = (int *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      piVar13[4] = *(int *)(lVar12 + 0xc0);
    }
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    iVar2 = *(int *)(lVar21 + 0x34);
    iVar10 = *(int *)(lVar21 + 0x38) + 1;
    *piVar13 = iVar2;
    piVar13[1] = iVar10;
    lVar15 = param_3[8];
    piVar13[2] = iVar2;
    piVar13[3] = iVar10 + (int)lVar15;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    iVar10 = 0xb;
    if (*(int *)(lVar12 + 0x48) == 0) {
      iVar10 = 1;
    }
    *(int *)((long)param_3 + 0x54) = iVar10;
    lVar15 = *param_3;
    *(undefined4 *)(lVar15 + 0x28) = 1;
    *(undefined8 *)(lVar15 + 0x20) = 0;
    *(int *)(lVar21 + 0x34) = iVar2 + 1;
    *(undefined4 *)(lVar21 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x34) = 1;
    goto code_r0x000109e84ff0;
  case 0x35:
    if (*(char *)(lVar12 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar12 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar12 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar12 + 0xc0);
    }
    lVar15 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    iVar2 = *(int *)(lVar15 + 0x38);
    iVar10 = iVar2 + (int)param_3[8];
    *puVar14 = uVar9;
    puVar14[1] = iVar2 + 1;
    *(int *)(lVar15 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar12 + 0xb5) = 0;
    *(undefined1 *)(lVar12 + 0xbc) = 0;
    param_2 = (long *)*param_3;
    FUN_109e8ba00(puVar14,param_2,&UNK_10f6102bb);
    if (1 < *(int *)((long)param_3 + 0x54) - 0xdU) goto code_r0x000109e8506c;
    lVar15 = param_3[0x11];
    puVar18 = (undefined1 *)param_3[9];
    *puVar18 = (char)param_3[6];
    lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
    puVar24 = *(undefined1 **)(lVar21 + 8);
    if (puVar24 + 2 <= puVar18) goto code_r0x000109e85fa4;
    lVar25 = (long)*(int *)(lVar21 + 0x18);
    puVar19 = puVar24 + lVar25 + 2;
    puVar22 = puVar24 + param_3[7] + 2;
    if (puVar24 < puVar22) {
      do {
        puVar22 = puVar22 + -1;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar22;
        lVar21 = *(long *)(param_3[5] + param_3[3] * 8);
        puVar24 = *(undefined1 **)(lVar21 + 8);
      } while (puVar24 < puVar22);
      lVar25 = (long)*(int *)(lVar21 + 0x18);
    }
    iVar10 = (int)puVar19 - (int)puVar22;
    puVar18 = puVar18 + iVar10;
    param_3[7] = lVar25;
    *(long *)(lVar21 + 0x20) = lVar25;
    if (puVar18 < puVar24 + 2) {
code_r0x000109e8799c:
      puVar6 = &UNK_10f61035e;
      func_0x00010bdb2530();
      puVar7 = *(undefined8 **)(puVar6 + 0x28);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x8;
        _malloc();
        *(undefined8 **)(puVar6 + 0x28) = puVar7;
        if (puVar7 == (undefined8 *)0x0) {
LAB_109e87a2c:
          puVar6 = &UNK_10f466944;
          func_0x00010bdb2530();
          puVar7 = (undefined8 *)0x48;
          _malloc();
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar7 + 3) = 0x4000;
            lVar12 = 0x4002;
            _malloc();
            puVar7[1] = lVar12;
            if (lVar12 != 0) {
              *(undefined4 *)(puVar7 + 5) = 1;
              FUN_109e87bc4(puVar7,puVar6,param_2);
              return puVar7;
            }
          }
          puVar7 = (undefined8 *)&UNK_10f466918;
          func_0x00010bdb2530();
          puVar8 = puVar7;
          if (*(int *)((long)puVar7 + 0x24) == 0) {
            uVar5 = 100;
            if (*(int *)(puVar7 + 0x14) != 2) {
              uVar5 = 0x6e;
            }
            FUN_109e8a0bc(puVar7,uVar5,0,0);
          }
          puVar7[6] = 0;
          *(undefined4 *)((long)puVar7 + 0x2c) = 0;
          return puVar8;
        }
        *puVar7 = 0;
        *(undefined8 *)(puVar6 + 0x20) = 1;
        *(undefined8 *)(puVar6 + 0x18) = 0;
      }
      else if (*(long *)(puVar6 + 0x20) - 1U <= *(ulong *)(puVar6 + 0x18)) {
        lVar12 = *(long *)(puVar6 + 0x20) + 8;
        param_2 = (long *)(lVar12 * 8);
        _realloc();
        *(undefined8 **)(puVar6 + 0x28) = puVar7;
        if (puVar7 == (undefined8 *)0x0) goto LAB_109e87a2c;
        puVar8 = puVar7 + *(long *)(puVar6 + 0x20);
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        *(long *)(puVar6 + 0x20) = lVar12;
      }
      return puVar7;
    }
    lVar15 = lVar15 + iVar10;
code_r0x000109e85fa4:
    puVar18 = puVar18 + -1;
    *puVar18 = 0x2e;
    param_3[0x11] = lVar15;
    *(undefined1 *)(param_3 + 6) = *puVar18;
    param_3[9] = (long)puVar18;
    goto code_r0x000109e8506c;
  case 0x36:
code_r0x000109e878d8:
    if (*(char *)(lVar15 + 0xb5) == '\x01') {
      *(undefined4 *)(*(long *)(param_3[5] + param_3[3] * 8) + 0x34) =
           *(undefined4 *)(lVar15 + 0xb8);
    }
    puVar14 = (undefined4 *)param_3[0x14];
    if (*(char *)(lVar15 + 0xbc) == '\x01') {
      puVar14[4] = *(undefined4 *)(lVar15 + 0xc0);
    }
    lVar12 = *(long *)(param_3[5] + param_3[3] * 8);
    uVar9 = *(undefined4 *)(lVar12 + 0x34);
    iVar10 = *(int *)(lVar12 + 0x38);
    *puVar14 = uVar9;
    puVar14[1] = iVar10 + 1;
    iVar10 = iVar10 + (int)param_3[8];
    *(int *)(lVar12 + 0x38) = iVar10;
    puVar14[2] = uVar9;
    puVar14[3] = iVar10 + 1;
    *(undefined1 *)(lVar15 + 0xb5) = 0;
    *(undefined1 *)(lVar15 + 0xbc) = 0;
    func_0x00010bdb2530(&UNK_10f466822);
code_r0x000109e87954:
    func_0x00010bdb2530(&UNK_10f466869);
  default:
    func_0x00010bdb2530(&UNK_10f466836);
code_r0x000109e8796c:
    func_0x00010bdb2530(&UNK_10f4668cd);
code_r0x000109e87978:
    func_0x00010bdb2530(&UNK_10f4668ea);
code_r0x000109e87984:
    func_0x00010bdb2530(&UNK_10f6103ac);
code_r0x000109e87990:
    func_0x00010bdb2530(&UNK_10f61037e);
    goto code_r0x000109e8799c;
  case 0x37:
    goto code_r0x000109e8513c;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3c:
    if (*(int *)((long)param_3 + 0x54) - 3U < 2) {
      param_2 = (long *)*param_3;
      FUN_109e8ba00(param_3[0x14],param_2,&UNK_10f6102a6);
    }
    *(int *)((long)param_3 + 0x54) = 7;
    *(undefined8 *)(*param_3 + 0x20) = 0;
    if ((*(int *)(lVar12 + 0x2c) != 0) || (*(int *)(lVar12 + 0x58) != 0)) goto code_r0x000109e8506c;
    goto code_r0x000109e84fec;
  case 0x3b:
  case 0x3d:
  case 0x3e:
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(lVar12 + 0x2c) = 0;
  *(undefined4 *)(lVar12 + 0x30) = 0;
  return puVar7;
code_r0x000109e8513c:
  lVar25 = param_3[0x11];
  *puVar18 = (char)param_3[6];
  lVar15 = param_3[5];
  lVar21 = param_3[3];
  plVar30 = *(long **)(lVar15 + lVar21 * 8);
  if ((int)plVar30[8] == 0) {
    lVar23 = plVar30[4];
    param_3[7] = lVar23;
    *plVar30 = param_3[1];
    plVar30 = *(long **)(lVar15 + lVar21 * 8);
    *(undefined4 *)(plVar30 + 8) = 1;
  }
  else {
    lVar23 = param_3[7];
  }
  puVar24 = (undefined1 *)*plVar1;
  puVar19 = (undefined1 *)plVar30[1];
  if (puVar19 + lVar23 < puVar24) {
    if (puVar19 + lVar23 + 1 < puVar24) goto code_r0x000109e87954;
    puVar22 = (undefined1 *)param_3[0x11];
    if (*(int *)((long)plVar30 + 0x3c) == 0) {
      if ((long)puVar24 - (long)puVar22 == 1) goto code_r0x000109e85578;
      goto code_r0x000109e855c0;
    }
    puVar24 = puVar24 + ~(ulong)puVar22;
    uVar26 = (uint)puVar24;
    if (0 < (int)uVar26) {
      do {
        *puVar19 = *puVar22;
        uVar11 = (int)puVar24 - 1;
        puVar24 = (undefined1 *)(ulong)uVar11;
        puVar19 = puVar19 + 1;
        puVar22 = puVar22 + 1;
      } while (uVar11 != 0);
      lVar15 = param_3[5];
      lVar21 = param_3[3];
      plVar30 = *(long **)(lVar15 + lVar21 * 8);
    }
    lVar23 = (long)(int)uVar26;
    if ((int)plVar30[8] != 2) {
      iVar10 = (int)plVar30[3];
      uVar11 = iVar10 + ~uVar26;
      if (uVar11 == 0) {
        lVar15 = *plVar1;
        do {
          if ((int)plVar30[5] == 0) {
            plVar30[1] = 0;
code_r0x000109e878cc:
            func_0x00010bdb2530(&UNK_10f4668a1);
            goto code_r0x000109e878d8;
          }
          plVar27 = (long *)plVar30[1];
          *(int *)(plVar30 + 3) = iVar10 * 2;
          param_2 = (long *)(long)(iVar10 * 2 + 2);
          plVar4 = plVar27;
          _realloc();
          plVar30[1] = (long)plVar4;
          if (plVar4 == (long *)0x0) goto code_r0x000109e878cc;
          lVar15 = (long)plVar4 + (long)((int)lVar15 - (int)plVar27);
          param_3[9] = lVar15;
          plVar30 = *(long **)(param_3[5] + param_3[3] * 8);
          iVar10 = (int)plVar30[3];
          uVar11 = iVar10 + ~uVar26;
        } while (uVar11 == 0);
      }
      if (0x1fff < uVar11) {
        uVar11 = 0x2000;
      }
      uVar17 = (ulong)uVar11;
      if (*(int *)((long)plVar30 + 0x2c) == 0) {
        ___error();
        *(int *)plVar4 = 0;
        plVar4 = (long *)(*(long *)(*(long *)(param_3[5] + param_3[3] * 8) + 8) + (long)(int)uVar26)
        ;
        param_2 = (long *)0x1;
        _fread(plVar4,1,uVar17,param_3[1]);
        uVar29 = (ulong)(int)plVar4;
        param_3[7] = uVar29;
        while (((ulong)plVar4 & 0xffffffff) == 0) {
          plVar4 = (long *)param_3[1];
          _ferror();
          if ((int)plVar4 == 0) {
            lVar15 = param_3[5];
            lVar21 = param_3[3];
            plVar30 = *(long **)(lVar15 + lVar21 * 8);
            goto code_r0x000109e851fc;
          }
          ___error();
          if ((int)*plVar4 != 4) goto code_r0x000109e8796c;
          ___error();
          *(int *)plVar4 = 0;
          _clearerr(param_3[1]);
          plVar4 = (long *)(*(long *)(*(long *)(param_3[5] + param_3[3] * 8) + 8) + lVar23);
          param_2 = (long *)0x1;
          _fread(plVar4,1,uVar17,param_3[1]);
          uVar29 = (ulong)(int)plVar4;
          param_3[7] = uVar29;
        }
code_r0x000109e853fc:
        lVar15 = param_3[5];
        lVar21 = param_3[3];
        plVar30 = *(long **)(lVar15 + lVar21 * 8);
        plVar30[4] = uVar29;
        if (uVar29 == 0) goto code_r0x000109e85418;
        iVar10 = 0;
        goto code_r0x000109e854bc;
      }
      uVar28 = 0;
      do {
        plVar4 = (long *)param_3[1];
        _getc();
        iVar10 = (int)plVar4;
        uVar29 = uVar28;
        if (iVar10 == -1 || iVar10 == 10) break;
        *(char *)(*(long *)(*(long *)(param_3[5] + param_3[3] * 8) + 8) + lVar23 + uVar28) =
             (char)plVar4;
        uVar28 = uVar28 + 1;
        uVar29 = uVar17;
      } while (uVar17 != uVar28);
      if (iVar10 != -1) {
        if (iVar10 == 10) {
          *(undefined1 *)(*(long *)(*(long *)(param_3[5] + param_3[3] * 8) + 8) + lVar23 + uVar29) =
               10;
          uVar29 = uVar29 + 1;
        }
code_r0x000109e853f8:
        param_3[7] = uVar29;
        goto code_r0x000109e853fc;
      }
      plVar4 = (long *)param_3[1];
      _ferror();
      if ((int)plVar4 == 0) goto code_r0x000109e853f8;
      goto code_r0x000109e8796c;
    }
    param_3[7] = 0;
code_r0x000109e851fc:
    plVar30[4] = 0;
code_r0x000109e85418:
    if (uVar26 == 0) {
      param_2 = (long *)param_3[1];
      plVar4 = *(long **)(lVar15 + lVar21 * 8);
      if (plVar4 == (long *)0x0) {
        FUN_109e879a8(param_3);
        lVar15 = param_3[1];
        FUN_109e87a38(lVar15,param_3);
        lVar21 = param_3[3];
        *(long *)(param_3[5] + lVar21 * 8) = lVar15;
        if (param_3[5] == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = *(long **)(param_3[5] + lVar21 * 8);
        }
      }
      FUN_109e87bc4(plVar4,param_2,param_3);
      lVar15 = param_3[5];
      lVar21 = param_3[3];
      lVar20 = *(long *)(lVar15 + lVar21 * 8);
      uVar29 = *(ulong *)(lVar20 + 0x20);
      param_3[7] = uVar29;
      puVar24 = *(undefined1 **)(lVar20 + 0x10);
      param_3[9] = (long)puVar24;
      param_3[0x11] = (long)puVar24;
      param_3[1] = **(long **)(lVar15 + lVar21 * 8);
      *(undefined1 *)(param_3 + 6) = *puVar24;
      plVar30 = *(long **)(lVar15 + lVar21 * 8);
      iVar10 = 1;
    }
    else {
      uVar29 = 0;
      iVar10 = 2;
      *(undefined4 *)(plVar30 + 8) = 2;
    }
code_r0x000109e854bc:
    uVar17 = uVar29 + (long)(int)uVar26;
    if ((ulong)(long)(int)plVar30[3] < uVar17) {
      plVar27 = (long *)(uVar17 + (uVar29 >> 1));
      plVar4 = (long *)plVar30[1];
      param_2 = plVar27;
      _realloc();
      lVar15 = param_3[5];
      lVar21 = param_3[3];
      *(long **)(*(long *)(lVar15 + lVar21 * 8) + 8) = plVar4;
      lVar21 = *(long *)(lVar15 + lVar21 * 8);
      lVar15 = *(long *)(lVar21 + 8);
      if (lVar15 != 0) {
        *(int *)(lVar21 + 0x18) = (int)plVar27 + -2;
        uVar17 = param_3[7] + lVar23;
        goto code_r0x000109e85534;
      }
      goto code_r0x000109e87978;
    }
    lVar15 = plVar30[1];
code_r0x000109e85534:
    param_3[7] = uVar17;
    *(undefined1 *)(lVar15 + uVar17) = 0;
    *(undefined1 *)(*(long *)(*(long *)(param_3[5] + param_3[3] * 8) + 8) + param_3[7] + 1) = 0;
    puVar22 = *(undefined1 **)(*(long *)(param_3[5] + param_3[3] * 8) + 8);
    param_3[0x11] = (long)puVar22;
    if (iVar10 == 1) goto code_r0x000109e85578;
    if (iVar10 != 0) goto code_r0x000109e855b4;
    param_3[9] = (long)(puVar22 + (int)(~(uint)lVar25 + (int)puVar18));
    plVar4 = param_3;
    FUN_109e87b00();
    pbVar16 = (byte *)param_3[9];
    pbStack_68 = (byte *)param_3[0x11];
    goto LAB_109e85084;
  }
  param_3[9] = param_3[0x11] + (long)(int)(~(uint)lVar25 + (int)puVar18);
  plVar4 = param_3;
  FUN_109e87b00();
  iVar10 = (int)plVar4;
  if (*(short *)(&UNK_10e0620b6 + (long)iVar10 * 2) != 0) {
    *(int *)(param_3 + 0xe) = iVar10;
    param_3[0xf] = param_3[9];
  }
  lVar21 = (long)iVar10;
  lVar15 = (long)*(short *)(&UNK_10e0626c8 + lVar21 * 2) + 1;
  if (iVar10 != *(short *)(&UNK_10e062230 + lVar15 * 2)) {
    do {
      lVar25 = lVar21 * 2;
      lVar21 = (long)*(short *)(&UNK_10e062868 + lVar25);
      lVar15 = (long)*(short *)(&UNK_10e0626c8 + lVar21 * 2) + 1;
    } while (*(short *)(&UNK_10e062868 + lVar25) != *(short *)(&UNK_10e062230 + lVar15 * 2));
  }
  pbStack_68 = (byte *)param_3[0x11];
  if ((lVar15 == 0) || (*(short *)(&UNK_10e062a3a + lVar15 * 2) == 0xbc)) goto code_r0x000109e850e8;
  plVar4 = (long *)(ulong)(uint)(int)*(short *)(&UNK_10e062a3a + lVar15 * 2);
  pbVar16 = (byte *)(*plVar1 + 1);
  *plVar1 = (long)pbVar16;
  goto LAB_109e85084;
code_r0x000109e85578:
  *(int *)(param_3 + 0xb) = 0;
  param_3[9] = (long)puVar22;
  iVar10 = (*(int *)((long)param_3 + 0x54) + -1) / 2 + 0x38;
  goto code_r0x000109e85118;
code_r0x000109e855b4:
  puVar19 = *(undefined1 **)(*(long *)(param_3[5] + param_3[3] * 8) + 8);
  lVar23 = param_3[7];
code_r0x000109e855c0:
  param_3[9] = (long)(puVar19 + lVar23);
  plVar4 = param_3;
  FUN_109e87b00();
  pbStack_68 = (byte *)param_3[0x11];
  plVar30 = plVar1;
  goto code_r0x000109e850f0;
}



/* Entry: 109e879a8; end: 109e87a37;  */

undefined8 * FUN_109e879a8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x8;
    _malloc();
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
LAB_109e87a2c:
      puVar3 = &UNK_10f466944;
      func_0x00010bdb2530();
      puVar2 = (undefined8 *)0x48;
      _malloc();
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 3) = 0x4000;
        lVar4 = 0x4002;
        _malloc();
        puVar2[1] = lVar4;
        if (lVar4 != 0) {
          *(undefined4 *)(puVar2 + 5) = 1;
          FUN_109e87bc4(puVar2,puVar3,param_2);
          return puVar2;
        }
      }
      puVar2 = (undefined8 *)&UNK_10f466918;
      func_0x00010bdb2530();
      puVar5 = puVar2;
      if (*(int *)((long)puVar2 + 0x24) == 0) {
        uVar1 = 100;
        if (*(int *)(puVar2 + 0x14) != 2) {
          uVar1 = 0x6e;
        }
        FUN_109e8a0bc(puVar2,uVar1,0,0);
      }
      puVar2[6] = 0;
      *(undefined4 *)((long)puVar2 + 0x2c) = 0;
      return puVar5;
    }
    *puVar2 = 0;
    *(undefined8 *)(param_1 + 0x20) = 1;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (*(long *)(param_1 + 0x20) - 1U <= *(ulong *)(param_1 + 0x18)) {
    lVar4 = *(long *)(param_1 + 0x20) + 8;
    param_2 = lVar4 * 8;
    _realloc();
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_109e87a2c;
    puVar5 = puVar2 + *(long *)(param_1 + 0x20);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    *(long *)(param_1 + 0x20) = lVar4;
  }
  return puVar2;
}



/* Entry: 109e87a38; end: 109e87aaf;  */

undefined * FUN_109e87a38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar2 = (undefined *)0x48;
  _malloc();
  if (puVar2 != (undefined *)0x0) {
    *(undefined4 *)(puVar2 + 0x18) = 0x4000;
    lVar3 = 0x4002;
    _malloc();
    *(long *)(puVar2 + 8) = lVar3;
    if (lVar3 != 0) {
      *(undefined4 *)(puVar2 + 0x28) = 1;
      FUN_109e87bc4(puVar2,param_1,param_2);
      return puVar2;
    }
  }
  puVar2 = &UNK_10f466918;
  func_0x00010bdb2530();
  puVar4 = puVar2;
  if (*(int *)(puVar2 + 0x24) == 0) {
    uVar1 = 100;
    if (*(int *)(puVar2 + 0xa0) != 2) {
      uVar1 = 0x6e;
    }
    FUN_109e8a0bc(puVar2,uVar1,0,0);
  }
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined4 *)(puVar2 + 0x2c) = 0;
  return puVar4;
}



/* Entry: 109e87ab0; end: 109e87aff;  */

void FUN_109e87ab0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = 100;
    if (*(int *)(param_1 + 0xa0) != 2) {
      uVar1 = 0x6e;
    }
    FUN_109e8a0bc(param_1,uVar1,0,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 109e87b00; end: 109e87bc3;  */

ulong FUN_109e87b00(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x54);
  pbVar7 = *(byte **)(param_1 + 0x88);
  if (pbVar7 < *(byte **)(param_1 + 0x48)) {
    do {
      if ((ulong)*pbVar7 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (ulong)(byte)(&UNK_10e061fb6)[*pbVar7];
      }
      iVar5 = (int)uVar6;
      if (*(short *)(&UNK_10e0620b6 + (long)iVar5 * 2) != 0) {
        *(int *)(param_1 + 0x70) = iVar5;
        *(byte **)(param_1 + 0x78) = pbVar7;
      }
      lVar3 = (long)iVar5;
      lVar4 = (long)*(short *)(&UNK_10e0626c8 + lVar3 * 2) + uVar2;
      if (iVar5 != *(short *)(&UNK_10e062230 + lVar4 * 2)) {
        do {
          lVar1 = lVar3 * 2;
          lVar3 = (long)*(short *)(&UNK_10e062868 + lVar1);
          if (0xbc < lVar3) {
            uVar2 = (ulong)(byte)(&UNK_10e062a08)[uVar2];
          }
          lVar4 = (long)*(short *)(&UNK_10e0626c8 + lVar3 * 2) + uVar2;
        } while (*(short *)(&UNK_10e062230 + lVar4 * 2) != *(short *)(&UNK_10e062868 + lVar1));
      }
      uVar6 = (ulong)*(short *)(&UNK_10e062a3a + lVar4 * 2);
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != *(byte **)(param_1 + 0x48));
  }
  return uVar6;
}



/* Entry: 109e87bc4; end: 109e87cc3;  */

void FUN_109e87bc4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  
  puVar2 = param_1;
  ___error();
  uVar1 = *(undefined4 *)puVar2;
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = *(long *)(param_3 + 0x28);
LAB_109e87c3c:
    *param_1 = param_2;
    *(undefined4 *)((long)param_1 + 0x3c) = 1;
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_109e87c94;
    }
  }
  else {
    param_1[4] = 0;
    *(undefined1 *)param_1[1] = 0;
    *(undefined1 *)(param_1[1] + 1) = 0;
    param_1[2] = param_1[1];
    *(undefined4 *)(param_1 + 6) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    lVar3 = *(long *)(param_3 + 0x28);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(lVar3 + *(long *)(param_3 + 0x18) * 8);
    }
    if (puVar4 != param_1) goto LAB_109e87c3c;
    lVar5 = *(long *)(lVar3 + *(long *)(param_3 + 0x18) * 8);
    *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar5 + 0x20);
    puVar6 = *(undefined1 **)(lVar5 + 0x10);
    *(undefined1 **)(param_3 + 0x48) = puVar6;
    *(undefined1 **)(param_3 + 0x88) = puVar6;
    *(undefined8 *)(param_3 + 8) = **(undefined8 **)(lVar3 + *(long *)(param_3 + 0x18) * 8);
    *(undefined1 *)(param_3 + 0x30) = *puVar6;
    *param_1 = param_2;
    *(undefined4 *)((long)param_1 + 0x3c) = 1;
  }
  puVar4 = *(undefined8 **)(lVar3 + *(long *)(param_3 + 0x18) * 8);
LAB_109e87c94:
  if (puVar4 != param_1) {
    *(undefined8 *)((long)param_1 + 0x34) = 1;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  ___error();
  *(undefined4 *)puVar2 = uVar1;
  return;
}



/* Entry: 109e87cc4; end: 109e87e5f;  */

void FUN_109e87cc4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  
  FUN_109e879a8(param_2);
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    lVar3 = *(long *)(lVar2 + lVar1 * 8);
    if (lVar3 != param_1) {
      if (lVar3 != 0) {
        **(undefined1 **)(param_2 + 0x48) = *(undefined1 *)(param_2 + 0x30);
        lVar2 = *(long *)(param_2 + 0x28);
        lVar1 = *(long *)(param_2 + 0x18);
        *(undefined8 *)(*(long *)(lVar2 + lVar1 * 8) + 0x10) = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(*(long *)(lVar2 + lVar1 * 8) + 0x20) = *(undefined8 *)(param_2 + 0x38);
      }
      *(long *)(lVar2 + lVar1 * 8) = param_1;
      lVar2 = *(long *)(*(long *)(param_2 + 0x28) + lVar1 * 8);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar2 + 0x20);
      puVar4 = *(undefined1 **)(lVar2 + 0x10);
      *(undefined1 **)(param_2 + 0x48) = puVar4;
      *(undefined1 **)(param_2 + 0x88) = puVar4;
      *(undefined8 *)(param_2 + 8) = **(undefined8 **)(*(long *)(param_2 + 0x28) + lVar1 * 8);
      *(undefined1 *)(param_2 + 0x30) = *puVar4;
      *(undefined4 *)(param_2 + 0x58) = 1;
    }
  }
  return;
}



/* Entry: 109e87e60; end: 109e87f83;  */

undefined8 * FUN_109e87e60(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar1 = (long)param_2 + -2;
  if (((param_2 < (undefined8 *)0x2) || (*(char *)(param_1 + lVar1) != '\0')) ||
     (*(char *)((long)param_2 + param_1 + -1) != '\0')) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)0x48;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    iVar7 = (int)lVar1;
    *(int *)(puVar2 + 3) = iVar7;
    puVar2[1] = param_1;
    puVar2[2] = param_1;
    *puVar2 = 0;
    puVar2[4] = (long)iVar7;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 1;
    *(undefined8 *)((long)puVar2 + 0x3c) = 0;
    FUN_109e87cc4();
    return puVar2;
  }
  puVar3 = &UNK_10f6102ed;
  func_0x00010bdb2530(&UNK_10f6102ed);
  puVar2 = (undefined8 *)((long)param_2 + 2);
  puVar5 = param_2;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x00010bdb2530(&UNK_10f610317);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      _memcpy(puVar2,puVar3,param_2);
    }
    *(undefined2 *)((long)puVar2 + (long)param_2) = 0;
    puVar5 = (undefined8 *)((long)param_2 + 2);
    FUN_109e87e60(puVar2,puVar5,param_3);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 5) = 1;
      return puVar2;
    }
  }
  puVar2 = (undefined8 *)&UNK_10f610340;
  func_0x00010bdb2530();
  if (puVar5 == (undefined8 *)0x0) {
    ___error();
    uVar6 = 0x16;
  }
  else {
    puVar4 = (undefined8 *)0x1;
    _calloc(1,0xa8);
    *puVar5 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = puVar2;
      return (undefined8 *)0x0;
    }
    ___error();
    uVar6 = 0xc;
    puVar2 = puVar4;
  }
  *(undefined4 *)puVar2 = uVar6;
  return (undefined8 *)0x1;
}



/* Entry: 109e87f84; end: 109e8805b;  */

undefined8 FUN_109e87f84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    ___error();
    uVar2 = 0x16;
  }
  else {
    puVar1 = (undefined8 *)0x1;
    _calloc(1,0xa8);
    *param_2 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      return 0;
    }
    ___error();
    uVar2 = 0xc;
    param_1 = puVar1;
  }
  *(undefined4 *)param_1 = uVar2;
  return 1;
}



/* Entry: 109e8805c; end: 109e89b9b;  */

/* WARNING: Type propagation algorithm not settling */

char ****** FUN_109e8805c(char *******param_1,char *******param_2,char *param_3)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  char ******ppppppcVar17;
  ulong uVar18;
  char *****pppppcVar19;
  char ******ppppppcVar20;
  char *******pppppppcVar21;
  char cVar22;
  int iVar23;
  char *******pppppppcVar24;
  ulong uVar25;
  char *******pppppppcVar26;
  char ******ppppppcVar27;
  char ******ppppppcVar28;
  char *******pppppppcVar29;
  char *******pppppppcVar30;
  char *******pppppppcVar31;
  ulong uVar32;
  char ******ppppppcVar33;
  char ******ppppppcVar34;
  char ******ppppppcStack_1f10;
  char *******pppppppcStack_1ef0;
  char *******pppppppcStack_1ee8;
  char ******ppppppcStack_1ee0;
  char ******ppppppcStack_1ed8;
  undefined4 uStack_1ed0;
  char *******pppppppcStack_1ec0;
  char ******ppppppcStack_1eb8;
  undefined1 uStack_1ea1;
  char ******ppppppcStack_1ea0;
  undefined8 uStack_1e98;
  undefined4 uStack_1e90;
  char ******appppppcStack_f00 [400];
  char ******appppppcStack_280 [50];
  char ******appppppcStack_f0 [16];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcStack_1ed8 = (char ******)0x100000001;
  ppppppcStack_1ee0 = (char ******)0x100000001;
  uStack_1ed0 = 0;
  uVar25 = 200;
  uStack_1e98 = 0x100000001;
  ppppppcStack_1ea0 = (char ******)0x100000001;
  uStack_1e90 = 0;
  pppppppcStack_1ee8 = &ppppppcStack_1ea0;
  pppppppcStack_1ef0 = appppppcStack_f00;
  ppppppcVar33 = (char ******)appppppcStack_280;
  pppppppcVar24 = (char *******)0xfffffffe;
  pppppppcVar31 = param_1;
  pppppppcVar21 = appppppcStack_280;
  pppppppcVar10 = appppppcStack_f00;
  pppppppcVar29 = &ppppppcStack_1ea0;
  uVar32 = 0;
LAB_109e88100:
  *(short *)ppppppcVar33 = (short)uVar32;
  pppppppcVar9 = pppppppcVar21;
  if ((char ******)((long)pppppppcVar21 + uVar25 * 2 + -2) <= ppppppcVar33) {
    if (uVar25 >> 4 < 0x271) {
      uVar25 = uVar25 << 1;
      if (9999 < uVar25) {
        uVar25 = 10000;
      }
      pppppppcVar9 = (char *******)(uVar25 * 0x26 + 0x2e);
      _malloc();
      if (pppppppcVar9 != (char *******)0x0) {
        lVar2 = ((long)ppppppcVar33 - (long)pppppppcVar21 >> 1) + 1;
        _memcpy();
        pppppppcVar26 =
             pppppppcVar9 + (ulong)(((int)uVar25 * 2 + 0x17U & 0xffff) * 0x2aab >> 0x12) * 3;
        _memcpy(pppppppcVar26,pppppppcStack_1ef0,lVar2 * 0x10);
        pppppppcVar30 = pppppppcVar26 + ((ulong)((int)uVar25 << 4 | 0x10) * 0x2aaaaaab >> 0x22) * 3;
        param_3 = (char *)(lVar2 * 0x14);
        pppppppcVar31 = pppppppcVar30;
        _memcpy();
        if (pppppppcVar21 != appppppcStack_280) {
          _free();
          pppppppcVar31 = pppppppcVar21;
        }
        iVar23 = (int)param_3;
        if (lVar2 < (long)uVar25) {
          pppppppcVar29 = (char *******)((long)pppppppcVar30 + lVar2 * 0x14 + -0x14);
          pppppppcVar10 = pppppppcVar26 + lVar2 * 2 + -2;
          ppppppcVar33 = (char ******)((long)pppppppcVar9 + lVar2 * 2 + -2);
          param_2 = pppppppcStack_1ee8;
          pppppppcStack_1ef0 = pppppppcVar26;
          pppppppcStack_1ee8 = pppppppcVar30;
          goto LAB_109e88228;
        }
        ppppppcVar33 = (char ******)0x1;
        pppppppcVar10 = appppppcStack_f0;
        goto LAB_109e89b08;
      }
      pppppppcVar10 = appppppcStack_f0;
      pppppppcVar9 = pppppppcVar21;
LAB_109e89ae0:
      ppppppcVar33 = (char ******)0x2;
    }
    else {
      ppppppcVar33 = (char ******)0x2;
      pppppppcVar10 = appppppcStack_f0;
    }
LAB_109e89aec:
    iVar23 = 0xf2a9942;
    pppppppcVar31 = &ppppppcStack_1ee0;
    FUN_109e8ba00();
    pppppppcStack_1ee8 = param_1;
    goto LAB_109e89b08;
  }
LAB_109e88228:
  sVar7 = *(short *)(&UNK_10e062fd8 + (long)(int)uVar32 * 2);
  if (sVar7 != -0x91) {
    if ((int)pppppppcVar24 == -2) {
      if (param_1[0xc] != (char ******)0x0) {
        ppppppcVar17 = param_1[0xd];
        if (ppppppcVar17 == (char ******)0x0) {
          param_1[0xc] = (char ******)0x0;
LAB_109e8830c:
          pppppppcVar24 = (char *******)0x119;
          goto LAB_109e88310;
        }
        ppppppcStack_1eb8 = (char ******)(*ppppppcVar17)[2];
        pppppppcStack_1ec0 = (char *******)(*ppppppcVar17)[1];
        uVar16 = *(uint *)((long)*ppppppcVar17 + 4);
        param_1[0xd] = (char ******)ppppppcVar17[1];
        pppppppcVar24 = (char *******)(ulong)uVar16;
        goto LAB_109e8826c;
      }
      param_3 = (char *)param_1[1];
      pppppppcVar31 = (char *******)&pppppppcStack_1ec0;
      param_2 = &ppppppcStack_1ee0;
      FUN_109e84ed0();
      pppppppcVar21 = pppppppcStack_1ec0;
      iVar23 = (int)pppppppcVar31;
      pppppppcVar24 = pppppppcVar31;
      if (*(int *)(param_1 + 7) != 0) {
        if (iVar23 < 0x119) {
          if (iVar23 == 0x28) {
            *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
            pppppppcVar24 = (char *******)0x28;
          }
          else {
            if (iVar23 != 0x29) goto LAB_109e8844c;
            iVar23 = *(int *)((long)param_1 + 0x44) + -1;
            *(int *)((long)param_1 + 0x44) = iVar23;
            if (iVar23 == 0) {
              *(undefined4 *)(param_1 + 7) = 0;
            }
            pppppppcVar24 = (char *******)0x29;
          }
        }
        else {
          pppppppcVar24 = (char *******)0x11c;
          if ((iVar23 != 0x119) && (iVar23 != 0x11c)) {
LAB_109e8844c:
            pppppppcVar24 = pppppppcVar31;
            if (*(int *)((long)param_1 + 0x44) == 0) {
              *(undefined4 *)(param_1 + 7) = 0;
            }
            goto LAB_109e8826c;
          }
        }
        goto LAB_109e88310;
      }
      if (*(int *)((long)param_1 + 0x3c) != 0) {
        if (iVar23 == 0x119) {
          pcVar1 = (char *)((long)param_1 + 0x3c);
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          goto LAB_109e8830c;
        }
        goto LAB_109e8826c;
      }
      uVar16 = iVar23 - 0x104;
      if (0x10 < uVar16) goto LAB_109e8826c;
      if ((1 << (ulong)(uVar16 & 0x1f) & 0x2773U) == 0) {
        if (uVar16 != 0x10) goto LAB_109e8826c;
        pppppppcVar31 = (char *******)param_1[2];
        param_2 = pppppppcStack_1ec0;
        (*(code *)pppppppcVar31[1])();
        FUN_109f64fdc();
        param_3 = (char *)pppppppcVar21;
        if (pppppppcVar31 == (char *******)0x0) {
          pppppppcVar24 = (char *******)0x114;
        }
        else if (pppppppcVar31[2] == (char ******)0x0) {
          pppppppcVar24 = (char *******)0x114;
        }
        else {
          if (*(int *)pppppppcVar31[2] != 0) {
            *(undefined4 *)(param_1 + 7) = 1;
            pcVar1 = (char *)((long)param_1 + 0x44);
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
          }
          pppppppcVar24 = (char *******)0x114;
        }
      }
      else {
        pcVar1 = (char *)((long)param_1 + 0x3c);
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
LAB_109e88310:
      uVar16 = (uint)(byte)(&UNK_10e06314a)[(ulong)pppppppcVar24 & 0xffffffff];
    }
    else {
LAB_109e8826c:
      if ((int)(uint)pppppppcVar24 < 1) {
        uVar16 = 0;
        pppppppcVar24 = (char *******)0x0;
      }
      else {
        if ((uint)pppppppcVar24 < 299) goto LAB_109e88310;
        uVar16 = 2;
      }
    }
    iVar23 = (int)param_3;
    uVar3 = uVar16 + (int)sVar7;
    if ((0x2db < uVar3) || (uVar16 != (int)*(short *)(&UNK_10e063276 + (ulong)uVar3 * 2)))
    goto LAB_109e88388;
    uVar18 = (ulong)(byte)(&UNK_10e06382e)[uVar3];
    if ((&UNK_10e06382e)[uVar3] == 0) goto LAB_109e89a14;
    if (uVar3 != 0x69) {
      uVar16 = 0;
      if ((int)pppppppcVar24 != 0) {
        uVar16 = 0xfffffffe;
      }
      pppppppcVar24 = (char *******)(ulong)uVar16;
      pppppppcVar26 = pppppppcVar10 + 2;
      pppppppcVar10[3] = ppppppcStack_1eb8;
      *pppppppcVar26 = (char ******)pppppppcStack_1ec0;
      *(char *******)((long)pppppppcVar29 + 0x1c) = ppppppcStack_1ed8;
      *(char *******)((long)pppppppcVar29 + 0x14) = ppppppcStack_1ee0;
      *(undefined4 *)((long)pppppppcVar29 + 0x24) = uStack_1ed0;
      pppppppcVar30 = (char *******)((long)pppppppcVar29 + 0x14);
      goto LAB_109e899e4;
    }
    ppppppcVar33 = (char ******)0x0;
    pppppppcVar10 = appppppcStack_f0;
    pppppppcStack_1ee8 = param_2;
LAB_109e89b08:
    if (pppppppcVar9 != appppppcStack_280) {
      _free();
      pppppppcVar31 = pppppppcVar9;
    }
    if (pppppppcVar10 != appppppcStack_f0) {
      _free();
      pppppppcVar31 = pppppppcVar10;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      if (pppppppcVar31[10] == (char ******)0x0) {
        bVar8 = true;
      }
      else {
        bVar8 = *(int *)pppppppcVar31[10] == 0;
      }
      ppppppcVar33 = *pppppppcVar31;
      FUN_109f6650c(ppppppcVar33,0x28);
      uVar4 = *(undefined4 *)(pppppppcStack_1ee8 + 2);
      ppppppcVar17 = *pppppppcStack_1ee8;
      ppppppcVar33[2] = (char *****)pppppppcStack_1ee8[1];
      ppppppcVar33[1] = (char *****)ppppppcVar17;
      *(undefined4 *)(ppppppcVar33 + 3) = uVar4;
      uVar16 = (uint)(iVar23 == 0);
      if (!bVar8) {
        uVar16 = 2;
      }
      *(uint *)ppppppcVar33 = uVar16;
      *(undefined1 *)((long)ppppppcVar33 + 4) = 0;
      ppppppcVar33[4] = (char *****)pppppppcVar31[10];
      pppppppcVar31[10] = ppppppcVar33;
      return ppppppcVar33;
    }
    return ppppppcVar33;
  }
LAB_109e88388:
  bVar5 = (&UNK_10e063b0a)[(int)uVar32];
  if (bVar5 == 0) {
LAB_109e89a14:
    uVar25 = 0;
    FUN_109e8a3a8(0,uVar32,pppppppcVar24);
    pppppppcVar10 = appppppcStack_f0;
    if (uVar25 < 0x81) {
      pppppppcVar31 = (char *******)0x80;
    }
    else {
      pppppppcVar21 = (char *******)(uVar25 << 1);
      if (0x7fffffffffffffff < uVar25) {
        pppppppcVar21 = (char *******)0xffffffffffffffff;
      }
      pppppppcVar29 = pppppppcVar21;
      _malloc();
      pppppppcVar31 = (char *******)0x80;
      if (pppppppcVar29 != (char *******)0x0) {
        pppppppcVar31 = pppppppcVar21;
        pppppppcVar10 = pppppppcVar29;
      }
    }
    if ((char *******)(uVar25 - 1) < pppppppcVar31) {
      FUN_109e8a3a8(pppppppcVar10,uVar32,pppppppcVar24);
      ppppppcVar33 = (char ******)0x1;
      goto LAB_109e89aec;
    }
    iVar23 = 0xf2a9942;
    pppppppcVar31 = &ppppppcStack_1ee0;
    pppppppcStack_1ee8 = param_1;
    FUN_109e8ba00();
    if (uVar25 != 0) goto LAB_109e89ae0;
    ppppppcVar33 = (char ******)0x1;
    goto LAB_109e89b08;
  }
  bVar6 = (&UNK_10e063bc3)[bVar5];
  uVar32 = (ulong)bVar6;
  if (uVar32 == 0) {
    ppppppcVar34 = pppppppcVar29[1];
    ppppppcVar17 = ppppppcVar34;
  }
  else {
    ppppppcVar34 = *(char *******)((long)pppppppcVar29 + (long)(int)-(uint)bVar6 * 0x14 + 0x14);
    ppppppcVar17 = pppppppcVar29[1];
  }
  pppppppcVar21 = (char *******)pppppppcVar10[(1 - uVar32) * 2];
  param_2 = (char *******)(pppppppcVar10 + (1 - uVar32) * 2)[1];
  uVar4 = *(undefined4 *)(pppppppcVar29 + 2);
  switch(bVar5) {
  case 6:
    ppppppcVar20 = *pppppppcVar10;
    if (ppppppcVar20 != (char ******)0x0) {
      FUN_109e8a6e8(param_1,ppppppcVar20,0);
      pppppcVar19 = ppppppcVar20[2];
      if (pppppcVar19 != (char *****)0x0) {
        pppppcVar19[1] = (char ****)0x0;
        ppppppcVar20[1] = pppppcVar19;
      }
      for (pppppcVar19 = *ppppppcVar20; pppppcVar19 != (char *****)0x0;
          pppppcVar19 = (char *****)pppppcVar19[1]) {
        FUN_109e8b500(param_1[0xe],*pppppcVar19);
      }
    }
    pppppppcVar31 = (char *******)param_1[0xe];
    uStack_1ea1 = 10;
    param_3 = (char *)0x1;
    FUN_109f68530(pppppppcVar31,&uStack_1ea1);
    pppppppcVar24 = (char *******)((ulong)pppppppcVar24 & 0xffffffff);
    break;
  case 8:
    if ((*(char *)((long)param_1 + 0xc4) == '\x01') && (pppppppcVar10[-1] != (char ******)0x0)) {
      FUN_109e8ba00(pppppppcVar29 + -5,param_1,&UNK_10f6103d0);
    }
    param_3 = (char *)(ulong)*(uint *)(pppppppcVar10 + -2);
    pppppppcVar31 = param_1;
    FUN_109e89b9c(param_1,pppppppcVar29 + -5);
    goto code_r0x000109e898d4;
  case 9:
    if ((*(char *)((long)param_1 + 0xc4) == '\x01') && (pppppppcVar10[-1] != (char ******)0x0)) {
      pppppppcVar31 = pppppppcVar29 + -5;
      param_3 = &UNK_10f6103d0;
      FUN_109e8ba00(pppppppcVar31,param_1);
    }
    ppppppcVar20 = param_1[10];
    if (ppppppcVar20 == (char ******)0x0) {
      pppppppcVar31 = pppppppcVar29 + -5;
      param_3 = &UNK_10f610b0b;
code_r0x000109e89664:
      FUN_109e8ba00(pppppppcVar31,param_1);
    }
    else if (*(int *)ppppppcVar20 == 1) {
      if (*(int *)(pppppppcVar10 + -2) != 0) {
        *(int *)ppppppcVar20 = 0;
      }
    }
    else {
      *(int *)ppppppcVar20 = 2;
    }
    break;
  case 10:
    *(char *)((long)param_1 + 0xb5) = '\x01';
    *(int *)(param_1 + 0x17) = (int)pppppppcVar10[-2];
    pppppppcVar31 = (char *******)param_1[0xe];
    puVar11 = &UNK_10f610408;
    goto code_r0x000109e88d84;
  case 0xb:
    *(char *)((long)param_1 + 0xb5) = '\x01';
    *(int *)(param_1 + 0x17) = (int)pppppppcVar10[-4];
    *(char *)((long)param_1 + 0xbc) = '\x01';
    *(int *)(param_1 + 0x18) = (int)pppppppcVar10[-2];
    pppppppcVar31 = (char *******)param_1[0xe];
    puVar11 = &UNK_10f610413;
    goto code_r0x000109e88d84;
  case 0xc:
    *(char *)((long)param_1 + 0xb5) = '\x01';
    *(int *)(param_1 + 0x17) = (int)pppppppcVar10[-4];
    pppppppcVar31 = (char *******)param_1[0xe];
    puVar11 = &UNK_10f610422;
    goto code_r0x000109e88d84;
  case 0xd:
    param_3 = (char *)pppppppcVar10[-4];
    pppppppcVar31 = param_1;
    FUN_109e89c28(param_1,pppppppcVar29 + -5,param_3,pppppppcVar10[-2]);
    goto code_r0x000109e8971c;
  case 0xe:
    lVar2 = -0x50;
    param_3 = (char *)pppppppcVar10[-8];
    ppppppcVar28 = pppppppcVar10[-2];
    ppppppcVar20 = (char ******)0x0;
    goto code_r0x000109e889c4;
  case 0xf:
    lVar2 = -100;
    param_3 = (char *)pppppppcVar10[-10];
    ppppppcVar20 = pppppppcVar10[-6];
    ppppppcVar28 = pppppppcVar10[-2];
code_r0x000109e889c4:
    pppppppcVar31 = param_1;
    FUN_109e89d2c(param_1,(char *)((long)pppppppcVar29 + lVar2),param_3,ppppppcVar20,ppppppcVar28);
    goto code_r0x000109e8971c;
  case 0x10:
    pppppppcVar31 = (char *******)param_1[0xe];
    uStack_1ea1 = 10;
    param_3 = (char *)0x1;
    FUN_109f68530(pppppppcVar31,&uStack_1ea1);
    break;
  case 0x12:
    if ((param_1[10] == (char ******)0x0) || (*(int *)param_1[10] == 0)) {
      param_3 = (char *)pppppppcVar10[-2];
      uVar12 = 0x118;
      uVar13 = 0;
code_r0x000109e88fec:
      pppppppcVar31 = param_1;
      FUN_109e89e88(param_1,uVar12,param_3,uVar13);
      goto code_r0x000109e8971c;
    }
    break;
  case 0x14:
    ppppppcVar20 = pppppppcVar10[-2];
    cVar14 = *(char *)ppppppcVar20;
    if (cVar14 == 'G') {
      cVar14 = *(char *)((long)ppppppcVar20 + 1);
      if (cVar14 == 'L') {
        cVar14 = *(char *)((long)ppppppcVar20 + 2);
        cVar22 = '_';
      }
      else {
        cVar22 = 'L';
      }
    }
    else {
      cVar22 = 'G';
    }
    if (cVar22 == cVar14) {
      puVar11 = &UNK_10f610430;
code_r0x000109e898fc:
      FUN_109e8ba00((char *)((long)pppppppcVar29 + -0x3c),param_1,puVar11);
    }
    else {
      ppppppcVar28 = ppppppcVar20;
      _strstr(ppppppcVar20,&UNK_10f60895d);
      if (ppppppcVar28 != (char ******)0x0) {
        if (*(char *)((long)param_1 + 0xc4) == '\x01') {
          uVar16 = *(uint *)(param_1 + 0x16);
          if (uVar16 < 300) {
code_r0x000109e897f4:
            puVar11 = &UNK_10f6104c5;
          }
          else {
            iVar23 = 0xf610475;
            _strcmp(&UNK_10f610475,ppppppcVar20);
            if (iVar23 != 0) {
              iVar23 = 0xf61047e;
              _strcmp(&UNK_10f61047e,ppppppcVar20);
              if (iVar23 != 0) {
                iVar23 = 0xf610487;
                _strcmp(&UNK_10f610487,ppppppcVar20);
                if (iVar23 != 0) {
                  if (uVar16 != 300) goto code_r0x000109e89884;
                  goto code_r0x000109e897f4;
                }
              }
            }
            puVar11 = &UNK_10f610493;
          }
          goto code_r0x000109e898fc;
        }
code_r0x000109e89884:
        func_0x000109e8ba84((char *)((long)pppppppcVar29 + -0x3c),param_1,&UNK_10f6104c5);
      }
    }
    pppppppcVar31 = (char *******)param_1[2];
    param_3 = (char *)pppppppcVar10[-2];
    pppppppcVar30 = (char *******)param_3;
    (*(code *)pppppppcVar31[1])(param_3);
    FUN_109f64fdc(pppppppcVar31,pppppppcVar30);
    if (pppppppcVar31 != (char *******)0x0) {
      ppppppcVar20 = param_1[2];
      pppppppcVar31[1] = (char ******)ppppppcVar20[3];
      ppppppcVar20[8] =
           (char *****)CONCAT44((int)((ulong)ppppppcVar20[8] >> 0x20) + 1,(int)ppppppcVar20[8] + -1)
      ;
    }
    break;
  case 0x15:
    pppppppcVar31 = pppppppcVar29 + -5;
    param_3 = &UNK_10f6104fd;
    goto code_r0x000109e89704;
  case 0x16:
    if ((param_1[10] == (char ******)0x0) || (*(int *)param_1[10] == 0)) {
      param_3 = (char *)pppppppcVar10[-2];
      pppppppcVar31 = param_1;
      FUN_109e89e88(param_1,0x115,param_3,1);
    }
    else {
      param_3 = (char *)0x0;
      pppppppcVar31 = param_1;
      FUN_109e89b9c(param_1,(char *)((long)pppppppcVar29 + -0x3c));
      *(undefined4 *)param_1[10] = 2;
    }
    goto code_r0x000109e898d4;
  case 0x17:
    if ((param_1[10] == (char ******)0x0) || (*(int *)param_1[10] == 0)) {
      FUN_109e8ba00(pppppppcVar29 + -5,param_1,&UNK_10f61050a);
    }
    param_3 = (char *)0x0;
    pppppppcVar31 = param_1;
    FUN_109e89b9c(param_1,pppppppcVar29 + -5);
    break;
  case 0x18:
    ppppppcVar28 = param_1[2];
    ppppppcVar27 = pppppppcVar10[-4];
    ppppppcVar20 = ppppppcVar27;
    (*(code *)ppppppcVar28[1])(ppppppcVar27);
    FUN_109f64fdc(ppppppcVar28,ppppppcVar20,ppppppcVar27);
    if (ppppppcVar28 == (char ******)0x0) {
      param_3 = (char *)0x0;
    }
    else {
      param_3 = (char *)(ulong)(ppppppcVar28[2] != (char *****)0x0);
    }
    lVar2 = -0x50;
    goto code_r0x000109e8958c;
  case 0x19:
    ppppppcVar28 = param_1[2];
    ppppppcVar27 = pppppppcVar10[-4];
    ppppppcVar20 = ppppppcVar27;
    (*(code *)ppppppcVar28[1])(ppppppcVar27);
    FUN_109f64fdc(ppppppcVar28,ppppppcVar20,ppppppcVar27);
    if (ppppppcVar28 == (char ******)0x0) {
      param_3 = (char *)0x1;
    }
    else {
      param_3 = (char *)(ulong)(ppppppcVar28[2] == (char *****)0x0);
    }
    lVar2 = -0x28;
code_r0x000109e8958c:
    pppppppcVar31 = param_1;
    FUN_109e89b9c(param_1,(char *)((long)pppppppcVar29 + lVar2));
    break;
  case 0x1a:
    ppppppcVar20 = param_1[10];
    if (ppppppcVar20 == (char ******)0x0) {
      pppppppcVar31 = (char *******)((long)pppppppcVar29 + -0x3c);
      param_3 = &UNK_10f610b0b;
    }
    else {
      if (*(int *)ppppppcVar20 == 1) {
        param_3 = (char *)pppppppcVar10[-2];
        uVar12 = 0x103;
        uVar13 = 1;
        goto code_r0x000109e88fec;
      }
      if (*(char *)((long)ppppppcVar20 + 4) != '\x01') {
        *(int *)ppppppcVar20 = 2;
        break;
      }
      pppppppcVar31 = (char *******)((long)pppppppcVar29 + -0x3c);
      param_3 = &UNK_10f610521;
    }
    goto code_r0x000109e89704;
  case 0x1b:
    ppppppcVar20 = param_1[10];
    if (ppppppcVar20 == (char ******)0x0) {
      FUN_109e8ba00(pppppppcVar29 + -5,param_1,&UNK_10f610b0b);
    }
    else {
      if (*(int *)ppppppcVar20 == 1) {
        pppppppcVar31 = pppppppcVar29 + -5;
        param_3 = &UNK_10f610533;
        goto code_r0x000109e89704;
      }
      pppppppcVar31 = pppppppcVar29 + -5;
      if (*(char *)((long)ppppppcVar20 + 4) == '\x01') {
        param_3 = &UNK_10f610521;
        FUN_109e8ba00(pppppppcVar31,param_1);
        goto code_r0x000109e898d4;
      }
      *(int *)ppppppcVar20 = 2;
    }
    pppppppcVar31 = pppppppcVar29 + -5;
    param_3 = &UNK_10f61054c;
    func_0x000109e8ba84(pppppppcVar31,param_1);
code_r0x000109e898d4:
    pppppppcVar24 = (char *******)((ulong)pppppppcVar24 & 0xffffffff);
    break;
  case 0x1c:
    *(undefined4 *)(param_1 + 4) = 1;
    break;
  case 0x1d:
    ppppppcVar20 = param_1[10];
    if (ppppppcVar20 == (char ******)0x0) {
      pppppppcVar31 = (char *******)((long)pppppppcVar29 + -0x3c);
      param_3 = &UNK_10f610b0b;
      FUN_109e8ba00(pppppppcVar31,param_1);
      ppppppcVar20 = param_1[10];
      if (ppppppcVar20 == (char ******)0x0) break;
    }
    else {
      if (*(char *)((long)ppppppcVar20 + 4) == '\x01') {
        pppppppcVar31 = (char *******)((long)pppppppcVar29 + -0x3c);
        param_3 = &UNK_10f610576;
        goto code_r0x000109e89664;
      }
      iVar23 = 0;
      if (*(int *)ppppppcVar20 != 1) {
        iVar23 = 2;
      }
      *(int *)ppppppcVar20 = iVar23;
    }
    *(undefined1 *)((long)ppppppcVar20 + 4) = 1;
    break;
  case 0x1e:
    if (param_1[10] == (char ******)0x0) {
      pppppppcVar31 = (char *******)((long)pppppppcVar29 + -0x14);
      param_3 = &UNK_10f610b1c;
      goto code_r0x000109e89704;
    }
    param_1[10] = (char ******)param_1[10][4];
    break;
  case 0x20:
    if (*(char *)((long)param_1 + 0xb4) == '\x01') {
      FUN_109e8ba00((char *)((long)pppppppcVar29 + -0x3c),param_1,&UNK_10f61058a);
    }
    param_3 = (char *)0x0;
    pppppppcVar31 = param_1;
    FUN_109e8a0bc(param_1,pppppppcVar10[-2],0,1);
    break;
  case 0x21:
    if (*(char *)((long)param_1 + 0xb4) == '\x01') {
      FUN_109e8ba00(pppppppcVar29 + -10,param_1,&UNK_10f61058a);
    }
    param_3 = (char *)pppppppcVar10[-2];
    pppppppcVar31 = param_1;
    FUN_109e8a0bc(param_1,pppppppcVar10[-4],param_3,1);
    break;
  case 0x22:
    uVar12 = 100;
    if (*(int *)(param_1 + 0x14) != 2) {
      uVar12 = 0x6e;
    }
    param_3 = (char *)0x0;
    pppppppcVar31 = param_1;
    FUN_109e8a0bc(param_1,uVar12,0,0);
    break;
  case 0x23:
    pppppppcVar31 = (char *******)param_1[0xe];
    puVar11 = &UNK_10f6105b1;
code_r0x000109e88d84:
    FUN_109f686b4(pppppppcVar31,puVar11);
    break;
  case 0x24:
    pppppppcVar31 = pppppppcVar29 + -5;
    param_3 = &UNK_10f6105b1;
    goto code_r0x000109e89704;
  case 0x25:
    pppppppcVar31 = pppppppcVar29 + -5;
    param_3 = &UNK_10f6105b5;
    goto code_r0x000109e89704;
  case 0x26:
    pppppppcVar31 = (char *******)((long)pppppppcVar29 + -0x3c);
    param_3 = &UNK_10f6105d0;
code_r0x000109e89704:
    FUN_109e8ba00(pppppppcVar31,param_1);
code_r0x000109e8971c:
    pppppppcVar24 = (char *******)((ulong)pppppppcVar24 & 0xffffffff);
    break;
  case 0x27:
    pppppppcVar31 = (char *******)*pppppppcVar10;
    param_3 = (char *)0x0;
    _strtoll(pppppppcVar31,0);
    pppppppcVar21 = pppppppcVar31;
    break;
  case 0x28:
    goto code_r0x000109e8863c;
  case 0x29:
    pppppppcVar31 = (char *******)*pppppppcVar10;
    if ((*(char *)pppppppcVar31 == '0') && (*(char *)((long)pppppppcVar31 + 1) != '\0')) {
      param_3 = &UNK_10f6105ee;
      pppppppcVar31 = pppppppcVar29;
      FUN_109e8ba00(pppppppcVar29,param_1);
      pppppppcVar21 = (char *******)0x0;
    }
    else {
      param_3 = (char *)0xa;
      _strtoll(pppppppcVar31,0);
      pppppppcVar21 = pppppppcVar31;
    }
    break;
  case 0x2a:
    param_2 = (char *******)0x0;
    goto code_r0x000109e8863c;
  case 0x2b:
    if (*(char *)((long)param_1 + 0xc4) == '\x01') {
      pppppppcVar31 = (char *******)*param_1;
      FUN_109f66644(pppppppcVar31,*pppppppcVar10);
      param_2 = pppppppcVar31;
    }
    else {
      param_2 = (char *******)0x0;
    }
  case 0x45:
  case 0x47:
    pppppppcVar21 = (char *******)0x0;
    break;
  case 0x2c:
    if (pppppppcVar10[-4] == (char ******)0x0) {
code_r0x000109e88e78:
      pppppppcVar21 = (char *******)(ulong)(*pppppppcVar10 != (char ******)0x0);
      goto code_r0x000109e89648;
    }
    if ((char *******)pppppppcVar10[-3] != (char *******)0x0) {
      param_2 = (char *******)pppppppcVar10[-3];
    }
    pppppppcVar21 = (char *******)0x1;
    break;
  case 0x2d:
    if (pppppppcVar10[-4] != (char ******)0x0) goto code_r0x000109e88e78;
    pppppppcVar21 = (char *******)0x0;
    if ((char *******)pppppppcVar10[-3] != (char *******)0x0) {
      param_2 = (char *******)pppppppcVar10[-3];
    }
    break;
  case 0x2e:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((ulong)*pppppppcVar10 | (ulong)pppppppcVar10[-4]);
    goto joined_r0x000109e88684;
  case 0x2f:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((ulong)*pppppppcVar10 ^ (ulong)pppppppcVar10[-4]);
    goto joined_r0x000109e885f4;
  case 0x30:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((ulong)*pppppppcVar10 & (ulong)pppppppcVar10[-4]);
    goto joined_r0x000109e885f4;
  case 0x31:
    param_2 = (char *******)pppppppcVar10[-3];
    bVar8 = pppppppcVar10[-4] != *pppppppcVar10;
    goto joined_r0x000109e8901c;
  case 0x32:
    param_2 = (char *******)pppppppcVar10[-3];
    bVar8 = pppppppcVar10[-4] == *pppppppcVar10;
joined_r0x000109e8901c:
    pppppppcVar21 = (char *******)(ulong)bVar8;
    goto joined_r0x000109e885f4;
  case 0x33:
    param_2 = (char *******)pppppppcVar10[-3];
    bVar8 = (long)*pppppppcVar10 <= (long)pppppppcVar10[-4];
    goto joined_r0x000109e88e68;
  case 0x34:
    param_2 = (char *******)pppppppcVar10[-3];
    bVar8 = (long)pppppppcVar10[-4] <= (long)*pppppppcVar10;
    goto joined_r0x000109e88e68;
  case 0x35:
    param_2 = (char *******)pppppppcVar10[-3];
    bVar8 = (long)*pppppppcVar10 < (long)pppppppcVar10[-4];
    goto joined_r0x000109e88e68;
  case 0x36:
    param_2 = (char *******)pppppppcVar10[-3];
    bVar8 = (long)pppppppcVar10[-4] < (long)*pppppppcVar10;
joined_r0x000109e88e68:
    pppppppcVar21 = (char *******)(ulong)bVar8;
    goto joined_r0x000109e885f4;
  case 0x37:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((long)pppppppcVar10[-4] >> ((ulong)*pppppppcVar10 & 0x3f));
    goto joined_r0x000109e885f4;
  case 0x38:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((long)pppppppcVar10[-4] << ((ulong)*pppppppcVar10 & 0x3f));
    goto joined_r0x000109e885f4;
  case 0x39:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((long)pppppppcVar10[-4] - (long)*pppppppcVar10);
    goto joined_r0x000109e885f4;
  case 0x3a:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((long)*pppppppcVar10 + (long)pppppppcVar10[-4]);
joined_r0x000109e885f4:
    if (param_2 == (char *******)0x0) {
code_r0x000109e89650:
      param_2 = (char *******)pppppppcVar10[1];
    }
    break;
  case 0x3b:
    ppppppcVar20 = *pppppppcVar10;
    if (ppppppcVar20 == (char ******)0x0) {
code_r0x000109e89600:
      pppppppcVar31 = pppppppcVar29 + -5;
      param_3 = "%s";
      FUN_109e8ba00(pppppppcVar31,param_1);
    }
    else {
      lVar2 = 0;
      if (ppppppcVar20 != (char ******)0x0) {
        lVar2 = (long)pppppppcVar10[-4] / (long)ppppppcVar20;
      }
      pppppppcVar21 = (char *******)((long)pppppppcVar10[-4] - lVar2 * (long)ppppppcVar20);
    }
    goto code_r0x000109e89648;
  case 0x3c:
    ppppppcVar20 = *pppppppcVar10;
    if (ppppppcVar20 == (char ******)0x0) goto code_r0x000109e89600;
    pppppppcVar21 = (char *******)0x0;
    if (ppppppcVar20 != (char ******)0x0) {
      pppppppcVar21 = (char *******)((long)pppppppcVar10[-4] / (long)ppppppcVar20);
    }
code_r0x000109e89648:
    param_2 = (char *******)pppppppcVar10[-3];
    goto joined_r0x000109e88684;
  case 0x3d:
    param_2 = (char *******)pppppppcVar10[-3];
    pppppppcVar21 = (char *******)((long)*pppppppcVar10 * (long)pppppppcVar10[-4]);
joined_r0x000109e88684:
    if (param_2 != (char *******)0x0) break;
    goto code_r0x000109e89650;
  case 0x3e:
    param_2 = (char *******)pppppppcVar10[1];
    pppppppcVar21 = (char *******)(ulong)(*pppppppcVar10 == (char ******)0x0);
    break;
  case 0x3f:
    param_2 = (char *******)pppppppcVar10[1];
    pppppppcVar21 = (char *******)~(ulong)*pppppppcVar10;
    break;
  case 0x40:
    param_2 = (char *******)pppppppcVar10[1];
    pppppppcVar21 = (char *******)-(long)*pppppppcVar10;
    break;
  case 0x41:
    pppppppcVar21 = (char *******)*pppppppcVar10;
    goto code_r0x000109e89650;
  case 0x42:
    param_2 = (char *******)pppppppcVar10[-1];
    pppppppcVar21 = (char *******)pppppppcVar10[-2];
    break;
  case 0x43:
    pppppppcVar21 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar21,0x10);
    *pppppppcVar21 = (char ******)0x0;
    pppppppcVar21[1] = (char ******)0x0;
    param_3 = (char *)*pppppppcVar10;
    pppppppcVar31 = param_1;
    FUN_109e8a2e8(param_1,pppppppcVar21);
    break;
  case 0x44:
    pppppppcVar21 = (char *******)pppppppcVar10[-4];
    param_3 = (char *)*pppppppcVar10;
    pppppppcVar31 = param_1;
    FUN_109e8a2e8(param_1,pppppppcVar21);
    goto code_r0x000109e8971c;
  case 0x4a:
    if (*(char *)((long)param_1[0x15] + 0x1a4bc) == '\0') {
      param_3 = &UNK_10f61066c;
      pppppppcVar31 = pppppppcVar29;
      goto code_r0x000109e89664;
    }
    param_3 = &UNK_10f61066c;
    pppppppcVar31 = pppppppcVar29;
    func_0x000109e8ba84(pppppppcVar29,param_1);
    break;
  case 0x4b:
    *(undefined4 *)(param_1 + 5) = 1;
    pppppppcVar21 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar21,0x18);
    pppppppcVar21[1] = (char ******)0x0;
    pppppppcVar21[2] = (char ******)0x0;
    *pppppppcVar21 = (char ******)0x0;
    param_3 = (char *)*pppppppcVar10;
    pppppppcVar31 = (char *******)*param_1;
    FUN_109e8a350(pppppppcVar31,pppppppcVar21);
    break;
  case 0x4c:
    pppppppcVar21 = (char *******)pppppppcVar10[-2];
    param_3 = (char *)*pppppppcVar10;
    pppppppcVar31 = (char *******)*param_1;
    FUN_109e8a350(pppppppcVar31,pppppppcVar21);
    goto code_r0x000109e8971c;
  case 0x4d:
    ppppppcStack_1f10 = *pppppppcVar10;
    pppppppcVar31 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar31,0x30);
    uVar15 = 0x114;
    goto code_r0x000109e891c0;
  case 0x4e:
    ppppppcStack_1f10 = *pppppppcVar10;
    pppppppcVar31 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar31,0x30);
    uVar15 = 0x117;
    goto code_r0x000109e891c0;
  case 0x4f:
    ppppppcStack_1f10 = *pppppppcVar10;
    pppppppcVar31 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar31,0x30);
    uVar15 = 0x11f;
    goto code_r0x000109e891c0;
  case 0x50:
    ppppppcVar20 = *pppppppcVar10;
    pppppppcVar31 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar31,0x30);
    *(int *)((long)pppppppcVar31 + 4) = (int)ppppppcVar20;
    ppppppcVar20 = (char ******)(long)(int)ppppppcVar20;
    goto code_r0x000109e89404;
  case 0x51:
    pppppppcVar31 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar31,0x30);
    ppppppcVar20 = (char ******)0x102;
    goto code_r0x000109e89400;
  case 0x52:
    ppppppcStack_1f10 = *pppppppcVar10;
    pppppppcVar31 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar31,0x30);
    uVar15 = 0x11a;
code_r0x000109e891c0:
    *(undefined4 *)((long)pppppppcVar31 + 4) = uVar15;
    pppppppcVar31[1] = ppppppcStack_1f10;
code_r0x000109e89408:
    *(char *)pppppppcVar31 = '\0';
    pppppppcVar31[4] = ppppppcStack_1ed8;
    pppppppcVar31[3] = ppppppcStack_1ee0;
    *(undefined4 *)(pppppppcVar31 + 5) = uStack_1ed0;
    pppppppcVar21 = pppppppcVar31;
    break;
  case 0x53:
    pppppppcVar31 = (char *******)*param_1;
    FUN_109f6650c(pppppppcVar31,0x30);
    ppppppcVar20 = (char ******)0x11c;
code_r0x000109e89400:
    *(int *)((long)pppppppcVar31 + 4) = (int)ppppppcVar20;
code_r0x000109e89404:
    pppppppcVar31[1] = ppppppcVar20;
    goto code_r0x000109e89408;
  case 0x54:
    pppppppcVar21 = (char *******)0x5b;
    break;
  case 0x55:
    pppppppcVar21 = (char *******)0x5d;
    break;
  case 0x56:
    pppppppcVar21 = (char *******)0x28;
    break;
  case 0x57:
    pppppppcVar21 = (char *******)0x29;
    break;
  case 0x58:
    pppppppcVar21 = (char *******)0x7b;
    break;
  case 0x59:
    pppppppcVar21 = (char *******)0x7d;
    break;
  case 0x5a:
    pppppppcVar21 = (char *******)0x2e;
    break;
  case 0x5b:
    pppppppcVar21 = (char *******)0x26;
    break;
  case 0x5c:
    pppppppcVar21 = (char *******)0x2a;
    break;
  case 0x5d:
    pppppppcVar21 = (char *******)0x2b;
    break;
  case 0x5e:
    pppppppcVar21 = (char *******)0x2d;
    break;
  case 0x5f:
    pppppppcVar21 = (char *******)0x7e;
    break;
  case 0x60:
    pppppppcVar21 = (char *******)0x21;
    break;
  case 0x61:
    pppppppcVar21 = (char *******)0x2f;
    break;
  case 0x62:
    pppppppcVar21 = (char *******)0x25;
    break;
  case 99:
    pppppppcVar21 = (char *******)0x129;
    break;
  case 100:
    pppppppcVar21 = (char *******)0x128;
    break;
  case 0x65:
    pppppppcVar21 = (char *******)0x3c;
    break;
  case 0x66:
    pppppppcVar21 = (char *******)0x3e;
    break;
  case 0x67:
    pppppppcVar21 = (char *******)0x127;
    break;
  case 0x68:
    pppppppcVar21 = (char *******)0x126;
    break;
  case 0x69:
    pppppppcVar21 = (char *******)0x125;
    break;
  case 0x6a:
    pppppppcVar21 = (char *******)0x124;
    break;
  case 0x6b:
    pppppppcVar21 = (char *******)0x5e;
    break;
  case 0x6c:
    pppppppcVar21 = (char *******)0x7c;
    break;
  case 0x6d:
    pppppppcVar21 = (char *******)0x123;
    break;
  case 0x6e:
    pppppppcVar21 = (char *******)0x122;
    break;
  case 0x6f:
    pppppppcVar21 = (char *******)0x3b;
    break;
  case 0x70:
    pppppppcVar21 = (char *******)0x2c;
    break;
  case 0x71:
    pppppppcVar21 = (char *******)0x3d;
    break;
  case 0x72:
    pppppppcVar21 = (char *******)0x121;
    break;
  case 0x73:
    pppppppcVar21 = (char *******)0x11d;
    break;
  case 0x74:
    pppppppcVar21 = (char *******)0x11e;
  }
LAB_109e89968:
  ppppppcVar33 = (char ******)((long)ppppppcVar33 + uVar32 * -2);
  bVar5 = (&UNK_10e063c38)[bVar5];
  pppppppcVar26 = pppppppcVar10 + uVar32 * -2 + 2;
  *pppppppcVar26 = (char ******)pppppppcVar21;
  pppppppcVar10[uVar32 * -2 + 3] = (char ******)param_2;
  pppppppcVar30 = (char *******)((long)pppppppcVar29 + (long)(int)-(uint)bVar6 * 0x14 + 0x14);
  *(char *******)((long)pppppppcVar29 + (long)(int)-(uint)bVar6 * 0x14 + 0x1c) = ppppppcVar17;
  *pppppppcVar30 = ppppppcVar34;
  *(undefined4 *)((long)pppppppcVar29 + (long)(int)-(uint)bVar6 * 0x14 + 0x24) = uVar4;
  uVar16 = (int)*(short *)ppppppcVar33 + (int)*(short *)(&UNK_10e063cae + ((ulong)bVar5 - 0x42) * 2)
  ;
  if ((uVar16 < 0x2dc) && (*(short *)(&UNK_10e063276 + (ulong)uVar16 * 2) == *(short *)ppppppcVar33)
     ) {
    uVar18 = (ulong)(byte)(&UNK_10e06382e)[uVar16];
  }
  else {
    uVar18 = (ulong)*(short *)(&UNK_10e063cd6 + ((ulong)bVar5 - 0x42) * 2);
  }
LAB_109e899e4:
  ppppppcVar33 = (char ******)((long)ppppppcVar33 + 2);
  pppppppcVar21 = pppppppcVar9;
  pppppppcVar10 = pppppppcVar26;
  pppppppcVar29 = pppppppcVar30;
  uVar32 = uVar18;
  goto LAB_109e88100;
code_r0x000109e8863c:
  pppppppcVar21 = (char *******)*pppppppcVar10;
  goto LAB_109e89968;
}



/* Entry: 109e89b9c; end: 109e89c27;  */

void FUN_109e89b9c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((int *)param_1[10] == (int *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)param_1[10] == 0;
  }
  puVar2 = (uint *)*param_1;
  FUN_109f6650c(puVar2,0x28);
  uVar3 = *(uint *)(param_2 + 2);
  uVar4 = *param_2;
  *(undefined8 *)(puVar2 + 4) = param_2[1];
  *(undefined8 *)(puVar2 + 2) = uVar4;
  puVar2[6] = uVar3;
  uVar3 = (uint)(param_3 == 0);
  if (!bVar1) {
    uVar3 = 2;
  }
  *puVar2 = uVar3;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined8 *)(puVar2 + 8) = param_1[10];
  param_1[10] = puVar2;
  return;
}



/* Entry: 109e89c28; end: 109e89d2b;  */

int * FUN_109e89c28(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  int *piVar24;
  uint uVar25;
  ulong uVar26;
  
  if (param_2 != 0) {
    FUN_109e8b65c(param_1,param_2,param_3);
  }
  piVar9 = (int *)*param_1;
  FUN_109f6650c(piVar9,0x20);
  *piVar9 = 0;
  piVar9[2] = 0;
  piVar9[3] = 0;
  uVar10 = *param_1;
  FUN_109f66644(uVar10,param_3);
  *(undefined8 *)(piVar9 + 4) = uVar10;
  *(undefined8 *)(piVar9 + 6) = param_4;
  lVar23 = param_1[2];
  uVar11 = param_3;
  (**(code **)(lVar23 + 8))(param_3);
  FUN_109f64fdc(lVar23,uVar11,param_3);
  if ((lVar23 != 0) && (*(long *)(lVar23 + 0x10) != 0)) {
    piVar12 = piVar9;
    func_0x000109e8b71c();
    if ((int)piVar12 != 0) {
      return piVar12;
    }
    FUN_109e8ba00(param_2,param_1,&UNK_10f610a31);
  }
  plVar22 = (long *)param_1[2];
  uVar11 = param_3;
  (*(code *)plVar22[1])();
  uVar7 = *(uint *)(plVar22 + 7);
  if (*(uint *)(plVar22 + 8) < uVar7) {
    if (*(uint *)((long)plVar22 + 0x44) + *(uint *)(plVar22 + 8) < uVar7) goto LAB_109f65210;
    uVar25 = *(uint *)((long)plVar22 + 0x3c);
    if (*(uint *)((long)plVar22 + 0x44) == uVar7) {
      _bzero(*plVar22,(ulong)*(uint *)(&UNK_10e47d50c + (ulong)uVar25 * 0x20) * 0x18);
      plVar22[8] = 0;
      goto LAB_109f65210;
    }
  }
  else {
    uVar25 = *(int *)((long)plVar22 + 0x3c) + 1;
  }
  if (uVar25 < 0x1f) {
    if (*plVar22 == 0) {
      lVar23 = 0;
    }
    else {
      lVar16 = *(long *)(*plVar22 + -0x30);
      lVar23 = 0;
      if (lVar16 != 0) {
        lVar23 = lVar16 + 0x30;
      }
    }
    lVar16 = (ulong)uVar25 * 0x20;
    uVar7 = *(uint *)(&UNK_10e47d50c + lVar16);
    func_0x000109f6590c(lVar23,(ulong)uVar7 * 0x18);
    if (lVar23 != 0) {
      puVar15 = (uint *)*plVar22;
      lVar17 = plVar22[3];
      uVar1 = *(uint *)(plVar22 + 4);
      *plVar22 = lVar23;
      uVar8 = *(uint *)(&UNK_10e47d510 + lVar16);
      *(uint *)(plVar22 + 4) = uVar7;
      *(uint *)((long)plVar22 + 0x24) = uVar8;
      lVar5 = *(long *)(&UNK_10e47d518 + lVar16);
      lVar6 = *(long *)(&UNK_10e47d520 + lVar16);
      plVar22[5] = lVar5;
      plVar22[6] = lVar6;
      *(undefined4 *)(plVar22 + 7) = *(undefined4 *)(&UNK_10e47d508 + lVar16);
      *(uint *)((long)plVar22 + 0x3c) = uVar25;
      *(undefined4 *)((long)plVar22 + 0x44) = 0;
      if (uVar1 != 0) {
        lVar16 = (ulong)uVar1 * 0x18;
        puVar20 = puVar15;
        do {
          lVar21 = *(long *)(puVar20 + 2);
          if (lVar21 != 0 && lVar21 != lVar17) {
            do {
              uVar25 = *puVar20;
              uVar18 = lVar5 * (ulong)uVar25;
              uVar18 = ((uVar18 & 0xffffffff) * (ulong)uVar7 >> 0x20) +
                       (uVar18 >> 0x20) * (ulong)uVar7 >> 0x20;
              puVar14 = (uint *)(lVar23 + uVar18 * 0x18);
              if (*(long *)(puVar14 + 2) != 0) {
                uVar19 = lVar6 * (ulong)uVar25;
                do {
                  uVar2 = (int)(((uVar19 & 0xffffffff) * (ulong)uVar8 >> 0x20) +
                                (uVar19 >> 0x20) * (ulong)uVar8 >> 0x20) + 1 + (int)uVar18;
                  uVar3 = 0;
                  if (uVar7 <= uVar2) {
                    uVar3 = uVar7;
                  }
                  uVar18 = (ulong)(uVar2 - uVar3);
                  puVar14 = (uint *)(lVar23 + uVar18 * 0x18);
                } while (*(long *)(puVar14 + 2) != 0);
              }
              uVar10 = *(undefined8 *)(puVar20 + 4);
              *puVar14 = uVar25;
              *(long *)(puVar14 + 2) = lVar21;
              *(undefined8 *)(puVar14 + 4) = uVar10;
              puVar14 = puVar20;
              do {
                puVar20 = puVar14 + 6;
                if (puVar20 == puVar15 + (ulong)uVar1 * 6) goto LAB_109f651f8;
                lVar21 = *(long *)(puVar14 + 8);
                puVar14 = puVar20;
              } while (lVar21 == 0 || lVar21 == lVar17);
            } while( true );
          }
          puVar20 = puVar20 + 6;
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
      }
LAB_109f651f8:
      if (puVar15 != (uint *)0x0) {
        FUN_109f65aa4(puVar15 + -0xc);
        FUN_109f65ae0(puVar15 + -0xc);
      }
    }
  }
LAB_109f65210:
  uVar18 = plVar22[5] * (uVar11 & 0xffffffff);
  uVar7 = *(uint *)(plVar22 + 4);
  uVar25 = *(uint *)((long)plVar22 + 0x24);
  uVar19 = ((uVar18 & 0xffffffff) * (ulong)uVar7 >> 0x20) + (uVar18 >> 0x20) * (ulong)uVar7;
  uVar26 = uVar19 >> 0x20;
  uVar18 = plVar22[6] * (uVar11 & 0xffffffff);
  piVar12 = (int *)0x0;
  do {
    piVar24 = (int *)(*plVar22 + uVar26 * 0x18);
    lVar23 = *(long *)(piVar24 + 2);
    if (lVar23 == 0) {
      if (piVar12 != (int *)0x0) {
        piVar24 = piVar12;
      }
      goto LAB_109f652cc;
    }
    piVar4 = piVar24;
    if (piVar12 != (int *)0x0 || lVar23 != plVar22[3]) {
      piVar4 = piVar12;
    }
    if (((lVar23 != plVar22[3]) && (*piVar24 == (int)uVar11)) &&
       (uVar13 = param_3, (*(code *)plVar22[2])(), (uVar13 & 1) != 0)) goto LAB_109f652fc;
    uVar1 = (int)(((uVar18 & 0xffffffff) * (ulong)uVar25 >> 0x20) + (uVar18 >> 0x20) * (ulong)uVar25
                 >> 0x20) + 1 + (int)uVar26;
    uVar8 = 0;
    if (uVar7 <= uVar1) {
      uVar8 = uVar7;
    }
    uVar1 = uVar1 - uVar8;
    uVar26 = (ulong)uVar1;
    piVar12 = piVar4;
  } while (uVar1 != (uint)(uVar19 >> 0x20));
  piVar24 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar24 = (int *)0x0;
  }
  else {
LAB_109f652cc:
    if (*(long *)(piVar24 + 2) == plVar22[3]) {
      *(int *)((long)plVar22 + 0x44) = *(int *)((long)plVar22 + 0x44) + -1;
    }
    *piVar24 = (int)uVar11;
    *(int *)(plVar22 + 8) = (int)plVar22[8] + 1;
LAB_109f652fc:
    *(ulong *)(piVar24 + 2) = param_3;
    *(int **)(piVar24 + 4) = piVar9;
  }
  return piVar24;
}



/* Entry: 109e89d2c; end: 109e89e87;  */

int * FUN_109e89d2c(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                   undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  int *piVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  
  FUN_109e8b65c();
  if ((param_4 != (undefined8 *)0x0) &&
     (puVar28 = (undefined8 *)*param_4, (undefined8 *)*param_4 != (undefined8 *)0x0)) {
    while (puVar15 = (undefined8 *)puVar28[1], puVar15 != (undefined8 *)0x0) {
      uVar27 = *puVar28;
      puVar29 = puVar15;
      do {
        uVar9 = uVar27;
        _strcmp(uVar27,*puVar29);
        if ((int)uVar9 == 0) {
          FUN_109e8ba00(param_2,param_1,&UNK_10f610aec);
          goto LAB_109e89db4;
        }
        puVar29 = (undefined8 *)puVar29[1];
        puVar28 = puVar15;
      } while (puVar29 != (undefined8 *)0x0);
    }
  }
LAB_109e89db4:
  piVar10 = (int *)*param_1;
  FUN_109f6650c(piVar10,0x20);
  *piVar10 = 1;
  *(undefined8 **)(piVar10 + 2) = param_4;
  uVar27 = *param_1;
  FUN_109f66644(uVar27,param_3);
  *(undefined8 *)(piVar10 + 4) = uVar27;
  *(undefined8 *)(piVar10 + 6) = param_5;
  lVar24 = param_1[2];
  uVar11 = param_3;
  (**(code **)(lVar24 + 8))(param_3);
  FUN_109f64fdc(lVar24,uVar11,param_3);
  if ((lVar24 != 0) && (*(long *)(lVar24 + 0x10) != 0)) {
    piVar12 = piVar10;
    func_0x000109e8b71c();
    if ((int)piVar12 != 0) {
      return piVar12;
    }
    FUN_109e8ba00(param_2,param_1,&UNK_10f610a31);
  }
  plVar23 = (long *)param_1[2];
  uVar11 = param_3;
  (*(code *)plVar23[1])();
  uVar7 = *(uint *)(plVar23 + 7);
  if (*(uint *)(plVar23 + 8) < uVar7) {
    if (*(uint *)((long)plVar23 + 0x44) + *(uint *)(plVar23 + 8) < uVar7) goto LAB_109f65210;
    uVar26 = *(uint *)((long)plVar23 + 0x3c);
    if (*(uint *)((long)plVar23 + 0x44) == uVar7) {
      _bzero(*plVar23,(ulong)*(uint *)(&UNK_10e47d50c + (ulong)uVar26 * 0x20) * 0x18);
      plVar23[8] = 0;
      goto LAB_109f65210;
    }
  }
  else {
    uVar26 = *(int *)((long)plVar23 + 0x3c) + 1;
  }
  if (uVar26 < 0x1f) {
    if (*plVar23 == 0) {
      lVar24 = 0;
    }
    else {
      lVar17 = *(long *)(*plVar23 + -0x30);
      lVar24 = 0;
      if (lVar17 != 0) {
        lVar24 = lVar17 + 0x30;
      }
    }
    lVar17 = (ulong)uVar26 * 0x20;
    uVar7 = *(uint *)(&UNK_10e47d50c + lVar17);
    func_0x000109f6590c(lVar24,(ulong)uVar7 * 0x18);
    if (lVar24 != 0) {
      puVar16 = (uint *)*plVar23;
      lVar18 = plVar23[3];
      uVar1 = *(uint *)(plVar23 + 4);
      *plVar23 = lVar24;
      uVar8 = *(uint *)(&UNK_10e47d510 + lVar17);
      *(uint *)(plVar23 + 4) = uVar7;
      *(uint *)((long)plVar23 + 0x24) = uVar8;
      lVar5 = *(long *)(&UNK_10e47d518 + lVar17);
      lVar6 = *(long *)(&UNK_10e47d520 + lVar17);
      plVar23[5] = lVar5;
      plVar23[6] = lVar6;
      *(undefined4 *)(plVar23 + 7) = *(undefined4 *)(&UNK_10e47d508 + lVar17);
      *(uint *)((long)plVar23 + 0x3c) = uVar26;
      *(undefined4 *)((long)plVar23 + 0x44) = 0;
      if (uVar1 != 0) {
        lVar17 = (ulong)uVar1 * 0x18;
        puVar21 = puVar16;
        do {
          lVar22 = *(long *)(puVar21 + 2);
          if (lVar22 != 0 && lVar22 != lVar18) {
            do {
              uVar26 = *puVar21;
              uVar19 = lVar5 * (ulong)uVar26;
              uVar19 = ((uVar19 & 0xffffffff) * (ulong)uVar7 >> 0x20) +
                       (uVar19 >> 0x20) * (ulong)uVar7 >> 0x20;
              puVar14 = (uint *)(lVar24 + uVar19 * 0x18);
              if (*(long *)(puVar14 + 2) != 0) {
                uVar20 = lVar6 * (ulong)uVar26;
                do {
                  uVar2 = (int)(((uVar20 & 0xffffffff) * (ulong)uVar8 >> 0x20) +
                                (uVar20 >> 0x20) * (ulong)uVar8 >> 0x20) + 1 + (int)uVar19;
                  uVar3 = 0;
                  if (uVar7 <= uVar2) {
                    uVar3 = uVar7;
                  }
                  uVar19 = (ulong)(uVar2 - uVar3);
                  puVar14 = (uint *)(lVar24 + uVar19 * 0x18);
                } while (*(long *)(puVar14 + 2) != 0);
              }
              uVar27 = *(undefined8 *)(puVar21 + 4);
              *puVar14 = uVar26;
              *(long *)(puVar14 + 2) = lVar22;
              *(undefined8 *)(puVar14 + 4) = uVar27;
              puVar14 = puVar21;
              do {
                puVar21 = puVar14 + 6;
                if (puVar21 == puVar16 + (ulong)uVar1 * 6) goto LAB_109f651f8;
                lVar22 = *(long *)(puVar14 + 8);
                puVar14 = puVar21;
              } while (lVar22 == 0 || lVar22 == lVar18);
            } while( true );
          }
          puVar21 = puVar21 + 6;
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != 0);
      }
LAB_109f651f8:
      if (puVar16 != (uint *)0x0) {
        FUN_109f65aa4(puVar16 + -0xc);
        FUN_109f65ae0(puVar16 + -0xc);
      }
    }
  }
LAB_109f65210:
  uVar19 = plVar23[5] * (uVar11 & 0xffffffff);
  uVar7 = *(uint *)(plVar23 + 4);
  uVar26 = *(uint *)((long)plVar23 + 0x24);
  uVar20 = ((uVar19 & 0xffffffff) * (ulong)uVar7 >> 0x20) + (uVar19 >> 0x20) * (ulong)uVar7;
  uVar30 = uVar20 >> 0x20;
  uVar19 = plVar23[6] * (uVar11 & 0xffffffff);
  piVar12 = (int *)0x0;
  do {
    piVar25 = (int *)(*plVar23 + uVar30 * 0x18);
    lVar24 = *(long *)(piVar25 + 2);
    if (lVar24 == 0) {
      if (piVar12 != (int *)0x0) {
        piVar25 = piVar12;
      }
      goto LAB_109f652cc;
    }
    piVar4 = piVar25;
    if (piVar12 != (int *)0x0 || lVar24 != plVar23[3]) {
      piVar4 = piVar12;
    }
    if (((lVar24 != plVar23[3]) && (*piVar25 == (int)uVar11)) &&
       (uVar13 = param_3, (*(code *)plVar23[2])(), (uVar13 & 1) != 0)) goto LAB_109f652fc;
    uVar1 = (int)(((uVar19 & 0xffffffff) * (ulong)uVar26 >> 0x20) + (uVar19 >> 0x20) * (ulong)uVar26
                 >> 0x20) + 1 + (int)uVar30;
    uVar8 = 0;
    if (uVar7 <= uVar1) {
      uVar8 = uVar7;
    }
    uVar1 = uVar1 - uVar8;
    uVar30 = (ulong)uVar1;
    piVar12 = piVar4;
  } while (uVar1 != (uint)(uVar20 >> 0x20));
  piVar25 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar25 = (int *)0x0;
  }
  else {
LAB_109f652cc:
    if (*(long *)(piVar25 + 2) == plVar23[3]) {
      *(int *)((long)plVar23 + 0x44) = *(int *)((long)plVar23 + 0x44) + -1;
    }
    *piVar25 = (int)uVar11;
    *(int *)(plVar23 + 8) = (int)plVar23[8] + 1;
LAB_109f652fc:
    *(ulong *)(piVar25 + 2) = param_3;
    *(int **)(piVar25 + 4) = piVar10;
  }
  return piVar25;
}



/* Entry: 109e89e88; end: 109e89f9f;  */

void FUN_109e89e88(undefined8 *param_1,uint param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = (long *)*param_1;
  FUN_109f6650c(plVar1,0x18);
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = 0;
  puVar2 = (undefined1 *)*param_1;
  FUN_109f6650c(puVar2,0x30);
  *(uint *)(puVar2 + 4) = param_2;
  *(ulong *)(puVar2 + 8) = (ulong)param_2;
  *puVar2 = 0;
  FUN_109e8a350(*param_1,plVar1,puVar2);
  FUN_109e8a6e8(param_1,param_3,param_4);
  if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
    plVar5 = plVar1;
    if (*plVar1 != 0) {
      plVar5 = (long *)(plVar1[1] + 8);
    }
    *plVar5 = *param_3;
    lVar4 = param_3[1];
    plVar1[2] = param_3[2];
    plVar1[1] = lVar4;
  }
  puVar3 = (undefined8 *)*param_1;
  FUN_109f6650c(puVar3,0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  param_1[0xc] = puVar3;
  plVar1 = (long *)*plVar1;
  if (plVar1 == (long *)0x0) {
    param_1[0xd] = 0;
  }
  else {
    do {
      if (*(int *)(*plVar1 + 4) != 0x11c) {
        FUN_109e8a350(*param_1,param_1[0xc]);
      }
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != (long *)0x0);
    lVar4 = *(long *)param_1[0xc];
    param_1[0xd] = lVar4;
    if (lVar4 != 0) {
      return;
    }
  }
  param_1[0xc] = 0;
  return;
}



/* Entry: 109e89fa0; end: 109e8a0bb;  */

undefined8 * FUN_109e89fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uStack_34;
  
  puVar1 = (undefined8 *)0x100;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 6;
  }
  FUN_109e87f84(puVar1,puVar1 + 1);
  uVar2 = 0;
  FUN_109f64c74(0,FUN_109f65518,FUN_109f65668);
  puVar1[2] = uVar2;
  uStack_34 = 0;
  puVar3 = puVar1;
  FUN_109f6658c(puVar1,&uStack_34);
  *puVar1 = puVar3;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0x100000000;
  puVar1[5] = 1;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar3 = puVar1;
  FUN_109f684bc(puVar1,0xfd0);
  puVar1[0xe] = puVar3;
  puVar3 = puVar1;
  FUN_109f684bc(puVar1,0xfd0);
  puVar1[0xf] = puVar3;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x15] = param_1;
  puVar1[0x11] = param_2;
  puVar1[0x12] = param_1 + 0x1b578;
  puVar1[0x13] = param_3;
  *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined2 *)((long)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 1;
  *(undefined1 *)((long)puVar1 + 0xbc) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)((long)puVar1 + 0xc4) = 0;
  return puVar1;
}



/* Entry: 109e8a0bc; end: 109e8a2e7;  */

void FUN_109e8a0bc(long param_1,long param_2,char *param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + 0xb4) & 1) != 0) {
    return;
  }
  *(int *)(param_1 + 0xb0) = (int)param_2;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  func_0x000109e8b978(param_1,&UNK_10f610487,param_2);
  if (param_2 == 100) {
    *(undefined1 *)(param_1 + 0xc4) = 1;
LAB_109e8a120:
    func_0x000109e8b978(param_1,&UNK_10f610b3e,1);
LAB_109e8a134:
    if ((param_2 < 0x82) && ((*(byte *)(param_1 + 0xc4) & 1) == 0)) goto LAB_109e8a214;
  }
  else {
    if (param_3 != (char *)0x0) {
      if ((*param_3 == 'e') && (param_3[1] == 's')) {
        bVar1 = param_3[2] == '\0';
      }
      else {
        bVar1 = false;
      }
      *(bool *)(param_1 + 0xc4) = bVar1;
      if (param_2 < 0x96) {
        if (bVar1 == false) goto LAB_109e8a134;
      }
      else if (bVar1 == false) {
        _strcmp(param_3,&UNK_10f610b30);
        puVar2 = &UNK_10f610b44;
        if ((int)param_3 != 0) {
          puVar2 = &UNK_10f610b5d;
        }
        goto LAB_109e8a1f4;
      }
      goto LAB_109e8a120;
    }
    *(undefined1 *)(param_1 + 0xc4) = 0;
    if (param_2 < 0x96) goto LAB_109e8a134;
    puVar2 = &UNK_10f610b5d;
LAB_109e8a1f4:
    func_0x000109e8b978(param_1,puVar2,1);
  }
  func_0x000109e8b978(param_1,&UNK_10f610b6d,1);
LAB_109e8a214:
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))
              (*(undefined8 *)(param_1 + 0x98),0x109e8b978,param_1,param_2,
               *(undefined1 *)(param_1 + 0xc4));
  }
  if ((*(long *)(param_1 + 0x90) != 0) && (*(char *)(*(long *)(param_1 + 0x90) + 0xde) != '\0')) {
    func_0x000109e8b978(param_1,&UNK_10f610b88,1);
    func_0x000109e8b978(param_1,&UNK_10f610ba6,1);
    func_0x000109e8b978(param_1,&UNK_10f610bc4,1);
    func_0x000109e8b978(param_1,&UNK_10f610be2,1);
  }
  if (param_4 != 0) {
    FUN_109f686b4(*(undefined8 *)(param_1 + 0x70),&UNK_10f610c00);
  }
  return;
}



/* Entry: 109e8a2e8; end: 109e8a34f;  */

void FUN_109e8a2e8(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  FUN_109f6650c(plVar1,0x10);
  lVar2 = *param_1;
  FUN_109f66644(lVar2,param_3);
  *plVar1 = lVar2;
  plVar1[1] = 0;
  plVar3 = param_2;
  if (*param_2 != 0) {
    plVar3 = (long *)(param_2[1] + 8);
  }
  *plVar3 = (long)plVar1;
  param_2[1] = (long)plVar1;
  return;
}



/* Entry: 109e8a350; end: 109e8a3a7;  */

void FUN_109e8a350(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  FUN_109f6650c(param_1,0x10);
  *param_1 = param_3;
  param_1[1] = 0;
  plVar1 = param_2;
  if (*param_2 != 0) {
    plVar1 = (long *)(param_2[1] + 8);
  }
  *plVar1 = (long)param_1;
  param_2[1] = (long)param_1;
  if (*(int *)(param_3 + 4) != 0x11c) {
    param_2[2] = (long)param_1;
  }
  return;
}



/* Entry: 109e8a3a8; end: 109e8a5f3;  */

char * FUN_109e8a3a8(char *param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined *apuStack_90 [5];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  sVar3 = *(short *)(&UNK_10e062fd8 + (long)param_2 * 2);
  if (sVar3 < -0x90) {
    pcVar10 = (char *)0x0;
    pcVar14 = param_1;
  }
  else {
    if (param_3 < 299) {
      uVar8 = (ulong)(byte)(&UNK_10e06314a)[param_3];
    }
    else {
      uVar8 = 2;
    }
    puVar12 = (&PTR_DAT_110b603c0)[uVar8];
    uVar8 = 0;
    FUN_109e8a644(0,puVar12);
    iVar9 = (int)sVar3;
    iVar7 = 0x2dc - iVar9;
    uStack_c8 = 0x726f7272;
    uStack_d0 = 0x65207861746e7973;
    uStack_bc = 0x73252064657463;
    uStack_c4 = 0x6e75202c;
    uStack_c0 = 0x65707865;
    uVar1 = -iVar9 & iVar9 >> 0x1f;
    if (0x41 < iVar7) {
      iVar7 = 0x42;
    }
    uVar15 = uVar8;
    apuStack_90[0] = puVar12;
    if ((int)uVar1 < iVar7) {
      bVar4 = false;
      pcVar14 = (char *)((long)&uStack_bc + 7);
      lVar16 = (long)(int)uVar1;
      pcVar10 = ", expecting %s";
      iVar11 = 1;
      do {
        if ((lVar16 != 1) && (lVar16 == *(short *)(&UNK_10e063276 + (lVar16 + iVar9) * 2))) {
          if (iVar11 == 5) {
            uStack_bc = uStack_bc & 0xffffffffffffff;
            iVar11 = 1;
            uVar15 = uVar8;
            break;
          }
          apuStack_90[iVar11] = (&PTR_DAT_110b603c0)[lVar16];
          uVar6 = 0;
          FUN_109e8a644();
          pcVar14 = pcVar14 + -1;
          do {
            cVar2 = *pcVar10;
            pcVar14 = pcVar14 + 1;
            *pcVar14 = cVar2;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          bVar5 = CARRY8(uVar6,uVar15);
          uVar15 = uVar6 + uVar15;
          iVar11 = iVar11 + 1;
          bVar4 = (bool)(bVar4 | bVar5);
          pcVar10 = " or %s";
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != iVar7);
    }
    else {
      bVar4 = false;
      iVar11 = 1;
    }
    pcVar14 = (char *)&uStack_d0;
    _strlen();
    pcVar10 = pcVar14 + uVar15;
    if (bVar4 || CARRY8((ulong)pcVar14,uVar15)) {
      pcVar10 = (char *)0xffffffffffffffff;
    }
    else if (param_1 != (char *)0x0) {
      iVar7 = 0;
      pcVar13 = (char *)&uStack_d0;
      do {
        cVar2 = *pcVar13;
        *param_1 = cVar2;
        if (cVar2 == '%') {
          if (pcVar13[1] != 's' || iVar11 <= iVar7) goto LAB_109e8a5c0;
          pcVar14 = param_1;
          FUN_109e8a644(param_1,apuStack_90[iVar7]);
          lVar16 = 2;
          iVar7 = iVar7 + 1;
        }
        else {
          if (cVar2 == '\0') break;
LAB_109e8a5c0:
          pcVar14 = (char *)0x1;
          lVar16 = 1;
        }
        param_1 = param_1 + (long)pcVar14;
        pcVar13 = pcVar13 + lVar16;
      } while( true );
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x000109e87fe8(*(undefined8 *)(pcVar14 + 8));
    if (*(long *)(pcVar14 + 0x10) != 0) {
      lVar16 = *(long *)(pcVar14 + 0x10) + -0x30;
      FUN_109f65aa4(lVar16);
      FUN_109f65ae0(lVar16);
    }
    pcVar10 = pcVar14 + -0x30;
    FUN_109f65aa4(pcVar10);
    lVar16 = *(long *)(pcVar14 + -0x28);
    while (lVar16 != 0) {
      *(undefined8 *)(pcVar14 + -0x28) = *(undefined8 *)(lVar16 + 0x18);
      FUN_109f65ae0();
      lVar16 = *(long *)(pcVar14 + -0x28);
    }
    if (*(code **)(pcVar14 + -0x10) != (code *)0x0) {
      (**(code **)(pcVar14 + -0x10))(pcVar14);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(pcVar10);
    return pcVar10;
  }
  return pcVar10;
}



/* Entry: 109e8a5f4; end: 109e8a643;  */

void FUN_109e8a5f4(long param_1)

{
  long lVar1;
  
  func_0x000109e87fe8(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + -0x30;
    FUN_109f65aa4(lVar1);
    FUN_109f65ae0(lVar1);
  }
  FUN_109f65aa4(param_1 + -0x30);
  lVar1 = *(long *)(param_1 + -0x28);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(lVar1 + 0x18);
    FUN_109f65ae0();
    lVar1 = *(long *)(param_1 + -0x28);
  }
  if (*(code **)(param_1 + -0x10) != (code *)0x0) {
    (**(code **)(param_1 + -0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1 + -0x30);
  return;
}



/* Entry: 109e8a644; end: 109e8a6e7;  */

byte * FUN_109e8a644(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*param_2 == 0x22) {
    pbVar2 = (byte *)0x0;
    pbVar4 = param_2;
    do {
      pbVar3 = pbVar4 + 1;
      bVar1 = *pbVar3;
      if (bVar1 < 0x5c) {
        if (bVar1 == 0x22) {
          if (param_1 == 0) {
            return pbVar2;
          }
          pbVar2[param_1] = 0;
          return pbVar2;
        }
        if ((bVar1 == 0x27) || (bVar1 == 0x2c)) break;
      }
      else if ((bVar1 == 0x5c) && (pbVar3 = pbVar4 + 2, *pbVar3 != 0x5c)) break;
      if (param_1 != 0) {
        pbVar2[param_1] = bVar1;
      }
      pbVar2 = pbVar2 + 1;
      pbVar4 = pbVar3;
    } while( true );
  }
  if (param_1 != 0) {
    pbVar2 = (byte *)0x0;
    do {
      pbVar4 = pbVar2;
      bVar1 = param_2[(long)pbVar4];
      pbVar4[param_1] = bVar1;
      pbVar2 = pbVar4 + 1;
    } while (bVar1 != 0);
    return pbVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlen_11034cbe8)(param_2);
  return param_2;
}



/* Entry: 109e8a6e8; end: 109e8aeb3;  */

void FUN_109e8a6e8(long *param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  int *piVar23;
  int iVar24;
  char *pcVar25;
  int *piStack_88;
  
  if (param_2 != (long *)0x0) {
    lVar21 = param_1[3];
    plVar11 = (long *)param_2[2];
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)param_2[1];
    }
    else {
      plVar11[1] = 0;
      param_2[1] = (long)plVar11;
    }
    uVar1 = *(undefined4 *)(*plVar11 + 0x20);
    plVar11 = (long *)*param_2;
    if (param_3 != 0) {
      FUN_109e8aeb4(param_1,param_2);
    }
    if (plVar11 != (long *)0x0) {
      plVar20 = (long *)0x0;
LAB_109e8a760:
      lVar12 = param_1[3];
      while ((lVar12 != 0 && (*(long **)(lVar12 + 8) == plVar11))) {
        lVar12 = *(long *)(lVar12 + 0x10);
        param_1[3] = lVar12;
      }
      pbVar19 = (byte *)*plVar11;
      if (((*pbVar19 & 1) == 0) && (*(int *)(pbVar19 + 4) == 0x114)) {
        pcVar25 = *(char **)(pbVar19 + 8);
        plVar17 = param_1;
        plVar13 = plVar11;
        if (*pcVar25 != '_') {
LAB_109e8a7d0:
          lVar12 = param_1[2];
          pcVar4 = pcVar25;
          (**(code **)(lVar12 + 8))(pcVar25);
          FUN_109f64fdc(lVar12,pcVar4,pcVar25);
          if ((lVar12 == 0) || (piVar23 = *(int **)(lVar12 + 0x10), piVar23 == (int *)0x0))
          goto LAB_109e8aaf4;
          for (puVar22 = (undefined8 *)param_1[3]; puVar22 != (undefined8 *)0x0;
              puVar22 = (undefined8 *)puVar22[2]) {
            uVar5 = *puVar22;
            _strcmp(uVar5,pcVar25);
            if ((int)uVar5 == 0) {
              lVar12 = *param_1;
              FUN_109f66644(lVar12,*(undefined8 *)(pbVar19 + 8));
              uVar9 = *(undefined4 *)(pbVar19 + 4);
              puVar15 = (undefined1 *)*param_1;
              FUN_109f6650c(puVar15,0x30);
              *(undefined4 *)(puVar15 + 4) = uVar9;
              *(long *)(puVar15 + 8) = lVar12;
              *puVar15 = 1;
              plVar17 = (long *)*param_1;
              FUN_109f6650c(plVar17,0x18);
              plVar17[1] = 0;
              plVar17[2] = 0;
              *plVar17 = 0;
              FUN_109e8a350(*param_1,plVar17,puVar15);
              goto LAB_109e8aa10;
            }
          }
          if (*piVar23 == 0) {
            if (*(long *)(piVar23 + 6) == 0) {
              uVar5 = 0x11c;
              uVar9 = 0x11c;
              goto LAB_109e8a99c;
            }
            FUN_109e8b030();
            if ((plVar20 != (long *)0x0) &&
               (((iVar24 = *(int *)(*plVar20 + 4), iVar24 == 0x2d || (iVar24 == 0x2b)) &&
                (iVar24 == *(int *)(*(long *)*plVar17 + 4))))) {
              puVar15 = (undefined1 *)*param_1;
              FUN_109f6650c(puVar15,0x30);
              *(undefined4 *)(puVar15 + 4) = 0x11c;
              *(undefined8 *)(puVar15 + 8) = 0x11c;
              *puVar15 = 0;
              puVar22 = (undefined8 *)*param_1;
              FUN_109f6650c(puVar22,0x10);
              lVar12 = *plVar17;
              *puVar22 = puVar15;
              puVar22[1] = lVar12;
              *plVar17 = (long)puVar22;
            }
            FUN_109e8b0c0(param_1,plVar17);
            goto LAB_109e8a9a8;
          }
          plVar6 = (long *)*param_1;
          FUN_109f6650c(plVar6,0x10);
          *plVar6 = 0;
          plVar6[1] = 0;
          do {
            plVar13 = (long *)plVar13[1];
            if (plVar13 == (long *)0x0) goto LAB_109e8aaf4;
          } while (*(int *)(*plVar13 + 4) == 0x11c);
          if (*(int *)(*plVar13 + 4) != 0x28) goto LAB_109e8aaf4;
          plVar13 = (long *)plVar13[1];
          plVar7 = (long *)*param_1;
          FUN_109f6650c(plVar7,0x18);
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          puVar22 = (undefined8 *)*param_1;
          FUN_109f6650c(puVar22,0x10);
          *puVar22 = plVar7;
          puVar22[1] = 0;
          plVar14 = plVar6;
          if (*plVar6 != 0) {
            plVar14 = (long *)(plVar6[1] + 8);
          }
          *plVar14 = (long)puVar22;
          plVar6[1] = (long)puVar22;
joined_r0x000109e8a8b4:
          if (plVar13 == (long *)0x0) goto LAB_109e8abb8;
          iVar24 = 1;
LAB_109e8a8bc:
          iVar2 = *(int *)(*plVar13 + 4);
          if (iVar2 == 0x29) {
            iVar24 = iVar24 + -1;
            if (iVar24 != 0) goto LAB_109e8a904;
            goto LAB_109e8abe4;
          }
          if (iVar2 != 0x28) goto LAB_109e8a8e8;
          iVar24 = iVar24 + 1;
LAB_109e8a904:
          FUN_109e8a350(*param_1,plVar7);
LAB_109e8a910:
          plVar13 = (long *)plVar13[1];
          if (plVar13 != (long *)0x0) goto LAB_109e8a8bc;
          if (iVar24 != 0) goto LAB_109e8abb8;
          plVar13 = (long *)0x0;
LAB_109e8abe4:
          if (*(long *)(piVar23 + 6) == 0) {
            FUN_109e8b48c(param_1,0x11c,0x11c);
            goto LAB_109e8a9a8;
          }
          puVar22 = (undefined8 *)*plVar6;
          if (puVar22 == (undefined8 *)0x0) {
            plVar17 = *(long **)(piVar23 + 2);
            if ((plVar17 == (long *)0x0) || (lVar12 = *plVar17, lVar12 == 0)) goto LAB_109e8acd0;
            iVar24 = 0;
            lVar18 = lVar12;
            goto LAB_109e8ac8c;
          }
          iVar24 = 0;
          puVar16 = puVar22;
          do {
            iVar24 = iVar24 + 1;
            puVar16 = (undefined8 *)puVar16[1];
          } while (puVar16 != (undefined8 *)0x0);
          plVar17 = *(long **)(piVar23 + 2);
          bVar3 = plVar17 == (long *)0x0;
          if ((plVar17 == (long *)0x0) || (lVar12 = *plVar17, lVar18 = lVar12, lVar12 == 0)) {
            iVar24 = 1;
            puVar16 = puVar22;
            do {
              puVar16 = (undefined8 *)puVar16[1];
              iVar24 = iVar24 + -1;
            } while (puVar16 != (undefined8 *)0x0);
            if ((iVar24 != 0) || (*(long *)*puVar22 != 0)) {
              lVar12 = *plVar11;
              goto LAB_109e8acac;
            }
            goto LAB_109e8acd0;
          }
LAB_109e8ac8c:
          do {
            lVar12 = *(long *)(lVar12 + 8);
            iVar24 = iVar24 + -1;
          } while (lVar12 != 0);
          if (iVar24 != 0) {
            lVar12 = *plVar11;
            if (puVar22 == (undefined8 *)0x0) {
              lVar12 = lVar12 + 0x18;
              goto LAB_109e8ae44;
            }
            bVar3 = false;
LAB_109e8acac:
            do {
              puVar22 = (undefined8 *)puVar22[1];
            } while (puVar22 != (undefined8 *)0x0);
            lVar12 = lVar12 + 0x18;
            if (!bVar3) {
              for (lVar18 = *plVar17; lVar18 != 0; lVar18 = *(long *)(lVar18 + 8)) {
LAB_109e8ae44:
              }
            }
            puVar10 = &UNK_10f6109f8;
            goto LAB_109e8abd0;
          }
LAB_109e8acd0:
          piStack_88 = piVar23 + 2;
          plVar17 = (long *)*param_1;
          FUN_109f6650c(plVar17,0x18);
          plVar17[1] = 0;
          plVar17[2] = 0;
          *plVar17 = 0;
          puVar22 = (undefined8 *)**(undefined8 **)(piVar23 + 6);
          if (puVar22 != (undefined8 *)0x0) {
LAB_109e8adac:
            puVar15 = (undefined1 *)*puVar22;
            if (((*(int *)(puVar15 + 4) == 0x114) &&
                (*(undefined8 **)piStack_88 != (undefined8 *)0x0)) &&
               (puVar16 = (undefined8 *)**(undefined8 **)piStack_88, puVar16 != (undefined8 *)0x0))
            {
              iVar24 = 0;
              uVar5 = *(undefined8 *)(puVar15 + 8);
              do {
                uVar8 = *puVar16;
                _strcmp(uVar8,uVar5);
                if ((int)uVar8 == 0) {
                  puVar16 = (undefined8 *)*plVar6;
                  if (iVar24 != 0) goto LAB_109e8ad04;
                  if (puVar16 == (undefined8 *)0x0) goto LAB_109e8ad24;
                  goto LAB_109e8ad1c;
                }
                iVar24 = iVar24 + 1;
                puVar16 = (undefined8 *)puVar16[1];
              } while (puVar16 != (undefined8 *)0x0);
            }
            lVar12 = *param_1;
            goto LAB_109e8ae08;
          }
          goto LAB_109e8ae28;
        }
        pcVar4 = pcVar25;
        _strcmp(pcVar25,&UNK_10f610475);
        if ((int)pcVar4 == 0) {
          uVar5 = 0x116;
          uVar9 = uVar1;
        }
        else {
          pcVar4 = pcVar25;
          _strcmp(pcVar25,&UNK_10f61047e);
          if ((int)pcVar4 != 0) goto LAB_109e8a7d0;
          uVar5 = 0x116;
          uVar9 = *(undefined4 *)(pbVar19 + 0x28);
        }
LAB_109e8a99c:
        FUN_109e8b48c(param_1,uVar5,uVar9);
LAB_109e8a9a8:
        if (plVar17 == (long *)0x0) goto LAB_109e8aaf4;
        goto LAB_109e8aa10;
      }
      goto LAB_109e8aaf4;
    }
LAB_109e8ae68:
    lVar12 = param_1[3];
    if (lVar12 != 0 && lVar12 != lVar21) {
      do {
        lVar12 = *(long *)(lVar12 + 0x10);
      } while (lVar12 != 0 && lVar12 != lVar21);
      param_1[3] = lVar12;
    }
    param_2[2] = param_2[1];
  }
  return;
LAB_109e8a8e8:
  if (iVar2 != 0x2c || iVar24 != 1) {
    if (iVar2 != 0x11c || *plVar7 != 0) goto LAB_109e8a904;
    goto LAB_109e8a910;
  }
  lVar12 = plVar7[2];
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 8) = 0;
    plVar7[1] = lVar12;
  }
  plVar7 = (long *)*param_1;
  FUN_109f6650c(plVar7,0x18);
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  puVar22 = (undefined8 *)*param_1;
  FUN_109f6650c(puVar22,0x10);
  *puVar22 = plVar7;
  puVar22[1] = 0;
  plVar14 = plVar6;
  if (*plVar6 != 0) {
    plVar14 = (long *)(plVar6[1] + 8);
  }
  *plVar14 = (long)puVar22;
  plVar6[1] = (long)puVar22;
  plVar13 = (long *)plVar13[1];
  goto joined_r0x000109e8a8b4;
LAB_109e8abb8:
  lVar12 = *plVar11 + 0x18;
  puVar10 = &UNK_10f6109ce;
LAB_109e8abd0:
  FUN_109e8ba00(lVar12,param_1,puVar10);
  goto LAB_109e8aaf4;
  while (iVar24 = iVar24 + -1, iVar24 != 0) {
LAB_109e8ad04:
    puVar16 = (undefined8 *)puVar16[1];
    if (puVar16 == (undefined8 *)0x0) goto LAB_109e8ad24;
  }
LAB_109e8ad1c:
  plVar14 = (long *)*puVar16;
LAB_109e8ad28:
  if (*plVar14 == 0) {
    puVar15 = (undefined1 *)*param_1;
    FUN_109f6650c(puVar15,0x30);
    *(undefined4 *)(puVar15 + 4) = 0x11b;
    *(undefined8 *)(puVar15 + 8) = 0x11b;
    *puVar15 = 0;
    lVar12 = *param_1;
LAB_109e8ae08:
    FUN_109e8a350(lVar12,plVar17,puVar15);
  }
  else {
    plVar14 = param_1;
    FUN_109e8b030();
    FUN_109e8a6e8(param_1,plVar14,param_3);
    if ((plVar14 != (long *)0x0) && (*plVar14 != 0)) {
      plVar7 = plVar17;
      if (*plVar17 != 0) {
        plVar7 = (long *)(plVar17[1] + 8);
      }
      *plVar7 = *plVar14;
      lVar12 = plVar14[1];
      plVar17[2] = plVar14[2];
      plVar17[1] = lVar12;
    }
  }
  puVar22 = (undefined8 *)puVar22[1];
  if (puVar22 == (undefined8 *)0x0) goto code_r0x000109e8ae18;
  goto LAB_109e8adac;
LAB_109e8ad24:
  plVar14 = (long *)0x0;
  goto LAB_109e8ad28;
code_r0x000109e8ae18:
  lVar12 = plVar17[2];
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 8) = 0;
    plVar17[1] = lVar12;
  }
LAB_109e8ae28:
  FUN_109e8b0c0(param_1,plVar17);
LAB_109e8aa10:
  if (param_3 != 0) {
    FUN_109e8aeb4(param_1,plVar17);
  }
  plVar6 = (long *)plVar13[1];
  if (plVar11 != plVar6) {
    lVar12 = param_1[3];
    plVar14 = plVar11;
    do {
      while ((lVar12 != 0 && (*(long **)(lVar12 + 8) == plVar14))) {
        lVar12 = *(long *)(lVar12 + 0x10);
        param_1[3] = lVar12;
      }
      plVar14 = (long *)plVar14[1];
    } while (plVar14 != plVar6);
  }
  uVar5 = *(undefined8 *)(*plVar11 + 8);
  plVar11 = (long *)*param_1;
  FUN_109f6650c(plVar11,0x18);
  lVar12 = *param_1;
  FUN_109f66644(lVar12,uVar5);
  *plVar11 = lVar12;
  plVar11[1] = (long)plVar6;
  plVar11[2] = param_1[3];
  param_1[3] = (long)plVar11;
  plVar11 = plVar20;
  if (*plVar17 == 0) {
    plVar17 = param_2;
    if (plVar20 != (long *)0x0) {
      plVar17 = plVar20 + 1;
    }
    *plVar17 = plVar13[1];
    if (plVar13 == (long *)param_2[1]) {
      param_2[1] = 0;
    }
  }
  else {
    plVar6 = param_2;
    if (plVar20 != (long *)0x0) {
      plVar6 = plVar20 + 1;
    }
    *plVar6 = *plVar17;
    lVar12 = plVar17[1];
    *(long *)(lVar12 + 8) = plVar13[1];
    if (plVar13 == (long *)param_2[1]) {
      param_2[1] = lVar12;
    }
  }
LAB_109e8aaf4:
  plVar20 = plVar11;
  plVar11 = param_2;
  if (plVar20 != (long *)0x0) {
    plVar11 = plVar20 + 1;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_109e8ae68;
  goto LAB_109e8a760;
}



/* Entry: 109e8aeb4; end: 109e8b02f;  */

void FUN_109e8aeb4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  
  if ((long *)*param_2 != (long *)0x0) {
    plVar10 = (long *)*param_2;
    plVar9 = (long *)0x0;
    do {
      plVar4 = plVar10;
      plVar10 = plVar4;
      if (*(int *)(*plVar4 + 4) == 0x102) {
        do {
          plVar10 = (long *)plVar10[1];
          if (plVar10 == (long *)0x0) goto LAB_109e8affc;
          lVar6 = *plVar10;
          iVar2 = *(int *)(lVar6 + 4);
        } while (iVar2 == 0x11c);
        if ((iVar2 == 0x11a) || (iVar2 == 0x114)) {
LAB_109e8af78:
          lVar7 = param_1[2];
          uVar8 = *(undefined8 *)(lVar6 + 8);
          uVar3 = uVar8;
          (**(code **)(lVar7 + 8))(uVar8);
          FUN_109f64fdc(lVar7,uVar3,uVar8);
          plVar4 = (long *)*param_1;
          FUN_109f6650c(plVar4,0x10);
          puVar5 = (undefined1 *)*param_1;
          FUN_109f6650c(puVar5,0x30);
          *(undefined4 *)(puVar5 + 4) = 0x116;
          *(ulong *)(puVar5 + 8) = (ulong)(lVar7 != 0);
          *puVar5 = 0;
          *plVar4 = (long)puVar5;
          plVar1 = param_2;
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 1;
          }
          *plVar1 = (long)plVar4;
          plVar4[1] = plVar10[1];
          if (plVar10 == (long *)param_2[1]) {
            param_2[1] = (long)plVar4;
          }
        }
        else {
          if (iVar2 == 0x28) {
            do {
              plVar10 = (long *)plVar10[1];
              if (plVar10 == (long *)0x0) goto LAB_109e8affc;
              lVar6 = *plVar10;
              iVar2 = *(int *)(lVar6 + 4);
            } while (iVar2 == 0x11c);
            if ((iVar2 == 0x11a) || (iVar2 == 0x114)) {
              do {
                plVar10 = (long *)plVar10[1];
                if (plVar10 == (long *)0x0) goto LAB_109e8affc;
              } while (*(int *)(*plVar10 + 4) == 0x11c);
              if (*(int *)(*plVar10 + 4) == 0x29) goto LAB_109e8af78;
            }
          }
LAB_109e8affc:
          FUN_109e8ba00(*plVar4 + 0x18,param_1,&UNK_10f610920);
        }
      }
      plVar10 = (long *)plVar4[1];
      plVar9 = plVar4;
    } while ((long *)plVar4[1] != (long *)0x0);
  }
  return;
}



/* Entry: 109e8b030; end: 109e8b0bf;  */

undefined8 * FUN_109e8b030(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_2 == (long *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    FUN_109f6650c(puVar1,0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    for (param_2 = (long *)*param_2; param_2 != (long *)0x0; param_2 = (long *)param_2[1]) {
      puVar2 = (undefined8 *)*param_1;
      FUN_109f6650c(puVar2,0x30);
      puVar3 = (undefined8 *)*param_2;
      uVar5 = puVar3[1];
      uVar4 = *puVar3;
      uVar6 = puVar3[2];
      uVar8 = puVar3[5];
      uVar7 = puVar3[4];
      puVar2[3] = puVar3[3];
      puVar2[2] = uVar6;
      puVar2[5] = uVar8;
      puVar2[4] = uVar7;
      puVar2[1] = uVar5;
      *puVar2 = uVar4;
      FUN_109e8a350(*param_1,puVar1,puVar2);
    }
  }
  return puVar1;
}



/* Entry: 109e8b0c0; end: 109e8b48b;  */

void FUN_109e8b0c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  plVar8 = (long *)*param_2;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    plVar11 = (long *)*plVar7;
    while (plVar11 != (long *)0x0) {
      while (*(int *)(*plVar11 + 4) == 0x11c) {
        plVar11 = (long *)plVar11[1];
        if (plVar11 == (long *)0x0) goto LAB_109e8b43c;
      }
      if (*(int *)(*plVar11 + 4) == 0x121) {
        do {
          plVar11 = (long *)plVar11[1];
          if (plVar11 == (long *)0x0) {
            FUN_109e8ba00(*plVar8 + 0x18,param_1,"%s");
            return;
          }
          puVar10 = (undefined1 *)*plVar11;
          iVar1 = *(int *)(puVar10 + 4);
        } while (iVar1 == 0x11c);
        puVar9 = (undefined1 *)*plVar8;
        puVar6 = puVar9;
        if (iVar1 != 0x11b) {
          uVar2 = *(uint *)(puVar9 + 4);
          if ((int)uVar2 < 0x3e) {
            if (0x3b < (int)uVar2) {
              if (uVar2 == 0x3c) {
                if (iVar1 == 0x3c) {
                  uVar5 = 0x129;
                }
                else {
                  if (iVar1 != 0x3d) goto LAB_109e8b2c8;
                  uVar5 = 0x127;
                }
              }
              else {
                if ((uVar2 != 0x3d) || (iVar1 != 0x3d)) goto LAB_109e8b2c8;
                uVar5 = 0x125;
              }
              goto LAB_109e8b3c8;
            }
            if (uVar2 == 0x21) {
              if (iVar1 == 0x3d) {
                uVar5 = 0x124;
                goto LAB_109e8b3c8;
              }
            }
            else if ((uVar2 == 0x26) && (iVar1 == 0x26)) {
              uVar5 = 0x123;
              goto LAB_109e8b3c8;
            }
LAB_109e8b2c8:
            FUN_109e8ba00(puVar9 + 0x18,param_1,"");
            FUN_109f68530(param_1[0xf],&UNK_10f610983,9);
            FUN_109e8b500(param_1[0xf],puVar9);
            FUN_109f68530(param_1[0xf],&UNK_10f61098d,7);
            FUN_109e8b500(param_1[0xf],puVar10);
            FUN_109f68530(param_1[0xf],&UNK_10f610995,0x2d);
            puVar6 = puVar9;
          }
          else {
            uVar3 = uVar2 - 0x114;
            if (uVar3 < 8) {
              if ((1 << (ulong)(uVar3 & 0x1f) & 0x4dU) == 0) {
                puVar6 = puVar10;
                if (uVar3 == 7) goto LAB_109e8b414;
                goto LAB_109e8b26c;
              }
              if (6 < iVar1 - 0x114U || (1 << (ulong)(iVar1 - 0x114U & 0x1f) & 0x4dU) == 0)
              goto LAB_109e8b2c8;
              if ((uVar2 & 0xfffffffe) == 0x116) {
                if (iVar1 == 0x116) {
                  if (*(long *)(puVar10 + 8) < 0) goto LAB_109e8b2c8;
                }
                else if ((iVar1 != 0x117) || (**(byte **)(puVar10 + 8) - 0x3a < 0xfffffff6))
                goto LAB_109e8b2c8;
              }
              uVar5 = *param_1;
              if (uVar2 == 0x116) {
                FUN_109f666b0(uVar5,&UNK_10f61097f);
              }
              else {
                FUN_109f66644(uVar5,*(undefined8 *)(puVar9 + 8));
              }
              uStack_68 = uVar5;
              if (*(int *)(puVar10 + 4) == 0x116) {
                FUN_109f66758(*param_1,&uStack_68,&UNK_10f61097f);
              }
              else {
                FUN_109f668c8(*param_1,&uStack_68,*(undefined8 *)(puVar10 + 8));
              }
              uVar5 = uStack_68;
              iVar1 = 0x117;
              if (*(int *)(puVar9 + 4) != 0x116) {
                iVar1 = *(int *)(puVar9 + 4);
              }
              puVar6 = (undefined1 *)*param_1;
              FUN_109f6650c(puVar6,0x30);
              *(int *)(puVar6 + 4) = iVar1;
            }
            else {
LAB_109e8b26c:
              if (uVar2 == 0x3e) {
                if (iVar1 == 0x3e) {
                  uVar5 = 0x128;
                }
                else {
                  if (iVar1 != 0x3d) goto LAB_109e8b2c8;
                  uVar5 = 0x126;
                }
              }
              else {
                if ((uVar2 != 0x7c) || (iVar1 != 0x7c)) goto LAB_109e8b2c8;
                uVar5 = 0x122;
              }
LAB_109e8b3c8:
              puVar6 = (undefined1 *)*param_1;
              FUN_109f6650c(puVar6,0x30);
              *(int *)(puVar6 + 4) = (int)uVar5;
            }
            *(undefined8 *)(puVar6 + 8) = uVar5;
            *puVar6 = 0;
            uVar12 = *(undefined8 *)(puVar9 + 0x20);
            uVar5 = *(undefined8 *)(puVar9 + 0x18);
            *(undefined4 *)(puVar6 + 0x28) = *(undefined4 *)(puVar9 + 0x28);
            *(undefined8 *)(puVar6 + 0x20) = uVar12;
            *(undefined8 *)(puVar6 + 0x18) = uVar5;
          }
        }
LAB_109e8b414:
        *plVar8 = (long)puVar6;
        *plVar7 = plVar11[1];
        bVar4 = plVar11 == (long *)param_2[1];
        plVar11 = plVar8;
        if (bVar4) {
          param_2[1] = plVar8;
        }
      }
      plVar7 = plVar11 + 1;
      plVar8 = plVar11;
      plVar11 = (long *)*plVar7;
    }
  }
LAB_109e8b43c:
  param_2[2] = param_2[1];
  return;
}



/* Entry: 109e8b48c; end: 109e8b4ff;  */

undefined8 * FUN_109e8b48c(undefined8 *param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_109f6650c(puVar1,0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar2 = (undefined1 *)*param_1;
  FUN_109f6650c(puVar2,0x30);
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(long *)(puVar2 + 8) = (long)param_3;
  *puVar2 = 0;
  FUN_109e8a350(*param_1,puVar1,puVar2);
  return puVar1;
}



/* Entry: 109e8b500; end: 109e8b65b;  */

void FUN_109e8b500(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(int *)(param_2 + 4) < 0x100) {
    puVar3 = &stack0xffffffffffffffde;
code_r0x000109e8b528:
    FUN_109f68530(param_1,puVar3,1);
    return;
  }
  switch(*(int *)(param_2 + 4)) {
  case 0x102:
    pcVar4 = "defined";
    pcVar5 = (char *)0x7;
    goto code_r0x000109e8b64c;
  default:
    return;
  case 0x114:
  case 0x117:
  case 0x11a:
  case 0x11f:
    pcVar4 = *(char **)(param_2 + 8);
    pcVar5 = pcVar4;
    _strlen();
    goto code_r0x000109e8b64c;
  case 0x116:
    FUN_109f686b4(param_1,&UNK_10f61097f);
    return;
  case 0x11c:
    puVar3 = &stack0xffffffffffffffdf;
    goto code_r0x000109e8b528;
  case 0x11d:
    pcVar4 = "++";
    break;
  case 0x11e:
    pcVar4 = "--";
    break;
  case 0x121:
    pcVar4 = "##";
    break;
  case 0x122:
    pcVar4 = "||";
    break;
  case 0x123:
    pcVar4 = "&&";
    break;
  case 0x124:
    pcVar4 = "!=";
    break;
  case 0x125:
    pcVar4 = "==";
    break;
  case 0x126:
    pcVar4 = ">=";
    break;
  case 0x127:
    pcVar4 = "<=";
    break;
  case 0x128:
    pcVar4 = ">>";
    break;
  case 0x129:
    pcVar4 = "<<";
  }
  pcVar5 = (char *)0x2;
code_r0x000109e8b64c:
  uVar1 = (int)pcVar5 + 1;
  if ((!CARRY4(uVar1,*(uint *)(param_1 + 1))) &&
     (plVar2 = param_1, FUN_109f685ac(param_1,uVar1 + *(uint *)(param_1 + 1)), (int)plVar2 != 0)) {
    _memcpy(*param_1 + (ulong)*(uint *)(param_1 + 1),pcVar4,(ulong)pcVar5 & 0xffffffff);
    uVar1 = (int)param_1[1] + (int)pcVar5;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined1 *)(*param_1 + (ulong)uVar1) = 0;
  }
  return;
}



/* Entry: 109e8b65c; end: 109e8b9ff;  */

/* WARNING: Possible PIC construction at 0x000109e8b6d4: Changing call to branch */

void FUN_109e8b65c(long param_1,uint *param_2,char *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  uint *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_51 [33];
  
  puVar1 = &stack0xfffffffffffffff0;
  pcVar4 = param_3;
  _strstr(param_3,&UNK_10f60895d);
  if (pcVar4 != (char *)0x0) {
    func_0x000109e8ba84(param_2,param_1,&UNK_10f610a4b);
  }
  if (((*param_3 == 'G') && (param_3[1] == 'L')) && (param_3[2] == '_')) {
    puVar5 = &UNK_10f610a94;
    unaff_x30 = 0x109e8b6d8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  else {
    _strcmp(param_3,&UNK_10f6109c6);
    if ((int)param_3 != 0) {
      return;
    }
    puVar5 = &UNK_10f610ac3;
  }
  *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined4 *)(param_1 + 0x80) = 1;
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = param_2[4];
  uVar2 = param_2[1];
  *(ulong *)((long)register0x00000008 + -0x48) = (ulong)*param_2;
  *(ulong *)((long)register0x00000008 + -0x40) = (ulong)uVar2;
  *(ulong *)((long)register0x00000008 + -0x50) = (ulong)uVar3;
  FUN_109f686b4(uVar6,&UNK_10f610c11);
  *(BADSPACEBASE **)((long)register0x00000008 + -0x30) = register0x00000008;
  FUN_109f68604(*(undefined8 *)(param_1 + 0x78),puVar5,register0x00000008);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(undefined1 *)((long)register0x00000008 + -0x21) = 10;
  FUN_109f68530(uVar6,(undefined1 *)((long)register0x00000008 + -0x21),1);
  return;
}



/* Entry: 109e8ba00; end: 109e8baff;  */

void FUN_109e8ba00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 uStack_21;
  
  *(undefined4 *)(param_2 + 0x80) = 1;
  FUN_109f686b4(*(undefined8 *)(param_2 + 0x78),&UNK_10f610c11);
  FUN_109f68604(*(undefined8 *)(param_2 + 0x78),param_3,&stack0x00000000);
  uStack_21 = 10;
  FUN_109f68530(*(undefined8 *)(param_2 + 0x78),&uStack_21,1);
  return;
}



/* Entry: 109e8bb00; end: 109e95317;  */

undefined4
FUN_109e8bb00(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined2 uStack_63;
  undefined1 uStack_61;
  
  puVar1 = param_6;
  FUN_109e89fa0(param_6,param_4,param_5);
  pcVar13 = (char *)*param_2;
  if ((char)param_6[0x34a8] == '\0') {
    puVar2 = puVar1;
    FUN_109f684bc(puVar1,0xfd0);
    pcVar3 = pcVar13;
    _strchr(pcVar13,0x5c);
    if (pcVar3 != (char *)0x0) {
      pcVar14 = pcVar13;
      _strchr(pcVar13,0xd);
      pcVar4 = pcVar13;
      _strchr(pcVar13,10);
      uStack_63 = 10;
      uStack_61 = 0;
      if (pcVar14 != (char *)0x0) {
        if (pcVar4 == (char *)0x0) {
          uStack_63 = 0xd;
        }
        else if (pcVar4 == pcVar14 + 1) {
          uStack_63 = 0xa0d;
        }
        else if (pcVar14 == pcVar4 + 1) {
          uStack_63 = 0xd0a;
        }
      }
      puVar5 = &uStack_63;
      _strlen(puVar5);
      iVar9 = 0;
LAB_109e8bc98:
      pcVar14 = pcVar13;
      pcVar13 = pcVar14;
      if (pcVar3 != (char *)0x0) {
LAB_109e8bc9c:
        do {
          pcVar14 = pcVar3 + 1;
          if (*pcVar14 == '\r' || *pcVar14 == '\n') {
            iVar9 = iVar9 + 1;
            FUN_109f68530(puVar2,pcVar13,(int)pcVar3 - (int)pcVar13);
            if (pcVar3[1] == '\r') {
              cVar8 = '\n';
            }
            else {
              pcVar13 = pcVar14;
              if (pcVar3[1] != '\n') goto LAB_109e8bcfc;
              cVar8 = '\r';
            }
            pcVar13 = pcVar3 + 2;
            pcVar14 = pcVar13;
            if (*pcVar13 == cVar8) {
              pcVar13 = pcVar3 + 3;
              pcVar14 = pcVar13;
            }
          }
LAB_109e8bcfc:
          pcVar3 = pcVar14;
          _strchr(pcVar14,0x5c);
          if (iVar9 == 0) goto LAB_109e8bc98;
          pcVar6 = pcVar14;
          _strchr(pcVar14,0xd);
          _strchr(pcVar14,10);
          pcVar4 = pcVar6;
          if (pcVar14 <= pcVar6 && pcVar14 != (char *)0x0) {
            pcVar4 = pcVar14;
          }
          if (pcVar6 != (char *)0x0) {
            pcVar14 = pcVar4;
          }
          if (pcVar14 == (char *)0x0) goto LAB_109e8bc98;
        } while ((pcVar3 != (char *)0x0) && (pcVar3 <= pcVar14));
        FUN_109f68530(puVar2,pcVar13,((int)pcVar14 - (int)pcVar13) + 1);
        do {
          FUN_109f68530(puVar2,&uStack_63,puVar5);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if (*pcVar14 == '\r') {
          cVar8 = '\n';
          goto LAB_109e8bc88;
        }
        if (*pcVar14 != '\n') {
          iVar9 = 0;
          pcVar13 = pcVar14;
          if (pcVar3 == (char *)0x0) goto LAB_109e8bd20;
          goto LAB_109e8bc9c;
        }
        cVar8 = '\r';
LAB_109e8bc88:
        iVar9 = 0;
        pcVar13 = pcVar14 + 1;
        if (pcVar14[1] == cVar8) {
          pcVar13 = pcVar14 + 2;
        }
        goto LAB_109e8bc98;
      }
LAB_109e8bd20:
      pcVar13 = pcVar14;
      _strlen(pcVar14);
      FUN_109f68530(puVar2,pcVar14,pcVar13);
      pcVar13 = (char *)*puVar2;
    }
    *param_2 = (ulong)pcVar13;
  }
  uVar11 = puVar1[1];
  pcVar3 = pcVar13;
  _strlen(pcVar13);
  func_0x000109e87efc(pcVar13,(long)(int)pcVar3,uVar11);
  FUN_109e8805c(puVar1);
  if (puVar1[10] != 0) {
    FUN_109e8ba00(puVar1[10] + 8,puVar1,&UNK_10f610c53);
  }
  uVar7 = 100;
  if ((int)puVar1[0x14] != 2) {
    uVar7 = 0x6e;
  }
  FUN_109e8a0bc(puVar1,uVar7,0,0);
  uVar12 = *(undefined8 *)puVar1[0xf];
  uVar7 = uVar12;
  _strlen(uVar12);
  FUN_109f65cf8(param_3,uVar12,uVar7);
  puVar10 = (ulong *)puVar1[0xe];
  puVar2 = puVar10;
  FUN_109f65a40(puVar10,*puVar10,1,*(undefined4 *)((long)puVar10 + 0xc));
  if (puVar2 != (ulong *)0x0) {
    *(int *)((long)puVar10 + 0xc) = (int)puVar10[1] + 1;
    *puVar10 = (ulong)puVar2;
  }
  FUN_109f65b2c(param_1,*(undefined8 *)puVar1[0xe]);
  *param_2 = *(ulong *)puVar1[0xe];
  uVar11 = puVar1[0x10];
  FUN_109e8a5f4(puVar1);
  return (int)uVar11;
}



/* Entry: 109e95318; end: 109e953a7;  */

undefined8 * FUN_109e95318(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x8;
    _malloc();
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(undefined8 *)(param_1 + 0x18) = 0;
      return puVar2;
    }
  }
  else {
    if (*(ulong *)(param_1 + 0x18) < *(long *)(param_1 + 0x20) - 1U) {
      return puVar2;
    }
    lVar7 = *(long *)(param_1 + 0x20) + 8;
    param_2 = lVar7 * 8;
    _realloc();
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = puVar2 + *(long *)(param_1 + 0x20);
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      *(long *)(param_1 + 0x20) = lVar7;
      return puVar2;
    }
  }
  puVar3 = &UNK_10f466944;
  func_0x00010bdb2564();
  puVar2 = (undefined8 *)0x48;
  lVar7 = param_2;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 0x4000;
    lVar4 = 0x4002;
    _malloc();
    puVar2[1] = lVar4;
    if (lVar4 != 0) {
      *(undefined4 *)(puVar2 + 5) = 1;
      FUN_109e95850(puVar2,puVar3,param_2);
      return puVar2;
    }
  }
  puVar3 = &UNK_10f466918;
  func_0x00010bdb2564();
  uVar5 = *(undefined8 *)(puVar3 + 0x50);
  FUN_109f6650c(uVar5,param_3 + 1);
  _memcpy();
  *param_4 = uVar5;
  if (puVar3[0x5c0] == '\x01') {
    puVar3[0x5c0] = 0;
    puVar2 = (undefined8 *)0x134;
  }
  else {
    plVar6 = *(long **)(*(long *)(puVar3 + 0x48) + 8);
    FUN_109f61800(plVar6,lVar7);
    if ((plVar6 == (long *)0x0) || (*plVar6 == 0)) {
      lVar4 = *(long *)(*(long *)(puVar3 + 0x48) + 8);
      FUN_109f61800(lVar4,lVar7);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == 0)) {
        lVar4 = *(long *)(*(long *)(puVar3 + 0x48) + 8);
        FUN_109f61800(lVar4,lVar7);
        if (lVar4 != 0) {
          uVar8 = 0x12a;
          if (*(long *)(lVar4 + 0x10) == 0) {
            uVar8 = 299;
          }
          return (undefined8 *)(ulong)uVar8;
        }
        return (undefined8 *)0x12b;
      }
    }
    puVar2 = (undefined8 *)0x129;
  }
  return puVar2;
}



/* Entry: 109e953a8; end: 109e9541f;  */

ulong FUN_109e953a8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar1 = 0x48;
  uVar6 = param_2;
  _malloc();
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x18) = 0x4000;
    lVar2 = 0x4002;
    _malloc();
    *(long *)(uVar1 + 8) = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(uVar1 + 0x28) = 1;
      FUN_109e95850(uVar1,param_1,param_2);
      return uVar1;
    }
  }
  puVar3 = &UNK_10f466918;
  func_0x00010bdb2564();
  uVar4 = *(undefined8 *)(puVar3 + 0x50);
  FUN_109f6650c(uVar4,param_3 + 1);
  _memcpy();
  *param_4 = uVar4;
  if (puVar3[0x5c0] == '\x01') {
    puVar3[0x5c0] = 0;
    uVar1 = 0x134;
  }
  else {
    plVar5 = *(long **)(*(long *)(puVar3 + 0x48) + 8);
    FUN_109f61800(plVar5,uVar6);
    if ((plVar5 == (long *)0x0) || (*plVar5 == 0)) {
      lVar2 = *(long *)(*(long *)(puVar3 + 0x48) + 8);
      FUN_109f61800(lVar2,uVar6);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 8) == 0)) {
        lVar2 = *(long *)(*(long *)(puVar3 + 0x48) + 8);
        FUN_109f61800(lVar2,uVar6);
        if (lVar2 != 0) {
          uVar7 = 0x12a;
          if (*(long *)(lVar2 + 0x10) == 0) {
            uVar7 = 299;
          }
          return (ulong)uVar7;
        }
        return 299;
      }
    }
    uVar1 = 0x129;
  }
  return uVar1;
}



/* Entry: 109e95420; end: 109e954fb;  */

undefined4 FUN_109e95420(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  FUN_109f6650c(uVar2,param_3 + 1);
  _memcpy();
  *param_4 = uVar2;
  if (*(char *)(param_1 + 0x5c0) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c0) = 0;
    uVar1 = 0x134;
  }
  else {
    plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 8);
    FUN_109f61800(plVar3,param_2);
    if ((plVar3 == (long *)0x0) || (*plVar3 == 0)) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
      FUN_109f61800(lVar4,param_2);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == 0)) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
        FUN_109f61800(lVar4,param_2);
        if (lVar4 == 0) {
          return 299;
        }
        if (*(long *)(lVar4 + 0x10) != 0) {
          return 0x12a;
        }
        return 299;
      }
    }
    uVar1 = 0x129;
  }
  return uVar1;
}



/* Entry: 109e954fc; end: 109e956cf;  */

undefined4
FUN_109e954fc(long param_1,int param_2,long param_3,ulong *param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  
  bVar4 = *(byte *)(param_1 + param_2 + -1);
  bVar6 = (bVar4 & 0xdf) == 0x55;
  iVar12 = (int)param_6;
  if ((bVar4 | 0x20) == 0x6c) {
    cVar5 = *(char *)(param_1 + param_2 + -2);
    if (cVar5 == 'U') {
      bVar6 = bVar4 == 0x4c;
      goto LAB_109e9559c;
    }
    if ((cVar5 != 'u') || (bVar4 != 0x6c)) {
      bVar6 = false;
      goto LAB_109e9559c;
    }
    lVar1 = 2;
    if (iVar12 != 0x10) {
      lVar1 = 0;
    }
    uVar7 = param_1 + lVar1;
    _strtoull(uVar7,0,param_6);
    bVar6 = true;
LAB_109e955c0:
    *param_4 = uVar7;
  }
  else {
LAB_109e9559c:
    lVar1 = 2;
    if (iVar12 != 0x10) {
      lVar1 = 0;
    }
    uVar7 = param_1 + lVar1;
    _strtoull(uVar7,0,param_6);
    if ((bVar4 | 0x20) == 0x6c) goto LAB_109e955c0;
    *(int *)param_4 = (int)uVar7;
  }
  if ((((bVar4 | 0x20) == 0x6c && iVar12 == 10) && !bVar6) && 0x8000000000000000 < uVar7) {
    puVar8 = &UNK_10f610dc1;
  }
  else if ((uVar7 >> 0x20 == 0) || ((bVar4 | 0x20) == 0x6c)) {
    bVar2 = bVar6;
    if (iVar12 != 10 || (uint)uVar7 < 0x80000001) {
      bVar2 = true;
    }
    if (bVar2) goto LAB_109e95640;
    puVar8 = &UNK_10f610e12;
  }
  else {
    uVar3 = *(uint *)(param_3 + 0xec);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_3 + 0xe8);
    }
    uVar10 = 299;
    if (*(char *)(param_3 + 0xe4) == '\0') {
      uVar10 = 0x81;
    }
    if (uVar10 < uVar3) {
      FUN_109e9ed98(param_5,param_3,&UNK_10f610df2);
      goto LAB_109e95640;
    }
    puVar8 = &UNK_10f610df2;
  }
  FUN_109e9f044(param_5,param_3,puVar8);
LAB_109e95640:
  uVar9 = 0x132;
  if (bVar6) {
    uVar9 = 0x133;
  }
  uVar11 = 0x12f;
  if (bVar6) {
    uVar11 = 0x130;
  }
  if ((bVar4 | 0x20) != 0x6c) {
    uVar9 = uVar11;
  }
  return uVar9;
}



/* Entry: 109e956d0; end: 109e957a7;  */

ulong FUN_109e956d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar6 = (ulong)(uint)(*(int *)(*(long *)(*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x18) * 8
                                          ) + 0x30) + *(int *)(param_1 + 0x54));
  pbVar7 = *(byte **)(param_1 + 0x88);
  if (pbVar7 < *(byte **)(param_1 + 0x48)) {
    do {
      if ((ulong)*pbVar7 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (ulong)(byte)(&UNK_10e063f60)[*pbVar7];
      }
      iVar5 = (int)uVar6;
      if (*(short *)(&UNK_10e064060 + (long)iVar5 * 2) != 0) {
        *(int *)(param_1 + 0x70) = iVar5;
        *(byte **)(param_1 + 0x78) = pbVar7;
      }
      lVar3 = (long)iVar5;
      lVar4 = (long)*(short *)(&UNK_10e065712 + lVar3 * 2) + uVar2;
      if (iVar5 != *(short *)(&UNK_10e064964 + lVar4 * 2)) {
        do {
          lVar1 = lVar3 * 2;
          lVar3 = (long)*(short *)(&UNK_10e066026 + lVar1);
          if (0x481 < lVar3) {
            uVar2 = (ulong)(byte)(&UNK_10e06693a)[uVar2];
          }
          lVar4 = (long)*(short *)(&UNK_10e065712 + lVar3 * 2) + uVar2;
        } while (*(short *)(&UNK_10e064964 + lVar4 * 2) != *(short *)(&UNK_10e066026 + lVar1));
      }
      uVar6 = (ulong)*(short *)(&UNK_10e066986 + lVar4 * 2);
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != *(byte **)(param_1 + 0x48));
  }
  return uVar6;
}



/* Entry: 109e957a8; end: 109e9584f;  */

void FUN_109e957a8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  if ((*(long *)(param_2 + 0x28) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x18) * 8), lVar1 == 0)) {
    FUN_109e95318(param_2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    FUN_109e953a8(uVar2,param_2);
    lVar1 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar1 * 8) = uVar2;
    if (*(long *)(param_2 + 0x28) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(*(long *)(param_2 + 0x28) + lVar1 * 8);
    }
  }
  FUN_109e95850(lVar1,param_1,param_2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x18) * 8);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar1 + 0x20);
  puVar3 = *(undefined1 **)(lVar1 + 0x10);
  *(undefined1 **)(param_2 + 0x48) = puVar3;
  *(undefined1 **)(param_2 + 0x88) = puVar3;
  *(undefined8 *)(param_2 + 8) =
       **(undefined8 **)(*(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x18) * 8);
  *(undefined1 *)(param_2 + 0x30) = *puVar3;
  return;
}



/* Entry: 109e95850; end: 109e9594f;  */

void FUN_109e95850(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  
  puVar2 = param_1;
  ___error();
  uVar1 = *(undefined4 *)puVar2;
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = *(long *)(param_3 + 0x28);
LAB_109e958c8:
    *param_1 = param_2;
    *(undefined4 *)((long)param_1 + 0x3c) = 1;
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_109e95920;
    }
  }
  else {
    param_1[4] = 0;
    *(undefined1 *)param_1[1] = 0;
    *(undefined1 *)(param_1[1] + 1) = 0;
    param_1[2] = param_1[1];
    *(undefined4 *)(param_1 + 6) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    lVar3 = *(long *)(param_3 + 0x28);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(lVar3 + *(long *)(param_3 + 0x18) * 8);
    }
    if (puVar4 != param_1) goto LAB_109e958c8;
    lVar5 = *(long *)(lVar3 + *(long *)(param_3 + 0x18) * 8);
    *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar5 + 0x20);
    puVar6 = *(undefined1 **)(lVar5 + 0x10);
    *(undefined1 **)(param_3 + 0x48) = puVar6;
    *(undefined1 **)(param_3 + 0x88) = puVar6;
    *(undefined8 *)(param_3 + 8) = **(undefined8 **)(lVar3 + *(long *)(param_3 + 0x18) * 8);
    *(undefined1 *)(param_3 + 0x30) = *puVar6;
    *param_1 = param_2;
    *(undefined4 *)((long)param_1 + 0x3c) = 1;
  }
  puVar4 = *(undefined8 **)(lVar3 + *(long *)(param_3 + 0x18) * 8);
LAB_109e95920:
  if (puVar4 != param_1) {
    *(undefined8 *)((long)param_1 + 0x34) = 1;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  ___error();
  *(undefined4 *)puVar2 = uVar1;
  return;
}



/* Entry: 109e95950; end: 109e95aeb;  */

void FUN_109e95950(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  
  FUN_109e95318(param_2);
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    lVar3 = *(long *)(lVar2 + lVar1 * 8);
    if (lVar3 != param_1) {
      if (lVar3 != 0) {
        **(undefined1 **)(param_2 + 0x48) = *(undefined1 *)(param_2 + 0x30);
        lVar2 = *(long *)(param_2 + 0x28);
        lVar1 = *(long *)(param_2 + 0x18);
        *(undefined8 *)(*(long *)(lVar2 + lVar1 * 8) + 0x10) = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(*(long *)(lVar2 + lVar1 * 8) + 0x20) = *(undefined8 *)(param_2 + 0x38);
      }
      *(long *)(lVar2 + lVar1 * 8) = param_1;
      lVar2 = *(long *)(*(long *)(param_2 + 0x28) + lVar1 * 8);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar2 + 0x20);
      puVar4 = *(undefined1 **)(lVar2 + 0x10);
      *(undefined1 **)(param_2 + 0x48) = puVar4;
      *(undefined1 **)(param_2 + 0x88) = puVar4;
      *(undefined8 *)(param_2 + 8) = **(undefined8 **)(*(long *)(param_2 + 0x28) + lVar1 * 8);
      *(undefined1 *)(param_2 + 0x30) = *puVar4;
      *(undefined4 *)(param_2 + 0x58) = 1;
    }
  }
  return;
}



/* Entry: 109e95aec; end: 109e95c0f;  */

undefined8 * FUN_109e95aec(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar1 = (long)param_2 + -2;
  if (((param_2 < (undefined8 *)0x2) || (*(char *)(param_1 + lVar1) != '\0')) ||
     (*(char *)((long)param_2 + param_1 + -1) != '\0')) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)0x48;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    iVar7 = (int)lVar1;
    *(int *)(puVar2 + 3) = iVar7;
    puVar2[1] = param_1;
    puVar2[2] = param_1;
    *puVar2 = 0;
    puVar2[4] = (long)iVar7;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 1;
    *(undefined8 *)((long)puVar2 + 0x3c) = 0;
    FUN_109e95950();
    return puVar2;
  }
  puVar3 = &UNK_10f610d50;
  func_0x00010bdb2564(&UNK_10f610d50);
  puVar2 = (undefined8 *)((long)param_2 + 2);
  puVar5 = param_2;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x00010bdb2564(&UNK_10f610d7a);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      _memcpy(puVar2,puVar3,param_2);
    }
    *(undefined2 *)((long)puVar2 + (long)param_2) = 0;
    puVar5 = (undefined8 *)((long)param_2 + 2);
    FUN_109e95aec(puVar2,puVar5,param_3);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 5) = 1;
      return puVar2;
    }
  }
  puVar2 = (undefined8 *)&UNK_10f610da3;
  func_0x00010bdb2564();
  if (puVar5 == (undefined8 *)0x0) {
    ___error();
    uVar6 = 0x16;
  }
  else {
    puVar4 = (undefined8 *)0x1;
    _calloc(1,0xa8);
    *puVar5 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = puVar2;
      return (undefined8 *)0x0;
    }
    ___error();
    uVar6 = 0xc;
    puVar2 = puVar4;
  }
  *(undefined4 *)puVar2 = uVar6;
  return (undefined8 *)0x1;
}



/* Entry: 109e95c10; end: 109e95d27;  */

undefined8 FUN_109e95c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    ___error();
    uVar2 = 0x16;
  }
  else {
    puVar1 = (undefined8 *)0x1;
    _calloc(1,0xa8);
    *param_2 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      return 0;
    }
    ___error();
    uVar2 = 0xc;
    param_1 = puVar1;
  }
  *(undefined4 *)param_1 = uVar2;
  return 1;
}



/* Entry: 109e95d28; end: 109e9da4f;  */

undefined1 FUN_109e95d28(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  short *psVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  byte bVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  undefined **ppuVar25;
  ulong *puVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long *plVar35;
  undefined8 *puVar36;
  undefined1 uVar37;
  undefined8 *puVar38;
  undefined *puVar39;
  ulong uVar40;
  ulong uVar41;
  short *psVar42;
  short *psVar43;
  ulong uVar44;
  byte *pbVar45;
  undefined4 *puVar46;
  uint *puVar47;
  ulong *puVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  ulong uVar55;
  undefined8 uVar56;
  ulong uVar57;
  undefined8 uVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  uint uStack_ce00;
  uint uStack_cdf8;
  undefined1 *puStack_cdd8;
  undefined1 *puStack_cdd0;
  int iStack_cdc8;
  ulong uStack_cdb0;
  ulong uStack_cda8;
  ulong *puStack_cd88;
  ulong *puStack_cd80;
  uint uStack_cd74;
  undefined8 uStack_cd70;
  undefined4 uStack_cd68;
  long lStack_cd60;
  int iStack_cd58;
  uint auStack_cd50 [56];
  undefined8 uStack_cc70;
  undefined8 uStack_cc68;
  ulong uStack_cc60;
  undefined8 *puStack_cc58;
  ulong uStack_cc50;
  ulong uStack_cc48;
  ulong uStack_cc40;
  undefined8 *puStack_cc38;
  ulong uStack_cc30;
  ulong uStack_cc28;
  ulong uStack_cc20;
  ulong uStack_cc18;
  ulong uStack_cc10;
  ulong uStack_cc08;
  ulong uStack_cc00;
  ulong uStack_cbf8;
  ulong uStack_cbf0;
  ulong uStack_cbe8;
  ulong uStack_cbe0;
  ulong auStack_cbd8 [3];
  undefined8 uStack_cbc0;
  ulong uStack_cbb8;
  undefined8 *puStack_cbb0;
  undefined8 uStack_cba8;
  ulong uStack_cba0;
  ulong uStack_cb98;
  ulong uStack_cb90;
  ulong uStack_cb88;
  undefined4 uStack_cb80;
  uint uStack_cb7c;
  ulong uStack_cb78;
  ulong uStack_cb70;
  ulong uStack_cb68;
  ulong uStack_cb60;
  ulong uStack_cb58;
  ulong uStack_cb50;
  ulong uStack_cb48;
  ulong uStack_cb40;
  ulong uStack_cb38;
  ulong uStack_cb30;
  ulong uStack_cb28;
  ulong uStack_cb20;
  ulong uStack_cb18;
  ulong uStack_cb10;
  ulong uStack_cb08;
  ulong uStack_cb00;
  ulong uStack_caf8;
  ulong uStack_caf0;
  ulong uStack_cae8;
  ulong uStack_cae0;
  ulong uStack_cad8;
  ulong uStack_cad0;
  ulong uStack_cac8;
  ulong uStack_cac0;
  ulong uStack_cab8;
  ulong uStack_cab0;
  ulong uStack_caa8;
  ulong uStack_caa0;
  ulong uStack_ca98;
  uint auStack_ca90 [4];
  ulong auStack_ca80 [3];
  undefined8 uStack_ca68;
  ulong auStack_b180 [5600];
  short asStack_280 [200];
  undefined1 auStack_f0 [128];
  long lStack_70;
  ulong *puVar15;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  iStack_cdc8 = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_cb88 = 0x100000001;
  uStack_cb90 = 0x100000001;
  uStack_cb80 = 0;
  uStack_cb78 = 0;
  uVar44 = 200;
  auStack_ca80[1] = 0x100000001;
  auStack_ca80[0] = 0x100000001;
  uStack_ca68 = 0;
  auStack_ca80[2] = (ulong)uStack_cb7c << 0x20;
  puStack_cd80 = auStack_ca80;
  puStack_cd88 = auStack_b180;
  psVar43 = asStack_280;
  puStack_cdd8 = (undefined1 *)0x80;
  puStack_cdd0 = auStack_f0;
  uStack_cd74 = 0xfffffffe;
  psVar42 = asStack_280;
  puVar48 = auStack_b180;
  puVar26 = auStack_ca80;
  lVar49 = 0;
LAB_109e95df4:
  *psVar43 = (short)lVar49;
  psVar10 = psVar42;
  if (psVar42 + (uVar44 - 1) <= psVar43) {
    if (uVar44 >> 4 < 0x271) {
      uVar44 = uVar44 << 1;
      if (9999 < uVar44) {
        uVar44 = 10000;
      }
      psVar10 = (short *)(uVar44 * 0x102 + 0x1be);
      _malloc();
      if (psVar10 != (short *)0x0) {
        lVar20 = (long)psVar43 - (long)psVar42 >> 1;
        lVar21 = lVar20 + 1;
        _memcpy();
        puVar13 = (ulong *)(psVar10 +
                           (ulong)(((int)uVar44 * 2 + 0xdfU & 0xffff) * 0x4925 >> 0x16) * 0x70);
        _memcpy(puVar13,puStack_cd88,lVar21 * 0xe0);
        puVar15 = puVar13 + uVar44 * 0x1c;
        param_3 = (undefined8 *)0x0;
        _memcpy(puVar15,puStack_cd80);
        if (psVar42 != asStack_280) {
          _free(psVar42);
        }
        if (lVar21 < (long)uVar44) {
          psVar43 = psVar10 + lVar20;
          puVar48 = puVar13 + lVar21 * 0x1c + -0x1c;
          puVar26 = puVar15 + lVar21 * 4 + -4;
          puStack_cd88 = puVar13;
          puStack_cd80 = puVar15;
          goto LAB_109e95ee0;
        }
        uVar37 = 1;
        goto LAB_109e9d9b4;
      }
    }
LAB_109e9da10:
    param_3 = (undefined8 *)0x0;
    FUN_109e9ed98(&uStack_cb90,param_1);
    uVar37 = 2;
    psVar10 = psVar42;
    goto LAB_109e9d9a0;
  }
LAB_109e95ee0:
  sVar5 = *(short *)(&UNK_10e0679a4 + (long)(int)lVar49 * 2);
  psVar42 = psVar10;
  if (sVar5 != -0x149) {
    if (uStack_cd74 == 0xfffffffe) {
      param_3 = (undefined8 *)param_1[4];
      puVar13 = &uStack_cb70;
      func_0x000109e8be40(puVar13,&uStack_cb90);
      uStack_cd74 = (uint)puVar13;
    }
    if ((int)uStack_cd74 < 1) {
      uVar17 = 0;
      uStack_cd74 = 0;
    }
    else if (uStack_cd74 < 0x18b) {
      uVar17 = (uint)(byte)(&UNK_10e067d5c)[uStack_cd74];
    }
    else {
      uVar17 = 2;
    }
    uVar19 = uVar17 + (int)sVar5;
    if ((0xa3f < uVar19) || (uVar17 != (int)*(short *)(&UNK_10e067ee8 + (ulong)uVar19 * 2)))
    goto LAB_109e95fe8;
    sVar5 = *(short *)(&UNK_10e069368 + (ulong)uVar19 * 2);
    lVar21 = (long)sVar5;
    if (sVar5 < 1) {
      if (sVar5 != 0 && sVar5 != -0x127) {
        uVar50 = (ulong)(uint)-(int)sVar5;
        goto LAB_109e95ff8;
      }
      goto LAB_109e960c8;
    }
    if (sVar5 != 5) {
      bVar8 = iStack_cdc8 != 0;
      iVar9 = iStack_cdc8 + -1;
      iStack_cdc8 = 0;
      if (bVar8) {
        iStack_cdc8 = iVar9;
      }
      bVar8 = uStack_cd74 != 0;
      uStack_cd74 = 0;
      if (bVar8) {
        uStack_cd74 = 0xfffffffe;
      }
      puVar48[0x25] = uStack_cb28;
      puVar48[0x24] = uStack_cb30;
      puVar48[0x27] = uStack_cb18;
      puVar48[0x26] = uStack_cb20;
      puVar48[0x21] = uStack_cb48;
      puVar48[0x20] = uStack_cb50;
      puVar48[0x23] = uStack_cb38;
      puVar48[0x22] = uStack_cb40;
      puVar48[0x2d] = uStack_cae8;
      puVar48[0x2c] = uStack_caf0;
      puVar48[0x2f] = uStack_cad8;
      puVar48[0x2e] = uStack_cae0;
      puVar48[0x29] = uStack_cb08;
      puVar48[0x28] = uStack_cb10;
      puVar48[0x2b] = uStack_caf8;
      puVar48[0x2a] = uStack_cb00;
      puVar48[0x35] = uStack_caa8;
      puVar48[0x34] = uStack_cab0;
      puVar48[0x37] = uStack_ca98;
      puVar48[0x36] = uStack_caa0;
      puVar48[0x31] = uStack_cac8;
      puVar48[0x30] = uStack_cad0;
      puVar48[0x33] = uStack_cab8;
      puVar48[0x32] = uStack_cac0;
      puVar13 = puVar48 + 0x1c;
      puVar48[0x1d] = uStack_cb68;
      *puVar13 = uStack_cb70;
      puVar48[0x1f] = uStack_cb58;
      puVar48[0x1e] = uStack_cb60;
      puVar15 = puVar26 + 4;
      puVar26[5] = uStack_cb88;
      *puVar15 = uStack_cb90;
      puVar26[7] = uStack_cb78;
      puVar26[6] = CONCAT44(uStack_cb7c,uStack_cb80);
      goto LAB_109e9bfc4;
    }
LAB_109e9da40:
    uVar37 = 0;
LAB_109e9d9a0:
    if (psVar10 != asStack_280) {
LAB_109e9d9b4:
      _free(psVar10);
    }
    if (puStack_cdd0 != auStack_f0) {
      _free();
    }
    iVar9 = (int)puStack_cdd0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      __Unwind_Resume();
      if (((ulong)param_3 & 1) == 0) {
        _strcasecmp();
      }
      else {
        _strcmp();
      }
      return iVar9 != 0;
    }
    return uVar37;
  }
LAB_109e95fe8:
  uVar50 = (ulong)*(ushort *)(&UNK_10e06a7e8 + (long)(int)lVar49 * 2);
  if (*(ushort *)(&UNK_10e06a7e8 + (long)(int)lVar49 * 2) == 0) {
LAB_109e960c8:
    if (iStack_cdc8 == 0) {
      puVar11 = (undefined1 *)0x0;
      FUN_109e9db58(0,lVar49,uStack_cd74);
      if (puStack_cdd8 < puVar11) {
        puVar23 = (undefined1 *)((long)puVar11 << 1);
        if ((undefined1 *)0x7fffffffffffffff < puVar11) {
          puVar23 = (undefined1 *)0xffffffffffffffff;
        }
        if (puStack_cdd0 != auStack_f0) {
          _free();
        }
        puVar12 = puVar23;
        _malloc();
        puStack_cdd8 = (undefined1 *)0x80;
        puStack_cdd0 = auStack_f0;
        if (puVar12 != (undefined1 *)0x0) {
          puStack_cdd8 = puVar23;
          puStack_cdd0 = puVar12;
        }
      }
      if (puVar11 + -1 < puStack_cdd8) {
        FUN_109e9db58(puStack_cdd0,lVar49,uStack_cd74);
        param_3 = (undefined8 *)0x0;
        FUN_109e9ed98(&uStack_cb90,param_1);
        uVar50 = uStack_cb90;
        goto LAB_109e9b7c0;
      }
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(&uStack_cb90,param_1);
      uVar50 = uStack_cb90;
      if (puVar11 == (undefined1 *)0x0) goto LAB_109e9b7c0;
      goto LAB_109e9da10;
    }
    uVar50 = uStack_cb90;
    if (iStack_cdc8 != 3) goto LAB_109e9b7c0;
    if ((int)uStack_cd74 < 1) {
      if (uStack_cd74 == 0) {
LAB_109e9d99c:
        uVar37 = 1;
        goto LAB_109e9d9a0;
      }
    }
    else {
      uStack_cd74 = 0xfffffffe;
    }
LAB_109e9b7c0:
    puVar26 = puVar26 + 7;
    puVar13 = puVar48 + 0x1c;
    do {
      if ((-2 < (long)*(short *)(&UNK_10e0679a4 + (long)(int)lVar49 * 2)) &&
         (lVar49 = (long)*(short *)(&UNK_10e0679a4 + (long)(int)lVar49 * 2) + 1,
         *(short *)(&UNK_10e067ee8 + lVar49 * 2) == 1)) {
        sVar5 = *(short *)(&UNK_10e069368 + lVar49 * 2);
        lVar21 = (long)sVar5;
        if (0 < sVar5) goto LAB_109e9b81c;
      }
      if (psVar43 == psVar10) goto LAB_109e9d99c;
      uVar50 = puVar26[-7];
      psVar43 = psVar43 + -1;
      lVar49 = (long)*psVar43;
      puVar26 = puVar26 + -4;
      puVar13 = puVar13 + -0x1c;
    } while( true );
  }
LAB_109e95ff8:
  bVar3 = (&UNK_10e06aba0)[uVar50];
  uVar32 = (ulong)bVar3;
  puVar13 = puVar48 + (long)(int)(1 - uVar32) * 0x1c;
  uStack_cc68 = puVar13[1];
  uStack_cc70 = (undefined8 *)*puVar13;
  puStack_cc58 = (undefined8 *)puVar13[3];
  uStack_cc60 = puVar13[2];
  uStack_cc48 = puVar13[5];
  uStack_cc50 = puVar13[4];
  puStack_cc38 = (undefined8 *)puVar13[7];
  uStack_cc40 = puVar13[6];
  uStack_cc28 = puVar13[9];
  uStack_cc30 = puVar13[8];
  uStack_cc18 = puVar13[0xb];
  uStack_cc20 = puVar13[10];
  uStack_cc08 = puVar13[0xd];
  uStack_cc10 = puVar13[0xc];
  uStack_cbf8 = puVar13[0xf];
  uStack_cc00 = puVar13[0xe];
  uStack_cbe8 = puVar13[0x11];
  uStack_cbf0 = puVar13[0x10];
  auStack_cbd8[0] = puVar13[0x13];
  uStack_cbe0 = puVar13[0x12];
  auStack_cbd8[2] = puVar13[0x15];
  auStack_cbd8[1] = puVar13[0x14];
  uStack_cbb8 = puVar13[0x17];
  uStack_cbc0 = puVar13[0x16];
  uStack_cba8 = puVar13[0x19];
  puStack_cbb0 = (undefined8 *)puVar13[0x18];
  uStack_cb98 = puVar13[0x1b];
  uStack_cba0 = puVar13[0x1a];
  if (uVar32 == 0) {
    uStack_cdb0 = puVar26[1];
    uStack_cda8 = uStack_cdb0;
  }
  else {
    uStack_cdb0 = puVar26[uVar32 * -4 + 4];
    uStack_cda8 = puVar26[1];
  }
  uVar22 = puVar26[3];
  uVar7 = puVar26[2];
  switch((int)uVar50) {
  case 2:
    FUN_109e623d8(param_1);
    break;
  case 3:
    lVar49 = param_1[9];
    if (lVar49 != 0) {
      func_0x000109ea20d4();
      *(undefined8 *)(lVar49 + -0x10) = 0;
      FUN_109f65aa4(lVar49 + -0x30);
      FUN_109f65ae0(lVar49 + -0x30);
    }
    lVar49 = 0;
    if (param_1[-6] != 0) {
      lVar49 = param_1[-6] + 0x30;
    }
    FUN_109f658b0(lVar49,0x20);
    *(code **)(lVar49 + -0x10) = FUN_109e4c604;
    func_0x000109ea2074();
    param_1[9] = lVar49;
    if (*(char *)((long)param_1 + 0xe4) == '\x01') {
      if (*(int *)(param_1 + 0x1f) == 4) {
        FUN_109ea23f8();
      }
      else {
        FUN_109ea23f8();
        FUN_109ea23f8(param_1[9],&DAT_10f62bbce,1);
      }
      puVar38 = param_1 + 9;
      FUN_109ea23f8(*puVar38,&DAT_10f48d558,3);
      FUN_109ea23f8(*puVar38,&DAT_10f4914e2,3);
      FUN_109ea23f8(*puVar38,&DAT_10f608a6d,3);
      param_3 = (undefined8 *)0x1;
      FUN_109ea23f8(*puVar38,&UNK_10f48d5d3);
    }
    FUN_109e623d8(param_1);
    break;
  case 5:
    param_3 = (undefined8 *)(ulong)(uint)puVar48[-0x1c];
    FUN_109e9edd0(param_1,puVar26 + -4,param_3,0);
    goto code_r0x000109e9b710;
  case 6:
    param_3 = (undefined8 *)(ulong)(uint)puVar48[-0x38];
    FUN_109e9edd0(param_1,puVar26 + -8,param_3,puVar48[-0x1c]);
code_r0x000109e9b710:
    if ((*(byte *)((long)param_1 + 0x28b) & 1) != 0) goto code_r0x000109e9b79c;
    break;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x110:
  case 0x11d:
    goto code_r0x000109e9bef4;
  case 0xb:
    uVar17 = *(uint *)((long)param_1 + 0xec);
    uVar19 = uVar17;
    if (uVar17 == 0) {
      uVar19 = *(uint *)(param_1 + 0x1d);
    }
    uVar29 = 299;
    if (*(char *)((long)param_1 + 0xe4) == '\0') {
      uVar29 = 0x77;
    }
    if ((uVar29 < uVar19) && (*(int *)(param_1 + 0x1f) == 4)) {
      param_3 = (undefined8 *)&UNK_10f610e45;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    else {
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 99;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x77;
      }
      if (uVar19 < uVar17) {
        *(undefined1 *)((long)param_1 + 0x28c) = 1;
      }
      else {
        FUN_109f65d74(param_1,&UNK_10f612ea4);
        param_3 = (undefined8 *)0x0;
        FUN_109e9f044(puVar26 + -4,param_1);
      }
    }
code_r0x000109e9bef4:
    uStack_cc70 = (undefined8 *)0x0;
    break;
  case 0xc:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e048;
    puVar38[1] = 0;
    *(undefined1 *)(puVar38 + 7) = 1;
    uStack_cc70 = puVar38;
    break;
  case 0xd:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e048;
    puVar38[1] = 0;
    *(undefined1 *)(puVar38 + 7) = 0;
    uStack_cc70 = puVar38;
    break;
  case 0x13:
    puVar13 = (ulong *)puVar48[-0x54];
    param_3 = (undefined8 *)puVar48[-0x1c];
    func_0x000109e9e6bc(puVar13,puVar26 + -0xc,param_3,puVar26 + -4,param_1);
    goto code_r0x000109e9b798;
  case 0x14:
  case 0x15:
    uVar41 = *puVar48;
    if (uVar41 != 0) {
      puVar38 = (undefined8 *)(uVar41 + 0x28);
      *puVar38 = param_1 + 7;
      puVar24 = (undefined8 *)param_1[8];
      *(undefined8 **)(uVar41 + 0x30) = puVar24;
      *puVar24 = puVar38;
      param_1[8] = puVar38;
    }
    break;
  case 0x16:
    if ((*(byte *)((long)param_1 + 0x592) & 1) == 0) {
      param_3 = (undefined8 *)&UNK_10f610ed3;
      FUN_109e9ed98(puVar26,param_1);
      goto code_r0x000109e9b79c;
    }
    break;
  case 0x19:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x2b;
    goto code_r0x000109e99b60;
  case 0x1a:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x2c;
    goto code_r0x000109e9b398;
  case 0x1b:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x2d;
    goto code_r0x000109e9b398;
  case 0x1c:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x32;
    goto code_r0x000109e99b60;
  case 0x1d:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x33;
code_r0x000109e99b60:
    *(undefined4 *)(puVar38 + 7) = uVar18;
    puVar38[0xf] = puVar24;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar31 = puVar26[1];
    uVar41 = *puVar26;
code_r0x000109e99b8c:
    *(ulong *)((long)puVar38 + 0x1c) = uVar31;
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    puVar38[0xb] = *puVar48;
    uStack_cc70 = puVar38;
    break;
  case 0x1e:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x2e;
    goto code_r0x000109e9b99c;
  case 0x1f:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x2f;
code_r0x000109e9b99c:
    *(undefined4 *)(puVar38 + 7) = uVar18;
    puVar38[0xf] = puVar24;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    *(int *)(puVar38 + 0xb) = (int)*puVar48;
    uStack_cc70 = puVar38;
    break;
  case 0x20:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    *(undefined4 *)(puVar38 + 7) = 0x31;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    puVar38[0xb] = *puVar48;
    uStack_cc70 = puVar38;
    break;
  case 0x21:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x30;
code_r0x000109e9b398:
    *(undefined4 *)(puVar38 + 7) = uVar18;
    puVar38[0xf] = puVar24;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    *(int *)(puVar38 + 0xb) = (int)*puVar48;
    uStack_cc70 = puVar38;
    break;
  case 0x22:
  case 0x6e:
  case 0xe0:
    goto code_r0x000109e9a608;
  case 0x24:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x54];
    uVar31 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    *(undefined4 *)(puVar38 + 7) = 0x28;
    puVar38[8] = uVar41;
    puVar38[9] = uVar31;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[1] = puVar26[-9];
    *(int *)(puVar38 + 2) = (int)puVar26[-10];
    uVar41 = puVar26[-0xc];
    uStack_cc70 = puVar38;
    goto code_r0x000109e9b4bc;
  case 0x25:
  case 0x6a:
  case 0xd1:
  case 0xe5:
  case 0xf1:
  case 0xfd:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11f:
code_r0x000109e960b0:
    uStack_cc70 = (undefined8 *)*puVar48;
    break;
  case 0x26:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    *(undefined4 *)(puVar38 + 7) = 0x27;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[8] = uVar41;
    puVar38[9] = 0;
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    uVar31 = puVar26[1];
    goto code_r0x000109e99b8c;
  case 0x27:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x25;
    goto code_r0x000109e9b490;
  case 0x28:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x26;
code_r0x000109e9b490:
    *(undefined4 *)(puVar38 + 7) = uVar18;
    puVar38[0xf] = puVar24;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[8] = uVar41;
    puVar38[9] = 0;
    goto code_r0x000109e9b4a4;
  case 0x30:
    puVar38 = (undefined8 *)puVar48[-0x1c];
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar31 = puVar26[-3];
    uVar41 = puVar26[-4];
    goto code_r0x000109e9b910;
  case 0x31:
    puVar38 = (undefined8 *)puVar48[-0x38];
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar31 = puVar26[-7];
    uVar41 = puVar26[-8];
code_r0x000109e9b910:
    *(ulong *)((long)puVar38 + 0x1c) = uVar31;
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = puVar38;
code_r0x000109e9b914:
    uVar41 = *puVar48;
    puVar24 = (undefined8 *)(uVar41 + 0x28);
    *puVar24 = puVar38 + 0xe;
    puVar36 = (undefined8 *)puVar38[0xf];
    *(undefined8 **)(uVar41 + 0x30) = puVar36;
    *puVar36 = puVar24;
    puVar38[0xf] = puVar24;
    break;
  case 0x33:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    puVar38[0xe] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xd] = 0;
    *(undefined4 *)(puVar38 + 7) = 0x2a;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[10] = 0;
    puVar38[0xb] = 0;
    puVar38[8] = uVar41;
    puVar38[9] = 0;
    *puVar38 = &PTR_FUN_110b5dec8;
    puVar38[1] = 0;
    *(undefined1 *)((long)puVar38 + 0x89) = 1;
    goto code_r0x000109e9ab6c;
  case 0x34:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    puVar38[0xd] = 0;
    *(undefined4 *)(puVar38 + 7) = 0x2a;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined2 *)(puVar38 + 0x11) = 0;
    puVar38[10] = 0;
    puVar38[0xb] = 0;
    puVar38[8] = uVar41;
    puVar38[9] = 0;
    *puVar38 = &PTR_FUN_110b5dec8;
    puVar38[1] = 0;
    goto code_r0x000109e9ab6c;
  case 0x36:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x23;
    goto code_r0x000109e9b30c;
  case 0x37:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x24;
code_r0x000109e9b30c:
    *(undefined4 *)(puVar38 + 7) = uVar18;
    puVar38[0xf] = puVar24;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[8] = uVar41;
    puVar38[9] = 0;
    goto code_r0x000109e9b320;
  case 0x38:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar38[0xe] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    puVar38[0xd] = 0;
    *(int *)(puVar38 + 7) = (int)uVar41;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[8] = uVar31;
    puVar38[9] = 0;
    puVar38[10] = 0;
    puVar38[0xb] = 0;
    goto code_r0x000109e9b4a4;
  case 0x39:
    goto code_r0x000109e98074;
  case 0x3a:
    goto code_r0x000109e9a7d4;
  case 0x3b:
    uVar18 = 0x17;
    goto code_r0x000109e9b6d0;
  case 0x3c:
    uVar18 = 0x13;
    goto code_r0x000109e9b6d0;
  case 0x3e:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 5;
    goto code_r0x000109e9b1f0;
  case 0x3f:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 6;
    goto code_r0x000109e9b1f0;
  case 0x40:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 7;
    goto code_r0x000109e9b1f0;
  case 0x42:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 3;
    goto code_r0x000109e9b1f0;
  case 0x43:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 4;
    goto code_r0x000109e9b1f0;
  case 0x45:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 8;
    goto code_r0x000109e9b1f0;
  case 0x46:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 9;
    goto code_r0x000109e9b1f0;
  case 0x48:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 10;
    goto code_r0x000109e9b1f0;
  case 0x49:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0xb;
    goto code_r0x000109e9b1f0;
  case 0x4a:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0xc;
    goto code_r0x000109e9b1f0;
  case 0x4b:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0xd;
    goto code_r0x000109e9b1f0;
  case 0x4d:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0xe;
    goto code_r0x000109e9b1f0;
  case 0x4e:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0xf;
    goto code_r0x000109e9b1f0;
  case 0x50:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x10;
    goto code_r0x000109e9b1f0;
  case 0x52:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x11;
    goto code_r0x000109e9b1f0;
  case 0x54:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x12;
    goto code_r0x000109e9b1f0;
  case 0x56:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x14;
    goto code_r0x000109e9b1f0;
  case 0x58:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x15;
    goto code_r0x000109e9b1f0;
  case 0x5a:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    puVar24 = puVar38 + 0xc;
    *puVar24 = puVar38 + 0xe;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    uVar18 = 0x16;
code_r0x000109e9b1f0:
    *(undefined4 *)(puVar38 + 7) = uVar18;
    puVar38[8] = uVar41;
    puVar38[9] = uVar31;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[0xf] = puVar24;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    *puVar38 = &PTR_FUN_110b5de78;
    puVar38[1] = 0;
code_r0x000109e9b210:
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    uStack_cc70 = puVar38;
code_r0x000109e9b4bc:
    uVar31 = puVar26[1];
code_r0x000109e9b4c4:
    *(ulong *)((long)uStack_cc70 + 0x1c) = uVar31;
    *(ulong *)((long)uStack_cc70 + 0x14) = uVar41;
    break;
  case 0x5c:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x70];
    uVar31 = puVar48[-0x38];
    uVar33 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[0xe] = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    puVar38[0xd] = 0;
    *(undefined4 *)(puVar38 + 7) = 0x22;
    puVar38[8] = uVar41;
    puVar38[9] = uVar31;
    puVar38[10] = uVar33;
    puVar38[0xb] = 0;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    goto code_r0x000109e9b124;
  case 0x5e:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    uVar31 = puVar48[-0x38];
    uVar33 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e780;
    puVar38[1] = 0;
    puVar38[0xc] = puVar38 + 0xe;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    *(int *)(puVar38 + 7) = (int)uVar41;
    puVar38[8] = uVar31;
    puVar38[9] = uVar33;
    puVar38[0xb] = 0;
    puVar38[10] = 0;
    puVar38[0xf] = puVar38 + 0xc;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    goto code_r0x000109e9b210;
  case 0x5f:
    uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff00000000);
    break;
  case 0x60:
    uVar18 = 0x18;
    goto code_r0x000109e9b6d0;
  case 0x61:
    uVar18 = 0x19;
    goto code_r0x000109e9b6d0;
  case 0x62:
    uVar18 = 0x1a;
    goto code_r0x000109e9b6d0;
  case 99:
    uVar18 = 0x1b;
    goto code_r0x000109e9b6d0;
  case 100:
    uVar18 = 0x1c;
    goto code_r0x000109e9b6d0;
  case 0x65:
    uVar18 = 0x1d;
    goto code_r0x000109e9b6d0;
  case 0x66:
    uVar18 = 0x1e;
    goto code_r0x000109e9b6d0;
  case 0x67:
    uVar18 = 0x1f;
    goto code_r0x000109e9b6d0;
  case 0x68:
    uVar18 = 0x20;
    goto code_r0x000109e9b6d0;
  case 0x69:
    uVar18 = 0x21;
    goto code_r0x000109e9b6d0;
  case 0x6b:
    puVar38 = (undefined8 *)puVar48[-0x38];
    if (*(int *)(puVar38 + 7) == 0x34) {
      puVar24 = (undefined8 *)puVar38[0xf];
    }
    else {
      puVar38 = (undefined8 *)param_1[10];
      FUN_109f6650c(puVar38,0x90);
      if (puVar38 != (undefined8 *)0x0) {
        puVar38[0xf] = 0;
        puVar38[0xe] = 0;
        puVar38[0x11] = 0;
        puVar38[0x10] = 0;
        puVar38[0xb] = 0;
        puVar38[10] = 0;
        puVar38[0xd] = 0;
        puVar38[0xc] = 0;
        puVar38[7] = 0;
        puVar38[6] = 0;
        puVar38[9] = 0;
        puVar38[8] = 0;
        puVar38[3] = 0;
        puVar38[2] = 0;
        puVar38[5] = 0;
        puVar38[4] = 0;
        puVar38[1] = 0;
        *puVar38 = 0;
      }
      puVar38[5] = 0;
      puVar38[6] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      *(undefined4 *)(puVar38 + 4) = 0;
      *puVar38 = &PTR_FUN_110b5e780;
      puVar38[1] = 0;
      puVar36 = puVar38 + 0xc;
      *puVar36 = puVar38 + 0xe;
      puVar38[0xe] = 0;
      puVar38[0xd] = 0;
      *(undefined4 *)(puVar38 + 7) = 0x34;
      puVar38[0xf] = puVar36;
      puVar38[0x10] = 0;
      *(undefined1 *)(puVar38 + 0x11) = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[8] = 0;
      puVar38[9] = 0;
      puVar38[1] = puVar26[-5];
      *(int *)(puVar38 + 2) = (int)puVar26[-6];
      uVar41 = puVar26[-8];
      *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
      *(ulong *)((long)puVar38 + 0x14) = uVar41;
      uVar41 = puVar48[-0x38];
      puVar24 = (undefined8 *)(uVar41 + 0x28);
      *puVar24 = puVar38 + 0xe;
      *(undefined8 **)(uVar41 + 0x30) = puVar36;
      *puVar36 = puVar24;
      puVar38[0xf] = puVar24;
    }
    uVar41 = *puVar48;
    puVar36 = (undefined8 *)(uVar41 + 0x28);
    *puVar36 = puVar38 + 0xe;
    *(undefined8 **)(uVar41 + 0x30) = puVar24;
    *puVar24 = puVar36;
    puVar38[0xf] = puVar36;
    uStack_cc70 = puVar38;
    break;
  case 0x6d:
    FUN_109f61680(*(undefined8 *)(param_1[9] + 8));
    goto code_r0x000109e9a608;
  case 0x6f:
    *(byte *)(puVar48[-0x1c] + 0x58) =
         *(byte *)(puVar48[-0x1c] + 0x58) & 0xfc | (byte)puVar48[-0x38] & 3;
code_r0x000109e9a608:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    break;
  case 0x70:
    uVar41 = *puVar48;
    puVar38 = (undefined8 *)(uVar41 + 0x118);
    if ((((*(ulong *)(uVar41 + 0x118) & 0x7f030000) != 0) ||
        ((*(ulong *)(uVar41 + 0x118) & 0x1acfc000fc0000) != 0)) ||
       ((*(byte *)(uVar41 + 0x120) & 0x1e) != 0)) {
      lVar49 = uVar41 + 0x38;
      param_3 = param_1;
      FUN_109e2470c(lVar49,puVar26,param_1,puVar38,0,0);
      if ((int)lVar49 == 0) goto code_r0x000109e9b79c;
    }
    *(undefined8 *)(uVar41 + 0x1c0) = *(undefined8 *)(uVar41 + 0xe0);
    *(undefined8 *)(uVar41 + 0x1b8) = *(undefined8 *)(uVar41 + 0xd8);
    *(undefined8 *)(uVar41 + 0x1d0) = *(undefined8 *)(uVar41 + 0xf0);
    *(undefined8 *)(uVar41 + 0x1c8) = *(undefined8 *)(uVar41 + 0xe8);
    *(undefined8 *)(uVar41 + 0x180) = *(undefined8 *)(uVar41 + 0xa0);
    *(undefined8 *)(uVar41 + 0x178) = *(undefined8 *)(uVar41 + 0x98);
    *(undefined8 *)(uVar41 + 400) = *(undefined8 *)(uVar41 + 0xb0);
    *(undefined8 *)(uVar41 + 0x188) = *(undefined8 *)(uVar41 + 0xa8);
    *(undefined8 *)(uVar41 + 0x1a0) = *(undefined8 *)(uVar41 + 0xc0);
    *(undefined8 *)(uVar41 + 0x198) = *(undefined8 *)(uVar41 + 0xb8);
    *(undefined8 *)(uVar41 + 0x1b0) = *(undefined8 *)(uVar41 + 0xd0);
    *(undefined8 *)(uVar41 + 0x1a8) = *(undefined8 *)(uVar41 + 200);
    *(undefined8 *)(uVar41 + 0x140) = *(undefined8 *)(uVar41 + 0x60);
    *(undefined8 *)(uVar41 + 0x138) = *(undefined8 *)(uVar41 + 0x58);
    *(undefined8 *)(uVar41 + 0x150) = *(undefined8 *)(uVar41 + 0x70);
    *(undefined8 *)(uVar41 + 0x148) = *(undefined8 *)(uVar41 + 0x68);
    *(undefined8 *)(uVar41 + 0x160) = *(undefined8 *)(uVar41 + 0x80);
    *(undefined8 *)(uVar41 + 0x158) = *(undefined8 *)(uVar41 + 0x78);
    *(undefined8 *)(uVar41 + 0x170) = *(undefined8 *)(uVar41 + 0x90);
    *(undefined8 *)(uVar41 + 0x168) = *(undefined8 *)(uVar41 + 0x88);
    *(undefined8 *)(uVar41 + 0x120) = *(undefined8 *)(uVar41 + 0x40);
    *puVar38 = *(undefined8 *)(uVar41 + 0x38);
    *(undefined8 *)(uVar41 + 0x130) = *(undefined8 *)(uVar41 + 0x50);
    *(undefined8 *)(uVar41 + 0x128) = *(undefined8 *)(uVar41 + 0x48);
    *(undefined8 *)(uVar41 + 0x1e0) = *(undefined8 *)(uVar41 + 0x100);
    *(undefined8 *)(uVar41 + 0x1d8) = *(undefined8 *)(uVar41 + 0xf8);
    *(undefined8 *)(uVar41 + 0x1f0) = *(undefined8 *)(uVar41 + 0x110);
    *(undefined8 *)(uVar41 + 0x1e8) = *(undefined8 *)(uVar41 + 0x108);
    param_3 = param_1;
    func_0x000109e25d60(puVar38,puVar26);
    if ((int)puVar38 != 0) goto code_r0x000109e960b0;
    goto code_r0x000109e9b79c;
  case 0x74:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    goto code_r0x000109e99ba0;
  case 0x75:
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
code_r0x000109e99ba0:
    uVar41 = *puVar48;
    puVar38 = (undefined8 *)(uVar41 + 0x28);
    *puVar38 = uStack_cc70 + 0xb;
    puVar24 = (undefined8 *)uStack_cc70[0xc];
    *(undefined8 **)(uVar41 + 0x30) = puVar24;
    *puVar24 = puVar38;
    uStack_cc70[0xc] = puVar38;
    break;
  case 0x76:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x78);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xe] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b62c40;
    puVar38[1] = 0;
    puVar38[7] = 0;
    puVar38[8] = 0;
    puVar38[0xb] = 0;
    puVar38[9] = puVar38 + 0xb;
    puVar38[10] = 0;
    puVar38[0xc] = puVar38 + 9;
    *(undefined1 *)(puVar38 + 0xd) = 0;
    puVar38[0xe] = 0;
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[-3];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    puVar38[7] = puVar48[-0x38];
    puVar24 = (undefined8 *)puVar48[-0x1c];
    puVar38[8] = puVar24;
    uVar41 = puVar48[-0x38];
    uStack_cc70 = puVar38;
    if ((*(byte *)(uVar41 + 0x3f) >> 1 & 1) == 0) {
      uVar14 = param_1[9];
    }
    else {
      uVar14 = param_1[9];
      if (*(long *)(uVar41 + 0x110) == 0) {
        param_3 = puVar24;
        func_0x000109ec8254();
        func_0x000109ea2214(uVar14,puVar24);
        goto code_r0x000109e9bb68;
      }
    }
    puVar38 = param_1;
    FUN_109f658b0(param_1,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[1] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 3) = 10;
    *puVar38 = &PTR_DAT_110b642e0;
    puVar38[7] = 0;
    puVar38[5] = puVar38 + 7;
    puVar38[6] = 0;
    puVar38[8] = puVar38 + 5;
    *(undefined4 *)(puVar38 + 0xb) = 0xffffffff;
    puVar24 = puVar38;
    FUN_109f65c2c(puVar38,uVar41);
    puVar38[4] = puVar24;
    FUN_109ea2360(uVar14,puVar38);
  case 0xef:
code_r0x000109e9bb68:
    FUN_109f61740(*(undefined8 *)(param_1[9] + 8));
    break;
  case 0x77:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x58);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[10] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62ef8;
    puVar38[1] = 0;
    *(undefined2 *)(puVar38 + 10) = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[7] = 0;
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = puVar38;
    FUN_109f6650c(puVar24,0x120);
    if (puVar24 != (undefined8 *)0x0) {
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
    }
    puVar24[5] = 0;
    puVar24[6] = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    *puVar24 = &PTR_DAT_110b62eb0;
    puVar24[1] = 0;
    puVar24[10] = 0;
    puVar24[9] = 0;
    puVar24[0xc] = 0;
    puVar24[0xb] = 0;
    puVar24[0xe] = 0;
    puVar24[0xd] = 0;
    puVar24[0x10] = 0;
    puVar24[0xf] = 0;
    puVar24[0x12] = 0;
    puVar24[0x11] = 0;
    puVar24[0x14] = 0;
    puVar24[0x13] = 0;
    puVar24[0x16] = 0;
    puVar24[0x15] = 0;
    puVar24[0x18] = 0;
    puVar24[0x17] = 0;
    puVar24[0x1a] = 0;
    puVar24[0x19] = 0;
    puVar24[0x1c] = 0;
    puVar24[0x1b] = 0;
    puVar24[0x1e] = 0;
    puVar24[0x1d] = 0;
    puVar24[0x20] = 0;
    puVar24[0x1f] = 0;
    puVar24[0x23] = 0;
    puVar24[8] = 0;
    puVar24[7] = 0;
    puVar24[0x22] = 0;
    puVar24[0x21] = 0;
    uStack_cc70[7] = puVar24;
    puVar24[1] = puVar26[-1];
    *(int *)(puVar24 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[-3];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    puVar24[0x23] = puVar48[-0x1c];
    uStack_cc70[8] = *puVar48;
    uVar14 = param_1[9];
    puVar38 = param_1;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)*puVar48;
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x78:
    param_3 = (undefined8 *)&UNK_10f610f11;
    FUN_109e9ed98(puVar26 + -8,param_1);
    goto code_r0x000109e9b79c;
  case 0x79:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x58);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[10] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62ef8;
    puVar38[1] = 0;
    *(undefined2 *)(puVar38 + 10) = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[7] = 0;
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = puVar38;
    FUN_109f6650c(puVar24,0x120);
    if (puVar24 != (undefined8 *)0x0) {
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
    }
    puVar24[5] = 0;
    puVar24[6] = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    *puVar24 = &PTR_DAT_110b62eb0;
    puVar24[1] = 0;
    puVar24[10] = 0;
    puVar24[9] = 0;
    puVar24[0xc] = 0;
    puVar24[0xb] = 0;
    puVar24[0xe] = 0;
    puVar24[0xd] = 0;
    puVar24[0x10] = 0;
    puVar24[0xf] = 0;
    puVar24[0x12] = 0;
    puVar24[0x11] = 0;
    puVar24[0x14] = 0;
    puVar24[0x13] = 0;
    puVar24[0x16] = 0;
    puVar24[0x15] = 0;
    puVar24[0x18] = 0;
    puVar24[0x17] = 0;
    puVar24[0x1a] = 0;
    puVar24[0x19] = 0;
    puVar24[0x1c] = 0;
    puVar24[0x1b] = 0;
    puVar24[0x1e] = 0;
    puVar24[0x1d] = 0;
    puVar24[0x20] = 0;
    puVar24[0x1f] = 0;
    puVar24[8] = 0;
    puVar24[7] = 0;
    puVar24[0x23] = 0;
    puVar24[0x22] = 0;
    puVar24[0x21] = 0;
    uStack_cc70[7] = puVar24;
    puVar24[1] = puVar26[-5];
    *(int *)(puVar24 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[-7];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    puVar24[0x23] = puVar48[-0x38];
    uStack_cc70[8] = puVar48[-0x1c];
    uStack_cc70[9] = *puVar48;
    uVar14 = param_1[9];
    puVar38 = param_1;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x1c];
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x7a:
    uStack_cc70 = (undefined8 *)*puVar48;
    lVar49 = uStack_cc70[7];
    uVar31 = puVar48[-7];
    uVar41 = puVar48[-8];
    uVar40 = puVar48[-5];
    uVar33 = puVar48[-6];
    uVar59 = puVar48[-4];
    uVar57 = puVar48[-1];
    uVar55 = puVar48[-2];
    *(ulong *)(lVar49 + 0x100) = puVar48[-3];
    *(ulong *)(lVar49 + 0xf8) = uVar59;
    *(ulong *)(lVar49 + 0xf0) = uVar40;
    *(ulong *)(lVar49 + 0xe8) = uVar33;
    *(ulong *)(lVar49 + 0xe0) = uVar31;
    *(ulong *)(lVar49 + 0xd8) = uVar41;
    uVar31 = puVar48[-0xf];
    uVar41 = puVar48[-0x10];
    uVar40 = puVar48[-0xd];
    uVar33 = puVar48[-0xe];
    uVar60 = puVar48[-0xb];
    uVar59 = puVar48[-0xc];
    uVar61 = puVar48[-10];
    *(ulong *)(lVar49 + 0xd0) = puVar48[-9];
    *(ulong *)(lVar49 + 200) = uVar61;
    *(ulong *)(lVar49 + 0xc0) = uVar60;
    *(ulong *)(lVar49 + 0xb8) = uVar59;
    *(ulong *)(lVar49 + 0xb0) = uVar40;
    *(ulong *)(lVar49 + 0xa8) = uVar33;
    *(ulong *)(lVar49 + 0xa0) = uVar31;
    *(ulong *)(lVar49 + 0x98) = uVar41;
    uVar31 = puVar48[-0x17];
    uVar41 = puVar48[-0x18];
    uVar40 = puVar48[-0x15];
    uVar33 = puVar48[-0x16];
    uVar60 = puVar48[-0x13];
    uVar59 = puVar48[-0x14];
    uVar61 = puVar48[-0x12];
    *(ulong *)(lVar49 + 0x90) = puVar48[-0x11];
    *(ulong *)(lVar49 + 0x88) = uVar61;
    *(ulong *)(lVar49 + 0x80) = uVar60;
    *(ulong *)(lVar49 + 0x78) = uVar59;
    *(ulong *)(lVar49 + 0x70) = uVar40;
    *(ulong *)(lVar49 + 0x68) = uVar33;
    *(ulong *)(lVar49 + 0x60) = uVar31;
    *(ulong *)(lVar49 + 0x58) = uVar41;
    uVar31 = puVar48[-0x1b];
    uVar41 = puVar48[-0x1c];
    uVar33 = puVar48[-0x1a];
    *(ulong *)(lVar49 + 0x50) = puVar48[-0x19];
    *(ulong *)(lVar49 + 0x48) = uVar33;
    *(ulong *)(lVar49 + 0x40) = uVar31;
    *(ulong *)(lVar49 + 0x38) = uVar41;
    *(ulong *)(lVar49 + 0x110) = uVar57;
    *(ulong *)(lVar49 + 0x108) = uVar55;
    puVar13 = (ulong *)(uStack_cc70[7] + 0x38);
    param_3 = param_1;
    func_0x000109e25d60(puVar13,puVar26 + -4);
    goto code_r0x000109e9b798;
  case 0x7b:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x58);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[10] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_DAT_110b62ef8;
    puVar38[1] = 0;
    *(undefined2 *)(puVar38 + 10) = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[7] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = puVar38;
    FUN_109f6650c(puVar24,0x120);
    if (puVar24 != (undefined8 *)0x0) {
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
    }
    puVar24[5] = 0;
    puVar24[6] = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    *puVar24 = &PTR_DAT_110b62eb0;
    puVar24[1] = 0;
    puVar24[10] = 0;
    puVar24[9] = 0;
    puVar24[0xc] = 0;
    puVar24[0xb] = 0;
    puVar24[0xe] = 0;
    puVar24[0xd] = 0;
    puVar24[0x10] = 0;
    puVar24[0xf] = 0;
    puVar24[0x12] = 0;
    puVar24[0x11] = 0;
    puVar24[0x14] = 0;
    puVar24[0x13] = 0;
    puVar24[0x16] = 0;
    puVar24[0x15] = 0;
    puVar24[0x18] = 0;
    puVar24[0x17] = 0;
    puVar24[0x1a] = 0;
    puVar24[0x19] = 0;
    puVar24[0x1c] = 0;
    puVar24[0x1b] = 0;
    puVar24[0x1e] = 0;
    puVar24[0x1d] = 0;
    puVar24[0x20] = 0;
    puVar24[0x1f] = 0;
    puVar24[0x23] = 0;
    puVar24[8] = 0;
    puVar24[7] = 0;
    puVar24[0x22] = 0;
    puVar24[0x21] = 0;
    uStack_cc70[7] = puVar24;
    *(int *)(puVar24 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    puVar24[1] = puVar26[-1];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    uVar31 = puVar48[-7];
    uVar41 = puVar48[-8];
    uVar40 = puVar48[-5];
    uVar33 = puVar48[-6];
    uVar57 = puVar48[-3];
    uVar55 = puVar48[-4];
    uVar59 = puVar48[-2];
    puVar24[0x22] = puVar48[-1];
    puVar24[0x21] = uVar59;
    puVar24[0x20] = uVar57;
    puVar24[0x1f] = uVar55;
    puVar24[0x1e] = uVar40;
    puVar24[0x1d] = uVar33;
    puVar24[0x1c] = uVar31;
    puVar24[0x1b] = uVar41;
    uVar31 = puVar48[-0xf];
    uVar41 = puVar48[-0x10];
    uVar40 = puVar48[-0xd];
    uVar33 = puVar48[-0xe];
    uVar57 = puVar48[-0xb];
    uVar55 = puVar48[-0xc];
    uVar59 = puVar48[-10];
    puVar24[0x1a] = puVar48[-9];
    puVar24[0x19] = uVar59;
    puVar24[0x18] = uVar57;
    puVar24[0x17] = uVar55;
    puVar24[0x16] = uVar40;
    puVar24[0x15] = uVar33;
    puVar24[0x14] = uVar31;
    puVar24[0x13] = uVar41;
    uVar31 = puVar48[-0x17];
    uVar41 = puVar48[-0x18];
    uVar40 = puVar48[-0x15];
    uVar33 = puVar48[-0x16];
    uVar57 = puVar48[-0x13];
    uVar55 = puVar48[-0x14];
    uVar59 = puVar48[-0x12];
    puVar24[0x12] = puVar48[-0x11];
    puVar24[0x11] = uVar59;
    puVar24[0x10] = uVar57;
    puVar24[0xf] = uVar55;
    puVar24[0xe] = uVar40;
    puVar24[0xd] = uVar33;
    puVar24[0xc] = uVar31;
    puVar24[0xb] = uVar41;
    uVar31 = puVar48[-0x1b];
    uVar41 = puVar48[-0x1c];
    uVar33 = puVar48[-0x1a];
    puVar24[10] = puVar48[-0x19];
    puVar24[9] = uVar33;
    puVar24[8] = uVar31;
    puVar24[7] = uVar41;
    iVar9 = (int)uStack_cc70[7] + 0x38;
    param_3 = param_1;
    func_0x000109e25d60();
    if (iVar9 == 0) goto code_r0x000109e9b79c;
    *(ulong *)(uStack_cc70[7] + 0x118) = *puVar48;
    break;
  case 0x7c:
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    break;
  case 0x7d:
    if (((byte)*puVar48 >> 2 & 1) != 0) {
      param_3 = (undefined8 *)&UNK_10f610f39;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    uStack_cc68 = puVar48[1];
    puStack_cc58 = (undefined8 *)puVar48[3];
    uStack_cc60 = puVar48[2];
    uStack_cc48 = puVar48[5];
    uStack_cc50 = puVar48[4];
    puStack_cc38 = (undefined8 *)puVar48[7];
    uStack_cc40 = puVar48[6];
    uStack_cc28 = puVar48[9];
    uStack_cc30 = puVar48[8];
    uStack_cc18 = puVar48[0xb];
    uStack_cc20 = puVar48[10];
    uStack_cc08 = puVar48[0xd];
    uStack_cc10 = puVar48[0xc];
    uStack_cbf8 = puVar48[0xf];
    uStack_cc00 = puVar48[0xe];
    uStack_cbe8 = puVar48[0x11];
    uStack_cbf0 = puVar48[0x10];
    auStack_cbd8[0] = puVar48[0x13];
    uStack_cbe0 = puVar48[0x12];
    auStack_cbd8[2] = puVar48[0x15];
    auStack_cbd8[1] = puVar48[0x14];
    uStack_cbb8 = puVar48[0x17];
    uStack_cbc0 = puVar48[0x16];
    uStack_cba8 = puVar48[0x19];
    puStack_cbb0 = (undefined8 *)puVar48[0x18];
    uStack_cb98 = puVar48[0x1b];
    uStack_cba0 = puVar48[0x1a];
    uStack_cc70 = (undefined8 *)(*puVar48 | 4);
    break;
  case 0x7e:
    if (((byte)*puVar48 >> 1 & 1) != 0) {
      param_3 = (undefined8 *)&UNK_10f610f53;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    goto code_r0x000109e97b90;
  case 0x7f:
    if (((puVar48[-0x1c] & 0x60) != 0) && ((*puVar48 & 0x60) != 0)) {
      FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f610f6f);
    }
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      if ((uVar17 <= uVar19) && (((byte)*puVar48 >> 2 & 1) != 0)) {
        FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f610f90);
      }
    }
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,0);
    break;
  case 0x80:
    if ((*(byte *)((long)puVar48 + 0xc) & 3) != 0) {
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      if (uVar17 <= uVar19) {
        auStack_cd50[0] = 0;
        auStack_cd50[1] = 0;
        auStack_cd50[2] = 0;
        if (*puVar48 != 0 || (int)puVar48[1] != 0) {
          param_3 = (undefined8 *)0x0;
          FUN_109e9ed98(puVar26 + -4);
        }
      }
    }
    goto code_r0x000109e9a194;
  case 0x81:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,0);
    break;
  case 0x82:
  case 0xbc:
  case 0x123:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x20;
    break;
  case 0x83:
  case 0x124:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x40;
    break;
  case 0x84:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x60;
    break;
  case 0x87:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar24 = puVar38 + 5;
    *puVar24 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
    *puVar24 = uStack_cc70 + 10;
    puVar36 = (undefined8 *)uStack_cc70[0xb];
    puVar38[6] = puVar36;
    *puVar36 = puVar24;
    uStack_cc70[0xb] = puVar24;
    uVar14 = param_1[9];
    puVar38 = param_1;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)*puVar48;
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x88:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    uVar31 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = uVar31;
    puVar38[9] = 0;
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = (undefined8 *)puVar48[-0x54];
    *puVar36 = uStack_cc70 + 10;
    puVar24 = (undefined8 *)uStack_cc70[0xb];
    puVar38[6] = puVar24;
    *puVar24 = puVar36;
    uStack_cc70[0xb] = puVar36;
    uVar14 = param_1[9];
    puVar38 = param_1;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x1c];
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x89:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x54];
    uVar31 = puVar48[-0x38];
    uVar33 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = uVar31;
    puVar38[9] = uVar33;
    puVar38[1] = puVar26[-9];
    *(int *)(puVar38 + 2) = (int)puVar26[-10];
    uVar41 = puVar26[-0xc];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[-7];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = (undefined8 *)puVar48[-0x8c];
    *puVar36 = uStack_cc70 + 10;
    puVar24 = (undefined8 *)uStack_cc70[0xb];
    puVar38[6] = puVar24;
    *puVar24 = puVar36;
    uStack_cc70[0xb] = puVar36;
    uVar14 = param_1[9];
    puVar38 = param_1;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x54];
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x8a:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = uVar31;
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[-7];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = (undefined8 *)puVar48[-0x70];
    *puVar36 = uStack_cc70 + 10;
    puVar24 = (undefined8 *)uStack_cc70[0xb];
    puVar38[6] = puVar24;
    *puVar24 = puVar36;
    uStack_cc70[0xb] = puVar36;
    uVar14 = param_1[9];
    puVar38 = param_1;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x38];
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x8b:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x68);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xc] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = *puVar48;
    puVar38[6] = 0;
    puVar38[5] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62ca0;
    puVar38[1] = 0;
    puVar38[10] = 0;
    puVar38[8] = puVar38 + 10;
    puVar38[9] = 0;
    puVar38[0xb] = puVar38 + 8;
    puVar38[0xc] = 0;
    goto code_r0x000109e99210;
  case 0x8c:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    FUN_109f6650c(puVar24,0x68);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[0xc] = 0;
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
    }
    uVar41 = puVar48[-0x1c];
    puVar24[6] = 0;
    puVar24[5] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR_FUN_110b62ca0;
    puVar24[1] = 0;
    puVar24[9] = 0;
    puVar24[10] = 0;
    puVar24[7] = uVar41;
    puVar24[0xc] = 0;
    puVar24[1] = puVar26[-1];
    *(int *)(puVar24 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    puVar38[5] = puVar24 + 10;
    puVar24[8] = puVar36;
    puVar38[6] = puVar24 + 8;
    puVar24[0xb] = puVar36;
    uVar14 = param_1[9];
    puVar38 = param_1;
    uStack_cc70 = puVar24;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)*puVar48;
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x8d:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    uVar31 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = uVar31;
    puVar38[9] = 0;
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    FUN_109f6650c(puVar24,0x68);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[0xc] = 0;
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
    }
    uVar41 = puVar48[-0x38];
    puVar24[6] = 0;
    puVar24[5] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR_FUN_110b62ca0;
    puVar24[1] = 0;
    puVar24[9] = 0;
    puVar24[10] = 0;
    puVar24[7] = uVar41;
    puVar24[0xc] = 0;
    puVar24[1] = puVar26[-5];
    *(int *)(puVar24 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    puVar38[5] = puVar24 + 10;
    puVar24[8] = puVar36;
    puVar38[6] = puVar24 + 8;
    puVar24[0xb] = puVar36;
    uVar14 = param_1[9];
    puVar38 = param_1;
    uStack_cc70 = puVar24;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x1c];
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x8e:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x54];
    uVar31 = puVar48[-0x38];
    uVar33 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = uVar31;
    puVar38[9] = uVar33;
    puVar38[1] = puVar26[-9];
    *(int *)(puVar38 + 2) = (int)puVar26[-10];
    uVar41 = puVar26[-0xc];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[-7];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    FUN_109f6650c(puVar24,0x68);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[0xc] = 0;
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
    }
    uVar41 = puVar48[-0x70];
    puVar24[6] = 0;
    puVar24[5] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR_FUN_110b62ca0;
    puVar24[1] = 0;
    puVar24[9] = 0;
    puVar24[10] = 0;
    puVar24[7] = uVar41;
    puVar24[0xc] = 0;
    puVar24[1] = puVar26[-0xd];
    *(int *)(puVar24 + 2) = (int)puVar26[-0xe];
    uVar41 = puVar26[-0x10];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[-7];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    puVar38[5] = puVar24 + 10;
    puVar24[8] = puVar36;
    puVar38[6] = puVar24 + 8;
    puVar24[0xb] = puVar36;
    uVar14 = param_1[9];
    puVar38 = param_1;
    uStack_cc70 = puVar24;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x54];
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x8f:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = uVar31;
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[-7];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    FUN_109f6650c(puVar24,0x68);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[0xc] = 0;
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
    }
    uVar41 = puVar48[-0x54];
    puVar24[6] = 0;
    puVar24[5] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR_FUN_110b62ca0;
    puVar24[1] = 0;
    puVar24[9] = 0;
    puVar24[10] = 0;
    puVar24[7] = uVar41;
    puVar24[0xc] = 0;
    puVar24[1] = puVar26[-9];
    *(int *)(puVar24 + 2) = (int)puVar26[-10];
    uVar41 = puVar26[-0xc];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[-7];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    puVar38[5] = puVar24 + 10;
    puVar24[8] = puVar36;
    puVar38[6] = puVar24 + 8;
    puVar24[0xb] = puVar36;
    uVar14 = param_1[9];
    puVar38 = param_1;
    uStack_cc70 = puVar24;
    FUN_109f658b0(param_1,0x90);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x38];
    FUN_109eaba7c(puVar38,0,param_3,0);
    func_0x000109ea2118(uVar14,puVar38);
    break;
  case 0x90:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    FUN_109f6650c(puVar24,0x68);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[0xc] = 0;
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
    }
    puVar24[5] = 0;
    puVar24[6] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR_FUN_110b62ca0;
    puVar24[1] = 0;
    puVar24[9] = 0;
    puVar34 = puVar24 + 10;
    *puVar34 = 0;
    puVar24[7] = 0;
    puVar24[1] = puVar26[-1];
    *(int *)(puVar24 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    uVar14 = 1;
    goto code_r0x000109e9a388;
  case 0x91:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    FUN_109f6650c(puVar24,0x68);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[0xc] = 0;
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
    }
    puVar24[5] = 0;
    puVar24[6] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR_FUN_110b62ca0;
    puVar24[1] = 0;
    puVar24[9] = 0;
    puVar34 = puVar24 + 10;
    *puVar34 = 0;
    puVar24[7] = 0;
    puVar24[1] = puVar26[-1];
    *(int *)(puVar24 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    uVar14 = 0x100000000;
code_r0x000109e9a388:
    puVar24[0xc] = uVar14;
    puVar38[5] = puVar34;
    puVar24[8] = puVar36;
    puVar38[6] = puVar24 + 8;
    puVar24[0xb] = puVar36;
    uStack_cc70 = puVar24;
    break;
  case 0x92:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x120);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0x21] = 0;
      puVar38[0x20] = 0;
      puVar38[0x23] = 0;
      puVar38[0x22] = 0;
      puVar38[0x1d] = 0;
      puVar38[0x1c] = 0;
      puVar38[0x1f] = 0;
      puVar38[0x1e] = 0;
      puVar38[0x19] = 0;
      puVar38[0x18] = 0;
      puVar38[0x1b] = 0;
      puVar38[0x1a] = 0;
      puVar38[0x15] = 0;
      puVar38[0x14] = 0;
      puVar38[0x17] = 0;
      puVar38[0x16] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0x13] = 0;
      puVar38[0x12] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_DAT_110b62eb0;
    puVar38[1] = 0;
    puVar38[10] = 0;
    puVar38[9] = 0;
    puVar38[0xc] = 0;
    puVar38[0xb] = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    puVar38[0x10] = 0;
    puVar38[0xf] = 0;
    puVar38[0x12] = 0;
    puVar38[0x11] = 0;
    puVar38[0x14] = 0;
    puVar38[0x13] = 0;
    puVar38[0x16] = 0;
    puVar38[0x15] = 0;
    puVar38[0x18] = 0;
    puVar38[0x17] = 0;
    puVar38[0x1a] = 0;
    puVar38[0x19] = 0;
    puVar38[0x1c] = 0;
    puVar38[0x1b] = 0;
    puVar38[0x1e] = 0;
    puVar38[0x1d] = 0;
    puVar38[0x20] = 0;
    puVar38[0x1f] = 0;
    puVar38[0x23] = 0;
    puVar38[8] = 0;
    puVar38[7] = 0;
    puVar38[0x22] = 0;
    puVar38[0x21] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    puVar38[0x23] = *puVar48;
    uStack_cc70 = puVar38;
    break;
  case 0x93:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x120);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0x21] = 0;
      puVar38[0x20] = 0;
      puVar38[0x23] = 0;
      puVar38[0x22] = 0;
      puVar38[0x1d] = 0;
      puVar38[0x1c] = 0;
      puVar38[0x1f] = 0;
      puVar38[0x1e] = 0;
      puVar38[0x19] = 0;
      puVar38[0x18] = 0;
      puVar38[0x1b] = 0;
      puVar38[0x1a] = 0;
      puVar38[0x15] = 0;
      puVar38[0x14] = 0;
      puVar38[0x17] = 0;
      puVar38[0x16] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0x13] = 0;
      puVar38[0x12] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_DAT_110b62eb0;
    puVar38[1] = 0;
    puVar38[10] = 0;
    puVar38[9] = 0;
    puVar38[0xc] = 0;
    puVar38[0xb] = 0;
    puVar38[0xe] = 0;
    puVar38[0xd] = 0;
    puVar38[0x10] = 0;
    puVar38[0xf] = 0;
    puVar38[0x12] = 0;
    puVar38[0x11] = 0;
    puVar38[0x14] = 0;
    puVar38[0x13] = 0;
    puVar38[0x16] = 0;
    puVar38[0x15] = 0;
    puVar38[0x18] = 0;
    puVar38[0x17] = 0;
    puVar38[0x1a] = 0;
    puVar38[0x19] = 0;
    puVar38[0x1c] = 0;
    puVar38[0x1b] = 0;
    puVar38[0x1e] = 0;
    puVar38[0x1d] = 0;
    puVar38[0x20] = 0;
    puVar38[0x1f] = 0;
    puVar38[0x23] = 0;
    puVar13 = puVar38 + 7;
    puVar38[8] = 0;
    *puVar13 = 0;
    puVar38[0x22] = 0;
    puVar38[0x21] = 0;
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    puVar38[1] = puVar26[-1];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uVar31 = puVar48[-0xf];
    uVar41 = puVar48[-0x10];
    uVar40 = puVar48[-0xd];
    uVar33 = puVar48[-0xe];
    uVar57 = puVar48[-0xb];
    uVar55 = puVar48[-0xc];
    uVar59 = puVar48[-10];
    puVar38[0x1a] = puVar48[-9];
    puVar38[0x19] = uVar59;
    puVar38[0x18] = uVar57;
    puVar38[0x17] = uVar55;
    puVar38[0x16] = uVar40;
    puVar38[0x15] = uVar33;
    puVar38[0x14] = uVar31;
    puVar38[0x13] = uVar41;
    uVar31 = puVar48[-0x17];
    uVar41 = puVar48[-0x18];
    uVar40 = puVar48[-0x15];
    uVar33 = puVar48[-0x16];
    uVar57 = puVar48[-0x13];
    uVar55 = puVar48[-0x14];
    uVar59 = puVar48[-0x12];
    puVar38[0x12] = puVar48[-0x11];
    puVar38[0x11] = uVar59;
    puVar38[0x10] = uVar57;
    puVar38[0xf] = uVar55;
    puVar38[0xe] = uVar40;
    puVar38[0xd] = uVar33;
    puVar38[0xc] = uVar31;
    puVar38[0xb] = uVar41;
    uVar31 = puVar48[-0x1b];
    uVar41 = puVar48[-0x1c];
    uVar33 = puVar48[-0x1a];
    puVar38[10] = puVar48[-0x19];
    puVar38[9] = uVar33;
    puVar38[8] = uVar31;
    *puVar13 = uVar41;
    uVar31 = puVar48[-7];
    uVar41 = puVar48[-8];
    uVar40 = puVar48[-5];
    uVar33 = puVar48[-6];
    uVar57 = puVar48[-3];
    uVar55 = puVar48[-4];
    uVar59 = puVar48[-2];
    puVar38[0x22] = puVar48[-1];
    puVar38[0x21] = uVar59;
    puVar38[0x20] = uVar57;
    puVar38[0x1f] = uVar55;
    puVar38[0x1e] = uVar40;
    puVar38[0x1d] = uVar33;
    puVar38[0x1c] = uVar31;
    puVar38[0x1b] = uVar41;
    param_3 = param_1;
    uStack_cc70 = puVar38;
    func_0x000109e25d60();
    if ((int)puVar13 == 0) goto code_r0x000109e9b79c;
    uVar41 = *puVar48;
    uStack_cc70[0x23] = uVar41;
    lVar49 = *(long *)(uVar41 + 0x48);
    if ((lVar49 != 0) && (*(char *)(lVar49 + 0x68) == '\x01')) {
      *(undefined8 **)(lVar49 + 0x40) = uStack_cc70 + 7;
    }
    break;
  case 0x94:
    uStack_cc68 = puVar48[-0x1b];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    break;
  case 0x96:
    uStack_cc68 = puVar48[-0x37];
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
    puStack_cc58 = (undefined8 *)puVar48[-0x35];
    uStack_cc60 = puVar48[-0x36];
    uStack_cc48 = puVar48[-0x33];
    uStack_cc50 = puVar48[-0x34];
    puStack_cc38 = (undefined8 *)puVar48[-0x31];
    uStack_cc40 = puVar48[-0x32];
    uStack_cc28 = puVar48[-0x2f];
    uStack_cc30 = puVar48[-0x30];
    uStack_cc18 = puVar48[-0x2d];
    uStack_cc20 = puVar48[-0x2e];
    uStack_cc08 = puVar48[-0x2b];
    uStack_cc10 = puVar48[-0x2c];
    uStack_cbf8 = puVar48[-0x29];
    uStack_cc00 = puVar48[-0x2a];
    uStack_cbe8 = puVar48[-0x27];
    uStack_cbf0 = puVar48[-0x28];
    auStack_cbd8[0] = puVar48[-0x25];
    uStack_cbe0 = puVar48[-0x26];
    auStack_cbd8[2] = puVar48[-0x23];
    auStack_cbd8[1] = puVar48[-0x24];
    uStack_cbb8 = puVar48[-0x21];
    uStack_cbc0 = puVar48[-0x22];
    uStack_cba8 = puVar48[-0x1f];
    puStack_cbb0 = (undefined8 *)puVar48[-0x20];
    uStack_cb98 = puVar48[-0x1d];
    uStack_cba0 = puVar48[-0x1e];
    puVar13 = &uStack_cc70;
    param_3 = param_1;
    FUN_109e2470c(puVar13,puVar26,param_1,puVar48,1,0);
    goto code_r0x000109e9b798;
  case 0x97:
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    bVar16 = *(byte *)((long)param_1 + 0xe4);
    if ((*(byte *)((long)param_1 + 0x30f) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      iVar9 = 0;
      if (uVar17 < 0x96) {
        iVar28 = 0;
      }
      else {
        iVar28 = 0;
        if ((bVar16 & 1) == 0) goto code_r0x000109e98178;
      }
code_r0x000109e9c0d4:
      if (iVar28 == 0 && iVar9 == 0) {
        if (*(char *)((long)param_1 + 0x395) == '\x01') {
          bVar16 = *(byte *)((long)param_1 + 0xe4);
code_r0x000109e9c130:
          uVar31 = *puVar48;
          uVar41 = uVar31;
          FUN_109e9da50(uVar31,&UNK_10f61103e,bVar16);
          if ((int)uVar41 == 0) {
            bVar16 = 4;
          }
          else {
            uVar41 = uVar31;
            FUN_109e9da50(uVar31,&UNK_10f611048,bVar16);
            if ((int)uVar41 == 0) {
              bVar16 = 8;
            }
            else {
              uVar41 = uVar31;
              FUN_109e9da50(uVar31,&UNK_10f611056,bVar16);
              if ((int)uVar41 == 0) {
                bVar16 = 0xc;
              }
              else {
                FUN_109e9da50(uVar31,&UNK_10f611061,bVar16);
                if ((uVar31 & 1) != 0) goto code_r0x000109e9c194;
                bVar16 = 0x10;
              }
            }
          }
          puVar38 = (undefined8 *)((ulong)uStack_cc70 | 0x1000000);
          uStack_cc68._0_5_ = CONCAT14(uStack_cc68._4_1_ & 0xe3 | bVar16,(int)uStack_cc68);
          uStack_cc70 = puVar38;
          if (*(char *)((long)param_1 + 0x396) == '\x01') {
            FUN_109e9f044(puVar26,param_1,&UNK_10f611071);
            puVar38 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff);
            if ((int)uStack_cc70 == 0) {
              iVar9 = 0;
              iVar28 = 0;
              if (uStack_cc70._4_4_ == 0 && (int)uStack_cc68 == 0) goto code_r0x000109e9ca30;
            }
          }
          iVar9 = (int)puVar38;
          if (*(char *)(param_1 + 0x60) == '\x01') {
            FUN_109e9f044(puVar26,param_1,&UNK_10f6110a9);
            iVar9 = (int)uStack_cc70;
          }
          if (iVar9 != 0) goto code_r0x000109e9cc98;
          iVar9 = (int)uStack_cc68;
          iVar28 = uStack_cc70._4_4_;
        }
        else {
          bVar16 = *(byte *)((long)param_1 + 0xe4);
          if ((*(byte *)((long)param_1 + 0x2ff) & 1) != 0) goto code_r0x000109e9c130;
          uVar17 = *(uint *)((long)param_1 + 0xec);
          if (uVar17 == 0) {
            uVar17 = *(uint *)(param_1 + 0x1d);
          }
          if (0x1a3 < uVar17) {
            iVar9 = 0;
            iVar28 = 0;
            bVar16 = 0;
            if ((*(byte *)((long)param_1 + 0xe4) & 1) != 0) goto code_r0x000109e9ca30;
            goto code_r0x000109e9c130;
          }
code_r0x000109e9c194:
          iVar9 = 0;
          iVar28 = 0;
        }
      }
code_r0x000109e9ca30:
      if (iVar28 == 0 && iVar9 == 0) {
        cVar1 = *(char *)((long)param_1 + 0xe4);
        if ((*(byte *)((long)param_1 + 0x359) & 1) == 0) {
          uVar17 = *(uint *)((long)param_1 + 0xec);
          if (uVar17 == 0) {
            uVar17 = *(uint *)(param_1 + 0x1d);
          }
          uVar19 = 299;
          if (cVar1 == '\0') {
            uVar19 = 0x8b;
          }
          if (uVar19 < uVar17) goto code_r0x000109e9ca74;
code_r0x000109e9cb08:
          iVar28 = 0;
          iVar9 = 0;
        }
        else {
code_r0x000109e9ca74:
          uVar31 = *puVar48;
          uVar41 = uVar31;
          FUN_109e9da50(uVar31,&DAT_10f609c04,cVar1);
          if ((int)uVar41 == 0) {
            uVar41 = 0x2000000;
          }
          else {
            uVar41 = uVar31;
            FUN_109e9da50(uVar31,"shared",cVar1);
            if ((int)uVar41 == 0) {
              uVar41 = 0x8000000;
            }
            else {
              uVar41 = uVar31;
              FUN_109e9da50(uVar31,&DAT_10f609c0b,cVar1);
              if ((int)uVar41 == 0) {
                uVar41 = 0x4000000;
              }
              else {
                uVar41 = uVar31;
                FUN_109e9da50(uVar31,&UNK_10f609c12,cVar1);
                if ((int)uVar41 == 0) {
                  uVar41 = 0x20000000;
                }
                else {
                  uVar41 = uVar31;
                  FUN_109e9da50(uVar31,&UNK_10f609c1f,cVar1);
                  if ((int)uVar41 == 0) {
                    uVar41 = 0x40000000;
                  }
                  else {
                    FUN_109e9da50(uVar31,&DAT_10f52a32a,cVar1);
                    if ((uVar31 & 1) != 0) goto code_r0x000109e9cb08;
                    uVar41 = 0x10000000;
                  }
                }
              }
            }
          }
          puVar38 = (undefined8 *)((ulong)uStack_cc70 | uVar41);
          uStack_cc70 = puVar38;
          if (*(char *)((long)param_1 + 0x35a) == '\x01') {
            FUN_109e9f044(puVar26,param_1,&UNK_10f6110e1);
            puVar38 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff);
          }
          if ((int)puVar38 != 0) goto code_r0x000109e9cc98;
          iVar28 = uStack_cc70._4_4_;
          iVar9 = (int)uStack_cc68;
        }
      }
      if (iVar28 == 0 && iVar9 == 0) {
        uVar41 = *puVar48;
        cVar1 = *(char *)((long)param_1 + 0xe4);
        puVar46 = (undefined4 *)&UNK_110b60680;
        lVar49 = 7;
        do {
          uVar31 = uVar41;
          FUN_109e9da50(uVar41,*(undefined8 *)(puVar46 + -2),cVar1);
          if ((uVar31 & 1) == 0) {
            uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x80000000);
            uStack_cbf8 = CONCAT44(uStack_cbf8._4_4_,*puVar46);
            if (((*(byte *)((long)param_1 + 0x377) & 1) == 0) &&
               ((*(byte *)((long)param_1 + 0x3bb) & 1) == 0)) {
              uVar17 = *(uint *)((long)param_1 + 0xec);
              uVar19 = uVar17;
              if (uVar17 == 0) {
                uVar19 = *(uint *)(param_1 + 0x1d);
              }
              uVar29 = 0x13f;
              if (cVar1 == '\0') {
                uVar29 = 0x95;
              }
              if ((((uVar19 <= uVar29) && ((*(byte *)((long)param_1 + 0x34b) & 1) == 0)) &&
                  ((*(byte *)((long)param_1 + 0x389) & 1) == 0)) &&
                 ((*(byte *)((long)param_1 + 0x3dd) & 1) == 0)) {
                if (uVar17 == 0) {
                  uVar17 = *(uint *)(param_1 + 0x1d);
                }
                uVar19 = 0x13f;
                if (cVar1 == '\0') {
                  uVar19 = 399;
                }
                if (uVar17 <= uVar19) {
                  FUN_109e9ed98(puVar26,param_1,&UNK_10f611179);
                }
              }
            }
            break;
          }
          puVar46 = puVar46 + 4;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
      }
    }
    else {
code_r0x000109e98178:
      uVar31 = *puVar48;
      uVar41 = uVar31;
      FUN_109e9da50(uVar31,&DAT_10f491df5,bVar16);
      if ((int)uVar41 == 0) {
        uStack_cc70 = (undefined8 *)0x10000;
      }
      else {
        FUN_109e9da50(uVar31,&UNK_10f6079ff,bVar16);
        if ((uVar31 & 1) != 0) {
          iVar9 = 0;
          iVar28 = 0;
          goto code_r0x000109e9c0d4;
        }
        uStack_cc70 = (undefined8 *)0x20000;
      }
      if (*(char *)(param_1 + 0x62) == '\x01') {
        FUN_109e9f044(puVar26,param_1,&UNK_10f611000);
        if ((int)uStack_cc70 == 0) {
          iVar9 = (int)uStack_cc68;
          iVar28 = uStack_cc70._4_4_;
          goto code_r0x000109e9c0d4;
        }
      }
    }
code_r0x000109e9cc98:
    bVar16 = *(byte *)((long)param_1 + 0x32f);
    iVar9 = (int)uStack_cc68;
    iVar28 = uStack_cc70._4_4_;
    if (((bVar16 & 1) == 0) && ((*(byte *)((long)param_1 + 0x3cd) & 1) == 0)) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      iVar30 = (int)uStack_cc70;
      if ((uVar19 < uVar17) && ((int)uStack_cc70 == 0)) {
code_r0x000109e9ce84:
        if (uStack_cc70._4_4_ == 0 && (int)uStack_cc68 == 0) {
          cVar1 = *(char *)((long)param_1 + 0xe4);
          uVar19 = *(uint *)((long)param_1 + 0xec);
          uVar17 = 0x135;
          if (cVar1 == '\0') {
            uVar17 = 0x1a3;
          }
          pbVar45 = &UNK_110b60701;
          lVar49 = 0x2c;
          do {
            uVar29 = uVar19;
            if (uVar19 == 0) {
              uVar29 = *(uint *)(param_1 + 0x1d);
            }
            uVar6 = *(int *)(pbVar45 + -5) - 1;
            if (cVar1 == '\0') {
              uVar6 = 0x81;
            }
            if ((uVar6 < uVar29) ||
               ((*(char *)((long)param_1 + 0x3f5) == '\x01' && (pbVar45[-1] == 1)))) {
              uVar41 = *puVar48;
              FUN_109e9da50(uVar41,*(undefined8 *)(pbVar45 + -0x19),cVar1);
              if ((uVar41 & 1) == 0) {
                if ((*pbVar45 & 1) == 0) {
                  if ((bVar16 & 1) == 0) {
                    uVar29 = uVar19;
                    if (uVar19 == 0) {
                      uVar29 = *(uint *)(param_1 + 0x1d);
                    }
                    if (uVar29 <= uVar17) goto code_r0x000109e9cf68;
                  }
                }
                else if (*(char *)((long)param_1 + 0x3cd) != '\x01') goto code_r0x000109e9cf68;
                uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x4000000000);
                uStack_cba8 = CONCAT44(uStack_cba8._4_4_,*(undefined4 *)(pbVar45 + -0x11));
                uStack_cba0 = CONCAT44(uStack_cba0._4_4_,*(undefined4 *)(pbVar45 + -0xd));
                goto code_r0x000109e9ccb4;
              }
            }
code_r0x000109e9cf68:
            pbVar45 = pbVar45 + 0x20;
            lVar49 = lVar49 + -1;
          } while (lVar49 != 0);
          iVar30 = 0;
          iVar28 = 0;
        }
        else {
          iVar30 = 0;
        }
      }
      if (((iVar30 == 0) && (iVar28 == 0)) && (iVar9 == 0)) {
        uVar31 = *puVar48;
        uVar37 = *(undefined1 *)((long)param_1 + 0xe4);
        uVar41 = uVar31;
        FUN_109e9da50(uVar31,&UNK_10f609c5f,uVar37);
        if ((uVar41 & 1) == 0) {
          if (*(int *)(param_1 + 0x1f) != 4) {
            FUN_109e9ed98(puVar26,param_1,&UNK_10f6112d3);
            uVar37 = *(undefined1 *)((long)param_1 + 0xe4);
          }
          uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x2000000000);
          uVar31 = *puVar48;
        }
        FUN_109e9da50(uVar31,&UNK_10f609d25,uVar37);
        if ((uVar31 & 1) == 0) {
          if (*(int *)(param_1 + 0x1f) != 4) {
            FUN_109e9ed98(puVar26,param_1,&UNK_10f611318);
          }
          if (*(char *)((long)param_1 + 0x3e9) == '\x01') {
            uStack_cc68 = uStack_cc68 | 1;
          }
          else {
            FUN_109e9ed98(puVar26,param_1,&UNK_10f611357);
          }
        }
        uVar41 = *puVar48;
        FUN_109e9da50(uVar41,&UNK_10f609d6e,*(undefined1 *)((long)param_1 + 0xe4));
        if ((uVar41 & 1) == 0) {
          if (*(int *)(param_1 + 0x1f) != 4) {
            FUN_109e9ed98(puVar26,param_1,&UNK_10f6113c3);
          }
          if (((*(byte *)((long)param_1 + 0x31b) & 1) == 0) &&
             (*(char *)((long)param_1 + 0x3e9) != '\x01')) {
            FUN_109e9ed98(puVar26,param_1,&UNK_10f611407);
          }
          else {
            uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x800000000000000);
          }
        }
        if (((uStack_cc70._7_1_ >> 3 & 1) != 0) && ((uStack_cc68 & 1) != 0)) {
          FUN_109e9ed98(puVar26,param_1,&UNK_10f611472);
        }
      }
    }
    else if ((int)uStack_cc70 == 0) goto code_r0x000109e9ce84;
code_r0x000109e9ccb4:
    uVar40 = *puVar48;
    param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe4);
    uVar41 = uVar40;
    FUN_109e9da50(uVar40,&UNK_10f609d82,param_3);
    uStack_cdf8 = (uint)uVar41 ^ 1;
    uVar31 = uVar40;
    FUN_109e9da50(uVar40,&UNK_10f609d9a,param_3);
    uStack_ce00 = (uint)uVar31 ^ 1;
    uVar33 = uVar40;
    FUN_109e9da50(uVar40,&UNK_10f609db4,param_3);
    FUN_109e9da50(uVar40,&UNK_10f609dcd);
    if (uStack_ce00 + uStack_cdf8 + ((uint)uVar33 ^ 1) == 0 && (int)uVar40 == 1) {
code_r0x000109e9cd6c:
      uVar55 = 0;
      if ((uint)uVar41 == 0) {
        uVar55 = 0x1000000000000000;
      }
      uVar41 = 0;
      if ((uint)uVar31 == 0) {
        uVar41 = 0x2000000000000000;
      }
      uVar31 = 0;
      if ((uint)uVar33 == 0) {
        uVar31 = 0x4000000000000000;
      }
      uVar33 = 0;
      if ((int)uVar40 == 0) {
        uVar33 = 0x8000000000000000;
      }
      uStack_cc70 = (undefined8 *)
                    (uVar41 | uVar55 | uVar31 | uVar33 | (ulong)uStack_cc70 & 0xfffffffffffffff);
    }
    else if (*(int *)(param_1 + 0x1f) == 4) {
      if (((*(byte *)((long)param_1 + 0x313) & 1) != 0) ||
         ((*(byte *)((long)param_1 + 0x3f3) & 1) != 0)) goto code_r0x000109e9cd6c;
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(puVar26);
    }
    else {
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(puVar26);
    }
    bVar8 = (int)uStack_cc70 == 0;
    if (bVar8) {
      uStack_ce00._0_1_ = (byte)uStack_cc68;
      iVar28 = (int)uStack_cc68;
      iVar9 = uStack_cc70._4_4_;
      if (uStack_cc70._4_4_ == 0 && (int)uStack_cc68 == 0) {
        lVar49 = 0;
        uVar41 = *puVar48;
        bVar16 = *(byte *)((long)param_1 + 0xe4);
        bVar8 = true;
        do {
          bVar27 = bVar8;
          param_3 = (undefined8 *)(ulong)(uint)bVar16;
          uVar31 = uVar41;
          FUN_109e9da50(uVar41,(&PTR_DAT_110b60c68)[lVar49 * 2]);
          if ((uVar31 & 1) == 0) {
            uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x80000000);
            uStack_cbf8 = CONCAT44(uStack_cbf8._4_4_,*(undefined4 *)(&UNK_110b60c70 + lVar49 * 0x10)
                                  );
            if ((((*(byte *)((long)param_1 + 0x34b) & 1) != 0) ||
                ((*(byte *)((long)param_1 + 0x389) & 1) != 0)) ||
               ((*(byte *)((long)param_1 + 0x3dd) & 1) != 0)) goto code_r0x000109e9d880;
            uVar17 = *(uint *)((long)param_1 + 0xec);
            if (uVar17 == 0) {
              uVar17 = *(uint *)(param_1 + 0x1d);
            }
            uVar19 = 0x13f;
            if (bVar16 == 0) {
              uVar19 = 399;
            }
            if (uVar19 < uVar17) goto code_r0x000109e9d880;
            param_3 = (undefined8 *)&UNK_10f611559;
            FUN_109e9ed98(puVar26,param_1);
            bVar8 = (int)uStack_cc70 != 0;
            if (bVar8) goto LAB_109e9bef8;
            uStack_ce00._0_1_ = (byte)uStack_cc68;
            iVar28 = (int)uStack_cc68;
            iVar9 = (int)((ulong)uStack_cc70 >> 0x20);
            goto code_r0x000109e9d04c;
          }
          lVar49 = 1;
          bVar8 = false;
        } while (bVar27);
        iVar28 = 0;
        iVar9 = 0;
      }
code_r0x000109e9d04c:
      if (iVar9 == 0 && iVar28 == 0) {
        uVar41 = *puVar48;
        bVar16 = *(byte *)((long)param_1 + 0xe4);
        puVar46 = (undefined4 *)&UNK_110b60c90;
        lVar49 = 3;
        do {
          param_3 = (undefined8 *)(ulong)(uint)bVar16;
          uVar31 = uVar41;
          FUN_109e9da50(uVar41,*(undefined8 *)(puVar46 + -2));
          if ((uVar31 & 1) == 0) {
            puVar24 = (undefined8 *)((ulong)uStack_cc70 | 0x20000000000000);
            uStack_cbc0 = CONCAT44(uStack_cbc0._4_4_,*puVar46);
            puVar38 = uStack_cc70;
            if ((((*(byte *)((long)param_1 + 0x34b) & 1) == 0) &&
                ((*(byte *)((long)param_1 + 0x389) & 1) == 0)) &&
               ((*(byte *)((long)param_1 + 0x3dd) & 1) == 0)) {
              uVar17 = *(uint *)((long)param_1 + 0xec);
              if (uVar17 == 0) {
                uVar17 = *(uint *)(param_1 + 0x1d);
              }
              uVar19 = 0x13f;
              if (bVar16 == 0) {
                uVar19 = 399;
              }
              if (uVar17 <= uVar19) {
                param_3 = (undefined8 *)0x0;
                uStack_cc70 = puVar24;
                FUN_109e9ed98(puVar26,param_1);
                puVar38 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff);
                puVar24 = uStack_cc70;
              }
            }
            uStack_cc70 = puVar24;
            if ((int)puVar38 != 0) goto code_r0x000109e9d880;
            iVar9 = (int)((ulong)uStack_cc70 >> 0x20);
            uStack_ce00._0_1_ = (byte)uStack_cc68;
            iVar28 = (int)uStack_cc68;
            goto code_r0x000109e9d0a0;
          }
          puVar46 = puVar46 + 4;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
        puVar38 = (undefined8 *)0x0;
        iVar9 = 0;
        iVar28 = 0;
      }
      else {
        puVar38 = (undefined8 *)0x0;
      }
code_r0x000109e9d0a0:
      if (iVar9 == 0 && iVar28 == 0) {
        uVar31 = *puVar48;
        bVar16 = *(byte *)((long)param_1 + 0xe4);
        param_3 = (undefined8 *)(ulong)bVar16;
        uVar41 = uVar31;
        puVar38 = param_3;
        FUN_109e9da50(uVar31,&UNK_10f61162e);
        if ((int)uVar41 == 0) {
          uVar18 = 0x900;
          param_3 = puVar38;
        }
        else {
          FUN_109e9da50(uVar31,&UNK_10f611631);
          if ((uVar31 & 1) != 0) {
            puVar38 = (undefined8 *)0x0;
            iVar9 = 0;
            iVar28 = 0;
            goto code_r0x000109e9d364;
          }
          uVar18 = 0x901;
        }
        puVar24 = (undefined8 *)((ulong)uStack_cc70 | 0x40000000000000);
        uStack_cbc0 = CONCAT44(uVar18,(undefined4)uStack_cbc0);
        puVar38 = uStack_cc70;
        if ((((*(byte *)((long)param_1 + 0x34b) & 1) == 0) &&
            ((*(byte *)((long)param_1 + 0x389) & 1) == 0)) &&
           ((*(byte *)((long)param_1 + 0x3dd) & 1) == 0)) {
          uVar17 = *(uint *)((long)param_1 + 0xec);
          if (uVar17 == 0) {
            uVar17 = *(uint *)(param_1 + 0x1d);
          }
          uVar19 = 0x13f;
          if (bVar16 == 0) {
            uVar19 = 399;
          }
          if (uVar17 <= uVar19) {
            param_3 = (undefined8 *)&UNK_10f611635;
            uStack_cc70 = puVar24;
            FUN_109e9ed98(puVar26,param_1);
            puVar38 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff);
            puVar24 = uStack_cc70;
          }
        }
        uStack_cc70 = puVar24;
        if ((int)puVar38 == 0) {
          iVar9 = (int)((ulong)uStack_cc70 >> 0x20);
          uStack_ce00._0_1_ = (byte)uStack_cc68;
          iVar28 = (int)uStack_cc68;
          goto code_r0x000109e9d364;
        }
      }
      else {
code_r0x000109e9d364:
        if (iVar9 == 0 && iVar28 == 0) {
          uVar41 = *puVar48;
          bVar16 = *(byte *)((long)param_1 + 0xe4);
          param_3 = (undefined8 *)(ulong)bVar16;
          FUN_109e9da50(uVar41,&UNK_10f609d01);
          if ((uVar41 & 1) == 0) {
            puVar24 = (undefined8 *)((ulong)uStack_cc70 | 0x80000000000000);
            uStack_cbb8 = CONCAT71(uStack_cbb8._1_7_,1);
            puVar38 = uStack_cc70;
            if ((((*(byte *)((long)param_1 + 0x34b) & 1) == 0) &&
                ((*(byte *)((long)param_1 + 0x389) & 1) == 0)) &&
               ((*(byte *)((long)param_1 + 0x3dd) & 1) == 0)) {
              uVar17 = *(uint *)((long)param_1 + 0xec);
              if (uVar17 == 0) {
                uVar17 = *(uint *)(param_1 + 0x1d);
              }
              uVar19 = 0x13f;
              if (bVar16 == 0) {
                uVar19 = 399;
              }
              if (uVar17 <= uVar19) {
                param_3 = (undefined8 *)&UNK_10f61167b;
                uStack_cc70 = puVar24;
                FUN_109e9ed98(puVar26,param_1);
                puVar38 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff);
                puVar24 = uStack_cc70;
              }
            }
            uStack_cc70 = puVar24;
            if ((int)puVar38 != 0) goto code_r0x000109e9d880;
            iVar9 = (int)((ulong)uStack_cc70 >> 0x20);
            uStack_ce00._0_1_ = (byte)uStack_cc68;
            iVar28 = (int)uStack_cc68;
          }
          else {
            puVar38 = (undefined8 *)0x0;
            iVar9 = 0;
            iVar28 = 0;
          }
        }
        if (iVar9 == 0 && iVar28 == 0) {
          uVar41 = *puVar48;
          bVar16 = *(byte *)((long)param_1 + 0xe4);
          puVar47 = (uint *)&UNK_110b60cc0;
          lVar49 = 0x10;
          do {
            param_3 = (undefined8 *)(ulong)bVar16;
            uVar31 = uVar41;
            FUN_109e9da50(uVar41,*(undefined8 *)(puVar47 + -2));
            if ((uVar31 & 1) == 0) {
              puVar24 = (undefined8 *)((ulong)uStack_cc70 | 0x400000000000000);
              *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | *puVar47;
              puVar38 = uStack_cc70;
              if ((*(byte *)((long)param_1 + 0x35f) & 1) == 0) {
                uVar17 = *(uint *)((long)param_1 + 0xec);
                if (uVar17 == 0) {
                  uVar17 = *(uint *)(param_1 + 0x1d);
                }
                if ((uVar17 < 0x140) || ((bVar16 & 1) == 0)) {
                  param_3 = (undefined8 *)&UNK_10f611827;
                  uStack_cc70 = puVar24;
                  FUN_109e9ed98(puVar26,param_1);
                  puVar38 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff);
                  puVar24 = uStack_cc70;
                }
              }
              uStack_cc70 = puVar24;
              if ((int)puVar38 == 0) {
                if (uStack_cc70._4_4_ == 0 && (int)uStack_cc68 == 0) {
                  uStack_ce00._0_1_ = 0;
                  iVar9 = 0;
                  iVar28 = 0;
                  goto code_r0x000109e9d52c;
                }
              }
              if (*(int *)(param_1 + 0x1f) != 4) {
                param_3 = (undefined8 *)0x0;
                FUN_109e9ed98(puVar26,param_1);
                puVar38 = (undefined8 *)((ulong)uStack_cc70 & 0xffffffff);
              }
              if ((int)puVar38 != 0) goto code_r0x000109e9d880;
              iVar9 = (int)((ulong)uStack_cc70 >> 0x20);
              uStack_ce00._0_1_ = (byte)uStack_cc68;
              iVar28 = (int)uStack_cc68;
              goto code_r0x000109e9d52c;
            }
            puVar47 = puVar47 + 4;
            lVar49 = lVar49 + -1;
          } while (lVar49 != 0);
          puVar38 = (undefined8 *)0x0;
          iVar9 = 0;
          iVar28 = 0;
        }
code_r0x000109e9d52c:
        if (iVar9 == 0 && iVar28 == 0) {
          uVar41 = *puVar48;
          param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe4);
          FUN_109e9da50(uVar41,&UNK_10f609c4b);
          if ((int)uVar41 == 0) {
            puVar38 = uStack_cc70;
            uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x1000000000);
          }
          else if ((int)puVar38 == 0) {
            iVar9 = 0;
            iVar28 = 0;
            goto code_r0x000109e9d5a0;
          }
          iVar9 = (int)puVar38;
          if ((*(byte *)((long)param_1 + 0x2fd) & 1) == 0) {
            param_3 = (undefined8 *)&UNK_10f6118bf;
            FUN_109e9ed98(puVar26,param_1);
            iVar9 = (int)uStack_cc70;
          }
          if (iVar9 != 0) goto code_r0x000109e9d880;
          uStack_ce00._0_1_ = (byte)uStack_cc68;
          iVar9 = uStack_cc70._4_4_;
          iVar28 = (int)uStack_cc68;
        }
code_r0x000109e9d5a0:
        bVar16 = (byte)uStack_ce00;
        if (iVar9 == 0 && iVar28 == 0) {
          uVar31 = *puVar48;
          bVar2 = *(byte *)((long)param_1 + 0xe4);
          puVar38 = (undefined8 *)(ulong)bVar2;
          uVar41 = uVar31;
          FUN_109e9da50(uVar31,&UNK_10f609d34,puVar38);
          if ((uVar41 & 1) == 0) {
            uStack_ce00._0_1_ = (byte)uStack_ce00 | 2;
            uStack_cc68 = CONCAT71(uStack_cc68._1_7_,bVar16) | 2;
            uVar31 = *puVar48;
          }
          bVar16 = (byte)uStack_ce00;
          param_3 = puVar38;
          FUN_109e9da50(uVar31,&UNK_10f609d54);
          if ((uVar31 & 1) == 0) {
            uStack_ce00._0_1_ = (byte)uStack_ce00 | 8;
            uStack_cc68 = CONCAT71(uStack_cc68._1_7_,bVar16) | 8;
          }
          bVar16 = (byte)uStack_ce00;
          if (((*(byte *)((long)param_1 + 0x32f) & 1) == 0) &&
             ((*(byte *)((long)param_1 + 0x3cd) & 1) == 0)) {
            uVar17 = *(uint *)((long)param_1 + 0xec);
            if (uVar17 == 0) {
              uVar17 = *(uint *)(param_1 + 0x1d);
            }
            uVar19 = 0x135;
            if (bVar2 == 0) {
              uVar19 = 0x1a3;
            }
            if (uVar19 < uVar17) goto code_r0x000109e9d64c;
          }
          else {
code_r0x000109e9d64c:
            uVar31 = *puVar48;
            uVar41 = uVar31;
            FUN_109e9da50(uVar31,&UNK_10f609d45,puVar38);
            if ((uVar41 & 1) == 0) {
              uStack_ce00._0_1_ = (byte)uStack_ce00 | 4;
              uStack_cc68 = CONCAT71(uStack_cc68._1_7_,bVar16) | 4;
              uVar31 = *puVar48;
            }
            FUN_109e9da50(uVar31,&UNK_10f609d62);
            param_3 = puVar38;
            if ((uVar31 & 1) == 0) {
              uStack_cc68 = CONCAT71(uStack_cc68._1_7_,(byte)uStack_ce00) | 0x10;
            }
          }
          if ((int)uStack_cc68 == 0) {
            uStack_ce00._0_1_ = 0;
            iVar9 = 0;
            iVar28 = 0;
          }
          else {
            if ((*(byte *)((long)param_1 + 0x2f7) & 1) != 0) goto code_r0x000109e9d880;
            param_3 = (undefined8 *)0x0;
            FUN_109e9ed98(puVar26,param_1);
            bVar8 = (int)uStack_cc70 != 0;
            if (bVar8) break;
            uStack_ce00._0_1_ = (byte)uStack_cc68;
            iVar9 = uStack_cc70._4_4_;
            iVar28 = (int)uStack_cc68;
          }
        }
        if (iVar9 == 0 && iVar28 == 0) {
          if (*(char *)((long)param_1 + 0x3c7) == '\x01') {
            uVar41 = *puVar48;
            param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe4);
            FUN_109e9da50(uVar41,&UNK_10f611935);
            if ((uVar41 & 1) == 0) {
              uStack_cc68 = CONCAT71(uStack_cc68._1_7_,(byte)uStack_ce00) | 0x20;
              uStack_ce00._0_1_ = (byte)uStack_ce00 | 0x20;
              iVar28 = (int)uStack_cc68;
              goto code_r0x000109e9d778;
            }
          }
          iVar28 = 0;
        }
code_r0x000109e9d778:
        if (iVar9 == 0 && iVar28 == 0) {
          uVar31 = *puVar48;
          bVar16 = *(byte *)((long)param_1 + 0xe4);
          param_3 = (undefined8 *)(ulong)bVar16;
          uVar41 = uVar31;
          puVar38 = param_3;
          FUN_109e9da50(uVar31,&UNK_10f611941);
          if ((int)uVar41 == 0) {
            uVar18 = 1;
            param_3 = puVar38;
          }
          else {
            FUN_109e9da50(uVar31,&UNK_10f61195a);
            if ((uVar31 & 1) != 0) goto code_r0x000109e9d880;
            uVar18 = 2;
          }
          uStack_cc68 = CONCAT71(uStack_cc68._1_7_,(byte)uStack_ce00) | 0x40;
          uStack_cba8 = CONCAT44(uVar18,(undefined4)uStack_cba8);
          if ((int)uStack_cc68 != 0) {
            if ((*(byte *)((long)param_1 + 0x2fb) & 1) == 0) {
              uVar17 = *(uint *)((long)param_1 + 0xec);
              if (uVar17 == 0) {
                uVar17 = *(uint *)(param_1 + 0x1d);
              }
              uVar19 = 0x135;
              if (bVar16 == 0) {
                uVar19 = 0x1ad;
              }
              if (uVar17 <= uVar19) {
                param_3 = (undefined8 *)0x0;
                FUN_109e9ed98(puVar26);
              }
            }
            if ((*(byte *)((long)param_1 + 0x3f1) & 1) == 0) {
              param_3 = (undefined8 *)&UNK_10f61199d;
              FUN_109e9ed98(puVar26);
            }
            if (*(char *)((long)param_1 + 0x3f2) == '\x01') {
              param_3 = (undefined8 *)&UNK_10f6119d3;
              FUN_109e9f044(puVar26,param_1);
            }
          }
        }
      }
code_r0x000109e9d880:
      bVar8 = (int)uStack_cc70 == 0;
      if (bVar8) {
        if (uStack_cc70._4_4_ == 0 && (int)uStack_cc68 == 0) {
          if (*(int *)(param_1 + 0x1f) != 4) {
            uVar41 = *puVar48;
            param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe4);
            FUN_109e9da50(uVar41,&UNK_10f611a0c);
            if ((uVar41 & 1) == 0) {
              uStack_cc68 = CONCAT71(uStack_cc68._1_7_,0x80);
              if ((int)uStack_cc68 != 0) {
                if ((*(byte *)((long)param_1 + 0x3fd) & 1) == 0) {
                  param_3 = (undefined8 *)0x0;
                  FUN_109e9ed98(puVar26,param_1);
                  iVar9 = (int)uStack_cc70;
                  if ((int)uStack_cc70 == 0) {
                    if (uStack_cc70._4_4_ == 0 && (int)uStack_cc68 == 0) goto code_r0x000109e9d8f4;
                    goto code_r0x000109e9d8e4;
                  }
                }
                else {
code_r0x000109e9d8e4:
                  iVar9 = 0;
                }
                if (*(char *)((long)param_1 + 0x3fe) == '\x01') {
                  param_3 = (undefined8 *)0x0;
                  FUN_109e9f044(puVar26,param_1);
                  iVar9 = (int)uStack_cc70;
                }
                bVar8 = uStack_cc70._4_4_ != 0;
                if ((iVar9 != 0 || bVar8) || ((int)uStack_cc68 != 0)) break;
              }
            }
          }
code_r0x000109e9d8f4:
          param_3 = (undefined8 *)0x0;
          FUN_109e9ed98(puVar26,param_1);
          goto code_r0x000109e9b79c;
        }
        bVar8 = uStack_cc70._4_4_ == 0;
        if ((bVar8) && ((int)uStack_cc68 == 0)) goto code_r0x000109e9d8f4;
      }
    }
    break;
  case 0x98:
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    puVar38 = (undefined8 *)param_1[10];
    if (((*(uint *)(*puVar48 + 0x38) & 0xfffffffe) != 0x2c) &&
       ((*(byte *)((long)param_1 + 0x309) & 1) == 0)) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      if ((uVar17 < 0x1b8) || (*(char *)((long)param_1 + 0xe4) != '\0')) {
        FUN_109e9ed98(puVar26 + -8,param_1,&UNK_10f611aa2);
      }
    }
    puVar13 = puVar48 + -0x38;
    bVar16 = *(byte *)((long)param_1 + 0xe4);
    uVar41 = 0;
    FUN_109e9da50(&DAT_10f2db2fc,*puVar13,bVar16);
    if ((uVar41 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x309) & 1) == 0) {
        uVar17 = *(uint *)((long)param_1 + 0xec);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(param_1 + 0x1d);
        }
        if ((uVar17 < 0x1b8) || (bVar16 != 0)) {
          FUN_109e9ed98(puVar26 + -8,param_1,&UNK_10f611aee);
          bVar16 = *(byte *)((long)param_1 + 0xe4);
          goto code_r0x000109e9c1c0;
        }
      }
      uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x40000);
      uStack_cc60 = *puVar48;
    }
code_r0x000109e9c1c0:
    uVar31 = *puVar13;
    uVar41 = 0;
    FUN_109e9da50("location",uVar31,bVar16);
    if ((uVar41 & 1) == 0) {
      puVar24 = (undefined8 *)((ulong)uStack_cc70 | 0x80000);
      uVar17 = (uint)uStack_cc70;
      uStack_cc70 = puVar24;
      if (((uVar17 >> 3 & 1) != 0) && (*(char *)((long)param_1 + 0x30c) == '\x01')) {
        FUN_109e9f044(puVar26 + -8,param_1,&UNK_10f611b29);
        bVar16 = *(byte *)((long)param_1 + 0xe4);
      }
      uStack_cc50 = *puVar48;
      uVar31 = *puVar13;
    }
    puVar39 = &UNK_10f609933;
    FUN_109e9da50(&UNK_10f609933,uVar31,bVar16);
    if (((ulong)puVar39 & 1) == 0) {
      uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x10000000000000);
      uStack_cbe8 = *puVar48;
      uVar31 = *puVar13;
    }
    uVar41 = 0;
    FUN_109e9da50("component",uVar31,bVar16);
    if ((uVar41 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x309) & 1) == 0) {
        uVar17 = *(uint *)((long)param_1 + 0xec);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(param_1 + 0x1d);
        }
        if ((uVar17 < 0x1b8) || (bVar16 != 0)) {
          FUN_109e9ed98(puVar26 + -8,param_1,&UNK_10f611b65);
          bVar16 = *(byte *)((long)param_1 + 0xe4);
          goto code_r0x000109e9c2dc;
        }
      }
      uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x200000);
      uStack_cc40 = *puVar48;
    }
code_r0x000109e9c2dc:
    puVar39 = &DAT_10f2c4679;
    FUN_109e9da50(&DAT_10f2c4679,*puVar13,bVar16);
    if (((ulong)puVar39 & 1) == 0) {
      if ((bVar16 != 0) && ((*(byte *)((long)param_1 + 0x3ad) & 1) == 0)) {
        param_3 = (undefined8 *)0x0;
        FUN_109e9ed98(puVar26,param_1);
        goto code_r0x000109e9b79c;
      }
      uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x100000);
      uStack_cc48 = *puVar48;
    }
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      uVar19 = uVar17;
      if (uVar17 == 0) {
        uVar19 = *(uint *)(param_1 + 0x1d);
      }
      uVar29 = 0x135;
      if (bVar16 == 0) {
        uVar29 = 0x1a3;
      }
      if ((uVar29 < uVar19) || ((*(byte *)((long)param_1 + 0x323) & 1) != 0))
      goto code_r0x000109e9c3a8;
      uVar19 = uVar17;
      if (uVar17 == 0) {
        uVar19 = *(uint *)(param_1 + 0x1d);
      }
      if ((uVar29 < uVar19) || ((*(byte *)((long)param_1 + 0x337) & 1) != 0))
      goto code_r0x000109e9c3a8;
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (bVar16 == 0) {
        uVar19 = 0x1ad;
      }
      if (uVar19 < uVar17) goto code_r0x000109e9c3a8;
    }
    else {
code_r0x000109e9c3a8:
      uVar41 = 0;
      FUN_109e9da50(&DAT_10f491dce,*puVar13,bVar16);
      if ((uVar41 & 1) == 0) {
        uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x400000);
        uStack_cbf0 = *puVar48;
      }
    }
    if ((*(byte *)((long)param_1 + 0x323) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      uVar19 = uVar17;
      if (uVar17 == 0) {
        uVar19 = *(uint *)(param_1 + 0x1d);
      }
      uVar29 = 0x135;
      if (bVar16 == 0) {
        uVar29 = 0x1a3;
      }
      if ((uVar29 < uVar19) || ((*(byte *)((long)param_1 + 0x309) & 1) != 0))
      goto code_r0x000109e9c434;
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      if ((0x1b7 < uVar17) && ((bVar16 & 1) == 0)) goto code_r0x000109e9c434;
    }
    else {
code_r0x000109e9c434:
      uVar41 = 0;
      FUN_109e9da50(&DAT_10f63975c,*puVar13,bVar16);
      if ((uVar41 & 1) == 0) {
        uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x800000);
        uStack_cbe0 = *puVar48;
      }
    }
    puVar39 = &UNK_10f609c33;
    FUN_109e9da50(&UNK_10f609c33,*puVar13,bVar16);
    if (((ulong)puVar39 & 1) == 0) {
      uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x100000000);
      puVar24 = puVar38;
      FUN_109f6650c(puVar38,0x58);
      if (puVar24 != (undefined8 *)0x0) {
        puVar24[10] = 0;
        puVar24[7] = 0;
        puVar24[6] = 0;
        puVar24[9] = 0;
        puVar24[8] = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        puVar24[1] = 0;
        *puVar24 = 0;
      }
      FUN_109e268d4();
      puStack_cc38 = puVar24;
      if (((*(byte *)((long)param_1 + 0x377) & 1) == 0) &&
         ((*(byte *)((long)param_1 + 0x3bb) & 1) == 0)) {
        uVar17 = *(uint *)((long)param_1 + 0xec);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(param_1 + 0x1d);
        }
        uVar19 = 0x13f;
        if (*(char *)((long)param_1 + 0xe4) == '\0') {
          uVar19 = 0x95;
        }
        if (uVar17 <= uVar19) {
          FUN_109e9ed98(puVar26,param_1,&UNK_10f611bdc);
        }
      }
    }
    if (*(int *)(param_1 + 0x1f) == 3) {
      puVar39 = &DAT_10f34fa9f;
      FUN_109e9da50(&DAT_10f34fa9f,*puVar13,*(undefined1 *)((long)param_1 + 0xe4));
      if ((((ulong)puVar39 & 1) == 0) &&
         (puVar24 = param_1, func_0x000109e9da78(param_1,puVar26), (int)puVar24 != 0)) {
        uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x600000000000);
        uStack_cc30 = *puVar48;
      }
    }
    bVar16 = *(byte *)((long)param_1 + 0xe4);
    param_3 = (undefined8 *)(ulong)bVar16;
    if ((*(byte *)((long)param_1 + 0x309) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      if ((0x1b7 < uVar17) && ((bVar16 & 1) == 0)) goto code_r0x000109e9c598;
    }
    else {
code_r0x000109e9c598:
      uVar41 = *puVar13;
      puVar39 = &UNK_10f605fa3;
      FUN_109e9da50(&UNK_10f605fa3,uVar41,param_3);
      if (((ulong)puVar39 & 1) == 0) {
        uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x3000000000000);
        uStack_cc28 = *puVar48;
        uVar41 = *puVar13;
      }
      uVar31 = 0;
      FUN_109e9da50(&UNK_10f605fae,uVar41,param_3);
      if ((uVar31 & 1) == 0) {
        uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x800000000000);
        uStack_cbe0 = *puVar48;
        uVar41 = *puVar13;
      }
      puVar39 = &UNK_10f605fb9;
      FUN_109e9da50(&UNK_10f605fb9,uVar41,param_3);
      if (((ulong)puVar39 & 1) == 0) {
        uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0xc000000000000);
        uStack_cc20 = *puVar48;
      }
    }
    lVar49 = 0;
    uVar41 = *puVar13;
    do {
      puVar39 = (&PTR_DAT_110b60db8)[lVar49];
      if (bVar16 == 0) {
        _strcasecmp(puVar39,uVar41);
        iVar9 = (int)puVar39;
      }
      else {
        _strcmp();
        iVar9 = (int)puVar39;
      }
      if (iVar9 == 0) {
        if ((*(byte *)((long)param_1 + 0x2fb) & 1) == 0) {
          uVar17 = *(uint *)((long)param_1 + 0xec);
          if (uVar17 == 0) {
            uVar17 = *(uint *)(param_1 + 0x1d);
          }
          uVar19 = 0x135;
          if (bVar16 == 0) {
            uVar19 = 0x1ad;
          }
          if (uVar17 <= uVar19) {
            param_3 = (undefined8 *)0x0;
            FUN_109e9ed98(puVar26,param_1);
            goto code_r0x000109e9b79c;
          }
        }
        uStack_cc70 = (undefined8 *)
                      ((ulong)uStack_cc70 & 0xfffffff000000000 |
                      (ulong)uStack_cc70 & 0x1ffffffff |
                      (ulong)((1 << (ulong)((uint)lVar49 & 0x1f) |
                              (uint)((ulong)uStack_cc70 >> 0x21)) & 7) << 0x21);
        puVar24 = puVar38;
        FUN_109f6650c(puVar38,0x58);
        if (puVar24 != (undefined8 *)0x0) {
          puVar24[10] = 0;
          puVar24[7] = 0;
          puVar24[6] = 0;
          puVar24[9] = 0;
          puVar24[8] = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          puVar24[1] = 0;
          *puVar24 = 0;
        }
        FUN_109e268d4();
        auStack_cbd8[lVar49] = (ulong)puVar24;
        uVar41 = *puVar13;
        param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe4);
        break;
      }
      lVar49 = lVar49 + 1;
    } while (lVar49 != 3);
    uVar31 = 0;
    FUN_109e9da50(&DAT_10f609cae,uVar41,param_3);
    if ((uVar31 & 1) == 0) {
      uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x100000000000);
      puVar24 = puVar38;
      FUN_109f6650c(puVar38,0x58);
      if (puVar24 != (undefined8 *)0x0) {
        puVar24[10] = 0;
        puVar24[7] = 0;
        puVar24[6] = 0;
        puVar24[9] = 0;
        puVar24[8] = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        puVar24[1] = 0;
        *puVar24 = 0;
      }
      FUN_109e268d4();
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe4);
      uVar19 = 0x13f;
      if (*(byte *)((long)param_1 + 0xe4) == 0) {
        uVar19 = 399;
      }
      puStack_cc58 = puVar24;
      if ((((uVar17 <= uVar19) && ((*(byte *)((long)param_1 + 0x315) & 1) == 0)) &&
          ((*(byte *)((long)param_1 + 0x377) & 1) == 0)) &&
         ((*(byte *)((long)param_1 + 0x3bb) & 1) == 0)) {
        FUN_109e9ed98(puVar26,param_1,&UNK_10f611c50);
        param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe4);
      }
    }
    uVar41 = 0;
    FUN_109e9da50(&DAT_10f59a612,*puVar13);
    if ((uVar41 & 1) == 0) {
      uStack_cc70 = (undefined8 *)((ulong)uStack_cc70 | 0x100000000000000);
      FUN_109f6650c(puVar38,0x58);
      if (puVar38 != (undefined8 *)0x0) {
        puVar38[10] = 0;
        puVar38[7] = 0;
        puVar38[6] = 0;
        puVar38[9] = 0;
        puVar38[8] = 0;
        puVar38[3] = 0;
        puVar38[2] = 0;
        puVar38[5] = 0;
        puVar38[4] = 0;
        puVar38[1] = 0;
        *puVar38 = 0;
      }
      param_3 = (undefined8 *)*puVar48;
      FUN_109e268d4();
      puStack_cbb0 = puVar38;
      if ((((*(byte *)((long)param_1 + 0x34b) & 1) == 0) &&
          ((*(byte *)((long)param_1 + 0x389) & 1) == 0)) &&
         ((*(byte *)((long)param_1 + 0x3dd) & 1) == 0)) {
        uVar17 = *(uint *)((long)param_1 + 0xec);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(param_1 + 0x1d);
        }
        uVar19 = 0x13f;
        if (*(char *)((long)param_1 + 0xe4) == '\0') {
          uVar19 = 399;
        }
        if (uVar17 <= uVar19) {
          param_3 = (undefined8 *)&UNK_10f611c83;
          FUN_109e9ed98(puVar26 + -8,param_1);
        }
      }
    }
    bVar8 = (int)uStack_cc70 == 0;
    if (((bVar8) && (bVar8 = uStack_cc70._4_4_ == 0, bVar8)) && ((int)uStack_cc68 == 0)) {
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(puVar26 + -8,param_1);
      goto code_r0x000109e9b79c;
    }
    break;
  case 0x99:
    uStack_cc68 = puVar48[1];
    puVar38 = (undefined8 *)*puVar48;
    puStack_cc58 = (undefined8 *)puVar48[3];
    uStack_cc60 = puVar48[2];
    uStack_cc48 = puVar48[5];
    uStack_cc50 = puVar48[4];
    puStack_cc38 = (undefined8 *)puVar48[7];
    uStack_cc40 = puVar48[6];
    uStack_cc28 = puVar48[9];
    uStack_cc30 = puVar48[8];
    uStack_cc18 = puVar48[0xb];
    uStack_cc20 = puVar48[10];
    uStack_cc08 = puVar48[0xd];
    uStack_cc10 = puVar48[0xc];
    uStack_cbf8 = puVar48[0xf];
    uStack_cc00 = puVar48[0xe];
    uStack_cbe8 = puVar48[0x11];
    uStack_cbf0 = puVar48[0x10];
    auStack_cbd8[0] = puVar48[0x13];
    uStack_cbe0 = puVar48[0x12];
    auStack_cbd8[2] = puVar48[0x15];
    auStack_cbd8[1] = puVar48[0x14];
    uStack_cbb8 = puVar48[0x17];
    uStack_cbc0 = puVar48[0x16];
    uStack_cba8 = puVar48[0x19];
    puStack_cbb0 = (undefined8 *)puVar48[0x18];
    uStack_cb98 = puVar48[0x1b];
    uStack_cba0 = puVar48[0x1a];
    uStack_cc70._1_1_ = (byte)((ulong)puVar38 >> 8);
    bVar16 = uStack_cc70._1_1_ >> 2;
    uStack_cc70 = puVar38;
    if ((bVar16 & 1) != 0) {
      if ((*(byte *)((long)param_1 + 0x359) & 1) == 0) {
        uVar17 = *(uint *)((long)param_1 + 0xec);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(param_1 + 0x1d);
        }
        uVar19 = 299;
        if (*(char *)((long)param_1 + 0xe4) == '\0') {
          uVar19 = 0x8b;
        }
        if (uVar17 <= uVar19) {
          param_3 = (undefined8 *)0x0;
          FUN_109e9ed98(puVar26);
          break;
        }
      }
      if (*(char *)((long)param_1 + 0x35a) == '\x01') {
        param_3 = (undefined8 *)0x0;
        FUN_109e9f044(puVar26,param_1);
      }
    }
    break;
  case 0x9a:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x40000000;
    break;
  case 0x9b:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x10000000;
    break;
  case 0x9c:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x8000000;
    break;
  case 0x9d:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x200000000000000;
    break;
  case 0x9e:
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cb98 = puVar48[-0x1c];
    uStack_cc70 = (undefined8 *)0x200000000000000;
    break;
  case 0x9f:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    FUN_109f6650c(puVar24,0x58);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[10] = 0;
      puVar24[7] = 0;
      puVar24[6] = 0;
      puVar24[9] = 0;
      puVar24[8] = 0;
      puVar24[3] = 0;
      puVar24[2] = 0;
      puVar24[5] = 0;
      puVar24[4] = 0;
      puVar24[1] = 0;
      *puVar24 = 0;
    }
    puVar24[6] = 0;
    puVar24[5] = 0;
    puVar24[4] = 0;
    puVar24[3] = 0;
    puVar24[2] = 0;
    puVar24[1] = 0;
    *puVar24 = &PTR_FUN_110b63138;
    puVar24[8] = 0;
    puVar24[9] = 0;
    puVar38[5] = puVar24 + 9;
    puVar24[7] = puVar36;
    puVar38[6] = puVar24 + 7;
    puVar24[10] = puVar36;
    uStack_cc70 = puVar24;
    break;
  case 0xa0:
    puVar36 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar36,0x50);
    if (puVar36 != (undefined8 *)0x0) {
      puVar36[7] = 0;
      puVar36[6] = 0;
      puVar36[9] = 0;
      puVar36[8] = 0;
      puVar36[3] = 0;
      puVar36[2] = 0;
      puVar36[5] = 0;
      puVar36[4] = 0;
      puVar36[1] = 0;
      *puVar36 = 0;
    }
    uVar41 = *puVar48;
    puVar38 = puVar36 + 5;
    *puVar38 = 0;
    *(undefined4 *)(puVar36 + 4) = 0;
    puVar36[2] = 0;
    puVar36[3] = 0;
    *puVar36 = &PTR_DAT_110b62c70;
    puVar36[1] = 0;
    puVar36[6] = 0;
    puVar36[7] = uVar41;
    puVar36[8] = 0;
    puVar36[9] = 0;
    puVar36[1] = puVar26[3];
    *(int *)(puVar36 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar36 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar36 + 0x14) = uVar41;
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
    *puVar38 = uStack_cc70 + 9;
    puVar24 = (undefined8 *)uStack_cc70[10];
    puVar36[6] = puVar24;
    goto code_r0x000109e98410;
  case 0xa1:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x2000;
    break;
  case 0xa2:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x4000;
    break;
  case 0xa3:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x8000;
    break;
  case 0xa4:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x1;
    break;
  case 0xa5:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x2;
    break;
  case 0xac:
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc70 = (undefined8 *)0x0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = ((ulong)(byte)*puVar48 & 0xffffff03) << 0x20;
    break;
  case 0xad:
    if (((byte)*puVar48 >> 1 & 1) != 0) {
      param_3 = (undefined8 *)&UNK_10f611d13;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
code_r0x000109e97b90:
    uStack_cc68 = puVar48[1];
    puStack_cc58 = (undefined8 *)puVar48[3];
    uStack_cc60 = puVar48[2];
    uStack_cc48 = puVar48[5];
    uStack_cc50 = puVar48[4];
    puStack_cc38 = (undefined8 *)puVar48[7];
    uStack_cc40 = puVar48[6];
    uStack_cc28 = puVar48[9];
    uStack_cc30 = puVar48[8];
    uStack_cc18 = puVar48[0xb];
    uStack_cc20 = puVar48[10];
    uStack_cc08 = puVar48[0xd];
    uStack_cc10 = puVar48[0xc];
    uStack_cbf8 = puVar48[0xf];
    uStack_cc00 = puVar48[0xe];
    uStack_cbe8 = puVar48[0x11];
    uStack_cbf0 = puVar48[0x10];
    auStack_cbd8[0] = puVar48[0x13];
    uStack_cbe0 = puVar48[0x12];
    auStack_cbd8[2] = puVar48[0x15];
    auStack_cbd8[1] = puVar48[0x14];
    uStack_cbb8 = puVar48[0x17];
    uStack_cbc0 = puVar48[0x16];
    uStack_cba8 = puVar48[0x19];
    puStack_cbb0 = (undefined8 *)puVar48[0x18];
    uStack_cb98 = puVar48[0x1b];
    uStack_cba0 = puVar48[0x1a];
    uStack_cc70 = (undefined8 *)(*puVar48 | 2);
    break;
  case 0xae:
    if ((*puVar48 & 1) != 0) {
      param_3 = (undefined8 *)&UNK_10f611d31;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    bVar16 = *(byte *)((long)param_1 + 0xe4);
    uVar17 = *(uint *)((long)param_1 + 0xec);
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar19 = uVar17;
      if (uVar17 == 0) {
        uVar19 = *(uint *)(param_1 + 0x1d);
      }
      uVar29 = 0x135;
      if (bVar16 == 0) {
        uVar29 = 0x1a3;
      }
      if ((uVar19 <= uVar29) && (((byte)*puVar48 >> 1 & 1) != 0)) {
        param_3 = (undefined8 *)&UNK_10f611d51;
        FUN_109e9ed98(puVar26 + -4);
        uVar17 = *(uint *)((long)param_1 + 0xec);
        bVar16 = *(byte *)((long)param_1 + 0xe4);
      }
    }
    uStack_cc68 = puVar48[1];
    puStack_cc58 = (undefined8 *)puVar48[3];
    uStack_cc60 = puVar48[2];
    uStack_cc48 = puVar48[5];
    uStack_cc50 = puVar48[4];
    puStack_cc38 = (undefined8 *)puVar48[7];
    uStack_cc40 = puVar48[6];
    uStack_cc28 = puVar48[9];
    uStack_cc30 = puVar48[8];
    uStack_cc18 = puVar48[0xb];
    uStack_cc20 = puVar48[10];
    uStack_cc08 = puVar48[0xd];
    uStack_cc10 = puVar48[0xc];
    uStack_cbf8 = puVar48[0xf];
    uStack_cc00 = puVar48[0xe];
    uStack_cbe8 = puVar48[0x11];
    uStack_cbf0 = puVar48[0x10];
    auStack_cbd8[0] = puVar48[0x13];
    uStack_cbe0 = puVar48[0x12];
    auStack_cbd8[2] = puVar48[0x15];
    auStack_cbd8[1] = puVar48[0x14];
    uStack_cbb8 = puVar48[0x17];
    uStack_cbc0 = puVar48[0x16];
    uStack_cba8 = puVar48[0x19];
    puStack_cbb0 = (undefined8 *)puVar48[0x18];
    uStack_cb98 = puVar48[0x1b];
    uStack_cba0 = puVar48[0x1a];
    uStack_cc70 = (undefined8 *)(*puVar48 | 1);
    if (uVar17 == 0) {
      uVar17 = *(uint *)(param_1 + 0x1d);
    }
    uVar19 = 299;
    if ((bVar16 & 1) == 0) {
      uVar19 = 0x1a3;
    }
    if ((uVar19 < uVar17) && (((uint)*puVar48 >> 5 & 1) != 0)) {
      param_3 = (undefined8 *)&UNK_10f611d77;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    break;
  case 0xaf:
    if ((*puVar48 & 0xe000) != 0) {
      FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f611dae);
    }
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      if ((uVar17 <= uVar19) && ((*puVar48 & 3) != 0)) {
        FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f611dd0);
      }
    }
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,0);
    break;
  case 0xb0:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    uVar41 = *puVar48;
    if ((uVar41 & 0x7f030000) == 0) {
      uVar31 = 1;
      if (((uVar41 & 0xac04000fc0000) == 0) && ((puVar48[1] & 0x1e) == 0)) {
        uVar31 = uVar41 >> 0x34 & 1;
      }
    }
    else {
      uVar31 = 1;
    }
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,uVar31);
    break;
  case 0xb1:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,0);
    break;
  case 0xb2:
    if ((*puVar48 & 0x380) != 0) {
      FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f611e12);
    }
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      if (((uVar17 <= uVar19) && ((*(byte *)((long)param_1 + 0x3bd) & 1) == 0)) &&
         (((*puVar48 & 0x7f03e003) != 0 ||
          (((*puVar48 & 0x1ac04000fc0000) != 0 || ((puVar48[1] & 0x1e) != 0)))))) {
        FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f611e4d);
      }
    }
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,0);
    break;
  case 0xb3:
    if (((*puVar48 & 0x1c7c) != 0) &&
       ((((*(char *)((long)param_1 + 0x3bd) != '\x01' || (*(int *)(param_1 + 0x1f) != 4)) ||
         (((uint)*puVar48 >> 6 & 1) == 0)) || (((uint)puVar48[-0x1c] >> 4 & 1) == 0)))) {
      FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f611e93);
    }
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      if ((uVar17 <= uVar19) &&
         ((((*puVar48 & 0x7f03e003) != 0 || ((*puVar48 & 0x1ac04000fc0380) != 0)) ||
          ((puVar48[1] & 0x1e) != 0)))) {
        FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f611eaf);
      }
    }
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,0);
    break;
  case 0xb4:
    if ((*(byte *)((long)puVar48 + 0xc) & 3) != 0) {
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    if ((*(byte *)((long)param_1 + 0x341) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 0x135;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x1a3;
      }
      if (uVar17 <= uVar19) {
        auStack_cd50[0] = 0;
        auStack_cd50[1] = 0;
        auStack_cd50[2] = 0;
        if (*puVar48 != 0 || (int)puVar48[1] != 0) {
          param_3 = (undefined8 *)0x0;
          FUN_109e9ed98(puVar26 + -4);
        }
      }
    }
code_r0x000109e9a194:
    uVar41 = puVar48[1];
    puStack_cc58 = (undefined8 *)puVar48[3];
    uStack_cc60 = puVar48[2];
    uStack_cc48 = puVar48[5];
    uStack_cc50 = puVar48[4];
    puStack_cc38 = (undefined8 *)puVar48[7];
    uStack_cc40 = puVar48[6];
    uStack_cc28 = puVar48[9];
    uStack_cc30 = puVar48[8];
    uStack_cc18 = puVar48[0xb];
    uStack_cc20 = puVar48[10];
    uStack_cc08 = puVar48[0xd];
    uStack_cc10 = puVar48[0xc];
    uStack_cbf8 = puVar48[0xf];
    uStack_cc00 = puVar48[0xe];
    uStack_cbe8 = puVar48[0x11];
    uStack_cbf0 = puVar48[0x10];
    auStack_cbd8[0] = puVar48[0x13];
    uStack_cbe0 = puVar48[0x12];
    auStack_cbd8[2] = puVar48[0x15];
    auStack_cbd8[1] = puVar48[0x14];
    uStack_cbb8 = puVar48[0x17];
    uStack_cbc0 = puVar48[0x16];
    uStack_cba8 = puVar48[0x19];
    puStack_cbb0 = (undefined8 *)puVar48[0x18];
    uStack_cb98 = puVar48[0x1b];
    uStack_cba0 = puVar48[0x1a];
    uStack_cc68._4_1_ = (byte)(uVar41 >> 0x20);
    uStack_cc68._5_3_ = (undefined3)(uVar41 >> 0x28);
    uStack_cc68._0_4_ = (int)uVar41;
    uStack_cc68._0_5_ =
         CONCAT14(uStack_cc68._4_1_ & 0xfc | (byte)puVar48[-0x1c] & 3,(int)uStack_cc68);
    uStack_cc70 = (undefined8 *)*puVar48;
    break;
  case 0xb5:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    param_3 = param_1;
    FUN_109e2470c(&uStack_cc70,puVar26 + -4,param_1,puVar48,0,0);
    break;
  case 0xb6:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x80;
    break;
  case 0xb7:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x100;
    break;
  case 0xb8:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x200;
    break;
  case 0xb9:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x4;
    break;
  case 0xba:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x8;
    break;
  case 0xbb:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x10;
    break;
  case 0xbd:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x40;
    if (*(int *)(param_1 + 0x1f) == 3) {
      if ((*(byte *)((long)param_1 + 0x315) & 1) != 0) {
code_r0x000109e972d4:
        uStack_cc30 = *(ulong *)(param_1[0x28] + 0x40);
        uStack_cc70 = (undefined8 *)0x200000000040;
        uVar41 = 0x200000000040;
        goto code_r0x000109e9bb80;
      }
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      puVar38 = (undefined8 *)0x1000000000040;
      if ((399 < uVar17) && ((*(byte *)((long)param_1 + 0xe4) & 1) == 0)) goto code_r0x000109e972d4;
    }
    else {
      uVar41 = 0x40;
code_r0x000109e9bb80:
      puVar38 = (undefined8 *)(uVar41 | 0x1000000000000);
    }
    if ((*(byte *)((long)param_1 + 0x309) & 1) == 0) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      if ((uVar17 < 0x1b8) || ((*(byte *)((long)param_1 + 0xe4) & 1) != 0)) break;
    }
    if (*(char *)(param_1[1] + 0x6b) != '\0') {
      uStack_cc28 = *(ulong *)(param_1[0x28] + 0x48);
      uStack_cc70 = puVar38;
    }
    break;
  case 0xbe:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x60;
    if ((((*(byte *)((long)param_1 + 0x3a9) & 1) != 0) ||
        ((*(byte *)((long)param_1 + 0x3c5) & 1) != 0)) ||
       (*(char *)((long)param_1 + 0x3c7) == '\x01')) {
      uVar17 = *(uint *)((long)param_1 + 0xec);
      if (uVar17 == 0) {
        uVar17 = *(uint *)(param_1 + 0x1d);
      }
      uVar19 = 299;
      if (*(char *)((long)param_1 + 0xe4) == '\0') {
        uVar19 = 0x81;
      }
      if ((uVar19 < uVar17) && (*(int *)(param_1 + 0x1f) == 4)) break;
    }
    param_3 = (undefined8 *)&UNK_10f611f1d;
    FUN_109e9ed98(puVar26,param_1);
    break;
  case 0xbf:
  case 0x125:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x400;
    break;
  case 0xc0:
  case 0x126:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x800;
    break;
  case 0xc1:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x1000;
    break;
  case 0xc2:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x8000000000;
    break;
  case 0xc3:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x10000000000;
    break;
  case 0xc4:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x20000000000;
    break;
  case 0xc5:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x40000000000;
    break;
  case 0xc6:
    uStack_cb98 = 0;
    uStack_cba0 = 0;
    uStack_cba8 = 0;
    puStack_cbb0 = (undefined8 *)0x0;
    uStack_cbb8 = 0;
    uStack_cbc0 = 0;
    auStack_cbd8[2] = 0;
    auStack_cbd8[1] = 0;
    auStack_cbd8[0] = 0;
    uStack_cbe0 = 0;
    uStack_cbe8 = 0;
    uStack_cbf0 = 0;
    uStack_cbf8 = 0;
    uStack_cc00 = 0;
    uStack_cc08 = 0;
    uStack_cc10 = 0;
    uStack_cc18 = 0;
    uStack_cc20 = 0;
    uStack_cc28 = 0;
    uStack_cc30 = 0;
    puStack_cc38 = (undefined8 *)0x0;
    uStack_cc40 = 0;
    uStack_cc48 = 0;
    uStack_cc50 = 0;
    puStack_cc58 = (undefined8 *)0x0;
    uStack_cc60 = 0;
    uStack_cc68 = 0;
    uStack_cc70 = (undefined8 *)0x80000000000;
    break;
  case 199:
    param_3 = (undefined8 *)param_1[10];
    puVar38 = param_3;
    FUN_109f6650c(param_3,0x58);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[10] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    FUN_109f6650c(param_3,0x90);
    if (param_3 != (undefined8 *)0x0) {
      param_3[0xf] = 0;
      param_3[0xe] = 0;
      param_3[0x11] = 0;
      param_3[0x10] = 0;
      param_3[0xb] = 0;
      param_3[10] = 0;
      param_3[0xd] = 0;
      param_3[0xc] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      param_3[9] = 0;
      param_3[8] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[1] = 0;
      *param_3 = 0;
    }
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    *param_3 = &PTR_FUN_110b5e780;
    param_3[1] = 0;
    param_3[0xc] = param_3 + 0xe;
    param_3[0xe] = 0;
    param_3[0xd] = 0;
    *(undefined4 *)(param_3 + 7) = 0x29;
    param_3[0xf] = param_3 + 0xc;
    param_3[0x10] = 0;
    *(undefined1 *)(param_3 + 0x11) = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    FUN_109e9dda4(puVar38,puVar26 + -4);
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = puVar38;
    break;
  case 200:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x58);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[10] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    param_3 = (undefined8 *)puVar48[-0x1c];
    FUN_109e9dda4();
    goto code_r0x000109e9b210;
  case 0xc9:
    puVar36 = (undefined8 *)param_1[10];
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
    puVar24 = param_1;
    FUN_109e23c88(param_1,puVar26 + -8);
    puVar38 = uStack_cc70;
    if ((int)puVar24 != 0) {
      FUN_109f6650c(puVar36,0x90);
      if (puVar36 != (undefined8 *)0x0) {
        puVar36[0xf] = 0;
        puVar36[0xe] = 0;
        puVar36[0x11] = 0;
        puVar36[0x10] = 0;
        puVar36[0xb] = 0;
        puVar36[10] = 0;
        puVar36[0xd] = 0;
        puVar36[0xc] = 0;
        puVar36[7] = 0;
        puVar36[6] = 0;
        puVar36[9] = 0;
        puVar36[8] = 0;
        puVar36[3] = 0;
        puVar36[2] = 0;
        puVar36[5] = 0;
        puVar36[4] = 0;
        puVar36[1] = 0;
        *puVar36 = 0;
      }
      puVar36[6] = 0;
      puVar36[2] = 0;
      puVar36[3] = 0;
      *(undefined4 *)(puVar36 + 4) = 0;
      *puVar36 = &PTR_FUN_110b5e780;
      puVar36[1] = 0;
      puVar36[0xe] = 0;
      puVar36[0xc] = puVar36 + 0xe;
      puVar36[0xd] = 0;
      *(undefined4 *)(puVar36 + 7) = 0x29;
      puVar36[0xf] = puVar36 + 0xc;
      puVar36[0x10] = 0;
      *(undefined1 *)(puVar36 + 0x11) = 0;
      puVar36[10] = 0;
      puVar36[0xb] = 0;
      puVar36[8] = 0;
      puVar36[9] = 0;
      puVar34 = puVar36 + 5;
      *puVar34 = puVar38 + 9;
      puVar24 = (undefined8 *)puVar38[10];
      puVar36[6] = puVar24;
      *puVar24 = puVar34;
      puVar38[10] = puVar34;
    }
    break;
  case 0xca:
    uStack_cc70 = (undefined8 *)puVar48[-0x54];
    puVar38 = param_1;
    FUN_109e23c88(param_1,puVar26 + -0xc);
    if ((int)puVar38 != 0) {
      uVar41 = puVar48[-0x1c];
      goto code_r0x000109e962bc;
    }
    break;
  case 0xcc:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puVar38 = (undefined8 *)*puVar48;
    goto code_r0x000109e9ab38;
  case 0xcd:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    FUN_109e9dae4();
    goto code_r0x000109e9ab6c;
  case 0xce:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5e8c8;
    puVar38[1] = 0;
    puVar38[7] = 0;
    puVar38[8] = *(undefined8 *)(uVar41 + 0x38);
    puVar38[9] = uVar41;
    puVar38[10] = 0;
    goto code_r0x000109e9a848;
  case 0xcf:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b5e8c8;
    puVar38[1] = 0;
    puVar38[7] = 0;
    puVar38[8] = uVar41;
    puVar38[9] = 0;
    puVar38[10] = 0;
code_r0x000109e9a848:
    *(byte *)(puVar38 + 0xb) = *(byte *)(puVar38 + 0xb) & 0xfc;
    goto code_r0x000109e9ab6c;
  case 0xd0:
    uStack_cc70 = (undefined8 *)&DAT_10e05d768;
    break;
  case 0xd2:
    if ((undefined *)*puVar48 == &DAT_10e05d928) {
      uStack_cc70 = (undefined8 *)&DAT_10e05dab0;
    }
    else {
      param_3 = (undefined8 *)&UNK_10f611f65;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    break;
  case 0xd3:
    param_3 = (undefined8 *)0x0;
    FUN_109e9ebe4(param_1,0x82,100,puVar26,&UNK_10f60866c);
code_r0x000109e98074:
    uVar18 = 1;
    goto code_r0x000109e9b6d0;
  case 0xd4:
    param_3 = (undefined8 *)0x0;
    FUN_109e9ebe4(param_1,0x82,100,puVar26,&UNK_10f60866c);
code_r0x000109e9a7d4:
    uVar18 = 2;
    goto code_r0x000109e9b6d0;
  case 0xd5:
    param_3 = (undefined8 *)0x0;
    FUN_109e9ebe4(param_1,0x82,100,puVar26,&UNK_10f60866c);
    uVar18 = 3;
code_r0x000109e9b6d0:
    uStack_cc70 = (undefined8 *)CONCAT44(uStack_cc70._4_4_,uVar18);
    break;
  case 0xd6:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x78);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xe] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x54];
    uVar31 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62e80;
    puVar38[1] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[10] = 0;
    puVar38[0xb] = 0;
    puVar38[0xc] = puVar38 + 9;
    *(undefined1 *)(puVar38 + 0xd) = 1;
    puVar38[0xe] = 0;
    puVar24 = *(undefined8 **)(uVar31 + 0x30);
    *puVar24 = puVar38 + 0xb;
    puVar38[0xc] = puVar24;
    *(undefined8 **)(uVar31 + 0x30) = puVar38 + 9;
    puVar38[9] = uVar31 + 0x28;
    puVar38[1] = puVar26[-9];
    *(int *)(puVar38 + 2) = (int)puVar26[-10];
    uVar41 = puVar26[-0xc];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    param_3 = (undefined8 *)0x0;
    uStack_cc70 = puVar38;
    func_0x000109ea2214(param_1[9],puVar48[-0x54]);
    break;
  case 0xd7:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x78);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xe] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62e80;
    puVar38[1] = 0;
    puVar38[7] = &UNK_10f611f8d;
    puVar38[8] = 0;
    puVar38[10] = 0;
    puVar38[0xb] = 0;
    puVar38[0xc] = puVar38 + 9;
    *(undefined1 *)(puVar38 + 0xd) = 1;
    puVar38[0xe] = 0;
    puVar24 = *(undefined8 **)(uVar41 + 0x30);
    *puVar24 = puVar38 + 0xb;
    puVar38[0xc] = puVar24;
    *(undefined8 **)(uVar41 + 0x30) = puVar38 + 9;
    puVar38[9] = uVar41 + 0x28;
    goto code_r0x000109e9b210;
  case 0xd8:
  case 0xdb:
  case 299:
code_r0x000109e98044:
    puVar38 = (undefined8 *)*puVar48;
    goto code_r0x000109e98048;
  case 0xd9:
    goto code_r0x000109e9a5d0;
  case 0xda:
    puVar38 = (undefined8 *)param_1[10];
    uVar41 = puVar48[-0x38];
    *(int *)(uVar41 + 0x10) = (int)puVar26[-6];
    puVar13 = puVar26 + -8;
    uVar33 = puVar26[-7];
    uVar31 = *puVar13;
    *(ulong *)(uVar41 + 8) = puVar26[-5];
    *(ulong *)(uVar41 + 0x1c) = uVar33;
    *(ulong *)(uVar41 + 0x14) = uVar31;
    if (*(char *)((long)param_1 + 0x2f7) == '\x01') {
      lVar49 = 0;
      auStack_cd50[2] = 0;
      auStack_cd50[0] = 0;
      auStack_cd50[1] = 0xfc0;
      do {
        *(uint *)((long)auStack_ca90 + lVar49) = ~*(uint *)((long)auStack_cd50 + lVar49);
        lVar49 = lVar49 + 4;
      } while (lVar49 != 0xc);
      lVar49 = 0;
      uStack_cd70 = CONCAT44(auStack_ca90[1],auStack_ca90[0]);
      uStack_cd68 = auStack_ca90[2];
      auStack_ca90[0] = (uint)*(undefined8 *)(uVar41 + 0x38);
      auStack_ca90[1] = (uint)((ulong)*(undefined8 *)(uVar41 + 0x38) >> 0x20);
      auStack_ca90[2] = *(int *)(uVar41 + 0x40);
      do {
        *(uint *)((long)auStack_ca90 + lVar49) =
             *(uint *)((long)auStack_ca90 + lVar49) & *(uint *)((long)&uStack_cd70 + lVar49);
        uVar17 = auStack_ca90[2];
        lVar49 = lVar49 + 4;
      } while (lVar49 != 0xc);
      lStack_cd60 = CONCAT44(auStack_ca90[1],auStack_ca90[0]);
      iStack_cd58 = auStack_ca90[2];
      auStack_ca90[0] = 0;
      auStack_ca90[1] = 0;
      auStack_ca90[2] = 0;
      if (lStack_cd60 != 0 || uVar17 != 0) {
        param_3 = (undefined8 *)0x0;
        FUN_109e9ed98(puVar13,param_1);
      }
    }
    else {
      auStack_cd50[0] = 0;
      auStack_cd50[1] = 0;
      auStack_cd50[2] = 0;
      if (*(long *)(uVar41 + 0x38) != 0 || *(int *)(uVar41 + 0x40) != 0) {
        param_3 = (undefined8 *)0x0;
        FUN_109e9ed98(puVar13,param_1);
      }
    }
    FUN_109f6650c(puVar38,0x68);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xc] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[6] = 0;
    puVar38[5] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62ca0;
    puVar38[1] = 0;
    puVar24 = puVar38 + 10;
    *puVar24 = 0;
    plVar35 = puVar38 + 8;
    *plVar35 = (long)puVar24;
    puVar38[9] = 0;
    puVar38[0xb] = plVar35;
    puVar38[7] = uVar41;
    goto code_r0x000109e9bcdc;
  case 0xdc:
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
    goto code_r0x000109e9a5d4;
  case 0xdd:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
code_r0x000109e99210:
    puVar38[7] = uVar41;
    goto code_r0x000109e9ab6c;
  case 0xde:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x1c];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = uVar31;
    puVar38[9] = 0;
    goto code_r0x000109e9b4a4;
  case 0xe1:
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
    break;
  case 0xe2:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x98);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0x12] = 0;
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[0x11] = 0;
      puVar38[0x10] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar24 = puVar38 + 0xe;
    *puVar24 = 0;
    puVar36 = puVar38 + 0xc;
    *puVar36 = puVar24;
    puVar38[0xd] = 0;
    *(undefined4 *)(puVar38 + 7) = 0x35;
    puVar38[0xf] = puVar36;
    puVar38[0x10] = 0;
    *(undefined1 *)(puVar38 + 0x11) = 0;
    puVar38[10] = 0;
    puVar38[0xb] = 0;
    puVar38[8] = 0;
    puVar38[9] = 0;
    *puVar38 = &PTR_FUN_110b5df18;
    puVar38[1] = 0;
    puVar38[0x12] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uVar41 = *puVar48;
    puVar34 = (undefined8 *)(uVar41 + 0x28);
    *puVar34 = puVar24;
    *(undefined8 **)(uVar41 + 0x30) = puVar36;
    *puVar36 = puVar34;
    puVar38[0xf] = puVar34;
    uStack_cc70 = puVar38;
    break;
  case 0xe3:
    puVar38 = (undefined8 *)puVar48[-0x38];
    goto code_r0x000109e9b914;
  case 0xee:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    puVar38[10] = 0;
    *puVar38 = &PTR_FUN_110b62be0;
    puVar38[1] = 0;
    puVar38[8] = puVar38 + 10;
    puVar38[9] = 0;
    puVar38[0xb] = puVar38 + 8;
    *(undefined4 *)(puVar38 + 7) = 1;
    goto code_r0x000109e9b4a4;
  case 0xf0:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b62be0;
    puVar38[1] = 0;
    puVar24 = puVar38 + 10;
    *puVar24 = 0;
    puVar36 = puVar38 + 8;
    *puVar36 = puVar24;
    puVar38[9] = 0;
    puVar38[0xb] = puVar36;
    *(undefined4 *)(puVar38 + 7) = 1;
    if (uVar41 != 0) {
      puVar34 = *(undefined8 **)(uVar41 + 0x30);
      *puVar34 = puVar24;
      puVar38[0xb] = puVar34;
      *(undefined8 **)(uVar41 + 0x30) = puVar36;
      puVar38[8] = uVar41 + 0x28;
    }
    puVar38[1] = puVar26[-9];
    *(int *)(puVar38 + 2) = (int)puVar26[-10];
    uVar41 = puVar26[-0xc];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = puVar38;
    goto code_r0x000109e994cc;
  case 0xf3:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62be0;
    puVar38[1] = 0;
    puVar38[10] = 0;
    puVar38[8] = puVar38 + 10;
    puVar38[9] = 0;
    puVar38[0xb] = puVar38 + 8;
    *(undefined4 *)(puVar38 + 7) = 0;
    goto code_r0x000109e9b4a4;
  case 0xf4:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b62be0;
    puVar38[1] = 0;
    puVar24 = puVar38 + 10;
    *puVar24 = 0;
    puVar36 = puVar38 + 8;
    *puVar36 = puVar24;
    puVar38[9] = 0;
    puVar38[0xb] = puVar36;
    *(undefined4 *)(puVar38 + 7) = 0;
    if (uVar41 != 0) {
      puVar34 = *(undefined8 **)(uVar41 + 0x30);
      *puVar34 = puVar24;
      puVar38[0xb] = puVar34;
      *(undefined8 **)(uVar41 + 0x30) = puVar36;
      puVar38[8] = uVar41 + 0x28;
    }
    goto code_r0x000109e9b210;
  case 0xf5:
    puVar38 = (undefined8 *)*puVar48;
    if (puVar38 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(puVar26,param_1);
      goto code_r0x000109e98044;
    }
code_r0x000109e98048:
    puVar38[5] = puVar38 + 5;
    puVar38[6] = puVar38 + 5;
    uStack_cc70 = puVar38;
    break;
  case 0xf6:
    if (*puVar48 == 0) {
      param_3 = (undefined8 *)0x0;
      FUN_109e9ed98(puVar26,param_1);
    }
code_r0x000109e9a5d0:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
code_r0x000109e9a5d4:
    uVar41 = *puVar48;
    puVar24 = (undefined8 *)(uVar41 + 0x28);
    *puVar24 = uStack_cc70 + 5;
    puVar38 = (undefined8 *)uStack_cc70[6];
    *(undefined8 **)(uVar41 + 0x30) = puVar38;
    *puVar38 = puVar24;
    uStack_cc70[6] = puVar24;
    break;
  case 0xf7:
    if ((*(byte *)((long)param_1 + 0x592) & 1) == 0) {
      param_3 = (undefined8 *)&UNK_10f610ed3;
      FUN_109e9ed98(puVar26 + -4,param_1);
      goto code_r0x000109e9b79c;
    }
    break;
  case 0xf8:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    ppuVar25 = &PTR_FUN_110b62c10;
    goto code_r0x000109e99e30;
  case 0xf9:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    ppuVar25 = &PTR_FUN_110b62c10;
    goto code_r0x000109e98a58;
  case 0xfa:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar33 = puVar48[1];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62d00;
    puVar38[1] = 0;
    puVar38[7] = uVar41;
    puVar38[9] = uVar33;
    puVar38[8] = uVar31;
    goto code_r0x000109e9b124;
  case 0xfb:
  case 0x112:
    uStack_cc68 = *puVar48;
    uStack_cc70 = (undefined8 *)puVar48[-0x38];
    break;
  case 0xfc:
    uStack_cc70 = (undefined8 *)*puVar48;
    goto code_r0x000109e99a98;
  case 0xfe:
    puVar24 = (undefined8 *)param_1[10];
    puVar38 = puVar24;
    FUN_109f6650c(puVar24,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar36 = puVar38 + 5;
    *puVar36 = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_DAT_110b62c70;
    puVar38[1] = 0;
    puVar38[6] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = 0;
    puVar38[9] = uVar31;
    FUN_109f6650c(puVar24,0x68);
    if (puVar24 != (undefined8 *)0x0) {
      puVar24[0xc] = 0;
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
    }
    uVar41 = puVar48[-0x54];
    puVar24[6] = 0;
    puVar24[5] = 0;
    *(undefined4 *)(puVar24 + 4) = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    *puVar24 = &PTR_FUN_110b62ca0;
    puVar24[1] = 0;
    puVar24[9] = 0;
    puVar24[10] = 0;
    puVar24[7] = uVar41;
    puVar24[0xc] = 0;
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    puVar24[1] = puVar26[-9];
    *(int *)(puVar24 + 2) = (int)puVar26[-10];
    uVar41 = puVar26[-0xc];
    *(ulong *)((long)puVar24 + 0x1c) = puVar26[-0xb];
    *(ulong *)((long)puVar24 + 0x14) = uVar41;
    puVar38[5] = puVar24 + 10;
    puVar24[8] = puVar36;
    puVar38[6] = puVar24 + 8;
    puVar24[0xb] = puVar36;
    uStack_cc70 = puVar24;
    break;
  case 0xff:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x50);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62d30;
    puVar38[1] = 0;
    puVar38[7] = uVar41;
    puVar38[8] = uVar31;
    puVar38[9] = 0;
code_r0x000109e9b124:
    puVar38[1] = puVar26[-0xd];
    *(int *)(puVar38 + 2) = (int)puVar26[-0xe];
    uVar41 = puVar26[-0x10];
    uStack_cc70 = puVar38;
    goto code_r0x000109e9b4bc;
  case 0x100:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62d60;
    puVar38[1] = 0;
    puVar38[7] = 0;
code_r0x000109e9b4a4:
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    uStack_cc70 = puVar38;
    goto code_r0x000109e9b4bc;
  case 0x101:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62d60;
    puVar38[1] = 0;
    puVar38[7] = uVar41;
    goto code_r0x000109e9b210;
  case 0x102:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    ppuVar25 = &PTR_DAT_110b62d90;
code_r0x000109e98a58:
    *puVar38 = ppuVar25;
    puVar38[1] = 0;
    puVar38[7] = uVar41;
    goto code_r0x000109e9b320;
  case 0x103:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x40);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    ppuVar25 = &PTR_DAT_110b62d90;
code_r0x000109e99e30:
    *puVar38 = ppuVar25;
    puVar38[1] = 0;
    puVar38[7] = 0;
    goto code_r0x000109e9ab6c;
  case 0x104:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x58);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[10] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_DAT_110b62dc0;
    puVar38[1] = 0;
    puVar24 = puVar38 + 9;
    *puVar24 = 0;
    puVar36 = puVar38 + 7;
    *puVar36 = puVar24;
    puVar38[8] = 0;
    puVar38[10] = puVar36;
    uVar41 = *puVar48;
    puVar34 = (undefined8 *)(uVar41 + 0x28);
    *puVar34 = puVar24;
    *(undefined8 **)(uVar41 + 0x30) = puVar36;
    *puVar36 = puVar34;
    puVar38[10] = puVar34;
code_r0x000109e9ab6c:
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar31 = puVar26[1];
    uVar41 = *puVar26;
    uStack_cc70 = puVar38;
    goto code_r0x000109e9b4c4;
  case 0x105:
  case 0x109:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    uVar41 = *puVar48;
code_r0x000109e962bc:
    puVar38 = (undefined8 *)(uVar41 + 0x28);
    *puVar38 = uStack_cc70 + 9;
    puVar24 = (undefined8 *)uStack_cc70[10];
    *(undefined8 **)(uVar41 + 0x30) = puVar24;
code_r0x000109e98410:
    *puVar24 = puVar38;
code_r0x000109e9ab38:
    uStack_cc70[10] = puVar38;
    break;
  case 0x106:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x60);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62df0;
    puVar38[1] = 0;
    puVar36 = puVar38 + 10;
    *puVar36 = 0;
    puVar34 = puVar38 + 8;
    *puVar34 = puVar36;
    puVar38[9] = 0;
    puVar38[0xb] = puVar34;
    puVar38[7] = uVar41;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uVar41 = *puVar48;
    puVar24 = (undefined8 *)(uVar41 + 0x28);
    *puVar24 = puVar36;
    *(undefined8 **)(uVar41 + 0x30) = puVar34;
    *puVar34 = puVar24;
    puVar38[0xb] = puVar24;
    uStack_cc70 = puVar38;
    break;
  case 0x107:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    uVar41 = *puVar48;
    puVar38 = (undefined8 *)(uVar41 + 0x28);
    *puVar38 = uStack_cc70 + 10;
    puVar24 = (undefined8 *)uStack_cc70[0xb];
    *(undefined8 **)(uVar41 + 0x30) = puVar24;
    *puVar24 = puVar38;
    uStack_cc70[0xb] = puVar38;
    break;
  case 0x108:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x58);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[10] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62e20;
    puVar38[1] = 0;
    puVar24 = puVar38 + 9;
    *puVar24 = 0;
    puVar36 = puVar38 + 7;
    *puVar36 = puVar24;
    puVar38[8] = 0;
    puVar38[10] = puVar36;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar41 = *puVar26;
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uVar41 = *puVar48;
    puVar34 = (undefined8 *)(uVar41 + 0x28);
    *puVar34 = puVar24;
    *(undefined8 **)(uVar41 + 0x30) = puVar36;
    *puVar36 = puVar34;
    puVar38[10] = puVar34;
    uStack_cc70 = puVar38;
    break;
  case 0x10a:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x80);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_DAT_110b62e50;
    puVar38[1] = 0;
    puVar38[0xd] = 0;
    puVar38[0xb] = puVar38 + 0xd;
    puVar38[0xc] = 0;
    *(undefined4 *)(puVar38 + 7) = 1;
    puVar38[8] = 0;
    puVar38[9] = uVar41;
    puVar38[10] = 0;
    puVar38[0xe] = puVar38 + 0xb;
    puVar38[0xf] = uVar31;
    puVar38[1] = puVar26[-0xd];
    *(int *)(puVar38 + 2) = (int)puVar26[-0xe];
    uVar41 = puVar26[-0x10];
    uStack_cc70 = puVar38;
    goto code_r0x000109e9a098;
  case 0x10b:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x80);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x38];
    uVar31 = puVar48[-0x8c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_DAT_110b62e50;
    puVar38[1] = 0;
    puVar38[0xd] = 0;
    puVar38[0xb] = puVar38 + 0xd;
    puVar38[0xc] = 0;
    *(undefined4 *)(puVar38 + 7) = 2;
    puVar38[8] = 0;
    puVar38[9] = uVar41;
    puVar38[10] = 0;
    puVar38[0xe] = puVar38 + 0xb;
    puVar38[0xf] = uVar31;
    puVar38[1] = puVar26[-0x15];
    *(int *)(puVar38 + 2) = (int)puVar26[-0x16];
    uVar41 = puVar26[-0x18];
    uStack_cc70 = puVar38;
    goto code_r0x000109e9a098;
  case 0x10c:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x80);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xd] = 0;
      puVar38[0xc] = 0;
      puVar38[0xf] = 0;
      puVar38[0xe] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x54];
    uVar31 = *puVar48;
    uVar40 = puVar48[-0x37];
    uVar33 = puVar48[-0x38];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62e50;
    puVar38[1] = 0;
    puVar38[0xd] = 0;
    puVar38[0xb] = puVar38 + 0xd;
    puVar38[0xc] = 0;
    *(undefined4 *)(puVar38 + 7) = 0;
    puVar38[8] = uVar41;
    puVar38[10] = uVar40;
    puVar38[9] = uVar33;
    puVar38[0xe] = puVar38 + 0xb;
    puVar38[0xf] = uVar31;
    puVar38[1] = puVar26[-0x11];
    *(int *)(puVar38 + 2) = (int)puVar26[-0x12];
    uVar41 = puVar26[-0x14];
    uStack_cc70 = puVar38;
    goto code_r0x000109e9b4bc;
  case 0x111:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
code_r0x000109e99a98:
    uStack_cc68 = 0;
    break;
  case 0x113:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x48);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[8] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62cd0;
    puVar38[1] = 0;
    puVar38[8] = 0;
    *(undefined4 *)(puVar38 + 7) = 0;
    goto code_r0x000109e9b320;
  case 0x114:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x48);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[8] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62cd0;
    puVar38[1] = 0;
    puVar38[8] = 0;
    uVar18 = 1;
    goto code_r0x000109e99c08;
  case 0x115:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x48);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[8] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62cd0;
    puVar38[1] = 0;
    *(undefined4 *)(puVar38 + 7) = 2;
    puVar38[8] = 0;
    goto code_r0x000109e9b320;
  case 0x116:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x48);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[8] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    uVar41 = puVar48[-0x1c];
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62cd0;
    puVar38[1] = 0;
    *(undefined4 *)(puVar38 + 7) = 2;
    puVar38[8] = uVar41;
    puVar38[1] = puVar26[-5];
    *(int *)(puVar38 + 2) = (int)puVar26[-6];
    uVar41 = puVar26[-8];
    uStack_cc70 = puVar38;
code_r0x000109e9a098:
    uVar31 = puVar26[-3];
    goto code_r0x000109e9b4c4;
  case 0x117:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x48);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[8] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62cd0;
    puVar38[1] = 0;
    puVar38[8] = 0;
    uVar18 = 3;
code_r0x000109e99c08:
    *(undefined4 *)(puVar38 + 7) = uVar18;
    goto code_r0x000109e9b320;
  case 0x118:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x38);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[6] = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62f40;
    puVar38[1] = 0;
code_r0x000109e9b320:
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar31 = puVar26[-3];
    uVar41 = puVar26[-4];
    uStack_cc70 = puVar38;
    goto code_r0x000109e9b4c4;
  case 0x11e:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x48);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[8] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_DAT_110b62f88;
    puVar38[1] = 0;
    puVar38[7] = 0;
    puVar38[8] = 0;
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[1];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    puVar38[7] = puVar48[-0x1c];
    puVar38[8] = *puVar48;
    uStack_cc70 = puVar38;
code_r0x000109e994cc:
    FUN_109f61680(*(undefined8 *)(param_1[9] + 8));
    break;
  case 0x120:
    puVar15 = puVar48 + -0x1c;
    puVar38 = (undefined8 *)*puVar48;
    uVar41 = puVar38[0x23];
    if ((uVar41 & 0x7f030000) == 0) {
      uVar31 = 1;
      if (((uVar41 & 0xac04000fc0000) == 0) && ((*(byte *)(puVar38 + 0x24) & 0x1e) == 0)) {
        uVar31 = uVar41 >> 0x34 & 1;
      }
    }
    else {
      uVar31 = 1;
    }
    puVar13 = puVar38 + 0x23;
    param_3 = param_1;
    FUN_109e2470c(puVar15,puVar26 + -4,param_1,puVar13,0,uVar31);
    iVar9 = (int)puVar15;
    goto code_r0x000109e9bdb8;
  case 0x121:
    puVar38 = (undefined8 *)*puVar48;
    if ((*(byte *)((long)puVar38 + 0x39) >> 3 & 1) == 0) {
      FUN_109e9ed98(puVar26 + -4,param_1,&UNK_10f612030);
    }
    puVar15 = puVar48 + -0x1c;
    puVar13 = puVar38 + 0x23;
    param_3 = param_1;
    FUN_109e2470c(puVar15,puVar26 + -4,param_1,puVar13,0,0);
    iVar9 = (int)puVar15;
code_r0x000109e9bdb8:
    if (iVar9 == 0) goto code_r0x000109e9b79c;
    uVar41 = puVar48[-0x1c];
    uVar33 = puVar48[-0x19];
    uVar31 = puVar48[-0x1a];
    puVar13[1] = puVar48[-0x1b];
    *puVar13 = uVar41;
    puVar13[3] = uVar33;
    puVar13[2] = uVar31;
    uVar31 = puVar48[-0x17];
    uVar41 = puVar48[-0x18];
    uVar40 = puVar48[-0x15];
    uVar33 = puVar48[-0x16];
    uVar55 = puVar48[-0x14];
    uVar59 = puVar48[-0x11];
    uVar57 = puVar48[-0x12];
    puVar13[9] = puVar48[-0x13];
    puVar13[8] = uVar55;
    puVar13[0xb] = uVar59;
    puVar13[10] = uVar57;
    puVar13[5] = uVar31;
    puVar13[4] = uVar41;
    puVar13[7] = uVar40;
    puVar13[6] = uVar33;
    uVar31 = puVar48[-0xf];
    uVar41 = puVar48[-0x10];
    uVar40 = puVar48[-0xd];
    uVar33 = puVar48[-0xe];
    uVar55 = puVar48[-0xc];
    uVar59 = puVar48[-9];
    uVar57 = puVar48[-10];
    puVar13[0x11] = puVar48[-0xb];
    puVar13[0x10] = uVar55;
    puVar13[0x13] = uVar59;
    puVar13[0x12] = uVar57;
    puVar13[0xd] = uVar31;
    puVar13[0xc] = uVar41;
    puVar13[0xf] = uVar40;
    puVar13[0xe] = uVar33;
    uVar31 = puVar48[-7];
    uVar41 = puVar48[-8];
    uVar40 = puVar48[-5];
    uVar33 = puVar48[-6];
    uVar55 = puVar48[-4];
    uVar59 = puVar48[-1];
    uVar57 = puVar48[-2];
    puVar13[0x19] = puVar48[-3];
    puVar13[0x18] = uVar55;
    puVar13[0x1b] = uVar59;
    puVar13[0x1a] = uVar57;
    puVar13[0x15] = uVar31;
    puVar13[0x14] = uVar41;
    puVar13[0x17] = uVar40;
    puVar13[0x16] = uVar33;
    uStack_cc70 = puVar38;
    break;
  case 0x122:
    puVar38 = (undefined8 *)puVar48[-0x1c];
    plVar35 = param_1 + 0x20;
    if ((((uint)puVar48[-0xa8] >> 10 & 1) != 0) ||
       (plVar35 = param_1 + 0x21, ((uint)puVar48[-0xa8] >> 0xb & 1) != 0)) {
      puVar24 = (undefined8 *)*plVar35;
      uVar51 = puVar24[1];
      uVar14 = *puVar24;
      uVar52 = puVar24[2];
      puVar38[10] = puVar24[3];
      puVar38[9] = uVar52;
      puVar38[8] = uVar51;
      puVar38[7] = uVar14;
      uVar51 = puVar24[5];
      uVar14 = puVar24[4];
      uVar53 = puVar24[7];
      uVar52 = puVar24[6];
      uVar56 = puVar24[9];
      uVar54 = puVar24[8];
      uVar58 = puVar24[10];
      puVar38[0x12] = puVar24[0xb];
      puVar38[0x11] = uVar58;
      puVar38[0x10] = uVar56;
      puVar38[0xf] = uVar54;
      puVar38[0xe] = uVar53;
      puVar38[0xd] = uVar52;
      puVar38[0xc] = uVar51;
      puVar38[0xb] = uVar14;
      uVar51 = puVar24[0xd];
      uVar14 = puVar24[0xc];
      uVar53 = puVar24[0xf];
      uVar52 = puVar24[0xe];
      uVar56 = puVar24[0x11];
      uVar54 = puVar24[0x10];
      uVar58 = puVar24[0x12];
      puVar38[0x1a] = puVar24[0x13];
      puVar38[0x19] = uVar58;
      puVar38[0x18] = uVar56;
      puVar38[0x17] = uVar54;
      puVar38[0x16] = uVar53;
      puVar38[0x15] = uVar52;
      puVar38[0x14] = uVar51;
      puVar38[0x13] = uVar14;
      uVar51 = puVar24[0x15];
      uVar14 = puVar24[0x14];
      uVar53 = puVar24[0x17];
      uVar52 = puVar24[0x16];
      uVar56 = puVar24[0x19];
      uVar54 = puVar24[0x18];
      uVar58 = puVar24[0x1a];
      puVar38[0x22] = puVar24[0x1b];
      puVar38[0x21] = uVar58;
      puVar38[0x20] = uVar56;
      puVar38[0x1f] = uVar54;
      puVar38[0x1e] = uVar53;
      puVar38[0x1d] = uVar52;
      puVar38[0x1c] = uVar51;
      puVar38[0x1b] = uVar14;
    }
    puVar38[0x3f] = puVar48[-0x8c];
    uVar41 = puVar48[-0x54];
    lVar49 = puVar38[0x41];
    plVar35 = *(long **)(uVar41 + 0x30);
    *plVar35 = lVar49;
    *(long **)(lVar49 + 8) = plVar35;
    *(undefined8 **)(uVar41 + 0x30) = puVar38 + 0x41;
    puVar38[0x41] = uVar41 + 0x28;
    param_3 = puVar38;
    FUN_109e9f5d0(puVar26 + -0x18,param_1);
    uStack_cc70 = puVar38;
    break;
  case 0x127:
    if ((*(byte *)((long)puVar48 + -0xdf) >> 1 & 1) == 0) {
      param_3 = (undefined8 *)&UNK_10f61207f;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    if ((*puVar48 & 0x380) != 0) {
      param_3 = (undefined8 *)&UNK_10f61209b;
      FUN_109e9ed98(puVar26 + -4,param_1);
    }
    uStack_cc68 = puVar48[1];
    puStack_cc58 = (undefined8 *)puVar48[3];
    uStack_cc60 = puVar48[2];
    uStack_cc48 = puVar48[5];
    uStack_cc50 = puVar48[4];
    puStack_cc38 = (undefined8 *)puVar48[7];
    uStack_cc40 = puVar48[6];
    uStack_cc28 = puVar48[9];
    uStack_cc30 = puVar48[8];
    uStack_cc18 = puVar48[0xb];
    uStack_cc20 = puVar48[10];
    uStack_cc08 = puVar48[0xd];
    uStack_cc10 = puVar48[0xc];
    uStack_cbf8 = puVar48[0xf];
    uStack_cc00 = puVar48[0xe];
    uStack_cbe8 = puVar48[0x11];
    uStack_cbf0 = puVar48[0x10];
    auStack_cbd8[0] = puVar48[0x13];
    uStack_cbe0 = puVar48[0x12];
    auStack_cbd8[2] = puVar48[0x15];
    auStack_cbd8[1] = puVar48[0x14];
    uStack_cbb8 = puVar48[0x17];
    uStack_cbc0 = puVar48[0x16];
    uStack_cba8 = puVar48[0x19];
    puStack_cbb0 = (undefined8 *)puVar48[0x18];
    uStack_cb98 = puVar48[0x1b];
    uStack_cba0 = puVar48[0x1a];
    uStack_cc70 = (undefined8 *)(*puVar48 | 0x200);
    break;
  case 0x128:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x230);
    if (puVar38 != (undefined8 *)0x0) {
      _bzero(puVar38,0x230);
    }
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5dfb8;
    puVar38[1] = 0;
    puVar38[0x40] = 0;
    puVar38[0x3f] = 0;
    puVar38[0x41] = puVar38 + 0x43;
    puVar38[0x43] = 0;
    puVar38[0x42] = 0;
    puVar38[0x44] = puVar38 + 0x41;
    puVar38[0x45] = 0;
    uStack_cc70 = puVar38;
    break;
  case 0x129:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x230);
    if (puVar38 != (undefined8 *)0x0) {
      _bzero(puVar38,0x230);
    }
    uVar41 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5dfb8;
    puVar38[1] = 0;
    puVar38[0x3f] = 0;
    puVar38[0x40] = uVar41;
    puVar38[0x41] = puVar38 + 0x43;
    puVar38[0x43] = 0;
    puVar38[0x42] = 0;
    puVar38[0x44] = puVar38 + 0x41;
    puVar38[0x45] = 0;
    puVar38[1] = puVar26[3];
    *(int *)(puVar38 + 2) = (int)puVar26[2];
    uVar31 = puVar26[1];
    uVar41 = *puVar26;
    goto code_r0x000109e99728;
  case 0x12a:
    puVar38 = (undefined8 *)param_1[10];
    FUN_109f6650c(puVar38,0x230);
    if (puVar38 != (undefined8 *)0x0) {
      _bzero(puVar38,0x230);
    }
    uVar41 = puVar48[-0x1c];
    uVar31 = *puVar48;
    puVar38[5] = 0;
    puVar38[6] = 0;
    puVar38[3] = 0;
    puVar38[2] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    *puVar38 = &PTR_FUN_110b5dfb8;
    puVar38[1] = 0;
    puVar38[0x3f] = 0;
    puVar38[0x40] = uVar41;
    puVar38[0x41] = puVar38 + 0x43;
    puVar38[0x43] = 0;
    puVar38[0x42] = 0;
    puVar38[0x44] = puVar38 + 0x41;
    puVar38[0x45] = uVar31;
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    uVar31 = puVar26[1];
code_r0x000109e99728:
    *(ulong *)((long)puVar38 + 0x1c) = uVar31;
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uStack_cc70 = puVar38;
    break;
  case 300:
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    uVar41 = *puVar48;
    plVar35 = uStack_cc70 + 5;
    *plVar35 = uVar41 + 0x28;
    puVar38 = *(undefined8 **)(uVar41 + 0x30);
    uStack_cc70[6] = puVar38;
    *puVar38 = plVar35;
    *(long **)(uVar41 + 0x30) = plVar35;
    break;
  case 0x12d:
    puVar38 = (undefined8 *)param_1[10];
    uVar41 = puVar48[-0x38];
    *(int *)(uVar41 + 0x10) = (int)puVar26[-6];
    uVar33 = puVar26[-7];
    uVar31 = puVar26[-8];
    *(ulong *)(uVar41 + 8) = puVar26[-5];
    *(ulong *)(uVar41 + 0x1c) = uVar33;
    *(ulong *)(uVar41 + 0x14) = uVar31;
    uVar17 = (uint)*(undefined8 *)(uVar41 + 0x38);
    if ((uVar17 >> 3 & 1) == 0) {
      if ((uVar17 >> 4 & 1) != 0) {
        param_3 = (undefined8 *)0x0;
        goto code_r0x000109e9bc78;
      }
    }
    else {
      param_3 = (undefined8 *)&UNK_10f6120b5;
code_r0x000109e9bc78:
      FUN_109e9ed98(puVar26 + -8,param_1);
    }
    FUN_109f6650c(puVar38,0x68);
    if (puVar38 != (undefined8 *)0x0) {
      puVar38[0xc] = 0;
      puVar38[9] = 0;
      puVar38[8] = 0;
      puVar38[0xb] = 0;
      puVar38[10] = 0;
      puVar38[5] = 0;
      puVar38[4] = 0;
      puVar38[7] = 0;
      puVar38[6] = 0;
      puVar38[1] = 0;
      *puVar38 = 0;
      puVar38[3] = 0;
      puVar38[2] = 0;
    }
    puVar38[6] = 0;
    puVar38[5] = 0;
    *(undefined4 *)(puVar38 + 4) = 0;
    puVar38[2] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110b62ca0;
    puVar38[1] = 0;
    puVar24 = puVar38 + 10;
    *puVar24 = 0;
    plVar35 = puVar38 + 8;
    *plVar35 = (long)puVar24;
    puVar38[9] = 0;
    puVar38[0xb] = plVar35;
    puVar38[7] = uVar41;
code_r0x000109e9bcdc:
    puVar38[0xc] = 0;
    puVar38[1] = puVar26[-1];
    *(int *)(puVar38 + 2) = (int)puVar26[-2];
    uVar41 = puVar26[-4];
    *(ulong *)((long)puVar38 + 0x1c) = puVar26[-3];
    *(ulong *)((long)puVar38 + 0x14) = uVar41;
    uVar41 = puVar48[-0x1c];
    puVar36 = *(undefined8 **)(uVar41 + 0x30);
    *puVar36 = puVar24;
    puVar38[0xb] = puVar36;
    *(long **)(uVar41 + 0x30) = plVar35;
    *plVar35 = uVar41 + 0x28;
    uStack_cc70 = puVar38;
    break;
  case 0x12e:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    puVar13 = &uStack_cc70;
    param_3 = param_1;
    FUN_109e2470c(puVar13,puVar26 + -4,param_1,puVar48,0,1);
    goto code_r0x000109e9b798;
  case 0x130:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    puVar13 = &uStack_cc70;
    param_3 = param_1;
    FUN_109e2470c(puVar13,puVar26 + -4,param_1,puVar48,0,1);
    goto code_r0x000109e9b798;
  case 0x132:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    puVar38 = &uStack_cc70;
    param_3 = param_1;
    FUN_109e2470c(puVar38,puVar26 + -4,param_1,puVar48,0,1);
    if ((int)puVar38 != 0) {
      puVar13 = &uStack_cc70;
      param_3 = param_1;
      FUN_109e256cc(puVar13,puVar26 + -4);
      goto code_r0x000109e9b798;
    }
    goto code_r0x000109e9b79c;
  case 0x133:
    puVar13 = puVar48 + -0x38;
    param_3 = param_1;
    FUN_109e256cc(puVar13,puVar26 + -8);
    goto code_r0x000109e9b798;
  case 0x134:
    uStack_cc68 = puVar48[-0x1b];
    uStack_cc70 = (undefined8 *)puVar48[-0x1c];
    puStack_cc58 = (undefined8 *)puVar48[-0x19];
    uStack_cc60 = puVar48[-0x1a];
    uStack_cc48 = puVar48[-0x17];
    uStack_cc50 = puVar48[-0x18];
    puStack_cc38 = (undefined8 *)puVar48[-0x15];
    uStack_cc40 = puVar48[-0x16];
    uStack_cc28 = puVar48[-0x13];
    uStack_cc30 = puVar48[-0x14];
    uStack_cc18 = puVar48[-0x11];
    uStack_cc20 = puVar48[-0x12];
    uStack_cc08 = puVar48[-0xf];
    uStack_cc10 = puVar48[-0x10];
    uStack_cbf8 = puVar48[-0xd];
    uStack_cc00 = puVar48[-0xe];
    uStack_cbe8 = puVar48[-0xb];
    uStack_cbf0 = puVar48[-0xc];
    auStack_cbd8[0] = puVar48[-9];
    uStack_cbe0 = puVar48[-10];
    auStack_cbd8[2] = puVar48[-7];
    auStack_cbd8[1] = puVar48[-8];
    uStack_cbb8 = puVar48[-5];
    uStack_cbc0 = puVar48[-6];
    uStack_cba8 = puVar48[-3];
    puStack_cbb0 = (undefined8 *)puVar48[-4];
    uStack_cb98 = puVar48[-1];
    uStack_cba0 = puVar48[-2];
    puVar38 = &uStack_cc70;
    param_3 = param_1;
    FUN_109e2470c(puVar38,puVar26 + -4,param_1,puVar48,0,1);
    if ((int)puVar38 != 0) {
      puVar13 = &uStack_cc70;
      param_3 = param_1;
      func_0x000109e25424(puVar13,puVar26 + -4);
      goto code_r0x000109e9b798;
    }
    goto code_r0x000109e9b79c;
  case 0x135:
    puVar13 = puVar48 + -0x38;
    param_3 = param_1;
    func_0x000109e25424(puVar13,puVar26 + -8);
code_r0x000109e9b798:
    if (((ulong)puVar13 & 1) == 0) goto code_r0x000109e9b79c;
    break;
  case 0x136:
    uStack_cc70 = (undefined8 *)0x0;
    uVar14 = param_1[0x20];
    param_3 = param_1;
    FUN_109e2470c(uVar14,puVar26,param_1,puVar48,0,0);
    if ((int)uVar14 != 0) {
      puVar13 = (ulong *)param_1[0x20];
      param_3 = param_1;
      func_0x000109e25d60(puVar13,puVar26);
      goto code_r0x000109e9b798;
    }
    goto code_r0x000109e9b79c;
  case 0x137:
    uStack_cc70 = (undefined8 *)0x0;
    uVar14 = param_1[0x21];
    param_3 = param_1;
    FUN_109e2470c(uVar14,puVar26,param_1,puVar48,0,0);
    if ((int)uVar14 != 0) {
      uVar14 = param_1[0x21];
      param_3 = param_1;
      func_0x000109e25d60(uVar14,puVar26);
      if ((int)uVar14 != 0) {
        if ((*(byte *)(param_1[0x21] + 2) >> 6 & 1) != 0) {
          param_3 = (undefined8 *)&UNK_10f612131;
          FUN_109e9ed98(puVar26,param_1);
        }
        break;
      }
    }
    goto code_r0x000109e9b79c;
  case 0x138:
    uStack_cc70 = (undefined8 *)0x0;
    puVar13 = puVar48;
    param_3 = param_1;
    func_0x000109e25a0c(puVar48,puVar26,param_1,&uStack_cc70);
    if ((int)puVar13 != 0) {
      puVar13 = (ulong *)param_1[0x23];
      param_3 = param_1;
      func_0x000109e25d60(puVar13,puVar26);
      goto code_r0x000109e9b798;
    }
    goto code_r0x000109e9b79c;
  case 0x139:
    uStack_cc70 = (undefined8 *)0x0;
    puVar13 = puVar48;
    param_3 = param_1;
    func_0x000109e255e8(puVar48,puVar26,param_1,&uStack_cc70);
    if ((int)puVar13 != 0) {
      uVar14 = param_1[0x28];
      param_3 = param_1;
      func_0x000109e25d60(uVar14,puVar26);
      if ((int)uVar14 != 0) break;
    }
code_r0x000109e9b79c:
    puVar13 = puVar26 + (1 - uVar32) * 4;
    puVar48 = puVar48 + (long)(int)-(uint)bVar3 * 0x1c;
    psVar43 = psVar43 + -uVar32;
    puVar26 = puVar26 + uVar32 * -4;
    lVar49 = (long)*psVar43;
    uVar50 = *puVar13;
    goto LAB_109e9b7c0;
  }
LAB_109e9bef8:
  psVar43 = psVar43 + -uVar32;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x1d] = uStack_cc68;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x1c] = (ulong)uStack_cc70;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x1f] = (ulong)puStack_cc58;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x1e] = uStack_cc60;
  puVar13 = puVar48 + (long)(int)-(uint)bVar3 * 0x1c + 0x1c;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x25] = uStack_cc28;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x24] = uStack_cc30;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x27] = uStack_cc18;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x26] = uStack_cc20;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x21] = uStack_cc48;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x20] = uStack_cc50;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x23] = (ulong)puStack_cc38;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x22] = uStack_cc40;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x2d] = uStack_cbe8;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x2c] = uStack_cbf0;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x2f] = auStack_cbd8[0];
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x2e] = uStack_cbe0;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x29] = uStack_cc08;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x28] = uStack_cc10;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x2b] = uStack_cbf8;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x2a] = uStack_cc00;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x35] = uStack_cba8;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x34] = (ulong)puStack_cbb0;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x37] = uStack_cb98;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x36] = uStack_cba0;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x31] = auStack_cbd8[2];
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x30] = auStack_cbd8[1];
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x33] = uStack_cbb8;
  puVar48[(long)(int)-(uint)bVar3 * 0x1c + 0x32] = uStack_cbc0;
  puVar15 = puVar26 + uVar32 * -4 + 4;
  puVar26[uVar32 * -4 + 5] = uStack_cda8;
  *puVar15 = uStack_cdb0;
  *(int *)(puVar26 + uVar32 * -4 + 6) = (int)uVar7;
  uVar4 = *(ushort *)(&UNK_10e06acda + uVar50 * 2);
  sVar5 = *psVar43;
  uVar17 = (int)sVar5 + (int)*(short *)(&UNK_10e06af4e + ((ulong)uVar4 - 0xa3) * 2);
  puVar26[uVar32 * -4 + 7] = uVar22;
  if ((uVar17 < 0xa40) && (*(short *)(&UNK_10e067ee8 + (ulong)uVar17 * 2) == sVar5)) {
    lVar21 = (long)*(short *)(&UNK_10e069368 + (ulong)uVar17 * 2);
  }
  else {
    lVar21 = (long)*(short *)(&UNK_10e06b02c + ((ulong)uVar4 - 0xa3) * 2);
  }
  goto LAB_109e9bfc4;
LAB_109e9b81c:
  if (sVar5 == 5) goto LAB_109e9da40;
  puVar13[1] = uStack_cb68;
  *puVar13 = uStack_cb70;
  puVar13[3] = uStack_cb58;
  puVar13[2] = uStack_cb60;
  puVar13[9] = uStack_cb28;
  puVar13[8] = uStack_cb30;
  puVar13[0xb] = uStack_cb18;
  puVar13[10] = uStack_cb20;
  puVar13[5] = uStack_cb48;
  puVar13[4] = uStack_cb50;
  puVar13[7] = uStack_cb38;
  puVar13[6] = uStack_cb40;
  puVar13[0x11] = uStack_cae8;
  puVar13[0x10] = uStack_caf0;
  puVar13[0x13] = uStack_cad8;
  puVar13[0x12] = uStack_cae0;
  puVar13[0xd] = uStack_cb08;
  puVar13[0xc] = uStack_cb10;
  puVar13[0xf] = uStack_caf8;
  puVar13[0xe] = uStack_cb00;
  puVar13[0x19] = uStack_caa8;
  puVar13[0x18] = uStack_cab0;
  puVar13[0x1b] = uStack_ca98;
  puVar13[0x1a] = uStack_caa0;
  puVar13[0x15] = uStack_cac8;
  puVar13[0x14] = uStack_cad0;
  puVar13[0x17] = uStack_cab8;
  puVar13[0x16] = uStack_cac0;
  puVar15 = puVar26 + -3;
  *puVar15 = uVar50;
  puVar26[-2] = uStack_cb88;
  *(undefined4 *)(puVar26 + -1) = uStack_cb80;
  iStack_cdc8 = 3;
  *puVar26 = uStack_cb78;
LAB_109e9bfc4:
  psVar43 = psVar43 + 1;
  puVar48 = puVar13;
  puVar26 = puVar15;
  lVar49 = lVar21;
  goto LAB_109e95df4;
}



/* Entry: 109e9da50; end: 109e9dae3;  */

bool FUN_109e9da50(int param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    _strcasecmp();
  }
  else {
    _strcmp();
  }
  return param_1 != 0;
}



/* Entry: 109e9dae4; end: 109e9db57;  */

undefined8 * FUN_109e9dae4(undefined8 *param_1,undefined *param_2)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_110b5e8c8;
  param_1[1] = 0;
  param_1[7] = param_2;
  if (((byte)param_2[0xc] >> 1 & 1) == 0) {
    FUN_109eca058();
  }
  else {
    param_2 = &UNK_10e05bf38 + *(long *)(param_2 + 0x18);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = param_2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc;
  return param_1;
}



/* Entry: 109e9db58; end: 109e9dda3;  */

char * FUN_109e9db58(char *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  char acStack_d0 [20];
  undefined8 uStack_bc;
  undefined8 *apuStack_90 [5];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  sVar3 = *(short *)(&UNK_10e0679a4 + (long)(int)param_2 * 2);
  if (sVar3 < -0x148) {
    pcVar10 = (char *)0x0;
    pcVar14 = param_1;
  }
  else {
    if ((uint)param_3 < 0x18b) {
      uVar8 = (ulong)(byte)(&UNK_10e067d5c)[param_3 & 0xffffffff];
    }
    else {
      uVar8 = 2;
    }
    puVar12 = (undefined8 *)(&PTR_DAT_110b60dd0)[uVar8];
    uVar8 = 0;
    param_2 = puVar12;
    func_0x000109e9ddf8();
    iVar9 = (int)sVar3;
    iVar7 = 0xa40 - iVar9;
    builtin_strncpy(acStack_d0,"syntax error, unexpe",0x14);
    uStack_bc = 0x73252064657463;
    uVar1 = -iVar9 & iVar9 >> 0x1f;
    if (0xa2 < iVar7) {
      iVar7 = 0xa3;
    }
    uVar15 = uVar8;
    apuStack_90[0] = puVar12;
    if ((int)uVar1 < iVar7) {
      bVar4 = false;
      pcVar14 = (char *)((long)&uStack_bc + 7);
      lVar16 = (long)(int)uVar1;
      pcVar10 = ", expecting %s";
      iVar11 = 1;
      do {
        if ((lVar16 != 1) && (lVar16 == *(short *)(&UNK_10e067ee8 + (lVar16 + iVar9) * 2))) {
          if (iVar11 == 5) {
            uStack_bc = uStack_bc & 0xffffffffffffff;
            iVar11 = 1;
            uVar15 = uVar8;
            break;
          }
          param_2 = (undefined8 *)(&PTR_DAT_110b60dd0)[lVar16];
          apuStack_90[iVar11] = param_2;
          uVar6 = 0;
          func_0x000109e9ddf8();
          pcVar14 = pcVar14 + -1;
          do {
            cVar2 = *pcVar10;
            pcVar14 = pcVar14 + 1;
            *pcVar14 = cVar2;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          bVar5 = CARRY8(uVar6,uVar15);
          uVar15 = uVar6 + uVar15;
          iVar11 = iVar11 + 1;
          bVar4 = (bool)(bVar4 | bVar5);
          pcVar10 = " or %s";
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != iVar7);
    }
    else {
      bVar4 = false;
      iVar11 = 1;
    }
    pcVar14 = acStack_d0;
    _strlen();
    pcVar10 = pcVar14 + uVar15;
    if (bVar4 || CARRY8((ulong)pcVar14,uVar15)) {
      pcVar10 = (char *)0xffffffffffffffff;
    }
    else if (param_1 != (char *)0x0) {
      iVar7 = 0;
      pcVar13 = acStack_d0;
      do {
        cVar2 = *pcVar13;
        *param_1 = cVar2;
        if (cVar2 == '%') {
          if (pcVar13[1] != 's' || iVar11 <= iVar7) goto LAB_109e9dd70;
          param_2 = apuStack_90[iVar7];
          pcVar14 = param_1;
          func_0x000109e9ddf8();
          lVar16 = 2;
          iVar7 = iVar7 + 1;
        }
        else {
          if (cVar2 == '\0') break;
LAB_109e9dd70:
          pcVar14 = (char *)0x1;
          lVar16 = 1;
        }
        param_1 = param_1 + (long)pcVar14;
        pcVar13 = pcVar13 + lVar16;
      } while( true );
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pcVar10;
  }
  ___stack_chk_fail();
  pcVar14[0x28] = '\0';
  pcVar14[0x29] = '\0';
  pcVar14[0x2a] = '\0';
  pcVar14[0x2b] = '\0';
  pcVar14[0x2c] = '\0';
  pcVar14[0x2d] = '\0';
  pcVar14[0x2e] = '\0';
  pcVar14[0x2f] = '\0';
  pcVar14[0x30] = '\0';
  pcVar14[0x31] = '\0';
  pcVar14[0x32] = '\0';
  pcVar14[0x33] = '\0';
  pcVar14[0x34] = '\0';
  pcVar14[0x35] = '\0';
  pcVar14[0x36] = '\0';
  pcVar14[0x37] = '\0';
  pcVar14[0x20] = '\0';
  pcVar14[0x21] = '\0';
  pcVar14[0x22] = '\0';
  pcVar14[0x23] = '\0';
  pcVar14[0x10] = '\0';
  pcVar14[0x11] = '\0';
  pcVar14[0x12] = '\0';
  pcVar14[0x13] = '\0';
  pcVar14[0x14] = '\0';
  pcVar14[0x15] = '\0';
  pcVar14[0x16] = '\0';
  pcVar14[0x17] = '\0';
  pcVar14[0x18] = '\0';
  pcVar14[0x19] = '\0';
  pcVar14[0x1a] = '\0';
  pcVar14[0x1b] = '\0';
  pcVar14[0x1c] = '\0';
  pcVar14[0x1d] = '\0';
  pcVar14[0x1e] = '\0';
  pcVar14[0x1f] = '\0';
  *(undefined ***)pcVar14 = &PTR_FUN_110b5dcf0;
  pcVar14[8] = '\0';
  pcVar14[9] = '\0';
  pcVar14[10] = '\0';
  pcVar14[0xb] = '\0';
  pcVar14[0xc] = '\0';
  pcVar14[0xd] = '\0';
  pcVar14[0xe] = '\0';
  pcVar14[0xf] = '\0';
  pcVar14[0x40] = '\0';
  pcVar14[0x41] = '\0';
  pcVar14[0x42] = '\0';
  pcVar14[0x43] = '\0';
  pcVar14[0x44] = '\0';
  pcVar14[0x45] = '\0';
  pcVar14[0x46] = '\0';
  pcVar14[0x47] = '\0';
  pcVar10 = pcVar14 + 0x48;
  pcVar10[0] = '\0';
  pcVar10[1] = '\0';
  pcVar10[2] = '\0';
  pcVar10[3] = '\0';
  pcVar10[4] = '\0';
  pcVar10[5] = '\0';
  pcVar10[6] = '\0';
  pcVar10[7] = '\0';
  *(undefined8 *)(pcVar14 + 8) = param_2[3];
  *(undefined4 *)(pcVar14 + 0x10) = *(undefined4 *)(param_2 + 2);
  uVar17 = *param_2;
  *(undefined8 *)(pcVar14 + 0x1c) = param_2[1];
  *(undefined8 *)(pcVar14 + 0x14) = uVar17;
  puVar12 = (undefined8 *)(param_3 + 0x28);
  *puVar12 = pcVar10;
  *(undefined8 **)(pcVar14 + 0x38) = puVar12;
  *(char **)(param_3 + 0x30) = pcVar14 + 0x38;
  *(undefined8 **)(pcVar14 + 0x50) = puVar12;
  return pcVar14;
}



/* Entry: 109e9dda4; end: 109e9de9b;  */

void FUN_109e9dda4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110b5dcf0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = param_2[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar2 = *param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = param_2[1];
  *(undefined8 *)((long)param_1 + 0x14) = uVar2;
  puVar1 = (undefined8 *)(param_3 + 0x28);
  *puVar1 = param_1 + 9;
  param_1[7] = puVar1;
  *(undefined8 **)(param_3 + 0x30) = param_1 + 7;
  param_1[10] = puVar1;
  return;
}



/* Entry: 109e9de9c; end: 109e9ead7;  */

long * FUN_109e9de9c(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plStack_70;
  undefined4 uStack_64;
  
  *param_1 = param_2;
  param_1[1] = param_2 + 0x1b578;
  param_1[2] = param_2 + 0x1a070;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  *(undefined4 *)(param_1 + 0x1f) = param_3;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = (long)(param_1 + 7);
  param_1[6] = 0;
  param_1[8] = (long)(param_1 + 5);
  lVar12 = param_4;
  FUN_109f658b0(param_4,0x20);
  *(code **)(lVar12 + -0x10) = FUN_109e4c604;
  FUN_109ea2074();
  param_1[9] = lVar12;
  uStack_64 = 0;
  plVar7 = param_1;
  FUN_109f6658c(param_1,&uStack_64);
  param_1[10] = (long)plVar7;
  FUN_109f65c2c(param_4,&UNK_10f612eb7);
  lVar12 = 0;
  param_1[0x5d] = param_4;
  *(undefined1 *)((long)param_1 + 0x28b) = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  lVar10 = *param_1;
  uVar13 = *(undefined4 *)(lVar10 + 0x1a4b0);
  *(undefined4 *)(param_1 + 0x1d) = 0x6e;
  *(undefined4 *)((long)param_1 + 0xec) = uVar13;
  uVar13 = 0x881;
  if (*(char *)(lVar10 + 0x1a4c0) != '\x02') {
    uVar13 = 0;
  }
  uVar3 = 0x821;
  if (*(char *)(lVar10 + 0x1a4c0) != '\x01') {
    uVar3 = uVar13;
  }
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x14;
  *(undefined2 *)((long)param_1 + 0xe4) = 0x100;
  *(undefined1 *)((long)param_1 + 0x357) = 1;
  uVar13 = *(undefined4 *)(lVar10 + 0x1a0d8);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(lVar10 + 0x1a0dc);
  *(undefined4 *)((long)param_1 + 0x154) = uVar13;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(lVar10 + 0x1a094);
  uVar13 = *(undefined4 *)(lVar10 + 0x1a090);
  *(undefined4 *)((long)param_1 + 0x15c) = *(undefined4 *)(lVar10 + 0x1a08c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar10 + 0x1a118);
  *(undefined4 *)((long)param_1 + 0x164) = *(undefined4 *)(lVar10 + 0x1a134);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(lVar10 + 0x1a170);
  *(undefined4 *)((long)param_1 + 0x16c) = uVar13;
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(lVar10 + 0x1a370);
  *(undefined4 *)((long)param_1 + 0x174) = *(undefined4 *)(lVar10 + 0x1a334);
  lVar14 = *(long *)(lVar10 + 0x1a4f8);
  param_1[0x81] = lVar10 + 0x1b578;
  param_1[0x31] = lVar14;
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(lVar10 + 0x1a450);
  *(undefined4 *)((long)param_1 + 0x184) = *(undefined4 *)(lVar10 + 0x1a510);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(lVar10 + 0x1a13c);
  *(undefined8 *)((long)param_1 + 0x194) = *(undefined8 *)(lVar10 + 0x1a2b8);
  *(undefined4 *)((long)param_1 + 0x19c) = *(undefined4 *)(lVar10 + 0x1a4a0);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar10 + 0x1a338);
  *(undefined4 *)((long)param_1 + 0x1a4) = *(undefined4 *)(lVar10 + 0x1a2f0);
  param_1[0x35] = *(long *)(lVar10 + 0x1a498);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(lVar10 + 0x1a2b4);
  uVar13 = *(undefined4 *)(lVar10 + 0x1a174);
  *(undefined4 *)((long)param_1 + 0x1b4) = *(undefined4 *)(lVar10 + 0x1a178);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(lVar10 + 0x1a1f8);
  *(undefined4 *)((long)param_1 + 0x1bc) = *(undefined4 *)(lVar10 + 0x1a278);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar10 + 0x1a2f8);
  *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)(lVar10 + 0x1a378);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(lVar10 + 0x1a74c);
  *(undefined4 *)((long)param_1 + 0x1cc) = *(undefined4 *)(lVar10 + 0x1a740);
  *(undefined4 *)(param_1 + 0x3a) = uVar13;
  *(undefined4 *)((long)param_1 + 0x1d4) = *(undefined4 *)(lVar10 + 0x1a1f4);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(lVar10 + 0x1a274);
  *(undefined4 *)((long)param_1 + 0x1dc) = *(undefined4 *)(lVar10 + 0x1a2f4);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar10 + 0x1a374);
  uVar15 = NEON_rev64(*(undefined8 *)(lVar10 + 0x1a744),4);
  *(undefined8 *)((long)param_1 + 0x1ec) = *(undefined8 *)(lVar10 + 0x1a3f4);
  *(undefined8 *)((long)param_1 + 0x1e4) = uVar15;
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)(lVar10 + 0x1a4e8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar10 + 0x1a4f0);
  do {
    *(undefined4 *)((long)param_1 + lVar12 + 0x200) = *(undefined4 *)(lVar10 + 0x1a768 + lVar12);
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0xc);
  lVar12 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar12 + 0x20c) = *(undefined4 *)(lVar10 + 0x1a774 + lVar12);
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0xc);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(lVar10 + 0x1a3f0);
  *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(lVar10 + 0x1a3b4);
  param_1[0x43] = *(long *)(lVar10 + 0x1a758);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar10 + 0x1a760);
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar10 + 0x1a17c);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(lVar10 + 0x1a1fc);
  *(undefined4 *)((long)param_1 + 0x22c) = *(undefined4 *)(lVar10 + 0x1a27c);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(lVar10 + 0x1a2fc);
  *(undefined4 *)((long)param_1 + 0x234) = *(undefined4 *)(lVar10 + 0x1a37c);
  *(undefined4 *)((long)param_1 + 500) = *(undefined4 *)(lVar10 + 0x1a3fc);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(lVar10 + 0x1a764);
  *(undefined4 *)((long)param_1 + 0x23c) = *(undefined4 *)(lVar10 + 0x1a0f0);
  lVar12 = *(long *)(lVar10 + 0x1a898);
  param_1[0x49] = *(long *)(lVar10 + 0x1a1b8);
  param_1[0x48] = lVar12;
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(lVar10 + 0x1a1f0);
  *(undefined8 *)((long)param_1 + 0x254) = *(undefined8 *)(lVar10 + 0x1a238);
  *(undefined4 *)((long)param_1 + 0x25c) = *(undefined4 *)(lVar10 + 0x1a270);
  param_1[0x4c] = *(long *)(lVar10 + 0x1a8a0);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(lVar10 + 0x1a1b4);
  *(undefined4 *)((long)param_1 + 0x26c) = *(undefined4 *)(lVar10 + 0x1a234);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(lVar10 + 0x1a45c);
  *(undefined1 *)((long)param_1 + 0x28c) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x287) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((long)param_1 + 0x5ac) = 0;
  *(undefined8 *)((long)param_1 + 0x5a4) = 0;
  uVar4 = *(uint *)(lVar10 + 0xc);
  if ((uVar4 == 3) || (uVar11 = 0, uVar4 == 0)) {
    lVar12 = 0;
    uVar11 = 0;
    uVar5 = *(uint *)(lVar10 + 0x1a4a4);
    do {
      if (*(uint *)(&UNK_10e06b144 + lVar12) <= uVar5) {
        puVar1 = (uint *)((long)param_1 + uVar11 * 8 + 0x5c);
        *puVar1 = *(uint *)(&UNK_10e06b144 + lVar12);
        *(char *)(puVar1 + 1) = (char)*(undefined4 *)(&UNK_10e06b178 + lVar12);
        *(undefined1 *)((long)puVar1 + 5) = 0;
        uVar2 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar2;
        *(uint *)(param_1 + 0xb) = uVar2;
      }
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x34);
  }
  if ((*(char *)(lVar10 + 0x1b57c) != '\0') &&
     ((byte)(&UNK_110b87d68)[uVar4] <= *(byte *)(lVar10 + 0x1b68c))) {
    *(undefined4 *)((long)param_1 + uVar11 * 8 + 0x5c) = 100;
    *(undefined2 *)(param_1 + uVar11 + 0xc) = 0x114;
    uVar5 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar5;
    *(uint *)(param_1 + 0xb) = uVar5;
  }
  if ((*(char *)(lVar10 + 0x1b57d) != '\0') &&
     ((byte)(&UNK_110b87db0)[uVar4] <= *(byte *)(lVar10 + 0x1b68c))) {
    *(undefined4 *)((long)param_1 + uVar11 * 8 + 0x5c) = 300;
    *(undefined2 *)(param_1 + uVar11 + 0xc) = 0x11e;
    uVar5 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar5;
    *(uint *)(param_1 + 0xb) = uVar5;
  }
  if ((*(char *)(lVar10 + 0x1b57e) != '\0') &&
     ((byte)(&UNK_110b87d80)[uVar4] <= *(byte *)(lVar10 + 0x1b68c))) {
    *(undefined4 *)((long)param_1 + uVar11 * 8 + 0x5c) = 0x136;
    *(undefined2 *)(param_1 + uVar11 + 0xc) = 0x11f;
    uVar5 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar5;
    *(uint *)(param_1 + 0xb) = uVar5;
  }
  if ((*(char *)(lVar10 + 0x1b57f) != '\0') &&
     ((byte)(&UNK_110b87d98)[uVar4] <= *(byte *)(lVar10 + 0x1b68c))) {
    *(undefined4 *)((long)param_1 + uVar11 * 8 + 0x5c) = 0x140;
    *(undefined2 *)(param_1 + uVar11 + 0xc) = 0x120;
    *(int *)(param_1 + 0xb) = (int)uVar11 + 1;
  }
  plVar7 = param_1;
  FUN_109f65c2c(param_1,&UNK_10f612eb7);
  plStack_70 = plVar7;
  if ((int)param_1[0xb] != 0) {
    uVar11 = 0;
    do {
      FUN_109f65e1c(&plStack_70,&UNK_10f612eb8);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0xb));
  }
  param_1[0x29] = (long)plStack_70;
  if (*(char *)(*param_1 + 0x1a4ac) != '\0') {
    func_0x000109e9e6bc("all",0,&UNK_10f42b3be,0,param_1);
  }
  puVar8 = (undefined8 *)0x110;
  _malloc();
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  plVar7 = param_1 + -6;
  *puVar8 = plVar7;
  lVar12 = param_1[-5];
  puVar8[3] = lVar12;
  puVar8[4] = 0;
  if (lVar12 != 0) {
    *(undefined8 **)(lVar12 + 0x10) = puVar8;
  }
  puVar8[0x21] = 0;
  puVar8[0x20] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x19] = 0;
  puVar8[0x18] = 0;
  puVar8[0x17] = 0;
  puVar8[0x16] = 0;
  puVar8[0x15] = 0;
  puVar8[0x14] = 0;
  puVar8[0x13] = 0;
  puVar8[0x12] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0x28000000;
  param_1[0x20] = (long)(puVar8 + 6);
  puVar9 = (undefined8 *)0x110;
  _malloc();
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  *puVar9 = plVar7;
  puVar9[3] = puVar8;
  puVar9[4] = 0;
  puVar8[2] = puVar9;
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
  puVar9[0x12] = 0;
  puVar9[0x11] = 0;
  puVar9[0x14] = 0;
  puVar9[0x13] = 0;
  puVar9[0x16] = 0;
  puVar9[0x15] = 0;
  puVar9[0x18] = 0;
  puVar9[0x17] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1c] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x1d] = 0;
  puVar9[0x20] = 0;
  puVar9[0x1f] = 0;
  puVar9[6] = 0x28000000;
  puVar9[0x21] = 0;
  param_1[0x21] = (long)(puVar9 + 6);
  *(undefined1 *)((long)param_1 + 0x411) = 0;
  *(undefined4 *)((long)param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((long)param_1 + 0x114) = 0;
  puVar8 = (undefined8 *)0x110;
  _malloc();
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  *puVar8 = plVar7;
  puVar8[3] = puVar9;
  puVar8[4] = 0;
  puVar9[2] = puVar8;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  puVar8[0x13] = 0;
  puVar8[0x12] = 0;
  puVar8[0x15] = 0;
  puVar8[0x14] = 0;
  puVar8[0x17] = 0;
  puVar8[0x16] = 0;
  puVar8[0x19] = 0;
  puVar8[0x18] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x21] = 0;
  puVar8[0x20] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  param_1[0x23] = (long)(puVar8 + 6);
  puVar9 = (undefined8 *)0x110;
  _malloc();
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  *puVar9 = plVar7;
  puVar9[3] = puVar8;
  puVar9[4] = 0;
  param_1[-5] = (long)puVar9;
  puVar8[2] = puVar9;
  puVar9[9] = 0;
  puVar9[8] = 0;
  puVar9[0xb] = 0;
  puVar9[10] = 0;
  puVar9[0xd] = 0;
  puVar9[0xc] = 0;
  puVar9[0xf] = 0;
  puVar9[0xe] = 0;
  puVar9[0x11] = 0;
  puVar9[0x10] = 0;
  puVar9[0x13] = 0;
  puVar9[0x12] = 0;
  puVar9[0x15] = 0;
  puVar9[0x14] = 0;
  puVar9[0x17] = 0;
  puVar9[0x16] = 0;
  puVar9[0x19] = 0;
  puVar9[0x18] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x1d] = 0;
  puVar9[0x1c] = 0;
  puVar9[0x1f] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x21] = 0;
  puVar9[0x20] = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  param_1[0x28] = (long)(puVar9 + 6);
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)((long)param_1 + 0x41b) = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  lVar12 = *param_1;
  *(bool *)((long)param_1 + 0x592) = *(char *)(lVar12 + 0x1a4b4) != '\0';
  param_1[0xb3] = *(long *)(lVar12 + 0x1a528);
  *(uint *)(param_1 + 0xb4) =
       CONCAT13(~-(*(char *)(lVar12 + 0x1a4bf) == '\0'),
                CONCAT12(~-(*(char *)(lVar12 + 0x1a4b8) == '\0'),
                         CONCAT11(~-(*(char *)(lVar12 + 0x1a4b5) == '\0'),
                                  ~-(*(char *)(lVar12 + 0x1a530) == '\0')))) & 0x1010101;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  iVar6 = *(int *)((long)param_1 + 0xec);
  if (iVar6 == 0) {
    iVar6 = (int)param_1[0x1d];
  }
  *(int *)(param_1 + 0x1d) = iVar6;
  FUN_109e9ead8(param_1,0);
  return param_1;
}



/* Entry: 109e9ead8; end: 109e9ebe3;  */

void FUN_109e9ead8(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x58);
  if (*(uint *)(param_1 + 0x58) != 0) {
    pcVar4 = (char *)(param_1 + 0x61);
    do {
      if ((*(int *)(pcVar4 + -5) == *(int *)(param_1 + 0xe8)) &&
         (*pcVar4 == *(char *)(param_1 + 0xe4))) {
        *(uint *)(param_1 + 0xf4) = (uint)(byte)pcVar4[-1];
        return;
      }
      pcVar4 = pcVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_2 != 0) {
    FUN_109f65d74(param_1,&UNK_10f612ea4);
    FUN_109e9ed98(param_2,param_1,&UNK_10f612ef3);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 - 1U < 2) {
    uVar2 = 100;
  }
  else {
    if (iVar1 != 3 && iVar1 != 0) {
      return;
    }
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x434);
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  return;
}



/* Entry: 109e9ebe4; end: 109e9ed97;  */

bool FUN_109e9ebe4(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xec);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 0xe8);
  }
  iVar1 = param_3;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    iVar1 = param_2;
  }
  if (iVar1 - 1U < uVar3) goto LAB_109e9ed64;
  FUN_109f65d9c(param_1,param_5,&stack0x00000000);
  FUN_109f65d74(param_1,&UNK_10f612ea4);
  FUN_109f65d74(param_1,&UNK_10f612ea4);
  if ((param_2 == 0) || (param_3 == 0)) {
    if ((param_2 != 0) || (param_3 != 0)) {
      puVar2 = &UNK_10f612ed9;
      goto LAB_109e9ecf0;
    }
  }
  else {
    puVar2 = &UNK_10f612ec4;
LAB_109e9ecf0:
    FUN_109f65d74(param_1,puVar2);
  }
  FUN_109f65d74(param_1,&UNK_10f612ea4);
  FUN_109e9ed98(param_4,param_1,&UNK_10f612ee8);
LAB_109e9ed64:
  return iVar1 - 1U < uVar3;
}



/* Entry: 109e9ed98; end: 109e9edcf;  */

void FUN_109e9ed98(undefined8 param_1,long param_2,undefined8 param_3)

{
  *(undefined1 *)(param_2 + 0x28b) = 1;
  FUN_109e9ef7c(param_1,param_2,0,param_3,&stack0x00000000);
  return;
}



/* Entry: 109e9edd0; end: 109e9ef7b;  */

void FUN_109e9edd0(long param_1,long param_2,uint param_3,char *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  if (param_4 == (char *)0x0) {
LAB_109e9ee80:
    *(bool *)(param_1 + 0xe4) = param_3 == 100;
    if (param_3 == 100) {
LAB_109e9ee90:
      *(undefined1 *)(param_1 + 0x357) = 0;
      bVar2 = true;
    }
    else {
LAB_109e9ef08:
      bVar2 = false;
    }
LAB_109e9ef0c:
    if (*(uint *)(param_1 + 0xec) != 0) {
      param_3 = *(uint *)(param_1 + 0xec);
    }
    *(uint *)(param_1 + 0xe8) = param_3;
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x43d) == '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        bVar3 = param_3 == 0x8c;
        if (bVar3) {
          bVar2 = true;
        }
        if (bVar2) goto LAB_109e9ef5c;
      }
      else if (bVar2) {
        bVar3 = false;
        goto LAB_109e9ef5c;
      }
      bVar3 = param_3 < 0x8c;
      goto LAB_109e9ef5c;
    }
  }
  else {
    if (((*param_4 == 'e') && (param_4[1] == 's')) && (param_4[2] == '\0')) {
      *(undefined1 *)(param_1 + 0xe4) = 1;
      if ((param_3 == 100) &&
         (FUN_109e9ed98(param_2,param_1,&UNK_10f612fd3), (*(byte *)(param_1 + 0xe4) & 1) == 0))
      goto LAB_109e9ef08;
      goto LAB_109e9ee90;
    }
    if ((int)param_3 < 0x96) {
      FUN_109e9ed98(param_2,param_1,&UNK_10f612fad);
      goto LAB_109e9ee80;
    }
    pcVar4 = param_4;
    _strcmp(param_4,&UNK_10f612f23);
    if ((int)pcVar4 == 0) {
LAB_109e9ee60:
      bVar2 = false;
      *(undefined1 *)(param_1 + 0xe4) = 0;
      goto LAB_109e9ef0c;
    }
    _strcmp(param_4,&UNK_10f612f28);
    if ((int)param_4 != 0) {
      FUN_109e9ed98(param_2,param_1,&UNK_10f612f61);
      goto LAB_109e9ee60;
    }
    if ((*(int *)(param_1 + 0x18) != 0) && (*(char *)(*(long *)(param_1 + 0x10) + 1099) == '\0')) {
      FUN_109e9ed98(param_2,param_1,&UNK_10f612f36);
    }
    *(undefined1 *)(param_1 + 0xe4) = 0;
    if (*(uint *)(param_1 + 0xec) != 0) {
      param_3 = *(uint *)(param_1 + 0xec);
    }
    *(uint *)(param_1 + 0xe8) = param_3;
  }
  bVar3 = true;
LAB_109e9ef5c:
  *(bool *)(param_1 + 0xe5) = bVar3;
  uVar6 = (ulong)*(uint *)(param_1 + 0x58);
  if (*(uint *)(param_1 + 0x58) != 0) {
    pcVar4 = (char *)(param_1 + 0x61);
    do {
      if ((*(int *)(pcVar4 + -5) == *(int *)(param_1 + 0xe8)) &&
         (*pcVar4 == *(char *)(param_1 + 0xe4))) {
        *(uint *)(param_1 + 0xf4) = (uint)(byte)pcVar4[-1];
        return;
      }
      pcVar4 = pcVar4 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_2 != 0) {
    FUN_109f65d74(param_1,&UNK_10f612ea4);
    FUN_109e9ed98(param_2,param_1,&UNK_10f612ef3);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 - 1U < 2) {
    uVar5 = 100;
  }
  else {
    if (iVar1 != 3 && iVar1 != 0) {
      return;
    }
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x434);
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  return;
}



/* Entry: 109e9ef7c; end: 109e9f043;  */

bool FUN_109e9ef7c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar2 = &UNK_10f61339e;
  }
  else {
    puVar2 = &UNK_10f613399;
  }
  FUN_109f65e1c(param_2 + 0x2e8,puVar2);
  FUN_109f65e1c(param_2 + 0x2e8,&UNK_10f6133a1);
  FUN_109f65e44(param_2 + 0x2e8,param_4,param_5);
  lVar3 = *(long *)(param_2 + 0x2e8);
  lVar1 = lVar3;
  _strlen();
  FUN_109f6595c(lVar3,lVar1 + 2);
  if (lVar3 != 0) {
    _memcpy(lVar3 + lVar1,&UNK_10f61336e,1);
    *(undefined1 *)(lVar3 + lVar1 + 1) = 0;
    *(long *)(param_2 + 0x2e8) = lVar3;
  }
  return lVar3 != 0;
}



/* Entry: 109e9f044; end: 109e9f07f;  */

void FUN_109e9f044(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_109e9ef7c(param_1,param_2,5,param_3,&stack0x00000000);
  }
  return;
}



/* Entry: 109e9f080; end: 109e9f0af;  */

bool FUN_109e9f080(long param_1,uint param_2,uint param_3)

{
  if (*(char *)(*(long *)(param_1 + 8) + 0xc3) != '\0') {
    return (byte)(&UNK_110b87ca8)[param_2] <= param_3;
  }
  return false;
}



/* Entry: 109e9f0b0; end: 109e9f5cf;  */

byte FUN_109e9f0b0(long param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xf8);
  func_0x000109ea2064();
  if (((*(char *)(*(long *)(param_1 + 8) + 0xd4) == '\0') ||
      (param_3 < (byte)(&UNK_110b89d00)[param_2 & 0xffffffff])) ||
     ((*(uint *)(*(long *)(param_1 + 0x10) + 0x8a4) & uVar2) == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 0x8a8) >> 1 & 1;
  }
  return bVar1;
}



/* Entry: 109e9f5d0; end: 109e9f9db;  */

void FUN_109e9f5d0(undefined8 param_1,ulong param_2,long param_3,byte *param_4)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  long lStack_98;
  int iStack_90;
  uint auStack_88 [4];
  uint auStack_78 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((uint)*(undefined8 *)param_4 >> 0xb & 1) == 0) {
    if (((uint)*(undefined8 *)param_4 >> 10 & 1) == 0) {
      uVar4 = param_2;
      FUN_109e22fbc();
      if ((uVar4 & 1) == 0) {
        if (*(char *)(param_2 + 0xe4) == '\x01') {
          puVar5 = &UNK_10f6130f9;
        }
        else {
          puVar5 = &UNK_10f613145;
        }
LAB_109e9f6fc:
        FUN_109e9ed98(param_1,param_2,puVar5);
      }
    }
    else {
      if ((*(byte *)(param_2 + 0x359) & 1) == 0) {
        uVar7 = *(uint *)(param_2 + 0xec);
        if (uVar7 == 0) {
          uVar7 = *(uint *)(param_2 + 0xe8);
        }
        uVar6 = 299;
        if (*(char *)(param_2 + 0xe4) == '\0') {
          uVar6 = 0x8b;
        }
        if (uVar7 <= uVar6) {
          puVar5 = &UNK_10f6130a8;
          goto LAB_109e9f6fc;
        }
      }
      if (*(char *)(param_2 + 0x35a) == '\x01') {
        puVar5 = &UNK_10f6130a8;
        goto LAB_109e9f6cc;
      }
    }
  }
  else {
    if ((*(byte *)(param_2 + 0x337) & 1) == 0) {
      uVar7 = *(uint *)(param_2 + 0xec);
      if (uVar7 == 0) {
        uVar7 = *(uint *)(param_2 + 0xe8);
      }
      uVar6 = 0x135;
      if (*(char *)(param_2 + 0xe4) == '\0') {
        uVar6 = 0x1ad;
      }
      if (uVar7 <= uVar6) {
        puVar5 = &UNK_10f613049;
        goto LAB_109e9f6fc;
      }
    }
    if (*(char *)(param_2 + 0x338) == '\x01') {
      puVar5 = &UNK_10f613049;
LAB_109e9f6cc:
      FUN_109e9f044(param_1,param_2,puVar5);
    }
  }
  if (*(int *)(param_2 + 0xf8) == 4) {
    if ((*param_4 >> 6 & 1) != 0) {
      puVar5 = &UNK_10f6131ae;
      goto LAB_109e9f73c;
    }
  }
  else if ((*(int *)(param_2 + 0xf8) == 0) && ((*param_4 >> 5 & 1) != 0)) {
    puVar5 = &UNK_10f613176;
LAB_109e9f73c:
    FUN_109e9ed98(param_1,param_2,puVar5);
  }
  if (*(long *)(param_3 + 0x200) != 0) {
    FUN_109e9ebe4(param_2,0x96,300,param_1,&UNK_10f6131e9);
  }
  lVar8 = 0;
  auStack_78[2] = 0;
  auStack_78[0] = 0xe60;
  auStack_78[1] = 0;
  lStack_98 = *(long *)param_4;
  iStack_90 = *(int *)(param_4 + 8);
  puVar2 = (ulong *)(param_3 + 0x38);
  do {
    *(uint *)((long)puVar2 + lVar8) =
         *(uint *)((long)puVar2 + lVar8) | *(uint *)((long)&lStack_98 + lVar8);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0xc);
  if (*(int *)(param_2 + 0xf8) == 3) {
    if ((*(byte *)(param_2 + 0x315) & 1) == 0) {
      uVar7 = *(uint *)(param_2 + 0xec);
      if (uVar7 == 0) {
        uVar7 = *(uint *)(param_2 + 0xe8);
      }
      if ((uVar7 < 400) || ((*(byte *)(param_2 + 0xe4) & 1) != 0)) goto LAB_109e9f80c;
    }
    if (((uint)*puVar2 >> 6 & 1) != 0) {
      *(ulong *)(param_3 + 0x38) = *puVar2 & 0xffff9fffffffffff | 0x200000000000;
      *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(*(long *)(param_2 + 0x140) + 0x40);
    }
  }
LAB_109e9f80c:
  if ((*(byte *)(param_2 + 0x309) & 1) == 0) {
    uVar7 = *(uint *)(param_2 + 0xec);
    if (uVar7 == 0) {
      uVar7 = *(uint *)(param_2 + 0xe8);
    }
    if ((uVar7 < 0x1b8) || ((*(byte *)(param_2 + 0xe4) & 1) != 0)) goto LAB_109e9f85c;
  }
  if ((((uint)*puVar2 >> 6 & 1) != 0) && (*(char *)(*(long *)(param_2 + 8) + 0x6b) != '\0')) {
    *(ulong *)(param_3 + 0x38) = *puVar2 & 0xfffcffffffffffff | 0x1000000000000;
    *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(*(long *)(param_2 + 0x140) + 0x48);
  }
LAB_109e9f85c:
  plVar9 = *(long **)(param_3 + 0x208) + -5;
  if (**(long **)(param_3 + 0x208) != 0 && plVar9 != (long *)0x0) {
    do {
      lVar8 = 0;
      lVar10 = plVar9[7];
      pbVar11 = (byte *)(lVar10 + 0x38);
      auStack_88[0] = (uint)*(undefined8 *)pbVar11;
      auStack_88[1] = (uint)((ulong)*(undefined8 *)pbVar11 >> 0x20);
      auStack_88[2] = *(int *)(lVar10 + 0x40);
      do {
        *(uint *)((long)auStack_88 + lVar8) =
             *(uint *)((long)auStack_88 + lVar8) & *(uint *)((long)auStack_78 + lVar8);
        uVar7 = auStack_88[2];
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0xc);
      lVar3 = CONCAT44(auStack_88[1],auStack_88[0]);
      auStack_88[0] = 0;
      auStack_88[1] = 0;
      auStack_88[2] = 0;
      lVar8 = 0;
      if (lVar3 == 0 && uVar7 == 0) {
        do {
          *(uint *)(pbVar11 + lVar8) =
               *(uint *)(pbVar11 + lVar8) | *(uint *)((long)&lStack_98 + lVar8);
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0xc);
      }
      else {
        auStack_88[0] = (uint)*(undefined8 *)pbVar11;
        auStack_88[1] = (uint)((ulong)*(undefined8 *)pbVar11 >> 0x20);
        auStack_88[2] = *(int *)(lVar10 + 0x40);
        do {
          *(uint *)((long)auStack_88 + lVar8) =
               *(uint *)((long)auStack_88 + lVar8) & *(uint *)((long)auStack_78 + lVar8);
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0xc);
        if (CONCAT44(auStack_88[1],auStack_88[0]) != lStack_98 || auStack_88[2] != iStack_90) {
          FUN_109e9ed98(param_1,param_2,&UNK_10f613220);
        }
      }
      if (((*param_4 & 0x60) == 0) && ((*pbVar11 & 1) != 0)) {
        FUN_109e9ed98(param_1,param_2,&UNK_10f613276);
      }
      plVar1 = plVar9 + 5;
      plVar9 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar9 != (long *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__printf_11034c7f0)(&UNK_10f6132d4);
    return;
  }
  return;
}



/* Entry: 109e9f9dc; end: 109e9f9e7;  */

void FUN_109e9f9dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__printf_11034c7f0)(&UNK_10f6132d4);
  return;
}



/* Entry: 109e9f9e8; end: 109e9fa43;  */

void FUN_109e9f9e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  _puts(&DAT_10f2da0fd);
  for (plVar1 = *(long **)(param_1 + 0x40); plVar2 = plVar1 + -5,
      *plVar1 != 0 && plVar2 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)*plVar2)(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__puts_11034c9b8)(&DAT_10f2da10d);
  return;
}



/* Entry: 109e9fa44; end: 109e9fdeb;  */

void FUN_109e9fa44(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 0:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    (**(code **)**(undefined8 **)(param_1 + 0x40))();
    _printf(&UNK_10f6038cb);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    goto code_r0x000109e9fad8;
  case 1:
  case 2:
  case 0x13:
  case 0x17:
  case 0x23:
  case 0x24:
    _printf(&UNK_10f6038cb);
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    goto code_r0x000109e9fad8;
  default:
    goto LAB_109e9fd28;
  case 0x22:
    (**(code **)**(undefined8 **)(param_1 + 0x40))();
    _printf(&UNK_10f6132ea);
    (**(code **)**(undefined8 **)(param_1 + 0x48))();
    _printf(": ");
    puVar2 = *(undefined8 **)(param_1 + 0x50);
code_r0x000109e9fad8:
                    /* WARNING: Could not recover jumptable at 0x000109e9faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)();
    return;
  case 0x25:
  case 0x26:
    (**(code **)**(undefined8 **)(param_1 + 0x40))();
    goto code_r0x000109e9fd18;
  case 0x27:
    (**(code **)**(undefined8 **)(param_1 + 0x40))();
    puVar3 = &UNK_10f6132e4;
    break;
  case 0x28:
    (**(code **)**(undefined8 **)(param_1 + 0x40))();
    _printf(&UNK_10f5881f5);
    (**(code **)**(undefined8 **)(param_1 + 0x48))();
    puVar3 = &UNK_10f4edf8b;
    goto code_r0x000109e9fdc4;
  case 0x2a:
    (**(code **)**(undefined8 **)(param_1 + 0x40))();
    _printf(&UNK_10f6132ed);
    plVar4 = *(long **)(param_1 + 0x60) + -5;
    if (**(long **)(param_1 + 0x60) != 0 && plVar4 != (long *)0x0) {
      do {
        if (*(long **)(param_1 + 0x60) == (long *)(param_1 + 0x70) ||
            *(long **)(param_1 + 0x60) != plVar4 + 5) {
          _printf(&DAT_10f68f19e);
        }
        (**(code **)*plVar4)(plVar4);
        plVar1 = plVar4 + 5;
        plVar4 = (long *)*plVar1 + -5;
      } while (*(long *)*plVar1 != 0 && plVar4 != (long *)0x0);
    }
    goto code_r0x000109e9fdbc;
  case 0x2b:
    goto code_r0x000109e9fd18;
  case 0x2c:
    puVar3 = &UNK_10f6132f0;
    break;
  case 0x2d:
    puVar3 = &UNK_10f6132f4;
    break;
  case 0x2f:
    goto code_r0x000109e9fccc;
  case 0x30:
code_r0x000109e9fd18:
    puVar3 = &UNK_10f6038cb;
    break;
  case 0x31:
code_r0x000109e9fccc:
    puVar3 = &UNK_10f6132f8;
    break;
  case 0x32:
    puVar3 = &UNK_10f6132fc;
    break;
  case 0x33:
    puVar3 = &UNK_10f613302;
    break;
  case 0x34:
    _printf(&UNK_10f6132ed);
    plVar4 = *(long **)(param_1 + 0x60) + -5;
    if (**(long **)(param_1 + 0x60) != 0 && plVar4 != (long *)0x0) {
      do {
        if (*(long **)(param_1 + 0x60) == (long *)(param_1 + 0x70) ||
            *(long **)(param_1 + 0x60) != plVar4 + 5) {
          _printf(&DAT_10f68f19e);
        }
        (**(code **)*plVar4)(plVar4);
        plVar1 = plVar4 + 5;
        plVar4 = (long *)*plVar1 + -5;
      } while (*(long *)*plVar1 != 0 && plVar4 != (long *)0x0);
    }
code_r0x000109e9fdbc:
    puVar3 = &UNK_10f48d1ae;
code_r0x000109e9fdc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__printf_11034c7f0)(puVar3);
    return;
  case 0x35:
    _printf(&UNK_10f5af6d6);
    plVar4 = *(long **)(param_1 + 0x60) + -5;
    if (**(long **)(param_1 + 0x60) != 0 && plVar4 != (long *)0x0) {
      do {
        if (*(long **)(param_1 + 0x60) == (long *)(param_1 + 0x70) ||
            *(long **)(param_1 + 0x60) != plVar4 + 5) {
          _printf(&DAT_10f68f19e);
        }
        (**(code **)*plVar4)(plVar4);
        plVar1 = plVar4 + 5;
        plVar4 = (long *)*plVar1 + -5;
      } while (*(long *)*plVar1 != 0 && plVar4 != (long *)0x0);
    }
    puVar3 = &UNK_10f613308;
    goto code_r0x000109e9fdc4;
  }
  _printf(puVar3);
LAB_109e9fd28:
  return;
}


