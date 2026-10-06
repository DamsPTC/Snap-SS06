/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073de034; end: 1073de03f;  */

void FUN_1073de034(undefined8 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x0001073e1650(*param_1,param_1[1]);
  FUN_1073dd4c4();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 0;
  return;
}



/* Entry: 1073de040; end: 1073de06b;  */

void FUN_1073de040(void)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x0001073e1650();
  FUN_1073dd4c4();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 0;
  return;
}



/* Entry: 1073de06c; end: 1073de073;  */

void FUN_1073de06c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 1) {
    func_0x0001072856b0(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  func_0x0001073e2208();
  FUN_1073de0a8();
  return;
}



/* Entry: 1073de074; end: 1073de0a7;  */

void FUN_1073de074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    func_0x0001072856b0(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  func_0x0001073e2208();
  FUN_1073de0a8();
  return;
}



/* Entry: 1073de0a8; end: 1073de0b3;  */

void FUN_1073de0a8(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001073e1650(*param_1,param_1[1]);
  FUN_1073dd4c4();
  func_0x0001073e18e4();
  func_0x00010727da4c();
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1073de0b4; end: 1073de0df;  */

void FUN_1073de0b4(void)

{
  long unaff_x20;
  
  func_0x0001073e1650();
  FUN_1073dd4c4();
  func_0x0001073e18e4();
  func_0x00010727da4c();
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1073de0e0; end: 1073de103;  */

undefined8 FUN_1073de0e0(undefined8 param_1)

{
  FUN_1073de104();
  return param_1;
}



/* Entry: 1073de104; end: 1073de157;  */

void FUN_1073de104(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x68) != -1 || *(int *)(param_2 + 0x68) != -1) {
    if (*(int *)(param_2 + 0x68) == -1) {
      if (*(uint *)(param_1 + 0x68) != 0xffffffff) {
        func_0x0001073e161c((&PTR_FUN_1109ac250)[*(uint *)(param_1 + 0x68)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
      return;
    }
    func_0x0001073e20c0();
  }
  return;
}



/* Entry: 1073de158; end: 1073de167;  */

void FUN_1073de158(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x68) != 0) {
    func_0x0001073e2208();
    FUN_1073de198();
    return;
  }
  func_0x000104c342bc(param_2,param_3);
  func_0x000104c2f698();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 1073de168; end: 1073de197;  */

void FUN_1073de168(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    func_0x0001073e2208();
    FUN_1073de198();
    return;
  }
  func_0x000104c342bc(param_2,param_3);
  func_0x000104c2f698();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 1073de198; end: 1073de1a3;  */

void FUN_1073de198(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001073e1650(*param_1,param_1[1]);
  FUN_1073dd470();
  func_0x0001073e18e4();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 1073de1a4; end: 1073de1cb;  */

void FUN_1073de1a4(void)

{
  long unaff_x20;
  
  func_0x0001073e1650();
  FUN_1073dd470();
  func_0x0001073e18e4();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 1073de1cc; end: 1073de1d3;  */

void FUN_1073de1cc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x68) == 1) {
    func_0x00010738a440(param_2,param_3);
    func_0x00010727e15c();
    func_0x0001072e948c(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  func_0x0001073e2208();
  FUN_1073de208();
  return;
}



/* Entry: 1073de1d4; end: 1073de207;  */

void FUN_1073de1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x68) == 1) {
    func_0x00010738a440(param_2,param_3);
    func_0x00010727e15c();
    func_0x0001072e948c(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  func_0x0001073e2208();
  FUN_1073de208();
  return;
}



/* Entry: 1073de208; end: 1073de213;  */

void FUN_1073de208(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001073e1650(*param_1,param_1[1]);
  FUN_1073dd470();
  func_0x0001073e18e4();
  FUN_107324574();
  *(undefined4 *)(unaff_x20 + 0x68) = 1;
  return;
}



/* Entry: 1073de214; end: 1073de27b;  */

void FUN_1073de214(void)

{
  long unaff_x20;
  
  func_0x0001073e1650();
  FUN_1073dd470();
  func_0x0001073e18e4();
  FUN_107324574();
  *(undefined4 *)(unaff_x20 + 0x68) = 1;
  return;
}



/* Entry: 1073de27c; end: 1073de2af;  */

void FUN_1073de27c(void)

{
  func_0x0001073de294();
  return;
}



/* Entry: 1073de2b0; end: 1073de4d3;  */

undefined1  [16] FUN_1073de2b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_x19;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  func_0x0001073e21dc();
  uVar6 = param_1 + 0x18;
  func_0x00010726364c();
  uVar8 = unaff_x19[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x26 = uVar9 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x26 = uVar6 - uVar3 * uVar8;
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x26 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1073de370;
          uVar3 = plVar7[1];
          if (uVar3 != uVar6) break;
          plVar5 = plVar7 + 2;
          func_0x000104c32db4();
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1073de4a4;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar3 = uVar3 & uVar9;
        }
        else if (uVar8 <= uVar3) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar3 / uVar8;
          }
          uVar3 = uVar3 - uVar1 * uVar8;
        }
      } while (uVar3 == unaff_x26);
    }
  }
LAB_1073de370:
  FUN_1073de4d4(aplStack_78);
  if ((uVar8 == 0) || (*(float *)(unaff_x19 + 4) * (float)uVar8 < (float)(unaff_x19[3] + 1))) {
    FUN_1073de554();
    uVar8 = unaff_x19[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x26 = uVar8 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        unaff_x26 = uVar6 - uVar9 * uVar8;
      }
    }
  }
  plVar7 = aplStack_78[0];
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = unaff_x19 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar4 + unaff_x26 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      uVar6 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar9 * uVar8;
      }
      *(long **)(lVar4 + uVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  FUN_1073de74c(aplStack_78);
  uVar2 = 1;
LAB_1073de4a4:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1073de4d4; end: 1073de52f;  */

void FUN_1073de4d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0001073e19c0();
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *extraout_x8 = puVar1;
  extraout_x8[1] = param_1 + 0x10;
  extraout_x8[2] = 1;
  puVar2 = puVar1 + 2;
  *puVar1 = 0;
  puVar1[1] = unaff_x21;
  func_0x000104c2fe00();
  *(undefined1 *)(puVar2 + 7) = *unaff_x19;
  return;
}



/* Entry: 1073de530; end: 1073de553;  */

void FUN_1073de530(long param_1,undefined8 param_2,undefined1 *param_3)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = *param_3;
  return;
}



/* Entry: 1073de554; end: 1073de61b;  */

void FUN_1073de554(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
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
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_1073de59c;
    }
    return;
  }
LAB_1073de59c:
  if (param_2 == 0) {
    FUN_1073de718(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_1073de730(plVar2);
    FUN_1073de718(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1073de61c; end: 1073de717;  */

void FUN_1073de61c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1073de718(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1073de730(plVar3);
    FUN_1073de718(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1073de718; end: 1073de72f;  */

void FUN_1073de718(long *param_1,long param_2)

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



/* Entry: 1073de730; end: 1073de74b;  */

long FUN_1073de730(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_1073de770();
  return param_1;
}



/* Entry: 1073de74c; end: 1073de76f;  */

undefined8 FUN_1073de74c(undefined8 param_1)

{
  FUN_1073de770(param_1,0);
  return param_1;
}



/* Entry: 1073de770; end: 1073de787;  */

void FUN_1073de770(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001073e1e60(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000104c2f714(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073de788; end: 1073de7bf;  */

void FUN_1073de788(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001073e1e60();
  if ((bool)in_ZR) {
    func_0x000104c2f714(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073de7c0; end: 1073de7db;  */

void FUN_1073de7c0(void)

{
  func_0x0001073e1ee8();
  FUN_1073de7dc();
  return;
}



/* Entry: 1073de7dc; end: 1073de83b;  */

undefined1  [16] FUN_1073de7dc(long *param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long alStack_60 [4];
  
  func_0x0001073e1e88();
  FUN_1073de83c();
  lVar2 = *param_1;
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x0001073e1e70();
    func_0x0001073de8a0();
    func_0x0001073e20fc();
    FUN_1073de8d8();
    lVar2 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x0001073de940(alStack_60);
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = lVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1073de83c; end: 1073de8d7;  */

long * FUN_1073de83c(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x0001073e1650();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x0001073e1c94(), (int)param_1 == 0) {
      func_0x0001073e1f0c();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_1073de890;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_1073de890:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 1073de8d8; end: 1073de963;  */

void FUN_1073de8d8(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001073e1d30();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0001073e20cc();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 1073de964; end: 1073de97b;  */

void FUN_1073de964(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001073e1e60(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001073de9b4(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073de97c; end: 1073de9d7;  */

void FUN_1073de97c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001073e1e60();
  if ((bool)in_ZR) {
    func_0x0001073de9b4(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073de9d8; end: 1073de9f7;  */

void FUN_1073de9d8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010726b264();
  }
  return;
}



/* Entry: 1073de9f8; end: 1073dea8b;  */

long FUN_1073de9f8(long param_1)

{
  long unaff_x19;
  int unaff_w20;
  
  func_0x0001073e17d0();
  func_0x0001073dea44();
  if ((unaff_x19 + 8 == param_1) || (func_0x000104c2fc44(), unaff_w20 != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 1073dea8c; end: 1073deb4f;  */

undefined1 * FUN_1073dea8c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_1073deb50(param_1 + 8,param_2 + 8);
  FUN_1073dec58(param_1 + 0x50,param_2 + 0x50);
  FUN_1073ded34(param_1 + 0x90,param_2 + 0x90);
  FUN_1073deb50(param_1 + 200,param_2 + 200);
  FUN_1073dedb8(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  param_1[0x1e8] = param_2[0x1e8];
  return param_1;
}



/* Entry: 1073deb50; end: 1073deb7f;  */

void FUN_1073deb50(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001073e15fc();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_1073deb80();
  return;
}



/* Entry: 1073deb80; end: 1073debc3;  */

void FUN_1073deb80(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  FUN_1073debc4();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != -1) {
    func_0x0001073e15bc(&PTR_DAT_1109ac320);
    *(int *)(unaff_x19 + 0x40) = iVar1;
  }
  return;
}



/* Entry: 1073debc4; end: 1073dec07;  */

void FUN_1073debc4(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x0001073e161c((&PTR_FUN_1109ac310)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 1073dec08; end: 1073dec2b;  */

void FUN_1073dec08(void)

{
  return;
}



/* Entry: 1073dec2c; end: 1073dec57;  */

void FUN_1073dec2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010727d6bc();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1073dec58; end: 1073dec87;  */

void FUN_1073dec58(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001073e15fc();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_1073dec88();
  return;
}



/* Entry: 1073dec88; end: 1073deccb;  */

void FUN_1073dec88(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  FUN_1073deccc();
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 != -1) {
    func_0x0001073e15bc(&PTR_DAT_1109ac340);
    *(int *)(unaff_x19 + 0x38) = iVar1;
  }
  return;
}



/* Entry: 1073deccc; end: 1073ded0f;  */

void FUN_1073deccc(long param_1)

{
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x0001073e161c((&PTR_FUN_1109ac330)[*(uint *)(param_1 + 0x38)]);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 1073ded10; end: 1073ded33;  */

void FUN_1073ded10(void)

{
  return;
}



/* Entry: 1073ded34; end: 1073ded63;  */

void FUN_1073ded34(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001073e15fc();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_1073ded64();
  return;
}



/* Entry: 1073ded64; end: 1073deda7;  */

void FUN_1073ded64(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  FUN_1073dd4c4();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x0001073e15bc(&PTR_FUN_1109ac350);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 1073deda8; end: 1073dedb7;  */

void FUN_1073deda8(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073dedb8; end: 1073dede7;  */

void FUN_1073dedb8(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001073e15fc();
  *(undefined4 *)(param_1 + 0xc0) = extraout_w8;
  FUN_1073dede8();
  return;
}



/* Entry: 1073dede8; end: 1073dee2b;  */

void FUN_1073dede8(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  FUN_1073dee2c();
  iVar1 = *(int *)(unaff_x20 + 0xc0);
  if (iVar1 != -1) {
    func_0x0001073e15bc(&PTR_DAT_1109ac370);
    *(int *)(unaff_x19 + 0xc0) = iVar1;
  }
  return;
}



/* Entry: 1073dee2c; end: 1073dee6f;  */

void FUN_1073dee2c(long param_1)

{
  if (*(uint *)(param_1 + 0xc0) != 0xffffffff) {
    func_0x0001073e161c((&PTR_FUN_1109ac360)[*(uint *)(param_1 + 0xc0)]);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  return;
}



/* Entry: 1073dee70; end: 1073dee97;  */

/* WARNING: Possible PIC construction at 0x0001073bc818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073bc81c) */

long FUN_1073dee70(undefined8 param_1,long param_2)

{
  func_0x00010727599c(param_2 + 0x60);
  func_0x0001001148fc();
  func_0x000107274878();
  return param_2;
}



/* Entry: 1073dee98; end: 1073deecf;  */

void FUN_1073dee98(long param_1)

{
  long unaff_x20;
  
  func_0x0001073e17d0();
  func_0x00010727d6bc();
  func_0x000107278a68(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 1073deed0; end: 1073deef3;  */

void FUN_1073deed0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  uStack_20 = *param_3;
  FUN_1073deef4(param_1,&uStack_20);
  return;
}



/* Entry: 1073deef4; end: 1073def17;  */

/* WARNING: Possible PIC construction at 0x0001073def50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073def84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073defb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073defcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073deff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073bdff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073defd0) */
/* WARNING: Removing unreachable block (ram,0x0001073defb8) */
/* WARNING: Removing unreachable block (ram,0x0001073deffc) */
/* WARNING: Removing unreachable block (ram,0x0001073df028) */
/* WARNING: Removing unreachable block (ram,0x0001073df03c) */
/* WARNING: Removing unreachable block (ram,0x0001073df048) */
/* WARNING: Removing unreachable block (ram,0x0001073df074) */
/* WARNING: Removing unreachable block (ram,0x0001073df0a8) */
/* WARNING: Removing unreachable block (ram,0x0001073df0e4) */
/* WARNING: Removing unreachable block (ram,0x0001073df118) */
/* WARNING: Removing unreachable block (ram,0x0001073df12c) */
/* WARNING: Removing unreachable block (ram,0x0001073df178) */
/* WARNING: Removing unreachable block (ram,0x0001073df160) */
/* WARNING: Removing unreachable block (ram,0x0001073df180) */
/* WARNING: Removing unreachable block (ram,0x0001073df198) */
/* WARNING: Removing unreachable block (ram,0x0001073df1a0) */
/* WARNING: Removing unreachable block (ram,0x0001073df1b0) */
/* WARNING: Removing unreachable block (ram,0x0001073df1bc) */
/* WARNING: Removing unreachable block (ram,0x0001073df190) */
/* WARNING: Removing unreachable block (ram,0x0001073e18fc) */
/* WARNING: Removing unreachable block (ram,0x0001073df108) */
/* WARNING: Removing unreachable block (ram,0x0001073e1f6c) */
/* WARNING: Removing unreachable block (ram,0x0001073df010) */
/* WARNING: Removing unreachable block (ram,0x0001073def88) */
/* WARNING: Removing unreachable block (ram,0x0001073def54) */
/* WARNING: Removing unreachable block (ram,0x0001073bdffc) */
/* WARNING: Removing unreachable block (ram,0x00010014b37c) */

void FUN_1073deef4(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_270 [360];
  undefined1 auStack_108 [200];
  
  if (*(int *)(param_2 + 200) == 0) {
    puVar1 = &stack0xffffffffffffffe0;
    func_0x0001073bee90(param_1,param_2 + 8);
    uVar3 = 0x1073bdffc;
  }
  else {
    unaff_x20 = param_2 + 8;
    puVar1 = auStack_270;
    param_1 = auStack_270;
    lVar2 = unaff_x20;
    func_0x0001073e1598(param_3);
    if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
      func_0x0001073e2138();
      param_1 = auStack_108;
      uVar3 = 0x1073def54;
      puVar1 = auStack_270;
    }
    else {
      func_0x0001073e2138();
      uVar3 = 0x1073defd0;
    }
  }
  *(long *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar1 + -8) = uVar3;
  func_0x00010727a484();
  func_0x000104c2fe00();
  param_1[0x38] = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1073def18; end: 1073df0ab;  */

/* WARNING: Possible PIC construction at 0x0001073def50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073def84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073defb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073defcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073deff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073defb8) */
/* WARNING: Removing unreachable block (ram,0x0001073deffc) */
/* WARNING: Removing unreachable block (ram,0x0001073df028) */
/* WARNING: Removing unreachable block (ram,0x0001073df03c) */
/* WARNING: Removing unreachable block (ram,0x0001073df048) */
/* WARNING: Removing unreachable block (ram,0x0001073df074) */
/* WARNING: Removing unreachable block (ram,0x0001073df0a8) */
/* WARNING: Removing unreachable block (ram,0x0001073df0e4) */
/* WARNING: Removing unreachable block (ram,0x0001073df118) */
/* WARNING: Removing unreachable block (ram,0x0001073df12c) */
/* WARNING: Removing unreachable block (ram,0x0001073df178) */
/* WARNING: Removing unreachable block (ram,0x0001073df160) */
/* WARNING: Removing unreachable block (ram,0x0001073df180) */
/* WARNING: Removing unreachable block (ram,0x0001073df198) */
/* WARNING: Removing unreachable block (ram,0x0001073df1a0) */
/* WARNING: Removing unreachable block (ram,0x0001073df1b0) */
/* WARNING: Removing unreachable block (ram,0x0001073df1bc) */
/* WARNING: Removing unreachable block (ram,0x0001073df190) */
/* WARNING: Removing unreachable block (ram,0x0001073e18fc) */
/* WARNING: Removing unreachable block (ram,0x0001073df108) */
/* WARNING: Removing unreachable block (ram,0x0001073e1f6c) */
/* WARNING: Removing unreachable block (ram,0x0001073df010) */
/* WARNING: Removing unreachable block (ram,0x0001073def88) */
/* WARNING: Removing unreachable block (ram,0x0001073def54) */
/* WARNING: Removing unreachable block (ram,0x0001073defd0) */

void FUN_1073def18(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_270 [360];
  undefined1 auStack_108 [200];
  
  puVar1 = auStack_270;
  lVar2 = param_2;
  func_0x0001073e1598();
  if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
    func_0x0001073e2138();
    puVar1 = auStack_108;
  }
  else {
    func_0x0001073e2138();
  }
  func_0x00010727a484();
  func_0x000104c2fe00();
  puVar1[0x38] = *(undefined1 *)(param_2 + 0x38);
  func_0x00010028af84(puVar1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 1073df0ac; end: 1073df12f;  */

long * FUN_1073df0ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined1 *unaff_x19;
  undefined1 auStack_149 [121];
  int iStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long alStack_a0 [13];
  undefined8 uStack_38;
  
  plVar3 = alStack_a0;
  func_0x0001073e1598();
  uStack_38 = extraout_x8;
  FUN_1073df130(alStack_a0);
  uVar1 = *(char *)(param_1 + 0x88) == '\0';
  plVar5 = (long *)(param_1 + 0x28);
  if ((bool)uVar1) {
    plVar5 = param_4;
  }
  FUN_1073df1b4(alStack_a0,plVar5);
  func_0x00010726b144();
  func_0x0001073e1584(uStack_38);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x0001073e1a2c();
  func_0x00010726b144();
  func_0x0001073e1648();
  plStack_c0 = param_4;
  func_0x0001073e1598();
  plVar3 = (long *)*plVar3;
  uStack_c8 = extraout_x8_00;
  func_0x000107753050(auStack_149 + 1);
  uVar1 = iStack_d0 == 1;
  if ((bool)uVar1) {
    plVar3 = (long *)(auStack_149 + 1);
    func_0x00010727f7dc();
    plVar5 = (long *)auStack_149;
    func_0x000107777548();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x60] = 0;
  }
  func_0x0001073e16ac();
  func_0x0001073e1584(uStack_c8);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  plVar4 = plVar3;
  func_0x0001073e16ac();
  func_0x0001073e1648();
  if ((char)plVar4[0xc] == '\0') {
    plVar4 = plVar5;
  }
  lVar2 = extraout_x8_01;
  func_0x00010727a484(extraout_x8_01,plVar4);
  func_0x000104c2fe00();
  *(char *)(lVar2 + 0x38) = (char)param_4[7];
  func_0x00010028af84(lVar2 + 0x40,param_4 + 8);
  return plVar3;
}



/* Entry: 1073df130; end: 1073df1b3;  */

undefined1 * FUN_1073df130(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [120];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e1598();
  puVar3 = (undefined1 *)*param_1;
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a8);
  uVar1 = iStack_30 == 1;
  if ((bool)uVar1) {
    puVar3 = auStack_a8;
    func_0x00010727f7dc();
    param_2 = &uStack_a9;
    func_0x000107777548();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x60] = 0;
  }
  func_0x0001073e16ac();
  func_0x0001073e1584(uStack_28);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x0001073e16ac();
  func_0x0001073e1648();
  if (puVar4[0x60] == '\0') {
    puVar4 = param_2;
  }
  lVar2 = extraout_x8_00;
  func_0x00010727a484(extraout_x8_00,puVar4);
  func_0x000104c2fe00();
  *(undefined1 *)(lVar2 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(lVar2 + 0x40,unaff_x20 + 0x40);
  return puVar3;
}



/* Entry: 1073df1b4; end: 1073df1c7;  */

void FUN_1073df1b4(long param_1,long param_2,long param_3)

{
  long unaff_x20;
  
  if (*(char *)(param_2 + 0x60) == '\0') {
    param_2 = param_3;
  }
  func_0x00010727a484(param_1,param_2);
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1073df1c8; end: 1073df1e3;  */

void FUN_1073df1c8(long param_1)

{
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 1073df1e4; end: 1073df21f;  */

long FUN_1073df1e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1073df220();
    lVar2 = uVar1 + 0xd0;
  }
  else {
    lVar2 = param_1;
    FUN_1073df258();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xd0;
}



/* Entry: 1073df220; end: 1073df257;  */

void FUN_1073df220(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1073dedb8(lVar1 + 8,param_2 + 8);
  *(long *)(param_1 + 8) = lVar1 + 0xd0;
  return;
}



/* Entry: 1073df258; end: 1073df2fb;  */

long FUN_1073df258(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001073e17d0();
  FUN_1073df2fc();
  FUN_1073df3a4(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0xd0,unaff_x19 + 2);
  FUN_1073dedb8(lStack_48 + 8,unaff_x20 + 8);
  lStack_48 = lStack_48 + 0xd0;
  FUN_1073df354();
  lVar1 = unaff_x19[1];
  func_0x0001073df5e0(auStack_58);
  return lVar1;
}



/* Entry: 1073df2fc; end: 1073df353;  */

long * FUN_1073df2fc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x13b13b13b13b13c) {
    uVar1 = (param_1[2] - *param_1) / 0xd0;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x9d89d89d89d89c < uVar1) {
      plVar2 = (long *)0x13b13b13b13b13b;
    }
    return plVar2;
  }
  FUN_1073df398();
  func_0x0001073e1650();
  plVar2 = param_1 + 2;
  FUN_1073df434(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0xd0) * 0xd0);
  func_0x0001073e16cc();
  return plVar2;
}



/* Entry: 1073df354; end: 1073df397;  */

void FUN_1073df354(long *param_1,long param_2)

{
  func_0x0001073e1650();
  FUN_1073df434(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xd0) * 0xd0);
  func_0x0001073e16cc();
  return;
}



/* Entry: 1073df398; end: 1073df3a3;  */

void FUN_1073df398(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001073e20f0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001073df3e0(param_4);
  }
  func_0x0001073e1ef4(0xd0);
  return;
}



/* Entry: 1073df3a4; end: 1073df403;  */

void FUN_1073df3a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001073df3e0(param_4);
  }
  func_0x0001073e1ef4(0xd0);
  return;
}



/* Entry: 1073df404; end: 1073df433;  */

void FUN_1073df404(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x13b13b13b13b13c) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd0);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001073e198c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xd0) {
    FUN_1073df4d8(param_4 + 8,unaff_x22 + 8);
    param_4 = lStack_48 + 0xd0;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_1073df4a8();
  FUN_1073df55c(auStack_70);
  return;
}



/* Entry: 1073df434; end: 1073df4a7;  */

void FUN_1073df434(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001073e198c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xd0) {
    FUN_1073df4d8(in_x3 + 8,unaff_x22 + 8);
    in_x3 = lStack_38 + 0xd0;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_1073df4a8();
  FUN_1073df55c(auStack_60);
  return;
}



/* Entry: 1073df4a8; end: 1073df4d7;  */

void FUN_1073df4a8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1c60();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xd0) {
    FUN_1073dee2c(unaff_x20 + 8);
  }
  return;
}



/* Entry: 1073df4d8; end: 1073df4ff;  */

void FUN_1073df4d8(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001073e15fc();
  *(undefined4 *)(param_1 + 0xc0) = extraout_w8;
  FUN_1073df500();
  return;
}



/* Entry: 1073df500; end: 1073df543;  */

void FUN_1073df500(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  FUN_1073dee2c();
  iVar1 = *(int *)(unaff_x20 + 0xc0);
  if (iVar1 != -1) {
    func_0x0001073e15bc(&PTR_FUN_1109ac380);
    *(int *)(unaff_x19 + 0xc0) = iVar1;
  }
  return;
}



/* Entry: 1073df544; end: 1073df55b;  */

void FUN_1073df544(long *param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  func_0x0001073bee44(lVar1);
  func_0x00010726ccd4();
  func_0x00010726ccd4(lVar1 + 0x60,unaff_x19 + 0x60);
  return;
}



/* Entry: 1073df55c; end: 1073df58b;  */

long FUN_1073df55c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1073df58c(param_1);
  }
  return param_1;
}



/* Entry: 1073df58c; end: 1073df5ab;  */

void FUN_1073df58c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0xd0) {
    FUN_1073dee2c(lVar1 + -200);
  }
  return;
}



/* Entry: 1073df5ac; end: 1073df60b;  */

void FUN_1073df5ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0xd0) {
    FUN_1073dee2c(param_3 + -200);
  }
  return;
}



/* Entry: 1073df60c; end: 1073df613;  */

void FUN_1073df60c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0xd0;
    FUN_1073dee2c(lVar1 + -200);
  }
  return;
}



/* Entry: 1073df614; end: 1073df64b;  */

void FUN_1073df614(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0xd0;
    FUN_1073dee2c(lVar1 + -200);
  }
  return;
}



/* Entry: 1073df64c; end: 1073df667;  */

void FUN_1073df64c(void)

{
  func_0x0001073e1ee8();
  FUN_1073df668();
  return;
}



/* Entry: 1073df668; end: 1073df6c7;  */

undefined1  [16] FUN_1073df668(long *param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long alStack_60 [4];
  
  func_0x0001073e1e88();
  FUN_1073df6c8();
  lVar2 = *param_1;
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x0001073e1e70();
    func_0x0001073df72c();
    func_0x0001073e20fc();
    FUN_1073df764();
    lVar2 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x0001073df7fc(alStack_60);
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = lVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1073df6c8; end: 1073df763;  */

long * FUN_1073df6c8(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x0001073e1650();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x0001073e1c94(), (int)param_1 == 0) {
      func_0x0001073e1f0c();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_1073df71c;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_1073df71c:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 1073df764; end: 1073df81f;  */

void FUN_1073df764(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001073e1d30();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0001073e20cc();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 1073df820; end: 1073df837;  */

void FUN_1073df820(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001073e1e60(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001073df870(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073df838; end: 1073df943;  */

void FUN_1073df838(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001073e1e60();
  if ((bool)in_ZR) {
    func_0x0001073df870(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073df944; end: 1073df977;  */

void FUN_1073df944(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1073dfa3c(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x58;
  return;
}



/* Entry: 1073df978; end: 1073dfa3b;  */

long FUN_1073df978(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  func_0x0001073e21dc();
  FUN_1073dfb88();
  FUN_1073dfc30(auStack_78,param_1,(unaff_x19[1] - *unaff_x19) / 0x58,unaff_x19 + 2);
  FUN_1073dfa3c(lStack_68);
  lStack_68 = lStack_68 + 0x58;
  FUN_1073dfbe0();
  lVar1 = unaff_x19[1];
  func_0x0001073dfe78(auStack_78);
  return lVar1;
}



/* Entry: 1073dfa3c; end: 1073dfae3;  */

undefined8
FUN_1073dfa3c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  plVar3 = (long *)*param_6;
  plStack_48 = &lStack_40;
  plVar2 = param_6 + 1;
  lStack_40 = *plVar2;
  lStack_38 = param_6[2];
  if (lStack_38 != 0) {
    *(long **)(lStack_40 + 0x10) = plStack_48;
    *param_6 = (long)plVar2;
    *plVar2 = 0;
    param_6[2] = 0;
    plStack_48 = plVar3;
  }
  FUN_1073dfae4(0,param_1,uVar1,&uStack_30,param_4,param_5,&plStack_48);
  FUN_1073dff1c(&plStack_48);
  FUN_107330fdc(&uStack_30);
  return param_1;
}



/* Entry: 1073dfae4; end: 1073dfb87;  */

undefined8 *
FUN_1073dfae4(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  *param_2 = param_3;
  uVar1 = *param_4;
  param_2[2] = param_4[1];
  param_2[1] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x000107299490(param_2 + 3,param_5);
  func_0x000107299490(param_2 + 5,param_6);
  FUN_1073dfee0(param_2 + 7,param_7);
  *(undefined4 *)(param_2 + 10) = param_1;
  return param_2;
}



/* Entry: 1073dfb88; end: 1073dfbdf;  */

long * FUN_1073dfb88(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x2e8ba2e8ba2e8bb) {
    uVar1 = (param_1[2] - *param_1) / 0x58;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x1745d1745d1745c < uVar1) {
      plVar2 = (long *)0x2e8ba2e8ba2e8ba;
    }
    return plVar2;
  }
  FUN_1073dfc24();
  func_0x0001073e1650();
  plVar2 = param_1 + 2;
  FUN_1073dfcc0(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58);
  func_0x0001073e16cc();
  return plVar2;
}



/* Entry: 1073dfbe0; end: 1073dfc23;  */

void FUN_1073dfbe0(long *param_1,long param_2)

{
  func_0x0001073e1650();
  FUN_1073dfcc0(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x58) * 0x58);
  func_0x0001073e16cc();
  return;
}



/* Entry: 1073dfc24; end: 1073dfc2f;  */

void FUN_1073dfc24(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001073e20f0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001073dfc6c(param_4);
  }
  func_0x0001073e1ef4(0x58);
  return;
}



/* Entry: 1073dfc30; end: 1073dfc8f;  */

void FUN_1073dfc30(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001073dfc6c(param_4);
  }
  func_0x0001073e1ef4(0x58);
  return;
}



/* Entry: 1073dfc90; end: 1073dfcbf;  */

void FUN_1073dfc90(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001073e198c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x58) {
    func_0x0001073dfd64(param_4,unaff_x22);
    param_4 = lStack_48 + 0x58;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  func_0x0001073dfd34();
  FUN_1073dfdf8(auStack_70);
  return;
}



/* Entry: 1073dfcc0; end: 1073dfd33;  */

void FUN_1073dfcc0(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001073e198c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x58) {
    func_0x0001073dfd64(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x58;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  func_0x0001073dfd34();
  FUN_1073dfdf8(auStack_60);
  return;
}



/* Entry: 1073dfd34; end: 1073dfdf7;  */

void FUN_1073dfd34(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x0001073dfdc0();
  }
  return;
}



/* Entry: 1073dfdf8; end: 1073dfe27;  */

long FUN_1073dfdf8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1073dfe28(param_1);
  }
  return param_1;
}



/* Entry: 1073dfe28; end: 1073dfe47;  */

void FUN_1073dfe28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    func_0x0001073dfdc0();
  }
  return;
}



/* Entry: 1073dfe48; end: 1073dfea3;  */

void FUN_1073dfe48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x0001073dfdc0();
  }
  return;
}



/* Entry: 1073dfea4; end: 1073dfeab;  */

void FUN_1073dfea4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x0001073dfdc0();
  }
  return;
}



/* Entry: 1073dfeac; end: 1073dfedf;  */

void FUN_1073dfeac(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x0001073dfdc0();
  }
  return;
}


