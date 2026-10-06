/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072fffec; end: 107300003;  */

void FUN_1072fffec(undefined8 *param_1)

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



/* Entry: 107300004; end: 10730002f;  */

long FUN_107300004(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1072fffec(param_1);
  }
  return param_1;
}



/* Entry: 107300030; end: 107300057;  */

long FUN_107300030(long param_1)

{
  FUN_107300058();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107300058; end: 1073000af;  */

void FUN_107300058(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1073000b0; end: 1073000c3;  */

void FUN_1073000b0(void)

{
  func_0x000107300084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073000c4; end: 1073000e7;  */

long FUN_1073000c4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107301284();
  func_0x00010730129c();
  *param_1 = &PTR_SUB_11099e5b0;
  FUN_1073003b0(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 1073000e8; end: 10730010b;  */

void FUN_1073000e8(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010730129c(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_11099e5b0;
  FUN_1073003b0(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10730010c; end: 107300347;  */

void FUN_10730010c(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 **ppuStack_78;
  undefined1 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107301228();
  func_0x0001073011bc();
  uStack_58 = extraout_x8;
  FUN_1073003e0(auStack_100,unaff_x19 + 8);
  iVar4 = (int)unaff_x19 + 8;
  func_0x000107300468();
  if (iVar4 != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(int *)(unaff_x20 + 0x1c) - 0xb;
    in_ZR = uVar1 == 1;
    if (uVar1 < 2) {
      func_0x0001073012cc();
      *(undefined1 *)(lVar9 + 0x92) = 1;
      if ((*(byte *)(lVar9 + 0x91) & 1) == 0) {
        *(undefined1 *)(lVar9 + 0x91) = 1;
        func_0x000107301220();
        plVar10 = *(long **)(lVar9 + 0xb0);
        ppuStack_b0 = (undefined8 **)0x0;
        ppuStack_a8 = (undefined8 **)0x0;
        ppuStack_a0 = (undefined8 **)0x0;
        ppuStack_78 = &ppuStack_b0;
        uStack_70 = 0;
        pppuVar5 = &ppuStack_a0;
        lVar8 = 1;
        func_0x0001072ffe14();
        ppuStack_a0 = pppuVar5 + lVar8 * 4;
        ppuStack_b0 = pppuVar5;
        pppuVar5[1] = (undefined8 **)0xc066800000000000;
        *pppuVar5 = (undefined8 **)0x4056800000000000;
        pppuVar5[3] = (undefined8 **)0x4066800000000000;
        pppuVar5[2] = (undefined8 **)0xc056800000000000;
        ppuStack_a8 = pppuVar5 + 4;
        uStack_70 = 1;
        FUN_107300004(&ppuStack_78);
        FUN_1072fec48(&uStack_f0,lVar9 + 0xe8);
        puVar6 = (undefined8 *)0x40;
        lStack_d8 = lVar9;
        __Znwm();
        uVar3 = uStack_e8;
        uVar2 = uStack_f0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR_DAT_11099e640;
        uStack_98 = uStack_f0;
        uStack_90 = uStack_e8;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_88 = uStack_e0;
        puVar7 = puVar6;
        lStack_80 = lVar9;
        func_0x000107301284();
        *puVar7 = &PTR_SUB_11099e778;
        puVar7[1] = uVar2;
        uStack_98 = 0;
        uStack_90 = 0;
        puVar7[2] = uVar3;
        puVar7[3] = uStack_e0;
        puVar7[4] = lVar9;
        puStack_60 = puVar7;
        FUN_107300df0(puVar6 + 3,&ppuStack_78);
        func_0x000107300ebc(&ppuStack_78);
        func_0x00010725b1d4(&uStack_98);
        uStack_d0 = 0;
        uStack_c8 = 0;
        puStack_c0 = puVar6 + 3;
        puStack_b8 = puVar6;
        (**(code **)(*plVar10 + 0x10))(plVar10,&ppuStack_b0,&puStack_c0);
        func_0x000107300f3c(&puStack_c0);
        func_0x000107300f14(&uStack_d0);
        func_0x0001073012dc();
        func_0x0001072fffb8();
        goto LAB_1073002a4;
      }
    }
    else {
      func_0x0001073012cc();
      *(undefined1 *)(lVar9 + 0x92) = 0;
    }
    func_0x000107301220();
  }
LAB_1073002a4:
  func_0x00010730128c();
  func_0x000107301118(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107300f3c(&puStack_c0);
  func_0x000107300f14(&uStack_d0);
  func_0x0001073012dc();
  func_0x0001072fffb8(&ppuStack_b0);
  func_0x00010730128c();
  func_0x0001073012d4();
  func_0x0001073012a8();
  func_0x000107301294();
  func_0x0001073011ac();
  return;
}



/* Entry: 107300348; end: 10730036f;  */

void FUN_107300348(undefined8 param_1)

{
  func_0x0001073012a8();
  func_0x000107301294(param_1,&PTR_DAT_11099e620);
  func_0x0001073011ac();
  return;
}



/* Entry: 107300370; end: 10730037b;  */

undefined ** FUN_107300370(void)

{
  return &PTR_DAT_11099e620;
}



/* Entry: 10730037c; end: 1073003af;  */

void FUN_10730037c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010730129c();
  *param_1 = &PTR_SUB_11099e5b0;
  FUN_1073003b0(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1073003b0; end: 1073003df;  */

void FUN_1073003b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107301254();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1073003e0; end: 1073004b7;  */

void FUN_1073003e0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_1072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_107300458;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_107300458:
  FUN_1072508cc(pplVar3);
  return;
}



/* Entry: 1073004b8; end: 107300853;  */

void FUN_1073004b8(long param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long extraout_x8;
  ulong extraout_x8_00;
  long lVar6;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  long extraout_x10;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  func_0x000107301228();
  func_0x00010730137c(*(undefined4 *)(param_2 + 0x10));
  uVar15 = extraout_x8 + extraout_x10;
  uVar15 = extraout_x9 + uVar15 * 0x1000 + (uVar15 >> 4) + extraout_x10 ^ uVar15;
  *(ulong *)(param_2 + 8) = uVar15;
  uVar16 = *(ulong *)(param_1 + 8);
  if ((uVar16 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar16 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    bVar3 = 2 < uVar16;
    bVar4 = uVar16 == 3;
    func_0x00010730135c(uVar16 << 1);
    uVar14 = extraout_x8_00;
    if (!bVar3 || bVar4) {
      uVar14 = extraout_x9_00;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = unaff_x19[1];
    }
    if (uVar16 < uVar14) {
LAB_10730056c:
      FUN_1072ffb1c(uVar14);
      FUN_1072ffb04();
      unaff_x19[1] = uVar14;
      lVar6 = *unaff_x19;
      for (uVar16 = 0; uVar14 != uVar16; uVar16 = uVar16 + 1) {
        *(undefined8 *)(lVar6 + uVar16 * 8) = 0;
      }
      plVar8 = (long *)unaff_x19[2];
      uVar16 = uVar14;
      if (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        uVar7 = uVar14 - 1;
        if ((uVar14 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar14 <= uVar10) {
          uVar11 = 0;
          if (uVar14 != 0) {
            uVar11 = uVar10 / uVar14;
          }
          uVar10 = uVar10 - uVar11 * uVar14;
        }
        *(long **)(lVar6 + uVar10 * 8) = unaff_x19 + 2;
        while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
          uVar11 = plVar8[1];
          if ((uVar14 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar14 <= uVar11) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar1 * uVar14;
          }
          if (uVar11 != uVar10) {
            plVar13 = plVar8;
            if (*(long *)(lVar6 + uVar11 * 8) == 0) {
              *(long **)(lVar6 + uVar11 * 8) = plVar9;
              uVar10 = uVar11;
            }
            else {
              do {
                plVar12 = plVar13;
                plVar13 = (long *)*plVar12;
                if (plVar13 == (long *)0x0) break;
              } while (*(int *)(plVar8 + 2) == *(int *)(plVar13 + 2) &&
                       *(int *)((long)plVar8 + 0x14) == *(int *)((long)plVar13 + 0x14));
              *plVar9 = (long)plVar13;
              *plVar12 = **(long **)(lVar6 + uVar11 * 8);
              **(long **)(lVar6 + uVar11 * 8) = (long)plVar8;
              plVar8 = plVar9;
            }
          }
        }
      }
    }
    else if (uVar14 < uVar16) {
      uVar10 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x000107301234();
      }
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      if (uVar14 < uVar16) {
        if (uVar14 != 0) goto LAB_10730056c;
        FUN_1072ffb04();
        unaff_x19[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = unaff_x19[1];
      }
    }
  }
  uVar14 = uVar16 - 1;
  if ((uVar16 & uVar14) == 0) {
    uVar10 = uVar14 & uVar15;
  }
  else {
    uVar10 = uVar15;
    if (uVar16 <= uVar15) {
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = uVar15 / uVar16;
      }
      uVar10 = uVar15 - uVar10 * uVar16;
    }
  }
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + uVar10 * 8);
  if (plVar8 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar9 = plVar8;
      plVar8 = (long *)*plVar9;
      if (plVar8 == (long *)0x0) break;
      uVar7 = plVar8[1];
      if ((uVar16 & uVar14) == 0) {
        uVar11 = uVar7 & uVar14;
      }
      else {
        uVar11 = uVar7;
        if (uVar16 <= uVar7) {
          uVar11 = 0;
          if (uVar16 != 0) {
            uVar11 = uVar7 / uVar16;
          }
          uVar11 = uVar7 - uVar11 * uVar16;
        }
      }
      if (uVar11 != uVar10) break;
      if (uVar7 == uVar15) {
        bVar3 = (int)plVar8[2] == (int)unaff_x20[2] &&
                *(int *)((long)plVar8 + 0x14) == *(int *)((long)unaff_x20 + 0x14);
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  uVar15 = unaff_x20[1];
  if ((uVar16 & uVar14) == 0) {
    uVar15 = uVar14 & uVar15;
    if (plVar9 == (long *)0x0) goto LAB_1073007b4;
LAB_107300778:
    *unaff_x20 = *plVar9;
    *plVar9 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_107300808;
    uVar10 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar16 & uVar14) == 0) {
      uVar10 = uVar10 & uVar14;
    }
    else if (uVar16 <= uVar10) {
      uVar14 = 0;
      if (uVar16 != 0) {
        uVar14 = uVar10 / uVar16;
      }
      uVar10 = uVar10 - uVar14 * uVar16;
    }
    if (uVar10 == uVar15) goto LAB_107300808;
  }
  else {
    if (uVar16 <= uVar15) {
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar10 * uVar16;
    }
    if (plVar9 != (long *)0x0) goto LAB_107300778;
LAB_1073007b4:
    plVar8 = unaff_x19 + 2;
    *unaff_x20 = *plVar8;
    *plVar8 = (long)unaff_x20;
    *(long **)(lVar6 + uVar15 * 8) = plVar8;
    if (*unaff_x20 == 0) goto LAB_107300808;
    uVar10 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar16 & uVar14) == 0) {
      uVar10 = uVar10 & uVar14;
    }
    else if (uVar16 <= uVar10) {
      uVar15 = 0;
      if (uVar16 != 0) {
        uVar15 = uVar10 / uVar16;
      }
      uVar10 = uVar10 - uVar15 * uVar16;
    }
  }
  *(long **)(lVar6 + uVar10 * 8) = unaff_x20;
LAB_107300808:
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 107300854; end: 1073008c7;  */

void FUN_107300854(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1073008c8; end: 1073008db;  */

void FUN_1073008c8(void)

{
  FUN_107300ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073008dc; end: 1073008eb;  */

void FUN_1073008dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073008e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073008ec; end: 107300953;  */

undefined8 * FUN_1073008ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  FUN_107300854(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 107300954; end: 107300967;  */

void FUN_107300954(void)

{
  func_0x000107300928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107300968; end: 1073009a7;  */

undefined8 FUN_107300968(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm(0x50);
  FUN_107300d9c();
  return uVar1;
}



/* Entry: 1073009a8; end: 1073009cb;  */

void FUN_1073009a8(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x000107301228(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_11099e690;
  FUN_1073003b0(param_2 + 1);
  FUN_1072ffea4(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1073009cc; end: 107300d67;  */

void FUN_1073009cc(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long lStack_60;
  
  FUN_1073003e0(auStack_c0,param_1 + 8);
  lVar6 = param_1 + 8;
  func_0x000107300468();
  if ((int)lVar6 != 0) {
    lVar15 = *(long *)(param_1 + 0x20);
    func_0x00010785f1f4();
    plStack_b0 = (long *)((ulong)plStack_b0 & 0xffffffff00000000);
    lVar6 = lVar6 + 0x6a0;
    FUN_1072b86c8(lVar6,&plStack_b0);
    uVar4 = (uint)lVar6;
    uVar1 = uVar4;
    if (uVar4 == 0) {
      uVar1 = 0xffffffff;
    }
    if (*(uint *)(lVar15 + 0xa8) < uVar1) {
      FUN_1072feb58();
      uVar1 = uVar1 - *(int *)(lVar15 + 0xa8);
      if (uVar4 <= uVar1) {
        uVar1 = uVar4;
      }
      FUN_1072feb8c(&lStack_68,*param_2,param_2[1],uVar1,1);
      plVar16 = *(long **)(lVar15 + 0xc0);
      FUN_1072729e0(&plStack_b0,&lStack_68);
      FUN_107272b60(&uStack_80,&plStack_b0);
      FUN_10726e43c(&plStack_b0);
      (**(code **)(*plVar16 + 0x18))(plVar16,&uStack_80);
      FUN_10726dd08(&uStack_80);
      *(int *)(lVar15 + 0xa8) = *(int *)(lVar15 + 0xa8) + (int)((lStack_60 - lStack_68) / 0x70);
      func_0x0001073012cc();
      *(undefined1 *)(lVar15 + 0x90) = 0;
      plVar16 = (long *)(param_1 + 0x38);
      plVar17 = plVar16;
      while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
        func_0x0001072fed88(lVar15 + 0x68,plVar17 + 2);
      }
LAB_107300af4:
      plVar16 = (long *)*plVar16;
      if (plVar16 != (long *)0x0) {
        uVar7 = *(ulong *)(lVar15 + 0x48);
        if ((uVar7 != 0) && (lVar6 = *(long *)(lVar15 + 0x58), lVar6 != 0)) {
          uVar8 = (ulong)*(uint *)(plVar16 + 2) + 0x9e3779b97f4a7c15;
          uVar8 = (ulong)*(uint *)((long)plVar16 + 0x14) + 0x9e3779b97f4a7c15 + uVar8 * 0x1000 +
                  (uVar8 >> 4) ^ uVar8;
          uVar9 = uVar7 - 1;
          uVar13 = 0;
          if (uVar7 != 0) {
            uVar13 = uVar8 / uVar7;
          }
          if ((uVar7 & uVar9) == 0) {
            uVar14 = uVar8 & uVar9;
          }
          else {
            uVar14 = uVar8;
            if (uVar7 <= uVar8) {
              uVar14 = uVar8 - uVar13 * uVar7;
            }
          }
          lVar10 = *(long *)(lVar15 + 0x40);
          plVar17 = *(long **)(lVar10 + uVar14 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_107300af4;
                uVar5 = plVar17[1];
                if (uVar5 == uVar8) break;
                if ((uVar7 & uVar9) == 0) {
                  uVar5 = uVar5 & uVar9;
                }
                else if (uVar7 <= uVar5) {
                  uVar2 = 0;
                  if (uVar7 != 0) {
                    uVar2 = uVar5 / uVar7;
                  }
                  uVar5 = uVar5 - uVar2 * uVar7;
                }
                if (uVar5 != uVar14) goto LAB_107300af4;
              }
            } while (*(uint *)(plVar17 + 2) != *(uint *)(plVar16 + 2) ||
                     *(uint *)((long)plVar17 + 0x14) != *(uint *)((long)plVar16 + 0x14));
            if ((uVar7 & uVar9) == 0) {
              uVar8 = uVar8 & uVar9;
            }
            else if (uVar7 <= uVar8) {
              uVar8 = uVar8 - uVar13 * uVar7;
            }
            lVar11 = *plVar17;
            plVar3 = *(long **)(lVar10 + uVar8 * 8);
            do {
              plVar12 = plVar3;
              plVar3 = (long *)*plVar12;
            } while ((long *)*plVar12 != plVar17);
            if (plVar12 == (long *)(lVar15 + 0x50)) {
LAB_107300c14:
              if (lVar11 == 0) {
LAB_107300c48:
                *(undefined8 *)(lVar10 + uVar8 * 8) = 0;
                lVar11 = *plVar17;
                goto LAB_107300c50;
              }
              uVar13 = *(ulong *)(lVar11 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar14 = uVar13 & uVar9;
              }
              else {
                uVar14 = uVar13;
                if (uVar7 <= uVar13) {
                  uVar14 = 0;
                  if (uVar7 != 0) {
                    uVar14 = uVar13 / uVar7;
                  }
                  uVar14 = uVar13 - uVar14 * uVar7;
                }
              }
              if (uVar14 != uVar8) goto LAB_107300c48;
LAB_107300c58:
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar13 & uVar9;
              }
              else if (uVar7 <= uVar13) {
                uVar9 = 0;
                if (uVar7 != 0) {
                  uVar9 = uVar13 / uVar7;
                }
                uVar13 = uVar13 - uVar9 * uVar7;
              }
              if (uVar13 != uVar8) {
                *(long **)(lVar10 + uVar13 * 8) = plVar12;
                lVar11 = *plVar17;
              }
            }
            else {
              uVar13 = plVar12[1];
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar13 & uVar9;
              }
              else if (uVar7 <= uVar13) {
                uVar14 = 0;
                if (uVar7 != 0) {
                  uVar14 = uVar13 / uVar7;
                }
                uVar13 = uVar13 - uVar14 * uVar7;
              }
              if (uVar13 != uVar8) goto LAB_107300c14;
LAB_107300c50:
              if (lVar11 != 0) {
                uVar13 = *(ulong *)(lVar11 + 8);
                goto LAB_107300c58;
              }
            }
            *plVar12 = lVar11;
            *plVar17 = 0;
            *(long *)(lVar15 + 0x58) = lVar6 + -1;
            uStack_a0 = 1;
            plStack_b0 = plVar17;
            plStack_a8 = (long *)(lVar15 + 0x50);
            FUN_1072ffb38(&plStack_b0);
          }
        }
        goto LAB_107300af4;
      }
      if (*(long *)(lVar15 + 0x58) == 0) {
        func_0x000107301220();
      }
      else {
        uStack_78 = *(undefined8 *)(lVar15 + 0xa0);
        uStack_80 = *(undefined8 *)(lVar15 + 0x98);
        func_0x000107301220();
        uStack_90 = 1;
        plStack_a8 = (long *)0x4066800000000000;
        plStack_b0 = (long *)0x4056800000000000;
        uStack_98 = 0xc066800000000000;
        uStack_a0 = 0xc056800000000000;
        FUN_1072fe2f0(lVar15,&plStack_b0,&uStack_80);
      }
      FUN_10726e43c(&lStack_68);
    }
  }
  func_0x00010730128c();
  return;
}



/* Entry: 107300d68; end: 107300d8f;  */

void FUN_107300d68(undefined8 param_1)

{
  func_0x0001073012a8();
  func_0x000107301294(param_1,&PTR_DAT_11099e700);
  func_0x0001073011ac();
  return;
}



/* Entry: 107300d90; end: 107300d9b;  */

undefined ** FUN_107300d90(void)

{
  return &PTR_DAT_11099e700;
}



/* Entry: 107300d9c; end: 107300def;  */

void FUN_107300d9c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107301228();
  *param_1 = &PTR_SUB_11099e690;
  FUN_1073003b0(param_1 + 1);
  FUN_1072ffea4(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107300df0; end: 107300e53;  */

void FUN_107300df0(undefined8 *param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001073012a8();
  *param_1 = &PTR_FUN_11099e720;
  lVar1 = *(long *)(extraout_x8 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
  }
  else if (lVar1 == extraout_x8) {
    *(undefined8 **)(unaff_x19 + 0x20) = param_1 + 1;
    (**(code **)(**(long **)(extraout_x8 + 0x18) + 0x18))();
  }
  else {
    func_0x00010730133c();
    *(long *)(unaff_x19 + 0x20) = lVar1;
  }
  return;
}



/* Entry: 107300e54; end: 107300e57;  */

undefined8 * FUN_107300e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e720;
  func_0x000107300ebc(param_1 + 1);
  return param_1;
}



/* Entry: 107300e58; end: 107300e8b;  */

void FUN_107300e58(void)

{
  FUN_107300e90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107300e8c; end: 107300e8f;  */

void FUN_107300e8c(void)

{
  return;
}



/* Entry: 107300e90; end: 107300ef7;  */

undefined8 * FUN_107300e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e720;
  func_0x000107300ebc(param_1 + 1);
  return param_1;
}



/* Entry: 107300ef8; end: 107300f13;  */

void FUN_107300ef8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099e640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107300f14; end: 107300f8f;  */

long FUN_107300f14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107300f90; end: 107300fa3;  */

void FUN_107300f90(void)

{
  func_0x000107300f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107300fa4; end: 107300fc7;  */

long FUN_107300fa4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107301284();
  func_0x00010730129c();
  *param_1 = &PTR_SUB_11099e778;
  FUN_1073003b0(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 107300fc8; end: 107300feb;  */

void FUN_107300fc8(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010730129c(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_11099e778;
  FUN_1073003b0(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107300fec; end: 1073010a7;  */

void FUN_107300fec(void)

{
  ulong uVar1;
  long unaff_x19;
  long *plVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  func_0x000107301228();
  FUN_1073003e0(auStack_58,unaff_x19 + 8);
  uVar1 = unaff_x19 + 8;
  func_0x000107300468();
  if ((int)uVar1 != 0) {
    plVar2 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_1072feb58();
    FUN_1072feb8c(auStack_48,*unaff_x20,unaff_x20[1],uVar1 & 0xffffffff,1);
    func_0x0001072cab08(auStack_30,auStack_48);
    (**(code **)(*plVar2 + 0x18))(plVar2,auStack_30);
    FUN_10726dd08(auStack_30);
    FUN_10726e43c(auStack_48);
  }
  func_0x000107270b00(auStack_58);
  return;
}



/* Entry: 1073010a8; end: 1073010cf;  */

void FUN_1073010a8(undefined8 param_1)

{
  func_0x0001073012a8();
  func_0x000107301294(param_1,&PTR_DAT_11099e7d8);
  func_0x0001073011ac();
  return;
}



/* Entry: 1073010d0; end: 1073010db;  */

undefined ** FUN_1073010d0(void)

{
  return &PTR_DAT_11099e7d8;
}



/* Entry: 1073010dc; end: 10730110f;  */

void FUN_1073010dc(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010730129c();
  *param_1 = &PTR_SUB_11099e778;
  FUN_1073003b0(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107301110; end: 1073013a7;  */

void FUN_107301110(void)

{
  return;
}



/* Entry: 1073013a8; end: 10730213f;  */

void FUN_1073013a8(undefined1 *param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  int iVar4;
  ulong *puVar5;
  undefined8 ***pppuVar6;
  char **ppcVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 ****ppppuVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined8 *puStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [8];
  ulong uStack_1d0;
  byte bStack_1c1;
  char **appcStack_1c0 [3];
  ulong *apuStack_1a8 [3];
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  long lStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  long lStack_138;
  undefined4 uStack_130;
  int iStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  char *pcStack_e8;
  ulong *puStack_d0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_3 + 0x18) == 0) {
    func_0x0001073045b0();
  }
  else {
    in_ZR = *(int *)(param_3 + 0x18) == 1;
    if ((bool)in_ZR) {
      func_0x0001073045bc();
      func_0x0001073045b0();
    }
    else {
      uStack_110 = uStack_110 & 0xffffffffffffff00;
      uStack_f8 = 0;
    }
  }
  FUN_10727f9a8(auStack_208,&uStack_110,"");
  func_0x0001001148fc(&uStack_110);
  if (param_4[1] == 0) {
    *param_1 = 0;
    param_1[0x58] = 0;
    goto LAB_107301f38;
  }
  FUN_1073028ec();
  pcStack_188 = (char *)*param_4;
  lStack_178 = param_4[1];
  pcStack_180 = pcStack_188 + lStack_178;
  appcStack_1c0[0] = &pcStack_190;
  pcStack_190 = pcStack_188;
  if ((lStack_178 != 0) && (*pcStack_188 == -0x11)) {
    pcStack_190 = pcStack_188 + 1;
  }
  if (pcStack_190 != pcStack_180) {
    if (*pcStack_190 == -0x45) {
      pcStack_190 = pcStack_190 + 1;
    }
    if ((pcStack_190 != pcStack_180) && (*pcStack_190 == -0x41)) {
      pcStack_190 = pcStack_190 + 1;
    }
  }
  pcStack_160 = (char *)0x0;
  pcStack_168 = (char *)0x0;
  uStack_150 = 0;
  pcStack_158 = (char *)0x0;
  pcStack_170 = pcStack_e8;
  uStack_148 = 0x100;
  uStack_130 = 2;
  apuStack_1a8[0] = &uStack_110;
  iStack_140 = 0;
  lStack_138 = 0;
  ppcVar7 = &pcStack_190;
  FUN_107303508(&pcStack_190);
  in_ZR = pcStack_190 == pcStack_180;
  pcVar11 = pcStack_190;
  if ((bool)in_ZR) {
    iStack_140 = 1;
LAB_107301f84:
    lStack_138 = (long)pcVar11 - (long)ppcVar7[1];
  }
  else {
    if (*pcStack_190 == '\0') {
      iStack_140 = 1;
      ppcVar7 = &pcStack_190;
      goto LAB_107301f84;
    }
    FUN_107302a64(&pcStack_170,appcStack_1c0,&uStack_110);
    if ((iStack_140 == 0) && (FUN_107303508(appcStack_1c0[0]), iStack_140 == 0)) {
      pcVar11 = *appcStack_1c0[0];
      in_ZR = pcVar11 == appcStack_1c0[0][2];
      if ((!(bool)in_ZR) && (*pcVar11 != '\0')) {
        iStack_140 = 2;
        ppcVar7 = appcStack_1c0[0];
        goto LAB_107301f84;
      }
    }
  }
  pcStack_158 = pcStack_160;
  uStack_b8 = CONCAT44(uStack_13c,iStack_140);
  lStack_b0 = lStack_138;
  puVar5 = puStack_d0;
  if (iStack_140 == 0) {
    puVar5 = puStack_d0 + -3;
    in_ZR = &uStack_110 == puVar5;
    if (!(bool)in_ZR) {
      uStack_110 = *puVar5;
      uStack_108 = puStack_d0[-2];
      uStack_100 = puStack_d0[-1];
      *(undefined2 *)((long)puStack_d0 + -2) = 0;
    }
  }
  puStack_d0 = puVar5;
  FUN_107304208(apuStack_1a8);
  FUN_107302960(&pcStack_170);
  if ((int)uStack_b8 == 0) {
    puStack_220 = (undefined8 *)0x0;
    pppuStack_218 = (undefined8 ****)0x0;
    pppuStack_210 = (undefined8 ****)0x0;
    func_0x000107304444();
    puVar5 = &uStack_110;
    FUN_107302140(puVar5,&pcStack_170,0);
    func_0x000107304300();
    iVar4 = (int)puVar5;
    if (iVar4 == 0) {
      plVar13 = *(long **)(param_2 + 8);
      func_0x000107304444();
      (**(code **)(*plVar13 + 0x38))(plVar13,&pcStack_170);
      in_ZR = ((ulong)plVar13 & 0x100000000) == 0;
      iVar4 = 0x3c;
      if (!(bool)in_ZR) {
        iVar4 = (int)plVar13;
      }
      func_0x000107304300();
    }
    func_0x000107304444();
    iVar20 = FUN_107302190(&uStack_110,&pcStack_170);
    func_0x000107304300();
    puVar5 = &uStack_110;
    FUN_1073021f0(puVar5,&DAT_10f409d67);
    if (((int)puVar5 != 0) && (func_0x000107304314(), *(short *)((long)puVar5 + 0x16) != 0)) {
      func_0x000107304314();
      in_ZR = 0;
      if (*(short *)((long)puVar5 + 0x16) == 4) {
        func_0x000107304314();
        uVar18 = 0;
        auVar23 = NEON_fmov(0x3f800000,4);
        for (; in_ZR = uVar18 == (uint)*puVar5, uVar18 < (uint)*puVar5; uVar18 = uVar18 + 1) {
          uVar17 = puVar5[1];
          pppuVar6 = (undefined8 ***)0xf0;
          __Znwm();
          pppuVar6[1] = (undefined8 **)0x0;
          pppuVar6[2] = (undefined8 **)0x0;
          *pppuVar6 = (undefined8 **)&PTR_FUN_11099e830;
          _bzero(pppuVar6 + 3,0xd8);
          pppuVar6[0xc] = (undefined8 **)0x0;
          *(undefined2 *)(pppuVar6 + 3) = 100;
          *(undefined4 *)((long)pppuVar6 + 0x1c) = 0x3f800000;
          *(undefined4 *)((long)pppuVar6 + 0x2c) = 0x40000000;
          pppuVar6[7] = (undefined8 **)0x0;
          pppuVar6[6] = (undefined8 **)0x0;
          pppuVar6[9] = (undefined8 **)0x0;
          pppuVar6[8] = (undefined8 **)0x0;
          *(undefined4 *)(pppuVar6 + 10) = 0;
          *(undefined8 *)((long)pppuVar6 + 0x54) = 0x3f80000000000001;
          pppuVar6[0xd] = (undefined8 **)0x0;
          pppuVar6[0xe] = (undefined8 **)0x0;
          pppuVar6[0xf] = (undefined8 **)0x3d4ccccd3f800000;
          pppuVar6[0x11] = (undefined8 **)0x3f0000003ecccccd;
          *(long *)((long)pppuVar6 + 0xa4) = auVar23._8_8_;
          *(long *)((long)pppuVar6 + 0x9c) = auVar23._0_8_;
          func_0x000100060964(pppuVar6 + 0x17,"-1");
          lVar19 = uVar17 + uVar18 * 0x18;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x1131ad2a0,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              sRam00000001131ad2a0 = sRam00000001131ad2a0 + 1;
            }
          } while (cVar1 != '\0');
          ppuStack_230 = pppuVar6 + 3;
          ppuStack_228 = pppuVar6;
          __ZNSt3__19to_stringEi(&pcStack_190,sRam00000001131ad2a0);
          FUN_1072625b4(&pcStack_170,&pcStack_190);
          func_0x000104c2f1f0(ppuStack_230 + 0x14,&pcStack_170);
          func_0x000104c2f714(&pcStack_170);
          func_0x000107304564();
          ppcVar7 = &pcStack_170;
          func_0x00010002b838(ppcVar7,&DAT_10f637eac);
          uVar10 = (uint)ppcVar7;
          func_0x0001073045d0();
          if (999 < uVar10) {
            uVar10 = 1000;
          }
          *(short *)ppuStack_230 = (short)uVar10;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409d71);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 4) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409d7f);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 1) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409d97);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0xc) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409da6);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 2) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409db6);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0x14) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409dc7);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 3) = uVar21;
          func_0x000107304300();
          ppcVar7 = &pcStack_170;
          func_0x00010002b838(ppcVar7,&DAT_10f409de0);
          uVar21 = SUB84(ppcVar7,0);
          func_0x0001073045d0();
          *(undefined4 *)((long)ppuStack_230 + 0x3c) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409deb);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 8) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,"angle");
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0x2c) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409df9);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 6) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&DAT_10f409e07);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0x34) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409e10);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 7) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(auStack_1f0,&UNK_10f409e21);
          FUN_1073022a8(auStack_1d8,lVar19,auStack_1f0,ppuStack_230 + 9);
          uVar17 = uStack_1d0;
          if (-1 < (char)bStack_1c1) {
            uVar17 = (ulong)bStack_1c1;
          }
          if (uVar17 == 0) {
LAB_107301a94:
            pcStack_170 = (char *)((ulong)pcStack_170 & 0xffffffffffffff00);
            pcStack_158 = (char *)((ulong)pcStack_158 & 0xffffffffffffff00);
          }
          else if (*(int *)(param_3 + 0x18) == 0) {
LAB_107301aa0:
            func_0x0001002a8308(&pcStack_170,auStack_1d8);
          }
          else {
            if (*(int *)(param_3 + 0x18) != 1) goto LAB_107301a94;
            func_0x0001073045bc();
            uVar17 = *(ulong *)(param_3 + 8);
            if (-1 < (char)*(byte *)(param_3 + 0x17)) {
              uVar17 = (ulong)*(byte *)(param_3 + 0x17);
            }
            if (uVar17 == 0) goto LAB_107301aa0;
            func_0x0001073045bc();
            func_0x000100456794(apuStack_1a8,param_3,"/");
            func_0x000100610910(&pcStack_190,apuStack_1a8,auStack_1d8);
            pcStack_168 = pcStack_188;
            pcStack_170 = pcStack_190;
            pcStack_160 = pcStack_180;
            pcStack_188 = (char *)0x0;
            pcStack_180 = (char *)0x0;
            pcStack_190 = (char *)0x0;
            pcStack_158 = (char *)CONCAT71(pcStack_158._1_7_,1);
            func_0x000107304564();
            func_0x0001073044f4();
          }
          FUN_10727f9a8(appcStack_1c0,&pcStack_170,"");
          func_0x000100066230(ppuStack_230 + 9,appcStack_1c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appcStack_1c0);
          func_0x0001001148fc(&pcStack_170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
          func_0x00010002b838(&pcStack_170,&UNK_10f409e2b);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 0xc) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,"scale");
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 100) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409e3c);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 0xd) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409e4a);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 0xe) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409e5b);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0x74) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409e6c);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0x6c) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409e7d);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 0xf) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409e90);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0x7c) = uVar21;
          func_0x000107304300();
          func_0x00010002b838(&pcStack_170,&UNK_10f409eab);
          uVar21 = func_0x000107304298();
          *(undefined4 *)(ppuStack_230 + 0x10) = uVar21;
          func_0x000107304300();
          ppcVar7 = &pcStack_170;
          func_0x00010002b838(ppcVar7,&UNK_10f409eb6);
          uVar17 = (ulong)*(byte *)(ppuStack_230 + 0x13);
          func_0x0001073042cc();
          FUN_1073021f0();
          if ((int)ppcVar7 != 0) {
            func_0x0001073042cc();
            func_0x000107302244();
            if (*(short *)((long)ppcVar7 + 0x16) != 0) {
              func_0x0001073042cc();
              func_0x000107302244();
              if ((*(ushort *)((long)ppcVar7 + 0x16) >> 3 & 1) != 0) {
                func_0x0001073042cc();
                func_0x000107302244();
                uVar17 = (ulong)(*(short *)((long)ppcVar7 + 0x16) == 10);
              }
            }
          }
          *(char *)(ppuStack_230 + 0x13) = (char)uVar17;
          func_0x000107304300();
          lVar14 = lVar19;
          FUN_1073021f0(lVar19,&UNK_10f409edb);
          if ((((int)lVar14 != 0) && (func_0x00010730440c(), *(short *)(lVar14 + 0x16) != 0)) &&
             (func_0x00010730440c(), *(short *)(lVar14 + 0x16) == 4)) {
            func_0x00010730440c();
            func_0x000107304584();
            func_0x0001073044a8();
            uVar21 = func_0x000107304498();
            uVar22 = func_0x00010730235c(*(long *)(uVar17 + 8) + 0x48);
            *(undefined4 *)((long)ppuStack_230 + 0x1c) = unaff_s9;
            *(undefined4 *)(ppuStack_230 + 4) = unaff_s10;
            *(undefined4 *)((long)ppuStack_230 + 0x24) = uVar21;
            *(undefined4 *)(ppuStack_230 + 5) = uVar22;
          }
          FUN_1073021f0(lVar19,&DAT_10f68f0f0);
          if ((((int)lVar19 != 0) && (func_0x000107304418(), *(short *)(lVar19 + 0x16) != 0)) &&
             (func_0x000107304418(), *(short *)(lVar19 + 0x16) == 4)) {
            func_0x000107304418();
            func_0x000107304584();
            func_0x0001073044a8();
            uVar21 = func_0x000107304498();
            uVar22 = func_0x00010730235c(0x65720079746963a9);
            *(undefined4 *)((long)ppuStack_230 + 0x84) = unaff_s9;
            *(undefined4 *)(ppuStack_230 + 0x11) = unaff_s10;
            *(undefined4 *)((long)ppuStack_230 + 0x8c) = uVar21;
            *(undefined4 *)(ppuStack_230 + 0x12) = uVar22;
          }
          func_0x00010002b838(&pcStack_170,&UNK_10f409ee8);
          uVar21 = func_0x000107304298();
          *(undefined4 *)((long)ppuStack_230 + 0x94) = uVar21;
          func_0x000107304300();
          *(float *)((long)ppuStack_230 + 0x9c) =
               *(float *)((long)ppuStack_230 + 0x14) + *(float *)(ppuStack_230 + 3);
          if (pppuStack_218 < pppuStack_210) {
            *pppuStack_218 = ppuStack_230;
            pppuStack_218[1] = ppuStack_228;
            ppuStack_230 = (undefined8 ***)0x0;
            ppuStack_228 = (undefined8 ***)0x0;
            ppppuVar16 = (undefined8 ****)(pppuStack_218 + 2);
          }
          else {
            lVar14 = (long)pppuStack_218 - (long)puStack_220;
            lVar19 = lVar14 >> 4;
            uVar17 = lVar19 + 1;
            if (uVar17 >> 0x3c != 0) goto LAB_107301f9c;
            uVar12 = (long)pppuStack_210 - (long)puStack_220 >> 3;
            if (uVar12 <= uVar17) {
              uVar12 = uVar17;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppuStack_210 - (long)puStack_220)) {
              uVar12 = 0xfffffffffffffff;
            }
            if (uVar12 == 0) {
              ppppuVar8 = (undefined8 ****)0x0;
              lVar9 = lVar14;
            }
            else {
              ppppuVar8 = &pppuStack_210;
              FUN_1073023d0();
              lVar19 = (long)pppuStack_218 - (long)puStack_220 >> 4;
              lVar9 = (long)pppuStack_218 - (long)puStack_220;
            }
            puVar15 = (undefined8 *)((long)ppppuVar8 + lVar14);
            *puVar15 = ppuStack_230;
            puVar15[1] = ppuStack_228;
            ppuStack_230 = (undefined8 ***)0x0;
            ppuStack_228 = (undefined8 ***)0x0;
            ppppuVar16 = (undefined8 ****)(puVar15 + 2);
            puVar15 = puVar15 + lVar19 * -2;
            _memcpy(puVar15,puStack_220,lVar9);
            bVar2 = puStack_220 != (undefined8 *)0x0;
            puStack_220 = puVar15;
            pppuStack_210 = ppppuVar8 + uVar12 * 2;
            if (bVar2) {
              pppuStack_218 = ppppuVar16;
              __ZdlPv();
            }
          }
          pppuStack_218 = ppppuVar16;
          func_0x0001073027f8(&ppuStack_230);
        }
      }
    }
    func_0x000107304444();
    func_0x00010002b838(apuStack_1a8,&UNK_10f409ef6);
    FUN_1073022a8(&pcStack_190,&uStack_110,&pcStack_170,apuStack_1a8);
    func_0x0001073044f4();
    func_0x000107304300();
    FUN_107302464(&pcStack_170,&puStack_220);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pcStack_158,&pcStack_190);
    iStack_140 = iVar20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&lStack_138,auStack_208);
    iStack_120 = iVar4;
    FUN_107302738(param_1,&pcStack_170);
    param_1[0x58] = 1;
    func_0x00010730279c(&pcStack_170);
    func_0x000107304564();
    func_0x0001073027cc(&puStack_220);
  }
  else {
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  func_0x0001073029ac(&uStack_110);
LAB_107301f38:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
  func_0x0001073043d4(uStack_a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107301f9c:
  FUN_1073023bc();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107301fa4);
  (*pcVar3)();
}



/* Entry: 107302140; end: 10730218f;  */

ulong FUN_107302140(uint *param_1,undefined8 param_2,ulong param_3)

{
  func_0x000107304424();
  if ((int)param_1 != 0) {
    func_0x000107304280();
    if (*(short *)((long)param_1 + 0x16) != 0) {
      func_0x000107304280();
      if ((*(ushort *)((long)param_1 + 0x16) >> 6 & 1) != 0) {
        func_0x000107304280();
        param_3 = (ulong)*param_1;
      }
    }
  }
  return param_3;
}



/* Entry: 107302190; end: 1073021ef;  */

double FUN_107302190(double param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  iVar1 = (int)param_2;
  dVar3 = param_1;
  func_0x000107304438();
  func_0x000107304424();
  if (iVar1 != 0) {
    func_0x0001073042a4();
    if (*(short *)(CONCAT44(uVar2,iVar1) + 0x16) != 0) {
      func_0x0001073042a4();
      if ((*(ushort *)(CONCAT44(uVar2,iVar1) + 0x16) >> 4 & 1) != 0) {
        func_0x0001073042a4();
        FUN_107302374();
        return (double)(ulong)(uint)(float)dVar3;
      }
    }
  }
  return param_1;
}



/* Entry: 1073021f0; end: 1073022a7;  */

uint * FUN_1073021f0(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *unaff_x19;
  uint *unaff_x20;
  long lStack_98;
  undefined8 uStack_78;
  long lStack_48;
  undefined8 uStack_28;
  
  func_0x000107304358();
  func_0x00010730432c();
  bVar1 = *(long *)(unaff_x20 + 2) + (ulong)*unaff_x20 * 0x30 == lStack_48;
  puVar3 = (uint *)(ulong)!bVar1;
  func_0x0001073043d4(uStack_28,puVar3);
  if (bVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107304358();
  func_0x00010730432c();
  bVar1 = lStack_98 == *(long *)(unaff_x20 + 2) + (ulong)*unaff_x20 * 0x30;
  if (bVar1) {
    puVar3 = (uint *)0x1136ca228;
    uRam00000001136ca228 = 0;
    uRam00000001136ca230 = 0;
    uRam00000001136ca238 = 0;
  }
  else {
    puVar3 = (uint *)(lStack_98 + 0x18);
  }
  func_0x0001073043d4(uStack_78,puVar3);
  if (bVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107304438();
  puVar3 = unaff_x20;
  FUN_1073021f0();
  if ((((int)puVar3 != 0) && (func_0x000107304280(), *(short *)((long)puVar3 + 0x16) != 0)) &&
     (func_0x000107304280(), (*(ushort *)((long)puVar3 + 0x16) >> 10 & 1) != 0)) {
    func_0x000107304280();
    puVar2 = *(uint **)(puVar3 + 2);
    if ((*(ushort *)((long)puVar3 + 0x16) & 0x1000) != 0) {
      puVar2 = puVar3;
    }
    func_0x00010002b82c();
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
    return unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return unaff_x19;
}



/* Entry: 1073022a8; end: 107302337;  */

long FUN_1073022a8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107304438();
  lVar2 = unaff_x20;
  FUN_1073021f0();
  if ((((int)lVar2 != 0) && (func_0x000107304280(), *(short *)(lVar2 + 0x16) != 0)) &&
     (func_0x000107304280(), (*(ushort *)(lVar2 + 0x16) >> 10 & 1) != 0)) {
    func_0x000107304280();
    lVar1 = *(long *)(lVar2 + 8);
    if ((*(ushort *)(lVar2 + 0x16) & 0x1000) != 0) {
      lVar1 = lVar2;
    }
    func_0x00010002b82c();
    func_0x000107c613d0(lVar1);
    func_0x000107c60c50(unaff_x20,unaff_x19,lVar1);
    return unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return unaff_x19;
}



/* Entry: 107302338; end: 10730233f;  */

void FUN_107302338(void)

{
  return;
}



/* Entry: 107302340; end: 107302373;  */

ulong FUN_107302340(ulong param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(int *)(param_2 + 0x18) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  FUN_107302374();
  return (ulong)(uint)(float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 107302374; end: 1073023bb;  */

double FUN_107302374(double *param_1)

{
  ushort uVar1;
  double dVar2;
  
  uVar1 = *(ushort *)((long)param_1 + 0x16);
  if ((uVar1 >> 9 & 1) != 0) {
    return *param_1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    return (double)*(int *)param_1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    dVar2 = (double)NEON_ucvtf((ulong)*(uint *)param_1);
    return dVar2;
  }
  if ((uVar1 >> 7 & 1) == 0) {
    return (double)(ulong)*param_1;
  }
  return (double)(long)*param_1;
}



/* Entry: 1073023bc; end: 1073023cf;  */

void FUN_1073023bc(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_1073023f4();
  return;
}



/* Entry: 1073023d0; end: 1073023f3;  */

void FUN_1073023d0(void)

{
  FUN_1073023f4();
  return;
}



/* Entry: 1073023f4; end: 10730240f;  */

void FUN_1073023f4(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099e830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107302410; end: 107302413;  */

void FUN_107302410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107302414; end: 107302427;  */

void FUN_107302414(void)

{
  FUN_107302450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107302428; end: 10730244f;  */

void FUN_107302428(long param_1)

{
  func_0x000104c2f714(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x60);
  return;
}



/* Entry: 107302450; end: 107302463;  */

void FUN_107302450(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107302464; end: 10730249b;  */

undefined8 * FUN_107302464(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10730249c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  return param_1;
}



/* Entry: 10730249c; end: 10730250f;  */

void FUN_10730249c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_107302510(param_1,param_4);
    FUN_107302548(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000107302694(&uStack_40);
  return;
}



/* Entry: 107302510; end: 107302547;  */

void FUN_107302510(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    FUN_1073023d0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
  }
  else {
    FUN_1073023bc();
    plVar1 = param_1 + 2;
    FUN_10730257c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 107302548; end: 10730257b;  */

void FUN_107302548(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10730257c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10730257c; end: 10730258f;  */

void FUN_10730257c(void)

{
  FUN_107302590();
  return;
}



/* Entry: 107302590; end: 107302613;  */

undefined8 *
FUN_107302590(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puVar5 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar4 = param_2[1];
    uVar6 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar6;
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
    puVar5 = puVar5 + 2;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  puStack_28 = puVar5;
  FUN_107302614(&uStack_50);
  return puVar5;
}



/* Entry: 107302614; end: 107302643;  */

long FUN_107302614(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_107302644(param_1);
  }
  return param_1;
}



/* Entry: 107302644; end: 107302663;  */

void FUN_107302644(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073027f8();
  }
  return;
}



/* Entry: 107302664; end: 1073026fb;  */

void FUN_107302664(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x0001073027f8();
  }
  return;
}



/* Entry: 1073026fc; end: 107302703;  */

void FUN_1073026fc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107304460(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073027f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107302704; end: 107302737;  */

void FUN_107302704(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107304460();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073027f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107302738; end: 10730279b;  */

void FUN_107302738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return;
}



/* Entry: 10730279c; end: 10730281f;  */

long FUN_10730279c(long param_1)

{
  long lStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x0001073026c0(&lStack_28);
  return param_1;
}



/* Entry: 107302820; end: 1073028eb;  */

void FUN_107302820(long *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  bool bVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  
  piVar11 = *(int **)(param_2 + 2);
  uVar9 = (ulong)*param_2;
  lVar6 = uVar9 * 3;
  piVar1 = piVar11 + uVar9 * 0xc;
  lVar12 = uVar9 * 0x30;
  bVar7 = (*(ushort *)((long)param_3 + 0x16) & 0x1000) != 0;
  iVar2 = *param_3;
  if (bVar7) {
    iVar2 = 0x15 - *(char *)((long)param_3 + 0x15);
  }
  piVar4 = *(int **)(param_3 + 2);
  if (bVar7) {
    piVar4 = param_3;
  }
  while (piVar10 = piVar1, lVar6 != 0) {
    iVar3 = *piVar11;
    if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
      iVar3 = 0x15 - *(char *)((long)piVar11 + 0x15);
    }
    if (iVar2 == iVar3) {
      piVar5 = *(int **)(piVar11 + 2);
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        piVar5 = piVar11;
      }
      piVar10 = piVar11;
      if ((piVar4 == piVar5) || (piVar8 = piVar4, _memcmp(piVar4,piVar5,iVar2), (int)piVar8 == 0))
      break;
    }
    piVar11 = piVar11 + 0xc;
    lVar12 = lVar12 + -0x30;
    lVar6 = lVar12;
  }
  *param_1 = (long)piVar10;
  return;
}



/* Entry: 1073028ec; end: 10730295f;  */

undefined8 * FUN_1073028ec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  if (param_2 == 0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    *puVar1 = 0;
    puVar1[1] = 0x10000;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 0;
    param_1[3] = puVar1;
    param_1[4] = puVar1;
  }
  return param_1;
}



/* Entry: 107302960; end: 107302983;  */

undefined8 FUN_107302960(undefined8 param_1)

{
  FUN_107302984();
  return param_1;
}



/* Entry: 107302984; end: 1073029d3;  */

void FUN_107302984(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1073029d4; end: 1073029ef;  */

void FUN_1073029d4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1073029f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073029f0; end: 107302a1b;  */

long FUN_1073029f0(long param_1)

{
  FUN_107302a1c();
  __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 107302a1c; end: 107302a63;  */

void FUN_107302a1c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (lVar1 == param_1[2]) break;
    lVar1 = *(long *)(lVar1 + 0x10);
    _free();
    *param_1 = lVar1;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  return;
}



/* Entry: 107302a64; end: 107303507;  */

void FUN_107302a64(ulong param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar11;
  ulong extraout_x8_01;
  char *extraout_x8_02;
  char *extraout_x8_03;
  long *extraout_x8_04;
  char *extraout_x8_05;
  byte *extraout_x8_06;
  undefined1 *extraout_x8_07;
  undefined1 *puVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *extraout_x9_03;
  undefined8 *extraout_x9_04;
  undefined8 *extraout_x9_05;
  undefined8 *extraout_x9_06;
  undefined8 *extraout_x9_07;
  undefined8 *extraout_x9_08;
  undefined8 *puVar15;
  char *extraout_x9_09;
  char *extraout_x9_10;
  long *extraout_x9_11;
  long lVar16;
  char *extraout_x9_12;
  byte *pbVar17;
  char *extraout_x10;
  char *extraout_x10_00;
  char *extraout_x10_01;
  char *extraout_x10_02;
  char *extraout_x10_03;
  char *extraout_x10_04;
  char *extraout_x10_05;
  char *extraout_x10_06;
  char *extraout_x10_07;
  char *extraout_x10_08;
  char *pcVar18;
  char *extraout_x10_09;
  byte *extraout_x10_10;
  char *pcVar19;
  char *extraout_x10_11;
  int iVar20;
  char *extraout_x11;
  char *extraout_x11_00;
  char *extraout_x11_01;
  char *extraout_x11_02;
  char *extraout_x11_03;
  char *extraout_x11_04;
  char *extraout_x11_05;
  char *extraout_x11_06;
  char *extraout_x11_07;
  char *extraout_x11_08;
  byte *pbVar21;
  byte *extraout_x11_09;
  ulong extraout_x12;
  ulong uVar22;
  int iVar23;
  byte *pbVar24;
  int extraout_w14;
  int iVar25;
  ulong extraout_x15;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  byte *pbVar26;
  byte bVar27;
  double dVar28;
  double dVar29;
  ulong uStack_60;
  uint uStack_58;
  
  plVar14 = (long *)*param_2;
  pbVar26 = (byte *)*plVar14;
  pbVar17 = (byte *)plVar14[2];
  if (pbVar26 != pbVar17) {
    bVar27 = *pbVar26;
    if (bVar27 == 0x22) {
      func_0x0001073043fc();
      func_0x000107304438();
      plVar14 = (long *)*param_2;
      pbVar26 = (byte *)*plVar14;
      pbVar17 = (byte *)plVar14[2];
      if (pbVar26 != pbVar17) {
        pbVar26 = pbVar26 + 1;
        *plVar14 = (long)pbVar26;
      }
      uStack_58 = 0;
      uStack_60 = unaff_x19;
      do {
        uVar11 = uStack_60;
        if (pbVar26 == pbVar17) {
          uVar13 = 0xb;
          pbVar26 = pbVar17;
LAB_1073036fc:
          lVar16 = (long)pbVar26 - plVar14[1];
LAB_107303704:
          *(undefined4 *)(unaff_x19 + 0x30) = uVar13;
          *(long *)(unaff_x19 + 0x38) = lVar16;
          return;
        }
        bVar27 = *pbVar26;
        if (bVar27 == 0x5c) {
          lVar16 = (long)pbVar26 - plVar14[1];
          pbVar24 = pbVar26 + 1;
          *plVar14 = (long)pbVar24;
          cVar3 = SBORROW8((long)pbVar24,(long)pbVar17);
          cVar4 = (long)pbVar24 - (long)pbVar17 < 0;
          if (pbVar24 == pbVar17) {
LAB_107303790:
            uVar13 = 10;
            goto LAB_107303704;
          }
          bVar27 = (&UNK_10de373a7)[*pbVar24];
          if (bVar27 != 0) {
            *plVar14 = (long)(pbVar26 + 2);
            bVar6 = false;
            goto LAB_1073035d0;
          }
          if (*pbVar24 != 0x75) goto LAB_107303790;
          *plVar14 = (long)(pbVar26 + 2);
          uVar11 = unaff_x19;
          FUN_1073039d0();
          if (*(int *)(unaff_x19 + 0x30) != 0) {
            return;
          }
          if (((uint)(uVar11 >> 10) & 0x3fffff) == 0x36) {
            plVar14 = (long *)*unaff_x20;
            pcVar18 = (char *)*plVar14;
            if ((pcVar18 != (char *)plVar14[2]) && (*pcVar18 == '\\')) {
              pcVar19 = pcVar18 + 1;
              *plVar14 = (long)pcVar19;
              if ((pcVar19 != (char *)plVar14[2]) && (*pcVar19 == 'u')) {
                *plVar14 = (long)(pcVar18 + 2);
                uVar10 = unaff_x19;
                FUN_1073039d0(unaff_x19,plVar14,lVar16);
                if (*(int *)(unaff_x19 + 0x30) != 0) {
                  return;
                }
                if (0xfffffbff < (int)uVar10 - 0xe000U) {
                  uVar11 = (ulong)((int)uVar10 + (int)uVar11 * 0x400 + 0xfca02400);
                  goto LAB_107303678;
                }
              }
            }
            uVar13 = 9;
            goto LAB_107303704;
          }
LAB_107303678:
          FUN_107303a70(&uStack_60,uVar11);
        }
        else {
          cVar3 = SBORROW4((uint)bVar27,0x22);
          uVar9 = (uint)bVar27;
          cVar4 = (int)(uVar9 - 0x22) < 0;
          bVar6 = uVar9 == 0x22;
          if (bVar6) {
            *plVar14 = (long)(pbVar26 + 1);
            func_0x0001073045ec(*(undefined8 *)(uStack_60 + 0x18));
            puVar12 = extraout_x8_07;
            if (bVar6 || cVar4 != cVar3) {
              func_0x00010730444c(uVar11);
              puVar12 = *(undefined1 **)(uVar11 + 0x18);
            }
            *(undefined1 **)(uVar11 + 0x18) = puVar12 + 1;
            *puVar12 = 0;
            uStack_58 = uStack_58 + 1;
            if (*(int *)(unaff_x19 + 0x30) != 0) {
              return;
            }
            *(ulong *)(uStack_60 + 0x18) = *(long *)(uStack_60 + 0x18) - (ulong)uStack_58;
            FUN_107303940();
            if ((param_3 & 1) != 0) {
              return;
            }
            lVar16 = *(long *)*unaff_x20;
            lVar1 = ((long *)*unaff_x20)[1];
            *(undefined4 *)(unaff_x19 + 0x30) = 0x10;
            *(long *)(unaff_x19 + 0x38) = lVar16 - lVar1;
            return;
          }
          cVar3 = SBORROW4(uVar9,0x1f);
          cVar4 = (int)(uVar9 - 0x1f) < 0;
          bVar6 = uVar9 == 0x1f;
          if (uVar9 < 0x20) {
            uVar13 = 0xb;
            if (bVar27 != 0) {
              uVar13 = 0xc;
            }
            goto LAB_1073036fc;
          }
          *plVar14 = (long)(pbVar26 + 1);
          bVar27 = *pbVar26;
LAB_1073035d0:
          func_0x0001073045ec(*(undefined8 *)(uStack_60 + 0x18));
          pbVar26 = extraout_x8_06;
          if (bVar6 || cVar4 != cVar3) {
            func_0x00010730444c(uVar11);
            pbVar26 = *(byte **)(uVar11 + 0x18);
          }
          *(byte **)(uVar11 + 0x18) = pbVar26 + 1;
          *pbVar26 = bVar27;
          uStack_58 = uStack_58 + 1;
        }
        plVar14 = (long *)*unaff_x20;
        pbVar26 = (byte *)*plVar14;
        pbVar17 = (byte *)plVar14[2];
      } while( true );
    }
    uVar5 = bVar27 == 0x5b;
    if ((bool)uVar5) {
      uVar11 = param_1;
      func_0x00010730452c(pbVar26 + 1);
      FUN_107303f18();
      plVar14 = (long *)*param_2;
      if ((uVar11 & 1) == 0) {
LAB_10730324c:
        lVar16 = *plVar14 - plVar14[1];
        goto LAB_107303254;
      }
      FUN_107304544();
      if (extraout_w8_00 != 0) {
        return;
      }
      func_0x0001073043c0();
      uVar2 = 1;
      if ((bool)uVar5) {
LAB_107303394:
        do {
          func_0x0001073043fc();
          FUN_107302a64();
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          param_3 = *param_2;
          FUN_107304544();
          if (extraout_w8_05 != 0) {
            return;
          }
          func_0x0001073043e8();
          if ((bool)uVar2) {
LAB_1073034f8:
            lVar16 = (long)extraout_x8_05 - *(long *)(param_3 + 8);
            uVar13 = 7;
            goto LAB_107303258;
          }
          if (*extraout_x8_05 != ',') {
            if (*extraout_x8_05 != ']') goto LAB_1073034f8;
            func_0x000107304538();
            func_0x000107304620();
            goto LAB_107302d58;
          }
          func_0x000107304538();
          FUN_107304544();
          if (extraout_w8_06 != 0) {
            return;
          }
          pcVar18 = *(char **)*param_2;
          uVar2 = 1;
        } while ((pcVar18 == (char *)((undefined8 *)*param_2)[2]) || (uVar2 = 0, *pcVar18 != ']'));
        func_0x000107304620();
        FUN_107303f50();
        goto LAB_10730344c;
      }
      uVar2 = 0;
      if (*extraout_x9_10 != ']') goto LAB_107303394;
      *extraout_x8_00 = extraout_x9_10 + 1;
LAB_107302d58:
      FUN_107303f50();
joined_r0x000107302d5c:
      if ((param_3 & 1) != 0) {
        return;
      }
      plVar14 = (long *)*param_2;
      lVar16 = *plVar14;
LAB_107302d68:
      lVar16 = lVar16 - plVar14[1];
LAB_107303254:
      uVar13 = 0x10;
LAB_107303258:
      *(undefined4 *)(param_1 + 0x30) = uVar13;
      *(long *)(param_1 + 0x38) = lVar16;
      return;
    }
    bVar6 = bVar27 == 0x66;
    uVar11 = param_1;
    if (bVar6) {
      func_0x000107304380();
      puVar15 = extraout_x9_02;
      pcVar18 = extraout_x10_02;
      if (bVar6) goto LAB_107303224;
      bVar6 = *extraout_x11_02 == 'a';
      pcVar18 = extraout_x11_02;
      if (bVar6) {
        func_0x000107304380();
        puVar15 = extraout_x9_03;
        pcVar18 = extraout_x10_03;
        if (bVar6) goto LAB_107303224;
        bVar6 = *extraout_x11_03 == 'l';
        pcVar18 = extraout_x11_03;
        if (bVar6) {
          func_0x000107304380();
          puVar15 = extraout_x9_04;
          pcVar18 = extraout_x10_04;
          if (bVar6) goto LAB_107303224;
          bVar6 = *extraout_x11_04 == 's';
          pcVar18 = extraout_x11_04;
          if (bVar6) {
            func_0x000107304380();
            puVar15 = extraout_x9_05;
            pcVar18 = extraout_x10_05;
            if (bVar6) goto LAB_107303224;
            pcVar18 = extraout_x11_05;
            if (*extraout_x11_05 == 'e') {
              func_0x00010730452c(pbVar26 + 5);
              goto LAB_107302bec;
            }
          }
        }
      }
LAB_1073034d0:
      uVar13 = 3;
    }
    else {
      uVar5 = bVar27 == 0x7b;
      if ((bool)uVar5) {
        func_0x00010730452c(pbVar26 + 1);
        FUN_107303e70();
        plVar14 = (long *)*param_2;
        if ((uVar11 & 1) == 0) goto LAB_10730324c;
        FUN_107304544();
        if (extraout_w8 != 0) {
          return;
        }
        func_0x0001073043c0();
        plVar14 = extraout_x8;
        pcVar18 = extraout_x9_09;
        pcVar19 = extraout_x10_09;
        if ((!(bool)uVar5) && (*extraout_x9_09 == '}')) {
          *extraout_x8 = (long)(extraout_x9_09 + 1);
LAB_107302c48:
          FUN_107303ea8();
          goto joined_r0x000107302d5c;
        }
        do {
          if ((pcVar18 == pcVar19) || (uVar5 = *pcVar18 == '\"', pcVar19 = pcVar18, !(bool)uVar5)) {
            lVar16 = (long)pcVar19 - plVar14[1];
            uVar13 = 4;
            goto LAB_107303258;
          }
          func_0x0001073043fc();
          FUN_107303548();
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          uVar11 = *param_2;
          FUN_107304544();
          if (extraout_w8_01 != 0) {
            return;
          }
          func_0x0001073043e8();
          if (((bool)uVar5) || (uVar5 = *extraout_x8_02 == ':', !(bool)uVar5)) {
            lVar16 = (long)extraout_x8_02 - *(long *)(uVar11 + 8);
            uVar13 = 5;
            goto LAB_107303258;
          }
          func_0x000107304538();
          FUN_107304544();
          if (extraout_w8_02 != 0) {
            return;
          }
          func_0x0001073043fc();
          FUN_107302a64();
          if (*(int *)(param_1 + 0x30) != 0) {
            return;
          }
          param_3 = *param_2;
          FUN_107304544();
          if (extraout_w8_03 != 0) {
            return;
          }
          func_0x0001073043e8();
          if ((bool)uVar5) {
LAB_107303434:
            lVar16 = (long)extraout_x8_03 - *(long *)(param_3 + 8);
            uVar13 = 6;
            goto LAB_107303258;
          }
          uVar5 = *extraout_x8_03 == ',';
          if (!(bool)uVar5) {
            if (*extraout_x8_03 != '}') goto LAB_107303434;
            func_0x000107304538();
            func_0x000107304620();
            goto LAB_107302c48;
          }
          func_0x000107304538();
          FUN_107304544();
          if (extraout_w8_04 != 0) {
            return;
          }
          func_0x0001073043c0();
          plVar14 = extraout_x8_04;
          pcVar18 = extraout_x9_12;
          pcVar19 = extraout_x10_11;
        } while (((bool)uVar5) || (*extraout_x9_12 != '}'));
        func_0x000107304620();
        FUN_107303ea8();
LAB_10730344c:
        plVar14 = (long *)*param_2;
        lVar16 = *plVar14;
        if ((param_3 & 1) != 0) {
          if (lVar16 == plVar14[2]) {
            return;
          }
          *plVar14 = lVar16 + 1;
          return;
        }
        goto LAB_107302d68;
      }
      bVar6 = bVar27 == 0x74;
      if (bVar6) {
        func_0x000107304380();
        puVar15 = extraout_x9_06;
        pcVar18 = extraout_x10_06;
        if (!bVar6) {
          bVar6 = *extraout_x11_06 == 'r';
          pcVar18 = extraout_x11_06;
          if (!bVar6) goto LAB_1073034d0;
          func_0x000107304380();
          puVar15 = extraout_x9_07;
          pcVar18 = extraout_x10_07;
          if (bVar6) goto LAB_107303224;
          bVar6 = *extraout_x11_07 == 'u';
          pcVar18 = extraout_x11_07;
          if (!bVar6) goto LAB_1073034d0;
          func_0x000107304380();
          puVar15 = extraout_x9_08;
          pcVar18 = extraout_x10_08;
          if (bVar6) goto LAB_107303224;
          pcVar18 = extraout_x11_08;
          if (*extraout_x11_08 != 'e') goto LAB_1073034d0;
          func_0x00010730452c(pbVar26 + 4);
LAB_107302bec:
          FUN_1073038fc();
joined_r0x000107302bf0:
          if ((uVar11 & 1) != 0) {
            return;
          }
          puVar15 = (undefined8 *)*param_2;
          pcVar18 = (char *)*puVar15;
          uVar13 = 0x10;
          goto LAB_107303228;
        }
      }
      else {
        bVar6 = bVar27 == 0x6e;
        if (!bVar6) {
          lVar16 = plVar14[1];
          if (bVar27 != 0x2d) goto LAB_10730323c;
          *plVar14 = (long)(pbVar26 + 1);
          bVar6 = true;
          pbVar24 = pbVar26 + 1;
          goto LAB_107302c6c;
        }
        func_0x000107304380();
        puVar15 = extraout_x9;
        pcVar18 = extraout_x10;
        if (!bVar6) {
          bVar6 = *extraout_x11 == 'u';
          pcVar18 = extraout_x11;
          if (bVar6) {
            func_0x000107304380();
            puVar15 = extraout_x9_00;
            pcVar18 = extraout_x10_00;
            if (bVar6) goto LAB_107303224;
            bVar6 = *extraout_x11_00 == 'l';
            pcVar18 = extraout_x11_00;
            if (bVar6) {
              func_0x000107304380();
              puVar15 = extraout_x9_01;
              pcVar18 = extraout_x10_01;
              if (bVar6) goto LAB_107303224;
              pcVar18 = extraout_x11_01;
              if (*extraout_x11_01 == 'l') {
                func_0x00010730452c(pbVar26 + 4);
                FUN_1073037d4();
                goto joined_r0x000107302bf0;
              }
            }
          }
          goto LAB_1073034d0;
        }
      }
LAB_107303224:
      uVar13 = 3;
    }
LAB_107303228:
    lVar16 = (long)pcVar18 - puVar15[1];
    goto LAB_1073031ec;
  }
  lVar16 = plVar14[1];
LAB_10730323c:
  bVar6 = false;
  pbVar24 = pbVar26;
LAB_107302c6c:
  if (pbVar24 != pbVar17) {
    if (*pbVar24 == 0x30) {
      uVar11 = 0;
      bVar8 = false;
      iVar25 = 0;
      uVar10 = 0;
      pbVar21 = pbVar24 + 1;
      *plVar14 = (long)pbVar21;
      dVar28 = 0.0;
    }
    else {
      if (8 < *pbVar24 - 0x31) {
        uVar13 = 3;
        pbVar26 = pbVar24;
        goto LAB_1073031e8;
      }
      pbVar21 = pbVar24 + 1;
      *plVar14 = (long)pbVar21;
      uVar10 = (ulong)((int)(char)*pbVar24 - 0x30);
      if (bVar6) {
        while (pbVar21 != pbVar17) {
          if (9 < *pbVar21 - 0x30) goto LAB_107302e90;
          uVar9 = (uint)uVar10;
          if (0xccccccb < uVar9) {
            if (uVar9 != 0xccccccc) goto LAB_107302df8;
            if (*pbVar21 == 0x39) {
              uVar10 = 0xccccccc;
              goto LAB_107302df8;
            }
          }
          *plVar14 = (long)(pbVar21 + 1);
          uVar10 = (ulong)(((int)(char)*pbVar21 + uVar9 * 10) - 0x30);
          pbVar21 = pbVar21 + 1;
        }
LAB_107302e80:
        dVar28 = 0.0;
        uVar11 = 0;
        bVar8 = false;
        iVar25 = 0;
      }
      else {
LAB_107302da0:
        if (pbVar21 == pbVar17) goto LAB_107302e80;
        if (9 < *pbVar21 - 0x30) goto LAB_107302e90;
        uVar9 = (uint)uVar10;
        if (uVar9 < 0x19999999) {
LAB_107302dc0:
          *plVar14 = (long)(pbVar21 + 1);
          uVar10 = (ulong)(((int)(char)*pbVar21 + uVar9 * 10) - 0x30);
          pbVar21 = pbVar21 + 1;
          goto LAB_107302da0;
        }
        if (uVar9 != 0x19999999) goto LAB_107302df8;
        if (*pbVar21 < 0x36) goto LAB_107302dc0;
        uVar10 = 0x19999999;
LAB_107302df8:
        uVar11 = uVar10;
        if (bVar6) {
LAB_107302e20:
          if (pbVar21 == pbVar17) goto LAB_107302f50;
          if (9 < *pbVar21 - 0x30) goto LAB_107302f58;
          if (uVar11 < 0xccccccccccccccc) {
LAB_107302e40:
            *plVar14 = (long)(pbVar21 + 1);
            uVar11 = (ulong)((int)(char)*pbVar21 - 0x30) + uVar11 * 10;
            pbVar21 = pbVar21 + 1;
            goto LAB_107302e20;
          }
          if (uVar11 != 0xccccccccccccccc) goto LAB_107302f10;
          if (*pbVar21 != 0x39) goto LAB_107302e40;
          uVar11 = 0xccccccccccccccc;
LAB_107302f10:
          dVar28 = (double)uVar11;
          while ((pbVar21 != pbVar17 && (*pbVar21 - 0x30 < 10))) {
            *plVar14 = (long)(pbVar21 + 1);
            dVar28 = (double)((char)*pbVar21 + -0x30) + dVar28 * 10.0;
            pbVar21 = pbVar21 + 1;
          }
          bVar8 = true;
        }
        else {
          while (pbVar21 != pbVar17) {
            if (9 < *pbVar21 - 0x30) goto LAB_107302f58;
            if (0x1999999999999998 < uVar11) {
              if (uVar11 != 0x1999999999999999) goto LAB_107302f10;
              if (0x35 < *pbVar21) {
                uVar11 = 0x1999999999999999;
                goto LAB_107302f10;
              }
            }
            *plVar14 = (long)(pbVar21 + 1);
            uVar11 = (ulong)((int)(char)*pbVar21 - 0x30) + uVar11 * 10;
            pbVar21 = pbVar21 + 1;
          }
LAB_107302f50:
          dVar28 = 0.0;
          bVar8 = false;
        }
        iVar25 = 1;
      }
    }
    goto LAB_107302f70;
  }
  uVar13 = 3;
  pbVar26 = pbVar17;
  goto LAB_1073031e8;
LAB_107302e90:
  uVar11 = 0;
  iVar25 = 0;
  goto LAB_107302f60;
LAB_107302f58:
  iVar25 = 1;
LAB_107302f60:
  dVar28 = 0.0;
  bVar8 = false;
LAB_107302f70:
  if ((pbVar21 == pbVar17) || (bVar7 = *pbVar21 == 0x2e, !bVar7)) {
    iVar23 = 0;
LAB_107303074:
    if ((pbVar21 == pbVar17) || ((*pbVar21 | 0x20) != 0x65)) {
      if (bVar8) {
        iVar25 = 0;
LAB_1073031c8:
        FUN_107303fc0(iVar25 + iVar23);
        if (1.79769313486232e+308 < dVar28) {
LAB_1073031e0:
          uVar13 = 0xd;
          goto LAB_1073031e8;
        }
        dVar29 = -dVar28;
        if (!bVar6) {
          dVar29 = dVar28;
        }
        FUN_107303fdc(dVar29);
      }
      else if (iVar25 == 0) {
        if (bVar6) {
          func_0x00010730409c(param_3,-(int)uVar10);
        }
        else {
          func_0x0001073040e8();
        }
      }
      else if (bVar6) {
        FUN_107304024(param_3,-uVar11);
      }
      else {
        func_0x000107304060(param_3,uVar11);
      }
      if ((param_3 & 1) != 0) {
        return;
      }
      uVar13 = 0x10;
    }
    else {
      pbVar24 = pbVar21 + 1;
      *plVar14 = (long)pbVar24;
      if (iVar25 == 0) {
        uVar11 = uVar10 & 0xffffffff;
      }
      if (!bVar8) {
        dVar28 = (double)uVar11;
      }
      if (pbVar24 == pbVar17) {
LAB_1073032c4:
        bVar8 = false;
      }
      else {
        bVar8 = *pbVar24 != 0x2b;
        if ((bVar8) && (*pbVar24 != 0x2d)) goto LAB_1073032c4;
        pbVar24 = pbVar21 + 2;
        *plVar14 = (long)pbVar24;
      }
      if (pbVar24 == pbVar17) {
        uVar13 = 0xf;
        pbVar26 = pbVar17;
      }
      else {
        if (*pbVar24 - 0x30 < 10) {
          pbVar21 = pbVar24 + 1;
          *plVar14 = (long)pbVar21;
          iVar20 = (char)*pbVar24 + -0x30;
          if (bVar8) {
            while ((pbVar21 != pbVar17 && (*pbVar21 - 0x30 < 10))) {
              pbVar24 = pbVar21 + 1;
              *plVar14 = (long)pbVar24;
              iVar20 = (int)(char)*pbVar21 + iVar20 * 10 + -0x30;
              pbVar21 = pbVar24;
              if ((iVar23 + 0x7ffffff7) / 10 < iVar20) {
                while ((pbVar21 != pbVar17 && (*pbVar21 - 0x30 < 10))) {
                  *plVar14 = (long)(pbVar21 + 1);
                  pbVar21 = pbVar21 + 1;
                }
              }
            }
LAB_1073031c0:
            iVar25 = -iVar20;
            if (!bVar8) {
              iVar25 = iVar20;
            }
            goto LAB_1073031c8;
          }
          do {
            if ((pbVar21 == pbVar17) || (9 < *pbVar21 - 0x30)) goto LAB_1073031c0;
            *plVar14 = (long)(pbVar21 + 1);
            iVar20 = (int)(char)*pbVar21 + iVar20 * 10 + -0x30;
            pbVar21 = pbVar21 + 1;
          } while (iVar20 <= 0x134 - iVar23);
          goto LAB_1073031e0;
        }
        uVar13 = 0xf;
        pbVar26 = pbVar24;
      }
    }
  }
  else {
    func_0x000107304380();
    if (bVar7) {
      uVar13 = 0xe;
      pbVar26 = extraout_x10_10;
    }
    else {
      if (0xfffffff5 < *extraout_x11_09 - 0x3a) {
        uVar22 = extraout_x12;
        if ((extraout_x15 & 1) == 0) {
          iVar25 = 0;
          uVar11 = extraout_x8_01;
          if (extraout_w14 == 0) {
            uVar11 = uVar10 & 0xffffffff;
          }
          pbVar17 = extraout_x11_09;
          while (((iVar23 = (int)extraout_x11_09 - (int)extraout_x10_10, pbVar17 != extraout_x10_10
                  && (iVar23 = iVar25, '/' < (char)*pbVar17)) &&
                 (*pbVar17 < 0x3a && uVar11 >> 0x35 == 0))) {
            *extraout_x9_11 = (long)(pbVar17 + 1);
            uVar11 = (ulong)((int)(char)*pbVar17 - 0x30) + uVar11 * 10;
            iVar25 = iVar25 + -1;
            uVar9 = (uint)uVar22;
            if (uVar11 != 0) {
              uVar9 = uVar9 + 1;
            }
            uVar22 = (ulong)uVar9;
            pbVar17 = pbVar17 + 1;
          }
          dVar28 = (double)uVar11;
        }
        else {
          iVar23 = 0;
          pbVar17 = extraout_x11_09;
          uVar11 = extraout_x8_01;
        }
        while ((pbVar21 = pbVar17, pbVar21 != extraout_x10_10 && (*pbVar21 - 0x30 < 10))) {
          pbVar17 = pbVar21 + 1;
          *extraout_x9_11 = (long)pbVar17;
          if ((int)uVar22 < 0x11) {
            dVar28 = (double)(int)(*pbVar21 - 0x30) + dVar28 * 10.0;
            iVar23 = iVar23 + -1;
            if (0.0 < dVar28) {
              uVar22 = (ulong)((int)uVar22 + 1);
            }
          }
        }
        bVar8 = true;
        plVar14 = extraout_x9_11;
        pbVar17 = extraout_x10_10;
        iVar25 = extraout_w14;
        goto LAB_107303074;
      }
      uVar13 = 0xe;
      pbVar26 = extraout_x11_09;
    }
  }
LAB_1073031e8:
  lVar16 = (long)pbVar26 - lVar16;
LAB_1073031ec:
  *(undefined4 *)(param_1 + 0x30) = uVar13;
  *(long *)(param_1 + 0x38) = lVar16;
  return;
}



/* Entry: 107303508; end: 107303547;  */

void FUN_107303508(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  while ((pbVar1 != (byte *)param_1[2] &&
         (*pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
    *param_1 = pbVar1 + 1;
    pbVar1 = pbVar1 + 1;
  }
  return;
}



/* Entry: 107303548; end: 1073037d3;  */

void FUN_107303548(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte *extraout_x8;
  char *pcVar12;
  undefined1 *extraout_x8_00;
  undefined1 *puVar13;
  undefined4 uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  byte bVar17;
  int iStack_58;
  
  func_0x000107304438();
  plVar8 = (long *)*param_2;
  pbVar11 = (byte *)*plVar8;
  pbVar15 = (byte *)plVar8[2];
  if (pbVar11 != pbVar15) {
    pbVar11 = pbVar11 + 1;
    *plVar8 = (long)pbVar11;
  }
  iStack_58 = 0;
  do {
    if (pbVar11 == pbVar15) {
      uVar14 = 0xb;
      pbVar11 = pbVar15;
LAB_1073036fc:
      lVar10 = (long)pbVar11 - plVar8[1];
LAB_107303704:
      *(undefined4 *)(unaff_x19 + 0x30) = uVar14;
      *(long *)(unaff_x19 + 0x38) = lVar10;
      return;
    }
    bVar17 = *pbVar11;
    if (bVar17 == 0x5c) {
      lVar10 = (long)pbVar11 - plVar8[1];
      pbVar1 = pbVar11 + 1;
      *plVar8 = (long)pbVar1;
      cVar4 = SBORROW8((long)pbVar1,(long)pbVar15);
      cVar5 = (long)pbVar1 - (long)pbVar15 < 0;
      if (pbVar1 == pbVar15) {
LAB_107303790:
        uVar14 = 10;
        goto LAB_107303704;
      }
      bVar17 = (&UNK_10de373a7)[*pbVar1];
      if (bVar17 != 0) {
        *plVar8 = (long)(pbVar11 + 2);
        bVar6 = false;
        goto LAB_1073035d0;
      }
      if (*pbVar1 != 0x75) goto LAB_107303790;
      *plVar8 = (long)(pbVar11 + 2);
      uVar9 = unaff_x19;
      FUN_1073039d0();
      if (*(int *)(unaff_x19 + 0x30) != 0) {
        return;
      }
      if (((uint)(uVar9 >> 10) & 0x3fffff) == 0x36) {
        plVar8 = (long *)*unaff_x20;
        pcVar12 = (char *)*plVar8;
        if ((pcVar12 != (char *)plVar8[2]) && (*pcVar12 == '\\')) {
          pcVar2 = pcVar12 + 1;
          *plVar8 = (long)pcVar2;
          if ((pcVar2 != (char *)plVar8[2]) && (*pcVar2 == 'u')) {
            *plVar8 = (long)(pcVar12 + 2);
            uVar7 = unaff_x19;
            FUN_1073039d0();
            if (*(int *)(unaff_x19 + 0x30) != 0) {
              return;
            }
            if (0xfffffbff < (int)uVar7 - 0xe000U) {
              uVar9 = (ulong)((int)uVar7 + (int)uVar9 * 0x400 + 0xfca02400);
              goto LAB_107303678;
            }
          }
        }
        uVar14 = 9;
        goto LAB_107303704;
      }
LAB_107303678:
      FUN_107303a70(&stack0xffffffffffffffa0,uVar9);
    }
    else {
      cVar4 = SBORROW4((uint)bVar17,0x22);
      uVar16 = (uint)bVar17;
      cVar5 = (int)(uVar16 - 0x22) < 0;
      bVar6 = uVar16 == 0x22;
      if (bVar6) {
        *plVar8 = (long)(pbVar11 + 1);
        func_0x0001073045ec(*(undefined8 *)(unaff_x19 + 0x18));
        puVar13 = extraout_x8_00;
        if (bVar6 || cVar5 != cVar4) {
          func_0x00010730444c(unaff_x19);
          puVar13 = *(undefined1 **)(unaff_x19 + 0x18);
        }
        *(undefined1 **)(unaff_x19 + 0x18) = puVar13 + 1;
        *puVar13 = 0;
        if (*(int *)(unaff_x19 + 0x30) != 0) {
          return;
        }
        *(ulong *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) - (ulong)(iStack_58 + 1);
        FUN_107303940();
        if ((param_3 & 1) != 0) {
          return;
        }
        lVar10 = *(long *)*unaff_x20;
        lVar3 = ((long *)*unaff_x20)[1];
        *(undefined4 *)(unaff_x19 + 0x30) = 0x10;
        *(long *)(unaff_x19 + 0x38) = lVar10 - lVar3;
        return;
      }
      cVar4 = SBORROW4(uVar16,0x1f);
      cVar5 = (int)(uVar16 - 0x1f) < 0;
      bVar6 = uVar16 == 0x1f;
      if (uVar16 < 0x20) {
        uVar14 = 0xb;
        if (bVar17 != 0) {
          uVar14 = 0xc;
        }
        goto LAB_1073036fc;
      }
      *plVar8 = (long)(pbVar11 + 1);
      bVar17 = *pbVar11;
LAB_1073035d0:
      func_0x0001073045ec(*(undefined8 *)(unaff_x19 + 0x18));
      pbVar11 = extraout_x8;
      if (bVar6 || cVar5 != cVar4) {
        func_0x00010730444c(unaff_x19);
        pbVar11 = *(byte **)(unaff_x19 + 0x18);
      }
      *(byte **)(unaff_x19 + 0x18) = pbVar11 + 1;
      *pbVar11 = bVar17;
      iStack_58 = iStack_58 + 1;
    }
    plVar8 = (long *)*unaff_x20;
    pbVar11 = (byte *)*plVar8;
    pbVar15 = (byte *)plVar8[2];
  } while( true );
}



/* Entry: 1073037d4; end: 107303863;  */

undefined8 FUN_1073037d4(long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  
  func_0x0001073042e4();
  puVar1 = extraout_x8;
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107304308();
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  *(undefined8 **)(param_1 + 0x40) = puVar1 + 3;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return 1;
}



/* Entry: 107303864; end: 1073038ab;  */

void FUN_107303864(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107304460();
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  lVar3 = *param_1;
  FUN_1073038ac(lVar3,lVar1,*(long *)(unaff_x20 + 0x20) - lVar1);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  *(long *)(unaff_x20 + 0x18) = lVar3 + (lVar2 - lVar1);
  *(long *)(unaff_x20 + 0x20) = lVar3 + unaff_x19;
  return;
}



/* Entry: 1073038ac; end: 1073038fb;  */

void FUN_1073038ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _realloc(param_2,param_4);
    if (param_2 != 0) {
      return;
    }
    ___cxa_allocate_exception(0x10);
    func_0x000107304578();
    func_0x00010730438c();
  }
  _free();
  return;
}



/* Entry: 1073038fc; end: 10730393f;  */

void FUN_1073038fc(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  
  func_0x0001073042e4();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001073042f4();
  }
  func_0x00010730450c();
  *extraout_x8 = 0;
  func_0x000107304454();
  return;
}



/* Entry: 107303940; end: 1073039cf;  */

undefined8 FUN_107303940(undefined8 *param_1,undefined *param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  func_0x0001073044fc();
  if (param_4 == 0) {
    if ((bool)in_ZR || in_NG != in_OV) {
      FUN_107304558();
      puVar2 = (undefined8 *)param_1[8];
    }
    param_1[8] = puVar2 + 3;
    puVar2[2] = 0;
    puVar1 = &UNK_10de374a7;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    *(undefined2 *)((long)puVar2 + 0x16) = 0x405;
    *puVar2 = 0;
    puVar2[1] = puVar1;
    *(undefined4 *)puVar2 = param_3;
  }
  else {
    if ((bool)in_ZR || in_NG != in_OV) {
      FUN_107304558();
      puVar2 = (undefined8 *)param_1[8];
    }
    param_1[8] = puVar2 + 3;
    func_0x000107303c98();
  }
  return 1;
}



/* Entry: 1073039d0; end: 107303a6f;  */

int FUN_1073039d0(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = 0;
  pbVar2 = (byte *)*param_2;
  iVar3 = 4;
  do {
    if (pbVar2 == (byte *)param_2[2]) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*pbVar2;
    }
    if (uVar4 - 0x30 < 10) {
      iVar5 = -0x30;
    }
    else if (uVar4 - 0x41 < 6) {
      iVar5 = -0x37;
    }
    else {
      if (5 < uVar4 - 0x61) {
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(undefined8 *)(param_1 + 0x38) = param_3;
        return 0;
      }
      iVar5 = -0x57;
    }
    if (pbVar2 != (byte *)param_2[2]) {
      pbVar2 = pbVar2 + 1;
      *param_2 = (long)pbVar2;
    }
    iVar1 = iVar1 * 0x10 + (int)(char)uVar4 + iVar5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}



/* Entry: 107303a70; end: 107303c4b;  */

void FUN_107303a70(long *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  byte extraout_w8;
  byte extraout_w8_00;
  byte *extraout_x8;
  byte *pbVar7;
  byte *extraout_x8_00;
  byte bVar8;
  long lVar9;
  long lVar10;
  byte bStack_34;
  
  cVar3 = SBORROW4(param_2,0x7f);
  cVar4 = (int)(param_2 - 0x7f) < 0;
  bVar5 = param_2 == 0x7f;
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    lVar9 = *param_1;
    func_0x0001073045ec(*(undefined8 *)(lVar9 + 0x18));
    pbVar7 = extraout_x8;
    if (bVar5 || cVar4 != cVar3) {
      func_0x00010730444c(lVar9);
      pbVar7 = *(byte **)(lVar9 + 0x18);
    }
    *(byte **)(lVar9 + 0x18) = pbVar7 + 1;
    *pbVar7 = bVar2;
  }
  else {
    if (param_2 < 0x800) {
      bVar8 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      lVar10 = *param_1;
      pbVar7 = *(byte **)(lVar10 + 0x18);
      pbVar1 = *(byte **)(lVar10 + 0x20);
      lVar9 = (long)pbVar1 - (long)pbVar7;
      if (param_2 >> 0x10 == 0) {
        cVar3 = '\0';
        cVar4 = lVar9 < 0;
        uVar6 = pbVar1 == pbVar7;
        bVar8 = (byte)(param_2 >> 0xc) | 0xe0;
        if (lVar9 < 1) {
          func_0x0001073042bc();
          pbVar7 = *(byte **)(lVar10 + 0x18);
          bVar8 = bStack_34;
        }
        *(byte **)(lVar10 + 0x18) = pbVar7 + 1;
        *pbVar7 = bVar8;
        func_0x0001073043b0();
        func_0x00010730462c(0xffffff80);
        if ((bool)uVar6 || cVar4 != cVar3) {
          func_0x0001073042bc();
        }
        func_0x00010730447c();
        lVar9 = *param_1;
        pbVar7 = *(byte **)(lVar9 + 0x18);
        if (*(long *)(lVar9 + 0x20) - (long)pbVar7 < 1) {
          FUN_107303c4c(lVar9,1);
          pbVar7 = *(byte **)(lVar9 + 0x18);
        }
        *(byte **)(lVar9 + 0x18) = pbVar7 + 1;
        *pbVar7 = extraout_w8 & 0xc0 | bVar2 & 0x3f;
        goto LAB_107303c40;
      }
      cVar3 = '\0';
      cVar4 = lVar9 < 0;
      uVar6 = pbVar1 == pbVar7;
      bVar8 = (byte)(param_2 >> 0x12) | 0xf0;
      if (lVar9 < 1) {
        func_0x0001073042bc();
        pbVar7 = *(byte **)(lVar10 + 0x18);
        bVar8 = bStack_34;
      }
      *(byte **)(lVar10 + 0x18) = pbVar7 + 1;
      *pbVar7 = bVar8;
      func_0x0001073043b0();
      func_0x00010730462c(0xffffff80);
      if ((bool)uVar6 || cVar4 != cVar3) {
        func_0x0001073042bc();
      }
      func_0x00010730447c();
      bVar8 = extraout_w8_00 & 0xc0 | (byte)(param_2 >> 6) & 0x3f;
    }
    lVar10 = *param_1;
    pbVar7 = *(byte **)(lVar10 + 0x18);
    lVar9 = (long)*(byte **)(lVar10 + 0x20) - (long)pbVar7;
    cVar3 = '\0';
    cVar4 = lVar9 < 0;
    uVar6 = *(byte **)(lVar10 + 0x20) == pbVar7;
    if (lVar9 < 1) {
      FUN_107303c4c(lVar10,1);
      pbVar7 = *(byte **)(lVar10 + 0x18);
    }
    *(byte **)(lVar10 + 0x18) = pbVar7 + 1;
    *pbVar7 = bVar8;
    func_0x0001073043b0();
    lVar9 = *param_1;
    func_0x0001073045ec(*(undefined8 *)(lVar9 + 0x18));
    pbVar7 = extraout_x8_00;
    if ((bool)uVar6 || cVar4 != cVar3) {
      func_0x00010730444c(lVar9);
      pbVar7 = *(byte **)(lVar9 + 0x18);
    }
    *(byte **)(lVar9 + 0x18) = pbVar7 + 1;
    *pbVar7 = bVar2 & 0x3f | 0x80;
  }
LAB_107303c40:
  func_0x0001073043b0();
  return;
}



/* Entry: 107303c4c; end: 107303e27;  */

void FUN_107303c4c(long *param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000107304438();
  if (param_1[2] == 0) {
    if (*unaff_x19 == 0) {
      func_0x0001073045a8();
      *unaff_x19 = (long)param_1;
      unaff_x19[1] = (long)param_1;
    }
    lVar3 = 0;
  }
  else {
    func_0x00010730460c();
    lVar3 = extraout_x8;
  }
  func_0x0001073045f8(unaff_x20 - lVar3);
  func_0x000107304460();
  lVar3 = param_1[2];
  lVar1 = param_1[3];
  lVar2 = *param_1;
  FUN_1073038ac(lVar2,lVar3,*(long *)(unaff_x20 + 0x20) - lVar3,unaff_x19);
  *(long *)(unaff_x20 + 0x10) = lVar2;
  *(long *)(unaff_x20 + 0x18) = lVar2 + (lVar1 - lVar3);
  *(long *)(unaff_x20 + 0x20) = lVar2 + (long)unaff_x19;
  return;
}



/* Entry: 107303e28; end: 107303e6f;  */

void FUN_107303e28(undefined8 param_1,long param_2)

{
  if ((param_2 != 0) && (_malloc(), param_2 == 0)) {
    ___cxa_allocate_exception(0x10);
    func_0x000107304578();
    func_0x00010730438c();
  }
  return;
}



/* Entry: 107303e70; end: 107303ea7;  */

void FUN_107303e70(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  
  func_0x0001073042e4();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107304308();
  }
  func_0x00010730451c();
  *extraout_x8 = 0;
  func_0x000107304454();
  return;
}



/* Entry: 107303ea8; end: 107303ecf;  */

undefined8 FUN_107303ea8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073044d8((int)param_2,param_1,(int)param_2,param_2);
  FUN_107303ed0();
  return 1;
}



/* Entry: 107303ed0; end: 107303f17;  */

void FUN_107303ed0(int *param_1,undefined8 param_2,int param_3)

{
  *(undefined2 *)((long)param_1 + 0x16) = 3;
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    func_0x0001073044c8(0x30);
    func_0x0001073044b8();
  }
  *param_1 = param_3;
  param_1[1] = param_3;
  return;
}



/* Entry: 107303f18; end: 107303f4f;  */

void FUN_107303f18(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  
  func_0x0001073042e4();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107304308();
  }
  func_0x00010730451c();
  *extraout_x8 = 0;
  func_0x000107304454();
  return;
}



/* Entry: 107303f50; end: 107303f77;  */

undefined8 FUN_107303f50(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073044d8((int)param_2,param_1,(int)param_2,param_2);
  FUN_107303f78();
  return 1;
}



/* Entry: 107303f78; end: 107303fbf;  */

void FUN_107303f78(int *param_1,undefined8 param_2,int param_3)

{
  *(undefined2 *)((long)param_1 + 0x16) = 4;
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    func_0x0001073044c8(0x18);
    func_0x0001073044b8();
  }
  *param_1 = param_3;
  param_1[1] = param_3;
  return;
}



/* Entry: 107303fc0; end: 107303fdb;  */

double FUN_107303fc0(double param_1,uint param_2)

{
  double dVar1;
  
  if ((int)param_2 < -0x134) {
    param_1 = param_1 / 1e+308;
    param_2 = param_2 + 0x134;
  }
  dVar1 = 0.0;
  if (-0x135 < (int)param_2) {
    if ((int)param_2 < 0) {
      dVar1 = param_1 / *(double *)(&UNK_10de374a8 + (ulong)-param_2 * 8);
    }
    else {
      dVar1 = param_1 * *(double *)(&UNK_10de374a8 + (ulong)param_2 * 8);
    }
  }
  return dVar1;
}



/* Entry: 107303fdc; end: 107304023;  */

void FUN_107303fdc(undefined8 param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  
  func_0x0001073042e4();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107304308();
  }
  func_0x00010730451c();
  *extraout_x8 = param_1;
  func_0x000107304454();
  return;
}



/* Entry: 107304024; end: 107304133;  */

undefined8 FUN_107304024(long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long unaff_x20;
  
  func_0x000107304460();
  func_0x0001073044fc();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001073042f4();
    param_1 = *(long *)(unaff_x20 + 0x40);
  }
  *(long *)(unaff_x20 + 0x40) = param_1 + 0x18;
  func_0x000107304174();
  return 1;
}



/* Entry: 107304134; end: 107304207;  */

double FUN_107304134(double param_1,uint param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (-0x135 < (int)param_2) {
    if ((int)param_2 < 0) {
      dVar1 = param_1 / *(double *)(&UNK_10de374a8 + (ulong)-param_2 * 8);
    }
    else {
      dVar1 = param_1 * *(double *)(&UNK_10de374a8 + (ulong)param_2 * 8);
    }
  }
  return dVar1;
}



/* Entry: 107304208; end: 10730422f;  */

undefined8 * FUN_107304208(undefined8 *param_1)

{
  FUN_107304230(*param_1);
  return param_1;
}



/* Entry: 107304230; end: 10730423f;  */

void FUN_107304230(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  plVar3 = (long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != lVar1) {
    func_0x000107304460();
    lVar1 = plVar3[2];
    lVar2 = plVar3[3];
    lVar4 = *plVar3;
    FUN_1073038ac(lVar4,lVar1,*(long *)(unaff_x20 + 0x20) - lVar1,unaff_x19);
    *(long *)(unaff_x20 + 0x10) = lVar4;
    *(long *)(unaff_x20 + 0x18) = lVar4 + (lVar2 - lVar1);
    *(long *)(unaff_x20 + 0x20) = lVar4 + unaff_x19;
    return;
  }
  _free(lVar1,0);
  *(long *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 107304240; end: 10730427f;  */

void FUN_107304240(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = param_1[2];
  if (param_1[3] != lVar1) {
    func_0x000107304460();
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    lVar3 = *param_1;
    FUN_1073038ac(lVar3,lVar1,*(long *)(unaff_x20 + 0x20) - lVar1,unaff_x19);
    *(long *)(unaff_x20 + 0x10) = lVar3;
    *(long *)(unaff_x20 + 0x18) = lVar3 + (lVar2 - lVar1);
    *(long *)(unaff_x20 + 0x20) = lVar3 + unaff_x19;
    return;
  }
  _free(lVar1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


