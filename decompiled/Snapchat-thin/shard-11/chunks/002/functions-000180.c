/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108366480; end: 1083664bb;  */

void FUN_108366480(void)

{
  int iVar1;
  
  if ((bRam0000000113826cd8 & 1) == 0) {
    iVar1 = 0x13826cd8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113826cd8);
      return;
    }
  }
  return;
}



/* Entry: 1083664bc; end: 10836655b;  */

void FUN_1083664bc(undefined8 *param_1,undefined2 param_2,int param_3)

{
  for (; 7 < param_3; param_3 = param_3 + -8) {
    param_1[1] = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
    *param_1 = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
    param_1 = param_1 + 2;
  }
  while (0 < param_3) {
    *(undefined2 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)param_1 + 2);
    param_3 = param_3 + -1;
  }
  return;
}



/* Entry: 10836655c; end: 1083665ff;  */

void FUN_10836655c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piStack_58;
  
  FUN_108343a94(&piStack_58);
  FUN_108366600(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&piStack_58,2);
  if (piStack_58 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piStack_58;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
    if (bVar3) {
      *piStack_58 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108366600; end: 10836737b;  */

void FUN_108366600(undefined8 *param_1,uint *param_2,ulong param_3,ulong param_4,uint *param_5,
                  ulong param_6,undefined8 *param_7,undefined8 *param_8,long *param_9,int param_10)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  undefined ***pppuVar19;
  undefined8 **ppuVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  int extraout_w10;
  ulong uVar23;
  long *plVar24;
  bool bVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined4 uStack_2fc;
  int iStack_2ec;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_250 [24];
  undefined8 *puStack_238;
  undefined1 auStack_230 [24];
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined2 uStack_1f8;
  undefined1 uStack_1f6;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  uint auStack_1e0 [2];
  long alStack_1d8 [12];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  ulong uStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  uint uStack_110;
  ulong uStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  uint auStack_e0 [24];
  uint *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1083a3348(&uStack_2a8,&UNK_10f48fe86);
  iStack_2ec = param_10;
  lVar26 = param_3 * 0x18;
  puVar12 = param_2;
  for (lVar27 = lVar26; lVar27 != 0; lVar27 = lVar27 + -0x18) {
    if (4 < *puVar12) goto LAB_10836718c;
    FUN_1083a3a90(&uStack_2a8,&UNK_10f48fe9b);
    puVar12 = puVar12 + 6;
  }
  puVar22 = &UNK_10f48d20b;
  FUN_10818f348(&uStack_2a8,&UNK_10f48d20b);
  bVar25 = false;
  puVar12 = param_5 + 2;
  lVar29 = param_6 << 4;
  for (lVar27 = lVar29; lVar27 != 0; lVar27 = lVar27 + -0x10) {
    puVar10 = puVar12;
    puVar22 = &DAT_10f68f20c;
    FUN_1083a34a4(puVar12,&DAT_10f68f20c);
    if ((int)puVar10 != 0) {
      if (puVar12[-2] != 1) {
        *param_1 = 0;
        FUN_1083a3348(param_1 + 1,&UNK_10f48fea5);
        goto LAB_108367144;
      }
      bVar25 = true;
    }
    puVar12 = puVar12 + 4;
  }
  puStack_80 = auStack_e0;
  uStack_78 = 0xc00000000;
  if (!bVar25) {
    if (5 < param_6) {
      *param_1 = 0;
      func_0x000108368494(param_1 + 1);
      goto LAB_108367140;
    }
    puVar7 = (undefined *)0x0;
    for (; puVar11 = puVar7, lVar29 != 0; lVar29 = lVar29 + -0x10) {
      if ((int)puVar11 < (int)(uint)((ulong)uStack_78 >> 0x21)) {
        func_0x000108368604(puStack_80 + (long)(int)puVar11 * 4);
        puVar11 = puVar22;
      }
      else {
        FUN_108367fd4();
        func_0x000108368604(puVar11 + (long)(int)uStack_78 * 0x10);
        FUN_10836801c(&puStack_80,puVar11,puVar22);
      }
      uVar1 = (int)uStack_78 + 1;
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
      puVar7 = (undefined *)(ulong)uVar1;
      puVar22 = puVar11;
    }
    auStack_1e0[0] = 1;
    puVar22 = &DAT_10f68f20c;
    FUN_1083a3348(alStack_1d8,&DAT_10f68f20c);
    lVar27 = (long)(int)uStack_78;
    if ((int)uStack_78 < (int)(uStack_78._4_4_ >> 1)) {
      FUN_1082f8a4c(puStack_80 + lVar27 * 4,auStack_1e0);
    }
    else {
      FUN_108367fd4();
      FUN_1082f8a4c(lVar27 + (long)(int)uStack_78 * 0x10,auStack_1e0);
      FUN_10836801c(&puStack_80,lVar27,puVar22);
    }
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)uStack_78 + 1);
    FUN_1083a3ca0(alStack_1d8[0]);
    param_6 = (ulong)(int)uStack_78;
    param_5 = puStack_80;
  }
  FUN_1083a3348(&uStack_2b0,&UNK_10f48fef5);
  lVar29 = param_6 << 4;
  puVar12 = param_5;
  for (lVar27 = lVar29; lVar27 != 0; lVar27 = lVar27 + -0x10) {
    if (7 < *puVar12) goto LAB_10836718c;
    FUN_1083a3a90(&uStack_2b0,&UNK_10f48fe9b);
    puVar12 = puVar12 + 4;
  }
  FUN_10818f348(&uStack_2b0,&UNK_10f48d20b);
  func_0x000108368468(uStack_2b0);
  func_0x000108368468(uStack_2a8);
  func_0x000108368468(*param_7);
  func_0x0001083685b8(uStack_2b0);
  func_0x0001083685b8(*param_8);
  lVar27 = *param_9;
  *param_9 = 0;
  if (param_3 == 0) {
    func_0x000108368460(&UNK_10f48fd93);
  }
  else if (param_3 < 9) {
    if ((param_4 == 0) || ((param_4 & 3) != 0)) {
      func_0x000108368460(&UNK_10f48fddd);
    }
    else {
      lVar28 = lVar26;
      puVar12 = param_2;
      if (param_4 < 0x401) {
        do {
          if (lVar28 == 0) {
            ppuStack_138 = (undefined **)0x1138270b0;
            auStack_1e0[0] = CONCAT31(auStack_1e0[0]._1_3_,1);
            goto LAB_1083669a4;
          }
          uVar23 = *(ulong *)(puVar12 + 2);
          if ((uVar23 & 3) != 0) {
            func_0x000108368460(&UNK_10f48fe29);
            goto LAB_1083669a0;
          }
          if (param_4 <= uVar23) break;
          uVar1 = *puVar12;
          if (4 < uVar1) goto LAB_10836718c;
          lVar28 = lVar28 + -0x18;
          puVar12 = puVar12 + 6;
        } while (*(long *)(&UNK_10df1dda0 + (ulong)uVar1 * 8) + uVar23 <= param_4);
        func_0x000108368460(&UNK_10f48fe55);
      }
      else {
        func_0x000108368460(&UNK_10f48fe0f);
      }
    }
  }
  else {
    func_0x000108368460(&UNK_10f48fdb5);
  }
LAB_1083669a0:
  auStack_1e0[0] = auStack_1e0[0] & 0xffffff00;
LAB_1083669a4:
  FUN_1083a33c4(alStack_1d8,&ppuStack_138);
  FUN_1083a3ca0(ppuStack_138);
  if ((auStack_1e0[0] & 1) == 0) {
    *param_1 = 0;
    lVar27 = alStack_1d8[0];
    if ((alStack_1d8[0] != 0) && (alStack_1d8[0] != 0x1138270b0)) {
      do {
        func_0x000108368530();
      } while (extraout_w10 != 0);
    }
    param_1[1] = lVar27;
    FUN_1083a3ca0();
  }
  else {
    FUN_1083a3ca0(alStack_1d8[0]);
    puVar12 = param_2 + 4;
    lVar28 = lVar26;
    do {
      if (lVar28 == 0) {
        if (6 < param_6) {
          func_0x000108368540();
          func_0x000108368494();
          goto LAB_108367124;
        }
        param_5 = param_5 + 2;
        lVar28 = lVar29;
        goto LAB_108366a54;
      }
      puVar10 = puVar12;
      FUN_10836737c();
      puVar12 = puVar12 + 6;
      lVar28 = lVar28 + -0x18;
    } while (((ulong)puVar10 & 1) != 0);
    func_0x000108368540();
    FUN_1083a3c34(&UNK_10f48ff08);
  }
  goto LAB_108367124;
LAB_108366ca8:
  if (plVar14 != (long *)puStack_238[8] || plVar24 != plVar4) {
    plVar3 = plVar14;
    if (plVar24 != plVar4) {
      plVar3 = plVar24;
    }
    if ((*(int *)(*plVar3 + 0xc) != 1) ||
       (lVar28 = *(long *)(*plVar3 + 0x10), *(char *)(lVar28 + 0x56) != '\x01')) goto LAB_108366cdc;
    if (*(int *)(lVar28 + 0x40) == 1) {
      func_0x000108368520();
      lVar27 = 0;
      uStack_2fc = 0;
      iStack_2ec = 2;
    }
    else {
      if (*(int *)(lVar28 + 0x40) == 0) goto LAB_10836718c;
      plVar14 = *(long **)(*(long *)(*(long *)(lVar28 + 0x38) + 8) + 0x20);
      (**(code **)(*plVar14 + 0x38))(plVar14,*(undefined8 *)(*(long *)puStack_238[2] + 0x38));
      if (lVar27 == 0) {
        *param_1 = 0;
        FUN_1083a3348(param_1 + 1,&UNK_10f48ffa0);
        goto LAB_1083670fc;
      }
      uStack_2fc = 1;
      if ((int)plVar14 == 0) {
        uStack_2fc = 2;
      }
      if (param_10 == 0) {
        *param_1 = 0;
        FUN_1083a3348(param_1 + 1,&UNK_10f48ffd2);
        goto LAB_1083670fc;
      }
    }
    pppuStack_130 = (undefined ***)puStack_238[2];
    ppuStack_138 = &PTR_DAT_110a3eeb8;
    pppuStack_128 = (undefined ***)0x0;
    uStack_120 = 0;
    uStack_118 = 0xffffffff;
    uStack_114 = 0;
    uStack_110 = 0;
    FUN_1083c2df0(&ppuStack_138);
    uVar1 = uStack_110;
    uVar9 = uStack_118;
    puVar15 = (undefined4 *)0xa0;
    __Znwm();
    puStack_298 = puStack_218;
    puStack_2a0 = puStack_238;
    uStack_268 = uStack_148;
    uStack_270 = uStack_150;
    uStack_260 = uStack_140;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    uStack_288 = uStack_168;
    uStack_290 = uStack_170;
    uStack_280 = uStack_160;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    puStack_218 = (undefined8 *)0x0;
    puStack_238 = (undefined8 *)0x0;
    *puVar15 = 1;
    puStack_100 = (undefined8 *)(puVar15 + 2);
    *puStack_100 = 0;
    *(undefined8 *)(puVar15 + 4) = 0;
    *(undefined8 *)(puVar15 + 6) = 0;
    uStack_f8 = 0;
    uStack_108 = param_4;
    if (param_3 == 0) goto LAB_108366edc;
    uVar23 = lVar26 / 0x18;
    if (uVar23 < 0xaaaaaaaaaaaaaab) {
      ppuVar16 = (undefined **)(puVar15 + 6);
      func_0x0001082f868c();
      puVar12 = param_2 + param_3 * 6;
      *(undefined ***)(puVar15 + 2) = ppuVar16;
      *(undefined ***)(puVar15 + 4) = ppuVar16;
      *(undefined ***)(puVar15 + 6) = ppuVar16 + uVar23 * 3;
      pppuStack_130 = &ppuStack_f0;
      pppuStack_128 = &ppuStack_e8;
      ppuVar17 = ppuVar16;
      for (; param_2 != puVar12; param_2 = param_2 + 6) {
        puVar22 = *(undefined **)param_2;
        ppuVar17[1] = *(undefined **)(param_2 + 2);
        *ppuVar17 = puVar22;
        puVar22 = *(undefined **)(param_2 + 4);
        if (puVar22 != (undefined *)0x0 && puVar22 != (undefined *)0x1138270b0) {
          piVar2 = (int *)(puVar22 + 4);
          do {
            cVar5 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar25) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuVar17[2] = puVar22;
        ppuVar17 = ppuVar17 + 3;
      }
      uStack_120 = CONCAT71(uStack_120._1_7_,1);
      ppuStack_138 = (undefined **)(puVar15 + 6);
      ppuStack_f0 = ppuVar16;
      ppuStack_e8 = ppuVar17;
      FUN_1082f86dc(&ppuStack_138);
      *(undefined ***)(puVar15 + 4) = ppuVar17;
LAB_108366edc:
      uStack_f8 = 1;
      FUN_108368180(&puStack_100);
      puStack_100 = (undefined8 *)(puVar15 + 8);
      *puStack_100 = 0;
      *(undefined8 *)(puVar15 + 10) = 0;
      *(undefined8 *)(puVar15 + 0xc) = 0;
      uStack_f8 = 0;
      if (param_6 != 0) {
        ppuVar17 = (undefined **)(puVar15 + 0xc);
        FUN_1082f8a80();
        *(undefined ***)(puVar15 + 8) = ppuVar17;
        *(undefined ***)(puVar15 + 10) = ppuVar17;
        *(undefined ***)(puVar15 + 0xc) = ppuVar17 + param_6 * 2;
        pppuStack_130 = &ppuStack_f0;
        pppuStack_128 = &ppuStack_e8;
        uStack_120 = uStack_120 & 0xffffffffffffff00;
        ppuStack_138 = (undefined **)(puVar15 + 0xc);
        ppuStack_f0 = ppuVar17;
        for (; ppuStack_e8 = ppuVar17, lVar29 != 0; lVar29 = lVar29 + -0x10) {
          func_0x000108368604(ppuVar17);
          ppuVar17 = ppuStack_e8 + 2;
        }
        uStack_120._1_7_ = (undefined7)(uStack_120 >> 8);
        uStack_120 = CONCAT71(uStack_120._1_7_,1);
        FUN_1082f8afc(&ppuStack_138);
        *(undefined ***)(puVar15 + 10) = ppuVar17;
      }
      uStack_f8 = 1;
      func_0x0001083681ac(&puStack_100);
      uVar6 = uStack_280;
      puVar18 = puStack_298;
      puVar21 = puStack_2a0;
      *(undefined8 *)(puVar15 + 0x10) = uStack_268;
      *(undefined8 *)(puVar15 + 0xe) = uStack_270;
      *(undefined8 *)(puVar15 + 0x12) = uStack_260;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      *(undefined8 *)(puVar15 + 0x16) = uStack_288;
      *(undefined8 *)(puVar15 + 0x14) = uStack_290;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      puStack_2a0 = (undefined8 *)0x0;
      puStack_298 = (undefined8 *)0x0;
      *(undefined8 *)(puVar15 + 0x18) = uVar6;
      *(undefined8 **)(puVar15 + 0x1a) = puVar18;
      *(undefined8 **)(puVar15 + 0x1c) = puVar21;
      *(ulong *)(puVar15 + 0x1e) = param_4;
      puVar15[0x21] = uVar9;
      puVar15[0x22] = ~uVar1;
      puVar15[0x23] = uStack_2fc;
      *(long *)(puVar15 + 0x24) = lVar27;
      puVar15[0x26] = iStack_2ec;
      puVar18 = (undefined8 *)*puVar18;
      lVar26 = (long)*(char *)((long)puVar18 + 0x17);
      puVar13 = puVar18;
      if (lVar26 < 0) {
        puVar13 = (undefined8 *)*puVar18;
        lVar26 = puVar18[1];
      }
      FUN_108343308(puVar13,lVar26,0);
      puVar15[0x20] = (int)puVar13;
      puVar21 = (undefined8 *)*puVar21;
      lVar26 = (long)*(char *)((long)puVar21 + 0x17);
      puVar18 = puVar21;
      if (lVar26 < 0) {
        puVar18 = (undefined8 *)*puVar21;
        lVar26 = puVar21[1];
      }
      FUN_108343308(puVar18,lVar26,(ulong)puVar13 & 0xffffffff);
      puVar15[0x20] = (int)puVar18;
      lVar29 = *(long *)(puVar15 + 4);
      for (lVar26 = *(long *)(puVar15 + 2); lVar26 != lVar29; lVar26 = lVar26 + 0x18) {
        uVar23 = lVar26 + 8;
        func_0x0001083685fc();
        puVar15[0x20] = (int)uVar23;
        lVar28 = lVar26;
        FUN_108343308(lVar26,4,uVar23 & 0xffffffff);
        puVar15[0x20] = (int)lVar28;
      }
      uVar9 = SUB84(&uStack_108,0);
      func_0x0001083685fc();
      puVar15[0x20] = uVar9;
      if (lVar27 == 0) {
        ppuStack_138 = (undefined **)0x0;
      }
      else {
        ppuStack_138 = (undefined **)
                       CONCAT44(*(undefined4 *)(lVar27 + 4),*(undefined4 *)(lVar27 + 8));
      }
      pppuVar19 = &ppuStack_138;
      func_0x0001083685fc(pppuVar19);
      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,iStack_2ec);
      ppuVar20 = &puStack_100;
      FUN_108343308(ppuVar20,4,(ulong)pppuVar19 & 0xffffffff);
      puVar15[0x20] = (int)ppuVar20;
      *param_1 = puVar15;
      param_1[1] = 0x1138270b0;
      FUN_108368128(&puStack_2a0);
      FUN_108368128(&puStack_298);
      FUN_1083680e4(&uStack_290);
      FUN_1083680a0(&uStack_270);
LAB_1083670fc:
      FUN_108321198(&puStack_238);
LAB_108367104:
      FUN_108321198(&puStack_218);
      FUN_1083c50f0(auStack_1e0);
      FUN_1083680e4(&uStack_170);
      FUN_1083680a0(&uStack_150);
      goto LAB_108367124;
    }
    goto LAB_108367188;
  }
  goto LAB_10836718c;
LAB_108366cdc:
  lVar28 = 8;
  if (plVar24 != plVar4) {
    lVar28 = 0;
  }
  plVar14 = (long *)((long)plVar14 + lVar28);
  lVar28 = 0;
  if (plVar24 != plVar4) {
    lVar28 = 8;
  }
  plVar24 = (long *)((long)plVar24 + lVar28);
  goto LAB_108366ca8;
  while( true ) {
    puVar12 = param_5;
    FUN_10836737c();
    param_5 = param_5 + 4;
    lVar28 = lVar28 + -0x10;
    if (((ulong)puVar12 & 1) == 0) break;
LAB_108366a54:
    if (lVar28 == 0) {
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_178 = 0;
      FUN_1083c4fac(auStack_1e0);
      uStack_208 = 0xffffffffffffffff;
      uStack_210 = 0xffffffff00000000;
      uStack_200 = 0;
      uStack_1f8 = 0x101;
      uStack_1f6 = 1;
      uStack_1f4 = 0x32;
      uStack_1f0 = 0x10000;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      func_0x000107c278b8(auStack_230,0x1138270b8);
      FUN_1083c5660(&puStack_218,auStack_1e0,0xd,auStack_230,&uStack_210);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
      if (puStack_218 == (undefined8 *)0x0) {
        *param_1 = 0;
        func_0x000108368480();
        func_0x000108368650();
        FUN_1083a3c34(param_1 + 1,&UNK_10f48ff4e);
        func_0x0001083684fc();
        goto LAB_108367104;
      }
      func_0x00010836857c();
      FUN_1083673f0();
      if (((ulong)ppuStack_138 & 1) == 0) {
        func_0x0001083684e4();
        func_0x0001083684f4();
        goto LAB_108367104;
      }
      func_0x0001083684f4();
      puVar13 = puStack_218;
      FUN_1083c2e7c();
      if ((int)puVar13 != 0) {
        func_0x000108368540();
        func_0x0001083685d0();
        goto LAB_108367104;
      }
      func_0x000107c278b8(auStack_250,0x1138270b8);
      FUN_1083c5660(&puStack_238,auStack_1e0,0xe,auStack_250,&uStack_210);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_250);
      if (puStack_238 == (undefined8 *)0x0) {
        *param_1 = 0;
        func_0x000108368480();
        func_0x000108368650();
        FUN_1083a3c34(param_1 + 1,&UNK_10f48ff99);
        func_0x0001083684fc();
        goto LAB_1083670fc;
      }
      func_0x00010836857c();
      FUN_1083673f0();
      if (((ulong)ppuStack_138 & 1) == 0) {
        func_0x0001083684e4();
        func_0x0001083684f4();
        goto LAB_1083670fc;
      }
      func_0x0001083684f4();
      puVar13 = puStack_238;
      FUN_1083c2e7c();
      if ((int)puVar13 != 0) {
        func_0x000108368540();
        func_0x0001083685d0();
        goto LAB_1083670fc;
      }
      plVar14 = (long *)puStack_238[7];
      plVar24 = (long *)puStack_238[10];
      plVar4 = (long *)puStack_238[0xb];
      goto LAB_108366ca8;
    }
  }
  func_0x000108368540();
  FUN_1083a3c34(&UNK_10f48ff2c);
LAB_108367124:
  func_0x000108368520();
  FUN_1083a3ca0(0x1138270b0);
  FUN_1083a3ca0(0x1138270b0);
  FUN_1083a3ca0(uStack_2b0);
LAB_108367140:
  func_0x000108368594();
LAB_108367144:
  FUN_1083a3ca0(uStack_2a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_108367188:
  FUN_1082f8514();
LAB_10836718c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x108367190);
  (*pcVar8)();
}



/* Entry: 10836737c; end: 1083673ef;  */

bool FUN_10836737c(undefined8 *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar3 = (uint *)*param_1;
  uVar4 = (ulong)*puVar3;
  if (*puVar3 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = param_1;
    for (lVar6 = 8; bVar1 = uVar4 <= lVar6 - 8U, !bVar1; lVar6 = lVar6 + 1) {
      puVar5 = (undefined8 *)(long)*(char *)((long)puVar3 + lVar6);
      if (*(char *)((long)puVar3 + lVar6) != '_') {
        __ZNSt3__16locale7classicEv();
        FUN_108367ab0(puVar5,puVar2);
        if ((int)puVar5 == 0) {
          return bVar1;
        }
        puVar3 = (uint *)*param_1;
        uVar4 = (ulong)*puVar3;
        puVar2 = puVar5;
      }
    }
  }
  return bVar1;
}



/* Entry: 1083673f0; end: 10836766b;  */

void FUN_1083673f0(undefined1 *param_1,long param_2,undefined8 *param_3,long *param_4,uint param_5,
                  undefined8 param_6)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  byte bVar14;
  ulong *puVar15;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  
  bVar14 = 0;
  plVar11 = *(long **)(param_2 + 0x38);
  plVar4 = *(long **)(param_2 + 0x40);
  plVar12 = *(long **)(param_2 + 0x50);
  plVar5 = *(long **)(param_2 + 0x58);
  do {
    if (plVar11 == plVar4 && plVar12 == plVar5) {
      if ((bVar14 & 1) == 0) {
        FUN_1083a3348(auStack_88,&UNK_10f4900c6);
        *param_1 = 0;
        FUN_1083a33c4(param_1 + 8,auStack_88);
        uStack_98 = auStack_88[0];
      }
      else {
        *param_1 = 1;
        uStack_98 = 0x1138270b0;
        *(undefined8 *)(param_1 + 8) = 0x1138270b0;
      }
LAB_108367648:
      FUN_1083a3ca0(uStack_98);
      return;
    }
    plVar1 = plVar11;
    if (plVar12 != plVar5) {
      plVar1 = plVar12;
    }
    lVar10 = *plVar1;
    if (*(int *)(lVar10 + 0xc) == 3) {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x10);
      if ((*(byte *)(lVar10 + 0x30) >> 3 & 1) != 0) {
        if (*(byte *)(*(long *)(lVar10 + 0x20) + 0x2c) - 0xd < 3) {
          func_0x000108393224(auStack_88,lVar10,(param_4[1] - *param_4) / 0x18);
          func_0x000108367af0(param_4,auStack_88);
        }
        else {
          uVar3 = *(undefined8 *)(lVar10 + 0x10);
          uVar6 = *(undefined8 *)(lVar10 + 0x18);
          puVar7 = (ulong *)param_3[1];
          for (puVar13 = (ulong *)*param_3; puVar15 = puVar7, puVar13 != puVar7;
              puVar13 = puVar13 + 5) {
            uVar8 = *puVar13;
            FUN_10821b208(uVar8,puVar13[1],uVar3,uVar6);
            puVar15 = puVar13;
            if ((uVar8 & 1) != 0) break;
          }
          if (puVar15 != (ulong *)param_3[1]) {
            uStack_90 = 0;
            FUN_108392f84(auStack_88,lVar10,*(undefined8 *)(param_2 + 0x10),&uStack_90);
            uVar2 = (uint)puVar15[4] ^ uStack_68;
            if ((((uVar2 & 1) == 0) && (iStack_70 == (int)puVar15[3])) &&
               (iStack_6c == *(int *)((long)puVar15 + 0x1c))) {
              if ((uVar2 >> 1 & 1) == 0) {
                *(uint *)(puVar15 + 4) = (uint)puVar15[4] | param_5;
                goto LAB_1083675a4;
              }
              puVar9 = &UNK_10f490074;
            }
            else {
              puVar9 = &UNK_10f490029;
            }
            FUN_1083a3c34(&uStack_98,puVar9);
            *param_1 = 0;
            FUN_1083a33c4(param_1 + 8,&uStack_98);
            goto LAB_108367648;
          }
          FUN_108392f84(auStack_88,lVar10,*(undefined8 *)(param_2 + 0x10),param_6);
          FUN_108367d28(param_3,auStack_88);
          *(uint *)(param_3[1] + -8) = *(uint *)(param_3[1] + -8) | param_5;
        }
      }
    }
    else if (*(int *)(lVar10 + 0xc) == 1) {
      bVar14 = *(byte *)(*(long *)(lVar10 + 0x10) + 0x56) | bVar14;
    }
LAB_1083675a4:
    lVar10 = 8;
    if (plVar12 != plVar5) {
      lVar10 = 0;
    }
    plVar11 = (long *)((long)plVar11 + lVar10);
    lVar10 = 0;
    if (plVar12 != plVar5) {
      lVar10 = 8;
    }
    plVar12 = (long *)((long)plVar12 + lVar10);
  } while( true );
}



/* Entry: 10836766c; end: 1083676ff;  */

long FUN_10836766c(long param_1)

{
  FUN_10810a400(param_1 + 0x90);
  FUN_108368128(param_1 + 0x70);
  FUN_108368128(param_1 + 0x68);
  FUN_1083680e4(param_1 + 0x50);
  FUN_1083680a0(param_1 + 0x38);
  func_0x0001082f8bc8(param_1 + 0x20);
  FUN_1082f8c6c(param_1 + 8);
  return param_1;
}



/* Entry: 108367700; end: 1083677db;  */

void FUN_108367700(undefined8 param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x000108368514();
  uVar5 = 0;
  if (*param_2 != 0) {
    do {
      func_0x000108368530();
      uVar5 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  *unaff_x19 = uVar5;
  lVar4 = *(long *)(unaff_x20 + 8);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x19[1] = lVar4;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x19[2] = lVar4;
  uVar5 = 0;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    do {
      func_0x000108368530();
      uVar5 = extraout_x8_00;
    } while (extraout_w10_00 != 0);
  }
  unaff_x19[3] = uVar5;
  FUN_1083677dc(unaff_x19 + 4,unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined4 *)(unaff_x19 + 0xe) = *(undefined4 *)(unaff_x20 + 0x70);
  unaff_x19[0xb] = uVar8;
  unaff_x19[10] = uVar7;
  unaff_x19[0xd] = uVar10;
  unaff_x19[0xc] = uVar9;
  unaff_x19[9] = uVar6;
  unaff_x19[8] = uVar5;
  return;
}



/* Entry: 1083677dc; end: 108367827;  */

long FUN_1083677dc(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0x400000000;
  FUN_1083682a0(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



/* Entry: 108367828; end: 10836782b;  */

void FUN_108367828(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10836782c; end: 10836789b;  */

long FUN_10836782c(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long extraout_x8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0xc) == 0x25) {
    uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x10);
    func_0x00010836860c();
    if ((uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x28) =
           *(uint *)(param_1 + 0x28) | 1 << (ulong)(*(uint *)(param_2 + 0x18) & 0x1f);
      return 0;
    }
  }
  if (0x19 < *(int *)(param_2 + 0xc) - 0x19U) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c2868);
    (*pcVar1)();
  }
  func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
  return param_1;
}



/* Entry: 10836789c; end: 10836798b;  */

long FUN_10836789c(long param_1,ulong param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  
  if ((((*(byte *)(param_1 + 0x24) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != -2)) &&
     (*(int *)(param_2 + 0xc) == 0x15)) {
    lVar5 = *(long *)(param_2 + 0x10);
    if (((*(int *)(lVar5 + 0xc) == 0x25) && (*(int *)(*(long *)(lVar5 + 0x20) + 0xc) == 0x32)) &&
       (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) == *(long *)(param_1 + 0x18))) {
      if (iVar1 < 0) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x20);
        uVar4 = param_2;
        (**(code **)(*plVar3 + 0x90))();
        if (uVar4 <= (ulong)(long)*(int *)(lVar5 + 0x18)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10836798c);
          (*pcVar2)();
        }
        uVar4 = plVar3[(long)*(int *)(lVar5 + 0x18) * 0xb + 10];
        func_0x00010836860c(uVar4,*(undefined8 *)(**(long **)(param_1 + 8) + 8));
        if ((uVar4 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar5 + 0x18);
          return 0;
        }
      }
      else if (*(int *)(lVar5 + 0x18) == iVar1) {
        return 0;
      }
    }
    FUN_108367a38(param_1);
  }
  if (*(int *)(param_2 + 0xc) - 0xcU < 0xd) {
    func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df20988)[extraout_x8] * 4 + 0x1083c28a4))();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083c29d4);
  (*pcVar2)();
}



/* Entry: 10836798c; end: 108367a37;  */

long * FUN_10836798c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108368514();
  if (*(int *)(param_2 + 0xc) == 1) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if (*(char *)(lVar4 + 0x56) != '\x01') goto code_r0x0001083c29d4;
    if (*(int *)(lVar4 + 0x40) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108367a38);
      (*pcVar1)();
    }
    unaff_x19[3] = **(long **)(lVar4 + 0x38);
    *(undefined1 *)((long)unaff_x19 + 0x24) = 1;
    plVar3 = unaff_x19;
    FUN_1083c29d4();
    *(undefined1 *)((long)unaff_x19 + 0x24) = 0;
  }
  else {
    if (*(int *)(param_2 + 0xc) != 6) {
code_r0x0001083c29d4:
      if (6 < *(uint *)(unaff_x20 + 0xc)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c2a10);
        (*pcVar1)();
      }
      if ((1 << (ulong)(*(uint *)(unaff_x20 + 0xc) & 0x1f) & 0x75U) != 0) {
        return (long *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001083c39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x30))();
      return unaff_x19;
    }
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    func_0x000107c27944(uVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x18),&UNK_10f488c22,8);
    if ((int)uVar2 != 0) {
      unaff_x19[2] = *(long *)(unaff_x20 + 0x10);
    }
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 108367a38; end: 108367a5f;  */

void FUN_108367a38(long param_1)

{
  if (-1 < (int)*(uint *)(param_1 + 0x20)) {
    *(uint *)(param_1 + 0x28) =
         *(uint *)(param_1 + 0x28) | 1 << (ulong)(*(uint *)(param_1 + 0x20) & 0x1f);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xfffffffe;
  return;
}



/* Entry: 108367a60; end: 108367aaf;  */

ulong * FUN_108367a60(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      FUN_1083a3c7c(uVar2 + 8);
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x000108368528();
  }
  return param_1;
}



/* Entry: 108367ab0; end: 108367b3b;  */

bool FUN_108367ab0(int param_1,long param_2)

{
  bool bVar1;
  
  func_0x000107c27f78();
  if (param_1 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(*(long *)(param_2 + 0x10) + (long)param_1 * 4) & 0x500) != 0;
  }
  return bVar1;
}



/* Entry: 108367b3c; end: 108367bc7;  */

undefined8 FUN_108367b3c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x000108368514();
  FUN_108367bc8();
  func_0x0001083684c8();
  FUN_108367c4c();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  puStack_48 = puStack_48 + 3;
  FUN_108367c10();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_108367cd8(auStack_58);
  return uVar1;
}



/* Entry: 108367bc8; end: 108367c0f;  */

long * FUN_108367bc8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar2 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_108367c40();
  func_0x000108368564();
  func_0x0001083685dc();
  func_0x00010836841c();
  return param_1;
}



/* Entry: 108367c10; end: 108367c3f;  */

void FUN_108367c10(void)

{
  func_0x000108368564();
  func_0x0001083685dc();
  func_0x00010836841c();
  return;
}



/* Entry: 108367c40; end: 108367c4b;  */

void FUN_108367c40(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001083685c4();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000108367c88(param_4);
  }
  func_0x00010836854c(0x18);
  return;
}



/* Entry: 108367c4c; end: 108367cab;  */

void FUN_108367c4c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000108367c88(param_4);
  }
  func_0x00010836854c(0x18);
  return;
}



/* Entry: 108367cac; end: 108367cd7;  */

long * FUN_108367cac(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_108367d04();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108367cd8; end: 108367d03;  */

long * FUN_108367cd8(long *param_1)

{
  FUN_108367d04();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108367d04; end: 108367d27;  */

void FUN_108367d04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108367d28; end: 108367d73;  */

undefined8 * FUN_108367d28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    puVar1[4] = param_2[4];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1 = puVar1 + 5;
  }
  else {
    puVar1 = param_1;
    FUN_108367d74();
  }
  param_1[1] = puVar1;
  return puVar1 + -5;
}



/* Entry: 108367d74; end: 108367dff;  */

undefined8 FUN_108367d74(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x000108368514();
  FUN_108367e00();
  func_0x0001083684c8();
  FUN_108367e84();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  puStack_48[4] = unaff_x20[4];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  puStack_48[3] = uVar4;
  puStack_48[2] = uVar3;
  puStack_48 = puStack_48 + 5;
  FUN_108367e48();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_108367f10(auStack_58);
  return uVar1;
}



/* Entry: 108367e00; end: 108367e47;  */

long * FUN_108367e00(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar2 = (long *)0x666666666666666;
    }
    return plVar2;
  }
  FUN_108367e78();
  func_0x000108368564();
  func_0x0001083685dc();
  func_0x00010836841c();
  return param_1;
}



/* Entry: 108367e48; end: 108367e77;  */

void FUN_108367e48(void)

{
  func_0x000108368564();
  func_0x0001083685dc();
  func_0x00010836841c();
  return;
}



/* Entry: 108367e78; end: 108367e83;  */

void FUN_108367e78(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001083685c4();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000108367ec0(param_4);
  }
  func_0x00010836854c(0x28);
  return;
}



/* Entry: 108367e84; end: 108367ee3;  */

void FUN_108367e84(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000108367ec0(param_4);
  }
  func_0x00010836854c(0x28);
  return;
}



/* Entry: 108367ee4; end: 108367f0f;  */

long * FUN_108367ee4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = (long *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_108367f3c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108367f10; end: 108367f3b;  */

long * FUN_108367f10(long *param_1)

{
  FUN_108367f3c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108367f3c; end: 108367f5f;  */

void FUN_108367f3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x28;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108367f60; end: 108367f8f;  */

long FUN_108367f60(long param_1)

{
  FUN_108367f90();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x000108368528();
  }
  return param_1;
}



/* Entry: 108367f90; end: 108367fc7;  */

void FUN_108367f90(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_108165f8c();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 108367fc8; end: 108367fd3;  */

void FUN_108367fc8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108367fd4; end: 10836801b;  */

void FUN_108367fd4(int param_1,undefined8 param_2,ulong param_3)

{
  long *unaff_x19;
  long unaff_x20;
  long lVar1;
  long lVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0x7fffffff) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 0x10;
    FUN_10840fe24(0x3ff8000000000000,&uStack_20,param_1 + 1);
    return;
  }
  func_0x00010bdb1a68();
  func_0x000108368514();
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < (int)unaff_x19[1]; lVar2 = lVar2 + 1) {
    FUN_1082f8a4c(unaff_x20 + lVar1,*unaff_x19 + lVar1);
    FUN_1083a3c7c(*unaff_x19 + lVar1 + 8);
    lVar1 = lVar1 + 0x10;
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x000108368528();
  }
  func_0x0001083684a8(param_3 >> 4);
  return;
}



/* Entry: 10836801c; end: 10836809f;  */

void FUN_10836801c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *unaff_x19;
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x000108368514();
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < (int)unaff_x19[1]; lVar2 = lVar2 + 1) {
    FUN_1082f8a4c(unaff_x20 + lVar1,*unaff_x19 + lVar1);
    FUN_1083a3c7c(*unaff_x19 + lVar1 + 8);
    lVar1 = lVar1 + 0x10;
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x000108368528();
  }
  func_0x0001083684a8(param_3 >> 4);
  return;
}



/* Entry: 1083680a0; end: 1083680cb;  */

undefined8 FUN_1083680a0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1083680cc(&uStack_28);
  return param_1;
}



/* Entry: 1083680cc; end: 1083680e3;  */

void FUN_1083680cc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083680e4; end: 10836810f;  */

undefined8 FUN_1083680e4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_108368110(&uStack_28);
  return param_1;
}



/* Entry: 108368110; end: 108368127;  */

void FUN_108368110(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108368128; end: 10836814b;  */

undefined8 FUN_108368128(undefined8 param_1)

{
  FUN_10836814c(param_1,0);
  return param_1;
}



/* Entry: 10836814c; end: 108368163;  */

void FUN_10836814c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083ea528(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108368164; end: 10836817f;  */

void FUN_108368164(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083ea528(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108368180; end: 1083681d7;  */

long FUN_108368180(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001082f8c98(param_1);
  }
  return param_1;
}



/* Entry: 1083681d8; end: 108368207;  */

void FUN_1083681d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 108368208; end: 10836822f;  */

undefined8 * FUN_108368208(undefined8 *param_1)

{
  FUN_108368230(*param_1);
  return param_1;
}



/* Entry: 108368230; end: 108368253;  */

void FUN_108368230(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108368620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108368254; end: 10836827b;  */

undefined8 * FUN_108368254(undefined8 *param_1)

{
  FUN_10836827c(*param_1);
  return param_1;
}



/* Entry: 10836827c; end: 10836829f;  */

void FUN_10836827c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108368620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083682a0; end: 108368363;  */

undefined8 * FUN_1083682a0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x0001083682f4(param_1);
    func_0x000108368318(0x3ff0000000000000,param_1,*(undefined4 *)(param_2 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    FUN_108368364(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 108368364; end: 1083683a3;  */

void FUN_108368364(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  for (lVar4 = 0; lVar4 < (int)param_1[1]; lVar4 = lVar4 + 1) {
    lVar5 = *param_1;
    lVar6 = *(long *)(param_2 + lVar4 * 8);
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(long *)(lVar5 + lVar4 * 8) = lVar6;
  }
  return;
}



/* Entry: 1083683a4; end: 1083683ef;  */

void FUN_1083683a4(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  
  func_0x000108368514();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x000108368528();
  }
  func_0x0001083684a8(param_3 >> 3);
  return;
}



/* Entry: 1083683f0; end: 108368413;  */

void FUN_1083683f0(long param_1,int param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 8;
    FUN_10840fe24(&uStack_20,*(uint *)(param_1 + 8) + param_2);
    return;
  }
  func_0x00010bdb1a68();
  return;
}



/* Entry: 108368414; end: 108368663;  */

void FUN_108368414(void)

{
  return;
}



/* Entry: 108368664; end: 108368693;  */

undefined8 * FUN_108368664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3ef80;
  FUN_10810a400(param_1 + 8);
  *param_1 = &PTR_FUN_110a3da48;
  if (*(int *)((long)param_1 + 0x34) == 0) {
    if ((long *)param_1[3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 8))();
    }
  }
  else if (*(int *)((long)param_1 + 0x34) == 1) {
    _free(param_1[3]);
  }
  FUN_108410074(param_1 + 1);
  return param_1;
}



/* Entry: 108368694; end: 108368697;  */

undefined8 * FUN_108368694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3ef80;
  FUN_10810a400(param_1 + 8);
  *param_1 = &PTR_FUN_110a3da48;
  if (*(int *)((long)param_1 + 0x34) == 0) {
    if ((long *)param_1[3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 8))();
    }
  }
  else if (*(int *)((long)param_1 + 0x34) == 1) {
    _free(param_1[3]);
  }
  FUN_108410074(param_1 + 1);
  return param_1;
}



/* Entry: 108368698; end: 1083686ab;  */

void FUN_108368698(void)

{
  FUN_108368664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083686ac; end: 108368973;  */

undefined8 * FUN_1083686ac(long param_1,code *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar16 = (ulong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x24);
  if ((int)uVar1 < 2 && (int)uVar2 < 2) {
    return (undefined8 *)0x0;
  }
  uVar10 = *(ulong *)(param_1 + 0x18);
  FUN_108368974(uVar16,uVar2);
  lVar17 = 0;
  uVar11 = (uint)uVar16;
  uVar13 = uVar16;
  uVar12 = uVar11;
  while (-1 < (int)uVar12) {
    uVar12 = (uint)uVar13;
    uVar3 = uVar1 >> (ulong)(uVar12 + 1 & 0x1f);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    uVar4 = uVar2 >> (ulong)(uVar12 + 1 & 0x1f);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar13 = 0;
    if (uVar12 < uVar11 && ((0 < (int)uVar1 && uVar2 != 0) && ((int)uVar1 < 1 || -1 < (int)uVar2)))
    {
      uVar13 = CONCAT44(uVar4,uVar3);
    }
    uVar7 = uVar10;
    FUN_10836899c(uVar10,uVar13);
    lVar17 = lVar17 + uVar7 * (uVar13 >> 0x20);
    uVar12 = uVar12 - 1;
    uVar13 = (ulong)uVar12;
  }
  puVar9 = (undefined8 *)(lVar17 + (ulong)(uVar11 * 0x30 + 0x30));
  if (puVar9 == (undefined8 *)0x0 || puVar9 + -0x10000000 < (undefined8 *)0xffffffff00000000) {
    return (undefined8 *)0x0;
  }
  if (param_2 == (code *)0x0) {
    _malloc();
    if (puVar9 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    func_0x000108368c20();
    func_0x00010833b400();
  }
  else {
    (*param_2)();
    if (puVar9 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    func_0x000108368c20();
    FUN_10833b434();
  }
  *puVar9 = &PTR_FUN_110a3ef80;
  puVar9[8] = 0;
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 != (int *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar6) {
        *piVar8 = *piVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_1081fa8f8();
  *(uint *)(puVar9 + 10) = uVar11;
  plVar15 = (long *)puVar9[4];
  puVar9[9] = plVar15;
  uVar13 = *(ulong *)(param_1 + 0x20);
  FUN_10814105c(auStack_98,param_1);
  if (param_3 == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    FUN_108369178(&plStack_a0,param_1);
    plVar14 = plStack_a0;
    if (plStack_a0 == (long *)0x0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_108368930;
    }
  }
  plVar18 = plVar15 + (uVar16 & 0xffffffff) * 6;
  for (uVar16 = uVar16 & 0xffffffff; uVar16 != 0; uVar16 = uVar16 - 1) {
    uVar13 = NEON_smax(CONCAT44((int)((long)uVar13 >> 0x21),(int)uVar13 >> 1),0x100000001,4);
    uVar7 = uVar10;
    FUN_10836899c(uVar10,uVar13 & 0xffffffff);
    *plVar15 = (long)plVar18;
    plVar15[1] = uVar7 & 0xffffffff;
    plVar15[2] = 0;
    plVar15[3] = uVar10;
    plVar15[4] = uVar13;
    func_0x000108368c04(0);
    uVar20 = NEON_ucvtf(uVar13,4);
    uVar19 = NEON_scvtf(*(undefined8 *)(param_1 + 0x20),4);
    plVar15[5] = CONCAT44((float)((ulong)uVar20 >> 0x20) / (float)((ulong)uVar19 >> 0x20),
                          (float)uVar20 / (float)uVar19);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,plVar15,auStack_98);
    }
    FUN_1082b0634(auStack_98,plVar15);
    plVar18 = (long *)((long)plVar18 + (ulong)(uint)((int)(uVar13 >> 0x20) * (int)uVar7));
    plVar15 = plVar15 + 6;
  }
  if (plVar14 != (long *)0x0) {
    func_0x000108368c10();
  }
LAB_108368930:
  func_0x000108368c04(uStack_88);
  return puVar9;
}



/* Entry: 108368974; end: 10836899b;  */

uint FUN_108368974(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 <= param_2) {
    uVar2 = param_2;
  }
  uVar1 = 0;
  if (1 < uVar2) {
    uVar1 = (uint)LZCOUNT(uVar2) ^ 0x1f;
  }
  uVar2 = 0;
  if (0 < (int)param_1 && 0 < (int)param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10836899c; end: 1083689c3;  */

long FUN_10836899c(int param_1,int param_2)

{
  FUN_10835c58c();
  return (long)(param_1 * param_2);
}



/* Entry: 1083689c4; end: 108368a27;  */

float FUN_1083689c4(float param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  fVar2 = -1.0;
  if (param_2 < 1.0) {
    bVar1 = true;
    if ((0.0 < param_2) && (bVar1 = true, !NAN(param_2 - param_2))) {
      bVar1 = false;
    }
    if (!bVar1) {
      _log2f();
      fVar2 = 0.0;
      if (0.0 <= -0.5 - param_2) {
        fVar2 = -0.5 - param_2;
      }
      if (NAN(fVar2 - fVar2)) {
        fVar2 = -1.0;
      }
    }
  }
  return fVar2;
}



/* Entry: 108368a28; end: 108368a57;  */

long FUN_108368a28(long param_1,long param_2)

{
  FUN_1082b0634();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



/* Entry: 108368a58; end: 108368ae3;  */

bool FUN_108368a58(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if (1 < *(int *)(param_2 + 0x10) || 1 < *(int *)(param_2 + 0x14)) {
      iVar1 = *(int *)(param_2 + 0x10) >> 1;
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      if (*(int *)(lVar3 + 0x20) == iVar1) {
        iVar1 = *(int *)(param_2 + 0x14) >> 1;
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        if (*(int *)(lVar3 + 0x24) == iVar1) {
          lVar4 = (ulong)(*(uint *)(param_1 + 0x50) &
                         ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) + 1;
          piVar5 = (int *)(lVar3 + 0x1c);
          while( true ) {
            lVar4 = lVar4 + -1;
            bVar2 = lVar4 == 0;
            if (lVar4 == 0) {
              return bVar2;
            }
            if (piVar5[-1] != *(int *)(param_2 + 8)) break;
            iVar1 = *piVar5;
            piVar5 = piVar5 + 0xc;
            if (iVar1 != *(int *)(param_2 + 0xc)) {
              return bVar2;
            }
          }
          return bVar2;
        }
      }
    }
  }
  return false;
}



/* Entry: 108368ae4; end: 108368b57;  */

undefined1 * FUN_108368ae4(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = &uStack_50;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_108330de8(param_1,&uStack_50);
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1083686ac(&uStack_50,param_2,1);
  }
  func_0x000108368c04(uStack_40);
  return (undefined1 *)puVar1;
}



/* Entry: 108368b58; end: 108368bfb;  */

undefined8 FUN_108368b58(long param_1,uint param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piStack_28;
  
  uVar3 = 0;
  if ((-1 < (int)param_2) && (*(long *)(param_1 + 0x48) != 0)) {
    if ((int)param_2 < *(int *)(param_1 + 0x50)) {
      if (param_3 != 0) {
        FUN_108368a28(param_3,*(long *)(param_1 + 0x48) + (ulong)param_2 * 0x30);
        piStack_28 = *(int **)(param_1 + 0x40);
        if (piStack_28 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piStack_28,0x10);
            if (bVar2) {
              *piStack_28 = *piStack_28 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_108384050(param_3,&piStack_28);
        func_0x000108368c04(piStack_28);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 108368bfc; end: 108368c33;  */

void FUN_108368bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 108368c34; end: 108368f73;  */

undefined8 * FUN_108368c34(undefined8 *param_1,float *param_2,ulong param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float *pfStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float *pfStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  pfStack_68 = param_2;
  FUN_10810c9b4((long)param_1 + 0x54);
  FUN_10810c9b4((long)param_1 + 0x7c);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  fVar6 = 0.0;
  if (param_4 == 0) {
LAB_108368d18:
    fVar7 = (float)NEON_fminnm((int)fVar6,0x4effffff);
    bVar2 = param_4 == 2;
  }
  else {
    FUN_108365804(param_3,&fStack_a0,0);
    if ((param_3 & 1) == 0) {
LAB_108368d14:
      param_4 = 0;
      fVar6 = 0.0;
      goto LAB_108368d18;
    }
    uVar8 = NEON_fmov(0x3f800000,4);
    fVar6 = (float)((ulong)uVar8 >> 0x20) / fStack_9c;
    uVar8 = CONCAT44(fVar6,(float)uVar8 / fStack_a0);
    FUN_1083689c4(uVar8,fVar6);
    fVar6 = (float)uVar8;
    if (fVar6 <= 0.0) goto LAB_108368d14;
    if (param_4 != 1) goto LAB_108368d18;
    bVar2 = false;
    fVar7 = (float)NEON_fminnm((float)(double)(long)(fVar6 + 0.5),0x4effffff);
    if (fVar7 <= -2.1474835e+09) {
      fVar7 = -2.1474835e+09;
    }
  }
  iVar5 = (int)fVar7;
  if (iVar5 == 0) {
    func_0x000108369160(0xceffffff);
LAB_108368d68:
    bVar1 = (bool)(bVar2 ^ 1);
    if (fVar6 - (float)(int)fVar7 <= 0.0) {
      bVar1 = true;
    }
    if (bVar1) goto LAB_108368ebc;
    bVar1 = false;
  }
  else {
    if (iVar5 < 1) goto LAB_108368d68;
    bVar1 = true;
  }
  pfVar3 = param_2;
  (**(code **)(*(long *)param_2 + 0xa0))();
  if (pfVar3 == (float *)0x0) {
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    pfStack_c8 = (float *)0x0;
    FUN_1082a619c(&fStack_a0);
    fStack_a0 = param_2[10];
    fStack_9c = 0.0;
    uStack_98 = 0;
    uStack_94 = (undefined4)*(undefined8 *)(param_2 + 8);
    uStack_90 = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    pfVar3 = &fStack_a0;
    FUN_108331608(pfVar3,0);
    pfStack_c8 = pfVar3;
    FUN_10836905c(0);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = param_2;
      FUN_1083316f4(param_2,0);
      pfStack_c8 = pfVar3;
      FUN_10836905c(0);
    }
  }
  else {
    FUN_1082a63ac(pfVar3);
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    FUN_1082a619c(&fStack_a0);
  }
  pfStack_c8 = (float *)0x0;
  uVar8 = param_1[0x1c];
  param_1[0x1c] = pfVar3;
  FUN_10836905c(uVar8);
  FUN_108369068(&pfStack_c8);
  lVar4 = param_1[0x1c];
  if (lVar4 == 0) {
    func_0x000108369160();
    goto LAB_108368ebc;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (bVar1) {
    FUN_108368b58(lVar4,iVar5 + -1,&fStack_a0);
    if ((int)lVar4 != 0) {
      FUN_1082b0634(param_1,&fStack_a0);
      goto LAB_108368e58;
    }
    func_0x000108369160();
  }
  else {
LAB_108368e58:
    if (bVar2) {
      uVar8 = param_1[0x1c];
      FUN_108368b58(uVar8,iVar5,&fStack_a0);
      if ((int)uVar8 != 0) {
        FUN_1082b0634(param_1 + 5,&fStack_a0);
        *(float *)(param_1 + 10) = fVar6 - (float)(int)fVar7;
        FUN_108368fdc(&pfStack_c8,param_2[8],param_2[9],*(undefined4 *)(param_1 + 9),
                      *(undefined4 *)((long)param_1 + 0x4c));
        *(undefined8 *)((long)param_1 + 0x84) = uStack_c0;
        *(float **)((long)param_1 + 0x7c) = pfStack_c8;
        *(undefined8 *)((long)param_1 + 0x94) = uStack_b0;
        *(undefined8 *)((long)param_1 + 0x8c) = uStack_b8;
        *(undefined8 *)((long)param_1 + 0x9c) = uStack_a8;
      }
    }
  }
  func_0x00010836916c();
LAB_108368ebc:
  FUN_108368fdc(&fStack_a0,param_2[8],param_2[9],*(undefined4 *)(param_1 + 4),
                *(undefined4 *)((long)param_1 + 0x24));
  *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)((long)param_1 + 0x54) = CONCAT44(fStack_9c,fStack_a0);
  *(undefined8 *)((long)param_1 + 0x6c) = uStack_88;
  *(ulong *)((long)param_1 + 100) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)((long)param_1 + 0x74) = uStack_80;
  return param_1;
}



/* Entry: 108368f74; end: 108368fdb;  */

void FUN_108368f74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_1[0x16] != 0) {
    return;
  }
  plVar2 = (long *)*param_2;
  (**(code **)(*plVar2 + 0xc0))();
  (**(code **)(*(long *)*param_2 + 0xd0))((long *)*param_2,plVar2,param_1 + 0x15,0);
  *param_1 = param_1[0x16];
  param_1[1] = param_1[0x17];
  puVar1 = param_1 + 2;
  FUN_10835c5a8();
  puVar1[2] = param_1[0x1a];
  return;
}



/* Entry: 108368fdc; end: 108368ffb;  */

void FUN_108368fdc(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)param_4 / (float)param_2;
  fVar4 = (float)param_5 / (float)param_3;
  func_0x0001081602d4(param_1);
  bVar1 = true;
  if ((fVar4 != 0.0) && (bVar1 = false, !NAN(fVar3))) {
    bVar1 = fVar3 == 0.0;
  }
  fVar2 = 0.0;
  if (!bVar1) {
    fVar2 = 2.24208e-44;
  }
  bVar1 = false;
  if ((fVar4 == 1.0) && (bVar1 = false, !NAN(fVar3))) {
    bVar1 = fVar3 == 1.0;
  }
  *param_1 = fVar3;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = fVar4;
  if (!bVar1) {
    fVar2 = (float)((uint)fVar2 | 2);
  }
  param_1[7] = 0.0;
  param_1[8] = 1.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[9] = fVar2;
  return;
}



/* Entry: 108368ffc; end: 10836905b;  */

long * FUN_108368ffc(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_20 = param_2;
  uStack_14 = param_4;
  func_0x000108369034(param_1,&uStack_20,param_3,&uStack_14);
  plVar1 = (long *)0x0;
  if (*param_1 != 0) {
    plVar1 = param_1;
  }
  return plVar1;
}



/* Entry: 10836905c; end: 108369067;  */

void FUN_10836905c(long *param_1)

{
  long *plVar1;
  
  if (param_1 != (long *)0x0) {
    func_0x00010833b7ec();
    plVar1 = param_1;
    FUN_10833b630(param_1,0);
    func_0x00010833b7d0();
    if ((int)plVar1 != 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    return;
  }
  return;
}



/* Entry: 108369068; end: 108369093;  */

undefined8 * FUN_108369068(undefined8 *param_1)

{
  FUN_10836905c(*param_1);
  return param_1;
}



/* Entry: 108369094; end: 1083690ff;  */

long * FUN_108369094(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float *pfStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float *pfStack_68;
  
  plVar6 = param_1;
  FUN_10840f8d0(param_1,0xf1,8);
  lVar5 = param_1[1];
  param_1[1] = (long)(plVar6 + 0x1d);
  plVar6[0x1d] = (long)FUN_10836911c;
  lVar8 = param_1[1];
  param_1[1] = lVar8 + 8;
  *(char *)(lVar8 + 8) = (char)plVar6 - (char)(int)lVar5;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  uVar3 = param_2[1];
  pfVar7 = *(float **)*param_2;
  iVar9 = *(int *)param_2[2];
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  pfStack_68 = pfVar7;
  FUN_10810c9b4((long)plVar6 + 0x54);
  FUN_10810c9b4((long)plVar6 + 0x7c);
  plVar6[0x16] = 0;
  plVar6[0x15] = 0;
  *(undefined4 *)(plVar6 + 10) = 0;
  plVar6[0x18] = 0;
  plVar6[0x17] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1b] = 0;
  fVar10 = 0.0;
  if (iVar9 == 0) {
LAB_108368d18:
    fVar11 = (float)NEON_fminnm((int)fVar10,0x4effffff);
    bVar2 = iVar9 == 2;
  }
  else {
    FUN_108365804(uVar3,&fStack_a0,0);
    if ((uVar3 & 1) == 0) {
LAB_108368d14:
      iVar9 = 0;
      fVar10 = 0.0;
      goto LAB_108368d18;
    }
    uVar12 = NEON_fmov(0x3f800000,4);
    fVar10 = (float)((ulong)uVar12 >> 0x20) / fStack_9c;
    uVar12 = CONCAT44(fVar10,(float)uVar12 / fStack_a0);
    FUN_1083689c4(uVar12,fVar10);
    fVar10 = (float)uVar12;
    if (fVar10 <= 0.0) goto LAB_108368d14;
    if (iVar9 != 1) goto LAB_108368d18;
    bVar2 = false;
    fVar11 = (float)NEON_fminnm((float)(double)(long)(fVar10 + 0.5),0x4effffff);
    if (fVar11 <= -2.1474835e+09) {
      fVar11 = -2.1474835e+09;
    }
  }
  iVar9 = (int)fVar11;
  if (iVar9 == 0) {
    func_0x000108369160(0xceffffff);
LAB_108368d68:
    bVar1 = (bool)(bVar2 ^ 1);
    if (fVar10 - (float)(int)fVar11 <= 0.0) {
      bVar1 = true;
    }
    if (bVar1) goto LAB_108368ebc;
    bVar1 = false;
  }
  else {
    if (iVar9 < 1) goto LAB_108368d68;
    bVar1 = true;
  }
  pfVar4 = pfVar7;
  (**(code **)(*(long *)pfVar7 + 0xa0))();
  if (pfVar4 == (float *)0x0) {
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    pfStack_c8 = (float *)0x0;
    FUN_1082a619c(&fStack_a0);
    fStack_a0 = pfVar7[10];
    fStack_9c = 0.0;
    uStack_98 = 0;
    uStack_94 = (undefined4)*(undefined8 *)(pfVar7 + 8);
    uStack_90 = (undefined4)((ulong)*(undefined8 *)(pfVar7 + 8) >> 0x20);
    pfVar4 = &fStack_a0;
    FUN_108331608(pfVar4,0);
    pfStack_c8 = pfVar4;
    FUN_10836905c(0);
    if (pfVar4 == (float *)0x0) {
      pfVar4 = pfVar7;
      FUN_1083316f4(pfVar7,0);
      pfStack_c8 = pfVar4;
      FUN_10836905c(0);
    }
  }
  else {
    FUN_1082a63ac(pfVar4);
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    FUN_1082a619c(&fStack_a0);
  }
  pfStack_c8 = (float *)0x0;
  lVar5 = plVar6[0x1c];
  plVar6[0x1c] = (long)pfVar4;
  FUN_10836905c(lVar5);
  FUN_108369068(&pfStack_c8);
  lVar5 = plVar6[0x1c];
  if (lVar5 == 0) {
    func_0x000108369160();
    goto LAB_108368ebc;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (bVar1) {
    FUN_108368b58(lVar5,iVar9 + -1,&fStack_a0);
    if ((int)lVar5 != 0) {
      FUN_1082b0634(plVar6,&fStack_a0);
      goto LAB_108368e58;
    }
    func_0x000108369160();
  }
  else {
LAB_108368e58:
    if (bVar2) {
      lVar5 = plVar6[0x1c];
      FUN_108368b58(lVar5,iVar9,&fStack_a0);
      if ((int)lVar5 != 0) {
        FUN_1082b0634(plVar6 + 5,&fStack_a0);
        *(float *)(plVar6 + 10) = fVar10 - (float)(int)fVar11;
        FUN_108368fdc(&pfStack_c8,pfVar7[8],pfVar7[9],(int)plVar6[9],
                      *(undefined4 *)((long)plVar6 + 0x4c));
        *(undefined8 *)((long)plVar6 + 0x84) = uStack_c0;
        *(float **)((long)plVar6 + 0x7c) = pfStack_c8;
        *(undefined8 *)((long)plVar6 + 0x94) = uStack_b0;
        *(undefined8 *)((long)plVar6 + 0x8c) = uStack_b8;
        *(undefined8 *)((long)plVar6 + 0x9c) = uStack_a8;
      }
    }
  }
  func_0x00010836916c();
LAB_108368ebc:
  FUN_108368fdc(&fStack_a0,pfVar7[8],pfVar7[9],(int)plVar6[4],*(undefined4 *)((long)plVar6 + 0x24));
  *(ulong *)((long)plVar6 + 0x5c) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)((long)plVar6 + 0x54) = CONCAT44(fStack_9c,fStack_a0);
  *(undefined8 *)((long)plVar6 + 0x6c) = uStack_88;
  *(ulong *)((long)plVar6 + 100) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)((long)plVar6 + 0x74) = uStack_80;
  return plVar6;
}



/* Entry: 108369100; end: 10836911b;  */

undefined8 * FUN_108369100(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float *pfStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float *pfStack_68;
  
  uVar3 = param_1[1];
  pfVar6 = *(float **)*param_1;
  iVar7 = *(int *)param_1[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  pfStack_68 = pfVar6;
  FUN_10810c9b4((long)param_2 + 0x54);
  FUN_10810c9b4((long)param_2 + 0x7c);
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[0x18] = 0;
  param_2[0x17] = 0;
  param_2[0x1a] = 0;
  param_2[0x19] = 0;
  param_2[0x1c] = 0;
  param_2[0x1b] = 0;
  fVar8 = 0.0;
  if (iVar7 == 0) {
LAB_108368d18:
    fVar9 = (float)NEON_fminnm((int)fVar8,0x4effffff);
    bVar2 = iVar7 == 2;
  }
  else {
    FUN_108365804(uVar3,&fStack_a0,0);
    if ((uVar3 & 1) == 0) {
LAB_108368d14:
      iVar7 = 0;
      fVar8 = 0.0;
      goto LAB_108368d18;
    }
    uVar10 = NEON_fmov(0x3f800000,4);
    fVar8 = (float)((ulong)uVar10 >> 0x20) / fStack_9c;
    uVar10 = CONCAT44(fVar8,(float)uVar10 / fStack_a0);
    FUN_1083689c4(uVar10,fVar8);
    fVar8 = (float)uVar10;
    if (fVar8 <= 0.0) goto LAB_108368d14;
    if (iVar7 != 1) goto LAB_108368d18;
    bVar2 = false;
    fVar9 = (float)NEON_fminnm((float)(double)(long)(fVar8 + 0.5),0x4effffff);
    if (fVar9 <= -2.1474835e+09) {
      fVar9 = -2.1474835e+09;
    }
  }
  iVar7 = (int)fVar9;
  if (iVar7 == 0) {
    func_0x000108369160(0xceffffff);
LAB_108368d68:
    bVar1 = (bool)(bVar2 ^ 1);
    if (fVar8 - (float)(int)fVar9 <= 0.0) {
      bVar1 = true;
    }
    if (bVar1) goto LAB_108368ebc;
    bVar1 = false;
  }
  else {
    if (iVar7 < 1) goto LAB_108368d68;
    bVar1 = true;
  }
  pfVar4 = pfVar6;
  (**(code **)(*(long *)pfVar6 + 0xa0))();
  if (pfVar4 == (float *)0x0) {
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    pfStack_c8 = (float *)0x0;
    FUN_1082a619c(&fStack_a0);
    fStack_a0 = pfVar6[10];
    fStack_9c = 0.0;
    uStack_98 = 0;
    uStack_94 = (undefined4)*(undefined8 *)(pfVar6 + 8);
    uStack_90 = (undefined4)((ulong)*(undefined8 *)(pfVar6 + 8) >> 0x20);
    pfVar4 = &fStack_a0;
    FUN_108331608(pfVar4,0);
    pfStack_c8 = pfVar4;
    FUN_10836905c(0);
    if (pfVar4 == (float *)0x0) {
      pfVar4 = pfVar6;
      FUN_1083316f4(pfVar6,0);
      pfStack_c8 = pfVar4;
      FUN_10836905c(0);
    }
  }
  else {
    FUN_1082a63ac(pfVar4);
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    FUN_1082a619c(&fStack_a0);
  }
  pfStack_c8 = (float *)0x0;
  uVar10 = param_2[0x1c];
  param_2[0x1c] = pfVar4;
  FUN_10836905c(uVar10);
  FUN_108369068(&pfStack_c8);
  lVar5 = param_2[0x1c];
  if (lVar5 == 0) {
    func_0x000108369160();
    goto LAB_108368ebc;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (bVar1) {
    FUN_108368b58(lVar5,iVar7 + -1,&fStack_a0);
    if ((int)lVar5 != 0) {
      FUN_1082b0634(param_2,&fStack_a0);
      goto LAB_108368e58;
    }
    func_0x000108369160();
  }
  else {
LAB_108368e58:
    if (bVar2) {
      uVar10 = param_2[0x1c];
      FUN_108368b58(uVar10,iVar7,&fStack_a0);
      if ((int)uVar10 != 0) {
        FUN_1082b0634(param_2 + 5,&fStack_a0);
        *(float *)(param_2 + 10) = fVar8 - (float)(int)fVar9;
        FUN_108368fdc(&pfStack_c8,pfVar6[8],pfVar6[9],*(undefined4 *)(param_2 + 9),
                      *(undefined4 *)((long)param_2 + 0x4c));
        *(undefined8 *)((long)param_2 + 0x84) = uStack_c0;
        *(float **)((long)param_2 + 0x7c) = pfStack_c8;
        *(undefined8 *)((long)param_2 + 0x94) = uStack_b0;
        *(undefined8 *)((long)param_2 + 0x8c) = uStack_b8;
        *(undefined8 *)((long)param_2 + 0x9c) = uStack_a8;
      }
    }
  }
  func_0x00010836916c();
LAB_108368ebc:
  FUN_108368fdc(&fStack_a0,pfVar6[8],pfVar6[9],*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  *(ulong *)((long)param_2 + 0x5c) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)((long)param_2 + 0x54) = CONCAT44(fStack_9c,fStack_a0);
  *(undefined8 *)((long)param_2 + 0x6c) = uStack_88;
  *(ulong *)((long)param_2 + 100) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)((long)param_2 + 0x74) = uStack_80;
  return param_2;
}



/* Entry: 10836911c; end: 10836915f;  */

long FUN_10836911c(long param_1)

{
  FUN_108369068(param_1 + -0x11);
  FUN_108330548(param_1 + -0x49);
  FUN_10810a400(param_1 + -0xb9);
  FUN_10810a400(param_1 + -0xe1);
  return param_1 + -0xf1;
}



/* Entry: 108369160; end: 108369177;  */

void FUN_108369160(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long unaff_x29;
  
  if (unaff_x19[0x16] != 0) {
    return;
  }
  plVar2 = *(long **)(unaff_x29 + -0x58);
  (**(code **)(*plVar2 + 0xc0))();
  plVar3 = *(long **)(unaff_x29 + -0x58);
  (**(code **)(*plVar3 + 0xd0))(plVar3,plVar2,unaff_x19 + 0x15,0);
  *unaff_x19 = unaff_x19[0x16];
  unaff_x19[1] = unaff_x19[0x17];
  puVar1 = unaff_x19 + 2;
  FUN_10835c5a8();
  puVar1[2] = unaff_x19[0x1a];
  return;
}



/* Entry: 108369178; end: 10836953f;  */

void FUN_108369178(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  
  pcVar9 = (code *)0x0;
  pcVar1 = pcVar9;
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 0:
  case 5:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x19:
    goto code_r0x000108369534;
  case 1:
  case 0xe:
  case 0x1a:
    pcVar2 = (code *)0x10836a12c;
    pcVar3 = (code *)0x10836a0d8;
    pcVar4 = (code *)0x10836a0a4;
    pcVar5 = (code *)0x10836a050;
    pcVar6 = (code *)0x10836a010;
    pcVar7 = (code *)0x108369fe4;
    pcVar8 = (code *)0x108369fac;
    pcVar9 = (code *)0x108369f80;
    break;
  case 2:
    pcVar2 = (code *)0x108369ad0;
    pcVar3 = (code *)0x108369a24;
    pcVar4 = (code *)0x1083699c0;
    pcVar5 = (code *)0x108369904;
    pcVar6 = (code *)0x108369874;
    pcVar7 = (code *)0x108369840;
    pcVar8 = (code *)0x1083697dc;
    pcVar9 = (code *)0x1083697a8;
    break;
  case 3:
    pcVar2 = (code *)0x108369ea4;
    pcVar3 = (code *)0x108369e00;
    pcVar4 = (code *)0x108369da4;
    pcVar5 = (code *)0x108369cf0;
    pcVar6 = (code *)0x108369c68;
    pcVar7 = (code *)0x108369c3c;
    pcVar8 = (code *)0x108369be0;
    pcVar9 = (code *)0x108369bb4;
    break;
  case 4:
  case 6:
    pcVar2 = (code *)0x10836971c;
    pcVar3 = (code *)0x1083696c8;
    pcVar4 = (code *)0x108369680;
    pcVar5 = (code *)0x108369620;
    pcVar6 = (code *)0x1083695e4;
    pcVar7 = (code *)0x1083695b8;
    pcVar8 = (code *)0x108369574;
    pcVar9 = FUN_108369540;
    break;
  case 7:
  case 8:
    pcVar2 = FUN_10836b110;
    pcVar3 = FUN_10836b07c;
    pcVar4 = FUN_10836b014;
    pcVar5 = FUN_10836af74;
    pcVar6 = FUN_10836af00;
    pcVar7 = FUN_10836aea8;
    pcVar8 = FUN_10836ae3c;
    pcVar9 = FUN_10836ade4;
    break;
  case 0xf:
  case 0x10:
    pcVar2 = FUN_10836a528;
    pcVar3 = (code *)0x10836a484;
    pcVar4 = FUN_10836a414;
    pcVar5 = FUN_10836a34c;
    pcVar6 = FUN_10836a2bc;
    pcVar7 = FUN_10836a25c;
    pcVar8 = FUN_10836a1f4;
    pcVar9 = FUN_10836a1a0;
    break;
  case 0x13:
    pcVar2 = (code *)0x10836a8c4;
    pcVar3 = (code *)0x10836a830;
    pcVar4 = (code *)0x10836a7dc;
    pcVar5 = (code *)0x10836a740;
    pcVar6 = (code *)0x10836a6cc;
    pcVar7 = (code *)0x10836a6a0;
    pcVar8 = (code *)0x10836a64c;
    pcVar9 = FUN_10836a620;
    break;
  case 0x14:
    pcVar2 = FUN_10836b544;
    pcVar3 = (code *)0x10836b4a0;
    pcVar4 = FUN_10836b42c;
    pcVar5 = FUN_10836b37c;
    pcVar6 = (code *)0x10836b2fc;
    pcVar7 = (code *)0x10836b2a0;
    pcVar8 = (code *)0x10836b230;
    pcVar9 = FUN_10836b1d8;
    break;
  case 0x15:
    pcVar2 = FUN_10836b9a0;
    pcVar3 = (code *)0x10836b8fc;
    pcVar4 = FUN_10836b888;
    pcVar5 = FUN_10836b7d8;
    pcVar6 = (code *)0x10836b758;
    pcVar7 = FUN_10836b6fc;
    pcVar8 = FUN_10836b690;
    pcVar9 = FUN_10836b638;
    break;
  case 0x16:
    pcVar2 = (code *)0x10836ad70;
    pcVar3 = (code *)0x10836ad1c;
    pcVar4 = (code *)0x10836ace8;
    pcVar5 = (code *)0x10836ac94;
    pcVar6 = (code *)0x10836ac54;
    pcVar7 = (code *)0x10836ac28;
    pcVar8 = (code *)0x10836abf4;
    pcVar9 = (code *)0x10836abc8;
    break;
  case 0x17:
    pcVar2 = (code *)0x10836ab48;
    pcVar3 = (code *)0x10836aaf4;
    pcVar4 = (code *)0x10836aabc;
    pcVar5 = (code *)0x10836aa64;
    pcVar6 = (code *)0x10836aa24;
    pcVar7 = (code *)0x10836a9f8;
    pcVar8 = (code *)0x10836a9bc;
    pcVar9 = (code *)0x10836a990;
    break;
  case 0x18:
    pcVar2 = FUN_10836be80;
    pcVar3 = (code *)0x10836bd84;
    pcVar4 = FUN_10836bd10;
    pcVar5 = FUN_10836bc4c;
    pcVar6 = (code *)0x10836bbb0;
    pcVar7 = FUN_10836bb50;
    pcVar8 = FUN_10836bae8;
    pcVar9 = FUN_10836ba94;
    break;
  default:
    pcVar8 = (code *)0x0;
    pcVar7 = (code *)0x0;
    pcVar6 = (code *)0x0;
    pcVar5 = (code *)0x0;
    pcVar4 = (code *)0x0;
    pcVar3 = (code *)0x0;
    pcVar2 = (code *)0x0;
  }
  pcVar1 = (code *)0x48;
  __Znwm();
  *(undefined ***)pcVar1 = &PTR_DAT_110a3efc0;
  *(code **)(pcVar1 + 8) = pcVar9;
  *(code **)(pcVar1 + 0x10) = pcVar8;
  *(code **)(pcVar1 + 0x18) = pcVar7;
  *(code **)(pcVar1 + 0x20) = pcVar6;
  *(code **)(pcVar1 + 0x28) = pcVar5;
  *(code **)(pcVar1 + 0x30) = pcVar4;
  *(code **)(pcVar1 + 0x38) = pcVar3;
  *(code **)(pcVar1 + 0x40) = pcVar2;
code_r0x000108369534:
  *param_1 = pcVar1;
  return;
}



/* Entry: 108369540; end: 10836a19f;  */

void FUN_108369540(undefined4 *param_1,undefined4 *param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  for (uVar2 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    uVar3 = *param_2;
    uVar1 = *(undefined4 *)((long)param_2 + param_3);
    uVar4 = NEON_uhadd((ulong)CONCAT16((char)((uint)uVar1 >> 0x18),
                                       (uint6)CONCAT14((char)((uint)uVar1 >> 0x10),
                                                       (uint)CONCAT12((char)((uint)uVar1 >> 8),
                                                                      (ushort)(byte)uVar1))),
                       (ulong)CONCAT16((char)((uint)uVar3 >> 0x18),
                                       (uint6)CONCAT14((char)((uint)uVar3 >> 0x10),
                                                       (uint)CONCAT12((char)((uint)uVar3 >> 8),
                                                                      (ushort)(byte)uVar3))),2);
    *param_1 = CONCAT13((char)((ulong)uVar4 >> 0x30),
                        CONCAT12((char)((ulong)uVar4 >> 0x20),
                                 CONCAT11((char)((ulong)uVar4 >> 0x10),(char)uVar4)));
    param_1 = param_1 + 1;
    param_2 = param_2 + 2;
  }
  return;
}



/* Entry: 10836a1a0; end: 10836a1f3;  */

void FUN_10836a1a0(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar4;
  undefined2 uVar5;
  float fVar3;
  
  FUN_10836c2bc();
  while (unaff_x22 != 0) {
    uVar1 = (undefined2)*unaff_x20;
    uVar4 = (undefined2)((ulong)*unaff_x20 >> 0x10);
    FUN_10836c190();
    uVar2 = (undefined2)*(undefined8 *)((long)unaff_x20 + unaff_x19);
    uVar5 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + unaff_x19) >> 0x10);
    FUN_10836c190(uVar2);
    fVar3 = (float)CONCAT22(uVar4,uVar1) + (float)CONCAT22(uVar5,uVar2);
    FUN_10836c240(SUB42(fVar3,0),1);
    func_0x00010836c438((float2)fVar3);
  }
  return;
}



/* Entry: 10836a1f4; end: 10836a25b;  */

void FUN_10836a1f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x22;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_10836c2bc();
  while (unaff_x22 != 0) {
    FUN_10836c190();
    FUN_10836c190();
    uVar1 = *(undefined8 *)(unaff_x20 + param_3 * 2);
    uVar2 = (undefined2)uVar1;
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    func_0x00010836bfac(uVar2);
    FUN_10836c1fc();
    func_0x00010836c26c();
    FUN_10836c240(2);
    func_0x00010836c438((float2)(float)CONCAT22(uVar3,uVar2));
  }
  return;
}



/* Entry: 10836a25c; end: 10836a2bb;  */

void FUN_10836a25c(void)

{
  undefined8 uVar1;
  uint in_w3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar6;
  undefined2 uVar7;
  float fVar5;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  func_0x00010836c420();
  for (uVar2 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *unaff_x19;
    uVar3 = (undefined2)uVar1;
    uVar6 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar8 = (undefined2)((ulong)uVar1 >> 0x20);
    uVar10 = (undefined2)((ulong)uVar1 >> 0x30);
    fVar13 = 0.0;
    fVar15 = 0.0;
    FUN_10836c190();
    uVar1 = unaff_x19[1];
    uVar4 = (undefined2)uVar1;
    uVar7 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar9 = (undefined2)((ulong)uVar1 >> 0x20);
    uVar11 = (undefined2)((ulong)uVar1 >> 0x30);
    fVar12 = 0.0;
    fVar14 = 0.0;
    FUN_10836c190();
    fVar5 = (float)CONCAT22(uVar6,uVar3) + (float)CONCAT22(uVar7,uVar4);
    fVar16 = (float)(CONCAT26(uVar10,CONCAT24(uVar8,CONCAT22(uVar6,uVar3))) >> 0x20) +
             (float)CONCAT22(uVar11,uVar9);
    fVar13 = fVar13 + fVar12;
    fVar15 = fVar15 + fVar14;
    FUN_10836c240(1);
    *unaff_x20 = CONCAT26((float2)fVar15,
                          CONCAT24((float2)fVar13,
                                   CONCAT22((float2)(float)(CONCAT26((short)((uint)fVar16 >> 0x10),
                                                                     CONCAT24(SUB42(fVar16,0),fVar5)
                                                                    ) >> 0x20),(float2)fVar5)));
    unaff_x19 = unaff_x19 + 2;
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 10836a2bc; end: 10836a34b;  */

void FUN_10836a2bc(void)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010836c51c();
  while (unaff_x21 != 0) {
    uVar1 = unaff_x22[-1];
    FUN_10836c190();
    uVar2 = *unaff_x22;
    FUN_10836c190();
    uVar3 = *(undefined8 *)((long)unaff_x22 + unaff_x19 + -8);
    FUN_10836c190();
    uVar4 = *(undefined8 *)((long)unaff_x22 + unaff_x19);
    FUN_10836c190(uVar4);
    FUN_10836c240(CONCAT44((float)((ulong)uVar2 >> 0x20) +
                           (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar3 >> 0x20) +
                           (float)((ulong)uVar4 >> 0x20),
                           (float)uVar2 + (float)uVar1 + (float)uVar3 + (float)uVar4),2);
    func_0x00010836c47c();
    unaff_x22 = unaff_x22 + 2;
  }
  return;
}



/* Entry: 10836a34c; end: 10836a413;  */

void FUN_10836a34c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010836c51c();
  while (unaff_x21 != 0) {
    FUN_10836c190();
    uVar1 = *unaff_x22;
    FUN_10836c190();
    FUN_10836c190();
    FUN_10836c190();
    FUN_10836c190();
    uVar2 = *(undefined8 *)((long)unaff_x22 + param_3 * 2);
    FUN_10836c190();
    func_0x00010836c3e0();
    func_0x00010836c26c();
    func_0x00010836c42c(uVar1);
    func_0x00010836c26c();
    FUN_10836c240(CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar1 >> 0x20),
                           (float)uVar2 + (float)uVar1),3);
    func_0x00010836c47c();
    unaff_x22 = unaff_x22 + 2;
  }
  return;
}



/* Entry: 10836a414; end: 10836a527;  */

void FUN_10836a414(void)

{
  uint in_w3;
  undefined8 *unaff_x19;
  
  func_0x00010836c420();
  FUN_10836c190();
  while ((in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)) != 0) {
    unaff_x19 = unaff_x19 + 2;
    FUN_10836c190();
    func_0x00010836bfac(*unaff_x19);
    func_0x00010836c218();
    func_0x00010836c2e4();
    func_0x00010836c26c();
    FUN_10836c240(2);
    func_0x00010836c47c();
  }
  return;
}



/* Entry: 10836a528; end: 10836a61f;  */

void FUN_10836a528(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x21;
  long lVar4;
  uint unaff_w22;
  ulong uVar5;
  undefined8 *unaff_x23;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar9;
  undefined2 uVar10;
  float fVar8;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_d4;
  float fVar24;
  float in_register_00005088;
  float fVar25;
  float in_register_0000508c;
  float fVar26;
  float fVar27;
  
  fVar24 = (float)((ulong)in_d4 >> 0x20);
  fVar23 = (float)in_d4;
  func_0x00010836c408();
  uVar1 = *param_2;
  uVar6 = (undefined2)uVar1;
  uVar9 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar11 = (undefined2)((ulong)uVar1 >> 0x20);
  uVar15 = (undefined2)((ulong)uVar1 >> 0x30);
  fVar20 = 0.0;
  fVar22 = 0.0;
  FUN_10836c190();
  uVar1 = *unaff_x23;
  uVar7 = (undefined2)uVar1;
  uVar10 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar12 = (undefined2)((ulong)uVar1 >> 0x20);
  uVar16 = (undefined2)((ulong)uVar1 >> 0x30);
  FUN_10836c190();
  func_0x00010836bfac((short)*(undefined8 *)((long)unaff_x23 + unaff_x20));
  func_0x00010836c218();
  func_0x00010836c3c8(uVar6,CONCAT26(uVar16,CONCAT24(uVar12,CONCAT22(uVar10,uVar7))));
  func_0x00010836c26c();
  lVar4 = unaff_x21 + 0x10;
  lVar3 = lVar4 + unaff_x20;
  puVar2 = (undefined8 *)(lVar4 + unaff_x20 * 2);
  for (uVar5 = (ulong)(unaff_w22 & ((int)unaff_w22 >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
      uVar5 = uVar5 - 1) {
    uVar1 = *(undefined8 *)(lVar4 + -8);
    uVar7 = (undefined2)uVar1;
    uVar12 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar13 = (undefined2)((ulong)uVar1 >> 0x20);
    uVar17 = (undefined2)((ulong)uVar1 >> 0x30);
    fVar19 = 0.0;
    fVar21 = 0.0;
    FUN_10836c190();
    uVar1 = *(undefined8 *)(lVar3 + -8);
    uVar10 = (undefined2)uVar1;
    uVar16 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar14 = (undefined2)((ulong)uVar1 >> 0x20);
    uVar18 = (undefined2)((ulong)uVar1 >> 0x30);
    FUN_10836c190();
    func_0x00010836bfac((short)puVar2[-1]);
    func_0x00010836c218();
    func_0x00010836c3c8(uVar7,CONCAT26(uVar18,CONCAT24(uVar14,CONCAT22(uVar16,uVar10))));
    func_0x00010836c26c();
    FUN_10836bff0();
    func_0x00010836c22c();
    lVar4 = lVar4 + 0x10;
    FUN_10836c190();
    lVar3 = lVar3 + 0x10;
    FUN_10836c190();
    func_0x00010836bfac((short)*puVar2);
    func_0x00010836c1fc();
    func_0x00010836c218();
    fVar8 = (float)CONCAT22(uVar9,uVar6) + (float)CONCAT22(uVar12,uVar7) + fVar23;
    fVar27 = (float)(CONCAT26(uVar15,CONCAT24(uVar11,CONCAT22(uVar9,uVar6))) >> 0x20) +
             (float)(CONCAT26(uVar17,CONCAT24(uVar13,CONCAT22(uVar12,uVar7))) >> 0x20) + fVar24;
    fVar20 = fVar20 + fVar19 + in_register_00005088;
    fVar22 = fVar22 + fVar21 + in_register_0000508c;
    fVar19 = fVar23;
    fVar21 = fVar24;
    fVar25 = in_register_00005088;
    fVar26 = in_register_0000508c;
    FUN_10836c240(4);
    *unaff_x19 = CONCAT26((float2)fVar22,
                          CONCAT24((float2)fVar20,
                                   CONCAT22((float2)(float)(CONCAT26((short)((uint)fVar27 >> 0x10),
                                                                     CONCAT24(SUB42(fVar27,0),fVar8)
                                                                    ) >> 0x20),(float2)fVar8)));
    uVar6 = SUB42(fVar23,0);
    uVar9 = (undefined2)((uint)fVar23 >> 0x10);
    uVar11 = SUB42(fVar24,0);
    uVar15 = (undefined2)((uint)fVar24 >> 0x10);
    puVar2 = puVar2 + 2;
    fVar20 = in_register_00005088;
    fVar22 = in_register_0000508c;
    fVar23 = fVar19;
    fVar24 = fVar21;
    in_register_00005088 = fVar25;
    in_register_0000508c = fVar26;
    unaff_x19 = unaff_x19 + 1;
  }
  return;
}



/* Entry: 10836a620; end: 10836ade3;  */

void FUN_10836a620(void)

{
  uint in_w3;
  long extraout_x8;
  
  if ((in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)) != 0) {
    do {
      func_0x00010836c530();
    } while (extraout_x8 != 0);
  }
  return;
}



/* Entry: 10836ade4; end: 10836ae3b;  */

void FUN_10836ade4(undefined4 *param_1,uint *param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long unaff_x22;
  ulong uVar3;
  
  for (uVar3 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar2 = (ulong)*param_2;
    func_0x00010836bff8();
    func_0x00010836c508();
    uVar1 = (undefined4)(uVar2 + unaff_x22 >> 1);
    func_0x00010836c018();
    *param_1 = uVar1;
    param_2 = param_2 + 2;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10836ae3c; end: 10836aea7;  */

void FUN_10836ae3c(undefined4 *param_1,uint *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x22;
  ulong uVar3;
  
  for (uVar3 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar1 = (ulong)*param_2;
    func_0x00010836bff8(uVar1);
    func_0x00010836c508();
    uVar2 = (ulong)*(uint *)((long)param_2 + param_3 * 2);
    func_0x00010836bff8();
    func_0x00010836c514(unaff_x22 + uVar1 * 2 + uVar2);
    *param_1 = (int)uVar2;
    param_2 = param_2 + 2;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10836aea8; end: 10836aeff;  */

void FUN_10836aea8(void)

{
  undefined4 uVar1;
  ulong uVar2;
  uint in_w3;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  func_0x00010836c420();
  for (uVar3 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_10836c584(*unaff_x19);
    uVar2 = (ulong)(uint)unaff_x19[1];
    func_0x00010836bff8();
    uVar1 = (undefined4)(uVar2 + unaff_x21 >> 1);
    func_0x00010836c018();
    *unaff_x20 = uVar1;
    unaff_x19 = unaff_x19 + 2;
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 10836af00; end: 10836af73;  */

void FUN_10836af00(undefined4 *param_1,long param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  puVar1 = (undefined4 *)(param_2 + 4);
  puVar2 = (uint *)(param_2 + 4 + param_3);
  for (uVar5 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
      uVar5 = uVar5 - 1) {
    FUN_10836c570(puVar1[-1]);
    FUN_10836c584(*puVar1);
    uVar3 = (ulong)puVar2[-1];
    func_0x00010836bff8(uVar3);
    uVar4 = (ulong)*puVar2;
    func_0x00010836bff8();
    func_0x00010836c514(unaff_x21 + unaff_x20 + uVar3 + uVar4);
    *param_1 = (int)uVar4;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10836af74; end: 10836b013;  */

void FUN_10836af74(undefined4 *param_1,long param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  
  puVar1 = (undefined4 *)(param_2 + 4);
  puVar2 = (uint *)((long)puVar1 + param_3);
  puVar3 = (uint *)((long)puVar1 + param_3 * 2);
  for (uVar9 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar9 != 0;
      uVar9 = uVar9 - 1) {
    FUN_10836c570(puVar1[-1]);
    FUN_10836c584(*puVar1);
    uVar5 = (ulong)puVar2[-1];
    func_0x00010836bff8();
    uVar6 = (ulong)*puVar2;
    func_0x00010836bff8();
    uVar7 = (ulong)puVar3[-1];
    func_0x00010836bff8();
    uVar8 = (ulong)*puVar3;
    func_0x00010836bff8();
    uVar4 = (undefined4)(unaff_x21 + unaff_x20 + uVar7 + (uVar6 + uVar5) * 2 + uVar8 >> 3);
    func_0x00010836c018();
    *param_1 = uVar4;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10836b014; end: 10836b07b;  */

void FUN_10836b014(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint in_w3;
  uint *unaff_x19;
  undefined4 *unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  
  func_0x00010836c420();
  FUN_10836c584(*unaff_x19);
  for (uVar4 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar1 = (ulong)unaff_x19[1];
    func_0x00010836bff8(uVar1);
    uVar2 = (ulong)unaff_x19[2];
    func_0x00010836bff8();
    uVar3 = uVar2;
    func_0x00010836c514(unaff_x21 + uVar1 * 2 + uVar2);
    *unaff_x20 = (int)uVar3;
    unaff_x21 = uVar2;
    unaff_x20 = unaff_x20 + 1;
    unaff_x19 = unaff_x19 + 2;
  }
  return;
}



/* Entry: 10836b07c; end: 10836b10f;  */

void FUN_10836b07c(undefined8 param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar8;
  
  func_0x00010836c2d0();
  uVar6 = (ulong)*param_2;
  func_0x00010836bff8();
  uVar7 = (ulong)*(uint *)(unaff_x22 + unaff_x21);
  func_0x00010836bff8();
  lVar2 = uVar7 + uVar6;
  puVar3 = (undefined4 *)(unaff_x22 + 8);
  puVar4 = (uint *)(unaff_x22 + 8 + unaff_x21);
  for (uVar8 = (ulong)((uint)unaff_x20 & ((int)(uint)unaff_x20 >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
      uVar8 = uVar8 - 1) {
    FUN_10836c570(puVar3[-1]);
    uVar6 = (ulong)puVar4[-1];
    func_0x00010836bff8();
    lVar1 = uVar6 + unaff_x20;
    FUN_10836c570(*puVar3);
    uVar6 = (ulong)*puVar4;
    func_0x00010836bff8();
    unaff_x20 = uVar6 + unaff_x20;
    uVar5 = (undefined4)((ulong)(lVar2 + lVar1 * 2 + unaff_x20) >> 3);
    func_0x00010836c018();
    *unaff_x19 = uVar5;
    lVar2 = unaff_x20;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
    unaff_x19 = unaff_x19 + 1;
  }
  return;
}



/* Entry: 10836b110; end: 10836b1d7;  */

void FUN_10836b110(undefined8 param_1,uint *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar10;
  
  func_0x00010836c2d0();
  uVar7 = (ulong)*param_2;
  func_0x00010836bff8();
  uVar8 = (ulong)*(uint *)((long)param_2 + param_3);
  func_0x00010836bff8();
  uVar9 = (ulong)*(uint *)((long)param_2 + param_3 + unaff_x21);
  func_0x00010836bff8();
  puVar1 = (undefined4 *)(unaff_x22 + 8);
  lVar3 = uVar7 + uVar8 * 2 + uVar9;
  puVar4 = (uint *)((long)puVar1 + unaff_x21 * 2);
  puVar5 = (undefined4 *)((long)puVar1 + unaff_x21);
  for (uVar10 = (ulong)((uint)unaff_x20 & ((int)(uint)unaff_x20 >> 0x1f ^ 0xffffffffU)); uVar10 != 0
      ; uVar10 = uVar10 - 1) {
    FUN_10836c570(puVar1[-1]);
    FUN_10836c584(puVar5[-1]);
    uVar7 = (ulong)puVar4[-1];
    func_0x00010836bff8();
    lVar2 = unaff_x20 + unaff_x21 * 2;
    FUN_10836c570(*puVar1);
    FUN_10836c584(*puVar5);
    uVar8 = (ulong)*puVar4;
    func_0x00010836bff8();
    unaff_x20 = unaff_x20 + unaff_x21 * 2 + uVar8;
    uVar6 = (undefined4)(lVar3 + (lVar2 + uVar7) * 2 + unaff_x20 >> 4);
    func_0x00010836c018();
    *unaff_x19 = uVar6;
    lVar3 = unaff_x20;
    puVar1 = puVar1 + 2;
    puVar4 = puVar4 + 2;
    puVar5 = puVar5 + 2;
    unaff_x19 = unaff_x19 + 1;
  }
  return;
}



/* Entry: 10836b1d8; end: 10836b37b;  */

void FUN_10836b1d8(float param_1)

{
  long unaff_x19;
  undefined2 *unaff_x20;
  undefined2 *unaff_x21;
  long unaff_x22;
  float fStack_40;
  
  FUN_10836c2bc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -1) {
    func_0x00010836c040(*unaff_x20);
    FUN_10836c1cc();
    FUN_10836c1e0(*(undefined2 *)((long)unaff_x20 + unaff_x19));
    param_1 = fStack_40 + param_1;
    FUN_10836c1ac(1);
    *unaff_x21 = SUB42(param_1,0);
    unaff_x21 = unaff_x21 + 1;
    unaff_x20 = unaff_x20 + 2;
  }
  return;
}



/* Entry: 10836b37c; end: 10836b42b;  */

void FUN_10836b37c(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  
  FUN_10836c460();
  puVar1 = (undefined2 *)(param_3 + 2);
  puVar2 = (undefined2 *)((long)puVar1 + param_4);
  puVar3 = puVar1 + param_4;
  for (; fVar5 = (float)param_1, unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
    FUN_10836c1e0(puVar1[-1]);
    FUN_10836c1e0(*puVar1);
    fVar4 = fVar5;
    FUN_10836c1e0(puVar2[-1]);
    FUN_10836c1e0(*puVar2);
    func_0x00010836c040(puVar3[-1]);
    FUN_10836c1cc();
    FUN_10836c1e0(*puVar3);
    func_0x00010836c3e0();
    func_0x00010836c26c();
    func_0x00010836c42c();
    func_0x00010836c26c();
    param_1 = (ulong)(uint)(fVar4 + fVar5);
    FUN_10836c1ac(3);
    *unaff_x19 = (short)param_1;
    unaff_x19 = unaff_x19 + 1;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
  }
  return;
}



/* Entry: 10836b42c; end: 10836b543;  */

void FUN_10836b42c(undefined8 param_1)

{
  uint in_w3;
  undefined2 *unaff_x19;
  undefined2 *unaff_x20;
  ulong uVar1;
  undefined2 uVar2;
  undefined8 in_d4;
  undefined8 uVar3;
  
  func_0x00010836c420();
  FUN_10836c1e0(*unaff_x19);
  for (uVar1 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar2 = (undefined2)param_1,
      uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x00010836c040(unaff_x19[1]);
    FUN_10836c1cc();
    func_0x00010836c040(unaff_x19[2]);
    func_0x00010836c218();
    uVar3 = in_d4;
    func_0x00010836c2e4();
    func_0x00010836c26c();
    FUN_10836c1ac(2);
    *unaff_x20 = uVar2;
    unaff_x20 = unaff_x20 + 1;
    param_1 = in_d4;
    in_d4 = uVar3;
    unaff_x19 = unaff_x19 + 2;
  }
  return;
}



/* Entry: 10836b544; end: 10836b637;  */

void FUN_10836b544(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong uVar4;
  undefined2 *unaff_x23;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 in_d4;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulong)in_d4 >> 0x20);
  fVar8 = (float)in_d4;
  func_0x00010836c408();
  FUN_10836c1e0(*param_3);
  uVar6 = param_1;
  FUN_10836c1e0(*unaff_x23);
  func_0x00010836c040(*(undefined2 *)((long)unaff_x23 + unaff_x20));
  func_0x00010836c218();
  func_0x00010836c3c8(param_1,uVar6);
  func_0x00010836c26c();
  puVar1 = (undefined2 *)(unaff_x21 + 4);
  puVar2 = puVar1 + unaff_x20;
  puVar3 = (undefined2 *)((long)puVar1 + unaff_x20);
  for (uVar4 = (ulong)(unaff_w22 & ((int)unaff_w22 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    uVar7 = param_1;
    FUN_10836c1e0(puVar1[-1]);
    uVar6 = uVar7;
    FUN_10836c1e0(puVar3[-1]);
    func_0x00010836c040(puVar2[-1]);
    func_0x00010836c218();
    func_0x00010836c3c8(uVar7,uVar6);
    func_0x00010836c26c();
    func_0x00010836bff0();
    func_0x00010836c22c();
    FUN_10836c1e0(*puVar1);
    func_0x00010836c040(*puVar3);
    FUN_10836c1cc();
    func_0x00010836c040(*puVar2);
    func_0x00010836c1fc();
    func_0x00010836c218();
    uVar6 = CONCAT44(uVar9,fVar8);
    uVar5 = SUB42((float)param_1 + (float)uVar7 + fVar8,0);
    FUN_10836c1ac(4);
    *unaff_x19 = uVar5;
    unaff_x19 = unaff_x19 + 1;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    param_1 = uVar6;
  }
  return;
}


