/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0046ed90; end: 0046eda3;  */

void FUN_0046ed90(void)

{
  func_0x0046f0a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046eda4; end: 0046ee6f;  */

void FUN_0046eda4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  return;
}



/* Entry: 0046ee70; end: 0046ee9b;  */

undefined1 * FUN_0046ee70(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_0046ee9c();
  return param_1;
}



/* Entry: 0046ee9c; end: 0046eeaf;  */

void FUN_0046ee9c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_0046eecc();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 0046eeb0; end: 0046eecb;  */

void FUN_0046eeb0(long param_1)

{
  FUN_0046eecc();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 0046eecc; end: 0046ef3b;  */

void FUN_0046eecc(long *param_1,long *param_2)

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



/* Entry: 0046ef3c; end: 0046ef5b;  */

void FUN_0046ef3c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_0046ef5c();
  }
  return;
}



/* Entry: 0046ef5c; end: 0046efdf;  */

long FUN_0046ef5c(long param_1)

{
  func_0x0046ef84(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_0046efe0(param_1,0);
  return param_1;
}



/* Entry: 0046efe0; end: 0046eff7;  */

void FUN_0046efe0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0046eff8; end: 0046f0f3;  */

void FUN_0046eff8(long param_1)

{
  FUN_00457530(param_1 + 0x58);
  FUN_00457530(param_1 + 0x38);
  FUN_00457530(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 0046f0f4; end: 0046f113;  */

void FUN_0046f0f4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0046e140();
  }
  return;
}



/* Entry: 0046f114; end: 0046f18f;  */

long FUN_0046f114(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_0046eda4();
  FUN_0046ee70(lVar1 + 0x80,param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  return param_1;
}



/* Entry: 0046f190; end: 0046f1a3;  */

void FUN_0046f190(void)

{
  func_0x0046f164();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046f1a4; end: 0046f1df;  */

undefined8 FUN_0046f1a4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xe0;
  __Znwm(0xe0);
  FUN_0046f360();
  return uVar1;
}



/* Entry: 0046f1e0; end: 0046f20b;  */

undefined8 * FUN_0046f1e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_009e7150;
  FUN_0046f400(param_2 + 1);
  FUN_0046f480(param_2 + 0x11,param_1 + 0x88);
  lVar1 = *(long *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  param_2[0x18] = *(undefined8 *)(param_1 + 0xc0);
  param_2[0x17] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0046fb4c();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  param_2[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  param_2[0x19] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0046fb4c();
    } while (extraout_w10_00 != 0);
  }
  *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 0xd8);
  return param_2;
}



/* Entry: 0046f20c; end: 0046f31b;  */

void FUN_0046f20c(long *param_1,long param_2)

{
  dword *pdVar1;
  undefined1 auStack_1d8 [184];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [184];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_00465150(auStack_108,param_2 + 8,param_2 + 0x88,*(undefined1 *)(param_2 + 0xd9));
  FUN_00465810(&uStack_120,auStack_108,param_2 + 0xb8,param_2 + 200);
  FUN_004652b4(auStack_1d8,param_2 + 0x88,*(undefined1 *)(param_2 + 0xd8));
  pdVar1 = &section_000000b8.offset;
  __Znwm();
  *(undefined8 *)(pdVar1 + 2) = 0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined ***)pdVar1 = &PTR_FUN_009e71d0;
  uStack_38 = uStack_118;
  uStack_40 = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  FUN_00463a14(auStack_f8,auStack_1d8);
  FUN_004637c4(pdVar1 + 6,&uStack_40,auStack_f8);
  FUN_00463c5c(auStack_f8);
  func_0x00463cb8(&uStack_40);
  *param_1 = (long)(pdVar1 + 6);
  param_1[1] = (long)pdVar1;
  FUN_00463c5c(auStack_1d8);
  func_0x00463cb8(&uStack_120);
  FUN_0046fae0(auStack_108);
  return;
}



/* Entry: 0046f31c; end: 0046f353;  */

long FUN_0046f31c(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_009e7210);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0046f354; end: 0046f35f;  */

undefined ** FUN_0046f354(void)

{
  return &PTR_DAT_009e7210;
}



/* Entry: 0046f360; end: 0046f3ff;  */

undefined8 * FUN_0046f360(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_009e7150;
  FUN_0046f400(param_1 + 1);
  FUN_0046f480(param_1 + 0x11,param_2 + 0x80);
  lVar1 = *(long *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x17] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0046fb4c();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x1a] = *(undefined8 *)(param_2 + 200);
  param_1[0x19] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0046fb4c();
    } while (extraout_w10_00 != 0);
  }
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0xd0);
  return param_1;
}



/* Entry: 0046f400; end: 0046f47f;  */

long FUN_0046f400(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_00459e04(lVar1 + 0x18,param_2 + 0x18);
  FUN_00459e04(param_1 + 0x38,param_2 + 0x38);
  FUN_00459e04(param_1 + 0x58,param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  return param_1;
}



/* Entry: 0046f480; end: 0046f4b3;  */

undefined1 * FUN_0046f480(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_0046f4b4();
  return param_1;
}



/* Entry: 0046f4b4; end: 0046f4c7;  */

void FUN_0046f4b4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_0046f4e4();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 0046f4c8; end: 0046f4e3;  */

void FUN_0046f4c8(long param_1)

{
  FUN_0046f4e4();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 0046f4e4; end: 0046f537;  */

undefined8 * FUN_0046f4e4(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x0046f578(param_1,*(undefined8 *)(param_2 + 8));
  func_0x0046f538(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 0046f538; end: 0046f63f;  */

void FUN_0046f538(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x0046f770(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 0046f640; end: 0046f73b;  */

void FUN_0046f640(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_0046f73c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_0046f754(plVar3);
    FUN_0046f73c(param_1,plVar3);
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



/* Entry: 0046f73c; end: 0046f753;  */

void FUN_0046f73c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0046f754; end: 0046f7a3;  */

void FUN_0046f754(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 3);
    return;
  }
  FUN_0040cee8();
  func_0x0046f788();
  return;
}



/* Entry: 0046f7a4; end: 0046f9a7;  */

undefined1  [16] FUN_0046f7a4(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0046f850;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_0046f97c;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_0046f850:
  FUN_0046f9a8(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x0046f578(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x0046fa28(aplStack_58);
  uVar2 = 1;
LAB_0046f97c:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 0046f9a8; end: 0046f9ff;  */

void FUN_0046f9a8(undefined8 *param_1,long param_2,qword param_3,undefined8 param_4)

{
  char *pcVar1;
  
  pcVar1 = segment_command_00000020.segname + 8;
  __Znwm();
  *param_1 = pcVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(qword *)(pcVar1 + 8) = param_3;
  FUN_0046fa00(pcVar1 + 0x10,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 0046fa00; end: 0046fa4b;  */

undefined4 * FUN_0046fa00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 0046fa4c; end: 0046fa63;  */

void FUN_0046fa4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 0046fa64; end: 0046faa7;  */

void FUN_0046fa64(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 0046faa8; end: 0046faab;  */

void FUN_0046faa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e71d0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0046faac; end: 0046fabf;  */

void FUN_0046faac(void)

{
  func_0x0046fad0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046fac0; end: 0046fadf;  */

void FUN_0046fac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0046fac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0046fae0; end: 0046fb07;  */

long FUN_0046fae0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0046fb08; end: 0046fbc7;  */

void FUN_0046fb08(void)

{
  return;
}



/* Entry: 0046fbc8; end: 0046fc33;  */

void FUN_0046fbc8(void)

{
  func_0x0046fc44();
  return;
}



/* Entry: 0046fc34; end: 0046fc4f;  */

void FUN_0046fc34(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0046fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(4,param_3);
  return;
}



/* Entry: 0046fc50; end: 0047055f;  */

qword ** FUN_0046fc50(long *param_1,code **param_2,qword **param_3,long param_4,undefined8 param_5,
                     long *param_6,undefined8 *param_7,long *param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  segment_command *psVar4;
  dword **ppdVar5;
  code *pcVar6;
  section *psVar7;
  qword **ppqVar8;
  qword **ppqVar9;
  undefined8 extraout_x8;
  qword *extraout_x8_00;
  qword *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int iVar10;
  qword *pqVar11;
  dword *pdVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  qword *pqVar17;
  dword **unaff_x28;
  qword *pqVar18;
  code *pcStack_2c0;
  qword *pqStack_2b8;
  code **ppcStack_2b0;
  qword **ppqStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined4 uStack_290;
  qword *pqStack_280;
  qword *pqStack_278;
  long *plStack_268;
  long *plStack_260;
  undefined4 uStack_258;
  int iStack_254;
  qword *pqStack_250;
  section *psStack_248;
  dword *pdStack_240;
  qword *pqStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  dword *pdStack_220;
  qword *pqStack_218;
  code **ppcStack_210;
  dword **ppdStack_208;
  qword *pqStack_200;
  section *psStack_1f8;
  qword *pqStack_1f0;
  section *psStack_1e8;
  code **ppcStack_1e0;
  dword **ppdStack_1d8;
  qword *pqStack_1d0;
  section *psStack_1c8;
  qword *pqStack_1c0;
  section *psStack_1b8;
  qword *pqStack_1b0;
  section *psStack_1a8;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  dword *pdStack_190;
  qword *pqStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  dword *pdStack_170;
  qword *pqStack_168;
  qword *pqStack_160;
  section *psStack_158;
  dword *pdStack_150;
  long alStack_148 [5];
  dword *pdStack_120;
  code **appcStack_118 [5];
  undefined1 auStack_f0 [8];
  qword *pqStack_e8;
  qword *pqStack_e0;
  section *psStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_70;
  
  func_0x0047113c();
  uStack_70 = extraout_x8;
  if ((*(byte *)(param_4 + 0x80) & 1) == 0) {
    func_0x00471158();
    param_2[1] = (code *)0x0;
    param_2[2] = (code *)0x0;
    *param_2 = (code *)&PTR_DAT_009e7328;
    pdVar12 = (dword *)(param_2 + 3);
    *(undefined ***)pdVar12 = &PTR_FUN_009e7230;
    pdStack_120 = pdVar12;
    appcStack_118[0] = param_2;
    do {
      func_0x00471050();
    } while (extraout_w10_01 != 0);
    do {
      func_0x00471050();
    } while (extraout_w10_02 != 0);
    pqStack_e8 = (qword *)0x0;
    auStack_f0 = (undefined1  [8])0x0;
    param_2[4] = (code *)pdVar12;
    param_2[5] = (code *)param_2;
    func_0x0046fc08(auStack_f0);
    FUN_00470a40(&pdStack_120);
    *param_1 = (long)pdVar12;
    param_1[1] = (long)param_2;
    pqStack_e8 = (qword *)0x0;
    auStack_f0 = (undefined1  [8])0x0;
    ppqVar8 = (qword **)auStack_f0;
    FUN_00470a40();
  }
  else {
    uVar3 = param_5;
    plStack_268 = param_1;
    plStack_260 = param_8;
    FUN_00463678();
    iStack_254 = (int)uVar3;
    uVar3 = param_5;
    FUN_0046374c();
    uStack_258 = (undefined4)uVar3;
    psVar4 = &segment_command_00000020;
    __Znwm();
    plVar16 = (long *)((long)((section *)psVar4)->sectname + 8);
    *plVar16 = 0;
    ((section *)psVar4)->segname[0] = '\0';
    ((section *)psVar4)->segname[1] = '\0';
    ((section *)psVar4)->segname[2] = '\0';
    ((section *)psVar4)->segname[3] = '\0';
    ((section *)psVar4)->segname[4] = '\0';
    ((section *)psVar4)->segname[5] = '\0';
    ((section *)psVar4)->segname[6] = '\0';
    ((section *)psVar4)->segname[7] = '\0';
    *(undefined ***)((section *)psVar4)->sectname = &PTR_FUN_009e7378;
    pqVar11 = (qword *)(((section *)psVar4)->segname + 8);
    *pqVar11 = (qword)&PTR_DAT_009e73c8;
    psVar7 = (section *)&segment_command_00000020.nsects;
    pqStack_1c0 = pqVar11;
    psStack_1b8 = (section *)psVar4;
    __Znwm();
    *(undefined8 *)((long)psVar7->sectname + 8) = 0;
    psVar7->segname[0] = '\0';
    psVar7->segname[1] = '\0';
    psVar7->segname[2] = '\0';
    psVar7->segname[3] = '\0';
    psVar7->segname[4] = '\0';
    psVar7->segname[5] = '\0';
    psVar7->segname[6] = '\0';
    psVar7->segname[7] = '\0';
    *(undefined ***)psVar7->sectname = &PTR_FUN_009e7418;
    FUN_0046f400(auStack_f0,param_4);
    FUN_0046f480(&pdStack_120,param_5);
    pqVar18 = (qword *)(psVar7->segname + 8);
    psStack_1a8 = (section *)param_3[1];
    pqStack_1b0 = *param_3;
    if (param_3[1] != (qword *)0x0) {
      do {
        func_0x00471050();
      } while (extraout_w10 != 0);
    }
    do {
      iVar10 = iStack_254;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    in_ZR = iStack_254 == 0;
    pqStack_160 = pqVar11;
    psStack_158 = (section *)psVar4;
    FUN_0046eb10(pqVar18,auStack_f0,&pdStack_120,&pqStack_1b0,&pqStack_160,0,in_ZR);
    FUN_00466d48(&pqStack_160);
    func_0x0045a078(&pqStack_1b0);
    ppdVar5 = &pdStack_120;
    FUN_0046ef3c();
    func_0x00471194();
    ppdStack_1d8 = (dword **)0x0;
    ppcStack_1e0 = (code **)0x0;
    pdStack_120 = (dword *)FUN_0047059c;
    appcStack_118[0] = (code **)&PTR_FUN_009e3508;
    ppcStack_210 = (code **)0x0;
    ppdStack_208 = (dword **)0x0;
    if (iVar10 != 0) {
      pqVar11 = param_3[1];
      pqStack_278 = param_3[1];
      pqStack_280 = *param_3;
      pqStack_1d0 = pqVar18;
      psStack_1c8 = psVar7;
      func_0x00471158();
      ppdVar5[1] = (dword *)0x0;
      ppdVar5[2] = (dword *)0x0;
      *ppdVar5 = (dword *)&PTR_FUN_009e7468;
      if (pqVar11 != (qword *)0x0) {
        do {
          func_0x00471050();
        } while (extraout_w10_00 != 0);
      }
      ppdVar5[3] = (dword *)&PTR_FUN_009e5ee0;
      pqVar11 = pqStack_280;
      ppdVar5[5] = (dword *)pqStack_278;
      ppdVar5[4] = (dword *)pqVar11;
      auStack_f0 = (undefined1  [8])0x0;
      pqStack_e8 = (qword *)0x0;
      func_0x0045a078(auStack_f0);
      pqStack_e8 = (qword *)ppdStack_1d8;
      auStack_f0 = (undefined1  [8])ppcStack_1e0;
      ppcStack_1e0 = (code **)(ppdVar5 + 3);
      ppdStack_1d8 = ppdVar5;
      FUN_0046e11c();
      pcVar6 = *param_2;
      (**(code **)(*(long *)pcVar6 + 0x10))();
      pqStack_1b0 = (qword *)*param_2;
      psStack_1a8 = (section *)param_2[1];
      if (psStack_1a8 != (section *)0x0) {
        plVar16 = (long *)((long)psStack_1a8->sectname + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_1a0 = uStack_258;
      uStack_19c = SUB81(pcVar6,0);
      auStack_f0 = (undefined1  [8])FUN_004705ac;
      pqStack_e8 = (qword *)&PTR_FUN_009e72b0;
      if (psStack_1a8 != (section *)0x0) {
        plVar16 = (long *)((long)psStack_1a8->sectname + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_d0 = uStack_258;
      pqStack_e0 = pqStack_1b0;
      psStack_d8 = psStack_1a8;
      uStack_cc = uStack_19c;
      func_0x0045a054(&pqStack_1b0);
      pdStack_120 = (dword *)auStack_f0;
      func_0x0045e3a0(appcStack_118,&pqStack_e8);
      func_0x00471098(pqStack_e8);
      ppcStack_210 = ppcStack_1e0;
      ppdStack_208 = ppdStack_1d8;
      iVar10 = iStack_254;
    }
    pqStack_1d0 = (qword *)0x0;
    psStack_1c8 = (section *)0x0;
    ppcStack_1e0 = (code **)0x0;
    ppdStack_1d8 = (dword **)0x0;
    pqStack_200 = pqVar18;
    psStack_1f8 = psVar7;
    pdStack_150 = pdStack_120;
    (*appcStack_118[0][2])(alStack_148,appcStack_118);
    psVar7 = psStack_1f8;
    pqVar18 = pqStack_200;
    if (iVar10 == 0) {
      pqStack_200 = (qword *)0x0;
      psStack_1f8 = (section *)0x0;
    }
    else {
      psVar7 = &section_000000b8;
      __Znwm();
      plVar16 = (long *)((long)psVar7->sectname + 8);
      *plVar16 = 0;
      psVar7->segname[0] = '\0';
      psVar7->segname[1] = '\0';
      psVar7->segname[2] = '\0';
      psVar7->segname[3] = '\0';
      psVar7->segname[4] = '\0';
      psVar7->segname[5] = '\0';
      psVar7->segname[6] = '\0';
      psVar7->segname[7] = '\0';
      *(undefined ***)psVar7->sectname = &PTR_DAT_009e72d8;
      pqVar18 = (qword *)(psVar7->segname + 8);
      psStack_1a8 = psStack_1f8;
      pqStack_1b0 = pqStack_200;
      pqStack_200 = (qword *)0x0;
      psStack_1f8 = (section *)0x0;
      psStack_158 = (section *)ppdStack_208;
      pqStack_160 = (qword *)ppcStack_210;
      ppcStack_210 = (code **)0x0;
      ppdStack_208 = (dword **)0x0;
      auStack_f0 = (undefined1  [8])pdStack_150;
      (**(code **)(alStack_148[0] + 0x10))(&pqStack_e8,alStack_148);
      FUN_0046d310(pqVar18,&pqStack_1b0,&pqStack_160,uStack_258,auStack_f0);
      func_0x00471098(pqStack_e8);
      FUN_0046e11c(&pqStack_160);
      func_0x00471160();
      if ((psVar7->size == 0) || (in_ZR = *(long *)(psVar7->size + 8) == -1, (bool)in_ZR)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          pqStack_1b0 = pqVar18;
          psStack_1a8 = psVar7;
          pqStack_160 = pqVar18;
          psStack_158 = psVar7;
        } while (cVar1 != '\0');
        do {
          func_0x0047107c();
        } while (extraout_w11 != 0);
        auStack_f0 = (undefined1  [8])psVar7->addr;
        psVar7->addr = (qword)pqVar18;
        psVar7->size = (qword)psVar7;
        pqStack_e8 = extraout_x8_00;
        func_0x0046e164(auStack_f0);
        func_0x0046e400(&pqStack_1b0);
      }
      pqStack_160 = (qword *)0x0;
      psStack_158 = (section *)0x0;
      func_0x0046e400(&pqStack_160);
    }
    pqStack_1f0 = pqVar18;
    psStack_1e8 = psVar7;
    func_0x004710e0();
    FUN_0046e11c(&ppcStack_210);
    func_0x0046e140(&pqStack_200);
    pdStack_220 = (dword *)0x0;
    pqStack_218 = (qword *)0x0;
    uStack_230 = 0;
    uStack_228 = 0;
    lVar13 = *param_6;
    param_1 = (long *)*param_7;
    if ((lVar13 != 0) && (param_1 != (long *)0x0)) {
      lVar14 = param_6[1];
      pqVar18 = &segment_command_00000020.vmsize;
      __Znwm();
      pqVar18[1] = 0;
      pqVar18[2] = 0;
      *pqVar18 = (qword)&PTR_DAT_009e74b8;
      if (lVar14 != 0) {
        do {
          func_0x00471050();
        } while (extraout_w10_03 != 0);
      }
      if (param_7[1] != 0) {
        do {
          func_0x0047107c();
        } while (extraout_w11_00 != 0);
      }
      pqVar18[3] = (qword)&PTR_FUN_009e6138;
      pqVar18[4] = lVar13;
      pqVar18[5] = lVar14;
      func_0x004710cc();
      psVar7 = (section *)auStack_f0;
      func_0x0045e7a8();
      pqStack_e8 = pqStack_218;
      auStack_f0 = (undefined1  [8])pdStack_220;
      pdStack_220 = (dword *)(pqVar18 + 3);
      pqStack_218 = pqVar18;
      func_0x0045e7a8();
      pqVar17 = param_3[1];
      pqStack_278 = param_3[1];
      pqStack_280 = *param_3;
      func_0x00471158();
      plVar16 = (long *)((long)psVar7->sectname + 8);
      *plVar16 = 0;
      psVar7->segname[0] = '\0';
      psVar7->segname[1] = '\0';
      psVar7->segname[2] = '\0';
      psVar7->segname[3] = '\0';
      psVar7->segname[4] = '\0';
      psVar7->segname[5] = '\0';
      psVar7->segname[6] = '\0';
      psVar7->segname[7] = '\0';
      *(undefined ***)psVar7->sectname = &PTR_DAT_009e7508;
      pqVar11 = (qword *)(psVar7->segname + 8);
      *pqVar11 = (qword)&PTR_DAT_009e7558;
      pqVar18 = pqStack_280;
      psVar7->size = (qword)pqStack_278;
      psVar7->addr = (qword)pqVar18;
      if (pqVar17 != (qword *)0x0) {
        do {
          func_0x00471050();
        } while (extraout_w10_04 != 0);
      }
      pqStack_160 = pqVar11;
      psStack_158 = psVar7;
      FUN_0045ddec(auStack_f0,1);
      pqVar18 = pqStack_e0;
      pqStack_e0[1] = 0;
      pqStack_e0[2] = 0;
      *pqStack_e0 = (qword)&PTR_FUN_009e56f8;
      pqStack_1b0 = pqVar11;
      psStack_1a8 = psVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = *plVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      FUN_0045deac(pqVar18 + 3,&pqStack_1b0);
      FUN_0045e4e4(&pqStack_1b0);
      pqStack_168 = pqStack_e0;
      pqStack_e0 = (qword *)0x0;
      pdStack_170 = (dword *)(pqStack_168 + 3);
      FUN_0045e540(auStack_f0);
      FUN_00470560(&uStack_230,&pdStack_170);
      func_0x0045cbec(&pdStack_170);
      FUN_00470f70(&pqStack_160);
      param_1 = (long *)*param_7;
    }
    unaff_x28 = &pdStack_120;
    pdStack_240 = (dword *)0x0;
    pqStack_238 = (qword *)0x0;
    lVar13 = *plStack_260;
    if ((lVar13 != 0) && (param_1 != (long *)0x0)) {
      lVar14 = plStack_260[1];
      pqVar18 = &segment_command_00000020.vmsize;
      __Znwm();
      pqVar18[1] = 0;
      pqVar18[2] = 0;
      *pqVar18 = (qword)&PTR_FUN_009e75e8;
      if (lVar14 != 0) {
        do {
          func_0x00471050();
        } while (extraout_w10_05 != 0);
        param_1 = (long *)*param_7;
      }
      if (param_7[1] != 0) {
        do {
          func_0x0047107c();
        } while (extraout_w11_01 != 0);
      }
      pqVar18[3] = (qword)&PTR_FUN_009e60d0;
      pqVar18[4] = lVar13;
      pqVar18[5] = lVar14;
      func_0x004710cc();
      func_0x0045f4d0(auStack_f0);
      pqStack_e8 = pqStack_238;
      auStack_f0 = (undefined1  [8])pdStack_240;
      pdStack_240 = (dword *)(pqVar18 + 3);
      pqStack_238 = pqVar18;
      func_0x0045f4d0();
    }
    psVar7 = &section_00000108;
    __Znwm();
    plVar15 = (long *)((long)psVar7->sectname + 8);
    *plVar15 = 0;
    psVar7->segname[0] = '\0';
    psVar7->segname[1] = '\0';
    psVar7->segname[2] = '\0';
    psVar7->segname[3] = '\0';
    psVar7->segname[4] = '\0';
    psVar7->segname[5] = '\0';
    psVar7->segname[6] = '\0';
    psVar7->segname[7] = '\0';
    *(undefined ***)psVar7->sectname = &PTR_DAT_009e7638;
    psStack_1a8 = psStack_1e8;
    pqStack_1b0 = pqStack_1f0;
    pqStack_1f0 = (qword *)0x0;
    psStack_1e8 = (section *)0x0;
    psStack_158 = (section *)param_2[1];
    pqStack_160 = (qword *)*param_2;
    *param_2 = (code *)0x0;
    param_2[1] = (code *)0x0;
    param_2 = (code **)&pdStack_120;
    FUN_0046f400(auStack_f0,param_4);
    plVar16 = plStack_268;
    pqVar18 = (qword *)(psVar7->segname + 8);
    uStack_178 = uStack_228;
    uStack_180 = uStack_230;
    pqStack_168 = pqStack_218;
    pdStack_170 = pdStack_220;
    pdStack_220 = (dword *)0x0;
    pqStack_218 = (qword *)0x0;
    uStack_230 = 0;
    uStack_228 = 0;
    pqStack_188 = pqStack_238;
    pdStack_190 = pdStack_240;
    pdStack_240 = (dword *)0x0;
    pqStack_238 = (qword *)0x0;
    uStack_290 = uStack_258;
    param_3 = &pqStack_1b0;
    FUN_0047119c(pqVar18,param_3,&pqStack_160,auStack_f0,&pdStack_170,&uStack_180,&pdStack_190,
                 iStack_254);
    func_0x0045f4d0(&pdStack_190);
    func_0x0045cbec(&uStack_180);
    func_0x0045e7a8(&pdStack_170);
    func_0x00471194();
    func_0x0045a054(&pqStack_160);
    func_0x00471160();
    if ((psVar7->size == 0) || (in_ZR = *(long *)(psVar7->size + 8) == -1, (bool)in_ZR)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = *plVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        pqStack_250 = pqVar18;
        psStack_248 = psVar7;
        pqStack_1b0 = pqVar18;
        psStack_1a8 = psVar7;
      } while (cVar1 != '\0');
      do {
        func_0x0047107c();
      } while (extraout_w11_02 != 0);
      auStack_f0 = (undefined1  [8])psVar7->addr;
      psVar7->addr = (qword)pqVar18;
      psVar7->size = (qword)psVar7;
      pqStack_e8 = extraout_x8_01;
      FUN_00470fec(auStack_f0);
      func_0x00471010(&pqStack_1b0);
    }
    *plVar16 = (long)pqVar18;
    plVar16[1] = (long)psVar7;
    pqStack_250 = (qword *)0x0;
    psStack_248 = (section *)0x0;
    func_0x00471010(&pqStack_250);
    func_0x0045f4d0(&pdStack_240);
    func_0x0045cbec(&uStack_230);
    func_0x0045e7a8(&pdStack_220);
    func_0x0046e140(&pqStack_1f0);
    func_0x0047108c(appcStack_118[0]);
    FUN_0046e11c(&ppcStack_1e0);
    FUN_00470c34(&pqStack_1d0);
    ppqVar8 = &pqStack_1c0;
    FUN_00470be4();
  }
  func_0x004710b8(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_0045e4e4(&pqStack_1b0);
    __ZNSt3__119__shared_weak_countD2Ev(param_1);
    FUN_0045e540(auStack_f0);
    FUN_00470f70(&pqStack_160);
    func_0x0045cbec(&uStack_230);
    func_0x0045e7a8(&pdStack_220);
    func_0x0046e140(&pqStack_1f0);
    (**appcStack_118[0])(unaff_x28 + 1);
    FUN_0046e11c(&ppcStack_1e0);
    FUN_00470c34(&pqStack_1d0);
    ppqVar9 = &pqStack_1c0;
    FUN_00470be4();
    func_0x004710a4();
    pcStack_298 = FUN_00470560;
    pqVar11 = param_3[1];
    pqVar18 = *param_3;
    *param_3 = (qword *)0x0;
    param_3[1] = (qword *)0x0;
    pqStack_2b8 = ppqVar9[1];
    pcStack_2c0 = (code *)*ppqVar9;
    ppcStack_2b0 = param_2;
    ppqStack_2a8 = ppqVar8;
    puStack_2a0 = &stack0xfffffffffffffff0;
    ppqVar9[1] = pqVar11;
    *ppqVar9 = pqVar18;
    func_0x0045cbec(&pcStack_2c0);
    return ppqVar9;
  }
  return ppqVar8;
}



/* Entry: 00470560; end: 0047059b;  */

undefined8 * FUN_00470560(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0045cbec(&uStack_30);
  return param_1;
}



/* Entry: 0047059c; end: 004705ab;  */

void FUN_0047059c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 long param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [80];
  undefined4 uStack_78;
  
  func_0x00427780(param_5);
  plVar5 = *(long **)(param_5 + 0x10);
  iVar2 = *(int *)(param_5 + 0x20);
  func_0x0047112c();
  uStack_78 = 0x27;
  func_0x00471040();
  uVar4 = param_2;
  FUN_004708a8(param_2);
  func_0x004710ac();
  func_0x00471184();
  func_0x00463324(param_4);
  FUN_0045a3ec(uVar4,auStack_c8,param_4);
  FUN_00425cb4(auStack_e0,"AckHedgePolicy");
  pcVar1 = "retry_all_failures";
  if (iVar2 != 1) {
    pcVar1 = "classified";
  }
  FUN_0045a3ec(uVar4,auStack_e0,pcVar1);
  FUN_004708cc();
  func_0x0047117c();
  func_0x00471104();
  func_0x00471124();
  func_0x004710fc();
  func_0x0047118c();
  func_0x00471070(*(undefined8 *)(*plVar5 + 0x18));
  func_0x00471174();
  plVar5 = *(long **)(param_5 + 0x10);
  func_0x0047112c();
  uStack_78 = 0x28;
  func_0x00471040();
  uVar4 = param_2;
  FUN_004708a8(param_2);
  func_0x004710ac();
  func_0x00471184();
  __ZNSt3__19to_stringEi(auStack_e0,*param_3);
  FUN_00470964(uVar4,auStack_c8,auStack_e0);
  FUN_00425cb4(auStack_f8,"FromServer");
  pcVar1 = "true";
  if (*(char *)(param_3 + 0x10) == '\0') {
    pcVar1 = "false";
  }
  FUN_0045a3ec(uVar4,auStack_f8,pcVar1);
  FUN_004708cc();
  func_0x0047117c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  func_0x00471104();
  func_0x00471124();
  func_0x004710fc();
  func_0x0047118c();
  func_0x00471070(*(undefined8 *)(*plVar5 + 0x18));
  func_0x00471174();
  if (*(char *)(param_3 + 0xf) == '\x01') {
    plVar5 = *(long **)(param_5 + 0x10);
    uVar3 = param_3[0xe];
    func_0x0047112c();
    uStack_78 = 0x29;
    func_0x00471040();
    FUN_004708a8(param_2);
    func_0x004710ac();
    func_0x00471184();
    __ZNSt3__19to_stringEi(auStack_e0,uVar3);
    FUN_00470964(param_2,auStack_c8,auStack_e0);
    FUN_004708cc();
    func_0x0047117c();
    func_0x00471104();
    func_0x00471124();
    func_0x004710fc();
    func_0x0047118c();
    func_0x00471070(*(undefined8 *)(*plVar5 + 0x18));
    func_0x00471174();
  }
  return;
}



/* Entry: 004705ac; end: 004708a7;  */

void FUN_004705ac(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 long param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [80];
  undefined4 uStack_68;
  
  plVar5 = *(long **)(param_5 + 0x10);
  iVar2 = *(int *)(param_5 + 0x20);
  func_0x0047112c();
  uStack_68 = 0x27;
  func_0x00471040();
  uVar4 = param_2;
  FUN_004708a8(param_2);
  func_0x004710ac();
  func_0x00471184();
  func_0x00463324(param_4);
  FUN_0045a3ec(uVar4,auStack_b8,param_4);
  FUN_00425cb4(auStack_d0,"AckHedgePolicy");
  pcVar1 = "retry_all_failures";
  if (iVar2 != 1) {
    pcVar1 = "classified";
  }
  FUN_0045a3ec(uVar4,auStack_d0,pcVar1);
  FUN_004708cc();
  func_0x0047117c();
  func_0x00471104();
  func_0x00471124();
  func_0x004710fc();
  func_0x0047118c();
  func_0x00471070(*(undefined8 *)(*plVar5 + 0x18));
  func_0x00471174();
  plVar5 = *(long **)(param_5 + 0x10);
  func_0x0047112c();
  uStack_68 = 0x28;
  func_0x00471040();
  uVar4 = param_2;
  FUN_004708a8(param_2);
  func_0x004710ac();
  func_0x00471184();
  __ZNSt3__19to_stringEi(auStack_d0,*param_3);
  FUN_00470964(uVar4,auStack_b8,auStack_d0);
  FUN_00425cb4(auStack_e8,"FromServer");
  pcVar1 = "true";
  if (*(char *)(param_3 + 0x10) == '\0') {
    pcVar1 = "false";
  }
  FUN_0045a3ec(uVar4,auStack_e8,pcVar1);
  FUN_004708cc();
  func_0x0047117c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x00471104();
  func_0x00471124();
  func_0x004710fc();
  func_0x0047118c();
  func_0x00471070(*(undefined8 *)(*plVar5 + 0x18));
  func_0x00471174();
  if (*(char *)(param_3 + 0xf) == '\x01') {
    plVar5 = *(long **)(param_5 + 0x10);
    uVar3 = param_3[0xe];
    func_0x0047112c();
    uStack_68 = 0x29;
    func_0x00471040();
    FUN_004708a8(param_2);
    func_0x004710ac();
    func_0x00471184();
    __ZNSt3__19to_stringEi(auStack_d0,uVar3);
    FUN_00470964(param_2,auStack_b8,auStack_d0);
    FUN_004708cc();
    func_0x0047117c();
    func_0x00471104();
    func_0x00471124();
    func_0x004710fc();
    func_0x0047118c();
    func_0x00471070(*(undefined8 *)(*plVar5 + 0x18));
    func_0x00471174();
  }
  return;
}



/* Entry: 004708a8; end: 004708cb;  */

char * FUN_004708a8(uint param_1)

{
  if (param_1 < 5) {
    return (&PTR_s_0_009e7678)[param_1];
  }
  return "overflow";
}



/* Entry: 004708cc; end: 00470963;  */

undefined8 FUN_004708cc(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x12) & 0x3fff) < 3) {
    pcVar2 = (&PTR_s_notifrecvresult_00b04d18)[param_2 >> 0x10 & 0xffff];
  }
  else {
    pcVar2 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_38,pcVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x24) {
    pcVar2 = (&PTR_s_ready_00b04d78)[uVar1];
  }
  else {
    pcVar2 = "invalid_dimension_value";
  }
  FUN_0045a3ec(param_1,auStack_38,pcVar2);
  func_0x0047114c();
  return param_1;
}



/* Entry: 00470964; end: 00470997;  */

long FUN_00470964(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0045a4f0(param_1 + 8);
  func_0x0045a4f0(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 00470998; end: 004709e7;  */

void FUN_00470998(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0045addc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004709e8; end: 004709fb;  */

void FUN_004709e8(void)

{
  func_0x00470a08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004709fc; end: 00470a17;  */

long FUN_004709fc(long param_1)

{
  func_0x0046e07c(param_1 + 0x90);
  (*(code *)**(undefined8 **)(param_1 + 0x60))();
  FUN_0046e11c(param_1 + 0x40);
  func_0x0046e140(param_1 + 0x30);
  func_0x0046e164(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 00470a18; end: 00470a2b;  */

void FUN_00470a18(void)

{
  func_0x00470a34();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470a2c; end: 00470a3f;  */

void FUN_00470a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00470a40; end: 00470a63;  */

void FUN_00470a40(long param_1)

{
  func_0x004710f0();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00470a64; end: 00470a67;  */

void FUN_00470a64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7378;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00470a68; end: 00470a7b;  */

void FUN_00470a68(void)

{
  FUN_00470bd8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470a7c; end: 00470a8b;  */

void FUN_00470a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00470a8c; end: 00470aff;  */

void FUN_00470a8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&uStack_58);
  FUN_00470b00(&uStack_58);
  FUN_00470b00(&uStack_70);
  return;
}



/* Entry: 00470b00; end: 00470b6b;  */

undefined8 FUN_00470b00(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00470b2c(&uStack_28);
  return param_1;
}



/* Entry: 00470b6c; end: 00470b73;  */

void FUN_00470b6c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x00470bb0();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 00470b74; end: 00470bd7;  */

void FUN_00470b74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    func_0x00470bb0();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 00470bd8; end: 00470be3;  */

void FUN_00470bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7378;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00470be4; end: 00470c07;  */

void FUN_00470be4(long param_1)

{
  func_0x004710f0();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00470c08; end: 00470c0b;  */

void FUN_00470c08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7418;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00470c0c; end: 00470c1f;  */

void FUN_00470c0c(void)

{
  func_0x00470c28();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470c20; end: 00470c33;  */

void FUN_00470c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00470c34; end: 00470c57;  */

void FUN_00470c34(long param_1)

{
  func_0x004710f0();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00470c58; end: 00470c5b;  */

void FUN_00470c58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7468;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00470c5c; end: 00470c6f;  */

void FUN_00470c5c(void)

{
  func_0x00470c7c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470c70; end: 00470c8b;  */

void FUN_00470c70(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x0045addc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00470c8c; end: 00470c9f;  */

void FUN_00470c8c(void)

{
  func_0x00470ca8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470ca0; end: 00470cb7;  */

void FUN_00470ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00470cb8; end: 00470ccb;  */

void FUN_00470cb8(void)

{
  func_0x00470f64();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470ccc; end: 00470cd7;  */

void FUN_00470ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00470cd8; end: 00470ceb;  */

void FUN_00470cd8(void)

{
  FUN_00470eb8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470cec; end: 00470daf;  */

long * FUN_00470cec(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  long *plVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined **ppuVar9;
  long alStack_148 [2];
  undefined8 uStack_138;
  undefined **ppuStack_130;
  code *pcStack_128;
  code *pcStack_120;
  undefined8 uStack_d8;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_28;
  
  func_0x0047113c();
  plVar6 = *(long **)(param_1 + 8);
  uStack_78 = *param_2;
  lStack_70 = param_2[1];
  if (lStack_70 != 0) {
    plVar1 = (long *)(lStack_70 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcStack_88 = FUN_00470ee4;
  ppuStack_80 = &PTR_DAT_009e75a8;
  uStack_28 = extraout_x8;
  if (lStack_70 != 0) {
    do {
      func_0x00471050();
    } while (extraout_w10 != 0);
  }
  ppcVar8 = &pcStack_88;
  (**(code **)(*plVar6 + 0x10))();
  func_0x00471098(ppuStack_80);
  func_0x0047110c();
  func_0x004710b8(uStack_28);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  func_0x0047110c();
  func_0x004710a4();
  func_0x0047113c();
  ppuVar9 = pppuVar7[1];
  pcVar2 = *ppcVar8;
  pcVar3 = ppcVar8[1];
  uStack_d8 = extraout_x8_00;
  if (pcVar3 != (code *)0x0) {
    do {
      func_0x00471050();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_138 = 0x470f24;
  ppuStack_130 = &PTR_DAT_009e75c0;
  pcStack_128 = pcVar2;
  pcStack_120 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    do {
      func_0x00471050();
    } while (extraout_w10_01 != 0);
  }
  FUN_0064c418(alStack_148,ppuVar9,&uStack_138);
  func_0x0047108c(ppuStack_130);
  plVar6 = alStack_148;
  func_0x004631ec(plVar6);
  func_0x0047110c();
  func_0x004710b8(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0047108c(ppuStack_130);
    func_0x0047110c();
    func_0x004710a4();
    ppuVar9 = &PTR___tlv_bootstrap_00b2c5a0;
    (*(code *)PTR___tlv_bootstrap_00b2c5a0)(plVar6);
    return (long *)(ulong)(*ppuVar9 == *(undefined **)(extraout_x8_01 + 8));
  }
  return plVar6;
}



/* Entry: 00470db0; end: 00470e83;  */

undefined1 * FUN_00470db0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_38;
  
  func_0x0047113c();
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_38 = extraout_x8;
  if (lVar2 != 0) {
    do {
      func_0x00471050();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_98 = 0x470f24;
  ppuStack_90 = &PTR_DAT_009e75c0;
  uStack_88 = uVar1;
  lStack_80 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00471050();
    } while (extraout_w10_00 != 0);
  }
  FUN_0064c418(auStack_a8,uVar5,&uStack_98);
  func_0x0047108c(ppuStack_90);
  puVar3 = auStack_a8;
  func_0x004631ec(puVar3);
  func_0x0047110c();
  func_0x004710b8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0047108c(ppuStack_90);
    func_0x0047110c();
    func_0x004710a4();
    ppuVar4 = &PTR___tlv_bootstrap_00b2c5a0;
    (*(code *)PTR___tlv_bootstrap_00b2c5a0)(puVar3);
    return (undefined1 *)(ulong)(*ppuVar4 == *(undefined **)(extraout_x8_00 + 8));
  }
  return puVar3;
}



/* Entry: 00470e84; end: 00470eb7;  */

bool FUN_00470e84(undefined8 param_1)

{
  undefined **ppuVar1;
  long extraout_x8;
  
  ppuVar1 = &PTR___tlv_bootstrap_00b2c5a0;
  (*(code *)PTR___tlv_bootstrap_00b2c5a0)(param_1);
  return *ppuVar1 == *(undefined **)(extraout_x8 + 8);
}



/* Entry: 00470eb8; end: 00470ee3;  */

undefined8 * FUN_00470eb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009e7558;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 00470ee4; end: 00470f6f;  */

void FUN_00470ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00471120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 00470f70; end: 00470f93;  */

void FUN_00470f70(long param_1)

{
  func_0x004710f0();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00470f94; end: 00470f97;  */

void FUN_00470f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e75e8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00470f98; end: 00470fab;  */

void FUN_00470f98(void)

{
  func_0x00470fb4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470fac; end: 00470fc3;  */

void FUN_00470fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00470fc4; end: 00470fd7;  */

void FUN_00470fc4(void)

{
  func_0x00470fe0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00470fd8; end: 00470feb;  */

void FUN_00470fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00470fec; end: 00471033;  */

void FUN_00470fec(long param_1)

{
  func_0x004710f0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 00471034; end: 0047119b;  */

void FUN_00471034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0047119c; end: 0047123b;  */

undefined8 *
FUN_0047119c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e76b0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_0046eda4(param_1 + 7,param_4);
  uVar1 = *param_5;
  param_1[0x18] = param_5[1];
  param_1[0x17] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0x1a] = param_6[1];
  param_1[0x19] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0x1c] = param_7[1];
  param_1[0x1b] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  *(undefined4 *)(param_1 + 0x1d) = param_8;
  *(undefined4 *)((long)param_1 + 0xec) = param_9;
  return param_1;
}



/* Entry: 0047123c; end: 004712cf;  */

void FUN_0047123c(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  undefined ***pppuVar9;
  dword *pdVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_658 [376];
  undefined1 auStack_4e0 [248];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [32];
  undefined1 auStack_3b0 [32];
  undefined1 auStack_390 [40];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined **ppuStack_338;
  dword *pdStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2d0;
  dword *pdStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  int iStack_148;
  long lStack_140;
  long alStack_138 [6];
  code *pcStack_108;
  undefined **ppuStack_100;
  char *pcStack_f8;
  undefined8 uStack_d8;
  long lStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  func_0x00472a00();
  lStack_68 = *param_3;
  uStack_38 = extraout_x8;
  (**(code **)(param_3[1] + 0x10))(auStack_60,param_3 + 1);
  plVar14 = &lStack_68;
  uVar13 = 0;
  FUN_004712d0();
  func_0x00472a2c(auStack_60[0]);
  func_0x004729b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00472a2c(auStack_60[0]);
  func_0x00472a38();
  lVar12 = param_2;
  func_0x00472a00();
  bVar3 = *(byte *)(lVar12 + 0x17);
  uVar8 = bVar3 == 0;
  uVar17 = *(ulong *)(lVar12 + 8);
  if (-1 < (char)bVar3) {
    uVar17 = (ulong)bVar3;
  }
  uStack_d8 = extraout_x8_00;
  if ((uVar17 == 0) || ((*(byte *)(param_2 + 0x20) & 1) == 0)) {
    plVar16 = *(long **)(param_1 + 0x28);
    func_0x00472bb0(&ppuStack_2d0,uVar13,param_2 + 0x30,*(undefined1 *)(param_2 + 0x48));
    (**(code **)(*plVar16 + 0x18))(plVar16,&ppuStack_2d0);
    FUN_004590f8(&ppuStack_2d0);
    if ((*(byte *)(plVar14[1] + 8) & 1) == 0) {
      func_0x00472a74(*plVar14);
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      func_0x00472b40();
      func_0x00472ba8();
    }
  }
  else {
    uVar17 = *(ulong *)(param_2 + 0xa8);
    iVar15 = (int)uVar13;
    if (((uVar17 >> 0x20 & 1) != 0) && (uVar8 = (uVar17 & 0xffffffff) == 1, !(bool)uVar8)) {
      plVar16 = *(long **)(param_1 + 0x28);
      cVar4 = *(char *)(param_2 + 0x48);
      uVar18 = (ulong)*(uint *)(param_2 + 0x4c);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      pdStack_2c8 = (dword *)0x0;
      ppuStack_2d0 = &PTR_FUN_009e5290;
      uStack_2b0 = 0x30;
      uVar5 = 0x9001c;
      if (iVar15 == 1) {
        uVar5 = 0x9001d;
      }
      uVar2 = 0x9001e;
      if (iVar15 != 2) {
        uVar2 = uVar5;
      }
      pppuVar9 = &ppuStack_2d0;
      FUN_00460b34(pppuVar9,uVar2);
      func_0x00472b9c();
      FUN_00425cb4(&pcStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_320,param_2 + 0x30);
      FUN_00470964(pppuVar9,&pcStack_108,&uStack_320);
      FUN_00425cb4(&ppuStack_338,"AppState");
      func_0x004729d8();
      uVar8 = cVar4 == '\0';
      func_0x00472bd8();
      FUN_00425cb4(auStack_350,"ClientRecvSource");
      FUN_00463650(uVar18);
      func_0x00472bd8();
      FUN_00425cb4(auStack_368,"ErrorType");
      func_0x00479fcc(uVar17);
      FUN_0045a3ec(uVar18,auStack_368,uVar17);
      FUN_00460bd4(auStack_4e0,uVar18);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_368);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_350);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_338);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_320);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_108);
      FUN_004590f8(&ppuStack_2d0);
      (**(code **)(*plVar16 + 0x18))(plVar16,auStack_4e0);
      FUN_004590f8(auStack_4e0);
    }
    FUN_0046de3c(auStack_4e0,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (auStack_3e8,param_1 + 0x38);
    FUN_00463600(auStack_3d0,param_1 + 0x50);
    FUN_00463600(auStack_3b0,param_1 + 0x70);
    FUN_00463600(auStack_390,param_1 + 0x90);
    if ((*(long *)(param_1 + 0xb8) == 0) || (*(long *)(param_1 + 200) == 0)) {
      FUN_0046e188(auStack_658,auStack_4e0);
      lStack_300 = *plVar14;
      func_0x004729ec();
      func_0x00472bcc();
      func_0x004729cc(uStack_2f8);
      FUN_00460acc(auStack_658);
    }
    else {
      ppuStack_2d0 = *(undefined ***)(param_1 + 8);
      pdVar10 = *(dword **)(param_1 + 0x10);
      if ((pdVar10 == (dword *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), pdStack_2c8 = pdVar10, pdVar10 == (dword *)0x0))
      goto LAB_00471718;
      FUN_0046e188(&uStack_2c0,auStack_4e0);
      lStack_140 = *plVar14;
      iStack_148 = iVar15;
      (**(code **)(plVar14[1] + 0x10))(alStack_138,plVar14 + 1);
      pdVar10 = &segment_command_00000020.nsects;
      __Znwm();
      plVar14 = (long *)(pdVar10 + 2);
      *plVar14 = 0;
      *(undefined8 *)(pdVar10 + 4) = 0;
      *(undefined ***)pdVar10 = &PTR_FUN_009e7758;
      pcStack_108 = FUN_004721c8;
      ppuStack_100 = &PTR_FUN_009e7798;
      pcVar11 = section_000001a8.segname + 8;
      __Znwm();
      ppuVar1 = (undefined **)(pdVar10 + 6);
      *(dword **)(pcVar11 + 8) = pdStack_2c8;
      *(undefined ***)pcVar11 = ppuStack_2d0;
      pdStack_2c8 = (dword *)0x0;
      ppuStack_2d0 = (undefined **)0x0;
      FUN_0046e188(pcVar11 + 0x10,&uStack_2c0);
      *(int *)(pcVar11 + 0x188) = iStack_148;
      *(long *)(pcVar11 + 400) = lStack_140;
      (**(code **)(alStack_138[0] + 0x10))(pcVar11 + 0x198,alStack_138);
      uStack_318 = *(undefined8 *)(param_1 + 0xd0);
      uStack_320 = *(undefined8 *)(param_1 + 200);
      pcStack_f8 = pcVar11;
      if (*(long *)(param_1 + 0xd0) != 0) {
        do {
          func_0x00472aa8();
        } while (extraout_w10 != 0);
      }
      FUN_00472bf4(ppuVar1,&pcStack_108,&uStack_320);
      func_0x0045cbec(&uStack_320);
      (*(code *)*ppuStack_100)(&ppuStack_100);
      ppuStack_338 = ppuVar1;
      pdStack_330 = pdVar10;
      func_0x004722b0(0);
      FUN_00471c60(&ppuStack_2d0);
      uVar13 = *(undefined8 *)(param_1 + 0xb8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuStack_2d0 = ppuVar1;
      pdStack_2c8 = pdVar10;
      func_0x00472b40(uVar13);
      (*extraout_x8_01)();
      FUN_00464f28(&ppuStack_2d0);
      FUN_004722bc(&ppuStack_338);
    }
    FUN_00460acc(auStack_4e0);
  }
  func_0x004729b8(uStack_d8);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_00471718:
  FUN_0045a0e4();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x471720);
  (*pcVar7)();
}



/* Entry: 004712d0; end: 004717ff;  */

void FUN_004712d0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined ***pppuVar9;
  dword *pdVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_5e8 [376];
  undefined1 auStack_470 [248];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [32];
  undefined1 auStack_340 [32];
  undefined1 auStack_320 [40];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined **ppuStack_2c8;
  dword *pdStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_260;
  dword *pdStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  int iStack_d8;
  long lStack_d0;
  long alStack_c8 [6];
  code *pcStack_98;
  undefined **ppuStack_90;
  char *pcStack_88;
  undefined8 uStack_68;
  
  lVar13 = param_2;
  func_0x00472a00();
  bVar3 = *(byte *)(lVar13 + 0x17);
  uVar8 = bVar3 == 0;
  uVar16 = *(ulong *)(lVar13 + 8);
  if (-1 < (char)bVar3) {
    uVar16 = (ulong)bVar3;
  }
  uStack_68 = extraout_x8;
  if ((uVar16 == 0) || ((*(byte *)(param_2 + 0x20) & 1) == 0)) {
    plVar15 = *(long **)(param_1 + 0x28);
    func_0x00472bb0(&ppuStack_260,param_3,param_2 + 0x30,*(undefined1 *)(param_2 + 0x48));
    (**(code **)(*plVar15 + 0x18))(plVar15,&ppuStack_260);
    FUN_004590f8(&ppuStack_260);
    if ((*(byte *)(param_4[1] + 8) & 1) == 0) {
      func_0x00472a74(*param_4);
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      func_0x00472b40();
      func_0x00472ba8();
    }
  }
  else {
    uVar16 = *(ulong *)(param_2 + 0xa8);
    iVar14 = (int)param_3;
    if (((uVar16 >> 0x20 & 1) != 0) && (uVar8 = (uVar16 & 0xffffffff) == 1, !(bool)uVar8)) {
      plVar15 = *(long **)(param_1 + 0x28);
      cVar4 = *(char *)(param_2 + 0x48);
      uVar17 = (ulong)*(uint *)(param_2 + 0x4c);
      uStack_250 = 0;
      uStack_248 = 0;
      pdStack_258 = (dword *)0x0;
      ppuStack_260 = &PTR_FUN_009e5290;
      uStack_240 = 0x30;
      uVar5 = 0x9001c;
      if (iVar14 == 1) {
        uVar5 = 0x9001d;
      }
      uVar2 = 0x9001e;
      if (iVar14 != 2) {
        uVar2 = uVar5;
      }
      pppuVar9 = &ppuStack_260;
      FUN_00460b34(pppuVar9,uVar2);
      func_0x00472b9c();
      FUN_00425cb4(&pcStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_2b0,param_2 + 0x30);
      FUN_00470964(pppuVar9,&pcStack_98,&uStack_2b0);
      FUN_00425cb4(&ppuStack_2c8,"AppState");
      func_0x004729d8();
      uVar8 = cVar4 == '\0';
      func_0x00472bd8();
      FUN_00425cb4(auStack_2e0,"ClientRecvSource");
      FUN_00463650(uVar17);
      func_0x00472bd8();
      FUN_00425cb4(auStack_2f8,"ErrorType");
      func_0x00479fcc(uVar16);
      FUN_0045a3ec(uVar17,auStack_2f8,uVar16);
      FUN_00460bd4(auStack_470,uVar17);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_2c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_98);
      FUN_004590f8(&ppuStack_260);
      (**(code **)(*plVar15 + 0x18))(plVar15,auStack_470);
      FUN_004590f8(auStack_470);
    }
    FUN_0046de3c(auStack_470,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (auStack_378,param_1 + 0x38);
    FUN_00463600(auStack_360,param_1 + 0x50);
    FUN_00463600(auStack_340,param_1 + 0x70);
    FUN_00463600(auStack_320,param_1 + 0x90);
    if ((*(long *)(param_1 + 0xb8) == 0) || (*(long *)(param_1 + 200) == 0)) {
      FUN_0046e188(auStack_5e8,auStack_470);
      lStack_290 = *param_4;
      func_0x004729ec();
      func_0x00472bcc();
      func_0x004729cc(uStack_288);
      FUN_00460acc(auStack_5e8);
    }
    else {
      ppuStack_260 = *(undefined ***)(param_1 + 8);
      pdVar10 = *(dword **)(param_1 + 0x10);
      if ((pdVar10 == (dword *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), pdStack_258 = pdVar10, pdVar10 == (dword *)0x0))
      goto LAB_00471718;
      FUN_0046e188(&uStack_250,auStack_470);
      lStack_d0 = *param_4;
      iStack_d8 = iVar14;
      (**(code **)(param_4[1] + 0x10))(alStack_c8,param_4 + 1);
      pdVar10 = &segment_command_00000020.nsects;
      __Znwm();
      plVar15 = (long *)(pdVar10 + 2);
      *plVar15 = 0;
      *(undefined8 *)(pdVar10 + 4) = 0;
      *(undefined ***)pdVar10 = &PTR_FUN_009e7758;
      pcStack_98 = FUN_004721c8;
      ppuStack_90 = &PTR_FUN_009e7798;
      pcVar11 = section_000001a8.segname + 8;
      __Znwm();
      ppuVar1 = (undefined **)(pdVar10 + 6);
      *(dword **)(pcVar11 + 8) = pdStack_258;
      *(undefined ***)pcVar11 = ppuStack_260;
      pdStack_258 = (dword *)0x0;
      ppuStack_260 = (undefined **)0x0;
      FUN_0046e188(pcVar11 + 0x10,&uStack_250);
      *(int *)(pcVar11 + 0x188) = iStack_d8;
      *(long *)(pcVar11 + 400) = lStack_d0;
      (**(code **)(alStack_c8[0] + 0x10))(pcVar11 + 0x198,alStack_c8);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2b0 = *(undefined8 *)(param_1 + 200);
      pcStack_88 = pcVar11;
      if (*(long *)(param_1 + 0xd0) != 0) {
        do {
          func_0x00472aa8();
        } while (extraout_w10 != 0);
      }
      FUN_00472bf4(ppuVar1,&pcStack_98,&uStack_2b0);
      func_0x0045cbec(&uStack_2b0);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      ppuStack_2c8 = ppuVar1;
      pdStack_2c0 = pdVar10;
      func_0x004722b0(0);
      FUN_00471c60(&ppuStack_260);
      uVar12 = *(undefined8 *)(param_1 + 0xb8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuStack_260 = ppuVar1;
      pdStack_258 = pdVar10;
      func_0x00472b40(uVar12);
      (*extraout_x8_00)();
      FUN_00464f28(&ppuStack_260);
      FUN_004722bc(&ppuStack_2c8);
    }
    FUN_00460acc(auStack_470);
  }
  func_0x004729b8(uStack_68);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_00471718:
  FUN_0045a0e4();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x471720);
  (*pcVar7)();
}



/* Entry: 00471800; end: 004718ef;  */

void FUN_00471800(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x00472a00();
  uStack_38 = extraout_x8;
  if ((*(byte *)(lVar4 + 0xb0) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x28);
    lVar4 = param_2 + 0x30;
    func_0x00472bb0(auStack_90,1,lVar4);
    func_0x00472bc0(*(undefined8 *)(*plVar5 + 0x18));
    func_0x00472a98();
    if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
      func_0x00472a74(*param_3);
    }
    param_1 = *(long *)(param_1 + 0xd8);
    if (param_1 != 0) {
      func_0x00472b40();
      lVar4 = 1;
      func_0x00472ba8();
    }
  }
  else {
    uStack_68 = *param_3;
    func_0x004729ec();
    lVar4 = 1;
    FUN_004712d0(param_1,param_2,1);
    func_0x004729cc(uStack_60);
  }
  func_0x004729b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00472a98();
  func_0x00472a38();
  puVar3 = auStack_1e0;
  iVar2 = 0xa0020;
  if (param_5 == 4) {
    iVar2 = 0xa0021;
  }
  iVar1 = 0xa001f;
  if (param_5 != 0) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0xa0020) {
    FUN_00425cb4(auStack_198,(&PTR_s_Success_009e7720)[param_5]);
    func_0x00472a40();
    FUN_00460b34(auStack_108);
    FUN_004720c0();
    func_0x00472b9c();
    FUN_00425cb4(auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_138,lVar4);
    func_0x00472bb8();
    func_0x00472b74();
    puVar3 = auStack_150;
    FUN_00425cb4(puVar3);
    func_0x004729d8();
    func_0x00472aa0();
    FUN_00425cb4(auStack_168,"Error");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_180,auStack_198);
    FUN_00470964(puVar3,auStack_168,auStack_180);
    FUN_00460bd4(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x00472b6c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
  }
  else {
    func_0x00472a40();
    FUN_00460b34(auStack_108);
    FUN_004720c0();
    func_0x00472b9c();
    FUN_00425cb4(auStack_1b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8,lVar4);
    func_0x00472bb8();
    func_0x00472b74();
    FUN_00425cb4(auStack_1e0);
    func_0x004729d8();
    func_0x00472aa0();
    FUN_00460bd4(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    func_0x00472b6c();
  }
  return;
}



/* Entry: 004718f0; end: 00471b6f;  */

void FUN_004718f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  puVar3 = auStack_150;
  iVar2 = 0xa0020;
  if (param_5 == 4) {
    iVar2 = 0xa0021;
  }
  iVar1 = 0xa001f;
  if (param_5 != 0) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0xa0020) {
    FUN_00425cb4(auStack_108,(&PTR_s_Success_009e7720)[param_5]);
    func_0x00472a40();
    FUN_00460b34(auStack_78);
    FUN_004720c0();
    func_0x00472b9c();
    FUN_00425cb4(auStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8,param_3);
    func_0x00472bb8();
    func_0x00472b74();
    puVar3 = auStack_c0;
    FUN_00425cb4(puVar3);
    func_0x004729d8();
    func_0x00472aa0();
    FUN_00425cb4(auStack_d8,"Error");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f0,auStack_108)
    ;
    FUN_00470964(puVar3,auStack_d8,auStack_f0);
    FUN_00460bd4(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    func_0x00472b6c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  }
  else {
    func_0x00472a40();
    FUN_00460b34(auStack_78);
    FUN_004720c0();
    func_0x00472b9c();
    FUN_00425cb4(auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_138,param_3);
    func_0x00472bb8();
    func_0x00472b74();
    FUN_00425cb4(auStack_150);
    func_0x004729d8();
    func_0x00472aa0();
    FUN_00460bd4(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x00472b6c();
  }
  return;
}



/* Entry: 00471b70; end: 00471c5f;  */

long FUN_00471b70(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long *plVar2;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00472a00();
  uStack_38 = extraout_x8;
  if ((*(byte *)(lVar1 + 0xb1) & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    func_0x00472bb0(auStack_90,2,param_2 + 0x30,*(undefined1 *)(param_2 + 0x48));
    func_0x00472bc0(*(undefined8 *)(*plVar2 + 0x18));
    func_0x00472a98();
    if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
      func_0x00472a74(*param_3);
    }
    param_1 = *(long *)(param_1 + 0xd8);
    if (param_1 != 0) {
      func_0x00472b40();
      func_0x00472ba8();
    }
  }
  else {
    uStack_68 = *param_3;
    func_0x004729ec();
    FUN_004712d0(param_1,param_2,2,&uStack_68);
    func_0x004729cc(uStack_60);
  }
  func_0x004729b8(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00472a98();
  func_0x00472a38();
  (*(code *)**(undefined8 **)(lVar1 + 0x198))(lVar1 + 0x198);
  FUN_00460acc(lVar1 + 0x10);
  func_0x004710f0();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 00471c60; end: 00471c97;  */

undefined8 FUN_00471c60(long param_1)

{
  undefined8 unaff_x19;
  
  (*(code *)**(undefined8 **)(param_1 + 0x198))(param_1 + 0x198);
  FUN_00460acc(param_1 + 0x10);
  func_0x004710f0();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 00471c98; end: 00472063;  */

undefined8 * FUN_00471c98(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  dword *pdVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int iVar13;
  long *plVar14;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined **ppuStack_190;
  undefined8 uStack_188;
  char *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined2 uStack_13e;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  long alStack_108 [6];
  code *pcStack_d8;
  undefined **ppuStack_d0;
  dword *pdStack_c8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1;
  func_0x00472a00();
  uStack_78 = extraout_x8;
  FUN_0045a1e8();
  iVar6 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00472b40();
  (*extraout_x8_00)();
  plVar14 = *(long **)(param_1 + 0x28);
  pcStack_180 = (char *)0x0;
  uStack_178 = 0;
  ppuStack_190 = &PTR_FUN_009e5290;
  uStack_188 = 0;
  uStack_170 = CONCAT44(uStack_170._4_4_,0x25);
  iVar13 = (int)param_3;
  uVar2 = 0x9001c;
  if (iVar13 == 1) {
    uVar2 = 0x9001d;
  }
  uVar1 = 0x9001e;
  if (iVar13 != 2) {
    uVar1 = uVar2;
  }
  pppuVar8 = &ppuStack_190;
  FUN_00460b34(pppuVar8,uVar1);
  func_0x00472b9c();
  FUN_00425cb4(auStack_1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_1c0,param_2 + 0x30);
  FUN_00470964(pppuVar8,auStack_1a8,auStack_1c0);
  puVar9 = auStack_1d8;
  FUN_00425cb4(puVar9,"AppState");
  func_0x004729d8();
  func_0x00472bd8();
  uVar5 = iVar6 == 0;
  FUN_004708cc();
  FUN_00460bd4(&iStack_200,puVar9);
  func_0x00472b5c();
  func_0x00472b64();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
  FUN_004590f8(&ppuStack_190);
  (**(code **)(*plVar14 + 0x18))(plVar14,&iStack_200);
  func_0x00472a98();
  plVar14 = *(long **)(param_1 + 0x18);
  uStack_1fc = *(undefined4 *)(param_1 + 0xe8);
  uVar3 = (undefined1)iVar6;
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  iStack_200 = iVar13;
  uStack_1f8 = uVar3;
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x00472aa8();
    } while (extraout_w10 != 0);
  }
  pcStack_a8 = FUN_004722e8;
  ppuStack_a0 = &PTR_FUN_009e77b0;
  uStack_98 = CONCAT44(uStack_1fc,iStack_200);
  uStack_90 = uStack_1f8;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0x10);
  ppuStack_190 = *(undefined ***)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00472aa8();
    } while (extraout_w10_00 != 0);
  }
  pcStack_180 = "doSend";
  uStack_178 = CONCAT44(uStack_178._4_4_,iVar13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_170,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_158,param_2 + 0x30);
  uStack_140 = *(undefined1 *)(param_2 + 0x48);
  uStack_13c = *(undefined4 *)(param_1 + 0xec);
  uStack_130 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = *(undefined8 *)(param_1 + 0x28);
  uStack_13f = uVar3;
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x00472aa8();
    } while (extraout_w10_01 != 0);
  }
  uStack_128 = 0;
  uStack_118 = 1;
  uStack_110 = *param_4;
  lStack_120 = lVar7;
  (**(code **)(param_4[1] + 0x10))(alStack_108,param_4 + 1);
  pcStack_d8 = FUN_00472478;
  ppuStack_d0 = &PTR_FUN_009e77c8;
  pdVar10 = &section_00000068.reserved2;
  __Znwm();
  uVar4 = uStack_148;
  *(undefined8 *)(pdVar10 + 2) = uStack_188;
  *(undefined ***)pdVar10 = ppuStack_190;
  ppuStack_190 = (undefined **)0x0;
  uStack_188 = 0;
  *(char **)(pdVar10 + 4) = pcStack_180;
  pdVar10[6] = (undefined4)uStack_178;
  *(undefined8 *)(pdVar10 + 10) = uStack_168;
  *(undefined8 *)(pdVar10 + 8) = uStack_170;
  *(undefined8 *)(pdVar10 + 0xc) = uStack_160;
  uStack_170 = 0;
  uStack_168 = 0;
  *(undefined8 *)(pdVar10 + 0x10) = uStack_150;
  *(undefined8 *)(pdVar10 + 0xe) = uStack_158;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  *(undefined8 *)(pdVar10 + 0x12) = uVar4;
  *(ulong *)(pdVar10 + 0x14) =
       CONCAT44(uStack_13c,CONCAT22(uStack_13e,CONCAT11(uStack_13f,uStack_140)));
  *(undefined8 *)(pdVar10 + 0x18) = uStack_130;
  *(undefined8 *)(pdVar10 + 0x16) = uStack_138;
  uStack_138 = 0;
  uStack_130 = 0;
  *(long *)(pdVar10 + 0x1c) = lStack_120;
  *(undefined8 *)(pdVar10 + 0x1a) = uStack_128;
  *(ulong *)(pdVar10 + 0x1e) = CONCAT71(uStack_117,uStack_118);
  *(undefined8 *)(pdVar10 + 0x20) = uStack_110;
  (**(code **)(alStack_108[0] + 0x10))(pdVar10 + 0x22,alStack_108);
  pdStack_c8 = pdVar10;
  (**(code **)(*plVar14 + 0x10))(plVar14,param_2,param_3,&pcStack_a8,&pcStack_d8);
  func_0x004729cc(ppuStack_d0);
  FUN_00472064(&ppuStack_190);
  func_0x00472b08();
  puVar11 = &uStack_1f0;
  func_0x0045a054();
  func_0x004729b8(uStack_78);
  if ((bool)uVar5) {
    return puVar11;
  }
  ___stack_chk_fail();
  func_0x004729cc(ppuStack_d0);
  FUN_00472064(&ppuStack_190);
  func_0x00472b08();
  puVar12 = &uStack_1f0;
  func_0x0045a054();
  func_0x00472a38();
  (**(code **)puVar12[0x11])();
  func_0x0045a054(puVar12 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12 + 7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12 + 4);
  func_0x004710f0();
  if (puVar12 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar11;
}



/* Entry: 00472064; end: 004720a7;  */

undefined8 FUN_00472064(long param_1)

{
  undefined8 unaff_x19;
  
  (*(code *)**(undefined8 **)(param_1 + 0x88))();
  func_0x0045a054(param_1 + 0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x004710f0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 004720a8; end: 004720ab;  */

undefined8 * FUN_004720a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e76b0;
  func_0x0045f4d0(param_1 + 0x1b);
  func_0x0045cbec(param_1 + 0x19);
  func_0x0045e7a8(param_1 + 0x17);
  FUN_0046eff8(param_1 + 7);
  func_0x0045a054(param_1 + 5);
  func_0x0046e140(param_1 + 3);
  FUN_00470fec(param_1 + 1);
  return param_1;
}



/* Entry: 004720ac; end: 004720bf;  */

void FUN_004720ac(void)

{
  FUN_00472138();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004720c0; end: 00472137;  */

undefined8 FUN_004720c0(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  undefined1 auStack_38 [24];
  
  FUN_00425cb4(auStack_38,PTR_s_ackoutcome_00b04d68);
  if ((param_2 & 0x3f) < 0x24) {
    pcVar1 = (&PTR_s_ready_00b04d78)[param_2 & 0x3f];
  }
  else {
    pcVar1 = "invalid_dimension_value";
  }
  FUN_0045a3ec(param_1,auStack_38,pcVar1);
  func_0x00472be0();
  return param_1;
}



/* Entry: 00472138; end: 0047219f;  */

undefined8 * FUN_00472138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e76b0;
  func_0x0045f4d0(param_1 + 0x1b);
  func_0x0045cbec(param_1 + 0x19);
  func_0x0045e7a8(param_1 + 0x17);
  FUN_0046eff8(param_1 + 7);
  func_0x0045a054(param_1 + 5);
  func_0x0046e140(param_1 + 3);
  FUN_00470fec(param_1 + 1);
  return param_1;
}


