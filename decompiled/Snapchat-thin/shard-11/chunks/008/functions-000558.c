/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10895ae24; end: 10895ae5f;  */

void FUN_10895ae24(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010895bc74();
  *param_1 = extraout_x8;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    *(long *)(unaff_x19 + 8) = lVar1;
    if (lVar1 != 0) {
      return;
    }
  }
  puVar2 = (undefined8 *)0x0;
  func_0x00010527822c();
  func_0x00010895bc24();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x00010895aee8();
  func_0x00010895aeb0();
  return;
}



/* Entry: 10895ae60; end: 10895aeaf;  */

void FUN_10895ae60(undefined8 *param_1,long param_2)

{
  func_0x00010895bc24();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x00010895aee8();
  func_0x00010895aeb0();
  return;
}



/* Entry: 10895aeb0; end: 10895afab;  */

void FUN_10895aeb0(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010895be5c();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x00010895b0f0();
  }
  return;
}



/* Entry: 10895afac; end: 10895b0bb;  */

void FUN_10895afac(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    FUN_10895b0bc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10895b0d4(plVar2);
    FUN_10895b0bc(param_1,plVar2);
    param_1[1] = param_2;
    for (uVar1 = 0; param_2 != uVar1; uVar1 = uVar1 + 1) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar1 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar1 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar1 = uVar1 & uVar4;
        }
        else if (param_2 <= uVar1) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar1 / param_2;
          }
          uVar1 = uVar1 - uVar5 * param_2;
        }
        if (uVar1 != uVar6) {
          if (*(long *)(*param_1 + uVar1 * 8) == 0) {
            *(long **)(*param_1 + uVar1 * 8) = plVar3;
            uVar6 = uVar1;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(*param_1 + uVar1 * 8);
            **(long **)(*param_1 + uVar1 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10895b0bc; end: 10895b0d3;  */

void FUN_10895b0bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10895b0d4; end: 10895b123;  */

void FUN_10895b0d4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010895b108();
  return;
}



/* Entry: 10895b124; end: 10895b343;  */

undefined1  [16] FUN_10895b124(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  long *aplStack_58 [3];
  
  uVar1 = *param_2;
  uVar8 = (ulong)uVar1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar5 = uVar11 - 1;
    uVar10 = (uint)uVar11;
    if ((uVar11 & uVar5) == 0) {
      unaff_x23 = (ulong)(uVar10 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar1 / uVar10;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar10);
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10895b1d4;
          uVar7 = plVar9[1];
          if (uVar7 != uVar8) break;
          if (*(uint *)(plVar9 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_10895b318;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          uVar3 = 0;
          if (uVar11 != 0) {
            uVar3 = uVar7 / uVar11;
          }
          uVar7 = uVar7 - uVar3 * uVar11;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_10895b1d4:
  func_0x00010895bd3c(aplStack_58);
  FUN_10895b344();
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar11) {
      uVar5 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar5 = uVar5 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    func_0x00010895aee8(param_1,uVar5);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar11 - 1U & uVar1);
    }
    else {
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar8 / uVar11;
        }
        unaff_x23 = uVar8 - uVar5 * uVar11;
      }
    }
  }
  plVar9 = aplStack_58[0];
  plVar6 = *(long **)(*param_1 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(*param_1 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar8 = uVar8 & uVar11 - 1;
      }
      else if (uVar11 <= uVar8) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar8 / uVar11;
        }
        uVar8 = uVar8 - uVar5 * uVar11;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10895b38c(aplStack_58);
  uVar4 = 1;
LAB_10895b318:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 10895b344; end: 10895b38b;  */

void FUN_10895b344(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = *param_4;
  return;
}



/* Entry: 10895b38c; end: 10895b3af;  */

undefined8 FUN_10895b38c(undefined8 param_1)

{
  FUN_10895b3b0(param_1,0);
  return param_1;
}



/* Entry: 10895b3b0; end: 10895b3c7;  */

void FUN_10895b3b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10895b3c8; end: 10895b427;  */

void FUN_10895b3c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000108b866a4(auStack_50,param_3,param_4,*param_2);
  FUN_10895b428(param_1,auStack_50,&uStack_51);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 10895b428; end: 10895b537;  */

void FUN_10895b428(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010895bc74();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = extraout_x8;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  FUN_108b8660c(param_1 + 3);
  return;
}



/* Entry: 10895b538; end: 10895b603;  */

void FUN_10895b538(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar5;
  long *plVar6;
  
  func_0x00010895bc24();
  plVar3 = (long *)(param_2 + 8);
  plVar4 = plVar3;
  plVar5 = plVar3;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    lVar2 = (long)(plVar6 + 4);
    func_0x00010895b4ac(lVar2,param_3);
    bVar1 = -1 < (char)lVar2;
    lVar2 = 8;
    if (bVar1) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar2);
    if (bVar1) {
      plVar5 = plVar6;
    }
  }
  if ((plVar3 == plVar5) || (func_0x00010895b4ac(param_3,plVar5 + 4), ((uint)param_3 >> 7 & 1) != 0)
     ) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    plVar3 = plVar5;
    func_0x000107c27be0();
    if ((long *)*unaff_x20 == plVar5) {
      *unaff_x20 = (long)plVar3;
    }
    unaff_x20[2] = unaff_x20[2] + -1;
    func_0x00010530d618(unaff_x20[1],plVar5);
    *unaff_x19 = (long)plVar5;
    *(undefined1 *)((long)unaff_x19 + 9) = 1;
  }
  return;
}



/* Entry: 10895b604; end: 10895b6b3;  */

void FUN_10895b604(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x00010895ac1c(lVar1 + 0x40);
    __ZdlPv(lVar1);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10895b6b4; end: 10895b717;  */

void FUN_10895b6b4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  func_0x00010895be5c();
  func_0x000107c2837c(auStack_70);
  func_0x000107c28378();
  lVar1 = *unaff_x20;
  *unaff_x20 = (long)puVar2;
  unaff_x20[1] = unaff_x20[1] + (lVar1 - (long)puVar2);
  FUN_10895b718();
  *unaff_x19 = puVar3;
  return;
}



/* Entry: 10895b718; end: 10895b7bb;  */

undefined1 * FUN_10895b718(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [8];
  long alStack_380 [20];
  undefined1 auStack_2e0 [72];
  undefined1 *puStack_298;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [504];
  undefined8 uStack_38;
  
  func_0x00010895ba98();
  puStack_248 = auStack_230;
  ppuStack_250 = &PTR_DAT_11099bc38;
  uStack_238 = 500;
  uStack_240 = 0;
  uStack_38 = extraout_x8;
  FUN_10895b7bc(&ppuStack_250);
  puStack_260 = puStack_248;
  uStack_258 = uStack_240;
  puVar1 = param_3;
  func_0x000107c28388(param_1,&puStack_260);
  func_0x00010895bf8c();
  func_0x00010895b9e8(uStack_38);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010895bf8c();
  func_0x00010895bb18();
  puVar2 = puVar1;
  func_0x00010895bc24();
  puStack_298 = puVar2;
  func_0x000107c284f4(auStack_2e0,param_3);
  FUN_10895b8b0(alStack_380,auStack_2e0);
  if (puVar1 != (undefined1 *)0x0) {
    lVar3 = *(long *)(alStack_380[0] + -0x18);
    func_0x00010bd490d0(auStack_390,&puStack_298);
    FUN_1083d3eac(auStack_388,(long)alStack_380 + lVar3,auStack_390);
    __ZNSt3__16localeD1Ev(auStack_388);
    __ZNSt3__16localeD1Ev(auStack_390);
  }
  FUN_10895b900(alStack_380,param_1);
  func_0x00010895b954((long)alStack_380 + *(long *)(alStack_380[0] + -0x18),5);
  func_0x000107c283e0(param_3,*(undefined8 *)(param_3 + 0x10));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(alStack_380);
  puVar1 = auStack_2e0;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(puVar1);
  return puVar1;
}



/* Entry: 10895b7bc; end: 10895b8af;  */

void FUN_10895b7bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  long alStack_120 [20];
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lVar1 = param_3;
  func_0x00010895bc24();
  lStack_38 = lVar1;
  func_0x000107c284f4(auStack_80);
  FUN_10895b8b0(alStack_120,auStack_80);
  if (param_3 != 0) {
    lVar1 = *(long *)(alStack_120[0] + -0x18);
    func_0x00010bd490d0(auStack_130,&lStack_38);
    FUN_1083d3eac(auStack_128,(long)alStack_120 + lVar1,auStack_130);
    __ZNSt3__16localeD1Ev(auStack_128);
    __ZNSt3__16localeD1Ev(auStack_130);
  }
  FUN_10895b900(alStack_120);
  func_0x00010895b954((long)alStack_120 + *(long *)(alStack_120[0] + -0x18),5);
  func_0x000107c283e0();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(alStack_120);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_80);
  return;
}



/* Entry: 10895b8b0; end: 10895b8ff;  */

long * FUN_10895b8b0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08;
  param_1[1] = (long)(PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08 + 0x40);
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x18);
  func_0x000107c28020(param_1 + 1);
  return param_1;
}



/* Entry: 10895b900; end: 10895b953;  */

undefined8 FUN_10895b900(undefined8 param_1,undefined8 param_2)

{
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  func_0x00010bd4358c(appuStack_38,param_2);
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  func_0x00010549023c(param_1,appuStack_38[0]);
  func_0x00010895ba8c();
  return param_1;
}



/* Entry: 10895b954; end: 10895c04b;  */

void FUN_10895b954(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_1103468e0)(param_1,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 10895c04c; end: 10895c197;  */

undefined8 *
FUN_10895c04c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined2 uVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_7c [28];
  undefined8 *puStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_110a9e4d8;
  param_1[1] = &PTR_DAT_110a9e578;
  param_1[2] = &PTR_DAT_110a9e598;
  param_1[3] = param_2;
  param_1[4] = *param_3;
  uVar3 = param_3[1];
  param_1[6] = param_3[2];
  param_1[5] = uVar3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 3);
  uVar1 = *(undefined2 *)((long)param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_3 + 0x1e);
  *(undefined2 *)((long)param_1 + 0x3c) = uVar1;
  param_1[8] = param_5;
  param_1[9] = *param_7;
  lVar2 = param_7[1];
  param_1[10] = lVar2;
  uStack_48 = param_5;
  if (lVar2 != 0) {
    do {
      func_0x00010895c888();
      param_3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puStack_60 = param_1;
  func_0x00010bd43838(auStack_7c,param_3,*(undefined2 *)((long)param_3 + 0x1c));
  uStack_88 = 0x2000000010000;
  uStack_8c = 0;
  FUN_10895c198(auStack_58,&puStack_60,auStack_7c,param_4,&uStack_48,param_6,&uStack_88,&uStack_8c,
                param_8,&stack0x00000000);
  FUN_10895c1e0(param_1 + 0xb,auStack_58);
  FUN_10895c544(auStack_58);
  return param_1;
}



/* Entry: 10895c198; end: 10895c1df;  */

void FUN_10895c198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 uStack_11;
  
  FUN_10895c598(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 10895c1e0; end: 10895c21b;  */

undefined8 * FUN_10895c1e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10895c544(&uStack_30);
  return param_1;
}



/* Entry: 10895c21c; end: 10895c2a7;  */

undefined8 * FUN_10895c21c(undefined8 *param_1)

{
  long *plVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110a9e4d8;
  param_1[1] = &PTR_DAT_110a9e578;
  param_1[2] = &PTR_DAT_110a9e598;
  plVar1 = (long *)param_1[0xd];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    lStack_58 = plVar1[1];
    lStack_60 = *plVar1;
    lStack_48 = plVar1[3];
    lStack_50 = plVar1[2];
    lStack_38 = plVar1[5];
    lStack_40 = plVar1[4];
    lStack_28 = plVar1[7];
    lStack_30 = plVar1[6];
    FUN_1089645dc(&lStack_60);
  }
  func_0x00010895c56c(param_1 + 0xd);
  func_0x00010895c544(param_1 + 0xb);
  FUN_108955ecc(param_1 + 9);
  return param_1;
}



/* Entry: 10895c2a8; end: 10895c2b3;  */

undefined8 * FUN_10895c2a8(undefined8 *param_1)

{
  long *plVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110a9e4d8;
  param_1[1] = &PTR_DAT_110a9e578;
  param_1[2] = &PTR_DAT_110a9e598;
  plVar1 = (long *)param_1[0xd];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    lStack_58 = plVar1[1];
    lStack_60 = *plVar1;
    lStack_48 = plVar1[3];
    lStack_50 = plVar1[2];
    lStack_38 = plVar1[5];
    lStack_40 = plVar1[4];
    lStack_28 = plVar1[7];
    lStack_30 = plVar1[6];
    FUN_1089645dc(&lStack_60);
  }
  func_0x00010895c56c(param_1 + 0xd);
  func_0x00010895c544(param_1 + 0xb);
  FUN_108955ecc(param_1 + 9);
  return param_1;
}



/* Entry: 10895c2b4; end: 10895c2c7;  */

void FUN_10895c2b4(void)

{
  FUN_10895c21c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895c2c8; end: 10895c2cf;  */

void FUN_10895c2c8(long param_1)

{
  FUN_10895c21c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895c2d0; end: 10895c2fb;  */

void FUN_10895c2d0(undefined1 *param_1,long param_2)

{
  FUN_108968080(*(undefined8 *)(param_2 + 0x58));
  *param_1 = 0;
  param_1[0x28] = 0;
  return;
}



/* Entry: 10895c2fc; end: 10895c363;  */

void FUN_10895c2fc(long *param_1)

{
  undefined1 auStack_50 [40];
  char cStack_28;
  
  FUN_1089682c0(auStack_50,param_1[0xb]);
  if (cStack_28 == '\x01') {
    (**(code **)(*param_1 + 0x68))(param_1,auStack_50);
  }
  func_0x000104c05024(auStack_50);
  return;
}



/* Entry: 10895c364; end: 10895c3bb;  */

void FUN_10895c364(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010895c374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    return;
  }
  return;
}



/* Entry: 10895c3bc; end: 10895c477;  */

void FUN_10895c3bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)*puVar5)(&lStack_28,puVar5,param_1 + 8,uVar7,&uStack_40);
  lVar4 = lStack_28;
  lStack_28 = 0;
  lVar6 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar4;
  if (lVar6 != 0) {
    func_0x00010895c858();
    lVar4 = lStack_28;
    lStack_28 = 0;
    if (lVar4 != 0) {
      func_0x00010895c858();
    }
  }
  func_0x0001089554c4(&uStack_40);
  (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),param_1 + 0x20);
  return;
}



/* Entry: 10895c478; end: 10895c543;  */

void FUN_10895c478(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x50) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)*puVar5)(&lStack_28,puVar5,param_1 + -8,uVar7,&uStack_40);
  lVar4 = lStack_28;
  lStack_28 = 0;
  lVar6 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar4;
  if (lVar6 != 0) {
    func_0x00010895c858();
    lVar4 = lStack_28;
    lStack_28 = 0;
    if (lVar4 != 0) {
      func_0x00010895c858();
    }
  }
  func_0x0001089554c4(&uStack_40);
  (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_1 + 0x10);
  return;
}



/* Entry: 10895c544; end: 10895c597;  */

long FUN_10895c544(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10895c598; end: 10895c687;  */

void FUN_10895c598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10895c6a4(auStack_70,1);
  uStack_80 = param_10;
  uStack_78 = param_11;
  FUN_10895c6fc(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  lVar2 = lStack_60;
  lStack_60 = 0;
  FUN_10895c688(param_1,lVar2 + 0x18);
  FUN_10895c848(auStack_70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = auStack_70;
  FUN_10895c848();
  func_0x00010895c8a4();
  *extraout_x8 = puVar1;
  extraout_x8[1] = lVar2;
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)(puVar1 + 8);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((puVar3[1] == 0 || (*(long *)(puVar3[1] + 8) == -1)))) {
    pcStack_88 = FUN_10895c688;
    lStack_a8 = extraout_x8[1];
    uVar4 = 0;
    puStack_b0 = puVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    if (lStack_a8 != 0) {
      do {
        func_0x00010895c888();
      } while (extraout_w11 != 0);
      do {
        func_0x00010895c888();
        uVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_98 = puVar3[1];
    uStack_a0 = *puVar3;
    *puVar3 = puVar1;
    puVar3[1] = uVar4;
    FUN_10895c820(&uStack_a0);
    FUN_10895c544(&puStack_b0);
    return;
  }
  return;
}



/* Entry: 10895c688; end: 10895c6a3;  */

void FUN_10895c688(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    lVar2 = 0;
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x00010895c888();
      } while (extraout_w11 != 0);
      do {
        func_0x00010895c888();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    FUN_10895c820(&lStack_20);
    FUN_10895c544(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10895c6a4; end: 10895c6cb;  */

long FUN_10895c6a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10895c6cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10895c6cc; end: 10895c6fb;  */

undefined8 * FUN_10895c6cc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x511be1958b67ec) {
    puVar1 = (undefined8 *)(param_2 * 0x328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9e650;
  func_0x00010895c774(param_1 + 3);
  return param_1;
}



/* Entry: 10895c6fc; end: 10895c74b;  */

undefined8 * FUN_10895c6fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9e650;
  func_0x00010895c774(param_1 + 3);
  return param_1;
}



/* Entry: 10895c74c; end: 10895c74f;  */

void FUN_10895c74c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10895c750; end: 10895c763;  */

void FUN_10895c750(void)

{
  func_0x00010895c79c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895c764; end: 10895c7ab;  */

void FUN_10895c764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010895c76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10895c7ac; end: 10895c81f;  */

void FUN_10895c7ac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uVar1 = 0;
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x00010895c888();
      } while (extraout_w11 != 0);
      do {
        func_0x00010895c888();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_10895c820(&uStack_20);
    FUN_10895c544(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10895c820; end: 10895c847;  */

long FUN_10895c820(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10895c848; end: 10895c977;  */

void FUN_10895c848(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10895c978; end: 10895c9b7;  */

long FUN_10895c978(long param_1)

{
  func_0x000104c04a44(param_1 + 0x40);
  FUN_108955ecc(param_1 + 0x30);
  func_0x000108955ef0(param_1 + 0x20);
  func_0x000104c04a68(param_1 + 0x10);
  return param_1;
}



/* Entry: 10895c9b8; end: 10895c9bb;  */

long FUN_10895c9b8(long param_1)

{
  func_0x000104c04a44(param_1 + 0x40);
  FUN_108955ecc(param_1 + 0x30);
  func_0x000108955ef0(param_1 + 0x20);
  func_0x000104c04a68(param_1 + 0x10);
  return param_1;
}



/* Entry: 10895c9bc; end: 10895c9cf;  */

void FUN_10895c9bc(void)

{
  FUN_10895c978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895c9d0; end: 10895cb57;  */

void FUN_10895c9d0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  char cStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  if (*(char *)(param_4 + 0x1e) == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = *(undefined8 *)(param_5 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 8);
    puVar1 = (undefined8 *)0x88;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1 + 3;
    *puVar1 = &PTR_DAT_110a9e740;
    FUN_10895c04c(puVar2,param_3,param_4,param_5 + 0x10,uVar4,param_5 + 0x80,param_2 + 0x30,uVar3,
                  uVar5);
  }
  else {
    if (*(char *)(param_4 + 0x1e) != '\0') goto LAB_10895cab8;
    puVar1 = (undefined8 *)0x158;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1 + 3;
    *puVar1 = &PTR_FUN_110a9e6f0;
    FUN_10895cbc4(puVar2,param_3,param_4,param_5,param_2 + 0x10,param_2 + 0x20,param_2 + 0x30,
                  param_2 + 0x40);
  }
  puStack_98 = puStack_68;
  puStack_a0 = puStack_70;
  puStack_70 = puVar2;
  puStack_68 = puVar1;
  func_0x00010895ac1c(&puStack_a0);
LAB_10895cab8:
  (**(code **)*puStack_70)(&puStack_a0);
  if (cStack_78 == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    func_0x000104c05024(&puStack_a0);
  }
  else {
    func_0x000104c05024(&puStack_a0);
    param_1[1] = puStack_68;
    *param_1 = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    puStack_68 = (undefined8 *)0x0;
  }
  func_0x00010895ac1c(&puStack_70);
  return;
}



/* Entry: 10895cb58; end: 10895cb5b;  */

void FUN_10895cb58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e6f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10895cb5c; end: 10895cb6f;  */

void FUN_10895cb5c(void)

{
  func_0x00010895cb7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895cb70; end: 10895cb8f;  */

long FUN_10895cb70(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  lVar3 = param_1 + 0x18;
  while( true ) {
    lVar2 = lVar3;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    lVar3 = lVar2;
    func_0x00010895f66c();
    *(undefined8 *)(puVar1 + -0x28) = extraout_x8;
    *(undefined1 *)(lVar3 + 0x138) = 1;
    *(undefined8 *)(puVar1 + -0x58) = 0x10895f4cc;
    *(undefined ***)(puVar1 + -0x50) = &PTR_DAT_110a9ee38;
    *(long *)(puVar1 + -0x48) = lVar3;
    func_0x00010895f754();
    func_0x00010895f144(lVar2 + 0x130);
    func_0x000104c04a44(lVar2 + 0x120);
    func_0x00010895c56c(lVar2 + 0xe0);
    func_0x00010895f118(lVar2 + 0xd8);
    func_0x000108950ac8(lVar2 + 200);
    FUN_108955ecc(lVar2 + 0xb8);
    func_0x000108955ef0(lVar2 + 0xa8);
    func_0x000104c04a68(lVar2 + 0x98);
    lVar3 = lVar2 + 0x70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010895f5f4(*(undefined8 *)(puVar1 + -0x28));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_10895cecc;
    func_0x000104bd46a0();
    puVar1 = puVar1 + -0x60;
    unaff_x19 = lVar2;
  }
  return lVar2;
}



/* Entry: 10895cb90; end: 10895cba3;  */

void FUN_10895cb90(void)

{
  func_0x00010895cbb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895cba4; end: 10895cbc3;  */

void FUN_10895cba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010895cbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x50))();
  return;
}



/* Entry: 10895cbc4; end: 10895ce13;  */

undefined8 *
FUN_10895cbc4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_110a9e790;
  param_1[1] = &PTR_FUN_110a9e848;
  param_1[2] = &PTR_DAT_110a9e880;
  param_1[3] = &PTR_FUN_110a9e8b0;
  param_1[4] = &PTR_DAT_110a9e8d0;
  param_1[5] = param_2;
  param_1[6] = *param_3;
  uVar4 = param_3[1];
  param_1[8] = param_3[2];
  param_1[7] = uVar4;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 3);
  uVar1 = *(undefined2 *)((long)param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x4e) = *(undefined1 *)((long)param_3 + 0x1e);
  *(undefined2 *)((long)param_1 + 0x4c) = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x51) = 2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xe,param_4 + 0x10);
  param_1[0x11] = *(undefined8 *)(param_4 + 0x28);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_4 + 0xc);
  param_1[0x13] = *param_5;
  lVar3 = param_5[1];
  param_1[0x14] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010895f7b0();
    } while (extraout_w10 != 0);
  }
  param_1[0x15] = *param_6;
  lVar3 = param_6[1];
  param_1[0x16] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010895f7b0();
    } while (extraout_w10_00 != 0);
  }
  param_1[0x17] = *param_7;
  lVar3 = param_7[1];
  param_1[0x18] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010895f7b0();
    } while (extraout_w10_01 != 0);
  }
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xf9) = 0;
  *(undefined8 *)((long)param_1 + 0xf1) = 0;
  param_1[0x24] = *param_8;
  lVar3 = param_8[1];
  param_1[0x25] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010895f7b0();
    } while (extraout_w10_02 != 0);
  }
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  puVar2 = (undefined8 *)0xd0;
  __Znwm();
  puVar2[8] = &UNK_10f4ed673;
  puVar2[2] = 0;
  puVar2[3] = &UNK_10f4ed66b;
  puVar2[4] = &DAT_10f32307f;
  puVar2[5] = &UNK_10f684e5a;
  *puVar2 = param_1;
  puVar2[1] = 0;
  puVar2[10] = &UNK_10f4ed688;
  puVar2[0xb] = &DAT_10f31a21b;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined1 *)(puVar2 + 0x14) = 0;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  uStack_48 = 0;
  FUN_10895f168(param_1 + 0x26);
  func_0x00010895f144(&uStack_48);
  return param_1;
}



/* Entry: 10895ce14; end: 10895cecb;  */

long FUN_10895ce14(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar2 = lVar1;
    func_0x00010895f66c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    *(undefined1 *)(lVar2 + 0x138) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10895f4cc;
    *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_DAT_110a9ee38;
    *(long *)((long)register0x00000008 + -0x48) = lVar2;
    func_0x00010895f754();
    func_0x00010895f144(lVar1 + 0x130);
    func_0x000104c04a44(lVar1 + 0x120);
    func_0x00010895c56c(lVar1 + 0xe0);
    func_0x00010895f118(lVar1 + 0xd8);
    func_0x000108950ac8(lVar1 + 200);
    FUN_108955ecc(lVar1 + 0xb8);
    func_0x000108955ef0(lVar1 + 0xa8);
    func_0x000104c04a68(lVar1 + 0x98);
    param_1 = lVar1 + 0x70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010895f5f4(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_10895cecc;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = lVar1;
  }
  return lVar1;
}



/* Entry: 10895cecc; end: 10895cee7;  */

long FUN_10895cecc(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar1 = lVar2;
    func_0x00010895f66c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    *(undefined1 *)(lVar1 + 0x138) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10895f4cc;
    *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_DAT_110a9ee38;
    *(long *)((long)register0x00000008 + -0x48) = lVar1;
    func_0x00010895f754();
    func_0x00010895f144(lVar2 + 0x130);
    func_0x000104c04a44(lVar2 + 0x120);
    func_0x00010895c56c(lVar2 + 0xe0);
    func_0x00010895f118(lVar2 + 0xd8);
    func_0x000108950ac8(lVar2 + 200);
    FUN_108955ecc(lVar2 + 0xb8);
    func_0x000108955ef0(lVar2 + 0xa8);
    func_0x000104c04a68(lVar2 + 0x98);
    param_1 = lVar2 + 0x70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010895f5f4(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_10895cecc;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = lVar2;
  }
  return lVar2;
}



/* Entry: 10895cee8; end: 10895cefb;  */

void FUN_10895cee8(void)

{
  FUN_10895ce14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895cefc; end: 10895cf13;  */

void FUN_10895cefc(long param_1)

{
  FUN_10895ce14(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10895cf14; end: 10895d14b;  */

void FUN_10895cf14(undefined1 *param_1,long param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar10;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined1 *extraout_x8_09;
  undefined1 *puVar11;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  long lVar12;
  long *plVar13;
  undefined8 uStack_2f8;
  undefined8 uStack_298;
  undefined1 uStack_261;
  undefined1 auStack_260 [48];
  undefined1 auStack_230 [88];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 *puStack_198;
  undefined1 *apuStack_190 [6];
  undefined1 auStack_160 [88];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  lVar9 = param_2;
  func_0x00010895f66c();
  *(undefined1 *)(lVar9 + 0x138) = 1;
  uStack_68 = 0x10895f4cc;
  ppuStack_60 = &PTR_DAT_110a9ee38;
  plVar13 = *(long **)(lVar9 + 0x98);
  lStack_58 = lVar9;
  uStack_38 = extraout_x8;
  func_0x00010bd43838(&uStack_c0,param_2 + 0x30,*(undefined2 *)(lVar9 + 0x4c));
  puVar8 = &uStack_c0;
  (**(code **)(*plVar13 + 0x10))(auStack_90,plVar13,param_2 + 0x20,puVar8,1);
  func_0x000108951ad4(param_2 + 200,auStack_90);
  func_0x000108950ac8(auStack_90);
  puVar6 = (undefined1 *)0x1;
  (**(code **)(**(long **)(param_2 + 200) + 0x18))(param_1);
  uVar2 = param_1[0x28] == '\x01';
  if ((bool)uVar2) {
    lVar12 = *(long *)(param_2 + 0x130);
    func_0x00010895f8c4();
    puVar3 = &uStack_c1;
    func_0x00010895f75c((&PTR_FUN_110a9eb08)[extraout_x8_00]);
    func_0x00010895f8e4();
    lVar9 = extraout_x8_01;
    lVar10 = extraout_x8_01;
    do {
      while (lVar9 != 0) {
        func_0x00010895f56c(*(undefined8 *)(lVar12 + 0x70));
        func_0x00010895f784(*(undefined8 *)((long)plVar13 + extraout_x8_02));
        func_0x00010895f958();
        lVar9 = *(long *)(lVar12 + 0x90);
      }
      bVar1 = lVar10 != 0;
      lVar10 = 0;
    } while (bVar1);
    func_0x00010895f8d4();
    if ((bool)uVar2) {
      func_0x00010895f940();
      func_0x00010895f534();
      func_0x00010895f934();
      func_0x00010895f7a8();
    }
  }
  else {
    func_0x000104c05024(param_1);
    (**(code **)(**(long **)(param_2 + 200) + 0x20))(&uStack_c0);
    *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_b4,uStack_b8);
    *(undefined8 *)(param_2 + 0x50) = uStack_c0;
    *(undefined8 *)(param_2 + 100) = uStack_ac;
    *(ulong *)(param_2 + 0x5c) = CONCAT44(uStack_b0,uStack_b4);
    lVar12 = *(long *)(param_2 + 0x130);
    func_0x00010895f8c4(1);
    puVar3 = &uStack_c1;
    func_0x00010895f75c((&PTR_FUN_110a9eab8)[extraout_x8_03]);
    func_0x00010895f8e4();
    lVar9 = extraout_x8_04;
    lVar10 = extraout_x8_04;
    do {
      while (lVar9 != 0) {
        func_0x00010895f56c(*(undefined8 *)(lVar12 + 0x70));
        func_0x00010895f784(*(undefined8 *)((long)plVar13 + extraout_x8_05));
        func_0x00010895f958();
        lVar9 = *(long *)(lVar12 + 0x90);
      }
      bVar1 = lVar10 != 0;
      lVar10 = 0;
    } while (bVar1);
    func_0x00010895f8d4();
    if ((bool)uVar2) {
      func_0x00010895f940();
      func_0x00010895f534();
      func_0x00010895f934();
      func_0x00010895f7a8();
    }
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  __Unwind_Resume(puVar3);
  func_0x000104bd46a0(puVar3);
  pcStack_d8 = FUN_10895d14c;
  uStack_100 = 0;
  plStack_f8 = plVar13;
  puStack_f0 = puVar3;
  puStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010895f66c();
  func_0x00010895f690();
  puStack_198 = puVar6;
  func_0x00010895f744();
  ppuVar4 = &puStack_198;
  func_0x00010895f63c((&PTR_FUN_110a9ec98)[extraout_x8_06]);
  func_0x00010895f6e8();
  lVar9 = extraout_x8_07;
  lVar10 = extraout_x8_07;
  do {
    while (lVar12 = lVar10, lVar9 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar10 = lVar12;
      lVar9 = *(long *)(param_1 + 0x90);
    }
    lVar10 = 0;
  } while (lVar12 != 0);
  func_0x00010895f6d8();
  if ((bool)uVar2) {
    ppuVar4 = apuStack_190;
    func_0x00010895f7d0();
    func_0x00010895f534();
    puVar6 = auStack_160;
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_108);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  pcStack_1a8 = FUN_10895d218;
  uStack_1d0 = 0;
  lStack_1c8 = lVar12;
  puStack_1c0 = puVar3;
  ppuStack_1b8 = ppuVar4;
  ppuStack_1b0 = &puStack_e0;
  func_0x00010895f66c();
  func_0x00010895f690();
  func_0x00010895f744();
  puVar3 = &uStack_261;
  func_0x00010895f63c((&PTR_FUN_110a9ed10)[extraout_x8_08]);
  func_0x00010895f6e8();
  puVar11 = extraout_x8_09;
  puVar7 = extraout_x8_09;
  do {
    while (puVar11 != (undefined1 *)0x0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      puVar11 = ppuVar4[0x12];
    }
    bVar1 = puVar7 != (undefined1 *)0x0;
    puVar7 = (undefined1 *)0x0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)uVar2) {
    puVar3 = auStack_260;
    func_0x00010895f7d0();
    func_0x00010895f534();
    puVar6 = auStack_230;
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_1d8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  puVar11 = puVar3;
  puVar7 = puVar6;
  func_0x00010895f588();
  plVar13 = *(long **)(puVar11 + 0x120);
  if (plVar13 != (long *)0x0) {
    puVar7 = puVar6;
    (**(code **)(*plVar13 + 0x18))();
    uVar2 = (int)plVar13 == 1;
    if ((bool)uVar2) goto LAB_10895d334;
  }
  plVar13 = *(long **)(puVar3 + 0xe0);
  if (plVar13 != (long *)0x0) {
    (**(code **)*plVar13)();
    puVar7 = puVar6;
  }
LAB_10895d334:
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_298);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010895f73c();
    func_0x00010895f7c8();
    plVar5 = plVar13;
    puVar6 = puVar7;
    func_0x00010895f588();
    if (plVar5[0x1c] != 0) {
      func_0x00010895f97c();
      puVar6 = puVar7;
      (*extraout_x8_10)();
    }
    plVar5 = (long *)plVar13[0x24];
    if (plVar5 != (long *)0x0) {
      puVar6 = (undefined1 *)plVar13[0x11];
      puVar8 = (undefined8 *)(puVar7 + 8);
      FUN_10895d44c(plVar5,puVar6);
      uVar2 = puVar7[0x3c] == '\x01';
      if ((bool)uVar2) {
        func_0x00010895f85c(plVar13[0x24],*(undefined4 *)(puVar7 + 0x30),plVar13[0x11]);
        (*extraout_x8_11)();
        func_0x00010895f85c(plVar13[0x24],*(undefined4 *)(puVar7 + 0x34),plVar13[0x11]);
        (*extraout_x8_12)();
        plVar5 = (long *)plVar13[0x24];
        puVar6 = (undefined1 *)(ulong)*(uint *)(puVar7 + 0x34);
        puVar8 = (undefined8 *)plVar13[0x11];
        func_0x00010895f85c(plVar5,puVar6);
        (*extraout_x8_13)();
      }
    }
    func_0x00010895f754();
    func_0x00010895f5f4(uStack_2f8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x00010895f73c();
      func_0x00010895f7c8();
      puVar8 = puVar8 + 2;
      while (puVar8 = (undefined8 *)*puVar8, puVar8 != (undefined8 *)0x0) {
        (**(code **)(*plVar5 + 0x28))
                  (plVar5,*(undefined4 *)((long)puVar8 + 0x14),puVar6,*(undefined4 *)(puVar8 + 2));
      }
      return;
    }
  }
  return;
}



/* Entry: 10895d14c; end: 10895d217;  */

void FUN_10895d14c(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 **ppuVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined1 *puVar9;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  long unaff_x19;
  undefined8 *puVar10;
  undefined8 uStack_228;
  undefined8 uStack_1c8;
  undefined1 uStack_191;
  undefined1 auStack_190 [48];
  undefined1 auStack_160 [88];
  undefined8 uStack_108;
  undefined1 *puStack_c8;
  undefined1 *apuStack_c0 [6];
  undefined1 auStack_90 [88];
  undefined8 uStack_38;
  
  func_0x00010895f66c();
  func_0x00010895f690();
  puStack_c8 = param_2;
  func_0x00010895f744();
  ppuVar2 = &puStack_c8;
  func_0x00010895f63c((&PTR_FUN_110a9ec98)[extraout_x8]);
  func_0x00010895f6e8();
  lVar8 = extraout_x8_00;
  lVar7 = extraout_x8_00;
  do {
    while (lVar8 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar8 = *(long *)(unaff_x19 + 0x90);
    }
    bVar1 = lVar7 != 0;
    lVar7 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    ppuVar2 = apuStack_c0;
    func_0x00010895f7d0();
    func_0x00010895f534();
    param_2 = auStack_90;
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  func_0x00010895f66c();
  func_0x00010895f690();
  func_0x00010895f744();
  puVar6 = &uStack_191;
  func_0x00010895f63c((&PTR_FUN_110a9ed10)[extraout_x8_01]);
  func_0x00010895f6e8();
  puVar9 = extraout_x8_02;
  puVar5 = extraout_x8_02;
  do {
    while (puVar9 != (undefined1 *)0x0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      puVar9 = ppuVar2[0x12];
    }
    bVar1 = puVar5 != (undefined1 *)0x0;
    puVar5 = (undefined1 *)0x0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    puVar6 = auStack_190;
    func_0x00010895f7d0();
    func_0x00010895f534();
    param_2 = auStack_160;
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  puVar9 = puVar6;
  puVar5 = param_2;
  func_0x00010895f588();
  plVar3 = *(long **)(puVar9 + 0x120);
  if (plVar3 != (long *)0x0) {
    puVar5 = param_2;
    (**(code **)(*plVar3 + 0x18))();
    in_ZR = (int)plVar3 == 1;
    if ((bool)in_ZR) goto LAB_10895d334;
  }
  plVar3 = *(long **)(puVar6 + 0xe0);
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
    puVar5 = param_2;
  }
LAB_10895d334:
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_1c8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010895f73c();
    func_0x00010895f7c8();
    plVar4 = plVar3;
    puVar6 = puVar5;
    func_0x00010895f588();
    if (plVar4[0x1c] != 0) {
      func_0x00010895f97c();
      puVar6 = puVar5;
      (*extraout_x8_03)();
    }
    plVar4 = (long *)plVar3[0x24];
    if (plVar4 != (long *)0x0) {
      puVar6 = (undefined1 *)plVar3[0x11];
      param_3 = puVar5 + 8;
      FUN_10895d44c(plVar4,puVar6);
      in_ZR = puVar5[0x3c] == '\x01';
      if ((bool)in_ZR) {
        func_0x00010895f85c(plVar3[0x24],*(undefined4 *)(puVar5 + 0x30),plVar3[0x11]);
        (*extraout_x8_04)();
        func_0x00010895f85c(plVar3[0x24],*(undefined4 *)(puVar5 + 0x34),plVar3[0x11]);
        (*extraout_x8_05)();
        plVar4 = (long *)plVar3[0x24];
        puVar6 = (undefined1 *)(ulong)*(uint *)(puVar5 + 0x34);
        param_3 = (undefined1 *)plVar3[0x11];
        func_0x00010895f85c(plVar4,puVar6);
        (*extraout_x8_06)();
      }
    }
    func_0x00010895f754();
    func_0x00010895f5f4(uStack_228);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010895f73c();
      func_0x00010895f7c8();
      puVar10 = (undefined8 *)(param_3 + 0x10);
      while (puVar10 = (undefined8 *)*puVar10, puVar10 != (undefined8 *)0x0) {
        (**(code **)(*plVar4 + 0x28))
                  (plVar4,*(undefined4 *)((long)puVar10 + 0x14),puVar6,*(undefined4 *)(puVar10 + 2))
        ;
      }
      return;
    }
  }
  return;
}



/* Entry: 10895d218; end: 10895d2df;  */

void FUN_10895d218(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long unaff_x19;
  undefined8 *puVar9;
  undefined8 uStack_158;
  undefined8 uStack_f8;
  undefined1 uStack_c1;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [88];
  undefined8 uStack_38;
  
  func_0x00010895f66c();
  func_0x00010895f690();
  func_0x00010895f744();
  puVar6 = &uStack_c1;
  func_0x00010895f63c((&PTR_FUN_110a9ed10)[extraout_x8]);
  func_0x00010895f6e8();
  lVar8 = extraout_x8_00;
  lVar7 = extraout_x8_00;
  do {
    while (lVar8 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar8 = *(long *)(unaff_x19 + 0x90);
    }
    bVar1 = lVar7 != 0;
    lVar7 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    puVar6 = auStack_c0;
    func_0x00010895f7d0();
    func_0x00010895f534();
    param_2 = auStack_90;
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  puVar2 = puVar6;
  puVar5 = param_2;
  func_0x00010895f588();
  plVar3 = *(long **)(puVar2 + 0x120);
  if (plVar3 != (long *)0x0) {
    puVar5 = param_2;
    (**(code **)(*plVar3 + 0x18))();
    in_ZR = (int)plVar3 == 1;
    if ((bool)in_ZR) goto LAB_10895d334;
  }
  plVar3 = *(long **)(puVar6 + 0xe0);
  if (plVar3 != (long *)0x0) {
    (**(code **)*plVar3)();
    puVar5 = param_2;
  }
LAB_10895d334:
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_f8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010895f73c();
    func_0x00010895f7c8();
    plVar4 = plVar3;
    puVar6 = puVar5;
    func_0x00010895f588();
    if (plVar4[0x1c] != 0) {
      func_0x00010895f97c();
      puVar6 = puVar5;
      (*extraout_x8_01)();
    }
    plVar4 = (long *)plVar3[0x24];
    if (plVar4 != (long *)0x0) {
      puVar6 = (undefined1 *)plVar3[0x11];
      param_3 = puVar5 + 8;
      FUN_10895d44c(plVar4,puVar6);
      in_ZR = puVar5[0x3c] == '\x01';
      if ((bool)in_ZR) {
        func_0x00010895f85c(plVar3[0x24],*(undefined4 *)(puVar5 + 0x30),plVar3[0x11]);
        (*extraout_x8_02)();
        func_0x00010895f85c(plVar3[0x24],*(undefined4 *)(puVar5 + 0x34),plVar3[0x11]);
        (*extraout_x8_03)();
        plVar4 = (long *)plVar3[0x24];
        puVar6 = (undefined1 *)(ulong)*(uint *)(puVar5 + 0x34);
        param_3 = (undefined1 *)plVar3[0x11];
        func_0x00010895f85c(plVar4,puVar6);
        (*extraout_x8_04)();
      }
    }
    func_0x00010895f754();
    func_0x00010895f5f4(uStack_158);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010895f73c();
      func_0x00010895f7c8();
      puVar9 = (undefined8 *)(param_3 + 0x10);
      while (puVar9 = (undefined8 *)*puVar9, puVar9 != (undefined8 *)0x0) {
        (**(code **)(*plVar4 + 0x28))
                  (plVar4,*(undefined4 *)((long)puVar9 + 0x14),puVar6,*(undefined4 *)(puVar9 + 2));
      }
      return;
    }
  }
  return;
}



/* Entry: 10895d2e0; end: 10895d373;  */

void FUN_10895d2e0(long param_1,ulong param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 uStack_88;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  uVar4 = param_2;
  func_0x00010895f588();
  plVar2 = *(long **)(lVar1 + 0x120);
  if (plVar2 != (long *)0x0) {
    uVar4 = param_2;
    (**(code **)(*plVar2 + 0x18))();
    in_ZR = (int)plVar2 == 1;
    if ((bool)in_ZR) goto LAB_10895d334;
  }
  plVar2 = *(long **)(param_1 + 0xe0);
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)();
    uVar4 = param_2;
  }
LAB_10895d334:
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010895f73c();
    func_0x00010895f7c8();
    plVar3 = plVar2;
    uVar5 = uVar4;
    func_0x00010895f588();
    if (plVar3[0x1c] != 0) {
      func_0x00010895f97c();
      uVar5 = uVar4;
      (*extraout_x8)();
    }
    plVar3 = (long *)plVar2[0x24];
    if (plVar3 != (long *)0x0) {
      uVar5 = plVar2[0x11];
      param_3 = uVar4 + 8;
      FUN_10895d44c(plVar3,uVar5);
      in_ZR = *(char *)(uVar4 + 0x3c) == '\x01';
      if ((bool)in_ZR) {
        func_0x00010895f85c(plVar2[0x24],*(undefined4 *)(uVar4 + 0x30),plVar2[0x11]);
        (*extraout_x8_00)();
        func_0x00010895f85c(plVar2[0x24],*(undefined4 *)(uVar4 + 0x34),plVar2[0x11]);
        (*extraout_x8_01)();
        plVar3 = (long *)plVar2[0x24];
        uVar5 = (ulong)*(uint *)(uVar4 + 0x34);
        param_3 = plVar2[0x11];
        func_0x00010895f85c(plVar3,uVar5);
        (*extraout_x8_02)();
      }
    }
    func_0x00010895f754();
    func_0x00010895f5f4(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010895f73c();
      func_0x00010895f7c8();
      plVar2 = (long *)(param_3 + 0x10);
      while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))
                  (plVar3,*(undefined4 *)((long)plVar2 + 0x14),uVar5,*(undefined4 *)(plVar2 + 2));
      }
      return;
    }
  }
  return;
}



/* Entry: 10895d374; end: 10895d44b;  */

void FUN_10895d374(long param_1,ulong param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  ulong uVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar4;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  uVar3 = param_2;
  func_0x00010895f588();
  if (*(long *)(lVar1 + 0xe0) != 0) {
    func_0x00010895f97c();
    uVar3 = param_2;
    (*extraout_x8)();
  }
  plVar2 = *(long **)(param_1 + 0x120);
  if (plVar2 != (long *)0x0) {
    uVar3 = *(ulong *)(param_1 + 0x88);
    param_3 = param_2 + 8;
    FUN_10895d44c(plVar2,uVar3);
    in_ZR = *(char *)(param_2 + 0x3c) == '\x01';
    if ((bool)in_ZR) {
      func_0x00010895f85c(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_2 + 0x30),
                          *(undefined8 *)(param_1 + 0x88));
      (*extraout_x8_00)();
      func_0x00010895f85c(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_2 + 0x34),
                          *(undefined8 *)(param_1 + 0x88));
      (*extraout_x8_01)();
      plVar2 = *(long **)(param_1 + 0x120);
      uVar3 = (ulong)*(uint *)(param_2 + 0x34);
      param_3 = *(long *)(param_1 + 0x88);
      func_0x00010895f85c(plVar2,uVar3);
      (*extraout_x8_02)();
    }
  }
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  plVar4 = (long *)(param_3 + 0x10);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))
              (plVar2,*(undefined4 *)((long)plVar4 + 0x14),uVar3,*(undefined4 *)(plVar4 + 2));
  }
  return;
}



/* Entry: 10895d44c; end: 10895d493;  */

void FUN_10895d44c(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(param_3 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))
              (param_1,*(undefined4 *)((long)plVar1 + 0x14),param_2,*(undefined4 *)(plVar1 + 2));
  }
  return;
}



/* Entry: 10895d494; end: 10895d4f7;  */

void FUN_10895d494(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  undefined1 uStack_251;
  undefined1 auStack_250 [136];
  undefined8 uStack_1c8;
  undefined8 uStack_158;
  undefined8 uStack_88;
  undefined8 uStack_28;
  
  func_0x00010895f588();
  plVar2 = *(long **)(param_1 + 0xe0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010895f754();
    func_0x00010895f73c();
    func_0x00010895f588();
    plVar2 = (long *)plVar2[0x1c];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    func_0x00010895f754();
    func_0x00010895f5f4(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010895f754();
      func_0x00010895f73c();
      plVar3 = plVar2;
      func_0x00010895f66c();
      *(undefined1 *)(plVar3 + 0x27) = 1;
      if (plVar3[0x1c] != 0) {
        func_0x00010895f85c();
        (*extraout_x8_00)();
      }
      lVar4 = plVar2[0x24];
      if (lVar4 != 0) {
        FUN_10895d44c(lVar4,param_2,param_3);
      }
      func_0x00010895f754();
      func_0x00010895f5f4(extraout_x8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010895f73c();
      func_0x00010895f7c8();
      func_0x00010895f588();
      plVar2 = *(long **)(lVar4 + 0xe0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))();
      }
      func_0x00010895f754();
      func_0x00010895f5f4(uStack_158);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010895f754();
        func_0x00010895f73c();
        func_0x00010895f66c();
        func_0x00010895f690();
        func_0x00010895f744();
        func_0x00010895f63c((&PTR_DAT_110a9ebd0)[extraout_x8_01],&uStack_251);
        func_0x00010895f6e8();
        lVar4 = extraout_x8_02;
        lVar5 = extraout_x8_02;
        do {
          while (lVar4 != 0) {
            func_0x00010895f50c();
            func_0x00010895f608();
            func_0x00010895f7d8();
            lVar4 = plVar2[0x12];
          }
          bVar1 = lVar5 != 0;
          lVar5 = 0;
        } while (bVar1);
        func_0x00010895f6d8();
        if ((bool)in_ZR) {
          func_0x00010895f7d0(auStack_250);
          func_0x00010895f534();
          func_0x00010895f7e8();
          func_0x00010895f7a8();
        }
        func_0x00010895f7e0();
        func_0x00010895f5f4(uStack_1c8);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00010895f7a8();
        func_0x00010895f7e0();
        func_0x00010895f73c();
        func_0x00010895f7c8();
        return;
      }
    }
  }
  return;
}



/* Entry: 10895d4f8; end: 10895d55b;  */

void FUN_10895d4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  undefined1 uStack_1f1;
  undefined1 auStack_1f0 [136];
  undefined8 uStack_168;
  undefined8 uStack_f8;
  undefined8 uStack_28;
  
  func_0x00010895f588();
  plVar2 = *(long **)(param_1 + 0xe0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010895f754();
    func_0x00010895f73c();
    plVar3 = plVar2;
    func_0x00010895f66c();
    *(undefined1 *)(plVar3 + 0x27) = 1;
    if (plVar3[0x1c] != 0) {
      func_0x00010895f85c();
      (*extraout_x8_00)();
    }
    lVar4 = plVar2[0x24];
    if (lVar4 != 0) {
      FUN_10895d44c(lVar4,param_2,param_3);
    }
    func_0x00010895f754();
    func_0x00010895f5f4(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010895f73c();
    func_0x00010895f7c8();
    func_0x00010895f588();
    plVar2 = *(long **)(lVar4 + 0xe0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
    func_0x00010895f754();
    func_0x00010895f5f4(uStack_f8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010895f754();
      func_0x00010895f73c();
      func_0x00010895f66c();
      func_0x00010895f690();
      func_0x00010895f744();
      func_0x00010895f63c((&PTR_DAT_110a9ebd0)[extraout_x8_01],&uStack_1f1);
      func_0x00010895f6e8();
      lVar4 = extraout_x8_02;
      lVar5 = extraout_x8_02;
      do {
        while (lVar4 != 0) {
          func_0x00010895f50c();
          func_0x00010895f608();
          func_0x00010895f7d8();
          lVar4 = plVar2[0x12];
        }
        bVar1 = lVar5 != 0;
        lVar5 = 0;
      } while (bVar1);
      func_0x00010895f6d8();
      if ((bool)in_ZR) {
        func_0x00010895f7d0(auStack_1f0);
        func_0x00010895f534();
        func_0x00010895f7e8();
        func_0x00010895f7a8();
      }
      func_0x00010895f7e0();
      func_0x00010895f5f4(uStack_168);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010895f7a8();
      func_0x00010895f7e0();
      func_0x00010895f73c();
      func_0x00010895f7c8();
      return;
    }
  }
  return;
}



/* Entry: 10895d55c; end: 10895d60f;  */

void FUN_10895d55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  undefined1 uStack_191;
  undefined1 auStack_190 [136];
  undefined8 uStack_108;
  undefined8 uStack_98;
  
  lVar2 = param_1;
  func_0x00010895f66c();
  *(undefined1 *)(lVar2 + 0x138) = 1;
  if (*(long *)(lVar2 + 0xe0) != 0) {
    func_0x00010895f85c();
    (*extraout_x8_00)();
  }
  lVar2 = *(long *)(param_1 + 0x120);
  if (lVar2 != 0) {
    FUN_10895d44c(lVar2,param_2,param_3);
  }
  func_0x00010895f754();
  func_0x00010895f5f4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  func_0x00010895f588();
  plVar3 = *(long **)(lVar2 + 0xe0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))();
  }
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f754();
  func_0x00010895f73c();
  func_0x00010895f66c();
  func_0x00010895f690();
  func_0x00010895f744();
  func_0x00010895f63c((&PTR_DAT_110a9ebd0)[extraout_x8_01],&uStack_191);
  func_0x00010895f6e8();
  lVar2 = extraout_x8_02;
  lVar4 = extraout_x8_02;
  do {
    while (lVar2 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar2 = plVar3[0x12];
    }
    bVar1 = lVar4 != 0;
    lVar4 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f7d0(auStack_190);
    func_0x00010895f534();
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  return;
}



/* Entry: 10895d610; end: 10895d673;  */

void FUN_10895d610(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lVar4;
  undefined1 uStack_121;
  undefined1 auStack_120 [136];
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  func_0x00010895f588();
  plVar2 = *(long **)(param_1 + 0xe0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  func_0x00010895f754();
  func_0x00010895f5f4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f754();
  func_0x00010895f73c();
  func_0x00010895f66c();
  func_0x00010895f690();
  func_0x00010895f744();
  func_0x00010895f63c((&PTR_DAT_110a9ebd0)[extraout_x8],&uStack_121);
  func_0x00010895f6e8();
  lVar4 = extraout_x8_00;
  lVar3 = extraout_x8_00;
  do {
    while (lVar4 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar4 = plVar2[0x12];
    }
    bVar1 = lVar3 != 0;
    lVar3 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f7d0(auStack_120);
    func_0x00010895f534();
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  return;
}



/* Entry: 10895d674; end: 10895d73b;  */

void FUN_10895d674(void)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined1 uStack_c1;
  undefined1 auStack_c0 [136];
  undefined8 uStack_38;
  
  func_0x00010895f66c();
  func_0x00010895f690();
  func_0x00010895f744();
  func_0x00010895f63c((&PTR_DAT_110a9ebd0)[extraout_x8],&uStack_c1);
  func_0x00010895f6e8();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(unaff_x19 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f7d0(auStack_c0);
    func_0x00010895f534();
    func_0x00010895f7e8();
    func_0x00010895f7a8();
  }
  func_0x00010895f7e0();
  func_0x00010895f5f4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895f7a8();
  func_0x00010895f7e0();
  func_0x00010895f73c();
  func_0x00010895f7c8();
  return;
}



/* Entry: 10895d73c; end: 10895d743;  */

void FUN_10895d73c(void)

{
  return;
}



/* Entry: 10895d744; end: 10895d93f;  */

undefined *** FUN_10895d744(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined ***pppuVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long lVar4;
  long lVar5;
  long unaff_x21;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuStack_100 = &PTR_DAT_110cf6238;
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 1;
  uStack_b0 = 0;
  uStack_a8 = 0;
  pppuVar2 = &ppuStack_100;
  func_0x000107c3034c();
  lVar5 = *(long *)(param_1 + 0x130);
  if (((ulong)pppuVar2 & 1) == 0) {
    func_0x00010b4d12e4(auStack_98,&ppuStack_100);
    func_0x000107c27f54(&uStack_140,&UNK_10f4ed5ce,auStack_98);
    uStack_120 = 0x7e5;
    uStack_110 = uStack_138;
    uStack_118 = uStack_140;
    uStack_108 = uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    ppuStack_128 = &PTR_FUN_110ab4390;
    FUN_10895d940(lVar5,&ppuStack_128);
    func_0x000108b80d84(&ppuStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  }
  else {
    pppuStack_148 = &ppuStack_100;
    func_0x00010895f8c4(1);
    func_0x00010895f75c((&PTR_DAT_110a9ec48)[extraout_x8],&pppuStack_148);
    func_0x00010895f8e4();
    lVar4 = extraout_x8_00;
    lVar3 = extraout_x8_00;
    do {
      while (lVar4 != 0) {
        func_0x00010895f56c(*(undefined8 *)(lVar5 + 0x70));
        func_0x00010895f784(*(undefined8 *)(unaff_x21 + extraout_x8_01));
        func_0x00010895f958();
        lVar4 = *(long *)(lVar5 + 0x90);
      }
      bVar1 = lVar3 != 0;
      lVar3 = 0;
    } while (bVar1);
    func_0x00010895f8d4();
    if ((bool)in_ZR) {
      FUN_10895e12c(auStack_98,lVar5 + 0xa0);
      ppuStack_68 = &PTR_FUN_110ab4390;
      uStack_60 = uStack_90;
      uStack_50 = uStack_80;
      uStack_58 = uStack_88;
      uStack_48 = uStack_78;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      func_0x000104c05024(auStack_98);
      FUN_10895e09c(lVar5,&ppuStack_68);
      func_0x000108b80d84(&ppuStack_68);
    }
  }
  func_0x00010b4fe36c(&ppuStack_100);
  return pppuVar2;
}



/* Entry: 10895d940; end: 10895d95b;  */

void FUN_10895d940(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    func_0x00010895f94c(param_2,param_1,param_1 + 0x18,param_3,param_1 + 0x18);
    func_0x00010895f6e8();
    lVar3 = extraout_x8;
    lVar2 = extraout_x8;
    do {
      while (lVar3 != 0) {
        func_0x00010895f50c();
        func_0x00010895f608();
        func_0x00010895f7d8();
        lVar3 = *(long *)(param_1 + 0x90);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    func_0x00010895f6d8();
    if ((bool)in_ZR) {
      func_0x00010895f794();
      func_0x00010895f5bc();
      func_0x00010895f76c();
      func_0x00010895f7a0();
    }
    return;
  }
  lVar3 = param_1 + 0xa0;
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_108b80d54();
    return;
  }
  func_0x00010895f8f4();
  *(undefined1 *)(lVar3 + 0x28) = 1;
  return;
}



/* Entry: 10895d95c; end: 10895d9db;  */

void FUN_10895d95c(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_89 [89];
  
  lVar4 = *(long *)(param_1 + 0x130);
  func_0x00010895f744(1);
  func_0x00010895f63c((&PTR_FUN_110a9eb58)[extraout_x8],auStack_89);
  func_0x00010895f6e8();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f794();
    func_0x00010895f5bc();
    func_0x00010895f76c();
    func_0x00010895f7a0();
  }
  return;
}



/* Entry: 10895d9dc; end: 10895d9e3;  */

void FUN_10895d9dc(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_89 [89];
  
  lVar4 = *(long *)(param_1 + 0x128);
  func_0x00010895f744(1);
  func_0x00010895f63c((&PTR_FUN_110a9eb58)[extraout_x8],auStack_89);
  func_0x00010895f6e8();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f794();
    func_0x00010895f5bc();
    func_0x00010895f76c();
    func_0x00010895f7a0();
  }
  return;
}



/* Entry: 10895d9e4; end: 10895da9b;  */

void FUN_10895d9e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x000107c27e5c();
  uStack_50 = param_4;
  uStack_48 = uVar1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c2793c(&UNK_10f4ed5f1);
  func_0x000107c3173c(auStack_90);
  FUN_108b80be8(auStack_78,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  FUN_108b80d14(auStack_b8,auStack_78);
  FUN_10895d940(uVar1,auStack_b8);
  func_0x000108b80d84(auStack_b8);
  func_0x00010895f898();
  return;
}



/* Entry: 10895da9c; end: 10895daa3;  */

void FUN_10895da9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x000107c27e5c();
  uStack_50 = param_4;
  uStack_48 = uVar1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c2793c(&UNK_10f4ed5f1);
  func_0x000107c3173c(auStack_90);
  FUN_108b80be8(auStack_78,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  FUN_108b80d14(auStack_b8,auStack_78);
  FUN_10895d940(uVar1,auStack_b8);
  func_0x000108b80d84(auStack_b8);
  func_0x00010895f898();
  return;
}



/* Entry: 10895daa4; end: 10895db23;  */

void FUN_10895daa4(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_89 [89];
  
  lVar4 = *(long *)(param_1 + 0x130);
  func_0x00010895f744(1);
  func_0x00010895f63c((&PTR_FUN_110a9ece8)[extraout_x8],auStack_89);
  func_0x00010895f6e8();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f794();
    func_0x00010895f5bc();
    func_0x00010895f76c();
    func_0x00010895f7a0();
  }
  return;
}



/* Entry: 10895db24; end: 10895db2b;  */

void FUN_10895db24(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_89 [89];
  
  lVar4 = *(long *)(param_1 + 0x128);
  func_0x00010895f744(1);
  func_0x00010895f63c((&PTR_FUN_110a9ece8)[extraout_x8],auStack_89);
  func_0x00010895f6e8();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f794();
    func_0x00010895f5bc();
    func_0x00010895f76c();
    func_0x00010895f7a0();
  }
  return;
}



/* Entry: 10895db2c; end: 10895dc03;  */

void FUN_10895db2c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1 + 0x130);
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_8c = param_5;
  func_0x00010895f744(1);
  func_0x00010895f63c((&PTR_FUN_110a9ec70)[extraout_x8],&uStack_a0);
  func_0x00010895f6e8();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f7d0(auStack_88);
    ppuStack_58 = &PTR_FUN_110ab4390;
    uStack_50 = uStack_80;
    uStack_40 = uStack_70;
    uStack_48 = uStack_78;
    uStack_38 = uStack_68;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x000104c05024(auStack_88);
    func_0x00010895f7e8();
    func_0x00010895f898();
  }
  return;
}



/* Entry: 10895dc04; end: 10895dc0b;  */

void FUN_10895dc04(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1 + 0x118);
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_8c = param_5;
  func_0x00010895f744(1);
  func_0x00010895f63c((&PTR_FUN_110a9ec70)[extraout_x8],&uStack_a0);
  func_0x00010895f6e8();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f7d0(auStack_88);
    ppuStack_58 = &PTR_FUN_110ab4390;
    uStack_50 = uStack_80;
    uStack_40 = uStack_70;
    uStack_48 = uStack_78;
    uStack_38 = uStack_68;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x000104c05024(auStack_88);
    func_0x00010895f7e8();
    func_0x00010895f898();
  }
  return;
}



/* Entry: 10895dc0c; end: 10895dc9b;  */

void FUN_10895dc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x130);
  *(undefined1 *)(lVar4 + 0x98) = 1;
  func_0x00010895f94c(param_2,param_1,lVar4 + 0x18,param_3,lVar4 + 0x18);
  func_0x00010895f6e8();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f794();
    func_0x00010895f5bc();
    func_0x00010895f76c();
    func_0x00010895f7a0();
  }
  return;
}



/* Entry: 10895dc9c; end: 10895dca3;  */

void FUN_10895dc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x118);
  *(undefined1 *)(lVar4 + 0x98) = 1;
  func_0x00010895f94c(param_2,param_1 + -0x18,lVar4 + 0x18,param_3,lVar4 + 0x18);
  func_0x00010895f6e8();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f794();
    func_0x00010895f5bc();
    func_0x00010895f76c();
    func_0x00010895f7a0();
  }
  return;
}



/* Entry: 10895dca4; end: 10895dd5b;  */

void FUN_10895dca4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 1;
  uVar1 = *param_2;
  FUN_108b821ec(uVar1,param_2[1]);
  if ((int)uVar1 == 2) {
    plVar2 = *(long **)(param_1 + 0x120);
    if (((plVar2 == (long *)0x0) ||
        ((**(code **)(*plVar2 + 0x20))(plVar2,param_2), (int)plVar2 != 1)) &&
       (plVar2 = *(long **)(param_1 + 0xd8), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010895dd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0x50,param_3,*param_2,param_2[1]);
      return;
    }
  }
  else if (((int)uVar1 == 1) && (plVar2 = *(long **)(param_1 + 0xe0), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010895dd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
    return;
  }
  return;
}



/* Entry: 10895dd5c; end: 10895dd63;  */

void FUN_10895dd5c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  uVar1 = *param_2;
  FUN_108b821ec(uVar1,param_2[1]);
  if ((int)uVar1 == 2) {
    plVar2 = *(long **)(param_1 + 0x100);
    if (((plVar2 == (long *)0x0) ||
        ((**(code **)(*plVar2 + 0x20))(plVar2,param_2), (int)plVar2 != 1)) &&
       (plVar2 = *(long **)(param_1 + 0xb8), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010895dd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0x30,param_3,*param_2,param_2[1]);
      return;
    }
  }
  else if (((int)uVar1 == 1) && (plVar2 = *(long **)(param_1 + 0xc0), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010895dd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
    return;
  }
  return;
}



/* Entry: 10895dd64; end: 10895de33;  */

void FUN_10895dd64(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  long lStack_30;
  code *pcStack_28;
  
  pcStack_28 = FUN_10895f2ec;
  lStack_30 = param_2;
  func_0x000107c2793c(&UNK_10f4ed611);
  func_0x000107c3173c(auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uVar1 = *(undefined4 *)(param_2 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_88,auStack_48);
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  uStack_50 = uStack_78;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_70 = &PTR_FUN_110ab4390;
  uStack_68 = uVar1;
  FUN_10895d940(uVar2,&ppuStack_70);
  func_0x000108b80d84(&ppuStack_70);
  func_0x00010895f8bc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10895de34; end: 10895de3b;  */

void FUN_10895de34(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  long lStack_30;
  code *pcStack_28;
  
  pcStack_28 = FUN_10895f2ec;
  lStack_30 = param_2;
  func_0x000107c2793c(&UNK_10f4ed611);
  func_0x000107c3173c(auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  uVar1 = *(undefined4 *)(param_2 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_88,auStack_48);
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  uStack_50 = uStack_78;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_70 = &PTR_FUN_110ab4390;
  uStack_68 = uVar1;
  FUN_10895d940(uVar2,&ppuStack_70);
  func_0x000108b80d84(&ppuStack_70);
  func_0x00010895f8bc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10895de3c; end: 10895df0f;  */

void FUN_10895de3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_44 [28];
  long lStack_28;
  
  func_0x000107c28144(param_1 + 0xf0);
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  func_0x00010bd43838(auStack_44,param_1 + 0x30,*(undefined2 *)(param_1 + 0x4c));
  (**(code **)*puVar3)
            (&lStack_28,puVar3,param_1 + 8,param_1 + 0x10,param_1 + 200,param_1 + 0x70,auStack_44);
  lVar1 = lStack_28;
  lStack_28 = 0;
  lVar2 = *(long *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar1;
  if (lVar2 != 0) {
    func_0x00010895f7f8();
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x00010895f7f8();
    }
  }
  return;
}



/* Entry: 10895df10; end: 10895dfd7;  */

void FUN_10895df10(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  pppuVar3 = &ppuStack_70;
  puVar2 = param_1;
  FUN_1089a3c0c();
  uVar1 = 0x20005;
  if (*(char *)(param_1 + 0x12) != '\0') {
    uVar1 = 0x20006;
  }
  lStack_60 = 0;
  lStack_58 = 0;
  ppuStack_70 = &PTR_DAT_1107eac58;
  lStack_68 = 0;
  lStack_50 = CONCAT44(lStack_50._4_4_,0x41);
  FUN_10895dfd8(&ppuStack_70,uVar1);
  puVar4 = param_1 + 0x21;
  FUN_10895e074(puVar4);
  (**(code **)(*(long *)*puVar2 + 8))((long *)*puVar2,pppuVar3,puVar4);
  func_0x000104c03ee4(&ppuStack_70);
  plVar5 = (long *)param_1[0x1c];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    lStack_48 = plVar5[5];
    lStack_50 = plVar5[4];
    lStack_38 = plVar5[7];
    lStack_40 = plVar5[6];
    lStack_68 = plVar5[1];
    ppuStack_70 = (undefined **)*plVar5;
    lStack_58 = plVar5[3];
    lStack_60 = plVar5[2];
    FUN_1089645dc(&ppuStack_70);
  }
  return;
}



/* Entry: 10895dfd8; end: 10895e073;  */

undefined8 FUN_10895dfd8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar3 < 0xf) {
    puVar2 = (&PTR_DAT_113289a60)[uVar3];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2d) {
    puVar2 = (&PTR_DAT_113289ad8)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  FUN_108949f78(param_1,auStack_38,puVar2);
  func_0x00010895f8bc();
  return param_1;
}



/* Entry: 10895e074; end: 10895e09b;  */

long FUN_10895e074(long param_1)

{
  func_0x000107c28148();
  return (long)((double)param_1 / 1000000000.0);
}



/* Entry: 10895e09c; end: 10895e12b;  */

void FUN_10895e09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x98) = 1;
  func_0x00010895f94c(param_2,param_1,param_1 + 0x18,param_3,param_1 + 0x18);
  func_0x00010895f6e8();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010895f50c();
      func_0x00010895f608();
      func_0x00010895f7d8();
      lVar3 = *(long *)(param_1 + 0x90);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x00010895f6d8();
  if ((bool)in_ZR) {
    func_0x00010895f794();
    func_0x00010895f5bc();
    func_0x00010895f76c();
    func_0x00010895f7a0();
  }
  return;
}



/* Entry: 10895e12c; end: 10895e15f;  */

void FUN_10895e12c(undefined8 param_1,long param_2)

{
  func_0x00010893994c();
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000108b80d84(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



/* Entry: 10895e160; end: 10895e163;  */

undefined8 FUN_10895e160(void)

{
  return 0;
}



/* Entry: 10895e164; end: 10895e23b;  */

undefined8 FUN_10895e164(void)

{
  func_0x00010895f64c();
  func_0x00010895f6bc();
  func_0x00010895f618();
  func_0x00010895e1dc();
  return 1;
}



/* Entry: 10895e23c; end: 10895e23f;  */

undefined8 FUN_10895e23c(void)

{
  return 0;
}



/* Entry: 10895e240; end: 10895e257;  */

undefined8 FUN_10895e240(void)

{
  func_0x00010895f7f0();
  return 1;
}



/* Entry: 10895e258; end: 10895e25b;  */

undefined8 FUN_10895e258(void)

{
  return 0;
}



/* Entry: 10895e25c; end: 10895e29f;  */

undefined8 FUN_10895e25c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  func_0x00010895decc(*param_3);
  plVar1 = *(long **)(*param_3 + 0x28);
  (**(code **)(*plVar1 + 0x18))(plVar1,*param_3 + 0x30,*param_1);
  return 1;
}



/* Entry: 10895e2a0; end: 10895e2a3;  */

undefined8 FUN_10895e2a0(void)

{
  return 1;
}



/* Entry: 10895e2a4; end: 10895e2bb;  */

undefined8 FUN_10895e2a4(void)

{
  func_0x00010895f854();
  return 1;
}


